#include "common.h"

struct sIntNode
{
    int value;
    int sline;
    string sname;
};

sIntNode*% sIntNode*::initialize(sIntNode*% self, int value, sInfo* info)
{
    self.value = value;
    
    self.sline = info->sline;
    self.sname = string(info->sname);
    
    return self;
}

string sIntNode*::kind()
{
    return string("sIntNode");
}

bool sIntNode*::compile(sIntNode* self, sInfo* info)
{
    CVALUE*% come_value = new CVALUE;
    
    come_value.c_value = xsprintf("%d", self.value);
    come_value.type = new sType("int");
    come_value.var = null;
    
    info.stack.push_back(come_value);
    
    add_come_last_code(info, "%s;\n", come_value.c_value);
    
    return true;
}

bool sIntNode*::terminated()
{
    return false;
}

int sIntNode*::sline(sIntNode* self, sInfo* info)
{
    return self.sline;
}

string sIntNode*::sname(sIntNode* self, sInfo* info)
{
    return string(self.sname);
}

struct sUIntNode
{
    unsigned int value;
    int sline;
    string sname;
};

sUIntNode*% sUIntNode*::initialize(sUIntNode*% self, unsigned int value, sInfo* info)
{
    self.value = value;
    
    self.sline = info->sline;
    self.sname = string(info->sname);
    
    return self;
}

bool sUIntNode*::terminated()
{
    return false;
}

string sUIntNode*::kind()
{
    return string("sUIntNode");
}

bool sUIntNode*::compile(sUIntNode* self, sInfo* info)
{
    CVALUE*% come_value = new CVALUE;
    
    come_value.c_value = xsprintf("%u", self.value);
    come_value.type = new sType("int");
    come_value.var = null;
    
    info.stack.push_back(come_value);
    
    add_come_last_code(info, "%s;\n", come_value.c_value);
    
    return true;
}

int sUIntNode*::sline(sUIntNode* self, sInfo* info)
{
    return self.sline;
}

string sUIntNode*::sname(sUIntNode* self, sInfo* info)
{
    return string(self.sname);
}

struct sLongNode
{
    long value;
    int sline;
    string sname;
};

sLongNode*% sLongNode*::initialize(sLongNode*% self, unsigned long value, sInfo* info)
{
    self.value = value;
    
    self.sline = info->sline;
    self.sname = string(info->sname);
    
    return self;
}

string sLongNode*::kind()
{
    return string("sLongNode");
}

bool sLongNode*::compile(sLongNode* self, sInfo* info)
{
    CVALUE*% come_value = new CVALUE;
    
    come_value.c_value = xsprintf("%ld", self.value);
    come_value.type = new sType("long");
    come_value.var = null;
    
    info.stack.push_back(come_value);
    
    add_come_last_code(info, "%s;\n", come_value.c_value);
    
    return true;
}

bool sLongNode*::terminated()
{
    return false;
}

int sLongNode*::sline(sLongNode* self, sInfo* info)
{
    return self.sline;
}

string sLongNode*::sname(sLongNode* self, sInfo* info)
{
    return string(self.sname);
}

struct sULongNode
{
    unsigned long value;
    int sline;
    string sname;
};

sULongNode*% sULongNode*::initialize(sULongNode*% self, unsigned long value, sInfo* info)
{
    self.value = value;
    
    self.sline = info->sline;
    self.sname = string(info->sname);
    
    return self;
}

string sULongNode*::kind()
{
    return string("sULongNode");
}

bool sULongNode*::compile(sULongNode* self, sInfo* info)
{
    CVALUE*% come_value = new CVALUE;
    
    come_value.c_value = xsprintf("%lu", self.value);
    come_value.type = new sType("long");
    come_value.var = null;
    
    info.stack.push_back(come_value);
    
    add_come_last_code(info, "%s;\n", come_value.c_value);
    
    return true;
}

bool sULongNode*::terminated()
{
    return false;
}

int sULongNode*::sline(sULongNode* self, sInfo* info)
{
    return self.sline;
}

string sULongNode*::sname(sULongNode* self, sInfo* info)
{
    return string(self.sname);
}

