#include "common.h"
#include <limits.h>

struct sStrNode
{
    string value;
    int sline;
    string sname;
};

sStrNode*% sStrNode*::initialize(sStrNode*% self, string value, int sline, sInfo* info)
{
    self.value = string(value);
    
    self.sline = sline;
    self.sname = string(info->sname);
    
    return self;
}

bool sStrNode*::terminated()
{
    return false;
}

static string double_quoted_string(char* str)
{
    buffer*% buf = new buffer();
    char* p = str;
    while(*p) {
        if(*p == '"') {
            p++;
            
            buf.append_char('\\');
            buf.append_char('"');
        }
        else {
            buf.append_char(*p);
            p++;
        }
    }
    
    return buf.to_string();
}

string sStrNode*::kind()
{
    return string("sStrNode");
}

bool sStrNode*::compile(sStrNode* self, sInfo* info)
{
    CVALUE*% come_value = new CVALUE;
    
    come_value.c_value = xsprintf("\"%s\"", self.value);
    come_value.type = new sType("char*");
    //come_value.type.mConstant = true;
    come_value.var = null;
    
    info.stack.push_back(come_value);

    add_come_last_code(info, "%s;\n", come_value.c_value);
    
    return true;
}

int sStrNode*::sline(sStrNode* self, sInfo* info)
{
    return self.sline;
}

string sStrNode*::sname(sStrNode* self, sInfo* info)
{
    return string(self.sname);
}

struct sSStringNode
{
    string value;
    list<sNode*%>*% exps;
    
    int sline;
    string sname;
};

sSStringNode*% sSStringNode*::initialize(sSStringNode*% self, string value, list<sNode*%>*% exps, int sline, sInfo* info)
{
    self.value = string(value);
    self.exps = clone exps;
    
    self.sline = sline;
    self.sname = string(info->sname);
    
    return self;
}

bool sSStringNode*::terminated()
{
    return false;
}

string sSStringNode*::kind()
{
    return string("sSStringNode");
}

bool sSStringNode*::compile(sSStringNode* self, sInfo* info)
{
    CVALUE*% come_value = new CVALUE;
    
    buffer*% buf = new buffer();
    
    buf.append_str("xsprintf(\"");
    buf.append_str(self.value);
    buf.append_str("\"");
    
    if(self.exps.length() > 0) {
        foreach(it, self.exps) {
            if(!node_compile(it)) {
                return false;
            }
            
            CVALUE*% come_value = get_value_from_stack(-1, info);
            dec_stack_ptr(1, info);
            
            string method_name = create_method_name(come_value.type, false@no_pointer_name, "to_string", info);
            
            if(info.funcs.at(method_name, null) == null) {
                sType* obj_type = come_value.type.mNoSolvedGenericsType.v1;
                if(obj_type && obj_type.mGenericsTypes.length() > 0) {
                    sType* obj_type2 = come_value.type;
                    method_name = make_generics_function(obj_type2, string("to_string"), info);
                }
                else {
                    err_msg(info, "require to_string implementation(%s)", come_value.type.mClass.mName);
                    exit(1);
                }
            }
            
            var buf2 = new buffer();
            
            buf2.append_str(method_name);
            buf2.append_str("(");
            buf2.append_str(come_value.c_value);
            buf2.append_str(")");
            
            sType*% type = new sType("char*");
            type->mHeap = true;
            
            string c_value =  append_object_to_right_values(buf2.to_string(), type, info);
            
            buf.append_str(",");
            buf.append_str(c_value);
        }
    }
    
    buf.append_str(")");
    
    sType*% type2 = new sType("char*");
    type2->mHeap = true;
    
    come_value.c_value = buf.to_string();
    come_value.c_value = append_object_to_right_values(come_value.c_value, type2,info);
    come_value.type = clone type2;
    come_value.var = null;
    
    info.stack.push_back(come_value);
    
    add_come_last_code(info, "%s;\n", come_value.c_value);
    
    return true;
}

int sSStringNode*::sline(sSStringNode* self, sInfo* info)
{
    return self.sline;
}

string sSStringNode*::sname(sSStringNode* self, sInfo* info)
{
    return string(self.sname);
}

struct sCharNode
{
    int value;
    int sline;
    string sname;
};

sCharNode*% sCharNode*::initialize(sCharNode*% self, int value, sInfo* info)
{
    self.value = value;
    
    self.sline = info->sline;
    self.sname = string(info->sname);
    
    return self;
}

bool sCharNode*::terminated()
{
    return false;
}

string sCharNode*::kind()
{
    return string("sCharNode");
}

bool sCharNode*::compile(sCharNode* self, sInfo* info)
{
    CVALUE*% come_value = new CVALUE;
    
    come_value.c_value = xsprintf("%d", self.value);
    come_value.type = new sType("char");
    come_value.var = null;
    
    info.stack.push_back(come_value);
    
    add_come_last_code(info, "%s;\n", come_value.c_value);
    
    return true;
}

int sCharNode*::sline(sCharNode* self, sInfo* info)
{
    return self.sline;
}

string sCharNode*::sname(sCharNode* self, sInfo* info)
{
    return string(self.sname);
}

struct sWCharNode
{
    wchar_t value;
    int sline;
    string sname;
};

sWCharNode*% sWCharNode*::initialize(sWCharNode*% self, wchar_t value, sInfo* info)
{
    self.value = value;
    
    self.sline = info->sline;
    self.sname = string(info->sname);
    
    return self;
}

bool sWCharNode*::terminated()
{
    return false;
}

string sWCharNode*::kind()
{
    return string("sWCharNode");
}

bool sWCharNode*::compile(sWCharNode* self, sInfo* info)
{
    CVALUE*% come_value = new CVALUE;
    
    come_value.c_value = xsprintf("L'%lc'", self.value);
    come_value.type = new sType("wchar_t");
    come_value.var = null;
    
    info.stack.push_back(come_value);
    
    add_come_last_code(info, "%s;\n", come_value.c_value);
    
    return true;
}

int sWCharNode*::sline(sWCharNode* self, sInfo* info)
{
    return self.sline;
}

string sWCharNode*::sname(sWCharNode* self, sInfo* info)
{
    return string(self.sname);
}

struct sWStringNode
{
    wchar_t*% value;
    int sline;
    string sname;
};

sWStringNode*% sWStringNode*::initialize(sWStringNode*% self, wchar_t*% value, int sline, sInfo* info)
{
    self.value = value;
    
    self.sline = sline;
    self.sname = string(info->sname);
    
    return self;
}

bool sWStringNode*::terminated()
{
    return false;
}

string sWStringNode*::kind()
{
    return string("sWStringNode");
}

bool sWStringNode*::compile(sWStringNode* self, sInfo* info)
{
    CVALUE*% come_value = new CVALUE;
    
    come_value.c_value = xsprintf("L'%ls'", self.value);
    come_value.type = new sType("wchar_t*");
    come_value.var = null;
    
    info.stack.push_back(come_value);
    
    add_come_last_code(info, "%s;\n", come_value.c_value);
    
    return true;
}

