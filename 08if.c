#include "common.h"

struct sIfNode
{
  sNode*% mExpressionNode;
  sBlock*% mIfBlock;
  list<sNode*%>*% mElifExpressionNodes;
  list<sBlock*%>*% mElifBlocks;
  int mElifNum;
  sBlock*% mElseBlock;
  
  int sline;
  string sname;
};


sIfNode*% sIfNode*::initialize(sIfNode*% self, sNode*% expression_node, sBlock* if_block, list<sNode*%>* elif_expression_nodes, list<sBlock*%>* elif_blocks, int elif_num, sBlock* else_block, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);

    self.mExpressionNode = clone expression_node;
    self.mIfBlock = clone if_block;
    self.mElifExpressionNodes = clone elif_expression_nodes;
    self.mElifBlocks = clone elif_blocks;
    self.mElifNum = elif_num;
    
    if(else_block) {
        self.mElseBlock = clone else_block;
    }
    else {
        self.mElseBlock = null;
    }

    return self;
}

bool sIfNode*::terminated()
{
    return true;
}

string sIfNode*::kind()
{
    return string("sIfNode");
}

bool sIfNode*::compile(sIfNode* self, sInfo* info)
{
    sBlock* else_block = self.mElseBlock;
    int elif_num = self.mElifNum;
    
    /// compile expression ///
    sNode* expression_node = self.mExpressionNode;
    
    int sline = info.sline;
    char* sname = info.sname;
    
    info.writing_source_file_position = true;

    info.without_semicolon = true;
    if(!node_compile(expression_node)) {
        return false;
    }
    info.without_semicolon = false;

    CVALUE*% conditional_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);

    sBlock* if_block = self.mIfBlock;
    
    static int num_if_conditional = 0;
    add_come_code_at_function_head(info, "_Bool _if_conditional%d;\n", ++num_if_conditional);
    int num_if_conditional_stack = num_if_conditional;
    
    add_come_code(info, "if(_if_conditional%d=%s,", num_if_conditional, conditional_value.c_value);
    add_last_code_to_source_with_comma(info);
    free_right_value_objects(info, comma:true);
    add_come_code(info, "_if_conditional%d) {\n", num_if_conditional_stack);

    transpile_block(if_block, null, null, info);
    
    add_come_code(info, "}\n");

    //// elif ///
    if(elif_num > 0) {
        for(int i=0; i<elif_num; i++) {
            sNode* expression_node2 = self.mElifExpressionNodes[i];

            info.writing_source_file_position = true;
            info.without_semicolon = true;
            if(!node_compile(expression_node2)) {
                return false;
            }
            info.without_semicolon = false;

            CVALUE*% conditional_value = get_value_from_stack(-1, info);
            dec_stack_ptr(1, info);

            sBlock* elif_node_block = self.mElifBlocks[i];
            
            static int num_elif_conditional = 0;
            add_come_code_at_function_head(info, "_Bool _elif_conditional%d;\n", ++num_elif_conditional);
            int num_elif_conditional_stack = num_elif_conditional;

            add_come_code(info, "else if(_elif_conditional%d=%s,", num_elif_conditional, conditional_value.c_value);
            add_last_code_to_source_with_comma(info);
            free_right_value_objects(info, comma:true);
            add_come_code(info, "_elif_conditional%d) {\n", num_elif_conditional_stack);
            
            transpile_block(elif_node_block, null, null, info);

            add_come_code(info, "}\n");
        }
    }

    if(else_block) {
        add_come_code(info, "else {\n");

        transpile_block(else_block, null, null, info);
        
        add_come_code(info, "}\n");
    }
    
    transpiler_clear_last_code(info);

    return true;
}

int sIfNode*::sline(sIfNode* self, sInfo* info)
{
    return self.sline;
}

string sIfNode*::sname(sIfNode* self, sInfo* info)
{
    return string(self.sname);
}

struct sOrStatmentNode
{
  sNode*% mExpressionNode;
  sBlock*% mIfBlock;
  
  int sline;
  string sname;
};


sOrStatmentNode*% sOrStatmentNode*::initialize(sOrStatmentNode*% self, sNode*% expression_node, sBlock* if_block, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);

    self.mExpressionNode = clone expression_node;
    self.mIfBlock = clone if_block;

    return self;
}

bool sOrStatmentNode*::terminated()
{
    return true;
}

string sOrStatmentNode*::kind()
{
    return string("sOrStatmentNode");
}

