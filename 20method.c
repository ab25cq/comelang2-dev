#include "common.h"

struct sCurrentNode {
    int sline;
    string sname;
};

sCurrentNode*% sCurrentNode*::initialize(sCurrentNode*% self, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);
    
    return self;
}

int sCurrentNode*::sline(sCurrentNode* self, sInfo* info)
{
    return self.sline;
}

string sCurrentNode*::sname(sCurrentNode* self, sInfo* info)
{
    return string(self.sname);
}

bool sCurrentNode*::terminated()
{
    return false;
}

string sCurrentNode*::kind()
{
    return string("sCurrentNode");
}

bool sCurrentNode*::compile(sCurrentNode* self, sInfo* info)
{
    info->current_stack_num++;
    string class_name = xsprintf("__current_stack%d__", info->current_stack_num);
    sClass*% current_stack = new sClass(name: class_name, struct_:true);
    
    tuple2<string, sType*%>*% result_kind = (s"__method_block_result_kind__", new sType("int"));
    current_stack.mFields.push_back(clone result_kind);
    
    tuple2<string, sType*%>*% return_value = (s"__method_block_return_value__", new sType("void*"));
    current_stack.mFields.push_back(clone return_value);
        
    sVarTable* vtable = info->lv_table;
    
    while(vtable) {
        foreach(it, vtable.mVars) {
            char* key = it;
            sVar* value = vtable.mVars[key];
            
            sType*% type2 = clone value.mType;
            
            type2.mPointerNum++;
            
            tuple2<string, sType*%>*% item = (string(value.mCValueName), type2);
            
            if(value.mCValueName != null) {
                if(strcmp(value.mCValueName, "__list_values") == 0)
                {
                }
                else if(strcmp(value.mCValueName, "__map_keys") == 0)
                {
                }
                else if(strcmp(value.mCValueName, "__map_element") == 0)
                {
                }
                else if(value.mType.mClass.mName === "va_list" || value.mType.mClass.mName === "__builtin_va_list") 
                {
                }
                else if(type2->mArrayNum.length() == 1) {
                    sType*% type3 = clone type2;
                    type3->mArrayNum.reset();
                    type3->mPointerNum++;
                    tuple2<string, sType*%>*% item2 = (string(value.mCValueName), type3);
                    current_stack.mFields.push_back(clone item2);
                }
                else {
                    current_stack.mFields.push_back(clone item);
                }
            }
        }
        
        vtable = vtable->mParent;
    }
    
    output_struct(current_stack, info);
    
    info.classes.insert(class_name, current_stack);
    
    static int num_current_stack = 0;
    num_current_stack++;
    add_come_code_at_function_head(info, "struct %s __current_stack%d__;\n", class_name, num_current_stack);
    add_come_code_at_function_head2(info, "memset(&__current_stack%d__, 0, sizeof(struct %s));\n", num_current_stack, class_name);
    
    vtable = info->lv_table;
    
    while(vtable) {
        foreach(it, vtable.mVars) {
            char* key = it;
            sVar* value = vtable.mVars[key];
            
            sType*% type2 = clone value.mType;
            
            tuple2<string, sType*%>*% item = (value.mCValueName, type2);
            
            if(value.mCValueName != null) {
                if(strcmp(value.mCValueName, "__list_values") == 0)
                {
                }
                else if(strcmp(value.mCValueName, "__map_keys") == 0)
                {
                }
                else if(strcmp(value.mCValueName, "__map_element") == 0)
                {
                }
                else if(value.mType.mClass.mName === "va_list" || value.mType.mClass.mName === "__builtin_va_list") 
                {
                }
                else {
                    if(type2->mClass->mName === "lambda") {
                        add_come_code(info, "__current_stack%d__.%s = %s;\n", num_current_stack, value.mCValueName, value.mCValueName);
                    }
                    else {
                        add_come_code(info, "__current_stack%d__.%s = &%s;\n", num_current_stack, value.mCValueName, value.mCValueName);
                    }
                }
            }
        }
        
        vtable = vtable->mParent;
    }
    
    CVALUE*% come_value = new CVALUE;
    
    come_value.c_value = xsprintf("&__current_stack%d__", num_current_stack);
    come_value.type = new sType(class_name);
    come_value.var = null;
    
    add_come_last_code(info, "%s;\n", come_value.c_value);
    
    info.stack.push_back(come_value);
    
    info.num_current_stack = num_current_stack;
    
    return true;
}