struct sFloatNode
{
    float value;
    int sline;
    string sname;
};

sFloatNode*% sFloatNode*::initialize(sFloatNode*% self, float value, sInfo* info)
{
    self.value = value;
    
    self.sline = info->sline;
    self.sname = string(info->sname);
    
    return self;
}

string sFloatNode*::kind()
{
    return string("sFloatNode");
}

bool sFloatNode*::compile(sFloatNode* self, sInfo* info)
{
    CVALUE*% come_value = new CVALUE;
    
    come_value.c_value = xsprintf("%f", self.value);
    come_value.type = new sType("float");
    come_value.var = null;
    
    info.stack.push_back(come_value);
    
    add_come_last_code(info, "%s;\n", come_value.c_value);
    
    return true;
}

bool sFloatNode*::terminated()
{
    return false;
}

int sFloatNode*::sline(sFloatNode* self, sInfo* info)
{
    return self.sline;
}

string sFloatNode*::sname(sFloatNode* self, sInfo* info)
{
    return string(self.sname);
}

struct sDoubleNode
{
    double value;
    int sline;
    string sname;
};

sDoubleNode*% sDoubleNode*::initialize(sDoubleNode*% self, double value, sInfo* info)
{
    self.value = value;
    
    self.sline = info->sline;
    self.sname = string(info->sname);
    
    return self;
}

string sDoubleNode*::kind()
{
    return string("sDoubleNode");
}

bool sDoubleNode*::compile(sDoubleNode* self, sInfo* info)
{
    CVALUE*% come_value = new CVALUE;
    
    come_value.c_value = xsprintf("%lf", self.value);
    come_value.type = new sType("double");
    come_value.var = null;
    
    info.stack.push_back(come_value);
    
    add_come_last_code(info, "%s;\n", come_value.c_value);
    
    return true;
}

bool sDoubleNode*::terminated()
{
    return false;
}

int sDoubleNode*::sline(sDoubleNode* self, sInfo* info)
{
    return self.sline;
}

string sDoubleNode*::sname(sDoubleNode* self, sInfo* info)
{
    return string(self.sname);
}