int sWStringNode*::sline(sWStringNode* self, sInfo* info)
{
    return self.sline;
}

string sWStringNode*::sname(sWStringNode* self, sInfo* info)
{
    return string(self.sname);
}

struct sRegexNode
{
    string str;
    bool global;
    bool ignore_case;
    
    int sline;
    string sname;
};

sRegexNode*% sRegexNode*::initialize(sRegexNode*% self, string str, bool global, bool ignore_case, int sline, sInfo* info)
{
    self.str = string(str);
    self.global = global;
    self.ignore_case = ignore_case;
    
    self.sline = sline;
    self.sname = string(info->sname);
    
    return self;
}

bool sRegexNode*::terminated()
{
    return false;
}

string sRegexNode*::kind()
{
    return string("sRegexNode");
}

bool sRegexNode*::compile(sRegexNode* self, sInfo* info)
{
    CVALUE*% come_value = new CVALUE;
    
    come_value.c_value = xsprintf("charp_to_regex(\"%s\", %s, 0, %s, 0, 0, 0, 0, 0)", self.str, self.ignore_case ? string("1"):string("0"), self.global ? string("1"):string("0"));
    come_value.type = new sType("come_regex");
    come_value.type->mPointerNum = 1;
    come_value.type.mHeap = true;
    come_value.var = null;
    
    info.stack.push_back(come_value);
    
    add_come_last_code(info, "%s;\n", come_value.c_value);
    
    come_value.c_value = append_object_to_right_values(come_value.c_value, come_value.type, info);
    
    return true;
}

int sRegexNode*::sline(sRegexNode* self, sInfo* info)
{
    return self.sline;
}

string sRegexNode*::sname(sRegexNode* self, sInfo* info)
{
    return string(self.sname);
}

struct sListNode
{
    list<sNode*%>*% list_elements;
    int sline;
    string sname;
};

sListNode*% sListNode*::initialize(sListNode*% self, list<sNode*%>*% list_elements, sInfo* info)
{
    self.list_elements = list_elements;
    
    self.sline = info.sline;
    self.sname = string(info->sname);
    
    return self;
}

bool sListNode*::terminated()
{
    return false;
}

string sListNode*::kind()
{
    return string("sListNode");
}

bool sListNode*::compile(sListNode* self, sInfo* info)
{
    list<sNode*%>* list_elements = self.list_elements;
    
    list<CVALUE*%>*% params = new list<CVALUE*%>();
    sType*% list_element_type;
    
    foreach(it, list_elements) {
        if(!node_compile(it)) {
            return false;
        }
        
        CVALUE*% come_value = get_value_from_stack(-1, info);
        dec_stack_ptr(1, info);
        
        params.push_back(come_value);
        
        list_element_type = clone come_value.type;
    }
    
    sType*% type_values = clone list_element_type;
    type_values.mArrayNum.push_back(create_int_node(params.length(), info));
    type_values->mHeap = false;
    
    static int list_value_num = 0;
    string var_name = xsprintf("__list_values%d__", ++list_value_num);
    
    add_variable_to_table(var_name, clone type_values, info);
    
    sVar* var_ = get_variable_from_table(info.lv_table, var_name);
    
    add_come_code_at_function_head(info, "%s;\n", make_define_var(type_values, var_->mCValueName));
    
    buffer*% source = new buffer();
    
    source.append_str("{");
    
    int i = 0;
    foreach(it, params) {
        if(list_element_type->mHeap) {
            source.append_str(xsprintf("%s[%d]=come_increment_ref_count(%s);\n", var_->mCValueName, i, params[i].c_value));
        }
        else {
            source.append_str(xsprintf("%s[%d]=%s;\n", var_->mCValueName, i, params[i].c_value));
        }
        i++;
    }
    
    source.append_str("}");
    
    add_come_code(info, "%s", source.to_string());
    
    sType*% list_type = new sType("list");
    list_type->mGenericsTypes.push_back(clone list_element_type);
    
    sType*% obj_type = clone list_type;
    char* fun_name = "initialize_with_values";
    
    string generics_fun_name = make_generics_function(obj_type, string(fun_name), info).to_string();
    
    sFun* fun = info.funcs.at(generics_fun_name, null);
    
    if(fun == null) {
        generics_fun_name = create_method_name(obj_type, false@no_pointer_name, string(fun_name), info);
        
        fun = info.funcs.at(generics_fun_name, null);
        
        if(fun == null) {
            err_msg(info, "function not found(%s) at method(%s)(1)\n", generics_fun_name, info.come_fun.mName);
            return true;
        }
    }
        
    sType*% result_type = clone fun->mResultType;
    result_type->mStatic = false;
    
    sType* type = list_type;
    
    CVALUE*% obj_value = new CVALUE;
    
    buffer*% num_string = new buffer();
    
    num_string.append_str("1");
    
    sType*% type2 = solve_generics(type, type, info);
    
    string type_name = make_type_name_string(type2, array_cast_pointer:true)!;
    
    obj_value.c_value = xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d)", type_name, type_name, num_string.to_string(), info.sname, info.sline);
    
    sType*% type3 = clone type2;
    type3->mPointerNum++;
    type3->mHeap = true;
    type2->mHeap = true;
    obj_value.type = clone type2;
    obj_value.c_value = append_object_to_right_values(obj_value.c_value, type3 ,info);
    obj_value.type->mPointerNum ++;
    obj_value.var = null;
        
    list<CVALUE*%>*% come_params = new list<CVALUE*%>();
    
    if(fun.mParamTypes[0].mHeap && obj_value.type.mHeap) {
        std_move(fun.mParamTypes[0], obj_value.type, obj_value);
    }
    come_params.push_back(obj_value);
    
    CVALUE*% come_value2 = new CVALUE;
    
    come_value2.c_value = xsprintf("%d", params.length());
    come_value2.type = null; // no required
    come_value2.var = null;
    
    come_params.push_back(come_value2);
    
    CVALUE*% come_value3 = new CVALUE;
    
    come_value3.c_value = xsprintf("%s", var_->mCValueName);
    come_value3.type = null; // no required
    come_value3.var = null;
    
    come_params.push_back(come_value3);
    
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
    
    CVALUE*% come_value4 = new CVALUE;
    
    come_value4.c_value = buf.to_string();
    
    if(result_type->mHeap) {
        come_value4.c_value = append_object_to_right_values(buf.to_string(), result_type, info);
    }
    
    come_value4.type = clone result_type;
    come_value4.type->mStatic = false;
    come_value4.var = null;
    
    add_come_last_code(info, "%s;\n", buf.to_string());
    
    info.stack.push_back(come_value4);
    
    return true;
}

int sListNode*::sline(sListNode* self, sInfo* info)
{
    return self.sline;
}

string sListNode*::sname(sListNode* self, sInfo* info)
{
    return string(self.sname);
}

struct sTupleNode
{
    list<sNode*%>*% tuple_elements;
    int sline;
    string sname;
};