struct sMethodCallNode {
    sNode*% obj;
    string fun_name;
    list<tuple2<string,sNode*%>*%>*% params;
    buffer*% method_block;
    int sline;
    string sname;
    int method_block_sline;
};

sMethodCallNode*% sMethodCallNode*::initialize(sMethodCallNode*% self, char* fun_name,sNode*% obj, list<tuple2<string,sNode*%>*%>*% params, buffer* method_block, int method_block_sline , sInfo* info)
{
    self.obj = clone obj;
    self.fun_name = string(fun_name);
    self.params = clone params;
    self.method_block = clone method_block;
    self.sline = info.sline;
    self.sname = string(info.sname);
    self.method_block_sline = method_block_sline;
    
    return self;
}

int sMethodCallNode*::sline(sMethodCallNode* self, sInfo* info)
{
    return self.sline;
}

string sMethodCallNode*::sname(sMethodCallNode* self, sInfo* info)
{
    return string(self.sname);
}

string make_generics_function(sType* type, string fun_name, sInfo* info)
{
/*
    sType*% obj_type = solve_generics(type, info.generics_type, info);
*/
    
    string none_generics_name = get_none_generics_name(type.mClass.mName);
    string fun_name2 = create_method_name(type, false@no_pointer_name, fun_name, info);
    string fun_name3 = xsprintf("%s_%s", none_generics_name, fun_name);
    
    sGenericsFun* generics_fun = info.generics_funcs.at(fun_name3, null);
    
    if(generics_fun) {
        if(!create_generics_fun(string(fun_name2), generics_fun, type, info)) {
            err_msg(info, "%s not found", fun_name3);
            return string("");
        }
    }
    
    return fun_name2;
}

bool sMethodCallNode*::terminated(sMethodCallNode* self)
{
    if(self.method_block) {
        return true;
    }
    else {
        return false;
    }
}

string sMethodCallNode*::kind()
{
    return string("sMethodCallNode");
}

