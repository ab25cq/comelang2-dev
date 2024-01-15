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
struct tuple3$3sTypephcharphsNodeph
{
    struct sType* v1;
    char* v2;
    struct sNode* v3;
};
struct list_item$1tuple3$3sTypephcharphsNodephph
{
    struct tuple3$3sTypephcharphsNodeph* item;
    struct list_item$1tuple3$3sTypephcharphsNodephph* prev;
    struct list_item$1tuple3$3sTypephcharphsNodephph* next;
};
struct list$1tuple3$3sTypephcharphsNodephph
{
    struct list_item$1tuple3$3sTypephcharphsNodephph* head;
    struct list_item$1tuple3$3sTypephcharphsNodephph* tail;
    int len;
    struct list_item$1tuple3$3sTypephcharphsNodephph* it;
};
struct sStoreNode
{
    char* name;
    struct list$1charph* multiple_assign;
    struct list$1tuple3$3sTypephcharphsNodephph* multiple_declare;
    struct sNode* right_value;
    struct sType* type;
    char* array_initializer;
    _Bool alloc;
    int sline;
    char* sname;
};
struct optional$2sVarpbool
{
    struct sVar* v1;
    _Bool v2;
};
struct optional$2sTypephbool
{
    struct sType* v1;
    _Bool v2;
};
struct sLoadNode
{
    char* name;
    int sline;
    char* sname;
};
struct optional$2sFunpbool
{
    struct sFun* v1;
    _Bool v2;
};
struct sFunLoadNode
{
    char* name;
    int sline;
    char* sname;
};
struct optional$2voidpbool
{
    void* v1;
    _Bool v2;
};
struct tuple3$3sTypephcharphvoidp
{
    struct sType* v1;
    char* v2;
    void* v3;
};
struct __current_stack1__
{
    int __method_block_result_kind__;
    void* __method_block_return_value__;
    char** buf;
    char** head;
    int* head_sline;
    struct sInfo** info;
    _Bool* is_type_name_flag_197;
    _Bool* multiple_declare_198;
    _Bool* multiple_declare2_205;
    struct sFun** fun_215;
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

struct sNode* create_object(struct sType* type, struct sInfo* info);

struct sNode* create_true_object(struct sInfo* info);

struct sNode* create_false_object(struct sInfo* info);

struct optional$2sNodephbool* string_node_v21(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* top_level_v94(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* post_position_operator3_v21(struct sNode* node, struct sInfo* info);

struct sNode* top_level_v93(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* top_level_v92(char* buf, char* head, int head_sline, struct sInfo* info);

struct sStoreNode* sStoreNode_initialize(struct sStoreNode* self, char* name, struct list$1charph* multiple_assign, struct list$1tuple3$3sTypephcharphsNodephph* multiple_declare, struct sType* type, _Bool alloc, struct sNode* right_value, char* array_initializer, struct sInfo* info);

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
static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephphp_clone(struct list$1tuple3$3sTypephcharphsNodephph* self);
static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephph_initialize(struct list$1tuple3$3sTypephcharphsNodephph* self);
static void list$1tuple3$3sTypephcharphsNodephphp_finalize(struct list$1tuple3$3sTypephcharphsNodephph* self);
static void list_item$1tuple3$3sTypephcharphsNodephphp_finalize(struct list_item$1tuple3$3sTypephcharphsNodephph* self);
static void tuple3$3sTypephcharphsNodephp_finalize(struct tuple3$3sTypephcharphsNodeph* self);
static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephph_add(struct list$1tuple3$3sTypephcharphsNodephph* self, struct tuple3$3sTypephcharphsNodeph* item);
static void tuple3$3sTypephcharphsNodeph_finalize(struct tuple3$3sTypephcharphsNodeph* self);
static struct tuple3$3sTypephcharphsNodeph* tuple3$3sTypephcharphsNodephp_clone(struct tuple3$3sTypephcharphsNodeph* self);
static void list$1tuple3$3sTypephcharphsNodephph_finalize(struct list$1tuple3$3sTypephcharphsNodephph* self);
_Bool sStoreNode_terminated();

char* sStoreNode_kind();

_Bool sStoreNode_compile(struct sStoreNode* self, struct sInfo* info);

static struct optional$2sVarpbool* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key);
static _Bool optional$2boolbool_value(struct optional$2boolbool* self);
static void optional$2boolboolp_finalize(struct optional$2boolbool* self);
static struct optional$2sVarpbool* optional$2sVarpbool_initialize(struct optional$2sVarpbool* self, struct sVar* v1, _Bool v2);
static void optional$2sVarpboolp_finalize(struct optional$2sVarpbool* self);
static struct sVar* optional$2sVarpbool_value(struct optional$2sVarpbool* self);
static char* optional$2charphbool_value(struct optional$2charphbool* self);
static void optional$2charphboolp_finalize(struct optional$2charphbool* self);
static struct tuple3$3sTypephcharphsNodeph* list$1tuple3$3sTypephcharphsNodephph_begin(struct list$1tuple3$3sTypephcharphsNodephph* self);
static _Bool list$1tuple3$3sTypephcharphsNodephph_end(struct list$1tuple3$3sTypephcharphsNodephph* self);
static struct tuple3$3sTypephcharphsNodeph* list$1tuple3$3sTypephcharphsNodephph_next(struct list$1tuple3$3sTypephcharphsNodephph* self);
static void CVALUE_finalize(struct CVALUE* self);
static int list$1sNodeph_length(struct list$1sNodeph* self);
static char* optional$2charphbool_expect(struct optional$2charphbool* self);
static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self);
static _Bool list$1sNodeph_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self);
static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
static char* list$1charph_begin(struct list$1charph* self);
static _Bool list$1charph_end(struct list$1charph* self);
static char* list$1charph_next(struct list$1charph* self);
static int list$1sTypeph_length(struct list$1sTypeph* self);
static struct optional$2sTypephbool* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
static struct optional$2sTypephbool* optional$2sTypephbool_initialize(struct optional$2sTypephbool* self, struct sType* v1, _Bool v2);
static void optional$2sTypephboolp_finalize(struct optional$2sTypephbool* self);
static struct sType* optional$2sTypephbool_value(struct optional$2sTypephbool* self);
int sStoreNode_sline(struct sStoreNode* self, struct sInfo* info);

char* sStoreNode_sname(struct sStoreNode* self, struct sInfo* info);

struct sNode* store_var(char* name, struct list$1charph* multiple_assign, struct sType* type, _Bool alloc, struct sNode* right_node, struct sInfo* info);

struct sLoadNode* sLoadNode_initialize(struct sLoadNode* self, char* name, struct sInfo* info);

_Bool sLoadNode_terminated();

char* sLoadNode_kind();

_Bool sLoadNode_compile(struct sLoadNode* self, struct sInfo* info);

static struct optional$2sFunpbool* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key);
static struct optional$2sFunpbool* optional$2sFunpbool_initialize(struct optional$2sFunpbool* self, struct sFun* v1, _Bool v2);
static void optional$2sFunpboolp_finalize(struct optional$2sFunpbool* self);
static struct sFun* optional$2sFunpbool_value(struct optional$2sFunpbool* self);
static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self);
int sLoadNode_sline(struct sLoadNode* self, struct sInfo* info);

char* sLoadNode_sname(struct sLoadNode* self, struct sInfo* info);

struct sNode* load_var(char* name, struct sInfo* info);

struct sFunLoadNode* sFunLoadNode_initialize(struct sFunLoadNode* self, char* name, struct sInfo* info);

static void sFunLoadNode_finalize(struct sFunLoadNode* self);
_Bool sFunLoadNode_terminated();

char* sFunLoadNode_kind();

_Bool sFunLoadNode_compile(struct sFunLoadNode* self, struct sInfo* info);

int sFunLoadNode_sline(struct sFunLoadNode* self, struct sInfo* info);

char* sFunLoadNode_sname(struct sFunLoadNode* self, struct sInfo* info);

void add_variable_to_table(char* name, struct sType* type, struct sInfo* info);

static void sVar_finalize(struct sVar* self);
static struct map$2charphsVarph* map$2charphsVarph_insert(struct map$2charphsVarph* self, char* key, struct sVar* item);
static void map$2charphsVarph_rehash(struct map$2charphsVarph* self);
static char* map$2charphsVarph_begin(struct map$2charphsVarph* self);
static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self);
static char* map$2charphsVarph_next(struct map$2charphsVarph* self);
static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value);
static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item);
static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail);
static struct list$1charp* list$1charp_reset(struct list$1charp* self);
static void list_item$1charpp_finalize(struct list_item$1charp* self);
static char* list$1charp_begin(struct list$1charp* self);
static _Bool list$1charp_end(struct list$1charp* self);
static char* list$1charp_next(struct list$1charp* self);
static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item);
void add_variable_to_global_table(char* name, struct sType* type, struct sInfo* info);

void add_variable_to_global_table_with_int_value(char* name, struct sType* type, char* c_value, struct sInfo* info);

struct optional$2sNodephbool* string_node_v7(char* buf, char* head, int head_sline, struct sInfo* info);

static struct tuple3$3sTypephcharphbool* optional$2tuple3$3sTypephcharphboolphbool_value(struct optional$2tuple3$3sTypephcharphboolphbool* self);
static void optional$2tuple3$3sTypephcharphboolphboolp_finalize(struct optional$2tuple3$3sTypephcharphboolphbool* self);
static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item);
static struct optional$2sNodephbool* optional$2sNodephbool_initialize(struct optional$2sNodephbool* self, struct sNode* v1, _Bool v2);
static void optional$2sNodephboolp_finalize(struct optional$2sNodephbool* self);
static struct optional$2voidpbool* optional$2voidpbool_initialize(struct optional$2voidpbool* self, void* v1, _Bool v2);
static void optional$2voidpboolp_finalize(struct optional$2voidpbool* self);
static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self);
static struct tuple3$3sTypephcharphvoidp* tuple3$3sTypephcharphvoidp_initialize(struct tuple3$3sTypephcharphvoidp* self, struct sType* v1, char* v2, void* v3);
static void tuple3$3sTypephcharphvoidpp_finalize(struct tuple3$3sTypephcharphvoidp* self);
static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephph_push_back(struct list$1tuple3$3sTypephcharphsNodephph* self, struct tuple3$3sTypephcharphsNodeph* item);
static struct tuple3$3sTypephcharphsNodeph* tuple3$3sTypephcharphsNodeph_initialize(struct tuple3$3sTypephcharphsNodeph* self, struct sType* v1, char* v2, struct sNode* v3);
static void sLoadNode_finalize(struct sLoadNode* self);
static struct sLoadNode* sLoadNode_clone(struct sLoadNode* self);
static void sStoreNode_finalize(struct sStoreNode* self);
static struct sStoreNode* sStoreNode_clone(struct sStoreNode* self);
static struct sNode* optional$2sNodephbool_catch(struct optional$2sNodephbool* self, void* parent, void (*block)(void*));
void method_block1_07varc(struct __current_stack1__* parent);

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

struct sStoreNode* sStoreNode_initialize(struct sStoreNode* self, char* name, struct list$1charph* multiple_assign, struct list$1tuple3$3sTypephcharphsNodephph* multiple_declare, struct sType* type, _Bool alloc, struct sNode* right_value, char* array_initializer, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value10;
char* __dec_obj6;
_Bool _if_conditional5;
void* right_value45;
struct sType* __dec_obj29;
struct sType* __dec_obj30;
struct sNode* __dec_obj31;
_Bool _if_conditional92;
void* right_value46;
struct list$1charph* __dec_obj32;
struct list$1charph* __dec_obj33;
_Bool _if_conditional93;
void* right_value57;
struct list$1tuple3$3sTypephcharphsNodephph* __dec_obj40;
struct list$1tuple3$3sTypephcharphsNodephph* __dec_obj41;
char* __dec_obj42;
void* right_value58;
char* __dec_obj43;
struct sStoreNode* __result37__;
memset(&__result_obj__, 0, sizeof(void*));
    __dec_obj6=self->name;
    self->name=(char*)come_increment_ref_count(((char*)(right_value10=__builtin_string(name))));
    if(__dec_obj6) { __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0,0,0); }
    if(right_value10 && right_value10 != __result_obj__) { right_value10 = come_decrement_ref_count(right_value10, (void*)0, (void*)0, 1, 0, 0); }
    self->alloc=alloc;
    if(_if_conditional5=type,    _if_conditional5) {
        __dec_obj29=self->type;
        self->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value45=sType_clone(type))));
        if(__dec_obj29) { come_call_finalizer(sType_finalize,__dec_obj29, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value45 && right_value45 != __result_obj__) { come_call_finalizer(sType_finalize,right_value45, (void*)0, (void*)0, 0, 1, 0, 0); }
    }
    else {
        __dec_obj30=self->type;
        self->type=((void*)0);
        if(__dec_obj30) { come_call_finalizer(sType_finalize,__dec_obj30, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __dec_obj31=self->right_value;
    self->right_value=(struct sNode*)come_increment_ref_count(right_value);
    if(__dec_obj31) { __dec_obj31 = come_decrement_ref_count(__dec_obj31, ((struct sNode*)__dec_obj31)->finalize, ((struct sNode*)__dec_obj31)->_protocol_obj, 0,0,0); }
    if(_if_conditional92=multiple_assign,    _if_conditional92) {
        __dec_obj32=self->multiple_assign;
        self->multiple_assign=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value46=list$1charphp_clone(multiple_assign))));
        if(__dec_obj32) { come_call_finalizer(list$1charph_finalize,__dec_obj32, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value46 && right_value46 != __result_obj__) { come_call_finalizer(list$1charphp_finalize,right_value46, (void*)0, (void*)0, 0, 1, 0, 0); }
    }
    else {
        __dec_obj33=self->multiple_assign;
        self->multiple_assign=((void*)0);
        if(__dec_obj33) { come_call_finalizer(list$1charph_finalize,__dec_obj33, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    if(_if_conditional93=multiple_declare,    _if_conditional93) {
        __dec_obj40=self->multiple_declare;
        self->multiple_declare=(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list$1tuple3$3sTypephcharphsNodephph*)(right_value57=list$1tuple3$3sTypephcharphsNodephphp_clone(multiple_declare))));
        if(__dec_obj40) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephph_finalize,__dec_obj40, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value57 && right_value57 != __result_obj__) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,right_value57, (void*)0, (void*)0, 0, 1, 0, 0); }
    }
    else {
        __dec_obj41=self->multiple_declare;
        self->multiple_declare=((void*)0);
        if(__dec_obj41) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephph_finalize,__dec_obj41, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __dec_obj42=self->array_initializer;
    self->array_initializer=(char*)come_increment_ref_count(array_initializer);
    if(__dec_obj42) { __dec_obj42 = come_decrement_ref_count(__dec_obj42, (void*)0, (void*)0, 0,0,0); }
    self->sline=info->sline;
    __dec_obj43=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value58=__builtin_string(info->sname))));
    if(__dec_obj43) { __dec_obj43 = come_decrement_ref_count(__dec_obj43, (void*)0, (void*)0, 0,0,0); }
    if(right_value58 && right_value58 != __result_obj__) { right_value58 = come_decrement_ref_count(right_value58, (void*)0, (void*)0, 1, 0, 0); }
    __result37__ = __result_obj__ = self;
    if(self) { come_call_finalizer(sStoreNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(name) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
    if(multiple_assign) { come_call_finalizer(list$1charphp_finalize,multiple_assign, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(multiple_declare) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,multiple_declare, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(type) { come_call_finalizer(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(right_value) { right_value = come_decrement_ref_count(right_value, ((struct sNode*)right_value)->finalize, ((struct sNode*)right_value)->_protocol_obj, 0, 1, 0); } 
    if(array_initializer) { array_initializer = come_decrement_ref_count(array_initializer, (void*)0, (void*)0, 0, 1, 0); }
    return __result37__;
    if(self) { come_call_finalizer(sStoreNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(name) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
    if(multiple_assign) { come_call_finalizer(list$1charphp_finalize,multiple_assign, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(multiple_declare) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,multiple_declare, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(type) { come_call_finalizer(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(right_value) { right_value = come_decrement_ref_count(right_value, ((struct sNode*)right_value)->finalize, ((struct sNode*)right_value)->_protocol_obj, 0, 1, 0); } 
    if(array_initializer) { array_initializer = come_decrement_ref_count(array_initializer, (void*)0, (void*)0, 0, 1, 0); }
}

static struct sType* sType_clone(struct sType* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional6;
struct sType* __result13__;
void* right_value11;
struct sType* result_5;
_Bool _if_conditional23;
_Bool _if_conditional24;
void* right_value14;
struct tuple1$1sTypeph* __dec_obj8;
_Bool _if_conditional28;
void* right_value15;
struct tuple1$1sTypeph* __dec_obj9;
_Bool _if_conditional29;
void* right_value16;
char* __dec_obj10;
_Bool _if_conditional30;
void* right_value23;
struct list$1sTypeph* __dec_obj14;
_Bool _if_conditional34;
void* right_value31;
struct list$1sNodeph* __dec_obj18;
_Bool _if_conditional47;
_Bool _if_conditional48;
void* right_value32;
struct list$1sTypeph* __dec_obj19;
_Bool _if_conditional49;
void* right_value39;
struct list$1charph* __dec_obj23;
_Bool _if_conditional53;
void* right_value40;
struct tuple1$1sTypeph* __dec_obj24;
_Bool _if_conditional54;
_Bool _if_conditional55;
void* right_value41;
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
void* right_value42;
struct sNode* __dec_obj26;
_Bool _if_conditional80;
_Bool _if_conditional81;
_Bool _if_conditional82;
void* right_value43;
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
void* right_value44;
char* __dec_obj28;
struct sType* __result30__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_5, 0, sizeof(struct sType*));
            if(_if_conditional6=self==(void*)0,            _if_conditional6) {
                __result13__ = __result_obj__ = (void*)0;
                return __result13__;
            }
            result_5=(struct sType*)come_increment_ref_count(((struct sType*)(right_value11=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3))));
            if(right_value11 && right_value11 != __result_obj__) { come_call_finalizer(sType_finalize,right_value11, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(_if_conditional23=self!=((void*)0),            _if_conditional23) {
                result_5->mClass=self->mClass;
            }
            if(_if_conditional24=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),            _if_conditional24) {
                __dec_obj8=result_5->mNoSolvedGenericsType;
                result_5->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value14=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
                if(__dec_obj8) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj8, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(right_value14 && right_value14 != __result_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value14, (void*)0, (void*)0, 0, 1, 0, 0); }
            }
            if(_if_conditional28=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),            _if_conditional28) {
                __dec_obj9=result_5->mOriginalLoadVarType;
                result_5->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value15=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
                if(__dec_obj9) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj9, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(right_value15 && right_value15 != __result_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value15, (void*)0, (void*)0, 0, 1, 0, 0); }
            }
            if(_if_conditional29=self!=((void*)0)&&self->mGenericsName!=((void*)0),            _if_conditional29) {
                __dec_obj10=result_5->mGenericsName;
                result_5->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value16=string_clone(self->mGenericsName))));
                if(__dec_obj10) { __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0,0,0); }
                if(right_value16 && right_value16 != __result_obj__) { right_value16 = come_decrement_ref_count(right_value16, (void*)0, (void*)0, 1, 0, 0); }
            }
            if(_if_conditional30=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),            _if_conditional30) {
                __dec_obj14=result_5->mGenericsTypes;
                result_5->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value23=list$1sTypephp_clone(self->mGenericsTypes))));
                if(__dec_obj14) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj14, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(right_value23 && right_value23 != __result_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value23, (void*)0, (void*)0, 0, 1, 0, 0); }
            }
            if(_if_conditional34=self!=((void*)0)&&self->mArrayNum!=((void*)0),            _if_conditional34) {
                __dec_obj18=result_5->mArrayNum;
                result_5->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value31=list$1sNodephp_clone(self->mArrayNum))));
                if(__dec_obj18) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj18, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(right_value31 && right_value31 != __result_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value31, (void*)0, (void*)0, 0, 1, 0, 0); }
            }
            if(_if_conditional47=self!=((void*)0),            _if_conditional47) {
                result_5->mOmitArrayNum=self->mOmitArrayNum;
            }
            if(_if_conditional48=self!=((void*)0)&&self->mParamTypes!=((void*)0),            _if_conditional48) {
                __dec_obj19=result_5->mParamTypes;
                result_5->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value32=list$1sTypephp_clone(self->mParamTypes))));
                if(__dec_obj19) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj19, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(right_value32 && right_value32 != __result_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value32, (void*)0, (void*)0, 0, 1, 0, 0); }
            }
            if(_if_conditional49=self!=((void*)0)&&self->mParamNames!=((void*)0),            _if_conditional49) {
                __dec_obj23=result_5->mParamNames;
                result_5->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value39=list$1charphp_clone(self->mParamNames))));
                if(__dec_obj23) { come_call_finalizer(list$1charph_finalize,__dec_obj23, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(right_value39 && right_value39 != __result_obj__) { come_call_finalizer(list$1charphp_finalize,right_value39, (void*)0, (void*)0, 0, 1, 0, 0); }
            }
            if(_if_conditional53=self!=((void*)0)&&self->mResultType!=((void*)0),            _if_conditional53) {
                __dec_obj24=result_5->mResultType;
                result_5->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value40=tuple1$1sTypephp_clone(self->mResultType))));
                if(__dec_obj24) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj24, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(right_value40 && right_value40 != __result_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value40, (void*)0, (void*)0, 0, 1, 0, 0); }
            }
            if(_if_conditional54=self!=((void*)0),            _if_conditional54) {
                result_5->mVarArgs=self->mVarArgs;
            }
            if(_if_conditional55=self!=((void*)0)&&self->mAlignas!=((void*)0),            _if_conditional55) {
                __dec_obj25=result_5->mAlignas;
                result_5->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value41=sNode_clone(self->mAlignas))));
                if(__dec_obj25) { __dec_obj25 = come_decrement_ref_count(__dec_obj25, ((struct sNode*)__dec_obj25)->finalize, ((struct sNode*)__dec_obj25)->_protocol_obj, 0,0,0); }
                if(right_value41 && right_value41 != __result_obj__) { right_value41 = come_decrement_ref_count(right_value41, ((struct sNode*)right_value41)->finalize, ((struct sNode*)right_value41)->_protocol_obj, 1, 0, 0); } 
            }
            if(_if_conditional56=self!=((void*)0),            _if_conditional56) {
                result_5->mUnsigned=self->mUnsigned;
            }
            if(_if_conditional57=self!=((void*)0),            _if_conditional57) {
                result_5->mShort=self->mShort;
            }
            if(_if_conditional58=self!=((void*)0),            _if_conditional58) {
                result_5->mLong=self->mLong;
            }
            if(_if_conditional59=self!=((void*)0),            _if_conditional59) {
                result_5->mLongLong=self->mLongLong;
            }
            if(_if_conditional60=self!=((void*)0),            _if_conditional60) {
                result_5->mConstant=self->mConstant;
            }
            if(_if_conditional61=self!=((void*)0),            _if_conditional61) {
                result_5->mRegister=self->mRegister;
            }
            if(_if_conditional62=self!=((void*)0),            _if_conditional62) {
                result_5->mVolatile=self->mVolatile;
            }
            if(_if_conditional63=self!=((void*)0),            _if_conditional63) {
                result_5->mStatic=self->mStatic;
            }
            if(_if_conditional64=self!=((void*)0),            _if_conditional64) {
                result_5->mExtern=self->mExtern;
            }
            if(_if_conditional65=self!=((void*)0),            _if_conditional65) {
                result_5->mRestrict=self->mRestrict;
            }
            if(_if_conditional66=self!=((void*)0),            _if_conditional66) {
                result_5->mImmutable=self->mImmutable;
            }
            if(_if_conditional67=self!=((void*)0),            _if_conditional67) {
                result_5->mHeap=self->mHeap;
            }
            if(_if_conditional68=self!=((void*)0),            _if_conditional68) {
                result_5->mDummyHeap=self->mDummyHeap;
            }
            if(_if_conditional69=self!=((void*)0),            _if_conditional69) {
                result_5->mDelegate=self->mDelegate;
            }
            if(_if_conditional70=self!=((void*)0),            _if_conditional70) {
                result_5->mShare=self->mShare;
            }
            if(_if_conditional71=self!=((void*)0),            _if_conditional71) {
                result_5->mClone=self->mClone;
            }
            if(_if_conditional72=self!=((void*)0),            _if_conditional72) {
                result_5->mNoHeap=self->mNoHeap;
            }
            if(_if_conditional73=self!=((void*)0),            _if_conditional73) {
                result_5->mNoCallingDestructor=self->mNoCallingDestructor;
            }
            if(_if_conditional74=self!=((void*)0),            _if_conditional74) {
                result_5->mRefference=self->mRefference;
            }
            if(_if_conditional75=self!=((void*)0),            _if_conditional75) {
                result_5->mException=self->mException;
            }
            if(_if_conditional76=self!=((void*)0),            _if_conditional76) {
                result_5->mPointerNum=self->mPointerNum;
            }
            if(_if_conditional77=self!=((void*)0),            _if_conditional77) {
                result_5->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
            }
            if(_if_conditional78=self!=((void*)0),            _if_conditional78) {
                result_5->mNoArrayPointerNum=self->mNoArrayPointerNum;
            }
            if(_if_conditional79=self!=((void*)0)&&self->mSizeNum!=((void*)0),            _if_conditional79) {
                __dec_obj26=result_5->mSizeNum;
                result_5->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value42=sNode_clone(self->mSizeNum))));
                if(__dec_obj26) { __dec_obj26 = come_decrement_ref_count(__dec_obj26, ((struct sNode*)__dec_obj26)->finalize, ((struct sNode*)__dec_obj26)->_protocol_obj, 0,0,0); }
                if(right_value42 && right_value42 != __result_obj__) { right_value42 = come_decrement_ref_count(right_value42, ((struct sNode*)right_value42)->finalize, ((struct sNode*)right_value42)->_protocol_obj, 1, 0, 0); } 
            }
            if(_if_conditional80=self!=((void*)0),            _if_conditional80) {
                result_5->mDynamicArrayNum=self->mDynamicArrayNum;
            }
            if(_if_conditional81=self!=((void*)0),            _if_conditional81) {
                result_5->mTypeOfExpression=self->mTypeOfExpression;
            }
            if(_if_conditional82=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),            _if_conditional82) {
                __dec_obj27=result_5->mOriginalTypeName;
                result_5->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value43=string_clone(self->mOriginalTypeName))));
                if(__dec_obj27) { __dec_obj27 = come_decrement_ref_count(__dec_obj27, (void*)0, (void*)0, 0,0,0); }
                if(right_value43 && right_value43 != __result_obj__) { right_value43 = come_decrement_ref_count(right_value43, (void*)0, (void*)0, 1, 0, 0); }
            }
            if(_if_conditional83=self!=((void*)0),            _if_conditional83) {
                result_5->mOriginalPointerNum=self->mOriginalPointerNum;
            }
            if(_if_conditional84=self!=((void*)0),            _if_conditional84) {
                result_5->mFunctionParam=self->mFunctionParam;
            }
            if(_if_conditional85=self!=((void*)0),            _if_conditional85) {
                result_5->mAllocaValue=self->mAllocaValue;
            }
            if(_if_conditional86=self!=((void*)0),            _if_conditional86) {
                result_5->mGenericsStruct=self->mGenericsStruct;
            }
            if(_if_conditional87=self!=((void*)0),            _if_conditional87) {
                result_5->mSolvedGenericsName=self->mSolvedGenericsName;
            }
            if(_if_conditional88=self!=((void*)0),            _if_conditional88) {
                result_5->mComeMemCore=self->mComeMemCore;
            }
            if(_if_conditional89=self!=((void*)0),            _if_conditional89) {
                result_5->mInline=self->mInline;
            }
            if(_if_conditional90=self!=((void*)0),            _if_conditional90) {
                result_5->mNullValue=self->mNullValue;
            }
            if(_if_conditional91=self!=((void*)0)&&self->mAsmName!=((void*)0),            _if_conditional91) {
                __dec_obj28=result_5->mAsmName;
                result_5->mAsmName=(char*)come_increment_ref_count(((char*)(right_value44=string_clone(self->mAsmName))));
                if(__dec_obj28) { __dec_obj28 = come_decrement_ref_count(__dec_obj28, (void*)0, (void*)0, 0,0,0); }
                if(right_value44 && right_value44 != __result_obj__) { right_value44 = come_decrement_ref_count(right_value44, (void*)0, (void*)0, 1, 0, 0); }
            }
            __result30__ = __result_obj__ = result_5;
            if(result_5) { come_call_finalizer(sType_finalize,result_5, (void*)0, (void*)0, 0, 0, 1, 0); }
            return __result30__;
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
                if(_if_conditional7=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                _if_conditional7) {
                    if(self->mNoSolvedGenericsType) { come_call_finalizer(tuple1$1sTypephp_finalize,self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                if(_if_conditional9=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                _if_conditional9) {
                    if(self->mOriginalLoadVarType) { come_call_finalizer(tuple1$1sTypephp_finalize,self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                if(_if_conditional10=self!=((void*)0)&&self->mGenericsName!=((void*)0),                _if_conditional10) {
                    if(self->mGenericsName) { self->mGenericsName = come_decrement_ref_count(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0); }
                }
                if(_if_conditional11=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                _if_conditional11) {
                    if(self->mGenericsTypes) { come_call_finalizer(list$1sTypephp_finalize,self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                if(_if_conditional13=self!=((void*)0)&&self->mArrayNum!=((void*)0),                _if_conditional13) {
                    if(self->mArrayNum) { come_call_finalizer(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                if(_if_conditional15=self!=((void*)0)&&self->mParamTypes!=((void*)0),                _if_conditional15) {
                    if(self->mParamTypes) { come_call_finalizer(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                if(_if_conditional16=self!=((void*)0)&&self->mParamNames!=((void*)0),                _if_conditional16) {
                    if(self->mParamNames) { come_call_finalizer(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                if(_if_conditional18=self!=((void*)0)&&self->mResultType!=((void*)0),                _if_conditional18) {
                    if(self->mResultType) { come_call_finalizer(tuple1$1sTypephp_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                if(_if_conditional19=self!=((void*)0)&&self->mAlignas!=((void*)0),                _if_conditional19) {
                    if(self->mAlignas) { self->mAlignas = come_decrement_ref_count(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0); } 
                }
                if(_if_conditional20=self!=((void*)0)&&self->mSizeNum!=((void*)0),                _if_conditional20) {
                    if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0); } 
                }
                if(_if_conditional21=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                _if_conditional21) {
                    if(self->mOriginalTypeName) { self->mOriginalTypeName = come_decrement_ref_count(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0); }
                }
                if(_if_conditional22=self!=((void*)0)&&self->mAsmName!=((void*)0),                _if_conditional22) {
                    if(self->mAsmName) { self->mAsmName = come_decrement_ref_count(self->mAsmName, (void*)0, (void*)0, 0, 0, 0); }
                }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional8;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional8=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional8) {
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
                        while(_while_condtional1=it_6!=((void*)0),                        _while_condtional1) {
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
                                if(_if_conditional12=self!=((void*)0)&&self->item!=((void*)0),                                _if_conditional12) {
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
                        while(_while_condtional2=it_8!=((void*)0),                        _while_condtional2) {
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
                                if(_if_conditional14=self!=((void*)0)&&self->item!=((void*)0),                                _if_conditional14) {
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
                        while(_while_condtional3=it_10!=((void*)0),                        _while_condtional3) {
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
                                if(_if_conditional17=self!=((void*)0)&&self->item!=((void*)0),                                _if_conditional17) {
                                    if(self->item) { self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0, 0, 0); }
                                }
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional25;
struct tuple1$1sTypeph* __result14__;
void* right_value12;
struct tuple1$1sTypeph* result_12;
_Bool _if_conditional27;
void* right_value13;
struct sType* __dec_obj7;
struct tuple1$1sTypeph* __result15__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_12, 0, sizeof(struct tuple1$1sTypeph*));
                    if(_if_conditional25=self==(void*)0,                    _if_conditional25) {
                        __result14__ = __result_obj__ = (void*)0;
                        return __result14__;
                    }
                    result_12=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value12=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3))));
                    if(right_value12 && right_value12 != __result_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,right_value12, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(_if_conditional27=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional27) {
                        __dec_obj7=result_12->v1;
                        result_12->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value13=sType_clone(self->v1))));
                        if(__dec_obj7) { come_call_finalizer(sType_finalize,__dec_obj7, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(right_value13 && right_value13 != __result_obj__) { come_call_finalizer(sType_finalize,right_value13, (void*)0, (void*)0, 0, 1, 0, 0); }
                    }
                    __result15__ = __result_obj__ = result_12;
                    if(result_12) { come_call_finalizer(tuple1$1sTypeph_finalize,result_12, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result15__;
                    if(result_12) { come_call_finalizer(tuple1$1sTypeph_finalize,result_12, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional26;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional26=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional26) {
                            if(self->v1) { come_call_finalizer(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional31;
struct list$1sTypeph* __result16__;
void* right_value17;
void* right_value18;
struct list$1sTypeph* result_13;
struct list_item$1sTypeph* it_14;
_Bool _while_condtional4;
void* right_value22;
struct list$1sTypeph* __result19__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_13, 0, sizeof(struct list$1sTypeph*));
memset(&it_14, 0, sizeof(struct list_item$1sTypeph*));
                    if(_if_conditional31=self==((void*)0),                    _if_conditional31) {
                        __result16__ = __result_obj__ = ((void*)0);
                        return __result16__;
                    }
                    result_13=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value18=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value17=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 193))))))));
                    if(right_value17 && right_value17 != __result_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value17, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(right_value18 && right_value18 != __result_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value18, (void*)0, (void*)0, 0, 1, 0, 0); }
                    it_14=self->head;
                    while(_while_condtional4=it_14!=((void*)0),                    _while_condtional4) {
                        list$1sTypeph_add(result_13,(struct sType*)come_increment_ref_count(((struct sType*)(right_value22=sType_clone(it_14->item)))));
                        if(right_value22 && right_value22 != __result_obj__) { come_call_finalizer(sType_finalize,right_value22, (void*)0, (void*)0, 0, 1, 0, 0); }
                        it_14=it_14->next;
                    }
                    __result19__ = __result_obj__ = result_13;
                    if(result_13) { come_call_finalizer(list$1sTypephp_finalize,result_13, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result19__;
                    if(result_13) { come_call_finalizer(list$1sTypephp_finalize,result_13, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
struct list$1sTypeph* __result17__;
memset(&__result_obj__, 0, sizeof(void*));
                        self->head=((void*)0);
                        self->tail=((void*)0);
                        self->len=0;
                        __result17__ = __result_obj__ = self;
                        if(self) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result17__;
                        if(self) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional32;
void* right_value19;
struct list_item$1sTypeph* litem_15;
struct sType* __dec_obj11;
_Bool _if_conditional33;
void* right_value20;
struct list_item$1sTypeph* litem_16;
struct sType* __dec_obj12;
void* right_value21;
struct list_item$1sTypeph* litem_17;
struct sType* __dec_obj13;
struct list$1sTypeph* __result18__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&litem_15, 0, sizeof(struct list_item$1sTypeph*));
memset(&litem_16, 0, sizeof(struct list_item$1sTypeph*));
memset(&litem_17, 0, sizeof(struct list_item$1sTypeph*));
                            if(_if_conditional32=self->len==0,                            _if_conditional32) {
                                litem_15=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value19=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 207))));
                                if(right_value19 && right_value19 != __result_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value19, (void*)0, (void*)0, 0, 1, 0, 0); }
                                litem_15->prev=((void*)0);
                                litem_15->next=((void*)0);
                                __dec_obj11=litem_15->item;
                                litem_15->item=(struct sType*)come_increment_ref_count(item);
                                if(__dec_obj11) { come_call_finalizer(sType_finalize,__dec_obj11, (void*)0, (void*)0, 0, 0, 0, 0); }
                                self->tail=litem_15;
                                self->head=litem_15;
                            }
                            else {
                                if(_if_conditional33=self->len==1,                                _if_conditional33) {
                                    litem_16=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value20=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 217))));
                                    if(right_value20 && right_value20 != __result_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value20, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    litem_16->prev=self->head;
                                    litem_16->next=((void*)0);
                                    __dec_obj12=litem_16->item;
                                    litem_16->item=(struct sType*)come_increment_ref_count(item);
                                    if(__dec_obj12) { come_call_finalizer(sType_finalize,__dec_obj12, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    self->tail=litem_16;
                                    self->head->next=litem_16;
                                }
                                else {
                                    litem_17=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value21=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 227))));
                                    if(right_value21 && right_value21 != __result_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value21, (void*)0, (void*)0, 0, 1, 0, 0); }
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
                            __result18__ = __result_obj__ = self;
                            if(item) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                            return __result18__;
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
struct list$1sNodeph* __result20__;
void* right_value24;
void* right_value25;
struct list$1sNodeph* result_18;
struct list_item$1sNodeph* it_19;
_Bool _while_condtional5;
void* right_value30;
struct list$1sNodeph* __result25__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_18, 0, sizeof(struct list$1sNodeph*));
memset(&it_19, 0, sizeof(struct list_item$1sNodeph*));
                    if(_if_conditional35=self==((void*)0),                    _if_conditional35) {
                        __result20__ = __result_obj__ = ((void*)0);
                        return __result20__;
                    }
                    result_18=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value25=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value24=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 193))))))));
                    if(right_value24 && right_value24 != __result_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value24, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(right_value25 && right_value25 != __result_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value25, (void*)0, (void*)0, 0, 1, 0, 0); }
                    it_19=self->head;
                    while(_while_condtional5=it_19!=((void*)0),                    _while_condtional5) {
                        list$1sNodeph_add(result_18,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value30=sNode_clone(it_19->item)))));
                        if(right_value30 && right_value30 != __result_obj__) { right_value30 = come_decrement_ref_count(right_value30, ((struct sNode*)right_value30)->finalize, ((struct sNode*)right_value30)->_protocol_obj, 1, 0, 0); } 
                        it_19=it_19->next;
                    }
                    __result25__ = __result_obj__ = result_18;
                    if(result_18) { come_call_finalizer(list$1sNodephp_finalize,result_18, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result25__;
                    if(result_18) { come_call_finalizer(list$1sNodephp_finalize,result_18, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
struct list$1sNodeph* __result21__;
memset(&__result_obj__, 0, sizeof(void*));
                        self->head=((void*)0);
                        self->tail=((void*)0);
                        self->len=0;
                        __result21__ = __result_obj__ = self;
                        if(self) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result21__;
                        if(self) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional36;
void* right_value26;
struct list_item$1sNodeph* litem_20;
struct sNode* __dec_obj15;
_Bool _if_conditional37;
void* right_value27;
struct list_item$1sNodeph* litem_21;
struct sNode* __dec_obj16;
void* right_value28;
struct list_item$1sNodeph* litem_22;
struct sNode* __dec_obj17;
struct list$1sNodeph* __result22__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&litem_20, 0, sizeof(struct list_item$1sNodeph*));
memset(&litem_21, 0, sizeof(struct list_item$1sNodeph*));
memset(&litem_22, 0, sizeof(struct list_item$1sNodeph*));
                            if(_if_conditional36=self->len==0,                            _if_conditional36) {
                                litem_20=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value26=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 207))));
                                if(right_value26 && right_value26 != __result_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value26, (void*)0, (void*)0, 0, 1, 0, 0); }
                                litem_20->prev=((void*)0);
                                litem_20->next=((void*)0);
                                __dec_obj15=litem_20->item;
                                litem_20->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj15) { __dec_obj15 = come_decrement_ref_count(__dec_obj15, ((struct sNode*)__dec_obj15)->finalize, ((struct sNode*)__dec_obj15)->_protocol_obj, 0,0,0); }
                                self->tail=litem_20;
                                self->head=litem_20;
                            }
                            else {
                                if(_if_conditional37=self->len==1,                                _if_conditional37) {
                                    litem_21=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value27=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 217))));
                                    if(right_value27 && right_value27 != __result_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value27, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    litem_21->prev=self->head;
                                    litem_21->next=((void*)0);
                                    __dec_obj16=litem_21->item;
                                    litem_21->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj16) { __dec_obj16 = come_decrement_ref_count(__dec_obj16, ((struct sNode*)__dec_obj16)->finalize, ((struct sNode*)__dec_obj16)->_protocol_obj, 0,0,0); }
                                    self->tail=litem_21;
                                    self->head->next=litem_21;
                                }
                                else {
                                    litem_22=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value28=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 227))));
                                    if(right_value28 && right_value28 != __result_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value28, (void*)0, (void*)0, 0, 1, 0, 0); }
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
                            __result22__ = __result_obj__ = self;
                            if(item) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
                            return __result22__;
                            if(item) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional38;
