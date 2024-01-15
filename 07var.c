#include "common.h"

struct sStoreNode
{
    string name;
    list<string>*% multiple_assign;
    list<tuple3<sType*%,string,sNode*%>*%>*% multiple_declare;
    sNode*% right_value;
    sType*% type;
    string array_initializer;
    bool alloc;
    int sline;
    string sname;
};

sStoreNode*% sStoreNode*::initialize(sStoreNode*% self, string name, list<string>*% multiple_assign, list<tuple3<sType*%, string, sNode*%>*%>*% multiple_declare, sType*% type, bool alloc, sNode*% right_value, string array_initializer, sInfo* info)
{
    self.name = string(name);
    self.alloc = alloc;
    if(type) {
        self.type = clone type;
    }
    else {
        self.type = null;
    }
    self.right_value = right_value;
    if(multiple_assign) {
        self.multiple_assign = clone multiple_assign;
    }
    else {
        self.multiple_assign = null;
    }
    if(multiple_declare) {
        self.multiple_declare = clone multiple_declare;
    }
    else {
        self.multiple_declare = null;
    }
    
    self.array_initializer = array_initializer;
    
    self.sline = info->sline;
    self.sname = string(info->sname);
    
    return self;
}

bool sStoreNode*::terminated()
{
    return false;
}

string sStoreNode*::kind()
{
    return string("sStoreNode");
}