sTupleNode*% sTupleNode*::initialize(sTupleNode*% self, list<sNode*%>*% tuple_elements, sInfo* info)
{
    self.tuple_elements = tuple_elements;
    
    self.sline = info.sline;
    self.sname = string(info->sname);
    
    return self;
}

bool sTupleNode*::terminated()
{
    return false;
}

string sTupleNode*::kind()
{
    return string("sTupleNode");
}

bool sTupleNode*::compile(sTupleNode* self, sInfo* info)
{
    list<sNode*%>* tuple_elements = self.tuple_elements;
    list<sType*%>*% tuple_types = new list<sType*%>();
    list<CVALUE*%>*% tuple_values = new list<CVALUE*%>();
    
    foreach(it, tuple_elements) {
        if(!node_compile(it)) {
            return false;
        }
        
        CVALUE*% come_value = get_value_from_stack(-1, info);
        dec_stack_ptr(1, info);
        
        tuple_values.push_back(clone come_value);
        tuple_types.push_back(clone come_value.type);
    }
    
    sType*% type = new sType(xsprintf("tuple%d", tuple_types.length()));
    
    foreach(it, tuple_types) {
        type->mGenericsTypes.push_back(clone it);
    }
    
    CVALUE*% obj_value = new CVALUE;
    
    buffer*% num_string = new buffer();
    
    num_string.append_str("1");
    
    sType*% type2 = solve_generics(type, type, info);
    
    string type_name = make_type_name_string(type2, array_cast_pointer:true)!;
    
    obj_value.c_value = xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d)", type_name, type_name, num_string.to_string(), info.sname, info.sline);
    
    sType*% type3 = clone type2;
    type3->mPointerNum++;
    type3->mHeap = true;
    type2->mHeap = true;
    obj_value.type = clone type2;
    obj_value.c_value = append_object_to_right_values(obj_value.c_value, type3 ,info);
    obj_value.type->mPointerNum ++;
    obj_value.var = null;
    
    sType*% obj_type = clone type2;
    char* fun_name = "initialize";
    
    string generics_fun_name = make_generics_function(obj_type, string(fun_name), info).to_string();
    
    sFun* fun = info.funcs.at(generics_fun_name, null);
    
    if(fun == null) {
        generics_fun_name = create_method_name(obj_type, false@no_pointer_name, string(fun_name), info);
        
        fun = info.funcs.at(generics_fun_name, null);
        
        if(fun == null) {
            err_msg(info, "function not found(%s) at method(%s)(2)\n", generics_fun_name, info.come_fun.mName);
            return true;
        }
    }
        
    sType*% result_type = clone fun->mResultType;
    result_type->mStatic = false;
        
    list<CVALUE*%>*% come_params = new list<CVALUE*%>();
    
    if(fun.mParamTypes[0].mHeap && obj_value.type.mHeap) {
        std_move(fun.mParamTypes[0], obj_value.type, obj_value);
    }
    come_params.push_back(obj_value);

    int i = 1;
    foreach(it, tuple_values) {
        CVALUE*% come_value = clone it;
        
        if(fun.mParamTypes[i] && fun.mParamTypes[i].mHeap && come_value.type.mHeap) {
            std_move(fun.mParamTypes[i], come_value.type, come_value);
        }
        come_params.push_back(come_value);
        
        i++;
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
    
    if(result_type->mHeap) {
        come_value2.c_value = append_object_to_right_values(buf.to_string(), result_type, info);
    }
    
    come_value2.type = clone result_type;
    come_value2.type->mStatic = false;
    come_value2.var = null;
    
    add_come_last_code(info, "%s;\n", buf.to_string());
    
    info.stack.push_back(come_value2);
    
    return true;
}

int sTupleNode*::sline(sTupleNode* self, sInfo* info)
{
    return self.sline;
}

string sTupleNode*::sname(sTupleNode* self, sInfo* info)
{
    return string(self.sname);
}

struct sNoneNode
{
    sNode*% value;
    int sline;
    string sname;
};

sNoneNode*% sNoneNode*::initialize(sNoneNode*% self, sNode*% value, sInfo* info)
{
    self.value = clone value;
    
    self.sline = info.sline;
    self.sname = string(info->sname);
    
    return self;
}

sNode*% create_none_object(sNode*% exp, sInfo* info)
{
    return new sNoneNode(exp, info) implements sNode;
}

bool sNoneNode*::terminated()
{
    return false;
}

string sNoneNode*::kind()
{
    return string("sNoneNode");
}

bool sNoneNode*::compile(sNoneNode* self, sInfo* info)
{
    list<sType*%>*% tuple_types = new list<sType*%>();
    list<CVALUE*%>*% tuple_values = new list<CVALUE*%>();
    
    if(!node_compile(self.value)) {
        return false;
    }
    
    CVALUE*% come_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    if(come_value.type.mNoSolvedGenericsType && come_value.type.mNoSolvedGenericsType.v1 && come_value.type.mNoSolvedGenericsType.v1.mClass.mName === "optional") {
        info.stack.add(come_value);
    }
    else {
        tuple_values.push_back(clone come_value);
        tuple_types.push_back(clone come_value.type);
        
        sNode*% false_node = create_false_object(info);
        
        if(!node_compile(false_node)) {
            return false;
        }
        
        CVALUE*% come_value2 = get_value_from_stack(-1, info);
        dec_stack_ptr(1, info);
        
        tuple_values.push_back(clone come_value2);
        tuple_types.push_back(clone come_value2.type);
        
        sType*% type = new sType("optional");
        
        foreach(it, tuple_types) {
            type->mGenericsTypes.push_back(clone it);
        }
        
        CVALUE*% obj_value = new CVALUE;
        
        buffer*% num_string = new buffer();
        
        num_string.append_str("1");
        
        sType*% type2 = solve_generics(type, type, info);
        
        string type_name = make_type_name_string(type2, array_cast_pointer:true)!;
        
        obj_value.c_value = xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d)", type_name, type_name, num_string.to_string(), info.sname, info.sline);
        
        sType*% type3 = clone type2;
        type3->mPointerNum++;
        type3->mHeap = true;
        type2->mHeap = true;
        obj_value.type = clone type;
        obj_value.c_value = append_object_to_right_values(obj_value.c_value, type3 ,info);
        obj_value.type->mPointerNum ++;
        obj_value.var = null;
        
        sType*% obj_type = clone type2;
        char* fun_name = "initialize";
        
        string generics_fun_name = make_generics_function(obj_type, string(fun_name), info).to_string();
        
        sFun* fun = info.funcs.at(generics_fun_name, null);
        
        if(fun == null) {
            generics_fun_name = create_method_name(obj_type, false@no_pointer_name, string(fun_name), info);
            
            fun = info.funcs.at(generics_fun_name, null);
            
            if(fun == null) {
                err_msg(info, "function not found(%s) at method(%s)(2)\n", generics_fun_name, info.come_fun.mName);
                return true;
            }
        }
            
        sType*% result_type = clone fun->mResultType;
        result_type->mStatic = false;
            
        list<CVALUE*%>*% come_params = new list<CVALUE*%>();
        
        if(fun.mParamTypes[0].mHeap && obj_value.type.mHeap) {
            std_move(fun.mParamTypes[0], obj_value.type, obj_value);
        }
        come_params.push_back(obj_value);
    
        int i = 1;
        foreach(it, tuple_values) {
            CVALUE*% come_value = clone it;
            
            if(fun.mParamTypes[i] && fun.mParamTypes[i].mHeap && come_value.type.mHeap) {
                std_move(fun.mParamTypes[i], come_value.type, come_value);
            }
            come_params.push_back(come_value);
            
            i++;
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
        
        CVALUE*% come_value3 = new CVALUE;
        
        come_value3.c_value = buf.to_string();
        
        if(result_type->mHeap) {
            come_value3.c_value = append_object_to_right_values(buf.to_string(), result_type, info);
        }
        
        if(gComeDebug) {
            come_value3.c_value = s"(come_save_stackframe(\"\{info->sname}\", \{info->sline}), \{come_value3.c_value})"
        }
        
        come_value3.type = clone result_type;
        come_value3.type->mStatic = false;
        come_value3.var = null;
        
        add_come_last_code(info, "%s;\n", come_value3.c_value);
        //add_come_last_code(info, "%s;\n", buf.to_string());
        
        info.stack.push_back(come_value3);
    }
    
    return true;
}