bool sMethodCallNode*::compile(sMethodCallNode* self, sInfo* info)
{
    char* fun_name = self.fun_name;
    list<tuple2<string,sNode*%>*%>* params = self.params;
    sNode* obj = self.obj;
    buffer* method_block = self.method_block;
    int method_block_sline = self.method_block_sline;
    
    if(!node_compile(obj)) {
        return false;
    }
    
    CVALUE*% obj_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
/*
    sType*% obj_type = solve_generics(obj_value.type, info.generics_type, info);
*/
    sType*% obj_type = clone obj_value.type;
    
    sClass* klass = obj_type.mClass;
    
    bool calling_dynamic_method = false;
    sType* lambda_type = null;
    foreach(it, klass.mFields) {
        var field_name, field_type = it;
        
        if(field_name === fun_name && field_type.mClass.mName === "lambda") {
            calling_dynamic_method = true;
            lambda_type = field_type;
            break;
        }
    }
    
    if(calling_dynamic_method) {
        sType*% result_type = clone lambda_type->mResultType.v1;
        result_type->mStatic = false;
        
        list<CVALUE*%>*% come_params = new list<CVALUE*%>();
        
        int i = 0;
        foreach(it, params) {
            var label, node = it;
            
            if(i == 0) {
                come_params.push_back(obj_value);
                i++;
            }
            else {
                if(!node_compile(node)) {
                    return false;
                }
                
                CVALUE*% come_value = get_value_from_stack(-1, info);
                
                check_assign_type(s"\{fun_name} param num \{i} is assinged to", lambda_type.mParamTypes[i-1], come_value.type, come_value);
                if(lambda_type.mParamTypes[i-1].mHeap && come_value.type.mHeap) 
                {
                    std_move(lambda_type.mParamTypes[i-1], come_value.type, come_value);
                }
                
                come_params.push_back(come_value);
                
                i++;
                dec_stack_ptr(1, info);
            }
        }
        
        buffer*% buf = new buffer();
        
        buf.append_str(xsprintf("%s->%s", obj_value.c_value, fun_name));
        buf.append_str("(");
        
        int j = 0;
        foreach(it, come_params) {
            if(j == 0) {
                it.c_value = xsprintf("%s->_protocol_obj", it.c_value);
            }
            buf.append_str(it.c_value);
            
            if(j != come_params.length()-1) {
                buf.append_str(",");
            }
            
            j++;
        }
        buf.append_str(")");
        
        CVALUE*% come_value2 = new CVALUE;
        
        come_value2.c_value = buf.to_string();
        
        sType*% result_type2 = solve_generics(result_type, info.generics_type, info);
        
        if(result_type2->mHeap) {
            come_value2.c_value = append_object_to_right_values(buf.to_string(), result_type2, info);
        }
        
        come_value2.type = clone result_type2;
        come_value2.type->mStatic = false;
        come_value2.var = null;
        
        add_come_last_code(info, "%s;\n", come_value2.c_value);
        
        info.stack.push_back(come_value2);
    }
    else {
        string generics_fun_name = make_generics_function(obj_type, string(fun_name), info).to_string();
        
        sFun* fun = null;
        
        for(int i=FUN_VERSION_MAX; i>=1; i--) {
            string new_fun_name = xsprintf("%s_v%d", generics_fun_name, i);
        
            fun = info.funcs[new_fun_name];
            
            if(fun != null) {
                generics_fun_name = string(new_fun_name);
                break;
            }
        }
        
        if(fun == null) {
            fun = info.funcs.at(generics_fun_name, null);
        
            if(fun == null) {
                generics_fun_name = create_method_name(obj_type, false@no_pointer_name, string(fun_name), info);
                
                fun = info.funcs.at(generics_fun_name, null);
                
                if(fun == null) {
                    err_msg(info, "function not found(%s) at method(%s)(Z)\n", generics_fun_name, info.come_fun.mName);
                    return true;
                }
            }
        }
        
        sType*% result_type = clone fun->mResultType;
        result_type->mStatic = false;
        
        sType*% result_type2 = solve_generics(result_type, info.generics_type, info);
        
        list<sType*%>*% param_types = new list<sType*%>();
        foreach(it, fun.mParamTypes) {
            if(it == null) {
                param_types.push_back(it);
            }
            else {
                sType*% it2 = solve_generics(it, info.generics_type, info);
                
                param_types.push_back(clone it2);
            }
        }
        
        list<CVALUE*%>*% come_params = new list<CVALUE*%>();

        map<string,CVALUE*%>*% label_params = new map<string,CVALUE*%>();
        
        int i = 0;
        foreach(it, params) {
            var label, node = it;
            
            if(i == 0) {
                check_assign_type(s"\{fun_name} param num \{i} is assinged to", param_types[i], obj_value.type, obj_value);
                if(param_types[i].mHeap && obj_value.type.mHeap) {
                    std_move(param_types[i], obj_value.type, obj_value);
                }
                else if(param_types[i].mHeap && !obj_value.type.mHeap) {
                    err_msg(info, "require heap parametor(%s)", fun.mParamNames[i]);
                    exit(2);
                }
                come_params.push_back(obj_value);
                
                i++;
            }
            else {
                if(!node_compile(node)) {
                    return false;
                }
                
                CVALUE*% come_value = get_value_from_stack(-1, info);
                
                if(label != null) {
                    int n = 0;
                    foreach(it, fun.mParamNames) {
                        if(label === it) {
                            break;
                        }
                        
                        n++;
                    }
                    
                    if(param_types[n]) {
                        check_assign_type(s"\{fun_name} param num \{i} is assinged to", param_types[n], come_value.type, come_value);
                    }
                    if(param_types[n] && param_types[n].mHeap && come_value.type.mHeap) {
                        std_move(param_types[n], come_value.type, come_value);
                    }
                }
                else {
                    if(param_types[i]) {
                        check_assign_type(s"\{fun_name} param num \{i} is assinged to", param_types[i], come_value.type, come_value);
                    }
                    if(param_types[i] && param_types[i].mHeap && come_value.type.mHeap) {
                        std_move(param_types[i], come_value.type, come_value);
                    }
                }
                
                if(label == null) {
                    come_params.push_back(come_value);
                    
                    i++;
                }
                else {
                    label_params.insert(string(label), come_value);
                }
                dec_stack_ptr(1, info);
            }
        }
        
        if(params.length() < fun.mParamTypes.length()+(method_block?-2:0))
        {
            for(; i<fun.mParamTypes.length()+(method_block?-2:0); i++) {
                string default_param = clone fun.mParamDefaultParametors[i];
                //string default_param = clone fun.mParamDefaultParametors[i].value();
                char* param_name = fun.mParamNames[i];
                //char* param_name = fun.mParamNames[i].value();
                
                CVALUE* come_value = label_params[param_name];
                //CVALUE* come_value = label_params[param_name].value();
                
                if(default_param && default_param !== "") {
                    buffer*% source = info.source;
                    char* p = info.p;
                    char* head = info.head;
                    int sline = info.sline;
                    
                    info.source = default_param.to_buffer();
                    info.p = info.source.buf;
                    info.head = info.source.buf;
                    
                    sNode*% node = expression();
                    
                    if(!node_compile(node)) {
                        return false;
                    }
                    
                    info.source = source;
                    info.p = p;
                    info.head = head;
                    info.sline = sline;
            
                    CVALUE*% come_value = get_value_from_stack(-1, info);
                    if(param_types[i]) {
                        check_assign_type(s"\{fun_name} param num \{i} is assinged to", param_types[i], come_value.type, come_value);
                    }
                    if(param_types[i] && param_types[i].mHeap && come_value.type.mHeap) {
                        std_move(param_types[i], come_value.type, come_value);
                    }
                    come_params.push_back(come_value);
                    dec_stack_ptr(1, info);
                }
                else {
                    if(come_value) {
                        come_params.push_back(null);
                    }
                    else {
                        err_msg(info, "require parametor(%s)", fun.mName);
                        return false;
                    }
                }
            }
        }
        if(label_params.length() > 0) {
            for(i=0; i<fun.mParamNames.length()+(method_block?-2:0); i++) {
                char* param_name = fun.mParamNames[i];
                //char* param_name = fun.mParamNames[i].value();
                
                CVALUE* come_value = label_params[param_name];
                
                if(come_value) {
                    come_params.replace(i, clone come_value);
                }
            }
        }
        
        if(method_block) {
            sNode*% current_stack_frame_node = new sCurrentNode(info) implements sNode;
            
            if(!node_compile(current_stack_frame_node)) {
                return false;
            }
            
            CVALUE*% come_value = get_value_from_stack(-1, info);
            come_params.push_back(come_value);
            dec_stack_ptr(1, info);
            
            buffer*% method_block2 = new buffer();
            sType*% method_block_type = clone fun.mParamTypes[-1];
            
            string class_name = xsprintf("__current_stack%d__", info->current_stack_num);
            
            method_block_type.mParamTypes[0].mClass = info.classes[class_name];
            sClass* current_stack_frame_struct = info.current_stack_frame_struct;
            info->current_stack_frame_struct = info.classes[class_name];
            
            info->num_method_block++;
            
            if(method_block_type.mClass.mName !== "lambda") {
                err_msg(info, "This function does not have method block(%s)", fun_name);
                return false;
            }
            
            sType*% result_type = clone method_block_type->mResultType.v1;
            result_type->mStatic = false;
            list<sType*%>* param_types = method_block_type->mParamTypes;
            list<string>* param_names = method_block_type->mParamNames;
            
            buffer*% all_alhabet_sname = new buffer();
            {
                char* p = info->sname;
                while(*p) {
                    if(xisalnum(*p)) {
                        all_alhabet_sname.append_char(*p++);
                    }
                    else {
                        p++;
                    }
                }
            }
            
            method_block2.append_str(xsprintf("%s method_block%d_%s(", make_type_name_string(result_type)!, info->num_method_block, all_alhabet_sname.to_string()));
            
            int i = 0;
            foreach(it, param_types) {
                sType* param_type = it;
                if(i == 0) {
                    string param_name = xsprintf("parent");
                    
                    method_block2.append_str(xsprintf("%s", make_define_var(param_type, param_name)));
                }
                else if(i == 1) {
                    string param_name = xsprintf("it");
                    
                    method_block2.append_str(xsprintf("%s", make_define_var(param_type, param_name)));
                }
                else {
                    string param_name = xsprintf("it%d", i);
                    
                    method_block2.append_str(xsprintf("%s", make_define_var(param_type, param_name)));
                }
                
                if(i != param_types.length() - 1) {
                    method_block2.append_str(",");
                }
                
                i++;
            }
            method_block2.append_str(")\n");
            
            method_block2.append_str(method_block.to_string());
            
            buffer*% source3 = info.source;
            char* p = info.p;
            char* head = info.head;
            int sline = info.sline;
            //sVarTable* lv_table = info.lv_table;
            
            info.source = method_block2;
            info.p = info.source.buf;
            info.head = info.source.buf;
            info.sline = method_block_sline;
            //sVarTable*% lv_table_method_block = new sVarTable(global:false, parent:null);
           
            sNode*% node = parse_function(info);
            
            if(!node_compile(node)) {
                return false;
            }
            
            char*% method_block_name = xsprintf("method_block%d_%s", info->num_method_block, all_alhabet_sname.to_string());
            
            CVALUE*% come_value2 = new CVALUE;
            
            sFun* fun2 = info.funcs.at(method_block_name, null);
            
            if(fun2 == null) {
                err_msg(info, "method block function not found(%s)", method_block_name);
                return true;
            }
            
            sType* method_block_type2 = fun2.mLambdaType;
            
            come_value2.c_value = xsprintf("(void*)%s", method_block_name);
            come_value2.type = clone method_block_type2;
            come_value2.var = null;
            
            come_params.push_back(come_value2);
            
            info.source = source3;
            info.p = p;
            info.head = head;
            info.sline = sline;
            
            info->current_stack_frame_struct = current_stack_frame_struct;
        }
        
        buffer*% buf = new buffer();
        
        buf.append_str(generics_fun_name);
        buf.append_str("(");
        
        int j = 0;
        foreach(it, come_params) {
            buf.append_str(it.c_value);
            
            if(j != come_params.length()-1) {
                buf.append_str(",");
            }
            
            j++;
        }
        buf.append_str(")");
        
        
        CVALUE*% come_value2 = new CVALUE;
        
        come_value2.c_value = buf.to_string();
        come_value2.type = clone result_type2;
        come_value2.type->mStatic = false;
        come_value2.var = null;
        
        if(result_type2->mHeap) {
            come_value2.c_value = append_object_to_right_values(come_value2.c_value, result_type2, info);
        }
        
        come_value2.c_value = append_exception_value(come_value2.c_value, come_value2.type, info);
        
        add_come_last_code(info, "%s;\n", come_value2.c_value);
        
        info.stack.push_back(come_value2);
        
        if(method_block) {
            string var_name = xsprintf("__current_stack%d__", info.num_current_stack);
            
            sType*% result_type = clone info.come_fun.mResultType;
            
            sType*% result_type2 = solve_generics(result_type, info.generics_type, info);
            
            sType* result_type3 = result_type2->mNoSolvedGenericsType.v1;
            if(result_type2->mNoSolvedGenericsType.v1) {
                result_type3 = result_type2->mNoSolvedGenericsType.v1;
            }
            else {
                result_type3 = result_type2;
            }
                
            if(info.in_loop) {
                if(result_type3->mClass->mName === "void" && result_type3->mPointerNum == 0) {
                    add_come_last_code3(info, """
                        if(\{var_name}.__method_block_result_kind__ == METHOD_BLOCK_RESULT_KIND_BREAK)
                        {
                            break;
                        }
                        else if(\{var_name}.__method_block_result_kind__ == METHOD_BLOCK_RESULT_KIND_CONTINUE)
                        {
                            continue;
                        }
                        else if(\{var_name}.__method_block_result_kind__ == METHOD_BLOCK_RESULT_KIND_RETURN_VOID)
                        {
                            return;
                        }
                        """);
                }
                else {
                    add_come_last_code3(info, """
                        if(\{var_name}.__method_block_result_kind__ == METHOD_BLOCK_RESULT_KIND_BREAK)
                        {
                            break;
                        }
                        else if(\{var_name}.__method_block_result_kind__ == METHOD_BLOCK_RESULT_KIND_CONTINUE)
                        {
                            continue;
                        }
                        else if(\{var_name}.__method_block_result_kind__ == METHOD_BLOCK_RESULT_KIND_RETURN)
                        {
                            return (\{make_type_name_string(result_type2)})\{var_name}.__method_block_return_value__;
                        }
                        """);
                }
            }
            else if(result_type3->mClass->mName === "void" && result_type3->mPointerNum == 0) {
                add_come_last_code3(info, """
                    if(\{var_name}.__method_block_result_kind__ == METHOD_BLOCK_RESULT_KIND_RETURN_VOID)
                    {
                        return;
                    }
                    """);
            }
            else {
                add_come_last_code3(info, """
                    if(\{var_name}.__method_block_result_kind__ == METHOD_BLOCK_RESULT_KIND_RETURN)
                    {
                        return (\{make_type_name_string(result_type2)})\{var_name}.__method_block_return_value__;
                    }
                    """);
            }
        }
    }
    
    return true;
}