sNode*% get_number(bool minus, sInfo* info)
{
    const int buf_size = 128;
    char buf[128+1];
    char* p2 = buf;

    if(minus) {
        *p2 = '-';
        p2++;
    }

    if(xisdigit(*info->p)) {
        while(xisdigit(*info->p) || *info->p == '_') {
            if(*info->p ==  '_') {
                info->p++;
            }
            else {
                *p2++ = *info->p;
                info->p++;
            }

            if(p2 - buf >= buf_size) {
                printf("%s %d: overflow node of number\n", info->sname, info->sline);
                exit(5);
            }
        };
        *p2 = 0;
        skip_spaces_and_lf();
        
        char c = *(info->p+1);

        if(*info->p == '.' && xisdigit(c)) {
            *p2++ = *info->p;
            
            if(p2 - buf >= buf_size) {
                printf("%s %d: overflow node of number", info->sname, info->sline);
                exit(11);
            }
            
            info->p++;
            skip_spaces_and_lf();
            
            while(xisdigit(*info->p) || *info->p == '_') {
                if(*info->p ==  '_') {
                    info->p++;
                }
                else {
                    *p2++ = *info->p;
                    info->p++;
                }
    
                if(p2 - buf >= buf_size) {
                    err_msg(info, "overflow node of number");
                    exit(2);
                }
            }
            
            if(*info->p == 'e') {
                *p2++ = *info->p;
                info->p++;
    
                if(p2 - buf >= buf_size) {
                    err_msg(info, "overflow node of number");
                    exit(2);
                }
                
                if(*info->p == '+') {
                    *p2++ = *info->p;
                    info->p++;
        
                    if(p2 - buf >= buf_size) {
                        err_msg(info, "overflow node of number");
                        exit(2);
                    }
                }
                else if(*info->p == '-') {
                    *p2++ = *info->p;
                    info->p++;
        
                    if(p2 - buf >= buf_size) {
                        err_msg(info, "overflow node of number");
                        exit(2);
                    }
                }
                else {
                    err_msg(info, "invalid float value");
                    exit(2);
                }
            
                while(xisdigit(*info->p) || *info->p == '_') {
                    if(*info->p ==  '_') {
                        info->p++;
                    }
                    else {
                        *p2++ = *info->p;
                        info->p++;
                    }
        
                    if(p2 - buf >= buf_size) {
                        err_msg(info, "overflow node of number");
                        exit(2);
                    }
                };
            }
            *p2 = 0;
            skip_spaces_and_lf();
            
            if(*info->p == 'f' || *info->p == 'F') {
                info->p++;
                skip_spaces_and_lf();
                
                return new sFloatNode(strtof(buf, NULL), info) implements sNode;
            }
            else if(*info->p == 'l' || *info->p == 'L') {
                info->p++;
                skip_spaces_and_lf();
                
                return new sDoubleNode(strtod(buf, NULL), info) implements sNode;
            }
            else {
                return new sDoubleNode(strtod(buf, NULL), info) implements sNode;
            }
        }
        else if(*info->p == 'u' || *info->p == 'U')
        {
            info->p++;
            skip_spaces_and_lf();

            if(*info->p == 'L' || *info->p == 'l')
            {
                info->p++;
                skip_spaces_and_lf();

                if(*info->p == 'L' || *info->p == 'l')
                {
                    info->p++;
                    skip_spaces_and_lf();
                    
                    unsigned long lont int value2 = strtoull(buf, NULL, 0);

                    return new sULongNode(value2, info) implements sNode;
                }
                else {
                    unsigned long lont int value = strtoull(buf, NULL, 0);
                    return new sULongNode(value, info) implements sNode;
                }
            }
            else {
                unsigned int value = strtoul(buf, NULL, 0);
                return new sUIntNode(value, info) implements sNode;
            }
        }
        else if(*info->p == 'L' || *info->p == 'l') {
            info->p++;
            skip_spaces_and_lf();

            if(*info->p == 'L' || *info->p == 'l')
            {
                info->p++;
                skip_spaces_and_lf();
                
                unsigned long long int value = strtoull(buf, NULL, 0);

                return new sLongNode(value, info) implements sNode;
            }
            else if(*info->p == 'U' || *info->p == 'u')
            {
                info->p++;
                skip_spaces_and_lf();
                
                unsigned long long int value = strtoull(buf, NULL, 0);

                return new sULongNode(value, info) implements sNode;
            }
            else {
                unsigned long long int value = strtoull(buf, NULL, 0);
                return new sLongNode(value, info) implements sNode;
            }
        }
        else {
            unsigned long lont int value = strtoll(buf, NULL, 0);
            return new sIntNode(value, info) implements sNode;
        }
    }
    else {
        err_msg(info, "require digits after + or -");
        exit(2);
    }
    
    return (sNode*%)null;
}

sNode*% create_int_node(int value, sInfo* info)
{
    return new sIntNode(value, info) implements sNode;
}