int sNoneNode*::sline(sNoneNode* self, sInfo* info)
{
    return self.sline;
}

string sNoneNode*::sname(sNoneNode* self, sInfo* info)
{
    return string(self.sname);
}

struct sSomeNode
{
    sNode*% value;
    int sline;
    string sname;
};

sSomeNode*% sSomeNode*::initialize(sSomeNode*% self, sNode*% value, sInfo* info)
{
    self.value = value;
    
    self.sline = info.sline;
    self.sname = string(info->sname);
    
    return self;
}

sNode*% create_some_object(sNode*% exp, sInfo* info)
{
    return new sSomeNode(exp, info) implements sNode;
}

bool sSomeNode*::terminated()
{
    return false;
}

string sSomeNode*::kind()
{
    return string("sSomeNode");
}

bool sSomeNode*::compile(sSomeNode* self, sInfo* info)
{
    list<sType*%>*% tuple_types = new list<sType*%>();
    list<CVALUE*%>*% tuple_values = new list<CVALUE*%>();
    
    if(!node_compile(self.value)) {
        return false;
    }
    
    CVALUE*% come_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    if(come_value.type.mNoSolvedGenericsType && come_value.type.mNoSolvedGenericsType.v1 && come_value.type.mNoSolvedGenericsType.v1.mClass.mName === "optional") {
        info.stack.add(come_value);
    }
    else {
        tuple1<sType*%>*% mNoSolvedGenericsType;
        
        tuple_values.push_back(clone come_value);
        tuple_types.push_back(clone come_value.type);
        
        sNode*% true_node = create_true_object(info);
        
        if(!node_compile(true_node)) {
            return false;
        }
        
        CVALUE*% come_value2 = get_value_from_stack(-1, info);
        dec_stack_ptr(1, info);
        
        tuple_values.push_back(clone come_value2);
        tuple_types.push_back(clone come_value2.type);
        
        sType*% type = new sType("optional");
        
        foreach(it, tuple_types) {
            type->mGenericsTypes.push_back(clone it);
        }
        
        CVALUE*% obj_value = new CVALUE;
        
        buffer*% num_string = new buffer();
        
        num_string.append_str("1");
        
        sType*% type2 = solve_generics(type, type, info);
        
        string type_name = make_type_name_string(type2, array_cast_pointer:true)!;
        
        obj_value.c_value = xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d)", type_name, type_name, num_string.to_string(), info.sname, info.sline);
        
        sType*% type3 = clone type2;
        type3->mPointerNum++;
        type3->mHeap = true;
        type2->mHeap = true;
        obj_value.type = clone type2;
        obj_value.c_value = append_object_to_right_values(obj_value.c_value, type3 ,info);
        obj_value.type->mPointerNum ++;
        obj_value.var = null;
        
        sType*% obj_type = clone type2;
        char* fun_name = "initialize";
        
        string generics_fun_name = make_generics_function(obj_type, string(fun_name), info).to_string();
        
        sFun* fun = info.funcs.at(generics_fun_name, null);
        
        if(fun == null) {
            generics_fun_name = create_method_name(obj_type, false@no_pointer_name, string(fun_name), info);
            
            fun = info.funcs.at(generics_fun_name, null);
            
            if(fun == null) {
                err_msg(info, "function not found(%s) at method(%s)(2)\n", generics_fun_name, info.come_fun.mName);
                return true;
            }
        }
            
        sType*% result_type = clone fun->mResultType;
        result_type->mStatic = false;
            
        list<CVALUE*%>*% come_params = new list<CVALUE*%>();
        
        if(fun.mParamTypes[0].mHeap && obj_value.type.mHeap) {
            std_move(fun.mParamTypes[0], obj_value.type, obj_value);
        }
        come_params.push_back(obj_value);
    
        int i = 1;
        foreach(it, tuple_values) {
            CVALUE*% come_value = clone it;
            
            if(fun.mParamTypes[i] && fun.mParamTypes[i].mHeap && come_value.type.mHeap) {
                std_move(fun.mParamTypes[i], come_value.type, come_value);
            }
            come_params.push_back(come_value);
            
            i++;
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
        
        CVALUE*% come_value3 = new CVALUE;
        
        come_value3.c_value = buf.to_string();
        
        if(result_type->mHeap) {
            come_value3.c_value = append_object_to_right_values(buf.to_string(), result_type, info);
        }
        
        come_value3.type = clone result_type;
        come_value3.type->mStatic = false;
        come_value3.var = null;
        
        add_come_last_code(info, "%s;\n", buf.to_string());
        
        info.stack.push_back(come_value3);
    }
    
    return true;
}

int sSomeNode*::sline(sSomeNode* self, sInfo* info)
{
    return self.sline;
}

string sSomeNode*::sname(sSomeNode* self, sInfo* info)
{
    return string(self.sname);
}

struct sMapNode
{
    list<sNode*%>*% map_key_elements;
    list<sNode*%>*% map_elements;
    int sline;
    string sname;
};

sMapNode*% sMapNode*::initialize(sMapNode*% self, list<sNode*%>*% map_key_elements, list<sNode*%>*% map_elements, sInfo* info)
{
    self.map_key_elements = map_key_elements;
    self.map_elements = map_elements;
    
    self.sline = info.sline;
    self.sname = string(info->sname);
    
    return self;
}

bool sMapNode*::terminated()
{
    return false;
}

string sMapNode*::kind()
{
    return string("sMapNode");
}