bool sStoreNode*::compile(sStoreNode* self, sInfo* info)
{
    string array_initializer = clone self.array_initializer;
    
    if(array_initializer) {
        sVar* var_ = info.lv_table.mVars[self.name];
        if(var_) {
            err_msg(info, "Already appended this var name(%s)(2)", self.name);
            return false;
        }
        
        if(self.type == null) {
            err_msg(info, "Require type name(%s)", self.name);
            return false;
        }
        else {
            var type = solve_generics(self.type, info->generics_type, info);
            
            type->mFunctionParam = false;
            add_variable_to_table(self.name, clone type, info);
        }
        
        var_ = get_variable_from_table(info.lv_table, self.name);
        
        sType*% var_type = clone var_->mType;
        var_type->mStatic = false;
        
        add_come_code(info, "%s=%s;\n", make_define_var(var_type, var_->mCValueName), array_initializer);
    }
    else if(self.right_value == null) {
        sVar* var_ = info.lv_table.mVars[self.name];
        if(var_) {
            err_msg(info, "Already appended this var name(%s)(1)", self.name);
            return false;
        }
        
        if(self.type == null) {
            err_msg(info, "Require concrete variable type(%s)", self.name);
            return false;
        }
        
        var type = solve_generics(self.type, info->generics_type, info);
        type->mFunctionParam = false;
        
        if(self.multiple_declare) {
            foreach(it, self.multiple_declare) {
                var type, var_name, right_value = it;
                add_variable_to_table(var_name, clone type, info);
                
                var_ = get_variable_from_table(info.lv_table, var_name);
                
                if(var_ == null) {
                    err_msg(info, "var not found(%s)(ZY) at definition of variable\n", it);
                    return true;
                }
                
                sType*% left_type = clone var_->mType;
                
                add_come_code_at_function_head(info, "%s;\n", make_define_var(left_type, var_->mCValueName));
                
                if(right_value) {
                    if(!node_compile(right_value)) {
                        return false;
                    }
                    CVALUE*% come_value = get_value_from_stack(-1, info);
                    dec_stack_ptr(1, info);
                    
                    add_come_code(info, "%s=%s;\n", var_->mCValueName, come_value.c_value);
                }
                
                sType*% left_type2 = clone left_type;
                left_type2->mStatic = false;
                
                if(!var_->mType->mConstant && !var_->mType->mStatic) {
                    if(left_type2->mArrayNum.length() > 0) {
                        add_come_code(info, "memset(&%s, 0, sizeof(%s)", var_->mCValueName, make_type_name_string(left_type2)!);
                        foreach(it, left_type2->mArrayNum) {
                            if(!node_compile(it)) {
                                err_msg(info, "invalid array num");
                                exit(1);
                            }
                            
                            CVALUE*% come_value = get_value_from_stack(-1, info);
                            dec_stack_ptr(1, info);
                            add_come_code(info, "*(%s)", come_value.c_value);
                        }
                        add_come_code(info, ");\n");
                    }
                    else {
                        add_come_code_at_function_head2(info, "memset(&%s, 0, sizeof(%s));\n", var_->mCValueName, make_type_name_string(left_type2)!);
                    }
                }
            }
        }
        else {
            add_variable_to_table(self.name, clone type, info);
        
            var_ = get_variable_from_table(info.lv_table, self.name);
            
            if(var_ == null) {
                var_ = get_variable_from_table(info.gv_table, self.name);
                
                if(var_ == null) {
                    err_msg(info, "var not found(%s)(Y) at definition of variable\n", self.name);
                    return true;
                }
            }
            
            sType*% left_type = clone var_->mType;
            if(left_type->mArrayNum.length() > 0) {
                add_come_code(info, "%s;\n", make_define_var(left_type, var_->mCValueName));
                if(!left_type->mStatic) {
                    if(left_type->mArrayNum.length() > 0) {
                        add_come_code(info, "memset(&%s, 0, sizeof(%s)", var_->mCValueName, make_type_name_string(left_type)!);
                        foreach(it, left_type->mArrayNum) {
                            if(!node_compile(it)) {
                                err_msg(info, "invalid array num");
                                exit(1);
                            }
                            
                            CVALUE*% come_value = get_value_from_stack(-1, info);
                            dec_stack_ptr(1, info);
                            add_come_code(info, "*(%s)", come_value.c_value);
                        }
                        add_come_code(info, ");\n");
                    }
                    else {
                        add_come_code(info, "memset(&%s, 0, sizeof(%s)); /* aaa */\n", var_->mCValueName, var_->mCValueName);
                    }
                }
            }
            else {
                add_come_code_at_function_head(info, "%s;\n", make_define_var(left_type, var_->mCValueName));
                
                sType*% left_type2 = clone left_type;
                left_type2->mStatic = false;
                
                if(!var_->mType->mConstant && !var_->mType->mStatic) {
                    if(left_type2->mArrayNum.length() > 0) {
                        add_come_code(info, "memset(&%s, 0, sizeof(%s)", var_->mCValueName, make_type_name_string(left_type2)!);
                        foreach(it, left_type2->mArrayNum) {
                            if(!node_compile(it)) {
                                err_msg(info, "invalid array num");
                                exit(1);
                            }
                            
                            CVALUE*% come_value = get_value_from_stack(-1, info);
                            dec_stack_ptr(1, info);
                            add_come_code(info, "*(%s)", come_value.c_value);
                        }
                        add_come_code(info, ");\n");
                    }
                    else {
                        add_come_code_at_function_head2(info, "memset(&%s, 0, sizeof(%s));\n", var_->mCValueName, make_type_name_string(left_type2)!);
                    }
                }
            }
            
            CVALUE*% come_value = new CVALUE;
            
            come_value.c_value = xsprintf("%s", var_->mCValueName);
            come_value.type = clone left_type;
            come_value.var = var_;
            
            info.stack.push_back(come_value);
            
            if(self.alloc && !left_type->mClass->mNumber && left_type->mPointerNum == 0) {
                var_->mType->mAllocaValue = true;
            }
        }
    }
    else {
        if(!node_compile(self.right_value)) {
            return false;
        }
        
        CVALUE*% right_value = get_value_from_stack(-1, info);
        dec_stack_ptr(1, info);
        sType* right_type = right_value.type;
        
        if(self.multiple_assign) {
            if(right_type->mNoSolvedGenericsType.v1) {
                right_type = right_type->mNoSolvedGenericsType.v1;
            }
        }
        
        if(self.alloc) {
            sVar* var_ = info.lv_table.mVars[self.name];
            if(var_) {
                err_msg(info, "Already appended this var name(%s)(2)", self.name);
                return false;
            }
            
            if(self.multiple_assign) {
                int i = 0;
                foreach(it, self.multiple_assign) {
                    if(i < right_type.mGenericsTypes.length()) {
                        sType* right_type2 = right_type.mGenericsTypes[i];
                        right_type2->mFunctionParam = false;
                        
                        add_variable_to_table(it, clone right_type2, info);
                        
                        var_ = get_variable_from_table(info.lv_table, it);
                        
                        sType*% var_type = clone var_->mType;
                        var_type->mStatic = false;
                        
                        if(!var_type->mConstant && !var_type->mStatic) {
                            if(var_type->mArrayNum.length() > 0) {
                                add_come_code(info, "memset(&%s, 0, sizeof(%s)", var_->mCValueName, make_type_name_string(var_type)!);
                                foreach(it, var_type->mArrayNum) {
                                    if(!node_compile(it)) {
                                        err_msg(info, "invalid array num");
                                        exit(1);
                                    }
                                    
                                    CVALUE*% come_value = get_value_from_stack(-1, info);
                                    dec_stack_ptr(1, info);
                                    add_come_code(info, "*(%s)", come_value.c_value);
                                }
                                add_come_code(info, ");\n");
                            }
                            else {
                                add_come_code_at_function_head2(info, "memset(&%s, 0, sizeof(%s));\n", var_->mCValueName, make_type_name_string(var_type)!);
                            }
                        }
                    }
                    
                    i++;
                }
            }
            else {
                if(self.type == null) {
                    right_type->mFunctionParam = false;
                    add_variable_to_table(self.name, clone right_type, info);
                }
                else {
                    var type = solve_generics(self.type, info->generics_type, info);
                    
                    type->mFunctionParam = false;
                    add_variable_to_table(self.name, clone type, info);
                }
                
                var_ = get_variable_from_table(info.lv_table, self.name);
                
                sType*% var_type = clone var_->mType;
                var_type->mStatic = false;
                
                if(!var_->mType->mStatic && !var_type->mConstant && var_type->mArrayNum.length() == 0) {
                    if(var_type->mArrayNum.length() > 0) {
                        add_come_code(info, "memset(&%s, 0, sizeof(%s)", var_->mCValueName, make_type_name_string(var_type)!);
                        foreach(it, var_type->mArrayNum) {
                            if(!node_compile(it)) {
                                err_msg(info, "invalid array num");
                                exit(1);
                            }
                            
                            CVALUE*% come_value = get_value_from_stack(-1, info);
                            dec_stack_ptr(1, info);
                            add_come_code(info, "*(%s)", come_value.c_value);
                        }
                        add_come_code(info, ");\n");
                    }
                    else {
                        add_come_code_at_function_head2(info, "memset(&%s, 0, sizeof(%s));\n", var_->mCValueName, make_type_name_string(var_type)!);
                    }
                }
            }
        }
        
        sClass* current_stack_frame_struct = info->current_stack_frame_struct;
        
        if(current_stack_frame_struct && info.lv_table.mVars[self.name] == null) {
            sVar* parent_var = get_variable_from_table(info.lv_table->mParent, self.name);
            
            if(parent_var != null) {
                if(parent_var->mFunName !== info.come_fun.mName) {
                    CVALUE*% come_value = new CVALUE;
                    
                    sType* left_type = parent_var->mType;
                    
                    if(left_type->mPointerNum > 0 && right_type->mPointerNum > 0 && right_type->mHeap && left_type->mHeap) {
                        string c_value = xsprintf("*(parent->%s)", parent_var->mCValueName);
                        decrement_ref_count_object(parent_var->mType, c_value, info);
                        
                        std_move(left_type, right_type, right_value);
                        
                        come_value.c_value = xsprintf("(*(parent->%s))=%s", parent_var->mCValueName, right_value.c_value);
                        
                        int right_value_id = get_right_value_id_from_obj(right_value.c_value);
                        
                        if(right_value_id != -1) {
                            remove_object_from_right_values(right_value_id, info);
                        }
                    }
                    else if(left_type->mPointerNum > 0 && right_type->mPointerNum > 0 && right_type->mClass->mName === "void" && left_type->mHeap) {
                        string c_value = xsprintf("*(parent->%s)", parent_var->mCValueName);
                        decrement_ref_count_object(parent_var->mType, c_value, info);
                        
                        come_value.c_value = xsprintf("(*(parent->%s))=%s", parent_var->mCValueName, right_value.c_value);
                    }
                    else {
                        come_value.c_value = xsprintf("(*(parent->%s))=%s", parent_var->mCValueName, right_value.c_value);
                    }
                    
                    come_value.type = clone left_type;
                    come_value.var = null;
                    
                    check_assign_type(s"\{self.name} is assigning to", left_type, right_type, come_value);
                    
                    add_come_last_code(info, "%s;\n", come_value.c_value);
                    
                    info.stack.push_back(come_value);
                    
                    return true;
                }
            }
        }
        
        if(self.multiple_assign) {
            static int num_multiple_var = 0;
            string multiple_var_name = xsprintf("multiple_assgin_var%d", ++num_multiple_var);
            add_come_code_at_function_head(info, "%s;\n", make_define_var(right_value.type, multiple_var_name));
            
            add_come_code(info, "%s=%s;\n", multiple_var_name, right_value.c_value);
            
            right_value.c_value = clone multiple_var_name;
            
            int i = 0;
            foreach(it, self.multiple_assign) {
                if(i < right_type.mGenericsTypes.length()) {
                    sType*% right_type2 = clone right_type.mGenericsTypes[i];
                    
                    sVar* var_ = get_variable_from_table(info.lv_table, it);
                    
                    sType*% var_type = clone var_->mType;
                    var_type->mStatic = false;
                    
                    if(!var_type->mConstant) {
                        if(var_type->mArrayNum.length() > 0) {
                            add_come_code(info, "memset(&%s, 0, sizeof(%s)", var_->mCValueName, make_type_name_string(var_type)!);
                            foreach(it, var_type->mArrayNum) {
                                if(!node_compile(it)) {
                                    err_msg(info, "invalid array num");
                                    exit(1);
                                }
                                
                                CVALUE*% come_value = get_value_from_stack(-1, info);
                                dec_stack_ptr(1, info);
                                add_come_code(info, "*(%s)", come_value.c_value);
                            }
                            add_come_code(info, ");\n");
                        }
                        else {
                            add_come_code_at_function_head2(info, "memset(&%s, 0, sizeof(%s));\n", var_->mCValueName, make_type_name_string(var_type)!);
                        }
                    }
                    
                    sType*% left_type = clone var_->mType;
                    
                    CVALUE*% right_value2 = new CVALUE;
                    
                    right_value2.c_value = xsprintf("%s->v%d", right_value.c_value, i+1);
                    right_value2.type = clone right_type2;
                    right_value2.var = null;
                    
                    CVALUE*% come_value = new CVALUE;
                    
                    check_assign_type(s"\{self.name} is assining to}", left_type, right_type2, come_value);
                    if(right_type2->mHeap && left_type->mHeap && left_type->mPointerNum > 0 && right_type2->mPointerNum > 0)
                    {
                        if(self.alloc) {
                            std_move(left_type, right_type2, right_value2);
                            come_value.c_value = xsprintf("%s=%s", var_->mCValueName, right_value2.c_value);
                        }
                        
                        int right_value_id = get_right_value_id_from_obj(right_value2.c_value);
                        
                        if(right_value_id != -1) {
                            remove_object_from_right_values(right_value_id, info);
                        }
                    }
                    else {
                        come_value.c_value = xsprintf("%s=%s", var_->mCValueName, right_value2.c_value);
                    }
                    come_value.type = clone left_type;
                    come_value.var = var_;
                    
                    if(self.alloc) {
                        add_come_code_at_function_head(info, "%s;\n", make_define_var(left_type, var_->mCValueName));
                        add_come_code(info, "%s;\n", come_value.c_value);
                    }
                    else {
                        add_come_code(info, "%s;\n", come_value.c_value);
                    }
                }
                
                i++;
            }
        }
        else {
            sVar* var_ = get_variable_from_table(info.lv_table, self.name);
            
            if(var_ == null) {
                var_ = get_variable_from_table(info.gv_table, self.name);
                
                if(var_ == null) {
                    err_msg(info, "var not found(%s)(X) at storing variable\n", self.name);
                    return true;
                }
            }
            
            if(var_->mType == NULL) {
                var_->mType = clone right_type;
            }
            sType*% left_type = clone var_->mType;
            
            CVALUE*% come_value = new CVALUE;
            
            if(var_->mType->mStatic && !var_->mGlobal) {
                check_assign_type(s"\{self.name} is assining to", left_type, right_type, right_value);
                add_come_code_at_function_head(info, "%s=%s;\n", make_define_var(left_type, var_->mCValueName), right_value.c_value);
                come_value.c_value = string("");
                
                info.stack.push_back(come_value);
                
                transpiler_clear_last_code(info);
            }
            else if(var_->mType->mConstant) {
                check_assign_type(s"\{self.name} is assining to", left_type, right_type, right_value);
                if(self.alloc) {
                    add_come_code_at_function_head(info, "%s=%s;\n", make_define_var(left_type, var_->mCValueName), right_value.c_value);
                }
                else {
                    add_come_code_at_function_head(info, "%s=%s;\n", var_->mCValueName, right_value.c_value);
                }
                come_value.c_value = string("");
                
                info.stack.push_back(come_value);
                
                transpiler_clear_last_code(info);
            }
            else if(right_type->mHeap && left_type->mHeap && left_type->mPointerNum > 0 && right_type->mPointerNum > 0)
            {
                check_assign_type(s"\{self.name} is assining to", left_type, right_type, right_value);
                if(self.alloc) {
                    std_move(left_type, right_type, right_value);
                    come_value.c_value = xsprintf("%s=%s", var_->mCValueName, right_value.c_value);
                }
                else {
                    decrement_ref_count_object(left_type, var_->mCValueName, info);
                    std_move(left_type, right_type, right_value);
                    come_value.c_value = xsprintf("%s=%s", var_->mCValueName, right_value.c_value);
                }
                int right_value_id = get_right_value_id_from_obj(right_value.c_value);
                
                if(right_value_id != -1) {
                    remove_object_from_right_values(right_value_id, info);
                }
                come_value.type = clone left_type;
                come_value.var = var_;
                
                info.stack.push_back(come_value);
                
                add_come_last_code(info, "%s;\n", come_value.c_value);
            }
            else if(right_type->mClass->mName === "void" && left_type->mHeap && left_type->mPointerNum > 0 && right_type->mPointerNum > 0)
            {
                check_assign_type(s"\{self.name} is assining to", left_type, right_type, right_value);
                if(self.alloc) {
                    come_value.c_value = xsprintf("%s=%s", var_->mCValueName, right_value.c_value);
                }
                else {
                    decrement_ref_count_object(left_type, var_->mCValueName, info);
                    come_value.c_value = xsprintf("%s=%s", var_->mCValueName, right_value.c_value);
                }
                come_value.type = clone left_type;
                come_value.var = var_;
                
                info.stack.push_back(come_value);
                
                add_come_last_code(info, "%s;\n", come_value.c_value);
            }
            else {
                if(left_type->mHeap && !right_type->mHeap) {
                    if(right_type->mClass->mName === "void" && right_type->mPointerNum == 1)
                    {
                    }
                    else {
                        if(!right_type->mDelegate && !right_type->mShare) {
                            err_msg(info, "require right value as heap object(%s)", self.name);
                            return false;
                        }
                    }
                }
                
                check_assign_type(s"\{self.name} is assining to", left_type, right_type, right_value);
                come_value.c_value = xsprintf("%s=%s", var_->mCValueName, right_value.c_value);
                come_value.type = clone left_type;
                come_value.var = var_;
                
                info.stack.push_back(come_value);
                
                add_come_last_code(info, "%s;\n", come_value.c_value);
            }
            
            if(self.alloc && !left_type->mConstant && !left_type->mStatic) {
                if(left_type->mArrayNum.length() > 0) {
                    add_come_code(info, "%s;\n", make_define_var(left_type, var_->mCValueName));
                }
                else {
                    add_come_code_at_function_head(info, "%s;\n", make_define_var(left_type, var_->mCValueName));
                }
            }
        }
    }
    
    return true;
}

