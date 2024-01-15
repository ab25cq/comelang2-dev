#include "common.h"

struct sUnionNode
{
    sType*% mType;
  
    int sline;
    string sname;
    
    bool mOutput;
};

sUnionNode*% sUnionNode*::initialize(sUnionNode*% self, sType*% type, bool output, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);

    self.mType = clone type;
    
    info.types.insert(string(type.mClass.mName), clone type);
    
    self.mOutput = output;

    return self;
}

bool sUnionNode*::terminated()
{
    return true;
}

string sUnionNode*::kind()
{
    return string("sUnionNode");
}

bool sUnionNode*::compile(sUnionNode* self, sInfo* info)
{
    sType* type = self.mType;
    sClass* klass = type->mClass;
    
    if(!klass->mOutputed) {
        klass->mOutputed = true;
        
        if(klass.mFields.length() > 0) {
            buffer*% buf = new buffer();
            
            buf.append_str(xsprintf("union %s\n{\n", type.mClass.mName));
            
            foreach(it, klass.mFields) {
                var name, type = it;
                
                buf.append_str(make_define_var(type, name));
                buf.append_str(";\n");
            }
            
            buf.append_str(xsprintf("};\n"));
            
            if(info.output_header_file && klass.mDeclareSName !== info->base_sname) {
            }
            else {
                if(self.mOutput) {
                    add_come_code_at_source_head(info, "%s", buf.to_string());
                }
            }
        }
    }

    return true;
}

int sUnionNode*::sline(sUnionNode* self, sInfo* info)
{
    return self.sline;
}

string sUnionNode*::sname(sUnionNode* self, sInfo* info)
{
    return string(self.sname);
}

sNode*% parse_union(string type_name, sInfo* info)
{
    sClass*% klass;
    bool output;
    if(info.classes.at(type_name, null) == null) {
        output = true;
        klass = new sClass(name:string(type_name), union_:true);
        info.classes.insert(string(type_name), clone klass);
    }
    else {
        output = false;
        klass = clone info.classes.at(type_name, null);
    }
    
    sType*% type = new sType(type_name);
    
    expected_next_character('{');
    
    type.mClass.mFields.reset();
    
    while(true) {
        var type2, name, err = parse_type(parse_variable_name:true);
        
        if(!err) {
            printf("%s %d: parse_type failed\n", info->sname, info->sline);
            exit(2);
        }
        expected_next_character(';');
        
        if(!info.no_output_err) {
            type.mClass.mFields.push_back(new tuple2<string, sType*%>(name, type2));
        }
        
        if(*info->p == '}') {
            info->p++;
            skip_spaces_and_lf();
            break;
        }
    }
    
    return new sUnionNode(type, output, info) implements sNode;
}

sNode*% top_level(string buf, char* head, int head_sline, sInfo* info) version 97
{
    if(buf === "union") {
        string type_name = parse_word();
        
        info.classes.insert(type_name, new sClass(name:string(type_name), union_:true));
        
        sType*% type = new sType(type_name);
        
        expected_next_character('{');
        
        type.mClass.mFields.reset();
        
        while(true) {
            var type2, name, err = parse_type(parse_variable_name:true);
            if(!err) {
                printf("%s %d: parse_type failed\n", info->sname, info->sline);
                exit(2);
            }
            expected_next_character(';');
            
            type.mClass.mFields.push_back(new tuple2<string, sType*%>(name, type2));
            
            if(*info->p == '}') {
                info->p++;
                skip_spaces_and_lf();
                break;
            }
        }
        
        return new sUnionNode(type, true@output, info) implements sNode;
    }
    
    return inherit(string(buf), head, head_sline, info);
}


sNode*% string_node(char* buf, char* head, int head_sline, sInfo* info) version 15
{
    bool define_struct = false;
    {
        char* p = info.p;
        int sline = info.sline;
        
        if(buf === "union") {
            string type_name = parse_word();
            
            if(*info->p == '{') {
                skip_block();
                
                if(*info->p == ';') {
                    define_struct = true;
                }
            }
        }
        
        info.p = p;
        info.sline = sline;
    }
    
    if(define_struct) {
        string type_name = parse_word();
        
        return some(parse_union(type_name, info));
    }
    
    sNode*% result = inherit(buf, head, head_sline, info).catch {
        return! none(null);
    }
    
    return some(result);
}
