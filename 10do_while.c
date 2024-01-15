#include "common.h"

struct sDoWhileNode
{
  sNode*% mExpressionNode;
  sBlock*% mBlock;
  
  int sline;
  string sname;
};


sDoWhileNode*% sDoWhileNode*::initialize(sDoWhileNode*% self, sNode*% expression_node, sBlock* block, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);

    self.mExpressionNode = clone expression_node;
    self.mBlock = clone block;

    return self;
}

bool sDoWhileNode*::terminated()
{
    return true;
}

string sDoWhileNode*::kind()
{
    return string("sDoWhileNode");
}

bool sDoWhileNode*::compile(sDoWhileNode* self, sInfo* info)
{
    bool in_loop = info.in_loop;
    info.in_loop = true;
    
    sBlock* block = self.mBlock;

    add_come_code(info, "do {\n");

    transpile_block(block, null, null, info, false, true);
    
    /// compile expression ///
    sNode* expression_node = self.mExpressionNode;

    info.writing_source_file_position = true;
    info.without_semicolon = true;
    if(!node_compile(expression_node)) {
        return false;
    }
    info.without_semicolon = false;

    CVALUE*% conditional_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    static int num_while_condtional = 0;
    add_come_code_at_function_head(info, "_Bool _do_while_condtional%d;\n", ++num_while_condtional);
    int num_while_conditional_stack = num_while_condtional;

    add_come_code(info, "} while(_do_while_condtional%d=%s,", num_while_condtional, conditional_value.c_value);
    add_last_code_to_source_with_comma(info);
    free_right_value_objects(info, comma:true);
    add_come_code(info, "_do_while_condtional%d);\n", num_while_conditional_stack);
    
    transpiler_clear_last_code(info);
    
    info.in_loop = in_loop;

    return true;
}

int sDoWhileNode*::sline(sDoWhileNode* self, sInfo* info)
{
    return self.sline;
}

string sDoWhileNode*::sname(sDoWhileNode* self, sInfo* info)
{
    return string(self.sname);
}

sNode*% string_node(char* buf, char* head, int head_sline, sInfo* info) version 10
{
    if(buf === "do") {
        string sname = clone info->sname;
        int sline = info->sline;
    
        sBlock*% block = parse_block();
        
        string buf2 = parse_word();
        
        if(buf2 !== "while") {
            err_msg(info, "require while");
            exit(2);
        }
    
        expected_next_character('(');
    
        /// expression ///
        sNode*% expression_node = expression();
        
        expected_next_character(')');
    
        return some(new sDoWhileNode(expression_node, block, info) implements sNode);
    }
    
    sNode*% result = inherit(buf, head,head_sline, info).catch {
        return! none(null);
    }
    
    return some(result);
}