int sStoreNode*::sline(sStoreNode* self, sInfo* info)
{
    return self.sline;
}

string sStoreNode*::sname(sStoreNode* self, sInfo* info)
{
    return string(self.sname);
}

sNode*% store_var(string name, list<string>*% multiple_assign, sType*% type, bool alloc, sNode*% right_node, sInfo* info)
{
    sNode*% result = new sStoreNode(name, multiple_assign, null@multiple_declare, type, alloc, right_node, null@array_initializer, info) implements sNode;
    
    //result = post_position_operator4(result, info);
    
    return result;
}

struct sLoadNode
{
    string name;
    int sline;
    string sname;
};

sLoadNode*% sLoadNode*::initialize(sLoadNode*% self, string name, sInfo* info)
{
    self.name = string(name);
    
    self.sline = info->sline;
    self.sname = string(info->sname);
    
    return self;
}

bool sLoadNode*::terminated()
{
    return false;
}

string sLoadNode*::kind()
{
    return string("sLoadNode");
}

bool sLoadNode*::compile(sLoadNode* self, sInfo* info)
{
    sClass* current_stack_frame_struct = info->current_stack_frame_struct;
    
    if(current_stack_frame_struct && info.lv_table.mVars[self.name] == null) {
        sVar* parent_var = get_variable_from_table(info.lv_table->mParent, self.name);
        
        if(parent_var != null) {
            if(parent_var->mFunName !== info.come_fun.mName) {
                CVALUE*% come_value = new CVALUE;
                
                sType* type = parent_var->mType;
                
                come_value.c_value = xsprintf("(*(parent->%s))", parent_var->mCValueName);
                
                come_value.type = clone type;
                come_value.var = null;
                
                add_come_last_code(info, "%s;\n", come_value.c_value);
                
                info.stack.push_back(come_value);
                
                return true;
            }
        }
    }
    
    sVar* var_ = get_variable_from_table(info.lv_table, self.name);
    
    if(var_ == null) {
        var_ = get_variable_from_table(info.gv_table, self.name);
        
        if(var_ == null) {
            sFun* fun = info.funcs[self.name];
            
            if(fun) {
                CVALUE*% come_value = new CVALUE;
                
                come_value.c_value = xsprintf("%s", fun->mName);
                come_value.type = fun->mLambdaType;
                come_value.var = null;
                
                info.stack.push_back(come_value);
                
                return true;
            }
            else {
                err_msg(info, "var not found(%s)(Z) at loading variable\n", self.name);
                return true;
            }
        }
    }
    
    CVALUE*% come_value = new CVALUE;
    come_value.c_value = xsprintf("%s", var_->mCValueName);
    come_value.type = clone var_->mType;
    come_value.var = var_;
    
    info.stack.push_back(come_value);
    
    if(come_value.type->mArrayNum.length() == 1) {
        come_value.type->mOriginalLoadVarType.v1 = clone come_value.type;
        
        come_value.type->mArrayNum.reset();
        come_value.type->mPointerNum++;
        come_value.type->mOriginalTypeNamePointerNum = come_value.type->mPointerNum;
    }
    
    return true;
}

