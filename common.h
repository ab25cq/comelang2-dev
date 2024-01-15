#ifndef __COMMON_H__
#define __COMMON_H__

#include <comelang2.h>

//#define exit(o); { int* a = (void*)0; *a = 1; exit(2); }

#define FUN_VERSION_MAX 128
#define GENERICS_TYPE_MAX 12
#define RIGHT_VALUE_OBJECT_NUM_MAX 1024

#define METHOD_BLOCK_RESULT_KIND_BREAK 1
#define METHOD_BLOCK_RESULT_KIND_CONTINUE 2
#define METHOD_BLOCK_RESULT_KIND_RETURN 3
#define METHOD_BLOCK_RESULT_KIND_RETURN_VOID 4

extern bool gComeDebug;
extern bool gComeGC;
extern bool gComeC;
extern bool gComeMalloc;
extern bool gCommonHeader;

struct sType;

struct sClass {
    bool mStruct;
    bool mFloat;
    bool mUnion;
    bool mGenerics;
    bool mMethodGenerics;
    bool mEnum;
    bool mProtocol;
    bool mNumber;
    
    string mName;
    
    int mGenericsNum;
    int mMethodGenericsNum;
    
    list<tuple2<string, sType*%>*%>*% mFields;
    
    bool mOutputed;
    string mDeclareSName;
};

struct sInfo;

interface sNode {
    bool compile(sInfo* info);
    int sline();
    string sname();
    bool terminated();
    string kind();
};

struct sType
{
    sClass* mClass;
    
    tuple1<sType*%>*% mNoSolvedGenericsType;
    tuple1<sType*%>*% mOriginalLoadVarType;
    
    string mGenericsName;

    list<sType*%>*% mGenericsTypes;
    
    list<sNode*%>*% mArrayNum;
    bool mOmitArrayNum;
    
    list<sType*%>*% mParamTypes;
    list<string>*% mParamNames;
    tuple1<sType*%>*% mResultType;
    bool mVarArgs;
    
    sNode*% mAlignas;
    
    bool mUnsigned;
    bool mShort;
    bool mLong;
    bool mLongLong;
    bool mConstant;
    bool mRegister;
    bool mVolatile;
    bool mStatic;
    bool mExtern;
    bool mRestrict;
    bool mImmutable;
    bool mHeap;
    bool mDummyHeap;
    bool mDelegate;
    bool mShare;
    bool mClone;
    bool mNoHeap;
    bool mNoCallingDestructor;
    bool mRefference;
    bool mException;
    
    int mPointerNum;
    int mOriginalTypeNamePointerNum;
    int mNoArrayPointerNum;
    sNode*% mSizeNum;
    
    unsigned int mDynamicArrayNum;
    unsigned int mTypeOfExpression;

    string mOriginalTypeName;
    int mOriginalPointerNum;
    
    bool mFunctionParam;
    bool mAllocaValue;
    bool mGenericsStruct;
    bool mSolvedGenericsName;
    bool mComeMemCore;
    
    bool mInline;
    bool mNullValue;
    
    string mAsmName;
};

struct sVar;

struct CVALUE {
    string c_value;
    sType*% type;
    sVar* var;
};

struct sVar {
    string mName;
    string mCValueName;
    sType*% mType;

    int mBlockLevel;

    bool mGlobal;
    bool mAllocaValue;
    bool mFunctionParam;
    bool mNoFree;
    
    string mFunName;
};

struct sVarTable;

struct sBlock;

struct sFun
{
    string mName;
    
    sType*% mResultType;
    list<sType*%>*% mParamTypes;
    list<string>*% mParamNames;
    list<string>*% mParamDefaultParametors;
    
    sType*% mLambdaType;
    
    sBlock*% mBlock;
    
    bool mExternal;
    bool mVarArgs;
    
    buffer*% mSource;
    buffer*% mSourceHead;
    buffer*% mSourceHead2;
    buffer*% mSourceDefer;
    
    bool mStatic;
    
    string mComeHeader;
    bool mCloner;
    
    string mDeclareSName;
};

struct sGenericsFun
{
    sType*% mImplType;
    list<string>*% mGenericsTypeNames;
    
    string mName;
    
    sType*% mResultType;
    list<sType*%>*% mParamTypes;
    list<string>*% mParamNames;
    list<string>*% mParamDefaultParametors;
    