sNode*% get_hex_number(bool minus, sInfo* info)
{
    int buf_size = 128;
    char buf[128+1];
    char* p = buf;

    *p++ = '0';
    *p++ = 'x';

    while((*info->p >= '0' && *info->p <= '9') || (*info->p >= 'a' && *info->p <= 'f') || (*info->p >= 'A' && *info->p <= 'F') || *info->p == '_') 
    {
        if(*info->p == '_') {
            info->p++;
        }
        else {
            *p++ = *info->p;
            info->p++;
        }

        if(p - buf >= buf_size-1) {
            err_msg(info, "overflow node of number");
            exit(2);
        }
    };
    *p = 0;
    skip_spaces_and_lf();

    if(*info->p == 'u' || *info->p == 'U')
    {
        info->p++;
        skip_spaces_and_lf();

        if(*info->p == 'L' || *info->p == 'l')
        {
            info->p++;
            skip_spaces_and_lf();

            if(*info->p == 'L' || *info->p == 'l')
            {
                info->p++;
                skip_spaces_and_lf();
                
                unsigned long long int value = strtoull(buf, NULL, 0);

                if(minus) {
                    return new sULongNode(-value, info) implements sNode;
                }
                else {
                    return new sULongNode(value, info) implements sNode;
                }
            }
            else {
                unsigned long long int value = strtoull(buf, NULL, 0);

                if(minus) {
                    return new sULongNode(-value, info) implements sNode;
                }
                else {
                    return new sULongNode(value, info) implements sNode;
                }
            }
        }
        else {
            unsigned int value = strtoull(buf, NULL, 0);

            if(minus) {
                return new sUIntNode(-value, info) implements sNode;
            }
            else {
                return new sUIntNode(value, info) implements sNode;
            }
        }
    }
    else if(*info->p == 'L' || *info->p == 'l') {
        info->p++;
        skip_spaces_and_lf();

        if(*info->p == 'L' || *info->p == 'l')
        {
            info->p++;
            skip_spaces_and_lf();

            unsigned long long int value = strtoull(buf, NULL, 0);
            if(minus) {
                return new sLongNode(-value, info) implements sNode;
            }
            else {
                return new sLongNode(value, info) implements sNode;
            }
        }
        else if(*info->p == 'U' || *info->p == 'u')
        {
            info->p++;
            skip_spaces_and_lf();

            unsigned long long int value = strtoull(buf, NULL, 0);
            if(minus) {
                return new sULongNode(-value, info) implements sNode;
            }
            else {
                return new sULongNode(value, info) implements sNode;
            }
        }
        else {
            unsigned long long int value = strtoull(buf, NULL, 0);
            if(minus) {
                return new sLongNode(-value, info) implements sNode;
            }
            else {
                return new sLongNode(value, info) implements sNode;
            }
        }
    }
    else {
        unsigned long long int value = strtoll(buf, NULL, 0);
        if(minus) {
            return new sIntNode(-value, info) implements sNode;
        }
        else {
            return new sIntNode(value, info) implements sNode;
        }
    }
    
    return (sNode*%)null;
}

sNode*% get_oct_number(sInfo* info)
{
    int buf_size = 128;
    char buf[128+1];
    char* p = buf;

    *p++ = '0';

    while((*info->p >= '0' && *info->p <= '7') || *info->p == '_') {
        if(*info->p == '_') {
            info->p++;
        }
        else {
            *p = *info->p;
            p++;
            info->p++;
        }

        if(p - buf >= buf_size-1) {
            err_msg(info, "overflow node of number");
            exit(2);
        }
    };

    *p = 0;
    skip_spaces_and_lf();

    if(*info->p == 'u' || *info->p == 'U')
    {
        info->p++;
        skip_spaces_and_lf();

        if(*info->p == 'L' || *info->p == 'l')
        {
            info->p++;
            skip_spaces_and_lf();

            if(*info->p == 'L' || *info->p == 'l')
            {
                info->p++;
                skip_spaces_and_lf();
                
                unsigned long long int value = strtoull(buf, NULL, 0);

                return new sULongNode(value, info) implements sNode;
            }
            else {
                unsigned long long int value = strtoull(buf, NULL, 0);
                return new sULongNode(value, info) implements sNode;
            }
        }
        else {
            unsigned int value = strtoul(buf, NULL, 0);
            return new sUIntNode(value, info) implements sNode;
        }
    }
    else if(*info->p == 'L' || *info->p == 'l') {
        info->p++;
        skip_spaces_and_lf();

        if(*info->p == 'L' || *info->p == 'l')
        {
            info->p++;
            skip_spaces_and_lf();

            unsigned long long int value = strtoull(buf, NULL, 0);
            return new sLongNode(value, info) implements sNode;
        }
        else if(*info->p == 'U' || *info->p == 'u')
        {
            info->p++;
            skip_spaces_and_lf();

            unsigned long long int value = strtoull(buf, NULL, 0);
            return new sULongNode(value, info) implements sNode;
        }
        else {
            unsigned long long int value = strtoull(buf, NULL, 0);
            return new sLongNode(value, info) implements sNode;
        }
    }
    else {
        unsigned long long int value = strtoull(buf, NULL, 0);
        return new sIntNode(value, info) implements sNode;
    }
    
    return (sNode*%)null;
}