bool sOrStatmentNode*::compile(sOrStatmentNode* self, sInfo* info)
{
    /// compile expression ///
    sNode* expression_node = self.mExpressionNode;

    info.without_semicolon = true;
    if(!node_compile(expression_node)) {
        return false;
    }
    info.without_semicolon = false;
    

    CVALUE*% conditional_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);

    sBlock* if_block = self.mIfBlock;
    
    static int num_or_conditional = 0;
    add_come_code_at_function_head(info, "_Bool _or_conditional%d;\n", ++num_or_conditional);
    
    add_come_code(info, "if(_or_conditional%d=%s,", num_or_conditional, conditional_value.c_value);
    int num_or_conditional_stack = num_or_conditional;
    add_last_code_to_source_with_comma(info);
    free_right_value_objects(info, comma:true);
    add_come_code(info, "_or_conditional%d != 0) {\n", num_or_conditional_stack);

    transpile_block(if_block, null, null, info);
    
    add_come_code(info, "}\n");
    
    transpiler_clear_last_code(info);
    
//    info.stack.push_back(conditional_value);
//    add_come_last_code(info, "%s;\n", conditional_value.c_value);

    return true;
}

int sOrStatmentNode*::sline(sOrStatmentNode* self, sInfo* info)
{
    return self.sline;
}

string sOrStatmentNode*::sname(sOrStatmentNode* self, sInfo* info)
{
    return string(self.sname);
}

struct sAndStatmentNode
{
  sNode*% mExpressionNode;
  sBlock*% mIfBlock;
  
  int sline;
  string sname;
};


sAndStatmentNode*% sAndStatmentNode*::initialize(sAndStatmentNode*% self, sNode*% expression_node, sBlock* if_block, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);

    self.mExpressionNode = clone expression_node;
    self.mIfBlock = clone if_block;

    return self;
}

bool sAndStatmentNode*::terminated()
{
    return true;
}

string sAndStatmentNode*::kind()
{
    return string("sAndStatmentNode");
}

bool sAndStatmentNode*::compile(sAndStatmentNode* self, sInfo* info)
{
    /// compile expression ///
    sNode* expression_node = self.mExpressionNode;

    info.without_semicolon = true;
    if(!node_compile(expression_node)) {
        return false;
    }
    info.without_semicolon = false;
    

    CVALUE*% conditional_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);

    sBlock* if_block = self.mIfBlock;
    
    static int num_and_conditional = 0;
    add_come_code_at_function_head(info, "_Bool _and_conditional%d;\n", ++num_and_conditional);
    
    add_come_code(info, "if(_and_conditional%d=%s,", num_and_conditional, conditional_value.c_value);
    int num_and_conditional_stack = num_and_conditional;
    add_last_code_to_source_with_comma(info);
    free_right_value_objects(info, comma:true);
    add_come_code(info, "_and_conditional%d == 0) {\n", num_and_conditional_stack);

    transpile_block(if_block, null, null, info);
    
    add_come_code(info, "}\n");
    
    transpiler_clear_last_code(info);
    
//    info.stack.push_back(conditional_value);
//    add_come_last_code(info, "%s;\n", conditional_value.c_value);
    
    return true;
}

int sAndStatmentNode*::sline(sAndStatmentNode* self, sInfo* info)
{
    return self.sline;
}

string sAndStatmentNode*::sname(sAndStatmentNode* self, sInfo* info)
{
    return string(self.sname);
}

sNode*% parse_if_method_call(sNode*% expression_node, sInfo* info)
{
    string sname = clone info->sname;
    int sline = info->sline;
    
    parse_sharp();

    sBlock*% if_block = parse_block();
    
    list<sNode*%>*% elif_expression_nodes = new list<sNode*%>();

    list<sBlock*%>*% elif_blocks = new list<sBlock*%>();

    int elif_num = 0;

    sBlock*% else_block = null;

    while(1) {
        char* saved_p = info->p;
        int saved_sline = info->sline;
        parse_sharp();

        /// else ///
        if(!xisalpha(*info->p)) {
            break;
        }
        parse_sharp();
        string buf = parse_word();
        parse_sharp();

        if(buf === "else") {
            if(parsecmp("if", info)) {
                parse_sharp();
                info->p+=strlen("if");
                skip_spaces_and_lf();
                parse_sharp();

                expected_next_character('(');

                /// expression ///
                sNode*% expression_node = expression();
                
                elif_expression_nodes.push_back(expression_node);

                expected_next_character(')');
                parse_sharp();

                
                sBlock*% elif_block = parse_block();
                
                elif_blocks.push_back(elif_block);

                elif_num++;
            }
            else {
                else_block = parse_block();
                break;
            }
        }
        else {
            info->p = saved_p;
            info->sline = saved_sline;
            break;
        }
    };

    sNode*% result = new sIfNode(expression_node, if_block, elif_expression_nodes, elif_blocks, elif_num, else_block, info) implements sNode;
    
    return result;
}