int sLoadNode*::sline(sLoadNode* self, sInfo* info)
{
    return self.sline;
}

string sLoadNode*::sname(sLoadNode* self, sInfo* info)
{
    return string(self.sname);
}

sNode*% load_var(string name, sInfo* info)
{
    return new sLoadNode(name, info) implements sNode;
}

struct sFunLoadNode
{
    string name;
    int sline;
    string sname;
};

sFunLoadNode*% sFunLoadNode*::initialize(sFunLoadNode*% self, string name, sInfo* info)
{
    self.name = string(name);
    
    self.sline = info->sline;
    self.sname = string(info->sname);
    
    return self;
}

bool sFunLoadNode*::terminated()
{
    return false;
}

string sFunLoadNode*::kind()
{
    return string("sFunLoadNode");
}

bool sFunLoadNode*::compile(sFunLoadNode* self, sInfo* info)
{
    sFun* fun = info.funcs[self.name];
    
    if(fun == null) {
        err_msg(info, "fun not found(%s) at loading variable\n", self.name);
        return false;
    }
    else {
        CVALUE*% come_value = new CVALUE;
        
        come_value.c_value = xsprintf("%s", fun->mName);
        come_value.type = fun->mLambdaType;
        come_value.var = null;
        
        info.stack.push_back(come_value);
    }
    
    return true;
}

