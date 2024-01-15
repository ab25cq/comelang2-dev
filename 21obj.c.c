// source head
typedef long int size_t;
typedef __builtin_va_list __gnuc_va_list;
typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;
typedef char __int8_t;
typedef unsigned char __uint8_t;
typedef short int __int16_t;
typedef unsigned short int __uint16_t;
typedef int __int32_t;
typedef unsigned int __uint32_t;
typedef long int __int64_t;
typedef unsigned long int __uint64_t;
typedef char __int_least8_t;
typedef unsigned char __uint_least8_t;
typedef short int __int_least16_t;
typedef unsigned short int __uint_least16_t;
typedef int __int_least32_t;
typedef unsigned int __uint_least32_t;
typedef long int __int_least64_t;
typedef unsigned long int __uint_least64_t;
typedef long int __quad_t;
typedef unsigned long int __u_quad_t;
typedef long int __intmax_t;
typedef unsigned long int __uintmax_t;
typedef unsigned long int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef unsigned long int __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned int __nlink_t;
typedef long int __off_t;
typedef long int __off64_t;
typedef int __pid_t;
struct anonymous_typeX1
{
    int __val[2];
};
typedef struct anonymous_typeX1 __fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long int __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;
typedef long int __suseconds64_t;
typedef int __daddr_t;
typedef int __key_t;
typedef int __clockid_t;
typedef void* __timer_t;
typedef int __blksize_t;
typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;
typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;
typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;
typedef long int __fsword_t;
typedef long int __ssize_t;
typedef long int __syscall_slong_t;
typedef unsigned long int __syscall_ulong_t;
typedef long int __loff_t;
typedef char* __caddr_t;
typedef long int __intptr_t;
typedef unsigned int __socklen_t;
typedef int __sig_atomic_t;
union anonymous_typeZ4
{
unsigned int __wch;
char __wchb[4];
};
struct anonymous_typeX2
{
    int __count;
    union anonymous_typeZ4 __value;
};
typedef struct anonymous_typeX2 __mbstate_t;
struct _G_fpos_t
{
    long int __pos;
    struct anonymous_typeX2 __state;
};
typedef struct _G_fpos_t __fpos_t;
struct _G_fpos64_t
{
    long int __pos;
    struct anonymous_typeX2 __state;
};
typedef struct _G_fpos64_t __fpos64_t;
struct _IO_FILE;
typedef struct _IO_FILE __FILE;
struct _IO_FILE;
typedef struct _IO_FILE FILE;
struct _IO_FILE;
struct _IO_marker;
struct _IO_codecvt;
struct _IO_wide_data;
typedef void _IO_lock_t;
struct _IO_FILE
{
    int _flags;
    char* _IO_read_ptr;
    char* _IO_read_end;
    char* _IO_read_base;
    char* _IO_write_base;
    char* _IO_write_ptr;
    char* _IO_write_end;
    char* _IO_buf_base;
    char* _IO_buf_end;
    char* _IO_save_base;
    char* _IO_backup_base;
    char* _IO_save_end;
    struct _IO_marker* _markers;
    struct _IO_FILE* _chain;
    int _fileno;
    int _flags2;
    long int _old_offset;
    unsigned short int _cur_column;
    char _vtable_offset;
    char _shortbuf[1];
    void* _lock;
    long int _offset;
    struct _IO_codecvt* _codecvt;
    struct _IO_wide_data* _wide_data;
    struct _IO_FILE* _freeres_list;
    void* _freeres_buf;
    long int __pad5;
    int _mode;
    char _unused2[15*sizeof(int)-4*sizeof(void*)-sizeof(long int)];
};
typedef long int (*cookie_read_function_t)(void*,char*,long int);
typedef long int (*cookie_write_function_t)(void*,const char*,long int);
typedef int (*cookie_seek_function_t)(void*,long int*,int);
typedef int (*cookie_close_function_t)(void*);
struct _IO_cookie_io_functions_t
{
    long int (*read)(void*,char*,long int);
    long int (*write)(void*,const char*,long int);
    int (*seek)(void*,long int*,int);
    int (*close)(void*);
};
typedef struct _IO_cookie_io_functions_t cookie_io_functions_t;
typedef __builtin_va_list va_list;
typedef long int off_t;
typedef long int off64_t;
typedef long int ssize_t;
typedef struct _G_fpos_t fpos_t;
typedef struct _G_fpos64_t fpos64_t;
extern struct _IO_FILE* stdin;
extern struct _IO_FILE* stdout;
extern struct _IO_FILE* stderr;
typedef long double _Float128;
typedef float _Float32;
typedef double _Float64;
typedef double _Float32x;
typedef long double _Float64x;
struct obstack;
typedef unsigned int wchar_t;
struct anonymous_typeX5
{
    int quot;
    int rem;
};
typedef struct anonymous_typeX5 div_t;
struct anonymous_typeX6
{
    long int quot;
    long int rem;
};
typedef struct anonymous_typeX6 ldiv_t;
struct anonymous_typeX7
{
    long long int quot;
    long long int rem;
};
typedef struct anonymous_typeX7 lldiv_t;
struct __locale_struct
{
    struct __locale_data* __locales[13];
    const unsigned short int* __ctype_b;
    const int* __ctype_tolower;
    const int* __ctype_toupper;
    const char* __names[13];
};
typedef struct __locale_struct* __locale_t;
typedef struct __locale_struct* locale_t;
typedef unsigned char u_char;
typedef unsigned short int u_short;
typedef unsigned int u_int;
typedef unsigned long int u_long;
typedef long int quad_t;
typedef unsigned long int u_quad_t;
typedef struct anonymous_typeX1 fsid_t;
typedef long int loff_t;
typedef unsigned long int ino_t;
typedef unsigned long int ino64_t;
typedef unsigned long int dev_t;
typedef unsigned int gid_t;
typedef unsigned int mode_t;
typedef unsigned int nlink_t;
typedef unsigned int uid_t;
typedef int pid_t;
typedef unsigned int id_t;
typedef int daddr_t;
typedef char* caddr_t;
typedef int key_t;
typedef long int clock_t;
typedef int clockid_t;
typedef long int time_t;
typedef void* timer_t;
typedef unsigned int useconds_t;
typedef long int suseconds_t;
typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;
typedef char int8_t;
typedef short int int16_t;
typedef int int32_t;
typedef long int int64_t;
typedef unsigned char u_int8_t;
typedef unsigned short int u_int16_t;
typedef unsigned int u_int32_t;
typedef unsigned long int u_int64_t;
typedef int register_t;
struct anonymous_typeX8
{
    unsigned long int __val[(1024/(8*sizeof(unsigned long int)))];
};
typedef struct anonymous_typeX8 __sigset_t;
typedef struct anonymous_typeX8 sigset_t;
struct timeval
{
    long int tv_sec;
    long int tv_usec;
};
struct timespec
{
    long int tv_sec;
    long int tv_nsec;
};
typedef long int __fd_mask;
struct anonymous_typeX9
{
    long int fds_bits[1024/(8*(int)sizeof(long int))];
};
typedef struct anonymous_typeX9 fd_set;
typedef long int fd_mask;
typedef int blksize_t;
typedef long int blkcnt_t;
typedef unsigned long int fsblkcnt_t;
typedef unsigned long int fsfilcnt_t;
typedef long int blkcnt64_t;
typedef unsigned long int fsblkcnt64_t;
typedef unsigned long int fsfilcnt64_t;
struct anonymous_typeX11
{
    unsigned int __low;
    unsigned int __high;
};
union anonymous_typeZ10
{
unsigned long long int __value64;
struct anonymous_typeX11 __value32;
};
typedef union anonymous_typeZ10 __atomic_wide_counter;
struct __pthread_internal_list
{
    struct __pthread_internal_list* __prev;
    struct __pthread_internal_list* __next;
};
typedef struct __pthread_internal_list __pthread_list_t;
struct __pthread_internal_slist
{
    struct __pthread_internal_slist* __next;
};
typedef struct __pthread_internal_slist __pthread_slist_t;
struct __pthread_mutex_s
{
    int __lock;
    unsigned int __count;
    int __owner;
    unsigned int __nusers;
    int __kind;
    int __spins;
    struct __pthread_internal_list __list;
};
struct __pthread_rwlock_arch_t
{
    unsigned int __readers;
    unsigned int __writers;
    unsigned int __wrphase_futex;
    unsigned int __writers_futex;
    unsigned int __pad3;
    unsigned int __pad4;
    int __cur_writer;
    int __shared;
    unsigned long int __pad1;
    unsigned long int __pad2;
    unsigned int __flags;
};
struct __pthread_cond_s
{
    union anonymous_typeZ10 __wseq;
    union anonymous_typeZ10 __g1_start;
    unsigned int __g_refs[2];
    unsigned int __g_size[2];
    unsigned int __g1_orig_size;
    unsigned int __wrefs;
    unsigned int __g_signals[2];
};
typedef unsigned int __tss_t;
typedef unsigned long int __thrd_t;
struct anonymous_typeX12
{
    int __data;
};
typedef struct anonymous_typeX12 __once_flag;
typedef unsigned long int pthread_t;
union anonymous_typeZ13
{
char __size[8];
int __align;
};
typedef union anonymous_typeZ13 pthread_mutexattr_t;
union anonymous_typeZ14
{
char __size[8];
int __align;
};
typedef union anonymous_typeZ14 pthread_condattr_t;
typedef unsigned int pthread_key_t;
typedef int pthread_once_t;
union pthread_attr_t
{
char __size[64];
long int __align;
};
typedef union pthread_attr_t pthread_attr_t;
union anonymous_typeZ15
{
struct __pthread_mutex_s __data;
char __size[48];
long int __align;
};
typedef union anonymous_typeZ15 pthread_mutex_t;
union anonymous_typeZ16
{
struct __pthread_cond_s __data;
char __size[48];
long long int __align;
};
typedef union anonymous_typeZ16 pthread_cond_t;
union anonymous_typeZ17
{
struct __pthread_rwlock_arch_t __data;
char __size[56];
long int __align;
};
typedef union anonymous_typeZ17 pthread_rwlock_t;
union anonymous_typeZ18
{
char __size[8];
long int __align;
};
typedef union anonymous_typeZ18 pthread_rwlockattr_t;
typedef int pthread_spinlock_t;
union anonymous_typeZ19
{
char __size[32];
long int __align;
};
typedef union anonymous_typeZ19 pthread_barrier_t;
union anonymous_typeZ20
{
char __size[8];
int __align;
};
typedef union anonymous_typeZ20 pthread_barrierattr_t;
struct random_data
{
    int* fptr;
    int* rptr;
    int* state;
    int rand_type;
    int rand_deg;
    int rand_sep;
    int* end_ptr;
};
struct drand48_data
{
    unsigned short int __x[3];
    unsigned short int __old_x[3];
    unsigned short int __c;
    unsigned short int __init;
    unsigned long long int __a;
};
typedef int (*__compar_fn_t)(const void*,const void*);
typedef int (*comparison_fn_t)(const void*,const void*);
typedef int (*__compar_d_fn_t)(const void*,const void*,void*);
typedef void* any;
typedef char* string;
struct sDummyCurrentStack
{
    int __method_block_result_kind__;
};
struct list_item$1voidp
{
    void* item;
    struct list_item$1voidp* prev;
    struct list_item$1voidp* next;
};
struct list$1voidp
{
    struct list_item$1voidp* head;
    struct list_item$1voidp* tail;
    int len;
    struct list_item$1voidp* it;
};
struct buffer
{
    char* buf;
    int len;
    int size;
};
struct optional$2intbool
{
    int v1;
    _Bool v2;
};
struct smart_pointer$1char
{
    struct buffer* memory;
    char* p;
};
struct smart_pointer$1short
{
    struct buffer* memory;
    short short* p;
};
struct smart_pointer$1int
{
    struct buffer* memory;
    int* p;
};
struct smart_pointer$1long
{
    struct buffer* memory;
    long* p;
};
struct optional$2boolbool
{
    _Bool v1;
    _Bool v2;
};
struct list_item$1charph
{
    char* item;
    struct list_item$1charph* prev;
    struct list_item$1charph* next;
};
struct list$1charph
{
    struct list_item$1charph* head;
    struct list_item$1charph* tail;
    int len;
    struct list_item$1charph* it;
};
struct optional$2charphbool
{
    char* v1;
    _Bool v2;
};
struct optional$2intpbool
{
    int* v1;
    _Bool v2;
};
struct optional$2list$1charphphbool
{
    struct list$1charph* v1;
    _Bool v2;
};
extern _Bool gComeDebug;
extern _Bool gComeGC;
extern _Bool gComeC;
extern _Bool gComeMalloc;
extern _Bool gCommonHeader;
struct sType;
struct tuple2$2charphsTypeph
{
    char* v1;
    struct sType* v2;
};
struct list_item$1tuple2$2charphsTypephph
{
    struct tuple2$2charphsTypeph* item;
    struct list_item$1tuple2$2charphsTypephph* prev;
    struct list_item$1tuple2$2charphsTypephph* next;
};
struct list$1tuple2$2charphsTypephph
{
    struct list_item$1tuple2$2charphsTypephph* head;
    struct list_item$1tuple2$2charphsTypephph* tail;
    int len;
    struct list_item$1tuple2$2charphsTypephph* it;
};
struct sClass
{
    _Bool mStruct;
    _Bool mFloat;
    _Bool mUnion;
    _Bool mGenerics;
    _Bool mMethodGenerics;
    _Bool mEnum;
    _Bool mProtocol;
    _Bool mNumber;
    char* mName;
    int mGenericsNum;
    int mMethodGenericsNum;
    struct list$1tuple2$2charphsTypephph* mFields;
    _Bool mOutputed;
    char* mDeclareSName;
};
struct sInfo;
struct sNode
{
    void* _protocol_obj;
    void (*finalize)(void*);
    void* (*clone)(void*);
    _Bool (*compile)(void*,struct sInfo*);
    int (*sline)(void*);
    char* (*sname)(void*);
    _Bool (*terminated)(void*);
    char* (*kind)(void*);
};
struct tuple1$1sTypeph
{
    struct sType* v1;
};
struct list_item$1sTypeph
{
    struct sType* item;
    struct list_item$1sTypeph* prev;
    struct list_item$1sTypeph* next;
};
struct list$1sTypeph
{
    struct list_item$1sTypeph* head;
    struct list_item$1sTypeph* tail;
    int len;
    struct list_item$1sTypeph* it;
};
struct list_item$1sNodeph
{
    struct sNode* item;
    struct list_item$1sNodeph* prev;
    struct list_item$1sNodeph* next;
};
struct list$1sNodeph
{
    struct list_item$1sNodeph* head;
    struct list_item$1sNodeph* tail;
    int len;
    struct list_item$1sNodeph* it;
};
struct sType
{
    struct sClass* mClass;
    struct tuple1$1sTypeph* mNoSolvedGenericsType;
    struct tuple1$1sTypeph* mOriginalLoadVarType;
    char* mGenericsName;
    struct list$1sTypeph* mGenericsTypes;
    struct list$1sNodeph* mArrayNum;
    _Bool mOmitArrayNum;
    struct list$1sTypeph* mParamTypes;
    struct list$1charph* mParamNames;
    struct tuple1$1sTypeph* mResultType;
    _Bool mVarArgs;
    struct sNode* mAlignas;
    _Bool mUnsigned;
    _Bool mShort;
    _Bool mLong;
    _Bool mLongLong;
    _Bool mConstant;
    _Bool mRegister;
    _Bool mVolatile;
    _Bool mStatic;
    _Bool mExtern;
    _Bool mRestrict;
    _Bool mImmutable;
    _Bool mHeap;
    _Bool mDummyHeap;
    _Bool mDelegate;
    _Bool mShare;
    _Bool mClone;
    _Bool mNoHeap;
    _Bool mNoCallingDestructor;
    _Bool mRefference;
    _Bool mException;
    int mPointerNum;
    int mOriginalTypeNamePointerNum;
    int mNoArrayPointerNum;
    struct sNode* mSizeNum;
    unsigned int mDynamicArrayNum;
    unsigned int mTypeOfExpression;
    char* mOriginalTypeName;
    int mOriginalPointerNum;
    _Bool mFunctionParam;
    _Bool mAllocaValue;
    _Bool mGenericsStruct;
    _Bool mSolvedGenericsName;
    _Bool mComeMemCore;
    _Bool mInline;
    _Bool mNullValue;
    char* mAsmName;
};
struct sVar;
struct CVALUE
{
    char* c_value;
    struct sType* type;
    struct sVar* var;
};
struct sVar
{
    char* mName;
    char* mCValueName;
    struct sType* mType;
    int mBlockLevel;
    _Bool mGlobal;
    _Bool mAllocaValue;
    _Bool mFunctionParam;
    _Bool mNoFree;
    char* mFunName;
};
struct sVarTable;
struct sBlock;
struct sFun
{
    char* mName;
    struct sType* mResultType;
    struct list$1sTypeph* mParamTypes;
    struct list$1charph* mParamNames;
    struct list$1charph* mParamDefaultParametors;
    struct sType* mLambdaType;
    struct sBlock* mBlock;
    _Bool mExternal;
    _Bool mVarArgs;
    struct buffer* mSource;
    struct buffer* mSourceHead;
    struct buffer* mSourceHead2;
    struct buffer* mSourceDefer;
    _Bool mStatic;
    char* mComeHeader;
    _Bool mCloner;
    char* mDeclareSName;
};
struct sGenericsFun
{
    struct sType* mImplType;
    struct list$1charph* mGenericsTypeNames;
    char* mName;
    struct sType* mResultType;
    struct list$1sTypeph* mParamTypes;
    struct list$1charph* mParamNames;
    struct list$1charph* mParamDefaultParametors;
    char* mBlock;
    int mSLine;
    _Bool mVarArgs;
    char* mGenericsSName;
    int mGenericsSLine;
};
struct sModule
{
    struct buffer* mSourceHead;
    struct buffer* mSource;
    char* mLastCode;
    char* mLastCode2;
    char* mLastCode3;
};
struct sVarTable;
struct list_item$1charp
{
    char* item;
    struct list_item$1charp* prev;
    struct list_item$1charp* next;
};
struct list$1charp
{
    struct list_item$1charp* head;
    struct list_item$1charp* tail;
    int len;
    struct list_item$1charp* it;
};
struct map$2charphsVarph
{
    char** keys;
    _Bool* item_existance;
    struct sVar** items;
    int size;
    int len;
    struct list$1charp* key_list;
    int it;
};
struct sVarTable
{
    struct map$2charphsVarph* mVars;
    _Bool mGlobal;
    struct sVarTable* mParent;
    int mID;
};
struct sBlock
{
    struct list$1sNodeph* mNodes;
    struct sVarTable* mVarTable;
};
struct sRightValueObject
{
    struct sType* mType;
    char* mVarName;
    char* mFunName;
    _Bool mFreed;
    int mID;
    int mBlockLevel;
};
struct map$2charphsFunph
{
    char** keys;
    _Bool* item_existance;
    struct sFun** items;
    int size;
    int len;
    struct list$1charp* key_list;
    int it;
};
struct map$2charphsGenericsFunph
{
    char** keys;
    _Bool* item_existance;
    struct sGenericsFun** items;
    int size;
    int len;
    struct list$1charp* key_list;
    int it;
};
struct map$2charphsClassph
{
    char** keys;
    _Bool* item_existance;
    struct sClass** items;
    int size;
    int len;
    struct list$1charp* key_list;
    int it;
};
struct map$2charphsTypeph
{
    char** keys;
    _Bool* item_existance;
    struct sType** items;
    int size;
    int len;
    struct list$1charp* key_list;
    int it;
};
struct list_item$1sRightValueObjectph
{
    struct sRightValueObject* item;
    struct list_item$1sRightValueObjectph* prev;
    struct list_item$1sRightValueObjectph* next;
};
struct list$1sRightValueObjectph
{
    struct list_item$1sRightValueObjectph* head;
    struct list_item$1sRightValueObjectph* tail;
    int len;
    struct list_item$1sRightValueObjectph* it;
};
struct list_item$1CVALUEph
{
    struct CVALUE* item;
    struct list_item$1CVALUEph* prev;
    struct list_item$1CVALUEph* next;
};
struct list$1CVALUEph
{
    struct list_item$1CVALUEph* head;
    struct list_item$1CVALUEph* tail;
    int len;
    struct list_item$1CVALUEph* it;
};
struct sInfo
{
    char* p;
    char* head;
    struct buffer* original_source;
    struct buffer* source;
    char* sname;
    char* base_sname;
    int sline;
    int err_num;
    char* err_line;
    char* clang_option;
    char* cpp_option;
    _Bool no_output_err;
    _Bool no_output_come_code;
    struct sFun* come_fun;
    struct sFun* caller_fun;
    int caller_line;
    char* caller_sname;
    int block_level;
    struct map$2charphsFunph* funcs;
    struct map$2charphsGenericsFunph* generics_funcs;
    struct map$2charphsClassph* classes;
    struct map$2charphsTypeph* types;
    struct map$2charphsClassph* generics_classes;
    struct sModule* module;
    struct sType* type;
    struct list$1sRightValueObjectph* right_value_objects;
    struct sType* generics_type;
    struct list$1sTypeph* method_generics_types;
    struct list$1CVALUEph* stack;
    struct sType* come_function_result_type;
    struct sVarTable* lv_table;
    struct sVarTable* gv_table;
    _Bool no_comma;
    _Bool no_assign;
    _Bool last_statment_is_return;
    struct list$1charph* generics_type_names;
    struct sType* impl_type;
    int current_stack_num;
    int num_method_block;
    struct sClass* current_stack_frame_struct;
    struct list$1sTypeph* param_types;
    struct list$1charph* param_names;
    _Bool define_struct;
    _Bool in_typedef;
    _Bool in_loop;
    char* output_file_name;
    struct sVarTable* current_loop_vtable;
    _Bool verbose;
    _Bool output_header_file;
    int num_current_stack;
    int num_source_files;
    int max_source_files;
    _Bool without_semicolon;
    _Bool writing_source_file_position;
};
struct tuple2$2sTypephcharph
{
    struct sType* v1;
    char* v2;
};
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool
{
    struct list$1sTypeph* v1;
    struct list$1charph* v2;
    struct list$1charph* v3;
    _Bool v4;
};
struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool
{
    struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* v1;
    _Bool v2;
};
struct tuple2$2sFunpcharph
{
    struct sFun* v1;
    char* v2;
};
struct tuple3$3sTypephcharphbool
{
    struct sType* v1;
    char* v2;
    _Bool v3;
};
struct optional$2tuple3$3sTypephcharphboolphbool
{
    struct tuple3$3sTypephcharphbool* v1;
    _Bool v2;
};
struct optional$2sNodephbool
{
    struct sNode* v1;
    _Bool v2;
};
struct sNullNodeX
{
    int sline;
    char* sname;
};
struct sNewNode
{
    struct sType* type;
    int sline;
    char* sname;
};
struct sImplementsNode
{
    struct sNode* obj_exp;
    struct sType* inf_type;
    int sline;
    char* sname;
};
struct optional$2tuple2$2charphsTypephphbool
{
    struct tuple2$2charphsTypeph* v1;
    _Bool v2;
};
struct sTrueNode
{
    int sline;
    char* sname;
};
struct sFalseNode
{
    int sline;
    char* sname;
};
struct sSizeOfNode
{
    struct sType* type;
    int sline;
    char* sname;
};
struct sSizeOfExpNode
{
    struct sNode* exp;
    int sline;
    char* sname;
};
struct sAlignOfNode
{
    struct sType* type;
    int sline;
    char* sname;
};
struct sAlignOfExpNode
{
    struct sNode* exp;
    int sline;
    char* sname;
};
struct sAlignOfNode2
{
    struct sType* type;
    int sline;
    char* sname;
};
struct sAlignOfExpNode2
{
    struct sNode* exp;
    int sline;
    char* sname;
};
struct sAlignAsNode
{
    struct sType* type;
    int sline;
    char* sname;
};
struct sAlignAsExpNode
{
    struct sNode* exp;
    int sline;
    char* sname;
};
struct sDeleteNode
{
    struct sNode* node;
    int sline;
    char* sname;
};
struct sForceDeleteNode
{
    struct sNode* node;
    int sline;
    char* sname;
};
struct sDelegateNode
{
    struct sNode* node;
    int sline;
    char* sname;
};
struct sShareNode
{
    struct sNode* node;
    int sline;
    char* sname;
};
struct sBorrowNode
{
    struct sNode* node;
    int sline;
    char* sname;
};
struct sCloneNode
{
    struct sNode* node;
    int sline;
    char* sname;
};
struct sDupeNode
{
    struct sNode* node;
    int sline;
    char* sname;
};
struct sDummyHeapNode
{
    struct sNode* node;
    int sline;
    char* sname;
};
struct sGCIncNode
{
    struct sNode* node;
    int sline;
    char* sname;
};
struct sGCDecNode
{
    struct sNode* node;
    int sline;
    char* sname;
};
struct sIsHeap
{
    struct sType* type;
    int sline;
    char* sname;
};
struct optional$2voidpbool
{
    void* v1;
    _Bool v2;
};
struct __current_stack1__
{
    int __method_block_result_kind__;
    void* __method_block_return_value__;
    char** buf;
    char** head;
    int* head_sline;
    struct sInfo** info;
};

// header function
void come_heap_init(int come_malloc, int come_debug);

void come_heap_final();

int remove(const char* __filename);

int rename(const char* __old, const char* __new);

int renameat(int __oldfd, const char* __old, int __newfd, const char* __new);

int renameat2(int __oldfd, const char* __old, int __newfd, const char* __new, unsigned int __flags);

int fclose(struct _IO_FILE* __stream);

struct _IO_FILE* tmpfile();

struct _IO_FILE* tmpfile64();

char* tmpnam(char anonymous_var_nameX1[20]);

char* tmpnam_r(char __s[20]);

char* tempnam(const char* __dir, const char* __pfx);

int fflush(struct _IO_FILE* __stream);

int fflush_unlocked(struct _IO_FILE* __stream);

int fcloseall();

struct _IO_FILE* fopen(const char* __filename, const char* __modes);

struct _IO_FILE* freopen(const char* __filename, const char* __modes, struct _IO_FILE* __stream);

struct _IO_FILE* fopen64(const char* __filename, const char* __modes);

struct _IO_FILE* freopen64(const char* __filename, const char* __modes, struct _IO_FILE* __stream);

struct _IO_FILE* fdopen(int __fd, const char* __modes);

struct _IO_FILE* fopencookie(void* __magic_cookie, const char* __modes, struct _IO_cookie_io_functions_t __io_funcs);

struct _IO_FILE* fmemopen(void* __s, long int __len, const char* __modes);

struct _IO_FILE* open_memstream(char** __bufloc, long int* __sizeloc);

void setbuf(struct _IO_FILE* __stream, char* __buf);

int setvbuf(struct _IO_FILE* __stream, char* __buf, int __modes, long int __n);

void setbuffer(struct _IO_FILE* __stream, char* __buf, long int __size);

void setlinebuf(struct _IO_FILE* __stream);

int fprintf(struct _IO_FILE* __stream, const char* __format, ...);

int printf(const char* __format, ...);

int sprintf(char* __s, const char* __format, ...);

int vfprintf(struct _IO_FILE* __s, const char* __format, va_list __arg);

int vprintf(const char* __format, va_list __arg);

int vsprintf(char* __s, const char* __format, va_list __arg);

int snprintf(char* __s, long int __maxlen, const char* __format, ...);

int vsnprintf(char* __s, long int __maxlen, const char* __format, va_list __arg);

int vasprintf(char** __ptr, const char* __f, va_list __arg);

int __asprintf(char** __ptr, const char* __fmt, ...);

int asprintf(char** __ptr, const char* __fmt, ...);

int vdprintf(int __fd, const char* __fmt, va_list __arg);

int dprintf(int __fd, const char* __fmt, ...);

int fscanf(struct _IO_FILE* __stream, const char* __format, ...);

int scanf(const char* __format, ...);

int sscanf(const char* __s, const char* __format, ...);

int __isoc99_fscanf(struct _IO_FILE* __stream, const char* __format, ...);

int __isoc99_scanf(const char* __format, ...);

int __isoc99_sscanf(const char* __s, const char* __format, ...);

int vfscanf(struct _IO_FILE* __s, const char* __format, va_list __arg);

int vscanf(const char* __format, va_list __arg);

int vsscanf(const char* __s, const char* __format, va_list __arg);

int __isoc99_vfscanf(struct _IO_FILE* __s, const char* __format, va_list __arg);

int __isoc99_vscanf(const char* __format, va_list __arg);

int __isoc99_vsscanf(const char* __s, const char* __format, va_list __arg);

int fgetc(struct _IO_FILE* __stream);

int getc(struct _IO_FILE* __stream);

int getchar();

int getc_unlocked(struct _IO_FILE* __stream);

int getchar_unlocked();

int fgetc_unlocked(struct _IO_FILE* __stream);

int fputc(int __c, struct _IO_FILE* __stream);

int putc(int __c, struct _IO_FILE* __stream);

int putchar(int __c);

int fputc_unlocked(int __c, struct _IO_FILE* __stream);

int putc_unlocked(int __c, struct _IO_FILE* __stream);

int putchar_unlocked(int __c);

int getw(struct _IO_FILE* __stream);

int putw(int __w, struct _IO_FILE* __stream);

char* fgets(char* __s, int __n, struct _IO_FILE* __stream);

char* fgets_unlocked(char* __s, int __n, struct _IO_FILE* __stream);

long int __getdelim(char** __lineptr, long int* __n, int __delimiter, struct _IO_FILE* __stream);

long int getdelim(char** __lineptr, long int* __n, int __delimiter, struct _IO_FILE* __stream);

long int getline(char** __lineptr, long int* __n, struct _IO_FILE* __stream);

int fputs(const char* __s, struct _IO_FILE* __stream);

int puts(const char* __s);

int ungetc(int __c, struct _IO_FILE* __stream);

long int fread(void* __ptr, long int __size, long int __n, struct _IO_FILE* __stream);

long int fwrite(const void* __ptr, long int __size, long int __n, struct _IO_FILE* __s);

int fputs_unlocked(const char* __s, struct _IO_FILE* __stream);

long int fread_unlocked(void* __ptr, long int __size, long int __n, struct _IO_FILE* __stream);

long int fwrite_unlocked(const void* __ptr, long int __size, long int __n, struct _IO_FILE* __stream);

int fseek(struct _IO_FILE* __stream, long int __off, int __whence);

long int ftell(struct _IO_FILE* __stream);

void rewind(struct _IO_FILE* __stream);

int fseeko(struct _IO_FILE* __stream, long int __off, int __whence);

long int ftello(struct _IO_FILE* __stream);

int fgetpos(struct _IO_FILE* __stream, struct _G_fpos_t* __pos);

int fsetpos(struct _IO_FILE* __stream, const struct _G_fpos_t* __pos);

int fseeko64(struct _IO_FILE* __stream, long int __off, int __whence);

long int ftello64(struct _IO_FILE* __stream);

int fgetpos64(struct _IO_FILE* __stream, struct _G_fpos64_t* __pos);

int fsetpos64(struct _IO_FILE* __stream, const struct _G_fpos64_t* __pos);

void clearerr(struct _IO_FILE* __stream);

int feof(struct _IO_FILE* __stream);

int ferror(struct _IO_FILE* __stream);

void clearerr_unlocked(struct _IO_FILE* __stream);

int feof_unlocked(struct _IO_FILE* __stream);

int ferror_unlocked(struct _IO_FILE* __stream);

void perror(const char* __s);

int fileno(struct _IO_FILE* __stream);

int fileno_unlocked(struct _IO_FILE* __stream);

int pclose(struct _IO_FILE* __stream);

struct _IO_FILE* popen(const char* __command, const char* __modes);

char* ctermid(char* __s);

char* cuserid(char* __s);

int obstack_printf(struct obstack* __obstack, const char* __format, ...);

int obstack_vprintf(struct obstack* __obstack, const char* __format, va_list __args);

void flockfile(struct _IO_FILE* __stream);

int ftrylockfile(struct _IO_FILE* __stream);

void funlockfile(struct _IO_FILE* __stream);

int __uflow(struct _IO_FILE* anonymous_var_nameX2);

int __overflow(struct _IO_FILE* anonymous_var_nameX3, int anonymous_var_nameX4);

long int __ctype_get_mb_cur_max();

double atof(const char* __nptr);

int atoi(const char* __nptr);

long int atol(const char* __nptr);

long long int atoll(const char* __nptr);

double strtod(const char* __nptr, char** __endptr);

float strtof(const char* __nptr, char** __endptr);

long double strtold(const char* __nptr, char** __endptr);

float strtof32(const char* __nptr, char** __endptr);

double strtof64(const char* __nptr, char** __endptr);

long double strtof128(const char* __nptr, char** __endptr);

double strtof32x(const char* __nptr, char** __endptr);

long double strtof64x(const char* __nptr, char** __endptr);

long int strtol(const char* __nptr, char** __endptr, int __base);

unsigned long int strtoul(const char* __nptr, char** __endptr, int __base);

long long int strtoq(const char* __nptr, char** __endptr, int __base);

unsigned long long int strtouq(const char* __nptr, char** __endptr, int __base);

long long int strtoll(const char* __nptr, char** __endptr, int __base);

unsigned long long int strtoull(const char* __nptr, char** __endptr, int __base);

int strfromd(char* __dest, long int __size, const char* __format, double __f);

int strfromf(char* __dest, long int __size, const char* __format, float __f);

int strfroml(char* __dest, long int __size, const char* __format, long double __f);

int strfromf32(char* __dest, long int __size, const char* __format, float __f);

int strfromf64(char* __dest, long int __size, const char* __format, double __f);

int strfromf128(char* __dest, long int __size, const char* __format, long double __f);

int strfromf32x(char* __dest, long int __size, const char* __format, double __f);

int strfromf64x(char* __dest, long int __size, const char* __format, long double __f);

long int strtol_l(const char* __nptr, char** __endptr, int __base, struct __locale_struct* __loc);

unsigned long int strtoul_l(const char* __nptr, char** __endptr, int __base, struct __locale_struct* __loc);

long long int strtoll_l(const char* __nptr, char** __endptr, int __base, struct __locale_struct* __loc);

unsigned long long int strtoull_l(const char* __nptr, char** __endptr, int __base, struct __locale_struct* __loc);

double strtod_l(const char* __nptr, char** __endptr, struct __locale_struct* __loc);

float strtof_l(const char* __nptr, char** __endptr, struct __locale_struct* __loc);

long double strtold_l(const char* __nptr, char** __endptr, struct __locale_struct* __loc);

float strtof32_l(const char* __nptr, char** __endptr, struct __locale_struct* __loc);

double strtof64_l(const char* __nptr, char** __endptr, struct __locale_struct* __loc);

long double strtof128_l(const char* __nptr, char** __endptr, struct __locale_struct* __loc);

double strtof32x_l(const char* __nptr, char** __endptr, struct __locale_struct* __loc);

long double strtof64x_l(const char* __nptr, char** __endptr, struct __locale_struct* __loc);

char* l64a(long int __n);

long int a64l(const char* __s);

int select(int __nfds, struct anonymous_typeX9* __readfds, struct anonymous_typeX9* __writefds, struct anonymous_typeX9* __exceptfds, struct timeval* __timeout);

int pselect(int __nfds, struct anonymous_typeX9* __readfds, struct anonymous_typeX9* __writefds, struct anonymous_typeX9* __exceptfds, const struct timespec* __timeout, const struct anonymous_typeX8* __sigmask);

long int random();

void srandom(unsigned int __seed);

char* initstate(unsigned int __seed, char* __statebuf, long int __statelen);

char* setstate(char* __statebuf);

int random_r(struct random_data* __buf, int* __result);

int srandom_r(unsigned int __seed, struct random_data* __buf);

int initstate_r(unsigned int __seed, char* __statebuf, long int __statelen, struct random_data* __buf);

int setstate_r(char* __statebuf, struct random_data* __buf);

int rand();

void srand(unsigned int __seed);

int rand_r(unsigned int* __seed);

double drand48();

double erand48(unsigned short int __xsubi[3]);

long int lrand48();

long int nrand48(unsigned short int __xsubi[3]);

long int mrand48();

long int jrand48(unsigned short int __xsubi[3]);

void srand48(long int __seedval);

unsigned short int* seed48(unsigned short int __seed16v[3]);

void lcong48(unsigned short int __param[7]);

int drand48_r(struct drand48_data* __buffer, double* __result);

int erand48_r(unsigned short int __xsubi[3], struct drand48_data* __buffer, double* __result);

int lrand48_r(struct drand48_data* __buffer, long int* __result);

int nrand48_r(unsigned short int __xsubi[3], struct drand48_data* __buffer, long int* __result);

int mrand48_r(struct drand48_data* __buffer, long int* __result);

int jrand48_r(unsigned short int __xsubi[3], struct drand48_data* __buffer, long int* __result);

int srand48_r(long int __seedval, struct drand48_data* __buffer);

int seed48_r(unsigned short int __seed16v[3], struct drand48_data* __buffer);

int lcong48_r(unsigned short int __param[7], struct drand48_data* __buffer);

void* malloc(long int __size);

void* calloc(long int __nmemb, long int __size);

void* realloc(void* __ptr, long int __size);

void free(void* __ptr);

void* reallocarray(void* __ptr, long int __nmemb, long int __size);

void* alloca(long int __size);

void* valloc(long int __size);

int posix_memalign(void** __memptr, long int __alignment, long int __size);

void* aligned_alloc(long int __alignment, long int __size);

void abort();

int atexit(void (*__func)());

int at_quick_exit(void (*__func)());

int on_exit(void (*__func)(int,void*), void* __arg);

void exit(int __status);

void quick_exit(int __status);

void _Exit(int __status);

char* getenv(const char* __name);

char* secure_getenv(const char* __name);

int putenv(char* __string);

int setenv(const char* __name, const char* __value, int __replace);

int unsetenv(const char* __name);

int clearenv();

char* mktemp(char* __template);

int mkstemp(char* __template);

int mkstemp64(char* __template);

int mkstemps(char* __template, int __suffixlen);

int mkstemps64(char* __template, int __suffixlen);

char* mkdtemp(char* __template);

int mkostemp(char* __template, int __flags);

int mkostemp64(char* __template, int __flags);

int mkostemps(char* __template, int __suffixlen, int __flags);

int mkostemps64(char* __template, int __suffixlen, int __flags);

int system(const char* __command);

char* canonicalize_file_name(const char* __name);

char* realpath(const char* __name, char* __resolved);

void* bsearch(const void* __key, const void* __base, long int __nmemb, long int __size, int (*__compar)(const void*,const void*));

void qsort(void* __base, long int __nmemb, long int __size, int (*__compar)(const void*,const void*));

void qsort_r(void* __base, long int __nmemb, long int __size, int (*__compar)(const void*,const void*,void*), void* __arg);

int abs(int __x);

long int labs(long int __x);

long long int llabs(long long int __x);

struct anonymous_typeX5 div(int __numer, int __denom);

struct anonymous_typeX6 ldiv(long int __numer, long int __denom);

struct anonymous_typeX7 lldiv(long long int __numer, long long int __denom);

char* ecvt(double __value, int __ndigit, int* __decpt, int* __sign);

char* fcvt(double __value, int __ndigit, int* __decpt, int* __sign);

char* gcvt(double __value, int __ndigit, char* __buf);

char* qecvt(long double __value, int __ndigit, int* __decpt, int* __sign);

char* qfcvt(long double __value, int __ndigit, int* __decpt, int* __sign);

char* qgcvt(long double __value, int __ndigit, char* __buf);

int ecvt_r(double __value, int __ndigit, int* __decpt, int* __sign, char* __buf, long int __len);

int fcvt_r(double __value, int __ndigit, int* __decpt, int* __sign, char* __buf, long int __len);

int qecvt_r(long double __value, int __ndigit, int* __decpt, int* __sign, char* __buf, long int __len);

int qfcvt_r(long double __value, int __ndigit, int* __decpt, int* __sign, char* __buf, long int __len);

int mblen(const char* __s, long int __n);

int mbtowc(unsigned int* __pwc, const char* __s, long int __n);

int wctomb(char* __s, unsigned int __wchar);

long int mbstowcs(unsigned int* __pwcs, const char* __s, long int __n);

long int wcstombs(char* __s, const unsigned int* __pwcs, long int __n);

int rpmatch(const char* __response);

int getsubopt(char** __optionp, char** __tokens, char** __valuep);

int posix_openpt(int __oflag);

int grantpt(int __fd);

int unlockpt(int __fd);

char* ptsname(int __fd);

int ptsname_r(int __fd, char* __buf, long int __buflen);

int getpt();

int getloadavg(double* __loadavg, int __nelem);

void* memcpy(void* __dest, const void* __src, long int __n);

void* memmove(void* __dest, const void* __src, long int __n);

void* memccpy(void* __dest, const void* __src, int __c, long int __n);

void* memset(void* __s, int __c, long int __n);

int memcmp(const void* __s1, const void* __s2, long int __n);

int __memcmpeq(const void* __s1, const void* __s2, long int __n);

void* memchr(const void* __s, int __c, long int __n);

void* rawmemchr(const void* __s, int __c);

void* memrchr(const void* __s, int __c, long int __n);

char* strcpy(char* __dest, const char* __src);

char* strncpy(char* __dest, const char* __src, long int __n);

char* strcat(char* __dest, const char* __src);

char* strncat(char* __dest, const char* __src, long int __n);

int strcmp(const char* __s1, const char* __s2);

int strncmp(const char* __s1, const char* __s2, long int __n);

int strcoll(const char* __s1, const char* __s2);

long int strxfrm(char* __dest, const char* __src, long int __n);

int strcoll_l(const char* __s1, const char* __s2, struct __locale_struct* __l);

long int strxfrm_l(char* __dest, const char* __src, long int __n, struct __locale_struct* __l);

char* strdup(const char* __s);

char* strndup(const char* __string, long int __n);

char* strchr(const char* __s, int __c);

char* strrchr(const char* __s, int __c);

char* strchrnul(const char* __s, int __c);

long int strcspn(const char* __s, const char* __reject);

long int strspn(const char* __s, const char* __accept);

char* strpbrk(const char* __s, const char* __accept);

char* strstr(const char* __haystack, const char* __needle);

char* strtok(char* __s, const char* __delim);

char* __strtok_r(char* __s, const char* __delim, char** __save_ptr);

char* strtok_r(char* __s, const char* __delim, char** __save_ptr);

char* strcasestr(const char* __haystack, const char* __needle);

void* memmem(const void* __haystack, long int __haystacklen, const void* __needle, long int __needlelen);

void* __mempcpy(void* __dest, const void* __src, long int __n);

void* mempcpy(void* __dest, const void* __src, long int __n);

long int strlen(const char* __s);

long int strnlen(const char* __string, long int __maxlen);

char* strerror(int __errnum);

char* strerror_r(int __errnum, char* __buf, long int __buflen);

const char* strerrordesc_np(int __err);

const char* strerrorname_np(int __err);

char* strerror_l(int __errnum, struct __locale_struct* __l);

int bcmp(const void* __s1, const void* __s2, long int __n);

void bcopy(const void* __src, void* __dest, long int __n);

void bzero(void* __s, long int __n);

char* index(const char* __s, int __c);

char* rindex(const char* __s, int __c);

int ffs(int __i);

int ffsl(long int __l);

int ffsll(long long int __ll);

int strcasecmp(const char* __s1, const char* __s2);

int strncasecmp(const char* __s1, const char* __s2, long int __n);

int strcasecmp_l(const char* __s1, const char* __s2, struct __locale_struct* __loc);

int strncasecmp_l(const char* __s1, const char* __s2, long int __n, struct __locale_struct* __loc);

void explicit_bzero(void* __s, long int __n);

char* strsep(char** __stringp, const char* __delim);

char* strsignal(int __sig);

const char* sigabbrev_np(int __sig);

const char* sigdescr_np(int __sig);

char* __stpcpy(char* __dest, const char* __src);

char* stpcpy(char* __dest, const char* __src);

char* __stpncpy(char* __dest, const char* __src, long int __n);

char* stpncpy(char* __dest, const char* __src, long int __n);

int strverscmp(const char* __s1, const char* __s2);

char* strfry(char* __string);

void* memfrob(void* __s, long int __n);

char* basename(const char* __filename);

void come_push_stackframe(char* sname, int sline);

void come_pop_stackframe();

void stackframe();

void exception_stackframe();

void come_save_stackframe(char* sname, int sline);

void* come_null_check(void* mem, char* sname, int sline);

void* come_range_check(void* mem, void* begin, void* end, char* sname, int sline);

_Bool bool_expect(_Bool self, void* parent, void (*block)(void*));

_Bool bool_catch(_Bool self, void* parent, void (*block)(void*));

_Bool bool_value(_Bool self, void* parent, void (*block)(void*));

int int_expect(int self, void* parent, void (*block)(void*));

int int_catch(int self, void* parent, void (*block)(void*));

int int_value(int self, void* parent, void (*block)(void*));

int int_except(int self, void* parent, void (*block)(void*));

_Bool bool_except(_Bool self, void* parent, void (*block)(void*));

void xassert(char* msg, _Bool test);

void* come_calloc(long int count, long int size, char* sname, int sline);

void* come_increment_ref_count(void* mem);

void* come_print_ref_count(void* mem);

void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_);

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_);

void come_free_object(void* mem);

void* come_memdup(void* block, char* sname, int sline);

char* __builtin_string(char* str);

_Bool come_is_contained_element(void** array, int len, void* element);

struct buffer* buffer_initialize(struct buffer* self);

void buffer_finalize(struct buffer* self);

void buffer_force_finalize(struct buffer* self);

struct buffer* buffer_clone(struct buffer* self);

int buffer_length(struct buffer* self);

void buffer_reset(struct buffer* self);

void buffer_trim(struct buffer* self, int len);

struct buffer* buffer_append(struct buffer* self, char* mem, long int size);

struct buffer* buffer_append_char(struct buffer* self, char c);

struct buffer* buffer_append_str(struct buffer* self, char* str);

struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* str);

struct buffer* buffer_append_int(struct buffer* self, int value);

struct buffer* buffer_append_long(struct buffer* self, long value);

struct buffer* buffer_append_short(struct buffer* self, short short value);

struct buffer* buffer_alignment(struct buffer* self);

struct optional$2intbool* buffer_compare(struct buffer* left, struct buffer* right);

struct buffer* string_to_buffer(char* self);

struct buffer* charp_to_buffer(char* self);

char* buffer_to_string(struct buffer* self);

static void smart_pointer$1charp_finalize(struct smart_pointer$1char* self);
static void smart_pointer$1shortp_finalize(struct smart_pointer$1short* self);
static void smart_pointer$1intp_finalize(struct smart_pointer$1int* self);
static void smart_pointer$1longp_finalize(struct smart_pointer$1long* self);
_Bool bool_equals(_Bool self, _Bool right);

_Bool char_equals(char self, char right);

_Bool int_equals(int self, int right);

_Bool short_equals(short short self, short short right);

_Bool long_equals(long self, long right);

_Bool size_t_equals(long self, long right);

_Bool float_equals(float self, float right);

_Bool double_equals(double self, double right);

struct optional$2boolbool* charp_equals(char* self, char* right);

struct optional$2boolbool* string_equals(char* self, char* right);

_Bool string_operator_equals(char* self, char* right);

_Bool charp_operator_equals(char* self, char* right);

_Bool string_operator_not_equals(char* self, char* right);

_Bool charp_operator_not_equals(char* self, char* right);

char* charp_operator_add(char* self, char* right);

char* string_operator_add(char* self, char* right);

char* charp_operator_mult(char* self, int right);

char* string_operator_mult(char* self, int right);

unsigned int bool_get_hash_key(_Bool value);

unsigned int char_get_hash_key(char value);

unsigned int short_get_hash_key(short short value);

unsigned int int_get_hash_key(int value);

unsigned int long_get_hash_key(long value);

unsigned int size_t_get_hash_key(long value);

unsigned int float_get_hash_key(float value);

unsigned int double_get_hash_key(double value);

unsigned int string_get_hash_key(char* value);

unsigned int charp_get_hash_key(char* value);

_Bool bool_clone(char self);

char char_clone(char self);

short int short_clone(short short self);

int int_clone(int self);

long int long_clone(long self);

long int size_t_clone(long self);

double double_clone(double self);

float float_clone(float self);

char* charp_clone(char* self);

char* string_clone(char* self);

_Bool xiswascii(unsigned int c);

_Bool xiswalpha(unsigned int c);

_Bool xiswblank(unsigned int c);

_Bool xiswdigit(unsigned int c);

_Bool xiswalnum(unsigned int c);

_Bool xisblank(char c);

_Bool xisdigit(char c);

_Bool xisalnum(char c);

_Bool xisascii(char c);

_Bool xisalpha(char c);

int string_length(char* str);

int charp_length(char* str);

char* charp_substring(char* str, int head, int tail);

char* string_substring(char* str, int head, int tail);

char* string_operator_load_range_element(char* str, int head, int tail);

char* charp_operator_load_range_element(char* str, int head, int tail);

char* charp_reverse(char* str);

char* string_reverse(char* str);

char* xsprintf(char* msg, ...);

char* charp_delete(char* str, int head, int tail);

char* string_delete(char* str, int head, int tail);

struct list$1charph* string_split_char(char* self, char c);

struct list$1charph* charp_split_char(char* self, char c);

char* xrealpath(char* path);

char* xbasename(char* path);

char* xextname(char* path);

char* xdirname(char* path);

char* xnoextname(char* path);

char* bool_to_string(_Bool self);

char* char_to_string(char self);

char* short_to_string(short short self);

char* int_to_string(int self);

char* long_to_string(long self);

char* size_t_to_string(long int self);

char* float_to_string(float self);

char* double_to_string(double self);

char* string_to_string(char* self);

char* charp_to_string(char* self);

int bool_compare(_Bool left, _Bool right);

int char_compare(char left, char right);

int short_compare(short short left, short short right);

int int_compare(int left, int right);

int long_compare(long left, long right);

int float_compare(float left, float right);

int double_compare(float left, float right);

int size_t_compare(long left, long right);

int string_compare(char* left, char* right);

int charp_compare(char* left, char* right);

struct optional$2intbool* FILE_write(struct _IO_FILE* f, char* str);

struct optional$2charphbool* FILE_read(struct _IO_FILE* f);

struct optional$2intbool* FILE_fclose(struct _IO_FILE* f);

struct optional$2intpbool* FILE_fprintf(struct _IO_FILE* f, const char* msg, ...);

struct optional$2list$1charphphbool* FILE_readlines(struct _IO_FILE* f);

struct optional$2intbool* fopen_block(const char* path, const char* mode, void* parent, void (*block)(void*,struct _IO_FILE*));

struct optional$2intbool* string_write(char* self, char* file_name, _Bool append);

struct optional$2intbool* charp_write(char* self, char* file_name, _Bool append);

struct optional$2charphbool* charp_read(char* file_name);

struct optional$2charphbool* string_read(char* file_name);

struct optional$2charphbool* charp_puts(char* self);

struct optional$2charphbool* string_puts(char* self);

int int_printf(int self, char* msg);

struct optional$2charphbool* string_printf(char* self, ...);

struct optional$2charphbool* charp_printf(char* self, ...);

struct optional$2charphbool* charp_print(char* self);

void int_times(int self, void* parent, void (*block)(void*,int));

int come_main_v1(int argc, char** argv);

_Bool node_compile(struct sNode* node, struct sInfo* info);

int come_main_v2(int argc, char** argv);

void come_init_v2();

void come_final_v2();

void err_msg(struct sInfo* info, char* msg, ...);

int transpile_v2(struct sInfo* info);

_Bool output_source_file_v2(struct sInfo* info);

struct sModule* sModule_initialize(struct sModule* self);

struct sType* sType_initialize(struct sType* self, char* name, _Bool heap, struct sInfo* info);

struct sVarTable* sVarTable_initialize(struct sVarTable* self, _Bool global, struct sVarTable* parent);

void sVarTable_finalize(struct sVarTable* self);

struct sClass* sClass_initialize(struct sClass* self, char* name, _Bool number, _Bool union_, _Bool generics, _Bool method_generics, _Bool protocol_, _Bool struct_, _Bool float_, int generics_num, int method_generics_num, _Bool enum_, struct sInfo* info);

struct sFun* sFun_initialize(struct sFun* self, char* name, struct sType* result_type, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct list$1charph* param_default_parametors, _Bool external, _Bool var_args, struct sBlock* block, _Bool static_, char* come_header, char* declare_sname, struct sInfo* info);

struct optional$2charphbool* make_type_name_string(struct sType* type, _Bool in_header, _Bool array_cast_pointer, _Bool no_pointer, struct sInfo* info);

char* make_come_type_name_string(struct sType* type, struct sInfo* info);

void come_init_v3();

void come_final_v3();

char* header_function(struct sFun* fun, struct sInfo* info);

int transpile_v3(struct sInfo* info);

_Bool output_source_file_v3(struct sInfo* info);

void show_type(struct sType* type, struct sInfo* info);

char* create_generics_name(struct sType* generics_type, struct sInfo* info);

void add_last_code_to_source(struct sInfo* info);

void add_come_code_at_function_head(struct sInfo* info, char* code, ...);

void add_come_code_at_function_head2(struct sInfo* info, char* code, ...);

void add_come_code_at_source_head(struct sInfo* info, const char* msg, ...);

void add_come_code(struct sInfo* info, const char* msg, ...);

void add_come_last_code(struct sInfo* info, const char* msg, ...);

void add_come_last_code2(struct sInfo* info, const char* msg, ...);

void add_come_last_code3(struct sInfo* info, const char* msg, ...);

void add_last_code_to_source_with_comma(struct sInfo* info);

void dec_stack_ptr(int value, struct sInfo* info);

struct CVALUE* get_value_from_stack(int offset, struct sInfo* info);

struct optional$2charphbool* make_define_var(struct sType* type, char* name, _Bool in_header, struct sInfo* info);

void transpiler_clear_last_code(struct sInfo* info);

_Bool output_header_file(struct sInfo* info);

void std_move(struct sType* left_type, struct sType* right_type, struct CVALUE* right_value, struct sInfo* info);

char* append_exception_value(char* c_value, struct sType* type, struct sInfo* info);

_Bool create_equals_method(struct sType* type, struct sInfo* info);

_Bool create_operator_equals_method(struct sType* type, struct sInfo* info);

_Bool create_operator_not_equals_method(struct sType* type, struct sInfo* info);

struct sType* solve_generics(struct sType* type, struct sType* generics_type, struct sInfo* info);

struct sVar* get_variable_from_table(struct sVarTable* table, char* name);

void free_objects_on_return(struct sBlock* current_block, struct sInfo* info, struct sVar* ret_value, _Bool top_block);

void free_objects_on_break(struct sInfo* info);

void free_object(struct sType* type, char* obj, _Bool no_decrement, _Bool no_free, struct sInfo* info, _Bool comma, _Bool ret_value, _Bool force_delete_);

struct tuple2$2sTypephcharph* clone_object(struct sType* type, char* obj, struct sInfo* info);

void free_right_value_objects(struct sInfo* info, _Bool comma);

void free_objects(struct sVarTable* table, struct sVar* ret_value, struct sInfo* info);

char* append_object_to_right_values(char* obj, struct sType* type, struct sInfo* info);

_Bool is_right_values(int right_value_num, struct sInfo* info);

int get_right_value_id_from_obj(char* obj);

void remove_object_from_right_values(int right_value_num, struct sInfo* info);

char* increment_ref_count_object(struct sType* type, char* obj, struct sInfo* info);

void decrement_ref_count_object(struct sType* type, char* obj, struct sInfo* info, _Bool force_delete_);

void caller_begin(struct sInfo* info);

void caller_end(struct sInfo* info);

_Bool operator_overload_fun_self(struct sType* type, char* fun_name, struct CVALUE* left_value, struct sInfo* info);

struct sNode* craete_logical_denial(struct sNode* node, struct sInfo* info);

void backtrace_parse_type(struct sInfo* info);

void transpile_toplevel(_Bool block, struct sInfo* info);

void skip_pointer_attribute(struct sInfo* info);

struct sNode* parse_normal_block(struct sInfo* info);

void check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, struct sInfo* info);

char* parse_attribute(struct sInfo* info);

void come_init_v5();

void come_final_v5();

struct sNode* parse_global_variable(struct sInfo* info);

struct sNode* get_number(_Bool minus, struct sInfo* info);

struct sNode* get_oct_number(struct sInfo* info);

struct sNode* get_hex_number(_Bool minus, struct sInfo* info);

struct sNode* create_int_node(int value, struct sInfo* info);

struct sNode* post_position_operator3_v5(struct sNode* node, struct sInfo* info);

struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool* parse_params(struct sInfo* info);

struct tuple2$2sFunpcharph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info);

struct tuple2$2sFunpcharph* create_force_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info);

struct tuple2$2sFunpcharph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info);

struct tuple2$2sFunpcharph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);

struct tuple2$2sFunpcharph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);

struct tuple2$2sFunpcharph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);

char* skip_block(struct sInfo* info);

_Bool is_contained_generics_class(struct sType* type, struct sInfo* info);

_Bool is_type_name(char* buf, struct sInfo* info);

_Bool parsecmp(char* str, struct sInfo* info);

struct optional$2charphbool* parse_word(struct sInfo* info);

void skip_spaces_and_lf(struct sInfo* info);

struct optional$2intbool* expected_next_character(char c, struct sInfo* info);

struct sBlock* sBlock_initialize(struct sBlock* self, struct sInfo* info);

_Bool create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info);

struct optional$2tuple3$3sTypephcharphboolphbool* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type);

struct tuple2$2sTypephcharph* parse_variable_name(struct sType* base_type_name, _Bool first, struct sInfo* info);

struct sBlock* parse_block(struct sInfo* info, _Bool no_block_level);

int transpile_block(struct sBlock* block, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block);

void arrange_stack(struct sInfo* info, int top);

struct sNode* parse_function(struct sInfo* info);

struct sNode* expression_v5(struct sInfo* info);

struct sNode* statment(struct sInfo* info);

struct sNode* top_level_v1(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* expression_node_v1(struct sInfo* info);

struct sNode* expression_node_v99(struct sInfo* info);

int transpile_v5(struct sInfo* info);

void parse_sharp_v5(struct sInfo* info);

struct optional$2sNodephbool* string_node_v5(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* post_position_operator_v5(struct sNode* node, struct sInfo* info);

char* create_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info);

struct sNode* expression_node_v98(struct sInfo* info);

struct sNode* parse_tuple(struct sInfo* info);

struct sNode* create_none_object(struct sNode* exp, struct sInfo* info);

struct sNode* create_some_object(struct sNode* exp, struct sInfo* info);

struct sNode* store_var(char* name, struct list$1charph* multiple_assign, struct sType* type, _Bool alloc, struct sNode* right_node, struct sInfo* info);

struct sNode* load_var(char* name, struct sInfo* info);

struct optional$2sNodephbool* string_node_v7(char* buf, char* head, int head_sline, struct sInfo* info);

void add_variable_to_table(char* name, struct sType* type, struct sInfo* info);

void add_variable_to_global_table(char* name, struct sType* type, struct sInfo* info);

void add_variable_to_global_table_with_int_value(char* name, struct sType* type, char* c_value, struct sInfo* info);

struct optional$2sNodephbool* string_node_v8(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* parse_if_method_call(struct sNode* expression_node, struct sInfo* info);

struct sNode* parse_elif_method_call(struct sNode* expression_node, struct sInfo* info);

struct sNode* parse_or_statment(struct sNode* expression_node, struct sInfo* info);

struct sNode* parse_and_statment(struct sNode* expression_node, struct sInfo* info);

struct optional$2sNodephbool* string_node_v9(char* buf, char* head, int head_sline, struct sInfo* info);

struct optional$2sNodephbool* string_node_v10(char* buf, char* head, int head_sline, struct sInfo* info);

struct optional$2sNodephbool* string_node_v11(char* buf, char* head, int head_sline, struct sInfo* info);

struct optional$2sNodephbool* string_node_v12(char* buf, char* head, int head_sline, struct sInfo* info);

_Bool operator_overload_fun(struct sType* type, char* fun_name, struct CVALUE* left_value, struct CVALUE* right_value, struct sInfo* info);

struct sNode* expression_v13(struct sInfo* info);

struct sNode* post_op_v13(struct sNode* node, struct sInfo* info);

struct optional$2sNodephbool* string_node_v13(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* create_null_object(struct sInfo* info);

struct optional$2sNodephbool* string_node_v14(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* parse_struct(char* type_name, struct sInfo* info);

char* get_none_generics_name(char* class_name);

struct sNode* top_level_v98(char* buf, char* head, int head_sline, struct sInfo* info);

_Bool output_generics_struct(struct sType* type, struct sType* generics_type, struct sInfo* info);

void output_struct(struct sClass* klass, struct sInfo* info);

struct optional$2sNodephbool* string_node_v15(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* parse_union(char* type_name, struct sInfo* info);

struct sNode* top_level_v97(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* parse_enum(char* type_name, struct sInfo* info);

struct sNode* top_level_v96(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* top_level_v95(char* buf, char* head, int head_sline, struct sInfo* info);

_Bool compiletime_get_exception_value(struct sInfo* info);

struct sNode* store_field(struct sNode* left, struct sNode* right, char* name, struct sInfo* info);

struct sNode* exception_get_value(struct sNode* node, struct sInfo* info);

struct sNode* post_position_operator_v18(struct sNode* node, struct sInfo* info);

struct sNode* post_position_operator2_v18(struct sNode* node, struct sInfo* info);

struct sNode* parse_method_call_v18(struct sNode* obj, char* fun_name, struct sInfo* info);

struct sNode* post_position_operator2_v19(struct sNode* node, struct sInfo* info);

char* make_generics_function(struct sType* type, char* fun_name, struct sInfo* info);

struct sNode* parse_method_call_v20(struct sNode* obj, char* fun_name, struct sInfo* info);

struct optional$2sNodephbool* string_node_v20(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* post_position_operator3_v20(struct sNode* node, struct sInfo* info);

struct sNode* top_level_v93(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* top_level_v92(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNullNodeX* sNullNodeX_initialize(struct sNullNodeX* self, struct sInfo* info);

_Bool sNullNodeX_terminated();

char* sNullNodeX_kind();

_Bool sNullNodeX_compile(struct sNullNodeX* self, struct sInfo* info);

int sNullNodeX_sline(struct sNullNodeX* self, struct sInfo* info);

char* sNullNodeX_sname(struct sNullNodeX* self, struct sInfo* info);

struct sNewNode* sNewNode_initialize(struct sNewNode* self, struct sType* type, struct sInfo* info);

static struct sType* sType_clone(struct sType* self);
static void sType_finalize(struct sType* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self);
static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self);
static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item);
static void list$1sTypeph_finalize(struct list$1sTypeph* self);
static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item);
static struct sNode* sNode_clone(struct sNode* self);
static void list$1sNodeph_finalize(struct list$1sNodeph* self);
static struct list$1charph* list$1charphp_clone(struct list$1charph* self);
static struct list$1charph* list$1charph_initialize(struct list$1charph* self);
static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item);
static void list$1charph_finalize(struct list$1charph* self);
int sNewNode_sline(struct sNewNode* self, struct sInfo* info);

char* sNewNode_sname(struct sNewNode* self, struct sInfo* info);

_Bool sNewNode_terminated();

char* sNewNode_kind();

_Bool sNewNode_compile(struct sNewNode* self, struct sInfo* info);

static void CVALUE_finalize(struct CVALUE* self);
static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self);
static _Bool list$1sNodeph_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self);
static char* optional$2charphbool_expect(struct optional$2charphbool* self);
static void optional$2charphboolp_finalize(struct optional$2charphbool* self);
static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
struct sNode* create_object(struct sType* type, struct sInfo* info);

struct sImplementsNode* sImplementsNode_initialize(struct sImplementsNode* self, struct sNode* obj_exp, struct sType* inf_type, struct sInfo* info);

int sImplementsNode_sline(struct sImplementsNode* self, struct sInfo* info);

char* sImplementsNode_sname(struct sImplementsNode* self, struct sInfo* info);

_Bool sImplementsNode_terminated();

char* sImplementsNode_kind();

_Bool sImplementsNode_compile(struct sImplementsNode* self, struct sInfo* info);

static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self);
static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self);
static struct optional$2tuple2$2charphsTypephphbool* list$1tuple2$2charphsTypephphp_operator_load_element(struct list$1tuple2$2charphsTypephph* self, int position);
static struct optional$2tuple2$2charphsTypephphbool* optional$2tuple2$2charphsTypephphbool_initialize(struct optional$2tuple2$2charphsTypephphbool* self, struct tuple2$2charphsTypeph* v1, _Bool v2);
static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self);
static void optional$2tuple2$2charphsTypephphboolp_finalize(struct optional$2tuple2$2charphsTypephphbool* self);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
static struct tuple2$2charphsTypeph* optional$2tuple2$2charphsTypephphbool_value(struct optional$2tuple2$2charphsTypephphbool* self);
struct sTrueNode* sTrueNode_initialize(struct sTrueNode* self, struct sInfo* info);

int sTrueNode_sline(struct sTrueNode* self, struct sInfo* info);

char* sTrueNode_sname(struct sTrueNode* self, struct sInfo* info);

_Bool sTrueNode_terminated();

char* sTrueNode_kind();

_Bool sTrueNode_compile(struct sTrueNode* self, struct sInfo* info);

struct sNode* create_true_object(struct sInfo* info);

struct sFalseNode* sFalseNode_initialize(struct sFalseNode* self, struct sInfo* info);

int sFalseNode_sline(struct sFalseNode* self, struct sInfo* info);

char* sFalseNode_sname(struct sFalseNode* self, struct sInfo* info);

_Bool sFalseNode_terminated();

char* sFalseNode_kind();

_Bool sFalseNode_compile(struct sFalseNode* self, struct sInfo* info);

struct sNode* create_false_object(struct sInfo* info);

struct sSizeOfNode* sSizeOfNode_initialize(struct sSizeOfNode* self, struct sType* type, struct sInfo* info);

int sSizeOfNode_sline(struct sSizeOfNode* self, struct sInfo* info);

char* sSizeOfNode_sname(struct sSizeOfNode* self, struct sInfo* info);

_Bool sSizeOfNode_terminated();

char* sSizeOfNode_kind();

_Bool sSizeOfNode_compile(struct sSizeOfNode* self, struct sInfo* info);

struct sSizeOfExpNode* sSizeOfExpNode_initialize(struct sSizeOfExpNode* self, struct sNode* exp, struct sInfo* info);

int sSizeOfExpNode_sline(struct sSizeOfExpNode* self, struct sInfo* info);

char* sSizeOfExpNode_sname(struct sSizeOfExpNode* self, struct sInfo* info);

_Bool sSizeOfExpNode_terminated();

char* sSizeOfExpNode_kind();

_Bool sSizeOfExpNode_compile(struct sSizeOfExpNode* self, struct sInfo* info);

struct sAlignOfNode* sAlignOfNode_initialize(struct sAlignOfNode* self, struct sType* type, struct sInfo* info);

int sAlignOfNode_sline(struct sAlignOfNode* self, struct sInfo* info);

char* sAlignOfNode_sname(struct sAlignOfNode* self, struct sInfo* info);

_Bool sAlignOfNode_terminated();

char* sAlignOfNode_kind();

_Bool sAlignOfNode_compile(struct sAlignOfNode* self, struct sInfo* info);

struct sAlignOfExpNode* sAlignOfExpNode_initialize(struct sAlignOfExpNode* self, struct sNode* exp, struct sInfo* info);

int sAlignOfExpNode_sline(struct sAlignOfExpNode* self, struct sInfo* info);

char* sAlignOfExpNode_sname(struct sAlignOfExpNode* self, struct sInfo* info);

_Bool sAlignOfExpNode_terminated();

char* sAlignOfExpNode_kind();

_Bool sAlignOfExpNode_compile(struct sAlignOfExpNode* self, struct sInfo* info);

struct sAlignOfNode2* sAlignOfNode2_initialize(struct sAlignOfNode2* self, struct sType* type, struct sInfo* info);

int sAlignOfNode2_sline(struct sAlignOfNode2* self, struct sInfo* info);

char* sAlignOfNode2_sname(struct sAlignOfNode2* self, struct sInfo* info);

_Bool sAlignOfNode2_terminated();

char* sAlignOfNode2_kind();

_Bool sAlignOfNode2_compile(struct sAlignOfNode2* self, struct sInfo* info);

struct sAlignOfExpNode2* sAlignOfExpNode2_initialize(struct sAlignOfExpNode2* self, struct sNode* exp, struct sInfo* info);

int sAlignOfExpNode2_sline(struct sAlignOfExpNode2* self, struct sInfo* info);

char* sAlignOfExpNode2_sname(struct sAlignOfExpNode2* self, struct sInfo* info);

_Bool sAlignOfExpNode2_terminated();

char* sAlignOfExpNode2_kind();

_Bool sAlignOfExpNode2_compile(struct sAlignOfExpNode2* self, struct sInfo* info);

struct sAlignAsNode* sAlignAsNode_initialize(struct sAlignAsNode* self, struct sType* type, struct sInfo* info);

int sAlignAsNode_sline(struct sAlignAsNode* self, struct sInfo* info);

char* sAlignAsNode_sname(struct sAlignAsNode* self, struct sInfo* info);

_Bool sAlignAsNode_terminated();

char* sAlignAsNode_kind();

_Bool sAlignAsNode_compile(struct sAlignAsNode* self, struct sInfo* info);

struct sAlignAsExpNode* sAlignAsExpNode_initialize(struct sAlignAsExpNode* self, struct sNode* exp, struct sInfo* info);

int sAlignAsExpNode_sline(struct sAlignAsExpNode* self, struct sInfo* info);

char* sAlignAsExpNode_sname(struct sAlignAsExpNode* self, struct sInfo* info);

_Bool sAlignAsExpNode_terminated();

char* sAlignAsExpNode_kind();

_Bool sAlignAsExpNode_compile(struct sAlignAsExpNode* self, struct sInfo* info);

struct sDeleteNode* sDeleteNode_initialize(struct sDeleteNode* self, struct sNode* node, struct sInfo* info);

int sDeleteNode_sline(struct sDeleteNode* self, struct sInfo* info);

char* sDeleteNode_sname(struct sDeleteNode* self, struct sInfo* info);

_Bool sDeleteNode_terminated();

char* sDeleteNode_kind();

_Bool sDeleteNode_compile(struct sDeleteNode* self, struct sInfo* info);

struct sForceDeleteNode* sForceDeleteNode_initialize(struct sForceDeleteNode* self, struct sNode* node, struct sInfo* info);

int sForceDeleteNode_sline(struct sForceDeleteNode* self, struct sInfo* info);

char* sForceDeleteNode_sname(struct sForceDeleteNode* self, struct sInfo* info);

_Bool sForceDeleteNode_terminated();

char* sForceDeleteNode_kind();

_Bool sForceDeleteNode_compile(struct sDeleteNode* self, struct sInfo* info);

struct sDelegateNode* sDelegateNode_initialize(struct sDelegateNode* self, struct sNode* node, struct sInfo* info);

int sDelegateNode_sline(struct sDelegateNode* self, struct sInfo* info);

char* sDelegateNode_sname(struct sDelegateNode* self, struct sInfo* info);

_Bool sDelegateNode_terminated();

char* sDelegateNode_kind();

_Bool sDelegateNode_compile(struct sDelegateNode* self, struct sInfo* info);

struct sShareNode* sShareNode_initialize(struct sShareNode* self, struct sNode* node, struct sInfo* info);

int sShareNode_sline(struct sShareNode* self, struct sInfo* info);

char* sShareNode_sname(struct sShareNode* self, struct sInfo* info);

_Bool sShareNode_terminated();

char* sShareNode_kind();

_Bool sShareNode_compile(struct sShareNode* self, struct sInfo* info);

struct sBorrowNode* sBorrowNode_initialize(struct sBorrowNode* self, struct sNode* node, struct sInfo* info);

int sBorrowNode_sline(struct sBorrowNode* self, struct sInfo* info);

char* sBorrowNode_sname(struct sBorrowNode* self, struct sInfo* info);

_Bool sBorrowNode_terminated();

char* sBorrowNode_kind();

_Bool sBorrowNode_compile(struct sBorrowNode* self, struct sInfo* info);

struct sCloneNode* sCloneNode_initialize(struct sCloneNode* self, struct sNode* node, struct sInfo* info);

int sCloneNode_sline(struct sCloneNode* self, struct sInfo* info);

char* sCloneNode_sname(struct sCloneNode* self, struct sInfo* info);

_Bool sCloneNode_terminated();

char* sCloneNode_kind();

_Bool sCloneNode_compile(struct sCloneNode* self, struct sInfo* info);

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self);
struct sDupeNode* sDupeNode_initialize(struct sDupeNode* self, struct sNode* node, struct sInfo* info);

int sDupeNode_sline(struct sDupeNode* self, struct sInfo* info);

char* sDupeNode_sname(struct sDupeNode* self, struct sInfo* info);

_Bool sDupeNode_terminated();

char* sDupeNode_kind();

_Bool sDupeNode_compile(struct sDupeNode* self, struct sInfo* info);

struct sDummyHeapNode* sDummyHeapNode_initialize(struct sDummyHeapNode* self, struct sNode* node, struct sInfo* info);

int sDummyHeapNode_sline(struct sDummyHeapNode* self, struct sInfo* info);

char* sDummyHeapNode_sname(struct sDummyHeapNode* self, struct sInfo* info);

_Bool sDummyHeapNode_terminated();

char* sDummyHeapNode_kind();

_Bool sDummyHeapNode_compile(struct sDummyHeapNode* self, struct sInfo* info);

struct sGCIncNode* sGCIncNode_initialize(struct sGCIncNode* self, struct sNode* node, struct sInfo* info);

int sGCIncNode_sline(struct sGCIncNode* self, struct sInfo* info);

char* sGCIncNode_sname(struct sGCIncNode* self, struct sInfo* info);

_Bool sGCIncNode_terminated();

char* sGCIncNode_kind();

_Bool sGCIncNode_compile(struct sGCIncNode* self, struct sInfo* info);

struct sGCDecNode* sGCDecNode_initialize(struct sGCDecNode* self, struct sNode* node, struct sInfo* info);

int sGCDecNode_sline(struct sGCDecNode* self, struct sInfo* info);

char* sGCDecNode_sname(struct sGCDecNode* self, struct sInfo* info);

_Bool sGCDecNode_terminated();

char* sGCDecNode_kind();

_Bool sGCDecNode_compile(struct sGCDecNode* self, struct sInfo* info);

struct sIsHeap* sIsHeap_initialize(struct sIsHeap* self, struct sType* type, struct sInfo* info);

int sIsHeap_sline(struct sIsHeap* self, struct sInfo* info);

char* sIsHeap_sname(struct sIsHeap* self, struct sInfo* info);

_Bool sIsHeap_terminated();

char* sIsHeap_kind();

_Bool sIsHeap_compile(struct sIsHeap* self, struct sInfo* info);

struct sNode* string_node_v21(char* buf, char* head, int head_sline, struct sInfo* info);

static struct tuple3$3sTypephcharphbool* optional$2tuple3$3sTypephcharphboolphbool_value(struct optional$2tuple3$3sTypephcharphboolphbool* self);
static void optional$2tuple3$3sTypephcharphboolphboolp_finalize(struct optional$2tuple3$3sTypephcharphboolphbool* self);
static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static struct optional$2voidpbool* optional$2voidpbool_initialize(struct optional$2voidpbool* self, void* v1, _Bool v2);
static void optional$2voidpboolp_finalize(struct optional$2voidpbool* self);
static int optional$2intbool_value(struct optional$2intbool* self);
static void optional$2intboolp_finalize(struct optional$2intbool* self);
static struct optional$2sNodephbool* optional$2sNodephbool_initialize(struct optional$2sNodephbool* self, struct sNode* v1, _Bool v2);
static void optional$2sNodephboolp_finalize(struct optional$2sNodephbool* self);
static void sNewNode_finalize(struct sNewNode* self);
static struct sNewNode* sNewNode_clone(struct sNewNode* self);
static void sTrueNode_finalize(struct sTrueNode* self);
static struct sTrueNode* sTrueNode_clone(struct sTrueNode* self);
static void sFalseNode_finalize(struct sFalseNode* self);
static struct sFalseNode* sFalseNode_clone(struct sFalseNode* self);
static void sDeleteNode_finalize(struct sDeleteNode* self);
static struct sDeleteNode* sDeleteNode_clone(struct sDeleteNode* self);
static void sForceDeleteNode_finalize(struct sForceDeleteNode* self);
static struct sForceDeleteNode* sForceDeleteNode_clone(struct sForceDeleteNode* self);
static void sBorrowNode_finalize(struct sBorrowNode* self);
static struct sBorrowNode* sBorrowNode_clone(struct sBorrowNode* self);
static void sDelegateNode_finalize(struct sDelegateNode* self);
static struct sDelegateNode* sDelegateNode_clone(struct sDelegateNode* self);
static void sShareNode_finalize(struct sShareNode* self);
static struct sShareNode* sShareNode_clone(struct sShareNode* self);
static void sCloneNode_finalize(struct sCloneNode* self);
static struct sCloneNode* sCloneNode_clone(struct sCloneNode* self);
static void sDupeNode_finalize(struct sDupeNode* self);
static struct sDupeNode* sDupeNode_clone(struct sDupeNode* self);
static void sDummyHeapNode_finalize(struct sDummyHeapNode* self);
static struct sDummyHeapNode* sDummyHeapNode_clone(struct sDummyHeapNode* self);
static void sGCIncNode_finalize(struct sGCIncNode* self);
static struct sGCIncNode* sGCIncNode_clone(struct sGCIncNode* self);
static void sGCDecNode_finalize(struct sGCDecNode* self);
static struct sGCDecNode* sGCDecNode_clone(struct sGCDecNode* self);
static void sIsHeap_finalize(struct sIsHeap* self);
static struct sIsHeap* sIsHeap_clone(struct sIsHeap* self);
static void sSizeOfNode_finalize(struct sSizeOfNode* self);
static struct sSizeOfNode* sSizeOfNode_clone(struct sSizeOfNode* self);
static void sSizeOfExpNode_finalize(struct sSizeOfExpNode* self);
static struct sSizeOfExpNode* sSizeOfExpNode_clone(struct sSizeOfExpNode* self);
static void sAlignOfNode_finalize(struct sAlignOfNode* self);
static struct sAlignOfNode* sAlignOfNode_clone(struct sAlignOfNode* self);
static void sAlignOfExpNode_finalize(struct sAlignOfExpNode* self);
static struct sAlignOfExpNode* sAlignOfExpNode_clone(struct sAlignOfExpNode* self);
static void sAlignOfNode2_finalize(struct sAlignOfNode2* self);
static struct sAlignOfNode2* sAlignOfNode2_clone(struct sAlignOfNode2* self);
static void sAlignOfExpNode2_finalize(struct sAlignOfExpNode2* self);
static struct sAlignOfExpNode2* sAlignOfExpNode2_clone(struct sAlignOfExpNode2* self);
static void sAlignAsNode_finalize(struct sAlignAsNode* self);
static struct sAlignAsNode* sAlignAsNode_clone(struct sAlignAsNode* self);
static void sAlignAsExpNode_finalize(struct sAlignAsExpNode* self);
static struct sAlignAsExpNode* sAlignAsExpNode_clone(struct sAlignAsExpNode* self);
static struct sNode* optional$2sNodephbool_catch(struct optional$2sNodephbool* self, void* parent, void (*block)(void*));
void method_block1_21objc(struct __current_stack1__* parent);

struct sNode* top_level_v94(char* buf, char* head, int head_sline, struct sInfo* info);

static void sNullNodeX_finalize(struct sNullNodeX* self);
static struct sNullNodeX* sNullNodeX_clone(struct sNullNodeX* self);
struct sNode* post_position_operator3_v21(struct sNode* node, struct sInfo* info);

static void sImplementsNode_finalize(struct sImplementsNode* self);
static struct sImplementsNode* sImplementsNode_clone(struct sImplementsNode* self);
// inline function
static inline unsigned short int __bswap_16(unsigned short int __bsx){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
unsigned short int __result1__;
memset(&__result_obj__, 0, sizeof(void*));
    __result1__ = ((unsigned short int)((((__bsx)>>8)&255)|(((__bsx)&255)<<8)));
    return __result1__;
}
static inline unsigned int __bswap_32(unsigned int __bsx){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
unsigned int __result2__;
memset(&__result_obj__, 0, sizeof(void*));
    __result2__ = ((((__bsx)&4278190080)>>24)|(((__bsx)&16711680)>>8)|(((__bsx)&65280)<<8)|(((__bsx)&255)<<24));
    return __result2__;
}
static inline unsigned long int __bswap_64(unsigned long int __bsx){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
unsigned long int __result3__;
memset(&__result_obj__, 0, sizeof(void*));
    __result3__ = ((((__bsx)&18374686479671623680)>>56)|(((__bsx)&71776119061217280)>>40)|(((__bsx)&280375465082880)>>24)|(((__bsx)&1095216660480)>>8)|(((__bsx)&4278190080)<<8)|(((__bsx)&16711680)<<24)|(((__bsx)&65280)<<40)|(((__bsx)&255)<<56));
    return __result3__;
}
static inline unsigned short int __uint16_identity(unsigned short int __x){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
unsigned short int __result4__;
memset(&__result_obj__, 0, sizeof(void*));
    __result4__ = __x;
    return __result4__;
}
static inline unsigned int __uint32_identity(unsigned int __x){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
unsigned int __result5__;
memset(&__result_obj__, 0, sizeof(void*));
    __result5__ = __x;
    return __result5__;
}
static inline unsigned long int __uint64_identity(unsigned long int __x){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
unsigned long int __result6__;
memset(&__result_obj__, 0, sizeof(void*));
    __result6__ = __x;
    return __result6__;
}
static inline _Bool die(char* msg){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __result7__;
memset(&__result_obj__, 0, sizeof(void*));
    perror(msg);
    stackframe();
    exit(4);
    __result7__ = (_Bool)0;
    return __result7__;
}
static inline struct smart_pointer$1char* buffer_to_pointer(struct buffer* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value0;
struct smart_pointer$1char* result_0;
void* right_value1;
struct buffer* __dec_obj1;
struct smart_pointer$1char* __result8__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_0, 0, sizeof(struct smart_pointer$1char*));
    result_0=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value0=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 1995))));
    if(right_value0 && right_value0 != __result_obj__) { come_call_finalizer(smart_pointer$1charp_finalize,right_value0, (void*)0, (void*)0, 0, 1, 0, 0); }
    __dec_obj1=result_0->memory;
    result_0->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value1=buffer_clone(self))));
    if(__dec_obj1) { come_call_finalizer(buffer_finalize,__dec_obj1, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value1 && right_value1 != __result_obj__) { come_call_finalizer(buffer_finalize,right_value1, (void*)0, (void*)0, 0, 1, 0, 0); }
    result_0->p=result_0->memory->buf;
    __result8__ = __result_obj__ = result_0;
    if(result_0) { come_call_finalizer(smart_pointer$1charp_finalize,result_0, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result8__;
    if(result_0) { come_call_finalizer(smart_pointer$1charp_finalize,result_0, (void*)0, (void*)0, 0, 0, 0, 0); }
}
static inline struct smart_pointer$1char* buffer_to_char_pointer(struct buffer* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value2;
struct smart_pointer$1char* result_1;
void* right_value3;
struct buffer* __dec_obj2;
struct smart_pointer$1char* __result9__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_1, 0, sizeof(struct smart_pointer$1char*));
    result_1=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value2=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 2005))));
    if(right_value2 && right_value2 != __result_obj__) { come_call_finalizer(smart_pointer$1charp_finalize,right_value2, (void*)0, (void*)0, 0, 1, 0, 0); }
    __dec_obj2=result_1->memory;
    result_1->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value3=buffer_clone(self))));
    if(__dec_obj2) { come_call_finalizer(buffer_finalize,__dec_obj2, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value3 && right_value3 != __result_obj__) { come_call_finalizer(buffer_finalize,right_value3, (void*)0, (void*)0, 0, 1, 0, 0); }
    result_1->p=(char*)result_1->memory->buf;
    __result9__ = __result_obj__ = result_1;
    if(result_1) { come_call_finalizer(smart_pointer$1charp_finalize,result_1, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result9__;
    if(result_1) { come_call_finalizer(smart_pointer$1charp_finalize,result_1, (void*)0, (void*)0, 0, 0, 0, 0); }
}
static inline struct smart_pointer$1short* buffer_to_short_pointer(struct buffer* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value4;
struct smart_pointer$1short* result_2;
void* right_value5;
struct buffer* __dec_obj3;
struct smart_pointer$1short* __result10__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_2, 0, sizeof(struct smart_pointer$1short*));
    result_2=(struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value4=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang2.h", 2015))));
    if(right_value4 && right_value4 != __result_obj__) { come_call_finalizer(smart_pointer$1shortp_finalize,right_value4, (void*)0, (void*)0, 0, 1, 0, 0); }
    __dec_obj3=result_2->memory;
    result_2->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value5=buffer_clone(self))));
    if(__dec_obj3) { come_call_finalizer(buffer_finalize,__dec_obj3, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value5 && right_value5 != __result_obj__) { come_call_finalizer(buffer_finalize,right_value5, (void*)0, (void*)0, 0, 1, 0, 0); }
    result_2->p=(short short*)result_2->memory->buf;
    __result10__ = __result_obj__ = result_2;
    if(result_2) { come_call_finalizer(smart_pointer$1shortp_finalize,result_2, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result10__;
    if(result_2) { come_call_finalizer(smart_pointer$1shortp_finalize,result_2, (void*)0, (void*)0, 0, 0, 0, 0); }
}
static inline struct smart_pointer$1int* buffer_to_int_pointer(struct buffer* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value6;
struct smart_pointer$1int* result_3;
void* right_value7;
struct buffer* __dec_obj4;
struct smart_pointer$1int* __result11__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_3, 0, sizeof(struct smart_pointer$1int*));
    result_3=(struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value6=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang2.h", 2025))));
    if(right_value6 && right_value6 != __result_obj__) { come_call_finalizer(smart_pointer$1intp_finalize,right_value6, (void*)0, (void*)0, 0, 1, 0, 0); }
    __dec_obj4=result_3->memory;
    result_3->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value7=buffer_clone(self))));
    if(__dec_obj4) { come_call_finalizer(buffer_finalize,__dec_obj4, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value7 && right_value7 != __result_obj__) { come_call_finalizer(buffer_finalize,right_value7, (void*)0, (void*)0, 0, 1, 0, 0); }
    result_3->p=(int*)result_3->memory->buf;
    __result11__ = __result_obj__ = result_3;
    if(result_3) { come_call_finalizer(smart_pointer$1intp_finalize,result_3, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result11__;
    if(result_3) { come_call_finalizer(smart_pointer$1intp_finalize,result_3, (void*)0, (void*)0, 0, 0, 0, 0); }
}
static inline struct smart_pointer$1long* buffer_to_long_pointer(struct buffer* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value8;
struct smart_pointer$1long* result_4;
void* right_value9;
struct buffer* __dec_obj5;
struct smart_pointer$1long* __result12__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_4, 0, sizeof(struct smart_pointer$1long*));
    result_4=(struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value8=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang2.h", 2035))));
    if(right_value8 && right_value8 != __result_obj__) { come_call_finalizer(smart_pointer$1longp_finalize,right_value8, (void*)0, (void*)0, 0, 1, 0, 0); }
    __dec_obj5=result_4->memory;
    result_4->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value9=buffer_clone(self))));
    if(__dec_obj5) { come_call_finalizer(buffer_finalize,__dec_obj5, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value9 && right_value9 != __result_obj__) { come_call_finalizer(buffer_finalize,right_value9, (void*)0, (void*)0, 0, 1, 0, 0); }
    result_4->p=(long*)result_4->memory->buf;
    __result12__ = __result_obj__ = result_4;
    if(result_4) { come_call_finalizer(smart_pointer$1longp_finalize,result_4, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result12__;
    if(result_4) { come_call_finalizer(smart_pointer$1longp_finalize,result_4, (void*)0, (void*)0, 0, 0, 0, 0); }
}

// body function








static void smart_pointer$1charp_finalize(struct smart_pointer$1char* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional1;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional1=self!=((void*)0)&&self->memory!=((void*)0),        _if_conditional1) {
            if(self->memory) { come_call_finalizer(buffer_finalize,self->memory, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
}



static void smart_pointer$1shortp_finalize(struct smart_pointer$1short* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional2;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional2=self!=((void*)0)&&self->memory!=((void*)0),        _if_conditional2) {
            if(self->memory) { come_call_finalizer(buffer_finalize,self->memory, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
}


static void smart_pointer$1intp_finalize(struct smart_pointer$1int* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional3;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional3=self!=((void*)0)&&self->memory!=((void*)0),        _if_conditional3) {
            if(self->memory) { come_call_finalizer(buffer_finalize,self->memory, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
}


static void smart_pointer$1longp_finalize(struct smart_pointer$1long* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional4;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional4=self!=((void*)0)&&self->memory!=((void*)0),        _if_conditional4) {
            if(self->memory) { come_call_finalizer(buffer_finalize,self->memory, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
}

struct sNullNodeX* sNullNodeX_initialize(struct sNullNodeX* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value10;
char* __dec_obj6;
struct sNullNodeX* __result13__;
memset(&__result_obj__, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj6=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value10=__builtin_string(info->sname))));
    if(__dec_obj6) { __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0,0,0); }
    if(right_value10 && right_value10 != __result_obj__) { right_value10 = come_decrement_ref_count(right_value10, (void*)0, (void*)0, 1, 0, 0); }
    __result13__ = __result_obj__ = self;
    if(self) { come_call_finalizer(sNullNodeX_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result13__;
    if(self) { come_call_finalizer(sNullNodeX_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

_Bool sNullNodeX_terminated(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __result14__;
memset(&__result_obj__, 0, sizeof(void*));
    __result14__ = (_Bool)0;
    return __result14__;
}

char* sNullNodeX_kind(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value11;
char* __result15__;
memset(&__result_obj__, 0, sizeof(void*));
    __result15__ = __result_obj__ = ((char*)(right_value11=__builtin_string("sNullNodeX")));
    return __result15__;
}

_Bool sNullNodeX_compile(struct sNullNodeX* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __result16__;
memset(&__result_obj__, 0, sizeof(void*));
    __result16__ = (_Bool)1;
    return __result16__;
}

int sNullNodeX_sline(struct sNullNodeX* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
int __result17__;
memset(&__result_obj__, 0, sizeof(void*));
    __result17__ = self->sline;
    return __result17__;
}

char* sNullNodeX_sname(struct sNullNodeX* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value12;
char* __result18__;
memset(&__result_obj__, 0, sizeof(void*));
    __result18__ = __result_obj__ = ((char*)(right_value12=__builtin_string(self->sname)));
    return __result18__;
}

struct sNewNode* sNewNode_initialize(struct sNewNode* self, struct sType* type, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value47;
struct sType* __dec_obj29;
void* right_value48;
char* __dec_obj30;
struct sNewNode* __result37__;
memset(&__result_obj__, 0, sizeof(void*));
    __dec_obj29=self->type;
    self->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value47=sType_clone(type))));
    if(__dec_obj29) { come_call_finalizer(sType_finalize,__dec_obj29, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value47 && right_value47 != __result_obj__) { come_call_finalizer(sType_finalize,right_value47, (void*)0, (void*)0, 0, 1, 0, 0); }
    self->sline=info->sline;
    __dec_obj30=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value48=__builtin_string(info->sname))));
    if(__dec_obj30) { __dec_obj30 = come_decrement_ref_count(__dec_obj30, (void*)0, (void*)0, 0,0,0); }
    if(right_value48 && right_value48 != __result_obj__) { right_value48 = come_decrement_ref_count(right_value48, (void*)0, (void*)0, 1, 0, 0); }
    __result37__ = __result_obj__ = self;
    if(self) { come_call_finalizer(sNewNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(type) { come_call_finalizer(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result37__;
    if(self) { come_call_finalizer(sNewNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(type) { come_call_finalizer(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct sType* sType_clone(struct sType* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional6;
struct sType* __result19__;
void* right_value13;
struct sType* result_5;
_Bool _if_conditional23;
_Bool _if_conditional24;
void* right_value16;
struct tuple1$1sTypeph* __dec_obj8;
_Bool _if_conditional28;
void* right_value17;
struct tuple1$1sTypeph* __dec_obj9;
_Bool _if_conditional29;
void* right_value18;
char* __dec_obj10;
_Bool _if_conditional30;
void* right_value25;
struct list$1sTypeph* __dec_obj14;
_Bool _if_conditional34;
void* right_value33;
struct list$1sNodeph* __dec_obj18;
_Bool _if_conditional47;
_Bool _if_conditional48;
void* right_value34;
struct list$1sTypeph* __dec_obj19;
_Bool _if_conditional49;
void* right_value41;
struct list$1charph* __dec_obj23;
_Bool _if_conditional53;
void* right_value42;
struct tuple1$1sTypeph* __dec_obj24;
_Bool _if_conditional54;
_Bool _if_conditional55;
void* right_value43;
struct sNode* __dec_obj25;
_Bool _if_conditional56;
_Bool _if_conditional57;
_Bool _if_conditional58;
_Bool _if_conditional59;
_Bool _if_conditional60;
_Bool _if_conditional61;
_Bool _if_conditional62;
_Bool _if_conditional63;
_Bool _if_conditional64;
_Bool _if_conditional65;
_Bool _if_conditional66;
_Bool _if_conditional67;
_Bool _if_conditional68;
_Bool _if_conditional69;
_Bool _if_conditional70;
_Bool _if_conditional71;
_Bool _if_conditional72;
_Bool _if_conditional73;
_Bool _if_conditional74;
_Bool _if_conditional75;
_Bool _if_conditional76;
_Bool _if_conditional77;
_Bool _if_conditional78;
_Bool _if_conditional79;
void* right_value44;
struct sNode* __dec_obj26;
_Bool _if_conditional80;
_Bool _if_conditional81;
_Bool _if_conditional82;
void* right_value45;
char* __dec_obj27;
_Bool _if_conditional83;
_Bool _if_conditional84;
_Bool _if_conditional85;
_Bool _if_conditional86;
_Bool _if_conditional87;
_Bool _if_conditional88;
_Bool _if_conditional89;
_Bool _if_conditional90;
_Bool _if_conditional91;
void* right_value46;
char* __dec_obj28;
struct sType* __result36__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_5, 0, sizeof(struct sType*));
        if(_if_conditional6=self==(void*)0,        _if_conditional6) {
            __result19__ = __result_obj__ = (void*)0;
            return __result19__;
        }
        result_5=(struct sType*)come_increment_ref_count(((struct sType*)(right_value13=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3))));
        if(right_value13 && right_value13 != __result_obj__) { come_call_finalizer(sType_finalize,right_value13, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(_if_conditional23=self!=((void*)0),        _if_conditional23) {
            result_5->mClass=self->mClass;
        }
        if(_if_conditional24=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),        _if_conditional24) {
            __dec_obj8=result_5->mNoSolvedGenericsType;
            result_5->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value16=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
            if(__dec_obj8) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj8, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value16 && right_value16 != __result_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value16, (void*)0, (void*)0, 0, 1, 0, 0); }
        }
        if(_if_conditional28=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),        _if_conditional28) {
            __dec_obj9=result_5->mOriginalLoadVarType;
            result_5->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value17=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
            if(__dec_obj9) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj9, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value17 && right_value17 != __result_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value17, (void*)0, (void*)0, 0, 1, 0, 0); }
        }
        if(_if_conditional29=self!=((void*)0)&&self->mGenericsName!=((void*)0),        _if_conditional29) {
            __dec_obj10=result_5->mGenericsName;
            result_5->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value18=string_clone(self->mGenericsName))));
            if(__dec_obj10) { __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0,0,0); }
            if(right_value18 && right_value18 != __result_obj__) { right_value18 = come_decrement_ref_count(right_value18, (void*)0, (void*)0, 1, 0, 0); }
        }
        if(_if_conditional30=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),        _if_conditional30) {
            __dec_obj14=result_5->mGenericsTypes;
            result_5->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value25=list$1sTypephp_clone(self->mGenericsTypes))));
            if(__dec_obj14) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj14, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value25 && right_value25 != __result_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value25, (void*)0, (void*)0, 0, 1, 0, 0); }
        }
        if(_if_conditional34=self!=((void*)0)&&self->mArrayNum!=((void*)0),        _if_conditional34) {
            __dec_obj18=result_5->mArrayNum;
            result_5->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value33=list$1sNodephp_clone(self->mArrayNum))));
            if(__dec_obj18) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj18, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value33 && right_value33 != __result_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value33, (void*)0, (void*)0, 0, 1, 0, 0); }
        }
        if(_if_conditional47=self!=((void*)0),        _if_conditional47) {
            result_5->mOmitArrayNum=self->mOmitArrayNum;
        }
        if(_if_conditional48=self!=((void*)0)&&self->mParamTypes!=((void*)0),        _if_conditional48) {
            __dec_obj19=result_5->mParamTypes;
            result_5->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value34=list$1sTypephp_clone(self->mParamTypes))));
            if(__dec_obj19) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj19, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value34 && right_value34 != __result_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value34, (void*)0, (void*)0, 0, 1, 0, 0); }
        }
        if(_if_conditional49=self!=((void*)0)&&self->mParamNames!=((void*)0),        _if_conditional49) {
            __dec_obj23=result_5->mParamNames;
            result_5->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value41=list$1charphp_clone(self->mParamNames))));
            if(__dec_obj23) { come_call_finalizer(list$1charph_finalize,__dec_obj23, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value41 && right_value41 != __result_obj__) { come_call_finalizer(list$1charphp_finalize,right_value41, (void*)0, (void*)0, 0, 1, 0, 0); }
        }
        if(_if_conditional53=self!=((void*)0)&&self->mResultType!=((void*)0),        _if_conditional53) {
            __dec_obj24=result_5->mResultType;
            result_5->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value42=tuple1$1sTypephp_clone(self->mResultType))));
            if(__dec_obj24) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj24, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value42 && right_value42 != __result_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value42, (void*)0, (void*)0, 0, 1, 0, 0); }
        }
        if(_if_conditional54=self!=((void*)0),        _if_conditional54) {
            result_5->mVarArgs=self->mVarArgs;
        }
        if(_if_conditional55=self!=((void*)0)&&self->mAlignas!=((void*)0),        _if_conditional55) {
            __dec_obj25=result_5->mAlignas;
            result_5->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value43=sNode_clone(self->mAlignas))));
            if(__dec_obj25) { __dec_obj25 = come_decrement_ref_count(__dec_obj25, ((struct sNode*)__dec_obj25)->finalize, ((struct sNode*)__dec_obj25)->_protocol_obj, 0,0,0); }
            if(right_value43 && right_value43 != __result_obj__) { right_value43 = come_decrement_ref_count(right_value43, ((struct sNode*)right_value43)->finalize, ((struct sNode*)right_value43)->_protocol_obj, 1, 0, 0); } 
        }
        if(_if_conditional56=self!=((void*)0),        _if_conditional56) {
            result_5->mUnsigned=self->mUnsigned;
        }
        if(_if_conditional57=self!=((void*)0),        _if_conditional57) {
            result_5->mShort=self->mShort;
        }
        if(_if_conditional58=self!=((void*)0),        _if_conditional58) {
            result_5->mLong=self->mLong;
        }
        if(_if_conditional59=self!=((void*)0),        _if_conditional59) {
            result_5->mLongLong=self->mLongLong;
        }
        if(_if_conditional60=self!=((void*)0),        _if_conditional60) {
            result_5->mConstant=self->mConstant;
        }
        if(_if_conditional61=self!=((void*)0),        _if_conditional61) {
            result_5->mRegister=self->mRegister;
        }
        if(_if_conditional62=self!=((void*)0),        _if_conditional62) {
            result_5->mVolatile=self->mVolatile;
        }
        if(_if_conditional63=self!=((void*)0),        _if_conditional63) {
            result_5->mStatic=self->mStatic;
        }
        if(_if_conditional64=self!=((void*)0),        _if_conditional64) {
            result_5->mExtern=self->mExtern;
        }
        if(_if_conditional65=self!=((void*)0),        _if_conditional65) {
            result_5->mRestrict=self->mRestrict;
        }
        if(_if_conditional66=self!=((void*)0),        _if_conditional66) {
            result_5->mImmutable=self->mImmutable;
        }
        if(_if_conditional67=self!=((void*)0),        _if_conditional67) {
            result_5->mHeap=self->mHeap;
        }
        if(_if_conditional68=self!=((void*)0),        _if_conditional68) {
            result_5->mDummyHeap=self->mDummyHeap;
        }
        if(_if_conditional69=self!=((void*)0),        _if_conditional69) {
            result_5->mDelegate=self->mDelegate;
        }
        if(_if_conditional70=self!=((void*)0),        _if_conditional70) {
            result_5->mShare=self->mShare;
        }
        if(_if_conditional71=self!=((void*)0),        _if_conditional71) {
            result_5->mClone=self->mClone;
        }
        if(_if_conditional72=self!=((void*)0),        _if_conditional72) {
            result_5->mNoHeap=self->mNoHeap;
        }
        if(_if_conditional73=self!=((void*)0),        _if_conditional73) {
            result_5->mNoCallingDestructor=self->mNoCallingDestructor;
        }
        if(_if_conditional74=self!=((void*)0),        _if_conditional74) {
            result_5->mRefference=self->mRefference;
        }
        if(_if_conditional75=self!=((void*)0),        _if_conditional75) {
            result_5->mException=self->mException;
        }
        if(_if_conditional76=self!=((void*)0),        _if_conditional76) {
            result_5->mPointerNum=self->mPointerNum;
        }
        if(_if_conditional77=self!=((void*)0),        _if_conditional77) {
            result_5->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
        }
        if(_if_conditional78=self!=((void*)0),        _if_conditional78) {
            result_5->mNoArrayPointerNum=self->mNoArrayPointerNum;
        }
        if(_if_conditional79=self!=((void*)0)&&self->mSizeNum!=((void*)0),        _if_conditional79) {
            __dec_obj26=result_5->mSizeNum;
            result_5->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value44=sNode_clone(self->mSizeNum))));
            if(__dec_obj26) { __dec_obj26 = come_decrement_ref_count(__dec_obj26, ((struct sNode*)__dec_obj26)->finalize, ((struct sNode*)__dec_obj26)->_protocol_obj, 0,0,0); }
            if(right_value44 && right_value44 != __result_obj__) { right_value44 = come_decrement_ref_count(right_value44, ((struct sNode*)right_value44)->finalize, ((struct sNode*)right_value44)->_protocol_obj, 1, 0, 0); } 
        }
        if(_if_conditional80=self!=((void*)0),        _if_conditional80) {
            result_5->mDynamicArrayNum=self->mDynamicArrayNum;
        }
        if(_if_conditional81=self!=((void*)0),        _if_conditional81) {
            result_5->mTypeOfExpression=self->mTypeOfExpression;
        }
        if(_if_conditional82=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),        _if_conditional82) {
            __dec_obj27=result_5->mOriginalTypeName;
            result_5->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value45=string_clone(self->mOriginalTypeName))));
            if(__dec_obj27) { __dec_obj27 = come_decrement_ref_count(__dec_obj27, (void*)0, (void*)0, 0,0,0); }
            if(right_value45 && right_value45 != __result_obj__) { right_value45 = come_decrement_ref_count(right_value45, (void*)0, (void*)0, 1, 0, 0); }
        }
        if(_if_conditional83=self!=((void*)0),        _if_conditional83) {
            result_5->mOriginalPointerNum=self->mOriginalPointerNum;
        }
        if(_if_conditional84=self!=((void*)0),        _if_conditional84) {
            result_5->mFunctionParam=self->mFunctionParam;
        }
        if(_if_conditional85=self!=((void*)0),        _if_conditional85) {
            result_5->mAllocaValue=self->mAllocaValue;
        }
        if(_if_conditional86=self!=((void*)0),        _if_conditional86) {
            result_5->mGenericsStruct=self->mGenericsStruct;
        }
        if(_if_conditional87=self!=((void*)0),        _if_conditional87) {
            result_5->mSolvedGenericsName=self->mSolvedGenericsName;
        }
        if(_if_conditional88=self!=((void*)0),        _if_conditional88) {
            result_5->mComeMemCore=self->mComeMemCore;
        }
        if(_if_conditional89=self!=((void*)0),        _if_conditional89) {
            result_5->mInline=self->mInline;
        }
        if(_if_conditional90=self!=((void*)0),        _if_conditional90) {
            result_5->mNullValue=self->mNullValue;
        }
        if(_if_conditional91=self!=((void*)0)&&self->mAsmName!=((void*)0),        _if_conditional91) {
            __dec_obj28=result_5->mAsmName;
            result_5->mAsmName=(char*)come_increment_ref_count(((char*)(right_value46=string_clone(self->mAsmName))));
            if(__dec_obj28) { __dec_obj28 = come_decrement_ref_count(__dec_obj28, (void*)0, (void*)0, 0,0,0); }
            if(right_value46 && right_value46 != __result_obj__) { right_value46 = come_decrement_ref_count(right_value46, (void*)0, (void*)0, 1, 0, 0); }
        }
        __result36__ = __result_obj__ = result_5;
        if(result_5) { come_call_finalizer(sType_finalize,result_5, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result36__;
        if(result_5) { come_call_finalizer(sType_finalize,result_5, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sType_finalize(struct sType* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional7;
_Bool _if_conditional9;
_Bool _if_conditional10;
_Bool _if_conditional11;
_Bool _if_conditional13;
_Bool _if_conditional15;
_Bool _if_conditional16;
_Bool _if_conditional18;
_Bool _if_conditional19;
_Bool _if_conditional20;
_Bool _if_conditional21;
_Bool _if_conditional22;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional7=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),            _if_conditional7) {
                if(self->mNoSolvedGenericsType) { come_call_finalizer(tuple1$1sTypephp_finalize,self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            if(_if_conditional9=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),            _if_conditional9) {
                if(self->mOriginalLoadVarType) { come_call_finalizer(tuple1$1sTypephp_finalize,self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            if(_if_conditional10=self!=((void*)0)&&self->mGenericsName!=((void*)0),            _if_conditional10) {
                if(self->mGenericsName) { self->mGenericsName = come_decrement_ref_count(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0); }
            }
            if(_if_conditional11=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),            _if_conditional11) {
                if(self->mGenericsTypes) { come_call_finalizer(list$1sTypephp_finalize,self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            if(_if_conditional13=self!=((void*)0)&&self->mArrayNum!=((void*)0),            _if_conditional13) {
                if(self->mArrayNum) { come_call_finalizer(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            if(_if_conditional15=self!=((void*)0)&&self->mParamTypes!=((void*)0),            _if_conditional15) {
                if(self->mParamTypes) { come_call_finalizer(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            if(_if_conditional16=self!=((void*)0)&&self->mParamNames!=((void*)0),            _if_conditional16) {
                if(self->mParamNames) { come_call_finalizer(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            if(_if_conditional18=self!=((void*)0)&&self->mResultType!=((void*)0),            _if_conditional18) {
                if(self->mResultType) { come_call_finalizer(tuple1$1sTypephp_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            if(_if_conditional19=self!=((void*)0)&&self->mAlignas!=((void*)0),            _if_conditional19) {
                if(self->mAlignas) { self->mAlignas = come_decrement_ref_count(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0); } 
            }
            if(_if_conditional20=self!=((void*)0)&&self->mSizeNum!=((void*)0),            _if_conditional20) {
                if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0); } 
            }
            if(_if_conditional21=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),            _if_conditional21) {
                if(self->mOriginalTypeName) { self->mOriginalTypeName = come_decrement_ref_count(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0); }
            }
            if(_if_conditional22=self!=((void*)0)&&self->mAsmName!=((void*)0),            _if_conditional22) {
                if(self->mAsmName) { self->mAsmName = come_decrement_ref_count(self->mAsmName, (void*)0, (void*)0, 0, 0, 0); }
            }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional8;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional8=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional8) {
                        if(self->v1) { come_call_finalizer(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
struct list_item$1sTypeph* it_6;
_Bool _while_condtional1;
struct list_item$1sTypeph* prev_it_7;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_6, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_7, 0, sizeof(struct list_item$1sTypeph*));
                    it_6=self->head;
                    while(_while_condtional1=it_6!=((void*)0),                    _while_condtional1) {
                        prev_it_7=it_6;
                        it_6=it_6->next;
                        if(prev_it_7) { come_call_finalizer(list_item$1sTypephp_finalize,prev_it_7, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional12;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional12=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional12) {
                                if(self->item) { come_call_finalizer(sType_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
struct list_item$1sNodeph* it_8;
_Bool _while_condtional2;
struct list_item$1sNodeph* prev_it_9;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_8, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_9, 0, sizeof(struct list_item$1sNodeph*));
                    it_8=self->head;
                    while(_while_condtional2=it_8!=((void*)0),                    _while_condtional2) {
                        prev_it_9=it_8;
                        it_8=it_8->next;
                        if(prev_it_9) { come_call_finalizer(list_item$1sNodephp_finalize,prev_it_9, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional14;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional14=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional14) {
                                if(self->item) { self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0); } 
                            }
}

static void list$1charphp_finalize(struct list$1charph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
struct list_item$1charph* it_10;
_Bool _while_condtional3;
struct list_item$1charph* prev_it_11;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_10, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_11, 0, sizeof(struct list_item$1charph*));
                    it_10=self->head;
                    while(_while_condtional3=it_10!=((void*)0),                    _while_condtional3) {
                        prev_it_11=it_10;
                        it_10=it_10->next;
                        if(prev_it_11) { come_call_finalizer(list_item$1charphp_finalize,prev_it_11, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional17;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional17=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional17) {
                                if(self->item) { self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0, 0, 0); }
                            }
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional25;
struct tuple1$1sTypeph* __result20__;
void* right_value14;
struct tuple1$1sTypeph* result_12;
_Bool _if_conditional27;
void* right_value15;
struct sType* __dec_obj7;
struct tuple1$1sTypeph* __result21__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_12, 0, sizeof(struct tuple1$1sTypeph*));
                if(_if_conditional25=self==(void*)0,                _if_conditional25) {
                    __result20__ = __result_obj__ = (void*)0;
                    return __result20__;
                }
                result_12=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value14=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3))));
                if(right_value14 && right_value14 != __result_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,right_value14, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(_if_conditional27=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional27) {
                    __dec_obj7=result_12->v1;
                    result_12->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value15=sType_clone(self->v1))));
                    if(__dec_obj7) { come_call_finalizer(sType_finalize,__dec_obj7, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(right_value15 && right_value15 != __result_obj__) { come_call_finalizer(sType_finalize,right_value15, (void*)0, (void*)0, 0, 1, 0, 0); }
                }
                __result21__ = __result_obj__ = result_12;
                if(result_12) { come_call_finalizer(tuple1$1sTypeph_finalize,result_12, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result21__;
                if(result_12) { come_call_finalizer(tuple1$1sTypeph_finalize,result_12, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional26;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional26=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional26) {
                        if(self->v1) { come_call_finalizer(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional31;
struct list$1sTypeph* __result22__;
void* right_value19;
void* right_value20;
struct list$1sTypeph* result_13;
struct list_item$1sTypeph* it_14;
_Bool _while_condtional4;
void* right_value24;
struct list$1sTypeph* __result25__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_13, 0, sizeof(struct list$1sTypeph*));
memset(&it_14, 0, sizeof(struct list_item$1sTypeph*));
                if(_if_conditional31=self==((void*)0),                _if_conditional31) {
                    __result22__ = __result_obj__ = ((void*)0);
                    return __result22__;
                }
                result_13=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value20=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value19=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 193))))))));
                if(right_value19 && right_value19 != __result_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value19, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value20 && right_value20 != __result_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value20, (void*)0, (void*)0, 0, 1, 0, 0); }
                it_14=self->head;
                while(_while_condtional4=it_14!=((void*)0),                _while_condtional4) {
                    list$1sTypeph_add(result_13,(struct sType*)come_increment_ref_count(((struct sType*)(right_value24=sType_clone(it_14->item)))));
                    if(right_value24 && right_value24 != __result_obj__) { come_call_finalizer(sType_finalize,right_value24, (void*)0, (void*)0, 0, 1, 0, 0); }
                    it_14=it_14->next;
                }
                __result25__ = __result_obj__ = result_13;
                if(result_13) { come_call_finalizer(list$1sTypephp_finalize,result_13, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result25__;
                if(result_13) { come_call_finalizer(list$1sTypephp_finalize,result_13, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
struct list$1sTypeph* __result23__;
memset(&__result_obj__, 0, sizeof(void*));
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    __result23__ = __result_obj__ = self;
                    if(self) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result23__;
                    if(self) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional32;
void* right_value21;
struct list_item$1sTypeph* litem_15;
struct sType* __dec_obj11;
_Bool _if_conditional33;
void* right_value22;
struct list_item$1sTypeph* litem_16;
struct sType* __dec_obj12;
void* right_value23;
struct list_item$1sTypeph* litem_17;
struct sType* __dec_obj13;
struct list$1sTypeph* __result24__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&litem_15, 0, sizeof(struct list_item$1sTypeph*));
memset(&litem_16, 0, sizeof(struct list_item$1sTypeph*));
memset(&litem_17, 0, sizeof(struct list_item$1sTypeph*));
                        if(_if_conditional32=self->len==0,                        _if_conditional32) {
                            litem_15=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value21=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 207))));
                            if(right_value21 && right_value21 != __result_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value21, (void*)0, (void*)0, 0, 1, 0, 0); }
                            litem_15->prev=((void*)0);
                            litem_15->next=((void*)0);
                            __dec_obj11=litem_15->item;
                            litem_15->item=(struct sType*)come_increment_ref_count(item);
                            if(__dec_obj11) { come_call_finalizer(sType_finalize,__dec_obj11, (void*)0, (void*)0, 0, 0, 0, 0); }
                            self->tail=litem_15;
                            self->head=litem_15;
                        }
                        else {
                            if(_if_conditional33=self->len==1,                            _if_conditional33) {
                                litem_16=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value22=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 217))));
                                if(right_value22 && right_value22 != __result_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value22, (void*)0, (void*)0, 0, 1, 0, 0); }
                                litem_16->prev=self->head;
                                litem_16->next=((void*)0);
                                __dec_obj12=litem_16->item;
                                litem_16->item=(struct sType*)come_increment_ref_count(item);
                                if(__dec_obj12) { come_call_finalizer(sType_finalize,__dec_obj12, (void*)0, (void*)0, 0, 0, 0, 0); }
                                self->tail=litem_16;
                                self->head->next=litem_16;
                            }
                            else {
                                litem_17=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value23=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 227))));
                                if(right_value23 && right_value23 != __result_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value23, (void*)0, (void*)0, 0, 1, 0, 0); }
                                litem_17->prev=self->tail;
                                litem_17->next=((void*)0);
                                __dec_obj13=litem_17->item;
                                litem_17->item=(struct sType*)come_increment_ref_count(item);
                                if(__dec_obj13) { come_call_finalizer(sType_finalize,__dec_obj13, (void*)0, (void*)0, 0, 0, 0, 0); }
                                self->tail->next=litem_17;
                                self->tail=litem_17;
                            }
                        }
                        self->len++;
                        __result24__ = __result_obj__ = self;
                        if(item) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result24__;
                        if(item) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional35;
struct list$1sNodeph* __result26__;
void* right_value26;
void* right_value27;
struct list$1sNodeph* result_18;
struct list_item$1sNodeph* it_19;
_Bool _while_condtional5;
void* right_value32;
struct list$1sNodeph* __result31__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_18, 0, sizeof(struct list$1sNodeph*));
memset(&it_19, 0, sizeof(struct list_item$1sNodeph*));
                if(_if_conditional35=self==((void*)0),                _if_conditional35) {
                    __result26__ = __result_obj__ = ((void*)0);
                    return __result26__;
                }
                result_18=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value27=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value26=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 193))))))));
                if(right_value26 && right_value26 != __result_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value26, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value27 && right_value27 != __result_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value27, (void*)0, (void*)0, 0, 1, 0, 0); }
                it_19=self->head;
                while(_while_condtional5=it_19!=((void*)0),                _while_condtional5) {
                    list$1sNodeph_add(result_18,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value32=sNode_clone(it_19->item)))));
                    if(right_value32 && right_value32 != __result_obj__) { right_value32 = come_decrement_ref_count(right_value32, ((struct sNode*)right_value32)->finalize, ((struct sNode*)right_value32)->_protocol_obj, 1, 0, 0); } 
                    it_19=it_19->next;
                }
                __result31__ = __result_obj__ = result_18;
                if(result_18) { come_call_finalizer(list$1sNodephp_finalize,result_18, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result31__;
                if(result_18) { come_call_finalizer(list$1sNodephp_finalize,result_18, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
struct list$1sNodeph* __result27__;
memset(&__result_obj__, 0, sizeof(void*));
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    __result27__ = __result_obj__ = self;
                    if(self) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result27__;
                    if(self) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional36;
void* right_value28;
struct list_item$1sNodeph* litem_20;
struct sNode* __dec_obj15;
_Bool _if_conditional37;
void* right_value29;
struct list_item$1sNodeph* litem_21;
struct sNode* __dec_obj16;
void* right_value30;
struct list_item$1sNodeph* litem_22;
struct sNode* __dec_obj17;
struct list$1sNodeph* __result28__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&litem_20, 0, sizeof(struct list_item$1sNodeph*));
memset(&litem_21, 0, sizeof(struct list_item$1sNodeph*));
memset(&litem_22, 0, sizeof(struct list_item$1sNodeph*));
                        if(_if_conditional36=self->len==0,                        _if_conditional36) {
                            litem_20=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value28=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 207))));
                            if(right_value28 && right_value28 != __result_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value28, (void*)0, (void*)0, 0, 1, 0, 0); }
                            litem_20->prev=((void*)0);
                            litem_20->next=((void*)0);
                            __dec_obj15=litem_20->item;
                            litem_20->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj15) { __dec_obj15 = come_decrement_ref_count(__dec_obj15, ((struct sNode*)__dec_obj15)->finalize, ((struct sNode*)__dec_obj15)->_protocol_obj, 0,0,0); }
                            self->tail=litem_20;
                            self->head=litem_20;
                        }
                        else {
                            if(_if_conditional37=self->len==1,                            _if_conditional37) {
                                litem_21=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value29=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 217))));
                                if(right_value29 && right_value29 != __result_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value29, (void*)0, (void*)0, 0, 1, 0, 0); }
                                litem_21->prev=self->head;
                                litem_21->next=((void*)0);
                                __dec_obj16=litem_21->item;
                                litem_21->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj16) { __dec_obj16 = come_decrement_ref_count(__dec_obj16, ((struct sNode*)__dec_obj16)->finalize, ((struct sNode*)__dec_obj16)->_protocol_obj, 0,0,0); }
                                self->tail=litem_21;
                                self->head->next=litem_21;
                            }
                            else {
                                litem_22=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value30=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 227))));
                                if(right_value30 && right_value30 != __result_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value30, (void*)0, (void*)0, 0, 1, 0, 0); }
                                litem_22->prev=self->tail;
                                litem_22->next=((void*)0);
                                __dec_obj17=litem_22->item;
                                litem_22->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj17) { __dec_obj17 = come_decrement_ref_count(__dec_obj17, ((struct sNode*)__dec_obj17)->finalize, ((struct sNode*)__dec_obj17)->_protocol_obj, 0,0,0); }
                                self->tail->next=litem_22;
                                self->tail=litem_22;
                            }
                        }
                        self->len++;
                        __result28__ = __result_obj__ = self;
                        if(item) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
                        return __result28__;
                        if(item) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional38;
struct sNode* __result29__;
void* right_value31;
struct sNode* result_23;
_Bool _if_conditional39;
_Bool _if_conditional40;
_Bool _if_conditional41;
_Bool _if_conditional42;
_Bool _if_conditional43;
_Bool _if_conditional44;
_Bool _if_conditional45;
_Bool _if_conditional46;
struct sNode* __result30__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_23, 0, sizeof(struct sNode*));
                        if(_if_conditional38=self==(void*)0,                        _if_conditional38) {
                            __result29__ = __result_obj__ = (void*)0;
                            return __result29__;
                        }
                        result_23=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value31=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3))));
                        if(right_value31 && right_value31 != __result_obj__) { right_value31 = come_decrement_ref_count(right_value31, ((struct sNode*)right_value31)->finalize, ((struct sNode*)right_value31)->_protocol_obj, 1, 0, 0); } 
                        if(_if_conditional39=self!=((void*)0)&&self->clone!=((void*)0),                        _if_conditional39) {
                            result_23->_protocol_obj=self->clone(self->_protocol_obj);
                        }
                        if(_if_conditional40=self!=((void*)0),                        _if_conditional40) {
                            result_23->finalize=self->finalize;
                        }
                        if(_if_conditional41=self!=((void*)0),                        _if_conditional41) {
                            result_23->clone=self->clone;
                        }
                        if(_if_conditional42=self!=((void*)0),                        _if_conditional42) {
                            result_23->compile=self->compile;
                        }
                        if(_if_conditional43=self!=((void*)0),                        _if_conditional43) {
                            result_23->sline=self->sline;
                        }
                        if(_if_conditional44=self!=((void*)0),                        _if_conditional44) {
                            result_23->sname=self->sname;
                        }
                        if(_if_conditional45=self!=((void*)0),                        _if_conditional45) {
                            result_23->terminated=self->terminated;
                        }
                        if(_if_conditional46=self!=((void*)0),                        _if_conditional46) {
                            result_23->kind=self->kind;
                        }
                        __result30__ = __result_obj__ = result_23;
                        if(result_23) { result_23 = come_decrement_ref_count(result_23, ((struct sNode*)result_23)->finalize, ((struct sNode*)result_23)->_protocol_obj, 0, 1, 0); } 
                        return __result30__;
                        if(result_23) { result_23 = come_decrement_ref_count(result_23, ((struct sNode*)result_23)->finalize, ((struct sNode*)result_23)->_protocol_obj, 0, 0, 0); } 
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional50;
struct list$1charph* __result32__;
void* right_value35;
void* right_value36;
struct list$1charph* result_24;
struct list_item$1charph* it_25;
_Bool _while_condtional6;
void* right_value40;
struct list$1charph* __result35__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_24, 0, sizeof(struct list$1charph*));
memset(&it_25, 0, sizeof(struct list_item$1charph*));
                if(_if_conditional50=self==((void*)0),                _if_conditional50) {
                    __result32__ = __result_obj__ = ((void*)0);
                    return __result32__;
                }
                result_24=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value36=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value35=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 193))))))));
                if(right_value35 && right_value35 != __result_obj__) { come_call_finalizer(list$1charphp_finalize,right_value35, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value36 && right_value36 != __result_obj__) { come_call_finalizer(list$1charphp_finalize,right_value36, (void*)0, (void*)0, 0, 1, 0, 0); }
                it_25=self->head;
                while(_while_condtional6=it_25!=((void*)0),                _while_condtional6) {
                    list$1charph_add(result_24,(char*)come_increment_ref_count(((char*)(right_value40=string_clone(it_25->item)))));
                    if(right_value40 && right_value40 != __result_obj__) { right_value40 = come_decrement_ref_count(right_value40, (void*)0, (void*)0, 1, 0, 0); }
                    it_25=it_25->next;
                }
                __result35__ = __result_obj__ = result_24;
                if(result_24) { come_call_finalizer(list$1charphp_finalize,result_24, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result35__;
                if(result_24) { come_call_finalizer(list$1charphp_finalize,result_24, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
struct list$1charph* __result33__;
memset(&__result_obj__, 0, sizeof(void*));
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    __result33__ = __result_obj__ = self;
                    if(self) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result33__;
                    if(self) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional51;
void* right_value37;
struct list_item$1charph* litem_26;
char* __dec_obj20;
_Bool _if_conditional52;
void* right_value38;
struct list_item$1charph* litem_27;
char* __dec_obj21;
void* right_value39;
struct list_item$1charph* litem_28;
char* __dec_obj22;
struct list$1charph* __result34__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&litem_26, 0, sizeof(struct list_item$1charph*));
memset(&litem_27, 0, sizeof(struct list_item$1charph*));
memset(&litem_28, 0, sizeof(struct list_item$1charph*));
                        if(_if_conditional51=self->len==0,                        _if_conditional51) {
                            litem_26=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value37=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 207))));
                            if(right_value37 && right_value37 != __result_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value37, (void*)0, (void*)0, 0, 1, 0, 0); }
                            litem_26->prev=((void*)0);
                            litem_26->next=((void*)0);
                            __dec_obj20=litem_26->item;
                            litem_26->item=(char*)come_increment_ref_count(item);
                            if(__dec_obj20) { __dec_obj20 = come_decrement_ref_count(__dec_obj20, (void*)0, (void*)0, 0,0,0); }
                            self->tail=litem_26;
                            self->head=litem_26;
                        }
                        else {
                            if(_if_conditional52=self->len==1,                            _if_conditional52) {
                                litem_27=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value38=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 217))));
                                if(right_value38 && right_value38 != __result_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value38, (void*)0, (void*)0, 0, 1, 0, 0); }
                                litem_27->prev=self->head;
                                litem_27->next=((void*)0);
                                __dec_obj21=litem_27->item;
                                litem_27->item=(char*)come_increment_ref_count(item);
                                if(__dec_obj21) { __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0,0,0); }
                                self->tail=litem_27;
                                self->head->next=litem_27;
                            }
                            else {
                                litem_28=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value39=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 227))));
                                if(right_value39 && right_value39 != __result_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value39, (void*)0, (void*)0, 0, 1, 0, 0); }
                                litem_28->prev=self->tail;
                                litem_28->next=((void*)0);
                                __dec_obj22=litem_28->item;
                                litem_28->item=(char*)come_increment_ref_count(item);
                                if(__dec_obj22) { __dec_obj22 = come_decrement_ref_count(__dec_obj22, (void*)0, (void*)0, 0,0,0); }
                                self->tail->next=litem_28;
                                self->tail=litem_28;
                            }
                        }
                        self->len++;
                        __result34__ = __result_obj__ = self;
                        if(item) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
                        return __result34__;
                        if(item) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
}

static void list$1charph_finalize(struct list$1charph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

int sNewNode_sline(struct sNewNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
int __result38__;
memset(&__result_obj__, 0, sizeof(void*));
    __result38__ = self->sline;
    return __result38__;
}

char* sNewNode_sname(struct sNewNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value49;
char* __result39__;
memset(&__result_obj__, 0, sizeof(void*));
    __result39__ = __result_obj__ = ((char*)(right_value49=__builtin_string(self->sname)));
    return __result39__;
}

_Bool sNewNode_terminated(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __result40__;
memset(&__result_obj__, 0, sizeof(void*));
    __result40__ = (_Bool)0;
    return __result40__;
}

char* sNewNode_kind(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value50;
char* __result41__;
memset(&__result_obj__, 0, sizeof(void*));
    __result41__ = __result_obj__ = ((char*)(right_value50=__builtin_string("sNewNode")));
    return __result41__;
}

_Bool sNewNode_compile(struct sNewNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
struct sType* type_29;
void* right_value51;
struct CVALUE* come_value_30;
void* right_value52;
void* right_value53;
struct buffer* num_string_31;
struct list$1sNodeph* o2_saved_32;
struct sNode* it_35;
_Bool _for_condtionalA1;
_Bool _if_conditional100;
_Bool __result49__;
void* right_value54;
struct CVALUE* cvalue_38;
void* right_value55;
void* right_value56;
struct sType* type2_39;
void* right_value57;
char* type_name_42;
void* right_value58;
void* right_value59;
char* __dec_obj31;
_Bool _if_conditional103;
void* right_value60;
char* __dec_obj32;
void* right_value61;
struct sType* __dec_obj33;
_Bool __result53__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&type_29, 0, sizeof(struct sType*));
memset(&come_value_30, 0, sizeof(struct CVALUE*));
memset(&num_string_31, 0, sizeof(struct buffer*));
memset(&o2_saved_32, 0, sizeof(struct list$1sNodeph*));
memset(&it_35, 0, sizeof(struct sNode*));
memset(&cvalue_38, 0, sizeof(struct CVALUE*));
memset(&type2_39, 0, sizeof(struct sType*));
memset(&type_name_42, 0, sizeof(char*));
    type_29=self->type;
    come_value_30=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value51=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 85))));
    if(right_value51 && right_value51 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value51, (void*)0, (void*)0, 0, 1, 0, 0); }
    num_string_31=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value53=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value52=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "21obj.c", 87))))))));
    if(right_value52 && right_value52 != __result_obj__) { come_call_finalizer(buffer_finalize,right_value52, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value53 && right_value53 != __result_obj__) { come_call_finalizer(buffer_finalize,right_value53, (void*)0, (void*)0, 0, 1, 0, 0); }
    buffer_append_str(num_string_31,"1");
    for(
    o2_saved_32=(struct list$1sNodeph*)come_increment_ref_count((type_29->mArrayNum)),it_35=list$1sNodeph_begin((o2_saved_32)) ,    0;    _for_condtionalA1=    !list$1sNodeph_end((o2_saved_32)) ,    _for_condtionalA1;    it_35=list$1sNodeph_next((o2_saved_32)) ,    0    ){
        if(_if_conditional100=!node_compile(it_35,info),        _if_conditional100) {
            __result49__ = (_Bool)0;
            if(o2_saved_32) { come_call_finalizer(list$1sNodephp_finalize,o2_saved_32, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(come_value_30) { come_call_finalizer(CVALUE_finalize,come_value_30, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(num_string_31) { come_call_finalizer(buffer_finalize,num_string_31, (void*)0, (void*)0, 0, 0, 0, 0); }
            return __result49__;
        }
        cvalue_38=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value54=get_value_from_stack(-1,info))));
        if(right_value54 && right_value54 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value54, (void*)0, (void*)0, 0, 1, 0, 0); }
        dec_stack_ptr(1,info);
        buffer_append_str(num_string_31,((char*)(right_value55=xsprintf("*(%s)",cvalue_38->c_value))));
        if(right_value55 && right_value55 != __result_obj__) { right_value55 = come_decrement_ref_count(right_value55, (void*)0, (void*)0, 1, 0, 0); }
        if(cvalue_38) { come_call_finalizer(CVALUE_finalize,cvalue_38, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    if(o2_saved_32) { come_call_finalizer(list$1sNodephp_finalize,o2_saved_32, (void*)0, (void*)0, 0, 0, 0, 0); }
    type2_39=(struct sType*)come_increment_ref_count(((struct sType*)(right_value56=solve_generics(type_29,info->generics_type,info))));
    if(right_value56 && right_value56 != __result_obj__) { come_call_finalizer(sType_finalize,right_value56, (void*)0, (void*)0, 0, 1, 0, 0); }
    list$1sNodeph_reset(type2_39->mArrayNum);
    type_name_42=(char*)come_increment_ref_count(optional$2charphbool_expect(((struct optional$2charphbool*)(right_value57=make_type_name_string(type2_39,(_Bool)0,(_Bool)1,(_Bool)0,info)))));
    if(right_value57 && right_value57 != __result_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value57, (void*)0, (void*)0, 0, 1, 0, 0); }
    __dec_obj31=come_value_30->c_value;
    come_value_30->c_value=(char*)come_increment_ref_count(((char*)(right_value59=xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d)",type_name_42,type_name_42,((char*)(right_value58=buffer_to_string(num_string_31))),info->sname,info->sline))));
    if(__dec_obj31) { __dec_obj31 = come_decrement_ref_count(__dec_obj31, (void*)0, (void*)0, 0,0,0); }
    if(right_value58 && right_value58 != __result_obj__) { right_value58 = come_decrement_ref_count(right_value58, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value59 && right_value59 != __result_obj__) { right_value59 = come_decrement_ref_count(right_value59, (void*)0, (void*)0, 1, 0, 0); }
    type2_39->mHeap=(_Bool)1;
    type2_39->mPointerNum++;
    if(_if_conditional103=type2_39->mNoSolvedGenericsType->v1,    _if_conditional103) {
        type2_39->mNoSolvedGenericsType->v1->mPointerNum++;
        type2_39->mNoSolvedGenericsType->v1->mHeap=(_Bool)1;
    }
    __dec_obj32=come_value_30->c_value;
    come_value_30->c_value=(char*)come_increment_ref_count(((char*)(right_value60=append_object_to_right_values(come_value_30->c_value,(struct sType*)come_increment_ref_count(type2_39),info))));
    if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count(__dec_obj32, (void*)0, (void*)0, 0,0,0); }
    if(right_value60 && right_value60 != __result_obj__) { right_value60 = come_decrement_ref_count(right_value60, (void*)0, (void*)0, 1, 0, 0); }
    __dec_obj33=come_value_30->type;
    come_value_30->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value61=sType_clone(type2_39))));
    if(__dec_obj33) { come_call_finalizer(sType_finalize,__dec_obj33, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value61 && right_value61 != __result_obj__) { come_call_finalizer(sType_finalize,right_value61, (void*)0, (void*)0, 0, 1, 0, 0); }
    come_value_30->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_30->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_30));
    __result53__ = (_Bool)1;
    if(come_value_30) { come_call_finalizer(CVALUE_finalize,come_value_30, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(num_string_31) { come_call_finalizer(buffer_finalize,num_string_31, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type2_39) { come_call_finalizer(sType_finalize,type2_39, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_name_42) { type_name_42 = come_decrement_ref_count(type_name_42, (void*)0, (void*)0, 0, 0, 0); }
    return __result53__;
    if(come_value_30) { come_call_finalizer(CVALUE_finalize,come_value_30, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(num_string_31) { come_call_finalizer(buffer_finalize,num_string_31, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type2_39) { come_call_finalizer(sType_finalize,type2_39, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_name_42) { type_name_42 = come_decrement_ref_count(type_name_42, (void*)0, (void*)0, 0, 0, 0); }
}

static void CVALUE_finalize(struct CVALUE* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional94;
_Bool _if_conditional95;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional94=self!=((void*)0)&&self->c_value!=((void*)0),        _if_conditional94) {
            if(self->c_value) { self->c_value = come_decrement_ref_count(self->c_value, (void*)0, (void*)0, 0, 0, 0); }
        }
        if(_if_conditional95=self!=((void*)0)&&self->type!=((void*)0),        _if_conditional95) {
            if(self->type) { come_call_finalizer(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional96;
struct sNode* result_33;
struct sNode* __result42__;
_Bool _if_conditional97;
struct sNode* __result43__;
struct sNode* result_34;
struct sNode* __result44__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_33, 0, sizeof(struct sNode*));
memset(&result_34, 0, sizeof(struct sNode*));
        if(_if_conditional96=self==((void*)0),        _if_conditional96) {
            memset(&result_33,0,sizeof(struct sNode*));
            __result42__ = __result_obj__ = result_33;
            return __result42__;
        }
        self->it=self->head;
        if(_if_conditional97=self->it,        _if_conditional97) {
            __result43__ = __result_obj__ = self->it->item;
            return __result43__;
        }
        memset(&result_34,0,sizeof(struct sNode*));
        __result44__ = __result_obj__ = result_34;
        return __result44__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __result45__;
memset(&__result_obj__, 0, sizeof(void*));
        __result45__ = self==((void*)0)||self->it==((void*)0);
        return __result45__;
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional98;
struct sNode* result_36;
struct sNode* __result46__;
_Bool _if_conditional99;
struct sNode* __result47__;
struct sNode* result_37;
struct sNode* __result48__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_36, 0, sizeof(struct sNode*));
memset(&result_37, 0, sizeof(struct sNode*));
        if(_if_conditional98=self==((void*)0)||self->it==((void*)0),        _if_conditional98) {
            memset(&result_36,0,sizeof(struct sNode*));
            __result46__ = __result_obj__ = result_36;
            return __result46__;
        }
        self->it=self->it->next;
        if(_if_conditional99=self->it,        _if_conditional99) {
            __result47__ = __result_obj__ = self->it->item;
            return __result47__;
        }
        memset(&result_37,0,sizeof(struct sNode*));
        __result48__ = __result_obj__ = result_37;
        return __result48__;
}

static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
struct list_item$1sNodeph* it_40;
_Bool _while_condtional7;
struct list_item$1sNodeph* prev_it_41;
struct list$1sNodeph* __result50__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_40, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_41, 0, sizeof(struct list_item$1sNodeph*));
        it_40=self->head;
        while(_while_condtional7=it_40!=((void*)0),        _while_condtional7) {
            prev_it_41=it_40;
            it_40=it_40->next;
            if(prev_it_41) { come_call_finalizer(list_item$1sNodephp_finalize,prev_it_41, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        __result50__ = __result_obj__ = self;
        return __result50__;
}

static char* optional$2charphbool_expect(struct optional$2charphbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional101;
char* __result51__;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional101=!self->v2,        _if_conditional101) {
            puts("Exception: at");
            exception_stackframe();
            puts("abort.");
            exit(2);
        }
        __result51__ = __result_obj__ = self->v1;
        return __result51__;
}

static void optional$2charphboolp_finalize(struct optional$2charphbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional102;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional102=self!=((void*)0)&&self->v1!=((void*)0),        _if_conditional102) {
            if(self->v1) { self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, 0); }
        }
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional104;
void* right_value62;
struct list_item$1CVALUEph* litem_43;
struct CVALUE* __dec_obj34;
_Bool _if_conditional106;
void* right_value63;
struct list_item$1CVALUEph* litem_44;
struct CVALUE* __dec_obj35;
void* right_value64;
struct list_item$1CVALUEph* litem_45;
struct CVALUE* __dec_obj36;
struct list$1CVALUEph* __result52__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&litem_43, 0, sizeof(struct list_item$1CVALUEph*));
memset(&litem_44, 0, sizeof(struct list_item$1CVALUEph*));
memset(&litem_45, 0, sizeof(struct list_item$1CVALUEph*));
        if(_if_conditional104=self->len==0,        _if_conditional104) {
            litem_43=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value62=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 277))));
            if(right_value62 && right_value62 != __result_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value62, (void*)0, (void*)0, 0, 1, 0, 0); }
            litem_43->prev=((void*)0);
            litem_43->next=((void*)0);
            __dec_obj34=litem_43->item;
            litem_43->item=(struct CVALUE*)come_increment_ref_count(item);
            if(__dec_obj34) { come_call_finalizer(CVALUE_finalize,__dec_obj34, (void*)0, (void*)0, 0, 0, 0, 0); }
            self->tail=litem_43;
            self->head=litem_43;
        }
        else {
            if(_if_conditional106=self->len==1,            _if_conditional106) {
                litem_44=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value63=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 287))));
                if(right_value63 && right_value63 != __result_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value63, (void*)0, (void*)0, 0, 1, 0, 0); }
                litem_44->prev=self->head;
                litem_44->next=((void*)0);
                __dec_obj35=litem_44->item;
                litem_44->item=(struct CVALUE*)come_increment_ref_count(item);
                if(__dec_obj35) { come_call_finalizer(CVALUE_finalize,__dec_obj35, (void*)0, (void*)0, 0, 0, 0, 0); }
                self->tail=litem_44;
                self->head->next=litem_44;
            }
            else {
                litem_45=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value64=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 297))));
                if(right_value64 && right_value64 != __result_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value64, (void*)0, (void*)0, 0, 1, 0, 0); }
                litem_45->prev=self->tail;
                litem_45->next=((void*)0);
                __dec_obj36=litem_45->item;
                litem_45->item=(struct CVALUE*)come_increment_ref_count(item);
                if(__dec_obj36) { come_call_finalizer(CVALUE_finalize,__dec_obj36, (void*)0, (void*)0, 0, 0, 0, 0); }
                self->tail->next=litem_45;
                self->tail=litem_45;
            }
        }
        self->len++;
        __result52__ = __result_obj__ = self;
        if(item) { come_call_finalizer(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result52__;
        if(item) { come_call_finalizer(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional105;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional105=self!=((void*)0)&&self->item!=((void*)0),                _if_conditional105) {
                    if(self->item) { come_call_finalizer(CVALUE_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
}

struct sNode* create_object(struct sType* type, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value65;
void* right_value66;
struct sNode* _inf_value1;
struct sNewNode* _inf_obj_value1;
void* right_value70;
struct sNode* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 136);
    _inf_obj_value1=come_increment_ref_count(((struct sNewNode*)(right_value66=sNewNode_initialize((struct sNewNode*)come_increment_ref_count(((struct sNewNode*)(right_value65=(struct sNewNode*)come_calloc(1, sizeof(struct sNewNode)*(1), "21obj.c", 136)))),(struct sType*)come_increment_ref_count(type),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sNewNode_finalize;
    _inf_value1->clone=(void*)sNewNode_clone;
    _inf_value1->compile=(void*)sNewNode_compile;
    _inf_value1->sline=(void*)sNewNode_sline;
    _inf_value1->sname=(void*)sNewNode_sname;
    _inf_value1->terminated=(void*)sNewNode_terminated;
    _inf_value1->kind=(void*)sNewNode_kind;
    __result56__ = __result_obj__ = ((struct sNode*)(right_value70=_inf_value1));
    if(type) { come_call_finalizer(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(right_value65 && right_value65 != __result_obj__) { come_call_finalizer(sNewNode_finalize,right_value65, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value66 && right_value66 != __result_obj__) { come_call_finalizer(sNewNode_finalize,right_value66, (void*)0, (void*)0, 0, 1, 0, 0); }
    return __result56__;
    if(type) { come_call_finalizer(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0); }
}

struct sImplementsNode* sImplementsNode_initialize(struct sImplementsNode* self, struct sNode* obj_exp, struct sType* inf_type, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value71;
struct sNode* __dec_obj39;
void* right_value72;
struct sType* __dec_obj40;
void* right_value73;
char* __dec_obj41;
struct sImplementsNode* __result57__;
memset(&__result_obj__, 0, sizeof(void*));
    __dec_obj39=self->obj_exp;
    self->obj_exp=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value71=sNode_clone(obj_exp))));
    if(__dec_obj39) { __dec_obj39 = come_decrement_ref_count(__dec_obj39, ((struct sNode*)__dec_obj39)->finalize, ((struct sNode*)__dec_obj39)->_protocol_obj, 0,0,0); }
    if(right_value71 && right_value71 != __result_obj__) { right_value71 = come_decrement_ref_count(right_value71, ((struct sNode*)right_value71)->finalize, ((struct sNode*)right_value71)->_protocol_obj, 1, 0, 0); } 
    __dec_obj40=self->inf_type;
    self->inf_type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value72=sType_clone(inf_type))));
    if(__dec_obj40) { come_call_finalizer(sType_finalize,__dec_obj40, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value72 && right_value72 != __result_obj__) { come_call_finalizer(sType_finalize,right_value72, (void*)0, (void*)0, 0, 1, 0, 0); }
    self->sline=info->sline;
    __dec_obj41=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value73=__builtin_string(info->sname))));
    if(__dec_obj41) { __dec_obj41 = come_decrement_ref_count(__dec_obj41, (void*)0, (void*)0, 0,0,0); }
    if(right_value73 && right_value73 != __result_obj__) { right_value73 = come_decrement_ref_count(right_value73, (void*)0, (void*)0, 1, 0, 0); }
    __result57__ = __result_obj__ = self;
    if(self) { come_call_finalizer(sImplementsNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(obj_exp) { obj_exp = come_decrement_ref_count(obj_exp, ((struct sNode*)obj_exp)->finalize, ((struct sNode*)obj_exp)->_protocol_obj, 0, 1, 0); } 
    if(inf_type) { come_call_finalizer(sType_finalize,inf_type, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result57__;
    if(self) { come_call_finalizer(sImplementsNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(obj_exp) { obj_exp = come_decrement_ref_count(obj_exp, ((struct sNode*)obj_exp)->finalize, ((struct sNode*)obj_exp)->_protocol_obj, 0, 1, 0); } 
    if(inf_type) { come_call_finalizer(sType_finalize,inf_type, (void*)0, (void*)0, 0, 0, 1, 0); }
}

int sImplementsNode_sline(struct sImplementsNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
int __result58__;
memset(&__result_obj__, 0, sizeof(void*));
    __result58__ = self->sline;
    return __result58__;
}

char* sImplementsNode_sname(struct sImplementsNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value74;
char* __result59__;
memset(&__result_obj__, 0, sizeof(void*));
    __result59__ = __result_obj__ = ((char*)(right_value74=__builtin_string(self->sname)));
    return __result59__;
}

_Bool sImplementsNode_terminated(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __result60__;
memset(&__result_obj__, 0, sizeof(void*));
    __result60__ = (_Bool)0;
    return __result60__;
}

char* sImplementsNode_kind(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value75;
char* __result61__;
memset(&__result_obj__, 0, sizeof(void*));
    __result61__ = __result_obj__ = ((char*)(right_value75=__builtin_string("sImplementsNode")));
    return __result61__;
}

_Bool sImplementsNode_compile(struct sImplementsNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value76;
struct sNode* obj_exp_47;
void* right_value77;
struct sType* inf_type_48;
_Bool _if_conditional116;
_Bool __result62__;
void* right_value78;
struct CVALUE* come_value_49;
void* right_value79;
struct sType* type_50;
struct sClass* klass_51;
void* right_value80;
struct CVALUE* come_value2_52;
void* right_value81;
struct sType* type2_53;
void* right_value82;
char* type_name_54;
void* right_value83;
char* type_name2_55;
static int inf_num_56=0;
void* right_value84;
char* buf_57;
void* right_value85;
char* buf2_58;
void* right_value86;
struct sType* typeX_59;
void* right_value87;
void* right_value88;
int i_60;
_Bool _for_condtionalA2;
void* right_value93;
struct tuple2$2charphsTypeph* multiple_assgin_var1;
char* name_65;
struct sType* field_type_66;
void* right_value94;
char* method_name_67;
void* right_value95;
char* __dec_obj43;
void* right_value96;
struct sType* type3_68;
void* right_value97;
struct sType* __dec_obj44;
void* right_value98;
char* __dec_obj45;
_Bool __result69__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&obj_exp_47, 0, sizeof(struct sNode*));
memset(&inf_type_48, 0, sizeof(struct sType*));
memset(&come_value_49, 0, sizeof(struct CVALUE*));
memset(&type_50, 0, sizeof(struct sType*));
memset(&klass_51, 0, sizeof(struct sClass*));
memset(&come_value2_52, 0, sizeof(struct CVALUE*));
memset(&type2_53, 0, sizeof(struct sType*));
memset(&type_name_54, 0, sizeof(char*));
memset(&type_name2_55, 0, sizeof(char*));
memset(&buf_57, 0, sizeof(char*));
memset(&buf2_58, 0, sizeof(char*));
memset(&typeX_59, 0, sizeof(struct sType*));
memset(&i_60, 0, sizeof(int));
memset(&name_65, 0, sizeof(char*));
memset(&field_type_66, 0, sizeof(struct sType*));
memset(&name_65, 0, sizeof(char*));
memset(&field_type_66, 0, sizeof(struct sType*));
memset(&method_name_67, 0, sizeof(char*));
memset(&type3_68, 0, sizeof(struct sType*));
    obj_exp_47=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value76=sNode_clone(self->obj_exp))));
    if(right_value76 && right_value76 != __result_obj__) { right_value76 = come_decrement_ref_count(right_value76, ((struct sNode*)right_value76)->finalize, ((struct sNode*)right_value76)->_protocol_obj, 1, 0, 0); } 
    inf_type_48=(struct sType*)come_increment_ref_count(((struct sType*)(right_value77=sType_clone(self->inf_type))));
    if(right_value77 && right_value77 != __result_obj__) { come_call_finalizer(sType_finalize,right_value77, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(_if_conditional116=!node_compile(obj_exp_47,info),    _if_conditional116) {
        __result62__ = (_Bool)0;
        if(obj_exp_47) { obj_exp_47 = come_decrement_ref_count(obj_exp_47, ((struct sNode*)obj_exp_47)->finalize, ((struct sNode*)obj_exp_47)->_protocol_obj, 0, 0, 0); } 
        if(inf_type_48) { come_call_finalizer(sType_finalize,inf_type_48, (void*)0, (void*)0, 0, 0, 0, 0); }
        return __result62__;
    }
    come_value_49=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value78=get_value_from_stack(-1,info))));
    if(right_value78 && right_value78 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value78, (void*)0, (void*)0, 0, 1, 0, 0); }
    dec_stack_ptr(1,info);
    type_50=(struct sType*)come_increment_ref_count(((struct sType*)(right_value79=sType_clone(come_value_49->type))));
    if(right_value79 && right_value79 != __result_obj__) { come_call_finalizer(sType_finalize,right_value79, (void*)0, (void*)0, 0, 1, 0, 0); }
    type_50->mPointerNum--;
    type_50->mHeap=(_Bool)0;
    klass_51=inf_type_48->mClass;
    come_value2_52=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value80=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 196))));
    if(right_value80 && right_value80 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value80, (void*)0, (void*)0, 0, 1, 0, 0); }
    type2_53=(struct sType*)come_increment_ref_count(((struct sType*)(right_value81=sType_clone(inf_type_48))));
    if(right_value81 && right_value81 != __result_obj__) { come_call_finalizer(sType_finalize,right_value81, (void*)0, (void*)0, 0, 1, 0, 0); }
    type_name_54=(char*)come_increment_ref_count(optional$2charphbool_expect(((struct optional$2charphbool*)(right_value82=make_type_name_string(inf_type_48,(_Bool)0,(_Bool)1,(_Bool)0,info)))));
    if(right_value82 && right_value82 != __result_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value82, (void*)0, (void*)0, 0, 1, 0, 0); }
    type_name2_55=(char*)come_increment_ref_count(optional$2charphbool_expect(((struct optional$2charphbool*)(right_value83=make_type_name_string(type_50,(_Bool)0,(_Bool)1,(_Bool)0,info)))));
    if(right_value83 && right_value83 != __result_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value83, (void*)0, (void*)0, 0, 1, 0, 0); }
    buf_57=(char*)come_increment_ref_count(((char*)(right_value84=xsprintf("%s* _inf_value%d;\n",type_name_54,++inf_num_56))));
    if(right_value84 && right_value84 != __result_obj__) { right_value84 = come_decrement_ref_count(right_value84, (void*)0, (void*)0, 1, 0, 0); }
    add_come_code_at_function_head(info,buf_57);
    buf2_58=(char*)come_increment_ref_count(((char*)(right_value85=xsprintf("%s* _inf_obj_value%d;\n",type_name2_55,inf_num_56))));
    if(right_value85 && right_value85 != __result_obj__) { right_value85 = come_decrement_ref_count(right_value85, (void*)0, (void*)0, 1, 0, 0); }
    add_come_code_at_function_head(info,buf2_58);
    add_come_code(info,"_inf_value%d=(%s*)come_calloc(1, sizeof(%s), \"%s\", %d);\n",inf_num_56,type_name_54,type_name_54,info->sname,info->sline);
    add_come_code(info,"_inf_obj_value%d=come_increment_ref_count(%s);\n",inf_num_56,come_value_49->c_value);
    add_come_code(info,"_inf_value%d->_protocol_obj=_inf_obj_value%d;\n",inf_num_56,inf_num_56);
    typeX_59=(struct sType*)come_increment_ref_count(((struct sType*)(right_value86=sType_clone(type_50))));
    if(right_value86 && right_value86 != __result_obj__) { come_call_finalizer(sType_finalize,right_value86, (void*)0, (void*)0, 0, 1, 0, 0); }
    typeX_59->mPointerNum++;
    ((struct tuple2$2sFunpcharph*)(right_value87=create_finalizer_automatically(typeX_59,"finalize",info)));
    if(right_value87 && right_value87 != __result_obj__) { come_call_finalizer(tuple2$2sFunpcharphp_finalize,right_value87, (void*)0, (void*)0, 0, 1, 0, 0); }
    ((struct tuple2$2sFunpcharph*)(right_value88=create_cloner_automatically(typeX_59,"clone",info)));
    if(right_value88 && right_value88 != __result_obj__) { come_call_finalizer(tuple2$2sFunpcharphp_finalize,right_value88, (void*)0, (void*)0, 0, 1, 0, 0); }
    for(
    i_60=1 ,    0;    _for_condtionalA2=    i_60<list$1tuple2$2charphsTypephph_length(klass_51->mFields) ,    _for_condtionalA2;    i_60++ ,    0    ){
        multiple_assgin_var1=optional$2tuple2$2charphsTypephphbool_value(((struct optional$2tuple2$2charphsTypephphbool*)(right_value93=list$1tuple2$2charphsTypephphp_operator_load_element(klass_51->mFields,i_60))));
        name_65=(char*)come_increment_ref_count(multiple_assgin_var1->v1);
        field_type_66=(struct sType*)come_increment_ref_count(multiple_assgin_var1->v2);
        if(right_value93 && right_value93 != __result_obj__) { come_call_finalizer(optional$2tuple2$2charphsTypephphboolp_finalize,right_value93, (void*)0, (void*)0, 0, 1, 0, 0); }
        method_name_67=(char*)come_increment_ref_count(((char*)(right_value94=create_method_name(type_50,(_Bool)0,name_65,info))));
        if(right_value94 && right_value94 != __result_obj__) { right_value94 = come_decrement_ref_count(right_value94, (void*)0, (void*)0, 1, 0, 0); }
        add_come_code(info,"_inf_value%d->%s=(void*)%s;\n",inf_num_56,name_65,method_name_67);
        if(name_65) { name_65 = come_decrement_ref_count(name_65, (void*)0, (void*)0, 0, 0, 0); }
        if(field_type_66) { come_call_finalizer(sType_finalize,field_type_66, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(method_name_67) { method_name_67 = come_decrement_ref_count(method_name_67, (void*)0, (void*)0, 0, 0, 0); }
    }
    __dec_obj43=come_value2_52->c_value;
    come_value2_52->c_value=(char*)come_increment_ref_count(((char*)(right_value95=xsprintf("_inf_value%d",inf_num_56))));
    if(__dec_obj43) { __dec_obj43 = come_decrement_ref_count(__dec_obj43, (void*)0, (void*)0, 0,0,0); }
    if(right_value95 && right_value95 != __result_obj__) { right_value95 = come_decrement_ref_count(right_value95, (void*)0, (void*)0, 1, 0, 0); }
    type3_68=(struct sType*)come_increment_ref_count(((struct sType*)(right_value96=sType_clone(inf_type_48))));
    if(right_value96 && right_value96 != __result_obj__) { come_call_finalizer(sType_finalize,right_value96, (void*)0, (void*)0, 0, 1, 0, 0); }
    type3_68->mPointerNum++;
    type3_68->mHeap=(_Bool)1;
    type2_53->mHeap=(_Bool)1;
    __dec_obj44=come_value2_52->type;
    come_value2_52->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value97=sType_clone(type2_53))));
    if(__dec_obj44) { come_call_finalizer(sType_finalize,__dec_obj44, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value97 && right_value97 != __result_obj__) { come_call_finalizer(sType_finalize,right_value97, (void*)0, (void*)0, 0, 1, 0, 0); }
    __dec_obj45=come_value2_52->c_value;
    come_value2_52->c_value=(char*)come_increment_ref_count(((char*)(right_value98=append_object_to_right_values(come_value2_52->c_value,(struct sType*)come_increment_ref_count(type3_68),info))));
    if(__dec_obj45) { __dec_obj45 = come_decrement_ref_count(__dec_obj45, (void*)0, (void*)0, 0,0,0); }
    if(right_value98 && right_value98 != __result_obj__) { right_value98 = come_decrement_ref_count(right_value98, (void*)0, (void*)0, 1, 0, 0); }
    come_value2_52->type->mPointerNum++;
    come_value2_52->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value2_52->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_52));
    __result69__ = (_Bool)1;
    if(obj_exp_47) { obj_exp_47 = come_decrement_ref_count(obj_exp_47, ((struct sNode*)obj_exp_47)->finalize, ((struct sNode*)obj_exp_47)->_protocol_obj, 0, 0, 0); } 
    if(inf_type_48) { come_call_finalizer(sType_finalize,inf_type_48, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value_49) { come_call_finalizer(CVALUE_finalize,come_value_49, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_50) { come_call_finalizer(sType_finalize,type_50, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value2_52) { come_call_finalizer(CVALUE_finalize,come_value2_52, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type2_53) { come_call_finalizer(sType_finalize,type2_53, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_name_54) { type_name_54 = come_decrement_ref_count(type_name_54, (void*)0, (void*)0, 0, 0, 0); }
    if(type_name2_55) { type_name2_55 = come_decrement_ref_count(type_name2_55, (void*)0, (void*)0, 0, 0, 0); }
    if(buf_57) { buf_57 = come_decrement_ref_count(buf_57, (void*)0, (void*)0, 0, 0, 0); }
    if(buf2_58) { buf2_58 = come_decrement_ref_count(buf2_58, (void*)0, (void*)0, 0, 0, 0); }
    if(typeX_59) { come_call_finalizer(sType_finalize,typeX_59, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type3_68) { come_call_finalizer(sType_finalize,type3_68, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result69__;
    if(obj_exp_47) { obj_exp_47 = come_decrement_ref_count(obj_exp_47, ((struct sNode*)obj_exp_47)->finalize, ((struct sNode*)obj_exp_47)->_protocol_obj, 0, 0, 0); } 
    if(inf_type_48) { come_call_finalizer(sType_finalize,inf_type_48, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value_49) { come_call_finalizer(CVALUE_finalize,come_value_49, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_50) { come_call_finalizer(sType_finalize,type_50, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value2_52) { come_call_finalizer(CVALUE_finalize,come_value2_52, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type2_53) { come_call_finalizer(sType_finalize,type2_53, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_name_54) { type_name_54 = come_decrement_ref_count(type_name_54, (void*)0, (void*)0, 0, 0, 0); }
    if(type_name2_55) { type_name2_55 = come_decrement_ref_count(type_name2_55, (void*)0, (void*)0, 0, 0, 0); }
    if(buf_57) { buf_57 = come_decrement_ref_count(buf_57, (void*)0, (void*)0, 0, 0, 0); }
    if(buf2_58) { buf2_58 = come_decrement_ref_count(buf2_58, (void*)0, (void*)0, 0, 0, 0); }
    if(typeX_59) { come_call_finalizer(sType_finalize,typeX_59, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type3_68) { come_call_finalizer(sType_finalize,type3_68, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional117;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional117=self!=((void*)0)&&self->v2!=((void*)0),        _if_conditional117) {
            if(self->v2) { self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, 0); }
        }
}

static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
int __result63__;
memset(&__result_obj__, 0, sizeof(void*));
        __result63__ = self->len;
        return __result63__;
}

static struct optional$2tuple2$2charphsTypephphbool* list$1tuple2$2charphsTypephphp_operator_load_element(struct list$1tuple2$2charphsTypephph* self, int position){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional118;
struct list_item$1tuple2$2charphsTypephph* it_61;
int i_62;
_Bool _while_condtional8;
_Bool _if_conditional119;
void* right_value89;
void* right_value90;
struct optional$2tuple2$2charphsTypephphbool* __result65__;
struct tuple2$2charphsTypeph* default_value_63;
void* right_value91;
void* right_value92;
struct optional$2tuple2$2charphsTypephphbool* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_61, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&i_62, 0, sizeof(int));
memset(&default_value_63, 0, sizeof(struct tuple2$2charphsTypeph*));
            if(_if_conditional118=position<0,            _if_conditional118) {
                position+=self->len;
            }
            it_61=self->head;
            i_62=0;
            while(_while_condtional8=it_61!=((void*)0),            _while_condtional8) {
                if(_if_conditional119=position==i_62,                _if_conditional119) {
                    __result65__ = __result_obj__ = ((struct optional$2tuple2$2charphsTypephphbool*)(right_value90=optional$2tuple2$2charphsTypephphbool_initialize((struct optional$2tuple2$2charphsTypephphbool*)come_increment_ref_count(((struct optional$2tuple2$2charphsTypephphbool*)(right_value89=(struct optional$2tuple2$2charphsTypephphbool*)come_calloc(1, sizeof(struct optional$2tuple2$2charphsTypephphbool)*(1), "./comelang2.h", 747)))),(struct tuple2$2charphsTypeph*)come_increment_ref_count(it_61->item),(_Bool)1)));
                    if(right_value89 && right_value89 != __result_obj__) { right_value89 = come_decrement_ref_count(right_value89, (void*)0, (void*)0, 1, 0, 0); }
                    return __result65__;
                }
                it_61=it_61->next;
                i_62++;
            }
            memset(&default_value_63,0,sizeof(struct tuple2$2charphsTypeph*));
            __result66__ = __result_obj__ = ((struct optional$2tuple2$2charphsTypephphbool*)(right_value92=optional$2tuple2$2charphsTypephphbool_initialize(((struct optional$2tuple2$2charphsTypephphbool*)(right_value91=(struct optional$2tuple2$2charphsTypephphbool*)come_calloc(1, sizeof(struct optional$2tuple2$2charphsTypephphbool)*(1), "./comelang2.h", 755))),(struct tuple2$2charphsTypeph*)come_increment_ref_count(default_value_63),(_Bool)0)));
            if(default_value_63) { come_call_finalizer(tuple2$2charphsTypephp_finalize,default_value_63, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value91 && right_value91 != __result_obj__) { right_value91 = come_decrement_ref_count(right_value91, (void*)0, (void*)0, 1, 0, 0); }
            return __result66__;
            if(default_value_63) { come_call_finalizer(tuple2$2charphsTypephp_finalize,default_value_63, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct optional$2tuple2$2charphsTypephphbool* optional$2tuple2$2charphsTypephphbool_initialize(struct optional$2tuple2$2charphsTypephphbool* self, struct tuple2$2charphsTypeph* v1, _Bool v2){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
struct tuple2$2charphsTypeph* __dec_obj42;
struct optional$2tuple2$2charphsTypephphbool* __result64__;
memset(&__result_obj__, 0, sizeof(void*));
                        __dec_obj42=self->v1;
                        self->v1=(struct tuple2$2charphsTypeph*)come_increment_ref_count(v1);
                        if(__dec_obj42) { come_call_finalizer(tuple2$2charphsTypeph_finalize,__dec_obj42, (void*)0, (void*)0, 0, 0, 0, 0); }
                        self->v2=v2;
                        __result64__ = __result_obj__ = self;
                        if(self) { come_call_finalizer(optional$2tuple2$2charphsTypephphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                        if(v1) { come_call_finalizer(tuple2$2charphsTypephp_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result64__;
                        if(self) { come_call_finalizer(optional$2tuple2$2charphsTypephphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                        if(v1) { come_call_finalizer(tuple2$2charphsTypephp_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional120;
_Bool _if_conditional121;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional120=self!=((void*)0)&&self->v1!=((void*)0),                            _if_conditional120) {
                                if(self->v1) { self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, 0); }
                            }
                            if(_if_conditional121=self!=((void*)0)&&self->v2!=((void*)0),                            _if_conditional121) {
                                if(self->v2) { come_call_finalizer(sType_finalize,self->v2, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
}

static void optional$2tuple2$2charphsTypephphboolp_finalize(struct optional$2tuple2$2charphsTypephphbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional122;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional122=self!=((void*)0)&&self->v1!=((void*)0),                            _if_conditional122) {
                                if(self->v1) { come_call_finalizer(tuple2$2charphsTypephp_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional123;
_Bool _if_conditional124;
memset(&__result_obj__, 0, sizeof(void*));
                                    if(_if_conditional123=self!=((void*)0)&&self->v1!=((void*)0),                                    _if_conditional123) {
                                        if(self->v1) { self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, 0); }
                                    }
                                    if(_if_conditional124=self!=((void*)0)&&self->v2!=((void*)0),                                    _if_conditional124) {
                                        if(self->v2) { come_call_finalizer(sType_finalize,self->v2, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    }
}

static struct tuple2$2charphsTypeph* optional$2tuple2$2charphsTypephphbool_value(struct optional$2tuple2$2charphsTypephphbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional125;
struct tuple2$2charphsTypeph* default_value_64;
struct tuple2$2charphsTypeph* __result67__;
struct tuple2$2charphsTypeph* __result68__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_64, 0, sizeof(struct tuple2$2charphsTypeph*));
            if(_if_conditional125=self==((void*)0),            _if_conditional125) {
                memset(&default_value_64,0,sizeof(struct tuple2$2charphsTypeph*));
                __result67__ = __result_obj__ = default_value_64;
                return __result67__;
            }
            else {
                __result68__ = __result_obj__ = self->v1;
                return __result68__;
            }
}

struct sTrueNode* sTrueNode_initialize(struct sTrueNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value99;
char* __dec_obj46;
struct sTrueNode* __result70__;
memset(&__result_obj__, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj46=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value99=__builtin_string(info->sname))));
    if(__dec_obj46) { __dec_obj46 = come_decrement_ref_count(__dec_obj46, (void*)0, (void*)0, 0,0,0); }
    if(right_value99 && right_value99 != __result_obj__) { right_value99 = come_decrement_ref_count(right_value99, (void*)0, (void*)0, 1, 0, 0); }
    __result70__ = __result_obj__ = self;
    if(self) { come_call_finalizer(sTrueNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result70__;
    if(self) { come_call_finalizer(sTrueNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

int sTrueNode_sline(struct sTrueNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
int __result71__;
memset(&__result_obj__, 0, sizeof(void*));
    __result71__ = self->sline;
    return __result71__;
}

char* sTrueNode_sname(struct sTrueNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value100;
char* __result72__;
memset(&__result_obj__, 0, sizeof(void*));
    __result72__ = __result_obj__ = ((char*)(right_value100=__builtin_string(self->sname)));
    return __result72__;
}

_Bool sTrueNode_terminated(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __result73__;
memset(&__result_obj__, 0, sizeof(void*));
    __result73__ = (_Bool)0;
    return __result73__;
}

char* sTrueNode_kind(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value101;
char* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
    __result74__ = __result_obj__ = ((char*)(right_value101=__builtin_string("sTrueNode")));
    return __result74__;
}

_Bool sTrueNode_compile(struct sTrueNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value102;
struct CVALUE* come_value_69;
void* right_value103;
char* __dec_obj47;
void* right_value104;
void* right_value105;
struct sType* __dec_obj48;
_Bool __result75__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&come_value_69, 0, sizeof(struct CVALUE*));
    come_value_69=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value102=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 281))));
    if(right_value102 && right_value102 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value102, (void*)0, (void*)0, 0, 1, 0, 0); }
    __dec_obj47=come_value_69->c_value;
    come_value_69->c_value=(char*)come_increment_ref_count(((char*)(right_value103=xsprintf("(_Bool)1"))));
    if(__dec_obj47) { __dec_obj47 = come_decrement_ref_count(__dec_obj47, (void*)0, (void*)0, 0,0,0); }
    if(right_value103 && right_value103 != __result_obj__) { right_value103 = come_decrement_ref_count(right_value103, (void*)0, (void*)0, 1, 0, 0); }
    __dec_obj48=come_value_69->type;
    come_value_69->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value105=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value104=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 284)))),"bool",(_Bool)0,info))));
    if(__dec_obj48) { come_call_finalizer(sType_finalize,__dec_obj48, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value104 && right_value104 != __result_obj__) { come_call_finalizer(sType_finalize,right_value104, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value105 && right_value105 != __result_obj__) { come_call_finalizer(sType_finalize,right_value105, (void*)0, (void*)0, 0, 1, 0, 0); }
    come_value_69->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_69->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_69));
    __result75__ = (_Bool)1;
    if(come_value_69) { come_call_finalizer(CVALUE_finalize,come_value_69, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result75__;
    if(come_value_69) { come_call_finalizer(CVALUE_finalize,come_value_69, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sNode* create_true_object(struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value106;
void* right_value107;
struct sNode* _inf_value2;
struct sTrueNode* _inf_obj_value2;
void* right_value110;
struct sNode* __result78__;
memset(&__result_obj__, 0, sizeof(void*));
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 296);
    _inf_obj_value2=come_increment_ref_count(((struct sTrueNode*)(right_value107=sTrueNode_initialize((struct sTrueNode*)come_increment_ref_count(((struct sTrueNode*)(right_value106=(struct sTrueNode*)come_calloc(1, sizeof(struct sTrueNode)*(1), "21obj.c", 296)))),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sTrueNode_finalize;
    _inf_value2->clone=(void*)sTrueNode_clone;
    _inf_value2->compile=(void*)sTrueNode_compile;
    _inf_value2->sline=(void*)sTrueNode_sline;
    _inf_value2->sname=(void*)sTrueNode_sname;
    _inf_value2->terminated=(void*)sTrueNode_terminated;
    _inf_value2->kind=(void*)sTrueNode_kind;
    __result78__ = __result_obj__ = ((struct sNode*)(right_value110=_inf_value2));
    if(right_value106 && right_value106 != __result_obj__) { come_call_finalizer(sTrueNode_finalize,right_value106, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value107 && right_value107 != __result_obj__) { come_call_finalizer(sTrueNode_finalize,right_value107, (void*)0, (void*)0, 0, 1, 0, 0); }
    return __result78__;
}

struct sFalseNode* sFalseNode_initialize(struct sFalseNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value111;
char* __dec_obj50;
struct sFalseNode* __result79__;
memset(&__result_obj__, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj50=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value111=__builtin_string(info->sname))));
    if(__dec_obj50) { __dec_obj50 = come_decrement_ref_count(__dec_obj50, (void*)0, (void*)0, 0,0,0); }
    if(right_value111 && right_value111 != __result_obj__) { right_value111 = come_decrement_ref_count(right_value111, (void*)0, (void*)0, 1, 0, 0); }
    __result79__ = __result_obj__ = self;
    if(self) { come_call_finalizer(sFalseNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result79__;
    if(self) { come_call_finalizer(sFalseNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

int sFalseNode_sline(struct sFalseNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
int __result80__;
memset(&__result_obj__, 0, sizeof(void*));
    __result80__ = self->sline;
    return __result80__;
}

char* sFalseNode_sname(struct sFalseNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value112;
char* __result81__;
memset(&__result_obj__, 0, sizeof(void*));
    __result81__ = __result_obj__ = ((char*)(right_value112=__builtin_string(self->sname)));
    return __result81__;
}

_Bool sFalseNode_terminated(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __result82__;
memset(&__result_obj__, 0, sizeof(void*));
    __result82__ = (_Bool)0;
    return __result82__;
}

char* sFalseNode_kind(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value113;
char* __result83__;
memset(&__result_obj__, 0, sizeof(void*));
    __result83__ = __result_obj__ = ((char*)(right_value113=__builtin_string("sFalseNode")));
    return __result83__;
}

_Bool sFalseNode_compile(struct sFalseNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value114;
struct CVALUE* come_value_71;
void* right_value115;
char* __dec_obj51;
void* right_value116;
void* right_value117;
struct sType* __dec_obj52;
_Bool __result84__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&come_value_71, 0, sizeof(struct CVALUE*));
    come_value_71=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value114=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 334))));
    if(right_value114 && right_value114 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value114, (void*)0, (void*)0, 0, 1, 0, 0); }
    __dec_obj51=come_value_71->c_value;
    come_value_71->c_value=(char*)come_increment_ref_count(((char*)(right_value115=xsprintf("(_Bool)0"))));
    if(__dec_obj51) { __dec_obj51 = come_decrement_ref_count(__dec_obj51, (void*)0, (void*)0, 0,0,0); }
    if(right_value115 && right_value115 != __result_obj__) { right_value115 = come_decrement_ref_count(right_value115, (void*)0, (void*)0, 1, 0, 0); }
    __dec_obj52=come_value_71->type;
    come_value_71->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value117=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value116=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 337)))),"bool",(_Bool)0,info))));
    if(__dec_obj52) { come_call_finalizer(sType_finalize,__dec_obj52, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value116 && right_value116 != __result_obj__) { come_call_finalizer(sType_finalize,right_value116, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value117 && right_value117 != __result_obj__) { come_call_finalizer(sType_finalize,right_value117, (void*)0, (void*)0, 0, 1, 0, 0); }
    come_value_71->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_71->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_71));
    __result84__ = (_Bool)1;
    if(come_value_71) { come_call_finalizer(CVALUE_finalize,come_value_71, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result84__;
    if(come_value_71) { come_call_finalizer(CVALUE_finalize,come_value_71, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sNode* create_false_object(struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value118;
void* right_value119;
struct sNode* _inf_value3;
struct sFalseNode* _inf_obj_value3;
void* right_value122;
struct sNode* __result87__;
memset(&__result_obj__, 0, sizeof(void*));
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 349);
    _inf_obj_value3=come_increment_ref_count(((struct sFalseNode*)(right_value119=sFalseNode_initialize((struct sFalseNode*)come_increment_ref_count(((struct sFalseNode*)(right_value118=(struct sFalseNode*)come_calloc(1, sizeof(struct sFalseNode)*(1), "21obj.c", 349)))),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sFalseNode_finalize;
    _inf_value3->clone=(void*)sFalseNode_clone;
    _inf_value3->compile=(void*)sFalseNode_compile;
    _inf_value3->sline=(void*)sFalseNode_sline;
    _inf_value3->sname=(void*)sFalseNode_sname;
    _inf_value3->terminated=(void*)sFalseNode_terminated;
    _inf_value3->kind=(void*)sFalseNode_kind;
    __result87__ = __result_obj__ = ((struct sNode*)(right_value122=_inf_value3));
    if(right_value118 && right_value118 != __result_obj__) { come_call_finalizer(sFalseNode_finalize,right_value118, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value119 && right_value119 != __result_obj__) { come_call_finalizer(sFalseNode_finalize,right_value119, (void*)0, (void*)0, 0, 1, 0, 0); }
    return __result87__;
}

struct sSizeOfNode* sSizeOfNode_initialize(struct sSizeOfNode* self, struct sType* type, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value123;
struct sType* __dec_obj54;
void* right_value124;
char* __dec_obj55;
struct sSizeOfNode* __result88__;
memset(&__result_obj__, 0, sizeof(void*));
    __dec_obj54=self->type;
    self->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value123=sType_clone(type))));
    if(__dec_obj54) { come_call_finalizer(sType_finalize,__dec_obj54, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value123 && right_value123 != __result_obj__) { come_call_finalizer(sType_finalize,right_value123, (void*)0, (void*)0, 0, 1, 0, 0); }
    self->sline=info->sline;
    __dec_obj55=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value124=__builtin_string(info->sname))));
    if(__dec_obj55) { __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0,0,0); }
    if(right_value124 && right_value124 != __result_obj__) { right_value124 = come_decrement_ref_count(right_value124, (void*)0, (void*)0, 1, 0, 0); }
    __result88__ = __result_obj__ = self;
    if(self) { come_call_finalizer(sSizeOfNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(type) { come_call_finalizer(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result88__;
    if(self) { come_call_finalizer(sSizeOfNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(type) { come_call_finalizer(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0); }
}

int sSizeOfNode_sline(struct sSizeOfNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
int __result89__;
memset(&__result_obj__, 0, sizeof(void*));
    __result89__ = self->sline;
    return __result89__;
}

char* sSizeOfNode_sname(struct sSizeOfNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value125;
char* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
    __result90__ = __result_obj__ = ((char*)(right_value125=__builtin_string(self->sname)));
    return __result90__;
}

_Bool sSizeOfNode_terminated(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __result91__;
memset(&__result_obj__, 0, sizeof(void*));
    __result91__ = (_Bool)0;
    return __result91__;
}

char* sSizeOfNode_kind(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value126;
char* __result92__;
memset(&__result_obj__, 0, sizeof(void*));
    __result92__ = __result_obj__ = ((char*)(right_value126=__builtin_string("sSizeOfNode")));
    return __result92__;
}

_Bool sSizeOfNode_compile(struct sSizeOfNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
struct sType* type_73;
void* right_value127;
struct CVALUE* come_value_74;
void* right_value128;
struct sType* type2_75;
void* right_value129;
char* type_name_76;
void* right_value130;
char* __dec_obj56;
void* right_value131;
void* right_value132;
struct sType* __dec_obj57;
_Bool __result93__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&type_73, 0, sizeof(struct sType*));
memset(&come_value_74, 0, sizeof(struct CVALUE*));
memset(&type2_75, 0, sizeof(struct sType*));
memset(&type_name_76, 0, sizeof(char*));
    type_73=self->type;
    come_value_74=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value127=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 392))));
    if(right_value127 && right_value127 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value127, (void*)0, (void*)0, 0, 1, 0, 0); }
    type2_75=(struct sType*)come_increment_ref_count(((struct sType*)(right_value128=solve_generics(type_73,info->generics_type,info))));
    if(right_value128 && right_value128 != __result_obj__) { come_call_finalizer(sType_finalize,right_value128, (void*)0, (void*)0, 0, 1, 0, 0); }
    type_name_76=(char*)come_increment_ref_count(optional$2charphbool_expect(((struct optional$2charphbool*)(right_value129=make_type_name_string(type2_75,(_Bool)0,(_Bool)0,(_Bool)0,info)))));
    if(right_value129 && right_value129 != __result_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value129, (void*)0, (void*)0, 0, 1, 0, 0); }
    __dec_obj56=come_value_74->c_value;
    come_value_74->c_value=(char*)come_increment_ref_count(((char*)(right_value130=xsprintf("sizeof(%s)",type_name_76))));
    if(__dec_obj56) { __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0,0,0); }
    if(right_value130 && right_value130 != __result_obj__) { right_value130 = come_decrement_ref_count(right_value130, (void*)0, (void*)0, 1, 0, 0); }
    __dec_obj57=come_value_74->type;
    come_value_74->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value132=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value131=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 399)))),"long",(_Bool)0,info))));
    if(__dec_obj57) { come_call_finalizer(sType_finalize,__dec_obj57, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value131 && right_value131 != __result_obj__) { come_call_finalizer(sType_finalize,right_value131, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value132 && right_value132 != __result_obj__) { come_call_finalizer(sType_finalize,right_value132, (void*)0, (void*)0, 0, 1, 0, 0); }
    come_value_74->type->mUnsigned=(_Bool)1;
    come_value_74->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_74->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_74));
    __result93__ = (_Bool)1;
    if(come_value_74) { come_call_finalizer(CVALUE_finalize,come_value_74, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type2_75) { come_call_finalizer(sType_finalize,type2_75, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_name_76) { type_name_76 = come_decrement_ref_count(type_name_76, (void*)0, (void*)0, 0, 0, 0); }
    return __result93__;
    if(come_value_74) { come_call_finalizer(CVALUE_finalize,come_value_74, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type2_75) { come_call_finalizer(sType_finalize,type2_75, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_name_76) { type_name_76 = come_decrement_ref_count(type_name_76, (void*)0, (void*)0, 0, 0, 0); }
}

struct sSizeOfExpNode* sSizeOfExpNode_initialize(struct sSizeOfExpNode* self, struct sNode* exp, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value133;
struct sNode* __dec_obj58;
void* right_value134;
char* __dec_obj59;
struct sSizeOfExpNode* __result94__;
memset(&__result_obj__, 0, sizeof(void*));
    __dec_obj58=self->exp;
    self->exp=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value133=sNode_clone(exp))));
    if(__dec_obj58) { __dec_obj58 = come_decrement_ref_count(__dec_obj58, ((struct sNode*)__dec_obj58)->finalize, ((struct sNode*)__dec_obj58)->_protocol_obj, 0,0,0); }
    if(right_value133 && right_value133 != __result_obj__) { right_value133 = come_decrement_ref_count(right_value133, ((struct sNode*)right_value133)->finalize, ((struct sNode*)right_value133)->_protocol_obj, 1, 0, 0); } 
    self->sline=info->sline;
    __dec_obj59=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value134=__builtin_string(info->sname))));
    if(__dec_obj59) { __dec_obj59 = come_decrement_ref_count(__dec_obj59, (void*)0, (void*)0, 0,0,0); }
    if(right_value134 && right_value134 != __result_obj__) { right_value134 = come_decrement_ref_count(right_value134, (void*)0, (void*)0, 1, 0, 0); }
    __result94__ = __result_obj__ = self;
    if(self) { come_call_finalizer(sSizeOfExpNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(exp) { exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0); } 
    return __result94__;
    if(self) { come_call_finalizer(sSizeOfExpNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(exp) { exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0); } 
}

int sSizeOfExpNode_sline(struct sSizeOfExpNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
int __result95__;
memset(&__result_obj__, 0, sizeof(void*));
    __result95__ = self->sline;
    return __result95__;
}

char* sSizeOfExpNode_sname(struct sSizeOfExpNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value135;
char* __result96__;
memset(&__result_obj__, 0, sizeof(void*));
    __result96__ = __result_obj__ = ((char*)(right_value135=__builtin_string(self->sname)));
    return __result96__;
}

_Bool sSizeOfExpNode_terminated(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __result97__;
memset(&__result_obj__, 0, sizeof(void*));
    __result97__ = (_Bool)0;
    return __result97__;
}

char* sSizeOfExpNode_kind(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value136;
char* __result98__;
memset(&__result_obj__, 0, sizeof(void*));
    __result98__ = __result_obj__ = ((char*)(right_value136=__builtin_string("sSizeOfExpNode")));
    return __result98__;
}

_Bool sSizeOfExpNode_compile(struct sSizeOfExpNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
struct sNode* exp_77;
_Bool _if_conditional140;
_Bool __result99__;
void* right_value137;
struct CVALUE* come_value_78;
void* right_value138;
struct CVALUE* come_value2_79;
void* right_value139;
char* __dec_obj60;
void* right_value140;
void* right_value141;
struct sType* __dec_obj61;
_Bool __result100__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&exp_77, 0, sizeof(struct sNode*));
memset(&come_value_78, 0, sizeof(struct CVALUE*));
memset(&come_value2_79, 0, sizeof(struct CVALUE*));
    exp_77=(struct sNode*)come_increment_ref_count(self->exp);
    if(_if_conditional140=!node_compile(exp_77,info),    _if_conditional140) {
        __result99__ = (_Bool)0;
        if(exp_77) { exp_77 = come_decrement_ref_count(exp_77, ((struct sNode*)exp_77)->finalize, ((struct sNode*)exp_77)->_protocol_obj, 0, 0, 0); } 
        return __result99__;
    }
    come_value_78=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value137=get_value_from_stack(-1,info))));
    if(right_value137 && right_value137 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value137, (void*)0, (void*)0, 0, 1, 0, 0); }
    dec_stack_ptr(1,info);
    come_value2_79=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value138=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 457))));
    if(right_value138 && right_value138 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value138, (void*)0, (void*)0, 0, 1, 0, 0); }
    __dec_obj60=come_value2_79->c_value;
    come_value2_79->c_value=(char*)come_increment_ref_count(((char*)(right_value139=xsprintf("sizeof(%s)",come_value_78->c_value))));
    if(__dec_obj60) { __dec_obj60 = come_decrement_ref_count(__dec_obj60, (void*)0, (void*)0, 0,0,0); }
    if(right_value139 && right_value139 != __result_obj__) { right_value139 = come_decrement_ref_count(right_value139, (void*)0, (void*)0, 1, 0, 0); }
    __dec_obj61=come_value2_79->type;
    come_value2_79->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value141=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value140=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 460)))),"long",(_Bool)0,info))));
    if(__dec_obj61) { come_call_finalizer(sType_finalize,__dec_obj61, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value140 && right_value140 != __result_obj__) { come_call_finalizer(sType_finalize,right_value140, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value141 && right_value141 != __result_obj__) { come_call_finalizer(sType_finalize,right_value141, (void*)0, (void*)0, 0, 1, 0, 0); }
    come_value2_79->type->mUnsigned=(_Bool)1;
    come_value2_79->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value2_79->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_79));
    __result100__ = (_Bool)1;
    if(exp_77) { exp_77 = come_decrement_ref_count(exp_77, ((struct sNode*)exp_77)->finalize, ((struct sNode*)exp_77)->_protocol_obj, 0, 0, 0); } 
    if(come_value_78) { come_call_finalizer(CVALUE_finalize,come_value_78, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value2_79) { come_call_finalizer(CVALUE_finalize,come_value2_79, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result100__;
    if(exp_77) { exp_77 = come_decrement_ref_count(exp_77, ((struct sNode*)exp_77)->finalize, ((struct sNode*)exp_77)->_protocol_obj, 0, 0, 0); } 
    if(come_value_78) { come_call_finalizer(CVALUE_finalize,come_value_78, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value2_79) { come_call_finalizer(CVALUE_finalize,come_value2_79, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sAlignOfNode* sAlignOfNode_initialize(struct sAlignOfNode* self, struct sType* type, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value142;
struct sType* __dec_obj62;
void* right_value143;
char* __dec_obj63;
struct sAlignOfNode* __result101__;
memset(&__result_obj__, 0, sizeof(void*));
    __dec_obj62=self->type;
    self->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value142=sType_clone(type))));
    if(__dec_obj62) { come_call_finalizer(sType_finalize,__dec_obj62, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value142 && right_value142 != __result_obj__) { come_call_finalizer(sType_finalize,right_value142, (void*)0, (void*)0, 0, 1, 0, 0); }
    self->sline=info->sline;
    __dec_obj63=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value143=__builtin_string(info->sname))));
    if(__dec_obj63) { __dec_obj63 = come_decrement_ref_count(__dec_obj63, (void*)0, (void*)0, 0,0,0); }
    if(right_value143 && right_value143 != __result_obj__) { right_value143 = come_decrement_ref_count(right_value143, (void*)0, (void*)0, 1, 0, 0); }
    __result101__ = __result_obj__ = self;
    if(self) { come_call_finalizer(sAlignOfNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(type) { come_call_finalizer(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result101__;
    if(self) { come_call_finalizer(sAlignOfNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(type) { come_call_finalizer(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0); }
}

int sAlignOfNode_sline(struct sAlignOfNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
int __result102__;
memset(&__result_obj__, 0, sizeof(void*));
    __result102__ = self->sline;
    return __result102__;
}

char* sAlignOfNode_sname(struct sAlignOfNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value144;
char* __result103__;
memset(&__result_obj__, 0, sizeof(void*));
    __result103__ = __result_obj__ = ((char*)(right_value144=__builtin_string(self->sname)));
    return __result103__;
}

_Bool sAlignOfNode_terminated(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __result104__;
memset(&__result_obj__, 0, sizeof(void*));
    __result104__ = (_Bool)0;
    return __result104__;
}

char* sAlignOfNode_kind(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value145;
char* __result105__;
memset(&__result_obj__, 0, sizeof(void*));
    __result105__ = __result_obj__ = ((char*)(right_value145=__builtin_string("sAlignOfNode")));
    return __result105__;
}

_Bool sAlignOfNode_compile(struct sAlignOfNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
struct sType* type_80;
void* right_value146;
struct CVALUE* come_value_81;
void* right_value147;
struct sType* type2_82;
void* right_value148;
char* type_name_83;
void* right_value149;
char* __dec_obj64;
void* right_value150;
void* right_value151;
struct sType* __dec_obj65;
_Bool __result106__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&type_80, 0, sizeof(struct sType*));
memset(&come_value_81, 0, sizeof(struct CVALUE*));
memset(&type2_82, 0, sizeof(struct sType*));
memset(&type_name_83, 0, sizeof(char*));
    type_80=self->type;
    come_value_81=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value146=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 511))));
    if(right_value146 && right_value146 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value146, (void*)0, (void*)0, 0, 1, 0, 0); }
    type2_82=(struct sType*)come_increment_ref_count(((struct sType*)(right_value147=solve_generics(type_80,info->generics_type,info))));
    if(right_value147 && right_value147 != __result_obj__) { come_call_finalizer(sType_finalize,right_value147, (void*)0, (void*)0, 0, 1, 0, 0); }
    type_name_83=(char*)come_increment_ref_count(optional$2charphbool_expect(((struct optional$2charphbool*)(right_value148=make_type_name_string(type2_82,(_Bool)0,(_Bool)0,(_Bool)0,info)))));
    if(right_value148 && right_value148 != __result_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value148, (void*)0, (void*)0, 0, 1, 0, 0); }
    __dec_obj64=come_value_81->c_value;
    come_value_81->c_value=(char*)come_increment_ref_count(((char*)(right_value149=xsprintf("_Alignof(%s)",type_name_83))));
    if(__dec_obj64) { __dec_obj64 = come_decrement_ref_count(__dec_obj64, (void*)0, (void*)0, 0,0,0); }
    if(right_value149 && right_value149 != __result_obj__) { right_value149 = come_decrement_ref_count(right_value149, (void*)0, (void*)0, 1, 0, 0); }
    __dec_obj65=come_value_81->type;
    come_value_81->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value151=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value150=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 518)))),"long",(_Bool)0,info))));
    if(__dec_obj65) { come_call_finalizer(sType_finalize,__dec_obj65, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value150 && right_value150 != __result_obj__) { come_call_finalizer(sType_finalize,right_value150, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value151 && right_value151 != __result_obj__) { come_call_finalizer(sType_finalize,right_value151, (void*)0, (void*)0, 0, 1, 0, 0); }
    come_value_81->type->mUnsigned=(_Bool)1;
    come_value_81->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_81->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_81));
    __result106__ = (_Bool)1;
    if(come_value_81) { come_call_finalizer(CVALUE_finalize,come_value_81, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type2_82) { come_call_finalizer(sType_finalize,type2_82, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_name_83) { type_name_83 = come_decrement_ref_count(type_name_83, (void*)0, (void*)0, 0, 0, 0); }
    return __result106__;
    if(come_value_81) { come_call_finalizer(CVALUE_finalize,come_value_81, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type2_82) { come_call_finalizer(sType_finalize,type2_82, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_name_83) { type_name_83 = come_decrement_ref_count(type_name_83, (void*)0, (void*)0, 0, 0, 0); }
}

struct sAlignOfExpNode* sAlignOfExpNode_initialize(struct sAlignOfExpNode* self, struct sNode* exp, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value152;
struct sNode* __dec_obj66;
void* right_value153;
char* __dec_obj67;
struct sAlignOfExpNode* __result107__;
memset(&__result_obj__, 0, sizeof(void*));
    __dec_obj66=self->exp;
    self->exp=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value152=sNode_clone(exp))));
    if(__dec_obj66) { __dec_obj66 = come_decrement_ref_count(__dec_obj66, ((struct sNode*)__dec_obj66)->finalize, ((struct sNode*)__dec_obj66)->_protocol_obj, 0,0,0); }
    if(right_value152 && right_value152 != __result_obj__) { right_value152 = come_decrement_ref_count(right_value152, ((struct sNode*)right_value152)->finalize, ((struct sNode*)right_value152)->_protocol_obj, 1, 0, 0); } 
    self->sline=info->sline;
    __dec_obj67=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value153=__builtin_string(info->sname))));
    if(__dec_obj67) { __dec_obj67 = come_decrement_ref_count(__dec_obj67, (void*)0, (void*)0, 0,0,0); }
    if(right_value153 && right_value153 != __result_obj__) { right_value153 = come_decrement_ref_count(right_value153, (void*)0, (void*)0, 1, 0, 0); }
    __result107__ = __result_obj__ = self;
    if(self) { come_call_finalizer(sAlignOfExpNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(exp) { exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0); } 
    return __result107__;
    if(self) { come_call_finalizer(sAlignOfExpNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(exp) { exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0); } 
}

int sAlignOfExpNode_sline(struct sAlignOfExpNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
int __result108__;
memset(&__result_obj__, 0, sizeof(void*));
    __result108__ = self->sline;
    return __result108__;
}

char* sAlignOfExpNode_sname(struct sAlignOfExpNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value154;
char* __result109__;
memset(&__result_obj__, 0, sizeof(void*));
    __result109__ = __result_obj__ = ((char*)(right_value154=__builtin_string(self->sname)));
    return __result109__;
}

_Bool sAlignOfExpNode_terminated(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __result110__;
memset(&__result_obj__, 0, sizeof(void*));
    __result110__ = (_Bool)0;
    return __result110__;
}

char* sAlignOfExpNode_kind(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value155;
char* __result111__;
memset(&__result_obj__, 0, sizeof(void*));
    __result111__ = __result_obj__ = ((char*)(right_value155=__builtin_string("sAlignOfExpNode")));
    return __result111__;
}

_Bool sAlignOfExpNode_compile(struct sAlignOfExpNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
struct sNode* exp_84;
_Bool _if_conditional145;
_Bool __result112__;
void* right_value156;
struct CVALUE* come_value_85;
void* right_value157;
struct CVALUE* come_value2_86;
void* right_value158;
char* __dec_obj68;
void* right_value159;
void* right_value160;
struct sType* __dec_obj69;
_Bool __result113__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&exp_84, 0, sizeof(struct sNode*));
memset(&come_value_85, 0, sizeof(struct CVALUE*));
memset(&come_value2_86, 0, sizeof(struct CVALUE*));
    exp_84=(struct sNode*)come_increment_ref_count(self->exp);
    if(_if_conditional145=!node_compile(exp_84,info),    _if_conditional145) {
        __result112__ = (_Bool)0;
        if(exp_84) { exp_84 = come_decrement_ref_count(exp_84, ((struct sNode*)exp_84)->finalize, ((struct sNode*)exp_84)->_protocol_obj, 0, 0, 0); } 
        return __result112__;
    }
    come_value_85=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value156=get_value_from_stack(-1,info))));
    if(right_value156 && right_value156 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value156, (void*)0, (void*)0, 0, 1, 0, 0); }
    dec_stack_ptr(1,info);
    come_value2_86=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value157=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 576))));
    if(right_value157 && right_value157 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value157, (void*)0, (void*)0, 0, 1, 0, 0); }
    __dec_obj68=come_value2_86->c_value;
    come_value2_86->c_value=(char*)come_increment_ref_count(((char*)(right_value158=xsprintf("_AlignOf(%s)",come_value_85->c_value))));
    if(__dec_obj68) { __dec_obj68 = come_decrement_ref_count(__dec_obj68, (void*)0, (void*)0, 0,0,0); }
    if(right_value158 && right_value158 != __result_obj__) { right_value158 = come_decrement_ref_count(right_value158, (void*)0, (void*)0, 1, 0, 0); }
    __dec_obj69=come_value2_86->type;
    come_value2_86->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value160=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value159=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 579)))),"long",(_Bool)0,info))));
    if(__dec_obj69) { come_call_finalizer(sType_finalize,__dec_obj69, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value159 && right_value159 != __result_obj__) { come_call_finalizer(sType_finalize,right_value159, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value160 && right_value160 != __result_obj__) { come_call_finalizer(sType_finalize,right_value160, (void*)0, (void*)0, 0, 1, 0, 0); }
    come_value2_86->type->mUnsigned=(_Bool)1;
    come_value2_86->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value2_86->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_86));
    __result113__ = (_Bool)1;
    if(exp_84) { exp_84 = come_decrement_ref_count(exp_84, ((struct sNode*)exp_84)->finalize, ((struct sNode*)exp_84)->_protocol_obj, 0, 0, 0); } 
    if(come_value_85) { come_call_finalizer(CVALUE_finalize,come_value_85, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value2_86) { come_call_finalizer(CVALUE_finalize,come_value2_86, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result113__;
    if(exp_84) { exp_84 = come_decrement_ref_count(exp_84, ((struct sNode*)exp_84)->finalize, ((struct sNode*)exp_84)->_protocol_obj, 0, 0, 0); } 
    if(come_value_85) { come_call_finalizer(CVALUE_finalize,come_value_85, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value2_86) { come_call_finalizer(CVALUE_finalize,come_value2_86, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sAlignOfNode2* sAlignOfNode2_initialize(struct sAlignOfNode2* self, struct sType* type, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value161;
struct sType* __dec_obj70;
void* right_value162;
char* __dec_obj71;
struct sAlignOfNode2* __result114__;
memset(&__result_obj__, 0, sizeof(void*));
    __dec_obj70=self->type;
    self->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value161=sType_clone(type))));
    if(__dec_obj70) { come_call_finalizer(sType_finalize,__dec_obj70, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value161 && right_value161 != __result_obj__) { come_call_finalizer(sType_finalize,right_value161, (void*)0, (void*)0, 0, 1, 0, 0); }
    self->sline=info->sline;
    __dec_obj71=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value162=__builtin_string(info->sname))));
    if(__dec_obj71) { __dec_obj71 = come_decrement_ref_count(__dec_obj71, (void*)0, (void*)0, 0,0,0); }
    if(right_value162 && right_value162 != __result_obj__) { right_value162 = come_decrement_ref_count(right_value162, (void*)0, (void*)0, 1, 0, 0); }
    __result114__ = __result_obj__ = self;
    if(self) { come_call_finalizer(sAlignOfNode2_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(type) { come_call_finalizer(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result114__;
    if(self) { come_call_finalizer(sAlignOfNode2_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(type) { come_call_finalizer(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0); }
}

int sAlignOfNode2_sline(struct sAlignOfNode2* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
int __result115__;
memset(&__result_obj__, 0, sizeof(void*));
    __result115__ = self->sline;
    return __result115__;
}

char* sAlignOfNode2_sname(struct sAlignOfNode2* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value163;
char* __result116__;
memset(&__result_obj__, 0, sizeof(void*));
    __result116__ = __result_obj__ = ((char*)(right_value163=__builtin_string(self->sname)));
    return __result116__;
}

_Bool sAlignOfNode2_terminated(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __result117__;
memset(&__result_obj__, 0, sizeof(void*));
    __result117__ = (_Bool)0;
    return __result117__;
}

char* sAlignOfNode2_kind(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value164;
char* __result118__;
memset(&__result_obj__, 0, sizeof(void*));
    __result118__ = __result_obj__ = ((char*)(right_value164=__builtin_string("sAlignOfNode2")));
    return __result118__;
}

_Bool sAlignOfNode2_compile(struct sAlignOfNode2* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
struct sType* type_87;
void* right_value165;
struct CVALUE* come_value_88;
void* right_value166;
struct sType* type2_89;
void* right_value167;
char* type_name_90;
void* right_value168;
char* __dec_obj72;
void* right_value169;
void* right_value170;
struct sType* __dec_obj73;
_Bool __result119__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&type_87, 0, sizeof(struct sType*));
memset(&come_value_88, 0, sizeof(struct CVALUE*));
memset(&type2_89, 0, sizeof(struct sType*));
memset(&type_name_90, 0, sizeof(char*));
    type_87=self->type;
    come_value_88=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value165=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 630))));
    if(right_value165 && right_value165 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value165, (void*)0, (void*)0, 0, 1, 0, 0); }
    type2_89=(struct sType*)come_increment_ref_count(((struct sType*)(right_value166=solve_generics(type_87,info->generics_type,info))));
    if(right_value166 && right_value166 != __result_obj__) { come_call_finalizer(sType_finalize,right_value166, (void*)0, (void*)0, 0, 1, 0, 0); }
    type_name_90=(char*)come_increment_ref_count(optional$2charphbool_expect(((struct optional$2charphbool*)(right_value167=make_type_name_string(type2_89,(_Bool)0,(_Bool)0,(_Bool)0,info)))));
    if(right_value167 && right_value167 != __result_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value167, (void*)0, (void*)0, 0, 1, 0, 0); }
    __dec_obj72=come_value_88->c_value;
    come_value_88->c_value=(char*)come_increment_ref_count(((char*)(right_value168=xsprintf("__alignof__(%s)",type_name_90))));
    if(__dec_obj72) { __dec_obj72 = come_decrement_ref_count(__dec_obj72, (void*)0, (void*)0, 0,0,0); }
    if(right_value168 && right_value168 != __result_obj__) { right_value168 = come_decrement_ref_count(right_value168, (void*)0, (void*)0, 1, 0, 0); }
    __dec_obj73=come_value_88->type;
    come_value_88->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value170=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value169=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 637)))),"long",(_Bool)0,info))));
    if(__dec_obj73) { come_call_finalizer(sType_finalize,__dec_obj73, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value169 && right_value169 != __result_obj__) { come_call_finalizer(sType_finalize,right_value169, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value170 && right_value170 != __result_obj__) { come_call_finalizer(sType_finalize,right_value170, (void*)0, (void*)0, 0, 1, 0, 0); }
    come_value_88->type->mUnsigned=(_Bool)1;
    come_value_88->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_88->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_88));
    __result119__ = (_Bool)1;
    if(come_value_88) { come_call_finalizer(CVALUE_finalize,come_value_88, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type2_89) { come_call_finalizer(sType_finalize,type2_89, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_name_90) { type_name_90 = come_decrement_ref_count(type_name_90, (void*)0, (void*)0, 0, 0, 0); }
    return __result119__;
    if(come_value_88) { come_call_finalizer(CVALUE_finalize,come_value_88, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type2_89) { come_call_finalizer(sType_finalize,type2_89, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_name_90) { type_name_90 = come_decrement_ref_count(type_name_90, (void*)0, (void*)0, 0, 0, 0); }
}

struct sAlignOfExpNode2* sAlignOfExpNode2_initialize(struct sAlignOfExpNode2* self, struct sNode* exp, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value171;
struct sNode* __dec_obj74;
void* right_value172;
char* __dec_obj75;
struct sAlignOfExpNode2* __result120__;
memset(&__result_obj__, 0, sizeof(void*));
    __dec_obj74=self->exp;
    self->exp=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value171=sNode_clone(exp))));
    if(__dec_obj74) { __dec_obj74 = come_decrement_ref_count(__dec_obj74, ((struct sNode*)__dec_obj74)->finalize, ((struct sNode*)__dec_obj74)->_protocol_obj, 0,0,0); }
    if(right_value171 && right_value171 != __result_obj__) { right_value171 = come_decrement_ref_count(right_value171, ((struct sNode*)right_value171)->finalize, ((struct sNode*)right_value171)->_protocol_obj, 1, 0, 0); } 
    self->sline=info->sline;
    __dec_obj75=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value172=__builtin_string(info->sname))));
    if(__dec_obj75) { __dec_obj75 = come_decrement_ref_count(__dec_obj75, (void*)0, (void*)0, 0,0,0); }
    if(right_value172 && right_value172 != __result_obj__) { right_value172 = come_decrement_ref_count(right_value172, (void*)0, (void*)0, 1, 0, 0); }
    __result120__ = __result_obj__ = self;
    if(self) { come_call_finalizer(sAlignOfExpNode2_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(exp) { exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0); } 
    return __result120__;
    if(self) { come_call_finalizer(sAlignOfExpNode2_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(exp) { exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0); } 
}

int sAlignOfExpNode2_sline(struct sAlignOfExpNode2* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
int __result121__;
memset(&__result_obj__, 0, sizeof(void*));
    __result121__ = self->sline;
    return __result121__;
}

char* sAlignOfExpNode2_sname(struct sAlignOfExpNode2* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value173;
char* __result122__;
memset(&__result_obj__, 0, sizeof(void*));
    __result122__ = __result_obj__ = ((char*)(right_value173=__builtin_string(self->sname)));
    return __result122__;
}

_Bool sAlignOfExpNode2_terminated(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __result123__;
memset(&__result_obj__, 0, sizeof(void*));
    __result123__ = (_Bool)0;
    return __result123__;
}

char* sAlignOfExpNode2_kind(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value174;
char* __result124__;
memset(&__result_obj__, 0, sizeof(void*));
    __result124__ = __result_obj__ = ((char*)(right_value174=__builtin_string("sAlignOfExpNode2")));
    return __result124__;
}

_Bool sAlignOfExpNode2_compile(struct sAlignOfExpNode2* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
struct sNode* exp_91;
_Bool _if_conditional150;
_Bool __result125__;
void* right_value175;
struct CVALUE* come_value_92;
void* right_value176;
struct CVALUE* come_value2_93;
void* right_value177;
char* __dec_obj76;
void* right_value178;
void* right_value179;
struct sType* __dec_obj77;
_Bool __result126__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&exp_91, 0, sizeof(struct sNode*));
memset(&come_value_92, 0, sizeof(struct CVALUE*));
memset(&come_value2_93, 0, sizeof(struct CVALUE*));
    exp_91=(struct sNode*)come_increment_ref_count(self->exp);
    if(_if_conditional150=!node_compile(exp_91,info),    _if_conditional150) {
        __result125__ = (_Bool)0;
        if(exp_91) { exp_91 = come_decrement_ref_count(exp_91, ((struct sNode*)exp_91)->finalize, ((struct sNode*)exp_91)->_protocol_obj, 0, 0, 0); } 
        return __result125__;
    }
    come_value_92=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value175=get_value_from_stack(-1,info))));
    if(right_value175 && right_value175 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value175, (void*)0, (void*)0, 0, 1, 0, 0); }
    dec_stack_ptr(1,info);
    come_value2_93=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value176=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 695))));
    if(right_value176 && right_value176 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value176, (void*)0, (void*)0, 0, 1, 0, 0); }
    __dec_obj76=come_value2_93->c_value;
    come_value2_93->c_value=(char*)come_increment_ref_count(((char*)(right_value177=xsprintf("__alignof__(%s)",come_value_92->c_value))));
    if(__dec_obj76) { __dec_obj76 = come_decrement_ref_count(__dec_obj76, (void*)0, (void*)0, 0,0,0); }
    if(right_value177 && right_value177 != __result_obj__) { right_value177 = come_decrement_ref_count(right_value177, (void*)0, (void*)0, 1, 0, 0); }
    __dec_obj77=come_value2_93->type;
    come_value2_93->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value179=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value178=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 698)))),"long",(_Bool)0,info))));
    if(__dec_obj77) { come_call_finalizer(sType_finalize,__dec_obj77, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value178 && right_value178 != __result_obj__) { come_call_finalizer(sType_finalize,right_value178, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value179 && right_value179 != __result_obj__) { come_call_finalizer(sType_finalize,right_value179, (void*)0, (void*)0, 0, 1, 0, 0); }
    come_value2_93->type->mUnsigned=(_Bool)1;
    come_value2_93->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value2_93->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_93));
    __result126__ = (_Bool)1;
    if(exp_91) { exp_91 = come_decrement_ref_count(exp_91, ((struct sNode*)exp_91)->finalize, ((struct sNode*)exp_91)->_protocol_obj, 0, 0, 0); } 
    if(come_value_92) { come_call_finalizer(CVALUE_finalize,come_value_92, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value2_93) { come_call_finalizer(CVALUE_finalize,come_value2_93, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result126__;
    if(exp_91) { exp_91 = come_decrement_ref_count(exp_91, ((struct sNode*)exp_91)->finalize, ((struct sNode*)exp_91)->_protocol_obj, 0, 0, 0); } 
    if(come_value_92) { come_call_finalizer(CVALUE_finalize,come_value_92, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value2_93) { come_call_finalizer(CVALUE_finalize,come_value2_93, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sAlignAsNode* sAlignAsNode_initialize(struct sAlignAsNode* self, struct sType* type, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value180;
struct sType* __dec_obj78;
void* right_value181;
char* __dec_obj79;
struct sAlignAsNode* __result127__;
memset(&__result_obj__, 0, sizeof(void*));
    __dec_obj78=self->type;
    self->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value180=sType_clone(type))));
    if(__dec_obj78) { come_call_finalizer(sType_finalize,__dec_obj78, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value180 && right_value180 != __result_obj__) { come_call_finalizer(sType_finalize,right_value180, (void*)0, (void*)0, 0, 1, 0, 0); }
    self->sline=info->sline;
    __dec_obj79=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value181=__builtin_string(info->sname))));
    if(__dec_obj79) { __dec_obj79 = come_decrement_ref_count(__dec_obj79, (void*)0, (void*)0, 0,0,0); }
    if(right_value181 && right_value181 != __result_obj__) { right_value181 = come_decrement_ref_count(right_value181, (void*)0, (void*)0, 1, 0, 0); }
    __result127__ = __result_obj__ = self;
    if(self) { come_call_finalizer(sAlignAsNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(type) { come_call_finalizer(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result127__;
    if(self) { come_call_finalizer(sAlignAsNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(type) { come_call_finalizer(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0); }
}

int sAlignAsNode_sline(struct sAlignAsNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
int __result128__;
memset(&__result_obj__, 0, sizeof(void*));
    __result128__ = self->sline;
    return __result128__;
}

char* sAlignAsNode_sname(struct sAlignAsNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value182;
char* __result129__;
memset(&__result_obj__, 0, sizeof(void*));
    __result129__ = __result_obj__ = ((char*)(right_value182=__builtin_string(self->sname)));
    return __result129__;
}

_Bool sAlignAsNode_terminated(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __result130__;
memset(&__result_obj__, 0, sizeof(void*));
    __result130__ = (_Bool)0;
    return __result130__;
}

char* sAlignAsNode_kind(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value183;
char* __result131__;
memset(&__result_obj__, 0, sizeof(void*));
    __result131__ = __result_obj__ = ((char*)(right_value183=__builtin_string("sAlignAsNode")));
    return __result131__;
}

_Bool sAlignAsNode_compile(struct sAlignAsNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
struct sType* type_94;
void* right_value184;
struct CVALUE* come_value_95;
void* right_value185;
struct sType* type2_96;
void* right_value186;
char* type_name_97;
void* right_value187;
char* __dec_obj80;
void* right_value188;
void* right_value189;
struct sType* __dec_obj81;
_Bool __result132__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&type_94, 0, sizeof(struct sType*));
memset(&come_value_95, 0, sizeof(struct CVALUE*));
memset(&type2_96, 0, sizeof(struct sType*));
memset(&type_name_97, 0, sizeof(char*));
    type_94=self->type;
    come_value_95=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value184=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 749))));
    if(right_value184 && right_value184 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value184, (void*)0, (void*)0, 0, 1, 0, 0); }
    type2_96=(struct sType*)come_increment_ref_count(((struct sType*)(right_value185=solve_generics(type_94,info->generics_type,info))));
    if(right_value185 && right_value185 != __result_obj__) { come_call_finalizer(sType_finalize,right_value185, (void*)0, (void*)0, 0, 1, 0, 0); }
    type_name_97=(char*)come_increment_ref_count(optional$2charphbool_expect(((struct optional$2charphbool*)(right_value186=make_type_name_string(type2_96,(_Bool)0,(_Bool)0,(_Bool)0,info)))));
    if(right_value186 && right_value186 != __result_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value186, (void*)0, (void*)0, 0, 1, 0, 0); }
    __dec_obj80=come_value_95->c_value;
    come_value_95->c_value=(char*)come_increment_ref_count(((char*)(right_value187=xsprintf("_Alignas(%s)",type_name_97))));
    if(__dec_obj80) { __dec_obj80 = come_decrement_ref_count(__dec_obj80, (void*)0, (void*)0, 0,0,0); }
    if(right_value187 && right_value187 != __result_obj__) { right_value187 = come_decrement_ref_count(right_value187, (void*)0, (void*)0, 1, 0, 0); }
    __dec_obj81=come_value_95->type;
    come_value_95->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value189=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value188=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 756)))),"long",(_Bool)0,info))));
    if(__dec_obj81) { come_call_finalizer(sType_finalize,__dec_obj81, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value188 && right_value188 != __result_obj__) { come_call_finalizer(sType_finalize,right_value188, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value189 && right_value189 != __result_obj__) { come_call_finalizer(sType_finalize,right_value189, (void*)0, (void*)0, 0, 1, 0, 0); }
    come_value_95->type->mUnsigned=(_Bool)1;
    come_value_95->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_95->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_95));
    __result132__ = (_Bool)1;
    if(come_value_95) { come_call_finalizer(CVALUE_finalize,come_value_95, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type2_96) { come_call_finalizer(sType_finalize,type2_96, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_name_97) { type_name_97 = come_decrement_ref_count(type_name_97, (void*)0, (void*)0, 0, 0, 0); }
    return __result132__;
    if(come_value_95) { come_call_finalizer(CVALUE_finalize,come_value_95, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type2_96) { come_call_finalizer(sType_finalize,type2_96, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_name_97) { type_name_97 = come_decrement_ref_count(type_name_97, (void*)0, (void*)0, 0, 0, 0); }
}

struct sAlignAsExpNode* sAlignAsExpNode_initialize(struct sAlignAsExpNode* self, struct sNode* exp, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value190;
struct sNode* __dec_obj82;
void* right_value191;
char* __dec_obj83;
struct sAlignAsExpNode* __result133__;
memset(&__result_obj__, 0, sizeof(void*));
    __dec_obj82=self->exp;
    self->exp=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value190=sNode_clone(exp))));
    if(__dec_obj82) { __dec_obj82 = come_decrement_ref_count(__dec_obj82, ((struct sNode*)__dec_obj82)->finalize, ((struct sNode*)__dec_obj82)->_protocol_obj, 0,0,0); }
    if(right_value190 && right_value190 != __result_obj__) { right_value190 = come_decrement_ref_count(right_value190, ((struct sNode*)right_value190)->finalize, ((struct sNode*)right_value190)->_protocol_obj, 1, 0, 0); } 
    self->sline=info->sline;
    __dec_obj83=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value191=__builtin_string(info->sname))));
    if(__dec_obj83) { __dec_obj83 = come_decrement_ref_count(__dec_obj83, (void*)0, (void*)0, 0,0,0); }
    if(right_value191 && right_value191 != __result_obj__) { right_value191 = come_decrement_ref_count(right_value191, (void*)0, (void*)0, 1, 0, 0); }
    __result133__ = __result_obj__ = self;
    if(self) { come_call_finalizer(sAlignAsExpNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(exp) { exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0); } 
    return __result133__;
    if(self) { come_call_finalizer(sAlignAsExpNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(exp) { exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0); } 
}

int sAlignAsExpNode_sline(struct sAlignAsExpNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
int __result134__;
memset(&__result_obj__, 0, sizeof(void*));
    __result134__ = self->sline;
    return __result134__;
}

char* sAlignAsExpNode_sname(struct sAlignAsExpNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value192;
char* __result135__;
memset(&__result_obj__, 0, sizeof(void*));
    __result135__ = __result_obj__ = ((char*)(right_value192=__builtin_string(self->sname)));
    return __result135__;
}

_Bool sAlignAsExpNode_terminated(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __result136__;
memset(&__result_obj__, 0, sizeof(void*));
    __result136__ = (_Bool)0;
    return __result136__;
}

char* sAlignAsExpNode_kind(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value193;
char* __result137__;
memset(&__result_obj__, 0, sizeof(void*));
    __result137__ = __result_obj__ = ((char*)(right_value193=__builtin_string("sAlignAsExpNode")));
    return __result137__;
}

_Bool sAlignAsExpNode_compile(struct sAlignAsExpNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
struct sNode* exp_98;
_Bool _if_conditional155;
_Bool __result138__;
void* right_value194;
struct CVALUE* come_value_99;
void* right_value195;
struct CVALUE* come_value2_100;
void* right_value196;
char* __dec_obj84;
void* right_value197;
void* right_value198;
struct sType* __dec_obj85;
_Bool __result139__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&exp_98, 0, sizeof(struct sNode*));
memset(&come_value_99, 0, sizeof(struct CVALUE*));
memset(&come_value2_100, 0, sizeof(struct CVALUE*));
    exp_98=(struct sNode*)come_increment_ref_count(self->exp);
    if(_if_conditional155=!node_compile(exp_98,info),    _if_conditional155) {
        __result138__ = (_Bool)0;
        if(exp_98) { exp_98 = come_decrement_ref_count(exp_98, ((struct sNode*)exp_98)->finalize, ((struct sNode*)exp_98)->_protocol_obj, 0, 0, 0); } 
        return __result138__;
    }
    come_value_99=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value194=get_value_from_stack(-1,info))));
    if(right_value194 && right_value194 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value194, (void*)0, (void*)0, 0, 1, 0, 0); }
    dec_stack_ptr(1,info);
    come_value2_100=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value195=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 815))));
    if(right_value195 && right_value195 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value195, (void*)0, (void*)0, 0, 1, 0, 0); }
    __dec_obj84=come_value2_100->c_value;
    come_value2_100->c_value=(char*)come_increment_ref_count(((char*)(right_value196=xsprintf("_Alignas(%s)",come_value_99->c_value))));
    if(__dec_obj84) { __dec_obj84 = come_decrement_ref_count(__dec_obj84, (void*)0, (void*)0, 0,0,0); }
    if(right_value196 && right_value196 != __result_obj__) { right_value196 = come_decrement_ref_count(right_value196, (void*)0, (void*)0, 1, 0, 0); }
    __dec_obj85=come_value2_100->type;
    come_value2_100->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value198=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value197=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 818)))),"long",(_Bool)0,info))));
    if(__dec_obj85) { come_call_finalizer(sType_finalize,__dec_obj85, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value197 && right_value197 != __result_obj__) { come_call_finalizer(sType_finalize,right_value197, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value198 && right_value198 != __result_obj__) { come_call_finalizer(sType_finalize,right_value198, (void*)0, (void*)0, 0, 1, 0, 0); }
    come_value2_100->type->mUnsigned=(_Bool)1;
    come_value2_100->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value2_100->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_100));
    __result139__ = (_Bool)1;
    if(exp_98) { exp_98 = come_decrement_ref_count(exp_98, ((struct sNode*)exp_98)->finalize, ((struct sNode*)exp_98)->_protocol_obj, 0, 0, 0); } 
    if(come_value_99) { come_call_finalizer(CVALUE_finalize,come_value_99, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value2_100) { come_call_finalizer(CVALUE_finalize,come_value2_100, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result139__;
    if(exp_98) { exp_98 = come_decrement_ref_count(exp_98, ((struct sNode*)exp_98)->finalize, ((struct sNode*)exp_98)->_protocol_obj, 0, 0, 0); } 
    if(come_value_99) { come_call_finalizer(CVALUE_finalize,come_value_99, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value2_100) { come_call_finalizer(CVALUE_finalize,come_value2_100, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sDeleteNode* sDeleteNode_initialize(struct sDeleteNode* self, struct sNode* node, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value199;
struct sNode* __dec_obj86;
void* right_value200;
char* __dec_obj87;
struct sDeleteNode* __result140__;
memset(&__result_obj__, 0, sizeof(void*));
    __dec_obj86=self->node;
    self->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value199=sNode_clone(node))));
    if(__dec_obj86) { __dec_obj86 = come_decrement_ref_count(__dec_obj86, ((struct sNode*)__dec_obj86)->finalize, ((struct sNode*)__dec_obj86)->_protocol_obj, 0,0,0); }
    if(right_value199 && right_value199 != __result_obj__) { right_value199 = come_decrement_ref_count(right_value199, ((struct sNode*)right_value199)->finalize, ((struct sNode*)right_value199)->_protocol_obj, 1, 0, 0); } 
    self->sline=info->sline;
    __dec_obj87=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value200=__builtin_string(info->sname))));
    if(__dec_obj87) { __dec_obj87 = come_decrement_ref_count(__dec_obj87, (void*)0, (void*)0, 0,0,0); }
    if(right_value200 && right_value200 != __result_obj__) { right_value200 = come_decrement_ref_count(right_value200, (void*)0, (void*)0, 1, 0, 0); }
    __result140__ = __result_obj__ = self;
    if(self) { come_call_finalizer(sDeleteNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(node) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
    return __result140__;
    if(self) { come_call_finalizer(sDeleteNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(node) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
}

int sDeleteNode_sline(struct sDeleteNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
int __result141__;
memset(&__result_obj__, 0, sizeof(void*));
    __result141__ = self->sline;
    return __result141__;
}

char* sDeleteNode_sname(struct sDeleteNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value201;
char* __result142__;
memset(&__result_obj__, 0, sizeof(void*));
    __result142__ = __result_obj__ = ((char*)(right_value201=__builtin_string(self->sname)));
    return __result142__;
}

_Bool sDeleteNode_terminated(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __result143__;
memset(&__result_obj__, 0, sizeof(void*));
    __result143__ = (_Bool)0;
    return __result143__;
}

char* sDeleteNode_kind(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value202;
char* __result144__;
memset(&__result_obj__, 0, sizeof(void*));
    __result144__ = __result_obj__ = ((char*)(right_value202=__builtin_string("sDeleteNode")));
    return __result144__;
}

_Bool sDeleteNode_compile(struct sDeleteNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
struct sNode* node_101;
_Bool _if_conditional158;
_Bool __result145__;
void* right_value203;
struct CVALUE* come_value_102;
_Bool __result146__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&node_101, 0, sizeof(struct sNode*));
memset(&come_value_102, 0, sizeof(struct CVALUE*));
    node_101=self->node;
    if(_if_conditional158=!node_compile(node_101,info),    _if_conditional158) {
        __result145__ = (_Bool)0;
        return __result145__;
    }
    come_value_102=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value203=get_value_from_stack(-1,info))));
    if(right_value203 && right_value203 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value203, (void*)0, (void*)0, 0, 1, 0, 0); }
    dec_stack_ptr(1,info);
    free_object(come_value_102->type,come_value_102->c_value,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
    __result146__ = (_Bool)1;
    if(come_value_102) { come_call_finalizer(CVALUE_finalize,come_value_102, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result146__;
    if(come_value_102) { come_call_finalizer(CVALUE_finalize,come_value_102, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sForceDeleteNode* sForceDeleteNode_initialize(struct sForceDeleteNode* self, struct sNode* node, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value204;
struct sNode* __dec_obj88;
void* right_value205;
char* __dec_obj89;
struct sForceDeleteNode* __result147__;
memset(&__result_obj__, 0, sizeof(void*));
    __dec_obj88=self->node;
    self->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value204=sNode_clone(node))));
    if(__dec_obj88) { __dec_obj88 = come_decrement_ref_count(__dec_obj88, ((struct sNode*)__dec_obj88)->finalize, ((struct sNode*)__dec_obj88)->_protocol_obj, 0,0,0); }
    if(right_value204 && right_value204 != __result_obj__) { right_value204 = come_decrement_ref_count(right_value204, ((struct sNode*)right_value204)->finalize, ((struct sNode*)right_value204)->_protocol_obj, 1, 0, 0); } 
    self->sline=info->sline;
    __dec_obj89=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value205=__builtin_string(info->sname))));
    if(__dec_obj89) { __dec_obj89 = come_decrement_ref_count(__dec_obj89, (void*)0, (void*)0, 0,0,0); }
    if(right_value205 && right_value205 != __result_obj__) { right_value205 = come_decrement_ref_count(right_value205, (void*)0, (void*)0, 1, 0, 0); }
    __result147__ = __result_obj__ = self;
    if(self) { come_call_finalizer(sForceDeleteNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(node) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
    return __result147__;
    if(self) { come_call_finalizer(sForceDeleteNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(node) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
}

int sForceDeleteNode_sline(struct sForceDeleteNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
int __result148__;
memset(&__result_obj__, 0, sizeof(void*));
    __result148__ = self->sline;
    return __result148__;
}

char* sForceDeleteNode_sname(struct sForceDeleteNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value206;
char* __result149__;
memset(&__result_obj__, 0, sizeof(void*));
    __result149__ = __result_obj__ = ((char*)(right_value206=__builtin_string(self->sname)));
    return __result149__;
}

_Bool sForceDeleteNode_terminated(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __result150__;
memset(&__result_obj__, 0, sizeof(void*));
    __result150__ = (_Bool)0;
    return __result150__;
}

char* sForceDeleteNode_kind(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value207;
char* __result151__;
memset(&__result_obj__, 0, sizeof(void*));
    __result151__ = __result_obj__ = ((char*)(right_value207=__builtin_string("sForceDeleteNode")));
    return __result151__;
}

_Bool sForceDeleteNode_compile(struct sDeleteNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
struct sNode* node_103;
_Bool _if_conditional161;
_Bool __result152__;
void* right_value208;
struct CVALUE* come_value_104;
_Bool __result153__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&node_103, 0, sizeof(struct sNode*));
memset(&come_value_104, 0, sizeof(struct CVALUE*));
    node_103=self->node;
    if(_if_conditional161=!node_compile(node_103,info),    _if_conditional161) {
        __result152__ = (_Bool)0;
        return __result152__;
    }
    come_value_104=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value208=get_value_from_stack(-1,info))));
    if(right_value208 && right_value208 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value208, (void*)0, (void*)0, 0, 1, 0, 0); }
    dec_stack_ptr(1,info);
    free_object(come_value_104->type,come_value_104->c_value,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)1);
    __result153__ = (_Bool)1;
    if(come_value_104) { come_call_finalizer(CVALUE_finalize,come_value_104, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result153__;
    if(come_value_104) { come_call_finalizer(CVALUE_finalize,come_value_104, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sDelegateNode* sDelegateNode_initialize(struct sDelegateNode* self, struct sNode* node, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value209;
struct sNode* __dec_obj90;
void* right_value210;
char* __dec_obj91;
struct sDelegateNode* __result154__;
memset(&__result_obj__, 0, sizeof(void*));
    __dec_obj90=self->node;
    self->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value209=sNode_clone(node))));
    if(__dec_obj90) { __dec_obj90 = come_decrement_ref_count(__dec_obj90, ((struct sNode*)__dec_obj90)->finalize, ((struct sNode*)__dec_obj90)->_protocol_obj, 0,0,0); }
    if(right_value209 && right_value209 != __result_obj__) { right_value209 = come_decrement_ref_count(right_value209, ((struct sNode*)right_value209)->finalize, ((struct sNode*)right_value209)->_protocol_obj, 1, 0, 0); } 
    self->sline=info->sline;
    __dec_obj91=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value210=__builtin_string(info->sname))));
    if(__dec_obj91) { __dec_obj91 = come_decrement_ref_count(__dec_obj91, (void*)0, (void*)0, 0,0,0); }
    if(right_value210 && right_value210 != __result_obj__) { right_value210 = come_decrement_ref_count(right_value210, (void*)0, (void*)0, 1, 0, 0); }
    __result154__ = __result_obj__ = self;
    if(self) { come_call_finalizer(sDelegateNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(node) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
    return __result154__;
    if(self) { come_call_finalizer(sDelegateNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(node) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
}

int sDelegateNode_sline(struct sDelegateNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
int __result155__;
memset(&__result_obj__, 0, sizeof(void*));
    __result155__ = self->sline;
    return __result155__;
}

char* sDelegateNode_sname(struct sDelegateNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value211;
char* __result156__;
memset(&__result_obj__, 0, sizeof(void*));
    __result156__ = __result_obj__ = ((char*)(right_value211=__builtin_string(self->sname)));
    return __result156__;
}

_Bool sDelegateNode_terminated(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __result157__;
memset(&__result_obj__, 0, sizeof(void*));
    __result157__ = (_Bool)0;
    return __result157__;
}

char* sDelegateNode_kind(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value212;
char* __result158__;
memset(&__result_obj__, 0, sizeof(void*));
    __result158__ = __result_obj__ = ((char*)(right_value212=__builtin_string("sDelegateNode")));
    return __result158__;
}

_Bool sDelegateNode_compile(struct sDelegateNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
struct sNode* node_105;
_Bool _if_conditional164;
_Bool __result159__;
void* right_value213;
struct CVALUE* come_value_106;
_Bool _if_conditional165;
_Bool __result160__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&node_105, 0, sizeof(struct sNode*));
memset(&come_value_106, 0, sizeof(struct CVALUE*));
    node_105=self->node;
    if(_if_conditional164=!node_compile(node_105,info),    _if_conditional164) {
        __result159__ = (_Bool)0;
        return __result159__;
    }
    come_value_106=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value213=get_value_from_stack(-1,info))));
    if(right_value213 && right_value213 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value213, (void*)0, (void*)0, 0, 1, 0, 0); }
    dec_stack_ptr(1,info);
    come_value_106->type->mDelegate=(_Bool)1;
    if(_if_conditional165=come_value_106->var,    _if_conditional165) {
        come_value_106->var->mType->mDelegate=(_Bool)1;
    }
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_106));
    __result160__ = (_Bool)1;
    if(come_value_106) { come_call_finalizer(CVALUE_finalize,come_value_106, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result160__;
    if(come_value_106) { come_call_finalizer(CVALUE_finalize,come_value_106, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sShareNode* sShareNode_initialize(struct sShareNode* self, struct sNode* node, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value214;
struct sNode* __dec_obj92;
void* right_value215;
char* __dec_obj93;
struct sShareNode* __result161__;
memset(&__result_obj__, 0, sizeof(void*));
    __dec_obj92=self->node;
    self->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value214=sNode_clone(node))));
    if(__dec_obj92) { __dec_obj92 = come_decrement_ref_count(__dec_obj92, ((struct sNode*)__dec_obj92)->finalize, ((struct sNode*)__dec_obj92)->_protocol_obj, 0,0,0); }
    if(right_value214 && right_value214 != __result_obj__) { right_value214 = come_decrement_ref_count(right_value214, ((struct sNode*)right_value214)->finalize, ((struct sNode*)right_value214)->_protocol_obj, 1, 0, 0); } 
    self->sline=info->sline;
    __dec_obj93=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value215=__builtin_string(info->sname))));
    if(__dec_obj93) { __dec_obj93 = come_decrement_ref_count(__dec_obj93, (void*)0, (void*)0, 0,0,0); }
    if(right_value215 && right_value215 != __result_obj__) { right_value215 = come_decrement_ref_count(right_value215, (void*)0, (void*)0, 1, 0, 0); }
    __result161__ = __result_obj__ = self;
    if(self) { come_call_finalizer(sShareNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(node) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
    return __result161__;
    if(self) { come_call_finalizer(sShareNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(node) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
}

int sShareNode_sline(struct sShareNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
int __result162__;
memset(&__result_obj__, 0, sizeof(void*));
    __result162__ = self->sline;
    return __result162__;
}

char* sShareNode_sname(struct sShareNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value216;
char* __result163__;
memset(&__result_obj__, 0, sizeof(void*));
    __result163__ = __result_obj__ = ((char*)(right_value216=__builtin_string(self->sname)));
    return __result163__;
}

_Bool sShareNode_terminated(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __result164__;
memset(&__result_obj__, 0, sizeof(void*));
    __result164__ = (_Bool)0;
    return __result164__;
}

char* sShareNode_kind(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value217;
char* __result165__;
memset(&__result_obj__, 0, sizeof(void*));
    __result165__ = __result_obj__ = ((char*)(right_value217=__builtin_string("sShareNode")));
    return __result165__;
}

_Bool sShareNode_compile(struct sShareNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
struct sNode* node_107;
_Bool _if_conditional168;
_Bool __result166__;
void* right_value218;
struct CVALUE* come_value_108;
_Bool _if_conditional169;
_Bool __result167__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&node_107, 0, sizeof(struct sNode*));
memset(&come_value_108, 0, sizeof(struct CVALUE*));
    node_107=self->node;
    if(_if_conditional168=!node_compile(node_107,info),    _if_conditional168) {
        __result166__ = (_Bool)0;
        return __result166__;
    }
    come_value_108=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value218=get_value_from_stack(-1,info))));
    if(right_value218 && right_value218 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value218, (void*)0, (void*)0, 0, 1, 0, 0); }
    dec_stack_ptr(1,info);
    come_value_108->type->mShare=(_Bool)1;
    if(_if_conditional169=come_value_108->var,    _if_conditional169) {
        come_value_108->var->mType->mShare=(_Bool)1;
    }
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_108));
    __result167__ = (_Bool)1;
    if(come_value_108) { come_call_finalizer(CVALUE_finalize,come_value_108, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result167__;
    if(come_value_108) { come_call_finalizer(CVALUE_finalize,come_value_108, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sBorrowNode* sBorrowNode_initialize(struct sBorrowNode* self, struct sNode* node, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value219;
struct sNode* __dec_obj94;
void* right_value220;
char* __dec_obj95;
struct sBorrowNode* __result168__;
memset(&__result_obj__, 0, sizeof(void*));
    __dec_obj94=self->node;
    self->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value219=sNode_clone(node))));
    if(__dec_obj94) { __dec_obj94 = come_decrement_ref_count(__dec_obj94, ((struct sNode*)__dec_obj94)->finalize, ((struct sNode*)__dec_obj94)->_protocol_obj, 0,0,0); }
    if(right_value219 && right_value219 != __result_obj__) { right_value219 = come_decrement_ref_count(right_value219, ((struct sNode*)right_value219)->finalize, ((struct sNode*)right_value219)->_protocol_obj, 1, 0, 0); } 
    self->sline=info->sline;
    __dec_obj95=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value220=__builtin_string(info->sname))));
    if(__dec_obj95) { __dec_obj95 = come_decrement_ref_count(__dec_obj95, (void*)0, (void*)0, 0,0,0); }
    if(right_value220 && right_value220 != __result_obj__) { right_value220 = come_decrement_ref_count(right_value220, (void*)0, (void*)0, 1, 0, 0); }
    __result168__ = __result_obj__ = self;
    if(self) { come_call_finalizer(sBorrowNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(node) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
    return __result168__;
    if(self) { come_call_finalizer(sBorrowNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(node) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
}

int sBorrowNode_sline(struct sBorrowNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
int __result169__;
memset(&__result_obj__, 0, sizeof(void*));
    __result169__ = self->sline;
    return __result169__;
}

char* sBorrowNode_sname(struct sBorrowNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value221;
char* __result170__;
memset(&__result_obj__, 0, sizeof(void*));
    __result170__ = __result_obj__ = ((char*)(right_value221=__builtin_string(self->sname)));
    return __result170__;
}

_Bool sBorrowNode_terminated(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __result171__;
memset(&__result_obj__, 0, sizeof(void*));
    __result171__ = (_Bool)0;
    return __result171__;
}

char* sBorrowNode_kind(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value222;
char* __result172__;
memset(&__result_obj__, 0, sizeof(void*));
    __result172__ = __result_obj__ = ((char*)(right_value222=__builtin_string("sBorrowNode")));
    return __result172__;
}

_Bool sBorrowNode_compile(struct sBorrowNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
struct sNode* node_109;
_Bool _if_conditional172;
_Bool __result173__;
void* right_value223;
struct CVALUE* come_value_110;
int right_value_id_111;
_Bool _if_conditional173;
_Bool __result174__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&node_109, 0, sizeof(struct sNode*));
memset(&come_value_110, 0, sizeof(struct CVALUE*));
memset(&right_value_id_111, 0, sizeof(int));
    node_109=self->node;
    if(_if_conditional172=!node_compile(node_109,info),    _if_conditional172) {
        __result173__ = (_Bool)0;
        return __result173__;
    }
    come_value_110=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value223=get_value_from_stack(-1,info))));
    if(right_value223 && right_value223 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value223, (void*)0, (void*)0, 0, 1, 0, 0); }
    dec_stack_ptr(1,info);
    come_value_110->type->mHeap=(_Bool)0;
    right_value_id_111=get_right_value_id_from_obj((char*)come_increment_ref_count(come_value_110->c_value));
    if(_if_conditional173=right_value_id_111!=-1,    _if_conditional173) {
        remove_object_from_right_values(right_value_id_111,info);
    }
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_110));
    __result174__ = (_Bool)1;
    if(come_value_110) { come_call_finalizer(CVALUE_finalize,come_value_110, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result174__;
    if(come_value_110) { come_call_finalizer(CVALUE_finalize,come_value_110, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sCloneNode* sCloneNode_initialize(struct sCloneNode* self, struct sNode* node, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value224;
struct sNode* __dec_obj96;
void* right_value225;
char* __dec_obj97;
struct sCloneNode* __result175__;
memset(&__result_obj__, 0, sizeof(void*));
    __dec_obj96=self->node;
    self->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value224=sNode_clone(node))));
    if(__dec_obj96) { __dec_obj96 = come_decrement_ref_count(__dec_obj96, ((struct sNode*)__dec_obj96)->finalize, ((struct sNode*)__dec_obj96)->_protocol_obj, 0,0,0); }
    if(right_value224 && right_value224 != __result_obj__) { right_value224 = come_decrement_ref_count(right_value224, ((struct sNode*)right_value224)->finalize, ((struct sNode*)right_value224)->_protocol_obj, 1, 0, 0); } 
    self->sline=info->sline;
    __dec_obj97=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value225=__builtin_string(info->sname))));
    if(__dec_obj97) { __dec_obj97 = come_decrement_ref_count(__dec_obj97, (void*)0, (void*)0, 0,0,0); }
    if(right_value225 && right_value225 != __result_obj__) { right_value225 = come_decrement_ref_count(right_value225, (void*)0, (void*)0, 1, 0, 0); }
    __result175__ = __result_obj__ = self;
    if(self) { come_call_finalizer(sCloneNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(node) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
    return __result175__;
    if(self) { come_call_finalizer(sCloneNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(node) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
}

int sCloneNode_sline(struct sCloneNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
int __result176__;
memset(&__result_obj__, 0, sizeof(void*));
    __result176__ = self->sline;
    return __result176__;
}

char* sCloneNode_sname(struct sCloneNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value226;
char* __result177__;
memset(&__result_obj__, 0, sizeof(void*));
    __result177__ = __result_obj__ = ((char*)(right_value226=__builtin_string(self->sname)));
    return __result177__;
}

_Bool sCloneNode_terminated(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __result178__;
memset(&__result_obj__, 0, sizeof(void*));
    __result178__ = (_Bool)0;
    return __result178__;
}

char* sCloneNode_kind(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value227;
char* __result179__;
memset(&__result_obj__, 0, sizeof(void*));
    __result179__ = __result_obj__ = ((char*)(right_value227=__builtin_string("sCloneNode")));
    return __result179__;
}

_Bool sCloneNode_compile(struct sCloneNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
struct sNode* node_112;
_Bool _if_conditional176;
_Bool __result180__;
void* right_value228;
struct CVALUE* left_value_113;
void* right_value229;
struct sType* left_type_114;
_Bool _if_conditional177;
_Bool _if_conditional178;
_Bool _if_conditional179;
void* right_value230;
struct CVALUE* come_value_115;
void* right_value231;
struct tuple2$2sTypephcharph* multiple_assgin_var2;
struct sType* result_type_116;
char* c_value_117;
char* __dec_obj98;
void* right_value232;
struct sType* __dec_obj99;
void* right_value233;
char* __dec_obj100;
_Bool __result181__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&node_112, 0, sizeof(struct sNode*));
memset(&left_value_113, 0, sizeof(struct CVALUE*));
memset(&left_type_114, 0, sizeof(struct sType*));
memset(&come_value_115, 0, sizeof(struct CVALUE*));
memset(&result_type_116, 0, sizeof(struct sType*));
memset(&c_value_117, 0, sizeof(char*));
memset(&result_type_116, 0, sizeof(struct sType*));
memset(&c_value_117, 0, sizeof(char*));
    node_112=self->node;
    if(_if_conditional176=!node_compile(node_112,info),    _if_conditional176) {
        __result180__ = (_Bool)0;
        return __result180__;
    }
    left_value_113=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value228=get_value_from_stack(-1,info))));
    if(right_value228 && right_value228 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value228, (void*)0, (void*)0, 0, 1, 0, 0); }
    dec_stack_ptr(1,info);
    left_value_113->type->mClone=(_Bool)1;
    left_type_114=(struct sType*)come_increment_ref_count(((struct sType*)(right_value229=sType_clone(left_value_113->type))));
    if(right_value229 && right_value229 != __result_obj__) { come_call_finalizer(sType_finalize,right_value229, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(_if_conditional177=left_type_114->mPointerNum==1&&string_operator_equals(left_type_114->mClass->mName,"void")&&left_type_114->mHeap==(_Bool)0,    _if_conditional177) {
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_113));
    }
    else {
        if(_if_conditional178=left_type_114->mPointerNum==0,        _if_conditional178) {
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_113));
        }
        else {
            if(_if_conditional179=left_type_114->mPointerNum>0,            _if_conditional179) {
                come_value_115=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value230=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 1172))));
                if(right_value230 && right_value230 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value230, (void*)0, (void*)0, 0, 1, 0, 0); }
                multiple_assgin_var2=((struct tuple2$2sTypephcharph*)(right_value231=clone_object(left_type_114,left_value_113->c_value,info)));
                result_type_116=(struct sType*)come_increment_ref_count(multiple_assgin_var2->v1);
                c_value_117=(char*)come_increment_ref_count(multiple_assgin_var2->v2);
                if(right_value231 && right_value231 != __result_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,right_value231, (void*)0, (void*)0, 0, 1, 0, 0); }
                __dec_obj98=come_value_115->c_value;
                come_value_115->c_value=(char*)come_increment_ref_count(c_value_117);
                if(__dec_obj98) { __dec_obj98 = come_decrement_ref_count(__dec_obj98, (void*)0, (void*)0, 0,0,0); }
                __dec_obj99=come_value_115->type;
                come_value_115->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value232=sType_clone(left_type_114))));
                if(__dec_obj99) { come_call_finalizer(sType_finalize,__dec_obj99, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(right_value232 && right_value232 != __result_obj__) { come_call_finalizer(sType_finalize,right_value232, (void*)0, (void*)0, 0, 1, 0, 0); }
                come_value_115->type->mHeap=(_Bool)1;
                come_value_115->type->mClone=(_Bool)1;
                come_value_115->var=((void*)0);
                __dec_obj100=come_value_115->c_value;
                come_value_115->c_value=(char*)come_increment_ref_count(((char*)(right_value233=append_object_to_right_values(come_value_115->c_value,(struct sType*)come_increment_ref_count(left_type_114),info))));
                if(__dec_obj100) { __dec_obj100 = come_decrement_ref_count(__dec_obj100, (void*)0, (void*)0, 0,0,0); }
                if(right_value233 && right_value233 != __result_obj__) { right_value233 = come_decrement_ref_count(right_value233, (void*)0, (void*)0, 1, 0, 0); }
                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_115));
                if(come_value_115) { come_call_finalizer(CVALUE_finalize,come_value_115, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(result_type_116) { come_call_finalizer(sType_finalize,result_type_116, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(c_value_117) { c_value_117 = come_decrement_ref_count(c_value_117, (void*)0, (void*)0, 0, 0, 0); }
            }
        }
    }
    __result181__ = (_Bool)1;
    if(left_value_113) { come_call_finalizer(CVALUE_finalize,left_value_113, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(left_type_114) { come_call_finalizer(sType_finalize,left_type_114, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result181__;
    if(left_value_113) { come_call_finalizer(CVALUE_finalize,left_value_113, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(left_type_114) { come_call_finalizer(sType_finalize,left_type_114, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional180;
_Bool _if_conditional181;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional180=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional180) {
                        if(self->v1) { come_call_finalizer(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    if(_if_conditional181=self!=((void*)0)&&self->v2!=((void*)0),                    _if_conditional181) {
                        if(self->v2) { self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, 0); }
                    }
}

struct sDupeNode* sDupeNode_initialize(struct sDupeNode* self, struct sNode* node, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value234;
struct sNode* __dec_obj101;
void* right_value235;
char* __dec_obj102;
struct sDupeNode* __result182__;
memset(&__result_obj__, 0, sizeof(void*));
    __dec_obj101=self->node;
    self->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value234=sNode_clone(node))));
    if(__dec_obj101) { __dec_obj101 = come_decrement_ref_count(__dec_obj101, ((struct sNode*)__dec_obj101)->finalize, ((struct sNode*)__dec_obj101)->_protocol_obj, 0,0,0); }
    if(right_value234 && right_value234 != __result_obj__) { right_value234 = come_decrement_ref_count(right_value234, ((struct sNode*)right_value234)->finalize, ((struct sNode*)right_value234)->_protocol_obj, 1, 0, 0); } 
    self->sline=info->sline;
    __dec_obj102=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value235=__builtin_string(info->sname))));
    if(__dec_obj102) { __dec_obj102 = come_decrement_ref_count(__dec_obj102, (void*)0, (void*)0, 0,0,0); }
    if(right_value235 && right_value235 != __result_obj__) { right_value235 = come_decrement_ref_count(right_value235, (void*)0, (void*)0, 1, 0, 0); }
    __result182__ = __result_obj__ = self;
    if(self) { come_call_finalizer(sDupeNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(node) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
    return __result182__;
    if(self) { come_call_finalizer(sDupeNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(node) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
}

int sDupeNode_sline(struct sDupeNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
int __result183__;
memset(&__result_obj__, 0, sizeof(void*));
    __result183__ = self->sline;
    return __result183__;
}

char* sDupeNode_sname(struct sDupeNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value236;
char* __result184__;
memset(&__result_obj__, 0, sizeof(void*));
    __result184__ = __result_obj__ = ((char*)(right_value236=__builtin_string(self->sname)));
    return __result184__;
}

_Bool sDupeNode_terminated(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __result185__;
memset(&__result_obj__, 0, sizeof(void*));
    __result185__ = (_Bool)0;
    return __result185__;
}

char* sDupeNode_kind(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value237;
char* __result186__;
memset(&__result_obj__, 0, sizeof(void*));
    __result186__ = __result_obj__ = ((char*)(right_value237=__builtin_string("sDupeNode")));
    return __result186__;
}

_Bool sDupeNode_compile(struct sDupeNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
struct sNode* node_118;
_Bool _if_conditional184;
_Bool __result187__;
void* right_value238;
struct CVALUE* left_value_119;
void* right_value239;
struct sType* left_type_120;
_Bool _if_conditional185;
_Bool _if_conditional186;
_Bool _if_conditional187;
void* right_value240;
struct CVALUE* come_value_121;
void* right_value241;
struct tuple2$2sTypephcharph* multiple_assgin_var3;
struct sType* result_type_122;
char* c_value_123;
char* __dec_obj103;
void* right_value242;
struct sType* __dec_obj104;
void* right_value243;
char* __dec_obj105;
_Bool __result188__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&node_118, 0, sizeof(struct sNode*));
memset(&left_value_119, 0, sizeof(struct CVALUE*));
memset(&left_type_120, 0, sizeof(struct sType*));
memset(&come_value_121, 0, sizeof(struct CVALUE*));
memset(&result_type_122, 0, sizeof(struct sType*));
memset(&c_value_123, 0, sizeof(char*));
memset(&result_type_122, 0, sizeof(struct sType*));
memset(&c_value_123, 0, sizeof(char*));
    node_118=self->node;
    if(_if_conditional184=!node_compile(node_118,info),    _if_conditional184) {
        __result187__ = (_Bool)0;
        return __result187__;
    }
    left_value_119=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value238=get_value_from_stack(-1,info))));
    if(right_value238 && right_value238 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value238, (void*)0, (void*)0, 0, 1, 0, 0); }
    dec_stack_ptr(1,info);
    left_type_120=(struct sType*)come_increment_ref_count(((struct sType*)(right_value239=sType_clone(left_value_119->type))));
    if(right_value239 && right_value239 != __result_obj__) { come_call_finalizer(sType_finalize,right_value239, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(_if_conditional185=left_type_120->mPointerNum==0,    _if_conditional185) {
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_119));
    }
    else {
        if(_if_conditional186=left_type_120->mPointerNum>0&&left_type_120->mHeap==(_Bool)0,        _if_conditional186) {
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_119));
        }
        else {
            if(_if_conditional187=left_type_120->mPointerNum>0,            _if_conditional187) {
                come_value_121=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value240=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 1245))));
                if(right_value240 && right_value240 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value240, (void*)0, (void*)0, 0, 1, 0, 0); }
                multiple_assgin_var3=((struct tuple2$2sTypephcharph*)(right_value241=clone_object(left_type_120,left_value_119->c_value,info)));
                result_type_122=(struct sType*)come_increment_ref_count(multiple_assgin_var3->v1);
                c_value_123=(char*)come_increment_ref_count(multiple_assgin_var3->v2);
                if(right_value241 && right_value241 != __result_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,right_value241, (void*)0, (void*)0, 0, 1, 0, 0); }
                __dec_obj103=come_value_121->c_value;
                come_value_121->c_value=(char*)come_increment_ref_count(c_value_123);
                if(__dec_obj103) { __dec_obj103 = come_decrement_ref_count(__dec_obj103, (void*)0, (void*)0, 0,0,0); }
                __dec_obj104=come_value_121->type;
                come_value_121->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value242=sType_clone(left_type_120))));
                if(__dec_obj104) { come_call_finalizer(sType_finalize,__dec_obj104, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(right_value242 && right_value242 != __result_obj__) { come_call_finalizer(sType_finalize,right_value242, (void*)0, (void*)0, 0, 1, 0, 0); }
                come_value_121->type->mHeap=(_Bool)1;
                come_value_121->var=((void*)0);
                __dec_obj105=come_value_121->c_value;
                come_value_121->c_value=(char*)come_increment_ref_count(((char*)(right_value243=append_object_to_right_values(come_value_121->c_value,(struct sType*)come_increment_ref_count(left_type_120),info))));
                if(__dec_obj105) { __dec_obj105 = come_decrement_ref_count(__dec_obj105, (void*)0, (void*)0, 0,0,0); }
                if(right_value243 && right_value243 != __result_obj__) { right_value243 = come_decrement_ref_count(right_value243, (void*)0, (void*)0, 1, 0, 0); }
                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_121));
                if(come_value_121) { come_call_finalizer(CVALUE_finalize,come_value_121, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(result_type_122) { come_call_finalizer(sType_finalize,result_type_122, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(c_value_123) { c_value_123 = come_decrement_ref_count(c_value_123, (void*)0, (void*)0, 0, 0, 0); }
            }
        }
    }
    __result188__ = (_Bool)1;
    if(left_value_119) { come_call_finalizer(CVALUE_finalize,left_value_119, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(left_type_120) { come_call_finalizer(sType_finalize,left_type_120, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result188__;
    if(left_value_119) { come_call_finalizer(CVALUE_finalize,left_value_119, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(left_type_120) { come_call_finalizer(sType_finalize,left_type_120, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sDummyHeapNode* sDummyHeapNode_initialize(struct sDummyHeapNode* self, struct sNode* node, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value244;
struct sNode* __dec_obj106;
void* right_value245;
char* __dec_obj107;
struct sDummyHeapNode* __result189__;
memset(&__result_obj__, 0, sizeof(void*));
    __dec_obj106=self->node;
    self->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value244=sNode_clone(node))));
    if(__dec_obj106) { __dec_obj106 = come_decrement_ref_count(__dec_obj106, ((struct sNode*)__dec_obj106)->finalize, ((struct sNode*)__dec_obj106)->_protocol_obj, 0,0,0); }
    if(right_value244 && right_value244 != __result_obj__) { right_value244 = come_decrement_ref_count(right_value244, ((struct sNode*)right_value244)->finalize, ((struct sNode*)right_value244)->_protocol_obj, 1, 0, 0); } 
    self->sline=info->sline;
    __dec_obj107=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value245=__builtin_string(info->sname))));
    if(__dec_obj107) { __dec_obj107 = come_decrement_ref_count(__dec_obj107, (void*)0, (void*)0, 0,0,0); }
    if(right_value245 && right_value245 != __result_obj__) { right_value245 = come_decrement_ref_count(right_value245, (void*)0, (void*)0, 1, 0, 0); }
    __result189__ = __result_obj__ = self;
    if(self) { come_call_finalizer(sDummyHeapNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(node) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
    return __result189__;
    if(self) { come_call_finalizer(sDummyHeapNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(node) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
}

int sDummyHeapNode_sline(struct sDummyHeapNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
int __result190__;
memset(&__result_obj__, 0, sizeof(void*));
    __result190__ = self->sline;
    return __result190__;
}

char* sDummyHeapNode_sname(struct sDummyHeapNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value246;
char* __result191__;
memset(&__result_obj__, 0, sizeof(void*));
    __result191__ = __result_obj__ = ((char*)(right_value246=__builtin_string(self->sname)));
    return __result191__;
}

_Bool sDummyHeapNode_terminated(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __result192__;
memset(&__result_obj__, 0, sizeof(void*));
    __result192__ = (_Bool)0;
    return __result192__;
}

char* sDummyHeapNode_kind(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value247;
char* __result193__;
memset(&__result_obj__, 0, sizeof(void*));
    __result193__ = __result_obj__ = ((char*)(right_value247=__builtin_string("sDummyHeapNode")));
    return __result193__;
}

_Bool sDummyHeapNode_compile(struct sDummyHeapNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
struct sNode* node_124;
_Bool _if_conditional190;
_Bool __result194__;
void* right_value248;
struct CVALUE* come_value_125;
_Bool __result195__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&node_124, 0, sizeof(struct sNode*));
memset(&come_value_125, 0, sizeof(struct CVALUE*));
    node_124=self->node;
    if(_if_conditional190=!node_compile(node_124,info),    _if_conditional190) {
        __result194__ = (_Bool)0;
        return __result194__;
    }
    come_value_125=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value248=get_value_from_stack(-1,info))));
    if(right_value248 && right_value248 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value248, (void*)0, (void*)0, 0, 1, 0, 0); }
    dec_stack_ptr(1,info);
    come_value_125->type->mHeap=(_Bool)1;
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_125));
    __result195__ = (_Bool)1;
    if(come_value_125) { come_call_finalizer(CVALUE_finalize,come_value_125, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result195__;
    if(come_value_125) { come_call_finalizer(CVALUE_finalize,come_value_125, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sGCIncNode* sGCIncNode_initialize(struct sGCIncNode* self, struct sNode* node, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value249;
struct sNode* __dec_obj108;
void* right_value250;
char* __dec_obj109;
struct sGCIncNode* __result196__;
memset(&__result_obj__, 0, sizeof(void*));
    __dec_obj108=self->node;
    self->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value249=sNode_clone(node))));
    if(__dec_obj108) { __dec_obj108 = come_decrement_ref_count(__dec_obj108, ((struct sNode*)__dec_obj108)->finalize, ((struct sNode*)__dec_obj108)->_protocol_obj, 0,0,0); }
    if(right_value249 && right_value249 != __result_obj__) { right_value249 = come_decrement_ref_count(right_value249, ((struct sNode*)right_value249)->finalize, ((struct sNode*)right_value249)->_protocol_obj, 1, 0, 0); } 
    self->sline=info->sline;
    __dec_obj109=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value250=__builtin_string(info->sname))));
    if(__dec_obj109) { __dec_obj109 = come_decrement_ref_count(__dec_obj109, (void*)0, (void*)0, 0,0,0); }
    if(right_value250 && right_value250 != __result_obj__) { right_value250 = come_decrement_ref_count(right_value250, (void*)0, (void*)0, 1, 0, 0); }
    __result196__ = __result_obj__ = self;
    if(self) { come_call_finalizer(sGCIncNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(node) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
    return __result196__;
    if(self) { come_call_finalizer(sGCIncNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(node) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
}

int sGCIncNode_sline(struct sGCIncNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
int __result197__;
memset(&__result_obj__, 0, sizeof(void*));
    __result197__ = self->sline;
    return __result197__;
}

char* sGCIncNode_sname(struct sGCIncNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value251;
char* __result198__;
memset(&__result_obj__, 0, sizeof(void*));
    __result198__ = __result_obj__ = ((char*)(right_value251=__builtin_string(self->sname)));
    return __result198__;
}

_Bool sGCIncNode_terminated(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __result199__;
memset(&__result_obj__, 0, sizeof(void*));
    __result199__ = (_Bool)0;
    return __result199__;
}

char* sGCIncNode_kind(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value252;
char* __result200__;
memset(&__result_obj__, 0, sizeof(void*));
    __result200__ = __result_obj__ = ((char*)(right_value252=__builtin_string("sGCIncNode")));
    return __result200__;
}

_Bool sGCIncNode_compile(struct sGCIncNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
struct sNode* node_126;
_Bool _if_conditional193;
_Bool __result201__;
void* right_value253;
struct CVALUE* come_value_127;
struct sType* type_128;
_Bool _if_conditional194;
void* right_value254;
char* type_name_129;
void* right_value255;
char* __dec_obj110;
_Bool __result202__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&node_126, 0, sizeof(struct sNode*));
memset(&come_value_127, 0, sizeof(struct CVALUE*));
memset(&type_128, 0, sizeof(struct sType*));
memset(&type_name_129, 0, sizeof(char*));
    node_126=self->node;
    if(_if_conditional193=!node_compile(node_126,info),    _if_conditional193) {
        __result201__ = (_Bool)0;
        return __result201__;
    }
    come_value_127=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value253=get_value_from_stack(-1,info))));
    if(right_value253 && right_value253 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value253, (void*)0, (void*)0, 0, 1, 0, 0); }
    dec_stack_ptr(1,info);
    type_128=come_value_127->type;
    if(_if_conditional194=come_value_127->type->mHeap,    _if_conditional194) {
        type_name_129=(char*)come_increment_ref_count(optional$2charphbool_expect(((struct optional$2charphbool*)(right_value254=make_type_name_string(type_128,(_Bool)0,(_Bool)0,(_Bool)0,info)))));
        if(right_value254 && right_value254 != __result_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value254, (void*)0, (void*)0, 0, 1, 0, 0); }
        __dec_obj110=come_value_127->c_value;
        come_value_127->c_value=(char*)come_increment_ref_count(((char*)(right_value255=increment_ref_count_object(come_value_127->type,come_value_127->c_value,info))));
        if(__dec_obj110) { __dec_obj110 = come_decrement_ref_count(__dec_obj110, (void*)0, (void*)0, 0,0,0); }
        if(right_value255 && right_value255 != __result_obj__) { right_value255 = come_decrement_ref_count(right_value255, (void*)0, (void*)0, 1, 0, 0); }
        if(type_name_129) { type_name_129 = come_decrement_ref_count(type_name_129, (void*)0, (void*)0, 0, 0, 0); }
    }
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_127));
    __result202__ = (_Bool)1;
    if(come_value_127) { come_call_finalizer(CVALUE_finalize,come_value_127, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result202__;
    if(come_value_127) { come_call_finalizer(CVALUE_finalize,come_value_127, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sGCDecNode* sGCDecNode_initialize(struct sGCDecNode* self, struct sNode* node, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value256;
struct sNode* __dec_obj111;
void* right_value257;
char* __dec_obj112;
struct sGCDecNode* __result203__;
memset(&__result_obj__, 0, sizeof(void*));
    __dec_obj111=self->node;
    self->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value256=sNode_clone(node))));
    if(__dec_obj111) { __dec_obj111 = come_decrement_ref_count(__dec_obj111, ((struct sNode*)__dec_obj111)->finalize, ((struct sNode*)__dec_obj111)->_protocol_obj, 0,0,0); }
    if(right_value256 && right_value256 != __result_obj__) { right_value256 = come_decrement_ref_count(right_value256, ((struct sNode*)right_value256)->finalize, ((struct sNode*)right_value256)->_protocol_obj, 1, 0, 0); } 
    self->sline=info->sline;
    __dec_obj112=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value257=__builtin_string(info->sname))));
    if(__dec_obj112) { __dec_obj112 = come_decrement_ref_count(__dec_obj112, (void*)0, (void*)0, 0,0,0); }
    if(right_value257 && right_value257 != __result_obj__) { right_value257 = come_decrement_ref_count(right_value257, (void*)0, (void*)0, 1, 0, 0); }
    __result203__ = __result_obj__ = self;
    if(self) { come_call_finalizer(sGCDecNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(node) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
    return __result203__;
    if(self) { come_call_finalizer(sGCDecNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(node) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
}

int sGCDecNode_sline(struct sGCDecNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
int __result204__;
memset(&__result_obj__, 0, sizeof(void*));
    __result204__ = self->sline;
    return __result204__;
}

char* sGCDecNode_sname(struct sGCDecNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value258;
char* __result205__;
memset(&__result_obj__, 0, sizeof(void*));
    __result205__ = __result_obj__ = ((char*)(right_value258=__builtin_string(self->sname)));
    return __result205__;
}

_Bool sGCDecNode_terminated(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __result206__;
memset(&__result_obj__, 0, sizeof(void*));
    __result206__ = (_Bool)0;
    return __result206__;
}

char* sGCDecNode_kind(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value259;
char* __result207__;
memset(&__result_obj__, 0, sizeof(void*));
    __result207__ = __result_obj__ = ((char*)(right_value259=__builtin_string("sGCDecNode")));
    return __result207__;
}

_Bool sGCDecNode_compile(struct sGCDecNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
struct sNode* node_130;
_Bool _if_conditional197;
_Bool __result208__;
void* right_value260;
struct CVALUE* come_value_131;
struct sType* type_132;
_Bool __result209__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&node_130, 0, sizeof(struct sNode*));
memset(&come_value_131, 0, sizeof(struct CVALUE*));
memset(&type_132, 0, sizeof(struct sType*));
    node_130=self->node;
    if(_if_conditional197=!node_compile(node_130,info),    _if_conditional197) {
        __result208__ = (_Bool)0;
        return __result208__;
    }
    come_value_131=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value260=get_value_from_stack(-1,info))));
    if(right_value260 && right_value260 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value260, (void*)0, (void*)0, 0, 1, 0, 0); }
    dec_stack_ptr(1,info);
    type_132=come_value_131->type;
    decrement_ref_count_object(type_132,come_value_131->c_value,info,(_Bool)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_131));
    __result209__ = (_Bool)1;
    if(come_value_131) { come_call_finalizer(CVALUE_finalize,come_value_131, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result209__;
    if(come_value_131) { come_call_finalizer(CVALUE_finalize,come_value_131, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sIsHeap* sIsHeap_initialize(struct sIsHeap* self, struct sType* type, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value261;
struct sType* __dec_obj113;
void* right_value262;
char* __dec_obj114;
struct sIsHeap* __result210__;
memset(&__result_obj__, 0, sizeof(void*));
    __dec_obj113=self->type;
    self->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value261=sType_clone(type))));
    if(__dec_obj113) { come_call_finalizer(sType_finalize,__dec_obj113, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value261 && right_value261 != __result_obj__) { come_call_finalizer(sType_finalize,right_value261, (void*)0, (void*)0, 0, 1, 0, 0); }
    self->sline=info->sline;
    __dec_obj114=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value262=__builtin_string(info->sname))));
    if(__dec_obj114) { __dec_obj114 = come_decrement_ref_count(__dec_obj114, (void*)0, (void*)0, 0,0,0); }
    if(right_value262 && right_value262 != __result_obj__) { right_value262 = come_decrement_ref_count(right_value262, (void*)0, (void*)0, 1, 0, 0); }
    __result210__ = __result_obj__ = self;
    if(self) { come_call_finalizer(sIsHeap_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(type) { come_call_finalizer(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result210__;
    if(self) { come_call_finalizer(sIsHeap_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(type) { come_call_finalizer(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0); }
}

int sIsHeap_sline(struct sIsHeap* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
int __result211__;
memset(&__result_obj__, 0, sizeof(void*));
    __result211__ = self->sline;
    return __result211__;
}

char* sIsHeap_sname(struct sIsHeap* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value263;
char* __result212__;
memset(&__result_obj__, 0, sizeof(void*));
    __result212__ = __result_obj__ = ((char*)(right_value263=__builtin_string(self->sname)));
    return __result212__;
}

_Bool sIsHeap_terminated(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __result213__;
memset(&__result_obj__, 0, sizeof(void*));
    __result213__ = (_Bool)0;
    return __result213__;
}

char* sIsHeap_kind(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value264;
char* __result214__;
memset(&__result_obj__, 0, sizeof(void*));
    __result214__ = __result_obj__ = ((char*)(right_value264=__builtin_string("sIsHeap")));
    return __result214__;
}

_Bool sIsHeap_compile(struct sIsHeap* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
struct sType* node_133;
_Bool _if_conditional200;
void* right_value265;
struct CVALUE* come_value_134;
void* right_value266;
char* __dec_obj115;
void* right_value267;
void* right_value268;
struct sType* __dec_obj116;
void* right_value269;
struct CVALUE* come_value_135;
void* right_value270;
char* __dec_obj117;
void* right_value271;
void* right_value272;
struct sType* __dec_obj118;
_Bool __result215__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&node_133, 0, sizeof(struct sType*));
memset(&come_value_134, 0, sizeof(struct CVALUE*));
memset(&come_value_135, 0, sizeof(struct CVALUE*));
    node_133=self->type;
    if(_if_conditional200=self->type->mHeap,    _if_conditional200) {
        come_value_134=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value265=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 1471))));
        if(right_value265 && right_value265 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value265, (void*)0, (void*)0, 0, 1, 0, 0); }
        __dec_obj115=come_value_134->c_value;
        come_value_134->c_value=(char*)come_increment_ref_count(((char*)(right_value266=xsprintf("1"))));
        if(__dec_obj115) { __dec_obj115 = come_decrement_ref_count(__dec_obj115, (void*)0, (void*)0, 0,0,0); }
        if(right_value266 && right_value266 != __result_obj__) { right_value266 = come_decrement_ref_count(right_value266, (void*)0, (void*)0, 1, 0, 0); }
        __dec_obj116=come_value_134->type;
        come_value_134->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value268=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value267=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 1474)))),"int",(_Bool)0,info))));
        if(__dec_obj116) { come_call_finalizer(sType_finalize,__dec_obj116, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value267 && right_value267 != __result_obj__) { come_call_finalizer(sType_finalize,right_value267, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value268 && right_value268 != __result_obj__) { come_call_finalizer(sType_finalize,right_value268, (void*)0, (void*)0, 0, 1, 0, 0); }
        come_value_134->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_134));
        add_come_last_code(info,"%s;\n",come_value_134->c_value);
        if(come_value_134) { come_call_finalizer(CVALUE_finalize,come_value_134, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    else {
        come_value_135=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value269=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 1482))));
        if(right_value269 && right_value269 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value269, (void*)0, (void*)0, 0, 1, 0, 0); }
        __dec_obj117=come_value_135->c_value;
        come_value_135->c_value=(char*)come_increment_ref_count(((char*)(right_value270=xsprintf("0"))));
        if(__dec_obj117) { __dec_obj117 = come_decrement_ref_count(__dec_obj117, (void*)0, (void*)0, 0,0,0); }
        if(right_value270 && right_value270 != __result_obj__) { right_value270 = come_decrement_ref_count(right_value270, (void*)0, (void*)0, 1, 0, 0); }
        __dec_obj118=come_value_135->type;
        come_value_135->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value272=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value271=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 1485)))),"int",(_Bool)0,info))));
        if(__dec_obj118) { come_call_finalizer(sType_finalize,__dec_obj118, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value271 && right_value271 != __result_obj__) { come_call_finalizer(sType_finalize,right_value271, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value272 && right_value272 != __result_obj__) { come_call_finalizer(sType_finalize,right_value272, (void*)0, (void*)0, 0, 1, 0, 0); }
        come_value_135->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_135));
        add_come_last_code(info,"%s;\n",come_value_135->c_value);
        if(come_value_135) { come_call_finalizer(CVALUE_finalize,come_value_135, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __result215__ = (_Bool)1;
    return __result215__;
}

struct sNode* string_node_v21(char* buf, char* head, int head_sline, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional201;
void* right_value273;
struct tuple3$3sTypephcharphbool* multiple_assgin_var4;
struct sType* type_137;
char* name_138;
_Bool err_139;
_Bool _if_conditional206;
void* right_value274;
void* right_value275;
struct sNode* __result219__;
_Bool _if_conditional207;
_Bool _if_conditional208;
void* right_value276;
struct sType* inf_type_140;
void* right_value277;
struct sNode* node_141;
void* right_value278;
void* right_value279;
void* right_value280;
struct sNode* _inf_value4;
struct sImplementsNode* _inf_obj_value4;
void* right_value285;
void* right_value286;
void* right_value287;
struct sNode* __result225__;
void* right_value288;
void* right_value289;
struct sNode* _inf_value5;
struct sNewNode* _inf_obj_value5;
void* right_value293;
struct sNode* obj_145;
void* right_value294;
char* fun_name_146;
void* right_value295;
void* right_value296;
void* right_value297;
void* right_value298;
struct sNode* __result228__;
void* right_value299;
void* right_value300;
struct sNode* _inf_value6;
struct sNewNode* _inf_obj_value6;
void* right_value304;
void* right_value305;
void* right_value306;
struct sNode* __result231__;
_Bool _if_conditional231;
void* right_value307;
void* right_value308;
struct sNode* _inf_value7;
struct sTrueNode* _inf_obj_value7;
void* right_value311;
void* right_value312;
void* right_value313;
struct sNode* __result234__;
_Bool _if_conditional236;
void* right_value314;
void* right_value315;
struct sNode* _inf_value8;
struct sFalseNode* _inf_obj_value8;
void* right_value318;
void* right_value319;
void* right_value320;
struct sNode* __result237__;
_Bool _if_conditional241;
void* right_value321;
struct sNode* node_150;
void* right_value322;
void* right_value323;
struct sNode* _inf_value9;
struct sDeleteNode* _inf_obj_value9;
void* right_value327;
void* right_value328;
void* right_value329;
struct sNode* __result240__;
_Bool _if_conditional248;
void* right_value330;
struct sNode* node_152;
void* right_value331;
void* right_value332;
struct sNode* _inf_value10;
struct sForceDeleteNode* _inf_obj_value10;
void* right_value336;
void* right_value337;
void* right_value338;
struct sNode* __result243__;
_Bool _if_conditional255;
void* right_value339;
struct sNode* node_154;
void* right_value340;
void* right_value341;
struct sNode* _inf_value11;
struct sBorrowNode* _inf_obj_value11;
void* right_value345;
void* right_value346;
void* right_value347;
struct sNode* __result246__;
_Bool _if_conditional262;
void* right_value348;
struct sNode* node_156;
void* right_value349;
void* right_value350;
struct sNode* _inf_value12;
struct sDelegateNode* _inf_obj_value12;
void* right_value354;
void* right_value355;
void* right_value356;
struct sNode* __result249__;
_Bool _if_conditional269;
void* right_value357;
struct sNode* node_158;
void* right_value358;
void* right_value359;
struct sNode* _inf_value13;
struct sShareNode* _inf_obj_value13;
void* right_value363;
void* right_value364;
void* right_value365;
struct sNode* __result252__;
_Bool _if_conditional276;
void* right_value366;
struct sNode* node_160;
void* right_value367;
void* right_value368;
struct sNode* _inf_value14;
struct sCloneNode* _inf_obj_value14;
void* right_value372;
void* right_value373;
void* right_value374;
struct sNode* __result255__;
_Bool _if_conditional283;
void* right_value375;
struct sNode* node_162;
void* right_value376;
void* right_value377;
struct sNode* _inf_value15;
struct sDupeNode* _inf_obj_value15;
void* right_value381;
void* right_value382;
void* right_value383;
struct sNode* __result258__;
_Bool _if_conditional290;
void* right_value384;
struct sNode* node_164;
void* right_value385;
void* right_value386;
struct sNode* _inf_value16;
struct sDummyHeapNode* _inf_obj_value16;
void* right_value390;
void* right_value391;
void* right_value392;
struct sNode* __result261__;
_Bool _if_conditional297;
void* right_value393;
struct sNode* node_166;
void* right_value394;
void* right_value395;
void* right_value396;
struct sNode* _inf_value17;
struct sGCIncNode* _inf_obj_value17;
void* right_value400;
void* right_value401;
void* right_value402;
struct sNode* __result264__;
_Bool _if_conditional304;
void* right_value403;
struct sNode* node_168;
void* right_value404;
void* right_value405;
void* right_value406;
struct sNode* _inf_value18;
struct sGCDecNode* _inf_obj_value18;
void* right_value410;
void* right_value411;
void* right_value412;
struct sNode* __result267__;
_Bool _if_conditional311;
void* right_value413;
struct tuple3$3sTypephcharphbool* multiple_assgin_var5;
struct sType* param_type_170;
char* param_name_171;
_Bool err_172;
_Bool _if_conditional312;
void* right_value414;
void* right_value415;
struct sNode* __result268__;
void* right_value416;
struct sType* type2_173;
void* right_value417;
void* right_value418;
void* right_value419;
struct sNode* _inf_value19;
struct sIsHeap* _inf_obj_value19;
void* right_value423;
void* right_value424;
void* right_value425;
struct sNode* __result271__;
_Bool _if_conditional319;
_Bool _if_conditional320;
void* right_value426;
void* right_value427;
struct sNode* _inf_value20;
struct sNullNodeX* _inf_obj_value20;
void* right_value430;
void* right_value431;
void* right_value432;
struct sNode* __result274__;
_Bool _if_conditional325;
_Bool _if_conditional326;
void* right_value433;
struct sNode* node_176;
void* right_value434;
void* right_value435;
struct sNode* __result275__;
void* right_value436;
void* right_value437;
struct sNode* _inf_value21;
struct sNullNodeX* _inf_obj_value21;
void* right_value440;
void* right_value441;
void* right_value442;
struct sNode* __result278__;
_Bool _if_conditional331;
void* right_value443;
void* right_value444;
struct sNode* _inf_value22;
struct sNullNodeX* _inf_obj_value22;
void* right_value447;
void* right_value448;
void* right_value449;
struct sNode* __result281__;
_Bool _if_conditional336;
void* right_value450;
void* right_value451;
struct sNode* _inf_value23;
struct sNullNodeX* _inf_obj_value23;
void* right_value454;
void* right_value455;
void* right_value456;
struct sNode* __result284__;
_Bool _if_conditional341;
void* right_value457;
void* right_value458;
struct sNode* _inf_value24;
struct sNullNodeX* _inf_obj_value24;
void* right_value461;
void* right_value462;
void* right_value463;
struct sNode* __result287__;
_Bool _if_conditional346;
void* right_value464;
void* right_value465;
struct sNode* _inf_value25;
struct sNullNodeX* _inf_obj_value25;
void* right_value468;
void* right_value469;
void* right_value470;
struct sNode* __result290__;
void* right_value471;
void* right_value472;
struct sNode* __result291__;
_Bool _if_conditional351;
void* right_value473;
_Bool is_type_name_flag_182;
char* p_183;
int sline_184;
_Bool _if_conditional352;
void* right_value474;
char* word_185;
_Bool _if_conditional353;
_Bool _if_conditional354;
void* right_value475;
struct tuple3$3sTypephcharphbool* multiple_assgin_var6;
struct sType* type_186;
char* name_187;
_Bool err_188;
_Bool _if_conditional355;
void* right_value476;
void* right_value477;
struct sNode* __result292__;
void* right_value478;
void* right_value479;
void* right_value480;
struct sNode* _inf_value26;
struct sSizeOfNode* _inf_obj_value26;
void* right_value484;
void* right_value485;
void* right_value486;
struct sNode* __result295__;
void* right_value487;
struct sNode* exp_190;
void* right_value488;
void* right_value489;
void* right_value490;
struct sNode* _inf_value27;
struct sSizeOfExpNode* _inf_obj_value27;
void* right_value494;
void* right_value495;
void* right_value496;
struct sNode* __result298__;
_Bool _if_conditional368;
void* right_value497;
_Bool is_type_name_flag_192;
char* p_193;
int sline_194;
_Bool _if_conditional369;
void* right_value498;
char* word_195;
_Bool _if_conditional370;
_Bool _if_conditional371;
void* right_value499;
struct tuple3$3sTypephcharphbool* multiple_assgin_var7;
struct sType* type_196;
char* name_197;
_Bool err_198;
_Bool _if_conditional372;
void* right_value500;
void* right_value501;
struct sNode* __result299__;
void* right_value502;
void* right_value503;
void* right_value504;
struct sNode* _inf_value28;
struct sAlignOfNode* _inf_obj_value28;
void* right_value508;
void* right_value509;
void* right_value510;
struct sNode* __result302__;
void* right_value511;
struct sNode* exp_200;
void* right_value512;
void* right_value513;
void* right_value514;
struct sNode* _inf_value29;
struct sAlignOfExpNode* _inf_obj_value29;
void* right_value518;
void* right_value519;
void* right_value520;
struct sNode* __result305__;
_Bool _if_conditional385;
void* right_value521;
_Bool is_type_name_flag_202;
char* p_203;
int sline_204;
_Bool _if_conditional386;
void* right_value522;
char* word_205;
_Bool _if_conditional387;
_Bool _if_conditional388;
void* right_value523;
struct tuple3$3sTypephcharphbool* multiple_assgin_var8;
struct sType* type_206;
char* name_207;
_Bool err_208;
_Bool _if_conditional389;
void* right_value524;
void* right_value525;
struct sNode* __result306__;
void* right_value526;
void* right_value527;
void* right_value528;
struct sNode* _inf_value30;
struct sAlignOfNode2* _inf_obj_value30;
void* right_value532;
void* right_value533;
void* right_value534;
struct sNode* __result309__;
void* right_value535;
struct sNode* exp_210;
void* right_value536;
void* right_value537;
void* right_value538;
struct sNode* _inf_value31;
struct sAlignOfExpNode2* _inf_obj_value31;
void* right_value542;
void* right_value543;
void* right_value544;
struct sNode* __result312__;
_Bool _if_conditional402;
void* right_value545;
_Bool is_type_name_flag_212;
char* p_213;
int sline_214;
_Bool _if_conditional403;
void* right_value546;
char* word_215;
_Bool _if_conditional404;
_Bool _if_conditional405;
void* right_value547;
struct tuple3$3sTypephcharphbool* multiple_assgin_var9;
struct sType* type_216;
char* name_217;
_Bool err_218;
_Bool _if_conditional406;
void* right_value548;
void* right_value549;
struct sNode* __result313__;
void* right_value550;
void* right_value551;
void* right_value552;
struct sNode* _inf_value32;
struct sAlignAsNode* _inf_obj_value32;
void* right_value556;
void* right_value557;
void* right_value558;
struct sNode* __result316__;
void* right_value559;
struct sNode* exp_220;
void* right_value560;
void* right_value561;
void* right_value562;
struct sNode* _inf_value33;
struct sAlignAsExpNode* _inf_obj_value33;
void* right_value566;
void* right_value567;
void* right_value568;
struct sNode* __result319__;
void* right_value569;
struct __current_stack1__ __current_stack1__;
void* right_value572;
struct sNode* result_222;
void* right_value573;
void* right_value574;
struct sNode* __result322__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&type_137, 0, sizeof(struct sType*));
memset(&name_138, 0, sizeof(char*));
memset(&err_139, 0, sizeof(_Bool));
memset(&type_137, 0, sizeof(struct sType*));
memset(&name_138, 0, sizeof(char*));
memset(&err_139, 0, sizeof(_Bool));
memset(&inf_type_140, 0, sizeof(struct sType*));
memset(&node_141, 0, sizeof(struct sNode*));
memset(&obj_145, 0, sizeof(struct sNode*));
memset(&fun_name_146, 0, sizeof(char*));
memset(&node_150, 0, sizeof(struct sNode*));
memset(&node_152, 0, sizeof(struct sNode*));
memset(&node_154, 0, sizeof(struct sNode*));
memset(&node_156, 0, sizeof(struct sNode*));
memset(&node_158, 0, sizeof(struct sNode*));
memset(&node_160, 0, sizeof(struct sNode*));
memset(&node_162, 0, sizeof(struct sNode*));
memset(&node_164, 0, sizeof(struct sNode*));
memset(&node_166, 0, sizeof(struct sNode*));
memset(&node_168, 0, sizeof(struct sNode*));
memset(&param_type_170, 0, sizeof(struct sType*));
memset(&param_name_171, 0, sizeof(char*));
memset(&err_172, 0, sizeof(_Bool));
memset(&param_type_170, 0, sizeof(struct sType*));
memset(&param_name_171, 0, sizeof(char*));
memset(&err_172, 0, sizeof(_Bool));
memset(&type2_173, 0, sizeof(struct sType*));
memset(&node_176, 0, sizeof(struct sNode*));
memset(&is_type_name_flag_182, 0, sizeof(_Bool));
memset(&p_183, 0, sizeof(char*));
memset(&sline_184, 0, sizeof(int));
memset(&word_185, 0, sizeof(char*));
memset(&type_186, 0, sizeof(struct sType*));
memset(&name_187, 0, sizeof(char*));
memset(&err_188, 0, sizeof(_Bool));
memset(&type_186, 0, sizeof(struct sType*));
memset(&name_187, 0, sizeof(char*));
memset(&err_188, 0, sizeof(_Bool));
memset(&exp_190, 0, sizeof(struct sNode*));
memset(&is_type_name_flag_192, 0, sizeof(_Bool));
memset(&p_193, 0, sizeof(char*));
memset(&sline_194, 0, sizeof(int));
memset(&word_195, 0, sizeof(char*));
memset(&type_196, 0, sizeof(struct sType*));
memset(&name_197, 0, sizeof(char*));
memset(&err_198, 0, sizeof(_Bool));
memset(&type_196, 0, sizeof(struct sType*));
memset(&name_197, 0, sizeof(char*));
memset(&err_198, 0, sizeof(_Bool));
memset(&exp_200, 0, sizeof(struct sNode*));
memset(&is_type_name_flag_202, 0, sizeof(_Bool));
memset(&p_203, 0, sizeof(char*));
memset(&sline_204, 0, sizeof(int));
memset(&word_205, 0, sizeof(char*));
memset(&type_206, 0, sizeof(struct sType*));
memset(&name_207, 0, sizeof(char*));
memset(&err_208, 0, sizeof(_Bool));
memset(&type_206, 0, sizeof(struct sType*));
memset(&name_207, 0, sizeof(char*));
memset(&err_208, 0, sizeof(_Bool));
memset(&exp_210, 0, sizeof(struct sNode*));
memset(&is_type_name_flag_212, 0, sizeof(_Bool));
memset(&p_213, 0, sizeof(char*));
memset(&sline_214, 0, sizeof(int));
memset(&word_215, 0, sizeof(char*));
memset(&type_216, 0, sizeof(struct sType*));
memset(&name_217, 0, sizeof(char*));
memset(&err_218, 0, sizeof(_Bool));
memset(&type_216, 0, sizeof(struct sType*));
memset(&name_217, 0, sizeof(char*));
memset(&err_218, 0, sizeof(_Bool));
memset(&exp_220, 0, sizeof(struct sNode*));
memset(&__current_stack1__, 0, sizeof(struct __current_stack1__));
memset(&result_222, 0, sizeof(struct sNode*));
    if(_if_conditional201=charp_operator_equals(buf,"new"),    _if_conditional201) {
        multiple_assgin_var4=optional$2tuple3$3sTypephcharphboolphbool_value(((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value273=parse_type(info,(_Bool)0,(_Bool)1))));
        type_137=(struct sType*)come_increment_ref_count(multiple_assgin_var4->v1);
        name_138=(char*)come_increment_ref_count(multiple_assgin_var4->v2);
        err_139=multiple_assgin_var4->v3;
        if(right_value273 && right_value273 != __result_obj__) { come_call_finalizer(optional$2tuple3$3sTypephcharphboolphboolp_finalize,right_value273, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(_if_conditional206=!err_139,        _if_conditional206) {
            err_msg(info,"parse_type failed");
            __result219__ = __result_obj__ = ((struct optional$2voidpbool*)(right_value275=optional$2voidpbool_initialize(((struct optional$2voidpbool*)(right_value274=(struct optional$2voidpbool*)come_calloc(1, sizeof(struct optional$2voidpbool)*(1), "21obj.c", 1502))),((void*)0),(_Bool)0)));
            if(type_137) { come_call_finalizer(sType_finalize,type_137, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(name_138) { name_138 = come_decrement_ref_count(name_138, (void*)0, (void*)0, 0, 0, 0); }
            if(right_value274 && right_value274 != __result_obj__) { right_value274 = come_decrement_ref_count(right_value274, (void*)0, (void*)0, 1, 0, 0); }
            return __result219__;
        }
        if(_if_conditional207=*info->p==40,        _if_conditional207) {
            if(_if_conditional208=type_137->mClass->mProtocol,            _if_conditional208) {
                info->p++;
                skip_spaces_and_lf(info);
                inf_type_140=(struct sType*)come_increment_ref_count(((struct sType*)(right_value276=sType_clone(type_137))));
                if(right_value276 && right_value276 != __result_obj__) { come_call_finalizer(sType_finalize,right_value276, (void*)0, (void*)0, 0, 1, 0, 0); }
                node_141=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value277=expression_v13(info))));
                if(right_value277 && right_value277 != __result_obj__) { right_value277 = come_decrement_ref_count(right_value277, ((struct sNode*)right_value277)->finalize, ((struct sNode*)right_value277)->_protocol_obj, 1, 0, 0); } 
                optional$2intbool_value(((struct optional$2intbool*)(right_value278=expected_next_character(41,info))));
                if(right_value278 && right_value278 != __result_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value278, (void*)0, (void*)0, 0, 1, 0, 0); }
                _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1516);
                _inf_obj_value4=come_increment_ref_count(((struct sImplementsNode*)(right_value280=sImplementsNode_initialize((struct sImplementsNode*)come_increment_ref_count(((struct sImplementsNode*)(right_value279=(struct sImplementsNode*)come_calloc(1, sizeof(struct sImplementsNode)*(1), "21obj.c", 1516)))),(struct sNode*)come_increment_ref_count(node_141),(struct sType*)come_increment_ref_count(inf_type_140),info))));
                _inf_value4->_protocol_obj=_inf_obj_value4;
                _inf_value4->finalize=(void*)sImplementsNode_finalize;
                _inf_value4->clone=(void*)sImplementsNode_clone;
                _inf_value4->compile=(void*)sImplementsNode_compile;
                _inf_value4->sline=(void*)sImplementsNode_sline;
                _inf_value4->sname=(void*)sImplementsNode_sname;
                _inf_value4->terminated=(void*)sImplementsNode_terminated;
                _inf_value4->kind=(void*)sImplementsNode_kind;
                __result225__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value287=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value286=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "21obj.c", 1516)))),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value285=_inf_value4))),(_Bool)1)));
                if(inf_type_140) { come_call_finalizer(sType_finalize,inf_type_140, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(node_141) { node_141 = come_decrement_ref_count(node_141, ((struct sNode*)node_141)->finalize, ((struct sNode*)node_141)->_protocol_obj, 0, 0, 0); } 
                if(type_137) { come_call_finalizer(sType_finalize,type_137, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(name_138) { name_138 = come_decrement_ref_count(name_138, (void*)0, (void*)0, 0, 0, 0); }
                if(right_value279 && right_value279 != __result_obj__) { come_call_finalizer(sImplementsNode_finalize,right_value279, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value280 && right_value280 != __result_obj__) { come_call_finalizer(sImplementsNode_finalize,right_value280, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value285 && right_value285 != __result_obj__) { right_value285 = come_decrement_ref_count(right_value285, ((struct sNode*)right_value285)->finalize, ((struct sNode*)right_value285)->_protocol_obj, 1, 0, 0); } 
                if(right_value286 && right_value286 != __result_obj__) { right_value286 = come_decrement_ref_count(right_value286, (void*)0, (void*)0, 1, 0, 0); }
                return __result225__;
                if(inf_type_140) { come_call_finalizer(sType_finalize,inf_type_140, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(node_141) { node_141 = come_decrement_ref_count(node_141, ((struct sNode*)node_141)->finalize, ((struct sNode*)node_141)->_protocol_obj, 0, 0, 0); } 
            }
            else {
                _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1519);
                _inf_obj_value5=come_increment_ref_count(((struct sNewNode*)(right_value289=sNewNode_initialize((struct sNewNode*)come_increment_ref_count(((struct sNewNode*)(right_value288=(struct sNewNode*)come_calloc(1, sizeof(struct sNewNode)*(1), "21obj.c", 1519)))),(struct sType*)come_increment_ref_count(type_137),info))));
                _inf_value5->_protocol_obj=_inf_obj_value5;
                _inf_value5->finalize=(void*)sNewNode_finalize;
                _inf_value5->clone=(void*)sNewNode_clone;
                _inf_value5->compile=(void*)sNewNode_compile;
                _inf_value5->sline=(void*)sNewNode_sline;
                _inf_value5->sname=(void*)sNewNode_sname;
                _inf_value5->terminated=(void*)sNewNode_terminated;
                _inf_value5->kind=(void*)sNewNode_kind;
                obj_145=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value293=_inf_value5)));
                if(right_value288 && right_value288 != __result_obj__) { come_call_finalizer(sNewNode_finalize,right_value288, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value289 && right_value289 != __result_obj__) { come_call_finalizer(sNewNode_finalize,right_value289, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value293 && right_value293 != __result_obj__) { right_value293 = come_decrement_ref_count(right_value293, ((struct sNode*)right_value293)->finalize, ((struct sNode*)right_value293)->_protocol_obj, 1, 0, 0); } 
                fun_name_146=(char*)come_increment_ref_count(((char*)(right_value294=__builtin_string("initialize"))));
                if(right_value294 && right_value294 != __result_obj__) { right_value294 = come_decrement_ref_count(right_value294, (void*)0, (void*)0, 1, 0, 0); }
                __result228__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value298=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value297=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "21obj.c", 1522)))),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value296=parse_method_call_v20((struct sNode*)come_increment_ref_count(((struct sNode*)(right_value295=sNode_clone(obj_145)))),(char*)come_increment_ref_count(fun_name_146),info)))),(_Bool)1)));
                if(obj_145) { obj_145 = come_decrement_ref_count(obj_145, ((struct sNode*)obj_145)->finalize, ((struct sNode*)obj_145)->_protocol_obj, 0, 0, 0); } 
                if(fun_name_146) { fun_name_146 = come_decrement_ref_count(fun_name_146, (void*)0, (void*)0, 0, 0, 0); }
                if(type_137) { come_call_finalizer(sType_finalize,type_137, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(name_138) { name_138 = come_decrement_ref_count(name_138, (void*)0, (void*)0, 0, 0, 0); }
                if(right_value295 && right_value295 != __result_obj__) { right_value295 = come_decrement_ref_count(right_value295, ((struct sNode*)right_value295)->finalize, ((struct sNode*)right_value295)->_protocol_obj, 1, 0, 0); } 
                if(right_value296 && right_value296 != __result_obj__) { right_value296 = come_decrement_ref_count(right_value296, ((struct sNode*)right_value296)->finalize, ((struct sNode*)right_value296)->_protocol_obj, 1, 0, 0); } 
                if(right_value297 && right_value297 != __result_obj__) { right_value297 = come_decrement_ref_count(right_value297, (void*)0, (void*)0, 1, 0, 0); }
                return __result228__;
                if(obj_145) { obj_145 = come_decrement_ref_count(obj_145, ((struct sNode*)obj_145)->finalize, ((struct sNode*)obj_145)->_protocol_obj, 0, 0, 0); } 
                if(fun_name_146) { fun_name_146 = come_decrement_ref_count(fun_name_146, (void*)0, (void*)0, 0, 0, 0); }
            }
        }
        else {
            _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1526);
            _inf_obj_value6=come_increment_ref_count(((struct sNewNode*)(right_value300=sNewNode_initialize((struct sNewNode*)come_increment_ref_count(((struct sNewNode*)(right_value299=(struct sNewNode*)come_calloc(1, sizeof(struct sNewNode)*(1), "21obj.c", 1526)))),(struct sType*)come_increment_ref_count(type_137),info))));
            _inf_value6->_protocol_obj=_inf_obj_value6;
            _inf_value6->finalize=(void*)sNewNode_finalize;
            _inf_value6->clone=(void*)sNewNode_clone;
            _inf_value6->compile=(void*)sNewNode_compile;
            _inf_value6->sline=(void*)sNewNode_sline;
            _inf_value6->sname=(void*)sNewNode_sname;
            _inf_value6->terminated=(void*)sNewNode_terminated;
            _inf_value6->kind=(void*)sNewNode_kind;
            __result231__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value306=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value305=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "21obj.c", 1526)))),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value304=_inf_value6))),(_Bool)1)));
            if(type_137) { come_call_finalizer(sType_finalize,type_137, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(name_138) { name_138 = come_decrement_ref_count(name_138, (void*)0, (void*)0, 0, 0, 0); }
            if(right_value299 && right_value299 != __result_obj__) { come_call_finalizer(sNewNode_finalize,right_value299, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value300 && right_value300 != __result_obj__) { come_call_finalizer(sNewNode_finalize,right_value300, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value304 && right_value304 != __result_obj__) { right_value304 = come_decrement_ref_count(right_value304, ((struct sNode*)right_value304)->finalize, ((struct sNode*)right_value304)->_protocol_obj, 1, 0, 0); } 
            if(right_value305 && right_value305 != __result_obj__) { right_value305 = come_decrement_ref_count(right_value305, (void*)0, (void*)0, 1, 0, 0); }
            return __result231__;
        }
        if(type_137) { come_call_finalizer(sType_finalize,type_137, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(name_138) { name_138 = come_decrement_ref_count(name_138, (void*)0, (void*)0, 0, 0, 0); }
    }
    else {
        if(_if_conditional231=charp_operator_equals(buf,"true"),        _if_conditional231) {
            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1530);
            _inf_obj_value7=come_increment_ref_count(((struct sTrueNode*)(right_value308=sTrueNode_initialize((struct sTrueNode*)come_increment_ref_count(((struct sTrueNode*)(right_value307=(struct sTrueNode*)come_calloc(1, sizeof(struct sTrueNode)*(1), "21obj.c", 1530)))),info))));
            _inf_value7->_protocol_obj=_inf_obj_value7;
            _inf_value7->finalize=(void*)sTrueNode_finalize;
            _inf_value7->clone=(void*)sTrueNode_clone;
            _inf_value7->compile=(void*)sTrueNode_compile;
            _inf_value7->sline=(void*)sTrueNode_sline;
            _inf_value7->sname=(void*)sTrueNode_sname;
            _inf_value7->terminated=(void*)sTrueNode_terminated;
            _inf_value7->kind=(void*)sTrueNode_kind;
            __result234__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value313=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value312=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "21obj.c", 1530)))),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value311=_inf_value7))),(_Bool)1)));
            if(right_value307 && right_value307 != __result_obj__) { come_call_finalizer(sTrueNode_finalize,right_value307, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value308 && right_value308 != __result_obj__) { come_call_finalizer(sTrueNode_finalize,right_value308, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value311 && right_value311 != __result_obj__) { right_value311 = come_decrement_ref_count(right_value311, ((struct sNode*)right_value311)->finalize, ((struct sNode*)right_value311)->_protocol_obj, 1, 0, 0); } 
            if(right_value312 && right_value312 != __result_obj__) { right_value312 = come_decrement_ref_count(right_value312, (void*)0, (void*)0, 1, 0, 0); }
            return __result234__;
        }
        else {
            if(_if_conditional236=charp_operator_equals(buf,"false"),            _if_conditional236) {
                _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1533);
                _inf_obj_value8=come_increment_ref_count(((struct sFalseNode*)(right_value315=sFalseNode_initialize((struct sFalseNode*)come_increment_ref_count(((struct sFalseNode*)(right_value314=(struct sFalseNode*)come_calloc(1, sizeof(struct sFalseNode)*(1), "21obj.c", 1533)))),info))));
                _inf_value8->_protocol_obj=_inf_obj_value8;
                _inf_value8->finalize=(void*)sFalseNode_finalize;
                _inf_value8->clone=(void*)sFalseNode_clone;
                _inf_value8->compile=(void*)sFalseNode_compile;
                _inf_value8->sline=(void*)sFalseNode_sline;
                _inf_value8->sname=(void*)sFalseNode_sname;
                _inf_value8->terminated=(void*)sFalseNode_terminated;
                _inf_value8->kind=(void*)sFalseNode_kind;
                __result237__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value320=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value319=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "21obj.c", 1533)))),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value318=_inf_value8))),(_Bool)1)));
                if(right_value314 && right_value314 != __result_obj__) { come_call_finalizer(sFalseNode_finalize,right_value314, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value315 && right_value315 != __result_obj__) { come_call_finalizer(sFalseNode_finalize,right_value315, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value318 && right_value318 != __result_obj__) { right_value318 = come_decrement_ref_count(right_value318, ((struct sNode*)right_value318)->finalize, ((struct sNode*)right_value318)->_protocol_obj, 1, 0, 0); } 
                if(right_value319 && right_value319 != __result_obj__) { right_value319 = come_decrement_ref_count(right_value319, (void*)0, (void*)0, 1, 0, 0); }
                return __result237__;
            }
            else {
                if(_if_conditional241=charp_operator_equals(buf,"delete"),                _if_conditional241) {
                    node_150=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value321=expression_v13(info))));
                    if(right_value321 && right_value321 != __result_obj__) { right_value321 = come_decrement_ref_count(right_value321, ((struct sNode*)right_value321)->finalize, ((struct sNode*)right_value321)->_protocol_obj, 1, 0, 0); } 
                    _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1538);
                    _inf_obj_value9=come_increment_ref_count(((struct sDeleteNode*)(right_value323=sDeleteNode_initialize((struct sDeleteNode*)come_increment_ref_count(((struct sDeleteNode*)(right_value322=(struct sDeleteNode*)come_calloc(1, sizeof(struct sDeleteNode)*(1), "21obj.c", 1538)))),(struct sNode*)come_increment_ref_count(node_150),info))));
                    _inf_value9->_protocol_obj=_inf_obj_value9;
                    _inf_value9->finalize=(void*)sDeleteNode_finalize;
                    _inf_value9->clone=(void*)sDeleteNode_clone;
                    _inf_value9->compile=(void*)sDeleteNode_compile;
                    _inf_value9->sline=(void*)sDeleteNode_sline;
                    _inf_value9->sname=(void*)sDeleteNode_sname;
                    _inf_value9->terminated=(void*)sDeleteNode_terminated;
                    _inf_value9->kind=(void*)sDeleteNode_kind;
                    __result240__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value329=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value328=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "21obj.c", 1538)))),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value327=_inf_value9))),(_Bool)1)));
                    if(node_150) { node_150 = come_decrement_ref_count(node_150, ((struct sNode*)node_150)->finalize, ((struct sNode*)node_150)->_protocol_obj, 0, 0, 0); } 
                    if(right_value322 && right_value322 != __result_obj__) { come_call_finalizer(sDeleteNode_finalize,right_value322, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(right_value323 && right_value323 != __result_obj__) { come_call_finalizer(sDeleteNode_finalize,right_value323, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(right_value327 && right_value327 != __result_obj__) { right_value327 = come_decrement_ref_count(right_value327, ((struct sNode*)right_value327)->finalize, ((struct sNode*)right_value327)->_protocol_obj, 1, 0, 0); } 
                    if(right_value328 && right_value328 != __result_obj__) { right_value328 = come_decrement_ref_count(right_value328, (void*)0, (void*)0, 1, 0, 0); }
                    return __result240__;
                    if(node_150) { node_150 = come_decrement_ref_count(node_150, ((struct sNode*)node_150)->finalize, ((struct sNode*)node_150)->_protocol_obj, 0, 0, 0); } 
                }
                else {
                    if(_if_conditional248=charp_operator_equals(buf,"force_delete"),                    _if_conditional248) {
                        node_152=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value330=expression_v13(info))));
                        if(right_value330 && right_value330 != __result_obj__) { right_value330 = come_decrement_ref_count(right_value330, ((struct sNode*)right_value330)->finalize, ((struct sNode*)right_value330)->_protocol_obj, 1, 0, 0); } 
                        _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1543);
                        _inf_obj_value10=come_increment_ref_count(((struct sForceDeleteNode*)(right_value332=sForceDeleteNode_initialize((struct sForceDeleteNode*)come_increment_ref_count(((struct sForceDeleteNode*)(right_value331=(struct sForceDeleteNode*)come_calloc(1, sizeof(struct sForceDeleteNode)*(1), "21obj.c", 1543)))),(struct sNode*)come_increment_ref_count(node_152),info))));
                        _inf_value10->_protocol_obj=_inf_obj_value10;
                        _inf_value10->finalize=(void*)sForceDeleteNode_finalize;
                        _inf_value10->clone=(void*)sForceDeleteNode_clone;
                        _inf_value10->compile=(void*)sForceDeleteNode_compile;
                        _inf_value10->sline=(void*)sForceDeleteNode_sline;
                        _inf_value10->sname=(void*)sForceDeleteNode_sname;
                        _inf_value10->terminated=(void*)sForceDeleteNode_terminated;
                        _inf_value10->kind=(void*)sForceDeleteNode_kind;
                        __result243__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value338=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value337=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "21obj.c", 1543)))),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value336=_inf_value10))),(_Bool)1)));
                        if(node_152) { node_152 = come_decrement_ref_count(node_152, ((struct sNode*)node_152)->finalize, ((struct sNode*)node_152)->_protocol_obj, 0, 0, 0); } 
                        if(right_value331 && right_value331 != __result_obj__) { come_call_finalizer(sForceDeleteNode_finalize,right_value331, (void*)0, (void*)0, 0, 1, 0, 0); }
                        if(right_value332 && right_value332 != __result_obj__) { come_call_finalizer(sForceDeleteNode_finalize,right_value332, (void*)0, (void*)0, 0, 1, 0, 0); }
                        if(right_value336 && right_value336 != __result_obj__) { right_value336 = come_decrement_ref_count(right_value336, ((struct sNode*)right_value336)->finalize, ((struct sNode*)right_value336)->_protocol_obj, 1, 0, 0); } 
                        if(right_value337 && right_value337 != __result_obj__) { right_value337 = come_decrement_ref_count(right_value337, (void*)0, (void*)0, 1, 0, 0); }
                        return __result243__;
                        if(node_152) { node_152 = come_decrement_ref_count(node_152, ((struct sNode*)node_152)->finalize, ((struct sNode*)node_152)->_protocol_obj, 0, 0, 0); } 
                    }
                    else {
                        if(_if_conditional255=charp_operator_equals(buf,"borrow"),                        _if_conditional255) {
                            node_154=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value339=expression_v13(info))));
                            if(right_value339 && right_value339 != __result_obj__) { right_value339 = come_decrement_ref_count(right_value339, ((struct sNode*)right_value339)->finalize, ((struct sNode*)right_value339)->_protocol_obj, 1, 0, 0); } 
                            _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1549);
                            _inf_obj_value11=come_increment_ref_count(((struct sBorrowNode*)(right_value341=sBorrowNode_initialize((struct sBorrowNode*)come_increment_ref_count(((struct sBorrowNode*)(right_value340=(struct sBorrowNode*)come_calloc(1, sizeof(struct sBorrowNode)*(1), "21obj.c", 1549)))),(struct sNode*)come_increment_ref_count(node_154),info))));
                            _inf_value11->_protocol_obj=_inf_obj_value11;
                            _inf_value11->finalize=(void*)sBorrowNode_finalize;
                            _inf_value11->clone=(void*)sBorrowNode_clone;
                            _inf_value11->compile=(void*)sBorrowNode_compile;
                            _inf_value11->sline=(void*)sBorrowNode_sline;
                            _inf_value11->sname=(void*)sBorrowNode_sname;
                            _inf_value11->terminated=(void*)sBorrowNode_terminated;
                            _inf_value11->kind=(void*)sBorrowNode_kind;
                            __result246__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value347=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value346=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "21obj.c", 1549)))),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value345=_inf_value11))),(_Bool)1)));
                            if(node_154) { node_154 = come_decrement_ref_count(node_154, ((struct sNode*)node_154)->finalize, ((struct sNode*)node_154)->_protocol_obj, 0, 0, 0); } 
                            if(right_value340 && right_value340 != __result_obj__) { come_call_finalizer(sBorrowNode_finalize,right_value340, (void*)0, (void*)0, 0, 1, 0, 0); }
                            if(right_value341 && right_value341 != __result_obj__) { come_call_finalizer(sBorrowNode_finalize,right_value341, (void*)0, (void*)0, 0, 1, 0, 0); }
                            if(right_value345 && right_value345 != __result_obj__) { right_value345 = come_decrement_ref_count(right_value345, ((struct sNode*)right_value345)->finalize, ((struct sNode*)right_value345)->_protocol_obj, 1, 0, 0); } 
                            if(right_value346 && right_value346 != __result_obj__) { right_value346 = come_decrement_ref_count(right_value346, (void*)0, (void*)0, 1, 0, 0); }
                            return __result246__;
                            if(node_154) { node_154 = come_decrement_ref_count(node_154, ((struct sNode*)node_154)->finalize, ((struct sNode*)node_154)->_protocol_obj, 0, 0, 0); } 
                        }
                        else {
                            if(_if_conditional262=charp_operator_equals(buf,"delegate"),                            _if_conditional262) {
                                node_156=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value348=expression_v13(info))));
                                if(right_value348 && right_value348 != __result_obj__) { right_value348 = come_decrement_ref_count(right_value348, ((struct sNode*)right_value348)->finalize, ((struct sNode*)right_value348)->_protocol_obj, 1, 0, 0); } 
                                _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1554);
                                _inf_obj_value12=come_increment_ref_count(((struct sDelegateNode*)(right_value350=sDelegateNode_initialize((struct sDelegateNode*)come_increment_ref_count(((struct sDelegateNode*)(right_value349=(struct sDelegateNode*)come_calloc(1, sizeof(struct sDelegateNode)*(1), "21obj.c", 1554)))),(struct sNode*)come_increment_ref_count(node_156),info))));
                                _inf_value12->_protocol_obj=_inf_obj_value12;
                                _inf_value12->finalize=(void*)sDelegateNode_finalize;
                                _inf_value12->clone=(void*)sDelegateNode_clone;
                                _inf_value12->compile=(void*)sDelegateNode_compile;
                                _inf_value12->sline=(void*)sDelegateNode_sline;
                                _inf_value12->sname=(void*)sDelegateNode_sname;
                                _inf_value12->terminated=(void*)sDelegateNode_terminated;
                                _inf_value12->kind=(void*)sDelegateNode_kind;
                                __result249__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value356=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value355=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "21obj.c", 1554)))),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value354=_inf_value12))),(_Bool)1)));
                                if(node_156) { node_156 = come_decrement_ref_count(node_156, ((struct sNode*)node_156)->finalize, ((struct sNode*)node_156)->_protocol_obj, 0, 0, 0); } 
                                if(right_value349 && right_value349 != __result_obj__) { come_call_finalizer(sDelegateNode_finalize,right_value349, (void*)0, (void*)0, 0, 1, 0, 0); }
                                if(right_value350 && right_value350 != __result_obj__) { come_call_finalizer(sDelegateNode_finalize,right_value350, (void*)0, (void*)0, 0, 1, 0, 0); }
                                if(right_value354 && right_value354 != __result_obj__) { right_value354 = come_decrement_ref_count(right_value354, ((struct sNode*)right_value354)->finalize, ((struct sNode*)right_value354)->_protocol_obj, 1, 0, 0); } 
                                if(right_value355 && right_value355 != __result_obj__) { right_value355 = come_decrement_ref_count(right_value355, (void*)0, (void*)0, 1, 0, 0); }
                                return __result249__;
                                if(node_156) { node_156 = come_decrement_ref_count(node_156, ((struct sNode*)node_156)->finalize, ((struct sNode*)node_156)->_protocol_obj, 0, 0, 0); } 
                            }
                            else {
                                if(_if_conditional269=charp_operator_equals(buf,"share"),                                _if_conditional269) {
                                    node_158=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value357=expression_v13(info))));
                                    if(right_value357 && right_value357 != __result_obj__) { right_value357 = come_decrement_ref_count(right_value357, ((struct sNode*)right_value357)->finalize, ((struct sNode*)right_value357)->_protocol_obj, 1, 0, 0); } 
                                    _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1559);
                                    _inf_obj_value13=come_increment_ref_count(((struct sShareNode*)(right_value359=sShareNode_initialize((struct sShareNode*)come_increment_ref_count(((struct sShareNode*)(right_value358=(struct sShareNode*)come_calloc(1, sizeof(struct sShareNode)*(1), "21obj.c", 1559)))),(struct sNode*)come_increment_ref_count(node_158),info))));
                                    _inf_value13->_protocol_obj=_inf_obj_value13;
                                    _inf_value13->finalize=(void*)sShareNode_finalize;
                                    _inf_value13->clone=(void*)sShareNode_clone;
                                    _inf_value13->compile=(void*)sShareNode_compile;
                                    _inf_value13->sline=(void*)sShareNode_sline;
                                    _inf_value13->sname=(void*)sShareNode_sname;
                                    _inf_value13->terminated=(void*)sShareNode_terminated;
                                    _inf_value13->kind=(void*)sShareNode_kind;
                                    __result252__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value365=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value364=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "21obj.c", 1559)))),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value363=_inf_value13))),(_Bool)1)));
                                    if(node_158) { node_158 = come_decrement_ref_count(node_158, ((struct sNode*)node_158)->finalize, ((struct sNode*)node_158)->_protocol_obj, 0, 0, 0); } 
                                    if(right_value358 && right_value358 != __result_obj__) { come_call_finalizer(sShareNode_finalize,right_value358, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    if(right_value359 && right_value359 != __result_obj__) { come_call_finalizer(sShareNode_finalize,right_value359, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    if(right_value363 && right_value363 != __result_obj__) { right_value363 = come_decrement_ref_count(right_value363, ((struct sNode*)right_value363)->finalize, ((struct sNode*)right_value363)->_protocol_obj, 1, 0, 0); } 
                                    if(right_value364 && right_value364 != __result_obj__) { right_value364 = come_decrement_ref_count(right_value364, (void*)0, (void*)0, 1, 0, 0); }
                                    return __result252__;
                                    if(node_158) { node_158 = come_decrement_ref_count(node_158, ((struct sNode*)node_158)->finalize, ((struct sNode*)node_158)->_protocol_obj, 0, 0, 0); } 
                                }
                                else {
                                    if(_if_conditional276=charp_operator_equals(buf,"clone"),                                    _if_conditional276) {
                                        node_160=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value366=expression_v13(info))));
                                        if(right_value366 && right_value366 != __result_obj__) { right_value366 = come_decrement_ref_count(right_value366, ((struct sNode*)right_value366)->finalize, ((struct sNode*)right_value366)->_protocol_obj, 1, 0, 0); } 
                                        _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1564);
                                        _inf_obj_value14=come_increment_ref_count(((struct sCloneNode*)(right_value368=sCloneNode_initialize((struct sCloneNode*)come_increment_ref_count(((struct sCloneNode*)(right_value367=(struct sCloneNode*)come_calloc(1, sizeof(struct sCloneNode)*(1), "21obj.c", 1564)))),(struct sNode*)come_increment_ref_count(node_160),info))));
                                        _inf_value14->_protocol_obj=_inf_obj_value14;
                                        _inf_value14->finalize=(void*)sCloneNode_finalize;
                                        _inf_value14->clone=(void*)sCloneNode_clone;
                                        _inf_value14->compile=(void*)sCloneNode_compile;
                                        _inf_value14->sline=(void*)sCloneNode_sline;
                                        _inf_value14->sname=(void*)sCloneNode_sname;
                                        _inf_value14->terminated=(void*)sCloneNode_terminated;
                                        _inf_value14->kind=(void*)sCloneNode_kind;
                                        __result255__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value374=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value373=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "21obj.c", 1564)))),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value372=_inf_value14))),(_Bool)1)));
                                        if(node_160) { node_160 = come_decrement_ref_count(node_160, ((struct sNode*)node_160)->finalize, ((struct sNode*)node_160)->_protocol_obj, 0, 0, 0); } 
                                        if(right_value367 && right_value367 != __result_obj__) { come_call_finalizer(sCloneNode_finalize,right_value367, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        if(right_value368 && right_value368 != __result_obj__) { come_call_finalizer(sCloneNode_finalize,right_value368, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        if(right_value372 && right_value372 != __result_obj__) { right_value372 = come_decrement_ref_count(right_value372, ((struct sNode*)right_value372)->finalize, ((struct sNode*)right_value372)->_protocol_obj, 1, 0, 0); } 
                                        if(right_value373 && right_value373 != __result_obj__) { right_value373 = come_decrement_ref_count(right_value373, (void*)0, (void*)0, 1, 0, 0); }
                                        return __result255__;
                                        if(node_160) { node_160 = come_decrement_ref_count(node_160, ((struct sNode*)node_160)->finalize, ((struct sNode*)node_160)->_protocol_obj, 0, 0, 0); } 
                                    }
                                    else {
                                        if(_if_conditional283=charp_operator_equals(buf,"dupe"),                                        _if_conditional283) {
                                            node_162=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value375=expression_v13(info))));
                                            if(right_value375 && right_value375 != __result_obj__) { right_value375 = come_decrement_ref_count(right_value375, ((struct sNode*)right_value375)->finalize, ((struct sNode*)right_value375)->_protocol_obj, 1, 0, 0); } 
                                            _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1569);
                                            _inf_obj_value15=come_increment_ref_count(((struct sDupeNode*)(right_value377=sDupeNode_initialize((struct sDupeNode*)come_increment_ref_count(((struct sDupeNode*)(right_value376=(struct sDupeNode*)come_calloc(1, sizeof(struct sDupeNode)*(1), "21obj.c", 1569)))),(struct sNode*)come_increment_ref_count(node_162),info))));
                                            _inf_value15->_protocol_obj=_inf_obj_value15;
                                            _inf_value15->finalize=(void*)sDupeNode_finalize;
                                            _inf_value15->clone=(void*)sDupeNode_clone;
                                            _inf_value15->compile=(void*)sDupeNode_compile;
                                            _inf_value15->sline=(void*)sDupeNode_sline;
                                            _inf_value15->sname=(void*)sDupeNode_sname;
                                            _inf_value15->terminated=(void*)sDupeNode_terminated;
                                            _inf_value15->kind=(void*)sDupeNode_kind;
                                            __result258__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value383=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value382=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "21obj.c", 1569)))),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value381=_inf_value15))),(_Bool)1)));
                                            if(node_162) { node_162 = come_decrement_ref_count(node_162, ((struct sNode*)node_162)->finalize, ((struct sNode*)node_162)->_protocol_obj, 0, 0, 0); } 
                                            if(right_value376 && right_value376 != __result_obj__) { come_call_finalizer(sDupeNode_finalize,right_value376, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            if(right_value377 && right_value377 != __result_obj__) { come_call_finalizer(sDupeNode_finalize,right_value377, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            if(right_value381 && right_value381 != __result_obj__) { right_value381 = come_decrement_ref_count(right_value381, ((struct sNode*)right_value381)->finalize, ((struct sNode*)right_value381)->_protocol_obj, 1, 0, 0); } 
                                            if(right_value382 && right_value382 != __result_obj__) { right_value382 = come_decrement_ref_count(right_value382, (void*)0, (void*)0, 1, 0, 0); }
                                            return __result258__;
                                            if(node_162) { node_162 = come_decrement_ref_count(node_162, ((struct sNode*)node_162)->finalize, ((struct sNode*)node_162)->_protocol_obj, 0, 0, 0); } 
                                        }
                                        else {
                                            if(_if_conditional290=charp_operator_equals(buf,"dummy_heap"),                                            _if_conditional290) {
                                                node_164=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value384=expression_v13(info))));
                                                if(right_value384 && right_value384 != __result_obj__) { right_value384 = come_decrement_ref_count(right_value384, ((struct sNode*)right_value384)->finalize, ((struct sNode*)right_value384)->_protocol_obj, 1, 0, 0); } 
                                                _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1574);
                                                _inf_obj_value16=come_increment_ref_count(((struct sDummyHeapNode*)(right_value386=sDummyHeapNode_initialize((struct sDummyHeapNode*)come_increment_ref_count(((struct sDummyHeapNode*)(right_value385=(struct sDummyHeapNode*)come_calloc(1, sizeof(struct sDummyHeapNode)*(1), "21obj.c", 1574)))),(struct sNode*)come_increment_ref_count(node_164),info))));
                                                _inf_value16->_protocol_obj=_inf_obj_value16;
                                                _inf_value16->finalize=(void*)sDummyHeapNode_finalize;
                                                _inf_value16->clone=(void*)sDummyHeapNode_clone;
                                                _inf_value16->compile=(void*)sDummyHeapNode_compile;
                                                _inf_value16->sline=(void*)sDummyHeapNode_sline;
                                                _inf_value16->sname=(void*)sDummyHeapNode_sname;
                                                _inf_value16->terminated=(void*)sDummyHeapNode_terminated;
                                                _inf_value16->kind=(void*)sDummyHeapNode_kind;
                                                __result261__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value392=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value391=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "21obj.c", 1574)))),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value390=_inf_value16))),(_Bool)1)));
                                                if(node_164) { node_164 = come_decrement_ref_count(node_164, ((struct sNode*)node_164)->finalize, ((struct sNode*)node_164)->_protocol_obj, 0, 0, 0); } 
                                                if(right_value385 && right_value385 != __result_obj__) { come_call_finalizer(sDummyHeapNode_finalize,right_value385, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                if(right_value386 && right_value386 != __result_obj__) { come_call_finalizer(sDummyHeapNode_finalize,right_value386, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                if(right_value390 && right_value390 != __result_obj__) { right_value390 = come_decrement_ref_count(right_value390, ((struct sNode*)right_value390)->finalize, ((struct sNode*)right_value390)->_protocol_obj, 1, 0, 0); } 
                                                if(right_value391 && right_value391 != __result_obj__) { right_value391 = come_decrement_ref_count(right_value391, (void*)0, (void*)0, 1, 0, 0); }
                                                return __result261__;
                                                if(node_164) { node_164 = come_decrement_ref_count(node_164, ((struct sNode*)node_164)->finalize, ((struct sNode*)node_164)->_protocol_obj, 0, 0, 0); } 
                                            }
                                            else {
                                                if(_if_conditional297=charp_operator_equals(buf,"gc_inc")&&*info->p==40,                                                _if_conditional297) {
                                                    info->p++;
                                                    skip_spaces_and_lf(info);
                                                    node_166=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value393=expression_v13(info))));
                                                    if(right_value393 && right_value393 != __result_obj__) { right_value393 = come_decrement_ref_count(right_value393, ((struct sNode*)right_value393)->finalize, ((struct sNode*)right_value393)->_protocol_obj, 1, 0, 0); } 
                                                    optional$2intbool_value(((struct optional$2intbool*)(right_value394=expected_next_character(41,info))));
                                                    if(right_value394 && right_value394 != __result_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value394, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                    _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1584);
                                                    _inf_obj_value17=come_increment_ref_count(((struct sGCIncNode*)(right_value396=sGCIncNode_initialize((struct sGCIncNode*)come_increment_ref_count(((struct sGCIncNode*)(right_value395=(struct sGCIncNode*)come_calloc(1, sizeof(struct sGCIncNode)*(1), "21obj.c", 1584)))),(struct sNode*)come_increment_ref_count(node_166),info))));
                                                    _inf_value17->_protocol_obj=_inf_obj_value17;
                                                    _inf_value17->finalize=(void*)sGCIncNode_finalize;
                                                    _inf_value17->clone=(void*)sGCIncNode_clone;
                                                    _inf_value17->compile=(void*)sGCIncNode_compile;
                                                    _inf_value17->sline=(void*)sGCIncNode_sline;
                                                    _inf_value17->sname=(void*)sGCIncNode_sname;
                                                    _inf_value17->terminated=(void*)sGCIncNode_terminated;
                                                    _inf_value17->kind=(void*)sGCIncNode_kind;
                                                    __result264__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value402=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value401=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "21obj.c", 1584)))),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value400=_inf_value17))),(_Bool)1)));
                                                    if(node_166) { node_166 = come_decrement_ref_count(node_166, ((struct sNode*)node_166)->finalize, ((struct sNode*)node_166)->_protocol_obj, 0, 0, 0); } 
                                                    if(right_value395 && right_value395 != __result_obj__) { come_call_finalizer(sGCIncNode_finalize,right_value395, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                    if(right_value396 && right_value396 != __result_obj__) { come_call_finalizer(sGCIncNode_finalize,right_value396, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                    if(right_value400 && right_value400 != __result_obj__) { right_value400 = come_decrement_ref_count(right_value400, ((struct sNode*)right_value400)->finalize, ((struct sNode*)right_value400)->_protocol_obj, 1, 0, 0); } 
                                                    if(right_value401 && right_value401 != __result_obj__) { right_value401 = come_decrement_ref_count(right_value401, (void*)0, (void*)0, 1, 0, 0); }
                                                    return __result264__;
                                                    if(node_166) { node_166 = come_decrement_ref_count(node_166, ((struct sNode*)node_166)->finalize, ((struct sNode*)node_166)->_protocol_obj, 0, 0, 0); } 
                                                }
                                                else {
                                                    if(_if_conditional304=charp_operator_equals(buf,"gc_dec")&&*info->p==40,                                                    _if_conditional304) {
                                                        info->p++;
                                                        skip_spaces_and_lf(info);
                                                        node_168=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value403=expression_v13(info))));
                                                        if(right_value403 && right_value403 != __result_obj__) { right_value403 = come_decrement_ref_count(right_value403, ((struct sNode*)right_value403)->finalize, ((struct sNode*)right_value403)->_protocol_obj, 1, 0, 0); } 
                                                        optional$2intbool_value(((struct optional$2intbool*)(right_value404=expected_next_character(41,info))));
                                                        if(right_value404 && right_value404 != __result_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value404, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                        _inf_value18=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1594);
                                                        _inf_obj_value18=come_increment_ref_count(((struct sGCDecNode*)(right_value406=sGCDecNode_initialize((struct sGCDecNode*)come_increment_ref_count(((struct sGCDecNode*)(right_value405=(struct sGCDecNode*)come_calloc(1, sizeof(struct sGCDecNode)*(1), "21obj.c", 1594)))),(struct sNode*)come_increment_ref_count(node_168),info))));
                                                        _inf_value18->_protocol_obj=_inf_obj_value18;
                                                        _inf_value18->finalize=(void*)sGCDecNode_finalize;
                                                        _inf_value18->clone=(void*)sGCDecNode_clone;
                                                        _inf_value18->compile=(void*)sGCDecNode_compile;
                                                        _inf_value18->sline=(void*)sGCDecNode_sline;
                                                        _inf_value18->sname=(void*)sGCDecNode_sname;
                                                        _inf_value18->terminated=(void*)sGCDecNode_terminated;
                                                        _inf_value18->kind=(void*)sGCDecNode_kind;
                                                        __result267__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value412=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value411=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "21obj.c", 1594)))),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value410=_inf_value18))),(_Bool)1)));
                                                        if(node_168) { node_168 = come_decrement_ref_count(node_168, ((struct sNode*)node_168)->finalize, ((struct sNode*)node_168)->_protocol_obj, 0, 0, 0); } 
                                                        if(right_value405 && right_value405 != __result_obj__) { come_call_finalizer(sGCDecNode_finalize,right_value405, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                        if(right_value406 && right_value406 != __result_obj__) { come_call_finalizer(sGCDecNode_finalize,right_value406, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                        if(right_value410 && right_value410 != __result_obj__) { right_value410 = come_decrement_ref_count(right_value410, ((struct sNode*)right_value410)->finalize, ((struct sNode*)right_value410)->_protocol_obj, 1, 0, 0); } 
                                                        if(right_value411 && right_value411 != __result_obj__) { right_value411 = come_decrement_ref_count(right_value411, (void*)0, (void*)0, 1, 0, 0); }
                                                        return __result267__;
                                                        if(node_168) { node_168 = come_decrement_ref_count(node_168, ((struct sNode*)node_168)->finalize, ((struct sNode*)node_168)->_protocol_obj, 0, 0, 0); } 
                                                    }
                                                    else {
                                                        if(_if_conditional311=charp_operator_equals(buf,"isheap")&&*info->p==40,                                                        _if_conditional311) {
                                                            info->p++;
                                                            skip_spaces_and_lf(info);
                                                            multiple_assgin_var5=optional$2tuple3$3sTypephcharphboolphbool_value(((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value413=parse_type(info,(_Bool)0,(_Bool)1))));
                                                            param_type_170=(struct sType*)come_increment_ref_count(multiple_assgin_var5->v1);
                                                            param_name_171=(char*)come_increment_ref_count(multiple_assgin_var5->v2);
                                                            err_172=multiple_assgin_var5->v3;
                                                            if(right_value413 && right_value413 != __result_obj__) { come_call_finalizer(optional$2tuple3$3sTypephcharphboolphboolp_finalize,right_value413, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                            if(_if_conditional312=!err_172,                                                            _if_conditional312) {
                                                                err_msg(info,"parse_type failed");
                                                                __result268__ = __result_obj__ = ((struct optional$2voidpbool*)(right_value415=optional$2voidpbool_initialize(((struct optional$2voidpbool*)(right_value414=(struct optional$2voidpbool*)come_calloc(1, sizeof(struct optional$2voidpbool)*(1), "21obj.c", 1603))),((void*)0),(_Bool)0)));
                                                                if(param_type_170) { come_call_finalizer(sType_finalize,param_type_170, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                if(param_name_171) { param_name_171 = come_decrement_ref_count(param_name_171, (void*)0, (void*)0, 0, 0, 0); }
                                                                if(right_value414 && right_value414 != __result_obj__) { right_value414 = come_decrement_ref_count(right_value414, (void*)0, (void*)0, 1, 0, 0); }
                                                                return __result268__;
                                                            }
                                                            type2_173=(struct sType*)come_increment_ref_count(((struct sType*)(right_value416=solve_generics(param_type_170,info->generics_type,info))));
                                                            if(right_value416 && right_value416 != __result_obj__) { come_call_finalizer(sType_finalize,right_value416, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                            optional$2intbool_value(((struct optional$2intbool*)(right_value417=expected_next_character(41,info))));
                                                            if(right_value417 && right_value417 != __result_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value417, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                            _inf_value19=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1610);
                                                            _inf_obj_value19=come_increment_ref_count(((struct sIsHeap*)(right_value419=sIsHeap_initialize((struct sIsHeap*)come_increment_ref_count(((struct sIsHeap*)(right_value418=(struct sIsHeap*)come_calloc(1, sizeof(struct sIsHeap)*(1), "21obj.c", 1610)))),(struct sType*)come_increment_ref_count(type2_173),info))));
                                                            _inf_value19->_protocol_obj=_inf_obj_value19;
                                                            _inf_value19->finalize=(void*)sIsHeap_finalize;
                                                            _inf_value19->clone=(void*)sIsHeap_clone;
                                                            _inf_value19->compile=(void*)sIsHeap_compile;
                                                            _inf_value19->sline=(void*)sIsHeap_sline;
                                                            _inf_value19->sname=(void*)sIsHeap_sname;
                                                            _inf_value19->terminated=(void*)sIsHeap_terminated;
                                                            _inf_value19->kind=(void*)sIsHeap_kind;
                                                            __result271__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value425=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value424=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "21obj.c", 1610)))),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value423=_inf_value19))),(_Bool)1)));
                                                            if(param_type_170) { come_call_finalizer(sType_finalize,param_type_170, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                            if(param_name_171) { param_name_171 = come_decrement_ref_count(param_name_171, (void*)0, (void*)0, 0, 0, 0); }
                                                            if(type2_173) { come_call_finalizer(sType_finalize,type2_173, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                            if(right_value418 && right_value418 != __result_obj__) { come_call_finalizer(sIsHeap_finalize,right_value418, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                            if(right_value419 && right_value419 != __result_obj__) { come_call_finalizer(sIsHeap_finalize,right_value419, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                            if(right_value423 && right_value423 != __result_obj__) { right_value423 = come_decrement_ref_count(right_value423, ((struct sNode*)right_value423)->finalize, ((struct sNode*)right_value423)->_protocol_obj, 1, 0, 0); } 
                                                            if(right_value424 && right_value424 != __result_obj__) { right_value424 = come_decrement_ref_count(right_value424, (void*)0, (void*)0, 1, 0, 0); }
                                                            return __result271__;
                                                            if(param_type_170) { come_call_finalizer(sType_finalize,param_type_170, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                            if(param_name_171) { param_name_171 = come_decrement_ref_count(param_name_171, (void*)0, (void*)0, 0, 0, 0); }
                                                            if(type2_173) { come_call_finalizer(sType_finalize,type2_173, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                        }
                                                        else {
                                                            if(_if_conditional319=charp_operator_equals(buf,"using"),                                                            _if_conditional319) {
                                                                if(_if_conditional320=memcmp(info->p,"comelang",strlen("comelang"))==0,                                                                _if_conditional320) {
                                                                    info->p+=strlen("comelang");
                                                                    skip_spaces_and_lf(info);
                                                                    gComeC=(_Bool)0;
                                                                    _inf_value20=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1619);
                                                                    _inf_obj_value20=come_increment_ref_count(((struct sNullNodeX*)(right_value427=sNullNodeX_initialize((struct sNullNodeX*)come_increment_ref_count(((struct sNullNodeX*)(right_value426=(struct sNullNodeX*)come_calloc(1, sizeof(struct sNullNodeX)*(1), "21obj.c", 1619)))),info))));
                                                                    _inf_value20->_protocol_obj=_inf_obj_value20;
                                                                    _inf_value20->finalize=(void*)sNullNodeX_finalize;
                                                                    _inf_value20->clone=(void*)sNullNodeX_clone;
                                                                    _inf_value20->compile=(void*)sNullNodeX_compile;
                                                                    _inf_value20->sline=(void*)sNullNodeX_sline;
                                                                    _inf_value20->sname=(void*)sNullNodeX_sname;
                                                                    _inf_value20->terminated=(void*)sNullNodeX_terminated;
                                                                    _inf_value20->kind=(void*)sNullNodeX_kind;
                                                                    __result274__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value432=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value431=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "21obj.c", 1619)))),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value430=_inf_value20))),(_Bool)1)));
                                                                    if(right_value426 && right_value426 != __result_obj__) { come_call_finalizer(sNullNodeX_finalize,right_value426, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                    if(right_value427 && right_value427 != __result_obj__) { come_call_finalizer(sNullNodeX_finalize,right_value427, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                    if(right_value430 && right_value430 != __result_obj__) { right_value430 = come_decrement_ref_count(right_value430, ((struct sNode*)right_value430)->finalize, ((struct sNode*)right_value430)->_protocol_obj, 1, 0, 0); } 
                                                                    if(right_value431 && right_value431 != __result_obj__) { right_value431 = come_decrement_ref_count(right_value431, (void*)0, (void*)0, 1, 0, 0); }
                                                                    return __result274__;
                                                                }
                                                                else {
                                                                    if(_if_conditional325=memcmp(info->p,"c",strlen("c"))==0||memcmp(info->p,"C",strlen("C"))==0,                                                                    _if_conditional325) {
                                                                        info->p+=strlen("c");
                                                                        skip_spaces_and_lf(info);
                                                                        gComeC=(_Bool)1;
                                                                        if(_if_conditional326=*info->p==123,                                                                        _if_conditional326) {
                                                                            node_176=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value433=parse_normal_block(info))));
                                                                            if(right_value433 && right_value433 != __result_obj__) { right_value433 = come_decrement_ref_count(right_value433, ((struct sNode*)right_value433)->finalize, ((struct sNode*)right_value433)->_protocol_obj, 1, 0, 0); } 
                                                                            gComeC=(_Bool)0;
                                                                            __result275__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value435=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value434=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "21obj.c", 1632)))),(struct sNode*)come_increment_ref_count(node_176),(_Bool)1)));
                                                                            if(node_176) { node_176 = come_decrement_ref_count(node_176, ((struct sNode*)node_176)->finalize, ((struct sNode*)node_176)->_protocol_obj, 0, 0, 0); } 
                                                                            if(right_value434 && right_value434 != __result_obj__) { right_value434 = come_decrement_ref_count(right_value434, (void*)0, (void*)0, 1, 0, 0); }
                                                                            return __result275__;
                                                                            if(node_176) { node_176 = come_decrement_ref_count(node_176, ((struct sNode*)node_176)->finalize, ((struct sNode*)node_176)->_protocol_obj, 0, 0, 0); } 
                                                                        }
                                                                        else {
                                                                            _inf_value21=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1635);
                                                                            _inf_obj_value21=come_increment_ref_count(((struct sNullNodeX*)(right_value437=sNullNodeX_initialize((struct sNullNodeX*)come_increment_ref_count(((struct sNullNodeX*)(right_value436=(struct sNullNodeX*)come_calloc(1, sizeof(struct sNullNodeX)*(1), "21obj.c", 1635)))),info))));
                                                                            _inf_value21->_protocol_obj=_inf_obj_value21;
                                                                            _inf_value21->finalize=(void*)sNullNodeX_finalize;
                                                                            _inf_value21->clone=(void*)sNullNodeX_clone;
                                                                            _inf_value21->compile=(void*)sNullNodeX_compile;
                                                                            _inf_value21->sline=(void*)sNullNodeX_sline;
                                                                            _inf_value21->sname=(void*)sNullNodeX_sname;
                                                                            _inf_value21->terminated=(void*)sNullNodeX_terminated;
                                                                            _inf_value21->kind=(void*)sNullNodeX_kind;
                                                                            __result278__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value442=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value441=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "21obj.c", 1635)))),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value440=_inf_value21))),(_Bool)1)));
                                                                            if(right_value436 && right_value436 != __result_obj__) { come_call_finalizer(sNullNodeX_finalize,right_value436, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                            if(right_value437 && right_value437 != __result_obj__) { come_call_finalizer(sNullNodeX_finalize,right_value437, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                            if(right_value440 && right_value440 != __result_obj__) { right_value440 = come_decrement_ref_count(right_value440, ((struct sNode*)right_value440)->finalize, ((struct sNode*)right_value440)->_protocol_obj, 1, 0, 0); } 
                                                                            if(right_value441 && right_value441 != __result_obj__) { right_value441 = come_decrement_ref_count(right_value441, (void*)0, (void*)0, 1, 0, 0); }
                                                                            return __result278__;
                                                                        }
                                                                    }
                                                                    else {
                                                                        if(_if_conditional331=memcmp(info->p,"gc",strlen("gc"))==0,                                                                        _if_conditional331) {
                                                                            info->p+=strlen("gc");
                                                                            skip_spaces_and_lf(info);
                                                                            _inf_value22=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1642);
                                                                            _inf_obj_value22=come_increment_ref_count(((struct sNullNodeX*)(right_value444=sNullNodeX_initialize((struct sNullNodeX*)come_increment_ref_count(((struct sNullNodeX*)(right_value443=(struct sNullNodeX*)come_calloc(1, sizeof(struct sNullNodeX)*(1), "21obj.c", 1642)))),info))));
                                                                            _inf_value22->_protocol_obj=_inf_obj_value22;
                                                                            _inf_value22->finalize=(void*)sNullNodeX_finalize;
                                                                            _inf_value22->clone=(void*)sNullNodeX_clone;
                                                                            _inf_value22->compile=(void*)sNullNodeX_compile;
                                                                            _inf_value22->sline=(void*)sNullNodeX_sline;
                                                                            _inf_value22->sname=(void*)sNullNodeX_sname;
                                                                            _inf_value22->terminated=(void*)sNullNodeX_terminated;
                                                                            _inf_value22->kind=(void*)sNullNodeX_kind;
                                                                            __result281__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value449=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value448=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "21obj.c", 1642)))),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value447=_inf_value22))),(_Bool)1)));
                                                                            if(right_value443 && right_value443 != __result_obj__) { come_call_finalizer(sNullNodeX_finalize,right_value443, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                            if(right_value444 && right_value444 != __result_obj__) { come_call_finalizer(sNullNodeX_finalize,right_value444, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                            if(right_value447 && right_value447 != __result_obj__) { right_value447 = come_decrement_ref_count(right_value447, ((struct sNode*)right_value447)->finalize, ((struct sNode*)right_value447)->_protocol_obj, 1, 0, 0); } 
                                                                            if(right_value448 && right_value448 != __result_obj__) { right_value448 = come_decrement_ref_count(right_value448, (void*)0, (void*)0, 1, 0, 0); }
                                                                            return __result281__;
                                                                        }
                                                                        else {
                                                                            if(_if_conditional336=memcmp(info->p,"no-gc",strlen("no-gc"))==0,                                                                            _if_conditional336) {
                                                                                info->p+=strlen("no-gc");
                                                                                skip_spaces_and_lf(info);
                                                                                _inf_value23=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1649);
                                                                                _inf_obj_value23=come_increment_ref_count(((struct sNullNodeX*)(right_value451=sNullNodeX_initialize((struct sNullNodeX*)come_increment_ref_count(((struct sNullNodeX*)(right_value450=(struct sNullNodeX*)come_calloc(1, sizeof(struct sNullNodeX)*(1), "21obj.c", 1649)))),info))));
                                                                                _inf_value23->_protocol_obj=_inf_obj_value23;
                                                                                _inf_value23->finalize=(void*)sNullNodeX_finalize;
                                                                                _inf_value23->clone=(void*)sNullNodeX_clone;
                                                                                _inf_value23->compile=(void*)sNullNodeX_compile;
                                                                                _inf_value23->sline=(void*)sNullNodeX_sline;
                                                                                _inf_value23->sname=(void*)sNullNodeX_sname;
                                                                                _inf_value23->terminated=(void*)sNullNodeX_terminated;
                                                                                _inf_value23->kind=(void*)sNullNodeX_kind;
                                                                                __result284__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value456=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value455=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "21obj.c", 1649)))),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value454=_inf_value23))),(_Bool)1)));
                                                                                if(right_value450 && right_value450 != __result_obj__) { come_call_finalizer(sNullNodeX_finalize,right_value450, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                                if(right_value451 && right_value451 != __result_obj__) { come_call_finalizer(sNullNodeX_finalize,right_value451, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                                if(right_value454 && right_value454 != __result_obj__) { right_value454 = come_decrement_ref_count(right_value454, ((struct sNode*)right_value454)->finalize, ((struct sNode*)right_value454)->_protocol_obj, 1, 0, 0); } 
                                                                                if(right_value455 && right_value455 != __result_obj__) { right_value455 = come_decrement_ref_count(right_value455, (void*)0, (void*)0, 1, 0, 0); }
                                                                                return __result284__;
                                                                            }
                                                                            else {
                                                                                if(_if_conditional341=memcmp(info->p,"unsafe",strlen("unsafe"))==0,                                                                                _if_conditional341) {
                                                                                    info->p+=strlen("unsafe");
                                                                                    skip_spaces_and_lf(info);
                                                                                    _inf_value24=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1655);
                                                                                    _inf_obj_value24=come_increment_ref_count(((struct sNullNodeX*)(right_value458=sNullNodeX_initialize((struct sNullNodeX*)come_increment_ref_count(((struct sNullNodeX*)(right_value457=(struct sNullNodeX*)come_calloc(1, sizeof(struct sNullNodeX)*(1), "21obj.c", 1655)))),info))));
                                                                                    _inf_value24->_protocol_obj=_inf_obj_value24;
                                                                                    _inf_value24->finalize=(void*)sNullNodeX_finalize;
                                                                                    _inf_value24->clone=(void*)sNullNodeX_clone;
                                                                                    _inf_value24->compile=(void*)sNullNodeX_compile;
                                                                                    _inf_value24->sline=(void*)sNullNodeX_sline;
                                                                                    _inf_value24->sname=(void*)sNullNodeX_sname;
                                                                                    _inf_value24->terminated=(void*)sNullNodeX_terminated;
                                                                                    _inf_value24->kind=(void*)sNullNodeX_kind;
                                                                                    __result287__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value463=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value462=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "21obj.c", 1655)))),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value461=_inf_value24))),(_Bool)1)));
                                                                                    if(right_value457 && right_value457 != __result_obj__) { come_call_finalizer(sNullNodeX_finalize,right_value457, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                                    if(right_value458 && right_value458 != __result_obj__) { come_call_finalizer(sNullNodeX_finalize,right_value458, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                                    if(right_value461 && right_value461 != __result_obj__) { right_value461 = come_decrement_ref_count(right_value461, ((struct sNode*)right_value461)->finalize, ((struct sNode*)right_value461)->_protocol_obj, 1, 0, 0); } 
                                                                                    if(right_value462 && right_value462 != __result_obj__) { right_value462 = come_decrement_ref_count(right_value462, (void*)0, (void*)0, 1, 0, 0); }
                                                                                    return __result287__;
                                                                                }
                                                                                else {
                                                                                    if(_if_conditional346=memcmp(info->p,"no-null-check",strlen("no-null-check"))==0,                                                                                    _if_conditional346) {
                                                                                        info->p+=strlen("no-null-check");
                                                                                        skip_spaces_and_lf(info);
                                                                                        _inf_value25=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1661);
                                                                                        _inf_obj_value25=come_increment_ref_count(((struct sNullNodeX*)(right_value465=sNullNodeX_initialize((struct sNullNodeX*)come_increment_ref_count(((struct sNullNodeX*)(right_value464=(struct sNullNodeX*)come_calloc(1, sizeof(struct sNullNodeX)*(1), "21obj.c", 1661)))),info))));
                                                                                        _inf_value25->_protocol_obj=_inf_obj_value25;
                                                                                        _inf_value25->finalize=(void*)sNullNodeX_finalize;
                                                                                        _inf_value25->clone=(void*)sNullNodeX_clone;
                                                                                        _inf_value25->compile=(void*)sNullNodeX_compile;
                                                                                        _inf_value25->sline=(void*)sNullNodeX_sline;
                                                                                        _inf_value25->sname=(void*)sNullNodeX_sname;
                                                                                        _inf_value25->terminated=(void*)sNullNodeX_terminated;
                                                                                        _inf_value25->kind=(void*)sNullNodeX_kind;
                                                                                        __result290__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value470=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value469=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "21obj.c", 1661)))),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value468=_inf_value25))),(_Bool)1)));
                                                                                        if(right_value464 && right_value464 != __result_obj__) { come_call_finalizer(sNullNodeX_finalize,right_value464, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                                        if(right_value465 && right_value465 != __result_obj__) { come_call_finalizer(sNullNodeX_finalize,right_value465, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                                        if(right_value468 && right_value468 != __result_obj__) { right_value468 = come_decrement_ref_count(right_value468, ((struct sNode*)right_value468)->finalize, ((struct sNode*)right_value468)->_protocol_obj, 1, 0, 0); } 
                                                                                        if(right_value469 && right_value469 != __result_obj__) { right_value469 = come_decrement_ref_count(right_value469, (void*)0, (void*)0, 1, 0, 0); }
                                                                                        return __result290__;
                                                                                    }
                                                                                    else {
                                                                                        err_msg(info,"invalid using");
                                                                                        __result291__ = __result_obj__ = ((struct optional$2voidpbool*)(right_value472=optional$2voidpbool_initialize(((struct optional$2voidpbool*)(right_value471=(struct optional$2voidpbool*)come_calloc(1, sizeof(struct optional$2voidpbool)*(1), "21obj.c", 1665))),((void*)0),(_Bool)0)));
                                                                                        if(right_value471 && right_value471 != __result_obj__) { right_value471 = come_decrement_ref_count(right_value471, (void*)0, (void*)0, 1, 0, 0); }
                                                                                        return __result291__;
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                            else {
                                                                if(_if_conditional351=charp_operator_equals(buf,"sizeof"),                                                                _if_conditional351) {
                                                                    optional$2intbool_value(((struct optional$2intbool*)(right_value473=expected_next_character(40,info))));
                                                                    if(right_value473 && right_value473 != __result_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value473, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                    is_type_name_flag_182=(_Bool)0;
                                                                    {
                                                                        p_183=info->p;
                                                                        sline_184=info->sline;
                                                                        if(_if_conditional352=xisalpha(*info->p)||*info->p==95,                                                                        _if_conditional352) {
                                                                            word_185=(char*)come_increment_ref_count(optional$2charphbool_expect(((struct optional$2charphbool*)(right_value474=parse_word(info)))));
                                                                            if(right_value474 && right_value474 != __result_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value474, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                            if(_if_conditional353=is_type_name(word_185,info),                                                                            _if_conditional353) {
                                                                                is_type_name_flag_182=(_Bool)1;
                                                                            }
                                                                            if(word_185) { word_185 = come_decrement_ref_count(word_185, (void*)0, (void*)0, 0, 0, 0); }
                                                                        }
                                                                        info->p=p_183;
                                                                        info->sline=sline_184;
                                                                    }
                                                                    if(_if_conditional354=is_type_name_flag_182,                                                                    _if_conditional354) {
                                                                        multiple_assgin_var6=optional$2tuple3$3sTypephcharphboolphbool_value(((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value475=parse_type(info,(_Bool)0,(_Bool)1))));
                                                                        type_186=(struct sType*)come_increment_ref_count(multiple_assgin_var6->v1);
                                                                        name_187=(char*)come_increment_ref_count(multiple_assgin_var6->v2);
                                                                        err_188=multiple_assgin_var6->v3;
                                                                        if(right_value475 && right_value475 != __result_obj__) { come_call_finalizer(optional$2tuple3$3sTypephcharphboolphboolp_finalize,right_value475, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                        if(_if_conditional355=!err_188,                                                                        _if_conditional355) {
                                                                            err_msg(info,"parse type");
                                                                            __result292__ = __result_obj__ = ((struct optional$2voidpbool*)(right_value477=optional$2voidpbool_initialize(((struct optional$2voidpbool*)(right_value476=(struct optional$2voidpbool*)come_calloc(1, sizeof(struct optional$2voidpbool)*(1), "21obj.c", 1693))),((void*)0),(_Bool)0)));
                                                                            if(type_186) { come_call_finalizer(sType_finalize,type_186, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                            if(name_187) { name_187 = come_decrement_ref_count(name_187, (void*)0, (void*)0, 0, 0, 0); }
                                                                            if(right_value476 && right_value476 != __result_obj__) { right_value476 = come_decrement_ref_count(right_value476, (void*)0, (void*)0, 1, 0, 0); }
                                                                            return __result292__;
                                                                        }
                                                                        optional$2intbool_value(((struct optional$2intbool*)(right_value478=expected_next_character(41,info))));
                                                                        if(right_value478 && right_value478 != __result_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value478, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                        _inf_value26=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1698);
                                                                        _inf_obj_value26=come_increment_ref_count(((struct sSizeOfNode*)(right_value480=sSizeOfNode_initialize((struct sSizeOfNode*)come_increment_ref_count(((struct sSizeOfNode*)(right_value479=(struct sSizeOfNode*)come_calloc(1, sizeof(struct sSizeOfNode)*(1), "21obj.c", 1698)))),(struct sType*)come_increment_ref_count(type_186),info))));
                                                                        _inf_value26->_protocol_obj=_inf_obj_value26;
                                                                        _inf_value26->finalize=(void*)sSizeOfNode_finalize;
                                                                        _inf_value26->clone=(void*)sSizeOfNode_clone;
                                                                        _inf_value26->compile=(void*)sSizeOfNode_compile;
                                                                        _inf_value26->sline=(void*)sSizeOfNode_sline;
                                                                        _inf_value26->sname=(void*)sSizeOfNode_sname;
                                                                        _inf_value26->terminated=(void*)sSizeOfNode_terminated;
                                                                        _inf_value26->kind=(void*)sSizeOfNode_kind;
                                                                        __result295__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value486=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value485=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "21obj.c", 1698)))),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value484=_inf_value26))),(_Bool)1)));
                                                                        if(type_186) { come_call_finalizer(sType_finalize,type_186, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                        if(name_187) { name_187 = come_decrement_ref_count(name_187, (void*)0, (void*)0, 0, 0, 0); }
                                                                        if(right_value479 && right_value479 != __result_obj__) { come_call_finalizer(sSizeOfNode_finalize,right_value479, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                        if(right_value480 && right_value480 != __result_obj__) { come_call_finalizer(sSizeOfNode_finalize,right_value480, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                        if(right_value484 && right_value484 != __result_obj__) { right_value484 = come_decrement_ref_count(right_value484, ((struct sNode*)right_value484)->finalize, ((struct sNode*)right_value484)->_protocol_obj, 1, 0, 0); } 
                                                                        if(right_value485 && right_value485 != __result_obj__) { right_value485 = come_decrement_ref_count(right_value485, (void*)0, (void*)0, 1, 0, 0); }
                                                                        return __result295__;
                                                                        if(type_186) { come_call_finalizer(sType_finalize,type_186, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                        if(name_187) { name_187 = come_decrement_ref_count(name_187, (void*)0, (void*)0, 0, 0, 0); }
                                                                    }
                                                                    else {
                                                                        exp_190=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value487=expression_v13(info))));
                                                                        if(right_value487 && right_value487 != __result_obj__) { right_value487 = come_decrement_ref_count(right_value487, ((struct sNode*)right_value487)->finalize, ((struct sNode*)right_value487)->_protocol_obj, 1, 0, 0); } 
                                                                        optional$2intbool_value(((struct optional$2intbool*)(right_value488=expected_next_character(41,info))));
                                                                        if(right_value488 && right_value488 != __result_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value488, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                        _inf_value27=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1705);
                                                                        _inf_obj_value27=come_increment_ref_count(((struct sSizeOfExpNode*)(right_value490=sSizeOfExpNode_initialize((struct sSizeOfExpNode*)come_increment_ref_count(((struct sSizeOfExpNode*)(right_value489=(struct sSizeOfExpNode*)come_calloc(1, sizeof(struct sSizeOfExpNode)*(1), "21obj.c", 1705)))),(struct sNode*)come_increment_ref_count(exp_190),info))));
                                                                        _inf_value27->_protocol_obj=_inf_obj_value27;
                                                                        _inf_value27->finalize=(void*)sSizeOfExpNode_finalize;
                                                                        _inf_value27->clone=(void*)sSizeOfExpNode_clone;
                                                                        _inf_value27->compile=(void*)sSizeOfExpNode_compile;
                                                                        _inf_value27->sline=(void*)sSizeOfExpNode_sline;
                                                                        _inf_value27->sname=(void*)sSizeOfExpNode_sname;
                                                                        _inf_value27->terminated=(void*)sSizeOfExpNode_terminated;
                                                                        _inf_value27->kind=(void*)sSizeOfExpNode_kind;
                                                                        __result298__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value496=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value495=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "21obj.c", 1705)))),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value494=_inf_value27))),(_Bool)1)));
                                                                        if(exp_190) { exp_190 = come_decrement_ref_count(exp_190, ((struct sNode*)exp_190)->finalize, ((struct sNode*)exp_190)->_protocol_obj, 0, 0, 0); } 
                                                                        if(right_value489 && right_value489 != __result_obj__) { come_call_finalizer(sSizeOfExpNode_finalize,right_value489, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                        if(right_value490 && right_value490 != __result_obj__) { come_call_finalizer(sSizeOfExpNode_finalize,right_value490, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                        if(right_value494 && right_value494 != __result_obj__) { right_value494 = come_decrement_ref_count(right_value494, ((struct sNode*)right_value494)->finalize, ((struct sNode*)right_value494)->_protocol_obj, 1, 0, 0); } 
                                                                        if(right_value495 && right_value495 != __result_obj__) { right_value495 = come_decrement_ref_count(right_value495, (void*)0, (void*)0, 1, 0, 0); }
                                                                        return __result298__;
                                                                        if(exp_190) { exp_190 = come_decrement_ref_count(exp_190, ((struct sNode*)exp_190)->finalize, ((struct sNode*)exp_190)->_protocol_obj, 0, 0, 0); } 
                                                                    }
                                                                }
                                                                else {
                                                                    if(_if_conditional368=charp_operator_equals(buf,"_Alignof"),                                                                    _if_conditional368) {
                                                                        optional$2intbool_value(((struct optional$2intbool*)(right_value497=expected_next_character(40,info))));
                                                                        if(right_value497 && right_value497 != __result_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value497, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                        is_type_name_flag_192=(_Bool)0;
                                                                        {
                                                                            p_193=info->p;
                                                                            sline_194=info->sline;
                                                                            if(_if_conditional369=xisalpha(*info->p)||*info->p==95,                                                                            _if_conditional369) {
                                                                                word_195=(char*)come_increment_ref_count(optional$2charphbool_expect(((struct optional$2charphbool*)(right_value498=parse_word(info)))));
                                                                                if(right_value498 && right_value498 != __result_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value498, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                                if(_if_conditional370=is_type_name(word_195,info),                                                                                _if_conditional370) {
                                                                                    is_type_name_flag_192=(_Bool)1;
                                                                                }
                                                                                if(word_195) { word_195 = come_decrement_ref_count(word_195, (void*)0, (void*)0, 0, 0, 0); }
                                                                            }
                                                                            info->p=p_193;
                                                                            info->sline=sline_194;
                                                                        }
                                                                        if(_if_conditional371=is_type_name_flag_192,                                                                        _if_conditional371) {
                                                                            multiple_assgin_var7=optional$2tuple3$3sTypephcharphboolphbool_value(((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value499=parse_type(info,(_Bool)0,(_Bool)1))));
                                                                            type_196=(struct sType*)come_increment_ref_count(multiple_assgin_var7->v1);
                                                                            name_197=(char*)come_increment_ref_count(multiple_assgin_var7->v2);
                                                                            err_198=multiple_assgin_var7->v3;
                                                                            if(right_value499 && right_value499 != __result_obj__) { come_call_finalizer(optional$2tuple3$3sTypephcharphboolphboolp_finalize,right_value499, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                            if(_if_conditional372=!err_198,                                                                            _if_conditional372) {
                                                                                err_msg(info,"parse type");
                                                                                __result299__ = __result_obj__ = ((struct optional$2voidpbool*)(right_value501=optional$2voidpbool_initialize(((struct optional$2voidpbool*)(right_value500=(struct optional$2voidpbool*)come_calloc(1, sizeof(struct optional$2voidpbool)*(1), "21obj.c", 1733))),((void*)0),(_Bool)0)));
                                                                                if(type_196) { come_call_finalizer(sType_finalize,type_196, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                                if(name_197) { name_197 = come_decrement_ref_count(name_197, (void*)0, (void*)0, 0, 0, 0); }
                                                                                if(right_value500 && right_value500 != __result_obj__) { right_value500 = come_decrement_ref_count(right_value500, (void*)0, (void*)0, 1, 0, 0); }
                                                                                return __result299__;
                                                                            }
                                                                            optional$2intbool_value(((struct optional$2intbool*)(right_value502=expected_next_character(41,info))));
                                                                            if(right_value502 && right_value502 != __result_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value502, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                            _inf_value28=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1738);
                                                                            _inf_obj_value28=come_increment_ref_count(((struct sAlignOfNode*)(right_value504=sAlignOfNode_initialize((struct sAlignOfNode*)come_increment_ref_count(((struct sAlignOfNode*)(right_value503=(struct sAlignOfNode*)come_calloc(1, sizeof(struct sAlignOfNode)*(1), "21obj.c", 1738)))),(struct sType*)come_increment_ref_count(type_196),info))));
                                                                            _inf_value28->_protocol_obj=_inf_obj_value28;
                                                                            _inf_value28->finalize=(void*)sAlignOfNode_finalize;
                                                                            _inf_value28->clone=(void*)sAlignOfNode_clone;
                                                                            _inf_value28->compile=(void*)sAlignOfNode_compile;
                                                                            _inf_value28->sline=(void*)sAlignOfNode_sline;
                                                                            _inf_value28->sname=(void*)sAlignOfNode_sname;
                                                                            _inf_value28->terminated=(void*)sAlignOfNode_terminated;
                                                                            _inf_value28->kind=(void*)sAlignOfNode_kind;
                                                                            __result302__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value510=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value509=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "21obj.c", 1738)))),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value508=_inf_value28))),(_Bool)1)));
                                                                            if(type_196) { come_call_finalizer(sType_finalize,type_196, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                            if(name_197) { name_197 = come_decrement_ref_count(name_197, (void*)0, (void*)0, 0, 0, 0); }
                                                                            if(right_value503 && right_value503 != __result_obj__) { come_call_finalizer(sAlignOfNode_finalize,right_value503, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                            if(right_value504 && right_value504 != __result_obj__) { come_call_finalizer(sAlignOfNode_finalize,right_value504, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                            if(right_value508 && right_value508 != __result_obj__) { right_value508 = come_decrement_ref_count(right_value508, ((struct sNode*)right_value508)->finalize, ((struct sNode*)right_value508)->_protocol_obj, 1, 0, 0); } 
                                                                            if(right_value509 && right_value509 != __result_obj__) { right_value509 = come_decrement_ref_count(right_value509, (void*)0, (void*)0, 1, 0, 0); }
                                                                            return __result302__;
                                                                            if(type_196) { come_call_finalizer(sType_finalize,type_196, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                            if(name_197) { name_197 = come_decrement_ref_count(name_197, (void*)0, (void*)0, 0, 0, 0); }
                                                                        }
                                                                        else {
                                                                            exp_200=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value511=expression_v13(info))));
                                                                            if(right_value511 && right_value511 != __result_obj__) { right_value511 = come_decrement_ref_count(right_value511, ((struct sNode*)right_value511)->finalize, ((struct sNode*)right_value511)->_protocol_obj, 1, 0, 0); } 
                                                                            optional$2intbool_value(((struct optional$2intbool*)(right_value512=expected_next_character(41,info))));
                                                                            if(right_value512 && right_value512 != __result_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value512, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                            _inf_value29=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1745);
                                                                            _inf_obj_value29=come_increment_ref_count(((struct sAlignOfExpNode*)(right_value514=sAlignOfExpNode_initialize((struct sAlignOfExpNode*)come_increment_ref_count(((struct sAlignOfExpNode*)(right_value513=(struct sAlignOfExpNode*)come_calloc(1, sizeof(struct sAlignOfExpNode)*(1), "21obj.c", 1745)))),(struct sNode*)come_increment_ref_count(exp_200),info))));
                                                                            _inf_value29->_protocol_obj=_inf_obj_value29;
                                                                            _inf_value29->finalize=(void*)sAlignOfExpNode_finalize;
                                                                            _inf_value29->clone=(void*)sAlignOfExpNode_clone;
                                                                            _inf_value29->compile=(void*)sAlignOfExpNode_compile;
                                                                            _inf_value29->sline=(void*)sAlignOfExpNode_sline;
                                                                            _inf_value29->sname=(void*)sAlignOfExpNode_sname;
                                                                            _inf_value29->terminated=(void*)sAlignOfExpNode_terminated;
                                                                            _inf_value29->kind=(void*)sAlignOfExpNode_kind;
                                                                            __result305__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value520=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value519=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "21obj.c", 1745)))),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value518=_inf_value29))),(_Bool)1)));
                                                                            if(exp_200) { exp_200 = come_decrement_ref_count(exp_200, ((struct sNode*)exp_200)->finalize, ((struct sNode*)exp_200)->_protocol_obj, 0, 0, 0); } 
                                                                            if(right_value513 && right_value513 != __result_obj__) { come_call_finalizer(sAlignOfExpNode_finalize,right_value513, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                            if(right_value514 && right_value514 != __result_obj__) { come_call_finalizer(sAlignOfExpNode_finalize,right_value514, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                            if(right_value518 && right_value518 != __result_obj__) { right_value518 = come_decrement_ref_count(right_value518, ((struct sNode*)right_value518)->finalize, ((struct sNode*)right_value518)->_protocol_obj, 1, 0, 0); } 
                                                                            if(right_value519 && right_value519 != __result_obj__) { right_value519 = come_decrement_ref_count(right_value519, (void*)0, (void*)0, 1, 0, 0); }
                                                                            return __result305__;
                                                                            if(exp_200) { exp_200 = come_decrement_ref_count(exp_200, ((struct sNode*)exp_200)->finalize, ((struct sNode*)exp_200)->_protocol_obj, 0, 0, 0); } 
                                                                        }
                                                                    }
                                                                    else {
                                                                        if(_if_conditional385=charp_operator_equals(buf,"__alignof__"),                                                                        _if_conditional385) {
                                                                            optional$2intbool_value(((struct optional$2intbool*)(right_value521=expected_next_character(40,info))));
                                                                            if(right_value521 && right_value521 != __result_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value521, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                            is_type_name_flag_202=(_Bool)0;
                                                                            {
                                                                                p_203=info->p;
                                                                                sline_204=info->sline;
                                                                                if(_if_conditional386=xisalpha(*info->p)||*info->p==95,                                                                                _if_conditional386) {
                                                                                    word_205=(char*)come_increment_ref_count(optional$2charphbool_expect(((struct optional$2charphbool*)(right_value522=parse_word(info)))));
                                                                                    if(right_value522 && right_value522 != __result_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value522, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                                    if(_if_conditional387=is_type_name(word_205,info),                                                                                    _if_conditional387) {
                                                                                        is_type_name_flag_202=(_Bool)1;
                                                                                    }
                                                                                    if(word_205) { word_205 = come_decrement_ref_count(word_205, (void*)0, (void*)0, 0, 0, 0); }
                                                                                }
                                                                                info->p=p_203;
                                                                                info->sline=sline_204;
                                                                            }
                                                                            if(_if_conditional388=is_type_name_flag_202,                                                                            _if_conditional388) {
                                                                                multiple_assgin_var8=optional$2tuple3$3sTypephcharphboolphbool_value(((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value523=parse_type(info,(_Bool)0,(_Bool)1))));
                                                                                type_206=(struct sType*)come_increment_ref_count(multiple_assgin_var8->v1);
                                                                                name_207=(char*)come_increment_ref_count(multiple_assgin_var8->v2);
                                                                                err_208=multiple_assgin_var8->v3;
                                                                                if(right_value523 && right_value523 != __result_obj__) { come_call_finalizer(optional$2tuple3$3sTypephcharphboolphboolp_finalize,right_value523, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                                if(_if_conditional389=!err_208,                                                                                _if_conditional389) {
                                                                                    err_msg(info,"parse type");
                                                                                    __result306__ = __result_obj__ = ((struct optional$2voidpbool*)(right_value525=optional$2voidpbool_initialize(((struct optional$2voidpbool*)(right_value524=(struct optional$2voidpbool*)come_calloc(1, sizeof(struct optional$2voidpbool)*(1), "21obj.c", 1773))),((void*)0),(_Bool)0)));
                                                                                    if(type_206) { come_call_finalizer(sType_finalize,type_206, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                                    if(name_207) { name_207 = come_decrement_ref_count(name_207, (void*)0, (void*)0, 0, 0, 0); }
                                                                                    if(right_value524 && right_value524 != __result_obj__) { right_value524 = come_decrement_ref_count(right_value524, (void*)0, (void*)0, 1, 0, 0); }
                                                                                    return __result306__;
                                                                                }
                                                                                optional$2intbool_value(((struct optional$2intbool*)(right_value526=expected_next_character(41,info))));
                                                                                if(right_value526 && right_value526 != __result_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value526, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                                _inf_value30=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1778);
                                                                                _inf_obj_value30=come_increment_ref_count(((struct sAlignOfNode2*)(right_value528=sAlignOfNode2_initialize((struct sAlignOfNode2*)come_increment_ref_count(((struct sAlignOfNode2*)(right_value527=(struct sAlignOfNode2*)come_calloc(1, sizeof(struct sAlignOfNode2)*(1), "21obj.c", 1778)))),(struct sType*)come_increment_ref_count(type_206),info))));
                                                                                _inf_value30->_protocol_obj=_inf_obj_value30;
                                                                                _inf_value30->finalize=(void*)sAlignOfNode2_finalize;
                                                                                _inf_value30->clone=(void*)sAlignOfNode2_clone;
                                                                                _inf_value30->compile=(void*)sAlignOfNode2_compile;
                                                                                _inf_value30->sline=(void*)sAlignOfNode2_sline;
                                                                                _inf_value30->sname=(void*)sAlignOfNode2_sname;
                                                                                _inf_value30->terminated=(void*)sAlignOfNode2_terminated;
                                                                                _inf_value30->kind=(void*)sAlignOfNode2_kind;
                                                                                __result309__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value534=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value533=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "21obj.c", 1778)))),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value532=_inf_value30))),(_Bool)1)));
                                                                                if(type_206) { come_call_finalizer(sType_finalize,type_206, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                                if(name_207) { name_207 = come_decrement_ref_count(name_207, (void*)0, (void*)0, 0, 0, 0); }
                                                                                if(right_value527 && right_value527 != __result_obj__) { come_call_finalizer(sAlignOfNode2_finalize,right_value527, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                                if(right_value528 && right_value528 != __result_obj__) { come_call_finalizer(sAlignOfNode2_finalize,right_value528, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                                if(right_value532 && right_value532 != __result_obj__) { right_value532 = come_decrement_ref_count(right_value532, ((struct sNode*)right_value532)->finalize, ((struct sNode*)right_value532)->_protocol_obj, 1, 0, 0); } 
                                                                                if(right_value533 && right_value533 != __result_obj__) { right_value533 = come_decrement_ref_count(right_value533, (void*)0, (void*)0, 1, 0, 0); }
                                                                                return __result309__;
                                                                                if(type_206) { come_call_finalizer(sType_finalize,type_206, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                                if(name_207) { name_207 = come_decrement_ref_count(name_207, (void*)0, (void*)0, 0, 0, 0); }
                                                                            }
                                                                            else {
                                                                                exp_210=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value535=expression_v13(info))));
                                                                                if(right_value535 && right_value535 != __result_obj__) { right_value535 = come_decrement_ref_count(right_value535, ((struct sNode*)right_value535)->finalize, ((struct sNode*)right_value535)->_protocol_obj, 1, 0, 0); } 
                                                                                optional$2intbool_value(((struct optional$2intbool*)(right_value536=expected_next_character(41,info))));
                                                                                if(right_value536 && right_value536 != __result_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value536, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                                _inf_value31=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1785);
                                                                                _inf_obj_value31=come_increment_ref_count(((struct sAlignOfExpNode2*)(right_value538=sAlignOfExpNode2_initialize((struct sAlignOfExpNode2*)come_increment_ref_count(((struct sAlignOfExpNode2*)(right_value537=(struct sAlignOfExpNode2*)come_calloc(1, sizeof(struct sAlignOfExpNode2)*(1), "21obj.c", 1785)))),(struct sNode*)come_increment_ref_count(exp_210),info))));
                                                                                _inf_value31->_protocol_obj=_inf_obj_value31;
                                                                                _inf_value31->finalize=(void*)sAlignOfExpNode2_finalize;
                                                                                _inf_value31->clone=(void*)sAlignOfExpNode2_clone;
                                                                                _inf_value31->compile=(void*)sAlignOfExpNode2_compile;
                                                                                _inf_value31->sline=(void*)sAlignOfExpNode2_sline;
                                                                                _inf_value31->sname=(void*)sAlignOfExpNode2_sname;
                                                                                _inf_value31->terminated=(void*)sAlignOfExpNode2_terminated;
                                                                                _inf_value31->kind=(void*)sAlignOfExpNode2_kind;
                                                                                __result312__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value544=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value543=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "21obj.c", 1785)))),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value542=_inf_value31))),(_Bool)1)));
                                                                                if(exp_210) { exp_210 = come_decrement_ref_count(exp_210, ((struct sNode*)exp_210)->finalize, ((struct sNode*)exp_210)->_protocol_obj, 0, 0, 0); } 
                                                                                if(right_value537 && right_value537 != __result_obj__) { come_call_finalizer(sAlignOfExpNode2_finalize,right_value537, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                                if(right_value538 && right_value538 != __result_obj__) { come_call_finalizer(sAlignOfExpNode2_finalize,right_value538, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                                if(right_value542 && right_value542 != __result_obj__) { right_value542 = come_decrement_ref_count(right_value542, ((struct sNode*)right_value542)->finalize, ((struct sNode*)right_value542)->_protocol_obj, 1, 0, 0); } 
                                                                                if(right_value543 && right_value543 != __result_obj__) { right_value543 = come_decrement_ref_count(right_value543, (void*)0, (void*)0, 1, 0, 0); }
                                                                                return __result312__;
                                                                                if(exp_210) { exp_210 = come_decrement_ref_count(exp_210, ((struct sNode*)exp_210)->finalize, ((struct sNode*)exp_210)->_protocol_obj, 0, 0, 0); } 
                                                                            }
                                                                        }
                                                                        else {
                                                                            if(_if_conditional402=charp_operator_equals(buf,"_Alignas"),                                                                            _if_conditional402) {
                                                                                optional$2intbool_value(((struct optional$2intbool*)(right_value545=expected_next_character(40,info))));
                                                                                if(right_value545 && right_value545 != __result_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value545, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                                is_type_name_flag_212=(_Bool)0;
                                                                                {
                                                                                    p_213=info->p;
                                                                                    sline_214=info->sline;
                                                                                    if(_if_conditional403=xisalpha(*info->p)||*info->p==95,                                                                                    _if_conditional403) {
                                                                                        word_215=(char*)come_increment_ref_count(optional$2charphbool_expect(((struct optional$2charphbool*)(right_value546=parse_word(info)))));
                                                                                        if(right_value546 && right_value546 != __result_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value546, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                                        if(_if_conditional404=is_type_name(word_215,info),                                                                                        _if_conditional404) {
                                                                                            is_type_name_flag_212=(_Bool)1;
                                                                                        }
                                                                                        if(word_215) { word_215 = come_decrement_ref_count(word_215, (void*)0, (void*)0, 0, 0, 0); }
                                                                                    }
                                                                                    info->p=p_213;
                                                                                    info->sline=sline_214;
                                                                                }
                                                                                if(_if_conditional405=is_type_name_flag_212,                                                                                _if_conditional405) {
                                                                                    multiple_assgin_var9=optional$2tuple3$3sTypephcharphboolphbool_value(((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value547=parse_type(info,(_Bool)0,(_Bool)1))));
                                                                                    type_216=(struct sType*)come_increment_ref_count(multiple_assgin_var9->v1);
                                                                                    name_217=(char*)come_increment_ref_count(multiple_assgin_var9->v2);
                                                                                    err_218=multiple_assgin_var9->v3;
                                                                                    if(right_value547 && right_value547 != __result_obj__) { come_call_finalizer(optional$2tuple3$3sTypephcharphboolphboolp_finalize,right_value547, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                                    if(_if_conditional406=!err_218,                                                                                    _if_conditional406) {
                                                                                        err_msg(info,"parse type");
                                                                                        __result313__ = __result_obj__ = ((struct optional$2voidpbool*)(right_value549=optional$2voidpbool_initialize(((struct optional$2voidpbool*)(right_value548=(struct optional$2voidpbool*)come_calloc(1, sizeof(struct optional$2voidpbool)*(1), "21obj.c", 1813))),((void*)0),(_Bool)0)));
                                                                                        if(type_216) { come_call_finalizer(sType_finalize,type_216, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                                        if(name_217) { name_217 = come_decrement_ref_count(name_217, (void*)0, (void*)0, 0, 0, 0); }
                                                                                        if(right_value548 && right_value548 != __result_obj__) { right_value548 = come_decrement_ref_count(right_value548, (void*)0, (void*)0, 1, 0, 0); }
                                                                                        return __result313__;
                                                                                    }
                                                                                    optional$2intbool_value(((struct optional$2intbool*)(right_value550=expected_next_character(41,info))));
                                                                                    if(right_value550 && right_value550 != __result_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value550, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                                    _inf_value32=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1818);
                                                                                    _inf_obj_value32=come_increment_ref_count(((struct sAlignAsNode*)(right_value552=sAlignAsNode_initialize((struct sAlignAsNode*)come_increment_ref_count(((struct sAlignAsNode*)(right_value551=(struct sAlignAsNode*)come_calloc(1, sizeof(struct sAlignAsNode)*(1), "21obj.c", 1818)))),(struct sType*)come_increment_ref_count(type_216),info))));
                                                                                    _inf_value32->_protocol_obj=_inf_obj_value32;
                                                                                    _inf_value32->finalize=(void*)sAlignAsNode_finalize;
                                                                                    _inf_value32->clone=(void*)sAlignAsNode_clone;
                                                                                    _inf_value32->compile=(void*)sAlignAsNode_compile;
                                                                                    _inf_value32->sline=(void*)sAlignAsNode_sline;
                                                                                    _inf_value32->sname=(void*)sAlignAsNode_sname;
                                                                                    _inf_value32->terminated=(void*)sAlignAsNode_terminated;
                                                                                    _inf_value32->kind=(void*)sAlignAsNode_kind;
                                                                                    __result316__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value558=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value557=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "21obj.c", 1818)))),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value556=_inf_value32))),(_Bool)1)));
                                                                                    if(type_216) { come_call_finalizer(sType_finalize,type_216, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                                    if(name_217) { name_217 = come_decrement_ref_count(name_217, (void*)0, (void*)0, 0, 0, 0); }
                                                                                    if(right_value551 && right_value551 != __result_obj__) { come_call_finalizer(sAlignAsNode_finalize,right_value551, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                                    if(right_value552 && right_value552 != __result_obj__) { come_call_finalizer(sAlignAsNode_finalize,right_value552, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                                    if(right_value556 && right_value556 != __result_obj__) { right_value556 = come_decrement_ref_count(right_value556, ((struct sNode*)right_value556)->finalize, ((struct sNode*)right_value556)->_protocol_obj, 1, 0, 0); } 
                                                                                    if(right_value557 && right_value557 != __result_obj__) { right_value557 = come_decrement_ref_count(right_value557, (void*)0, (void*)0, 1, 0, 0); }
                                                                                    return __result316__;
                                                                                    if(type_216) { come_call_finalizer(sType_finalize,type_216, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                                    if(name_217) { name_217 = come_decrement_ref_count(name_217, (void*)0, (void*)0, 0, 0, 0); }
                                                                                }
                                                                                else {
                                                                                    exp_220=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value559=expression_v13(info))));
                                                                                    if(right_value559 && right_value559 != __result_obj__) { right_value559 = come_decrement_ref_count(right_value559, ((struct sNode*)right_value559)->finalize, ((struct sNode*)right_value559)->_protocol_obj, 1, 0, 0); } 
                                                                                    optional$2intbool_value(((struct optional$2intbool*)(right_value560=expected_next_character(41,info))));
                                                                                    if(right_value560 && right_value560 != __result_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value560, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                                    _inf_value33=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1825);
                                                                                    _inf_obj_value33=come_increment_ref_count(((struct sAlignAsExpNode*)(right_value562=sAlignAsExpNode_initialize((struct sAlignAsExpNode*)come_increment_ref_count(((struct sAlignAsExpNode*)(right_value561=(struct sAlignAsExpNode*)come_calloc(1, sizeof(struct sAlignAsExpNode)*(1), "21obj.c", 1825)))),(struct sNode*)come_increment_ref_count(exp_220),info))));
                                                                                    _inf_value33->_protocol_obj=_inf_obj_value33;
                                                                                    _inf_value33->finalize=(void*)sAlignAsExpNode_finalize;
                                                                                    _inf_value33->clone=(void*)sAlignAsExpNode_clone;
                                                                                    _inf_value33->compile=(void*)sAlignAsExpNode_compile;
                                                                                    _inf_value33->sline=(void*)sAlignAsExpNode_sline;
                                                                                    _inf_value33->sname=(void*)sAlignAsExpNode_sname;
                                                                                    _inf_value33->terminated=(void*)sAlignAsExpNode_terminated;
                                                                                    _inf_value33->kind=(void*)sAlignAsExpNode_kind;
                                                                                    __result319__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value568=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value567=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "21obj.c", 1825)))),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value566=_inf_value33))),(_Bool)1)));
                                                                                    if(exp_220) { exp_220 = come_decrement_ref_count(exp_220, ((struct sNode*)exp_220)->finalize, ((struct sNode*)exp_220)->_protocol_obj, 0, 0, 0); } 
                                                                                    if(right_value561 && right_value561 != __result_obj__) { come_call_finalizer(sAlignAsExpNode_finalize,right_value561, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                                    if(right_value562 && right_value562 != __result_obj__) { come_call_finalizer(sAlignAsExpNode_finalize,right_value562, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                                    if(right_value566 && right_value566 != __result_obj__) { right_value566 = come_decrement_ref_count(right_value566, ((struct sNode*)right_value566)->finalize, ((struct sNode*)right_value566)->_protocol_obj, 1, 0, 0); } 
                                                                                    if(right_value567 && right_value567 != __result_obj__) { right_value567 = come_decrement_ref_count(right_value567, (void*)0, (void*)0, 1, 0, 0); }
                                                                                    return __result319__;
                                                                                    if(exp_220) { exp_220 = come_decrement_ref_count(exp_220, ((struct sNode*)exp_220)->finalize, ((struct sNode*)exp_220)->_protocol_obj, 0, 0, 0); } 
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    __current_stack1__.buf = &buf;
    __current_stack1__.head = &head;
    __current_stack1__.head_sline = &head_sline;
    __current_stack1__.info = &info;
    result_222=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value572=optional$2sNodephbool_catch(((struct optional$2sNodephbool*)(right_value569=string_node_v20(buf,head,head_sline,info))),&__current_stack1__,(void*)method_block1_21objc))));
                        if(__current_stack1__.__method_block_result_kind__ == 3)
                    {
                        return (struct sNode*)__current_stack1__.__method_block_return_value__;
                    }
    if(right_value569 && right_value569 != __result_obj__) { come_call_finalizer(optional$2sNodephboolp_finalize,right_value569, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value572 && right_value572 != __result_obj__) { right_value572 = come_decrement_ref_count(right_value572, ((struct sNode*)right_value572)->finalize, ((struct sNode*)right_value572)->_protocol_obj, 1, 0, 0); } 
    __result322__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value574=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value573=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "21obj.c", 1833)))),(struct sNode*)come_increment_ref_count(result_222),(_Bool)1)));
    if(result_222) { result_222 = come_decrement_ref_count(result_222, ((struct sNode*)result_222)->finalize, ((struct sNode*)result_222)->_protocol_obj, 0, 0, 0); } 
    if(right_value573 && right_value573 != __result_obj__) { right_value573 = come_decrement_ref_count(right_value573, (void*)0, (void*)0, 1, 0, 0); }
    return __result322__;
    if(result_222) { result_222 = come_decrement_ref_count(result_222, ((struct sNode*)result_222)->finalize, ((struct sNode*)result_222)->_protocol_obj, 0, 0, 0); } 
}

static struct tuple3$3sTypephcharphbool* optional$2tuple3$3sTypephcharphboolphbool_value(struct optional$2tuple3$3sTypephcharphboolphbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional202;
struct tuple3$3sTypephcharphbool* default_value_136;
struct tuple3$3sTypephcharphbool* __result216__;
struct tuple3$3sTypephcharphbool* __result217__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_136, 0, sizeof(struct tuple3$3sTypephcharphbool*));
            if(_if_conditional202=self==((void*)0),            _if_conditional202) {
                memset(&default_value_136,0,sizeof(struct tuple3$3sTypephcharphbool*));
                __result216__ = __result_obj__ = default_value_136;
                return __result216__;
            }
            else {
                __result217__ = __result_obj__ = self->v1;
                return __result217__;
            }
}

static void optional$2tuple3$3sTypephcharphboolphboolp_finalize(struct optional$2tuple3$3sTypephcharphboolphbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional203;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional203=self!=((void*)0)&&self->v1!=((void*)0),            _if_conditional203) {
                if(self->v1) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional204;
_Bool _if_conditional205;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional204=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional204) {
                        if(self->v1) { come_call_finalizer(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    if(_if_conditional205=self!=((void*)0)&&self->v2!=((void*)0),                    _if_conditional205) {
                        if(self->v2) { self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, 0); }
                    }
}

static struct optional$2voidpbool* optional$2voidpbool_initialize(struct optional$2voidpbool* self, void* v1, _Bool v2){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
struct optional$2voidpbool* __result218__;
memset(&__result_obj__, 0, sizeof(void*));
                self->v1=v1;
                self->v2=v2;
                __result218__ = __result_obj__ = self;
                if(self) { come_call_finalizer(optional$2voidpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result218__;
                if(self) { come_call_finalizer(optional$2voidpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2voidpboolp_finalize(struct optional$2voidpbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static int optional$2intbool_value(struct optional$2intbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional209;
int default_value_142;
int __result220__;
int __result221__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_142, 0, sizeof(int));
                    if(_if_conditional209=self==((void*)0),                    _if_conditional209) {
                        memset(&default_value_142,0,sizeof(int));
                        __result220__ = default_value_142;
                        return __result220__;
                    }
                    else {
                        __result221__ = self->v1;
                        return __result221__;
                    }
}

static void optional$2intboolp_finalize(struct optional$2intbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct optional$2sNodephbool* optional$2sNodephbool_initialize(struct optional$2sNodephbool* self, struct sNode* v1, _Bool v2){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
struct sNode* __dec_obj122;
struct optional$2sNodephbool* __result224__;
memset(&__result_obj__, 0, sizeof(void*));
                    __dec_obj122=self->v1;
                    self->v1=(struct sNode*)come_increment_ref_count(v1);
                    if(__dec_obj122) { __dec_obj122 = come_decrement_ref_count(__dec_obj122, ((struct sNode*)__dec_obj122)->finalize, ((struct sNode*)__dec_obj122)->_protocol_obj, 0,0,0); }
                    self->v2=v2;
                    __result224__ = __result_obj__ = self;
                    if(self) { come_call_finalizer(optional$2sNodephboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    if(v1) { v1 = come_decrement_ref_count(v1, ((struct sNode*)v1)->finalize, ((struct sNode*)v1)->_protocol_obj, 0, 1, 0); } 
                    return __result224__;
                    if(self) { come_call_finalizer(optional$2sNodephboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    if(v1) { v1 = come_decrement_ref_count(v1, ((struct sNode*)v1)->finalize, ((struct sNode*)v1)->_protocol_obj, 0, 1, 0); } 
}

static void optional$2sNodephboolp_finalize(struct optional$2sNodephbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional218;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional218=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional218) {
                            if(self->v1) { self->v1 = come_decrement_ref_count(self->v1, ((struct sNode*)self->v1)->finalize, ((struct sNode*)self->v1)->_protocol_obj, 0, 0, 0); } 
                        }
}

static void sNewNode_finalize(struct sNewNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional225;
_Bool _if_conditional226;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional225=self!=((void*)0)&&self->type!=((void*)0),                _if_conditional225) {
                    if(self->type) { come_call_finalizer(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                if(_if_conditional226=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional226) {
                    if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                }
}

static struct sNewNode* sNewNode_clone(struct sNewNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional227;
struct sNewNode* __result229__;
void* right_value301;
struct sNewNode* result_147;
_Bool _if_conditional228;
void* right_value302;
struct sType* __dec_obj125;
_Bool _if_conditional229;
_Bool _if_conditional230;
void* right_value303;
char* __dec_obj126;
struct sNewNode* __result230__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_147, 0, sizeof(struct sNewNode*));
                if(_if_conditional227=self==(void*)0,                _if_conditional227) {
                    __result229__ = __result_obj__ = (void*)0;
                    return __result229__;
                }
                result_147=(struct sNewNode*)come_increment_ref_count(((struct sNewNode*)(right_value301=(struct sNewNode*)come_calloc(1, sizeof(struct sNewNode)*(1), "sNewNode_clone", 3))));
                if(right_value301 && right_value301 != __result_obj__) { come_call_finalizer(sNewNode_finalize,right_value301, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(_if_conditional228=self!=((void*)0)&&self->type!=((void*)0),                _if_conditional228) {
                    __dec_obj125=result_147->type;
                    result_147->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value302=sType_clone(self->type))));
                    if(__dec_obj125) { come_call_finalizer(sType_finalize,__dec_obj125, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(right_value302 && right_value302 != __result_obj__) { come_call_finalizer(sType_finalize,right_value302, (void*)0, (void*)0, 0, 1, 0, 0); }
                }
                if(_if_conditional229=self!=((void*)0),                _if_conditional229) {
                    result_147->sline=self->sline;
                }
                if(_if_conditional230=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional230) {
                    __dec_obj126=result_147->sname;
                    result_147->sname=(char*)come_increment_ref_count(((char*)(right_value303=string_clone(self->sname))));
                    if(__dec_obj126) { __dec_obj126 = come_decrement_ref_count(__dec_obj126, (void*)0, (void*)0, 0,0,0); }
                    if(right_value303 && right_value303 != __result_obj__) { right_value303 = come_decrement_ref_count(right_value303, (void*)0, (void*)0, 1, 0, 0); }
                }
                __result230__ = __result_obj__ = result_147;
                if(result_147) { come_call_finalizer(sNewNode_finalize,result_147, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result230__;
                if(result_147) { come_call_finalizer(sNewNode_finalize,result_147, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sTrueNode_finalize(struct sTrueNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional232;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional232=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional232) {
                    if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                }
}

static struct sTrueNode* sTrueNode_clone(struct sTrueNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional233;
struct sTrueNode* __result232__;
void* right_value309;
struct sTrueNode* result_148;
_Bool _if_conditional234;
_Bool _if_conditional235;
void* right_value310;
char* __dec_obj127;
struct sTrueNode* __result233__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_148, 0, sizeof(struct sTrueNode*));
                if(_if_conditional233=self==(void*)0,                _if_conditional233) {
                    __result232__ = __result_obj__ = (void*)0;
                    return __result232__;
                }
                result_148=(struct sTrueNode*)come_increment_ref_count(((struct sTrueNode*)(right_value309=(struct sTrueNode*)come_calloc(1, sizeof(struct sTrueNode)*(1), "sTrueNode_clone", 3))));
                if(right_value309 && right_value309 != __result_obj__) { come_call_finalizer(sTrueNode_finalize,right_value309, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(_if_conditional234=self!=((void*)0),                _if_conditional234) {
                    result_148->sline=self->sline;
                }
                if(_if_conditional235=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional235) {
                    __dec_obj127=result_148->sname;
                    result_148->sname=(char*)come_increment_ref_count(((char*)(right_value310=string_clone(self->sname))));
                    if(__dec_obj127) { __dec_obj127 = come_decrement_ref_count(__dec_obj127, (void*)0, (void*)0, 0,0,0); }
                    if(right_value310 && right_value310 != __result_obj__) { right_value310 = come_decrement_ref_count(right_value310, (void*)0, (void*)0, 1, 0, 0); }
                }
                __result233__ = __result_obj__ = result_148;
                if(result_148) { come_call_finalizer(sTrueNode_finalize,result_148, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result233__;
                if(result_148) { come_call_finalizer(sTrueNode_finalize,result_148, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sFalseNode_finalize(struct sFalseNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional237;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional237=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional237) {
                        if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                    }
}

static struct sFalseNode* sFalseNode_clone(struct sFalseNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional238;
struct sFalseNode* __result235__;
void* right_value316;
struct sFalseNode* result_149;
_Bool _if_conditional239;
_Bool _if_conditional240;
void* right_value317;
char* __dec_obj128;
struct sFalseNode* __result236__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_149, 0, sizeof(struct sFalseNode*));
                    if(_if_conditional238=self==(void*)0,                    _if_conditional238) {
                        __result235__ = __result_obj__ = (void*)0;
                        return __result235__;
                    }
                    result_149=(struct sFalseNode*)come_increment_ref_count(((struct sFalseNode*)(right_value316=(struct sFalseNode*)come_calloc(1, sizeof(struct sFalseNode)*(1), "sFalseNode_clone", 3))));
                    if(right_value316 && right_value316 != __result_obj__) { come_call_finalizer(sFalseNode_finalize,right_value316, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(_if_conditional239=self!=((void*)0),                    _if_conditional239) {
                        result_149->sline=self->sline;
                    }
                    if(_if_conditional240=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional240) {
                        __dec_obj128=result_149->sname;
                        result_149->sname=(char*)come_increment_ref_count(((char*)(right_value317=string_clone(self->sname))));
                        if(__dec_obj128) { __dec_obj128 = come_decrement_ref_count(__dec_obj128, (void*)0, (void*)0, 0,0,0); }
                        if(right_value317 && right_value317 != __result_obj__) { right_value317 = come_decrement_ref_count(right_value317, (void*)0, (void*)0, 1, 0, 0); }
                    }
                    __result236__ = __result_obj__ = result_149;
                    if(result_149) { come_call_finalizer(sFalseNode_finalize,result_149, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result236__;
                    if(result_149) { come_call_finalizer(sFalseNode_finalize,result_149, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sDeleteNode_finalize(struct sDeleteNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional242;
_Bool _if_conditional243;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional242=self!=((void*)0)&&self->node!=((void*)0),                        _if_conditional242) {
                            if(self->node) { self->node = come_decrement_ref_count(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0); } 
                        }
                        if(_if_conditional243=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional243) {
                            if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                        }
}

static struct sDeleteNode* sDeleteNode_clone(struct sDeleteNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional244;
struct sDeleteNode* __result238__;
void* right_value324;
struct sDeleteNode* result_151;
_Bool _if_conditional245;
void* right_value325;
struct sNode* __dec_obj129;
_Bool _if_conditional246;
_Bool _if_conditional247;
void* right_value326;
char* __dec_obj130;
struct sDeleteNode* __result239__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_151, 0, sizeof(struct sDeleteNode*));
                        if(_if_conditional244=self==(void*)0,                        _if_conditional244) {
                            __result238__ = __result_obj__ = (void*)0;
                            return __result238__;
                        }
                        result_151=(struct sDeleteNode*)come_increment_ref_count(((struct sDeleteNode*)(right_value324=(struct sDeleteNode*)come_calloc(1, sizeof(struct sDeleteNode)*(1), "sDeleteNode_clone", 3))));
                        if(right_value324 && right_value324 != __result_obj__) { come_call_finalizer(sDeleteNode_finalize,right_value324, (void*)0, (void*)0, 0, 1, 0, 0); }
                        if(_if_conditional245=self!=((void*)0)&&self->node!=((void*)0),                        _if_conditional245) {
                            __dec_obj129=result_151->node;
                            result_151->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value325=sNode_clone(self->node))));
                            if(__dec_obj129) { __dec_obj129 = come_decrement_ref_count(__dec_obj129, ((struct sNode*)__dec_obj129)->finalize, ((struct sNode*)__dec_obj129)->_protocol_obj, 0,0,0); }
                            if(right_value325 && right_value325 != __result_obj__) { right_value325 = come_decrement_ref_count(right_value325, ((struct sNode*)right_value325)->finalize, ((struct sNode*)right_value325)->_protocol_obj, 1, 0, 0); } 
                        }
                        if(_if_conditional246=self!=((void*)0),                        _if_conditional246) {
                            result_151->sline=self->sline;
                        }
                        if(_if_conditional247=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional247) {
                            __dec_obj130=result_151->sname;
                            result_151->sname=(char*)come_increment_ref_count(((char*)(right_value326=string_clone(self->sname))));
                            if(__dec_obj130) { __dec_obj130 = come_decrement_ref_count(__dec_obj130, (void*)0, (void*)0, 0,0,0); }
                            if(right_value326 && right_value326 != __result_obj__) { right_value326 = come_decrement_ref_count(right_value326, (void*)0, (void*)0, 1, 0, 0); }
                        }
                        __result239__ = __result_obj__ = result_151;
                        if(result_151) { come_call_finalizer(sDeleteNode_finalize,result_151, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result239__;
                        if(result_151) { come_call_finalizer(sDeleteNode_finalize,result_151, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sForceDeleteNode_finalize(struct sForceDeleteNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional249;
_Bool _if_conditional250;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional249=self!=((void*)0)&&self->node!=((void*)0),                            _if_conditional249) {
                                if(self->node) { self->node = come_decrement_ref_count(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0); } 
                            }
                            if(_if_conditional250=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional250) {
                                if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                            }
}

static struct sForceDeleteNode* sForceDeleteNode_clone(struct sForceDeleteNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional251;
struct sForceDeleteNode* __result241__;
void* right_value333;
struct sForceDeleteNode* result_153;
_Bool _if_conditional252;
void* right_value334;
struct sNode* __dec_obj131;
_Bool _if_conditional253;
_Bool _if_conditional254;
void* right_value335;
char* __dec_obj132;
struct sForceDeleteNode* __result242__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_153, 0, sizeof(struct sForceDeleteNode*));
                            if(_if_conditional251=self==(void*)0,                            _if_conditional251) {
                                __result241__ = __result_obj__ = (void*)0;
                                return __result241__;
                            }
                            result_153=(struct sForceDeleteNode*)come_increment_ref_count(((struct sForceDeleteNode*)(right_value333=(struct sForceDeleteNode*)come_calloc(1, sizeof(struct sForceDeleteNode)*(1), "sForceDeleteNode_clone", 3))));
                            if(right_value333 && right_value333 != __result_obj__) { come_call_finalizer(sForceDeleteNode_finalize,right_value333, (void*)0, (void*)0, 0, 1, 0, 0); }
                            if(_if_conditional252=self!=((void*)0)&&self->node!=((void*)0),                            _if_conditional252) {
                                __dec_obj131=result_153->node;
                                result_153->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value334=sNode_clone(self->node))));
                                if(__dec_obj131) { __dec_obj131 = come_decrement_ref_count(__dec_obj131, ((struct sNode*)__dec_obj131)->finalize, ((struct sNode*)__dec_obj131)->_protocol_obj, 0,0,0); }
                                if(right_value334 && right_value334 != __result_obj__) { right_value334 = come_decrement_ref_count(right_value334, ((struct sNode*)right_value334)->finalize, ((struct sNode*)right_value334)->_protocol_obj, 1, 0, 0); } 
                            }
                            if(_if_conditional253=self!=((void*)0),                            _if_conditional253) {
                                result_153->sline=self->sline;
                            }
                            if(_if_conditional254=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional254) {
                                __dec_obj132=result_153->sname;
                                result_153->sname=(char*)come_increment_ref_count(((char*)(right_value335=string_clone(self->sname))));
                                if(__dec_obj132) { __dec_obj132 = come_decrement_ref_count(__dec_obj132, (void*)0, (void*)0, 0,0,0); }
                                if(right_value335 && right_value335 != __result_obj__) { right_value335 = come_decrement_ref_count(right_value335, (void*)0, (void*)0, 1, 0, 0); }
                            }
                            __result242__ = __result_obj__ = result_153;
                            if(result_153) { come_call_finalizer(sForceDeleteNode_finalize,result_153, (void*)0, (void*)0, 0, 0, 1, 0); }
                            return __result242__;
                            if(result_153) { come_call_finalizer(sForceDeleteNode_finalize,result_153, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sBorrowNode_finalize(struct sBorrowNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional256;
_Bool _if_conditional257;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional256=self!=((void*)0)&&self->node!=((void*)0),                                _if_conditional256) {
                                    if(self->node) { self->node = come_decrement_ref_count(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0); } 
                                }
                                if(_if_conditional257=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional257) {
                                    if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                                }
}

static struct sBorrowNode* sBorrowNode_clone(struct sBorrowNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional258;
struct sBorrowNode* __result244__;
void* right_value342;
struct sBorrowNode* result_155;
_Bool _if_conditional259;
void* right_value343;
struct sNode* __dec_obj133;
_Bool _if_conditional260;
_Bool _if_conditional261;
void* right_value344;
char* __dec_obj134;
struct sBorrowNode* __result245__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_155, 0, sizeof(struct sBorrowNode*));
                                if(_if_conditional258=self==(void*)0,                                _if_conditional258) {
                                    __result244__ = __result_obj__ = (void*)0;
                                    return __result244__;
                                }
                                result_155=(struct sBorrowNode*)come_increment_ref_count(((struct sBorrowNode*)(right_value342=(struct sBorrowNode*)come_calloc(1, sizeof(struct sBorrowNode)*(1), "sBorrowNode_clone", 3))));
                                if(right_value342 && right_value342 != __result_obj__) { come_call_finalizer(sBorrowNode_finalize,right_value342, (void*)0, (void*)0, 0, 1, 0, 0); }
                                if(_if_conditional259=self!=((void*)0)&&self->node!=((void*)0),                                _if_conditional259) {
                                    __dec_obj133=result_155->node;
                                    result_155->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value343=sNode_clone(self->node))));
                                    if(__dec_obj133) { __dec_obj133 = come_decrement_ref_count(__dec_obj133, ((struct sNode*)__dec_obj133)->finalize, ((struct sNode*)__dec_obj133)->_protocol_obj, 0,0,0); }
                                    if(right_value343 && right_value343 != __result_obj__) { right_value343 = come_decrement_ref_count(right_value343, ((struct sNode*)right_value343)->finalize, ((struct sNode*)right_value343)->_protocol_obj, 1, 0, 0); } 
                                }
                                if(_if_conditional260=self!=((void*)0),                                _if_conditional260) {
                                    result_155->sline=self->sline;
                                }
                                if(_if_conditional261=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional261) {
                                    __dec_obj134=result_155->sname;
                                    result_155->sname=(char*)come_increment_ref_count(((char*)(right_value344=string_clone(self->sname))));
                                    if(__dec_obj134) { __dec_obj134 = come_decrement_ref_count(__dec_obj134, (void*)0, (void*)0, 0,0,0); }
                                    if(right_value344 && right_value344 != __result_obj__) { right_value344 = come_decrement_ref_count(right_value344, (void*)0, (void*)0, 1, 0, 0); }
                                }
                                __result245__ = __result_obj__ = result_155;
                                if(result_155) { come_call_finalizer(sBorrowNode_finalize,result_155, (void*)0, (void*)0, 0, 0, 1, 0); }
                                return __result245__;
                                if(result_155) { come_call_finalizer(sBorrowNode_finalize,result_155, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sDelegateNode_finalize(struct sDelegateNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional263;
_Bool _if_conditional264;
memset(&__result_obj__, 0, sizeof(void*));
                                    if(_if_conditional263=self!=((void*)0)&&self->node!=((void*)0),                                    _if_conditional263) {
                                        if(self->node) { self->node = come_decrement_ref_count(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0); } 
                                    }
                                    if(_if_conditional264=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional264) {
                                        if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                                    }
}

static struct sDelegateNode* sDelegateNode_clone(struct sDelegateNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional265;
struct sDelegateNode* __result247__;
void* right_value351;
struct sDelegateNode* result_157;
_Bool _if_conditional266;
void* right_value352;
struct sNode* __dec_obj135;
_Bool _if_conditional267;
_Bool _if_conditional268;
void* right_value353;
char* __dec_obj136;
struct sDelegateNode* __result248__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_157, 0, sizeof(struct sDelegateNode*));
                                    if(_if_conditional265=self==(void*)0,                                    _if_conditional265) {
                                        __result247__ = __result_obj__ = (void*)0;
                                        return __result247__;
                                    }
                                    result_157=(struct sDelegateNode*)come_increment_ref_count(((struct sDelegateNode*)(right_value351=(struct sDelegateNode*)come_calloc(1, sizeof(struct sDelegateNode)*(1), "sDelegateNode_clone", 3))));
                                    if(right_value351 && right_value351 != __result_obj__) { come_call_finalizer(sDelegateNode_finalize,right_value351, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    if(_if_conditional266=self!=((void*)0)&&self->node!=((void*)0),                                    _if_conditional266) {
                                        __dec_obj135=result_157->node;
                                        result_157->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value352=sNode_clone(self->node))));
                                        if(__dec_obj135) { __dec_obj135 = come_decrement_ref_count(__dec_obj135, ((struct sNode*)__dec_obj135)->finalize, ((struct sNode*)__dec_obj135)->_protocol_obj, 0,0,0); }
                                        if(right_value352 && right_value352 != __result_obj__) { right_value352 = come_decrement_ref_count(right_value352, ((struct sNode*)right_value352)->finalize, ((struct sNode*)right_value352)->_protocol_obj, 1, 0, 0); } 
                                    }
                                    if(_if_conditional267=self!=((void*)0),                                    _if_conditional267) {
                                        result_157->sline=self->sline;
                                    }
                                    if(_if_conditional268=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional268) {
                                        __dec_obj136=result_157->sname;
                                        result_157->sname=(char*)come_increment_ref_count(((char*)(right_value353=string_clone(self->sname))));
                                        if(__dec_obj136) { __dec_obj136 = come_decrement_ref_count(__dec_obj136, (void*)0, (void*)0, 0,0,0); }
                                        if(right_value353 && right_value353 != __result_obj__) { right_value353 = come_decrement_ref_count(right_value353, (void*)0, (void*)0, 1, 0, 0); }
                                    }
                                    __result248__ = __result_obj__ = result_157;
                                    if(result_157) { come_call_finalizer(sDelegateNode_finalize,result_157, (void*)0, (void*)0, 0, 0, 1, 0); }
                                    return __result248__;
                                    if(result_157) { come_call_finalizer(sDelegateNode_finalize,result_157, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sShareNode_finalize(struct sShareNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional270;
_Bool _if_conditional271;
memset(&__result_obj__, 0, sizeof(void*));
                                        if(_if_conditional270=self!=((void*)0)&&self->node!=((void*)0),                                        _if_conditional270) {
                                            if(self->node) { self->node = come_decrement_ref_count(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0); } 
                                        }
                                        if(_if_conditional271=self!=((void*)0)&&self->sname!=((void*)0),                                        _if_conditional271) {
                                            if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                                        }
}

static struct sShareNode* sShareNode_clone(struct sShareNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional272;
struct sShareNode* __result250__;
void* right_value360;
struct sShareNode* result_159;
_Bool _if_conditional273;
void* right_value361;
struct sNode* __dec_obj137;
_Bool _if_conditional274;
_Bool _if_conditional275;
void* right_value362;
char* __dec_obj138;
struct sShareNode* __result251__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_159, 0, sizeof(struct sShareNode*));
                                        if(_if_conditional272=self==(void*)0,                                        _if_conditional272) {
                                            __result250__ = __result_obj__ = (void*)0;
                                            return __result250__;
                                        }
                                        result_159=(struct sShareNode*)come_increment_ref_count(((struct sShareNode*)(right_value360=(struct sShareNode*)come_calloc(1, sizeof(struct sShareNode)*(1), "sShareNode_clone", 3))));
                                        if(right_value360 && right_value360 != __result_obj__) { come_call_finalizer(sShareNode_finalize,right_value360, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        if(_if_conditional273=self!=((void*)0)&&self->node!=((void*)0),                                        _if_conditional273) {
                                            __dec_obj137=result_159->node;
                                            result_159->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value361=sNode_clone(self->node))));
                                            if(__dec_obj137) { __dec_obj137 = come_decrement_ref_count(__dec_obj137, ((struct sNode*)__dec_obj137)->finalize, ((struct sNode*)__dec_obj137)->_protocol_obj, 0,0,0); }
                                            if(right_value361 && right_value361 != __result_obj__) { right_value361 = come_decrement_ref_count(right_value361, ((struct sNode*)right_value361)->finalize, ((struct sNode*)right_value361)->_protocol_obj, 1, 0, 0); } 
                                        }
                                        if(_if_conditional274=self!=((void*)0),                                        _if_conditional274) {
                                            result_159->sline=self->sline;
                                        }
                                        if(_if_conditional275=self!=((void*)0)&&self->sname!=((void*)0),                                        _if_conditional275) {
                                            __dec_obj138=result_159->sname;
                                            result_159->sname=(char*)come_increment_ref_count(((char*)(right_value362=string_clone(self->sname))));
                                            if(__dec_obj138) { __dec_obj138 = come_decrement_ref_count(__dec_obj138, (void*)0, (void*)0, 0,0,0); }
                                            if(right_value362 && right_value362 != __result_obj__) { right_value362 = come_decrement_ref_count(right_value362, (void*)0, (void*)0, 1, 0, 0); }
                                        }
                                        __result251__ = __result_obj__ = result_159;
                                        if(result_159) { come_call_finalizer(sShareNode_finalize,result_159, (void*)0, (void*)0, 0, 0, 1, 0); }
                                        return __result251__;
                                        if(result_159) { come_call_finalizer(sShareNode_finalize,result_159, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sCloneNode_finalize(struct sCloneNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional277;
_Bool _if_conditional278;
memset(&__result_obj__, 0, sizeof(void*));
                                            if(_if_conditional277=self!=((void*)0)&&self->node!=((void*)0),                                            _if_conditional277) {
                                                if(self->node) { self->node = come_decrement_ref_count(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0); } 
                                            }
                                            if(_if_conditional278=self!=((void*)0)&&self->sname!=((void*)0),                                            _if_conditional278) {
                                                if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                                            }
}

static struct sCloneNode* sCloneNode_clone(struct sCloneNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional279;
struct sCloneNode* __result253__;
void* right_value369;
struct sCloneNode* result_161;
_Bool _if_conditional280;
void* right_value370;
struct sNode* __dec_obj139;
_Bool _if_conditional281;
_Bool _if_conditional282;
void* right_value371;
char* __dec_obj140;
struct sCloneNode* __result254__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_161, 0, sizeof(struct sCloneNode*));
                                            if(_if_conditional279=self==(void*)0,                                            _if_conditional279) {
                                                __result253__ = __result_obj__ = (void*)0;
                                                return __result253__;
                                            }
                                            result_161=(struct sCloneNode*)come_increment_ref_count(((struct sCloneNode*)(right_value369=(struct sCloneNode*)come_calloc(1, sizeof(struct sCloneNode)*(1), "sCloneNode_clone", 3))));
                                            if(right_value369 && right_value369 != __result_obj__) { come_call_finalizer(sCloneNode_finalize,right_value369, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            if(_if_conditional280=self!=((void*)0)&&self->node!=((void*)0),                                            _if_conditional280) {
                                                __dec_obj139=result_161->node;
                                                result_161->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value370=sNode_clone(self->node))));
                                                if(__dec_obj139) { __dec_obj139 = come_decrement_ref_count(__dec_obj139, ((struct sNode*)__dec_obj139)->finalize, ((struct sNode*)__dec_obj139)->_protocol_obj, 0,0,0); }
                                                if(right_value370 && right_value370 != __result_obj__) { right_value370 = come_decrement_ref_count(right_value370, ((struct sNode*)right_value370)->finalize, ((struct sNode*)right_value370)->_protocol_obj, 1, 0, 0); } 
                                            }
                                            if(_if_conditional281=self!=((void*)0),                                            _if_conditional281) {
                                                result_161->sline=self->sline;
                                            }
                                            if(_if_conditional282=self!=((void*)0)&&self->sname!=((void*)0),                                            _if_conditional282) {
                                                __dec_obj140=result_161->sname;
                                                result_161->sname=(char*)come_increment_ref_count(((char*)(right_value371=string_clone(self->sname))));
                                                if(__dec_obj140) { __dec_obj140 = come_decrement_ref_count(__dec_obj140, (void*)0, (void*)0, 0,0,0); }
                                                if(right_value371 && right_value371 != __result_obj__) { right_value371 = come_decrement_ref_count(right_value371, (void*)0, (void*)0, 1, 0, 0); }
                                            }
                                            __result254__ = __result_obj__ = result_161;
                                            if(result_161) { come_call_finalizer(sCloneNode_finalize,result_161, (void*)0, (void*)0, 0, 0, 1, 0); }
                                            return __result254__;
                                            if(result_161) { come_call_finalizer(sCloneNode_finalize,result_161, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sDupeNode_finalize(struct sDupeNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional284;
_Bool _if_conditional285;
memset(&__result_obj__, 0, sizeof(void*));
                                                if(_if_conditional284=self!=((void*)0)&&self->node!=((void*)0),                                                _if_conditional284) {
                                                    if(self->node) { self->node = come_decrement_ref_count(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0); } 
                                                }
                                                if(_if_conditional285=self!=((void*)0)&&self->sname!=((void*)0),                                                _if_conditional285) {
                                                    if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                                                }
}

static struct sDupeNode* sDupeNode_clone(struct sDupeNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional286;
struct sDupeNode* __result256__;
void* right_value378;
struct sDupeNode* result_163;
_Bool _if_conditional287;
void* right_value379;
struct sNode* __dec_obj141;
_Bool _if_conditional288;
_Bool _if_conditional289;
void* right_value380;
char* __dec_obj142;
struct sDupeNode* __result257__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_163, 0, sizeof(struct sDupeNode*));
                                                if(_if_conditional286=self==(void*)0,                                                _if_conditional286) {
                                                    __result256__ = __result_obj__ = (void*)0;
                                                    return __result256__;
                                                }
                                                result_163=(struct sDupeNode*)come_increment_ref_count(((struct sDupeNode*)(right_value378=(struct sDupeNode*)come_calloc(1, sizeof(struct sDupeNode)*(1), "sDupeNode_clone", 3))));
                                                if(right_value378 && right_value378 != __result_obj__) { come_call_finalizer(sDupeNode_finalize,right_value378, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                if(_if_conditional287=self!=((void*)0)&&self->node!=((void*)0),                                                _if_conditional287) {
                                                    __dec_obj141=result_163->node;
                                                    result_163->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value379=sNode_clone(self->node))));
                                                    if(__dec_obj141) { __dec_obj141 = come_decrement_ref_count(__dec_obj141, ((struct sNode*)__dec_obj141)->finalize, ((struct sNode*)__dec_obj141)->_protocol_obj, 0,0,0); }
                                                    if(right_value379 && right_value379 != __result_obj__) { right_value379 = come_decrement_ref_count(right_value379, ((struct sNode*)right_value379)->finalize, ((struct sNode*)right_value379)->_protocol_obj, 1, 0, 0); } 
                                                }
                                                if(_if_conditional288=self!=((void*)0),                                                _if_conditional288) {
                                                    result_163->sline=self->sline;
                                                }
                                                if(_if_conditional289=self!=((void*)0)&&self->sname!=((void*)0),                                                _if_conditional289) {
                                                    __dec_obj142=result_163->sname;
                                                    result_163->sname=(char*)come_increment_ref_count(((char*)(right_value380=string_clone(self->sname))));
                                                    if(__dec_obj142) { __dec_obj142 = come_decrement_ref_count(__dec_obj142, (void*)0, (void*)0, 0,0,0); }
                                                    if(right_value380 && right_value380 != __result_obj__) { right_value380 = come_decrement_ref_count(right_value380, (void*)0, (void*)0, 1, 0, 0); }
                                                }
                                                __result257__ = __result_obj__ = result_163;
                                                if(result_163) { come_call_finalizer(sDupeNode_finalize,result_163, (void*)0, (void*)0, 0, 0, 1, 0); }
                                                return __result257__;
                                                if(result_163) { come_call_finalizer(sDupeNode_finalize,result_163, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sDummyHeapNode_finalize(struct sDummyHeapNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional291;
_Bool _if_conditional292;
memset(&__result_obj__, 0, sizeof(void*));
                                                    if(_if_conditional291=self!=((void*)0)&&self->node!=((void*)0),                                                    _if_conditional291) {
                                                        if(self->node) { self->node = come_decrement_ref_count(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0); } 
                                                    }
                                                    if(_if_conditional292=self!=((void*)0)&&self->sname!=((void*)0),                                                    _if_conditional292) {
                                                        if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                                                    }
}

static struct sDummyHeapNode* sDummyHeapNode_clone(struct sDummyHeapNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional293;
struct sDummyHeapNode* __result259__;
void* right_value387;
struct sDummyHeapNode* result_165;
_Bool _if_conditional294;
void* right_value388;
struct sNode* __dec_obj143;
_Bool _if_conditional295;
_Bool _if_conditional296;
void* right_value389;
char* __dec_obj144;
struct sDummyHeapNode* __result260__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_165, 0, sizeof(struct sDummyHeapNode*));
                                                    if(_if_conditional293=self==(void*)0,                                                    _if_conditional293) {
                                                        __result259__ = __result_obj__ = (void*)0;
                                                        return __result259__;
                                                    }
                                                    result_165=(struct sDummyHeapNode*)come_increment_ref_count(((struct sDummyHeapNode*)(right_value387=(struct sDummyHeapNode*)come_calloc(1, sizeof(struct sDummyHeapNode)*(1), "sDummyHeapNode_clone", 3))));
                                                    if(right_value387 && right_value387 != __result_obj__) { come_call_finalizer(sDummyHeapNode_finalize,right_value387, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                    if(_if_conditional294=self!=((void*)0)&&self->node!=((void*)0),                                                    _if_conditional294) {
                                                        __dec_obj143=result_165->node;
                                                        result_165->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value388=sNode_clone(self->node))));
                                                        if(__dec_obj143) { __dec_obj143 = come_decrement_ref_count(__dec_obj143, ((struct sNode*)__dec_obj143)->finalize, ((struct sNode*)__dec_obj143)->_protocol_obj, 0,0,0); }
                                                        if(right_value388 && right_value388 != __result_obj__) { right_value388 = come_decrement_ref_count(right_value388, ((struct sNode*)right_value388)->finalize, ((struct sNode*)right_value388)->_protocol_obj, 1, 0, 0); } 
                                                    }
                                                    if(_if_conditional295=self!=((void*)0),                                                    _if_conditional295) {
                                                        result_165->sline=self->sline;
                                                    }
                                                    if(_if_conditional296=self!=((void*)0)&&self->sname!=((void*)0),                                                    _if_conditional296) {
                                                        __dec_obj144=result_165->sname;
                                                        result_165->sname=(char*)come_increment_ref_count(((char*)(right_value389=string_clone(self->sname))));
                                                        if(__dec_obj144) { __dec_obj144 = come_decrement_ref_count(__dec_obj144, (void*)0, (void*)0, 0,0,0); }
                                                        if(right_value389 && right_value389 != __result_obj__) { right_value389 = come_decrement_ref_count(right_value389, (void*)0, (void*)0, 1, 0, 0); }
                                                    }
                                                    __result260__ = __result_obj__ = result_165;
                                                    if(result_165) { come_call_finalizer(sDummyHeapNode_finalize,result_165, (void*)0, (void*)0, 0, 0, 1, 0); }
                                                    return __result260__;
                                                    if(result_165) { come_call_finalizer(sDummyHeapNode_finalize,result_165, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sGCIncNode_finalize(struct sGCIncNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional298;
_Bool _if_conditional299;
memset(&__result_obj__, 0, sizeof(void*));
                                                        if(_if_conditional298=self!=((void*)0)&&self->node!=((void*)0),                                                        _if_conditional298) {
                                                            if(self->node) { self->node = come_decrement_ref_count(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0); } 
                                                        }
                                                        if(_if_conditional299=self!=((void*)0)&&self->sname!=((void*)0),                                                        _if_conditional299) {
                                                            if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                                                        }
}

static struct sGCIncNode* sGCIncNode_clone(struct sGCIncNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional300;
struct sGCIncNode* __result262__;
void* right_value397;
struct sGCIncNode* result_167;
_Bool _if_conditional301;
void* right_value398;
struct sNode* __dec_obj145;
_Bool _if_conditional302;
_Bool _if_conditional303;
void* right_value399;
char* __dec_obj146;
struct sGCIncNode* __result263__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_167, 0, sizeof(struct sGCIncNode*));
                                                        if(_if_conditional300=self==(void*)0,                                                        _if_conditional300) {
                                                            __result262__ = __result_obj__ = (void*)0;
                                                            return __result262__;
                                                        }
                                                        result_167=(struct sGCIncNode*)come_increment_ref_count(((struct sGCIncNode*)(right_value397=(struct sGCIncNode*)come_calloc(1, sizeof(struct sGCIncNode)*(1), "sGCIncNode_clone", 3))));
                                                        if(right_value397 && right_value397 != __result_obj__) { come_call_finalizer(sGCIncNode_finalize,right_value397, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                        if(_if_conditional301=self!=((void*)0)&&self->node!=((void*)0),                                                        _if_conditional301) {
                                                            __dec_obj145=result_167->node;
                                                            result_167->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value398=sNode_clone(self->node))));
                                                            if(__dec_obj145) { __dec_obj145 = come_decrement_ref_count(__dec_obj145, ((struct sNode*)__dec_obj145)->finalize, ((struct sNode*)__dec_obj145)->_protocol_obj, 0,0,0); }
                                                            if(right_value398 && right_value398 != __result_obj__) { right_value398 = come_decrement_ref_count(right_value398, ((struct sNode*)right_value398)->finalize, ((struct sNode*)right_value398)->_protocol_obj, 1, 0, 0); } 
                                                        }
                                                        if(_if_conditional302=self!=((void*)0),                                                        _if_conditional302) {
                                                            result_167->sline=self->sline;
                                                        }
                                                        if(_if_conditional303=self!=((void*)0)&&self->sname!=((void*)0),                                                        _if_conditional303) {
                                                            __dec_obj146=result_167->sname;
                                                            result_167->sname=(char*)come_increment_ref_count(((char*)(right_value399=string_clone(self->sname))));
                                                            if(__dec_obj146) { __dec_obj146 = come_decrement_ref_count(__dec_obj146, (void*)0, (void*)0, 0,0,0); }
                                                            if(right_value399 && right_value399 != __result_obj__) { right_value399 = come_decrement_ref_count(right_value399, (void*)0, (void*)0, 1, 0, 0); }
                                                        }
                                                        __result263__ = __result_obj__ = result_167;
                                                        if(result_167) { come_call_finalizer(sGCIncNode_finalize,result_167, (void*)0, (void*)0, 0, 0, 1, 0); }
                                                        return __result263__;
                                                        if(result_167) { come_call_finalizer(sGCIncNode_finalize,result_167, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sGCDecNode_finalize(struct sGCDecNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional305;
_Bool _if_conditional306;
memset(&__result_obj__, 0, sizeof(void*));
                                                            if(_if_conditional305=self!=((void*)0)&&self->node!=((void*)0),                                                            _if_conditional305) {
                                                                if(self->node) { self->node = come_decrement_ref_count(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0); } 
                                                            }
                                                            if(_if_conditional306=self!=((void*)0)&&self->sname!=((void*)0),                                                            _if_conditional306) {
                                                                if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                                                            }
}

static struct sGCDecNode* sGCDecNode_clone(struct sGCDecNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional307;
struct sGCDecNode* __result265__;
void* right_value407;
struct sGCDecNode* result_169;
_Bool _if_conditional308;
void* right_value408;
struct sNode* __dec_obj147;
_Bool _if_conditional309;
_Bool _if_conditional310;
void* right_value409;
char* __dec_obj148;
struct sGCDecNode* __result266__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_169, 0, sizeof(struct sGCDecNode*));
                                                            if(_if_conditional307=self==(void*)0,                                                            _if_conditional307) {
                                                                __result265__ = __result_obj__ = (void*)0;
                                                                return __result265__;
                                                            }
                                                            result_169=(struct sGCDecNode*)come_increment_ref_count(((struct sGCDecNode*)(right_value407=(struct sGCDecNode*)come_calloc(1, sizeof(struct sGCDecNode)*(1), "sGCDecNode_clone", 3))));
                                                            if(right_value407 && right_value407 != __result_obj__) { come_call_finalizer(sGCDecNode_finalize,right_value407, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                            if(_if_conditional308=self!=((void*)0)&&self->node!=((void*)0),                                                            _if_conditional308) {
                                                                __dec_obj147=result_169->node;
                                                                result_169->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value408=sNode_clone(self->node))));
                                                                if(__dec_obj147) { __dec_obj147 = come_decrement_ref_count(__dec_obj147, ((struct sNode*)__dec_obj147)->finalize, ((struct sNode*)__dec_obj147)->_protocol_obj, 0,0,0); }
                                                                if(right_value408 && right_value408 != __result_obj__) { right_value408 = come_decrement_ref_count(right_value408, ((struct sNode*)right_value408)->finalize, ((struct sNode*)right_value408)->_protocol_obj, 1, 0, 0); } 
                                                            }
                                                            if(_if_conditional309=self!=((void*)0),                                                            _if_conditional309) {
                                                                result_169->sline=self->sline;
                                                            }
                                                            if(_if_conditional310=self!=((void*)0)&&self->sname!=((void*)0),                                                            _if_conditional310) {
                                                                __dec_obj148=result_169->sname;
                                                                result_169->sname=(char*)come_increment_ref_count(((char*)(right_value409=string_clone(self->sname))));
                                                                if(__dec_obj148) { __dec_obj148 = come_decrement_ref_count(__dec_obj148, (void*)0, (void*)0, 0,0,0); }
                                                                if(right_value409 && right_value409 != __result_obj__) { right_value409 = come_decrement_ref_count(right_value409, (void*)0, (void*)0, 1, 0, 0); }
                                                            }
                                                            __result266__ = __result_obj__ = result_169;
                                                            if(result_169) { come_call_finalizer(sGCDecNode_finalize,result_169, (void*)0, (void*)0, 0, 0, 1, 0); }
                                                            return __result266__;
                                                            if(result_169) { come_call_finalizer(sGCDecNode_finalize,result_169, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sIsHeap_finalize(struct sIsHeap* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional313;
_Bool _if_conditional314;
memset(&__result_obj__, 0, sizeof(void*));
                                                                if(_if_conditional313=self!=((void*)0)&&self->type!=((void*)0),                                                                _if_conditional313) {
                                                                    if(self->type) { come_call_finalizer(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                }
                                                                if(_if_conditional314=self!=((void*)0)&&self->sname!=((void*)0),                                                                _if_conditional314) {
                                                                    if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                                                                }
}

static struct sIsHeap* sIsHeap_clone(struct sIsHeap* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional315;
struct sIsHeap* __result269__;
void* right_value420;
struct sIsHeap* result_174;
_Bool _if_conditional316;
void* right_value421;
struct sType* __dec_obj149;
_Bool _if_conditional317;
_Bool _if_conditional318;
void* right_value422;
char* __dec_obj150;
struct sIsHeap* __result270__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_174, 0, sizeof(struct sIsHeap*));
                                                                if(_if_conditional315=self==(void*)0,                                                                _if_conditional315) {
                                                                    __result269__ = __result_obj__ = (void*)0;
                                                                    return __result269__;
                                                                }
                                                                result_174=(struct sIsHeap*)come_increment_ref_count(((struct sIsHeap*)(right_value420=(struct sIsHeap*)come_calloc(1, sizeof(struct sIsHeap)*(1), "sIsHeap_clone", 3))));
                                                                if(right_value420 && right_value420 != __result_obj__) { come_call_finalizer(sIsHeap_finalize,right_value420, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                if(_if_conditional316=self!=((void*)0)&&self->type!=((void*)0),                                                                _if_conditional316) {
                                                                    __dec_obj149=result_174->type;
                                                                    result_174->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value421=sType_clone(self->type))));
                                                                    if(__dec_obj149) { come_call_finalizer(sType_finalize,__dec_obj149, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                    if(right_value421 && right_value421 != __result_obj__) { come_call_finalizer(sType_finalize,right_value421, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                }
                                                                if(_if_conditional317=self!=((void*)0),                                                                _if_conditional317) {
                                                                    result_174->sline=self->sline;
                                                                }
                                                                if(_if_conditional318=self!=((void*)0)&&self->sname!=((void*)0),                                                                _if_conditional318) {
                                                                    __dec_obj150=result_174->sname;
                                                                    result_174->sname=(char*)come_increment_ref_count(((char*)(right_value422=string_clone(self->sname))));
                                                                    if(__dec_obj150) { __dec_obj150 = come_decrement_ref_count(__dec_obj150, (void*)0, (void*)0, 0,0,0); }
                                                                    if(right_value422 && right_value422 != __result_obj__) { right_value422 = come_decrement_ref_count(right_value422, (void*)0, (void*)0, 1, 0, 0); }
                                                                }
                                                                __result270__ = __result_obj__ = result_174;
                                                                if(result_174) { come_call_finalizer(sIsHeap_finalize,result_174, (void*)0, (void*)0, 0, 0, 1, 0); }
                                                                return __result270__;
                                                                if(result_174) { come_call_finalizer(sIsHeap_finalize,result_174, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sSizeOfNode_finalize(struct sSizeOfNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional356;
_Bool _if_conditional357;
memset(&__result_obj__, 0, sizeof(void*));
                                                                            if(_if_conditional356=self!=((void*)0)&&self->type!=((void*)0),                                                                            _if_conditional356) {
                                                                                if(self->type) { come_call_finalizer(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                            }
                                                                            if(_if_conditional357=self!=((void*)0)&&self->sname!=((void*)0),                                                                            _if_conditional357) {
                                                                                if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                                                                            }
}

static struct sSizeOfNode* sSizeOfNode_clone(struct sSizeOfNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional358;
struct sSizeOfNode* __result293__;
void* right_value481;
struct sSizeOfNode* result_189;
_Bool _if_conditional359;
void* right_value482;
struct sType* __dec_obj157;
_Bool _if_conditional360;
_Bool _if_conditional361;
void* right_value483;
char* __dec_obj158;
struct sSizeOfNode* __result294__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_189, 0, sizeof(struct sSizeOfNode*));
                                                                            if(_if_conditional358=self==(void*)0,                                                                            _if_conditional358) {
                                                                                __result293__ = __result_obj__ = (void*)0;
                                                                                return __result293__;
                                                                            }
                                                                            result_189=(struct sSizeOfNode*)come_increment_ref_count(((struct sSizeOfNode*)(right_value481=(struct sSizeOfNode*)come_calloc(1, sizeof(struct sSizeOfNode)*(1), "sSizeOfNode_clone", 3))));
                                                                            if(right_value481 && right_value481 != __result_obj__) { come_call_finalizer(sSizeOfNode_finalize,right_value481, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                            if(_if_conditional359=self!=((void*)0)&&self->type!=((void*)0),                                                                            _if_conditional359) {
                                                                                __dec_obj157=result_189->type;
                                                                                result_189->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value482=sType_clone(self->type))));
                                                                                if(__dec_obj157) { come_call_finalizer(sType_finalize,__dec_obj157, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                                if(right_value482 && right_value482 != __result_obj__) { come_call_finalizer(sType_finalize,right_value482, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                            }
                                                                            if(_if_conditional360=self!=((void*)0),                                                                            _if_conditional360) {
                                                                                result_189->sline=self->sline;
                                                                            }
                                                                            if(_if_conditional361=self!=((void*)0)&&self->sname!=((void*)0),                                                                            _if_conditional361) {
                                                                                __dec_obj158=result_189->sname;
                                                                                result_189->sname=(char*)come_increment_ref_count(((char*)(right_value483=string_clone(self->sname))));
                                                                                if(__dec_obj158) { __dec_obj158 = come_decrement_ref_count(__dec_obj158, (void*)0, (void*)0, 0,0,0); }
                                                                                if(right_value483 && right_value483 != __result_obj__) { right_value483 = come_decrement_ref_count(right_value483, (void*)0, (void*)0, 1, 0, 0); }
                                                                            }
                                                                            __result294__ = __result_obj__ = result_189;
                                                                            if(result_189) { come_call_finalizer(sSizeOfNode_finalize,result_189, (void*)0, (void*)0, 0, 0, 1, 0); }
                                                                            return __result294__;
                                                                            if(result_189) { come_call_finalizer(sSizeOfNode_finalize,result_189, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sSizeOfExpNode_finalize(struct sSizeOfExpNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional362;
_Bool _if_conditional363;
memset(&__result_obj__, 0, sizeof(void*));
                                                                            if(_if_conditional362=self!=((void*)0)&&self->exp!=((void*)0),                                                                            _if_conditional362) {
                                                                                if(self->exp) { self->exp = come_decrement_ref_count(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0, 0); } 
                                                                            }
                                                                            if(_if_conditional363=self!=((void*)0)&&self->sname!=((void*)0),                                                                            _if_conditional363) {
                                                                                if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                                                                            }
}

static struct sSizeOfExpNode* sSizeOfExpNode_clone(struct sSizeOfExpNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional364;
struct sSizeOfExpNode* __result296__;
void* right_value491;
struct sSizeOfExpNode* result_191;
_Bool _if_conditional365;
void* right_value492;
struct sNode* __dec_obj159;
_Bool _if_conditional366;
_Bool _if_conditional367;
void* right_value493;
char* __dec_obj160;
struct sSizeOfExpNode* __result297__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_191, 0, sizeof(struct sSizeOfExpNode*));
                                                                            if(_if_conditional364=self==(void*)0,                                                                            _if_conditional364) {
                                                                                __result296__ = __result_obj__ = (void*)0;
                                                                                return __result296__;
                                                                            }
                                                                            result_191=(struct sSizeOfExpNode*)come_increment_ref_count(((struct sSizeOfExpNode*)(right_value491=(struct sSizeOfExpNode*)come_calloc(1, sizeof(struct sSizeOfExpNode)*(1), "sSizeOfExpNode_clone", 3))));
                                                                            if(right_value491 && right_value491 != __result_obj__) { come_call_finalizer(sSizeOfExpNode_finalize,right_value491, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                            if(_if_conditional365=self!=((void*)0)&&self->exp!=((void*)0),                                                                            _if_conditional365) {
                                                                                __dec_obj159=result_191->exp;
                                                                                result_191->exp=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value492=sNode_clone(self->exp))));
                                                                                if(__dec_obj159) { __dec_obj159 = come_decrement_ref_count(__dec_obj159, ((struct sNode*)__dec_obj159)->finalize, ((struct sNode*)__dec_obj159)->_protocol_obj, 0,0,0); }
                                                                                if(right_value492 && right_value492 != __result_obj__) { right_value492 = come_decrement_ref_count(right_value492, ((struct sNode*)right_value492)->finalize, ((struct sNode*)right_value492)->_protocol_obj, 1, 0, 0); } 
                                                                            }
                                                                            if(_if_conditional366=self!=((void*)0),                                                                            _if_conditional366) {
                                                                                result_191->sline=self->sline;
                                                                            }
                                                                            if(_if_conditional367=self!=((void*)0)&&self->sname!=((void*)0),                                                                            _if_conditional367) {
                                                                                __dec_obj160=result_191->sname;
                                                                                result_191->sname=(char*)come_increment_ref_count(((char*)(right_value493=string_clone(self->sname))));
                                                                                if(__dec_obj160) { __dec_obj160 = come_decrement_ref_count(__dec_obj160, (void*)0, (void*)0, 0,0,0); }
                                                                                if(right_value493 && right_value493 != __result_obj__) { right_value493 = come_decrement_ref_count(right_value493, (void*)0, (void*)0, 1, 0, 0); }
                                                                            }
                                                                            __result297__ = __result_obj__ = result_191;
                                                                            if(result_191) { come_call_finalizer(sSizeOfExpNode_finalize,result_191, (void*)0, (void*)0, 0, 0, 1, 0); }
                                                                            return __result297__;
                                                                            if(result_191) { come_call_finalizer(sSizeOfExpNode_finalize,result_191, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sAlignOfNode_finalize(struct sAlignOfNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional373;
_Bool _if_conditional374;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                if(_if_conditional373=self!=((void*)0)&&self->type!=((void*)0),                                                                                _if_conditional373) {
                                                                                    if(self->type) { come_call_finalizer(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                                }
                                                                                if(_if_conditional374=self!=((void*)0)&&self->sname!=((void*)0),                                                                                _if_conditional374) {
                                                                                    if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                                                                                }
}

static struct sAlignOfNode* sAlignOfNode_clone(struct sAlignOfNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional375;
struct sAlignOfNode* __result300__;
void* right_value505;
struct sAlignOfNode* result_199;
_Bool _if_conditional376;
void* right_value506;
struct sType* __dec_obj161;
_Bool _if_conditional377;
_Bool _if_conditional378;
void* right_value507;
char* __dec_obj162;
struct sAlignOfNode* __result301__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_199, 0, sizeof(struct sAlignOfNode*));
                                                                                if(_if_conditional375=self==(void*)0,                                                                                _if_conditional375) {
                                                                                    __result300__ = __result_obj__ = (void*)0;
                                                                                    return __result300__;
                                                                                }
                                                                                result_199=(struct sAlignOfNode*)come_increment_ref_count(((struct sAlignOfNode*)(right_value505=(struct sAlignOfNode*)come_calloc(1, sizeof(struct sAlignOfNode)*(1), "sAlignOfNode_clone", 3))));
                                                                                if(right_value505 && right_value505 != __result_obj__) { come_call_finalizer(sAlignOfNode_finalize,right_value505, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                                if(_if_conditional376=self!=((void*)0)&&self->type!=((void*)0),                                                                                _if_conditional376) {
                                                                                    __dec_obj161=result_199->type;
                                                                                    result_199->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value506=sType_clone(self->type))));
                                                                                    if(__dec_obj161) { come_call_finalizer(sType_finalize,__dec_obj161, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                                    if(right_value506 && right_value506 != __result_obj__) { come_call_finalizer(sType_finalize,right_value506, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                                }
                                                                                if(_if_conditional377=self!=((void*)0),                                                                                _if_conditional377) {
                                                                                    result_199->sline=self->sline;
                                                                                }
                                                                                if(_if_conditional378=self!=((void*)0)&&self->sname!=((void*)0),                                                                                _if_conditional378) {
                                                                                    __dec_obj162=result_199->sname;
                                                                                    result_199->sname=(char*)come_increment_ref_count(((char*)(right_value507=string_clone(self->sname))));
                                                                                    if(__dec_obj162) { __dec_obj162 = come_decrement_ref_count(__dec_obj162, (void*)0, (void*)0, 0,0,0); }
                                                                                    if(right_value507 && right_value507 != __result_obj__) { right_value507 = come_decrement_ref_count(right_value507, (void*)0, (void*)0, 1, 0, 0); }
                                                                                }
                                                                                __result301__ = __result_obj__ = result_199;
                                                                                if(result_199) { come_call_finalizer(sAlignOfNode_finalize,result_199, (void*)0, (void*)0, 0, 0, 1, 0); }
                                                                                return __result301__;
                                                                                if(result_199) { come_call_finalizer(sAlignOfNode_finalize,result_199, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sAlignOfExpNode_finalize(struct sAlignOfExpNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional379;
_Bool _if_conditional380;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                if(_if_conditional379=self!=((void*)0)&&self->exp!=((void*)0),                                                                                _if_conditional379) {
                                                                                    if(self->exp) { self->exp = come_decrement_ref_count(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0, 0); } 
                                                                                }
                                                                                if(_if_conditional380=self!=((void*)0)&&self->sname!=((void*)0),                                                                                _if_conditional380) {
                                                                                    if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                                                                                }
}

static struct sAlignOfExpNode* sAlignOfExpNode_clone(struct sAlignOfExpNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional381;
struct sAlignOfExpNode* __result303__;
void* right_value515;
struct sAlignOfExpNode* result_201;
_Bool _if_conditional382;
void* right_value516;
struct sNode* __dec_obj163;
_Bool _if_conditional383;
_Bool _if_conditional384;
void* right_value517;
char* __dec_obj164;
struct sAlignOfExpNode* __result304__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_201, 0, sizeof(struct sAlignOfExpNode*));
                                                                                if(_if_conditional381=self==(void*)0,                                                                                _if_conditional381) {
                                                                                    __result303__ = __result_obj__ = (void*)0;
                                                                                    return __result303__;
                                                                                }
                                                                                result_201=(struct sAlignOfExpNode*)come_increment_ref_count(((struct sAlignOfExpNode*)(right_value515=(struct sAlignOfExpNode*)come_calloc(1, sizeof(struct sAlignOfExpNode)*(1), "sAlignOfExpNode_clone", 3))));
                                                                                if(right_value515 && right_value515 != __result_obj__) { come_call_finalizer(sAlignOfExpNode_finalize,right_value515, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                                if(_if_conditional382=self!=((void*)0)&&self->exp!=((void*)0),                                                                                _if_conditional382) {
                                                                                    __dec_obj163=result_201->exp;
                                                                                    result_201->exp=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value516=sNode_clone(self->exp))));
                                                                                    if(__dec_obj163) { __dec_obj163 = come_decrement_ref_count(__dec_obj163, ((struct sNode*)__dec_obj163)->finalize, ((struct sNode*)__dec_obj163)->_protocol_obj, 0,0,0); }
                                                                                    if(right_value516 && right_value516 != __result_obj__) { right_value516 = come_decrement_ref_count(right_value516, ((struct sNode*)right_value516)->finalize, ((struct sNode*)right_value516)->_protocol_obj, 1, 0, 0); } 
                                                                                }
                                                                                if(_if_conditional383=self!=((void*)0),                                                                                _if_conditional383) {
                                                                                    result_201->sline=self->sline;
                                                                                }
                                                                                if(_if_conditional384=self!=((void*)0)&&self->sname!=((void*)0),                                                                                _if_conditional384) {
                                                                                    __dec_obj164=result_201->sname;
                                                                                    result_201->sname=(char*)come_increment_ref_count(((char*)(right_value517=string_clone(self->sname))));
                                                                                    if(__dec_obj164) { __dec_obj164 = come_decrement_ref_count(__dec_obj164, (void*)0, (void*)0, 0,0,0); }
                                                                                    if(right_value517 && right_value517 != __result_obj__) { right_value517 = come_decrement_ref_count(right_value517, (void*)0, (void*)0, 1, 0, 0); }
                                                                                }
                                                                                __result304__ = __result_obj__ = result_201;
                                                                                if(result_201) { come_call_finalizer(sAlignOfExpNode_finalize,result_201, (void*)0, (void*)0, 0, 0, 1, 0); }
                                                                                return __result304__;
                                                                                if(result_201) { come_call_finalizer(sAlignOfExpNode_finalize,result_201, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sAlignOfNode2_finalize(struct sAlignOfNode2* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional390;
_Bool _if_conditional391;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                    if(_if_conditional390=self!=((void*)0)&&self->type!=((void*)0),                                                                                    _if_conditional390) {
                                                                                        if(self->type) { come_call_finalizer(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                                    }
                                                                                    if(_if_conditional391=self!=((void*)0)&&self->sname!=((void*)0),                                                                                    _if_conditional391) {
                                                                                        if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                                                                                    }
}

static struct sAlignOfNode2* sAlignOfNode2_clone(struct sAlignOfNode2* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional392;
struct sAlignOfNode2* __result307__;
void* right_value529;
struct sAlignOfNode2* result_209;
_Bool _if_conditional393;
void* right_value530;
struct sType* __dec_obj165;
_Bool _if_conditional394;
_Bool _if_conditional395;
void* right_value531;
char* __dec_obj166;
struct sAlignOfNode2* __result308__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_209, 0, sizeof(struct sAlignOfNode2*));
                                                                                    if(_if_conditional392=self==(void*)0,                                                                                    _if_conditional392) {
                                                                                        __result307__ = __result_obj__ = (void*)0;
                                                                                        return __result307__;
                                                                                    }
                                                                                    result_209=(struct sAlignOfNode2*)come_increment_ref_count(((struct sAlignOfNode2*)(right_value529=(struct sAlignOfNode2*)come_calloc(1, sizeof(struct sAlignOfNode2)*(1), "sAlignOfNode2_clone", 3))));
                                                                                    if(right_value529 && right_value529 != __result_obj__) { come_call_finalizer(sAlignOfNode2_finalize,right_value529, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                                    if(_if_conditional393=self!=((void*)0)&&self->type!=((void*)0),                                                                                    _if_conditional393) {
                                                                                        __dec_obj165=result_209->type;
                                                                                        result_209->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value530=sType_clone(self->type))));
                                                                                        if(__dec_obj165) { come_call_finalizer(sType_finalize,__dec_obj165, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                                        if(right_value530 && right_value530 != __result_obj__) { come_call_finalizer(sType_finalize,right_value530, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                                    }
                                                                                    if(_if_conditional394=self!=((void*)0),                                                                                    _if_conditional394) {
                                                                                        result_209->sline=self->sline;
                                                                                    }
                                                                                    if(_if_conditional395=self!=((void*)0)&&self->sname!=((void*)0),                                                                                    _if_conditional395) {
                                                                                        __dec_obj166=result_209->sname;
                                                                                        result_209->sname=(char*)come_increment_ref_count(((char*)(right_value531=string_clone(self->sname))));
                                                                                        if(__dec_obj166) { __dec_obj166 = come_decrement_ref_count(__dec_obj166, (void*)0, (void*)0, 0,0,0); }
                                                                                        if(right_value531 && right_value531 != __result_obj__) { right_value531 = come_decrement_ref_count(right_value531, (void*)0, (void*)0, 1, 0, 0); }
                                                                                    }
                                                                                    __result308__ = __result_obj__ = result_209;
                                                                                    if(result_209) { come_call_finalizer(sAlignOfNode2_finalize,result_209, (void*)0, (void*)0, 0, 0, 1, 0); }
                                                                                    return __result308__;
                                                                                    if(result_209) { come_call_finalizer(sAlignOfNode2_finalize,result_209, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sAlignOfExpNode2_finalize(struct sAlignOfExpNode2* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional396;
_Bool _if_conditional397;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                    if(_if_conditional396=self!=((void*)0)&&self->exp!=((void*)0),                                                                                    _if_conditional396) {
                                                                                        if(self->exp) { self->exp = come_decrement_ref_count(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0, 0); } 
                                                                                    }
                                                                                    if(_if_conditional397=self!=((void*)0)&&self->sname!=((void*)0),                                                                                    _if_conditional397) {
                                                                                        if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                                                                                    }
}

static struct sAlignOfExpNode2* sAlignOfExpNode2_clone(struct sAlignOfExpNode2* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional398;
struct sAlignOfExpNode2* __result310__;
void* right_value539;
struct sAlignOfExpNode2* result_211;
_Bool _if_conditional399;
void* right_value540;
struct sNode* __dec_obj167;
_Bool _if_conditional400;
_Bool _if_conditional401;
void* right_value541;
char* __dec_obj168;
struct sAlignOfExpNode2* __result311__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_211, 0, sizeof(struct sAlignOfExpNode2*));
                                                                                    if(_if_conditional398=self==(void*)0,                                                                                    _if_conditional398) {
                                                                                        __result310__ = __result_obj__ = (void*)0;
                                                                                        return __result310__;
                                                                                    }
                                                                                    result_211=(struct sAlignOfExpNode2*)come_increment_ref_count(((struct sAlignOfExpNode2*)(right_value539=(struct sAlignOfExpNode2*)come_calloc(1, sizeof(struct sAlignOfExpNode2)*(1), "sAlignOfExpNode2_clone", 3))));
                                                                                    if(right_value539 && right_value539 != __result_obj__) { come_call_finalizer(sAlignOfExpNode2_finalize,right_value539, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                                    if(_if_conditional399=self!=((void*)0)&&self->exp!=((void*)0),                                                                                    _if_conditional399) {
                                                                                        __dec_obj167=result_211->exp;
                                                                                        result_211->exp=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value540=sNode_clone(self->exp))));
                                                                                        if(__dec_obj167) { __dec_obj167 = come_decrement_ref_count(__dec_obj167, ((struct sNode*)__dec_obj167)->finalize, ((struct sNode*)__dec_obj167)->_protocol_obj, 0,0,0); }
                                                                                        if(right_value540 && right_value540 != __result_obj__) { right_value540 = come_decrement_ref_count(right_value540, ((struct sNode*)right_value540)->finalize, ((struct sNode*)right_value540)->_protocol_obj, 1, 0, 0); } 
                                                                                    }
                                                                                    if(_if_conditional400=self!=((void*)0),                                                                                    _if_conditional400) {
                                                                                        result_211->sline=self->sline;
                                                                                    }
                                                                                    if(_if_conditional401=self!=((void*)0)&&self->sname!=((void*)0),                                                                                    _if_conditional401) {
                                                                                        __dec_obj168=result_211->sname;
                                                                                        result_211->sname=(char*)come_increment_ref_count(((char*)(right_value541=string_clone(self->sname))));
                                                                                        if(__dec_obj168) { __dec_obj168 = come_decrement_ref_count(__dec_obj168, (void*)0, (void*)0, 0,0,0); }
                                                                                        if(right_value541 && right_value541 != __result_obj__) { right_value541 = come_decrement_ref_count(right_value541, (void*)0, (void*)0, 1, 0, 0); }
                                                                                    }
                                                                                    __result311__ = __result_obj__ = result_211;
                                                                                    if(result_211) { come_call_finalizer(sAlignOfExpNode2_finalize,result_211, (void*)0, (void*)0, 0, 0, 1, 0); }
                                                                                    return __result311__;
                                                                                    if(result_211) { come_call_finalizer(sAlignOfExpNode2_finalize,result_211, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sAlignAsNode_finalize(struct sAlignAsNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional407;
_Bool _if_conditional408;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                        if(_if_conditional407=self!=((void*)0)&&self->type!=((void*)0),                                                                                        _if_conditional407) {
                                                                                            if(self->type) { come_call_finalizer(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                                        }
                                                                                        if(_if_conditional408=self!=((void*)0)&&self->sname!=((void*)0),                                                                                        _if_conditional408) {
                                                                                            if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                                                                                        }
}

static struct sAlignAsNode* sAlignAsNode_clone(struct sAlignAsNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional409;
struct sAlignAsNode* __result314__;
void* right_value553;
struct sAlignAsNode* result_219;
_Bool _if_conditional410;
void* right_value554;
struct sType* __dec_obj169;
_Bool _if_conditional411;
_Bool _if_conditional412;
void* right_value555;
char* __dec_obj170;
struct sAlignAsNode* __result315__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_219, 0, sizeof(struct sAlignAsNode*));
                                                                                        if(_if_conditional409=self==(void*)0,                                                                                        _if_conditional409) {
                                                                                            __result314__ = __result_obj__ = (void*)0;
                                                                                            return __result314__;
                                                                                        }
                                                                                        result_219=(struct sAlignAsNode*)come_increment_ref_count(((struct sAlignAsNode*)(right_value553=(struct sAlignAsNode*)come_calloc(1, sizeof(struct sAlignAsNode)*(1), "sAlignAsNode_clone", 3))));
                                                                                        if(right_value553 && right_value553 != __result_obj__) { come_call_finalizer(sAlignAsNode_finalize,right_value553, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                                        if(_if_conditional410=self!=((void*)0)&&self->type!=((void*)0),                                                                                        _if_conditional410) {
                                                                                            __dec_obj169=result_219->type;
                                                                                            result_219->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value554=sType_clone(self->type))));
                                                                                            if(__dec_obj169) { come_call_finalizer(sType_finalize,__dec_obj169, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                                            if(right_value554 && right_value554 != __result_obj__) { come_call_finalizer(sType_finalize,right_value554, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                                        }
                                                                                        if(_if_conditional411=self!=((void*)0),                                                                                        _if_conditional411) {
                                                                                            result_219->sline=self->sline;
                                                                                        }
                                                                                        if(_if_conditional412=self!=((void*)0)&&self->sname!=((void*)0),                                                                                        _if_conditional412) {
                                                                                            __dec_obj170=result_219->sname;
                                                                                            result_219->sname=(char*)come_increment_ref_count(((char*)(right_value555=string_clone(self->sname))));
                                                                                            if(__dec_obj170) { __dec_obj170 = come_decrement_ref_count(__dec_obj170, (void*)0, (void*)0, 0,0,0); }
                                                                                            if(right_value555 && right_value555 != __result_obj__) { right_value555 = come_decrement_ref_count(right_value555, (void*)0, (void*)0, 1, 0, 0); }
                                                                                        }
                                                                                        __result315__ = __result_obj__ = result_219;
                                                                                        if(result_219) { come_call_finalizer(sAlignAsNode_finalize,result_219, (void*)0, (void*)0, 0, 0, 1, 0); }
                                                                                        return __result315__;
                                                                                        if(result_219) { come_call_finalizer(sAlignAsNode_finalize,result_219, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sAlignAsExpNode_finalize(struct sAlignAsExpNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional413;
_Bool _if_conditional414;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                        if(_if_conditional413=self!=((void*)0)&&self->exp!=((void*)0),                                                                                        _if_conditional413) {
                                                                                            if(self->exp) { self->exp = come_decrement_ref_count(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0, 0); } 
                                                                                        }
                                                                                        if(_if_conditional414=self!=((void*)0)&&self->sname!=((void*)0),                                                                                        _if_conditional414) {
                                                                                            if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                                                                                        }
}

static struct sAlignAsExpNode* sAlignAsExpNode_clone(struct sAlignAsExpNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional415;
struct sAlignAsExpNode* __result317__;
void* right_value563;
struct sAlignAsExpNode* result_221;
_Bool _if_conditional416;
void* right_value564;
struct sNode* __dec_obj171;
_Bool _if_conditional417;
_Bool _if_conditional418;
void* right_value565;
char* __dec_obj172;
struct sAlignAsExpNode* __result318__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_221, 0, sizeof(struct sAlignAsExpNode*));
                                                                                        if(_if_conditional415=self==(void*)0,                                                                                        _if_conditional415) {
                                                                                            __result317__ = __result_obj__ = (void*)0;
                                                                                            return __result317__;
                                                                                        }
                                                                                        result_221=(struct sAlignAsExpNode*)come_increment_ref_count(((struct sAlignAsExpNode*)(right_value563=(struct sAlignAsExpNode*)come_calloc(1, sizeof(struct sAlignAsExpNode)*(1), "sAlignAsExpNode_clone", 3))));
                                                                                        if(right_value563 && right_value563 != __result_obj__) { come_call_finalizer(sAlignAsExpNode_finalize,right_value563, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                                        if(_if_conditional416=self!=((void*)0)&&self->exp!=((void*)0),                                                                                        _if_conditional416) {
                                                                                            __dec_obj171=result_221->exp;
                                                                                            result_221->exp=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value564=sNode_clone(self->exp))));
                                                                                            if(__dec_obj171) { __dec_obj171 = come_decrement_ref_count(__dec_obj171, ((struct sNode*)__dec_obj171)->finalize, ((struct sNode*)__dec_obj171)->_protocol_obj, 0,0,0); }
                                                                                            if(right_value564 && right_value564 != __result_obj__) { right_value564 = come_decrement_ref_count(right_value564, ((struct sNode*)right_value564)->finalize, ((struct sNode*)right_value564)->_protocol_obj, 1, 0, 0); } 
                                                                                        }
                                                                                        if(_if_conditional417=self!=((void*)0),                                                                                        _if_conditional417) {
                                                                                            result_221->sline=self->sline;
                                                                                        }
                                                                                        if(_if_conditional418=self!=((void*)0)&&self->sname!=((void*)0),                                                                                        _if_conditional418) {
                                                                                            __dec_obj172=result_221->sname;
                                                                                            result_221->sname=(char*)come_increment_ref_count(((char*)(right_value565=string_clone(self->sname))));
                                                                                            if(__dec_obj172) { __dec_obj172 = come_decrement_ref_count(__dec_obj172, (void*)0, (void*)0, 0,0,0); }
                                                                                            if(right_value565 && right_value565 != __result_obj__) { right_value565 = come_decrement_ref_count(right_value565, (void*)0, (void*)0, 1, 0, 0); }
                                                                                        }
                                                                                        __result318__ = __result_obj__ = result_221;
                                                                                        if(result_221) { come_call_finalizer(sAlignAsExpNode_finalize,result_221, (void*)0, (void*)0, 0, 0, 1, 0); }
                                                                                        return __result318__;
                                                                                        if(result_221) { come_call_finalizer(sAlignAsExpNode_finalize,result_221, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct sNode* optional$2sNodephbool_catch(struct optional$2sNodephbool* self, void* parent, void (*block)(void*)){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional419;
_Bool _if_conditional420;
struct sNode* __result320__;
struct sNode* __result321__;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional419=!self->v2,        _if_conditional419) {
            block(parent);
            if(_if_conditional420=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,            _if_conditional420) {
                __result320__ = __result_obj__ = self->v1;
                return __result320__;
            }
        }
        __result321__ = __result_obj__ = self->v1;
        return __result321__;
}

void method_block1_21objc(struct __current_stack1__* parent){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value570;
void* right_value571;
memset(&__result_obj__, 0, sizeof(void*));
        if(right_value570 && right_value570 != __result_obj__) { right_value570 = come_decrement_ref_count(right_value570, (void*)0, (void*)0, 1, 0, 0); }
                    ((struct __current_stack1__*) parent)->__method_block_result_kind__ = 3;
            ((struct __current_stack1__*) parent)->__method_block_return_value__ = (struct optional$2voidpbool*)come_increment_ref_count(((struct optional$2voidpbool*)(right_value571=optional$2voidpbool_initialize(((struct optional$2voidpbool*)(right_value570=(struct optional$2voidpbool*)come_calloc(1, sizeof(struct optional$2voidpbool)*(1), "21obj.c", 1831))),((void*)0),(_Bool)0))));
        return;}

struct sNode* top_level_v94(char* buf, char* head, int head_sline, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional421;
_Bool _if_conditional422;
_Bool _if_conditional423;
_Bool _if_conditional424;
_Bool _if_conditional425;
_Bool _if_conditional426;
_Bool _if_conditional427;
_Bool _if_conditional428;
void* right_value575;
void* right_value576;
struct sNode* __result323__;
void* right_value577;
void* right_value578;
struct sNode* _inf_value34;
struct sNullNodeX* _inf_obj_value34;
void* right_value581;
struct sNode* __result326__;
void* right_value582;
void* right_value583;
struct sNode* __result327__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional421=string_operator_equals(buf,"using"),    _if_conditional421) {
        if(_if_conditional422=memcmp(info->p,"comelang",strlen("comelang"))==0,        _if_conditional422) {
            info->p+=strlen("comelang");
            skip_spaces_and_lf(info);
            gComeC=(_Bool)0;
        }
        else {
            if(_if_conditional423=memcmp(info->p,"c",strlen("c"))==0||memcmp(info->p,"C",strlen("C"))==0,            _if_conditional423) {
                info->p+=strlen("c");
                skip_spaces_and_lf(info);
                if(_if_conditional424=*info->p==123,                _if_conditional424) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    gComeC=(_Bool)1;
                    transpile_toplevel((_Bool)1,info);
                    gComeC=(_Bool)0;
                }
                else {
                    gComeC=(_Bool)1;
                }
            }
            else {
                if(_if_conditional425=memcmp(info->p,"gc",strlen("gc"))==0,                _if_conditional425) {
                    info->p+=strlen("gc");
                    skip_spaces_and_lf(info);
                }
                else {
                    if(_if_conditional426=memcmp(info->p,"no-gc",strlen("no-gc"))==0,                    _if_conditional426) {
                        info->p+=strlen("no-gc");
                        skip_spaces_and_lf(info);
                    }
                    else {
                        if(_if_conditional427=memcmp(info->p,"unsafe",strlen("unsafe"))==0,                        _if_conditional427) {
                            info->p+=strlen("unsafe");
                            skip_spaces_and_lf(info);
                        }
                        else {
                            if(_if_conditional428=memcmp(info->p,"no-null-check",strlen("no-null-check"))==0,                            _if_conditional428) {
                                info->p+=strlen("no-null-check");
                                skip_spaces_and_lf(info);
                            }
                            else {
                                err_msg(info,"invalid using");
                                __result323__ = __result_obj__ = ((struct optional$2voidpbool*)(right_value576=optional$2voidpbool_initialize(((struct optional$2voidpbool*)(right_value575=(struct optional$2voidpbool*)come_calloc(1, sizeof(struct optional$2voidpbool)*(1), "21obj.c", 1881))),((void*)0),(_Bool)0)));
                                if(buf) { buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 1, 0); }
                                if(right_value575 && right_value575 != __result_obj__) { right_value575 = come_decrement_ref_count(right_value575, (void*)0, (void*)0, 1, 0, 0); }
                                return __result323__;
                            }
                        }
                    }
                }
            }
        }
        _inf_value34=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1884);
        _inf_obj_value34=come_increment_ref_count(((struct sNullNodeX*)(right_value578=sNullNodeX_initialize((struct sNullNodeX*)come_increment_ref_count(((struct sNullNodeX*)(right_value577=(struct sNullNodeX*)come_calloc(1, sizeof(struct sNullNodeX)*(1), "21obj.c", 1884)))),info))));
        _inf_value34->_protocol_obj=_inf_obj_value34;
        _inf_value34->finalize=(void*)sNullNodeX_finalize;
        _inf_value34->clone=(void*)sNullNodeX_clone;
        _inf_value34->compile=(void*)sNullNodeX_compile;
        _inf_value34->sline=(void*)sNullNodeX_sline;
        _inf_value34->sname=(void*)sNullNodeX_sname;
        _inf_value34->terminated=(void*)sNullNodeX_terminated;
        _inf_value34->kind=(void*)sNullNodeX_kind;
        __result326__ = __result_obj__ = ((struct sNode*)(right_value581=_inf_value34));
        if(buf) { buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value577 && right_value577 != __result_obj__) { come_call_finalizer(sNullNodeX_finalize,right_value577, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value578 && right_value578 != __result_obj__) { come_call_finalizer(sNullNodeX_finalize,right_value578, (void*)0, (void*)0, 0, 1, 0, 0); }
        return __result326__;
    }
    __result327__ = __result_obj__ = ((struct sNode*)(right_value583=top_level_v93((char*)come_increment_ref_count(((char*)(right_value582=__builtin_string(buf)))),head,head_sline,info)));
    if(buf) { buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value582 && right_value582 != __result_obj__) { right_value582 = come_decrement_ref_count(right_value582, (void*)0, (void*)0, 1, 0, 0); }
    return __result327__;
    if(buf) { buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 1, 0); }
}

static void sNullNodeX_finalize(struct sNullNodeX* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional429;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional429=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional429) {
                if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
            }
}

static struct sNullNodeX* sNullNodeX_clone(struct sNullNodeX* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional430;
struct sNullNodeX* __result324__;
void* right_value579;
struct sNullNodeX* result_223;
_Bool _if_conditional431;
_Bool _if_conditional432;
void* right_value580;
char* __dec_obj173;
struct sNullNodeX* __result325__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_223, 0, sizeof(struct sNullNodeX*));
            if(_if_conditional430=self==(void*)0,            _if_conditional430) {
                __result324__ = __result_obj__ = (void*)0;
                return __result324__;
            }
            result_223=(struct sNullNodeX*)come_increment_ref_count(((struct sNullNodeX*)(right_value579=(struct sNullNodeX*)come_calloc(1, sizeof(struct sNullNodeX)*(1), "sNullNodeX_clone", 3))));
            if(right_value579 && right_value579 != __result_obj__) { come_call_finalizer(sNullNodeX_finalize,right_value579, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(_if_conditional431=self!=((void*)0),            _if_conditional431) {
                result_223->sline=self->sline;
            }
            if(_if_conditional432=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional432) {
                __dec_obj173=result_223->sname;
                result_223->sname=(char*)come_increment_ref_count(((char*)(right_value580=string_clone(self->sname))));
                if(__dec_obj173) { __dec_obj173 = come_decrement_ref_count(__dec_obj173, (void*)0, (void*)0, 0,0,0); }
                if(right_value580 && right_value580 != __result_obj__) { right_value580 = come_decrement_ref_count(right_value580, (void*)0, (void*)0, 1, 0, 0); }
            }
            __result325__ = __result_obj__ = result_223;
            if(result_223) { come_call_finalizer(sNullNodeX_finalize,result_223, (void*)0, (void*)0, 0, 0, 1, 0); }
            return __result325__;
            if(result_223) { come_call_finalizer(sNullNodeX_finalize,result_223, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sNode* post_position_operator3_v21(struct sNode* node, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional433;
void* right_value584;
struct tuple3$3sTypephcharphbool* multiple_assgin_var10;
struct sType* type3_224;
char* name2_225;
_Bool err_226;
_Bool _if_conditional434;
void* right_value585;
struct sType* inf_type_227;
void* right_value586;
void* right_value587;
struct sNode* _inf_value35;
struct sImplementsNode* _inf_obj_value35;
void* right_value592;
struct sNode* __result330__;
_Bool _if_conditional443;
_Bool _while_condtional9;
void* right_value593;
struct sNode* __result331__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&type3_224, 0, sizeof(struct sType*));
memset(&name2_225, 0, sizeof(char*));
memset(&err_226, 0, sizeof(_Bool));
memset(&type3_224, 0, sizeof(struct sType*));
memset(&name2_225, 0, sizeof(char*));
memset(&err_226, 0, sizeof(_Bool));
memset(&inf_type_227, 0, sizeof(struct sType*));
    if(_if_conditional433=memcmp(info->p,"implements",strlen("implements"))==0,    _if_conditional433) {
        info->p+=strlen("implements");
        skip_spaces_and_lf(info);
        multiple_assgin_var10=optional$2tuple3$3sTypephcharphboolphbool_value(((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value584=parse_type(info,(_Bool)0,(_Bool)1))));
        type3_224=(struct sType*)come_increment_ref_count(multiple_assgin_var10->v1);
        name2_225=(char*)come_increment_ref_count(multiple_assgin_var10->v2);
        err_226=multiple_assgin_var10->v3;
        if(right_value584 && right_value584 != __result_obj__) { come_call_finalizer(optional$2tuple3$3sTypephcharphboolphboolp_finalize,right_value584, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(_if_conditional434=!err_226,        _if_conditional434) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        inf_type_227=(struct sType*)come_increment_ref_count(((struct sType*)(right_value585=sType_clone(type3_224))));
        if(right_value585 && right_value585 != __result_obj__) { come_call_finalizer(sType_finalize,right_value585, (void*)0, (void*)0, 0, 1, 0, 0); }
        _inf_value35=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1904);
        _inf_obj_value35=come_increment_ref_count(((struct sImplementsNode*)(right_value587=sImplementsNode_initialize((struct sImplementsNode*)come_increment_ref_count(((struct sImplementsNode*)(right_value586=(struct sImplementsNode*)come_calloc(1, sizeof(struct sImplementsNode)*(1), "21obj.c", 1904)))),(struct sNode*)come_increment_ref_count(node),(struct sType*)come_increment_ref_count(inf_type_227),info))));
        _inf_value35->_protocol_obj=_inf_obj_value35;
        _inf_value35->finalize=(void*)sImplementsNode_finalize;
        _inf_value35->clone=(void*)sImplementsNode_clone;
        _inf_value35->compile=(void*)sImplementsNode_compile;
        _inf_value35->sline=(void*)sImplementsNode_sline;
        _inf_value35->sname=(void*)sImplementsNode_sname;
        _inf_value35->terminated=(void*)sImplementsNode_terminated;
        _inf_value35->kind=(void*)sImplementsNode_kind;
        __result330__ = __result_obj__ = ((struct sNode*)(right_value592=_inf_value35));
        if(type3_224) { come_call_finalizer(sType_finalize,type3_224, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(name2_225) { name2_225 = come_decrement_ref_count(name2_225, (void*)0, (void*)0, 0, 0, 0); }
        if(inf_type_227) { come_call_finalizer(sType_finalize,inf_type_227, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(node) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
        if(right_value586 && right_value586 != __result_obj__) { come_call_finalizer(sImplementsNode_finalize,right_value586, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value587 && right_value587 != __result_obj__) { come_call_finalizer(sImplementsNode_finalize,right_value587, (void*)0, (void*)0, 0, 1, 0, 0); }
        return __result330__;
        if(type3_224) { come_call_finalizer(sType_finalize,type3_224, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(name2_225) { name2_225 = come_decrement_ref_count(name2_225, (void*)0, (void*)0, 0, 0, 0); }
        if(inf_type_227) { come_call_finalizer(sType_finalize,inf_type_227, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    else {
        if(_if_conditional443=*info->p==64,        _if_conditional443) {
            info->p++;
            while(_while_condtional9=xisalnum(*info->p)||*info->p==95,            _while_condtional9) {
                info->p++;
            }
            skip_spaces_and_lf(info);
        }
    }
    __result331__ = __result_obj__ = ((struct sNode*)(right_value593=post_position_operator3_v20((struct sNode*)come_increment_ref_count(node),info)));
    if(node) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
    return __result331__;
    if(node) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
}

static void sImplementsNode_finalize(struct sImplementsNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional435;
_Bool _if_conditional436;
_Bool _if_conditional437;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional435=self!=((void*)0)&&self->obj_exp!=((void*)0),            _if_conditional435) {
                if(self->obj_exp) { self->obj_exp = come_decrement_ref_count(self->obj_exp, ((struct sNode*)self->obj_exp)->finalize, ((struct sNode*)self->obj_exp)->_protocol_obj, 0, 0, 0); } 
            }
            if(_if_conditional436=self!=((void*)0)&&self->inf_type!=((void*)0),            _if_conditional436) {
                if(self->inf_type) { come_call_finalizer(sType_finalize,self->inf_type, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            if(_if_conditional437=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional437) {
                if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
            }
}

static struct sImplementsNode* sImplementsNode_clone(struct sImplementsNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional438;
struct sImplementsNode* __result328__;
void* right_value588;
struct sImplementsNode* result_228;
_Bool _if_conditional439;
void* right_value589;
struct sNode* __dec_obj174;
_Bool _if_conditional440;
void* right_value590;
struct sType* __dec_obj175;
_Bool _if_conditional441;
_Bool _if_conditional442;
void* right_value591;
char* __dec_obj176;
struct sImplementsNode* __result329__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_228, 0, sizeof(struct sImplementsNode*));
            if(_if_conditional438=self==(void*)0,            _if_conditional438) {
                __result328__ = __result_obj__ = (void*)0;
                return __result328__;
            }
            result_228=(struct sImplementsNode*)come_increment_ref_count(((struct sImplementsNode*)(right_value588=(struct sImplementsNode*)come_calloc(1, sizeof(struct sImplementsNode)*(1), "sImplementsNode_clone", 3))));
            if(right_value588 && right_value588 != __result_obj__) { come_call_finalizer(sImplementsNode_finalize,right_value588, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(_if_conditional439=self!=((void*)0)&&self->obj_exp!=((void*)0),            _if_conditional439) {
                __dec_obj174=result_228->obj_exp;
                result_228->obj_exp=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value589=sNode_clone(self->obj_exp))));
                if(__dec_obj174) { __dec_obj174 = come_decrement_ref_count(__dec_obj174, ((struct sNode*)__dec_obj174)->finalize, ((struct sNode*)__dec_obj174)->_protocol_obj, 0,0,0); }
                if(right_value589 && right_value589 != __result_obj__) { right_value589 = come_decrement_ref_count(right_value589, ((struct sNode*)right_value589)->finalize, ((struct sNode*)right_value589)->_protocol_obj, 1, 0, 0); } 
            }
            if(_if_conditional440=self!=((void*)0)&&self->inf_type!=((void*)0),            _if_conditional440) {
                __dec_obj175=result_228->inf_type;
                result_228->inf_type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value590=sType_clone(self->inf_type))));
                if(__dec_obj175) { come_call_finalizer(sType_finalize,__dec_obj175, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(right_value590 && right_value590 != __result_obj__) { come_call_finalizer(sType_finalize,right_value590, (void*)0, (void*)0, 0, 1, 0, 0); }
            }
            if(_if_conditional441=self!=((void*)0),            _if_conditional441) {
                result_228->sline=self->sline;
            }
            if(_if_conditional442=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional442) {
                __dec_obj176=result_228->sname;
                result_228->sname=(char*)come_increment_ref_count(((char*)(right_value591=string_clone(self->sname))));
                if(__dec_obj176) { __dec_obj176 = come_decrement_ref_count(__dec_obj176, (void*)0, (void*)0, 0,0,0); }
                if(right_value591 && right_value591 != __result_obj__) { right_value591 = come_decrement_ref_count(right_value591, (void*)0, (void*)0, 1, 0, 0); }
            }
            __result329__ = __result_obj__ = result_228;
            if(result_228) { come_call_finalizer(sImplementsNode_finalize,result_228, (void*)0, (void*)0, 0, 0, 1, 0); }
            return __result329__;
            if(result_228) { come_call_finalizer(sImplementsNode_finalize,result_228, (void*)0, (void*)0, 0, 0, 0, 0); }
}