sNode*% parse_elif_method_call(sNode*% expression_node, sInfo* info)
{
    string sname = clone info->sname;
    int sline = info->sline;
    
    parse_sharp();
    
    sNode*% expression_node2 = craete_logical_denial(expression_node, info);

    sBlock*% if_block = parse_block();
    
    list<sNode*%>*% elif_expression_nodes = new list<sNode*%>();

    list<sBlock*%>*% elif_blocks = new list<sBlock*%>();

    int elif_num = 0;

    sBlock*% else_block = null;

    while(1) {
        char* saved_p = info->p;
        int saved_sline = info->sline;
        parse_sharp();

        /// else ///
        if(!xisalpha(*info->p)) {
            break;
        }
        parse_sharp();
        string buf = parse_word();
        parse_sharp();

        if(buf === "else") {
            if(parsecmp("if", info)) {
                parse_sharp();
                info->p+=strlen("if");
                skip_spaces_and_lf();
                parse_sharp();

                expected_next_character('(');

                /// expression ///
                sNode*% expression_node = expression();
                
                elif_expression_nodes.push_back(expression_node);

                expected_next_character(')');
                parse_sharp();

                
                sBlock*% elif_block = parse_block();
                
                elif_blocks.push_back(elif_block);

                elif_num++;
            }
            else {
                else_block = parse_block();
                break;
            }
        }
        else {
            info->p = saved_p;
            info->sline = saved_sline;
            break;
        }
    };

    sNode*% result = new sIfNode(expression_node2, if_block, elif_expression_nodes, elif_blocks, elif_num, else_block, info) implements sNode;
    
    return result;
}

sNode*% string_node(char* buf, char* head, int head_sline, sInfo* info) version 8
{
    if(buf === "if") {
        string sname = clone info->sname;
        int sline = info->sline;
        
        parse_sharp();
    
        expected_next_character('(');
    
        /// expression ///
        sNode*% expression_node = expression();
        
        expected_next_character(')');
        parse_sharp();
    
        sBlock*% if_block = parse_block();
        
        list<sNode*%>*% elif_expression_nodes = new list<sNode*%>();
    
        list<sBlock*%>*% elif_blocks = new list<sBlock*%>();
    
        int elif_num = 0;
    
        sBlock*% else_block = null;
    
        while(1) {
            char* saved_p = info->p;
            int saved_sline = info->sline;
            parse_sharp();
    
            /// else ///
            if(!xisalpha(*info->p)) {
                break;
            }
            parse_sharp();
            string buf = parse_word();
            parse_sharp();
    
            if(buf === "else") {
                if(parsecmp("if", info)) {
                    parse_sharp();
                    info->p+=strlen("if");
                    skip_spaces_and_lf();
                    parse_sharp();
    
                    expected_next_character('(');
    
                    /// expression ///
                    sNode*% expression_node = expression();
                    
                    elif_expression_nodes.push_back(expression_node);
    
                    expected_next_character(')');
                    parse_sharp();
    
                    
                    sBlock*% elif_block = parse_block();
                    
                    elif_blocks.push_back(elif_block);
    
                    elif_num++;
                }
                else {
                    else_block = parse_block();
                    break;
                }
            }
            else {
                info->p = saved_p;
                info->sline = saved_sline;
                break;
            }
        };
    
        sNode*% result = new sIfNode(expression_node, if_block, elif_expression_nodes, elif_blocks, elif_num, else_block, info) implements sNode;
        
        return some(result);
    }
    
    sNode*% result = inherit(buf, head,head_sline, info).catch {
        return! none(null);
    }
    
    return some(result);
}

sNode*% parse_or_statment(sNode*% expression_node, sInfo* info)
{
    string sname = clone info->sname;
    int sline = info->sline;
    
    parse_sharp();

    sBlock*% if_block = parse_block();
    
    return new sOrStatmentNode(expression_node, if_block, info) implements sNode;
}

sNode*% parse_and_statment(sNode*% expression_node, sInfo* info)
{
    string sname = clone info->sname;
    int sline = info->sline;
    
    parse_sharp();

    sBlock*% if_block = parse_block();
    
    return new sAndStatmentNode(expression_node, if_block, info) implements sNode;
}