int sFunLoadNode*::sline(sFunLoadNode* self, sInfo* info)
{
    return self.sline;
}

string sFunLoadNode*::sname(sFunLoadNode* self, sInfo* info)
{
    return string(self.sname);
}


void add_variable_to_table(char* name, sType*% type, sInfo* info)
{
    sVar*% self = new sVar;
    
    self->mName = string(name);
    self->mType = clone type;
    
    if(type->mFunctionParam) {
        self->mCValueName = string(name);
    }
    else {
        static int n = 0;
        self->mCValueName = xsprintf("%s_%d", name, n++);
    }
    
    self->mBlockLevel = info->block_level;
    self->mAllocaValue = false;
    self->mFunctionParam = false;
    self->mNoFree = false;
    if(info.come_fun) {
        self->mFunName = clone info.come_fun.mName;
    }
    else {
        self->mFunName = null;
    }
    
    info.lv_table.mVars.insert(string(name), self);
}

void add_variable_to_global_table(char* name, sType*% type, sInfo* info)
{
    sVar*% self = new sVar;
    
    self->mName = string(name);
    self->mType = clone type;
    
    self->mGlobal = true;
    
    self->mCValueName = string(name);
    
    self->mBlockLevel = info->block_level;
    self->mAllocaValue = false;
    self->mFunctionParam = false;
    self->mNoFree = false;
    
    info.gv_table.mVars.insert(string(name), self);
}