struct sNode* __result23__;
void* right_value29;
struct sNode* result_23;
_Bool _if_conditional39;
_Bool _if_conditional40;
_Bool _if_conditional41;
_Bool _if_conditional42;
_Bool _if_conditional43;
_Bool _if_conditional44;
_Bool _if_conditional45;
_Bool _if_conditional46;
struct sNode* __result24__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_23, 0, sizeof(struct sNode*));
                            if(_if_conditional38=self==(void*)0,                            _if_conditional38) {
                                __result23__ = __result_obj__ = (void*)0;
                                return __result23__;
                            }
                            result_23=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value29=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3))));
                            if(right_value29 && right_value29 != __result_obj__) { right_value29 = come_decrement_ref_count(right_value29, ((struct sNode*)right_value29)->finalize, ((struct sNode*)right_value29)->_protocol_obj, 1, 0, 0); } 
                            if(_if_conditional39=self!=((void*)0)&&self->clone!=((void*)0),                            _if_conditional39) {
                                result_23->_protocol_obj=self->clone(self->_protocol_obj);
                            }
                            if(_if_conditional40=self!=((void*)0),                            _if_conditional40) {
                                result_23->finalize=self->finalize;
                            }
                            if(_if_conditional41=self!=((void*)0),                            _if_conditional41) {
                                result_23->clone=self->clone;
                            }
                            if(_if_conditional42=self!=((void*)0),                            _if_conditional42) {
                                result_23->compile=self->compile;
                            }
                            if(_if_conditional43=self!=((void*)0),                            _if_conditional43) {
                                result_23->sline=self->sline;
                            }
                            if(_if_conditional44=self!=((void*)0),                            _if_conditional44) {
                                result_23->sname=self->sname;
                            }
                            if(_if_conditional45=self!=((void*)0),                            _if_conditional45) {
                                result_23->terminated=self->terminated;
                            }
                            if(_if_conditional46=self!=((void*)0),                            _if_conditional46) {
                                result_23->kind=self->kind;
                            }
                            __result24__ = __result_obj__ = result_23;
                            if(result_23) { result_23 = come_decrement_ref_count(result_23, ((struct sNode*)result_23)->finalize, ((struct sNode*)result_23)->_protocol_obj, 0, 1, 0); } 
                            return __result24__;
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
struct list$1charph* __result26__;
void* right_value33;
void* right_value34;
struct list$1charph* result_24;
struct list_item$1charph* it_25;
_Bool _while_condtional6;
void* right_value38;
struct list$1charph* __result29__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_24, 0, sizeof(struct list$1charph*));
memset(&it_25, 0, sizeof(struct list_item$1charph*));
                    if(_if_conditional50=self==((void*)0),                    _if_conditional50) {
                        __result26__ = __result_obj__ = ((void*)0);
                        return __result26__;
                    }
                    result_24=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value34=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value33=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 193))))))));
                    if(right_value33 && right_value33 != __result_obj__) { come_call_finalizer(list$1charphp_finalize,right_value33, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(right_value34 && right_value34 != __result_obj__) { come_call_finalizer(list$1charphp_finalize,right_value34, (void*)0, (void*)0, 0, 1, 0, 0); }
                    it_25=self->head;
                    while(_while_condtional6=it_25!=((void*)0),                    _while_condtional6) {
                        list$1charph_add(result_24,(char*)come_increment_ref_count(((char*)(right_value38=string_clone(it_25->item)))));
                        if(right_value38 && right_value38 != __result_obj__) { right_value38 = come_decrement_ref_count(right_value38, (void*)0, (void*)0, 1, 0, 0); }
                        it_25=it_25->next;
                    }
                    __result29__ = __result_obj__ = result_24;
                    if(result_24) { come_call_finalizer(list$1charphp_finalize,result_24, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result29__;
                    if(result_24) { come_call_finalizer(list$1charphp_finalize,result_24, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
struct list$1charph* __result27__;
memset(&__result_obj__, 0, sizeof(void*));
                        self->head=((void*)0);
                        self->tail=((void*)0);
                        self->len=0;
                        __result27__ = __result_obj__ = self;
                        if(self) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result27__;
                        if(self) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional51;
void* right_value35;
struct list_item$1charph* litem_26;
char* __dec_obj20;
_Bool _if_conditional52;
void* right_value36;
struct list_item$1charph* litem_27;
char* __dec_obj21;
void* right_value37;
struct list_item$1charph* litem_28;
char* __dec_obj22;
struct list$1charph* __result28__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&litem_26, 0, sizeof(struct list_item$1charph*));
memset(&litem_27, 0, sizeof(struct list_item$1charph*));
memset(&litem_28, 0, sizeof(struct list_item$1charph*));
                            if(_if_conditional51=self->len==0,                            _if_conditional51) {
                                litem_26=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value35=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 207))));
                                if(right_value35 && right_value35 != __result_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value35, (void*)0, (void*)0, 0, 1, 0, 0); }
                                litem_26->prev=((void*)0);
                                litem_26->next=((void*)0);
                                __dec_obj20=litem_26->item;
                                litem_26->item=(char*)come_increment_ref_count(item);
                                if(__dec_obj20) { __dec_obj20 = come_decrement_ref_count(__dec_obj20, (void*)0, (void*)0, 0,0,0); }
                                self->tail=litem_26;
                                self->head=litem_26;
                            }
                            else {
                                if(_if_conditional52=self->len==1,                                _if_conditional52) {
                                    litem_27=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value36=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 217))));
                                    if(right_value36 && right_value36 != __result_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value36, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    litem_27->prev=self->head;
                                    litem_27->next=((void*)0);
                                    __dec_obj21=litem_27->item;
                                    litem_27->item=(char*)come_increment_ref_count(item);
                                    if(__dec_obj21) { __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0,0,0); }
                                    self->tail=litem_27;
                                    self->head->next=litem_27;
                                }
                                else {
                                    litem_28=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value37=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 227))));
                                    if(right_value37 && right_value37 != __result_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value37, (void*)0, (void*)0, 0, 1, 0, 0); }
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
                            __result28__ = __result_obj__ = self;
                            if(item) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
                            return __result28__;
                            if(item) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
}