    string mBlock;
    int mSLine;
    
    bool mVarArgs;
    
    string mGenericsSName;
    int mGenericsSLine;
};

struct sModule
{
    buffer*% mSourceHead;
    buffer*% mSource;
    string mLastCode;
    string mLastCode2;
    string mLastCode3;
};

struct sVarTable;

struct sVarTable {
    map<string, sVar*%>*% mVars;
    bool mGlobal;
    struct sVarTable* mParent;
    int mID;
};

struct sBlock
{
    list<sNode*%>*% mNodes;
    sVarTable*% mVarTable;
};

struct sRightValueObject 
{
    sType*% mType;
    string mVarName;
    string mFunName;
    bool mFreed;
    int mID;
    int mBlockLevel;
};

struct sInfo
{
    char* p;
    char* head;
    buffer*% original_source;
    buffer*% source;
    string sname;
    string base_sname;
    int sline;
    int err_num;
    string err_line;
    string clang_option;
    string cpp_option;
    bool no_output_err;
    bool no_output_come_code;
    
    sFun* come_fun;
    
    sFun* caller_fun;
    int caller_line;
    char* caller_sname;
    
    int block_level;

    map<string, sFun*%>*% funcs;
    map<string, sGenericsFun*%>*% generics_funcs;
    map<string, sClass*%>*% classes;
    map<string, sType*%>*% types;
    map<string, sClass*%>*% generics_classes;
    
    sModule*% module;
    
    sType*% type;
    
    list<sRightValueObject*%>*% right_value_objects;
    
    sType*% generics_type;
    list<sType*%>*% method_generics_types;
    
    list<CVALUE*%>*% stack;
    
    sType*% come_function_result_type;
    
    sVarTable* lv_table;
    sVarTable*% gv_table;
    
    bool no_comma;
    bool no_assign;
    bool last_statment_is_return;
    
    list<string>*% generics_type_names;
    sType*% impl_type;
    
    int current_stack_num;
    int num_method_block;
    sClass* current_stack_frame_struct;
    list<sType*%>* param_types;
    list<string>* param_names;
    
    bool define_struct;
    bool in_typedef;
    bool in_loop;
    
    string output_file_name;

    sVarTable* current_loop_vtable;
    bool verbose;
    
    bool output_header_file;
    int num_current_stack;
    
    int num_source_files;
    int max_source_files;
    
    bool without_semicolon;
    bool writing_source_file_position;
};

/////////////////////////////////////////////////////////////////////
/// 01main.c ///
/////////////////////////////////////////////////////////////////////
int come_main(int argc, char** argv) version 1;

/////////////////////////////////////////////////////////////////////
/// 02transpile.c ///
/////////////////////////////////////////////////////////////////////
bool node_compile(sNode* node, sInfo* info=info);
int come_main(int argc, char** argv) version 2;
void come_init() version 2;
void come_final() version 2;
void err_msg(sInfo* info, char* msg, ...);
int transpile(sInfo* info) version 2;
bool output_source_file(sInfo* info) version 2;
sModule*% sModule*::initialize(sModule*% self);
sType*% sType*::initialize(sType*% self, char* name, bool heap=false, sInfo* info=info);
sVarTable*% sVarTable*::initialize(sVarTable*% self, bool global, sVarTable* parent);
void sVarTable*::finalize(sVarTable* self);
sClass*% sClass*::initialize(sClass*% self, char* name, bool number=false, bool union_=false, bool generics=false, bool method_generics=false, bool protocol_=false, bool struct_=false, bool float_=false, int generics_num=-1, int method_generics_num=-1, bool enum_=false, sInfo* info=info);
sFun*% sFun*::initialize(sFun*% self, string name, sType*% result_type, list<sType*%>*% param_types, list<string>*% param_names, list<string>*% param_default_parametors, bool external, bool var_args, sBlock*% block, bool static_, string come_header, string declare_sname, sInfo* info);
exception string make_type_name_string(sType* type, bool in_header=false, bool array_cast_pointer=false, bool no_pointer=false, sInfo* info=info);
string make_come_type_name_string(sType* type, sInfo* info=info);

/////////////////////////////////////////////////////////////////////
/// 03transpile2.c ///
/////////////////////////////////////////////////////////////////////
void come_init() version 3;
void come_final() version 3;