bool sMapNode*::compile(sMapNode* self, sInfo* info)
{
    list<sNode*%>* map_key_elements = self.map_key_elements;
    list<sNode*%>* map_elements = self.map_elements;

    list<CVALUE*%>*% key_params = new list<CVALUE*%>();
    list<CVALUE*%>*% element_params = new list<CVALUE*%>();
    sType*% map_key_type;
    sType*% map_element_type;
    
    for(int i=0; i<map_key_elements.length(); i++) {
        sNode* key_elements = map_key_elements[i];
        sNode* elements = map_elements[i];
        
        if(!node_compile(key_elements)) {
            return false;
        }
        
        CVALUE*% come_value = get_value_from_stack(-1, info);
        dec_stack_ptr(1, info);
        
        key_params.push_back(come_value);
        
        if(!node_compile(elements)) {
            return false;
        }
        
        CVALUE*% come_value2 = get_value_from_stack(-1, info);
        dec_stack_ptr(1, info);
        
        element_params.push_back(come_value2);
        
        map_key_type = clone come_value.type;
        map_element_type = clone come_value2.type;
    }
    
    static int map_value_num = 0;
    
    sType*% key_type_values = clone map_key_type;
    key_type_values.mArrayNum.push_back(create_int_node(key_params.length(), info));
    key_type_values->mHeap = false;
    
    string var_name = xsprintf("__map_keys%d__", ++map_value_num);
    
    add_variable_to_table(var_name, clone key_type_values, info);
    
    sVar* var_ = get_variable_from_table(info.lv_table, var_name);
    
    add_come_code_at_function_head(info, "%s;\n", make_define_var(key_type_values, var_->mCValueName));
    
    sType*% element_type_values = clone map_element_type;
    element_type_values.mArrayNum.push_back(create_int_node(element_params.length(), info));
    element_type_values->mHeap = false;
    
    string var_name2 = xsprintf("__map_element%d__", map_value_num);
    
    add_variable_to_table(var_name2, clone element_type_values, info);
    
    sVar* var2_ = get_variable_from_table(info.lv_table, var_name2);
    
    add_come_code_at_function_head(info, "%s;\n", make_define_var(element_type_values, var2_->mCValueName));
    
    buffer*% source = new buffer();
    
    source.append_str("{");
    
    for(int i = 0; i<key_params.length(); i++) {
        CVALUE* key_param = key_params[i];
        CVALUE* element_param = element_params[i];
        
        if(map_key_type->mHeap) {
            source.append_str(xsprintf("%s[%d]=come_increment_ref_count(%s);\n", var_->mCValueName, i, key_param.c_value));
        }
        else {
            source.append_str(xsprintf("%s[%d]=%s;\n", var_->mCValueName, i, key_param.c_value));
        }
        
        if(map_element_type->mHeap) {
            source.append_str(xsprintf("%s[%d]=come_increment_ref_count(%s);\n", var2_->mCValueName, i, element_param.c_value));
        }
        else {
            source.append_str(xsprintf("%s[%d]=%s;\n", var2_->mCValueName, i, element_param.c_value));
        }
    }
    
    source.append_str("}");
    
    add_come_code(info, "%s", source.to_string());
    
    sType*% map_type = new sType("map");
    map_type->mGenericsTypes.push_back(clone map_key_type);
    map_type->mGenericsTypes.push_back(clone map_element_type);
    
    sType*% obj_type = clone map_type;
    char* fun_name = "initialize_with_values";
    
    string generics_fun_name = make_generics_function(obj_type, string(fun_name), info).to_string();
    
    sFun* fun = info.funcs.at(generics_fun_name, null);
    
    if(fun == null) {
        generics_fun_name = create_method_name(obj_type, false@no_pointer_name, string(fun_name), info);
        
        fun = info.funcs.at(generics_fun_name, null);
        
        if(fun == null) {
            err_msg(info, "function not found(%s) at method(%s)(3)\n", generics_fun_name, info.come_fun.mName);
            return true;
        }
    }
        
    sType*% result_type = clone fun->mResultType;
    result_type->mStatic = false;
    
    sType* type = map_type;
    
    CVALUE*% obj_value = new CVALUE;
    
    buffer*% num_string = new buffer();
    
    num_string.append_str("1");
    
    sType*% type2 = solve_generics(type, type, info);
    
    string type_name = make_type_name_string(type2, array_cast_pointer:true)!;
    
    obj_value.c_value = xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d)", type_name, type_name, num_string.to_string(), info.sname, info.sline);
    
    sType*% type3 = clone type2;
    type3->mPointerNum++;
    type3->mHeap = true;
    type2->mHeap = true;
    obj_value.type = clone type2;
    obj_value.c_value = append_object_to_right_values(obj_value.c_value, type3 ,info);
    obj_value.type->mPointerNum ++;
    obj_value.var = null;
        
    list<CVALUE*%>*% come_params = new list<CVALUE*%>();
    
    if(fun.mParamTypes[0].mHeap && obj_value.type.mHeap) {
        std_move(fun.mParamTypes[0], obj_value.type, obj_value);
    }
    come_params.push_back(obj_value);
    
    CVALUE*% come_value2 = new CVALUE;
    
    come_value2.c_value = xsprintf("%d", key_params.length());
    come_value2.type = null; // no required
    come_value2.var = null;
    
    come_params.push_back(come_value2);
    
    CVALUE*% come_value3 = new CVALUE;
    
    come_value3.c_value = xsprintf("%s", var_->mCValueName);
    come_value3.type = null; // no required
    come_value3.var = null;
    
    come_params.push_back(come_value3);
    
    CVALUE*% come_value4 = new CVALUE;
    
    come_value4.c_value = xsprintf("%s", var2_->mCValueName);
    come_value4.type = null; // no required
    come_value4.var = null;
    
    come_params.push_back(come_value4);
    
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
    
    CVALUE*% come_value5 = new CVALUE;
    
    come_value5.c_value = buf.to_string();
    
    if(result_type->mHeap) {
        come_value5.c_value = append_object_to_right_values(buf.to_string(), result_type, info);
    }
    
    come_value5.type = clone result_type;
    come_value5.type->mStatic = false;
    come_value5.var = null;
    
    add_come_last_code(info, "%s;\n", buf.to_string());
    
    info.stack.push_back(come_value5);
    
    return true;
}

int sMapNode*::sline(sMapNode* self, sInfo* info)
{
    return self.sline;
}

string sMapNode*::sname(sMapNode* self, sInfo* info)
{
    return string(self.sname);
}