static void list$1charph_finalize(struct list$1charph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephphp_clone(struct list$1tuple3$3sTypephcharphsNodephph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional94;
struct list$1tuple3$3sTypephcharphsNodephph* __result31__;
void* right_value47;
void* right_value48;
struct list$1tuple3$3sTypephcharphsNodephph* result_31;
struct list_item$1tuple3$3sTypephcharphsNodephph* it_32;
_Bool _while_condtional8;
void* right_value56;
struct list$1tuple3$3sTypephcharphsNodephph* __result36__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_31, 0, sizeof(struct list$1tuple3$3sTypephcharphsNodephph*));
memset(&it_32, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
            if(_if_conditional94=self==((void*)0),            _if_conditional94) {
                __result31__ = __result_obj__ = ((void*)0);
                return __result31__;
            }
            result_31=(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list$1tuple3$3sTypephcharphsNodephph*)(right_value48=list$1tuple3$3sTypephcharphsNodephph_initialize((struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list$1tuple3$3sTypephcharphsNodephph*)(right_value47=(struct list$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list$1tuple3$3sTypephcharphsNodephph)*(1), "./comelang2.h", 193))))))));
            if(right_value47 && right_value47 != __result_obj__) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,right_value47, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value48 && right_value48 != __result_obj__) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,right_value48, (void*)0, (void*)0, 0, 1, 0, 0); }
            it_32=self->head;
            while(_while_condtional8=it_32!=((void*)0),            _while_condtional8) {
                list$1tuple3$3sTypephcharphsNodephph_add(result_31,(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(((struct tuple3$3sTypephcharphsNodeph*)(right_value56=tuple3$3sTypephcharphsNodephp_clone(it_32->item)))));
                if(right_value56 && right_value56 != __result_obj__) { come_call_finalizer(tuple3$3sTypephcharphsNodephp_finalize,right_value56, (void*)0, (void*)0, 0, 1, 0, 0); }
                it_32=it_32->next;
            }
            __result36__ = __result_obj__ = result_31;
            if(result_31) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,result_31, (void*)0, (void*)0, 0, 0, 1, 0); }
            return __result36__;
            if(result_31) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,result_31, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephph_initialize(struct list$1tuple3$3sTypephcharphsNodephph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
struct list$1tuple3$3sTypephcharphsNodephph* __result32__;
memset(&__result_obj__, 0, sizeof(void*));
                self->head=((void*)0);
                self->tail=((void*)0);
                self->len=0;
                __result32__ = __result_obj__ = self;
                if(self) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result32__;
                if(self) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list$1tuple3$3sTypephcharphsNodephphp_finalize(struct list$1tuple3$3sTypephcharphsNodephph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
struct list_item$1tuple3$3sTypephcharphsNodephph* it_29;
_Bool _while_condtional7;
struct list_item$1tuple3$3sTypephcharphsNodephph* prev_it_30;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_29, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
memset(&prev_it_30, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
                    it_29=self->head;
                    while(_while_condtional7=it_29!=((void*)0),                    _while_condtional7) {
                        prev_it_30=it_29;
                        it_29=it_29->next;
                        if(prev_it_30) { come_call_finalizer(list_item$1tuple3$3sTypephcharphsNodephphp_finalize,prev_it_30, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
}

static void list_item$1tuple3$3sTypephcharphsNodephphp_finalize(struct list_item$1tuple3$3sTypephcharphsNodephph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional95;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional95=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional95) {
                                if(self->item) { come_call_finalizer(tuple3$3sTypephcharphsNodephp_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
}

static void tuple3$3sTypephcharphsNodephp_finalize(struct tuple3$3sTypephcharphsNodeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional96;
_Bool _if_conditional97;
_Bool _if_conditional98;
memset(&__result_obj__, 0, sizeof(void*));
                                    if(_if_conditional96=self!=((void*)0)&&self->v1!=((void*)0),                                    _if_conditional96) {
                                        if(self->v1) { come_call_finalizer(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    }
                                    if(_if_conditional97=self!=((void*)0)&&self->v2!=((void*)0),                                    _if_conditional97) {
                                        if(self->v2) { self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, 0); }
                                    }
                                    if(_if_conditional98=self!=((void*)0)&&self->v3!=((void*)0),                                    _if_conditional98) {
                                        if(self->v3) { self->v3 = come_decrement_ref_count(self->v3, ((struct sNode*)self->v3)->finalize, ((struct sNode*)self->v3)->_protocol_obj, 0, 0, 0); } 
                                    }
}

static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephph_add(struct list$1tuple3$3sTypephcharphsNodephph* self, struct tuple3$3sTypephcharphsNodeph* item){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional99;
void* right_value49;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_33;
struct tuple3$3sTypephcharphsNodeph* __dec_obj34;
_Bool _if_conditional103;
void* right_value50;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_34;
struct tuple3$3sTypephcharphsNodeph* __dec_obj35;
void* right_value51;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_35;
struct tuple3$3sTypephcharphsNodeph* __dec_obj36;
struct list$1tuple3$3sTypephcharphsNodephph* __result33__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&litem_33, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
memset(&litem_34, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
memset(&litem_35, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
                    if(_if_conditional99=self->len==0,                    _if_conditional99) {
                        litem_33=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(right_value49=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "./comelang2.h", 207))));
                        if(right_value49 && right_value49 != __result_obj__) { come_call_finalizer(list_item$1tuple3$3sTypephcharphsNodephphp_finalize,right_value49, (void*)0, (void*)0, 0, 1, 0, 0); }
                        litem_33->prev=((void*)0);
                        litem_33->next=((void*)0);
                        __dec_obj34=litem_33->item;
                        litem_33->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
                        if(__dec_obj34) { come_call_finalizer(tuple3$3sTypephcharphsNodeph_finalize,__dec_obj34, (void*)0, (void*)0, 0, 0, 0, 0); }
                        self->tail=litem_33;
                        self->head=litem_33;
                    }
                    else {
                        if(_if_conditional103=self->len==1,                        _if_conditional103) {
                            litem_34=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(right_value50=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "./comelang2.h", 217))));
                            if(right_value50 && right_value50 != __result_obj__) { come_call_finalizer(list_item$1tuple3$3sTypephcharphsNodephphp_finalize,right_value50, (void*)0, (void*)0, 0, 1, 0, 0); }
                            litem_34->prev=self->head;
                            litem_34->next=((void*)0);
                            __dec_obj35=litem_34->item;
                            litem_34->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
                            if(__dec_obj35) { come_call_finalizer(tuple3$3sTypephcharphsNodeph_finalize,__dec_obj35, (void*)0, (void*)0, 0, 0, 0, 0); }
                            self->tail=litem_34;
                            self->head->next=litem_34;
                        }
                        else {
                            litem_35=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(right_value51=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "./comelang2.h", 227))));
                            if(right_value51 && right_value51 != __result_obj__) { come_call_finalizer(list_item$1tuple3$3sTypephcharphsNodephphp_finalize,right_value51, (void*)0, (void*)0, 0, 1, 0, 0); }
                            litem_35->prev=self->tail;
                            litem_35->next=((void*)0);
                            __dec_obj36=litem_35->item;
                            litem_35->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
                            if(__dec_obj36) { come_call_finalizer(tuple3$3sTypephcharphsNodeph_finalize,__dec_obj36, (void*)0, (void*)0, 0, 0, 0, 0); }
                            self->tail->next=litem_35;
                            self->tail=litem_35;
                        }
                    }
                    self->len++;
                    __result33__ = __result_obj__ = self;
                    if(item) { come_call_finalizer(tuple3$3sTypephcharphsNodephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result33__;
                    if(item) { come_call_finalizer(tuple3$3sTypephcharphsNodephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void tuple3$3sTypephcharphsNodeph_finalize(struct tuple3$3sTypephcharphsNodeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional100;
_Bool _if_conditional101;
_Bool _if_conditional102;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional100=self!=((void*)0)&&self->v1!=((void*)0),                            _if_conditional100) {
                                if(self->v1) { come_call_finalizer(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
                            if(_if_conditional101=self!=((void*)0)&&self->v2!=((void*)0),                            _if_conditional101) {
                                if(self->v2) { self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, 0); }
                            }
                            if(_if_conditional102=self!=((void*)0)&&self->v3!=((void*)0),                            _if_conditional102) {
                                if(self->v3) { self->v3 = come_decrement_ref_count(self->v3, ((struct sNode*)self->v3)->finalize, ((struct sNode*)self->v3)->_protocol_obj, 0, 0, 0); } 
                            }
}

static struct tuple3$3sTypephcharphsNodeph* tuple3$3sTypephcharphsNodephp_clone(struct tuple3$3sTypephcharphsNodeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional104;
struct tuple3$3sTypephcharphsNodeph* __result34__;
void* right_value52;
struct tuple3$3sTypephcharphsNodeph* result_36;
_Bool _if_conditional105;
void* right_value53;
struct sType* __dec_obj37;
_Bool _if_conditional106;
void* right_value54;
char* __dec_obj38;
_Bool _if_conditional107;
void* right_value55;
struct sNode* __dec_obj39;
struct tuple3$3sTypephcharphsNodeph* __result35__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_36, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
                    if(_if_conditional104=self==(void*)0,                    _if_conditional104) {
                        __result34__ = __result_obj__ = (void*)0;
                        return __result34__;
                    }
                    result_36=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(((struct tuple3$3sTypephcharphsNodeph*)(right_value52=(struct tuple3$3sTypephcharphsNodeph*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphsNodeph)*(1), "tuple3$3sTypephcharphsNodephp_clone", 3))));
                    if(right_value52 && right_value52 != __result_obj__) { come_call_finalizer(tuple3$3sTypephcharphsNodeph_finalize,right_value52, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(_if_conditional105=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional105) {
                        __dec_obj37=result_36->v1;
                        result_36->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value53=sType_clone(self->v1))));
                        if(__dec_obj37) { come_call_finalizer(sType_finalize,__dec_obj37, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(right_value53 && right_value53 != __result_obj__) { come_call_finalizer(sType_finalize,right_value53, (void*)0, (void*)0, 0, 1, 0, 0); }
                    }
                    if(_if_conditional106=self!=((void*)0)&&self->v2!=((void*)0),                    _if_conditional106) {
                        __dec_obj38=result_36->v2;
                        result_36->v2=(char*)come_increment_ref_count(((char*)(right_value54=string_clone(self->v2))));
                        if(__dec_obj38) { __dec_obj38 = come_decrement_ref_count(__dec_obj38, (void*)0, (void*)0, 0,0,0); }
                        if(right_value54 && right_value54 != __result_obj__) { right_value54 = come_decrement_ref_count(right_value54, (void*)0, (void*)0, 1, 0, 0); }
                    }
                    if(_if_conditional107=self!=((void*)0)&&self->v3!=((void*)0),                    _if_conditional107) {
                        __dec_obj39=result_36->v3;
                        result_36->v3=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value55=sNode_clone(self->v3))));
                        if(__dec_obj39) { __dec_obj39 = come_decrement_ref_count(__dec_obj39, ((struct sNode*)__dec_obj39)->finalize, ((struct sNode*)__dec_obj39)->_protocol_obj, 0,0,0); }
                        if(right_value55 && right_value55 != __result_obj__) { right_value55 = come_decrement_ref_count(right_value55, ((struct sNode*)right_value55)->finalize, ((struct sNode*)right_value55)->_protocol_obj, 1, 0, 0); } 
                    }
                    __result35__ = __result_obj__ = result_36;
                    if(result_36) { come_call_finalizer(tuple3$3sTypephcharphsNodeph_finalize,result_36, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result35__;
                    if(result_36) { come_call_finalizer(tuple3$3sTypephcharphsNodeph_finalize,result_36, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void list$1tuple3$3sTypephcharphsNodephph_finalize(struct list$1tuple3$3sTypephcharphsNodephph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

_Bool sStoreNode_terminated(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __result38__;
memset(&__result_obj__, 0, sizeof(void*));
    __result38__ = (_Bool)0;
    return __result38__;
}

char* sStoreNode_kind(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value59;
char* __result39__;
memset(&__result_obj__, 0, sizeof(void*));
    __result39__ = __result_obj__ = ((char*)(right_value59=__builtin_string("sStoreNode")));
    return __result39__;
}

_Bool sStoreNode_compile(struct sStoreNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value60;
char* array_initializer_37;
_Bool _if_conditional115;
void* right_value70;
struct sVar* var__43;
_Bool _if_conditional122;
_Bool __result49__;
_Bool _if_conditional123;
_Bool __result50__;
void* right_value71;
struct sType* type_44;
void* right_value72;
void* right_value73;
struct sType* var_type_45;
void* right_value74;
_Bool _if_conditional126;
void* right_value75;
struct sVar* var__47;
_Bool _if_conditional127;
_Bool __result53__;
_Bool _if_conditional128;
_Bool __result54__;
void* right_value76;
struct sType* type_48;
_Bool _if_conditional129;
struct list$1tuple3$3sTypephcharphsNodephph* o2_saved_49;
struct tuple3$3sTypephcharphsNodeph* it_52;
_Bool _for_condtionalA1;
struct tuple3$3sTypephcharphsNodeph* multiple_assgin_var1;
struct sType* type_55;
char* var_name_56;
struct sNode* right_value_57;
void* right_value77;
_Bool _if_conditional134;
_Bool __result62__;
void* right_value78;
struct sType* left_type_58;
void* right_value79;
_Bool _if_conditional135;
_Bool _if_conditional136;
_Bool __result63__;
void* right_value80;
struct CVALUE* come_value_59;
void* right_value81;
struct sType* left_type2_60;
_Bool _if_conditional139;
_Bool _if_conditional140;
void* right_value82;
struct list$1sNodeph* o2_saved_61;
struct sNode* it_64;
_Bool _for_condtionalA2;
_Bool _if_conditional146;
void* right_value83;
struct CVALUE* come_value_67;
void* right_value84;
void* right_value85;
_Bool _if_conditional147;
_Bool _if_conditional148;
_Bool __result73__;
void* right_value86;
struct sType* left_type_68;
_Bool _if_conditional149;
void* right_value87;
_Bool _if_conditional150;
_Bool _if_conditional151;
void* right_value88;
struct list$1sNodeph* o2_saved_69;
struct sNode* it_70;
_Bool _for_condtionalA3;
_Bool _if_conditional152;
void* right_value89;
struct CVALUE* come_value_71;
void* right_value90;
void* right_value91;
struct sType* left_type2_72;
_Bool _if_conditional153;
_Bool _if_conditional154;
void* right_value92;
struct list$1sNodeph* o2_saved_73;
struct sNode* it_74;
_Bool _for_condtionalA4;
_Bool _if_conditional155;
void* right_value93;
struct CVALUE* come_value_75;
void* right_value94;
void* right_value95;
struct CVALUE* come_value_76;
void* right_value96;
char* __dec_obj44;
void* right_value97;
struct sType* __dec_obj45;
_Bool _if_conditional159;
_Bool _if_conditional160;
_Bool __result75__;
void* right_value101;
struct CVALUE* right_value_80;
struct sType* right_type_81;
_Bool _if_conditional161;
_Bool _if_conditional162;
_Bool _if_conditional163;
void* right_value102;
struct sVar* var__82;
_Bool _if_conditional164;
_Bool __result76__;
_Bool _if_conditional165;
int i_83;
struct list$1charph* o2_saved_84;
char* it_87;
_Bool _for_condtionalA5;
_Bool _if_conditional170;
void* right_value107;
struct sType* right_type2_94;
void* right_value108;
void* right_value109;
struct sType* var_type_95;
_Bool _if_conditional175;
_Bool _if_conditional176;
void* right_value110;
struct list$1sNodeph* o2_saved_96;
struct sNode* it_97;
_Bool _for_condtionalA6;
_Bool _if_conditional177;
void* right_value111;
struct CVALUE* come_value_98;
void* right_value112;
_Bool _if_conditional178;
void* right_value113;
void* right_value114;
struct sType* type_99;
void* right_value115;
void* right_value116;
struct sType* var_type_100;
_Bool _if_conditional179;
_Bool _if_conditional180;
void* right_value117;
struct list$1sNodeph* o2_saved_101;
struct sNode* it_102;
_Bool _for_condtionalA7;
_Bool _if_conditional181;
void* right_value118;
struct CVALUE* come_value_103;
void* right_value119;
struct sClass* current_stack_frame_struct_104;
void* right_value120;
_Bool _if_conditional182;
struct sVar* parent_var_105;
_Bool _if_conditional183;
_Bool _if_conditional184;
void* right_value121;
struct CVALUE* come_value_106;
struct sType* left_type_107;
_Bool _if_conditional185;
void* right_value122;
char* c_value_108;
void* right_value123;
char* __dec_obj50;
int right_value_id_109;
_Bool _if_conditional186;
_Bool _if_conditional187;
void* right_value124;
char* c_value_110;
void* right_value125;
char* __dec_obj51;
void* right_value126;
char* __dec_obj52;
void* right_value127;
struct sType* __dec_obj53;
void* right_value128;
void* right_value129;
_Bool __result90__;
_Bool _if_conditional188;
static int num_multiple_var_111=0;
void* right_value130;
char* multiple_var_name_112;
void* right_value131;
void* right_value132;
char* __dec_obj54;
int i_113;
struct list$1charph* o2_saved_114;
char* it_115;
_Bool _for_condtionalA8;
_Bool _if_conditional189;
void* right_value133;
void* right_value134;
struct sType* right_type2_116;
struct sVar* var__117;
void* right_value135;
struct sType* var_type_118;
_Bool _if_conditional190;
_Bool _if_conditional191;
void* right_value136;
struct list$1sNodeph* o2_saved_119;
struct sNode* it_120;
_Bool _for_condtionalA9;
_Bool _if_conditional192;
void* right_value137;
struct CVALUE* come_value_121;
void* right_value138;
void* right_value139;
struct sType* left_type_122;
void* right_value140;
struct CVALUE* right_value2_123;
void* right_value141;
char* __dec_obj55;
void* right_value142;
struct sType* __dec_obj56;
void* right_value143;
struct CVALUE* come_value_124;
void* right_value144;
void* right_value145;
_Bool _if_conditional193;
_Bool _if_conditional194;
void* right_value146;
char* __dec_obj57;
int right_value_id_125;
_Bool _if_conditional195;
void* right_value147;
char* __dec_obj58;
void* right_value148;
struct sType* __dec_obj59;
_Bool _if_conditional196;
void* right_value149;
struct sVar* var__126;
_Bool _if_conditional197;
_Bool _if_conditional198;
_Bool __result91__;
_Bool _if_conditional199;
void* right_value150;
struct sType* __dec_obj60;
void* right_value151;
struct sType* left_type_127;
void* right_value152;
struct CVALUE* come_value_128;
_Bool _if_conditional200;
void* right_value153;
void* right_value154;
void* right_value155;
void* right_value156;
char* __dec_obj61;
_Bool _if_conditional201;
void* right_value157;
void* right_value158;
_Bool _if_conditional202;
void* right_value159;
void* right_value160;
char* __dec_obj62;
_Bool _if_conditional203;
void* right_value161;
void* right_value162;
_Bool _if_conditional204;
void* right_value163;
char* __dec_obj63;
void* right_value164;
char* __dec_obj64;
int right_value_id_129;
_Bool _if_conditional205;
void* right_value165;
struct sType* __dec_obj65;
_Bool _if_conditional206;
void* right_value166;
void* right_value167;
_Bool _if_conditional207;
void* right_value168;
char* __dec_obj66;
void* right_value169;
char* __dec_obj67;
void* right_value170;
struct sType* __dec_obj68;
_Bool _if_conditional208;
_Bool _if_conditional209;
_Bool _if_conditional210;
_Bool __result92__;
void* right_value171;
void* right_value172;
void* right_value173;
char* __dec_obj69;
void* right_value174;
struct sType* __dec_obj70;
_Bool _if_conditional211;
_Bool _if_conditional212;
void* right_value175;
void* right_value176;
_Bool __result93__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&array_initializer_37, 0, sizeof(char*));
memset(&var__43, 0, sizeof(struct sVar*));
memset(&type_44, 0, sizeof(struct sType*));
memset(&var_type_45, 0, sizeof(struct sType*));
memset(&var__47, 0, sizeof(struct sVar*));
memset(&type_48, 0, sizeof(struct sType*));
memset(&o2_saved_49, 0, sizeof(struct list$1tuple3$3sTypephcharphsNodephph*));
memset(&it_52, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
memset(&type_55, 0, sizeof(struct sType*));
memset(&var_name_56, 0, sizeof(char*));
memset(&right_value_57, 0, sizeof(struct sNode*));
memset(&type_55, 0, sizeof(struct sType*));
memset(&var_name_56, 0, sizeof(char*));
memset(&right_value_57, 0, sizeof(struct sNode*));
memset(&left_type_58, 0, sizeof(struct sType*));
memset(&come_value_59, 0, sizeof(struct CVALUE*));
memset(&left_type2_60, 0, sizeof(struct sType*));
memset(&o2_saved_61, 0, sizeof(struct list$1sNodeph*));
memset(&it_64, 0, sizeof(struct sNode*));
memset(&come_value_67, 0, sizeof(struct CVALUE*));
memset(&left_type_68, 0, sizeof(struct sType*));
memset(&o2_saved_69, 0, sizeof(struct list$1sNodeph*));
memset(&it_70, 0, sizeof(struct sNode*));
memset(&come_value_71, 0, sizeof(struct CVALUE*));
memset(&left_type2_72, 0, sizeof(struct sType*));
memset(&o2_saved_73, 0, sizeof(struct list$1sNodeph*));
memset(&it_74, 0, sizeof(struct sNode*));
memset(&come_value_75, 0, sizeof(struct CVALUE*));
memset(&come_value_76, 0, sizeof(struct CVALUE*));
memset(&right_value_80, 0, sizeof(struct CVALUE*));
memset(&right_type_81, 0, sizeof(struct sType*));
memset(&var__82, 0, sizeof(struct sVar*));
memset(&i_83, 0, sizeof(int));
memset(&o2_saved_84, 0, sizeof(struct list$1charph*));
memset(&it_87, 0, sizeof(char*));
memset(&right_type2_94, 0, sizeof(struct sType*));
memset(&var_type_95, 0, sizeof(struct sType*));
memset(&o2_saved_96, 0, sizeof(struct list$1sNodeph*));
memset(&it_97, 0, sizeof(struct sNode*));
memset(&come_value_98, 0, sizeof(struct CVALUE*));
memset(&type_99, 0, sizeof(struct sType*));
memset(&var_type_100, 0, sizeof(struct sType*));
memset(&o2_saved_101, 0, sizeof(struct list$1sNodeph*));
memset(&it_102, 0, sizeof(struct sNode*));
memset(&come_value_103, 0, sizeof(struct CVALUE*));
memset(&current_stack_frame_struct_104, 0, sizeof(struct sClass*));
memset(&parent_var_105, 0, sizeof(struct sVar*));
memset(&come_value_106, 0, sizeof(struct CVALUE*));
memset(&left_type_107, 0, sizeof(struct sType*));
memset(&c_value_108, 0, sizeof(char*));
memset(&right_value_id_109, 0, sizeof(int));
memset(&c_value_110, 0, sizeof(char*));
memset(&multiple_var_name_112, 0, sizeof(char*));
memset(&i_113, 0, sizeof(int));
memset(&o2_saved_114, 0, sizeof(struct list$1charph*));
memset(&it_115, 0, sizeof(char*));
memset(&right_type2_116, 0, sizeof(struct sType*));
memset(&var__117, 0, sizeof(struct sVar*));
memset(&var_type_118, 0, sizeof(struct sType*));
memset(&o2_saved_119, 0, sizeof(struct list$1sNodeph*));
memset(&it_120, 0, sizeof(struct sNode*));
memset(&come_value_121, 0, sizeof(struct CVALUE*));
memset(&left_type_122, 0, sizeof(struct sType*));
memset(&right_value2_123, 0, sizeof(struct CVALUE*));
memset(&come_value_124, 0, sizeof(struct CVALUE*));
memset(&right_value_id_125, 0, sizeof(int));
memset(&var__126, 0, sizeof(struct sVar*));
memset(&left_type_127, 0, sizeof(struct sType*));
memset(&come_value_128, 0, sizeof(struct CVALUE*));
memset(&right_value_id_129, 0, sizeof(int));
    array_initializer_37=(char*)come_increment_ref_count(((char*)(right_value60=string_clone(self->array_initializer))));
    if(right_value60 && right_value60 != __result_obj__) { right_value60 = come_decrement_ref_count(right_value60, (void*)0, (void*)0, 1, 0, 0); }
    if(_if_conditional115=array_initializer_37,    _if_conditional115) {
        var__43=optional$2sVarpbool_value(((struct optional$2sVarpbool*)(right_value70=map$2charphsVarphp_operator_load_element(info->lv_table->mVars,self->name))));
        if(right_value70 && right_value70 != __result_obj__) { come_call_finalizer(optional$2sVarpboolp_finalize,right_value70, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(_if_conditional122=var__43,        _if_conditional122) {
            err_msg(info,"Already appended this var name(%s)(2)",self->name);
            __result49__ = (_Bool)0;
            if(array_initializer_37) { array_initializer_37 = come_decrement_ref_count(array_initializer_37, (void*)0, (void*)0, 0, 0, 0); }
            return __result49__;
        }
        if(_if_conditional123=self->type==((void*)0),        _if_conditional123) {
            err_msg(info,"Require type name(%s)",self->name);
            __result50__ = (_Bool)0;
            if(array_initializer_37) { array_initializer_37 = come_decrement_ref_count(array_initializer_37, (void*)0, (void*)0, 0, 0, 0); }
            return __result50__;
        }
        else {
            type_44=(struct sType*)come_increment_ref_count(((struct sType*)(right_value71=solve_generics(self->type,info->generics_type,info))));
            if(right_value71 && right_value71 != __result_obj__) { come_call_finalizer(sType_finalize,right_value71, (void*)0, (void*)0, 0, 1, 0, 0); }
            type_44->mFunctionParam=(_Bool)0;
            add_variable_to_table(self->name,(struct sType*)come_increment_ref_count(((struct sType*)(right_value72=sType_clone(type_44)))),info);
            if(right_value72 && right_value72 != __result_obj__) { come_call_finalizer(sType_finalize,right_value72, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(type_44) { come_call_finalizer(sType_finalize,type_44, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        var__43=get_variable_from_table(info->lv_table,self->name);
        var_type_45=(struct sType*)come_increment_ref_count(((struct sType*)(right_value73=sType_clone(var__43->mType))));
        if(right_value73 && right_value73 != __result_obj__) { come_call_finalizer(sType_finalize,right_value73, (void*)0, (void*)0, 0, 1, 0, 0); }
        var_type_45->mStatic=(_Bool)0;
        add_come_code(info,"%s=%s;\n",optional$2charphbool_value(((struct optional$2charphbool*)(right_value74=make_define_var(var_type_45,var__43->mCValueName,(_Bool)0,info)))),array_initializer_37);
        if(right_value74 && right_value74 != __result_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value74, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(var_type_45) { come_call_finalizer(sType_finalize,var_type_45, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    else {
        if(_if_conditional126=self->right_value==((void*)0),        _if_conditional126) {
            var__47=optional$2sVarpbool_value(((struct optional$2sVarpbool*)(right_value75=map$2charphsVarphp_operator_load_element(info->lv_table->mVars,self->name))));
            if(right_value75 && right_value75 != __result_obj__) { come_call_finalizer(optional$2sVarpboolp_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(_if_conditional127=var__47,            _if_conditional127) {
                err_msg(info,"Already appended this var name(%s)(1)",self->name);
                __result53__ = (_Bool)0;
                if(array_initializer_37) { array_initializer_37 = come_decrement_ref_count(array_initializer_37, (void*)0, (void*)0, 0, 0, 0); }
                return __result53__;
            }
            if(_if_conditional128=self->type==((void*)0),            _if_conditional128) {
                err_msg(info,"Require concrete variable type(%s)",self->name);
                __result54__ = (_Bool)0;
                if(array_initializer_37) { array_initializer_37 = come_decrement_ref_count(array_initializer_37, (void*)0, (void*)0, 0, 0, 0); }
                return __result54__;
            }
            type_48=(struct sType*)come_increment_ref_count(((struct sType*)(right_value76=solve_generics(self->type,info->generics_type,info))));
            if(right_value76 && right_value76 != __result_obj__) { come_call_finalizer(sType_finalize,right_value76, (void*)0, (void*)0, 0, 1, 0, 0); }
            type_48->mFunctionParam=(_Bool)0;
            if(_if_conditional129=self->multiple_declare,            _if_conditional129) {
                for(
                o2_saved_49=(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count((self->multiple_declare)),it_52=list$1tuple3$3sTypephcharphsNodephph_begin((o2_saved_49)) ,                0;                _for_condtionalA1=                !list$1tuple3$3sTypephcharphsNodephph_end((o2_saved_49)) ,                _for_condtionalA1;                it_52=list$1tuple3$3sTypephcharphsNodephph_next((o2_saved_49)) ,                0                ){
                    multiple_assgin_var1=it_52;
                    type_55=(struct sType*)come_increment_ref_count(multiple_assgin_var1->v1);
                    var_name_56=(char*)come_increment_ref_count(multiple_assgin_var1->v2);
                    right_value_57=(struct sNode*)come_increment_ref_count(multiple_assgin_var1->v3);
                    add_variable_to_table(var_name_56,(struct sType*)come_increment_ref_count(((struct sType*)(right_value77=sType_clone(type_55)))),info);
                    if(right_value77 && right_value77 != __result_obj__) { come_call_finalizer(sType_finalize,right_value77, (void*)0, (void*)0, 0, 1, 0, 0); }
                    var__47=get_variable_from_table(info->lv_table,var_name_56);
                    if(_if_conditional134=var__47==((void*)0),                    _if_conditional134) {
                        err_msg(info,"var not found(%s)(ZY) at definition of variable\n",it_52);
                        __result62__ = (_Bool)1;
                        if(type_55) { come_call_finalizer(sType_finalize,type_55, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(var_name_56) { var_name_56 = come_decrement_ref_count(var_name_56, (void*)0, (void*)0, 0, 0, 0); }
                        if(right_value_57) { right_value_57 = come_decrement_ref_count(right_value_57, ((struct sNode*)right_value_57)->finalize, ((struct sNode*)right_value_57)->_protocol_obj, 0, 0, 0); } 
                        if(o2_saved_49) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,o2_saved_49, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(type_48) { come_call_finalizer(sType_finalize,type_48, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(array_initializer_37) { array_initializer_37 = come_decrement_ref_count(array_initializer_37, (void*)0, (void*)0, 0, 0, 0); }
                        return __result62__;
                    }
                    left_type_58=(struct sType*)come_increment_ref_count(((struct sType*)(right_value78=sType_clone(var__47->mType))));
                    if(right_value78 && right_value78 != __result_obj__) { come_call_finalizer(sType_finalize,right_value78, (void*)0, (void*)0, 0, 1, 0, 0); }
                    add_come_code_at_function_head(info,"%s;\n",optional$2charphbool_value(((struct optional$2charphbool*)(right_value79=make_define_var(left_type_58,var__47->mCValueName,(_Bool)0,info)))));
                    if(right_value79 && right_value79 != __result_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value79, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(_if_conditional135=right_value_57,                    _if_conditional135) {
                        if(_if_conditional136=!node_compile(right_value_57,info),                        _if_conditional136) {
                            __result63__ = (_Bool)0;
                            if(type_55) { come_call_finalizer(sType_finalize,type_55, (void*)0, (void*)0, 0, 0, 0, 0); }
                            if(var_name_56) { var_name_56 = come_decrement_ref_count(var_name_56, (void*)0, (void*)0, 0, 0, 0); }
                            if(right_value_57) { right_value_57 = come_decrement_ref_count(right_value_57, ((struct sNode*)right_value_57)->finalize, ((struct sNode*)right_value_57)->_protocol_obj, 0, 0, 0); } 
                            if(left_type_58) { come_call_finalizer(sType_finalize,left_type_58, (void*)0, (void*)0, 0, 0, 0, 0); }
                            if(o2_saved_49) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,o2_saved_49, (void*)0, (void*)0, 0, 0, 0, 0); }
                            if(type_48) { come_call_finalizer(sType_finalize,type_48, (void*)0, (void*)0, 0, 0, 0, 0); }
                            if(array_initializer_37) { array_initializer_37 = come_decrement_ref_count(array_initializer_37, (void*)0, (void*)0, 0, 0, 0); }
                            return __result63__;
                        }
                        come_value_59=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value80=get_value_from_stack(-1,info))));
                        if(right_value80 && right_value80 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value80, (void*)0, (void*)0, 0, 1, 0, 0); }
                        dec_stack_ptr(1,info);
                        add_come_code(info,"%s=%s;\n",var__47->mCValueName,come_value_59->c_value);
                        if(come_value_59) { come_call_finalizer(CVALUE_finalize,come_value_59, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    left_type2_60=(struct sType*)come_increment_ref_count(((struct sType*)(right_value81=sType_clone(left_type_58))));
                    if(right_value81 && right_value81 != __result_obj__) { come_call_finalizer(sType_finalize,right_value81, (void*)0, (void*)0, 0, 1, 0, 0); }
                    left_type2_60->mStatic=(_Bool)0;
                    if(_if_conditional139=!var__47->mType->mConstant&&!var__47->mType->mStatic,                    _if_conditional139) {
                        if(_if_conditional140=list$1sNodeph_length(left_type2_60->mArrayNum)>0,                        _if_conditional140) {
                            add_come_code(info,"memset(&%s, 0, sizeof(%s)",var__47->mCValueName,optional$2charphbool_expect(((struct optional$2charphbool*)(right_value82=make_type_name_string(left_type2_60,(_Bool)0,(_Bool)0,(_Bool)0,info)))));
                            if(right_value82 && right_value82 != __result_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value82, (void*)0, (void*)0, 0, 1, 0, 0); }
                            for(
                            o2_saved_61=(struct list$1sNodeph*)come_increment_ref_count((left_type2_60->mArrayNum)),it_64=list$1sNodeph_begin((o2_saved_61)) ,                            0;                            _for_condtionalA2=                            !list$1sNodeph_end((o2_saved_61)) ,                            _for_condtionalA2;                            it_64=list$1sNodeph_next((o2_saved_61)) ,                            0                            ){
                                if(_if_conditional146=!node_compile(it_64,info),                                _if_conditional146) {
                                    err_msg(info,"invalid array num");
                                    exit(1);
                                }
                                come_value_67=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value83=get_value_from_stack(-1,info))));
                                if(right_value83 && right_value83 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value83, (void*)0, (void*)0, 0, 1, 0, 0); }
                                dec_stack_ptr(1,info);
                                add_come_code(info,"*(%s)",come_value_67->c_value);
                                if(come_value_67) { come_call_finalizer(CVALUE_finalize,come_value_67, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
                            if(o2_saved_61) { come_call_finalizer(list$1sNodephp_finalize,o2_saved_61, (void*)0, (void*)0, 0, 0, 0, 0); }
                            add_come_code(info,");\n");
                        }
                        else {
                            add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var__47->mCValueName,optional$2charphbool_expect(((struct optional$2charphbool*)(right_value84=make_type_name_string(left_type2_60,(_Bool)0,(_Bool)0,(_Bool)0,info)))));
                            if(right_value84 && right_value84 != __result_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value84, (void*)0, (void*)0, 0, 1, 0, 0); }
                        }
                    }
                    if(type_55) { come_call_finalizer(sType_finalize,type_55, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(var_name_56) { var_name_56 = come_decrement_ref_count(var_name_56, (void*)0, (void*)0, 0, 0, 0); }
                    if(right_value_57) { right_value_57 = come_decrement_ref_count(right_value_57, ((struct sNode*)right_value_57)->finalize, ((struct sNode*)right_value_57)->_protocol_obj, 0, 0, 0); } 
                    if(left_type_58) { come_call_finalizer(sType_finalize,left_type_58, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(left_type2_60) { come_call_finalizer(sType_finalize,left_type2_60, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                if(o2_saved_49) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,o2_saved_49, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            else {
                add_variable_to_table(self->name,(struct sType*)come_increment_ref_count(((struct sType*)(right_value85=sType_clone(type_48)))),info);
                if(right_value85 && right_value85 != __result_obj__) { come_call_finalizer(sType_finalize,right_value85, (void*)0, (void*)0, 0, 1, 0, 0); }
                var__47=get_variable_from_table(info->lv_table,self->name);
                if(_if_conditional147=var__47==((void*)0),                _if_conditional147) {
                    var__47=get_variable_from_table(info->gv_table,self->name);
                    if(_if_conditional148=var__47==((void*)0),                    _if_conditional148) {
                        err_msg(info,"var not found(%s)(Y) at definition of variable\n",self->name);
                        __result73__ = (_Bool)1;
                        if(type_48) { come_call_finalizer(sType_finalize,type_48, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(array_initializer_37) { array_initializer_37 = come_decrement_ref_count(array_initializer_37, (void*)0, (void*)0, 0, 0, 0); }
                        return __result73__;
                    }
                }
                left_type_68=(struct sType*)come_increment_ref_count(((struct sType*)(right_value86=sType_clone(var__47->mType))));
                if(right_value86 && right_value86 != __result_obj__) { come_call_finalizer(sType_finalize,right_value86, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(_if_conditional149=list$1sNodeph_length(left_type_68->mArrayNum)>0,                _if_conditional149) {
                    add_come_code(info,"%s;\n",optional$2charphbool_expect(((struct optional$2charphbool*)(right_value87=make_define_var(left_type_68,var__47->mCValueName,(_Bool)0,info)))));
                    if(right_value87 && right_value87 != __result_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value87, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(_if_conditional150=!left_type_68->mStatic,                    _if_conditional150) {
                        if(_if_conditional151=list$1sNodeph_length(left_type_68->mArrayNum)>0,                        _if_conditional151) {
                            add_come_code(info,"memset(&%s, 0, sizeof(%s)",var__47->mCValueName,optional$2charphbool_expect(((struct optional$2charphbool*)(right_value88=make_type_name_string(left_type_68,(_Bool)0,(_Bool)0,(_Bool)0,info)))));
                            if(right_value88 && right_value88 != __result_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value88, (void*)0, (void*)0, 0, 1, 0, 0); }
                            for(
                            o2_saved_69=(struct list$1sNodeph*)come_increment_ref_count((left_type_68->mArrayNum)),it_70=list$1sNodeph_begin((o2_saved_69)) ,                            0;                            _for_condtionalA3=                            !list$1sNodeph_end((o2_saved_69)) ,                            _for_condtionalA3;                            it_70=list$1sNodeph_next((o2_saved_69)) ,                            0                            ){
                                if(_if_conditional152=!node_compile(it_70,info),                                _if_conditional152) {
                                    err_msg(info,"invalid array num");
                                    exit(1);
                                }
                                come_value_71=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value89=get_value_from_stack(-1,info))));
                                if(right_value89 && right_value89 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value89, (void*)0, (void*)0, 0, 1, 0, 0); }
                                dec_stack_ptr(1,info);
                                add_come_code(info,"*(%s)",come_value_71->c_value);
                                if(come_value_71) { come_call_finalizer(CVALUE_finalize,come_value_71, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
                            if(o2_saved_69) { come_call_finalizer(list$1sNodephp_finalize,o2_saved_69, (void*)0, (void*)0, 0, 0, 0, 0); }
                            add_come_code(info,");\n");
                        }
                        else {
                            add_come_code(info,"memset(&%s, 0, sizeof(%s)); /* aaa */\n",var__47->mCValueName,var__47->mCValueName);
                        }
                    }
                }
                else {
                    add_come_code_at_function_head(info,"%s;\n",optional$2charphbool_expect(((struct optional$2charphbool*)(right_value90=make_define_var(left_type_68,var__47->mCValueName,(_Bool)0,info)))));
                    if(right_value90 && right_value90 != __result_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value90, (void*)0, (void*)0, 0, 1, 0, 0); }
                    left_type2_72=(struct sType*)come_increment_ref_count(((struct sType*)(right_value91=sType_clone(left_type_68))));
                    if(right_value91 && right_value91 != __result_obj__) { come_call_finalizer(sType_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0, 0); }
                    left_type2_72->mStatic=(_Bool)0;
                    if(_if_conditional153=!var__47->mType->mConstant&&!var__47->mType->mStatic,                    _if_conditional153) {
                        if(_if_conditional154=list$1sNodeph_length(left_type2_72->mArrayNum)>0,                        _if_conditional154) {
                            add_come_code(info,"memset(&%s, 0, sizeof(%s)",var__47->mCValueName,optional$2charphbool_expect(((struct optional$2charphbool*)(right_value92=make_type_name_string(left_type2_72,(_Bool)0,(_Bool)0,(_Bool)0,info)))));
                            if(right_value92 && right_value92 != __result_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value92, (void*)0, (void*)0, 0, 1, 0, 0); }
                            for(
                            o2_saved_73=(struct list$1sNodeph*)come_increment_ref_count((left_type2_72->mArrayNum)),it_74=list$1sNodeph_begin((o2_saved_73)) ,                            0;                            _for_condtionalA4=                            !list$1sNodeph_end((o2_saved_73)) ,                            _for_condtionalA4;                            it_74=list$1sNodeph_next((o2_saved_73)) ,                            0                            ){
                                if(_if_conditional155=!node_compile(it_74,info),                                _if_conditional155) {
                                    err_msg(info,"invalid array num");
                                    exit(1);
                                }
                                come_value_75=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value93=get_value_from_stack(-1,info))));
                                if(right_value93 && right_value93 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value93, (void*)0, (void*)0, 0, 1, 0, 0); }
                                dec_stack_ptr(1,info);
                                add_come_code(info,"*(%s)",come_value_75->c_value);
                                if(come_value_75) { come_call_finalizer(CVALUE_finalize,come_value_75, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
                            if(o2_saved_73) { come_call_finalizer(list$1sNodephp_finalize,o2_saved_73, (void*)0, (void*)0, 0, 0, 0, 0); }
                            add_come_code(info,");\n");
                        }
                        else {
                            add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var__47->mCValueName,optional$2charphbool_expect(((struct optional$2charphbool*)(right_value94=make_type_name_string(left_type2_72,(_Bool)0,(_Bool)0,(_Bool)0,info)))));
                            if(right_value94 && right_value94 != __result_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value94, (void*)0, (void*)0, 0, 1, 0, 0); }
                        }
                    }
                    if(left_type2_72) { come_call_finalizer(sType_finalize,left_type2_72, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                come_value_76=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value95=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 216))));
                if(right_value95 && right_value95 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value95, (void*)0, (void*)0, 0, 1, 0, 0); }
                __dec_obj44=come_value_76->c_value;
                come_value_76->c_value=(char*)come_increment_ref_count(((char*)(right_value96=xsprintf("%s",var__47->mCValueName))));
                if(__dec_obj44) { __dec_obj44 = come_decrement_ref_count(__dec_obj44, (void*)0, (void*)0, 0,0,0); }
                if(right_value96 && right_value96 != __result_obj__) { right_value96 = come_decrement_ref_count(right_value96, (void*)0, (void*)0, 1, 0, 0); }
                __dec_obj45=come_value_76->type;
                come_value_76->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value97=sType_clone(left_type_68))));
                if(__dec_obj45) { come_call_finalizer(sType_finalize,__dec_obj45, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(right_value97 && right_value97 != __result_obj__) { come_call_finalizer(sType_finalize,right_value97, (void*)0, (void*)0, 0, 1, 0, 0); }
                come_value_76->var=var__47;
                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_76));
                if(_if_conditional159=self->alloc&&!left_type_68->mClass->mNumber&&left_type_68->mPointerNum==0,                _if_conditional159) {
                    var__47->mType->mAllocaValue=(_Bool)1;
                }
                if(left_type_68) { come_call_finalizer(sType_finalize,left_type_68, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(come_value_76) { come_call_finalizer(CVALUE_finalize,come_value_76, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            if(type_48) { come_call_finalizer(sType_finalize,type_48, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        else {
            if(_if_conditional160=!node_compile(self->right_value,info),            _if_conditional160) {
                __result75__ = (_Bool)0;
                if(array_initializer_37) { array_initializer_37 = come_decrement_ref_count(array_initializer_37, (void*)0, (void*)0, 0, 0, 0); }
                return __result75__;
            }
            right_value_80=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value101=get_value_from_stack(-1,info))));
            if(right_value101 && right_value101 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value101, (void*)0, (void*)0, 0, 1, 0, 0); }
            dec_stack_ptr(1,info);
            right_type_81=right_value_80->type;
            if(_if_conditional161=self->multiple_assign,            _if_conditional161) {
                if(_if_conditional162=right_type_81->mNoSolvedGenericsType->v1,                _if_conditional162) {
                    right_type_81=right_type_81->mNoSolvedGenericsType->v1;
                }
            }
            if(_if_conditional163=self->alloc,            _if_conditional163) {
                var__82=optional$2sVarpbool_value(((struct optional$2sVarpbool*)(right_value102=map$2charphsVarphp_operator_load_element(info->lv_table->mVars,self->name))));
                if(right_value102 && right_value102 != __result_obj__) { come_call_finalizer(optional$2sVarpboolp_finalize,right_value102, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(_if_conditional164=var__82,                _if_conditional164) {
                    err_msg(info,"Already appended this var name(%s)(2)",self->name);
                    __result76__ = (_Bool)0;
                    if(right_value_80) { come_call_finalizer(CVALUE_finalize,right_value_80, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(array_initializer_37) { array_initializer_37 = come_decrement_ref_count(array_initializer_37, (void*)0, (void*)0, 0, 0, 0); }
                    return __result76__;
                }
                if(_if_conditional165=self->multiple_assign,                _if_conditional165) {
                    i_83=0;
                    for(
                    o2_saved_84=(struct list$1charph*)come_increment_ref_count((self->multiple_assign)),it_87=list$1charph_begin((o2_saved_84)) ,                    0;                    _for_condtionalA5=                    !list$1charph_end((o2_saved_84)) ,                    _for_condtionalA5;                    it_87=list$1charph_next((o2_saved_84)) ,                    0                    ){
                        if(_if_conditional170=i_83<list$1sTypeph_length(right_type_81->mGenericsTypes),                        _if_conditional170) {
                            right_type2_94=optional$2sTypephbool_value(((struct optional$2sTypephbool*)(right_value107=list$1sTypephp_operator_load_element(right_type_81->mGenericsTypes,i_83))));
                            if(right_value107 && right_value107 != __result_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,right_value107, (void*)0, (void*)0, 0, 1, 0, 0); }
                            right_type2_94->mFunctionParam=(_Bool)0;
                            add_variable_to_table(it_87,(struct sType*)come_increment_ref_count(((struct sType*)(right_value108=sType_clone(right_type2_94)))),info);
                            if(right_value108 && right_value108 != __result_obj__) { come_call_finalizer(sType_finalize,right_value108, (void*)0, (void*)0, 0, 1, 0, 0); }
                            var__82=get_variable_from_table(info->lv_table,it_87);
                            var_type_95=(struct sType*)come_increment_ref_count(((struct sType*)(right_value109=sType_clone(var__82->mType))));
                            if(right_value109 && right_value109 != __result_obj__) { come_call_finalizer(sType_finalize,right_value109, (void*)0, (void*)0, 0, 1, 0, 0); }
                            var_type_95->mStatic=(_Bool)0;
                            if(_if_conditional175=!var_type_95->mConstant&&!var_type_95->mStatic,                            _if_conditional175) {
                                if(_if_conditional176=list$1sNodeph_length(var_type_95->mArrayNum)>0,                                _if_conditional176) {
                                    add_come_code(info,"memset(&%s, 0, sizeof(%s)",var__82->mCValueName,optional$2charphbool_expect(((struct optional$2charphbool*)(right_value110=make_type_name_string(var_type_95,(_Bool)0,(_Bool)0,(_Bool)0,info)))));
                                    if(right_value110 && right_value110 != __result_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value110, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    for(
                                    o2_saved_96=(struct list$1sNodeph*)come_increment_ref_count((var_type_95->mArrayNum)),it_97=list$1sNodeph_begin((o2_saved_96)) ,                                    0;                                    _for_condtionalA6=                                    !list$1sNodeph_end((o2_saved_96)) ,                                    _for_condtionalA6;                                    it_97=list$1sNodeph_next((o2_saved_96)) ,                                    0                                    ){
                                        if(_if_conditional177=!node_compile(it_97,info),                                        _if_conditional177) {
                                            err_msg(info,"invalid array num");
                                            exit(1);
                                        }
                                        come_value_98=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value111=get_value_from_stack(-1,info))));
                                        if(right_value111 && right_value111 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value111, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        dec_stack_ptr(1,info);
                                        add_come_code(info,"*(%s)",come_value_98->c_value);
                                        if(come_value_98) { come_call_finalizer(CVALUE_finalize,come_value_98, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    }
                                    if(o2_saved_96) { come_call_finalizer(list$1sNodephp_finalize,o2_saved_96, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    add_come_code(info,");\n");
                                }
                                else {
                                    add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var__82->mCValueName,optional$2charphbool_expect(((struct optional$2charphbool*)(right_value112=make_type_name_string(var_type_95,(_Bool)0,(_Bool)0,(_Bool)0,info)))));
                                    if(right_value112 && right_value112 != __result_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value112, (void*)0, (void*)0, 0, 1, 0, 0); }
                                }
                            }
                            if(var_type_95) { come_call_finalizer(sType_finalize,var_type_95, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
                        i_83++;
                    }
                    if(o2_saved_84) { come_call_finalizer(list$1charphp_finalize,o2_saved_84, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                else {
                    if(_if_conditional178=self->type==((void*)0),                    _if_conditional178) {
                        right_type_81->mFunctionParam=(_Bool)0;
                        add_variable_to_table(self->name,(struct sType*)come_increment_ref_count(((struct sType*)(right_value113=sType_clone(right_type_81)))),info);
                        if(right_value113 && right_value113 != __result_obj__) { come_call_finalizer(sType_finalize,right_value113, (void*)0, (void*)0, 0, 1, 0, 0); }
                    }
                    else {
                        type_99=(struct sType*)come_increment_ref_count(((struct sType*)(right_value114=solve_generics(self->type,info->generics_type,info))));
                        if(right_value114 && right_value114 != __result_obj__) { come_call_finalizer(sType_finalize,right_value114, (void*)0, (void*)0, 0, 1, 0, 0); }
                        type_99->mFunctionParam=(_Bool)0;
                        add_variable_to_table(self->name,(struct sType*)come_increment_ref_count(((struct sType*)(right_value115=sType_clone(type_99)))),info);
                        if(right_value115 && right_value115 != __result_obj__) { come_call_finalizer(sType_finalize,right_value115, (void*)0, (void*)0, 0, 1, 0, 0); }
                        if(type_99) { come_call_finalizer(sType_finalize,type_99, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    var__82=get_variable_from_table(info->lv_table,self->name);
                    var_type_100=(struct sType*)come_increment_ref_count(((struct sType*)(right_value116=sType_clone(var__82->mType))));
                    if(right_value116 && right_value116 != __result_obj__) { come_call_finalizer(sType_finalize,right_value116, (void*)0, (void*)0, 0, 1, 0, 0); }
                    var_type_100->mStatic=(_Bool)0;
                    if(_if_conditional179=!var__82->mType->mStatic&&!var_type_100->mConstant&&list$1sNodeph_length(var_type_100->mArrayNum)==0,                    _if_conditional179) {
                        if(_if_conditional180=list$1sNodeph_length(var_type_100->mArrayNum)>0,                        _if_conditional180) {
                            add_come_code(info,"memset(&%s, 0, sizeof(%s)",var__82->mCValueName,optional$2charphbool_expect(((struct optional$2charphbool*)(right_value117=make_type_name_string(var_type_100,(_Bool)0,(_Bool)0,(_Bool)0,info)))));
                            if(right_value117 && right_value117 != __result_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value117, (void*)0, (void*)0, 0, 1, 0, 0); }
                            for(
                            o2_saved_101=(struct list$1sNodeph*)come_increment_ref_count((var_type_100->mArrayNum)),it_102=list$1sNodeph_begin((o2_saved_101)) ,                            0;                            _for_condtionalA7=                            !list$1sNodeph_end((o2_saved_101)) ,                            _for_condtionalA7;                            it_102=list$1sNodeph_next((o2_saved_101)) ,                            0                            ){
                                if(_if_conditional181=!node_compile(it_102,info),                                _if_conditional181) {
                                    err_msg(info,"invalid array num");
                                    exit(1);
                                }
                                come_value_103=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value118=get_value_from_stack(-1,info))));
                                if(right_value118 && right_value118 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value118, (void*)0, (void*)0, 0, 1, 0, 0); }
                                dec_stack_ptr(1,info);
                                add_come_code(info,"*(%s)",come_value_103->c_value);
                                if(come_value_103) { come_call_finalizer(CVALUE_finalize,come_value_103, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
                            if(o2_saved_101) { come_call_finalizer(list$1sNodephp_finalize,o2_saved_101, (void*)0, (void*)0, 0, 0, 0, 0); }
                            add_come_code(info,");\n");
                        }
                        else {
                            add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var__82->mCValueName,optional$2charphbool_expect(((struct optional$2charphbool*)(right_value119=make_type_name_string(var_type_100,(_Bool)0,(_Bool)0,(_Bool)0,info)))));
                            if(right_value119 && right_value119 != __result_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value119, (void*)0, (void*)0, 0, 1, 0, 0); }
                        }
                    }
                    if(var_type_100) { come_call_finalizer(sType_finalize,var_type_100, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
            }
            current_stack_frame_struct_104=info->current_stack_frame_struct;
            if(_if_conditional182=current_stack_frame_struct_104&&optional$2sVarpbool_value(((struct optional$2sVarpbool*)(right_value120=map$2charphsVarphp_operator_load_element(info->lv_table->mVars,self->name))))==((void*)0),            (right_value120 && right_value120 != __result_obj__) ? come_call_finalizer(optional$2sVarpboolp_finalize,right_value120, (void*)0, (void*)0, 0, 1, 0, 0):0,
            _if_conditional182) {
                parent_var_105=get_variable_from_table(info->lv_table->mParent,self->name);
                if(_if_conditional183=parent_var_105!=((void*)0),                _if_conditional183) {
                    if(_if_conditional184=string_operator_not_equals(parent_var_105->mFunName,info->come_fun->mName),                    _if_conditional184) {
                        come_value_106=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value121=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 335))));
                        if(right_value121 && right_value121 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value121, (void*)0, (void*)0, 0, 1, 0, 0); }
                        left_type_107=parent_var_105->mType;
                        if(_if_conditional185=left_type_107->mPointerNum>0&&right_type_81->mPointerNum>0&&right_type_81->mHeap&&left_type_107->mHeap,                        _if_conditional185) {
                            c_value_108=(char*)come_increment_ref_count(((char*)(right_value122=xsprintf("*(parent->%s)",parent_var_105->mCValueName))));
                            if(right_value122 && right_value122 != __result_obj__) { right_value122 = come_decrement_ref_count(right_value122, (void*)0, (void*)0, 1, 0, 0); }
                            decrement_ref_count_object(parent_var_105->mType,c_value_108,info,(_Bool)0);
                            std_move(left_type_107,right_type_81,right_value_80,info);
                            __dec_obj50=come_value_106->c_value;
                            come_value_106->c_value=(char*)come_increment_ref_count(((char*)(right_value123=xsprintf("(*(parent->%s))=%s",parent_var_105->mCValueName,right_value_80->c_value))));
                            if(__dec_obj50) { __dec_obj50 = come_decrement_ref_count(__dec_obj50, (void*)0, (void*)0, 0,0,0); }
                            if(right_value123 && right_value123 != __result_obj__) { right_value123 = come_decrement_ref_count(right_value123, (void*)0, (void*)0, 1, 0, 0); }
                            right_value_id_109=get_right_value_id_from_obj((char*)come_increment_ref_count(right_value_80->c_value));
                            if(_if_conditional186=right_value_id_109!=-1,                            _if_conditional186) {
                                remove_object_from_right_values(right_value_id_109,info);
                            }
                            if(c_value_108) { c_value_108 = come_decrement_ref_count(c_value_108, (void*)0, (void*)0, 0, 0, 0); }
                        }
                        else {
                            if(_if_conditional187=left_type_107->mPointerNum>0&&right_type_81->mPointerNum>0&&string_operator_equals(right_type_81->mClass->mName,"void")&&left_type_107->mHeap,                            _if_conditional187) {
                                c_value_110=(char*)come_increment_ref_count(((char*)(right_value124=xsprintf("*(parent->%s)",parent_var_105->mCValueName))));
                                if(right_value124 && right_value124 != __result_obj__) { right_value124 = come_decrement_ref_count(right_value124, (void*)0, (void*)0, 1, 0, 0); }
                                decrement_ref_count_object(parent_var_105->mType,c_value_110,info,(_Bool)0);
                                __dec_obj51=come_value_106->c_value;
                                come_value_106->c_value=(char*)come_increment_ref_count(((char*)(right_value125=xsprintf("(*(parent->%s))=%s",parent_var_105->mCValueName,right_value_80->c_value))));
                                if(__dec_obj51) { __dec_obj51 = come_decrement_ref_count(__dec_obj51, (void*)0, (void*)0, 0,0,0); }
                                if(right_value125 && right_value125 != __result_obj__) { right_value125 = come_decrement_ref_count(right_value125, (void*)0, (void*)0, 1, 0, 0); }
                                if(c_value_110) { c_value_110 = come_decrement_ref_count(c_value_110, (void*)0, (void*)0, 0, 0, 0); }
                            }
                            else {
                                __dec_obj52=come_value_106->c_value;
                                come_value_106->c_value=(char*)come_increment_ref_count(((char*)(right_value126=xsprintf("(*(parent->%s))=%s",parent_var_105->mCValueName,right_value_80->c_value))));
                                if(__dec_obj52) { __dec_obj52 = come_decrement_ref_count(__dec_obj52, (void*)0, (void*)0, 0,0,0); }
                                if(right_value126 && right_value126 != __result_obj__) { right_value126 = come_decrement_ref_count(right_value126, (void*)0, (void*)0, 1, 0, 0); }
                            }
                        }
                        __dec_obj53=come_value_106->type;
                        come_value_106->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value127=sType_clone(left_type_107))));
                        if(__dec_obj53) { come_call_finalizer(sType_finalize,__dec_obj53, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(right_value127 && right_value127 != __result_obj__) { come_call_finalizer(sType_finalize,right_value127, (void*)0, (void*)0, 0, 1, 0, 0); }
                        come_value_106->var=((void*)0);
                        check_assign_type(((char*)(right_value129=xsprintf("\%s is assigning to",((char*)(right_value128=string_to_string(self->name)))))),left_type_107,right_type_81,come_value_106,(_Bool)0,info);
                        if(right_value128 && right_value128 != __result_obj__) { right_value128 = come_decrement_ref_count(right_value128, (void*)0, (void*)0, 1, 0, 0); }
                        if(right_value129 && right_value129 != __result_obj__) { right_value129 = come_decrement_ref_count(right_value129, (void*)0, (void*)0, 1, 0, 0); }
                        add_come_last_code(info,"%s;\n",come_value_106->c_value);
                        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_106));
                        __result90__ = (_Bool)1;
                        if(come_value_106) { come_call_finalizer(CVALUE_finalize,come_value_106, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(right_value_80) { come_call_finalizer(CVALUE_finalize,right_value_80, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(array_initializer_37) { array_initializer_37 = come_decrement_ref_count(array_initializer_37, (void*)0, (void*)0, 0, 0, 0); }
                        return __result90__;
                        if(come_value_106) { come_call_finalizer(CVALUE_finalize,come_value_106, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                }
            }
            if(_if_conditional188=self->multiple_assign,            _if_conditional188) {
                multiple_var_name_112=(char*)come_increment_ref_count(((char*)(right_value130=xsprintf("multiple_assgin_var%d",++num_multiple_var_111))));
                if(right_value130 && right_value130 != __result_obj__) { right_value130 = come_decrement_ref_count(right_value130, (void*)0, (void*)0, 1, 0, 0); }
                add_come_code_at_function_head(info,"%s;\n",optional$2charphbool_expect(((struct optional$2charphbool*)(right_value131=make_define_var(right_value_80->type,multiple_var_name_112,(_Bool)0,info)))));
                if(right_value131 && right_value131 != __result_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value131, (void*)0, (void*)0, 0, 1, 0, 0); }
                add_come_code(info,"%s=%s;\n",multiple_var_name_112,right_value_80->c_value);
                __dec_obj54=right_value_80->c_value;
                right_value_80->c_value=(char*)come_increment_ref_count(((char*)(right_value132=string_clone(multiple_var_name_112))));
                if(__dec_obj54) { __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0,0,0); }
                if(right_value132 && right_value132 != __result_obj__) { right_value132 = come_decrement_ref_count(right_value132, (void*)0, (void*)0, 1, 0, 0); }
                i_113=0;
                for(
                o2_saved_114=(struct list$1charph*)come_increment_ref_count((self->multiple_assign)),it_115=list$1charph_begin((o2_saved_114)) ,                0;                _for_condtionalA8=                !list$1charph_end((o2_saved_114)) ,                _for_condtionalA8;                it_115=list$1charph_next((o2_saved_114)) ,                0                ){
                    if(_if_conditional189=i_113<list$1sTypeph_length(right_type_81->mGenericsTypes),                    _if_conditional189) {
                        right_type2_116=(struct sType*)come_increment_ref_count(((struct sType*)(right_value134=sType_clone(optional$2sTypephbool_value(((struct optional$2sTypephbool*)(right_value133=list$1sTypephp_operator_load_element(right_type_81->mGenericsTypes,i_113))))))));
                        if(right_value133 && right_value133 != __result_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,right_value133, (void*)0, (void*)0, 0, 1, 0, 0); }
                        if(right_value134 && right_value134 != __result_obj__) { come_call_finalizer(sType_finalize,right_value134, (void*)0, (void*)0, 0, 1, 0, 0); }
                        var__117=get_variable_from_table(info->lv_table,it_115);
                        var_type_118=(struct sType*)come_increment_ref_count(((struct sType*)(right_value135=sType_clone(var__117->mType))));
                        if(right_value135 && right_value135 != __result_obj__) { come_call_finalizer(sType_finalize,right_value135, (void*)0, (void*)0, 0, 1, 0, 0); }
                        var_type_118->mStatic=(_Bool)0;
                        if(_if_conditional190=!var_type_118->mConstant,                        _if_conditional190) {
                            if(_if_conditional191=list$1sNodeph_length(var_type_118->mArrayNum)>0,                            _if_conditional191) {
                                add_come_code(info,"memset(&%s, 0, sizeof(%s)",var__117->mCValueName,optional$2charphbool_expect(((struct optional$2charphbool*)(right_value136=make_type_name_string(var_type_118,(_Bool)0,(_Bool)0,(_Bool)0,info)))));
                                if(right_value136 && right_value136 != __result_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value136, (void*)0, (void*)0, 0, 1, 0, 0); }
                                for(
                                o2_saved_119=(struct list$1sNodeph*)come_increment_ref_count((var_type_118->mArrayNum)),it_120=list$1sNodeph_begin((o2_saved_119)) ,                                0;                                _for_condtionalA9=                                !list$1sNodeph_end((o2_saved_119)) ,                                _for_condtionalA9;                                it_120=list$1sNodeph_next((o2_saved_119)) ,                                0                                ){
                                    if(_if_conditional192=!node_compile(it_120,info),                                    _if_conditional192) {
                                        err_msg(info,"invalid array num");
                                        exit(1);
                                    }
                                    come_value_121=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value137=get_value_from_stack(-1,info))));
                                    if(right_value137 && right_value137 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value137, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    dec_stack_ptr(1,info);
                                    add_come_code(info,"*(%s)",come_value_121->c_value);
                                    if(come_value_121) { come_call_finalizer(CVALUE_finalize,come_value_121, (void*)0, (void*)0, 0, 0, 0, 0); }
                                }
                                if(o2_saved_119) { come_call_finalizer(list$1sNodephp_finalize,o2_saved_119, (void*)0, (void*)0, 0, 0, 0, 0); }
                                add_come_code(info,");\n");
                            }
                            else {
                                add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var__117->mCValueName,optional$2charphbool_expect(((struct optional$2charphbool*)(right_value138=make_type_name_string(var_type_118,(_Bool)0,(_Bool)0,(_Bool)0,info)))));
                                if(right_value138 && right_value138 != __result_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value138, (void*)0, (void*)0, 0, 1, 0, 0); }
                            }
                        }
                        left_type_122=(struct sType*)come_increment_ref_count(((struct sType*)(right_value139=sType_clone(var__117->mType))));
                        if(right_value139 && right_value139 != __result_obj__) { come_call_finalizer(sType_finalize,right_value139, (void*)0, (void*)0, 0, 1, 0, 0); }
                        right_value2_123=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value140=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 418))));
                        if(right_value140 && right_value140 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value140, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __dec_obj55=right_value2_123->c_value;
                        right_value2_123->c_value=(char*)come_increment_ref_count(((char*)(right_value141=xsprintf("%s->v%d",right_value_80->c_value,i_113+1))));
                        if(__dec_obj55) { __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0,0,0); }
                        if(right_value141 && right_value141 != __result_obj__) { right_value141 = come_decrement_ref_count(right_value141, (void*)0, (void*)0, 1, 0, 0); }
                        __dec_obj56=right_value2_123->type;
                        right_value2_123->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value142=sType_clone(right_type2_116))));
                        if(__dec_obj56) { come_call_finalizer(sType_finalize,__dec_obj56, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(right_value142 && right_value142 != __result_obj__) { come_call_finalizer(sType_finalize,right_value142, (void*)0, (void*)0, 0, 1, 0, 0); }
                        right_value2_123->var=((void*)0);
                        come_value_124=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value143=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 424))));
                        if(right_value143 && right_value143 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value143, (void*)0, (void*)0, 0, 1, 0, 0); }
                        check_assign_type(((char*)(right_value145=xsprintf("\%s is assining to}",((char*)(right_value144=string_to_string(self->name)))))),left_type_122,right_type2_116,come_value_124,(_Bool)0,info);
                        if(right_value144 && right_value144 != __result_obj__) { right_value144 = come_decrement_ref_count(right_value144, (void*)0, (void*)0, 1, 0, 0); }
                        if(right_value145 && right_value145 != __result_obj__) { right_value145 = come_decrement_ref_count(right_value145, (void*)0, (void*)0, 1, 0, 0); }
                        if(_if_conditional193=right_type2_116->mHeap&&left_type_122->mHeap&&left_type_122->mPointerNum>0&&right_type2_116->mPointerNum>0,                        _if_conditional193) {
                            if(_if_conditional194=self->alloc,                            _if_conditional194) {
                                std_move(left_type_122,right_type2_116,right_value2_123,info);
                                __dec_obj57=come_value_124->c_value;
                                come_value_124->c_value=(char*)come_increment_ref_count(((char*)(right_value146=xsprintf("%s=%s",var__117->mCValueName,right_value2_123->c_value))));
                                if(__dec_obj57) { __dec_obj57 = come_decrement_ref_count(__dec_obj57, (void*)0, (void*)0, 0,0,0); }
                                if(right_value146 && right_value146 != __result_obj__) { right_value146 = come_decrement_ref_count(right_value146, (void*)0, (void*)0, 1, 0, 0); }
                            }
                            right_value_id_125=get_right_value_id_from_obj((char*)come_increment_ref_count(right_value2_123->c_value));
                            if(_if_conditional195=right_value_id_125!=-1,                            _if_conditional195) {
                                remove_object_from_right_values(right_value_id_125,info);
                            }
                        }
                        else {
                            __dec_obj58=come_value_124->c_value;
                            come_value_124->c_value=(char*)come_increment_ref_count(((char*)(right_value147=xsprintf("%s=%s",var__117->mCValueName,right_value2_123->c_value))));
                            if(__dec_obj58) { __dec_obj58 = come_decrement_ref_count(__dec_obj58, (void*)0, (void*)0, 0,0,0); }
                            if(right_value147 && right_value147 != __result_obj__) { right_value147 = come_decrement_ref_count(right_value147, (void*)0, (void*)0, 1, 0, 0); }
                        }
                        __dec_obj59=come_value_124->type;
                        come_value_124->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value148=sType_clone(left_type_122))));
                        if(__dec_obj59) { come_call_finalizer(sType_finalize,__dec_obj59, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(right_value148 && right_value148 != __result_obj__) { come_call_finalizer(sType_finalize,right_value148, (void*)0, (void*)0, 0, 1, 0, 0); }
                        come_value_124->var=var__117;
                        if(_if_conditional196=self->alloc,                        _if_conditional196) {
                            add_come_code_at_function_head(info,"%s;\n",optional$2charphbool_expect(((struct optional$2charphbool*)(right_value149=make_define_var(left_type_122,var__117->mCValueName,(_Bool)0,info)))));
                            if(right_value149 && right_value149 != __result_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value149, (void*)0, (void*)0, 0, 1, 0, 0); }
                            add_come_code(info,"%s;\n",come_value_124->c_value);
                        }
                        else {
                            add_come_code(info,"%s;\n",come_value_124->c_value);
                        }
                        if(right_type2_116) { come_call_finalizer(sType_finalize,right_type2_116, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(var_type_118) { come_call_finalizer(sType_finalize,var_type_118, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(left_type_122) { come_call_finalizer(sType_finalize,left_type_122, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(right_value2_123) { come_call_finalizer(CVALUE_finalize,right_value2_123, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(come_value_124) { come_call_finalizer(CVALUE_finalize,come_value_124, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    i_113++;
                }
                if(o2_saved_114) { come_call_finalizer(list$1charphp_finalize,o2_saved_114, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(multiple_var_name_112) { multiple_var_name_112 = come_decrement_ref_count(multiple_var_name_112, (void*)0, (void*)0, 0, 0, 0); }
            }
            else {
                var__126=get_variable_from_table(info->lv_table,self->name);
                if(_if_conditional197=var__126==((void*)0),                _if_conditional197) {
                    var__126=get_variable_from_table(info->gv_table,self->name);
                    if(_if_conditional198=var__126==((void*)0),                    _if_conditional198) {
                        err_msg(info,"var not found(%s)(X) at storing variable\n",self->name);
                        __result91__ = (_Bool)1;
                        if(right_value_80) { come_call_finalizer(CVALUE_finalize,right_value_80, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(array_initializer_37) { array_initializer_37 = come_decrement_ref_count(array_initializer_37, (void*)0, (void*)0, 0, 0, 0); }
                        return __result91__;
                    }
                }
                if(_if_conditional199=var__126->mType==((void*)0),                _if_conditional199) {
                    __dec_obj60=var__126->mType;
                    var__126->mType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value150=sType_clone(right_type_81))));
                    if(__dec_obj60) { come_call_finalizer(sType_finalize,__dec_obj60, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(right_value150 && right_value150 != __result_obj__) { come_call_finalizer(sType_finalize,right_value150, (void*)0, (void*)0, 0, 1, 0, 0); }
                }
                left_type_127=(struct sType*)come_increment_ref_count(((struct sType*)(right_value151=sType_clone(var__126->mType))));
                if(right_value151 && right_value151 != __result_obj__) { come_call_finalizer(sType_finalize,right_value151, (void*)0, (void*)0, 0, 1, 0, 0); }
                come_value_128=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value152=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 475))));
                if(right_value152 && right_value152 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value152, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(_if_conditional200=var__126->mType->mStatic&&!var__126->mGlobal,                _if_conditional200) {
                    check_assign_type(((char*)(right_value154=xsprintf("\%s is assining to",((char*)(right_value153=string_to_string(self->name)))))),left_type_127,right_type_81,right_value_80,(_Bool)0,info);
                    if(right_value153 && right_value153 != __result_obj__) { right_value153 = come_decrement_ref_count(right_value153, (void*)0, (void*)0, 1, 0, 0); }
                    if(right_value154 && right_value154 != __result_obj__) { right_value154 = come_decrement_ref_count(right_value154, (void*)0, (void*)0, 1, 0, 0); }
                    add_come_code_at_function_head(info,"%s=%s;\n",optional$2charphbool_expect(((struct optional$2charphbool*)(right_value155=make_define_var(left_type_127,var__126->mCValueName,(_Bool)0,info)))),right_value_80->c_value);
                    if(right_value155 && right_value155 != __result_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value155, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __dec_obj61=come_value_128->c_value;
                    come_value_128->c_value=(char*)come_increment_ref_count(((char*)(right_value156=__builtin_string(""))));
                    if(__dec_obj61) { __dec_obj61 = come_decrement_ref_count(__dec_obj61, (void*)0, (void*)0, 0,0,0); }
                    if(right_value156 && right_value156 != __result_obj__) { right_value156 = come_decrement_ref_count(right_value156, (void*)0, (void*)0, 1, 0, 0); }
                    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_128));
                    transpiler_clear_last_code(info);
                }
                else {
                    if(_if_conditional201=var__126->mType->mConstant,                    _if_conditional201) {
                        check_assign_type(((char*)(right_value158=xsprintf("\%s is assining to",((char*)(right_value157=string_to_string(self->name)))))),left_type_127,right_type_81,right_value_80,(_Bool)0,info);
                        if(right_value157 && right_value157 != __result_obj__) { right_value157 = come_decrement_ref_count(right_value157, (void*)0, (void*)0, 1, 0, 0); }
                        if(right_value158 && right_value158 != __result_obj__) { right_value158 = come_decrement_ref_count(right_value158, (void*)0, (void*)0, 1, 0, 0); }
                        if(_if_conditional202=self->alloc,                        _if_conditional202) {
                            add_come_code_at_function_head(info,"%s=%s;\n",optional$2charphbool_expect(((struct optional$2charphbool*)(right_value159=make_define_var(left_type_127,var__126->mCValueName,(_Bool)0,info)))),right_value_80->c_value);
                            if(right_value159 && right_value159 != __result_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value159, (void*)0, (void*)0, 0, 1, 0, 0); }
                        }
                        else {
                            add_come_code_at_function_head(info,"%s=%s;\n",var__126->mCValueName,right_value_80->c_value);
                        }
                        __dec_obj62=come_value_128->c_value;
                        come_value_128->c_value=(char*)come_increment_ref_count(((char*)(right_value160=__builtin_string(""))));
                        if(__dec_obj62) { __dec_obj62 = come_decrement_ref_count(__dec_obj62, (void*)0, (void*)0, 0,0,0); }
                        if(right_value160 && right_value160 != __result_obj__) { right_value160 = come_decrement_ref_count(right_value160, (void*)0, (void*)0, 1, 0, 0); }
                        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_128));
                        transpiler_clear_last_code(info);
                    }
                    else {
                        if(_if_conditional203=right_type_81->mHeap&&left_type_127->mHeap&&left_type_127->mPointerNum>0&&right_type_81->mPointerNum>0,                        _if_conditional203) {
                            check_assign_type(((char*)(right_value162=xsprintf("\%s is assining to",((char*)(right_value161=string_to_string(self->name)))))),left_type_127,right_type_81,right_value_80,(_Bool)0,info);
                            if(right_value161 && right_value161 != __result_obj__) { right_value161 = come_decrement_ref_count(right_value161, (void*)0, (void*)0, 1, 0, 0); }
                            if(right_value162 && right_value162 != __result_obj__) { right_value162 = come_decrement_ref_count(right_value162, (void*)0, (void*)0, 1, 0, 0); }
                            if(_if_conditional204=self->alloc,                            _if_conditional204) {
                                std_move(left_type_127,right_type_81,right_value_80,info);
                                __dec_obj63=come_value_128->c_value;
                                come_value_128->c_value=(char*)come_increment_ref_count(((char*)(right_value163=xsprintf("%s=%s",var__126->mCValueName,right_value_80->c_value))));
                                if(__dec_obj63) { __dec_obj63 = come_decrement_ref_count(__dec_obj63, (void*)0, (void*)0, 0,0,0); }
                                if(right_value163 && right_value163 != __result_obj__) { right_value163 = come_decrement_ref_count(right_value163, (void*)0, (void*)0, 1, 0, 0); }
                            }
                            else {
                                decrement_ref_count_object(left_type_127,var__126->mCValueName,info,(_Bool)0);
                                std_move(left_type_127,right_type_81,right_value_80,info);
                                __dec_obj64=come_value_128->c_value;
                                come_value_128->c_value=(char*)come_increment_ref_count(((char*)(right_value164=xsprintf("%s=%s",var__126->mCValueName,right_value_80->c_value))));
                                if(__dec_obj64) { __dec_obj64 = come_decrement_ref_count(__dec_obj64, (void*)0, (void*)0, 0,0,0); }
                                if(right_value164 && right_value164 != __result_obj__) { right_value164 = come_decrement_ref_count(right_value164, (void*)0, (void*)0, 1, 0, 0); }
                            }
                            right_value_id_129=get_right_value_id_from_obj((char*)come_increment_ref_count(right_value_80->c_value));
                            if(_if_conditional205=right_value_id_129!=-1,                            _if_conditional205) {
                                remove_object_from_right_values(right_value_id_129,info);
                            }
                            __dec_obj65=come_value_128->type;
                            come_value_128->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value165=sType_clone(left_type_127))));
                            if(__dec_obj65) { come_call_finalizer(sType_finalize,__dec_obj65, (void*)0, (void*)0, 0, 0, 0, 0); }
                            if(right_value165 && right_value165 != __result_obj__) { come_call_finalizer(sType_finalize,right_value165, (void*)0, (void*)0, 0, 1, 0, 0); }
                            come_value_128->var=var__126;
                            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_128));
                            add_come_last_code(info,"%s;\n",come_value_128->c_value);
                        }
                        else {
                            if(_if_conditional206=string_operator_equals(right_type_81->mClass->mName,"void")&&left_type_127->mHeap&&left_type_127->mPointerNum>0&&right_type_81->mPointerNum>0,                            _if_conditional206) {
                                check_assign_type(((char*)(right_value167=xsprintf("\%s is assining to",((char*)(right_value166=string_to_string(self->name)))))),left_type_127,right_type_81,right_value_80,(_Bool)0,info);
                                if(right_value166 && right_value166 != __result_obj__) { right_value166 = come_decrement_ref_count(right_value166, (void*)0, (void*)0, 1, 0, 0); }
                                if(right_value167 && right_value167 != __result_obj__) { right_value167 = come_decrement_ref_count(right_value167, (void*)0, (void*)0, 1, 0, 0); }
                                if(_if_conditional207=self->alloc,                                _if_conditional207) {
                                    __dec_obj66=come_value_128->c_value;
                                    come_value_128->c_value=(char*)come_increment_ref_count(((char*)(right_value168=xsprintf("%s=%s",var__126->mCValueName,right_value_80->c_value))));
                                    if(__dec_obj66) { __dec_obj66 = come_decrement_ref_count(__dec_obj66, (void*)0, (void*)0, 0,0,0); }
                                    if(right_value168 && right_value168 != __result_obj__) { right_value168 = come_decrement_ref_count(right_value168, (void*)0, (void*)0, 1, 0, 0); }
                                }
                                else {
                                    decrement_ref_count_object(left_type_127,var__126->mCValueName,info,(_Bool)0);
                                    __dec_obj67=come_value_128->c_value;
                                    come_value_128->c_value=(char*)come_increment_ref_count(((char*)(right_value169=xsprintf("%s=%s",var__126->mCValueName,right_value_80->c_value))));
                                    if(__dec_obj67) { __dec_obj67 = come_decrement_ref_count(__dec_obj67, (void*)0, (void*)0, 0,0,0); }
                                    if(right_value169 && right_value169 != __result_obj__) { right_value169 = come_decrement_ref_count(right_value169, (void*)0, (void*)0, 1, 0, 0); }
                                }
                                __dec_obj68=come_value_128->type;
                                come_value_128->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value170=sType_clone(left_type_127))));
                                if(__dec_obj68) { come_call_finalizer(sType_finalize,__dec_obj68, (void*)0, (void*)0, 0, 0, 0, 0); }
                                if(right_value170 && right_value170 != __result_obj__) { come_call_finalizer(sType_finalize,right_value170, (void*)0, (void*)0, 0, 1, 0, 0); }
                                come_value_128->var=var__126;
                                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_128));
                                add_come_last_code(info,"%s;\n",come_value_128->c_value);
                            }
                            else {
                                if(_if_conditional208=left_type_127->mHeap&&!right_type_81->mHeap,                                _if_conditional208) {
                                    if(_if_conditional209=string_operator_equals(right_type_81->mClass->mName,"void")&&right_type_81->mPointerNum==1,                                    _if_conditional209) {
                                    }
                                    else {
                                        if(_if_conditional210=!right_type_81->mDelegate&&!right_type_81->mShare,                                        _if_conditional210) {
                                            err_msg(info,"require right value as heap object(%s)",self->name);
                                            __result92__ = (_Bool)0;
                                            if(left_type_127) { come_call_finalizer(sType_finalize,left_type_127, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            if(come_value_128) { come_call_finalizer(CVALUE_finalize,come_value_128, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            if(right_value_80) { come_call_finalizer(CVALUE_finalize,right_value_80, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            if(array_initializer_37) { array_initializer_37 = come_decrement_ref_count(array_initializer_37, (void*)0, (void*)0, 0, 0, 0); }
                                            return __result92__;
                                        }
                                    }
                                }
                                check_assign_type(((char*)(right_value172=xsprintf("\%s is assining to",((char*)(right_value171=string_to_string(self->name)))))),left_type_127,right_type_81,right_value_80,(_Bool)0,info);
                                if(right_value171 && right_value171 != __result_obj__) { right_value171 = come_decrement_ref_count(right_value171, (void*)0, (void*)0, 1, 0, 0); }
                                if(right_value172 && right_value172 != __result_obj__) { right_value172 = come_decrement_ref_count(right_value172, (void*)0, (void*)0, 1, 0, 0); }
                                __dec_obj69=come_value_128->c_value;
                                come_value_128->c_value=(char*)come_increment_ref_count(((char*)(right_value173=xsprintf("%s=%s",var__126->mCValueName,right_value_80->c_value))));
                                if(__dec_obj69) { __dec_obj69 = come_decrement_ref_count(__dec_obj69, (void*)0, (void*)0, 0,0,0); }
                                if(right_value173 && right_value173 != __result_obj__) { right_value173 = come_decrement_ref_count(right_value173, (void*)0, (void*)0, 1, 0, 0); }
                                __dec_obj70=come_value_128->type;
                                come_value_128->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value174=sType_clone(left_type_127))));
                                if(__dec_obj70) { come_call_finalizer(sType_finalize,__dec_obj70, (void*)0, (void*)0, 0, 0, 0, 0); }
                                if(right_value174 && right_value174 != __result_obj__) { come_call_finalizer(sType_finalize,right_value174, (void*)0, (void*)0, 0, 1, 0, 0); }
                                come_value_128->var=var__126;
                                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_128));
                                add_come_last_code(info,"%s;\n",come_value_128->c_value);
                            }
                        }
                    }
                }
                if(_if_conditional211=self->alloc&&!left_type_127->mConstant&&!left_type_127->mStatic,                _if_conditional211) {
                    if(_if_conditional212=list$1sNodeph_length(left_type_127->mArrayNum)>0,                    _if_conditional212) {
                        add_come_code(info,"%s;\n",optional$2charphbool_expect(((struct optional$2charphbool*)(right_value175=make_define_var(left_type_127,var__126->mCValueName,(_Bool)0,info)))));
                        if(right_value175 && right_value175 != __result_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value175, (void*)0, (void*)0, 0, 1, 0, 0); }
                    }
                    else {
                        add_come_code_at_function_head(info,"%s;\n",optional$2charphbool_expect(((struct optional$2charphbool*)(right_value176=make_define_var(left_type_127,var__126->mCValueName,(_Bool)0,info)))));
                        if(right_value176 && right_value176 != __result_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value176, (void*)0, (void*)0, 0, 1, 0, 0); }
                    }
                }
                if(left_type_127) { come_call_finalizer(sType_finalize,left_type_127, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(come_value_128) { come_call_finalizer(CVALUE_finalize,come_value_128, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            if(right_value_80) { come_call_finalizer(CVALUE_finalize,right_value_80, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
    }
    __result93__ = (_Bool)1;
    if(array_initializer_37) { array_initializer_37 = come_decrement_ref_count(array_initializer_37, (void*)0, (void*)0, 0, 0, 0); }
    return __result93__;
    if(array_initializer_37) { array_initializer_37 = come_decrement_ref_count(array_initializer_37, (void*)0, (void*)0, 0, 0, 0); }
}

static struct optional$2sVarpbool* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
struct sVar* default_value_38;
unsigned int hash_39;
unsigned int it_40;
_Bool _while_condtional9;
_Bool _if_conditional116;
void* right_value61;
_Bool _if_conditional118;
void* right_value62;
void* right_value63;
struct optional$2sVarpbool* __result43__;
_Bool _if_conditional119;
_Bool _if_conditional120;
void* right_value64;
void* right_value65;
struct optional$2sVarpbool* __result44__;
void* right_value66;
void* right_value67;
struct optional$2sVarpbool* __result45__;
void* right_value68;
void* right_value69;
struct optional$2sVarpbool* __result46__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_38, 0, sizeof(struct sVar*));
memset(&hash_39, 0, sizeof(unsigned int));
memset(&it_40, 0, sizeof(unsigned int));
            memset(&default_value_38,0,sizeof(struct sVar*));
            hash_39=string_get_hash_key(((char*)key))%self->size;
            it_40=hash_39;
            while(_while_condtional9=(_Bool)1,            _while_condtional9) {
                if(_if_conditional116=self->item_existance[it_40],                _if_conditional116) {
                    if(_if_conditional118=optional$2boolbool_value(((struct optional$2boolbool*)(right_value61=string_equals(self->keys[it_40],key)))),                    (right_value61 && right_value61 != __result_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value61, (void*)0, (void*)0, 0, 1, 0, 0):0,
                    _if_conditional118) {
                        __result43__ = __result_obj__ = ((struct optional$2sVarpbool*)(right_value63=optional$2sVarpbool_initialize((struct optional$2sVarpbool*)come_increment_ref_count(((struct optional$2sVarpbool*)(right_value62=(struct optional$2sVarpbool*)come_calloc(1, sizeof(struct optional$2sVarpbool)*(1), "./comelang2.h", 1600)))),self->items[it_40],(_Bool)1)));
                        if(right_value62 && right_value62 != __result_obj__) { right_value62 = come_decrement_ref_count(right_value62, (void*)0, (void*)0, 1, 0, 0); }
                        return __result43__;
                    }
                    it_40++;
                    if(_if_conditional119=it_40>=self->size,                    _if_conditional119) {
                        it_40=0;
                    }
                    else {
                        if(_if_conditional120=it_40==hash_39,                        _if_conditional120) {
                            __result44__ = __result_obj__ = ((struct optional$2sVarpbool*)(right_value65=optional$2sVarpbool_initialize(((struct optional$2sVarpbool*)(right_value64=(struct optional$2sVarpbool*)come_calloc(1, sizeof(struct optional$2sVarpbool)*(1), "./comelang2.h", 1609))),default_value_38,(_Bool)0)));
                            if(right_value64 && right_value64 != __result_obj__) { right_value64 = come_decrement_ref_count(right_value64, (void*)0, (void*)0, 1, 0, 0); }
                            return __result44__;
                        }
                    }
                }
                else {
                    __result45__ = __result_obj__ = ((struct optional$2sVarpbool*)(right_value67=optional$2sVarpbool_initialize(((struct optional$2sVarpbool*)(right_value66=(struct optional$2sVarpbool*)come_calloc(1, sizeof(struct optional$2sVarpbool)*(1), "./comelang2.h", 1613))),default_value_38,(_Bool)0)));
                    if(right_value66 && right_value66 != __result_obj__) { right_value66 = come_decrement_ref_count(right_value66, (void*)0, (void*)0, 1, 0, 0); }
                    return __result45__;
                }
            }
            __result46__ = __result_obj__ = ((struct optional$2sVarpbool*)(right_value69=optional$2sVarpbool_initialize(((struct optional$2sVarpbool*)(right_value68=(struct optional$2sVarpbool*)come_calloc(1, sizeof(struct optional$2sVarpbool)*(1), "./comelang2.h", 1617))),default_value_38,(_Bool)0)));
            if(right_value68 && right_value68 != __result_obj__) { right_value68 = come_decrement_ref_count(right_value68, (void*)0, (void*)0, 1, 0, 0); }
            return __result46__;
}

static _Bool optional$2boolbool_value(struct optional$2boolbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional117;
_Bool default_value_41;
_Bool __result40__;
_Bool __result41__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_41, 0, sizeof(_Bool));
                        if(_if_conditional117=self==((void*)0),                        _if_conditional117) {
                            memset(&default_value_41,0,sizeof(_Bool));
                            __result40__ = default_value_41;
                            return __result40__;
                        }
                        else {
                            __result41__ = self->v1;
                            return __result41__;
                        }
}

static void optional$2boolboolp_finalize(struct optional$2boolbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct optional$2sVarpbool* optional$2sVarpbool_initialize(struct optional$2sVarpbool* self, struct sVar* v1, _Bool v2){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
struct optional$2sVarpbool* __result42__;
memset(&__result_obj__, 0, sizeof(void*));
                            self->v1=v1;
                            self->v2=v2;
                            __result42__ = __result_obj__ = self;
                            if(self) { come_call_finalizer(optional$2sVarpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                            return __result42__;
                            if(self) { come_call_finalizer(optional$2sVarpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2sVarpboolp_finalize(struct optional$2sVarpbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct sVar* optional$2sVarpbool_value(struct optional$2sVarpbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional121;
struct sVar* default_value_42;
struct sVar* __result47__;
struct sVar* __result48__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_42, 0, sizeof(struct sVar*));
            if(_if_conditional121=self==((void*)0),            _if_conditional121) {
                memset(&default_value_42,0,sizeof(struct sVar*));
                __result47__ = __result_obj__ = default_value_42;
                return __result47__;
            }
            else {
                __result48__ = __result_obj__ = self->v1;
                return __result48__;
            }
}

static char* optional$2charphbool_value(struct optional$2charphbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional124;
char* default_value_46;
char* __result51__;
char* __result52__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_46, 0, sizeof(char*));
            if(_if_conditional124=self==((void*)0),            _if_conditional124) {
                memset(&default_value_46,0,sizeof(char*));
                __result51__ = __result_obj__ = default_value_46;
                return __result51__;
            }
            else {
                __result52__ = __result_obj__ = self->v1;
                return __result52__;
            }
}

static void optional$2charphboolp_finalize(struct optional$2charphbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional125;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional125=self!=((void*)0)&&self->v1!=((void*)0),            _if_conditional125) {
                if(self->v1) { self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, 0); }
            }
}

static struct tuple3$3sTypephcharphsNodeph* list$1tuple3$3sTypephcharphsNodephph_begin(struct list$1tuple3$3sTypephcharphsNodephph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional130;
struct tuple3$3sTypephcharphsNodeph* result_50;
struct tuple3$3sTypephcharphsNodeph* __result55__;
_Bool _if_conditional131;
struct tuple3$3sTypephcharphsNodeph* __result56__;
struct tuple3$3sTypephcharphsNodeph* result_51;
struct tuple3$3sTypephcharphsNodeph* __result57__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_50, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
memset(&result_51, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
                    if(_if_conditional130=self==((void*)0),                    _if_conditional130) {
                        memset(&result_50,0,sizeof(struct tuple3$3sTypephcharphsNodeph*));
                        __result55__ = __result_obj__ = result_50;
                        return __result55__;
                    }
                    self->it=self->head;
                    if(_if_conditional131=self->it,                    _if_conditional131) {
                        __result56__ = __result_obj__ = self->it->item;
                        return __result56__;
                    }
                    memset(&result_51,0,sizeof(struct tuple3$3sTypephcharphsNodeph*));
                    __result57__ = __result_obj__ = result_51;
                    return __result57__;
}

static _Bool list$1tuple3$3sTypephcharphsNodephph_end(struct list$1tuple3$3sTypephcharphsNodephph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __result58__;
memset(&__result_obj__, 0, sizeof(void*));
                    __result58__ = self==((void*)0)||self->it==((void*)0);
                    return __result58__;
}

static struct tuple3$3sTypephcharphsNodeph* list$1tuple3$3sTypephcharphsNodephph_next(struct list$1tuple3$3sTypephcharphsNodephph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional132;
struct tuple3$3sTypephcharphsNodeph* result_53;
struct tuple3$3sTypephcharphsNodeph* __result59__;
_Bool _if_conditional133;
struct tuple3$3sTypephcharphsNodeph* __result60__;
struct tuple3$3sTypephcharphsNodeph* result_54;
struct tuple3$3sTypephcharphsNodeph* __result61__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_53, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
memset(&result_54, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
                    if(_if_conditional132=self==((void*)0)||self->it==((void*)0),                    _if_conditional132) {
                        memset(&result_53,0,sizeof(struct tuple3$3sTypephcharphsNodeph*));
                        __result59__ = __result_obj__ = result_53;
                        return __result59__;
                    }
                    self->it=self->it->next;
                    if(_if_conditional133=self->it,                    _if_conditional133) {
                        __result60__ = __result_obj__ = self->it->item;
                        return __result60__;
                    }
                    memset(&result_54,0,sizeof(struct tuple3$3sTypephcharphsNodeph*));
                    __result61__ = __result_obj__ = result_54;
                    return __result61__;
}

static void CVALUE_finalize(struct CVALUE* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional137;
_Bool _if_conditional138;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional137=self!=((void*)0)&&self->c_value!=((void*)0),                            _if_conditional137) {
                                if(self->c_value) { self->c_value = come_decrement_ref_count(self->c_value, (void*)0, (void*)0, 0, 0, 0); }
                            }
                            if(_if_conditional138=self!=((void*)0)&&self->type!=((void*)0),                            _if_conditional138) {
                                if(self->type) { come_call_finalizer(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
int __result64__;
memset(&__result_obj__, 0, sizeof(void*));
                            __result64__ = self->len;
                            return __result64__;
}

static char* optional$2charphbool_expect(struct optional$2charphbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional141;
char* __result65__;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional141=!self->v2,                                _if_conditional141) {
                                    puts("Exception: at");
                                    exception_stackframe();
                                    puts("abort.");
                                    exit(2);
                                }
                                __result65__ = __result_obj__ = self->v1;
                                return __result65__;
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional142;
struct sNode* result_62;
struct sNode* __result66__;
_Bool _if_conditional143;
struct sNode* __result67__;
struct sNode* result_63;
struct sNode* __result68__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_62, 0, sizeof(struct sNode*));
memset(&result_63, 0, sizeof(struct sNode*));
                                if(_if_conditional142=self==((void*)0),                                _if_conditional142) {
                                    memset(&result_62,0,sizeof(struct sNode*));
                                    __result66__ = __result_obj__ = result_62;
                                    return __result66__;
                                }
                                self->it=self->head;
                                if(_if_conditional143=self->it,                                _if_conditional143) {
                                    __result67__ = __result_obj__ = self->it->item;
                                    return __result67__;
                                }
                                memset(&result_63,0,sizeof(struct sNode*));
                                __result68__ = __result_obj__ = result_63;
                                return __result68__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __result69__;
memset(&__result_obj__, 0, sizeof(void*));
                                __result69__ = self==((void*)0)||self->it==((void*)0);
                                return __result69__;
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional144;
struct sNode* result_65;
struct sNode* __result70__;
_Bool _if_conditional145;
struct sNode* __result71__;
struct sNode* result_66;
struct sNode* __result72__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_65, 0, sizeof(struct sNode*));
memset(&result_66, 0, sizeof(struct sNode*));
                                if(_if_conditional144=self==((void*)0)||self->it==((void*)0),                                _if_conditional144) {
                                    memset(&result_65,0,sizeof(struct sNode*));
                                    __result70__ = __result_obj__ = result_65;
                                    return __result70__;
                                }
                                self->it=self->it->next;
                                if(_if_conditional145=self->it,                                _if_conditional145) {
                                    __result71__ = __result_obj__ = self->it->item;
                                    return __result71__;
                                }
                                memset(&result_66,0,sizeof(struct sNode*));
                                __result72__ = __result_obj__ = result_66;
                                return __result72__;
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional156;
void* right_value98;
struct list_item$1CVALUEph* litem_77;
struct CVALUE* __dec_obj46;
_Bool _if_conditional158;
void* right_value99;
struct list_item$1CVALUEph* litem_78;
struct CVALUE* __dec_obj47;
void* right_value100;
struct list_item$1CVALUEph* litem_79;
struct CVALUE* __dec_obj48;
struct list$1CVALUEph* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&litem_77, 0, sizeof(struct list_item$1CVALUEph*));
memset(&litem_78, 0, sizeof(struct list_item$1CVALUEph*));
memset(&litem_79, 0, sizeof(struct list_item$1CVALUEph*));
                    if(_if_conditional156=self->len==0,                    _if_conditional156) {
                        litem_77=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value98=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 277))));
                        if(right_value98 && right_value98 != __result_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value98, (void*)0, (void*)0, 0, 1, 0, 0); }
                        litem_77->prev=((void*)0);
                        litem_77->next=((void*)0);
                        __dec_obj46=litem_77->item;
                        litem_77->item=(struct CVALUE*)come_increment_ref_count(item);
                        if(__dec_obj46) { come_call_finalizer(CVALUE_finalize,__dec_obj46, (void*)0, (void*)0, 0, 0, 0, 0); }
                        self->tail=litem_77;
                        self->head=litem_77;
                    }
                    else {
                        if(_if_conditional158=self->len==1,                        _if_conditional158) {
                            litem_78=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value99=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 287))));
                            if(right_value99 && right_value99 != __result_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value99, (void*)0, (void*)0, 0, 1, 0, 0); }
                            litem_78->prev=self->head;
                            litem_78->next=((void*)0);
                            __dec_obj47=litem_78->item;
                            litem_78->item=(struct CVALUE*)come_increment_ref_count(item);
                            if(__dec_obj47) { come_call_finalizer(CVALUE_finalize,__dec_obj47, (void*)0, (void*)0, 0, 0, 0, 0); }
                            self->tail=litem_78;
                            self->head->next=litem_78;
                        }
                        else {
                            litem_79=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value100=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 297))));
                            if(right_value100 && right_value100 != __result_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value100, (void*)0, (void*)0, 0, 1, 0, 0); }
                            litem_79->prev=self->tail;
                            litem_79->next=((void*)0);
                            __dec_obj48=litem_79->item;
                            litem_79->item=(struct CVALUE*)come_increment_ref_count(item);
                            if(__dec_obj48) { come_call_finalizer(CVALUE_finalize,__dec_obj48, (void*)0, (void*)0, 0, 0, 0, 0); }
                            self->tail->next=litem_79;
                            self->tail=litem_79;
                        }
                    }
                    self->len++;
                    __result74__ = __result_obj__ = self;
                    if(item) { come_call_finalizer(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result74__;
                    if(item) { come_call_finalizer(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional157;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional157=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional157) {
                                if(self->item) { come_call_finalizer(CVALUE_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
}

static char* list$1charph_begin(struct list$1charph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional166;
char* result_85;
char* __result77__;
_Bool _if_conditional167;
char* __result78__;
char* result_86;
char* __result79__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_85, 0, sizeof(char*));
memset(&result_86, 0, sizeof(char*));
                        if(_if_conditional166=self==((void*)0),                        _if_conditional166) {
                            memset(&result_85,0,sizeof(char*));
                            __result77__ = __result_obj__ = result_85;
                            return __result77__;
                        }
                        self->it=self->head;
                        if(_if_conditional167=self->it,                        _if_conditional167) {
                            __result78__ = __result_obj__ = self->it->item;
                            return __result78__;
                        }
                        memset(&result_86,0,sizeof(char*));
                        __result79__ = __result_obj__ = result_86;
                        return __result79__;
}

static _Bool list$1charph_end(struct list$1charph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __result80__;
memset(&__result_obj__, 0, sizeof(void*));
                        __result80__ = self==((void*)0)||self->it==((void*)0);
                        return __result80__;
}

static char* list$1charph_next(struct list$1charph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional168;
char* result_88;
char* __result81__;
_Bool _if_conditional169;
char* __result82__;
char* result_89;
char* __result83__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_88, 0, sizeof(char*));
memset(&result_89, 0, sizeof(char*));
                        if(_if_conditional168=self==((void*)0)||self->it==((void*)0),                        _if_conditional168) {
                            memset(&result_88,0,sizeof(char*));
                            __result81__ = __result_obj__ = result_88;
                            return __result81__;
                        }
                        self->it=self->it->next;
                        if(_if_conditional169=self->it,                        _if_conditional169) {
                            __result82__ = __result_obj__ = self->it->item;
                            return __result82__;
                        }
                        memset(&result_89,0,sizeof(char*));
                        __result83__ = __result_obj__ = result_89;
                        return __result83__;
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
int __result84__;
memset(&__result_obj__, 0, sizeof(void*));
                            __result84__ = self->len;
                            return __result84__;
}

static struct optional$2sTypephbool* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional171;
struct list_item$1sTypeph* it_90;
int i_91;
_Bool _while_condtional10;
_Bool _if_conditional172;
void* right_value103;
void* right_value104;
struct optional$2sTypephbool* __result86__;
struct sType* default_value_92;
void* right_value105;
void* right_value106;
struct optional$2sTypephbool* __result87__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_90, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_91, 0, sizeof(int));
memset(&default_value_92, 0, sizeof(struct sType*));
                                if(_if_conditional171=position<0,                                _if_conditional171) {
                                    position+=self->len;
                                }
                                it_90=self->head;
                                i_91=0;
                                while(_while_condtional10=it_90!=((void*)0),                                _while_condtional10) {
                                    if(_if_conditional172=position==i_91,                                    _if_conditional172) {
                                        __result86__ = __result_obj__ = ((struct optional$2sTypephbool*)(right_value104=optional$2sTypephbool_initialize((struct optional$2sTypephbool*)come_increment_ref_count(((struct optional$2sTypephbool*)(right_value103=(struct optional$2sTypephbool*)come_calloc(1, sizeof(struct optional$2sTypephbool)*(1), "./comelang2.h", 747)))),(struct sType*)come_increment_ref_count(it_90->item),(_Bool)1)));
                                        if(right_value103 && right_value103 != __result_obj__) { right_value103 = come_decrement_ref_count(right_value103, (void*)0, (void*)0, 1, 0, 0); }
                                        return __result86__;
                                    }
                                    it_90=it_90->next;
                                    i_91++;
                                }
                                memset(&default_value_92,0,sizeof(struct sType*));
                                __result87__ = __result_obj__ = ((struct optional$2sTypephbool*)(right_value106=optional$2sTypephbool_initialize(((struct optional$2sTypephbool*)(right_value105=(struct optional$2sTypephbool*)come_calloc(1, sizeof(struct optional$2sTypephbool)*(1), "./comelang2.h", 755))),(struct sType*)come_increment_ref_count(default_value_92),(_Bool)0)));
                                if(default_value_92) { come_call_finalizer(sType_finalize,default_value_92, (void*)0, (void*)0, 0, 0, 0, 0); }
                                if(right_value105 && right_value105 != __result_obj__) { right_value105 = come_decrement_ref_count(right_value105, (void*)0, (void*)0, 1, 0, 0); }
                                return __result87__;
                                if(default_value_92) { come_call_finalizer(sType_finalize,default_value_92, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct optional$2sTypephbool* optional$2sTypephbool_initialize(struct optional$2sTypephbool* self, struct sType* v1, _Bool v2){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
struct sType* __dec_obj49;
struct optional$2sTypephbool* __result85__;
memset(&__result_obj__, 0, sizeof(void*));
                                            __dec_obj49=self->v1;
                                            self->v1=(struct sType*)come_increment_ref_count(v1);
                                            if(__dec_obj49) { come_call_finalizer(sType_finalize,__dec_obj49, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            self->v2=v2;
                                            __result85__ = __result_obj__ = self;
                                            if(self) { come_call_finalizer(optional$2sTypephboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                                            if(v1) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                                            return __result85__;
                                            if(self) { come_call_finalizer(optional$2sTypephboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                                            if(v1) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2sTypephboolp_finalize(struct optional$2sTypephbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional173;
memset(&__result_obj__, 0, sizeof(void*));
                                                if(_if_conditional173=self!=((void*)0)&&self->v1!=((void*)0),                                                _if_conditional173) {
                                                    if(self->v1) { come_call_finalizer(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                }
}

static struct sType* optional$2sTypephbool_value(struct optional$2sTypephbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional174;
struct sType* default_value_93;
struct sType* __result88__;
struct sType* __result89__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_93, 0, sizeof(struct sType*));
                                if(_if_conditional174=self==((void*)0),                                _if_conditional174) {
                                    memset(&default_value_93,0,sizeof(struct sType*));
                                    __result88__ = __result_obj__ = default_value_93;
                                    return __result88__;
                                }
                                else {
                                    __result89__ = __result_obj__ = self->v1;
                                    return __result89__;
                                }
}

int sStoreNode_sline(struct sStoreNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
int __result94__;
memset(&__result_obj__, 0, sizeof(void*));
    __result94__ = self->sline;
    return __result94__;
}

char* sStoreNode_sname(struct sStoreNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value177;
char* __result95__;
memset(&__result_obj__, 0, sizeof(void*));
    __result95__ = __result_obj__ = ((char*)(right_value177=__builtin_string(self->sname)));
    return __result95__;
}

struct sNode* store_var(char* name, struct list$1charph* multiple_assign, struct sType* type, _Bool alloc, struct sNode* right_node, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value178;
void* right_value179;
struct sNode* _inf_value1;
struct sStoreNode* _inf_obj_value1;
void* right_value188;
struct sNode* result_131;
struct sNode* __result98__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_131, 0, sizeof(struct sNode*));
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 590);
    _inf_obj_value1=come_increment_ref_count(((struct sStoreNode*)(right_value179=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value178=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 590)))),(char*)come_increment_ref_count(name),(struct list$1charph*)come_increment_ref_count(multiple_assign),((void*)0),(struct sType*)come_increment_ref_count(type),alloc,(struct sNode*)come_increment_ref_count(right_node),((void*)0),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sStoreNode_finalize;
    _inf_value1->clone=(void*)sStoreNode_clone;
    _inf_value1->compile=(void*)sStoreNode_compile;
    _inf_value1->sline=(void*)sStoreNode_sline;
    _inf_value1->sname=(void*)sStoreNode_sname;
    _inf_value1->terminated=(void*)sStoreNode_terminated;
    _inf_value1->kind=(void*)sStoreNode_kind;
    result_131=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value188=_inf_value1)));
    if(right_value178 && right_value178 != __result_obj__) { come_call_finalizer(sStoreNode_finalize,right_value178, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value179 && right_value179 != __result_obj__) { come_call_finalizer(sStoreNode_finalize,right_value179, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value188 && right_value188 != __result_obj__) { right_value188 = come_decrement_ref_count(right_value188, ((struct sNode*)right_value188)->finalize, ((struct sNode*)right_value188)->_protocol_obj, 1, 0, 0); } 
    __result98__ = __result_obj__ = result_131;
    if(name) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
    if(multiple_assign) { come_call_finalizer(list$1charphp_finalize,multiple_assign, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(type) { come_call_finalizer(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(right_node) { right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 1, 0); } 
    if(result_131) { result_131 = come_decrement_ref_count(result_131, ((struct sNode*)result_131)->finalize, ((struct sNode*)result_131)->_protocol_obj, 0, 1, 0); } 
    return __result98__;
    if(name) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
    if(multiple_assign) { come_call_finalizer(list$1charphp_finalize,multiple_assign, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(type) { come_call_finalizer(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(right_node) { right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 1, 0); } 
    if(result_131) { result_131 = come_decrement_ref_count(result_131, ((struct sNode*)result_131)->finalize, ((struct sNode*)result_131)->_protocol_obj, 0, 0, 0); } 
}

struct sLoadNode* sLoadNode_initialize(struct sLoadNode* self, char* name, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value189;
char* __dec_obj78;
void* right_value190;
char* __dec_obj79;
struct sLoadNode* __result99__;
memset(&__result_obj__, 0, sizeof(void*));
    __dec_obj78=self->name;
    self->name=(char*)come_increment_ref_count(((char*)(right_value189=__builtin_string(name))));
    if(__dec_obj78) { __dec_obj78 = come_decrement_ref_count(__dec_obj78, (void*)0, (void*)0, 0,0,0); }
    if(right_value189 && right_value189 != __result_obj__) { right_value189 = come_decrement_ref_count(right_value189, (void*)0, (void*)0, 1, 0, 0); }
    self->sline=info->sline;
    __dec_obj79=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value190=__builtin_string(info->sname))));
    if(__dec_obj79) { __dec_obj79 = come_decrement_ref_count(__dec_obj79, (void*)0, (void*)0, 0,0,0); }
    if(right_value190 && right_value190 != __result_obj__) { right_value190 = come_decrement_ref_count(right_value190, (void*)0, (void*)0, 1, 0, 0); }
    __result99__ = __result_obj__ = self;
    if(self) { come_call_finalizer(sLoadNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(name) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
    return __result99__;
    if(self) { come_call_finalizer(sLoadNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(name) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
}

_Bool sLoadNode_terminated(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __result100__;
memset(&__result_obj__, 0, sizeof(void*));
    __result100__ = (_Bool)0;
    return __result100__;
}

char* sLoadNode_kind(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value191;
char* __result101__;
memset(&__result_obj__, 0, sizeof(void*));
    __result101__ = __result_obj__ = ((char*)(right_value191=__builtin_string("sLoadNode")));
    return __result101__;
}

_Bool sLoadNode_compile(struct sLoadNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
struct sClass* current_stack_frame_struct_132;
void* right_value192;
_Bool _if_conditional232;
struct sVar* parent_var_133;
_Bool _if_conditional233;
_Bool _if_conditional234;
void* right_value193;
struct CVALUE* come_value_134;
struct sType* type_135;
void* right_value194;
char* __dec_obj80;
void* right_value195;
struct sType* __dec_obj81;
_Bool __result102__;
struct sVar* var__136;
_Bool _if_conditional235;
_Bool _if_conditional236;
void* right_value205;
struct sFun* fun_141;
_Bool _if_conditional242;
void* right_value206;
struct CVALUE* come_value_142;
void* right_value207;
char* __dec_obj82;
struct sType* __dec_obj83;
_Bool __result110__;
_Bool __result111__;
void* right_value208;
struct CVALUE* come_value_143;
void* right_value209;
char* __dec_obj84;
void* right_value210;
struct sType* __dec_obj85;
_Bool _if_conditional243;
void* right_value211;
struct sType* __dec_obj86;
_Bool __result113__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&current_stack_frame_struct_132, 0, sizeof(struct sClass*));
memset(&parent_var_133, 0, sizeof(struct sVar*));
memset(&come_value_134, 0, sizeof(struct CVALUE*));
memset(&type_135, 0, sizeof(struct sType*));
memset(&var__136, 0, sizeof(struct sVar*));
memset(&fun_141, 0, sizeof(struct sFun*));
memset(&come_value_142, 0, sizeof(struct CVALUE*));
memset(&come_value_143, 0, sizeof(struct CVALUE*));
    current_stack_frame_struct_132=info->current_stack_frame_struct;
    if(_if_conditional232=current_stack_frame_struct_132&&optional$2sVarpbool_value(((struct optional$2sVarpbool*)(right_value192=map$2charphsVarphp_operator_load_element(info->lv_table->mVars,self->name))))==((void*)0),    (right_value192 && right_value192 != __result_obj__) ? come_call_finalizer(optional$2sVarpboolp_finalize,right_value192, (void*)0, (void*)0, 0, 1, 0, 0):0,
    _if_conditional232) {
        parent_var_133=get_variable_from_table(info->lv_table->mParent,self->name);
        if(_if_conditional233=parent_var_133!=((void*)0),        _if_conditional233) {
            if(_if_conditional234=string_operator_not_equals(parent_var_133->mFunName,info->come_fun->mName),            _if_conditional234) {
                come_value_134=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value193=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 633))));
                if(right_value193 && right_value193 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value193, (void*)0, (void*)0, 0, 1, 0, 0); }
                type_135=parent_var_133->mType;
                __dec_obj80=come_value_134->c_value;
                come_value_134->c_value=(char*)come_increment_ref_count(((char*)(right_value194=xsprintf("(*(parent->%s))",parent_var_133->mCValueName))));
                if(__dec_obj80) { __dec_obj80 = come_decrement_ref_count(__dec_obj80, (void*)0, (void*)0, 0,0,0); }
                if(right_value194 && right_value194 != __result_obj__) { right_value194 = come_decrement_ref_count(right_value194, (void*)0, (void*)0, 1, 0, 0); }
                __dec_obj81=come_value_134->type;
                come_value_134->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value195=sType_clone(type_135))));
                if(__dec_obj81) { come_call_finalizer(sType_finalize,__dec_obj81, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(right_value195 && right_value195 != __result_obj__) { come_call_finalizer(sType_finalize,right_value195, (void*)0, (void*)0, 0, 1, 0, 0); }
                come_value_134->var=((void*)0);
                add_come_last_code(info,"%s;\n",come_value_134->c_value);
                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_134));
                __result102__ = (_Bool)1;
                if(come_value_134) { come_call_finalizer(CVALUE_finalize,come_value_134, (void*)0, (void*)0, 0, 0, 0, 0); }
                return __result102__;
                if(come_value_134) { come_call_finalizer(CVALUE_finalize,come_value_134, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
        }
    }
    var__136=get_variable_from_table(info->lv_table,self->name);
    if(_if_conditional235=var__136==((void*)0),    _if_conditional235) {
        var__136=get_variable_from_table(info->gv_table,self->name);
        if(_if_conditional236=var__136==((void*)0),        _if_conditional236) {
            fun_141=optional$2sFunpbool_value(((struct optional$2sFunpbool*)(right_value205=map$2charphsFunphp_operator_load_element(info->funcs,self->name))));
            if(right_value205 && right_value205 != __result_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value205, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(_if_conditional242=fun_141,            _if_conditional242) {
                come_value_142=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value206=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 660))));
                if(right_value206 && right_value206 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value206, (void*)0, (void*)0, 0, 1, 0, 0); }
                __dec_obj82=come_value_142->c_value;
                come_value_142->c_value=(char*)come_increment_ref_count(((char*)(right_value207=xsprintf("%s",fun_141->mName))));
                if(__dec_obj82) { __dec_obj82 = come_decrement_ref_count(__dec_obj82, (void*)0, (void*)0, 0,0,0); }
                if(right_value207 && right_value207 != __result_obj__) { right_value207 = come_decrement_ref_count(right_value207, (void*)0, (void*)0, 1, 0, 0); }
                __dec_obj83=come_value_142->type;
                come_value_142->type=(struct sType*)come_increment_ref_count(fun_141->mLambdaType);
                if(__dec_obj83) { come_call_finalizer(sType_finalize,__dec_obj83, (void*)0, (void*)0, 0, 0, 0, 0); }
                come_value_142->var=((void*)0);
                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_142));
                __result110__ = (_Bool)1;
                if(come_value_142) { come_call_finalizer(CVALUE_finalize,come_value_142, (void*)0, (void*)0, 0, 0, 0, 0); }
                return __result110__;
                if(come_value_142) { come_call_finalizer(CVALUE_finalize,come_value_142, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            else {
                err_msg(info,"var not found(%s)(Z) at loading variable\n",self->name);
                __result111__ = (_Bool)1;
                return __result111__;
            }
        }
    }
    come_value_143=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value208=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 677))));
    if(right_value208 && right_value208 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value208, (void*)0, (void*)0, 0, 1, 0, 0); }
    __dec_obj84=come_value_143->c_value;
    come_value_143->c_value=(char*)come_increment_ref_count(((char*)(right_value209=xsprintf("%s",var__136->mCValueName))));
    if(__dec_obj84) { __dec_obj84 = come_decrement_ref_count(__dec_obj84, (void*)0, (void*)0, 0,0,0); }
    if(right_value209 && right_value209 != __result_obj__) { right_value209 = come_decrement_ref_count(right_value209, (void*)0, (void*)0, 1, 0, 0); }
    __dec_obj85=come_value_143->type;
    come_value_143->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value210=sType_clone(var__136->mType))));
    if(__dec_obj85) { come_call_finalizer(sType_finalize,__dec_obj85, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value210 && right_value210 != __result_obj__) { come_call_finalizer(sType_finalize,right_value210, (void*)0, (void*)0, 0, 1, 0, 0); }
    come_value_143->var=var__136;
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_143));
    if(_if_conditional243=list$1sNodeph_length(come_value_143->type->mArrayNum)==1,    _if_conditional243) {
        __dec_obj86=come_value_143->type->mOriginalLoadVarType->v1;
        come_value_143->type->mOriginalLoadVarType->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value211=sType_clone(come_value_143->type))));
        if(__dec_obj86) { come_call_finalizer(sType_finalize,__dec_obj86, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value211 && right_value211 != __result_obj__) { come_call_finalizer(sType_finalize,right_value211, (void*)0, (void*)0, 0, 1, 0, 0); }
        list$1sNodeph_reset(come_value_143->type->mArrayNum);
        come_value_143->type->mPointerNum++;
        come_value_143->type->mOriginalTypeNamePointerNum=come_value_143->type->mPointerNum;
    }
    __result113__ = (_Bool)1;
    if(come_value_143) { come_call_finalizer(CVALUE_finalize,come_value_143, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result113__;
    if(come_value_143) { come_call_finalizer(CVALUE_finalize,come_value_143, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct optional$2sFunpbool* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
struct sFun* default_value_137;
unsigned int hash_138;
unsigned int it_139;
_Bool _while_condtional11;
_Bool _if_conditional237;
void* right_value196;
_Bool _if_conditional238;
void* right_value197;
void* right_value198;
struct optional$2sFunpbool* __result104__;
_Bool _if_conditional239;
_Bool _if_conditional240;
void* right_value199;
void* right_value200;
struct optional$2sFunpbool* __result105__;
void* right_value201;
void* right_value202;
struct optional$2sFunpbool* __result106__;
void* right_value203;
void* right_value204;
struct optional$2sFunpbool* __result107__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_137, 0, sizeof(struct sFun*));
memset(&hash_138, 0, sizeof(unsigned int));
memset(&it_139, 0, sizeof(unsigned int));
                memset(&default_value_137,0,sizeof(struct sFun*));
                hash_138=string_get_hash_key(((char*)key))%self->size;
                it_139=hash_138;
                while(_while_condtional11=(_Bool)1,                _while_condtional11) {
                    if(_if_conditional237=self->item_existance[it_139],                    _if_conditional237) {
                        if(_if_conditional238=optional$2boolbool_value(((struct optional$2boolbool*)(right_value196=string_equals(self->keys[it_139],key)))),                        (right_value196 && right_value196 != __result_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value196, (void*)0, (void*)0, 0, 1, 0, 0):0,
                        _if_conditional238) {
                            __result104__ = __result_obj__ = ((struct optional$2sFunpbool*)(right_value198=optional$2sFunpbool_initialize((struct optional$2sFunpbool*)come_increment_ref_count(((struct optional$2sFunpbool*)(right_value197=(struct optional$2sFunpbool*)come_calloc(1, sizeof(struct optional$2sFunpbool)*(1), "./comelang2.h", 1600)))),self->items[it_139],(_Bool)1)));
                            if(right_value197 && right_value197 != __result_obj__) { right_value197 = come_decrement_ref_count(right_value197, (void*)0, (void*)0, 1, 0, 0); }
                            return __result104__;
                        }
                        it_139++;
                        if(_if_conditional239=it_139>=self->size,                        _if_conditional239) {
                            it_139=0;
                        }
                        else {
                            if(_if_conditional240=it_139==hash_138,                            _if_conditional240) {
                                __result105__ = __result_obj__ = ((struct optional$2sFunpbool*)(right_value200=optional$2sFunpbool_initialize(((struct optional$2sFunpbool*)(right_value199=(struct optional$2sFunpbool*)come_calloc(1, sizeof(struct optional$2sFunpbool)*(1), "./comelang2.h", 1609))),default_value_137,(_Bool)0)));
                                if(right_value199 && right_value199 != __result_obj__) { right_value199 = come_decrement_ref_count(right_value199, (void*)0, (void*)0, 1, 0, 0); }
                                return __result105__;
                            }
                        }
                    }
                    else {
                        __result106__ = __result_obj__ = ((struct optional$2sFunpbool*)(right_value202=optional$2sFunpbool_initialize(((struct optional$2sFunpbool*)(right_value201=(struct optional$2sFunpbool*)come_calloc(1, sizeof(struct optional$2sFunpbool)*(1), "./comelang2.h", 1613))),default_value_137,(_Bool)0)));
                        if(right_value201 && right_value201 != __result_obj__) { right_value201 = come_decrement_ref_count(right_value201, (void*)0, (void*)0, 1, 0, 0); }
                        return __result106__;
                    }
                }
                __result107__ = __result_obj__ = ((struct optional$2sFunpbool*)(right_value204=optional$2sFunpbool_initialize(((struct optional$2sFunpbool*)(right_value203=(struct optional$2sFunpbool*)come_calloc(1, sizeof(struct optional$2sFunpbool)*(1), "./comelang2.h", 1617))),default_value_137,(_Bool)0)));
                if(right_value203 && right_value203 != __result_obj__) { right_value203 = come_decrement_ref_count(right_value203, (void*)0, (void*)0, 1, 0, 0); }
                return __result107__;
}

static struct optional$2sFunpbool* optional$2sFunpbool_initialize(struct optional$2sFunpbool* self, struct sFun* v1, _Bool v2){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
struct optional$2sFunpbool* __result103__;
memset(&__result_obj__, 0, sizeof(void*));
                                self->v1=v1;
                                self->v2=v2;
                                __result103__ = __result_obj__ = self;
                                if(self) { come_call_finalizer(optional$2sFunpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                                return __result103__;
                                if(self) { come_call_finalizer(optional$2sFunpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2sFunpboolp_finalize(struct optional$2sFunpbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct sFun* optional$2sFunpbool_value(struct optional$2sFunpbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional241;
struct sFun* default_value_140;
struct sFun* __result108__;
struct sFun* __result109__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_140, 0, sizeof(struct sFun*));
                if(_if_conditional241=self==((void*)0),                _if_conditional241) {
                    memset(&default_value_140,0,sizeof(struct sFun*));
                    __result108__ = __result_obj__ = default_value_140;
                    return __result108__;
                }
                else {
                    __result109__ = __result_obj__ = self->v1;
                    return __result109__;
                }
}

static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
struct list_item$1sNodeph* it_144;
_Bool _while_condtional12;
struct list_item$1sNodeph* prev_it_145;
struct list$1sNodeph* __result112__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_144, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_145, 0, sizeof(struct list_item$1sNodeph*));
            it_144=self->head;
            while(_while_condtional12=it_144!=((void*)0),            _while_condtional12) {
                prev_it_145=it_144;
                it_144=it_144->next;
                if(prev_it_145) { come_call_finalizer(list_item$1sNodephp_finalize,prev_it_145, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            __result112__ = __result_obj__ = self;
            return __result112__;
}

int sLoadNode_sline(struct sLoadNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
int __result114__;
memset(&__result_obj__, 0, sizeof(void*));
    __result114__ = self->sline;
    return __result114__;
}

char* sLoadNode_sname(struct sLoadNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value212;
char* __result115__;
memset(&__result_obj__, 0, sizeof(void*));
    __result115__ = __result_obj__ = ((char*)(right_value212=__builtin_string(self->sname)));
    return __result115__;
}

struct sNode* load_var(char* name, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value213;
void* right_value214;
struct sNode* _inf_value2;
struct sLoadNode* _inf_obj_value2;
void* right_value218;
struct sNode* __result118__;
memset(&__result_obj__, 0, sizeof(void*));
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 707);
    _inf_obj_value2=come_increment_ref_count(((struct sLoadNode*)(right_value214=sLoadNode_initialize((struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(right_value213=(struct sLoadNode*)come_calloc(1, sizeof(struct sLoadNode)*(1), "07var.c", 707)))),(char*)come_increment_ref_count(name),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sLoadNode_finalize;
    _inf_value2->clone=(void*)sLoadNode_clone;
    _inf_value2->compile=(void*)sLoadNode_compile;
    _inf_value2->sline=(void*)sLoadNode_sline;
    _inf_value2->sname=(void*)sLoadNode_sname;
    _inf_value2->terminated=(void*)sLoadNode_terminated;
    _inf_value2->kind=(void*)sLoadNode_kind;
    __result118__ = __result_obj__ = ((struct sNode*)(right_value218=_inf_value2));
    if(name) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value213 && right_value213 != __result_obj__) { come_call_finalizer(sLoadNode_finalize,right_value213, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value214 && right_value214 != __result_obj__) { come_call_finalizer(sLoadNode_finalize,right_value214, (void*)0, (void*)0, 0, 1, 0, 0); }
    return __result118__;
    if(name) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
}

struct sFunLoadNode* sFunLoadNode_initialize(struct sFunLoadNode* self, char* name, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value219;
char* __dec_obj89;
void* right_value220;
char* __dec_obj90;
struct sFunLoadNode* __result119__;
memset(&__result_obj__, 0, sizeof(void*));
    __dec_obj89=self->name;
    self->name=(char*)come_increment_ref_count(((char*)(right_value219=__builtin_string(name))));
    if(__dec_obj89) { __dec_obj89 = come_decrement_ref_count(__dec_obj89, (void*)0, (void*)0, 0,0,0); }
    if(right_value219 && right_value219 != __result_obj__) { right_value219 = come_decrement_ref_count(right_value219, (void*)0, (void*)0, 1, 0, 0); }
    self->sline=info->sline;
    __dec_obj90=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value220=__builtin_string(info->sname))));
    if(__dec_obj90) { __dec_obj90 = come_decrement_ref_count(__dec_obj90, (void*)0, (void*)0, 0,0,0); }
    if(right_value220 && right_value220 != __result_obj__) { right_value220 = come_decrement_ref_count(right_value220, (void*)0, (void*)0, 1, 0, 0); }
    __result119__ = __result_obj__ = self;
    if(self) { come_call_finalizer(sFunLoadNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(name) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
    return __result119__;
    if(self) { come_call_finalizer(sFunLoadNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(name) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
}

static void sFunLoadNode_finalize(struct sFunLoadNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional250;
_Bool _if_conditional251;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional250=self!=((void*)0)&&self->name!=((void*)0),        _if_conditional250) {
            if(self->name) { self->name = come_decrement_ref_count(self->name, (void*)0, (void*)0, 0, 0, 0); }
        }
        if(_if_conditional251=self!=((void*)0)&&self->sname!=((void*)0),        _if_conditional251) {
            if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
        }
}

_Bool sFunLoadNode_terminated(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __result120__;
memset(&__result_obj__, 0, sizeof(void*));
    __result120__ = (_Bool)0;
    return __result120__;
}

char* sFunLoadNode_kind(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value221;
char* __result121__;
memset(&__result_obj__, 0, sizeof(void*));
    __result121__ = __result_obj__ = ((char*)(right_value221=__builtin_string("sFunLoadNode")));
    return __result121__;
}

_Bool sFunLoadNode_compile(struct sFunLoadNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value222;
struct sFun* fun_147;
_Bool _if_conditional252;
_Bool __result122__;
void* right_value223;
struct CVALUE* come_value_148;
void* right_value224;
char* __dec_obj91;
struct sType* __dec_obj92;
_Bool __result123__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&fun_147, 0, sizeof(struct sFun*));
memset(&come_value_148, 0, sizeof(struct CVALUE*));
    fun_147=optional$2sFunpbool_value(((struct optional$2sFunpbool*)(right_value222=map$2charphsFunphp_operator_load_element(info->funcs,self->name))));
    if(right_value222 && right_value222 != __result_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value222, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(_if_conditional252=fun_147==((void*)0),    _if_conditional252) {
        err_msg(info,"fun not found(%s) at loading variable\n",self->name);
        __result122__ = (_Bool)0;
        return __result122__;
    }
    else {
        come_value_148=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value223=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 746))));
        if(right_value223 && right_value223 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value223, (void*)0, (void*)0, 0, 1, 0, 0); }
        __dec_obj91=come_value_148->c_value;
        come_value_148->c_value=(char*)come_increment_ref_count(((char*)(right_value224=xsprintf("%s",fun_147->mName))));
        if(__dec_obj91) { __dec_obj91 = come_decrement_ref_count(__dec_obj91, (void*)0, (void*)0, 0,0,0); }
        if(right_value224 && right_value224 != __result_obj__) { right_value224 = come_decrement_ref_count(right_value224, (void*)0, (void*)0, 1, 0, 0); }
        __dec_obj92=come_value_148->type;
        come_value_148->type=(struct sType*)come_increment_ref_count(fun_147->mLambdaType);
        if(__dec_obj92) { come_call_finalizer(sType_finalize,__dec_obj92, (void*)0, (void*)0, 0, 0, 0, 0); }
        come_value_148->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_148));
        if(come_value_148) { come_call_finalizer(CVALUE_finalize,come_value_148, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __result123__ = (_Bool)1;
    return __result123__;
}

int sFunLoadNode_sline(struct sFunLoadNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
int __result124__;
memset(&__result_obj__, 0, sizeof(void*));
    __result124__ = self->sline;
    return __result124__;
}

char* sFunLoadNode_sname(struct sFunLoadNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value225;
char* __result125__;
memset(&__result_obj__, 0, sizeof(void*));
    __result125__ = __result_obj__ = ((char*)(right_value225=__builtin_string(self->sname)));
    return __result125__;
}

void add_variable_to_table(char* name, struct sType* type, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value226;
struct sVar* self_149;
void* right_value227;
char* __dec_obj93;
void* right_value228;
struct sType* __dec_obj94;
_Bool _if_conditional257;
void* right_value229;
char* __dec_obj95;
static int n_150=0;
void* right_value230;
char* __dec_obj96;
_Bool _if_conditional258;
void* right_value231;
char* __dec_obj97;
char* __dec_obj98;
void* right_value242;
memset(&__result_obj__, 0, sizeof(void*));
memset(&self_149, 0, sizeof(struct sVar*));
    self_149=(struct sVar*)come_increment_ref_count(((struct sVar*)(right_value226=(struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "07var.c", 771))));
    if(right_value226 && right_value226 != __result_obj__) { come_call_finalizer(sVar_finalize,right_value226, (void*)0, (void*)0, 0, 1, 0, 0); }
    __dec_obj93=self_149->mName;
    self_149->mName=(char*)come_increment_ref_count(((char*)(right_value227=__builtin_string(name))));
    if(__dec_obj93) { __dec_obj93 = come_decrement_ref_count(__dec_obj93, (void*)0, (void*)0, 0,0,0); }
    if(right_value227 && right_value227 != __result_obj__) { right_value227 = come_decrement_ref_count(right_value227, (void*)0, (void*)0, 1, 0, 0); }
    __dec_obj94=self_149->mType;
    self_149->mType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value228=sType_clone(type))));
    if(__dec_obj94) { come_call_finalizer(sType_finalize,__dec_obj94, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value228 && right_value228 != __result_obj__) { come_call_finalizer(sType_finalize,right_value228, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(_if_conditional257=type->mFunctionParam,    _if_conditional257) {
        __dec_obj95=self_149->mCValueName;
        self_149->mCValueName=(char*)come_increment_ref_count(((char*)(right_value229=__builtin_string(name))));
        if(__dec_obj95) { __dec_obj95 = come_decrement_ref_count(__dec_obj95, (void*)0, (void*)0, 0,0,0); }
        if(right_value229 && right_value229 != __result_obj__) { right_value229 = come_decrement_ref_count(right_value229, (void*)0, (void*)0, 1, 0, 0); }
    }
    else {
        __dec_obj96=self_149->mCValueName;
        self_149->mCValueName=(char*)come_increment_ref_count(((char*)(right_value230=xsprintf("%s_%d",name,n_150++))));
        if(__dec_obj96) { __dec_obj96 = come_decrement_ref_count(__dec_obj96, (void*)0, (void*)0, 0,0,0); }
        if(right_value230 && right_value230 != __result_obj__) { right_value230 = come_decrement_ref_count(right_value230, (void*)0, (void*)0, 1, 0, 0); }
    }
    self_149->mBlockLevel=info->block_level;
    self_149->mAllocaValue=(_Bool)0;
    self_149->mFunctionParam=(_Bool)0;
    self_149->mNoFree=(_Bool)0;
    if(_if_conditional258=info->come_fun,    _if_conditional258) {
        __dec_obj97=self_149->mFunName;
        self_149->mFunName=(char*)come_increment_ref_count(((char*)(right_value231=string_clone(info->come_fun->mName))));
        if(__dec_obj97) { __dec_obj97 = come_decrement_ref_count(__dec_obj97, (void*)0, (void*)0, 0,0,0); }
        if(right_value231 && right_value231 != __result_obj__) { right_value231 = come_decrement_ref_count(right_value231, (void*)0, (void*)0, 1, 0, 0); }
    }
    else {
        __dec_obj98=self_149->mFunName;
        self_149->mFunName=((void*)0);
        if(__dec_obj98) { __dec_obj98 = come_decrement_ref_count(__dec_obj98, (void*)0, (void*)0, 0,0,0); }
    }
    map$2charphsVarph_insert(info->lv_table->mVars,(char*)come_increment_ref_count(((char*)(right_value242=__builtin_string(name)))),(struct sVar*)come_increment_ref_count(self_149));
    if(right_value242 && right_value242 != __result_obj__) { right_value242 = come_decrement_ref_count(right_value242, (void*)0, (void*)0, 1, 0, 0); }
    if(type) { come_call_finalizer(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(self_149) { come_call_finalizer(sVar_finalize,self_149, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sVar_finalize(struct sVar* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional253;
_Bool _if_conditional254;
_Bool _if_conditional255;
_Bool _if_conditional256;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional253=self!=((void*)0)&&self->mName!=((void*)0),        _if_conditional253) {
            if(self->mName) { self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, 0); }
        }
        if(_if_conditional254=self!=((void*)0)&&self->mCValueName!=((void*)0),        _if_conditional254) {
            if(self->mCValueName) { self->mCValueName = come_decrement_ref_count(self->mCValueName, (void*)0, (void*)0, 0, 0, 0); }
        }
        if(_if_conditional255=self!=((void*)0)&&self->mType!=((void*)0),        _if_conditional255) {
            if(self->mType) { come_call_finalizer(sType_finalize,self->mType, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(_if_conditional256=self!=((void*)0)&&self->mFunName!=((void*)0),        _if_conditional256) {
            if(self->mFunName) { self->mFunName = come_decrement_ref_count(self->mFunName, (void*)0, (void*)0, 0, 0, 0); }
        }
}

static struct map$2charphsVarph* map$2charphsVarph_insert(struct map$2charphsVarph* self, char* key, struct sVar* item){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional259;
unsigned int hash_168;
unsigned int it_169;
_Bool _while_condtional15;
_Bool _if_conditional271;
void* right_value236;
_Bool _if_conditional272;
_Bool _if_conditional273;
_Bool _if_conditional293;
_Bool _if_conditional294;
_Bool _if_conditional295;
_Bool _if_conditional296;
_Bool _if_conditional297;
_Bool same_key_exist_186;
char* it2_189;
_Bool _for_condtionalA11;
void* right_value238;
_Bool _if_conditional302;
_Bool _if_conditional303;
struct map$2charphsVarph* __result149__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_168, 0, sizeof(unsigned int));
memset(&it_169, 0, sizeof(unsigned int));
memset(&same_key_exist_186, 0, sizeof(_Bool));
memset(&it2_189, 0, sizeof(char*));
        if(_if_conditional259=self->len*10>=self->size,        _if_conditional259) {
            map$2charphsVarph_rehash(self);
        }
        hash_168=string_get_hash_key(key)%self->size;
        it_169=hash_168;
        while(_while_condtional15=(_Bool)1,        _while_condtional15) {
            if(_if_conditional271=self->item_existance[it_169],            _if_conditional271) {
                if(_if_conditional272=optional$2boolbool_value(((struct optional$2boolbool*)(right_value236=string_equals(self->keys[it_169],key)))),                (right_value236 && right_value236 != __result_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value236, (void*)0, (void*)0, 0, 1, 0, 0):0,
                _if_conditional272) {
                    if(_if_conditional273=1,                    _if_conditional273) {
                        list$1charp_remove(self->key_list,self->keys[it_169]);
                        if(self->keys[it_169]) { self->keys[it_169] = come_decrement_ref_count(self->keys[it_169], (void*)0, (void*)0, 0, 0, 0); }
                        self->keys[it_169]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        list$1charp_remove(self->key_list,self->keys[it_169]);
                        self->keys[it_169]=key;
                    }
                    if(_if_conditional293=1,                    _if_conditional293) {
                        if(self->items[it_169]) { come_call_finalizer(sVar_finalize,self->items[it_169], (void*)0, (void*)0, 0, 0, 0, 0); }
                        self->items[it_169]=(struct sVar*)come_increment_ref_count(item);
                    }
                    else {
                        self->items[it_169]=item;
                    }
                    break;
                }
                it_169++;
                if(_if_conditional294=it_169>=self->size,                _if_conditional294) {
                    it_169=0;
                }
                else {
                    if(_if_conditional295=it_169==hash_168,                    _if_conditional295) {
                        printf("unexpected error in map.insert\n");
                        stackframe();
                        exit(2);
                    }
                }
            }
            else {
                self->item_existance[it_169]=(_Bool)1;
                if(_if_conditional296=1,                _if_conditional296) {
                    self->keys[it_169]=(char*)come_increment_ref_count(key);
                }
                else {
                    self->keys[it_169]=key;
                }
                if(_if_conditional297=1,                _if_conditional297) {
                    self->items[it_169]=(struct sVar*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_169]=item;
                }
                self->len++;
                break;
            }
        }
        same_key_exist_186=(_Bool)0;
        for(
        it2_189=list$1charp_begin(self->key_list) ,        0;        _for_condtionalA11=        !list$1charp_end(self->key_list) ,        _for_condtionalA11;        it2_189=list$1charp_next(self->key_list) ,        0        ){
            if(_if_conditional302=optional$2boolbool_value(((struct optional$2boolbool*)(right_value238=string_equals(it2_189,key)))),            (right_value238 && right_value238 != __result_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value238, (void*)0, (void*)0, 0, 1, 0, 0):0,
            _if_conditional302) {
                same_key_exist_186=(_Bool)1;
            }
        }
        if(_if_conditional303=!same_key_exist_186,        _if_conditional303) {
            list$1charp_push_back(self->key_list,key);
        }
        __result149__ = __result_obj__ = self;
        if(key) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
        if(item) { come_call_finalizer(sVar_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result149__;
        if(key) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
        if(item) { come_call_finalizer(sVar_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void map$2charphsVarph_rehash(struct map$2charphsVarph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
int size_151;
void* right_value232;
char** keys_152;
void* right_value233;
struct sVar** items_153;
void* right_value234;
_Bool* item_existance_154;
int len_155;
char* it_158;
_Bool _for_condtionalA10;
struct sVar* default_value_161;
struct sVar* it2_164;
unsigned int hash_165;
int n_166;
_Bool _while_condtional14;
_Bool _if_conditional268;
_Bool _if_conditional269;
_Bool _if_conditional270;
struct sVar* default_value_167;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_151, 0, sizeof(int));
memset(&keys_152, 0, sizeof(char**));
memset(&items_153, 0, sizeof(struct sVar**));
memset(&item_existance_154, 0, sizeof(_Bool*));
memset(&len_155, 0, sizeof(int));
memset(&it_158, 0, sizeof(char*));
memset(&default_value_161, 0, sizeof(struct sVar*));
memset(&it2_164, 0, sizeof(struct sVar*));
memset(&hash_165, 0, sizeof(unsigned int));
memset(&n_166, 0, sizeof(int));
memset(&default_value_167, 0, sizeof(struct sVar*));
                size_151=self->size*10;
                keys_152=(char**)come_increment_ref_count(((char**)(right_value232=(char**)come_calloc(1, sizeof(char*)*(1*(size_151)), "./comelang2.h", 1375))));
                if(right_value232 && right_value232 != __result_obj__) { right_value232 = come_decrement_ref_count(right_value232, (void*)0, (void*)0, 1, 0, 0); }
                items_153=(struct sVar**)come_increment_ref_count(((struct sVar**)(right_value233=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_151)), "./comelang2.h", 1376))));
                if(right_value233 && right_value233 != __result_obj__) { come_call_finalizer(sVar_finalize,right_value233, (void*)0, (void*)0, 0, 1, 0, 0); }
                item_existance_154=(_Bool*)come_increment_ref_count(((_Bool*)(right_value234=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_151)), "./comelang2.h", 1377))));
                if(right_value234 && right_value234 != __result_obj__) { right_value234 = come_decrement_ref_count(right_value234, (void*)0, (void*)0, 1, 0, 0); }
                len_155=0;
                for(
                it_158=map$2charphsVarph_begin(self) ,                0;                _for_condtionalA10=                !map$2charphsVarph_end(self) ,                _for_condtionalA10;                it_158=map$2charphsVarph_next(self) ,                0                ){
                    memset(&default_value_161,0,sizeof(struct sVar*));
                    it2_164=map$2charphsVarph_at(self,it_158,default_value_161);
                    hash_165=string_get_hash_key(it_158)%size_151;
                    n_166=hash_165;
                    while(_while_condtional14=(_Bool)1,                    _while_condtional14) {
                        if(_if_conditional268=item_existance_154[n_166],                        _if_conditional268) {
                            n_166++;
                            if(_if_conditional269=n_166>=size_151,                            _if_conditional269) {
                                n_166=0;
                            }
                            else {
                                if(_if_conditional270=n_166==hash_165,                                _if_conditional270) {
                                    printf("unexpected error in map.rehash(1)\n");
                                    stackframe();
                                    exit(2);
                                }
                            }
                        }
                        else {
                            item_existance_154[n_166]=(_Bool)1;
                            keys_152[n_166]=it_158;
                            items_153[n_166]=map$2charphsVarph_at(self,it_158,default_value_167);
                            len_155++;
                            break;
                        }
                    }
                }
                come_free_object((char*)self->items);
                if(self->item_existance) { self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, 0); }
                come_free_object((char*)self->keys);
                self->keys=keys_152;
                self->items=items_153;
                self->item_existance=item_existance_154;
                self->size=size_151;
                self->len=len_155;
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional260;
char* result_156;
char* __result126__;
_Bool _if_conditional261;
char* __result127__;
char* result_157;
char* __result128__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_156, 0, sizeof(char*));
memset(&result_157, 0, sizeof(char*));
                    if(_if_conditional260=self==((void*)0),                    _if_conditional260) {
                        memset(&result_156,0,sizeof(char*));
                        __result126__ = __result_obj__ = result_156;
                        return __result126__;
                    }
                    self->key_list->it=self->key_list->head;
                    if(_if_conditional261=self->key_list->it,                    _if_conditional261) {
                        __result127__ = __result_obj__ = self->key_list->it->item;
                        return __result127__;
                    }
                    memset(&result_157,0,sizeof(char*));
                    __result128__ = __result_obj__ = result_157;
                    return __result128__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __result129__;
memset(&__result_obj__, 0, sizeof(void*));
                    __result129__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                    return __result129__;
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional262;
char* result_159;
char* __result130__;
_Bool _if_conditional263;
char* __result131__;
char* result_160;
char* __result132__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_159, 0, sizeof(char*));
memset(&result_160, 0, sizeof(char*));
                    if(_if_conditional262=self==((void*)0)||self->key_list->it==((void*)0),                    _if_conditional262) {
                        memset(&result_159,0,sizeof(char*));
                        __result130__ = __result_obj__ = result_159;
                        return __result130__;
                    }
                    self->key_list->it=self->key_list->it->next;
                    if(_if_conditional263=self->key_list->it,                    _if_conditional263) {
                        __result131__ = __result_obj__ = self->key_list->it->item;
                        return __result131__;
                    }
                    memset(&result_160,0,sizeof(char*));
                    __result132__ = __result_obj__ = result_160;
                    return __result132__;
}

static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
unsigned int hash_162;
unsigned int it_163;
_Bool _while_condtional13;
_Bool _if_conditional264;
void* right_value235;
_Bool _if_conditional265;
struct sVar* __result133__;
_Bool _if_conditional266;
_Bool _if_conditional267;
struct sVar* __result134__;
struct sVar* __result135__;
struct sVar* __result136__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_162, 0, sizeof(unsigned int));
memset(&it_163, 0, sizeof(unsigned int));
                        hash_162=string_get_hash_key(((char*)key))%self->size;
                        it_163=hash_162;
                        while(_while_condtional13=(_Bool)1,                        _while_condtional13) {
                            if(_if_conditional264=self->item_existance[it_163],                            _if_conditional264) {
                                if(_if_conditional265=optional$2boolbool_value(((struct optional$2boolbool*)(right_value235=string_equals(self->keys[it_163],key)))),                                (right_value235 && right_value235 != __result_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value235, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                _if_conditional265) {
                                    __result133__ = __result_obj__ = self->items[it_163];
                                    return __result133__;
                                }
                                it_163++;
                                if(_if_conditional266=it_163>=self->size,                                _if_conditional266) {
                                    it_163=0;
                                }
                                else {
                                    if(_if_conditional267=it_163==hash_162,                                    _if_conditional267) {
                                        __result134__ = __result_obj__ = default_value;
                                        return __result134__;
                                    }
                                }
                            }
                            else {
                                __result135__ = __result_obj__ = default_value;
                                return __result135__;
                            }
                        }
                        __result136__ = __result_obj__ = default_value;
                        return __result136__;
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
int it2_170;
struct list_item$1charp* it_171;
_Bool _while_condtional16;
void* right_value237;
_Bool _if_conditional274;
struct list$1charp* __result140__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it2_170, 0, sizeof(int));
memset(&it_171, 0, sizeof(struct list_item$1charp*));
                            it2_170=0;
                            it_171=self->head;
                            while(_while_condtional16=it_171!=((void*)0),                            _while_condtional16) {
                                if(_if_conditional274=optional$2boolbool_value(((struct optional$2boolbool*)(right_value237=string_equals(it_171->item,item)))),                                (right_value237 && right_value237 != __result_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value237, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                _if_conditional274) {
                                    list$1charp_delete(self,it2_170,it2_170+1);
                                    break;
                                }
                                it2_170++;
                                it_171=it_171->next;
                            }
                            __result140__ = __result_obj__ = self;
                            return __result140__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional275;
_Bool _if_conditional276;
_Bool _if_conditional277;
int tmp_172;
_Bool _if_conditional278;
_Bool _if_conditional279;
_Bool _if_conditional280;
struct list$1charp* __result137__;
_Bool _if_conditional281;
_Bool _if_conditional282;
struct list_item$1charp* it_175;
int i_176;
_Bool _while_condtional18;
_Bool _if_conditional283;
struct list_item$1charp* prev_it_177;
_Bool _if_conditional284;
_Bool _if_conditional285;
struct list_item$1charp* it_178;
int i_179;
_Bool _while_condtional19;
_Bool _if_conditional286;
_Bool _if_conditional287;
struct list_item$1charp* prev_it_180;
struct list_item$1charp* it_181;
struct list_item$1charp* head_prev_it_182;
struct list_item$1charp* tail_it_183;
int i_184;
_Bool _while_condtional20;
_Bool _if_conditional288;
_Bool _if_conditional289;
_Bool _if_conditional290;
struct list_item$1charp* prev_it_185;
_Bool _if_conditional291;
_Bool _if_conditional292;
struct list$1charp* __result139__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&tmp_172, 0, sizeof(int));
memset(&it_175, 0, sizeof(struct list_item$1charp*));
memset(&i_176, 0, sizeof(int));
memset(&prev_it_177, 0, sizeof(struct list_item$1charp*));
memset(&it_178, 0, sizeof(struct list_item$1charp*));
memset(&i_179, 0, sizeof(int));
memset(&prev_it_180, 0, sizeof(struct list_item$1charp*));
memset(&it_181, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_182, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_183, 0, sizeof(struct list_item$1charp*));
memset(&i_184, 0, sizeof(int));
memset(&prev_it_185, 0, sizeof(struct list_item$1charp*));
                                        if(_if_conditional275=head<0,                                        _if_conditional275) {
                                            head+=self->len;
                                        }
                                        if(_if_conditional276=tail<0,                                        _if_conditional276) {
                                            tail+=self->len+1;
                                        }
                                        if(_if_conditional277=head>tail,                                        _if_conditional277) {
                                            tmp_172=tail;
                                            tail=head;
                                            head=tmp_172;
                                        }
                                        if(_if_conditional278=head<0,                                        _if_conditional278) {
                                            head=0;
                                        }
                                        if(_if_conditional279=tail>self->len,                                        _if_conditional279) {
                                            tail=self->len;
                                        }
                                        if(_if_conditional280=head==tail,                                        _if_conditional280) {
                                            __result137__ = __result_obj__ = self;
                                            return __result137__;
                                        }
                                        if(_if_conditional281=head==0&&tail==self->len,                                        _if_conditional281) {
                                            list$1charp_reset(self);
                                        }
                                        else {
                                            if(_if_conditional282=head==0,                                            _if_conditional282) {
                                                it_175=self->head;
                                                i_176=0;
                                                while(_while_condtional18=it_175!=((void*)0),                                                _while_condtional18) {
                                                    if(_if_conditional283=i_176<tail,                                                    _if_conditional283) {
                                                        prev_it_177=it_175;
                                                        it_175=it_175->next;
                                                        i_176++;
                                                        if(prev_it_177) { come_call_finalizer(list_item$1charpp_finalize,prev_it_177, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                        self->len--;
                                                    }
                                                    else {
                                                        if(_if_conditional284=i_176==tail,                                                        _if_conditional284) {
                                                            self->head=it_175;
                                                            self->head->prev=((void*)0);
                                                            break;
                                                        }
                                                        else {
                                                            it_175=it_175->next;
                                                            i_176++;
                                                        }
                                                    }
                                                }
                                            }
                                            else {
                                                if(_if_conditional285=tail==self->len,                                                _if_conditional285) {
                                                    it_178=self->head;
                                                    i_179=0;
                                                    while(_while_condtional19=it_178!=((void*)0),                                                    _while_condtional19) {
                                                        if(_if_conditional286=i_179==head,                                                        _if_conditional286) {
                                                            self->tail=it_178->prev;
                                                            self->tail->next=((void*)0);
                                                        }
                                                        if(_if_conditional287=i_179>=head,                                                        _if_conditional287) {
                                                            prev_it_180=it_178;
                                                            it_178=it_178->next;
                                                            i_179++;
                                                            if(prev_it_180) { come_call_finalizer(list_item$1charpp_finalize,prev_it_180, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                            self->len--;
                                                        }
                                                        else {
                                                            it_178=it_178->next;
                                                            i_179++;
                                                        }
                                                    }
                                                }
                                                else {
                                                    it_181=self->head;
                                                    head_prev_it_182=((void*)0);
                                                    tail_it_183=((void*)0);
                                                    i_184=0;
                                                    while(_while_condtional20=it_181!=((void*)0),                                                    _while_condtional20) {
                                                        if(_if_conditional288=i_184==head,                                                        _if_conditional288) {
                                                            head_prev_it_182=it_181->prev;
                                                        }
                                                        if(_if_conditional289=i_184==tail,                                                        _if_conditional289) {
                                                            tail_it_183=it_181;
                                                        }
                                                        if(_if_conditional290=i_184>=head&&i_184<tail,                                                        _if_conditional290) {
                                                            prev_it_185=it_181;
                                                            it_181=it_181->next;
                                                            i_184++;
                                                            if(prev_it_185) { come_call_finalizer(list_item$1charpp_finalize,prev_it_185, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                            self->len--;
                                                        }
                                                        else {
                                                            it_181=it_181->next;
                                                            i_184++;
                                                        }
                                                    }
                                                    if(_if_conditional291=head_prev_it_182!=((void*)0),                                                    _if_conditional291) {
                                                        head_prev_it_182->next=tail_it_183;
                                                    }
                                                    if(_if_conditional292=tail_it_183!=((void*)0),                                                    _if_conditional292) {
                                                        tail_it_183->prev=head_prev_it_182;
                                                    }
                                                }
                                            }
                                        }
                                        __result139__ = __result_obj__ = self;
                                        return __result139__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
struct list_item$1charp* it_173;
_Bool _while_condtional17;
struct list_item$1charp* prev_it_174;
struct list$1charp* __result138__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_173, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_174, 0, sizeof(struct list_item$1charp*));
                                                it_173=self->head;
                                                while(_while_condtional17=it_173!=((void*)0),                                                _while_condtional17) {
                                                    prev_it_174=it_173;
                                                    it_173=it_173->next;
                                                    if(prev_it_174) { come_call_finalizer(list_item$1charpp_finalize,prev_it_174, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                }
                                                self->head=((void*)0);
                                                self->tail=((void*)0);
                                                self->len=0;
                                                __result138__ = __result_obj__ = self;
                                                return __result138__;
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static char* list$1charp_begin(struct list$1charp* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional298;
char* result_187;
char* __result141__;
_Bool _if_conditional299;
char* __result142__;
char* result_188;
char* __result143__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_187, 0, sizeof(char*));
memset(&result_188, 0, sizeof(char*));
            if(_if_conditional298=self==((void*)0),            _if_conditional298) {
                memset(&result_187,0,sizeof(char*));
                __result141__ = __result_obj__ = result_187;
                return __result141__;
            }
            self->it=self->head;
            if(_if_conditional299=self->it,            _if_conditional299) {
                __result142__ = __result_obj__ = self->it->item;
                return __result142__;
            }
            memset(&result_188,0,sizeof(char*));
            __result143__ = __result_obj__ = result_188;
            return __result143__;
}

static _Bool list$1charp_end(struct list$1charp* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __result144__;
memset(&__result_obj__, 0, sizeof(void*));
            __result144__ = self==((void*)0)||self->it==((void*)0);
            return __result144__;
}

static char* list$1charp_next(struct list$1charp* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional300;
char* result_190;
char* __result145__;
_Bool _if_conditional301;
char* __result146__;
char* result_191;
char* __result147__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_190, 0, sizeof(char*));
memset(&result_191, 0, sizeof(char*));
            if(_if_conditional300=self==((void*)0)||self->it==((void*)0),            _if_conditional300) {
                memset(&result_190,0,sizeof(char*));
                __result145__ = __result_obj__ = result_190;
                return __result145__;
            }
            self->it=self->it->next;
            if(_if_conditional301=self->it,            _if_conditional301) {
                __result146__ = __result_obj__ = self->it->item;
                return __result146__;
            }
            memset(&result_191,0,sizeof(char*));
            __result147__ = __result_obj__ = result_191;
            return __result147__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional304;
void* right_value239;
struct list_item$1charp* litem_192;
_Bool _if_conditional305;
void* right_value240;
struct list_item$1charp* litem_193;
void* right_value241;
struct list_item$1charp* litem_194;
struct list$1charp* __result148__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&litem_192, 0, sizeof(struct list_item$1charp*));
memset(&litem_193, 0, sizeof(struct list_item$1charp*));
memset(&litem_194, 0, sizeof(struct list_item$1charp*));
                if(_if_conditional304=self->len==0,                _if_conditional304) {
                    litem_192=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value239=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 277))));
                    if(right_value239 && right_value239 != __result_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value239, (void*)0, (void*)0, 0, 1, 0, 0); }
                    litem_192->prev=((void*)0);
                    litem_192->next=((void*)0);
                    litem_192->item=item;
                    self->tail=litem_192;
                    self->head=litem_192;
                }
                else {
                    if(_if_conditional305=self->len==1,                    _if_conditional305) {
                        litem_193=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value240=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 287))));
                        if(right_value240 && right_value240 != __result_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value240, (void*)0, (void*)0, 0, 1, 0, 0); }
                        litem_193->prev=self->head;
                        litem_193->next=((void*)0);
                        litem_193->item=item;
                        self->tail=litem_193;
                        self->head->next=litem_193;
                    }
                    else {
                        litem_194=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value241=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 297))));
                        if(right_value241 && right_value241 != __result_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value241, (void*)0, (void*)0, 0, 1, 0, 0); }
                        litem_194->prev=self->tail;
                        litem_194->next=((void*)0);
                        litem_194->item=item;
                        self->tail->next=litem_194;
                        self->tail=litem_194;
                    }
                }
                self->len++;
                __result148__ = __result_obj__ = self;
                return __result148__;
}