sNode*% parse_method_call(sNode*% obj, string fun_name, sInfo* info) version 20
{
    list<tuple2<string,sNode*%>*%>*% params = new list<tuple2<string,sNode*%>*%>();
    params.push_back(new tuple2<string,sNode*%>(null,clone obj));
    
    if(*info->p == '-' && *(info->p+1) == '>') {
        info->p +=2;
        skip_spaces_and_lf();
    }
    
    if(*info->p != '{') {
        expected_next_character('(');
        
        while(true) {
            if(*info->p == ')') {
                info->p++;
                skip_spaces_and_lf();
                break;
            }
            
            char* p = info.p;
            int sline = info.sline;
            
            bool err_flag = false;
            string label = string("");
            if(xisalpha(*info->p) || *info->p == '_') {
                label = parse_word();
                err_flag = true;
            };
            
            if(err_flag == true && *info->p == ':') {
                info->p++;
                skip_spaces_and_lf();
            }
            else {
                label = null;
                
                info->p = p;
                info->sline = sline;
            }
            
            bool no_comma = info.no_comma;
            info.no_comma = true;
            
            sNode*% node = expression();
            
            node = post_position_operator3(node, info);
            
            info.no_comma = no_comma;
            
            params.push_back(new tuple2<string,sNode*%>(label, node));
            
            if(*info->p == ',') {
                info->p++;
                skip_spaces_and_lf();
            }
            else if(*info->p == ')') {
                info->p++;
                skip_spaces_and_lf();
                break;
            }
        }
    }
    
    parse_sharp();
    
    buffer*% method_block = null;
    int method_block_sline = 0;
    if(*info->p == '{') {
        char* head = info.p;
        method_block_sline = info.sline;
        
        skip_block(info);
        
        char* tail = info.p;
        
        method_block = new buffer();
        
        int len = tail - head;
        char*% mem = new char[len+1];
        memcpy(mem, head, len);
        mem[len] = '\0';
        
        method_block.append_str(mem);
        method_block.append_str("\n");
    }
    
    parse_sharp();
    
    sNode*% node = new sMethodCallNode(fun_name, clone obj, clone params, method_block, method_block_sline, info) implements sNode;
    node = exception_get_value(node, info)
    
    return node;
}

sNode*% string_node(char* buf, char* head, int head_sline, sInfo* info) version 20
{
    if(buf === "__current__") {
        return some(new sCurrentNode(info) implements sNode);
    }
    
    sNode*% result = inherit(buf, head, head_sline, info).catch {
        return! none(null);
    }
    
    return some(result);
}


sNode*% post_position_operator3(sNode*% node, sInfo* info) version 20
{
    
    return inherit(node, info);
}