void add_variable_to_global_table_with_int_value(char* name, sType*% type, char* c_value, sInfo* info)
{
    sVar*% self = new sVar;
    
    self->mName = string(name);
    self->mType = clone type;
    
    self->mGlobal = true;
    
    self->mCValueName = string(c_value);
    
    self->mBlockLevel = info->block_level;
    self->mAllocaValue = false;
    self->mFunctionParam = false;
    self->mNoFree = false;
    
    info.gv_table.mVars.insert(string(name), self);
}

exception sNode*% string_node(char* buf, char* head, int head_sline, sInfo* info) version 7
{
    bool is_type_name_flag = is_type_name(buf);
    
    /// back trace ///
    bool multiple_declare = false;
    if(is_type_name_flag)
    {
        char* p = info.p;
        int sline = info.sline;
        
        info.p = head;
        info.sline = head_sline;
        
        var type, name, err = parse_type(parse_variable_name:true);
        
        if(err && *info->p == ',') {
            multiple_declare = true;
        }
        
        info.p = p;
        info.sline = sline;
    }
    
    bool multiple_declare2 = false;
    if(is_type_name_flag)
    {
        char* p = info.p;
        int sline = info.sline;
        
        info.p = head;
        info.sline = head_sline;
        
        var type, name, err = parse_type(parse_variable_name:true);
        
        parse_sharp();
        
        if(err && *info->p == '=') {
            info->p++;
            skip_spaces_and_lf();
            
            parse_sharp();
            
            if(*info->p == '{') {
            }
            else {
                bool no_output_err = info->no_output_err;
                bool no_comma = info->no_comma;
                bool no_output_come_code = info->no_output_come_code;
                
                info->no_output_err = true;
                info->no_comma = true;
                info->no_output_come_code = true;
                
                sNode*% exp = expression();
                
                info->no_comma = no_comma;
                info->no_output_err = no_output_err;
                info->no_output_come_code = no_output_come_code;
                
                if(*info->p == ',') {
                    multiple_declare2 = true;
                }
            }
        }
        
        info.p = p;
        info.sline = sline;
    }
    
    parse_sharp();
    sFun* fun = info.funcs[buf];
    
    if(buf === "var" || buf === "auto") {
        parse_sharp();
        var buf2 = parse_word();
        parse_sharp();
        
        list<string>*% multiple_assign = null;
        
        if(*info->p == ',' ) {
            multiple_assign = new list<string>();
            multiple_assign.push_back(clone buf2);
            
            while(*info->p == ',') {
                info->p++;
                skip_spaces_and_lf();
                
                parse_sharp();
                var buf3 = parse_word();
                parse_sharp();
                
                multiple_assign.push_back(clone buf3);
            }
        }
        parse_sharp();
        
        if(*info->p == '=' && *(info->p+1) != '=') {
            info.p++;
            skip_spaces_and_lf();
            
            parse_sharp();
            bool no_comma = info->no_comma
            info.no_comma = true;
            sNode*% right_value = expression();
            info.no_comma = no_comma;
            parse_sharp();
            
            right_value = post_position_operator3(right_value, info);
            parse_sharp();
            
            sNode*% result = new sStoreNode(string(buf2)@name, multiple_assign, null@multiple_declare, null@type, true@alloc, right_value, null@array_initializer, info) implements sNode;
    
            //result = post_position_operator4(result, info);
            
            return some(result);
        }
        else {
            err_msg(info, "var requires a right value(%c)", *info->p);
            return none(null);
        }
    }
    else if(multiple_declare) {
        info.p = head;
        info.sline = head_sline;

        list<tuple3<sType*%, string,sNode*%>*%>*% multiple_declare = new list<tuple3<sType*%, string, sNode*%>*%>();
        
        var base_type, name, err = parse_type();
        
        tuple2<sType*%, string>*% variable_name = parse_variable_name(base_type, true@first, info);
        
        tuple3<sType*%, string, sNode*%>*% variable_name2 = (variable_name.v1, variable_name.v2, null);
        
        multiple_declare.push_back(variable_name2);
        
        while(*info->p == ',') {
            info->p++;
            skip_spaces_and_lf();
            
            tuple2<sType*%, string>*% variable_name = parse_variable_name(base_type, false@first, info);
        
            tuple3<sType*%, string, sNode*%>*% variable_name2 = (variable_name.v1, variable_name.v2, null);
            
            multiple_declare.push_back(variable_name2);
        }
        
        sNode*% result = new sStoreNode(string(buf)@name, null@multiple_assign, multiple_declare, base_type@type, true@alloc, null@right_value, null@array_initializer, info) implements sNode;
    
        //result = post_position_operator4(result, info);
        
        return some(result);
    }
    else if(multiple_declare2) {
        info.p = head;
        info.sline = head_sline;

        list<tuple3<sType*%, string,sNode*%>*%>*% multiple_declare = new list<tuple3<sType*%, string, sNode*%>*%>();
        
        var base_type, name, err = parse_type();
        
        tuple2<sType*%, string>*% variable_name = parse_variable_name(base_type, true@first, info);
        
        parse_sharp();
        
        if(*info->p == '=') {
            info->p++;
            skip_spaces_and_lf();
            
            parse_sharp();
            
            bool no_comma = info->no_comma;
            info->no_comma = true;
            sNode*% exp = expression();
            info->no_comma = no_comma;
            
            tuple3<sType*%, string, sNode*%>*% variable_name2 = (variable_name.v1, variable_name.v2, exp);
            
            multiple_declare.push_back(variable_name2);
        }
        
        while(*info->p == ',') {
            info->p++;
            skip_spaces_and_lf();
            
            tuple2<sType*%, string>*% variable_name = parse_variable_name(base_type, false@first, info);
            
            parse_sharp();
            
            if(*info->p == '=') {
                info->p++;
                skip_spaces_and_lf();
                
                parse_sharp();
                
                bool no_comma = info->no_comma;
                info->no_comma = true;
                sNode*% exp = expression();
                info->no_comma = no_comma;
            
                tuple3<sType*%, string, sNode*%>*% variable_name2 = (variable_name.v1, variable_name.v2, exp);
                
                multiple_declare.push_back(variable_name2);
            }
            else {
                break;
            }
        }
        
        sNode*% result = new sStoreNode(string(buf)@name, null@multiple_assign, multiple_declare, base_type@type, true@alloc, null@right_value, null@array_initializer, info) implements sNode;
    
        //result = post_position_operator4(result, info);
        
        return some(result);
    }
    else if(!is_type_name_flag && *info->p == '=' && *(info->p+1) != '=' && !info->no_assign) {
        info.p++;
        skip_spaces_and_lf();
        
        parse_sharp();
        sNode*% right_value = expression();
        parse_sharp();
        
        right_value = post_position_operator3(right_value, info);
        
        parse_sharp();
        
        sNode*% result = new sStoreNode(string(buf)@name, null@multiple_assign, null@multiple_declare, null@type, false@alloc, right_value, null@array_initializer, info) implements sNode;
    
        //result = post_position_operator4(result, info);
        
        return some(result);
    }
    else if(!is_type_name_flag || info.funcs[buf]) {
        sNode*% node = new sLoadNode(string(buf)@name, info) implements sNode;
        
        node = post_position_operator(node, info);
        
        node = post_position_operator3(node, info);
        
        return some(node);
    }
    else {
        info.p = head;
        info.sline = head_sline;
        
        string word = string("");
        if(xisalpha(*info->p) || *info->p == '_') {
            word = parse_word();
        }
        
        bool is_type_name_flag = is_type_name(word);
        
        info.p = head;
        info.sline = head_sline;
        
        if(is_type_name_flag) {
            parse_sharp();
            var type, name, err = parse_type(parse_variable_name:true);
            
            if(!err) {
                printf("%s %d: parse_type failed\n", info->sname, info->sline);
                return none(null);
            }
            parse_sharp();
            
            if(*info->p == '=') {
                info.p++;
                skip_spaces_and_lf();
                
                parse_sharp();
                
                if(*info->p == '{') {
                    buffer*% buf2 = new buffer();
                    
                    buf2.append_char(*info->p);
                    info->p++;
                    
                    bool squort = false;
                    bool dquort = false;
                    int nest = 1;
                    while(1) {
                        if(*info->p == '\0') {
                            err_msg(info, "unexpected source end in array initiailizer");
                            return none(null);
                        }
                        else if(*info->p == '\\') {
                            buf2.append_char(*info->p);
                            info->p++;
                            buf2.append_char(*info->p);
                            info->p++;
                        }
                        else if(!squort && *info->p == '"') {
                            buf2.append_char(*info->p);
                            info->p++;
                            dquort = !dquort;
                        }
                        else if(!dquort && *info->p == '\'') {
                            buf2.append_char(*info->p);
                            info->p++;
                            squort = !squort;
                        }
                        else if(squort || dquort) {
                            buf2.append_char(*info->p);
                            info->p++;
                        }
                        else if(*info->p == '{') {
                            nest++;
                            buf2.append_char(*info->p);
                            info->p++;
                        }
                        else if(*info->p == '}') {
                            nest--;
                            buf2.append_char(*info->p);
                            info->p++;
                            
                            if(nest == 0) {
                                skip_spaces_and_lf();
                                break;
                            }
                        }
                        else {
                            buf2.append_char(*info->p);
                            info->p++;
                        }
                    }
                    string array_initializer = buf2.to_string();
                    
                    sNode*% result = new sStoreNode(name, null@multiple_assign, null@multiple_declare, type, true@alloc, null@right_value, array_initializer@array_initializer, info) implements sNode;
    
                    //result = post_position_operator4(result, info);
                    
                    return some(result);
                }
                else {
                    parse_sharp();
                    sNode*% right_value = expression();
                    parse_sharp();
                    
                    list<sNode*%>*% right_values = new list<sNode*%>();
                    while(*info->p == ',') {
                        string
                    }
                    
                    right_value = post_position_operator3(right_value, info);
                    
                    sNode*% result = new sStoreNode(name, null@multiple_assign, null@multiple_declare, type, true@alloc, right_value, null@array_initializer, info) implements sNode;
    
                    //result = post_position_operator4(result, info);
                    
                    return some(result);
                }
            }
            else {
                sNode*% result = new sStoreNode(name, null@multiple_assign, null@multiple_declare, type, true@alloc, null@right_value, null@array_initializer, info) implements sNode;
    
                //result = post_position_operator4(result, info);
                
                return some(result);
            }
        }
    }
    
    sNode*% result = inherit(buf, head,head_sline, info).catch {
        return! none(null);
    }
    
    return some(result);
}