void add_variable_to_global_table(char* name, struct sType* type, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value243;
struct sVar* self_195;
void* right_value244;
char* __dec_obj99;
void* right_value245;
struct sType* __dec_obj100;
void* right_value246;
char* __dec_obj101;
void* right_value247;
memset(&__result_obj__, 0, sizeof(void*));
memset(&self_195, 0, sizeof(struct sVar*));
    self_195=(struct sVar*)come_increment_ref_count(((struct sVar*)(right_value243=(struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "07var.c", 800))));
    if(right_value243 && right_value243 != __result_obj__) { come_call_finalizer(sVar_finalize,right_value243, (void*)0, (void*)0, 0, 1, 0, 0); }
    __dec_obj99=self_195->mName;
    self_195->mName=(char*)come_increment_ref_count(((char*)(right_value244=__builtin_string(name))));
    if(__dec_obj99) { __dec_obj99 = come_decrement_ref_count(__dec_obj99, (void*)0, (void*)0, 0,0,0); }
    if(right_value244 && right_value244 != __result_obj__) { right_value244 = come_decrement_ref_count(right_value244, (void*)0, (void*)0, 1, 0, 0); }
    __dec_obj100=self_195->mType;
    self_195->mType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value245=sType_clone(type))));
    if(__dec_obj100) { come_call_finalizer(sType_finalize,__dec_obj100, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value245 && right_value245 != __result_obj__) { come_call_finalizer(sType_finalize,right_value245, (void*)0, (void*)0, 0, 1, 0, 0); }
    self_195->mGlobal=(_Bool)1;
    __dec_obj101=self_195->mCValueName;
    self_195->mCValueName=(char*)come_increment_ref_count(((char*)(right_value246=__builtin_string(name))));
    if(__dec_obj101) { __dec_obj101 = come_decrement_ref_count(__dec_obj101, (void*)0, (void*)0, 0,0,0); }
    if(right_value246 && right_value246 != __result_obj__) { right_value246 = come_decrement_ref_count(right_value246, (void*)0, (void*)0, 1, 0, 0); }
    self_195->mBlockLevel=info->block_level;
    self_195->mAllocaValue=(_Bool)0;
    self_195->mFunctionParam=(_Bool)0;
    self_195->mNoFree=(_Bool)0;
    map$2charphsVarph_insert(info->gv_table->mVars,(char*)come_increment_ref_count(((char*)(right_value247=__builtin_string(name)))),(struct sVar*)come_increment_ref_count(self_195));
    if(right_value247 && right_value247 != __result_obj__) { right_value247 = come_decrement_ref_count(right_value247, (void*)0, (void*)0, 1, 0, 0); }
    if(type) { come_call_finalizer(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(self_195) { come_call_finalizer(sVar_finalize,self_195, (void*)0, (void*)0, 0, 0, 0, 0); }
}

void add_variable_to_global_table_with_int_value(char* name, struct sType* type, char* c_value, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value248;
struct sVar* self_196;
void* right_value249;
char* __dec_obj102;
void* right_value250;
struct sType* __dec_obj103;
void* right_value251;
char* __dec_obj104;
void* right_value252;
memset(&__result_obj__, 0, sizeof(void*));
memset(&self_196, 0, sizeof(struct sVar*));
    self_196=(struct sVar*)come_increment_ref_count(((struct sVar*)(right_value248=(struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "07var.c", 819))));
    if(right_value248 && right_value248 != __result_obj__) { come_call_finalizer(sVar_finalize,right_value248, (void*)0, (void*)0, 0, 1, 0, 0); }
    __dec_obj102=self_196->mName;
    self_196->mName=(char*)come_increment_ref_count(((char*)(right_value249=__builtin_string(name))));
    if(__dec_obj102) { __dec_obj102 = come_decrement_ref_count(__dec_obj102, (void*)0, (void*)0, 0,0,0); }
    if(right_value249 && right_value249 != __result_obj__) { right_value249 = come_decrement_ref_count(right_value249, (void*)0, (void*)0, 1, 0, 0); }
    __dec_obj103=self_196->mType;
    self_196->mType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value250=sType_clone(type))));
    if(__dec_obj103) { come_call_finalizer(sType_finalize,__dec_obj103, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value250 && right_value250 != __result_obj__) { come_call_finalizer(sType_finalize,right_value250, (void*)0, (void*)0, 0, 1, 0, 0); }
    self_196->mGlobal=(_Bool)1;
    __dec_obj104=self_196->mCValueName;
    self_196->mCValueName=(char*)come_increment_ref_count(((char*)(right_value251=__builtin_string(c_value))));
    if(__dec_obj104) { __dec_obj104 = come_decrement_ref_count(__dec_obj104, (void*)0, (void*)0, 0,0,0); }
    if(right_value251 && right_value251 != __result_obj__) { right_value251 = come_decrement_ref_count(right_value251, (void*)0, (void*)0, 1, 0, 0); }
    self_196->mBlockLevel=info->block_level;
    self_196->mAllocaValue=(_Bool)0;
    self_196->mFunctionParam=(_Bool)0;
    self_196->mNoFree=(_Bool)0;
    map$2charphsVarph_insert(info->gv_table->mVars,(char*)come_increment_ref_count(((char*)(right_value252=__builtin_string(name)))),(struct sVar*)come_increment_ref_count(self_196));
    if(right_value252 && right_value252 != __result_obj__) { right_value252 = come_decrement_ref_count(right_value252, (void*)0, (void*)0, 1, 0, 0); }
    if(type) { come_call_finalizer(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(self_196) { come_call_finalizer(sVar_finalize,self_196, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct optional$2sNodephbool* string_node_v7(char* buf, char* head, int head_sline, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool is_type_name_flag_197;
_Bool multiple_declare_198;
_Bool _if_conditional306;
char* p_199;
int sline_200;
void* right_value253;
struct tuple3$3sTypephcharphbool* multiple_assgin_var2;
struct sType* type_202;
char* name_203;
_Bool err_204;
_Bool _if_conditional311;
_Bool multiple_declare2_205;
_Bool _if_conditional312;
char* p_206;
int sline_207;
void* right_value254;
struct tuple3$3sTypephcharphbool* multiple_assgin_var3;
struct sType* type_208;
char* name_209;
_Bool err_210;
_Bool _if_conditional313;
_Bool _if_conditional314;
_Bool no_output_err_211;
_Bool no_comma_212;
_Bool no_output_come_code_213;
void* right_value255;
struct sNode* exp_214;
_Bool _if_conditional315;
void* right_value256;
struct sFun* fun_215;
_Bool _if_conditional316;
void* right_value257;
char* buf2_216;
struct list$1charph* multiple_assign_217;
_Bool _if_conditional317;
void* right_value258;
void* right_value259;
struct list$1charph* __dec_obj105;
void* right_value263;
_Bool _while_condtional21;
void* right_value264;
char* buf3_221;
void* right_value265;
_Bool _if_conditional320;
_Bool no_comma_222;
void* right_value266;
struct sNode* right_value_223;
void* right_value267;
struct sNode* __dec_obj109;
void* right_value268;
void* right_value269;
void* right_value270;
struct sNode* _inf_value3;
struct sStoreNode* _inf_obj_value3;
void* right_value279;
struct sNode* result_225;
void* right_value280;
void* right_value281;
struct optional$2sNodephbool* __result156__;
void* right_value282;
void* right_value283;
struct optional$2sNodephbool* __result158__;
_Bool _if_conditional339;
void* right_value284;
void* right_value285;
struct list$1tuple3$3sTypephcharphsNodephph* multiple_declare_226;
void* right_value286;
struct tuple3$3sTypephcharphbool* multiple_assgin_var4;
struct sType* base_type_227;
char* name_228;
_Bool err_229;
void* right_value287;
struct tuple2$2sTypephcharph* variable_name_230;
void* right_value288;
void* right_value291;
struct tuple3$3sTypephcharphsNodeph* variable_name2_231;
_Bool _while_condtional22;
void* right_value295;
struct tuple2$2sTypephcharph* variable_name_235;
void* right_value296;
void* right_value297;
struct tuple3$3sTypephcharphsNodeph* variable_name2_236;
void* right_value298;
void* right_value299;
void* right_value300;
struct sNode* _inf_value4;
struct sStoreNode* _inf_obj_value4;
void* right_value309;
struct sNode* result_238;
void* right_value310;
void* right_value311;
struct optional$2sNodephbool* __result163__;
_Bool _if_conditional363;
void* right_value312;
void* right_value313;
struct list$1tuple3$3sTypephcharphsNodephph* multiple_declare_239;
void* right_value314;
struct tuple3$3sTypephcharphbool* multiple_assgin_var5;
struct sType* base_type_240;
char* name_241;
_Bool err_242;
void* right_value315;
struct tuple2$2sTypephcharph* variable_name_243;
_Bool _if_conditional364;
_Bool no_comma_244;
void* right_value316;
struct sNode* exp_245;
void* right_value317;
void* right_value321;
struct tuple3$3sTypephcharphsNodeph* variable_name2_246;
_Bool _while_condtional23;
void* right_value322;
struct tuple2$2sTypephcharph* variable_name_247;
_Bool _if_conditional365;
_Bool no_comma_248;
void* right_value323;
struct sNode* exp_249;
void* right_value324;
void* right_value325;
struct tuple3$3sTypephcharphsNodeph* variable_name2_250;
void* right_value326;
void* right_value327;
void* right_value328;
struct sNode* _inf_value5;
struct sStoreNode* _inf_obj_value5;
void* right_value337;
struct sNode* result_252;
void* right_value338;
void* right_value339;
struct optional$2sNodephbool* __result167__;
_Bool _if_conditional383;
void* right_value340;
struct sNode* right_value_253;
void* right_value341;
struct sNode* __dec_obj140;
void* right_value342;
void* right_value343;
void* right_value344;
struct sNode* _inf_value6;
struct sStoreNode* _inf_obj_value6;
void* right_value353;
struct sNode* result_255;
void* right_value354;
void* right_value355;
struct optional$2sNodephbool* __result170__;
void* right_value356;
_Bool _if_conditional401;
void* right_value357;
void* right_value358;
void* right_value359;
struct sNode* _inf_value7;
struct sLoadNode* _inf_obj_value7;
void* right_value363;
struct sNode* node_257;
void* right_value364;
struct sNode* __dec_obj150;
void* right_value365;
struct sNode* __dec_obj151;
void* right_value366;
void* right_value367;
struct optional$2sNodephbool* __result173__;
void* right_value368;
char* word_258;
_Bool _if_conditional408;
void* right_value369;
char* __dec_obj152;
_Bool is_type_name_flag_259;
_Bool _if_conditional409;
void* right_value370;
struct tuple3$3sTypephcharphbool* multiple_assgin_var6;
struct sType* type_260;
char* name_261;
_Bool err_262;
_Bool _if_conditional410;
void* right_value371;
void* right_value372;
struct optional$2sNodephbool* __result174__;
_Bool _if_conditional411;
_Bool _if_conditional412;
void* right_value373;
void* right_value374;
struct buffer* buf2_263;
_Bool squort_264;
_Bool dquort_265;
int nest_266;
_Bool _while_condtional24;
_Bool _if_conditional413;
void* right_value375;
void* right_value376;
struct optional$2sNodephbool* __result175__;
_Bool _if_conditional414;
_Bool _if_conditional415;
_Bool _if_conditional416;
_Bool _if_conditional417;
_Bool _if_conditional418;
_Bool _if_conditional419;
_Bool _if_conditional420;
void* right_value377;
char* array_initializer_267;
void* right_value378;
void* right_value379;
struct sNode* _inf_value8;
struct sStoreNode* _inf_obj_value8;
void* right_value388;
struct sNode* result_269;
void* right_value389;
void* right_value390;
struct optional$2sNodephbool* __result178__;
void* right_value391;
struct sNode* right_value_270;
void* right_value392;
void* right_value393;
struct list$1sNodeph* right_values_271;
_Bool _while_condtional25;
char* anonymous_var_nameX1414_272;
void* right_value394;
struct sNode* __dec_obj160;
void* right_value395;
void* right_value396;
struct sNode* _inf_value9;
struct sStoreNode* _inf_obj_value9;
void* right_value405;
struct sNode* result_274;
void* right_value406;
void* right_value407;
struct optional$2sNodephbool* __result181__;
void* right_value408;
void* right_value409;
struct sNode* _inf_value10;
struct sStoreNode* _inf_obj_value10;
void* right_value418;
struct sNode* result_276;
void* right_value419;
void* right_value420;
struct optional$2sNodephbool* __result184__;
void* right_value421;
struct __current_stack1__ __current_stack1__;
void* right_value424;
struct sNode* result_277;
void* right_value425;
void* right_value426;
struct optional$2sNodephbool* __result187__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&is_type_name_flag_197, 0, sizeof(_Bool));
memset(&multiple_declare_198, 0, sizeof(_Bool));
memset(&p_199, 0, sizeof(char*));
memset(&sline_200, 0, sizeof(int));
memset(&type_202, 0, sizeof(struct sType*));
memset(&name_203, 0, sizeof(char*));
memset(&err_204, 0, sizeof(_Bool));
memset(&type_202, 0, sizeof(struct sType*));
memset(&name_203, 0, sizeof(char*));
memset(&err_204, 0, sizeof(_Bool));
memset(&multiple_declare2_205, 0, sizeof(_Bool));
memset(&p_206, 0, sizeof(char*));
memset(&sline_207, 0, sizeof(int));
memset(&type_208, 0, sizeof(struct sType*));
memset(&name_209, 0, sizeof(char*));
memset(&err_210, 0, sizeof(_Bool));
memset(&type_208, 0, sizeof(struct sType*));
memset(&name_209, 0, sizeof(char*));
memset(&err_210, 0, sizeof(_Bool));
memset(&no_output_err_211, 0, sizeof(_Bool));
memset(&no_comma_212, 0, sizeof(_Bool));
memset(&no_output_come_code_213, 0, sizeof(_Bool));
memset(&exp_214, 0, sizeof(struct sNode*));
memset(&fun_215, 0, sizeof(struct sFun*));
memset(&buf2_216, 0, sizeof(char*));
memset(&multiple_assign_217, 0, sizeof(struct list$1charph*));
memset(&buf3_221, 0, sizeof(char*));
memset(&no_comma_222, 0, sizeof(_Bool));
memset(&right_value_223, 0, sizeof(struct sNode*));
memset(&result_225, 0, sizeof(struct sNode*));
memset(&multiple_declare_226, 0, sizeof(struct list$1tuple3$3sTypephcharphsNodephph*));
memset(&base_type_227, 0, sizeof(struct sType*));
memset(&name_228, 0, sizeof(char*));
memset(&err_229, 0, sizeof(_Bool));
memset(&base_type_227, 0, sizeof(struct sType*));
memset(&name_228, 0, sizeof(char*));
memset(&err_229, 0, sizeof(_Bool));
memset(&variable_name_230, 0, sizeof(struct tuple2$2sTypephcharph*));
memset(&variable_name2_231, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
memset(&variable_name_235, 0, sizeof(struct tuple2$2sTypephcharph*));
memset(&variable_name2_236, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
memset(&result_238, 0, sizeof(struct sNode*));
memset(&multiple_declare_239, 0, sizeof(struct list$1tuple3$3sTypephcharphsNodephph*));
memset(&base_type_240, 0, sizeof(struct sType*));
memset(&name_241, 0, sizeof(char*));
memset(&err_242, 0, sizeof(_Bool));
memset(&base_type_240, 0, sizeof(struct sType*));
memset(&name_241, 0, sizeof(char*));
memset(&err_242, 0, sizeof(_Bool));
memset(&variable_name_243, 0, sizeof(struct tuple2$2sTypephcharph*));
memset(&no_comma_244, 0, sizeof(_Bool));
memset(&exp_245, 0, sizeof(struct sNode*));
memset(&variable_name2_246, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
memset(&variable_name_247, 0, sizeof(struct tuple2$2sTypephcharph*));
memset(&no_comma_248, 0, sizeof(_Bool));
memset(&exp_249, 0, sizeof(struct sNode*));
memset(&variable_name2_250, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
memset(&result_252, 0, sizeof(struct sNode*));
memset(&right_value_253, 0, sizeof(struct sNode*));
memset(&result_255, 0, sizeof(struct sNode*));
memset(&node_257, 0, sizeof(struct sNode*));
memset(&word_258, 0, sizeof(char*));
memset(&is_type_name_flag_259, 0, sizeof(_Bool));
memset(&type_260, 0, sizeof(struct sType*));
memset(&name_261, 0, sizeof(char*));
memset(&err_262, 0, sizeof(_Bool));
memset(&type_260, 0, sizeof(struct sType*));
memset(&name_261, 0, sizeof(char*));
memset(&err_262, 0, sizeof(_Bool));
memset(&buf2_263, 0, sizeof(struct buffer*));
memset(&squort_264, 0, sizeof(_Bool));
memset(&dquort_265, 0, sizeof(_Bool));
memset(&nest_266, 0, sizeof(int));
memset(&array_initializer_267, 0, sizeof(char*));
memset(&result_269, 0, sizeof(struct sNode*));
memset(&right_value_270, 0, sizeof(struct sNode*));
memset(&right_values_271, 0, sizeof(struct list$1sNodeph*));
memset(&anonymous_var_nameX1414_272, 0, sizeof(char*));
memset(&result_274, 0, sizeof(struct sNode*));
memset(&result_276, 0, sizeof(struct sNode*));
memset(&__current_stack1__, 0, sizeof(struct __current_stack1__));
memset(&result_277, 0, sizeof(struct sNode*));
    is_type_name_flag_197=is_type_name(buf,info);
    multiple_declare_198=(_Bool)0;
    if(_if_conditional306=is_type_name_flag_197,    _if_conditional306) {
        p_199=info->p;
        sline_200=info->sline;
        info->p=head;
        info->sline=head_sline;
        multiple_assgin_var2=optional$2tuple3$3sTypephcharphboolphbool_value(((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value253=parse_type(info,(_Bool)1,(_Bool)1))));
        type_202=(struct sType*)come_increment_ref_count(multiple_assgin_var2->v1);
        name_203=(char*)come_increment_ref_count(multiple_assgin_var2->v2);
        err_204=multiple_assgin_var2->v3;
        if(right_value253 && right_value253 != __result_obj__) { come_call_finalizer(optional$2tuple3$3sTypephcharphboolphboolp_finalize,right_value253, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(_if_conditional311=err_204&&*info->p==44,        _if_conditional311) {
            multiple_declare_198=(_Bool)1;
        }
        info->p=p_199;
        info->sline=sline_200;
        if(type_202) { come_call_finalizer(sType_finalize,type_202, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(name_203) { name_203 = come_decrement_ref_count(name_203, (void*)0, (void*)0, 0, 0, 0); }
    }
    multiple_declare2_205=(_Bool)0;
    if(_if_conditional312=is_type_name_flag_197,    _if_conditional312) {
        p_206=info->p;
        sline_207=info->sline;
        info->p=head;
        info->sline=head_sline;
        multiple_assgin_var3=optional$2tuple3$3sTypephcharphboolphbool_value(((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value254=parse_type(info,(_Bool)1,(_Bool)1))));
        type_208=(struct sType*)come_increment_ref_count(multiple_assgin_var3->v1);
        name_209=(char*)come_increment_ref_count(multiple_assgin_var3->v2);
        err_210=multiple_assgin_var3->v3;
        if(right_value254 && right_value254 != __result_obj__) { come_call_finalizer(optional$2tuple3$3sTypephcharphboolphboolp_finalize,right_value254, (void*)0, (void*)0, 0, 1, 0, 0); }
        parse_sharp_v5(info);
        if(_if_conditional313=err_210&&*info->p==61,        _if_conditional313) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            if(_if_conditional314=*info->p==123,            _if_conditional314) {
            }
            else {
                no_output_err_211=info->no_output_err;
                no_comma_212=info->no_comma;
                no_output_come_code_213=info->no_output_come_code;
                info->no_output_err=(_Bool)1;
                info->no_comma=(_Bool)1;
                info->no_output_come_code=(_Bool)1;
                exp_214=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value255=expression_v13(info))));
                if(right_value255 && right_value255 != __result_obj__) { right_value255 = come_decrement_ref_count(right_value255, ((struct sNode*)right_value255)->finalize, ((struct sNode*)right_value255)->_protocol_obj, 1, 0, 0); } 
                info->no_comma=no_comma_212;
                info->no_output_err=no_output_err_211;
                info->no_output_come_code=no_output_come_code_213;
                if(_if_conditional315=*info->p==44,                _if_conditional315) {
                    multiple_declare2_205=(_Bool)1;
                }
                if(exp_214) { exp_214 = come_decrement_ref_count(exp_214, ((struct sNode*)exp_214)->finalize, ((struct sNode*)exp_214)->_protocol_obj, 0, 0, 0); } 
            }
        }
        info->p=p_206;
        info->sline=sline_207;
        if(type_208) { come_call_finalizer(sType_finalize,type_208, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(name_209) { name_209 = come_decrement_ref_count(name_209, (void*)0, (void*)0, 0, 0, 0); }
    }
    parse_sharp_v5(info);
    fun_215=optional$2sFunpbool_value(((struct optional$2sFunpbool*)(right_value256=map$2charphsFunphp_operator_load_element(info->funcs,buf))));
    if(right_value256 && right_value256 != __result_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value256, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(_if_conditional316=charp_operator_equals(buf,"var")||charp_operator_equals(buf,"auto"),    _if_conditional316) {
        parse_sharp_v5(info);
        buf2_216=(char*)come_increment_ref_count(optional$2charphbool_expect(((struct optional$2charphbool*)(right_value257=parse_word(info)))));
        if(right_value257 && right_value257 != __result_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value257, (void*)0, (void*)0, 0, 1, 0, 0); }
        parse_sharp_v5(info);
        multiple_assign_217=((void*)0);
        if(_if_conditional317=*info->p==44,        _if_conditional317) {
            __dec_obj105=multiple_assign_217;
            multiple_assign_217=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value259=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value258=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "07var.c", 917))))))));
            if(__dec_obj105) { come_call_finalizer(list$1charph_finalize,__dec_obj105, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value258 && right_value258 != __result_obj__) { come_call_finalizer(list$1charphp_finalize,right_value258, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value259 && right_value259 != __result_obj__) { come_call_finalizer(list$1charphp_finalize,right_value259, (void*)0, (void*)0, 0, 1, 0, 0); }
            list$1charph_push_back(multiple_assign_217,(char*)come_increment_ref_count(((char*)(right_value263=string_clone(buf2_216)))));
            if(right_value263 && right_value263 != __result_obj__) { right_value263 = come_decrement_ref_count(right_value263, (void*)0, (void*)0, 1, 0, 0); }
            while(_while_condtional21=*info->p==44,            _while_condtional21) {
                info->p++;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                buf3_221=(char*)come_increment_ref_count(optional$2charphbool_expect(((struct optional$2charphbool*)(right_value264=parse_word(info)))));
                if(right_value264 && right_value264 != __result_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value264, (void*)0, (void*)0, 0, 1, 0, 0); }
                parse_sharp_v5(info);
                list$1charph_push_back(multiple_assign_217,(char*)come_increment_ref_count(((char*)(right_value265=string_clone(buf3_221)))));
                if(right_value265 && right_value265 != __result_obj__) { right_value265 = come_decrement_ref_count(right_value265, (void*)0, (void*)0, 1, 0, 0); }
                if(buf3_221) { buf3_221 = come_decrement_ref_count(buf3_221, (void*)0, (void*)0, 0, 0, 0); }
            }
        }
        parse_sharp_v5(info);
        if(_if_conditional320=*info->p==61&&*(info->p+1)!=61,        _if_conditional320) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            no_comma_222=info->no_comma;
            info->no_comma=(_Bool)1;
            right_value_223=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value266=expression_v13(info))));
            if(right_value266 && right_value266 != __result_obj__) { right_value266 = come_decrement_ref_count(right_value266, ((struct sNode*)right_value266)->finalize, ((struct sNode*)right_value266)->_protocol_obj, 1, 0, 0); } 
            info->no_comma=no_comma_222;
            parse_sharp_v5(info);
            __dec_obj109=right_value_223;
            right_value_223=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value267=post_position_operator3_v21((struct sNode*)come_increment_ref_count(right_value_223),info))));
            if(__dec_obj109) { __dec_obj109 = come_decrement_ref_count(__dec_obj109, ((struct sNode*)__dec_obj109)->finalize, ((struct sNode*)__dec_obj109)->_protocol_obj, 0,0,0); }
            if(right_value267 && right_value267 != __result_obj__) { right_value267 = come_decrement_ref_count(right_value267, ((struct sNode*)right_value267)->finalize, ((struct sNode*)right_value267)->_protocol_obj, 1, 0, 0); } 
            parse_sharp_v5(info);
            _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 947);
            _inf_obj_value3=come_increment_ref_count(((struct sStoreNode*)(right_value270=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value268=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 947)))),(char*)come_increment_ref_count(((char*)(right_value269=__builtin_string(buf2_216)))),(struct list$1charph*)come_increment_ref_count(multiple_assign_217),((void*)0),((void*)0),(_Bool)1,(struct sNode*)come_increment_ref_count(right_value_223),((void*)0),info))));
            _inf_value3->_protocol_obj=_inf_obj_value3;
            _inf_value3->finalize=(void*)sStoreNode_finalize;
            _inf_value3->clone=(void*)sStoreNode_clone;
            _inf_value3->compile=(void*)sStoreNode_compile;
            _inf_value3->sline=(void*)sStoreNode_sline;
            _inf_value3->sname=(void*)sStoreNode_sname;
            _inf_value3->terminated=(void*)sStoreNode_terminated;
            _inf_value3->kind=(void*)sStoreNode_kind;
            result_225=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value279=_inf_value3)));
            if(right_value268 && right_value268 != __result_obj__) { come_call_finalizer(sStoreNode_finalize,right_value268, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value269 && right_value269 != __result_obj__) { right_value269 = come_decrement_ref_count(right_value269, (void*)0, (void*)0, 1, 0, 0); }
            if(right_value270 && right_value270 != __result_obj__) { come_call_finalizer(sStoreNode_finalize,right_value270, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value279 && right_value279 != __result_obj__) { right_value279 = come_decrement_ref_count(right_value279, ((struct sNode*)right_value279)->finalize, ((struct sNode*)right_value279)->_protocol_obj, 1, 0, 0); } 
            __result156__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value281=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value280=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "07var.c", 951)))),(struct sNode*)come_increment_ref_count(result_225),(_Bool)1)));
            if(right_value_223) { right_value_223 = come_decrement_ref_count(right_value_223, ((struct sNode*)right_value_223)->finalize, ((struct sNode*)right_value_223)->_protocol_obj, 0, 0, 0); } 
            if(result_225) { result_225 = come_decrement_ref_count(result_225, ((struct sNode*)result_225)->finalize, ((struct sNode*)result_225)->_protocol_obj, 0, 0, 0); } 
            if(buf2_216) { buf2_216 = come_decrement_ref_count(buf2_216, (void*)0, (void*)0, 0, 0, 0); }
            if(multiple_assign_217) { come_call_finalizer(list$1charphp_finalize,multiple_assign_217, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value280 && right_value280 != __result_obj__) { right_value280 = come_decrement_ref_count(right_value280, (void*)0, (void*)0, 1, 0, 0); }
            return __result156__;
            if(right_value_223) { right_value_223 = come_decrement_ref_count(right_value_223, ((struct sNode*)right_value_223)->finalize, ((struct sNode*)right_value_223)->_protocol_obj, 0, 0, 0); } 
            if(result_225) { result_225 = come_decrement_ref_count(result_225, ((struct sNode*)result_225)->finalize, ((struct sNode*)result_225)->_protocol_obj, 0, 0, 0); } 
        }
        else {
            err_msg(info,"var requires a right value(%c)",*info->p);
            __result158__ = __result_obj__ = ((struct optional$2voidpbool*)(right_value283=optional$2voidpbool_initialize(((struct optional$2voidpbool*)(right_value282=(struct optional$2voidpbool*)come_calloc(1, sizeof(struct optional$2voidpbool)*(1), "07var.c", 955))),((void*)0),(_Bool)0)));
            if(buf2_216) { buf2_216 = come_decrement_ref_count(buf2_216, (void*)0, (void*)0, 0, 0, 0); }
            if(multiple_assign_217) { come_call_finalizer(list$1charphp_finalize,multiple_assign_217, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value282 && right_value282 != __result_obj__) { right_value282 = come_decrement_ref_count(right_value282, (void*)0, (void*)0, 1, 0, 0); }
            return __result158__;
        }
        if(buf2_216) { buf2_216 = come_decrement_ref_count(buf2_216, (void*)0, (void*)0, 0, 0, 0); }
        if(multiple_assign_217) { come_call_finalizer(list$1charphp_finalize,multiple_assign_217, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    else {
        if(_if_conditional339=multiple_declare_198,        _if_conditional339) {
            info->p=head;
            info->sline=head_sline;
            multiple_declare_226=(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list$1tuple3$3sTypephcharphsNodephph*)(right_value285=list$1tuple3$3sTypephcharphsNodephph_initialize((struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list$1tuple3$3sTypephcharphsNodephph*)(right_value284=(struct list$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list$1tuple3$3sTypephcharphsNodephph)*(1), "07var.c", 962))))))));
            if(right_value284 && right_value284 != __result_obj__) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,right_value284, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value285 && right_value285 != __result_obj__) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,right_value285, (void*)0, (void*)0, 0, 1, 0, 0); }
            multiple_assgin_var4=optional$2tuple3$3sTypephcharphboolphbool_value(((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value286=parse_type(info,(_Bool)0,(_Bool)1))));
            base_type_227=(struct sType*)come_increment_ref_count(multiple_assgin_var4->v1);
            name_228=(char*)come_increment_ref_count(multiple_assgin_var4->v2);
            err_229=multiple_assgin_var4->v3;
            if(right_value286 && right_value286 != __result_obj__) { come_call_finalizer(optional$2tuple3$3sTypephcharphboolphboolp_finalize,right_value286, (void*)0, (void*)0, 0, 1, 0, 0); }
            variable_name_230=(struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value287=parse_variable_name((struct sType*)come_increment_ref_count(base_type_227),(_Bool)1,info))));
            if(right_value287 && right_value287 != __result_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,right_value287, (void*)0, (void*)0, 0, 1, 0, 0); }
            variable_name2_231=(struct tuple3$3sTypephcharphvoidp*)come_increment_ref_count(((struct tuple3$3sTypephcharphvoidp*)(right_value291=tuple3$3sTypephcharphvoidp_initialize((struct tuple3$3sTypephcharphvoidp*)come_increment_ref_count(((struct tuple3$3sTypephcharphvoidp*)(right_value288=(struct tuple3$3sTypephcharphvoidp*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphvoidp)*(1), "07var.c", 968)))),(struct sType*)come_increment_ref_count(variable_name_230->v1),(char*)come_increment_ref_count(variable_name_230->v2),((void*)0)))));
            if(right_value288 && right_value288 != __result_obj__) { right_value288 = come_decrement_ref_count(right_value288, (void*)0, (void*)0, 1, 0, 0); }
            if(right_value291 && right_value291 != __result_obj__) { come_call_finalizer(tuple3$3sTypephcharphvoidpp_finalize,right_value291, (void*)0, (void*)0, 0, 1, 0, 0); }
            list$1tuple3$3sTypephcharphsNodephph_push_back(multiple_declare_226,(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(variable_name2_231));
            while(_while_condtional22=*info->p==44,            _while_condtional22) {
                info->p++;
                skip_spaces_and_lf(info);
                variable_name_235=(struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value295=parse_variable_name((struct sType*)come_increment_ref_count(base_type_227),(_Bool)0,info))));
                if(right_value295 && right_value295 != __result_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,right_value295, (void*)0, (void*)0, 0, 1, 0, 0); }
                variable_name2_236=(struct tuple3$3sTypephcharphvoidp*)come_increment_ref_count(((struct tuple3$3sTypephcharphvoidp*)(right_value297=tuple3$3sTypephcharphvoidp_initialize((struct tuple3$3sTypephcharphvoidp*)come_increment_ref_count(((struct tuple3$3sTypephcharphvoidp*)(right_value296=(struct tuple3$3sTypephcharphvoidp*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphvoidp)*(1), "07var.c", 978)))),(struct sType*)come_increment_ref_count(variable_name_235->v1),(char*)come_increment_ref_count(variable_name_235->v2),((void*)0)))));
                if(right_value296 && right_value296 != __result_obj__) { right_value296 = come_decrement_ref_count(right_value296, (void*)0, (void*)0, 1, 0, 0); }
                if(right_value297 && right_value297 != __result_obj__) { come_call_finalizer(tuple3$3sTypephcharphvoidpp_finalize,right_value297, (void*)0, (void*)0, 0, 1, 0, 0); }
                list$1tuple3$3sTypephcharphsNodephph_push_back(multiple_declare_226,(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(variable_name2_236));
                if(variable_name_235) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,variable_name_235, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(variable_name2_236) { come_call_finalizer(tuple3$3sTypephcharphsNodephp_finalize,variable_name2_236, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 983);
            _inf_obj_value4=come_increment_ref_count(((struct sStoreNode*)(right_value300=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value298=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 983)))),(char*)come_increment_ref_count(((char*)(right_value299=__builtin_string(buf)))),((void*)0),(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(multiple_declare_226),(struct sType*)come_increment_ref_count(base_type_227),(_Bool)1,((void*)0),((void*)0),info))));
            _inf_value4->_protocol_obj=_inf_obj_value4;
            _inf_value4->finalize=(void*)sStoreNode_finalize;
            _inf_value4->clone=(void*)sStoreNode_clone;
            _inf_value4->compile=(void*)sStoreNode_compile;
            _inf_value4->sline=(void*)sStoreNode_sline;
            _inf_value4->sname=(void*)sStoreNode_sname;
            _inf_value4->terminated=(void*)sStoreNode_terminated;
            _inf_value4->kind=(void*)sStoreNode_kind;
            result_238=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value309=_inf_value4)));
            if(right_value298 && right_value298 != __result_obj__) { come_call_finalizer(sStoreNode_finalize,right_value298, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value299 && right_value299 != __result_obj__) { right_value299 = come_decrement_ref_count(right_value299, (void*)0, (void*)0, 1, 0, 0); }
            if(right_value300 && right_value300 != __result_obj__) { come_call_finalizer(sStoreNode_finalize,right_value300, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value309 && right_value309 != __result_obj__) { right_value309 = come_decrement_ref_count(right_value309, ((struct sNode*)right_value309)->finalize, ((struct sNode*)right_value309)->_protocol_obj, 1, 0, 0); } 
            __result163__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value311=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value310=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "07var.c", 987)))),(struct sNode*)come_increment_ref_count(result_238),(_Bool)1)));
            if(multiple_declare_226) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,multiple_declare_226, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(base_type_227) { come_call_finalizer(sType_finalize,base_type_227, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(name_228) { name_228 = come_decrement_ref_count(name_228, (void*)0, (void*)0, 0, 0, 0); }
            if(variable_name_230) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,variable_name_230, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(variable_name2_231) { come_call_finalizer(tuple3$3sTypephcharphsNodephp_finalize,variable_name2_231, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(result_238) { result_238 = come_decrement_ref_count(result_238, ((struct sNode*)result_238)->finalize, ((struct sNode*)result_238)->_protocol_obj, 0, 0, 0); } 
            if(right_value310 && right_value310 != __result_obj__) { right_value310 = come_decrement_ref_count(right_value310, (void*)0, (void*)0, 1, 0, 0); }
            return __result163__;
            if(multiple_declare_226) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,multiple_declare_226, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(base_type_227) { come_call_finalizer(sType_finalize,base_type_227, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(name_228) { name_228 = come_decrement_ref_count(name_228, (void*)0, (void*)0, 0, 0, 0); }
            if(variable_name_230) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,variable_name_230, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(variable_name2_231) { come_call_finalizer(tuple3$3sTypephcharphsNodephp_finalize,variable_name2_231, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(result_238) { result_238 = come_decrement_ref_count(result_238, ((struct sNode*)result_238)->finalize, ((struct sNode*)result_238)->_protocol_obj, 0, 0, 0); } 
        }
        else {
            if(_if_conditional363=multiple_declare2_205,            _if_conditional363) {
                info->p=head;
                info->sline=head_sline;
                multiple_declare_239=(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list$1tuple3$3sTypephcharphsNodephph*)(right_value313=list$1tuple3$3sTypephcharphsNodephph_initialize((struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list$1tuple3$3sTypephcharphsNodephph*)(right_value312=(struct list$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list$1tuple3$3sTypephcharphsNodephph)*(1), "07var.c", 993))))))));
                if(right_value312 && right_value312 != __result_obj__) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,right_value312, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value313 && right_value313 != __result_obj__) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,right_value313, (void*)0, (void*)0, 0, 1, 0, 0); }
                multiple_assgin_var5=optional$2tuple3$3sTypephcharphboolphbool_value(((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value314=parse_type(info,(_Bool)0,(_Bool)1))));
                base_type_240=(struct sType*)come_increment_ref_count(multiple_assgin_var5->v1);
                name_241=(char*)come_increment_ref_count(multiple_assgin_var5->v2);
                err_242=multiple_assgin_var5->v3;
                if(right_value314 && right_value314 != __result_obj__) { come_call_finalizer(optional$2tuple3$3sTypephcharphboolphboolp_finalize,right_value314, (void*)0, (void*)0, 0, 1, 0, 0); }
                variable_name_243=(struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value315=parse_variable_name((struct sType*)come_increment_ref_count(base_type_240),(_Bool)1,info))));
                if(right_value315 && right_value315 != __result_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,right_value315, (void*)0, (void*)0, 0, 1, 0, 0); }
                parse_sharp_v5(info);
                if(_if_conditional364=*info->p==61,                _if_conditional364) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    parse_sharp_v5(info);
                    no_comma_244=info->no_comma;
                    info->no_comma=(_Bool)1;
                    exp_245=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value316=expression_v13(info))));
                    if(right_value316 && right_value316 != __result_obj__) { right_value316 = come_decrement_ref_count(right_value316, ((struct sNode*)right_value316)->finalize, ((struct sNode*)right_value316)->_protocol_obj, 1, 0, 0); } 
                    info->no_comma=no_comma_244;
                    variable_name2_246=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(((struct tuple3$3sTypephcharphsNodeph*)(right_value321=tuple3$3sTypephcharphsNodeph_initialize((struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(((struct tuple3$3sTypephcharphsNodeph*)(right_value317=(struct tuple3$3sTypephcharphsNodeph*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphsNodeph)*(1), "07var.c", 1012)))),(struct sType*)come_increment_ref_count(variable_name_243->v1),(char*)come_increment_ref_count(variable_name_243->v2),(struct sNode*)come_increment_ref_count(exp_245)))));
                    if(right_value317 && right_value317 != __result_obj__) { come_call_finalizer(tuple3$3sTypephcharphsNodeph_finalize,right_value317, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(right_value321 && right_value321 != __result_obj__) { come_call_finalizer(tuple3$3sTypephcharphsNodephp_finalize,right_value321, (void*)0, (void*)0, 0, 1, 0, 0); }
                    list$1tuple3$3sTypephcharphsNodephph_push_back(multiple_declare_239,(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(variable_name2_246));
                    if(exp_245) { exp_245 = come_decrement_ref_count(exp_245, ((struct sNode*)exp_245)->finalize, ((struct sNode*)exp_245)->_protocol_obj, 0, 0, 0); } 
                    if(variable_name2_246) { come_call_finalizer(tuple3$3sTypephcharphsNodephp_finalize,variable_name2_246, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                while(_while_condtional23=*info->p==44,                _while_condtional23) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    variable_name_247=(struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value322=parse_variable_name((struct sType*)come_increment_ref_count(base_type_240),(_Bool)0,info))));
                    if(right_value322 && right_value322 != __result_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,right_value322, (void*)0, (void*)0, 0, 1, 0, 0); }
                    parse_sharp_v5(info);
                    if(_if_conditional365=*info->p==61,                    _if_conditional365) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        parse_sharp_v5(info);
                        no_comma_248=info->no_comma;
                        info->no_comma=(_Bool)1;
                        exp_249=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value323=expression_v13(info))));
                        if(right_value323 && right_value323 != __result_obj__) { right_value323 = come_decrement_ref_count(right_value323, ((struct sNode*)right_value323)->finalize, ((struct sNode*)right_value323)->_protocol_obj, 1, 0, 0); } 
                        info->no_comma=no_comma_248;
                        variable_name2_250=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(((struct tuple3$3sTypephcharphsNodeph*)(right_value325=tuple3$3sTypephcharphsNodeph_initialize((struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(((struct tuple3$3sTypephcharphsNodeph*)(right_value324=(struct tuple3$3sTypephcharphsNodeph*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphsNodeph)*(1), "07var.c", 1036)))),(struct sType*)come_increment_ref_count(variable_name_247->v1),(char*)come_increment_ref_count(variable_name_247->v2),(struct sNode*)come_increment_ref_count(exp_249)))));
                        if(right_value324 && right_value324 != __result_obj__) { come_call_finalizer(tuple3$3sTypephcharphsNodeph_finalize,right_value324, (void*)0, (void*)0, 0, 1, 0, 0); }
                        if(right_value325 && right_value325 != __result_obj__) { come_call_finalizer(tuple3$3sTypephcharphsNodephp_finalize,right_value325, (void*)0, (void*)0, 0, 1, 0, 0); }
                        list$1tuple3$3sTypephcharphsNodephph_push_back(multiple_declare_239,(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(variable_name2_250));
                        if(exp_249) { exp_249 = come_decrement_ref_count(exp_249, ((struct sNode*)exp_249)->finalize, ((struct sNode*)exp_249)->_protocol_obj, 0, 0, 0); } 
                        if(variable_name2_250) { come_call_finalizer(tuple3$3sTypephcharphsNodephp_finalize,variable_name2_250, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    else {
                        if(variable_name_247) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,variable_name_247, (void*)0, (void*)0, 0, 0, 0, 0); }
                        break;
                    }
                    if(variable_name_247) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,variable_name_247, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1045);
                _inf_obj_value5=come_increment_ref_count(((struct sStoreNode*)(right_value328=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value326=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1045)))),(char*)come_increment_ref_count(((char*)(right_value327=__builtin_string(buf)))),((void*)0),(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(multiple_declare_239),(struct sType*)come_increment_ref_count(base_type_240),(_Bool)1,((void*)0),((void*)0),info))));
                _inf_value5->_protocol_obj=_inf_obj_value5;
                _inf_value5->finalize=(void*)sStoreNode_finalize;
                _inf_value5->clone=(void*)sStoreNode_clone;
                _inf_value5->compile=(void*)sStoreNode_compile;
                _inf_value5->sline=(void*)sStoreNode_sline;
                _inf_value5->sname=(void*)sStoreNode_sname;
                _inf_value5->terminated=(void*)sStoreNode_terminated;
                _inf_value5->kind=(void*)sStoreNode_kind;
                result_252=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value337=_inf_value5)));
                if(right_value326 && right_value326 != __result_obj__) { come_call_finalizer(sStoreNode_finalize,right_value326, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value327 && right_value327 != __result_obj__) { right_value327 = come_decrement_ref_count(right_value327, (void*)0, (void*)0, 1, 0, 0); }
                if(right_value328 && right_value328 != __result_obj__) { come_call_finalizer(sStoreNode_finalize,right_value328, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value337 && right_value337 != __result_obj__) { right_value337 = come_decrement_ref_count(right_value337, ((struct sNode*)right_value337)->finalize, ((struct sNode*)right_value337)->_protocol_obj, 1, 0, 0); } 
                __result167__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value339=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value338=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "07var.c", 1049)))),(struct sNode*)come_increment_ref_count(result_252),(_Bool)1)));
                if(multiple_declare_239) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,multiple_declare_239, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(base_type_240) { come_call_finalizer(sType_finalize,base_type_240, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(name_241) { name_241 = come_decrement_ref_count(name_241, (void*)0, (void*)0, 0, 0, 0); }
                if(variable_name_243) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,variable_name_243, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(result_252) { result_252 = come_decrement_ref_count(result_252, ((struct sNode*)result_252)->finalize, ((struct sNode*)result_252)->_protocol_obj, 0, 0, 0); } 
                if(right_value338 && right_value338 != __result_obj__) { right_value338 = come_decrement_ref_count(right_value338, (void*)0, (void*)0, 1, 0, 0); }
                return __result167__;
                if(multiple_declare_239) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,multiple_declare_239, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(base_type_240) { come_call_finalizer(sType_finalize,base_type_240, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(name_241) { name_241 = come_decrement_ref_count(name_241, (void*)0, (void*)0, 0, 0, 0); }
                if(variable_name_243) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,variable_name_243, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(result_252) { result_252 = come_decrement_ref_count(result_252, ((struct sNode*)result_252)->finalize, ((struct sNode*)result_252)->_protocol_obj, 0, 0, 0); } 
            }
            else {
                if(_if_conditional383=!is_type_name_flag_197&&*info->p==61&&*(info->p+1)!=61&&!info->no_assign,                _if_conditional383) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    parse_sharp_v5(info);
                    right_value_253=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value340=expression_v13(info))));
                    if(right_value340 && right_value340 != __result_obj__) { right_value340 = come_decrement_ref_count(right_value340, ((struct sNode*)right_value340)->finalize, ((struct sNode*)right_value340)->_protocol_obj, 1, 0, 0); } 
                    parse_sharp_v5(info);
                    __dec_obj140=right_value_253;
                    right_value_253=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value341=post_position_operator3_v21((struct sNode*)come_increment_ref_count(right_value_253),info))));
                    if(__dec_obj140) { __dec_obj140 = come_decrement_ref_count(__dec_obj140, ((struct sNode*)__dec_obj140)->finalize, ((struct sNode*)__dec_obj140)->_protocol_obj, 0,0,0); }
                    if(right_value341 && right_value341 != __result_obj__) { right_value341 = come_decrement_ref_count(right_value341, ((struct sNode*)right_value341)->finalize, ((struct sNode*)right_value341)->_protocol_obj, 1, 0, 0); } 
                    parse_sharp_v5(info);
                    _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1063);
                    _inf_obj_value6=come_increment_ref_count(((struct sStoreNode*)(right_value344=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value342=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1063)))),(char*)come_increment_ref_count(((char*)(right_value343=__builtin_string(buf)))),((void*)0),((void*)0),((void*)0),(_Bool)0,(struct sNode*)come_increment_ref_count(right_value_253),((void*)0),info))));
                    _inf_value6->_protocol_obj=_inf_obj_value6;
                    _inf_value6->finalize=(void*)sStoreNode_finalize;
                    _inf_value6->clone=(void*)sStoreNode_clone;
                    _inf_value6->compile=(void*)sStoreNode_compile;
                    _inf_value6->sline=(void*)sStoreNode_sline;
                    _inf_value6->sname=(void*)sStoreNode_sname;
                    _inf_value6->terminated=(void*)sStoreNode_terminated;
                    _inf_value6->kind=(void*)sStoreNode_kind;
                    result_255=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value353=_inf_value6)));
                    if(right_value342 && right_value342 != __result_obj__) { come_call_finalizer(sStoreNode_finalize,right_value342, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(right_value343 && right_value343 != __result_obj__) { right_value343 = come_decrement_ref_count(right_value343, (void*)0, (void*)0, 1, 0, 0); }
                    if(right_value344 && right_value344 != __result_obj__) { come_call_finalizer(sStoreNode_finalize,right_value344, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(right_value353 && right_value353 != __result_obj__) { right_value353 = come_decrement_ref_count(right_value353, ((struct sNode*)right_value353)->finalize, ((struct sNode*)right_value353)->_protocol_obj, 1, 0, 0); } 
                    __result170__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value355=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value354=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "07var.c", 1067)))),(struct sNode*)come_increment_ref_count(result_255),(_Bool)1)));
                    if(right_value_253) { right_value_253 = come_decrement_ref_count(right_value_253, ((struct sNode*)right_value_253)->finalize, ((struct sNode*)right_value_253)->_protocol_obj, 0, 0, 0); } 
                    if(result_255) { result_255 = come_decrement_ref_count(result_255, ((struct sNode*)result_255)->finalize, ((struct sNode*)result_255)->_protocol_obj, 0, 0, 0); } 
                    if(right_value354 && right_value354 != __result_obj__) { right_value354 = come_decrement_ref_count(right_value354, (void*)0, (void*)0, 1, 0, 0); }
                    return __result170__;
                    if(right_value_253) { right_value_253 = come_decrement_ref_count(right_value_253, ((struct sNode*)right_value_253)->finalize, ((struct sNode*)right_value_253)->_protocol_obj, 0, 0, 0); } 
                    if(result_255) { result_255 = come_decrement_ref_count(result_255, ((struct sNode*)result_255)->finalize, ((struct sNode*)result_255)->_protocol_obj, 0, 0, 0); } 
                }
                else {
                    if(_if_conditional401=!is_type_name_flag_197||optional$2sFunpbool_value(((struct optional$2sFunpbool*)(right_value356=map$2charphsFunphp_operator_load_element(info->funcs,buf)))),                    (right_value356 && right_value356 != __result_obj__) ? come_call_finalizer(optional$2sFunpboolp_finalize,right_value356, (void*)0, (void*)0, 0, 1, 0, 0):0,
                    _if_conditional401) {
                        _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1070);
                        _inf_obj_value7=come_increment_ref_count(((struct sLoadNode*)(right_value359=sLoadNode_initialize((struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(right_value357=(struct sLoadNode*)come_calloc(1, sizeof(struct sLoadNode)*(1), "07var.c", 1070)))),(char*)come_increment_ref_count(((char*)(right_value358=__builtin_string(buf)))),info))));
                        _inf_value7->_protocol_obj=_inf_obj_value7;
                        _inf_value7->finalize=(void*)sLoadNode_finalize;
                        _inf_value7->clone=(void*)sLoadNode_clone;
                        _inf_value7->compile=(void*)sLoadNode_compile;
                        _inf_value7->sline=(void*)sLoadNode_sline;
                        _inf_value7->sname=(void*)sLoadNode_sname;
                        _inf_value7->terminated=(void*)sLoadNode_terminated;
                        _inf_value7->kind=(void*)sLoadNode_kind;
                        node_257=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value363=_inf_value7)));
                        if(right_value357 && right_value357 != __result_obj__) { come_call_finalizer(sLoadNode_finalize,right_value357, (void*)0, (void*)0, 0, 1, 0, 0); }
                        if(right_value358 && right_value358 != __result_obj__) { right_value358 = come_decrement_ref_count(right_value358, (void*)0, (void*)0, 1, 0, 0); }
                        if(right_value359 && right_value359 != __result_obj__) { come_call_finalizer(sLoadNode_finalize,right_value359, (void*)0, (void*)0, 0, 1, 0, 0); }
                        if(right_value363 && right_value363 != __result_obj__) { right_value363 = come_decrement_ref_count(right_value363, ((struct sNode*)right_value363)->finalize, ((struct sNode*)right_value363)->_protocol_obj, 1, 0, 0); } 
                        __dec_obj150=node_257;
                        node_257=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value364=post_position_operator_v18((struct sNode*)come_increment_ref_count(node_257),info))));
                        if(__dec_obj150) { __dec_obj150 = come_decrement_ref_count(__dec_obj150, ((struct sNode*)__dec_obj150)->finalize, ((struct sNode*)__dec_obj150)->_protocol_obj, 0,0,0); }
                        if(right_value364 && right_value364 != __result_obj__) { right_value364 = come_decrement_ref_count(right_value364, ((struct sNode*)right_value364)->finalize, ((struct sNode*)right_value364)->_protocol_obj, 1, 0, 0); } 
                        __dec_obj151=node_257;
                        node_257=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value365=post_position_operator3_v21((struct sNode*)come_increment_ref_count(node_257),info))));
                        if(__dec_obj151) { __dec_obj151 = come_decrement_ref_count(__dec_obj151, ((struct sNode*)__dec_obj151)->finalize, ((struct sNode*)__dec_obj151)->_protocol_obj, 0,0,0); }
                        if(right_value365 && right_value365 != __result_obj__) { right_value365 = come_decrement_ref_count(right_value365, ((struct sNode*)right_value365)->finalize, ((struct sNode*)right_value365)->_protocol_obj, 1, 0, 0); } 
                        __result173__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value367=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value366=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "07var.c", 1076)))),(struct sNode*)come_increment_ref_count(node_257),(_Bool)1)));
                        if(node_257) { node_257 = come_decrement_ref_count(node_257, ((struct sNode*)node_257)->finalize, ((struct sNode*)node_257)->_protocol_obj, 0, 0, 0); } 
                        if(right_value366 && right_value366 != __result_obj__) { right_value366 = come_decrement_ref_count(right_value366, (void*)0, (void*)0, 1, 0, 0); }
                        return __result173__;
                        if(node_257) { node_257 = come_decrement_ref_count(node_257, ((struct sNode*)node_257)->finalize, ((struct sNode*)node_257)->_protocol_obj, 0, 0, 0); } 
                    }
                    else {
                        info->p=head;
                        info->sline=head_sline;
                        word_258=(char*)come_increment_ref_count(((char*)(right_value368=__builtin_string(""))));
                        if(right_value368 && right_value368 != __result_obj__) { right_value368 = come_decrement_ref_count(right_value368, (void*)0, (void*)0, 1, 0, 0); }
                        if(_if_conditional408=xisalpha(*info->p)||*info->p==95,                        _if_conditional408) {
                            __dec_obj152=word_258;
                            word_258=(char*)come_increment_ref_count(optional$2charphbool_expect(((struct optional$2charphbool*)(right_value369=parse_word(info)))));
                            if(__dec_obj152) { __dec_obj152 = come_decrement_ref_count(__dec_obj152, (void*)0, (void*)0, 0,0,0); }
                            if(right_value369 && right_value369 != __result_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value369, (void*)0, (void*)0, 0, 1, 0, 0); }
                        }
                        is_type_name_flag_259=is_type_name(word_258,info);
                        info->p=head;
                        info->sline=head_sline;
                        if(_if_conditional409=is_type_name_flag_259,                        _if_conditional409) {
                            parse_sharp_v5(info);
                            multiple_assgin_var6=optional$2tuple3$3sTypephcharphboolphbool_value(((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value370=parse_type(info,(_Bool)1,(_Bool)1))));
                            type_260=(struct sType*)come_increment_ref_count(multiple_assgin_var6->v1);
                            name_261=(char*)come_increment_ref_count(multiple_assgin_var6->v2);
                            err_262=multiple_assgin_var6->v3;
                            if(right_value370 && right_value370 != __result_obj__) { come_call_finalizer(optional$2tuple3$3sTypephcharphboolphboolp_finalize,right_value370, (void*)0, (void*)0, 0, 1, 0, 0); }
                            if(_if_conditional410=!err_262,                            _if_conditional410) {
                                printf("%s %d: parse_type failed\n",info->sname,info->sline);
                                __result174__ = __result_obj__ = ((struct optional$2voidpbool*)(right_value372=optional$2voidpbool_initialize(((struct optional$2voidpbool*)(right_value371=(struct optional$2voidpbool*)come_calloc(1, sizeof(struct optional$2voidpbool)*(1), "07var.c", 1098))),((void*)0),(_Bool)0)));
                                if(type_260) { come_call_finalizer(sType_finalize,type_260, (void*)0, (void*)0, 0, 0, 0, 0); }
                                if(name_261) { name_261 = come_decrement_ref_count(name_261, (void*)0, (void*)0, 0, 0, 0); }
                                if(word_258) { word_258 = come_decrement_ref_count(word_258, (void*)0, (void*)0, 0, 0, 0); }
                                if(right_value371 && right_value371 != __result_obj__) { right_value371 = come_decrement_ref_count(right_value371, (void*)0, (void*)0, 1, 0, 0); }
                                return __result174__;
                            }
                            parse_sharp_v5(info);
                            if(_if_conditional411=*info->p==61,                            _if_conditional411) {
                                info->p++;
                                skip_spaces_and_lf(info);
                                parse_sharp_v5(info);
                                if(_if_conditional412=*info->p==123,                                _if_conditional412) {
                                    buf2_263=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value374=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value373=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "07var.c", 1109))))))));
                                    if(right_value373 && right_value373 != __result_obj__) { come_call_finalizer(buffer_finalize,right_value373, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    if(right_value374 && right_value374 != __result_obj__) { come_call_finalizer(buffer_finalize,right_value374, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    buffer_append_char(buf2_263,*info->p);
                                    info->p++;
                                    squort_264=(_Bool)0;
                                    dquort_265=(_Bool)0;
                                    nest_266=1;
                                    while(_while_condtional24=1,                                    _while_condtional24) {
                                        if(_if_conditional413=*info->p==0,                                        _if_conditional413) {
                                            err_msg(info,"unexpected source end in array initiailizer");
                                            __result175__ = __result_obj__ = ((struct optional$2voidpbool*)(right_value376=optional$2voidpbool_initialize(((struct optional$2voidpbool*)(right_value375=(struct optional$2voidpbool*)come_calloc(1, sizeof(struct optional$2voidpbool)*(1), "07var.c", 1120))),((void*)0),(_Bool)0)));
                                            if(buf2_263) { come_call_finalizer(buffer_finalize,buf2_263, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            if(type_260) { come_call_finalizer(sType_finalize,type_260, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            if(name_261) { name_261 = come_decrement_ref_count(name_261, (void*)0, (void*)0, 0, 0, 0); }
                                            if(word_258) { word_258 = come_decrement_ref_count(word_258, (void*)0, (void*)0, 0, 0, 0); }
                                            if(right_value375 && right_value375 != __result_obj__) { right_value375 = come_decrement_ref_count(right_value375, (void*)0, (void*)0, 1, 0, 0); }
                                            return __result175__;
                                        }
                                        else {
                                            if(_if_conditional414=*info->p==92,                                            _if_conditional414) {
                                                buffer_append_char(buf2_263,*info->p);
                                                info->p++;
                                                buffer_append_char(buf2_263,*info->p);
                                                info->p++;
                                            }
                                            else {
                                                if(_if_conditional415=!squort_264&&*info->p==34,                                                _if_conditional415) {
                                                    buffer_append_char(buf2_263,*info->p);
                                                    info->p++;
                                                    dquort_265=!dquort_265;
                                                }
                                                else {
                                                    if(_if_conditional416=!dquort_265&&*info->p==39,                                                    _if_conditional416) {
                                                        buffer_append_char(buf2_263,*info->p);
                                                        info->p++;
                                                        squort_264=!squort_264;
                                                    }
                                                    else {
                                                        if(_if_conditional417=squort_264||dquort_265,                                                        _if_conditional417) {
                                                            buffer_append_char(buf2_263,*info->p);
                                                            info->p++;
                                                        }
                                                        else {
                                                            if(_if_conditional418=*info->p==123,                                                            _if_conditional418) {
                                                                nest_266++;
                                                                buffer_append_char(buf2_263,*info->p);
                                                                info->p++;
                                                            }
                                                            else {
                                                                if(_if_conditional419=*info->p==125,                                                                _if_conditional419) {
                                                                    nest_266--;
                                                                    buffer_append_char(buf2_263,*info->p);
                                                                    info->p++;
                                                                    if(_if_conditional420=nest_266==0,                                                                    _if_conditional420) {
                                                                        skip_spaces_and_lf(info);
                                                                        break;
                                                                    }
                                                                }
                                                                else {
                                                                    buffer_append_char(buf2_263,*info->p);
                                                                    info->p++;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                    array_initializer_267=(char*)come_increment_ref_count(((char*)(right_value377=buffer_to_string(buf2_263))));
                                    if(right_value377 && right_value377 != __result_obj__) { right_value377 = come_decrement_ref_count(right_value377, (void*)0, (void*)0, 1, 0, 0); }
                                    _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1164);
                                    _inf_obj_value8=come_increment_ref_count(((struct sStoreNode*)(right_value379=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value378=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1164)))),(char*)come_increment_ref_count(name_261),((void*)0),((void*)0),(struct sType*)come_increment_ref_count(type_260),(_Bool)1,((void*)0),(char*)come_increment_ref_count(array_initializer_267),info))));
                                    _inf_value8->_protocol_obj=_inf_obj_value8;
                                    _inf_value8->finalize=(void*)sStoreNode_finalize;
                                    _inf_value8->clone=(void*)sStoreNode_clone;
                                    _inf_value8->compile=(void*)sStoreNode_compile;
                                    _inf_value8->sline=(void*)sStoreNode_sline;
                                    _inf_value8->sname=(void*)sStoreNode_sname;
                                    _inf_value8->terminated=(void*)sStoreNode_terminated;
                                    _inf_value8->kind=(void*)sStoreNode_kind;
                                    result_269=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value388=_inf_value8)));
                                    if(right_value378 && right_value378 != __result_obj__) { come_call_finalizer(sStoreNode_finalize,right_value378, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    if(right_value379 && right_value379 != __result_obj__) { come_call_finalizer(sStoreNode_finalize,right_value379, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    if(right_value388 && right_value388 != __result_obj__) { right_value388 = come_decrement_ref_count(right_value388, ((struct sNode*)right_value388)->finalize, ((struct sNode*)right_value388)->_protocol_obj, 1, 0, 0); } 
                                    __result178__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value390=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value389=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "07var.c", 1168)))),(struct sNode*)come_increment_ref_count(result_269),(_Bool)1)));
                                    if(buf2_263) { come_call_finalizer(buffer_finalize,buf2_263, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    if(array_initializer_267) { array_initializer_267 = come_decrement_ref_count(array_initializer_267, (void*)0, (void*)0, 0, 0, 0); }
                                    if(result_269) { result_269 = come_decrement_ref_count(result_269, ((struct sNode*)result_269)->finalize, ((struct sNode*)result_269)->_protocol_obj, 0, 0, 0); } 
                                    if(type_260) { come_call_finalizer(sType_finalize,type_260, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    if(name_261) { name_261 = come_decrement_ref_count(name_261, (void*)0, (void*)0, 0, 0, 0); }
                                    if(word_258) { word_258 = come_decrement_ref_count(word_258, (void*)0, (void*)0, 0, 0, 0); }
                                    if(right_value389 && right_value389 != __result_obj__) { right_value389 = come_decrement_ref_count(right_value389, (void*)0, (void*)0, 1, 0, 0); }
                                    return __result178__;
                                    if(buf2_263) { come_call_finalizer(buffer_finalize,buf2_263, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    if(array_initializer_267) { array_initializer_267 = come_decrement_ref_count(array_initializer_267, (void*)0, (void*)0, 0, 0, 0); }
                                    if(result_269) { result_269 = come_decrement_ref_count(result_269, ((struct sNode*)result_269)->finalize, ((struct sNode*)result_269)->_protocol_obj, 0, 0, 0); } 
                                }
                                else {
                                    parse_sharp_v5(info);
                                    right_value_270=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value391=expression_v13(info))));
                                    if(right_value391 && right_value391 != __result_obj__) { right_value391 = come_decrement_ref_count(right_value391, ((struct sNode*)right_value391)->finalize, ((struct sNode*)right_value391)->_protocol_obj, 1, 0, 0); } 
                                    parse_sharp_v5(info);
                                    right_values_271=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value393=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value392=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "07var.c", 1175))))))));
                                    if(right_value392 && right_value392 != __result_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value392, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    if(right_value393 && right_value393 != __result_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value393, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    while(_while_condtional25=*info->p==44,                                    _while_condtional25) {
                                        if(anonymous_var_nameX1414_272) { anonymous_var_nameX1414_272 = come_decrement_ref_count(anonymous_var_nameX1414_272, (void*)0, (void*)0, 0, 0, 0); }
                                    }
                                    __dec_obj160=right_value_270;
                                    right_value_270=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value394=post_position_operator3_v21((struct sNode*)come_increment_ref_count(right_value_270),info))));
                                    if(__dec_obj160) { __dec_obj160 = come_decrement_ref_count(__dec_obj160, ((struct sNode*)__dec_obj160)->finalize, ((struct sNode*)__dec_obj160)->_protocol_obj, 0,0,0); }
                                    if(right_value394 && right_value394 != __result_obj__) { right_value394 = come_decrement_ref_count(right_value394, ((struct sNode*)right_value394)->finalize, ((struct sNode*)right_value394)->_protocol_obj, 1, 0, 0); } 
                                    _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1182);
                                    _inf_obj_value9=come_increment_ref_count(((struct sStoreNode*)(right_value396=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value395=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1182)))),(char*)come_increment_ref_count(name_261),((void*)0),((void*)0),(struct sType*)come_increment_ref_count(type_260),(_Bool)1,(struct sNode*)come_increment_ref_count(right_value_270),((void*)0),info))));
                                    _inf_value9->_protocol_obj=_inf_obj_value9;
                                    _inf_value9->finalize=(void*)sStoreNode_finalize;
                                    _inf_value9->clone=(void*)sStoreNode_clone;
                                    _inf_value9->compile=(void*)sStoreNode_compile;
                                    _inf_value9->sline=(void*)sStoreNode_sline;
                                    _inf_value9->sname=(void*)sStoreNode_sname;
                                    _inf_value9->terminated=(void*)sStoreNode_terminated;
                                    _inf_value9->kind=(void*)sStoreNode_kind;
                                    result_274=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value405=_inf_value9)));
                                    if(right_value395 && right_value395 != __result_obj__) { come_call_finalizer(sStoreNode_finalize,right_value395, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    if(right_value396 && right_value396 != __result_obj__) { come_call_finalizer(sStoreNode_finalize,right_value396, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    if(right_value405 && right_value405 != __result_obj__) { right_value405 = come_decrement_ref_count(right_value405, ((struct sNode*)right_value405)->finalize, ((struct sNode*)right_value405)->_protocol_obj, 1, 0, 0); } 
                                    __result181__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value407=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value406=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "07var.c", 1186)))),(struct sNode*)come_increment_ref_count(result_274),(_Bool)1)));
                                    if(right_value_270) { right_value_270 = come_decrement_ref_count(right_value_270, ((struct sNode*)right_value_270)->finalize, ((struct sNode*)right_value_270)->_protocol_obj, 0, 0, 0); } 
                                    if(right_values_271) { come_call_finalizer(list$1sNodephp_finalize,right_values_271, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    if(result_274) { result_274 = come_decrement_ref_count(result_274, ((struct sNode*)result_274)->finalize, ((struct sNode*)result_274)->_protocol_obj, 0, 0, 0); } 
                                    if(type_260) { come_call_finalizer(sType_finalize,type_260, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    if(name_261) { name_261 = come_decrement_ref_count(name_261, (void*)0, (void*)0, 0, 0, 0); }
                                    if(word_258) { word_258 = come_decrement_ref_count(word_258, (void*)0, (void*)0, 0, 0, 0); }
                                    if(right_value406 && right_value406 != __result_obj__) { right_value406 = come_decrement_ref_count(right_value406, (void*)0, (void*)0, 1, 0, 0); }
                                    return __result181__;
                                    if(right_value_270) { right_value_270 = come_decrement_ref_count(right_value_270, ((struct sNode*)right_value_270)->finalize, ((struct sNode*)right_value_270)->_protocol_obj, 0, 0, 0); } 
                                    if(right_values_271) { come_call_finalizer(list$1sNodephp_finalize,right_values_271, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    if(result_274) { result_274 = come_decrement_ref_count(result_274, ((struct sNode*)result_274)->finalize, ((struct sNode*)result_274)->_protocol_obj, 0, 0, 0); } 
                                }
                            }
                            else {
                                _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1190);
                                _inf_obj_value10=come_increment_ref_count(((struct sStoreNode*)(right_value409=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value408=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1190)))),(char*)come_increment_ref_count(name_261),((void*)0),((void*)0),(struct sType*)come_increment_ref_count(type_260),(_Bool)1,((void*)0),((void*)0),info))));
                                _inf_value10->_protocol_obj=_inf_obj_value10;
                                _inf_value10->finalize=(void*)sStoreNode_finalize;
                                _inf_value10->clone=(void*)sStoreNode_clone;
                                _inf_value10->compile=(void*)sStoreNode_compile;
                                _inf_value10->sline=(void*)sStoreNode_sline;
                                _inf_value10->sname=(void*)sStoreNode_sname;
                                _inf_value10->terminated=(void*)sStoreNode_terminated;
                                _inf_value10->kind=(void*)sStoreNode_kind;
                                result_276=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value418=_inf_value10)));
                                if(right_value408 && right_value408 != __result_obj__) { come_call_finalizer(sStoreNode_finalize,right_value408, (void*)0, (void*)0, 0, 1, 0, 0); }
                                if(right_value409 && right_value409 != __result_obj__) { come_call_finalizer(sStoreNode_finalize,right_value409, (void*)0, (void*)0, 0, 1, 0, 0); }
                                if(right_value418 && right_value418 != __result_obj__) { right_value418 = come_decrement_ref_count(right_value418, ((struct sNode*)right_value418)->finalize, ((struct sNode*)right_value418)->_protocol_obj, 1, 0, 0); } 
                                __result184__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value420=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value419=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "07var.c", 1194)))),(struct sNode*)come_increment_ref_count(result_276),(_Bool)1)));
                                if(result_276) { result_276 = come_decrement_ref_count(result_276, ((struct sNode*)result_276)->finalize, ((struct sNode*)result_276)->_protocol_obj, 0, 0, 0); } 
                                if(type_260) { come_call_finalizer(sType_finalize,type_260, (void*)0, (void*)0, 0, 0, 0, 0); }
                                if(name_261) { name_261 = come_decrement_ref_count(name_261, (void*)0, (void*)0, 0, 0, 0); }
                                if(word_258) { word_258 = come_decrement_ref_count(word_258, (void*)0, (void*)0, 0, 0, 0); }
                                if(right_value419 && right_value419 != __result_obj__) { right_value419 = come_decrement_ref_count(right_value419, (void*)0, (void*)0, 1, 0, 0); }
                                return __result184__;
                                if(result_276) { result_276 = come_decrement_ref_count(result_276, ((struct sNode*)result_276)->finalize, ((struct sNode*)result_276)->_protocol_obj, 0, 0, 0); } 
                            }
                            if(type_260) { come_call_finalizer(sType_finalize,type_260, (void*)0, (void*)0, 0, 0, 0, 0); }
                            if(name_261) { name_261 = come_decrement_ref_count(name_261, (void*)0, (void*)0, 0, 0, 0); }
                        }
                        if(word_258) { word_258 = come_decrement_ref_count(word_258, (void*)0, (void*)0, 0, 0, 0); }
                    }
                }
            }
        }
    }
    __current_stack1__.buf = &buf;
    __current_stack1__.head = &head;
    __current_stack1__.head_sline = &head_sline;
    __current_stack1__.info = &info;
    __current_stack1__.is_type_name_flag_197 = &is_type_name_flag_197;
    __current_stack1__.multiple_declare_198 = &multiple_declare_198;
    __current_stack1__.multiple_declare2_205 = &multiple_declare2_205;
    __current_stack1__.fun_215 = &fun_215;
    result_277=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value424=optional$2sNodephbool_catch(((struct optional$2sNodephbool*)(right_value421=string_node_v5(buf,head,head_sline,info))),&__current_stack1__,(void*)method_block1_07varc))));
                        if(__current_stack1__.__method_block_result_kind__ == 3)
                    {
                        return (struct optional$2sNodephbool*)__current_stack1__.__method_block_return_value__;
                    }
    if(right_value421 && right_value421 != __result_obj__) { come_call_finalizer(optional$2sNodephboolp_finalize,right_value421, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value424 && right_value424 != __result_obj__) { right_value424 = come_decrement_ref_count(right_value424, ((struct sNode*)right_value424)->finalize, ((struct sNode*)right_value424)->_protocol_obj, 1, 0, 0); } 
    __result187__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value426=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value425=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "07var.c", 1203)))),(struct sNode*)come_increment_ref_count(result_277),(_Bool)1)));
    if(result_277) { result_277 = come_decrement_ref_count(result_277, ((struct sNode*)result_277)->finalize, ((struct sNode*)result_277)->_protocol_obj, 0, 0, 0); } 
    if(right_value425 && right_value425 != __result_obj__) { right_value425 = come_decrement_ref_count(right_value425, (void*)0, (void*)0, 1, 0, 0); }
    return __result187__;
    if(result_277) { result_277 = come_decrement_ref_count(result_277, ((struct sNode*)result_277)->finalize, ((struct sNode*)result_277)->_protocol_obj, 0, 0, 0); } 
}