string header_function(sFun* fun, sInfo* info);
int transpile(sInfo* info) version 3;
bool output_source_file(sInfo* info) version 3;
void show_type(sType* type, sInfo* info);
string create_generics_name(sType* generics_type, sInfo* info);
void add_last_code_to_source(sInfo* info);
void add_come_code_at_function_head(sInfo* info, char* code, ...);
void add_come_code_at_function_head2(sInfo* info, char* code, ...);
void add_come_code_at_source_head(sInfo* info, const char* msg, ...);
void add_come_code(sInfo* info, const char* msg, ...);
void add_come_last_code(sInfo* info, const char* msg, ...);
void add_come_last_code2(sInfo* info, const char* msg, ...);
void add_come_last_code3(sInfo* info, const char* msg, ...);
void add_last_code_to_source_with_comma(sInfo* info);
void dec_stack_ptr(int value, sInfo* info);
CVALUE*% get_value_from_stack(int offset, sInfo* info);
exception string make_define_var(sType* type, char* name, bool in_header=false, sInfo* info=info);
void transpiler_clear_last_code(sInfo* info);
bool output_header_file(sInfo* info);

/////////////////////////////////////////////////////////////////////
/// 04heap.c ///
/////////////////////////////////////////////////////////////////////
void std_move(sType* left_type, sType* right_type, CVALUE* right_value, sInfo* info=info);;
string append_exception_value(char* c_value, sType* type, sInfo* info);
bool create_equals_method(sType* type, sInfo* info);
bool create_operator_equals_method(sType* type, sInfo* info);
bool create_operator_not_equals_method(sType* type, sInfo* info);
sType*% solve_generics(sType* type, sType* generics_type, sInfo* info);
sVar* get_variable_from_table(sVarTable* table, char* name);
void free_objects_on_return(sBlock* current_block, sInfo* info, sVar* ret_value, bool top_block);
void free_objects_on_break(sInfo* info);
void free_object(sType* type, char* obj, bool no_decrement, bool no_free, sInfo* info, bool comma=false, bool ret_value=false, bool force_delete_=false);
sType*%, string clone_object(sType* type, char* obj, sInfo* info);
void free_right_value_objects(sInfo* info, bool comma=false);
void free_objects(sVarTable* table, sVar* ret_value, sInfo* info);
string append_object_to_right_values(char* obj, sType*% type, sInfo* info);
bool is_right_values(int right_value_num, sInfo* info);
int get_right_value_id_from_obj(string obj);
void remove_object_from_right_values(int right_value_num, sInfo* info);
string increment_ref_count_object(sType* type, char* obj, sInfo* info);
void decrement_ref_count_object(sType* type, char* obj, sInfo* info, bool force_delete_=false);

/////////////////////////////////////////////////////////////////////
/// 05function.c ///
/////////////////////////////////////////////////////////////////////
void caller_begin(sInfo* info=info);
void caller_end(sInfo* info=info);
bool operator_overload_fun_self(sType* type, char* fun_name, CVALUE* left_value, sInfo* info);
sNode*% craete_logical_denial(sNode*% node, sInfo* info);
void backtrace_parse_type(sInfo* info=info);
void transpile_toplevel(bool block=false, sInfo* info=info);
void skip_pointer_attribute(sInfo* info=info);
sNode*% parse_normal_block(sInfo* info=info);
void check_assign_type(char* msg, sType* left_type, sType* right_type, CVALUE* come_value, bool check_no_pointer=false, sInfo* info=info);
string parse_attribute(sInfo* info=info);
void come_init() version 5;
void come_final() version 5;
sNode*% parse_global_variable(sInfo* info);
sNode*% get_number(bool minus, sInfo* info);
sNode*% get_oct_number(sInfo* info);
sNode*% get_hex_number(bool minus, sInfo* info);
sNode*% create_int_node(int value, sInfo* info);
sNode*% post_position_operator3(sNode*% node, sInfo* info) version 5;
exception list<sType*%>*%, list<string>*%, list<string>*%, bool parse_params(sInfo* info);
sFun*,string create_finalizer_automatically(sType* type, char* fun_name, sInfo* info);
sFun*,string create_force_finalizer_automatically(sType* type, char* fun_name, sInfo* info);
sFun*,string create_cloner_automatically(sType* type, char* fun_name, sInfo* info);
sFun*,string create_equals_automatically(sType* type, char* fun_name, sInfo* info);
sFun*,string create_operator_equals_automatically(sType* type, char* fun_name, sInfo* info);
sFun*,string create_operator_not_equals_automatically(sType* type, char* fun_name, sInfo* info);
string skip_block(sInfo* info=info);
bool is_contained_generics_class(sType* type, sInfo* info);
bool is_type_name(char* buf, sInfo* info=info);
bool parsecmp(char* str, sInfo* info);
exception string parse_word(sInfo* info=info);
void skip_spaces_and_lf(sInfo* info=info);
exception int expected_next_character(char c, sInfo* info=info);
sBlock*% sBlock*::initialize(sBlock*% self, sInfo* info);
bool create_generics_fun(string fun_name, sGenericsFun* generics_fun, sType* generics_type, sInfo* info);