sNode*% expression_node(sInfo* info) version 98
{
    /// here document ///
    if(*info->p == '"' && *(info->p+1) == '"' && *(info->p+2) == '"' && *(info->p+3) == '\n') {
        info->p +=4;
        info->sline++;

        int sline = info->sline;

        list<sNode*%>*% exps = new list<sNode*%>();
        buffer*% value = new buffer();
        
        char* head_of_last_line = NULL;

        while(1) {
            if(*info->p == '"' && *(info->p+1) == '"' && *(info->p+2) == '"') {
                if(head_of_last_line) {
                    value.trim(info->p-head_of_last_line);
                }
                
                info->p+=3;
                
                skip_spaces_and_lf();
                break;
            }
            else if(*info->p == '%') {
                value.append_char('%');
                value.append_char('%');
                info->p++;
            }
            else if(*info->p == '"') {
                value.append_char('\\');
                value.append_char('"');
                info->p++;
            }
/*
            else if(*info->p == '$') {
                info->p++;
                
                sNode*% exp = expression();
                
                exps.add(exp);
                
                value.append_str("%s");
            }
*/
            else if(*info->p == '\\') {
                value.append_char('\\');
                info->p++;
                
                if(xisdigit(*info->p)) {
                    int len = 0;
                    while(xisdigit(*info->p) && len < 3) {
                        value.append_char(*info->p);
                        info->p++;
                        len++;
                    }
                }
                else if(*info->p == 'x' || *info->p == 'X') {
                    value.append_char(*info->p);
                    info->p++;
                    
                    while(*info->p >= '0' && *info->p <= '9' || *info->p >= 'a' && *info->p <= 'f' || *info->p >= 'A' && *info->p <= 'F') {
                        value.append_char(*info->p);
                        info->p++;
                    }
                }
                else if(*info->p == '{') {
                    info->p++;
                    
                    sNode*% exp = expression();
                    
                    exps.add(exp);
                    
                    if(*info->p == '}') {
                        info->p++;
                    }
                    
                    value.append_str("%s");
                }
                else {
                    switch(*info->p) {
                        case '0':
                            value.append_char(*info->p);
                            info->p++;
                            break;
    
                        case 'n':
                            value.append_char(*info->p);
                            info->p++;
                            break;
    
                        case 't':
                            value.append_char(*info->p);
                            info->p++;
                            break;
    
                        case 'r':
                            value.append_char(*info->p);
                            info->p++;
                            break;
    
                        case 'v':
                            value.append_char(*info->p);
                            info->p++;
                            break;
    
                        case 'f':
                            value.append_char(*info->p);
                            info->p++;
                            break;
    
                        case 'a':
                            value.append_char(*info->p);
                            info->p++;
                            break;
    
                        case 'b':
                            value.append_char(*info->p);
                            info->p++;
                            break;
    
                        case '\\':
                            value.append_char(*info->p);
                            info->p++;
                            break;
    
                        default:
                            value.append_char(*info->p);
                            info->p++;
                            break;
                    }
                }
            }
            else if(*info->p == '\0') {
                int sline2 = info->sline;
                info->sline = sline;
                err_msg(info, "close \" to make embbeded string value");
                exit(2);
            }
            else {
                if(*info->p == '\n') {
                    value.append_char('\\');
                    value.append_char('n');
                    info->p++;
                    info->sline++;
                    
                    head_of_last_line = info->p;
                }
                else {
                    value.append_char(*info->p);
                    info->p++;
                }
            }
        }

        skip_spaces_and_lf();
        
        return new sSStringNode(value.to_string(), exps, sline, info) implements sNode;
    }
    else if(*info->p == '"') 
    {
        info->p++;

        int sline = info->sline;

        buffer*% value = new buffer();

        while(1) {
            if(*info->p == '"') {
                info->p++;
                
                char* p = info->p;
                int sline = info->sline;
                
                skip_spaces_and_lf();
                
                parse_sharp()
                
                if(*info->p == '"') {
                    info->p++;
                }
                else {
                    info->p = p;
                    info->sline = sline;
                    break;
                }
            }
            else if(*info->p == '\\') {
                value.append_char('\\');
                info->p++;
                
                if(*info->p == '"') {
                    value.append_char('"');
                    info->p++;
                }
                else {
                    value.append_char(*info->p);
                    info->p++;
                }
            }
            else if(*info->p == '\0') {
                int sline2 = info->sline;
                info->sline = sline;
                err_msg(info, "close \" to make c string value");
                info->sline = sline2;
                exit(2);
            }
            else {
                if(*info->p == '\n') info->sline++;

                value.append_char(*info->p);
                info->p++;
            }
        }

        skip_spaces_and_lf();
        
        return new sStrNode(value.to_string(), sline, info) implements sNode;
    }
    else if(*info->p == '/') {
        info->p++;
        
        int sline = info->sline;
        
        buffer*% buf = new buffer();
        while(true) {
            if(*info->p == '\\' && *(info->p+1) == '/') {
                info->p++;
                buf.append_char(*info->p);
                info->p++;
            }
            else if(*info->p == '/') {
                info->p++;
                break;
            }
            else if(*info->p == '\0') {
                err_msg(info, "require closing / for regex");
                exit(5);
            }
            else {
                buf.append_char(*info->p);
                info->p++;
            }
        }
        
        bool global = false;
        bool ignore_case = false;
        while(*info->p == 'g' || *info->p == 'i') {
            if(*info->p == 'g') {
                info->p++;
                global = true;
            }
            else if(*info->p == 'i') {
                info->p++;
                ignore_case = true;
            }
            else {
                break;
            }
        }
        
        skip_spaces_and_lf();
        
        return new sRegexNode(buf.to_string(), global, ignore_case, sline, info) implements sNode;
    }
    else if(*info->p == '\'') {
        info->p++;

        int c;

        if(*info->p == '\\') {
            info->p++;

            if(xisdigit(*info->p)) {
                int n = 0;
                while(xisdigit(*info->p)) {
                    n = n * 8 + *info->p - '0';
                    info->p++;
                }
                
                c = n;
            }
            else {
                switch(*info->p) {
                    case 'n':
                        c = '\n';
                        info->p++;
                        break;
    
                    case 't':
                        c = '\t';
                        info->p++;
                        break;
    
                    case 'r':
                        c = '\r';
                        info->p++;
                        break;
    
                    case 'a':
                        c = '\a';
                        info->p++;
                        break;
    
                    case 'f':
                        c = '\f';
                        info->p++;
                        break;
    
                    case 'v':
                        c = '\v';
                        info->p++;
                        break;
    
                    case 'b':
                        c = '\b';
                        info->p++;
                        break;
    
                    case '\\':
                        c = '\\';
                        info->p++;
                        break;
    
                    case '0':
                        c = '\0';
                        info->p++;
                        
                        if(xisdigit(*info->p)) {
                            int n = 0;
                            while(xisdigit(*info->p)) {
                                n = n * 8 + *info->p - '0';
                                info->p++;
                                skip_spaces_and_lf();
                            }
                            
                            c = n;
                        }
                        break;
                        
                    case 'x':
                    case 'X': {
                        info->p++;
                        
                        char buf[128];
                        strncpy(buf, "0x", 128);
                        while(*info->p >= '0' && *info->p <= '9' || *info->p >= 'a' && *info->p <= 'f' || *info->p >= 'A' && *info->p <= 'F') {
                            char buf2[2];
                            buf2[0] = *info->p;
                            buf2[1] = '\0';
                            info->p++;
                            strncat(buf, buf2, 128);
                        }
                        
                        unsigned long long int n = strtoll(buf, NULL, 0);
                        
                        c = n;
                        }
                        break;
    
                    default:
                        c = *info->p;
                        info->p++;
                        break;
                }
            }
        }
        else {
            c = *info->p;
            info->p++;
        }

        if(*info->p != '\'') {
            err_msg(info, "close \' to make character value");
        }
        else {
            info->p++;

            skip_spaces_and_lf();

            return new sCharNode(c, info) implements sNode;
        }
    }
    /// wchararacter ///
    else if(*info->p == 'L' && *(info->p+1) == '\'') {
        info->p+=2;

        wchar_t c;

        if(*info->p == '\\') {
            info->p++;
            
            if(xisdigit(*info->p)) {
                int n = 0;
                while(xisdigit(*info->p)) {
                    n = n * 8 + *info->p - '0';
                    info->p++;
                }
                
                c = n;
            }
            else {
                switch(*info->p) {
                    case 'n':
                        c = '\n';
                        info->p++;
                        break;
    
                    case 't':
                        c = '\t';
                        info->p++;
                        break;
    
                    case 'r':
                        c = '\r';
                        info->p++;
                        break;
    
                    case 'a':
                        c = '\a';
                        info->p++;
                        break;
    
                    case '\\':
                        c = '\\';
                        info->p++;
                        break;
    
                    case '0':
                        c = '\0';
                        
                        info->p++;
                        
                        if(xisdigit(*info->p)) {
                            int n = 0;
                            while(xisdigit(*info->p)) {
                                n = n * 8 + *info->p - '0';
                                info->p++;
                                skip_spaces_and_lf();
                            }
                            
                            c = n;
                        }
                        break;
                        
                    case 'x':
                    case 'X': {
                        info->p++;
                        
                        char buf[128];
                        strncpy(buf, "0x", 128);
                        while(*info->p >= '0' && *info->p <= '9' || *info->p >= 'a' && *info->p <= 'f' || *info->p >= 'A' && *info->p <= 'F') {
                            char buf2[2];
                            buf2[0] = *info->p;
                            buf2[1] = '\0';
                            info->p++;
                            strncat(buf, buf2, 128);
                        }
                        
                        unsigned long long int n = strtoll(buf, NULL, 0);
                        
                        c = n;
                        }
                        break;
    
                    default:
                        c = *info->p;
                        info->p++;
                        break;
                }
            }
        }
        else {
            unsigned char p2 = *(unsigned char*)info->p;

            /// utf-8 character ///
            if(p2 > 127) {
                int size;
                char str[MB_LEN_MAX+1];

                size = ((p2 & 0x80) >> 7) + ((p2 & 0x40) >> 6) + ((p2 & 0x20) >> 5) + ((p2 & 0x10) >> 4);

                if(size > MB_LEN_MAX) {
                    err_msg(info, "invalid utf-8 character. MB_LEN_MAX");
                    info->err_num++;
                }
                else {
                    memcpy(str, info->p, size);
                    str[size] = 0;

                    if(mbtowc(&c, str, size) < 0) {
                        perror("mbtowc");
                        err_msg(info, "invalid utf-8 character. mbtowc");
                        info->err_num++;
                        c = 0;
                    }

                    info->p += size;
                }
            }
            /// ASCII character ///
            else {
                c = *info->p;
                info->p++;
            }
        }

        if(*info->p != '\'') {
            err_msg(info, "close \' to make character value");
            info->err_num++;
        }
        else {
            info->p++;

            skip_spaces_and_lf();

            return new sWCharNode(c, info) implements sNode;
        }
    }
    /// wstring ///
    else if(*info->p == 'L' && *(info->p+1) == '"') {
        info->p+=2;

        int sline = info->sline;

        buffer*% value = new buffer();

        while(1) {
            if(*info->p == '"') {
                info->p++;
                
                char* p = info->p;
                int sline = info->sline;
                
                skip_spaces_and_lf();
                
                if(*info->p == '"') {
                    info->p++;
                }
                else {
                    info->p = p;
                    info->sline = sline;
                    break;
                }
            }
            else if(*info->p == '\\') {
                info->p++;
                
                if(xisdigit(*info->p)) {
                    int len = 0;
                    int n = 0;
                    while(xisdigit(*info->p) && len < 3) {
                        n = n * 8 + *info->p - '0';
                        info->p++;
                        len++;
                    }
                    
                    value.append_char(n);
                }
                else if(*info->p == 'x' || *info->p == 'X') {
                    info->p++;
                    
                    char buf[128];
                    strncpy(buf, "0x", 128);
                    while(*info->p >= '0' && *info->p <= '9' || *info->p >= 'a' && *info->p <= 'f' || *info->p >= 'A' && *info->p <= 'F') {
                        char buf2[2];
                        buf2[0] = *info->p;
                        buf2[1] = '\0';
                        info->p++;
                        strncat(buf, buf2, 128);
                    }
                    
                    unsigned long lont int n = strtoll(buf, NULL, 0);
                    
                    value.append_char((char)n);
                }
                else {
                    switch(*info->p) {
                        case '0':
                            value.append_char('\0');
                            info->p++;
                            break;
    
                        case 'n':
                            value.append_char('\n');
                            info->p++;
                            break;
    
                        case 't':
                            value.append_char('\t');
                            info->p++;
                            break;
    
                        case 'r':
                            value.append_char('\r');
                            info->p++;
                            break;
    
                        case 'v':
                            value.append_char('\v');
                            info->p++;
                            break;
    
                        case 'f':
                            value.append_char('\f');
                            info->p++;
                            break;
    
                        case 'a':
                            value.append_char('\a');
                            info->p++;
                            break;
    
                        case 'b':
                            value.append_char('\b');
                            info->p++;
                            break;
    
                        case '\\':
                            value.append_char('\\');
                            info->p++;
                            break;
    
                        default:
                            value.append_char(*info->p);
                            info->p++;
                            break;
                    }
                }
            }
            else if(*info->p == '\0') {
                int sline2 = info->sline;
                info->sline = sline;
                err_msg(info, "close \" to make c string value");
                exit(2);
            }
            else {
                if(*info->p == '\n') info->sline++;

                value.append_char(*info->p);
                info->p++;
            }
        }

        skip_spaces_and_lf();
        
        int len = value.len;
        
        wchar_t*% wstr = new wchar_t[len+1];
        
        char* str = value.buf;
        
        if(mbstowcs(wstr, str, len+1) < 0) {
            perror("mbstowcs");
            exit(1);
        }
        
        wstr[len] = '\0';

        return new sWStringNode(wstr, sline, info) implements sNode;
    }
    /// heap string ///
    else if((*info->p == 's' || *info->p == 'S')  && *(info->p+1) == '"') {
        info->p+=2;

        int sline = info->sline;

        list<sNode*%>*% exps = new list<sNode*%>();
        buffer*% value = new buffer();

        while(1) {
            if(*info->p == '"') {
                info->p++;
                
                char* p = info->p;
                int sline = info->sline;
                
                skip_spaces_and_lf();
                
                if(*info->p == '"') {
                    info->p++;
                }
                else {
                    info->p = p;
                    info->sline = sline;
                    break;
                }
            }
            else if(*info->p == '%') {
                value.append_char('%');
                value.append_char('%');
                info->p++;
            }
            else if(*info->p == '$') {
                info->p++;
                
                sNode*% exp = expression();
                
                exps.add(exp);
                
                value.append_str("%s");
                
                char* p = info->p -1;
                while(*p == ' ' || *p == '\t') {
                    p--;
                }
                
                info->p = p + 1;
            }
            else if(*info->p == '\\') {
                value.append_char('\\');
                info->p++;
                
                if(xisdigit(*info->p)) {
                    int len = 0;
                    while(xisdigit(*info->p) && len < 3) {
                        value.append_char(*info->p);
                        info->p++;
                        len++;
                    }
                }
                else if(*info->p == 'x' || *info->p == 'X') {
                    value.append_char(*info->p);
                    info->p++;
                    
                    while(*info->p >= '0' && *info->p <= '9' || *info->p >= 'a' && *info->p <= 'f' || *info->p >= 'A' && *info->p <= 'F') {
                        value.append_char(*info->p);
                        info->p++;
                    }
                }
                else if(*info->p == '{') {
                    info->p++;
                    
                    sNode*% exp = expression();
                    
                    exps.add(exp);
                    
                    if(*info->p == '}') {
                        info->p++;
                    }
                    
                    value.append_str("%s");
                }
                else {
                    switch(*info->p) {
                        case '0':
                            value.append_char(*info->p);
                            info->p++;
                            break;
    
                        case 'n':
                            value.append_char(*info->p);
                            info->p++;
                            break;
    
                        case 't':
                            value.append_char(*info->p);
                            info->p++;
                            break;
    
                        case 'r':
                            value.append_char(*info->p);
                            info->p++;
                            break;
    
                        case 'v':
                            value.append_char(*info->p);
                            info->p++;
                            break;
    
                        case 'f':
                            value.append_char(*info->p);
                            info->p++;
                            break;
    
                        case 'a':
                            value.append_char(*info->p);
                            info->p++;
                            break;
    
                        case 'b':
                            value.append_char(*info->p);
                            info->p++;
                            break;
    
                        case '\\':
                            value.append_char(*info->p);
                            info->p++;
                            break;
    
                        default:
                            value.append_char(*info->p);
                            info->p++;
                            break;
                    }
                }
            }
            else if(*info->p == '\0') {
                int sline2 = info->sline;
                info->sline = sline;
                err_msg(info, "close \" to make embbeded string value");
                exit(2);
            }
            else {
                if(*info->p == '\n') info->sline++;

                value.append_char(*info->p);
                info->p++;
            }
        }

        skip_spaces_and_lf();
        
        return new sSStringNode(value.to_string(), exps, sline, info) implements sNode;
    }
    else if(*info->p == '[') {
        info->p++;
        skip_spaces_and_lf();
        
        char* p = info.p;
        
        bool no_comma = info.no_comma;
        info.no_comma = true;
        
        sNode*% node = expression();
        
        info.no_comma = no_comma;
        
        char* p2 = info.p;
        
        buffer*% first_element_source = new buffer();
        
        first_element_source.append(p, p2 - p);
        first_element_source.append_char('\0');
        
        list<sNode*%>*% list_elements = new list<sNode*%>();
        
        list<sNode*%>*% map_keys = new list<sNode*%>();
        list<sNode*%>*% map_elements = new list<sNode*%>();
        
        //// map ///
        if(*info->p == ':') {
            info->p++;
            skip_spaces_and_lf();
            
            map_keys.push_back(node);
            
            bool no_comma = info.no_comma;
            info.no_comma = true;
            
            sNode*% node2 = expression();
            
            info.no_comma = no_comma;
            
            map_elements.push_back(node2);
            
            if(*info->p == ']') {
                info->p++;
                skip_spaces_and_lf();
                
                return new sMapNode(map_keys, map_elements, info) implements sNode;
            }
            else {
                expected_next_character(',');
                
                while(true) {
                    bool no_comma = info.no_comma;
                    info.no_comma = true;
                    
                    sNode*% node2 = expression();
                    
                    info.no_comma = no_comma;
                    
                    map_keys.push_back(node2);
                    
                    expected_next_character(':');
                    
                    no_comma = info.no_comma;
                    info.no_comma = true;
                    
                    sNode*% node3 = expression();
                    
                    info.no_comma = no_comma;
                    
                    map_elements.push_back(node3);
                    
                    if(*info->p == '\0') {
                        err_msg(info, "invalid source end");
                        exit(2);
                    }
                    else if(*info->p == ',') {
                        info->p++;
                        skip_spaces_and_lf();
                    }
                    else if(*info->p == ']') {
                        info->p++;
                        skip_spaces_and_lf();
                        break;
                    }
                    else {
                        err_msg(info, "invalid character(%c)(3)", *info->p);
                        exit(2);
                    }
                }
                
                return new sMapNode(map_keys, map_elements, info) implements sNode;
            }
        }
        /// list ///
        else if(*info->p == ']') {
            info->p++;
            skip_spaces_and_lf();
            
            list_elements.push_back(node);
        }
        else if(*info->p == ',') {
            info->p++;
            skip_spaces_and_lf();
            
            list_elements.push_back(node);
            
            while(true) {
                bool no_comma = info.no_comma;
                info.no_comma = true;
                
                sNode*% node2 = expression();
                
                info.no_comma = no_comma;
                
                list_elements.push_back(node2);
                
                if(*info->p == '\0') {
                    err_msg(info, "invalid source end");
                    exit(2);
                }
                else if(*info->p == ',') {
                    info->p++;
                    skip_spaces_and_lf();
                }
                else if(*info->p == ']') {
                    info->p++;
                    skip_spaces_and_lf();
                    break;
                }
                else {
                    err_msg(info, "invalid character(%c)(4)", *info->p);
                    exit(2);
                }
            }
        }
        else {
            err_msg(info, "invalid character(%c)(5)", *info->p);
            exit(2);
        }
        
        if(list_elements.length() > 0) {
            return new sListNode(list_elements, info) implements sNode;
        }
        else {
        }
    }
    else {
        inherit(info);
    }
    
    return (sNode*%)null;
}

sNode*% parse_tuple(sInfo* info)
{
    list<sNode*%>*% tuple_elements = new list<sNode*%>();
    while(true) {
        char* p = info.p;
        
        bool no_comma = info.no_comma;
        info.no_comma = true;
        
        sNode*% node = expression();
        
        info.no_comma = no_comma;
        
        tuple_elements.push_back(node);
        
        if(*info->p == ',') {
            info->p++;
            skip_spaces_and_lf();
        }
        else if(*info->p == ')') {
            info->p++;
            skip_spaces_and_lf();
            break;
        }
        else {
            err_msg(info, "invalid character(%c) in tuple expression", *info->p);
            exit(2);
        }
    }
    
    return new sTupleNode(tuple_elements, info) implements sNode;
}