static struct tuple3$3sTypephcharphbool* optional$2tuple3$3sTypephcharphboolphbool_value(struct optional$2tuple3$3sTypephcharphboolphbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional307;
struct tuple3$3sTypephcharphbool* default_value_201;
struct tuple3$3sTypephcharphbool* __result150__;
struct tuple3$3sTypephcharphbool* __result151__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_201, 0, sizeof(struct tuple3$3sTypephcharphbool*));
            if(_if_conditional307=self==((void*)0),            _if_conditional307) {
                memset(&default_value_201,0,sizeof(struct tuple3$3sTypephcharphbool*));
                __result150__ = __result_obj__ = default_value_201;
                return __result150__;
            }
            else {
                __result151__ = __result_obj__ = self->v1;
                return __result151__;
            }
}

static void optional$2tuple3$3sTypephcharphboolphboolp_finalize(struct optional$2tuple3$3sTypephcharphboolphbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional308;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional308=self!=((void*)0)&&self->v1!=((void*)0),            _if_conditional308) {
                if(self->v1) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional309;
_Bool _if_conditional310;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional309=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional309) {
                        if(self->v1) { come_call_finalizer(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    if(_if_conditional310=self!=((void*)0)&&self->v2!=((void*)0),                    _if_conditional310) {
                        if(self->v2) { self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, 0); }
                    }
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional318;
void* right_value260;
struct list_item$1charph* litem_218;
char* __dec_obj106;
_Bool _if_conditional319;
void* right_value261;
struct list_item$1charph* litem_219;
char* __dec_obj107;
void* right_value262;
struct list_item$1charph* litem_220;
char* __dec_obj108;
struct list$1charph* __result152__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&litem_218, 0, sizeof(struct list_item$1charph*));
memset(&litem_219, 0, sizeof(struct list_item$1charph*));
memset(&litem_220, 0, sizeof(struct list_item$1charph*));
                if(_if_conditional318=self->len==0,                _if_conditional318) {
                    litem_218=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value260=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 277))));
                    if(right_value260 && right_value260 != __result_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value260, (void*)0, (void*)0, 0, 1, 0, 0); }
                    litem_218->prev=((void*)0);
                    litem_218->next=((void*)0);
                    __dec_obj106=litem_218->item;
                    litem_218->item=(char*)come_increment_ref_count(item);
                    if(__dec_obj106) { __dec_obj106 = come_decrement_ref_count(__dec_obj106, (void*)0, (void*)0, 0,0,0); }
                    self->tail=litem_218;
                    self->head=litem_218;
                }
                else {
                    if(_if_conditional319=self->len==1,                    _if_conditional319) {
                        litem_219=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value261=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 287))));
                        if(right_value261 && right_value261 != __result_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value261, (void*)0, (void*)0, 0, 1, 0, 0); }
                        litem_219->prev=self->head;
                        litem_219->next=((void*)0);
                        __dec_obj107=litem_219->item;
                        litem_219->item=(char*)come_increment_ref_count(item);
                        if(__dec_obj107) { __dec_obj107 = come_decrement_ref_count(__dec_obj107, (void*)0, (void*)0, 0,0,0); }
                        self->tail=litem_219;
                        self->head->next=litem_219;
                    }
                    else {
                        litem_220=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value262=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 297))));
                        if(right_value262 && right_value262 != __result_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value262, (void*)0, (void*)0, 0, 1, 0, 0); }
                        litem_220->prev=self->tail;
                        litem_220->next=((void*)0);
                        __dec_obj108=litem_220->item;
                        litem_220->item=(char*)come_increment_ref_count(item);
                        if(__dec_obj108) { __dec_obj108 = come_decrement_ref_count(__dec_obj108, (void*)0, (void*)0, 0,0,0); }
                        self->tail->next=litem_220;
                        self->tail=litem_220;
                    }
                }
                self->len++;
                __result152__ = __result_obj__ = self;
                if(item) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
                return __result152__;
                if(item) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
}