exception tuple3<sType*%,string,bool>*% parse_type(sInfo* info=info, bool parse_variable_name=false, bool parse_multiple_type=true);
tuple2<sType*%, string>*% parse_variable_name(sType*% base_type_name, bool first, sInfo* info);
sBlock*% parse_block(sInfo* info=info, bool no_block_level=false);
int transpile_block(sBlock* block, list<sType*%>* param_types, list<string>* param_names, sInfo* info, bool no_var_table=false, bool loop_block=false);
void arrange_stack(sInfo* info, int top);
sNode*% parse_function(sInfo* info);

sNode*% expression(sInfo* info=info) version 5;
sNode*% statment(sInfo* info=info);
sNode*% top_level(string buf, char* head, int head_sline, sInfo* info) version 1;
sNode*% top_level(string buf, char* head, int head_sline, sInfo* info) version 99;
sNode*% expression_node(sInfo* info=info) version 1;
sNode*% expression_node(sInfo* info=info) version 99;

int transpile(sInfo* info) version 5;
void parse_sharp(sInfo* info=info) version 5;
exception sNode*% string_node(char* buf, char* head, int head_sline, sInfo* info) version 5;
sNode*% post_position_operator(sNode*% node, sInfo* info) version 5;
string create_method_name(sType* obj_type, bool no_pointer_name, char* fun_name, sInfo* info);

/////////////////////////////////////////////////////////////////////
/// 06str.c ///
/////////////////////////////////////////////////////////////////////
sNode*% expression_node(sInfo* info=info) version 98;
sNode*% parse_tuple(sInfo* info);
sNode*% create_none_object(sNode*% exp, sInfo* info);
sNode*% create_some_object(sNode*% exp, sInfo* info);

/////////////////////////////////////////////////////////////////////
/// 07var.c
/////////////////////////////////////////////////////////////////////
sNode*% store_var(string name, list<string>*% multiple_assign, sType*% type, bool alloc, sNode*% right_node, sInfo* info);
sNode*% load_var(string name, sInfo* info);
exception sNode*% string_node(char* buf, char* head, int head_sline, sInfo* info) version 7;
void add_variable_to_table(char* name, sType*% type, sInfo* info);
void add_variable_to_global_table(char* name, sType*% type, sInfo* info);
void add_variable_to_global_table_with_int_value(char* name, sType*% type, char* c_value, sInfo* info);

/////////////////////////////////////////////////////////////////////
/// 08if.c
/////////////////////////////////////////////////////////////////////
exception sNode*% string_node(char* buf, char* head, int head_sline, sInfo* info) version 8;
sNode*% parse_if_method_call(sNode*% expression_node, sInfo* info);
sNode*% parse_elif_method_call(sNode*% expression_node, sInfo* info);
sNode*% parse_or_statment(sNode*% expression_node, sInfo* info);
sNode*% parse_and_statment(sNode*% expression_node, sInfo* info);

/////////////////////////////////////////////////////////////////////
/// 09while.c
/////////////////////////////////////////////////////////////////////
exception sNode*% string_node(char* buf, char* head, int head_sline, sInfo* info) version 9;

/////////////////////////////////////////////////////////////////////
/// 10do_while.c
/////////////////////////////////////////////////////////////////////
exception sNode*% string_node(char* buf, char* head, int head_sline, sInfo* info) version 10;

/////////////////////////////////////////////////////////////////////
/// 11for.c
/////////////////////////////////////////////////////////////////////
exception sNode*% string_node(char* buf, char* head, int head_sline, sInfo* info) version 11;