static struct optional$2sNodephbool* optional$2sNodephbool_initialize(struct optional$2sNodephbool* self, struct sNode* v1, _Bool v2){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
struct sNode* __dec_obj117;
struct optional$2sNodephbool* __result155__;
memset(&__result_obj__, 0, sizeof(void*));
                __dec_obj117=self->v1;
                self->v1=(struct sNode*)come_increment_ref_count(v1);
                if(__dec_obj117) { __dec_obj117 = come_decrement_ref_count(__dec_obj117, ((struct sNode*)__dec_obj117)->finalize, ((struct sNode*)__dec_obj117)->_protocol_obj, 0,0,0); }
                self->v2=v2;
                __result155__ = __result_obj__ = self;
                if(self) { come_call_finalizer(optional$2sNodephboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                if(v1) { v1 = come_decrement_ref_count(v1, ((struct sNode*)v1)->finalize, ((struct sNode*)v1)->_protocol_obj, 0, 1, 0); } 
                return __result155__;
                if(self) { come_call_finalizer(optional$2sNodephboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                if(v1) { v1 = come_decrement_ref_count(v1, ((struct sNode*)v1)->finalize, ((struct sNode*)v1)->_protocol_obj, 0, 1, 0); } 
}

static void optional$2sNodephboolp_finalize(struct optional$2sNodephbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional338;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional338=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional338) {
                        if(self->v1) { self->v1 = come_decrement_ref_count(self->v1, ((struct sNode*)self->v1)->finalize, ((struct sNode*)self->v1)->_protocol_obj, 0, 0, 0); } 
                    }
}

static struct optional$2voidpbool* optional$2voidpbool_initialize(struct optional$2voidpbool* self, void* v1, _Bool v2){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
struct optional$2voidpbool* __result157__;
memset(&__result_obj__, 0, sizeof(void*));
                self->v1=v1;
                self->v2=v2;
                __result157__ = __result_obj__ = self;
                if(self) { come_call_finalizer(optional$2voidpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result157__;
                if(self) { come_call_finalizer(optional$2voidpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2voidpboolp_finalize(struct optional$2voidpbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional340;
_Bool _if_conditional341;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional340=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional340) {
                    if(self->v1) { come_call_finalizer(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                if(_if_conditional341=self!=((void*)0)&&self->v2!=((void*)0),                _if_conditional341) {
                    if(self->v2) { self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, 0); }
                }
}

static struct tuple3$3sTypephcharphvoidp* tuple3$3sTypephcharphvoidp_initialize(struct tuple3$3sTypephcharphvoidp* self, struct sType* v1, char* v2, void* v3){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value289;
struct sType* __dec_obj118;
void* right_value290;
char* __dec_obj119;
struct tuple3$3sTypephcharphvoidp* __result159__;
memset(&__result_obj__, 0, sizeof(void*));
                __dec_obj118=self->v1;
                self->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value289=sType_clone(v1))));
                if(__dec_obj118) { come_call_finalizer(sType_finalize,__dec_obj118, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(right_value289 && right_value289 != __result_obj__) { come_call_finalizer(sType_finalize,right_value289, (void*)0, (void*)0, 0, 1, 0, 0); }
                __dec_obj119=self->v2;
                self->v2=(char*)come_increment_ref_count(((char*)(right_value290=string_clone(v2))));
                if(__dec_obj119) { __dec_obj119 = come_decrement_ref_count(__dec_obj119, (void*)0, (void*)0, 0,0,0); }
                if(right_value290 && right_value290 != __result_obj__) { right_value290 = come_decrement_ref_count(right_value290, (void*)0, (void*)0, 1, 0, 0); }
                self->v3=v3;
                __result159__ = __result_obj__ = self;
                if(self) { come_call_finalizer(tuple3$3sTypephcharphvoidpp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                if(v1) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                if(v2) { v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0, 1, 0); }
                return __result159__;
                if(self) { come_call_finalizer(tuple3$3sTypephcharphvoidpp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                if(v1) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                if(v2) { v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0, 1, 0); }
}

static void tuple3$3sTypephcharphvoidpp_finalize(struct tuple3$3sTypephcharphvoidp* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional342;
_Bool _if_conditional343;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional342=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional342) {
                        if(self->v1) { come_call_finalizer(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    if(_if_conditional343=self!=((void*)0)&&self->v2!=((void*)0),                    _if_conditional343) {
                        if(self->v2) { self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, 0); }
                    }
}

static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephph_push_back(struct list$1tuple3$3sTypephcharphsNodephph* self, struct tuple3$3sTypephcharphsNodeph* item){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional344;
void* right_value292;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_232;
struct tuple3$3sTypephcharphsNodeph* __dec_obj120;
_Bool _if_conditional345;
void* right_value293;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_233;
struct tuple3$3sTypephcharphsNodeph* __dec_obj121;
void* right_value294;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_234;
struct tuple3$3sTypephcharphsNodeph* __dec_obj122;
struct list$1tuple3$3sTypephcharphsNodephph* __result160__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&litem_232, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
memset(&litem_233, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
memset(&litem_234, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
                if(_if_conditional344=self->len==0,                _if_conditional344) {
                    litem_232=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(right_value292=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "./comelang2.h", 277))));
                    if(right_value292 && right_value292 != __result_obj__) { come_call_finalizer(list_item$1tuple3$3sTypephcharphsNodephphp_finalize,right_value292, (void*)0, (void*)0, 0, 1, 0, 0); }
                    litem_232->prev=((void*)0);
                    litem_232->next=((void*)0);
                    __dec_obj120=litem_232->item;
                    litem_232->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
                    if(__dec_obj120) { come_call_finalizer(tuple3$3sTypephcharphsNodeph_finalize,__dec_obj120, (void*)0, (void*)0, 0, 0, 0, 0); }
                    self->tail=litem_232;
                    self->head=litem_232;
                }
                else {
                    if(_if_conditional345=self->len==1,                    _if_conditional345) {
                        litem_233=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(right_value293=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "./comelang2.h", 287))));
                        if(right_value293 && right_value293 != __result_obj__) { come_call_finalizer(list_item$1tuple3$3sTypephcharphsNodephphp_finalize,right_value293, (void*)0, (void*)0, 0, 1, 0, 0); }
                        litem_233->prev=self->head;
                        litem_233->next=((void*)0);
                        __dec_obj121=litem_233->item;
                        litem_233->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
                        if(__dec_obj121) { come_call_finalizer(tuple3$3sTypephcharphsNodeph_finalize,__dec_obj121, (void*)0, (void*)0, 0, 0, 0, 0); }
                        self->tail=litem_233;
                        self->head->next=litem_233;
                    }
                    else {
                        litem_234=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(right_value294=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "./comelang2.h", 297))));
                        if(right_value294 && right_value294 != __result_obj__) { come_call_finalizer(list_item$1tuple3$3sTypephcharphsNodephphp_finalize,right_value294, (void*)0, (void*)0, 0, 1, 0, 0); }
                        litem_234->prev=self->tail;
                        litem_234->next=((void*)0);
                        __dec_obj122=litem_234->item;
                        litem_234->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
                        if(__dec_obj122) { come_call_finalizer(tuple3$3sTypephcharphsNodeph_finalize,__dec_obj122, (void*)0, (void*)0, 0, 0, 0, 0); }
                        self->tail->next=litem_234;
                        self->tail=litem_234;
                    }
                }
                self->len++;
                __result160__ = __result_obj__ = self;
                if(item) { come_call_finalizer(tuple3$3sTypephcharphsNodephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result160__;
                if(item) { come_call_finalizer(tuple3$3sTypephcharphsNodephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct tuple3$3sTypephcharphsNodeph* tuple3$3sTypephcharphsNodeph_initialize(struct tuple3$3sTypephcharphsNodeph* self, struct sType* v1, char* v2, struct sNode* v3){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value318;
struct sType* __dec_obj130;
void* right_value319;
char* __dec_obj131;
void* right_value320;
struct sNode* __dec_obj132;
struct tuple3$3sTypephcharphsNodeph* __result164__;
memset(&__result_obj__, 0, sizeof(void*));
                        __dec_obj130=self->v1;
                        self->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value318=sType_clone(v1))));
                        if(__dec_obj130) { come_call_finalizer(sType_finalize,__dec_obj130, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(right_value318 && right_value318 != __result_obj__) { come_call_finalizer(sType_finalize,right_value318, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __dec_obj131=self->v2;
                        self->v2=(char*)come_increment_ref_count(((char*)(right_value319=string_clone(v2))));
                        if(__dec_obj131) { __dec_obj131 = come_decrement_ref_count(__dec_obj131, (void*)0, (void*)0, 0,0,0); }
                        if(right_value319 && right_value319 != __result_obj__) { right_value319 = come_decrement_ref_count(right_value319, (void*)0, (void*)0, 1, 0, 0); }
                        __dec_obj132=self->v3;
                        self->v3=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value320=sNode_clone(v3))));
                        if(__dec_obj132) { __dec_obj132 = come_decrement_ref_count(__dec_obj132, ((struct sNode*)__dec_obj132)->finalize, ((struct sNode*)__dec_obj132)->_protocol_obj, 0,0,0); }
                        if(right_value320 && right_value320 != __result_obj__) { right_value320 = come_decrement_ref_count(right_value320, ((struct sNode*)right_value320)->finalize, ((struct sNode*)right_value320)->_protocol_obj, 1, 0, 0); } 
                        __result164__ = __result_obj__ = self;
                        if(self) { come_call_finalizer(tuple3$3sTypephcharphsNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                        if(v1) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                        if(v2) { v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0, 1, 0); }
                        if(v3) { v3 = come_decrement_ref_count(v3, ((struct sNode*)v3)->finalize, ((struct sNode*)v3)->_protocol_obj, 0, 1, 0); } 
                        return __result164__;
                        if(self) { come_call_finalizer(tuple3$3sTypephcharphsNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                        if(v1) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                        if(v2) { v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0, 1, 0); }
                        if(v3) { v3 = come_decrement_ref_count(v3, ((struct sNode*)v3)->finalize, ((struct sNode*)v3)->_protocol_obj, 0, 1, 0); } 
}

static void sLoadNode_finalize(struct sLoadNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional402;
_Bool _if_conditional403;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional402=self!=((void*)0)&&self->name!=((void*)0),                            _if_conditional402) {
                                if(self->name) { self->name = come_decrement_ref_count(self->name, (void*)0, (void*)0, 0, 0, 0); }
                            }
                            if(_if_conditional403=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional403) {
                                if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                            }
}

static struct sLoadNode* sLoadNode_clone(struct sLoadNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional404;
struct sLoadNode* __result171__;
void* right_value360;
struct sLoadNode* result_256;
_Bool _if_conditional405;
void* right_value361;
char* __dec_obj148;
_Bool _if_conditional406;
_Bool _if_conditional407;
void* right_value362;
char* __dec_obj149;
struct sLoadNode* __result172__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_256, 0, sizeof(struct sLoadNode*));
                            if(_if_conditional404=self==(void*)0,                            _if_conditional404) {
                                __result171__ = __result_obj__ = (void*)0;
                                return __result171__;
                            }
                            result_256=(struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(right_value360=(struct sLoadNode*)come_calloc(1, sizeof(struct sLoadNode)*(1), "sLoadNode_clone", 3))));
                            if(right_value360 && right_value360 != __result_obj__) { come_call_finalizer(sLoadNode_finalize,right_value360, (void*)0, (void*)0, 0, 1, 0, 0); }
                            if(_if_conditional405=self!=((void*)0)&&self->name!=((void*)0),                            _if_conditional405) {
                                __dec_obj148=result_256->name;
                                result_256->name=(char*)come_increment_ref_count(((char*)(right_value361=string_clone(self->name))));
                                if(__dec_obj148) { __dec_obj148 = come_decrement_ref_count(__dec_obj148, (void*)0, (void*)0, 0,0,0); }
                                if(right_value361 && right_value361 != __result_obj__) { right_value361 = come_decrement_ref_count(right_value361, (void*)0, (void*)0, 1, 0, 0); }
                            }
                            if(_if_conditional406=self!=((void*)0),                            _if_conditional406) {
                                result_256->sline=self->sline;
                            }
                            if(_if_conditional407=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional407) {
                                __dec_obj149=result_256->sname;
                                result_256->sname=(char*)come_increment_ref_count(((char*)(right_value362=string_clone(self->sname))));
                                if(__dec_obj149) { __dec_obj149 = come_decrement_ref_count(__dec_obj149, (void*)0, (void*)0, 0,0,0); }
                                if(right_value362 && right_value362 != __result_obj__) { right_value362 = come_decrement_ref_count(right_value362, (void*)0, (void*)0, 1, 0, 0); }
                            }
                            __result172__ = __result_obj__ = result_256;
                            if(result_256) { come_call_finalizer(sLoadNode_finalize,result_256, (void*)0, (void*)0, 0, 0, 1, 0); }
                            return __result172__;
                            if(result_256) { come_call_finalizer(sLoadNode_finalize,result_256, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sStoreNode_finalize(struct sStoreNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional455;
_Bool _if_conditional456;
_Bool _if_conditional457;
_Bool _if_conditional458;
_Bool _if_conditional459;
_Bool _if_conditional460;
_Bool _if_conditional461;
memset(&__result_obj__, 0, sizeof(void*));
                                    if(_if_conditional455=self!=((void*)0)&&self->name!=((void*)0),                                    _if_conditional455) {
                                        if(self->name) { self->name = come_decrement_ref_count(self->name, (void*)0, (void*)0, 0, 0, 0); }
                                    }
                                    if(_if_conditional456=self!=((void*)0)&&self->multiple_assign!=((void*)0),                                    _if_conditional456) {
                                        if(self->multiple_assign) { come_call_finalizer(list$1charphp_finalize,self->multiple_assign, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    }
                                    if(_if_conditional457=self!=((void*)0)&&self->multiple_declare!=((void*)0),                                    _if_conditional457) {
                                        if(self->multiple_declare) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,self->multiple_declare, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    }
                                    if(_if_conditional458=self!=((void*)0)&&self->right_value!=((void*)0),                                    _if_conditional458) {
                                        if(self->right_value) { self->right_value = come_decrement_ref_count(self->right_value, ((struct sNode*)self->right_value)->finalize, ((struct sNode*)self->right_value)->_protocol_obj, 0, 0, 0); } 
                                    }
                                    if(_if_conditional459=self!=((void*)0)&&self->type!=((void*)0),                                    _if_conditional459) {
                                        if(self->type) { come_call_finalizer(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    }
                                    if(_if_conditional460=self!=((void*)0)&&self->array_initializer!=((void*)0),                                    _if_conditional460) {
                                        if(self->array_initializer) { self->array_initializer = come_decrement_ref_count(self->array_initializer, (void*)0, (void*)0, 0, 0, 0); }
                                    }
                                    if(_if_conditional461=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional461) {
                                        if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                                    }
}

static struct sStoreNode* sStoreNode_clone(struct sStoreNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional462;
struct sStoreNode* __result182__;
void* right_value410;
struct sStoreNode* result_275;
_Bool _if_conditional463;
void* right_value411;
char* __dec_obj168;
_Bool _if_conditional464;
void* right_value412;
struct list$1charph* __dec_obj169;
_Bool _if_conditional465;
void* right_value413;
struct list$1tuple3$3sTypephcharphsNodephph* __dec_obj170;
_Bool _if_conditional466;
void* right_value414;
struct sNode* __dec_obj171;
_Bool _if_conditional467;
void* right_value415;
struct sType* __dec_obj172;
_Bool _if_conditional468;
void* right_value416;
char* __dec_obj173;
_Bool _if_conditional469;
_Bool _if_conditional470;
_Bool _if_conditional471;
void* right_value417;
char* __dec_obj174;
struct sStoreNode* __result183__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_275, 0, sizeof(struct sStoreNode*));
                                    if(_if_conditional462=self==(void*)0,                                    _if_conditional462) {
                                        __result182__ = __result_obj__ = (void*)0;
                                        return __result182__;
                                    }
                                    result_275=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value410=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "sStoreNode_clone", 3))));
                                    if(right_value410 && right_value410 != __result_obj__) { come_call_finalizer(sStoreNode_finalize,right_value410, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    if(_if_conditional463=self!=((void*)0)&&self->name!=((void*)0),                                    _if_conditional463) {
                                        __dec_obj168=result_275->name;
                                        result_275->name=(char*)come_increment_ref_count(((char*)(right_value411=string_clone(self->name))));
                                        if(__dec_obj168) { __dec_obj168 = come_decrement_ref_count(__dec_obj168, (void*)0, (void*)0, 0,0,0); }
                                        if(right_value411 && right_value411 != __result_obj__) { right_value411 = come_decrement_ref_count(right_value411, (void*)0, (void*)0, 1, 0, 0); }
                                    }
                                    if(_if_conditional464=self!=((void*)0)&&self->multiple_assign!=((void*)0),                                    _if_conditional464) {
                                        __dec_obj169=result_275->multiple_assign;
                                        result_275->multiple_assign=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value412=list$1charphp_clone(self->multiple_assign))));
                                        if(__dec_obj169) { come_call_finalizer(list$1charph_finalize,__dec_obj169, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        if(right_value412 && right_value412 != __result_obj__) { come_call_finalizer(list$1charphp_finalize,right_value412, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    }
                                    if(_if_conditional465=self!=((void*)0)&&self->multiple_declare!=((void*)0),                                    _if_conditional465) {
                                        __dec_obj170=result_275->multiple_declare;
                                        result_275->multiple_declare=(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list$1tuple3$3sTypephcharphsNodephph*)(right_value413=list$1tuple3$3sTypephcharphsNodephphp_clone(self->multiple_declare))));
                                        if(__dec_obj170) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephph_finalize,__dec_obj170, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        if(right_value413 && right_value413 != __result_obj__) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,right_value413, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    }
                                    if(_if_conditional466=self!=((void*)0)&&self->right_value!=((void*)0),                                    _if_conditional466) {
                                        __dec_obj171=result_275->right_value;
                                        result_275->right_value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value414=sNode_clone(self->right_value))));
                                        if(__dec_obj171) { __dec_obj171 = come_decrement_ref_count(__dec_obj171, ((struct sNode*)__dec_obj171)->finalize, ((struct sNode*)__dec_obj171)->_protocol_obj, 0,0,0); }
                                        if(right_value414 && right_value414 != __result_obj__) { right_value414 = come_decrement_ref_count(right_value414, ((struct sNode*)right_value414)->finalize, ((struct sNode*)right_value414)->_protocol_obj, 1, 0, 0); } 
                                    }
                                    if(_if_conditional467=self!=((void*)0)&&self->type!=((void*)0),                                    _if_conditional467) {
                                        __dec_obj172=result_275->type;
                                        result_275->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value415=sType_clone(self->type))));
                                        if(__dec_obj172) { come_call_finalizer(sType_finalize,__dec_obj172, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        if(right_value415 && right_value415 != __result_obj__) { come_call_finalizer(sType_finalize,right_value415, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    }
                                    if(_if_conditional468=self!=((void*)0)&&self->array_initializer!=((void*)0),                                    _if_conditional468) {
                                        __dec_obj173=result_275->array_initializer;
                                        result_275->array_initializer=(char*)come_increment_ref_count(((char*)(right_value416=string_clone(self->array_initializer))));
                                        if(__dec_obj173) { __dec_obj173 = come_decrement_ref_count(__dec_obj173, (void*)0, (void*)0, 0,0,0); }
                                        if(right_value416 && right_value416 != __result_obj__) { right_value416 = come_decrement_ref_count(right_value416, (void*)0, (void*)0, 1, 0, 0); }
                                    }
                                    if(_if_conditional469=self!=((void*)0),                                    _if_conditional469) {
                                        result_275->alloc=self->alloc;
                                    }
                                    if(_if_conditional470=self!=((void*)0),                                    _if_conditional470) {
                                        result_275->sline=self->sline;
                                    }
                                    if(_if_conditional471=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional471) {
                                        __dec_obj174=result_275->sname;
                                        result_275->sname=(char*)come_increment_ref_count(((char*)(right_value417=string_clone(self->sname))));
                                        if(__dec_obj174) { __dec_obj174 = come_decrement_ref_count(__dec_obj174, (void*)0, (void*)0, 0,0,0); }
                                        if(right_value417 && right_value417 != __result_obj__) { right_value417 = come_decrement_ref_count(right_value417, (void*)0, (void*)0, 1, 0, 0); }
                                    }
                                    __result183__ = __result_obj__ = result_275;
                                    if(result_275) { come_call_finalizer(sStoreNode_finalize,result_275, (void*)0, (void*)0, 0, 0, 1, 0); }
                                    return __result183__;
                                    if(result_275) { come_call_finalizer(sStoreNode_finalize,result_275, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct sNode* optional$2sNodephbool_catch(struct optional$2sNodephbool* self, void* parent, void (*block)(void*)){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional472;
_Bool _if_conditional473;
struct sNode* __result185__;
struct sNode* __result186__;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional472=!self->v2,        _if_conditional472) {
            block(parent);
            if(_if_conditional473=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,            _if_conditional473) {
                __result185__ = __result_obj__ = self->v1;
                return __result185__;
            }
        }
        __result186__ = __result_obj__ = self->v1;
        return __result186__;
}

void method_block1_07varc(struct __current_stack1__* parent){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value422;
void* right_value423;
memset(&__result_obj__, 0, sizeof(void*));
        if(right_value422 && right_value422 != __result_obj__) { right_value422 = come_decrement_ref_count(right_value422, (void*)0, (void*)0, 1, 0, 0); }
                    ((struct __current_stack1__*) parent)->__method_block_result_kind__ = 3;
            ((struct __current_stack1__*) parent)->__method_block_return_value__ = (struct optional$2voidpbool*)come_increment_ref_count(((struct optional$2voidpbool*)(right_value423=optional$2voidpbool_initialize(((struct optional$2voidpbool*)(right_value422=(struct optional$2voidpbool*)come_calloc(1, sizeof(struct optional$2voidpbool)*(1), "07var.c", 1201))),((void*)0),(_Bool)0))));
        return;}