/////////////////////////////////////////////////////////////////////
/// 12switch.c
/////////////////////////////////////////////////////////////////////
exception sNode*% string_node(char* buf, char* head, int head_sline, sInfo* info) version 12;

/////////////////////////////////////////////////////////////////////
/// 13op.c
/////////////////////////////////////////////////////////////////////
bool operator_overload_fun(sType* type, char* fun_name, CVALUE* left_value, CVALUE* right_value, sInfo* info);
 sNode*% expression(sInfo* info=info) version 13;
 sNode*% post_op(sNode*% node, sInfo* info) version 13;
exception sNode*% string_node(char* buf, char* head, int head_sline, sInfo* info) version 13;
sNode*% create_null_object(sInfo* info);

/////////////////////////////////////////////////////////////////////
/// 14struct.c
/////////////////////////////////////////////////////////////////////
exception sNode*% string_node(char* buf, char* head, int head_sline, sInfo* info) version 14;
sNode*% parse_struct(string type_name, sInfo* info);
string get_none_generics_name(char* class_name);
sNode*% top_level(string buf, char* head, int head_sline, sInfo* info) version 98;
bool output_generics_struct(sType* type, sType* generics_type, sInfo* info);
void output_struct(sClass* klass, sInfo* info);

/////////////////////////////////////////////////////////////////////
/// 15union.c
/////////////////////////////////////////////////////////////////////
exception sNode*% string_node(char* buf, char* head, int head_sline, sInfo* info) version 15;
sNode*% parse_union(string type_name, sInfo* info);
sNode*% top_level(string buf, char* head, int head_sline, sInfo* info) version 97;

/////////////////////////////////////////////////////////////////////
/// 16enum.c
/////////////////////////////////////////////////////////////////////
sNode*% parse_enum(string type_name, sInfo* info);
sNode*% top_level(string buf, char* head, int head_sline, sInfo* info) version 96;

/////////////////////////////////////////////////////////////////////
/// 17typedef.c
/////////////////////////////////////////////////////////////////////
sNode*% top_level(string buf, char* head, int head_sline, sInfo* info) version 95;

/////////////////////////////////////////////////////////////////////
/// 18field.c
/////////////////////////////////////////////////////////////////////
bool compiletime_get_exception_value(sInfo* info);
sNode*% store_field(sNode* left, sNode*% right, string name, sInfo* info);
sNode*% exception_get_value(sNode*% node, sInfo* info);

 sNode*% post_position_operator(sNode*% node, sInfo* info) version 18;
 sNode*% post_position_operator2(sNode*% node, sInfo* info) version 18;
 sNode*% parse_method_call(sNode*% obj, string fun_name, sInfo* info) version 18;

/////////////////////////////////////////////////////////////////////
/// 19eq.c
/////////////////////////////////////////////////////////////////////
 sNode*% post_position_operator2(sNode*% node, sInfo* info) version 19;

/////////////////////////////////////////////////////////////////////
/// 20method.c
/////////////////////////////////////////////////////////////////////
string make_generics_function(sType* type, string fun_name, sInfo* info);
 sNode*% parse_method_call(sNode*% obj, string fun_name, sInfo* info) version 20;
exception sNode*% string_node(char* buf, char* head, int head_sline, sInfo* info) version 20;
 sNode*% post_position_operator3(sNode*% node, sInfo* info) version 20;

/////////////////////////////////////////////////////////////////////
/// 21obj.c
/////////////////////////////////////////////////////////////////////
sNode*% create_object(sType*% type, sInfo* info);
sNode*% create_true_object(sInfo* info);
sNode*% create_false_object(sInfo* info);

exception sNode*% string_node(char* buf, char* head, int head_sline, sInfo* info) version 21;
sNode*% top_level(string buf, char* head, int head_sline, sInfo* info) version 94;
sNode*% post_position_operator3(sNode*% node, sInfo* info) version 21;

/////////////////////////////////////////////////////////////////////
/// 22impl.c
/////////////////////////////////////////////////////////////////////
sNode*% top_level(string buf, char* head, int head_sline, sInfo* info) version 93;

/////////////////////////////////////////////////////////////////////
/// 23interface.c
/////////////////////////////////////////////////////////////////////
sNode*% top_level(string buf, char* head, int head_sline, sInfo* info) version 92;

#endif
