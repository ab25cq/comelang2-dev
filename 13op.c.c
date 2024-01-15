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
struct optional$2sFunpbool
{
    struct sFun* v1;
    _Bool v2;
};
struct optional$2sTypephbool
{
    struct sType* v1;
    _Bool v2;
};
struct sNullNode
{
    int sline;
    char* sname;
};
struct sNilNode
{
    int sline;
    char* sname;
};
struct sAddNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
    int sline;
    char* sname;
};
struct sSubNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
    int sline;
    char* sname;
};
struct sMultNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
    int sline;
    char* sname;
};
struct sDivNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
    int sline;
    char* sname;
};
struct sModNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
    int sline;
    char* sname;
};
struct sLShiftNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
    int sline;
    char* sname;
};
struct sRShiftNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
    int sline;
    char* sname;
};
struct sGtEqNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
    int sline;
    char* sname;
};
struct sLtEqNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
    int sline;
    char* sname;
};
struct sLtNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
    int sline;
    char* sname;
};
struct sGtNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
    int sline;
    char* sname;
};
struct sEqNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
    int sline;
    char* sname;
};
struct sNotEqNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
    int sline;
    char* sname;
};
struct sEq2Node
{
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
    int sline;
    char* sname;
};
struct sNotEq2Node
{
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
    int sline;
    char* sname;
};
struct sAndNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
    int sline;
    char* sname;
};
struct sXOrNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
    int sline;
    char* sname;
};
struct sOrNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
    int sline;
    char* sname;
};
struct sAndAndNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
    int sline;
    char* sname;
};
struct sOrOrNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
    int sline;
    char* sname;
};
struct sCommaNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    int sline;
    char* sname;
};
struct sConditionalNode
{
    struct sNode* mValue1;
    struct sNode* mValue2;
    struct sNode* mValue3;
    int sline;
    char* sname;
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
struct optional$2voidpbool
{
    void* v1;
    _Bool v2;
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

struct sNode* post_op_v13(struct sNode* node, struct sInfo* info);

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

_Bool operator_overload_fun(struct sType* type, char* fun_name, struct CVALUE* left_value, struct CVALUE* right_value, struct sInfo* info);

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
static int list$1sTypeph_length(struct list$1sTypeph* self);
static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value);
static _Bool optional$2boolbool_value(struct optional$2boolbool* self);
static void optional$2boolboolp_finalize(struct optional$2boolbool* self);
static struct optional$2sFunpbool* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key);
static struct optional$2sFunpbool* optional$2sFunpbool_initialize(struct optional$2sFunpbool* self, struct sFun* v1, _Bool v2);
static void optional$2sFunpboolp_finalize(struct optional$2sFunpbool* self);
static struct sFun* optional$2sFunpbool_value(struct optional$2sFunpbool* self);
static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self);
static void CVALUE_finalize(struct CVALUE* self);
static struct optional$2sTypephbool* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
static struct optional$2sTypephbool* optional$2sTypephbool_initialize(struct optional$2sTypephbool* self, struct sType* v1, _Bool v2);
static void optional$2sTypephboolp_finalize(struct optional$2sTypephbool* self);
static struct sType* optional$2sTypephbool_value(struct optional$2sTypephbool* self);
static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
struct sNullNode* sNullNode_initialize(struct sNullNode* self, struct sInfo* info);

_Bool sNullNode_terminated();

char* sNullNode_kind();

_Bool sNullNode_compile(struct sNullNode* self, struct sInfo* info);

int sNullNode_sline(struct sNullNode* self, struct sInfo* info);

char* sNullNode_sname(struct sNullNode* self, struct sInfo* info);

struct sNode* create_null_object(struct sInfo* info);

struct sNilNode* sNilNode_initialize(struct sNilNode* self, struct sInfo* info);

_Bool sNilNode_terminated();

char* sNilNode_kind();

_Bool sNilNode_compile(struct sNilNode* self, struct sInfo* info);

int sNilNode_sline(struct sNilNode* self, struct sInfo* info);

char* sNilNode_sname(struct sNilNode* self, struct sInfo* info);

struct sAddNode* sAddNode_initialize(struct sAddNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sAddNode_terminated();

char* sAddNode_kind();

_Bool sAddNode_compile(struct sAddNode* self, struct sInfo* info);

int sAddNode_sline(struct sAddNode* self, struct sInfo* info);

char* sAddNode_sname(struct sAddNode* self, struct sInfo* info);

struct sSubNode* sSubNode_initialize(struct sSubNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sSubNode_terminated();

char* sSubNode_kind();

_Bool sSubNode_compile(struct sSubNode* self, struct sInfo* info);

int sSubNode_sline(struct sSubNode* self, struct sInfo* info);

char* sSubNode_sname(struct sSubNode* self, struct sInfo* info);

struct sMultNode* sMultNode_initialize(struct sMultNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sMultNode_terminated();

char* sMultNode_kind();

_Bool sMultNode_compile(struct sMultNode* self, struct sInfo* info);

int sMultNode_sline(struct sMultNode* self, struct sInfo* info);

char* sMultNode_sname(struct sMultNode* self, struct sInfo* info);

struct sDivNode* sDivNode_initialize(struct sDivNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sDivNode_terminated();

char* sDivNode_kind();

_Bool sDivNode_compile(struct sDivNode* self, struct sInfo* info);

int sDivNode_sline(struct sDivNode* self, struct sInfo* info);

char* sDivNode_sname(struct sDivNode* self, struct sInfo* info);

struct sModNode* sModNode_initialize(struct sModNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sModNode_terminated();

char* sModNode_kind();

_Bool sModNode_compile(struct sModNode* self, struct sInfo* info);

int sModNode_sline(struct sModNode* self, struct sInfo* info);

char* sModNode_sname(struct sModNode* self, struct sInfo* info);

struct sLShiftNode* sLShiftNode_initialize(struct sLShiftNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sLShiftNode_terminated();

char* sLShiftNode_kind();

_Bool sLShiftNode_compile(struct sLShiftNode* self, struct sInfo* info);

int sLShiftNode_sline(struct sLShiftNode* self, struct sInfo* info);

char* sLShiftNode_sname(struct sLShiftNode* self, struct sInfo* info);

struct sRShiftNode* sRShiftNode_initialize(struct sRShiftNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sRShiftNode_terminated();

char* sRShiftNode_kind();

_Bool sRShiftNode_compile(struct sRShiftNode* self, struct sInfo* info);

int sRShiftNode_sline(struct sRShiftNode* self, struct sInfo* info);

char* sRShiftNode_sname(struct sLShiftNode* self, struct sInfo* info);

struct sGtEqNode* sGtEqNode_initialize(struct sGtEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sGtEqNode_terminated();

char* sGtEqNode_kind();

_Bool sGtEqNode_compile(struct sGtEqNode* self, struct sInfo* info);

int sGtEqNode_sline(struct sGtEqNode* self, struct sInfo* info);

char* sGtEqNode_sname(struct sGtEqNode* self, struct sInfo* info);

struct sLtEqNode* sLtEqNode_initialize(struct sLtEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sLtEqNode_terminated();

char* sLtEqNode_kind();

_Bool sLtEqNode_compile(struct sLtEqNode* self, struct sInfo* info);

int sLtEqNode_sline(struct sLtEqNode* self, struct sInfo* info);

char* sLtEqNode_sname(struct sLtEqNode* self, struct sInfo* info);

struct sLtNode* sLtNode_initialize(struct sLtNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sLtNode_terminated();

char* sLtNode_kind();

_Bool sLtNode_compile(struct sLtNode* self, struct sInfo* info);

int sLtNode_sline(struct sLtNode* self, struct sInfo* info);

char* sLtNode_sname(struct sLtNode* self, struct sInfo* info);

struct sGtNode* sGtNode_initialize(struct sGtNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sGtNode_terminated();

char* sGtNode_kind();

_Bool sGtNode_compile(struct sGtNode* self, struct sInfo* info);

int sGtNode_sline(struct sGtNode* self, struct sInfo* info);

char* sGtNode_sname(struct sGtNode* self, struct sInfo* info);

struct sEqNode* sEqNode_initialize(struct sEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

int sEqNode_sline(struct sEqNode* self, struct sInfo* info);

char* sEqNode_sname(struct sEqNode* self, struct sInfo* info);

_Bool sEqNode_terminated();

char* sEqNode_kind();

_Bool sEqNode_compile(struct sEqNode* self, struct sInfo* info);

struct sNotEqNode* sNotEqNode_initialize(struct sNotEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sNotEqNode_terminated();

char* sNotEqNode_kind();

_Bool sNotEqNode_compile(struct sNotEqNode* self, struct sInfo* info);

int sNotEqNode_sline(struct sNotEqNode* self, struct sInfo* info);

char* sNotEqNode_sname(struct sNotEqNode* self, struct sInfo* info);

struct sEq2Node* sEq2Node_initialize(struct sEq2Node* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sEq2Node_terminated();

char* sEq2Node_kind();

_Bool sEq2Node_compile(struct sEqNode* self, struct sInfo* info);

int sEq2Node_sline(struct sEq2Node* self, struct sInfo* info);

char* sEq2Node_sname(struct sEq2Node* self, struct sInfo* info);

struct sNotEq2Node* sNotEq2Node_initialize(struct sNotEq2Node* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sNotEq2Node_terminated();

char* sNotEq2Node_kind();

_Bool sNotEq2Node_compile(struct sNotEq2Node* self, struct sInfo* info);

int sNotEq2Node_sline(struct sNotEq2Node* self, struct sInfo* info);

char* sNotEq2Node_sname(struct sNotEq2Node* self, struct sInfo* info);

struct sAndNode* sAndNode_initialize(struct sAndNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sAndNode_terminated();

char* sAndNode_kind();

_Bool sAndNode_compile(struct sAndNode* self, struct sInfo* info);

int sAndNode_sline(struct sAndNode* self, struct sInfo* info);

char* sAndNode_sname(struct sAndNode* self, struct sInfo* info);

struct sXOrNode* sXOrNode_initialize(struct sXOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sXOrNode_terminated();

char* sXOrNode_kind();

_Bool sXOrNode_compile(struct sXOrNode* self, struct sInfo* info);

int sXOrNode_sline(struct sXOrNode* self, struct sInfo* info);

char* sXOrNode_sname(struct sXOrNode* self, struct sInfo* info);

struct sOrNode* sOrNode_initialize(struct sOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sOrNode_terminated();

char* sOrNode_kind();

_Bool sOrNode_compile(struct sOrNode* self, struct sInfo* info);

int sOrNode_sline(struct sOrNode* self, struct sInfo* info);

char* sOrNode_sname(struct sOrNode* self, struct sInfo* info);

struct sAndAndNode* sAndAndNode_initialize(struct sAndAndNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sAndAndNode_terminated();

char* sAndAndNode_kind();

_Bool sAndAndNode_compile(struct sAndAndNode* self, struct sInfo* info);

int sAndAndNode_sline(struct sAndAndNode* self, struct sInfo* info);

char* sAndAndNode_sname(struct sAndAndNode* self, struct sInfo* info);

struct sOrOrNode* sOrOrNode_initialize(struct sOrOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sOrOrNode_terminated();

char* sOrOrNode_kind();

_Bool sOrOrNode_compile(struct sOrOrNode* self, struct sInfo* info);

int sOrOrNode_sline(struct sOrOrNode* self, struct sInfo* info);

char* sOrOrNode_sname(struct sOrOrNode* self, struct sInfo* info);

struct sCommaNode* sCommaNode_initialize(struct sCommaNode* self, struct sNode* left, struct sNode* right, struct sInfo* info);

_Bool sCommaNode_terminated();

char* sCommaNode_kind();

_Bool sCommaNode_compile(struct sCommaNode* self, struct sInfo* info);

int sCommaNode_sline(struct sCommaNode* self, struct sInfo* info);

char* sCommaNode_sname(struct sCommaNode* self, struct sInfo* info);

struct sConditionalNode* sConditionalNode_initialize(struct sConditionalNode* self, struct sNode* value1, struct sNode* value2, struct sNode* value3, struct sInfo* info);

_Bool sConditionalNode_terminated();

char* sConditionalNode_kind();

_Bool sConditionalNode_compile(struct sConditionalNode* self, struct sInfo* info);

int sConditionalNode_sline(struct sConditionalNode* self, struct sInfo* info);

char* sConditionalNode_sname(struct sConditionalNode* self, struct sInfo* info);

struct sNode* mult_exp(struct sInfo* info);

static void sMultNode_finalize(struct sMultNode* self);
static struct sMultNode* sMultNode_clone(struct sMultNode* self);
static void sDivNode_finalize(struct sDivNode* self);
static struct sDivNode* sDivNode_clone(struct sDivNode* self);
static void sModNode_finalize(struct sModNode* self);
static struct sModNode* sModNode_clone(struct sModNode* self);
struct sNode* add_exp(struct sInfo* info);

static void sAddNode_finalize(struct sAddNode* self);
static struct sAddNode* sAddNode_clone(struct sAddNode* self);
static void sSubNode_finalize(struct sSubNode* self);
static struct sSubNode* sSubNode_clone(struct sSubNode* self);
struct sNode* shift_exp(struct sInfo* info);

static void sLShiftNode_finalize(struct sLShiftNode* self);
static struct sLShiftNode* sLShiftNode_clone(struct sLShiftNode* self);
static void sRShiftNode_finalize(struct sRShiftNode* self);
static struct sRShiftNode* sRShiftNode_clone(struct sRShiftNode* self);
struct sNode* comparison_exp(struct sInfo* info);

static void sGtEqNode_finalize(struct sGtEqNode* self);
static struct sGtEqNode* sGtEqNode_clone(struct sGtEqNode* self);
static void sLtEqNode_finalize(struct sLtEqNode* self);
static struct sLtEqNode* sLtEqNode_clone(struct sLtEqNode* self);
static void sGtNode_finalize(struct sGtNode* self);
static struct sGtNode* sGtNode_clone(struct sGtNode* self);
static void sLtNode_finalize(struct sLtNode* self);
static struct sLtNode* sLtNode_clone(struct sLtNode* self);
struct sNode* eq_exp(struct sInfo* info);

static void sEq2Node_finalize(struct sEq2Node* self);
static struct sEq2Node* sEq2Node_clone(struct sEq2Node* self);
static void sEqNode_finalize(struct sEqNode* self);
static struct sEqNode* sEqNode_clone(struct sEqNode* self);
static void sNotEq2Node_finalize(struct sNotEq2Node* self);
static struct sNotEq2Node* sNotEq2Node_clone(struct sNotEq2Node* self);
static void sNotEqNode_finalize(struct sNotEqNode* self);
static struct sNotEqNode* sNotEqNode_clone(struct sNotEqNode* self);
struct sNode* and_exp(struct sInfo* info);

static void sAndNode_finalize(struct sAndNode* self);
static struct sAndNode* sAndNode_clone(struct sAndNode* self);
struct sNode* xor_exp(struct sInfo* info);

static void sXOrNode_finalize(struct sXOrNode* self);
static struct sXOrNode* sXOrNode_clone(struct sXOrNode* self);
struct sNode* or_exp(struct sInfo* info);

static void sOrNode_finalize(struct sOrNode* self);
static struct sOrNode* sOrNode_clone(struct sOrNode* self);
struct sNode* andand_exp(struct sInfo* info);

static void sAndAndNode_finalize(struct sAndAndNode* self);
static struct sAndAndNode* sAndAndNode_clone(struct sAndAndNode* self);
struct sNode* oror_exp(struct sInfo* info);

static void sOrOrNode_finalize(struct sOrOrNode* self);
static struct sOrOrNode* sOrOrNode_clone(struct sOrOrNode* self);
struct sNode* comma_exp(struct sInfo* info);

static void sCommaNode_finalize(struct sCommaNode* self);
static struct sCommaNode* sCommaNode_clone(struct sCommaNode* self);
struct sNode* conditional_exp(struct sInfo* info);

static int optional$2intbool_value(struct optional$2intbool* self);
static void optional$2intboolp_finalize(struct optional$2intbool* self);
static void sConditionalNode_finalize(struct sConditionalNode* self);
static struct sConditionalNode* sConditionalNode_clone(struct sConditionalNode* self);
struct sNode* expression_v13(struct sInfo* info);

struct sNode* string_node_v13(char* buf, char* head, int head_sline, struct sInfo* info);

static void sNullNode_finalize(struct sNullNode* self);
static struct sNullNode* sNullNode_clone(struct sNullNode* self);
static struct optional$2sNodephbool* optional$2sNodephbool_initialize(struct optional$2sNodephbool* self, struct sNode* v1, _Bool v2);
static void optional$2sNodephboolp_finalize(struct optional$2sNodephbool* self);
static void sNilNode_finalize(struct sNilNode* self);
static struct sNilNode* sNilNode_clone(struct sNilNode* self);
static struct sNode* optional$2sNodephbool_catch(struct optional$2sNodephbool* self, void* parent, void (*block)(void*));
void method_block1_13opc(struct __current_stack1__* parent);

static struct optional$2voidpbool* optional$2voidpbool_initialize(struct optional$2voidpbool* self, void* v1, _Bool v2);
static void optional$2voidpboolp_finalize(struct optional$2voidpbool* self);
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

_Bool operator_overload_fun(struct sType* type, char* fun_name, struct CVALUE* left_value, struct CVALUE* right_value, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value44;
struct sType* generics_type_29;
_Bool _if_conditional91;
struct sType* __dec_obj28;
_Bool _if_conditional92;
struct sClass* klass_30;
char* class_name_31;
struct sFun* operator_fun_32;
char* fun_name2_33;
_Bool _if_conditional93;
void* right_value45;
char* none_generics_name_34;
void* right_value46;
struct sType* obj_type_35;
void* right_value47;
char* __dec_obj29;
void* right_value48;
char* fun_name3_36;
struct sGenericsFun* generics_fun_40;
_Bool _if_conditional99;
void* right_value50;
_Bool _if_conditional100;
_Bool __result38__;
void* right_value60;
_Bool _if_conditional106;
void* right_value61;
struct tuple2$2sFunpcharph* multiple_assgin_var1;
struct sFun* fun_45;
char* fun_name_46;
void* right_value62;
struct tuple2$2sFunpcharph* multiple_assgin_var2;
struct sFun* fun2_47;
char* fun_name2_48;
_Bool _if_conditional108;
void* right_value63;
struct tuple2$2sFunpcharph* multiple_assgin_var3;
struct sFun* fun_49;
char* fun_name_50;
void* right_value64;
struct tuple2$2sFunpcharph* multiple_assgin_var4;
struct sFun* fun2_51;
char* fun_name2_52;
void* right_value65;
void* right_value66;
char* __dec_obj30;
int i_53;
_Bool _for_condtionalA1;
void* right_value67;
char* new_fun_name_54;
void* right_value68;
_Bool _if_conditional109;
void* right_value69;
char* __dec_obj31;
_Bool _if_conditional110;
void* right_value70;
_Bool result_55;
_Bool _if_conditional111;
void* right_value71;
struct CVALUE* come_value_56;
char* left_value2_57;
void* right_value72;
void* right_value73;
void* right_value78;
void* right_value79;
_Bool _if_conditional118;
void* right_value80;
void* right_value81;
char* __dec_obj33;
void* right_value82;
char* __dec_obj34;
char* right_value2_62;
void* right_value83;
void* right_value84;
void* right_value85;
void* right_value86;
_Bool _if_conditional119;
void* right_value87;
void* right_value88;
char* __dec_obj35;
void* right_value89;
char* __dec_obj36;
void* right_value90;
void* right_value91;
void* right_value92;
void* right_value93;
char* __dec_obj37;
void* right_value94;
struct sType* type2_63;
void* right_value95;
struct sType* type3_64;
void* right_value96;
struct sType* __dec_obj38;
_Bool _if_conditional120;
void* right_value97;
char* __dec_obj39;
void* right_value98;
char* __dec_obj40;
_Bool __result52__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&generics_type_29, 0, sizeof(struct sType*));
memset(&klass_30, 0, sizeof(struct sClass*));
memset(&class_name_31, 0, sizeof(char*));
memset(&operator_fun_32, 0, sizeof(struct sFun*));
memset(&fun_name2_33, 0, sizeof(char*));
memset(&none_generics_name_34, 0, sizeof(char*));
memset(&obj_type_35, 0, sizeof(struct sType*));
memset(&fun_name3_36, 0, sizeof(char*));
memset(&generics_fun_40, 0, sizeof(struct sGenericsFun*));
memset(&fun_45, 0, sizeof(struct sFun*));
memset(&fun_name_46, 0, sizeof(char*));
memset(&fun_45, 0, sizeof(struct sFun*));
memset(&fun_name_46, 0, sizeof(char*));
memset(&fun2_47, 0, sizeof(struct sFun*));
memset(&fun_name2_48, 0, sizeof(char*));
memset(&fun2_47, 0, sizeof(struct sFun*));
memset(&fun_name2_48, 0, sizeof(char*));
memset(&fun_49, 0, sizeof(struct sFun*));
memset(&fun_name_50, 0, sizeof(char*));
memset(&fun_49, 0, sizeof(struct sFun*));
memset(&fun_name_50, 0, sizeof(char*));
memset(&fun2_51, 0, sizeof(struct sFun*));
memset(&fun_name2_52, 0, sizeof(char*));
memset(&fun2_51, 0, sizeof(struct sFun*));
memset(&fun_name2_52, 0, sizeof(char*));
memset(&i_53, 0, sizeof(int));
memset(&new_fun_name_54, 0, sizeof(char*));
memset(&result_55, 0, sizeof(_Bool));
memset(&come_value_56, 0, sizeof(struct CVALUE*));
memset(&left_value2_57, 0, sizeof(char*));
memset(&right_value2_62, 0, sizeof(char*));
memset(&type2_63, 0, sizeof(struct sType*));
memset(&type3_64, 0, sizeof(struct sType*));
    generics_type_29=(struct sType*)come_increment_ref_count(((struct sType*)(right_value44=sType_clone(type))));
    if(right_value44 && right_value44 != __result_obj__) { come_call_finalizer(sType_finalize,right_value44, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(_if_conditional91=generics_type_29->mNoSolvedGenericsType->v1,    _if_conditional91) {
        __dec_obj28=generics_type_29;
        generics_type_29=(struct sType*)come_increment_ref_count(generics_type_29->mNoSolvedGenericsType->v1);
        if(__dec_obj28) { come_call_finalizer(sType_finalize,__dec_obj28, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    if(_if_conditional92=type->mNoSolvedGenericsType->v1,    _if_conditional92) {
        type=type->mNoSolvedGenericsType->v1;
    }
    klass_30=type->mClass;
    class_name_31=klass_30->mName;
    operator_fun_32=((void*)0);
    if(_if_conditional93=list$1sTypeph_length(type->mGenericsTypes)>0,    _if_conditional93) {
        none_generics_name_34=(char*)come_increment_ref_count(((char*)(right_value45=get_none_generics_name(type->mClass->mName))));
        if(right_value45 && right_value45 != __result_obj__) { right_value45 = come_decrement_ref_count(right_value45, (void*)0, (void*)0, 1, 0, 0); }
        obj_type_35=(struct sType*)come_increment_ref_count(((struct sType*)(right_value46=solve_generics(type,info->generics_type,info))));
        if(right_value46 && right_value46 != __result_obj__) { come_call_finalizer(sType_finalize,right_value46, (void*)0, (void*)0, 0, 1, 0, 0); }
        __dec_obj29=fun_name2_33;
        fun_name2_33=(char*)come_increment_ref_count(((char*)(right_value47=create_method_name(obj_type_35,(_Bool)0,fun_name,info))));
        if(__dec_obj29) { __dec_obj29 = come_decrement_ref_count(__dec_obj29, (void*)0, (void*)0, 0,0,0); }
        if(right_value47 && right_value47 != __result_obj__) { right_value47 = come_decrement_ref_count(right_value47, (void*)0, (void*)0, 1, 0, 0); }
        fun_name3_36=(char*)come_increment_ref_count(((char*)(right_value48=xsprintf("%s_%s",none_generics_name_34,fun_name))));
        if(right_value48 && right_value48 != __result_obj__) { right_value48 = come_decrement_ref_count(right_value48, (void*)0, (void*)0, 1, 0, 0); }
        generics_fun_40=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_36,((void*)0));
        if(_if_conditional99=generics_fun_40,        _if_conditional99) {
            if(_if_conditional100=!create_generics_fun((char*)come_increment_ref_count(((char*)(right_value50=__builtin_string(fun_name2_33)))),generics_fun_40,obj_type_35,info),            (right_value50 && right_value50 != __result_obj__) ? right_value50 = come_decrement_ref_count(right_value50, (void*)0, (void*)0, 1, 0, 0):0,
            _if_conditional100) {
                __result38__ = (_Bool)0;
                if(none_generics_name_34) { none_generics_name_34 = come_decrement_ref_count(none_generics_name_34, (void*)0, (void*)0, 0, 0, 0); }
                if(obj_type_35) { come_call_finalizer(sType_finalize,obj_type_35, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(fun_name3_36) { fun_name3_36 = come_decrement_ref_count(fun_name3_36, (void*)0, (void*)0, 0, 0, 0); }
                if(generics_type_29) { come_call_finalizer(sType_finalize,generics_type_29, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(fun_name2_33) { fun_name2_33 = come_decrement_ref_count(fun_name2_33, (void*)0, (void*)0, 0, 0, 0); }
                return __result38__;
            }
            operator_fun_32=optional$2sFunpbool_value(((struct optional$2sFunpbool*)(right_value60=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_33))));
            if(right_value60 && right_value60 != __result_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value60, (void*)0, (void*)0, 0, 1, 0, 0); }
        }
        else {
            if(_if_conditional106=charp_operator_equals(fun_name,"operator_equals"),            _if_conditional106) {
                multiple_assgin_var1=((struct tuple2$2sFunpcharph*)(right_value61=create_equals_automatically(obj_type_35,"equals",info)));
                fun_45=multiple_assgin_var1->v1;
                fun_name_46=(char*)come_increment_ref_count(multiple_assgin_var1->v2);
                if(right_value61 && right_value61 != __result_obj__) { come_call_finalizer(tuple2$2sFunpcharphp_finalize,right_value61, (void*)0, (void*)0, 0, 1, 0, 0); }
                multiple_assgin_var2=((struct tuple2$2sFunpcharph*)(right_value62=create_operator_equals_automatically(obj_type_35,"operator_equals",info)));
                fun2_47=multiple_assgin_var2->v1;
                fun_name2_48=(char*)come_increment_ref_count(multiple_assgin_var2->v2);
                if(right_value62 && right_value62 != __result_obj__) { come_call_finalizer(tuple2$2sFunpcharphp_finalize,right_value62, (void*)0, (void*)0, 0, 1, 0, 0); }
                operator_fun_32=fun2_47;
                if(fun_name_46) { fun_name_46 = come_decrement_ref_count(fun_name_46, (void*)0, (void*)0, 0, 0, 0); }
                if(fun_name2_48) { fun_name2_48 = come_decrement_ref_count(fun_name2_48, (void*)0, (void*)0, 0, 0, 0); }
            }
            else {
                if(_if_conditional108=charp_operator_equals(fun_name,"operator_not_equals"),                _if_conditional108) {
                    multiple_assgin_var3=((struct tuple2$2sFunpcharph*)(right_value63=create_equals_automatically(obj_type_35,"not_equals",info)));
                    fun_49=multiple_assgin_var3->v1;
                    fun_name_50=(char*)come_increment_ref_count(multiple_assgin_var3->v2);
                    if(right_value63 && right_value63 != __result_obj__) { come_call_finalizer(tuple2$2sFunpcharphp_finalize,right_value63, (void*)0, (void*)0, 0, 1, 0, 0); }
                    multiple_assgin_var4=((struct tuple2$2sFunpcharph*)(right_value64=create_operator_not_equals_automatically(obj_type_35,"operator_not_equals",info)));
                    fun2_51=multiple_assgin_var4->v1;
                    fun_name2_52=(char*)come_increment_ref_count(multiple_assgin_var4->v2);
                    if(right_value64 && right_value64 != __result_obj__) { come_call_finalizer(tuple2$2sFunpcharphp_finalize,right_value64, (void*)0, (void*)0, 0, 1, 0, 0); }
                    operator_fun_32=fun2_51;
                    if(fun_name_50) { fun_name_50 = come_decrement_ref_count(fun_name_50, (void*)0, (void*)0, 0, 0, 0); }
                    if(fun_name2_52) { fun_name2_52 = come_decrement_ref_count(fun_name2_52, (void*)0, (void*)0, 0, 0, 0); }
                }
                else {
                    operator_fun_32=optional$2sFunpbool_value(((struct optional$2sFunpbool*)(right_value65=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_33))));
                    if(right_value65 && right_value65 != __result_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value65, (void*)0, (void*)0, 0, 1, 0, 0); }
                }
            }
        }
        if(none_generics_name_34) { none_generics_name_34 = come_decrement_ref_count(none_generics_name_34, (void*)0, (void*)0, 0, 0, 0); }
        if(obj_type_35) { come_call_finalizer(sType_finalize,obj_type_35, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(fun_name3_36) { fun_name3_36 = come_decrement_ref_count(fun_name3_36, (void*)0, (void*)0, 0, 0, 0); }
    }
    else {
        __dec_obj30=fun_name2_33;
        fun_name2_33=(char*)come_increment_ref_count(((char*)(right_value66=create_method_name(type,(_Bool)0,fun_name,info))));
        if(__dec_obj30) { __dec_obj30 = come_decrement_ref_count(__dec_obj30, (void*)0, (void*)0, 0,0,0); }
        if(right_value66 && right_value66 != __result_obj__) { right_value66 = come_decrement_ref_count(right_value66, (void*)0, (void*)0, 1, 0, 0); }
        for(
        i_53=128-1 ,        0;        _for_condtionalA1=        i_53>=1 ,        _for_condtionalA1;        i_53-- ,        0        ){
            new_fun_name_54=(char*)come_increment_ref_count(((char*)(right_value67=xsprintf("%s_v%d",fun_name2_33,i_53))));
            if(right_value67 && right_value67 != __result_obj__) { right_value67 = come_decrement_ref_count(right_value67, (void*)0, (void*)0, 1, 0, 0); }
            operator_fun_32=optional$2sFunpbool_value(((struct optional$2sFunpbool*)(right_value68=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_54))));
            if(right_value68 && right_value68 != __result_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value68, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(_if_conditional109=operator_fun_32,            _if_conditional109) {
                __dec_obj31=fun_name2_33;
                fun_name2_33=(char*)come_increment_ref_count(((char*)(right_value69=__builtin_string(new_fun_name_54))));
                if(__dec_obj31) { __dec_obj31 = come_decrement_ref_count(__dec_obj31, (void*)0, (void*)0, 0,0,0); }
                if(right_value69 && right_value69 != __result_obj__) { right_value69 = come_decrement_ref_count(right_value69, (void*)0, (void*)0, 1, 0, 0); }
                if(new_fun_name_54) { new_fun_name_54 = come_decrement_ref_count(new_fun_name_54, (void*)0, (void*)0, 0, 0, 0); }
                break;
            }
            if(new_fun_name_54) { new_fun_name_54 = come_decrement_ref_count(new_fun_name_54, (void*)0, (void*)0, 0, 0, 0); }
        }
        if(_if_conditional110=operator_fun_32==((void*)0),        _if_conditional110) {
            operator_fun_32=optional$2sFunpbool_value(((struct optional$2sFunpbool*)(right_value70=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_33))));
            if(right_value70 && right_value70 != __result_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value70, (void*)0, (void*)0, 0, 1, 0, 0); }
        }
    }
    result_55=(_Bool)0;
    if(_if_conditional111=operator_fun_32&&(list$1sTypeph_length(type->mGenericsTypes)>0||(string_operator_equals(left_value->type->mClass->mName,right_value->type->mClass->mName)&&left_value->type->mPointerNum==right_value->type->mPointerNum)||charp_operator_equals(fun_name,"operator_mult")),    _if_conditional111) {
        come_value_56=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value71=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 77))));
        if(right_value71 && right_value71 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value71, (void*)0, (void*)0, 0, 1, 0, 0); }
        check_assign_type(((char*)(right_value73=xsprintf("\%s is assigned to",((char*)(right_value72=string_to_string(fun_name2_33)))))),optional$2sTypephbool_value(((struct optional$2sTypephbool*)(right_value78=list$1sTypephp_operator_load_element(operator_fun_32->mParamTypes,0)))),left_value->type,left_value,(_Bool)0,info);
        if(right_value72 && right_value72 != __result_obj__) { right_value72 = come_decrement_ref_count(right_value72, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value73 && right_value73 != __result_obj__) { right_value73 = come_decrement_ref_count(right_value73, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value78 && right_value78 != __result_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,right_value78, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(_if_conditional118=optional$2sTypephbool_value(((struct optional$2sTypephbool*)(right_value79=list$1sTypephp_operator_load_element(operator_fun_32->mParamTypes,0))))->mHeap&&left_value->type->mHeap,        (right_value79 && right_value79 != __result_obj__) ? come_call_finalizer(optional$2sTypephboolp_finalize,right_value79, (void*)0, (void*)0, 0, 1, 0, 0):0,
        _if_conditional118) {
            std_move(optional$2sTypephbool_value(((struct optional$2sTypephbool*)(right_value80=list$1sTypephp_operator_load_element(operator_fun_32->mParamTypes,0)))),left_value->type,left_value,info);
            if(right_value80 && right_value80 != __result_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,right_value80, (void*)0, (void*)0, 0, 1, 0, 0); }
            __dec_obj33=left_value2_57;
            left_value2_57=(char*)come_increment_ref_count(((char*)(right_value81=xsprintf("%s",left_value->c_value))));
            if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count(__dec_obj33, (void*)0, (void*)0, 0,0,0); }
            if(right_value81 && right_value81 != __result_obj__) { right_value81 = come_decrement_ref_count(right_value81, (void*)0, (void*)0, 1, 0, 0); }
        }
        else {
            __dec_obj34=left_value2_57;
            left_value2_57=(char*)come_increment_ref_count(((char*)(right_value82=string_clone(left_value->c_value))));
            if(__dec_obj34) { __dec_obj34 = come_decrement_ref_count(__dec_obj34, (void*)0, (void*)0, 0,0,0); }
            if(right_value82 && right_value82 != __result_obj__) { right_value82 = come_decrement_ref_count(right_value82, (void*)0, (void*)0, 1, 0, 0); }
        }
        check_assign_type(((char*)(right_value84=xsprintf("\%s is assigned to",((char*)(right_value83=string_to_string(fun_name2_33)))))),optional$2sTypephbool_value(((struct optional$2sTypephbool*)(right_value85=list$1sTypephp_operator_load_element(operator_fun_32->mParamTypes,1)))),right_value->type,right_value,(_Bool)0,info);
        if(right_value83 && right_value83 != __result_obj__) { right_value83 = come_decrement_ref_count(right_value83, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value84 && right_value84 != __result_obj__) { right_value84 = come_decrement_ref_count(right_value84, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value85 && right_value85 != __result_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,right_value85, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(_if_conditional119=optional$2sTypephbool_value(((struct optional$2sTypephbool*)(right_value86=list$1sTypephp_operator_load_element(operator_fun_32->mParamTypes,1))))->mHeap&&right_value->type->mHeap,        (right_value86 && right_value86 != __result_obj__) ? come_call_finalizer(optional$2sTypephboolp_finalize,right_value86, (void*)0, (void*)0, 0, 1, 0, 0):0,
        _if_conditional119) {
            std_move(optional$2sTypephbool_value(((struct optional$2sTypephbool*)(right_value87=list$1sTypephp_operator_load_element(operator_fun_32->mParamTypes,1)))),right_value->type,right_value,info);
            if(right_value87 && right_value87 != __result_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,right_value87, (void*)0, (void*)0, 0, 1, 0, 0); }
            __dec_obj35=right_value2_62;
            right_value2_62=(char*)come_increment_ref_count(((char*)(right_value88=xsprintf("%s",right_value->c_value))));
            if(__dec_obj35) { __dec_obj35 = come_decrement_ref_count(__dec_obj35, (void*)0, (void*)0, 0,0,0); }
            if(right_value88 && right_value88 != __result_obj__) { right_value88 = come_decrement_ref_count(right_value88, (void*)0, (void*)0, 1, 0, 0); }
        }
        else {
            __dec_obj36=right_value2_62;
            right_value2_62=(char*)come_increment_ref_count(((char*)(right_value89=string_clone(right_value->c_value))));
            if(__dec_obj36) { __dec_obj36 = come_decrement_ref_count(__dec_obj36, (void*)0, (void*)0, 0,0,0); }
            if(right_value89 && right_value89 != __result_obj__) { right_value89 = come_decrement_ref_count(right_value89, (void*)0, (void*)0, 1, 0, 0); }
        }
        __dec_obj37=come_value_56->c_value;
        come_value_56->c_value=(char*)come_increment_ref_count(((char*)(right_value93=xsprintf("\%s(\%s,\%s)",((char*)(right_value90=string_to_string(fun_name2_33))),((char*)(right_value91=string_to_string(left_value2_57))),((char*)(right_value92=string_to_string(right_value2_62)))))));
        if(__dec_obj37) { __dec_obj37 = come_decrement_ref_count(__dec_obj37, (void*)0, (void*)0, 0,0,0); }
        if(right_value90 && right_value90 != __result_obj__) { right_value90 = come_decrement_ref_count(right_value90, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value91 && right_value91 != __result_obj__) { right_value91 = come_decrement_ref_count(right_value91, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value92 && right_value92 != __result_obj__) { right_value92 = come_decrement_ref_count(right_value92, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value93 && right_value93 != __result_obj__) { right_value93 = come_decrement_ref_count(right_value93, (void*)0, (void*)0, 1, 0, 0); }
        type2_63=(struct sType*)come_increment_ref_count(((struct sType*)(right_value94=sType_clone(operator_fun_32->mResultType))));
        if(right_value94 && right_value94 != __result_obj__) { come_call_finalizer(sType_finalize,right_value94, (void*)0, (void*)0, 0, 1, 0, 0); }
        type3_64=(struct sType*)come_increment_ref_count(((struct sType*)(right_value95=solve_generics(type2_63,generics_type_29,info))));
        if(right_value95 && right_value95 != __result_obj__) { come_call_finalizer(sType_finalize,right_value95, (void*)0, (void*)0, 0, 1, 0, 0); }
        __dec_obj38=come_value_56->type;
        come_value_56->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value96=sType_clone(type3_64))));
        if(__dec_obj38) { come_call_finalizer(sType_finalize,__dec_obj38, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value96 && right_value96 != __result_obj__) { come_call_finalizer(sType_finalize,right_value96, (void*)0, (void*)0, 0, 1, 0, 0); }
        come_value_56->var=((void*)0);
        if(_if_conditional120=type3_64->mHeap,        _if_conditional120) {
            __dec_obj39=come_value_56->c_value;
            come_value_56->c_value=(char*)come_increment_ref_count(((char*)(right_value97=append_object_to_right_values(come_value_56->c_value,(struct sType*)come_increment_ref_count(type3_64),info))));
            if(__dec_obj39) { __dec_obj39 = come_decrement_ref_count(__dec_obj39, (void*)0, (void*)0, 0,0,0); }
            if(right_value97 && right_value97 != __result_obj__) { right_value97 = come_decrement_ref_count(right_value97, (void*)0, (void*)0, 1, 0, 0); }
        }
        __dec_obj40=come_value_56->c_value;
        come_value_56->c_value=(char*)come_increment_ref_count(((char*)(right_value98=append_exception_value(come_value_56->c_value,come_value_56->type,info))));
        if(__dec_obj40) { __dec_obj40 = come_decrement_ref_count(__dec_obj40, (void*)0, (void*)0, 0,0,0); }
        if(right_value98 && right_value98 != __result_obj__) { right_value98 = come_decrement_ref_count(right_value98, (void*)0, (void*)0, 1, 0, 0); }
        add_come_last_code(info,"%s;\n",come_value_56->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_56));
        result_55=(_Bool)1;
        if(come_value_56) { come_call_finalizer(CVALUE_finalize,come_value_56, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(left_value2_57) { left_value2_57 = come_decrement_ref_count(left_value2_57, (void*)0, (void*)0, 0, 0, 0); }
        if(right_value2_62) { right_value2_62 = come_decrement_ref_count(right_value2_62, (void*)0, (void*)0, 0, 0, 0); }
        if(type2_63) { come_call_finalizer(sType_finalize,type2_63, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(type3_64) { come_call_finalizer(sType_finalize,type3_64, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __result52__ = result_55;
    if(generics_type_29) { come_call_finalizer(sType_finalize,generics_type_29, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(fun_name2_33) { fun_name2_33 = come_decrement_ref_count(fun_name2_33, (void*)0, (void*)0, 0, 0, 0); }
    return __result52__;
    if(generics_type_29) { come_call_finalizer(sType_finalize,generics_type_29, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(fun_name2_33) { fun_name2_33 = come_decrement_ref_count(fun_name2_33, (void*)0, (void*)0, 0, 0, 0); }
}

static struct sType* sType_clone(struct sType* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional5;
struct sType* __result13__;
void* right_value10;
struct sType* result_5;
_Bool _if_conditional22;
_Bool _if_conditional23;
void* right_value13;
struct tuple1$1sTypeph* __dec_obj7;
_Bool _if_conditional27;
void* right_value14;
struct tuple1$1sTypeph* __dec_obj8;
_Bool _if_conditional28;
void* right_value15;
char* __dec_obj9;
_Bool _if_conditional29;
void* right_value22;
struct list$1sTypeph* __dec_obj13;
_Bool _if_conditional33;
void* right_value30;
struct list$1sNodeph* __dec_obj17;
_Bool _if_conditional46;
_Bool _if_conditional47;
void* right_value31;
struct list$1sTypeph* __dec_obj18;
_Bool _if_conditional48;
void* right_value38;
struct list$1charph* __dec_obj22;
_Bool _if_conditional52;
void* right_value39;
struct tuple1$1sTypeph* __dec_obj23;
_Bool _if_conditional53;
_Bool _if_conditional54;
void* right_value40;
struct sNode* __dec_obj24;
_Bool _if_conditional55;
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
void* right_value41;
struct sNode* __dec_obj25;
_Bool _if_conditional79;
_Bool _if_conditional80;
_Bool _if_conditional81;
void* right_value42;
char* __dec_obj26;
_Bool _if_conditional82;
_Bool _if_conditional83;
_Bool _if_conditional84;
_Bool _if_conditional85;
_Bool _if_conditional86;
_Bool _if_conditional87;
_Bool _if_conditional88;
_Bool _if_conditional89;
_Bool _if_conditional90;
void* right_value43;
char* __dec_obj27;
struct sType* __result30__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_5, 0, sizeof(struct sType*));
        if(_if_conditional5=self==(void*)0,        _if_conditional5) {
            __result13__ = __result_obj__ = (void*)0;
            return __result13__;
        }
        result_5=(struct sType*)come_increment_ref_count(((struct sType*)(right_value10=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3))));
        if(right_value10 && right_value10 != __result_obj__) { come_call_finalizer(sType_finalize,right_value10, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(_if_conditional22=self!=((void*)0),        _if_conditional22) {
            result_5->mClass=self->mClass;
        }
        if(_if_conditional23=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),        _if_conditional23) {
            __dec_obj7=result_5->mNoSolvedGenericsType;
            result_5->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value13=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
            if(__dec_obj7) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj7, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value13 && right_value13 != __result_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value13, (void*)0, (void*)0, 0, 1, 0, 0); }
        }
        if(_if_conditional27=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),        _if_conditional27) {
            __dec_obj8=result_5->mOriginalLoadVarType;
            result_5->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value14=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
            if(__dec_obj8) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj8, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value14 && right_value14 != __result_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value14, (void*)0, (void*)0, 0, 1, 0, 0); }
        }
        if(_if_conditional28=self!=((void*)0)&&self->mGenericsName!=((void*)0),        _if_conditional28) {
            __dec_obj9=result_5->mGenericsName;
            result_5->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value15=string_clone(self->mGenericsName))));
            if(__dec_obj9) { __dec_obj9 = come_decrement_ref_count(__dec_obj9, (void*)0, (void*)0, 0,0,0); }
            if(right_value15 && right_value15 != __result_obj__) { right_value15 = come_decrement_ref_count(right_value15, (void*)0, (void*)0, 1, 0, 0); }
        }
        if(_if_conditional29=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),        _if_conditional29) {
            __dec_obj13=result_5->mGenericsTypes;
            result_5->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value22=list$1sTypephp_clone(self->mGenericsTypes))));
            if(__dec_obj13) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj13, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value22 && right_value22 != __result_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value22, (void*)0, (void*)0, 0, 1, 0, 0); }
        }
        if(_if_conditional33=self!=((void*)0)&&self->mArrayNum!=((void*)0),        _if_conditional33) {
            __dec_obj17=result_5->mArrayNum;
            result_5->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value30=list$1sNodephp_clone(self->mArrayNum))));
            if(__dec_obj17) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj17, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value30 && right_value30 != __result_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value30, (void*)0, (void*)0, 0, 1, 0, 0); }
        }
        if(_if_conditional46=self!=((void*)0),        _if_conditional46) {
            result_5->mOmitArrayNum=self->mOmitArrayNum;
        }
        if(_if_conditional47=self!=((void*)0)&&self->mParamTypes!=((void*)0),        _if_conditional47) {
            __dec_obj18=result_5->mParamTypes;
            result_5->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value31=list$1sTypephp_clone(self->mParamTypes))));
            if(__dec_obj18) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj18, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value31 && right_value31 != __result_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value31, (void*)0, (void*)0, 0, 1, 0, 0); }
        }
        if(_if_conditional48=self!=((void*)0)&&self->mParamNames!=((void*)0),        _if_conditional48) {
            __dec_obj22=result_5->mParamNames;
            result_5->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value38=list$1charphp_clone(self->mParamNames))));
            if(__dec_obj22) { come_call_finalizer(list$1charph_finalize,__dec_obj22, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value38 && right_value38 != __result_obj__) { come_call_finalizer(list$1charphp_finalize,right_value38, (void*)0, (void*)0, 0, 1, 0, 0); }
        }
        if(_if_conditional52=self!=((void*)0)&&self->mResultType!=((void*)0),        _if_conditional52) {
            __dec_obj23=result_5->mResultType;
            result_5->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value39=tuple1$1sTypephp_clone(self->mResultType))));
            if(__dec_obj23) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj23, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value39 && right_value39 != __result_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value39, (void*)0, (void*)0, 0, 1, 0, 0); }
        }
        if(_if_conditional53=self!=((void*)0),        _if_conditional53) {
            result_5->mVarArgs=self->mVarArgs;
        }
        if(_if_conditional54=self!=((void*)0)&&self->mAlignas!=((void*)0),        _if_conditional54) {
            __dec_obj24=result_5->mAlignas;
            result_5->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value40=sNode_clone(self->mAlignas))));
            if(__dec_obj24) { __dec_obj24 = come_decrement_ref_count(__dec_obj24, ((struct sNode*)__dec_obj24)->finalize, ((struct sNode*)__dec_obj24)->_protocol_obj, 0,0,0); }
            if(right_value40 && right_value40 != __result_obj__) { right_value40 = come_decrement_ref_count(right_value40, ((struct sNode*)right_value40)->finalize, ((struct sNode*)right_value40)->_protocol_obj, 1, 0, 0); } 
        }
        if(_if_conditional55=self!=((void*)0),        _if_conditional55) {
            result_5->mUnsigned=self->mUnsigned;
        }
        if(_if_conditional56=self!=((void*)0),        _if_conditional56) {
            result_5->mShort=self->mShort;
        }
        if(_if_conditional57=self!=((void*)0),        _if_conditional57) {
            result_5->mLong=self->mLong;
        }
        if(_if_conditional58=self!=((void*)0),        _if_conditional58) {
            result_5->mLongLong=self->mLongLong;
        }
        if(_if_conditional59=self!=((void*)0),        _if_conditional59) {
            result_5->mConstant=self->mConstant;
        }
        if(_if_conditional60=self!=((void*)0),        _if_conditional60) {
            result_5->mRegister=self->mRegister;
        }
        if(_if_conditional61=self!=((void*)0),        _if_conditional61) {
            result_5->mVolatile=self->mVolatile;
        }
        if(_if_conditional62=self!=((void*)0),        _if_conditional62) {
            result_5->mStatic=self->mStatic;
        }
        if(_if_conditional63=self!=((void*)0),        _if_conditional63) {
            result_5->mExtern=self->mExtern;
        }
        if(_if_conditional64=self!=((void*)0),        _if_conditional64) {
            result_5->mRestrict=self->mRestrict;
        }
        if(_if_conditional65=self!=((void*)0),        _if_conditional65) {
            result_5->mImmutable=self->mImmutable;
        }
        if(_if_conditional66=self!=((void*)0),        _if_conditional66) {
            result_5->mHeap=self->mHeap;
        }
        if(_if_conditional67=self!=((void*)0),        _if_conditional67) {
            result_5->mDummyHeap=self->mDummyHeap;
        }
        if(_if_conditional68=self!=((void*)0),        _if_conditional68) {
            result_5->mDelegate=self->mDelegate;
        }
        if(_if_conditional69=self!=((void*)0),        _if_conditional69) {
            result_5->mShare=self->mShare;
        }
        if(_if_conditional70=self!=((void*)0),        _if_conditional70) {
            result_5->mClone=self->mClone;
        }
        if(_if_conditional71=self!=((void*)0),        _if_conditional71) {
            result_5->mNoHeap=self->mNoHeap;
        }
        if(_if_conditional72=self!=((void*)0),        _if_conditional72) {
            result_5->mNoCallingDestructor=self->mNoCallingDestructor;
        }
        if(_if_conditional73=self!=((void*)0),        _if_conditional73) {
            result_5->mRefference=self->mRefference;
        }
        if(_if_conditional74=self!=((void*)0),        _if_conditional74) {
            result_5->mException=self->mException;
        }
        if(_if_conditional75=self!=((void*)0),        _if_conditional75) {
            result_5->mPointerNum=self->mPointerNum;
        }
        if(_if_conditional76=self!=((void*)0),        _if_conditional76) {
            result_5->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
        }
        if(_if_conditional77=self!=((void*)0),        _if_conditional77) {
            result_5->mNoArrayPointerNum=self->mNoArrayPointerNum;
        }
        if(_if_conditional78=self!=((void*)0)&&self->mSizeNum!=((void*)0),        _if_conditional78) {
            __dec_obj25=result_5->mSizeNum;
            result_5->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value41=sNode_clone(self->mSizeNum))));
            if(__dec_obj25) { __dec_obj25 = come_decrement_ref_count(__dec_obj25, ((struct sNode*)__dec_obj25)->finalize, ((struct sNode*)__dec_obj25)->_protocol_obj, 0,0,0); }
            if(right_value41 && right_value41 != __result_obj__) { right_value41 = come_decrement_ref_count(right_value41, ((struct sNode*)right_value41)->finalize, ((struct sNode*)right_value41)->_protocol_obj, 1, 0, 0); } 
        }
        if(_if_conditional79=self!=((void*)0),        _if_conditional79) {
            result_5->mDynamicArrayNum=self->mDynamicArrayNum;
        }
        if(_if_conditional80=self!=((void*)0),        _if_conditional80) {
            result_5->mTypeOfExpression=self->mTypeOfExpression;
        }
        if(_if_conditional81=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),        _if_conditional81) {
            __dec_obj26=result_5->mOriginalTypeName;
            result_5->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value42=string_clone(self->mOriginalTypeName))));
            if(__dec_obj26) { __dec_obj26 = come_decrement_ref_count(__dec_obj26, (void*)0, (void*)0, 0,0,0); }
            if(right_value42 && right_value42 != __result_obj__) { right_value42 = come_decrement_ref_count(right_value42, (void*)0, (void*)0, 1, 0, 0); }
        }
        if(_if_conditional82=self!=((void*)0),        _if_conditional82) {
            result_5->mOriginalPointerNum=self->mOriginalPointerNum;
        }
        if(_if_conditional83=self!=((void*)0),        _if_conditional83) {
            result_5->mFunctionParam=self->mFunctionParam;
        }
        if(_if_conditional84=self!=((void*)0),        _if_conditional84) {
            result_5->mAllocaValue=self->mAllocaValue;
        }
        if(_if_conditional85=self!=((void*)0),        _if_conditional85) {
            result_5->mGenericsStruct=self->mGenericsStruct;
        }
        if(_if_conditional86=self!=((void*)0),        _if_conditional86) {
            result_5->mSolvedGenericsName=self->mSolvedGenericsName;
        }
        if(_if_conditional87=self!=((void*)0),        _if_conditional87) {
            result_5->mComeMemCore=self->mComeMemCore;
        }
        if(_if_conditional88=self!=((void*)0),        _if_conditional88) {
            result_5->mInline=self->mInline;
        }
        if(_if_conditional89=self!=((void*)0),        _if_conditional89) {
            result_5->mNullValue=self->mNullValue;
        }
        if(_if_conditional90=self!=((void*)0)&&self->mAsmName!=((void*)0),        _if_conditional90) {
            __dec_obj27=result_5->mAsmName;
            result_5->mAsmName=(char*)come_increment_ref_count(((char*)(right_value43=string_clone(self->mAsmName))));
            if(__dec_obj27) { __dec_obj27 = come_decrement_ref_count(__dec_obj27, (void*)0, (void*)0, 0,0,0); }
            if(right_value43 && right_value43 != __result_obj__) { right_value43 = come_decrement_ref_count(right_value43, (void*)0, (void*)0, 1, 0, 0); }
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
_Bool _if_conditional6;
_Bool _if_conditional8;
_Bool _if_conditional9;
_Bool _if_conditional10;
_Bool _if_conditional12;
_Bool _if_conditional14;
_Bool _if_conditional15;
_Bool _if_conditional17;
_Bool _if_conditional18;
_Bool _if_conditional19;
_Bool _if_conditional20;
_Bool _if_conditional21;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional6=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),            _if_conditional6) {
                if(self->mNoSolvedGenericsType) { come_call_finalizer(tuple1$1sTypephp_finalize,self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            if(_if_conditional8=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),            _if_conditional8) {
                if(self->mOriginalLoadVarType) { come_call_finalizer(tuple1$1sTypephp_finalize,self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            if(_if_conditional9=self!=((void*)0)&&self->mGenericsName!=((void*)0),            _if_conditional9) {
                if(self->mGenericsName) { self->mGenericsName = come_decrement_ref_count(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0); }
            }
            if(_if_conditional10=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),            _if_conditional10) {
                if(self->mGenericsTypes) { come_call_finalizer(list$1sTypephp_finalize,self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            if(_if_conditional12=self!=((void*)0)&&self->mArrayNum!=((void*)0),            _if_conditional12) {
                if(self->mArrayNum) { come_call_finalizer(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            if(_if_conditional14=self!=((void*)0)&&self->mParamTypes!=((void*)0),            _if_conditional14) {
                if(self->mParamTypes) { come_call_finalizer(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            if(_if_conditional15=self!=((void*)0)&&self->mParamNames!=((void*)0),            _if_conditional15) {
                if(self->mParamNames) { come_call_finalizer(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            if(_if_conditional17=self!=((void*)0)&&self->mResultType!=((void*)0),            _if_conditional17) {
                if(self->mResultType) { come_call_finalizer(tuple1$1sTypephp_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            if(_if_conditional18=self!=((void*)0)&&self->mAlignas!=((void*)0),            _if_conditional18) {
                if(self->mAlignas) { self->mAlignas = come_decrement_ref_count(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0); } 
            }
            if(_if_conditional19=self!=((void*)0)&&self->mSizeNum!=((void*)0),            _if_conditional19) {
                if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0); } 
            }
            if(_if_conditional20=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),            _if_conditional20) {
                if(self->mOriginalTypeName) { self->mOriginalTypeName = come_decrement_ref_count(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0); }
            }
            if(_if_conditional21=self!=((void*)0)&&self->mAsmName!=((void*)0),            _if_conditional21) {
                if(self->mAsmName) { self->mAsmName = come_decrement_ref_count(self->mAsmName, (void*)0, (void*)0, 0, 0, 0); }
            }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional7;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional7=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional7) {
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
_Bool _if_conditional11;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional11=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional11) {
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
_Bool _if_conditional13;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional13=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional13) {
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
_Bool _if_conditional16;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional16=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional16) {
                                if(self->item) { self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0, 0, 0); }
                            }
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional24;
struct tuple1$1sTypeph* __result14__;
void* right_value11;
struct tuple1$1sTypeph* result_12;
_Bool _if_conditional26;
void* right_value12;
struct sType* __dec_obj6;
struct tuple1$1sTypeph* __result15__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_12, 0, sizeof(struct tuple1$1sTypeph*));
                if(_if_conditional24=self==(void*)0,                _if_conditional24) {
                    __result14__ = __result_obj__ = (void*)0;
                    return __result14__;
                }
                result_12=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value11=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3))));
                if(right_value11 && right_value11 != __result_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,right_value11, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(_if_conditional26=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional26) {
                    __dec_obj6=result_12->v1;
                    result_12->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value12=sType_clone(self->v1))));
                    if(__dec_obj6) { come_call_finalizer(sType_finalize,__dec_obj6, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(right_value12 && right_value12 != __result_obj__) { come_call_finalizer(sType_finalize,right_value12, (void*)0, (void*)0, 0, 1, 0, 0); }
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
_Bool _if_conditional25;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional25=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional25) {
                        if(self->v1) { come_call_finalizer(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional30;
struct list$1sTypeph* __result16__;
void* right_value16;
void* right_value17;
struct list$1sTypeph* result_13;
struct list_item$1sTypeph* it_14;
_Bool _while_condtional4;
void* right_value21;
struct list$1sTypeph* __result19__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_13, 0, sizeof(struct list$1sTypeph*));
memset(&it_14, 0, sizeof(struct list_item$1sTypeph*));
                if(_if_conditional30=self==((void*)0),                _if_conditional30) {
                    __result16__ = __result_obj__ = ((void*)0);
                    return __result16__;
                }
                result_13=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value17=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value16=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 193))))))));
                if(right_value16 && right_value16 != __result_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value16, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value17 && right_value17 != __result_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value17, (void*)0, (void*)0, 0, 1, 0, 0); }
                it_14=self->head;
                while(_while_condtional4=it_14!=((void*)0),                _while_condtional4) {
                    list$1sTypeph_add(result_13,(struct sType*)come_increment_ref_count(((struct sType*)(right_value21=sType_clone(it_14->item)))));
                    if(right_value21 && right_value21 != __result_obj__) { come_call_finalizer(sType_finalize,right_value21, (void*)0, (void*)0, 0, 1, 0, 0); }
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
_Bool _if_conditional31;
void* right_value18;
struct list_item$1sTypeph* litem_15;
struct sType* __dec_obj10;
_Bool _if_conditional32;
void* right_value19;
struct list_item$1sTypeph* litem_16;
struct sType* __dec_obj11;
void* right_value20;
struct list_item$1sTypeph* litem_17;
struct sType* __dec_obj12;
struct list$1sTypeph* __result18__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&litem_15, 0, sizeof(struct list_item$1sTypeph*));
memset(&litem_16, 0, sizeof(struct list_item$1sTypeph*));
memset(&litem_17, 0, sizeof(struct list_item$1sTypeph*));
                        if(_if_conditional31=self->len==0,                        _if_conditional31) {
                            litem_15=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value18=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 207))));
                            if(right_value18 && right_value18 != __result_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value18, (void*)0, (void*)0, 0, 1, 0, 0); }
                            litem_15->prev=((void*)0);
                            litem_15->next=((void*)0);
                            __dec_obj10=litem_15->item;
                            litem_15->item=(struct sType*)come_increment_ref_count(item);
                            if(__dec_obj10) { come_call_finalizer(sType_finalize,__dec_obj10, (void*)0, (void*)0, 0, 0, 0, 0); }
                            self->tail=litem_15;
                            self->head=litem_15;
                        }
                        else {
                            if(_if_conditional32=self->len==1,                            _if_conditional32) {
                                litem_16=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value19=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 217))));
                                if(right_value19 && right_value19 != __result_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value19, (void*)0, (void*)0, 0, 1, 0, 0); }
                                litem_16->prev=self->head;
                                litem_16->next=((void*)0);
                                __dec_obj11=litem_16->item;
                                litem_16->item=(struct sType*)come_increment_ref_count(item);
                                if(__dec_obj11) { come_call_finalizer(sType_finalize,__dec_obj11, (void*)0, (void*)0, 0, 0, 0, 0); }
                                self->tail=litem_16;
                                self->head->next=litem_16;
                            }
                            else {
                                litem_17=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value20=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 227))));
                                if(right_value20 && right_value20 != __result_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value20, (void*)0, (void*)0, 0, 1, 0, 0); }
                                litem_17->prev=self->tail;
                                litem_17->next=((void*)0);
                                __dec_obj12=litem_17->item;
                                litem_17->item=(struct sType*)come_increment_ref_count(item);
                                if(__dec_obj12) { come_call_finalizer(sType_finalize,__dec_obj12, (void*)0, (void*)0, 0, 0, 0, 0); }
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
_Bool _if_conditional34;
struct list$1sNodeph* __result20__;
void* right_value23;
void* right_value24;
struct list$1sNodeph* result_18;
struct list_item$1sNodeph* it_19;
_Bool _while_condtional5;
void* right_value29;
struct list$1sNodeph* __result25__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_18, 0, sizeof(struct list$1sNodeph*));
memset(&it_19, 0, sizeof(struct list_item$1sNodeph*));
                if(_if_conditional34=self==((void*)0),                _if_conditional34) {
                    __result20__ = __result_obj__ = ((void*)0);
                    return __result20__;
                }
                result_18=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value24=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value23=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 193))))))));
                if(right_value23 && right_value23 != __result_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value23, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value24 && right_value24 != __result_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value24, (void*)0, (void*)0, 0, 1, 0, 0); }
                it_19=self->head;
                while(_while_condtional5=it_19!=((void*)0),                _while_condtional5) {
                    list$1sNodeph_add(result_18,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value29=sNode_clone(it_19->item)))));
                    if(right_value29 && right_value29 != __result_obj__) { right_value29 = come_decrement_ref_count(right_value29, ((struct sNode*)right_value29)->finalize, ((struct sNode*)right_value29)->_protocol_obj, 1, 0, 0); } 
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
_Bool _if_conditional35;
void* right_value25;
struct list_item$1sNodeph* litem_20;
struct sNode* __dec_obj14;
_Bool _if_conditional36;
void* right_value26;
struct list_item$1sNodeph* litem_21;
struct sNode* __dec_obj15;
void* right_value27;
struct list_item$1sNodeph* litem_22;
struct sNode* __dec_obj16;
struct list$1sNodeph* __result22__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&litem_20, 0, sizeof(struct list_item$1sNodeph*));
memset(&litem_21, 0, sizeof(struct list_item$1sNodeph*));
memset(&litem_22, 0, sizeof(struct list_item$1sNodeph*));
                        if(_if_conditional35=self->len==0,                        _if_conditional35) {
                            litem_20=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value25=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 207))));
                            if(right_value25 && right_value25 != __result_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value25, (void*)0, (void*)0, 0, 1, 0, 0); }
                            litem_20->prev=((void*)0);
                            litem_20->next=((void*)0);
                            __dec_obj14=litem_20->item;
                            litem_20->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj14) { __dec_obj14 = come_decrement_ref_count(__dec_obj14, ((struct sNode*)__dec_obj14)->finalize, ((struct sNode*)__dec_obj14)->_protocol_obj, 0,0,0); }
                            self->tail=litem_20;
                            self->head=litem_20;
                        }
                        else {
                            if(_if_conditional36=self->len==1,                            _if_conditional36) {
                                litem_21=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value26=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 217))));
                                if(right_value26 && right_value26 != __result_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value26, (void*)0, (void*)0, 0, 1, 0, 0); }
                                litem_21->prev=self->head;
                                litem_21->next=((void*)0);
                                __dec_obj15=litem_21->item;
                                litem_21->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj15) { __dec_obj15 = come_decrement_ref_count(__dec_obj15, ((struct sNode*)__dec_obj15)->finalize, ((struct sNode*)__dec_obj15)->_protocol_obj, 0,0,0); }
                                self->tail=litem_21;
                                self->head->next=litem_21;
                            }
                            else {
                                litem_22=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value27=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 227))));
                                if(right_value27 && right_value27 != __result_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value27, (void*)0, (void*)0, 0, 1, 0, 0); }
                                litem_22->prev=self->tail;
                                litem_22->next=((void*)0);
                                __dec_obj16=litem_22->item;
                                litem_22->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj16) { __dec_obj16 = come_decrement_ref_count(__dec_obj16, ((struct sNode*)__dec_obj16)->finalize, ((struct sNode*)__dec_obj16)->_protocol_obj, 0,0,0); }
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
_Bool _if_conditional37;
struct sNode* __result23__;
void* right_value28;
struct sNode* result_23;
_Bool _if_conditional38;
_Bool _if_conditional39;
_Bool _if_conditional40;
_Bool _if_conditional41;
_Bool _if_conditional42;
_Bool _if_conditional43;
_Bool _if_conditional44;
_Bool _if_conditional45;
struct sNode* __result24__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_23, 0, sizeof(struct sNode*));
                        if(_if_conditional37=self==(void*)0,                        _if_conditional37) {
                            __result23__ = __result_obj__ = (void*)0;
                            return __result23__;
                        }
                        result_23=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value28=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3))));
                        if(right_value28 && right_value28 != __result_obj__) { right_value28 = come_decrement_ref_count(right_value28, ((struct sNode*)right_value28)->finalize, ((struct sNode*)right_value28)->_protocol_obj, 1, 0, 0); } 
                        if(_if_conditional38=self!=((void*)0)&&self->clone!=((void*)0),                        _if_conditional38) {
                            result_23->_protocol_obj=self->clone(self->_protocol_obj);
                        }
                        if(_if_conditional39=self!=((void*)0),                        _if_conditional39) {
                            result_23->finalize=self->finalize;
                        }
                        if(_if_conditional40=self!=((void*)0),                        _if_conditional40) {
                            result_23->clone=self->clone;
                        }
                        if(_if_conditional41=self!=((void*)0),                        _if_conditional41) {
                            result_23->compile=self->compile;
                        }
                        if(_if_conditional42=self!=((void*)0),                        _if_conditional42) {
                            result_23->sline=self->sline;
                        }
                        if(_if_conditional43=self!=((void*)0),                        _if_conditional43) {
                            result_23->sname=self->sname;
                        }
                        if(_if_conditional44=self!=((void*)0),                        _if_conditional44) {
                            result_23->terminated=self->terminated;
                        }
                        if(_if_conditional45=self!=((void*)0),                        _if_conditional45) {
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
_Bool _if_conditional49;
struct list$1charph* __result26__;
void* right_value32;
void* right_value33;
struct list$1charph* result_24;
struct list_item$1charph* it_25;
_Bool _while_condtional6;
void* right_value37;
struct list$1charph* __result29__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_24, 0, sizeof(struct list$1charph*));
memset(&it_25, 0, sizeof(struct list_item$1charph*));
                if(_if_conditional49=self==((void*)0),                _if_conditional49) {
                    __result26__ = __result_obj__ = ((void*)0);
                    return __result26__;
                }
                result_24=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value33=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value32=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 193))))))));
                if(right_value32 && right_value32 != __result_obj__) { come_call_finalizer(list$1charphp_finalize,right_value32, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value33 && right_value33 != __result_obj__) { come_call_finalizer(list$1charphp_finalize,right_value33, (void*)0, (void*)0, 0, 1, 0, 0); }
                it_25=self->head;
                while(_while_condtional6=it_25!=((void*)0),                _while_condtional6) {
                    list$1charph_add(result_24,(char*)come_increment_ref_count(((char*)(right_value37=string_clone(it_25->item)))));
                    if(right_value37 && right_value37 != __result_obj__) { right_value37 = come_decrement_ref_count(right_value37, (void*)0, (void*)0, 1, 0, 0); }
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
_Bool _if_conditional50;
void* right_value34;
struct list_item$1charph* litem_26;
char* __dec_obj19;
_Bool _if_conditional51;
void* right_value35;
struct list_item$1charph* litem_27;
char* __dec_obj20;
void* right_value36;
struct list_item$1charph* litem_28;
char* __dec_obj21;
struct list$1charph* __result28__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&litem_26, 0, sizeof(struct list_item$1charph*));
memset(&litem_27, 0, sizeof(struct list_item$1charph*));
memset(&litem_28, 0, sizeof(struct list_item$1charph*));
                        if(_if_conditional50=self->len==0,                        _if_conditional50) {
                            litem_26=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value34=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 207))));
                            if(right_value34 && right_value34 != __result_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value34, (void*)0, (void*)0, 0, 1, 0, 0); }
                            litem_26->prev=((void*)0);
                            litem_26->next=((void*)0);
                            __dec_obj19=litem_26->item;
                            litem_26->item=(char*)come_increment_ref_count(item);
                            if(__dec_obj19) { __dec_obj19 = come_decrement_ref_count(__dec_obj19, (void*)0, (void*)0, 0,0,0); }
                            self->tail=litem_26;
                            self->head=litem_26;
                        }
                        else {
                            if(_if_conditional51=self->len==1,                            _if_conditional51) {
                                litem_27=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value35=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 217))));
                                if(right_value35 && right_value35 != __result_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value35, (void*)0, (void*)0, 0, 1, 0, 0); }
                                litem_27->prev=self->head;
                                litem_27->next=((void*)0);
                                __dec_obj20=litem_27->item;
                                litem_27->item=(char*)come_increment_ref_count(item);
                                if(__dec_obj20) { __dec_obj20 = come_decrement_ref_count(__dec_obj20, (void*)0, (void*)0, 0,0,0); }
                                self->tail=litem_27;
                                self->head->next=litem_27;
                            }
                            else {
                                litem_28=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value36=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 227))));
                                if(right_value36 && right_value36 != __result_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value36, (void*)0, (void*)0, 0, 1, 0, 0); }
                                litem_28->prev=self->tail;
                                litem_28->next=((void*)0);
                                __dec_obj21=litem_28->item;
                                litem_28->item=(char*)come_increment_ref_count(item);
                                if(__dec_obj21) { __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0,0,0); }
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

static int list$1sTypeph_length(struct list$1sTypeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
int __result31__;
memset(&__result_obj__, 0, sizeof(void*));
        __result31__ = self->len;
        return __result31__;
}

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
unsigned int hash_37;
unsigned int it_38;
_Bool _while_condtional7;
_Bool _if_conditional94;
void* right_value49;
_Bool _if_conditional96;
struct sGenericsFun* __result34__;
_Bool _if_conditional97;
_Bool _if_conditional98;
struct sGenericsFun* __result35__;
struct sGenericsFun* __result36__;
struct sGenericsFun* __result37__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_37, 0, sizeof(unsigned int));
memset(&it_38, 0, sizeof(unsigned int));
            hash_37=string_get_hash_key(((char*)key))%self->size;
            it_38=hash_37;
            while(_while_condtional7=(_Bool)1,            _while_condtional7) {
                if(_if_conditional94=self->item_existance[it_38],                _if_conditional94) {
                    if(_if_conditional96=optional$2boolbool_value(((struct optional$2boolbool*)(right_value49=string_equals(self->keys[it_38],key)))),                    (right_value49 && right_value49 != __result_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value49, (void*)0, (void*)0, 0, 1, 0, 0):0,
                    _if_conditional96) {
                        __result34__ = __result_obj__ = self->items[it_38];
                        return __result34__;
                    }
                    it_38++;
                    if(_if_conditional97=it_38>=self->size,                    _if_conditional97) {
                        it_38=0;
                    }
                    else {
                        if(_if_conditional98=it_38==hash_37,                        _if_conditional98) {
                            __result35__ = __result_obj__ = default_value;
                            return __result35__;
                        }
                    }
                }
                else {
                    __result36__ = __result_obj__ = default_value;
                    return __result36__;
                }
            }
            __result37__ = __result_obj__ = default_value;
            return __result37__;
}

static _Bool optional$2boolbool_value(struct optional$2boolbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional95;
_Bool default_value_39;
_Bool __result32__;
_Bool __result33__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_39, 0, sizeof(_Bool));
                        if(_if_conditional95=self==((void*)0),                        _if_conditional95) {
                            memset(&default_value_39,0,sizeof(_Bool));
                            __result32__ = default_value_39;
                            return __result32__;
                        }
                        else {
                            __result33__ = self->v1;
                            return __result33__;
                        }
}

static void optional$2boolboolp_finalize(struct optional$2boolbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct optional$2sFunpbool* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
struct sFun* default_value_41;
unsigned int hash_42;
unsigned int it_43;
_Bool _while_condtional8;
_Bool _if_conditional101;
void* right_value51;
_Bool _if_conditional102;
void* right_value52;
void* right_value53;
struct optional$2sFunpbool* __result40__;
_Bool _if_conditional103;
_Bool _if_conditional104;
void* right_value54;
void* right_value55;
struct optional$2sFunpbool* __result41__;
void* right_value56;
void* right_value57;
struct optional$2sFunpbool* __result42__;
void* right_value58;
void* right_value59;
struct optional$2sFunpbool* __result43__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_41, 0, sizeof(struct sFun*));
memset(&hash_42, 0, sizeof(unsigned int));
memset(&it_43, 0, sizeof(unsigned int));
                memset(&default_value_41,0,sizeof(struct sFun*));
                hash_42=string_get_hash_key(((char*)key))%self->size;
                it_43=hash_42;
                while(_while_condtional8=(_Bool)1,                _while_condtional8) {
                    if(_if_conditional101=self->item_existance[it_43],                    _if_conditional101) {
                        if(_if_conditional102=optional$2boolbool_value(((struct optional$2boolbool*)(right_value51=string_equals(self->keys[it_43],key)))),                        (right_value51 && right_value51 != __result_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value51, (void*)0, (void*)0, 0, 1, 0, 0):0,
                        _if_conditional102) {
                            __result40__ = __result_obj__ = ((struct optional$2sFunpbool*)(right_value53=optional$2sFunpbool_initialize((struct optional$2sFunpbool*)come_increment_ref_count(((struct optional$2sFunpbool*)(right_value52=(struct optional$2sFunpbool*)come_calloc(1, sizeof(struct optional$2sFunpbool)*(1), "./comelang2.h", 1600)))),self->items[it_43],(_Bool)1)));
                            if(right_value52 && right_value52 != __result_obj__) { right_value52 = come_decrement_ref_count(right_value52, (void*)0, (void*)0, 1, 0, 0); }
                            return __result40__;
                        }
                        it_43++;
                        if(_if_conditional103=it_43>=self->size,                        _if_conditional103) {
                            it_43=0;
                        }
                        else {
                            if(_if_conditional104=it_43==hash_42,                            _if_conditional104) {
                                __result41__ = __result_obj__ = ((struct optional$2sFunpbool*)(right_value55=optional$2sFunpbool_initialize(((struct optional$2sFunpbool*)(right_value54=(struct optional$2sFunpbool*)come_calloc(1, sizeof(struct optional$2sFunpbool)*(1), "./comelang2.h", 1609))),default_value_41,(_Bool)0)));
                                if(right_value54 && right_value54 != __result_obj__) { right_value54 = come_decrement_ref_count(right_value54, (void*)0, (void*)0, 1, 0, 0); }
                                return __result41__;
                            }
                        }
                    }
                    else {
                        __result42__ = __result_obj__ = ((struct optional$2sFunpbool*)(right_value57=optional$2sFunpbool_initialize(((struct optional$2sFunpbool*)(right_value56=(struct optional$2sFunpbool*)come_calloc(1, sizeof(struct optional$2sFunpbool)*(1), "./comelang2.h", 1613))),default_value_41,(_Bool)0)));
                        if(right_value56 && right_value56 != __result_obj__) { right_value56 = come_decrement_ref_count(right_value56, (void*)0, (void*)0, 1, 0, 0); }
                        return __result42__;
                    }
                }
                __result43__ = __result_obj__ = ((struct optional$2sFunpbool*)(right_value59=optional$2sFunpbool_initialize(((struct optional$2sFunpbool*)(right_value58=(struct optional$2sFunpbool*)come_calloc(1, sizeof(struct optional$2sFunpbool)*(1), "./comelang2.h", 1617))),default_value_41,(_Bool)0)));
                if(right_value58 && right_value58 != __result_obj__) { right_value58 = come_decrement_ref_count(right_value58, (void*)0, (void*)0, 1, 0, 0); }
                return __result43__;
}

static struct optional$2sFunpbool* optional$2sFunpbool_initialize(struct optional$2sFunpbool* self, struct sFun* v1, _Bool v2){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
struct optional$2sFunpbool* __result39__;
memset(&__result_obj__, 0, sizeof(void*));
                                self->v1=v1;
                                self->v2=v2;
                                __result39__ = __result_obj__ = self;
                                if(self) { come_call_finalizer(optional$2sFunpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                                return __result39__;
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
_Bool _if_conditional105;
struct sFun* default_value_44;
struct sFun* __result44__;
struct sFun* __result45__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_44, 0, sizeof(struct sFun*));
                if(_if_conditional105=self==((void*)0),                _if_conditional105) {
                    memset(&default_value_44,0,sizeof(struct sFun*));
                    __result44__ = __result_obj__ = default_value_44;
                    return __result44__;
                }
                else {
                    __result45__ = __result_obj__ = self->v1;
                    return __result45__;
                }
}

static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional107;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional107=self!=((void*)0)&&self->v2!=((void*)0),                    _if_conditional107) {
                        if(self->v2) { self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, 0); }
                    }
}

static void CVALUE_finalize(struct CVALUE* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional112;
_Bool _if_conditional113;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional112=self!=((void*)0)&&self->c_value!=((void*)0),            _if_conditional112) {
                if(self->c_value) { self->c_value = come_decrement_ref_count(self->c_value, (void*)0, (void*)0, 0, 0, 0); }
            }
            if(_if_conditional113=self!=((void*)0)&&self->type!=((void*)0),            _if_conditional113) {
                if(self->type) { come_call_finalizer(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
}

static struct optional$2sTypephbool* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional114;
struct list_item$1sTypeph* it_58;
int i_59;
_Bool _while_condtional9;
_Bool _if_conditional115;
void* right_value74;
void* right_value75;
struct optional$2sTypephbool* __result47__;
struct sType* default_value_60;
void* right_value76;
void* right_value77;
struct optional$2sTypephbool* __result48__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_58, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_59, 0, sizeof(int));
memset(&default_value_60, 0, sizeof(struct sType*));
            if(_if_conditional114=position<0,            _if_conditional114) {
                position+=self->len;
            }
            it_58=self->head;
            i_59=0;
            while(_while_condtional9=it_58!=((void*)0),            _while_condtional9) {
                if(_if_conditional115=position==i_59,                _if_conditional115) {
                    __result47__ = __result_obj__ = ((struct optional$2sTypephbool*)(right_value75=optional$2sTypephbool_initialize((struct optional$2sTypephbool*)come_increment_ref_count(((struct optional$2sTypephbool*)(right_value74=(struct optional$2sTypephbool*)come_calloc(1, sizeof(struct optional$2sTypephbool)*(1), "./comelang2.h", 747)))),(struct sType*)come_increment_ref_count(it_58->item),(_Bool)1)));
                    if(right_value74 && right_value74 != __result_obj__) { right_value74 = come_decrement_ref_count(right_value74, (void*)0, (void*)0, 1, 0, 0); }
                    return __result47__;
                }
                it_58=it_58->next;
                i_59++;
            }
            memset(&default_value_60,0,sizeof(struct sType*));
            __result48__ = __result_obj__ = ((struct optional$2sTypephbool*)(right_value77=optional$2sTypephbool_initialize(((struct optional$2sTypephbool*)(right_value76=(struct optional$2sTypephbool*)come_calloc(1, sizeof(struct optional$2sTypephbool)*(1), "./comelang2.h", 755))),(struct sType*)come_increment_ref_count(default_value_60),(_Bool)0)));
            if(default_value_60) { come_call_finalizer(sType_finalize,default_value_60, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value76 && right_value76 != __result_obj__) { right_value76 = come_decrement_ref_count(right_value76, (void*)0, (void*)0, 1, 0, 0); }
            return __result48__;
            if(default_value_60) { come_call_finalizer(sType_finalize,default_value_60, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct optional$2sTypephbool* optional$2sTypephbool_initialize(struct optional$2sTypephbool* self, struct sType* v1, _Bool v2){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
struct sType* __dec_obj32;
struct optional$2sTypephbool* __result46__;
memset(&__result_obj__, 0, sizeof(void*));
                        __dec_obj32=self->v1;
                        self->v1=(struct sType*)come_increment_ref_count(v1);
                        if(__dec_obj32) { come_call_finalizer(sType_finalize,__dec_obj32, (void*)0, (void*)0, 0, 0, 0, 0); }
                        self->v2=v2;
                        __result46__ = __result_obj__ = self;
                        if(self) { come_call_finalizer(optional$2sTypephboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                        if(v1) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result46__;
                        if(self) { come_call_finalizer(optional$2sTypephboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                        if(v1) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2sTypephboolp_finalize(struct optional$2sTypephbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional116;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional116=self!=((void*)0)&&self->v1!=((void*)0),                            _if_conditional116) {
                                if(self->v1) { come_call_finalizer(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
}

static struct sType* optional$2sTypephbool_value(struct optional$2sTypephbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional117;
struct sType* default_value_61;
struct sType* __result49__;
struct sType* __result50__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_61, 0, sizeof(struct sType*));
            if(_if_conditional117=self==((void*)0),            _if_conditional117) {
                memset(&default_value_61,0,sizeof(struct sType*));
                __result49__ = __result_obj__ = default_value_61;
                return __result49__;
            }
            else {
                __result50__ = __result_obj__ = self->v1;
                return __result50__;
            }
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional121;
void* right_value99;
struct list_item$1CVALUEph* litem_65;
struct CVALUE* __dec_obj41;
_Bool _if_conditional123;
void* right_value100;
struct list_item$1CVALUEph* litem_66;
struct CVALUE* __dec_obj42;
void* right_value101;
struct list_item$1CVALUEph* litem_67;
struct CVALUE* __dec_obj43;
struct list$1CVALUEph* __result51__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&litem_65, 0, sizeof(struct list_item$1CVALUEph*));
memset(&litem_66, 0, sizeof(struct list_item$1CVALUEph*));
memset(&litem_67, 0, sizeof(struct list_item$1CVALUEph*));
            if(_if_conditional121=self->len==0,            _if_conditional121) {
                litem_65=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value99=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 277))));
                if(right_value99 && right_value99 != __result_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value99, (void*)0, (void*)0, 0, 1, 0, 0); }
                litem_65->prev=((void*)0);
                litem_65->next=((void*)0);
                __dec_obj41=litem_65->item;
                litem_65->item=(struct CVALUE*)come_increment_ref_count(item);
                if(__dec_obj41) { come_call_finalizer(CVALUE_finalize,__dec_obj41, (void*)0, (void*)0, 0, 0, 0, 0); }
                self->tail=litem_65;
                self->head=litem_65;
            }
            else {
                if(_if_conditional123=self->len==1,                _if_conditional123) {
                    litem_66=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value100=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 287))));
                    if(right_value100 && right_value100 != __result_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value100, (void*)0, (void*)0, 0, 1, 0, 0); }
                    litem_66->prev=self->head;
                    litem_66->next=((void*)0);
                    __dec_obj42=litem_66->item;
                    litem_66->item=(struct CVALUE*)come_increment_ref_count(item);
                    if(__dec_obj42) { come_call_finalizer(CVALUE_finalize,__dec_obj42, (void*)0, (void*)0, 0, 0, 0, 0); }
                    self->tail=litem_66;
                    self->head->next=litem_66;
                }
                else {
                    litem_67=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value101=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 297))));
                    if(right_value101 && right_value101 != __result_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value101, (void*)0, (void*)0, 0, 1, 0, 0); }
                    litem_67->prev=self->tail;
                    litem_67->next=((void*)0);
                    __dec_obj43=litem_67->item;
                    litem_67->item=(struct CVALUE*)come_increment_ref_count(item);
                    if(__dec_obj43) { come_call_finalizer(CVALUE_finalize,__dec_obj43, (void*)0, (void*)0, 0, 0, 0, 0); }
                    self->tail->next=litem_67;
                    self->tail=litem_67;
                }
            }
            self->len++;
            __result51__ = __result_obj__ = self;
            if(item) { come_call_finalizer(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
            return __result51__;
            if(item) { come_call_finalizer(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional122;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional122=self!=((void*)0)&&self->item!=((void*)0),                    _if_conditional122) {
                        if(self->item) { come_call_finalizer(CVALUE_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
}

struct sNullNode* sNullNode_initialize(struct sNullNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value102;
char* __dec_obj44;
struct sNullNode* __result53__;
memset(&__result_obj__, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj44=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value102=__builtin_string(info->sname))));
    if(__dec_obj44) { __dec_obj44 = come_decrement_ref_count(__dec_obj44, (void*)0, (void*)0, 0,0,0); }
    if(right_value102 && right_value102 != __result_obj__) { right_value102 = come_decrement_ref_count(right_value102, (void*)0, (void*)0, 1, 0, 0); }
    __result53__ = __result_obj__ = self;
    if(self) { come_call_finalizer(sNullNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result53__;
    if(self) { come_call_finalizer(sNullNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

_Bool sNullNode_terminated(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __result54__;
memset(&__result_obj__, 0, sizeof(void*));
    __result54__ = (_Bool)0;
    return __result54__;
}

char* sNullNode_kind(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value103;
char* __result55__;
memset(&__result_obj__, 0, sizeof(void*));
    __result55__ = __result_obj__ = ((char*)(right_value103=__builtin_string("sNullNode")));
    return __result55__;
}

_Bool sNullNode_compile(struct sNullNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value104;
struct CVALUE* come_value_68;
void* right_value105;
char* __dec_obj45;
void* right_value106;
void* right_value107;
struct sType* __dec_obj46;
_Bool __result56__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&come_value_68, 0, sizeof(struct CVALUE*));
    come_value_68=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value104=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 150))));
    if(right_value104 && right_value104 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value104, (void*)0, (void*)0, 0, 1, 0, 0); }
    __dec_obj45=come_value_68->c_value;
    come_value_68->c_value=(char*)come_increment_ref_count(((char*)(right_value105=xsprintf("((void*)0)"))));
    if(__dec_obj45) { __dec_obj45 = come_decrement_ref_count(__dec_obj45, (void*)0, (void*)0, 0,0,0); }
    if(right_value105 && right_value105 != __result_obj__) { right_value105 = come_decrement_ref_count(right_value105, (void*)0, (void*)0, 1, 0, 0); }
    __dec_obj46=come_value_68->type;
    come_value_68->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value107=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value106=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "13op.c", 153)))),"void*",(_Bool)0,info))));
    if(__dec_obj46) { come_call_finalizer(sType_finalize,__dec_obj46, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value106 && right_value106 != __result_obj__) { come_call_finalizer(sType_finalize,right_value106, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value107 && right_value107 != __result_obj__) { come_call_finalizer(sType_finalize,right_value107, (void*)0, (void*)0, 0, 1, 0, 0); }
    come_value_68->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_68->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_68));
    __result56__ = (_Bool)1;
    if(come_value_68) { come_call_finalizer(CVALUE_finalize,come_value_68, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result56__;
    if(come_value_68) { come_call_finalizer(CVALUE_finalize,come_value_68, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sNullNode_sline(struct sNullNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
int __result57__;
memset(&__result_obj__, 0, sizeof(void*));
    __result57__ = self->sline;
    return __result57__;
}

char* sNullNode_sname(struct sNullNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value108;
char* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
    __result58__ = __result_obj__ = ((char*)(right_value108=__builtin_string(self->sname)));
    return __result58__;
}

struct sNode* create_null_object(struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value109;
void* right_value110;
struct sNode* _inf_value1;
struct sNullNode* _inf_obj_value1;
void* right_value113;
struct sNode* __result61__;
memset(&__result_obj__, 0, sizeof(void*));
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 175);
    _inf_obj_value1=come_increment_ref_count(((struct sNullNode*)(right_value110=sNullNode_initialize((struct sNullNode*)come_increment_ref_count(((struct sNullNode*)(right_value109=(struct sNullNode*)come_calloc(1, sizeof(struct sNullNode)*(1), "13op.c", 175)))),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sNullNode_finalize;
    _inf_value1->clone=(void*)sNullNode_clone;
    _inf_value1->compile=(void*)sNullNode_compile;
    _inf_value1->sline=(void*)sNullNode_sline;
    _inf_value1->sname=(void*)sNullNode_sname;
    _inf_value1->terminated=(void*)sNullNode_terminated;
    _inf_value1->kind=(void*)sNullNode_kind;
    __result61__ = __result_obj__ = ((struct sNode*)(right_value113=_inf_value1));
    if(right_value109 && right_value109 != __result_obj__) { come_call_finalizer(sNullNode_finalize,right_value109, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value110 && right_value110 != __result_obj__) { come_call_finalizer(sNullNode_finalize,right_value110, (void*)0, (void*)0, 0, 1, 0, 0); }
    return __result61__;
}

struct sNilNode* sNilNode_initialize(struct sNilNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value114;
char* __dec_obj48;
struct sNilNode* __result62__;
memset(&__result_obj__, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj48=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value114=__builtin_string(info->sname))));
    if(__dec_obj48) { __dec_obj48 = come_decrement_ref_count(__dec_obj48, (void*)0, (void*)0, 0,0,0); }
    if(right_value114 && right_value114 != __result_obj__) { right_value114 = come_decrement_ref_count(right_value114, (void*)0, (void*)0, 1, 0, 0); }
    __result62__ = __result_obj__ = self;
    if(self) { come_call_finalizer(sNilNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result62__;
    if(self) { come_call_finalizer(sNilNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

_Bool sNilNode_terminated(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __result63__;
memset(&__result_obj__, 0, sizeof(void*));
    __result63__ = (_Bool)0;
    return __result63__;
}

char* sNilNode_kind(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value115;
char* __result64__;
memset(&__result_obj__, 0, sizeof(void*));
    __result64__ = __result_obj__ = ((char*)(right_value115=__builtin_string("sNilNode")));
    return __result64__;
}

_Bool sNilNode_compile(struct sNilNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value116;
struct CVALUE* come_value_70;
void* right_value117;
char* __dec_obj49;
void* right_value118;
void* right_value119;
struct sType* __dec_obj50;
_Bool __result65__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&come_value_70, 0, sizeof(struct CVALUE*));
    come_value_70=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value116=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 205))));
    if(right_value116 && right_value116 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value116, (void*)0, (void*)0, 0, 1, 0, 0); }
    __dec_obj49=come_value_70->c_value;
    come_value_70->c_value=(char*)come_increment_ref_count(((char*)(right_value117=xsprintf("((void*)0)"))));
    if(__dec_obj49) { __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0,0,0); }
    if(right_value117 && right_value117 != __result_obj__) { right_value117 = come_decrement_ref_count(right_value117, (void*)0, (void*)0, 1, 0, 0); }
    __dec_obj50=come_value_70->type;
    come_value_70->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value119=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value118=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "13op.c", 208)))),"void*",(_Bool)0,info))));
    if(__dec_obj50) { come_call_finalizer(sType_finalize,__dec_obj50, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value118 && right_value118 != __result_obj__) { come_call_finalizer(sType_finalize,right_value118, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value119 && right_value119 != __result_obj__) { come_call_finalizer(sType_finalize,right_value119, (void*)0, (void*)0, 0, 1, 0, 0); }
    come_value_70->type->mNullValue=(_Bool)1;
    come_value_70->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_70->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_70));
    __result65__ = (_Bool)1;
    if(come_value_70) { come_call_finalizer(CVALUE_finalize,come_value_70, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result65__;
    if(come_value_70) { come_call_finalizer(CVALUE_finalize,come_value_70, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sNilNode_sline(struct sNilNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
int __result66__;
memset(&__result_obj__, 0, sizeof(void*));
    __result66__ = self->sline;
    return __result66__;
}

char* sNilNode_sname(struct sNilNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value120;
char* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
    __result67__ = __result_obj__ = ((char*)(right_value120=__builtin_string(self->sname)));
    return __result67__;
}

struct sAddNode* sAddNode_initialize(struct sAddNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value126;
char* __dec_obj52;
void* right_value127;
struct sNode* __dec_obj53;
void* right_value128;
struct sNode* __dec_obj54;
struct sAddNode* __result71__;
memset(&__result_obj__, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj52=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value126=__builtin_string(info->sname))));
    if(__dec_obj52) { __dec_obj52 = come_decrement_ref_count(__dec_obj52, (void*)0, (void*)0, 0,0,0); }
    if(right_value126 && right_value126 != __result_obj__) { right_value126 = come_decrement_ref_count(right_value126, (void*)0, (void*)0, 1, 0, 0); }
    __dec_obj53=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value127=sNode_clone(left))));
    if(__dec_obj53) { __dec_obj53 = come_decrement_ref_count(__dec_obj53, ((struct sNode*)__dec_obj53)->finalize, ((struct sNode*)__dec_obj53)->_protocol_obj, 0,0,0); }
    if(right_value127 && right_value127 != __result_obj__) { right_value127 = come_decrement_ref_count(right_value127, ((struct sNode*)right_value127)->finalize, ((struct sNode*)right_value127)->_protocol_obj, 1, 0, 0); } 
    __dec_obj54=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value128=sNode_clone(right))));
    if(__dec_obj54) { __dec_obj54 = come_decrement_ref_count(__dec_obj54, ((struct sNode*)__dec_obj54)->finalize, ((struct sNode*)__dec_obj54)->_protocol_obj, 0,0,0); }
    if(right_value128 && right_value128 != __result_obj__) { right_value128 = come_decrement_ref_count(right_value128, ((struct sNode*)right_value128)->finalize, ((struct sNode*)right_value128)->_protocol_obj, 1, 0, 0); } 
    self->mQuote=quote;
    __result71__ = __result_obj__ = self;
    if(self) { come_call_finalizer(sAddNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    return __result71__;
    if(self) { come_call_finalizer(sAddNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
}

_Bool sAddNode_terminated(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __result72__;
memset(&__result_obj__, 0, sizeof(void*));
    __result72__ = (_Bool)0;
    return __result72__;
}

char* sAddNode_kind(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value129;
char* __result73__;
memset(&__result_obj__, 0, sizeof(void*));
    __result73__ = __result_obj__ = ((char*)(right_value129=__builtin_string("sAddNode")));
    return __result73__;
}

_Bool sAddNode_compile(struct sAddNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
struct sNode* left_node_72;
_Bool _if_conditional137;
_Bool __result74__;
void* right_value130;
struct CVALUE* left_value_73;
struct sNode* right_node_74;
_Bool _if_conditional138;
_Bool __result75__;
void* right_value131;
struct CVALUE* right_value_75;
struct sType* type_76;
char* fun_name_77;
_Bool calling_fun_78;
_Bool _if_conditional139;
_Bool _if_conditional140;
void* right_value132;
struct CVALUE* come_value_79;
void* right_value133;
char* __dec_obj55;
void* right_value134;
struct sType* __dec_obj56;
_Bool __result76__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_72, 0, sizeof(struct sNode*));
memset(&left_value_73, 0, sizeof(struct CVALUE*));
memset(&right_node_74, 0, sizeof(struct sNode*));
memset(&right_value_75, 0, sizeof(struct CVALUE*));
memset(&type_76, 0, sizeof(struct sType*));
memset(&fun_name_77, 0, sizeof(char*));
memset(&calling_fun_78, 0, sizeof(_Bool));
memset(&come_value_79, 0, sizeof(struct CVALUE*));
    left_node_72=self->mLeft;
    if(_if_conditional137=!node_compile(left_node_72,info),    _if_conditional137) {
        __result74__ = (_Bool)0;
        return __result74__;
    }
    left_value_73=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value130=get_value_from_stack(-1,info))));
    if(right_value130 && right_value130 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value130, (void*)0, (void*)0, 0, 1, 0, 0); }
    dec_stack_ptr(1,info);
    right_node_74=self->mRight;
    if(_if_conditional138=!node_compile(right_node_74,info),    _if_conditional138) {
        __result75__ = (_Bool)0;
        if(left_value_73) { come_call_finalizer(CVALUE_finalize,left_value_73, (void*)0, (void*)0, 0, 0, 0, 0); }
        return __result75__;
    }
    right_value_75=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value131=get_value_from_stack(-1,info))));
    if(right_value131 && right_value131 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value131, (void*)0, (void*)0, 0, 1, 0, 0); }
    dec_stack_ptr(1,info);
    type_76=(struct sType*)come_increment_ref_count(left_value_73->type);
    fun_name_77="operator_add";
    if(_if_conditional139=self->mQuote,    _if_conditional139) {
        calling_fun_78=(_Bool)0;
    }
    else {
        calling_fun_78=operator_overload_fun(type_76,fun_name_77,left_value_73,right_value_75,info);
    }
    if(_if_conditional140=!calling_fun_78,    _if_conditional140) {
        come_value_79=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value132=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 301))));
        if(right_value132 && right_value132 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value132, (void*)0, (void*)0, 0, 1, 0, 0); }
        __dec_obj55=come_value_79->c_value;
        come_value_79->c_value=(char*)come_increment_ref_count(((char*)(right_value133=xsprintf("%s+%s",left_value_73->c_value,right_value_75->c_value))));
        if(__dec_obj55) { __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0,0,0); }
        if(right_value133 && right_value133 != __result_obj__) { right_value133 = come_decrement_ref_count(right_value133, (void*)0, (void*)0, 1, 0, 0); }
        __dec_obj56=come_value_79->type;
        come_value_79->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value134=sType_clone(left_value_73->type))));
        if(__dec_obj56) { come_call_finalizer(sType_finalize,__dec_obj56, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value134 && right_value134 != __result_obj__) { come_call_finalizer(sType_finalize,right_value134, (void*)0, (void*)0, 0, 1, 0, 0); }
        come_value_79->type->mHeap=(_Bool)0;
        come_value_79->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_79->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_79));
        if(come_value_79) { come_call_finalizer(CVALUE_finalize,come_value_79, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __result76__ = (_Bool)1;
    if(left_value_73) { come_call_finalizer(CVALUE_finalize,left_value_73, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_75) { come_call_finalizer(CVALUE_finalize,right_value_75, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_76) { come_call_finalizer(sType_finalize,type_76, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result76__;
    if(left_value_73) { come_call_finalizer(CVALUE_finalize,left_value_73, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_75) { come_call_finalizer(CVALUE_finalize,right_value_75, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_76) { come_call_finalizer(sType_finalize,type_76, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sAddNode_sline(struct sAddNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
int __result77__;
memset(&__result_obj__, 0, sizeof(void*));
    __result77__ = self->sline;
    return __result77__;
}

char* sAddNode_sname(struct sAddNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value135;
char* __result78__;
memset(&__result_obj__, 0, sizeof(void*));
    __result78__ = __result_obj__ = ((char*)(right_value135=__builtin_string(self->sname)));
    return __result78__;
}

struct sSubNode* sSubNode_initialize(struct sSubNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value136;
char* __dec_obj57;
void* right_value137;
struct sNode* __dec_obj58;
void* right_value138;
struct sNode* __dec_obj59;
struct sSubNode* __result79__;
memset(&__result_obj__, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj57=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value136=__builtin_string(info->sname))));
    if(__dec_obj57) { __dec_obj57 = come_decrement_ref_count(__dec_obj57, (void*)0, (void*)0, 0,0,0); }
    if(right_value136 && right_value136 != __result_obj__) { right_value136 = come_decrement_ref_count(right_value136, (void*)0, (void*)0, 1, 0, 0); }
    __dec_obj58=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value137=sNode_clone(left))));
    if(__dec_obj58) { __dec_obj58 = come_decrement_ref_count(__dec_obj58, ((struct sNode*)__dec_obj58)->finalize, ((struct sNode*)__dec_obj58)->_protocol_obj, 0,0,0); }
    if(right_value137 && right_value137 != __result_obj__) { right_value137 = come_decrement_ref_count(right_value137, ((struct sNode*)right_value137)->finalize, ((struct sNode*)right_value137)->_protocol_obj, 1, 0, 0); } 
    __dec_obj59=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value138=sNode_clone(right))));
    if(__dec_obj59) { __dec_obj59 = come_decrement_ref_count(__dec_obj59, ((struct sNode*)__dec_obj59)->finalize, ((struct sNode*)__dec_obj59)->_protocol_obj, 0,0,0); }
    if(right_value138 && right_value138 != __result_obj__) { right_value138 = come_decrement_ref_count(right_value138, ((struct sNode*)right_value138)->finalize, ((struct sNode*)right_value138)->_protocol_obj, 1, 0, 0); } 
    self->mQuote=quote;
    __result79__ = __result_obj__ = self;
    if(self) { come_call_finalizer(sSubNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    return __result79__;
    if(self) { come_call_finalizer(sSubNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
}

_Bool sSubNode_terminated(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __result80__;
memset(&__result_obj__, 0, sizeof(void*));
    __result80__ = (_Bool)0;
    return __result80__;
}

char* sSubNode_kind(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value139;
char* __result81__;
memset(&__result_obj__, 0, sizeof(void*));
    __result81__ = __result_obj__ = ((char*)(right_value139=__builtin_string("sSubNode")));
    return __result81__;
}

_Bool sSubNode_compile(struct sSubNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
struct sNode* left_node_80;
_Bool _if_conditional144;
_Bool __result82__;
void* right_value140;
struct CVALUE* left_value_81;
struct sNode* right_node_82;
_Bool _if_conditional145;
_Bool __result83__;
void* right_value141;
struct CVALUE* right_value_83;
struct sType* type_84;
char* fun_name_85;
_Bool calling_fun_86;
_Bool _if_conditional146;
_Bool _if_conditional147;
void* right_value142;
struct CVALUE* come_value_87;
void* right_value143;
char* __dec_obj60;
void* right_value144;
struct sType* __dec_obj61;
_Bool __result84__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_80, 0, sizeof(struct sNode*));
memset(&left_value_81, 0, sizeof(struct CVALUE*));
memset(&right_node_82, 0, sizeof(struct sNode*));
memset(&right_value_83, 0, sizeof(struct CVALUE*));
memset(&type_84, 0, sizeof(struct sType*));
memset(&fun_name_85, 0, sizeof(char*));
memset(&calling_fun_86, 0, sizeof(_Bool));
memset(&come_value_87, 0, sizeof(struct CVALUE*));
    left_node_80=self->mLeft;
    if(_if_conditional144=!node_compile(left_node_80,info),    _if_conditional144) {
        __result82__ = (_Bool)0;
        return __result82__;
    }
    left_value_81=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value140=get_value_from_stack(-1,info))));
    if(right_value140 && right_value140 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value140, (void*)0, (void*)0, 0, 1, 0, 0); }
    dec_stack_ptr(1,info);
    right_node_82=self->mRight;
    if(_if_conditional145=!node_compile(right_node_82,info),    _if_conditional145) {
        __result83__ = (_Bool)0;
        if(left_value_81) { come_call_finalizer(CVALUE_finalize,left_value_81, (void*)0, (void*)0, 0, 0, 0, 0); }
        return __result83__;
    }
    right_value_83=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value141=get_value_from_stack(-1,info))));
    if(right_value141 && right_value141 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value141, (void*)0, (void*)0, 0, 1, 0, 0); }
    dec_stack_ptr(1,info);
    type_84=(struct sType*)come_increment_ref_count(left_value_81->type);
    fun_name_85="operator_sub";
    if(_if_conditional146=self->mQuote,    _if_conditional146) {
        calling_fun_86=(_Bool)0;
    }
    else {
        calling_fun_86=operator_overload_fun(type_84,fun_name_85,left_value_81,right_value_83,info);
    }
    if(_if_conditional147=!calling_fun_86,    _if_conditional147) {
        come_value_87=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value142=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 392))));
        if(right_value142 && right_value142 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value142, (void*)0, (void*)0, 0, 1, 0, 0); }
        __dec_obj60=come_value_87->c_value;
        come_value_87->c_value=(char*)come_increment_ref_count(((char*)(right_value143=xsprintf("%s-%s",left_value_81->c_value,right_value_83->c_value))));
        if(__dec_obj60) { __dec_obj60 = come_decrement_ref_count(__dec_obj60, (void*)0, (void*)0, 0,0,0); }
        if(right_value143 && right_value143 != __result_obj__) { right_value143 = come_decrement_ref_count(right_value143, (void*)0, (void*)0, 1, 0, 0); }
        __dec_obj61=come_value_87->type;
        come_value_87->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value144=sType_clone(left_value_81->type))));
        if(__dec_obj61) { come_call_finalizer(sType_finalize,__dec_obj61, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value144 && right_value144 != __result_obj__) { come_call_finalizer(sType_finalize,right_value144, (void*)0, (void*)0, 0, 1, 0, 0); }
        come_value_87->type->mHeap=(_Bool)0;
        come_value_87->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_87->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_87));
        if(come_value_87) { come_call_finalizer(CVALUE_finalize,come_value_87, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __result84__ = (_Bool)1;
    if(left_value_81) { come_call_finalizer(CVALUE_finalize,left_value_81, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_83) { come_call_finalizer(CVALUE_finalize,right_value_83, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_84) { come_call_finalizer(sType_finalize,type_84, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result84__;
    if(left_value_81) { come_call_finalizer(CVALUE_finalize,left_value_81, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_83) { come_call_finalizer(CVALUE_finalize,right_value_83, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_84) { come_call_finalizer(sType_finalize,type_84, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sSubNode_sline(struct sSubNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
int __result85__;
memset(&__result_obj__, 0, sizeof(void*));
    __result85__ = self->sline;
    return __result85__;
}

char* sSubNode_sname(struct sSubNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value145;
char* __result86__;
memset(&__result_obj__, 0, sizeof(void*));
    __result86__ = __result_obj__ = ((char*)(right_value145=__builtin_string(self->sname)));
    return __result86__;
}

struct sMultNode* sMultNode_initialize(struct sMultNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value146;
char* __dec_obj62;
void* right_value147;
struct sNode* __dec_obj63;
void* right_value148;
struct sNode* __dec_obj64;
struct sMultNode* __result87__;
memset(&__result_obj__, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj62=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value146=__builtin_string(info->sname))));
    if(__dec_obj62) { __dec_obj62 = come_decrement_ref_count(__dec_obj62, (void*)0, (void*)0, 0,0,0); }
    if(right_value146 && right_value146 != __result_obj__) { right_value146 = come_decrement_ref_count(right_value146, (void*)0, (void*)0, 1, 0, 0); }
    self->mQuote=quote;
    __dec_obj63=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value147=sNode_clone(left))));
    if(__dec_obj63) { __dec_obj63 = come_decrement_ref_count(__dec_obj63, ((struct sNode*)__dec_obj63)->finalize, ((struct sNode*)__dec_obj63)->_protocol_obj, 0,0,0); }
    if(right_value147 && right_value147 != __result_obj__) { right_value147 = come_decrement_ref_count(right_value147, ((struct sNode*)right_value147)->finalize, ((struct sNode*)right_value147)->_protocol_obj, 1, 0, 0); } 
    __dec_obj64=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value148=sNode_clone(right))));
    if(__dec_obj64) { __dec_obj64 = come_decrement_ref_count(__dec_obj64, ((struct sNode*)__dec_obj64)->finalize, ((struct sNode*)__dec_obj64)->_protocol_obj, 0,0,0); }
    if(right_value148 && right_value148 != __result_obj__) { right_value148 = come_decrement_ref_count(right_value148, ((struct sNode*)right_value148)->finalize, ((struct sNode*)right_value148)->_protocol_obj, 1, 0, 0); } 
    __result87__ = __result_obj__ = self;
    if(self) { come_call_finalizer(sMultNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    return __result87__;
    if(self) { come_call_finalizer(sMultNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
}

_Bool sMultNode_terminated(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __result88__;
memset(&__result_obj__, 0, sizeof(void*));
    __result88__ = (_Bool)0;
    return __result88__;
}

char* sMultNode_kind(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value149;
char* __result89__;
memset(&__result_obj__, 0, sizeof(void*));
    __result89__ = __result_obj__ = ((char*)(right_value149=__builtin_string("sMultNode")));
    return __result89__;
}

_Bool sMultNode_compile(struct sMultNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
struct sNode* left_node_88;
_Bool _if_conditional151;
_Bool __result90__;
void* right_value150;
struct CVALUE* left_value_89;
struct sNode* right_node_90;
_Bool _if_conditional152;
_Bool __result91__;
void* right_value151;
struct CVALUE* right_value_91;
struct sType* type_92;
char* fun_name_93;
_Bool calling_fun_94;
_Bool _if_conditional153;
_Bool _if_conditional154;
void* right_value152;
struct CVALUE* come_value_95;
void* right_value153;
char* __dec_obj65;
void* right_value154;
struct sType* __dec_obj66;
_Bool __result92__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_88, 0, sizeof(struct sNode*));
memset(&left_value_89, 0, sizeof(struct CVALUE*));
memset(&right_node_90, 0, sizeof(struct sNode*));
memset(&right_value_91, 0, sizeof(struct CVALUE*));
memset(&type_92, 0, sizeof(struct sType*));
memset(&fun_name_93, 0, sizeof(char*));
memset(&calling_fun_94, 0, sizeof(_Bool));
memset(&come_value_95, 0, sizeof(struct CVALUE*));
    left_node_88=self->mLeft;
    if(_if_conditional151=!node_compile(left_node_88,info),    _if_conditional151) {
        __result90__ = (_Bool)0;
        return __result90__;
    }
    left_value_89=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value150=get_value_from_stack(-1,info))));
    if(right_value150 && right_value150 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value150, (void*)0, (void*)0, 0, 1, 0, 0); }
    dec_stack_ptr(1,info);
    right_node_90=self->mRight;
    if(_if_conditional152=!node_compile(right_node_90,info),    _if_conditional152) {
        __result91__ = (_Bool)0;
        if(left_value_89) { come_call_finalizer(CVALUE_finalize,left_value_89, (void*)0, (void*)0, 0, 0, 0, 0); }
        return __result91__;
    }
    right_value_91=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value151=get_value_from_stack(-1,info))));
    if(right_value151 && right_value151 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value151, (void*)0, (void*)0, 0, 1, 0, 0); }
    dec_stack_ptr(1,info);
    type_92=(struct sType*)come_increment_ref_count(left_value_89->type);
    fun_name_93="operator_mult";
    if(_if_conditional153=self->mQuote,    _if_conditional153) {
        calling_fun_94=(_Bool)0;
    }
    else {
        calling_fun_94=operator_overload_fun(type_92,fun_name_93,left_value_89,right_value_91,info);
    }
    if(_if_conditional154=!calling_fun_94,    _if_conditional154) {
        come_value_95=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value152=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 483))));
        if(right_value152 && right_value152 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value152, (void*)0, (void*)0, 0, 1, 0, 0); }
        __dec_obj65=come_value_95->c_value;
        come_value_95->c_value=(char*)come_increment_ref_count(((char*)(right_value153=xsprintf("%s*%s",left_value_89->c_value,right_value_91->c_value))));
        if(__dec_obj65) { __dec_obj65 = come_decrement_ref_count(__dec_obj65, (void*)0, (void*)0, 0,0,0); }
        if(right_value153 && right_value153 != __result_obj__) { right_value153 = come_decrement_ref_count(right_value153, (void*)0, (void*)0, 1, 0, 0); }
        __dec_obj66=come_value_95->type;
        come_value_95->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value154=sType_clone(left_value_89->type))));
        if(__dec_obj66) { come_call_finalizer(sType_finalize,__dec_obj66, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value154 && right_value154 != __result_obj__) { come_call_finalizer(sType_finalize,right_value154, (void*)0, (void*)0, 0, 1, 0, 0); }
        come_value_95->type->mHeap=(_Bool)0;
        come_value_95->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_95->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_95));
        if(come_value_95) { come_call_finalizer(CVALUE_finalize,come_value_95, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __result92__ = (_Bool)1;
    if(left_value_89) { come_call_finalizer(CVALUE_finalize,left_value_89, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_91) { come_call_finalizer(CVALUE_finalize,right_value_91, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_92) { come_call_finalizer(sType_finalize,type_92, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result92__;
    if(left_value_89) { come_call_finalizer(CVALUE_finalize,left_value_89, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_91) { come_call_finalizer(CVALUE_finalize,right_value_91, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_92) { come_call_finalizer(sType_finalize,type_92, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sMultNode_sline(struct sMultNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
int __result93__;
memset(&__result_obj__, 0, sizeof(void*));
    __result93__ = self->sline;
    return __result93__;
}

char* sMultNode_sname(struct sMultNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value155;
char* __result94__;
memset(&__result_obj__, 0, sizeof(void*));
    __result94__ = __result_obj__ = ((char*)(right_value155=__builtin_string(self->sname)));
    return __result94__;
}

struct sDivNode* sDivNode_initialize(struct sDivNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value156;
char* __dec_obj67;
void* right_value157;
struct sNode* __dec_obj68;
void* right_value158;
struct sNode* __dec_obj69;
struct sDivNode* __result95__;
memset(&__result_obj__, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj67=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value156=__builtin_string(info->sname))));
    if(__dec_obj67) { __dec_obj67 = come_decrement_ref_count(__dec_obj67, (void*)0, (void*)0, 0,0,0); }
    if(right_value156 && right_value156 != __result_obj__) { right_value156 = come_decrement_ref_count(right_value156, (void*)0, (void*)0, 1, 0, 0); }
    self->mQuote=quote;
    __dec_obj68=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value157=sNode_clone(left))));
    if(__dec_obj68) { __dec_obj68 = come_decrement_ref_count(__dec_obj68, ((struct sNode*)__dec_obj68)->finalize, ((struct sNode*)__dec_obj68)->_protocol_obj, 0,0,0); }
    if(right_value157 && right_value157 != __result_obj__) { right_value157 = come_decrement_ref_count(right_value157, ((struct sNode*)right_value157)->finalize, ((struct sNode*)right_value157)->_protocol_obj, 1, 0, 0); } 
    __dec_obj69=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value158=sNode_clone(right))));
    if(__dec_obj69) { __dec_obj69 = come_decrement_ref_count(__dec_obj69, ((struct sNode*)__dec_obj69)->finalize, ((struct sNode*)__dec_obj69)->_protocol_obj, 0,0,0); }
    if(right_value158 && right_value158 != __result_obj__) { right_value158 = come_decrement_ref_count(right_value158, ((struct sNode*)right_value158)->finalize, ((struct sNode*)right_value158)->_protocol_obj, 1, 0, 0); } 
    __result95__ = __result_obj__ = self;
    if(self) { come_call_finalizer(sDivNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    return __result95__;
    if(self) { come_call_finalizer(sDivNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
}

_Bool sDivNode_terminated(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __result96__;
memset(&__result_obj__, 0, sizeof(void*));
    __result96__ = (_Bool)0;
    return __result96__;
}

char* sDivNode_kind(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value159;
char* __result97__;
memset(&__result_obj__, 0, sizeof(void*));
    __result97__ = __result_obj__ = ((char*)(right_value159=__builtin_string("sDivNode")));
    return __result97__;
}

_Bool sDivNode_compile(struct sDivNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
struct sNode* left_node_96;
_Bool _if_conditional158;
_Bool __result98__;
void* right_value160;
struct CVALUE* left_value_97;
struct sNode* right_node_98;
_Bool _if_conditional159;
_Bool __result99__;
void* right_value161;
struct CVALUE* right_value_99;
struct sType* type_100;
char* fun_name_101;
_Bool calling_fun_102;
_Bool _if_conditional160;
_Bool _if_conditional161;
void* right_value162;
struct CVALUE* come_value_103;
void* right_value163;
char* __dec_obj70;
void* right_value164;
struct sType* __dec_obj71;
_Bool __result100__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_96, 0, sizeof(struct sNode*));
memset(&left_value_97, 0, sizeof(struct CVALUE*));
memset(&right_node_98, 0, sizeof(struct sNode*));
memset(&right_value_99, 0, sizeof(struct CVALUE*));
memset(&type_100, 0, sizeof(struct sType*));
memset(&fun_name_101, 0, sizeof(char*));
memset(&calling_fun_102, 0, sizeof(_Bool));
memset(&come_value_103, 0, sizeof(struct CVALUE*));
    left_node_96=self->mLeft;
    if(_if_conditional158=!node_compile(left_node_96,info),    _if_conditional158) {
        __result98__ = (_Bool)0;
        return __result98__;
    }
    left_value_97=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value160=get_value_from_stack(-1,info))));
    if(right_value160 && right_value160 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value160, (void*)0, (void*)0, 0, 1, 0, 0); }
    dec_stack_ptr(1,info);
    right_node_98=self->mRight;
    if(_if_conditional159=!node_compile(right_node_98,info),    _if_conditional159) {
        __result99__ = (_Bool)0;
        if(left_value_97) { come_call_finalizer(CVALUE_finalize,left_value_97, (void*)0, (void*)0, 0, 0, 0, 0); }
        return __result99__;
    }
    right_value_99=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value161=get_value_from_stack(-1,info))));
    if(right_value161 && right_value161 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value161, (void*)0, (void*)0, 0, 1, 0, 0); }
    dec_stack_ptr(1,info);
    type_100=(struct sType*)come_increment_ref_count(left_value_97->type);
    fun_name_101="operator_div";
    if(_if_conditional160=self->mQuote,    _if_conditional160) {
        calling_fun_102=(_Bool)0;
    }
    else {
        calling_fun_102=operator_overload_fun(type_100,fun_name_101,left_value_97,right_value_99,info);
    }
    if(_if_conditional161=!calling_fun_102,    _if_conditional161) {
        come_value_103=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value162=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 574))));
        if(right_value162 && right_value162 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value162, (void*)0, (void*)0, 0, 1, 0, 0); }
        __dec_obj70=come_value_103->c_value;
        come_value_103->c_value=(char*)come_increment_ref_count(((char*)(right_value163=xsprintf("%s/%s",left_value_97->c_value,right_value_99->c_value))));
        if(__dec_obj70) { __dec_obj70 = come_decrement_ref_count(__dec_obj70, (void*)0, (void*)0, 0,0,0); }
        if(right_value163 && right_value163 != __result_obj__) { right_value163 = come_decrement_ref_count(right_value163, (void*)0, (void*)0, 1, 0, 0); }
        __dec_obj71=come_value_103->type;
        come_value_103->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value164=sType_clone(left_value_97->type))));
        if(__dec_obj71) { come_call_finalizer(sType_finalize,__dec_obj71, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value164 && right_value164 != __result_obj__) { come_call_finalizer(sType_finalize,right_value164, (void*)0, (void*)0, 0, 1, 0, 0); }
        come_value_103->type->mHeap=(_Bool)0;
        come_value_103->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_103->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_103));
        if(come_value_103) { come_call_finalizer(CVALUE_finalize,come_value_103, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __result100__ = (_Bool)1;
    if(left_value_97) { come_call_finalizer(CVALUE_finalize,left_value_97, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_99) { come_call_finalizer(CVALUE_finalize,right_value_99, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_100) { come_call_finalizer(sType_finalize,type_100, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result100__;
    if(left_value_97) { come_call_finalizer(CVALUE_finalize,left_value_97, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_99) { come_call_finalizer(CVALUE_finalize,right_value_99, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_100) { come_call_finalizer(sType_finalize,type_100, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sDivNode_sline(struct sDivNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
int __result101__;
memset(&__result_obj__, 0, sizeof(void*));
    __result101__ = self->sline;
    return __result101__;
}

char* sDivNode_sname(struct sDivNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value165;
char* __result102__;
memset(&__result_obj__, 0, sizeof(void*));
    __result102__ = __result_obj__ = ((char*)(right_value165=__builtin_string(self->sname)));
    return __result102__;
}

struct sModNode* sModNode_initialize(struct sModNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value166;
char* __dec_obj72;
void* right_value167;
struct sNode* __dec_obj73;
void* right_value168;
struct sNode* __dec_obj74;
struct sModNode* __result103__;
memset(&__result_obj__, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj72=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value166=__builtin_string(info->sname))));
    if(__dec_obj72) { __dec_obj72 = come_decrement_ref_count(__dec_obj72, (void*)0, (void*)0, 0,0,0); }
    if(right_value166 && right_value166 != __result_obj__) { right_value166 = come_decrement_ref_count(right_value166, (void*)0, (void*)0, 1, 0, 0); }
    self->mQuote=quote;
    __dec_obj73=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value167=sNode_clone(left))));
    if(__dec_obj73) { __dec_obj73 = come_decrement_ref_count(__dec_obj73, ((struct sNode*)__dec_obj73)->finalize, ((struct sNode*)__dec_obj73)->_protocol_obj, 0,0,0); }
    if(right_value167 && right_value167 != __result_obj__) { right_value167 = come_decrement_ref_count(right_value167, ((struct sNode*)right_value167)->finalize, ((struct sNode*)right_value167)->_protocol_obj, 1, 0, 0); } 
    __dec_obj74=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value168=sNode_clone(right))));
    if(__dec_obj74) { __dec_obj74 = come_decrement_ref_count(__dec_obj74, ((struct sNode*)__dec_obj74)->finalize, ((struct sNode*)__dec_obj74)->_protocol_obj, 0,0,0); }
    if(right_value168 && right_value168 != __result_obj__) { right_value168 = come_decrement_ref_count(right_value168, ((struct sNode*)right_value168)->finalize, ((struct sNode*)right_value168)->_protocol_obj, 1, 0, 0); } 
    __result103__ = __result_obj__ = self;
    if(self) { come_call_finalizer(sModNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    return __result103__;
    if(self) { come_call_finalizer(sModNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
}

_Bool sModNode_terminated(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __result104__;
memset(&__result_obj__, 0, sizeof(void*));
    __result104__ = (_Bool)0;
    return __result104__;
}

char* sModNode_kind(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value169;
char* __result105__;
memset(&__result_obj__, 0, sizeof(void*));
    __result105__ = __result_obj__ = ((char*)(right_value169=__builtin_string("sModNode")));
    return __result105__;
}

_Bool sModNode_compile(struct sModNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
struct sNode* left_node_104;
_Bool _if_conditional165;
_Bool __result106__;
void* right_value170;
struct CVALUE* left_value_105;
struct sNode* right_node_106;
_Bool _if_conditional166;
_Bool __result107__;
void* right_value171;
struct CVALUE* right_value_107;
struct sType* type_108;
char* fun_name_109;
_Bool calling_fun_110;
_Bool _if_conditional167;
_Bool _if_conditional168;
void* right_value172;
struct CVALUE* come_value_111;
void* right_value173;
char* __dec_obj75;
void* right_value174;
struct sType* __dec_obj76;
_Bool __result108__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_104, 0, sizeof(struct sNode*));
memset(&left_value_105, 0, sizeof(struct CVALUE*));
memset(&right_node_106, 0, sizeof(struct sNode*));
memset(&right_value_107, 0, sizeof(struct CVALUE*));
memset(&type_108, 0, sizeof(struct sType*));
memset(&fun_name_109, 0, sizeof(char*));
memset(&calling_fun_110, 0, sizeof(_Bool));
memset(&come_value_111, 0, sizeof(struct CVALUE*));
    left_node_104=self->mLeft;
    if(_if_conditional165=!node_compile(left_node_104,info),    _if_conditional165) {
        __result106__ = (_Bool)0;
        return __result106__;
    }
    left_value_105=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value170=get_value_from_stack(-1,info))));
    if(right_value170 && right_value170 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value170, (void*)0, (void*)0, 0, 1, 0, 0); }
    dec_stack_ptr(1,info);
    right_node_106=self->mRight;
    if(_if_conditional166=!node_compile(right_node_106,info),    _if_conditional166) {
        __result107__ = (_Bool)0;
        if(left_value_105) { come_call_finalizer(CVALUE_finalize,left_value_105, (void*)0, (void*)0, 0, 0, 0, 0); }
        return __result107__;
    }
    right_value_107=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value171=get_value_from_stack(-1,info))));
    if(right_value171 && right_value171 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value171, (void*)0, (void*)0, 0, 1, 0, 0); }
    dec_stack_ptr(1,info);
    type_108=(struct sType*)come_increment_ref_count(left_value_105->type);
    fun_name_109="operator_mod";
    if(_if_conditional167=self->mQuote,    _if_conditional167) {
        calling_fun_110=(_Bool)0;
    }
    else {
        calling_fun_110=operator_overload_fun(type_108,fun_name_109,left_value_105,right_value_107,info);
    }
    if(_if_conditional168=!calling_fun_110,    _if_conditional168) {
        come_value_111=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value172=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 665))));
        if(right_value172 && right_value172 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value172, (void*)0, (void*)0, 0, 1, 0, 0); }
        __dec_obj75=come_value_111->c_value;
        come_value_111->c_value=(char*)come_increment_ref_count(((char*)(right_value173=xsprintf("%s%%%s",left_value_105->c_value,right_value_107->c_value))));
        if(__dec_obj75) { __dec_obj75 = come_decrement_ref_count(__dec_obj75, (void*)0, (void*)0, 0,0,0); }
        if(right_value173 && right_value173 != __result_obj__) { right_value173 = come_decrement_ref_count(right_value173, (void*)0, (void*)0, 1, 0, 0); }
        __dec_obj76=come_value_111->type;
        come_value_111->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value174=sType_clone(left_value_105->type))));
        if(__dec_obj76) { come_call_finalizer(sType_finalize,__dec_obj76, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value174 && right_value174 != __result_obj__) { come_call_finalizer(sType_finalize,right_value174, (void*)0, (void*)0, 0, 1, 0, 0); }
        come_value_111->type->mHeap=(_Bool)0;
        come_value_111->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_111->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_111));
        if(come_value_111) { come_call_finalizer(CVALUE_finalize,come_value_111, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __result108__ = (_Bool)1;
    if(left_value_105) { come_call_finalizer(CVALUE_finalize,left_value_105, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_107) { come_call_finalizer(CVALUE_finalize,right_value_107, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_108) { come_call_finalizer(sType_finalize,type_108, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result108__;
    if(left_value_105) { come_call_finalizer(CVALUE_finalize,left_value_105, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_107) { come_call_finalizer(CVALUE_finalize,right_value_107, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_108) { come_call_finalizer(sType_finalize,type_108, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sModNode_sline(struct sModNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
int __result109__;
memset(&__result_obj__, 0, sizeof(void*));
    __result109__ = self->sline;
    return __result109__;
}

char* sModNode_sname(struct sModNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value175;
char* __result110__;
memset(&__result_obj__, 0, sizeof(void*));
    __result110__ = __result_obj__ = ((char*)(right_value175=__builtin_string(self->sname)));
    return __result110__;
}

struct sLShiftNode* sLShiftNode_initialize(struct sLShiftNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value176;
char* __dec_obj77;
void* right_value177;
struct sNode* __dec_obj78;
void* right_value178;
struct sNode* __dec_obj79;
struct sLShiftNode* __result111__;
memset(&__result_obj__, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj77=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value176=__builtin_string(info->sname))));
    if(__dec_obj77) { __dec_obj77 = come_decrement_ref_count(__dec_obj77, (void*)0, (void*)0, 0,0,0); }
    if(right_value176 && right_value176 != __result_obj__) { right_value176 = come_decrement_ref_count(right_value176, (void*)0, (void*)0, 1, 0, 0); }
    self->mQuote=quote;
    __dec_obj78=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value177=sNode_clone(left))));
    if(__dec_obj78) { __dec_obj78 = come_decrement_ref_count(__dec_obj78, ((struct sNode*)__dec_obj78)->finalize, ((struct sNode*)__dec_obj78)->_protocol_obj, 0,0,0); }
    if(right_value177 && right_value177 != __result_obj__) { right_value177 = come_decrement_ref_count(right_value177, ((struct sNode*)right_value177)->finalize, ((struct sNode*)right_value177)->_protocol_obj, 1, 0, 0); } 
    __dec_obj79=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value178=sNode_clone(right))));
    if(__dec_obj79) { __dec_obj79 = come_decrement_ref_count(__dec_obj79, ((struct sNode*)__dec_obj79)->finalize, ((struct sNode*)__dec_obj79)->_protocol_obj, 0,0,0); }
    if(right_value178 && right_value178 != __result_obj__) { right_value178 = come_decrement_ref_count(right_value178, ((struct sNode*)right_value178)->finalize, ((struct sNode*)right_value178)->_protocol_obj, 1, 0, 0); } 
    __result111__ = __result_obj__ = self;
    if(self) { come_call_finalizer(sLShiftNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    return __result111__;
    if(self) { come_call_finalizer(sLShiftNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
}

_Bool sLShiftNode_terminated(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __result112__;
memset(&__result_obj__, 0, sizeof(void*));
    __result112__ = (_Bool)0;
    return __result112__;
}

char* sLShiftNode_kind(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value179;
char* __result113__;
memset(&__result_obj__, 0, sizeof(void*));
    __result113__ = __result_obj__ = ((char*)(right_value179=__builtin_string("sLShiftNode")));
    return __result113__;
}

_Bool sLShiftNode_compile(struct sLShiftNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
struct sNode* left_node_112;
_Bool _if_conditional172;
_Bool __result114__;
void* right_value180;
struct CVALUE* left_value_113;
struct sNode* right_node_114;
_Bool _if_conditional173;
_Bool __result115__;
void* right_value181;
struct CVALUE* right_value_115;
struct sType* type_116;
char* fun_name_117;
_Bool calling_fun_118;
_Bool _if_conditional174;
_Bool _if_conditional175;
void* right_value182;
struct CVALUE* come_value_119;
void* right_value183;
char* __dec_obj80;
void* right_value184;
struct sType* __dec_obj81;
_Bool __result116__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_112, 0, sizeof(struct sNode*));
memset(&left_value_113, 0, sizeof(struct CVALUE*));
memset(&right_node_114, 0, sizeof(struct sNode*));
memset(&right_value_115, 0, sizeof(struct CVALUE*));
memset(&type_116, 0, sizeof(struct sType*));
memset(&fun_name_117, 0, sizeof(char*));
memset(&calling_fun_118, 0, sizeof(_Bool));
memset(&come_value_119, 0, sizeof(struct CVALUE*));
    left_node_112=self->mLeft;
    if(_if_conditional172=!node_compile(left_node_112,info),    _if_conditional172) {
        __result114__ = (_Bool)0;
        return __result114__;
    }
    left_value_113=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value180=get_value_from_stack(-1,info))));
    if(right_value180 && right_value180 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value180, (void*)0, (void*)0, 0, 1, 0, 0); }
    dec_stack_ptr(1,info);
    right_node_114=self->mRight;
    if(_if_conditional173=!node_compile(right_node_114,info),    _if_conditional173) {
        __result115__ = (_Bool)0;
        if(left_value_113) { come_call_finalizer(CVALUE_finalize,left_value_113, (void*)0, (void*)0, 0, 0, 0, 0); }
        return __result115__;
    }
    right_value_115=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value181=get_value_from_stack(-1,info))));
    if(right_value181 && right_value181 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value181, (void*)0, (void*)0, 0, 1, 0, 0); }
    dec_stack_ptr(1,info);
    type_116=(struct sType*)come_increment_ref_count(left_value_113->type);
    fun_name_117="operator_lshift";
    if(_if_conditional174=self->mQuote,    _if_conditional174) {
        calling_fun_118=(_Bool)0;
    }
    else {
        calling_fun_118=operator_overload_fun(type_116,fun_name_117,left_value_113,right_value_115,info);
    }
    if(_if_conditional175=!calling_fun_118,    _if_conditional175) {
        come_value_119=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value182=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 756))));
        if(right_value182 && right_value182 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value182, (void*)0, (void*)0, 0, 1, 0, 0); }
        __dec_obj80=come_value_119->c_value;
        come_value_119->c_value=(char*)come_increment_ref_count(((char*)(right_value183=xsprintf("%s<<%s",left_value_113->c_value,right_value_115->c_value))));
        if(__dec_obj80) { __dec_obj80 = come_decrement_ref_count(__dec_obj80, (void*)0, (void*)0, 0,0,0); }
        if(right_value183 && right_value183 != __result_obj__) { right_value183 = come_decrement_ref_count(right_value183, (void*)0, (void*)0, 1, 0, 0); }
        __dec_obj81=come_value_119->type;
        come_value_119->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value184=sType_clone(left_value_113->type))));
        if(__dec_obj81) { come_call_finalizer(sType_finalize,__dec_obj81, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value184 && right_value184 != __result_obj__) { come_call_finalizer(sType_finalize,right_value184, (void*)0, (void*)0, 0, 1, 0, 0); }
        come_value_119->type->mHeap=(_Bool)0;
        come_value_119->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_119->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_119));
        if(come_value_119) { come_call_finalizer(CVALUE_finalize,come_value_119, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __result116__ = (_Bool)1;
    if(left_value_113) { come_call_finalizer(CVALUE_finalize,left_value_113, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_115) { come_call_finalizer(CVALUE_finalize,right_value_115, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_116) { come_call_finalizer(sType_finalize,type_116, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result116__;
    if(left_value_113) { come_call_finalizer(CVALUE_finalize,left_value_113, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_115) { come_call_finalizer(CVALUE_finalize,right_value_115, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_116) { come_call_finalizer(sType_finalize,type_116, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sLShiftNode_sline(struct sLShiftNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
int __result117__;
memset(&__result_obj__, 0, sizeof(void*));
    __result117__ = self->sline;
    return __result117__;
}

char* sLShiftNode_sname(struct sLShiftNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value185;
char* __result118__;
memset(&__result_obj__, 0, sizeof(void*));
    __result118__ = __result_obj__ = ((char*)(right_value185=__builtin_string(self->sname)));
    return __result118__;
}

struct sRShiftNode* sRShiftNode_initialize(struct sRShiftNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value186;
char* __dec_obj82;
void* right_value187;
struct sNode* __dec_obj83;
void* right_value188;
struct sNode* __dec_obj84;
struct sRShiftNode* __result119__;
memset(&__result_obj__, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj82=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value186=__builtin_string(info->sname))));
    if(__dec_obj82) { __dec_obj82 = come_decrement_ref_count(__dec_obj82, (void*)0, (void*)0, 0,0,0); }
    if(right_value186 && right_value186 != __result_obj__) { right_value186 = come_decrement_ref_count(right_value186, (void*)0, (void*)0, 1, 0, 0); }
    self->mQuote=quote;
    __dec_obj83=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value187=sNode_clone(left))));
    if(__dec_obj83) { __dec_obj83 = come_decrement_ref_count(__dec_obj83, ((struct sNode*)__dec_obj83)->finalize, ((struct sNode*)__dec_obj83)->_protocol_obj, 0,0,0); }
    if(right_value187 && right_value187 != __result_obj__) { right_value187 = come_decrement_ref_count(right_value187, ((struct sNode*)right_value187)->finalize, ((struct sNode*)right_value187)->_protocol_obj, 1, 0, 0); } 
    __dec_obj84=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value188=sNode_clone(right))));
    if(__dec_obj84) { __dec_obj84 = come_decrement_ref_count(__dec_obj84, ((struct sNode*)__dec_obj84)->finalize, ((struct sNode*)__dec_obj84)->_protocol_obj, 0,0,0); }
    if(right_value188 && right_value188 != __result_obj__) { right_value188 = come_decrement_ref_count(right_value188, ((struct sNode*)right_value188)->finalize, ((struct sNode*)right_value188)->_protocol_obj, 1, 0, 0); } 
    __result119__ = __result_obj__ = self;
    if(self) { come_call_finalizer(sRShiftNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    return __result119__;
    if(self) { come_call_finalizer(sRShiftNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
}

_Bool sRShiftNode_terminated(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __result120__;
memset(&__result_obj__, 0, sizeof(void*));
    __result120__ = (_Bool)0;
    return __result120__;
}

char* sRShiftNode_kind(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value189;
char* __result121__;
memset(&__result_obj__, 0, sizeof(void*));
    __result121__ = __result_obj__ = ((char*)(right_value189=__builtin_string("sRShiftNode")));
    return __result121__;
}

_Bool sRShiftNode_compile(struct sRShiftNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
struct sNode* left_node_120;
_Bool _if_conditional179;
_Bool __result122__;
void* right_value190;
struct CVALUE* left_value_121;
struct sNode* right_node_122;
_Bool _if_conditional180;
_Bool __result123__;
void* right_value191;
struct CVALUE* right_value_123;
struct sType* type_124;
char* fun_name_125;
_Bool calling_fun_126;
_Bool _if_conditional181;
_Bool _if_conditional182;
void* right_value192;
struct CVALUE* come_value_127;
void* right_value193;
char* __dec_obj85;
void* right_value194;
struct sType* __dec_obj86;
_Bool __result124__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_120, 0, sizeof(struct sNode*));
memset(&left_value_121, 0, sizeof(struct CVALUE*));
memset(&right_node_122, 0, sizeof(struct sNode*));
memset(&right_value_123, 0, sizeof(struct CVALUE*));
memset(&type_124, 0, sizeof(struct sType*));
memset(&fun_name_125, 0, sizeof(char*));
memset(&calling_fun_126, 0, sizeof(_Bool));
memset(&come_value_127, 0, sizeof(struct CVALUE*));
    left_node_120=self->mLeft;
    if(_if_conditional179=!node_compile(left_node_120,info),    _if_conditional179) {
        __result122__ = (_Bool)0;
        return __result122__;
    }
    left_value_121=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value190=get_value_from_stack(-1,info))));
    if(right_value190 && right_value190 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value190, (void*)0, (void*)0, 0, 1, 0, 0); }
    dec_stack_ptr(1,info);
    right_node_122=self->mRight;
    if(_if_conditional180=!node_compile(right_node_122,info),    _if_conditional180) {
        __result123__ = (_Bool)0;
        if(left_value_121) { come_call_finalizer(CVALUE_finalize,left_value_121, (void*)0, (void*)0, 0, 0, 0, 0); }
        return __result123__;
    }
    right_value_123=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value191=get_value_from_stack(-1,info))));
    if(right_value191 && right_value191 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value191, (void*)0, (void*)0, 0, 1, 0, 0); }
    dec_stack_ptr(1,info);
    type_124=(struct sType*)come_increment_ref_count(left_value_121->type);
    fun_name_125="operator_rshift";
    if(_if_conditional181=self->mQuote,    _if_conditional181) {
        calling_fun_126=(_Bool)0;
    }
    else {
        calling_fun_126=operator_overload_fun(type_124,fun_name_125,left_value_121,right_value_123,info);
    }
    if(_if_conditional182=!calling_fun_126,    _if_conditional182) {
        come_value_127=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value192=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 847))));
        if(right_value192 && right_value192 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value192, (void*)0, (void*)0, 0, 1, 0, 0); }
        __dec_obj85=come_value_127->c_value;
        come_value_127->c_value=(char*)come_increment_ref_count(((char*)(right_value193=xsprintf("%s>>%s",left_value_121->c_value,right_value_123->c_value))));
        if(__dec_obj85) { __dec_obj85 = come_decrement_ref_count(__dec_obj85, (void*)0, (void*)0, 0,0,0); }
        if(right_value193 && right_value193 != __result_obj__) { right_value193 = come_decrement_ref_count(right_value193, (void*)0, (void*)0, 1, 0, 0); }
        __dec_obj86=come_value_127->type;
        come_value_127->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value194=sType_clone(left_value_121->type))));
        if(__dec_obj86) { come_call_finalizer(sType_finalize,__dec_obj86, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value194 && right_value194 != __result_obj__) { come_call_finalizer(sType_finalize,right_value194, (void*)0, (void*)0, 0, 1, 0, 0); }
        come_value_127->type->mHeap=(_Bool)0;
        come_value_127->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_127->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_127));
        if(come_value_127) { come_call_finalizer(CVALUE_finalize,come_value_127, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __result124__ = (_Bool)1;
    if(left_value_121) { come_call_finalizer(CVALUE_finalize,left_value_121, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_123) { come_call_finalizer(CVALUE_finalize,right_value_123, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_124) { come_call_finalizer(sType_finalize,type_124, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result124__;
    if(left_value_121) { come_call_finalizer(CVALUE_finalize,left_value_121, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_123) { come_call_finalizer(CVALUE_finalize,right_value_123, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_124) { come_call_finalizer(sType_finalize,type_124, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sRShiftNode_sline(struct sRShiftNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
int __result125__;
memset(&__result_obj__, 0, sizeof(void*));
    __result125__ = self->sline;
    return __result125__;
}

char* sRShiftNode_sname(struct sLShiftNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value195;
char* __result126__;
memset(&__result_obj__, 0, sizeof(void*));
    __result126__ = __result_obj__ = ((char*)(right_value195=__builtin_string(self->sname)));
    return __result126__;
}

struct sGtEqNode* sGtEqNode_initialize(struct sGtEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value196;
char* __dec_obj87;
void* right_value197;
struct sNode* __dec_obj88;
void* right_value198;
struct sNode* __dec_obj89;
struct sGtEqNode* __result127__;
memset(&__result_obj__, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj87=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value196=__builtin_string(info->sname))));
    if(__dec_obj87) { __dec_obj87 = come_decrement_ref_count(__dec_obj87, (void*)0, (void*)0, 0,0,0); }
    if(right_value196 && right_value196 != __result_obj__) { right_value196 = come_decrement_ref_count(right_value196, (void*)0, (void*)0, 1, 0, 0); }
    self->mQuote=quote;
    __dec_obj88=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value197=sNode_clone(left))));
    if(__dec_obj88) { __dec_obj88 = come_decrement_ref_count(__dec_obj88, ((struct sNode*)__dec_obj88)->finalize, ((struct sNode*)__dec_obj88)->_protocol_obj, 0,0,0); }
    if(right_value197 && right_value197 != __result_obj__) { right_value197 = come_decrement_ref_count(right_value197, ((struct sNode*)right_value197)->finalize, ((struct sNode*)right_value197)->_protocol_obj, 1, 0, 0); } 
    __dec_obj89=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value198=sNode_clone(right))));
    if(__dec_obj89) { __dec_obj89 = come_decrement_ref_count(__dec_obj89, ((struct sNode*)__dec_obj89)->finalize, ((struct sNode*)__dec_obj89)->_protocol_obj, 0,0,0); }
    if(right_value198 && right_value198 != __result_obj__) { right_value198 = come_decrement_ref_count(right_value198, ((struct sNode*)right_value198)->finalize, ((struct sNode*)right_value198)->_protocol_obj, 1, 0, 0); } 
    __result127__ = __result_obj__ = self;
    if(self) { come_call_finalizer(sGtEqNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    return __result127__;
    if(self) { come_call_finalizer(sGtEqNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
}

_Bool sGtEqNode_terminated(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __result128__;
memset(&__result_obj__, 0, sizeof(void*));
    __result128__ = (_Bool)0;
    return __result128__;
}

char* sGtEqNode_kind(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value199;
char* __result129__;
memset(&__result_obj__, 0, sizeof(void*));
    __result129__ = __result_obj__ = ((char*)(right_value199=__builtin_string("sGtEqNode")));
    return __result129__;
}

_Bool sGtEqNode_compile(struct sGtEqNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
struct sNode* left_node_128;
_Bool _if_conditional186;
_Bool __result130__;
void* right_value200;
struct CVALUE* left_value_129;
struct sNode* right_node_130;
_Bool _if_conditional187;
_Bool __result131__;
void* right_value201;
struct CVALUE* right_value_131;
struct sType* type_132;
char* fun_name_133;
_Bool calling_fun_134;
_Bool _if_conditional188;
_Bool _if_conditional189;
void* right_value202;
struct CVALUE* come_value_135;
void* right_value203;
char* __dec_obj90;
void* right_value204;
struct sType* __dec_obj91;
_Bool __result132__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_128, 0, sizeof(struct sNode*));
memset(&left_value_129, 0, sizeof(struct CVALUE*));
memset(&right_node_130, 0, sizeof(struct sNode*));
memset(&right_value_131, 0, sizeof(struct CVALUE*));
memset(&type_132, 0, sizeof(struct sType*));
memset(&fun_name_133, 0, sizeof(char*));
memset(&calling_fun_134, 0, sizeof(_Bool));
memset(&come_value_135, 0, sizeof(struct CVALUE*));
    left_node_128=self->mLeft;
    if(_if_conditional186=!node_compile(left_node_128,info),    _if_conditional186) {
        __result130__ = (_Bool)0;
        return __result130__;
    }
    left_value_129=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value200=get_value_from_stack(-1,info))));
    if(right_value200 && right_value200 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value200, (void*)0, (void*)0, 0, 1, 0, 0); }
    dec_stack_ptr(1,info);
    right_node_130=self->mRight;
    if(_if_conditional187=!node_compile(right_node_130,info),    _if_conditional187) {
        __result131__ = (_Bool)0;
        if(left_value_129) { come_call_finalizer(CVALUE_finalize,left_value_129, (void*)0, (void*)0, 0, 0, 0, 0); }
        return __result131__;
    }
    right_value_131=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value201=get_value_from_stack(-1,info))));
    if(right_value201 && right_value201 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value201, (void*)0, (void*)0, 0, 1, 0, 0); }
    dec_stack_ptr(1,info);
    type_132=(struct sType*)come_increment_ref_count(left_value_129->type);
    fun_name_133="operator_gteq";
    if(_if_conditional188=self->mQuote,    _if_conditional188) {
        calling_fun_134=(_Bool)0;
    }
    else {
        calling_fun_134=operator_overload_fun(type_132,fun_name_133,left_value_129,right_value_131,info);
    }
    if(_if_conditional189=!calling_fun_134,    _if_conditional189) {
        come_value_135=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value202=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 938))));
        if(right_value202 && right_value202 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value202, (void*)0, (void*)0, 0, 1, 0, 0); }
        __dec_obj90=come_value_135->c_value;
        come_value_135->c_value=(char*)come_increment_ref_count(((char*)(right_value203=xsprintf("%s>=%s",left_value_129->c_value,right_value_131->c_value))));
        if(__dec_obj90) { __dec_obj90 = come_decrement_ref_count(__dec_obj90, (void*)0, (void*)0, 0,0,0); }
        if(right_value203 && right_value203 != __result_obj__) { right_value203 = come_decrement_ref_count(right_value203, (void*)0, (void*)0, 1, 0, 0); }
        __dec_obj91=come_value_135->type;
        come_value_135->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value204=sType_clone(left_value_129->type))));
        if(__dec_obj91) { come_call_finalizer(sType_finalize,__dec_obj91, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value204 && right_value204 != __result_obj__) { come_call_finalizer(sType_finalize,right_value204, (void*)0, (void*)0, 0, 1, 0, 0); }
        come_value_135->type->mHeap=(_Bool)0;
        come_value_135->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_135->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_135));
        if(come_value_135) { come_call_finalizer(CVALUE_finalize,come_value_135, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __result132__ = (_Bool)1;
    if(left_value_129) { come_call_finalizer(CVALUE_finalize,left_value_129, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_131) { come_call_finalizer(CVALUE_finalize,right_value_131, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_132) { come_call_finalizer(sType_finalize,type_132, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result132__;
    if(left_value_129) { come_call_finalizer(CVALUE_finalize,left_value_129, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_131) { come_call_finalizer(CVALUE_finalize,right_value_131, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_132) { come_call_finalizer(sType_finalize,type_132, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sGtEqNode_sline(struct sGtEqNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
int __result133__;
memset(&__result_obj__, 0, sizeof(void*));
    __result133__ = self->sline;
    return __result133__;
}

char* sGtEqNode_sname(struct sGtEqNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value205;
char* __result134__;
memset(&__result_obj__, 0, sizeof(void*));
    __result134__ = __result_obj__ = ((char*)(right_value205=__builtin_string(self->sname)));
    return __result134__;
}

struct sLtEqNode* sLtEqNode_initialize(struct sLtEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value206;
char* __dec_obj92;
void* right_value207;
struct sNode* __dec_obj93;
void* right_value208;
struct sNode* __dec_obj94;
struct sLtEqNode* __result135__;
memset(&__result_obj__, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj92=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value206=__builtin_string(info->sname))));
    if(__dec_obj92) { __dec_obj92 = come_decrement_ref_count(__dec_obj92, (void*)0, (void*)0, 0,0,0); }
    if(right_value206 && right_value206 != __result_obj__) { right_value206 = come_decrement_ref_count(right_value206, (void*)0, (void*)0, 1, 0, 0); }
    self->mQuote=quote;
    __dec_obj93=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value207=sNode_clone(left))));
    if(__dec_obj93) { __dec_obj93 = come_decrement_ref_count(__dec_obj93, ((struct sNode*)__dec_obj93)->finalize, ((struct sNode*)__dec_obj93)->_protocol_obj, 0,0,0); }
    if(right_value207 && right_value207 != __result_obj__) { right_value207 = come_decrement_ref_count(right_value207, ((struct sNode*)right_value207)->finalize, ((struct sNode*)right_value207)->_protocol_obj, 1, 0, 0); } 
    __dec_obj94=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value208=sNode_clone(right))));
    if(__dec_obj94) { __dec_obj94 = come_decrement_ref_count(__dec_obj94, ((struct sNode*)__dec_obj94)->finalize, ((struct sNode*)__dec_obj94)->_protocol_obj, 0,0,0); }
    if(right_value208 && right_value208 != __result_obj__) { right_value208 = come_decrement_ref_count(right_value208, ((struct sNode*)right_value208)->finalize, ((struct sNode*)right_value208)->_protocol_obj, 1, 0, 0); } 
    __result135__ = __result_obj__ = self;
    if(self) { come_call_finalizer(sLtEqNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    return __result135__;
    if(self) { come_call_finalizer(sLtEqNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
}

_Bool sLtEqNode_terminated(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __result136__;
memset(&__result_obj__, 0, sizeof(void*));
    __result136__ = (_Bool)0;
    return __result136__;
}

char* sLtEqNode_kind(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value209;
char* __result137__;
memset(&__result_obj__, 0, sizeof(void*));
    __result137__ = __result_obj__ = ((char*)(right_value209=__builtin_string("sLtEqNode")));
    return __result137__;
}

_Bool sLtEqNode_compile(struct sLtEqNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
struct sNode* left_node_136;
_Bool _if_conditional193;
_Bool __result138__;
void* right_value210;
struct CVALUE* left_value_137;
struct sNode* right_node_138;
_Bool _if_conditional194;
_Bool __result139__;
void* right_value211;
struct CVALUE* right_value_139;
struct sType* type_140;
char* fun_name_141;
_Bool calling_fun_142;
_Bool _if_conditional195;
_Bool _if_conditional196;
void* right_value212;
struct CVALUE* come_value_143;
void* right_value213;
char* __dec_obj95;
void* right_value214;
struct sType* __dec_obj96;
_Bool __result140__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_136, 0, sizeof(struct sNode*));
memset(&left_value_137, 0, sizeof(struct CVALUE*));
memset(&right_node_138, 0, sizeof(struct sNode*));
memset(&right_value_139, 0, sizeof(struct CVALUE*));
memset(&type_140, 0, sizeof(struct sType*));
memset(&fun_name_141, 0, sizeof(char*));
memset(&calling_fun_142, 0, sizeof(_Bool));
memset(&come_value_143, 0, sizeof(struct CVALUE*));
    left_node_136=self->mLeft;
    if(_if_conditional193=!node_compile(left_node_136,info),    _if_conditional193) {
        __result138__ = (_Bool)0;
        return __result138__;
    }
    left_value_137=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value210=get_value_from_stack(-1,info))));
    if(right_value210 && right_value210 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value210, (void*)0, (void*)0, 0, 1, 0, 0); }
    dec_stack_ptr(1,info);
    right_node_138=self->mRight;
    if(_if_conditional194=!node_compile(right_node_138,info),    _if_conditional194) {
        __result139__ = (_Bool)0;
        if(left_value_137) { come_call_finalizer(CVALUE_finalize,left_value_137, (void*)0, (void*)0, 0, 0, 0, 0); }
        return __result139__;
    }
    right_value_139=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value211=get_value_from_stack(-1,info))));
    if(right_value211 && right_value211 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value211, (void*)0, (void*)0, 0, 1, 0, 0); }
    dec_stack_ptr(1,info);
    type_140=(struct sType*)come_increment_ref_count(left_value_137->type);
    fun_name_141="operator_lteq";
    if(_if_conditional195=self->mQuote,    _if_conditional195) {
        calling_fun_142=(_Bool)0;
    }
    else {
        calling_fun_142=operator_overload_fun(type_140,fun_name_141,left_value_137,right_value_139,info);
    }
    if(_if_conditional196=!calling_fun_142,    _if_conditional196) {
        come_value_143=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value212=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1029))));
        if(right_value212 && right_value212 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value212, (void*)0, (void*)0, 0, 1, 0, 0); }
        __dec_obj95=come_value_143->c_value;
        come_value_143->c_value=(char*)come_increment_ref_count(((char*)(right_value213=xsprintf("%s<=%s",left_value_137->c_value,right_value_139->c_value))));
        if(__dec_obj95) { __dec_obj95 = come_decrement_ref_count(__dec_obj95, (void*)0, (void*)0, 0,0,0); }
        if(right_value213 && right_value213 != __result_obj__) { right_value213 = come_decrement_ref_count(right_value213, (void*)0, (void*)0, 1, 0, 0); }
        __dec_obj96=come_value_143->type;
        come_value_143->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value214=sType_clone(left_value_137->type))));
        if(__dec_obj96) { come_call_finalizer(sType_finalize,__dec_obj96, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value214 && right_value214 != __result_obj__) { come_call_finalizer(sType_finalize,right_value214, (void*)0, (void*)0, 0, 1, 0, 0); }
        come_value_143->type->mHeap=(_Bool)0;
        come_value_143->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_143->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_143));
        if(come_value_143) { come_call_finalizer(CVALUE_finalize,come_value_143, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __result140__ = (_Bool)1;
    if(left_value_137) { come_call_finalizer(CVALUE_finalize,left_value_137, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_139) { come_call_finalizer(CVALUE_finalize,right_value_139, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_140) { come_call_finalizer(sType_finalize,type_140, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result140__;
    if(left_value_137) { come_call_finalizer(CVALUE_finalize,left_value_137, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_139) { come_call_finalizer(CVALUE_finalize,right_value_139, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_140) { come_call_finalizer(sType_finalize,type_140, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sLtEqNode_sline(struct sLtEqNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
int __result141__;
memset(&__result_obj__, 0, sizeof(void*));
    __result141__ = self->sline;
    return __result141__;
}

char* sLtEqNode_sname(struct sLtEqNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value215;
char* __result142__;
memset(&__result_obj__, 0, sizeof(void*));
    __result142__ = __result_obj__ = ((char*)(right_value215=__builtin_string(self->sname)));
    return __result142__;
}

struct sLtNode* sLtNode_initialize(struct sLtNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value216;
char* __dec_obj97;
void* right_value217;
struct sNode* __dec_obj98;
void* right_value218;
struct sNode* __dec_obj99;
struct sLtNode* __result143__;
memset(&__result_obj__, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj97=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value216=__builtin_string(info->sname))));
    if(__dec_obj97) { __dec_obj97 = come_decrement_ref_count(__dec_obj97, (void*)0, (void*)0, 0,0,0); }
    if(right_value216 && right_value216 != __result_obj__) { right_value216 = come_decrement_ref_count(right_value216, (void*)0, (void*)0, 1, 0, 0); }
    self->mQuote=quote;
    __dec_obj98=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value217=sNode_clone(left))));
    if(__dec_obj98) { __dec_obj98 = come_decrement_ref_count(__dec_obj98, ((struct sNode*)__dec_obj98)->finalize, ((struct sNode*)__dec_obj98)->_protocol_obj, 0,0,0); }
    if(right_value217 && right_value217 != __result_obj__) { right_value217 = come_decrement_ref_count(right_value217, ((struct sNode*)right_value217)->finalize, ((struct sNode*)right_value217)->_protocol_obj, 1, 0, 0); } 
    __dec_obj99=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value218=sNode_clone(right))));
    if(__dec_obj99) { __dec_obj99 = come_decrement_ref_count(__dec_obj99, ((struct sNode*)__dec_obj99)->finalize, ((struct sNode*)__dec_obj99)->_protocol_obj, 0,0,0); }
    if(right_value218 && right_value218 != __result_obj__) { right_value218 = come_decrement_ref_count(right_value218, ((struct sNode*)right_value218)->finalize, ((struct sNode*)right_value218)->_protocol_obj, 1, 0, 0); } 
    __result143__ = __result_obj__ = self;
    if(self) { come_call_finalizer(sLtNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    return __result143__;
    if(self) { come_call_finalizer(sLtNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
}

_Bool sLtNode_terminated(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __result144__;
memset(&__result_obj__, 0, sizeof(void*));
    __result144__ = (_Bool)0;
    return __result144__;
}

char* sLtNode_kind(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value219;
char* __result145__;
memset(&__result_obj__, 0, sizeof(void*));
    __result145__ = __result_obj__ = ((char*)(right_value219=__builtin_string("sLtNode")));
    return __result145__;
}

_Bool sLtNode_compile(struct sLtNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
struct sNode* left_node_144;
_Bool _if_conditional200;
_Bool __result146__;
void* right_value220;
struct CVALUE* left_value_145;
struct sNode* right_node_146;
_Bool _if_conditional201;
_Bool __result147__;
void* right_value221;
struct CVALUE* right_value_147;
struct sType* type_148;
char* fun_name_149;
_Bool calling_fun_150;
_Bool _if_conditional202;
_Bool _if_conditional203;
void* right_value222;
struct CVALUE* come_value_151;
void* right_value223;
char* __dec_obj100;
void* right_value224;
struct sType* __dec_obj101;
_Bool __result148__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_144, 0, sizeof(struct sNode*));
memset(&left_value_145, 0, sizeof(struct CVALUE*));
memset(&right_node_146, 0, sizeof(struct sNode*));
memset(&right_value_147, 0, sizeof(struct CVALUE*));
memset(&type_148, 0, sizeof(struct sType*));
memset(&fun_name_149, 0, sizeof(char*));
memset(&calling_fun_150, 0, sizeof(_Bool));
memset(&come_value_151, 0, sizeof(struct CVALUE*));
    left_node_144=self->mLeft;
    if(_if_conditional200=!node_compile(left_node_144,info),    _if_conditional200) {
        __result146__ = (_Bool)0;
        return __result146__;
    }
    left_value_145=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value220=get_value_from_stack(-1,info))));
    if(right_value220 && right_value220 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value220, (void*)0, (void*)0, 0, 1, 0, 0); }
    dec_stack_ptr(1,info);
    right_node_146=self->mRight;
    if(_if_conditional201=!node_compile(right_node_146,info),    _if_conditional201) {
        __result147__ = (_Bool)0;
        if(left_value_145) { come_call_finalizer(CVALUE_finalize,left_value_145, (void*)0, (void*)0, 0, 0, 0, 0); }
        return __result147__;
    }
    right_value_147=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value221=get_value_from_stack(-1,info))));
    if(right_value221 && right_value221 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value221, (void*)0, (void*)0, 0, 1, 0, 0); }
    dec_stack_ptr(1,info);
    type_148=(struct sType*)come_increment_ref_count(left_value_145->type);
    fun_name_149="operator_lt";
    if(_if_conditional202=self->mQuote,    _if_conditional202) {
        calling_fun_150=(_Bool)0;
    }
    else {
        calling_fun_150=operator_overload_fun(type_148,fun_name_149,left_value_145,right_value_147,info);
    }
    if(_if_conditional203=!calling_fun_150,    _if_conditional203) {
        come_value_151=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value222=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1120))));
        if(right_value222 && right_value222 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value222, (void*)0, (void*)0, 0, 1, 0, 0); }
        __dec_obj100=come_value_151->c_value;
        come_value_151->c_value=(char*)come_increment_ref_count(((char*)(right_value223=xsprintf("%s<%s",left_value_145->c_value,right_value_147->c_value))));
        if(__dec_obj100) { __dec_obj100 = come_decrement_ref_count(__dec_obj100, (void*)0, (void*)0, 0,0,0); }
        if(right_value223 && right_value223 != __result_obj__) { right_value223 = come_decrement_ref_count(right_value223, (void*)0, (void*)0, 1, 0, 0); }
        __dec_obj101=come_value_151->type;
        come_value_151->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value224=sType_clone(left_value_145->type))));
        if(__dec_obj101) { come_call_finalizer(sType_finalize,__dec_obj101, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value224 && right_value224 != __result_obj__) { come_call_finalizer(sType_finalize,right_value224, (void*)0, (void*)0, 0, 1, 0, 0); }
        come_value_151->type->mHeap=(_Bool)0;
        come_value_151->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_151->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_151));
        if(come_value_151) { come_call_finalizer(CVALUE_finalize,come_value_151, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __result148__ = (_Bool)1;
    if(left_value_145) { come_call_finalizer(CVALUE_finalize,left_value_145, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_147) { come_call_finalizer(CVALUE_finalize,right_value_147, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_148) { come_call_finalizer(sType_finalize,type_148, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result148__;
    if(left_value_145) { come_call_finalizer(CVALUE_finalize,left_value_145, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_147) { come_call_finalizer(CVALUE_finalize,right_value_147, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_148) { come_call_finalizer(sType_finalize,type_148, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sLtNode_sline(struct sLtNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
int __result149__;
memset(&__result_obj__, 0, sizeof(void*));
    __result149__ = self->sline;
    return __result149__;
}

char* sLtNode_sname(struct sLtNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value225;
char* __result150__;
memset(&__result_obj__, 0, sizeof(void*));
    __result150__ = __result_obj__ = ((char*)(right_value225=__builtin_string(self->sname)));
    return __result150__;
}

struct sGtNode* sGtNode_initialize(struct sGtNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value226;
char* __dec_obj102;
void* right_value227;
struct sNode* __dec_obj103;
void* right_value228;
struct sNode* __dec_obj104;
struct sGtNode* __result151__;
memset(&__result_obj__, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj102=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value226=__builtin_string(info->sname))));
    if(__dec_obj102) { __dec_obj102 = come_decrement_ref_count(__dec_obj102, (void*)0, (void*)0, 0,0,0); }
    if(right_value226 && right_value226 != __result_obj__) { right_value226 = come_decrement_ref_count(right_value226, (void*)0, (void*)0, 1, 0, 0); }
    self->mQuote=quote;
    __dec_obj103=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value227=sNode_clone(left))));
    if(__dec_obj103) { __dec_obj103 = come_decrement_ref_count(__dec_obj103, ((struct sNode*)__dec_obj103)->finalize, ((struct sNode*)__dec_obj103)->_protocol_obj, 0,0,0); }
    if(right_value227 && right_value227 != __result_obj__) { right_value227 = come_decrement_ref_count(right_value227, ((struct sNode*)right_value227)->finalize, ((struct sNode*)right_value227)->_protocol_obj, 1, 0, 0); } 
    __dec_obj104=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value228=sNode_clone(right))));
    if(__dec_obj104) { __dec_obj104 = come_decrement_ref_count(__dec_obj104, ((struct sNode*)__dec_obj104)->finalize, ((struct sNode*)__dec_obj104)->_protocol_obj, 0,0,0); }
    if(right_value228 && right_value228 != __result_obj__) { right_value228 = come_decrement_ref_count(right_value228, ((struct sNode*)right_value228)->finalize, ((struct sNode*)right_value228)->_protocol_obj, 1, 0, 0); } 
    __result151__ = __result_obj__ = self;
    if(self) { come_call_finalizer(sGtNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    return __result151__;
    if(self) { come_call_finalizer(sGtNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
}

_Bool sGtNode_terminated(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __result152__;
memset(&__result_obj__, 0, sizeof(void*));
    __result152__ = (_Bool)0;
    return __result152__;
}

char* sGtNode_kind(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value229;
char* __result153__;
memset(&__result_obj__, 0, sizeof(void*));
    __result153__ = __result_obj__ = ((char*)(right_value229=__builtin_string("sGtNode")));
    return __result153__;
}

_Bool sGtNode_compile(struct sGtNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
struct sNode* left_node_152;
_Bool _if_conditional207;
_Bool __result154__;
void* right_value230;
struct CVALUE* left_value_153;
struct sNode* right_node_154;
_Bool _if_conditional208;
_Bool __result155__;
void* right_value231;
struct CVALUE* right_value_155;
struct sType* type_156;
char* fun_name_157;
_Bool calling_fun_158;
_Bool _if_conditional209;
_Bool _if_conditional210;
void* right_value232;
struct CVALUE* come_value_159;
void* right_value233;
char* __dec_obj105;
void* right_value234;
struct sType* __dec_obj106;
_Bool __result156__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_152, 0, sizeof(struct sNode*));
memset(&left_value_153, 0, sizeof(struct CVALUE*));
memset(&right_node_154, 0, sizeof(struct sNode*));
memset(&right_value_155, 0, sizeof(struct CVALUE*));
memset(&type_156, 0, sizeof(struct sType*));
memset(&fun_name_157, 0, sizeof(char*));
memset(&calling_fun_158, 0, sizeof(_Bool));
memset(&come_value_159, 0, sizeof(struct CVALUE*));
    left_node_152=self->mLeft;
    if(_if_conditional207=!node_compile(left_node_152,info),    _if_conditional207) {
        __result154__ = (_Bool)0;
        return __result154__;
    }
    left_value_153=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value230=get_value_from_stack(-1,info))));
    if(right_value230 && right_value230 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value230, (void*)0, (void*)0, 0, 1, 0, 0); }
    dec_stack_ptr(1,info);
    right_node_154=self->mRight;
    if(_if_conditional208=!node_compile(right_node_154,info),    _if_conditional208) {
        __result155__ = (_Bool)0;
        if(left_value_153) { come_call_finalizer(CVALUE_finalize,left_value_153, (void*)0, (void*)0, 0, 0, 0, 0); }
        return __result155__;
    }
    right_value_155=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value231=get_value_from_stack(-1,info))));
    if(right_value231 && right_value231 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value231, (void*)0, (void*)0, 0, 1, 0, 0); }
    dec_stack_ptr(1,info);
    type_156=(struct sType*)come_increment_ref_count(left_value_153->type);
    fun_name_157="operator_gt";
    if(_if_conditional209=self->mQuote,    _if_conditional209) {
        calling_fun_158=(_Bool)0;
    }
    else {
        calling_fun_158=operator_overload_fun(type_156,fun_name_157,left_value_153,right_value_155,info);
    }
    if(_if_conditional210=!calling_fun_158,    _if_conditional210) {
        come_value_159=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value232=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1211))));
        if(right_value232 && right_value232 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value232, (void*)0, (void*)0, 0, 1, 0, 0); }
        __dec_obj105=come_value_159->c_value;
        come_value_159->c_value=(char*)come_increment_ref_count(((char*)(right_value233=xsprintf("%s>%s",left_value_153->c_value,right_value_155->c_value))));
        if(__dec_obj105) { __dec_obj105 = come_decrement_ref_count(__dec_obj105, (void*)0, (void*)0, 0,0,0); }
        if(right_value233 && right_value233 != __result_obj__) { right_value233 = come_decrement_ref_count(right_value233, (void*)0, (void*)0, 1, 0, 0); }
        __dec_obj106=come_value_159->type;
        come_value_159->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value234=sType_clone(left_value_153->type))));
        if(__dec_obj106) { come_call_finalizer(sType_finalize,__dec_obj106, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value234 && right_value234 != __result_obj__) { come_call_finalizer(sType_finalize,right_value234, (void*)0, (void*)0, 0, 1, 0, 0); }
        come_value_159->type->mHeap=(_Bool)0;
        come_value_159->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_159->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_159));
        if(come_value_159) { come_call_finalizer(CVALUE_finalize,come_value_159, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __result156__ = (_Bool)1;
    if(left_value_153) { come_call_finalizer(CVALUE_finalize,left_value_153, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_155) { come_call_finalizer(CVALUE_finalize,right_value_155, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_156) { come_call_finalizer(sType_finalize,type_156, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result156__;
    if(left_value_153) { come_call_finalizer(CVALUE_finalize,left_value_153, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_155) { come_call_finalizer(CVALUE_finalize,right_value_155, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_156) { come_call_finalizer(sType_finalize,type_156, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sGtNode_sline(struct sGtNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
int __result157__;
memset(&__result_obj__, 0, sizeof(void*));
    __result157__ = self->sline;
    return __result157__;
}

char* sGtNode_sname(struct sGtNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value235;
char* __result158__;
memset(&__result_obj__, 0, sizeof(void*));
    __result158__ = __result_obj__ = ((char*)(right_value235=__builtin_string(self->sname)));
    return __result158__;
}

struct sEqNode* sEqNode_initialize(struct sEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value236;
char* __dec_obj107;
void* right_value237;
struct sNode* __dec_obj108;
void* right_value238;
struct sNode* __dec_obj109;
struct sEqNode* __result159__;
memset(&__result_obj__, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj107=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value236=__builtin_string(info->sname))));
    if(__dec_obj107) { __dec_obj107 = come_decrement_ref_count(__dec_obj107, (void*)0, (void*)0, 0,0,0); }
    if(right_value236 && right_value236 != __result_obj__) { right_value236 = come_decrement_ref_count(right_value236, (void*)0, (void*)0, 1, 0, 0); }
    self->mQuote=quote;
    __dec_obj108=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value237=sNode_clone(left))));
    if(__dec_obj108) { __dec_obj108 = come_decrement_ref_count(__dec_obj108, ((struct sNode*)__dec_obj108)->finalize, ((struct sNode*)__dec_obj108)->_protocol_obj, 0,0,0); }
    if(right_value237 && right_value237 != __result_obj__) { right_value237 = come_decrement_ref_count(right_value237, ((struct sNode*)right_value237)->finalize, ((struct sNode*)right_value237)->_protocol_obj, 1, 0, 0); } 
    __dec_obj109=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value238=sNode_clone(right))));
    if(__dec_obj109) { __dec_obj109 = come_decrement_ref_count(__dec_obj109, ((struct sNode*)__dec_obj109)->finalize, ((struct sNode*)__dec_obj109)->_protocol_obj, 0,0,0); }
    if(right_value238 && right_value238 != __result_obj__) { right_value238 = come_decrement_ref_count(right_value238, ((struct sNode*)right_value238)->finalize, ((struct sNode*)right_value238)->_protocol_obj, 1, 0, 0); } 
    __result159__ = __result_obj__ = self;
    if(self) { come_call_finalizer(sEqNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    return __result159__;
    if(self) { come_call_finalizer(sEqNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
}

int sEqNode_sline(struct sEqNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
int __result160__;
memset(&__result_obj__, 0, sizeof(void*));
    __result160__ = self->sline;
    return __result160__;
}

char* sEqNode_sname(struct sEqNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value239;
char* __result161__;
memset(&__result_obj__, 0, sizeof(void*));
    __result161__ = __result_obj__ = ((char*)(right_value239=__builtin_string(self->sname)));
    return __result161__;
}

_Bool sEqNode_terminated(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __result162__;
memset(&__result_obj__, 0, sizeof(void*));
    __result162__ = (_Bool)0;
    return __result162__;
}

char* sEqNode_kind(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value240;
char* __result163__;
memset(&__result_obj__, 0, sizeof(void*));
    __result163__ = __result_obj__ = ((char*)(right_value240=__builtin_string("sEqNode")));
    return __result163__;
}

_Bool sEqNode_compile(struct sEqNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
struct sNode* left_node_160;
_Bool _if_conditional214;
_Bool __result164__;
void* right_value241;
struct CVALUE* left_value_161;
struct sNode* right_node_162;
_Bool _if_conditional215;
_Bool __result165__;
void* right_value242;
struct CVALUE* right_value_163;
void* right_value243;
struct CVALUE* come_value_164;
void* right_value244;
char* __dec_obj110;
void* right_value245;
struct sType* __dec_obj111;
_Bool __result166__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_160, 0, sizeof(struct sNode*));
memset(&left_value_161, 0, sizeof(struct CVALUE*));
memset(&right_node_162, 0, sizeof(struct sNode*));
memset(&right_value_163, 0, sizeof(struct CVALUE*));
memset(&come_value_164, 0, sizeof(struct CVALUE*));
    left_node_160=self->mLeft;
    if(_if_conditional214=!node_compile(left_node_160,info),    _if_conditional214) {
        __result164__ = (_Bool)0;
        return __result164__;
    }
    left_value_161=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value241=get_value_from_stack(-1,info))));
    if(right_value241 && right_value241 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value241, (void*)0, (void*)0, 0, 1, 0, 0); }
    dec_stack_ptr(1,info);
    right_node_162=self->mRight;
    if(_if_conditional215=!node_compile(right_node_162,info),    _if_conditional215) {
        __result165__ = (_Bool)0;
        if(left_value_161) { come_call_finalizer(CVALUE_finalize,left_value_161, (void*)0, (void*)0, 0, 0, 0, 0); }
        return __result165__;
    }
    right_value_163=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value242=get_value_from_stack(-1,info))));
    if(right_value242 && right_value242 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value242, (void*)0, (void*)0, 0, 1, 0, 0); }
    dec_stack_ptr(1,info);
    come_value_164=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value243=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1300))));
    if(right_value243 && right_value243 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value243, (void*)0, (void*)0, 0, 1, 0, 0); }
    __dec_obj110=come_value_164->c_value;
    come_value_164->c_value=(char*)come_increment_ref_count(((char*)(right_value244=xsprintf("%s==%s",left_value_161->c_value,right_value_163->c_value))));
    if(__dec_obj110) { __dec_obj110 = come_decrement_ref_count(__dec_obj110, (void*)0, (void*)0, 0,0,0); }
    if(right_value244 && right_value244 != __result_obj__) { right_value244 = come_decrement_ref_count(right_value244, (void*)0, (void*)0, 1, 0, 0); }
    __dec_obj111=come_value_164->type;
    come_value_164->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value245=sType_clone(left_value_161->type))));
    if(__dec_obj111) { come_call_finalizer(sType_finalize,__dec_obj111, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value245 && right_value245 != __result_obj__) { come_call_finalizer(sType_finalize,right_value245, (void*)0, (void*)0, 0, 1, 0, 0); }
    come_value_164->type->mHeap=(_Bool)0;
    come_value_164->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_164->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_164));
    __result166__ = (_Bool)1;
    if(left_value_161) { come_call_finalizer(CVALUE_finalize,left_value_161, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_163) { come_call_finalizer(CVALUE_finalize,right_value_163, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value_164) { come_call_finalizer(CVALUE_finalize,come_value_164, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result166__;
    if(left_value_161) { come_call_finalizer(CVALUE_finalize,left_value_161, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_163) { come_call_finalizer(CVALUE_finalize,right_value_163, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value_164) { come_call_finalizer(CVALUE_finalize,come_value_164, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sNotEqNode* sNotEqNode_initialize(struct sNotEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value246;
char* __dec_obj112;
void* right_value247;
struct sNode* __dec_obj113;
void* right_value248;
struct sNode* __dec_obj114;
struct sNotEqNode* __result167__;
memset(&__result_obj__, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj112=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value246=__builtin_string(info->sname))));
    if(__dec_obj112) { __dec_obj112 = come_decrement_ref_count(__dec_obj112, (void*)0, (void*)0, 0,0,0); }
    if(right_value246 && right_value246 != __result_obj__) { right_value246 = come_decrement_ref_count(right_value246, (void*)0, (void*)0, 1, 0, 0); }
    self->mQuote=quote;
    __dec_obj113=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value247=sNode_clone(left))));
    if(__dec_obj113) { __dec_obj113 = come_decrement_ref_count(__dec_obj113, ((struct sNode*)__dec_obj113)->finalize, ((struct sNode*)__dec_obj113)->_protocol_obj, 0,0,0); }
    if(right_value247 && right_value247 != __result_obj__) { right_value247 = come_decrement_ref_count(right_value247, ((struct sNode*)right_value247)->finalize, ((struct sNode*)right_value247)->_protocol_obj, 1, 0, 0); } 
    __dec_obj114=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value248=sNode_clone(right))));
    if(__dec_obj114) { __dec_obj114 = come_decrement_ref_count(__dec_obj114, ((struct sNode*)__dec_obj114)->finalize, ((struct sNode*)__dec_obj114)->_protocol_obj, 0,0,0); }
    if(right_value248 && right_value248 != __result_obj__) { right_value248 = come_decrement_ref_count(right_value248, ((struct sNode*)right_value248)->finalize, ((struct sNode*)right_value248)->_protocol_obj, 1, 0, 0); } 
    __result167__ = __result_obj__ = self;
    if(self) { come_call_finalizer(sNotEqNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    return __result167__;
    if(self) { come_call_finalizer(sNotEqNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
}

_Bool sNotEqNode_terminated(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __result168__;
memset(&__result_obj__, 0, sizeof(void*));
    __result168__ = (_Bool)0;
    return __result168__;
}

char* sNotEqNode_kind(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value249;
char* __result169__;
memset(&__result_obj__, 0, sizeof(void*));
    __result169__ = __result_obj__ = ((char*)(right_value249=__builtin_string("sNotEqNode")));
    return __result169__;
}

_Bool sNotEqNode_compile(struct sNotEqNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
struct sNode* left_node_165;
_Bool _if_conditional219;
_Bool __result170__;
void* right_value250;
struct CVALUE* left_value_166;
struct sNode* right_node_167;
_Bool _if_conditional220;
_Bool __result171__;
void* right_value251;
struct CVALUE* right_value_168;
void* right_value252;
struct CVALUE* come_value_169;
void* right_value253;
char* __dec_obj115;
void* right_value254;
struct sType* __dec_obj116;
_Bool __result172__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_165, 0, sizeof(struct sNode*));
memset(&left_value_166, 0, sizeof(struct CVALUE*));
memset(&right_node_167, 0, sizeof(struct sNode*));
memset(&right_value_168, 0, sizeof(struct CVALUE*));
memset(&come_value_169, 0, sizeof(struct CVALUE*));
    left_node_165=self->mLeft;
    if(_if_conditional219=!node_compile(left_node_165,info),    _if_conditional219) {
        __result170__ = (_Bool)0;
        return __result170__;
    }
    left_value_166=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value250=get_value_from_stack(-1,info))));
    if(right_value250 && right_value250 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value250, (void*)0, (void*)0, 0, 1, 0, 0); }
    dec_stack_ptr(1,info);
    right_node_167=self->mRight;
    if(_if_conditional220=!node_compile(right_node_167,info),    _if_conditional220) {
        __result171__ = (_Bool)0;
        if(left_value_166) { come_call_finalizer(CVALUE_finalize,left_value_166, (void*)0, (void*)0, 0, 0, 0, 0); }
        return __result171__;
    }
    right_value_168=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value251=get_value_from_stack(-1,info))));
    if(right_value251 && right_value251 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value251, (void*)0, (void*)0, 0, 1, 0, 0); }
    dec_stack_ptr(1,info);
    come_value_169=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value252=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1368))));
    if(right_value252 && right_value252 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value252, (void*)0, (void*)0, 0, 1, 0, 0); }
    __dec_obj115=come_value_169->c_value;
    come_value_169->c_value=(char*)come_increment_ref_count(((char*)(right_value253=xsprintf("%s!=%s",left_value_166->c_value,right_value_168->c_value))));
    if(__dec_obj115) { __dec_obj115 = come_decrement_ref_count(__dec_obj115, (void*)0, (void*)0, 0,0,0); }
    if(right_value253 && right_value253 != __result_obj__) { right_value253 = come_decrement_ref_count(right_value253, (void*)0, (void*)0, 1, 0, 0); }
    __dec_obj116=come_value_169->type;
    come_value_169->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value254=sType_clone(left_value_166->type))));
    if(__dec_obj116) { come_call_finalizer(sType_finalize,__dec_obj116, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value254 && right_value254 != __result_obj__) { come_call_finalizer(sType_finalize,right_value254, (void*)0, (void*)0, 0, 1, 0, 0); }
    come_value_169->type->mHeap=(_Bool)0;
    come_value_169->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_169->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_169));
    __result172__ = (_Bool)1;
    if(left_value_166) { come_call_finalizer(CVALUE_finalize,left_value_166, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_168) { come_call_finalizer(CVALUE_finalize,right_value_168, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value_169) { come_call_finalizer(CVALUE_finalize,come_value_169, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result172__;
    if(left_value_166) { come_call_finalizer(CVALUE_finalize,left_value_166, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_168) { come_call_finalizer(CVALUE_finalize,right_value_168, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value_169) { come_call_finalizer(CVALUE_finalize,come_value_169, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sNotEqNode_sline(struct sNotEqNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
int __result173__;
memset(&__result_obj__, 0, sizeof(void*));
    __result173__ = self->sline;
    return __result173__;
}

char* sNotEqNode_sname(struct sNotEqNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value255;
char* __result174__;
memset(&__result_obj__, 0, sizeof(void*));
    __result174__ = __result_obj__ = ((char*)(right_value255=__builtin_string(self->sname)));
    return __result174__;
}

struct sEq2Node* sEq2Node_initialize(struct sEq2Node* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value256;
char* __dec_obj117;
void* right_value257;
struct sNode* __dec_obj118;
void* right_value258;
struct sNode* __dec_obj119;
struct sEq2Node* __result175__;
memset(&__result_obj__, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj117=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value256=__builtin_string(info->sname))));
    if(__dec_obj117) { __dec_obj117 = come_decrement_ref_count(__dec_obj117, (void*)0, (void*)0, 0,0,0); }
    if(right_value256 && right_value256 != __result_obj__) { right_value256 = come_decrement_ref_count(right_value256, (void*)0, (void*)0, 1, 0, 0); }
    self->mQuote=quote;
    __dec_obj118=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value257=sNode_clone(left))));
    if(__dec_obj118) { __dec_obj118 = come_decrement_ref_count(__dec_obj118, ((struct sNode*)__dec_obj118)->finalize, ((struct sNode*)__dec_obj118)->_protocol_obj, 0,0,0); }
    if(right_value257 && right_value257 != __result_obj__) { right_value257 = come_decrement_ref_count(right_value257, ((struct sNode*)right_value257)->finalize, ((struct sNode*)right_value257)->_protocol_obj, 1, 0, 0); } 
    __dec_obj119=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value258=sNode_clone(right))));
    if(__dec_obj119) { __dec_obj119 = come_decrement_ref_count(__dec_obj119, ((struct sNode*)__dec_obj119)->finalize, ((struct sNode*)__dec_obj119)->_protocol_obj, 0,0,0); }
    if(right_value258 && right_value258 != __result_obj__) { right_value258 = come_decrement_ref_count(right_value258, ((struct sNode*)right_value258)->finalize, ((struct sNode*)right_value258)->_protocol_obj, 1, 0, 0); } 
    __result175__ = __result_obj__ = self;
    if(self) { come_call_finalizer(sEq2Node_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    return __result175__;
    if(self) { come_call_finalizer(sEq2Node_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
}

_Bool sEq2Node_terminated(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __result176__;
memset(&__result_obj__, 0, sizeof(void*));
    __result176__ = (_Bool)0;
    return __result176__;
}

char* sEq2Node_kind(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value259;
char* __result177__;
memset(&__result_obj__, 0, sizeof(void*));
    __result177__ = __result_obj__ = ((char*)(right_value259=__builtin_string("sEq2Node")));
    return __result177__;
}

_Bool sEq2Node_compile(struct sEqNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
struct sNode* left_node_170;
_Bool _if_conditional224;
_Bool __result178__;
void* right_value260;
struct CVALUE* left_value_171;
struct sNode* right_node_172;
_Bool _if_conditional225;
_Bool __result179__;
void* right_value261;
struct CVALUE* right_value_173;
struct sType* type_174;
char* fun_name_175;
_Bool calling_fun_176;
_Bool _if_conditional226;
_Bool _if_conditional227;
void* right_value262;
struct CVALUE* come_value_177;
void* right_value263;
char* __dec_obj120;
void* right_value264;
struct sType* __dec_obj121;
_Bool __result180__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_170, 0, sizeof(struct sNode*));
memset(&left_value_171, 0, sizeof(struct CVALUE*));
memset(&right_node_172, 0, sizeof(struct sNode*));
memset(&right_value_173, 0, sizeof(struct CVALUE*));
memset(&type_174, 0, sizeof(struct sType*));
memset(&fun_name_175, 0, sizeof(char*));
memset(&calling_fun_176, 0, sizeof(_Bool));
memset(&come_value_177, 0, sizeof(struct CVALUE*));
    left_node_170=self->mLeft;
    if(_if_conditional224=!node_compile(left_node_170,info),    _if_conditional224) {
        __result178__ = (_Bool)0;
        return __result178__;
    }
    left_value_171=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value260=get_value_from_stack(-1,info))));
    if(right_value260 && right_value260 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value260, (void*)0, (void*)0, 0, 1, 0, 0); }
    dec_stack_ptr(1,info);
    right_node_172=self->mRight;
    if(_if_conditional225=!node_compile(right_node_172,info),    _if_conditional225) {
        __result179__ = (_Bool)0;
        if(left_value_171) { come_call_finalizer(CVALUE_finalize,left_value_171, (void*)0, (void*)0, 0, 0, 0, 0); }
        return __result179__;
    }
    right_value_173=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value261=get_value_from_stack(-1,info))));
    if(right_value261 && right_value261 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value261, (void*)0, (void*)0, 0, 1, 0, 0); }
    dec_stack_ptr(1,info);
    type_174=(struct sType*)come_increment_ref_count(left_value_171->type);
    fun_name_175="operator_equals";
    if(_if_conditional226=self->mQuote,    _if_conditional226) {
        calling_fun_176=(_Bool)0;
    }
    else {
        calling_fun_176=operator_overload_fun(type_174,fun_name_175,left_value_171,right_value_173,info);
    }
    if(_if_conditional227=!calling_fun_176,    _if_conditional227) {
        come_value_177=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value262=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1459))));
        if(right_value262 && right_value262 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value262, (void*)0, (void*)0, 0, 1, 0, 0); }
        __dec_obj120=come_value_177->c_value;
        come_value_177->c_value=(char*)come_increment_ref_count(((char*)(right_value263=xsprintf("%s==%s",left_value_171->c_value,right_value_173->c_value))));
        if(__dec_obj120) { __dec_obj120 = come_decrement_ref_count(__dec_obj120, (void*)0, (void*)0, 0,0,0); }
        if(right_value263 && right_value263 != __result_obj__) { right_value263 = come_decrement_ref_count(right_value263, (void*)0, (void*)0, 1, 0, 0); }
        __dec_obj121=come_value_177->type;
        come_value_177->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value264=sType_clone(left_value_171->type))));
        if(__dec_obj121) { come_call_finalizer(sType_finalize,__dec_obj121, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value264 && right_value264 != __result_obj__) { come_call_finalizer(sType_finalize,right_value264, (void*)0, (void*)0, 0, 1, 0, 0); }
        come_value_177->type->mHeap=(_Bool)0;
        come_value_177->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_177->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_177));
        if(come_value_177) { come_call_finalizer(CVALUE_finalize,come_value_177, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __result180__ = (_Bool)1;
    if(left_value_171) { come_call_finalizer(CVALUE_finalize,left_value_171, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_173) { come_call_finalizer(CVALUE_finalize,right_value_173, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_174) { come_call_finalizer(sType_finalize,type_174, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result180__;
    if(left_value_171) { come_call_finalizer(CVALUE_finalize,left_value_171, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_173) { come_call_finalizer(CVALUE_finalize,right_value_173, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_174) { come_call_finalizer(sType_finalize,type_174, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sEq2Node_sline(struct sEq2Node* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
int __result181__;
memset(&__result_obj__, 0, sizeof(void*));
    __result181__ = self->sline;
    return __result181__;
}

char* sEq2Node_sname(struct sEq2Node* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value265;
char* __result182__;
memset(&__result_obj__, 0, sizeof(void*));
    __result182__ = __result_obj__ = ((char*)(right_value265=__builtin_string(self->sname)));
    return __result182__;
}

struct sNotEq2Node* sNotEq2Node_initialize(struct sNotEq2Node* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value266;
char* __dec_obj122;
void* right_value267;
struct sNode* __dec_obj123;
void* right_value268;
struct sNode* __dec_obj124;
struct sNotEq2Node* __result183__;
memset(&__result_obj__, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj122=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value266=__builtin_string(info->sname))));
    if(__dec_obj122) { __dec_obj122 = come_decrement_ref_count(__dec_obj122, (void*)0, (void*)0, 0,0,0); }
    if(right_value266 && right_value266 != __result_obj__) { right_value266 = come_decrement_ref_count(right_value266, (void*)0, (void*)0, 1, 0, 0); }
    self->mQuote=quote;
    __dec_obj123=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value267=sNode_clone(left))));
    if(__dec_obj123) { __dec_obj123 = come_decrement_ref_count(__dec_obj123, ((struct sNode*)__dec_obj123)->finalize, ((struct sNode*)__dec_obj123)->_protocol_obj, 0,0,0); }
    if(right_value267 && right_value267 != __result_obj__) { right_value267 = come_decrement_ref_count(right_value267, ((struct sNode*)right_value267)->finalize, ((struct sNode*)right_value267)->_protocol_obj, 1, 0, 0); } 
    __dec_obj124=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value268=sNode_clone(right))));
    if(__dec_obj124) { __dec_obj124 = come_decrement_ref_count(__dec_obj124, ((struct sNode*)__dec_obj124)->finalize, ((struct sNode*)__dec_obj124)->_protocol_obj, 0,0,0); }
    if(right_value268 && right_value268 != __result_obj__) { right_value268 = come_decrement_ref_count(right_value268, ((struct sNode*)right_value268)->finalize, ((struct sNode*)right_value268)->_protocol_obj, 1, 0, 0); } 
    __result183__ = __result_obj__ = self;
    if(self) { come_call_finalizer(sNotEq2Node_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    return __result183__;
    if(self) { come_call_finalizer(sNotEq2Node_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
}

_Bool sNotEq2Node_terminated(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __result184__;
memset(&__result_obj__, 0, sizeof(void*));
    __result184__ = (_Bool)0;
    return __result184__;
}

char* sNotEq2Node_kind(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value269;
char* __result185__;
memset(&__result_obj__, 0, sizeof(void*));
    __result185__ = __result_obj__ = ((char*)(right_value269=__builtin_string("sNotEq2Node")));
    return __result185__;
}

_Bool sNotEq2Node_compile(struct sNotEq2Node* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
struct sNode* left_node_178;
_Bool _if_conditional231;
_Bool __result186__;
void* right_value270;
struct CVALUE* left_value_179;
struct sNode* right_node_180;
_Bool _if_conditional232;
_Bool __result187__;
void* right_value271;
struct CVALUE* right_value_181;
struct sType* type_182;
char* fun_name_183;
_Bool calling_fun_184;
_Bool _if_conditional233;
_Bool _if_conditional234;
void* right_value272;
struct CVALUE* come_value_185;
void* right_value273;
char* __dec_obj125;
void* right_value274;
struct sType* __dec_obj126;
_Bool __result188__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_178, 0, sizeof(struct sNode*));
memset(&left_value_179, 0, sizeof(struct CVALUE*));
memset(&right_node_180, 0, sizeof(struct sNode*));
memset(&right_value_181, 0, sizeof(struct CVALUE*));
memset(&type_182, 0, sizeof(struct sType*));
memset(&fun_name_183, 0, sizeof(char*));
memset(&calling_fun_184, 0, sizeof(_Bool));
memset(&come_value_185, 0, sizeof(struct CVALUE*));
    left_node_178=self->mLeft;
    if(_if_conditional231=!node_compile(left_node_178,info),    _if_conditional231) {
        __result186__ = (_Bool)0;
        return __result186__;
    }
    left_value_179=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value270=get_value_from_stack(-1,info))));
    if(right_value270 && right_value270 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value270, (void*)0, (void*)0, 0, 1, 0, 0); }
    dec_stack_ptr(1,info);
    right_node_180=self->mRight;
    if(_if_conditional232=!node_compile(right_node_180,info),    _if_conditional232) {
        __result187__ = (_Bool)0;
        if(left_value_179) { come_call_finalizer(CVALUE_finalize,left_value_179, (void*)0, (void*)0, 0, 0, 0, 0); }
        return __result187__;
    }
    right_value_181=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value271=get_value_from_stack(-1,info))));
    if(right_value271 && right_value271 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value271, (void*)0, (void*)0, 0, 1, 0, 0); }
    dec_stack_ptr(1,info);
    type_182=(struct sType*)come_increment_ref_count(left_value_179->type);
    fun_name_183="operator_not_equals";
    if(_if_conditional233=self->mQuote,    _if_conditional233) {
        calling_fun_184=(_Bool)0;
    }
    else {
        calling_fun_184=operator_overload_fun(type_182,fun_name_183,left_value_179,right_value_181,info);
    }
    if(_if_conditional234=!calling_fun_184,    _if_conditional234) {
        come_value_185=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value272=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1550))));
        if(right_value272 && right_value272 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value272, (void*)0, (void*)0, 0, 1, 0, 0); }
        __dec_obj125=come_value_185->c_value;
        come_value_185->c_value=(char*)come_increment_ref_count(((char*)(right_value273=xsprintf("%s!=%s",left_value_179->c_value,right_value_181->c_value))));
        if(__dec_obj125) { __dec_obj125 = come_decrement_ref_count(__dec_obj125, (void*)0, (void*)0, 0,0,0); }
        if(right_value273 && right_value273 != __result_obj__) { right_value273 = come_decrement_ref_count(right_value273, (void*)0, (void*)0, 1, 0, 0); }
        __dec_obj126=come_value_185->type;
        come_value_185->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value274=sType_clone(left_value_179->type))));
        if(__dec_obj126) { come_call_finalizer(sType_finalize,__dec_obj126, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value274 && right_value274 != __result_obj__) { come_call_finalizer(sType_finalize,right_value274, (void*)0, (void*)0, 0, 1, 0, 0); }
        come_value_185->type->mHeap=(_Bool)0;
        come_value_185->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_185->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_185));
        if(come_value_185) { come_call_finalizer(CVALUE_finalize,come_value_185, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __result188__ = (_Bool)1;
    if(left_value_179) { come_call_finalizer(CVALUE_finalize,left_value_179, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_181) { come_call_finalizer(CVALUE_finalize,right_value_181, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_182) { come_call_finalizer(sType_finalize,type_182, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result188__;
    if(left_value_179) { come_call_finalizer(CVALUE_finalize,left_value_179, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_181) { come_call_finalizer(CVALUE_finalize,right_value_181, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_182) { come_call_finalizer(sType_finalize,type_182, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sNotEq2Node_sline(struct sNotEq2Node* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
int __result189__;
memset(&__result_obj__, 0, sizeof(void*));
    __result189__ = self->sline;
    return __result189__;
}

char* sNotEq2Node_sname(struct sNotEq2Node* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value275;
char* __result190__;
memset(&__result_obj__, 0, sizeof(void*));
    __result190__ = __result_obj__ = ((char*)(right_value275=__builtin_string(self->sname)));
    return __result190__;
}

struct sAndNode* sAndNode_initialize(struct sAndNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value276;
char* __dec_obj127;
void* right_value277;
struct sNode* __dec_obj128;
void* right_value278;
struct sNode* __dec_obj129;
struct sAndNode* __result191__;
memset(&__result_obj__, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj127=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value276=__builtin_string(info->sname))));
    if(__dec_obj127) { __dec_obj127 = come_decrement_ref_count(__dec_obj127, (void*)0, (void*)0, 0,0,0); }
    if(right_value276 && right_value276 != __result_obj__) { right_value276 = come_decrement_ref_count(right_value276, (void*)0, (void*)0, 1, 0, 0); }
    self->mQuote=quote;
    __dec_obj128=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value277=sNode_clone(left))));
    if(__dec_obj128) { __dec_obj128 = come_decrement_ref_count(__dec_obj128, ((struct sNode*)__dec_obj128)->finalize, ((struct sNode*)__dec_obj128)->_protocol_obj, 0,0,0); }
    if(right_value277 && right_value277 != __result_obj__) { right_value277 = come_decrement_ref_count(right_value277, ((struct sNode*)right_value277)->finalize, ((struct sNode*)right_value277)->_protocol_obj, 1, 0, 0); } 
    __dec_obj129=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value278=sNode_clone(right))));
    if(__dec_obj129) { __dec_obj129 = come_decrement_ref_count(__dec_obj129, ((struct sNode*)__dec_obj129)->finalize, ((struct sNode*)__dec_obj129)->_protocol_obj, 0,0,0); }
    if(right_value278 && right_value278 != __result_obj__) { right_value278 = come_decrement_ref_count(right_value278, ((struct sNode*)right_value278)->finalize, ((struct sNode*)right_value278)->_protocol_obj, 1, 0, 0); } 
    __result191__ = __result_obj__ = self;
    if(self) { come_call_finalizer(sAndNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    return __result191__;
    if(self) { come_call_finalizer(sAndNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
}

_Bool sAndNode_terminated(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __result192__;
memset(&__result_obj__, 0, sizeof(void*));
    __result192__ = (_Bool)0;
    return __result192__;
}

char* sAndNode_kind(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value279;
char* __result193__;
memset(&__result_obj__, 0, sizeof(void*));
    __result193__ = __result_obj__ = ((char*)(right_value279=__builtin_string("sAndNode")));
    return __result193__;
}

_Bool sAndNode_compile(struct sAndNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
struct sNode* left_node_186;
_Bool _if_conditional238;
_Bool __result194__;
void* right_value280;
struct CVALUE* left_value_187;
struct sNode* right_node_188;
_Bool _if_conditional239;
_Bool __result195__;
void* right_value281;
struct CVALUE* right_value_189;
struct sType* type_190;
char* fun_name_191;
_Bool calling_fun_192;
_Bool _if_conditional240;
_Bool _if_conditional241;
void* right_value282;
struct CVALUE* come_value_193;
void* right_value283;
char* __dec_obj130;
void* right_value284;
struct sType* __dec_obj131;
_Bool __result196__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_186, 0, sizeof(struct sNode*));
memset(&left_value_187, 0, sizeof(struct CVALUE*));
memset(&right_node_188, 0, sizeof(struct sNode*));
memset(&right_value_189, 0, sizeof(struct CVALUE*));
memset(&type_190, 0, sizeof(struct sType*));
memset(&fun_name_191, 0, sizeof(char*));
memset(&calling_fun_192, 0, sizeof(_Bool));
memset(&come_value_193, 0, sizeof(struct CVALUE*));
    left_node_186=self->mLeft;
    if(_if_conditional238=!node_compile(left_node_186,info),    _if_conditional238) {
        __result194__ = (_Bool)0;
        return __result194__;
    }
    left_value_187=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value280=get_value_from_stack(-1,info))));
    if(right_value280 && right_value280 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value280, (void*)0, (void*)0, 0, 1, 0, 0); }
    dec_stack_ptr(1,info);
    right_node_188=self->mRight;
    if(_if_conditional239=!node_compile(right_node_188,info),    _if_conditional239) {
        __result195__ = (_Bool)0;
        if(left_value_187) { come_call_finalizer(CVALUE_finalize,left_value_187, (void*)0, (void*)0, 0, 0, 0, 0); }
        return __result195__;
    }
    right_value_189=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value281=get_value_from_stack(-1,info))));
    if(right_value281 && right_value281 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value281, (void*)0, (void*)0, 0, 1, 0, 0); }
    dec_stack_ptr(1,info);
    type_190=(struct sType*)come_increment_ref_count(left_value_187->type);
    fun_name_191="operator_and";
    if(_if_conditional240=self->mQuote,    _if_conditional240) {
        calling_fun_192=(_Bool)0;
    }
    else {
        calling_fun_192=operator_overload_fun(type_190,fun_name_191,left_value_187,right_value_189,info);
    }
    if(_if_conditional241=!calling_fun_192,    _if_conditional241) {
        come_value_193=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value282=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1642))));
        if(right_value282 && right_value282 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value282, (void*)0, (void*)0, 0, 1, 0, 0); }
        __dec_obj130=come_value_193->c_value;
        come_value_193->c_value=(char*)come_increment_ref_count(((char*)(right_value283=xsprintf("%s&%s",left_value_187->c_value,right_value_189->c_value))));
        if(__dec_obj130) { __dec_obj130 = come_decrement_ref_count(__dec_obj130, (void*)0, (void*)0, 0,0,0); }
        if(right_value283 && right_value283 != __result_obj__) { right_value283 = come_decrement_ref_count(right_value283, (void*)0, (void*)0, 1, 0, 0); }
        __dec_obj131=come_value_193->type;
        come_value_193->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value284=sType_clone(left_value_187->type))));
        if(__dec_obj131) { come_call_finalizer(sType_finalize,__dec_obj131, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value284 && right_value284 != __result_obj__) { come_call_finalizer(sType_finalize,right_value284, (void*)0, (void*)0, 0, 1, 0, 0); }
        come_value_193->type->mHeap=(_Bool)0;
        come_value_193->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_193->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_193));
        if(come_value_193) { come_call_finalizer(CVALUE_finalize,come_value_193, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __result196__ = (_Bool)1;
    if(left_value_187) { come_call_finalizer(CVALUE_finalize,left_value_187, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_189) { come_call_finalizer(CVALUE_finalize,right_value_189, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_190) { come_call_finalizer(sType_finalize,type_190, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result196__;
    if(left_value_187) { come_call_finalizer(CVALUE_finalize,left_value_187, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_189) { come_call_finalizer(CVALUE_finalize,right_value_189, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_190) { come_call_finalizer(sType_finalize,type_190, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sAndNode_sline(struct sAndNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
int __result197__;
memset(&__result_obj__, 0, sizeof(void*));
    __result197__ = self->sline;
    return __result197__;
}

char* sAndNode_sname(struct sAndNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value285;
char* __result198__;
memset(&__result_obj__, 0, sizeof(void*));
    __result198__ = __result_obj__ = ((char*)(right_value285=__builtin_string(self->sname)));
    return __result198__;
}

struct sXOrNode* sXOrNode_initialize(struct sXOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value286;
char* __dec_obj132;
void* right_value287;
struct sNode* __dec_obj133;
void* right_value288;
struct sNode* __dec_obj134;
struct sXOrNode* __result199__;
memset(&__result_obj__, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj132=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value286=__builtin_string(info->sname))));
    if(__dec_obj132) { __dec_obj132 = come_decrement_ref_count(__dec_obj132, (void*)0, (void*)0, 0,0,0); }
    if(right_value286 && right_value286 != __result_obj__) { right_value286 = come_decrement_ref_count(right_value286, (void*)0, (void*)0, 1, 0, 0); }
    self->mQuote=quote;
    __dec_obj133=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value287=sNode_clone(left))));
    if(__dec_obj133) { __dec_obj133 = come_decrement_ref_count(__dec_obj133, ((struct sNode*)__dec_obj133)->finalize, ((struct sNode*)__dec_obj133)->_protocol_obj, 0,0,0); }
    if(right_value287 && right_value287 != __result_obj__) { right_value287 = come_decrement_ref_count(right_value287, ((struct sNode*)right_value287)->finalize, ((struct sNode*)right_value287)->_protocol_obj, 1, 0, 0); } 
    __dec_obj134=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value288=sNode_clone(right))));
    if(__dec_obj134) { __dec_obj134 = come_decrement_ref_count(__dec_obj134, ((struct sNode*)__dec_obj134)->finalize, ((struct sNode*)__dec_obj134)->_protocol_obj, 0,0,0); }
    if(right_value288 && right_value288 != __result_obj__) { right_value288 = come_decrement_ref_count(right_value288, ((struct sNode*)right_value288)->finalize, ((struct sNode*)right_value288)->_protocol_obj, 1, 0, 0); } 
    __result199__ = __result_obj__ = self;
    if(self) { come_call_finalizer(sXOrNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    return __result199__;
    if(self) { come_call_finalizer(sXOrNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
}

_Bool sXOrNode_terminated(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __result200__;
memset(&__result_obj__, 0, sizeof(void*));
    __result200__ = (_Bool)0;
    return __result200__;
}

char* sXOrNode_kind(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value289;
char* __result201__;
memset(&__result_obj__, 0, sizeof(void*));
    __result201__ = __result_obj__ = ((char*)(right_value289=__builtin_string("sXOrNode")));
    return __result201__;
}

_Bool sXOrNode_compile(struct sXOrNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
struct sNode* left_node_194;
_Bool _if_conditional245;
_Bool __result202__;
void* right_value290;
struct CVALUE* left_value_195;
struct sNode* right_node_196;
_Bool _if_conditional246;
_Bool __result203__;
void* right_value291;
struct CVALUE* right_value_197;
struct sType* type_198;
char* fun_name_199;
_Bool calling_fun_200;
_Bool _if_conditional247;
_Bool _if_conditional248;
void* right_value292;
struct CVALUE* come_value_201;
void* right_value293;
char* __dec_obj135;
void* right_value294;
struct sType* __dec_obj136;
_Bool __result204__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_194, 0, sizeof(struct sNode*));
memset(&left_value_195, 0, sizeof(struct CVALUE*));
memset(&right_node_196, 0, sizeof(struct sNode*));
memset(&right_value_197, 0, sizeof(struct CVALUE*));
memset(&type_198, 0, sizeof(struct sType*));
memset(&fun_name_199, 0, sizeof(char*));
memset(&calling_fun_200, 0, sizeof(_Bool));
memset(&come_value_201, 0, sizeof(struct CVALUE*));
    left_node_194=self->mLeft;
    if(_if_conditional245=!node_compile(left_node_194,info),    _if_conditional245) {
        __result202__ = (_Bool)0;
        return __result202__;
    }
    left_value_195=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value290=get_value_from_stack(-1,info))));
    if(right_value290 && right_value290 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value290, (void*)0, (void*)0, 0, 1, 0, 0); }
    dec_stack_ptr(1,info);
    right_node_196=self->mRight;
    if(_if_conditional246=!node_compile(right_node_196,info),    _if_conditional246) {
        __result203__ = (_Bool)0;
        if(left_value_195) { come_call_finalizer(CVALUE_finalize,left_value_195, (void*)0, (void*)0, 0, 0, 0, 0); }
        return __result203__;
    }
    right_value_197=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value291=get_value_from_stack(-1,info))));
    if(right_value291 && right_value291 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value291, (void*)0, (void*)0, 0, 1, 0, 0); }
    dec_stack_ptr(1,info);
    type_198=(struct sType*)come_increment_ref_count(left_value_195->type);
    fun_name_199="operator_xor";
    if(_if_conditional247=self->mQuote,    _if_conditional247) {
        calling_fun_200=(_Bool)0;
    }
    else {
        calling_fun_200=operator_overload_fun(type_198,fun_name_199,left_value_195,right_value_197,info);
    }
    if(_if_conditional248=!calling_fun_200,    _if_conditional248) {
        come_value_201=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value292=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1733))));
        if(right_value292 && right_value292 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value292, (void*)0, (void*)0, 0, 1, 0, 0); }
        __dec_obj135=come_value_201->c_value;
        come_value_201->c_value=(char*)come_increment_ref_count(((char*)(right_value293=xsprintf("%s^%s",left_value_195->c_value,right_value_197->c_value))));
        if(__dec_obj135) { __dec_obj135 = come_decrement_ref_count(__dec_obj135, (void*)0, (void*)0, 0,0,0); }
        if(right_value293 && right_value293 != __result_obj__) { right_value293 = come_decrement_ref_count(right_value293, (void*)0, (void*)0, 1, 0, 0); }
        __dec_obj136=come_value_201->type;
        come_value_201->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value294=sType_clone(left_value_195->type))));
        if(__dec_obj136) { come_call_finalizer(sType_finalize,__dec_obj136, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value294 && right_value294 != __result_obj__) { come_call_finalizer(sType_finalize,right_value294, (void*)0, (void*)0, 0, 1, 0, 0); }
        come_value_201->type->mHeap=(_Bool)0;
        come_value_201->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_201->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_201));
        if(come_value_201) { come_call_finalizer(CVALUE_finalize,come_value_201, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __result204__ = (_Bool)1;
    if(left_value_195) { come_call_finalizer(CVALUE_finalize,left_value_195, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_197) { come_call_finalizer(CVALUE_finalize,right_value_197, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_198) { come_call_finalizer(sType_finalize,type_198, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result204__;
    if(left_value_195) { come_call_finalizer(CVALUE_finalize,left_value_195, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_197) { come_call_finalizer(CVALUE_finalize,right_value_197, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_198) { come_call_finalizer(sType_finalize,type_198, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sXOrNode_sline(struct sXOrNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
int __result205__;
memset(&__result_obj__, 0, sizeof(void*));
    __result205__ = self->sline;
    return __result205__;
}

char* sXOrNode_sname(struct sXOrNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value295;
char* __result206__;
memset(&__result_obj__, 0, sizeof(void*));
    __result206__ = __result_obj__ = ((char*)(right_value295=__builtin_string(self->sname)));
    return __result206__;
}

struct sOrNode* sOrNode_initialize(struct sOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value296;
char* __dec_obj137;
void* right_value297;
struct sNode* __dec_obj138;
void* right_value298;
struct sNode* __dec_obj139;
struct sOrNode* __result207__;
memset(&__result_obj__, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj137=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value296=__builtin_string(info->sname))));
    if(__dec_obj137) { __dec_obj137 = come_decrement_ref_count(__dec_obj137, (void*)0, (void*)0, 0,0,0); }
    if(right_value296 && right_value296 != __result_obj__) { right_value296 = come_decrement_ref_count(right_value296, (void*)0, (void*)0, 1, 0, 0); }
    self->mQuote=quote;
    __dec_obj138=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value297=sNode_clone(left))));
    if(__dec_obj138) { __dec_obj138 = come_decrement_ref_count(__dec_obj138, ((struct sNode*)__dec_obj138)->finalize, ((struct sNode*)__dec_obj138)->_protocol_obj, 0,0,0); }
    if(right_value297 && right_value297 != __result_obj__) { right_value297 = come_decrement_ref_count(right_value297, ((struct sNode*)right_value297)->finalize, ((struct sNode*)right_value297)->_protocol_obj, 1, 0, 0); } 
    __dec_obj139=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value298=sNode_clone(right))));
    if(__dec_obj139) { __dec_obj139 = come_decrement_ref_count(__dec_obj139, ((struct sNode*)__dec_obj139)->finalize, ((struct sNode*)__dec_obj139)->_protocol_obj, 0,0,0); }
    if(right_value298 && right_value298 != __result_obj__) { right_value298 = come_decrement_ref_count(right_value298, ((struct sNode*)right_value298)->finalize, ((struct sNode*)right_value298)->_protocol_obj, 1, 0, 0); } 
    __result207__ = __result_obj__ = self;
    if(self) { come_call_finalizer(sOrNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    return __result207__;
    if(self) { come_call_finalizer(sOrNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
}

_Bool sOrNode_terminated(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __result208__;
memset(&__result_obj__, 0, sizeof(void*));
    __result208__ = (_Bool)0;
    return __result208__;
}

char* sOrNode_kind(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value299;
char* __result209__;
memset(&__result_obj__, 0, sizeof(void*));
    __result209__ = __result_obj__ = ((char*)(right_value299=__builtin_string("sOrNode")));
    return __result209__;
}

_Bool sOrNode_compile(struct sOrNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
struct sNode* left_node_202;
_Bool _if_conditional252;
_Bool __result210__;
void* right_value300;
struct CVALUE* left_value_203;
struct sNode* right_node_204;
_Bool _if_conditional253;
_Bool __result211__;
void* right_value301;
struct CVALUE* right_value_205;
struct sType* type_206;
char* fun_name_207;
_Bool calling_fun_208;
_Bool _if_conditional254;
_Bool _if_conditional255;
void* right_value302;
struct CVALUE* come_value_209;
void* right_value303;
char* __dec_obj140;
void* right_value304;
struct sType* __dec_obj141;
_Bool __result212__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_202, 0, sizeof(struct sNode*));
memset(&left_value_203, 0, sizeof(struct CVALUE*));
memset(&right_node_204, 0, sizeof(struct sNode*));
memset(&right_value_205, 0, sizeof(struct CVALUE*));
memset(&type_206, 0, sizeof(struct sType*));
memset(&fun_name_207, 0, sizeof(char*));
memset(&calling_fun_208, 0, sizeof(_Bool));
memset(&come_value_209, 0, sizeof(struct CVALUE*));
    left_node_202=self->mLeft;
    if(_if_conditional252=!node_compile(left_node_202,info),    _if_conditional252) {
        __result210__ = (_Bool)0;
        return __result210__;
    }
    left_value_203=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value300=get_value_from_stack(-1,info))));
    if(right_value300 && right_value300 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value300, (void*)0, (void*)0, 0, 1, 0, 0); }
    dec_stack_ptr(1,info);
    right_node_204=self->mRight;
    if(_if_conditional253=!node_compile(right_node_204,info),    _if_conditional253) {
        __result211__ = (_Bool)0;
        if(left_value_203) { come_call_finalizer(CVALUE_finalize,left_value_203, (void*)0, (void*)0, 0, 0, 0, 0); }
        return __result211__;
    }
    right_value_205=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value301=get_value_from_stack(-1,info))));
    if(right_value301 && right_value301 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value301, (void*)0, (void*)0, 0, 1, 0, 0); }
    dec_stack_ptr(1,info);
    type_206=(struct sType*)come_increment_ref_count(left_value_203->type);
    fun_name_207="operator_or";
    if(_if_conditional254=self->mQuote,    _if_conditional254) {
        calling_fun_208=(_Bool)0;
    }
    else {
        calling_fun_208=operator_overload_fun(type_206,fun_name_207,left_value_203,right_value_205,info);
    }
    if(_if_conditional255=!calling_fun_208,    _if_conditional255) {
        come_value_209=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value302=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1824))));
        if(right_value302 && right_value302 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value302, (void*)0, (void*)0, 0, 1, 0, 0); }
        __dec_obj140=come_value_209->c_value;
        come_value_209->c_value=(char*)come_increment_ref_count(((char*)(right_value303=xsprintf("%s|%s",left_value_203->c_value,right_value_205->c_value))));
        if(__dec_obj140) { __dec_obj140 = come_decrement_ref_count(__dec_obj140, (void*)0, (void*)0, 0,0,0); }
        if(right_value303 && right_value303 != __result_obj__) { right_value303 = come_decrement_ref_count(right_value303, (void*)0, (void*)0, 1, 0, 0); }
        __dec_obj141=come_value_209->type;
        come_value_209->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value304=sType_clone(left_value_203->type))));
        if(__dec_obj141) { come_call_finalizer(sType_finalize,__dec_obj141, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value304 && right_value304 != __result_obj__) { come_call_finalizer(sType_finalize,right_value304, (void*)0, (void*)0, 0, 1, 0, 0); }
        come_value_209->type->mHeap=(_Bool)0;
        come_value_209->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_209->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_209));
        if(come_value_209) { come_call_finalizer(CVALUE_finalize,come_value_209, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __result212__ = (_Bool)1;
    if(left_value_203) { come_call_finalizer(CVALUE_finalize,left_value_203, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_205) { come_call_finalizer(CVALUE_finalize,right_value_205, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_206) { come_call_finalizer(sType_finalize,type_206, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result212__;
    if(left_value_203) { come_call_finalizer(CVALUE_finalize,left_value_203, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_205) { come_call_finalizer(CVALUE_finalize,right_value_205, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_206) { come_call_finalizer(sType_finalize,type_206, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sOrNode_sline(struct sOrNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
int __result213__;
memset(&__result_obj__, 0, sizeof(void*));
    __result213__ = self->sline;
    return __result213__;
}

char* sOrNode_sname(struct sOrNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value305;
char* __result214__;
memset(&__result_obj__, 0, sizeof(void*));
    __result214__ = __result_obj__ = ((char*)(right_value305=__builtin_string(self->sname)));
    return __result214__;
}

struct sAndAndNode* sAndAndNode_initialize(struct sAndAndNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value306;
char* __dec_obj142;
void* right_value307;
struct sNode* __dec_obj143;
void* right_value308;
struct sNode* __dec_obj144;
struct sAndAndNode* __result215__;
memset(&__result_obj__, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj142=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value306=__builtin_string(info->sname))));
    if(__dec_obj142) { __dec_obj142 = come_decrement_ref_count(__dec_obj142, (void*)0, (void*)0, 0,0,0); }
    if(right_value306 && right_value306 != __result_obj__) { right_value306 = come_decrement_ref_count(right_value306, (void*)0, (void*)0, 1, 0, 0); }
    self->mQuote=quote;
    __dec_obj143=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value307=sNode_clone(left))));
    if(__dec_obj143) { __dec_obj143 = come_decrement_ref_count(__dec_obj143, ((struct sNode*)__dec_obj143)->finalize, ((struct sNode*)__dec_obj143)->_protocol_obj, 0,0,0); }
    if(right_value307 && right_value307 != __result_obj__) { right_value307 = come_decrement_ref_count(right_value307, ((struct sNode*)right_value307)->finalize, ((struct sNode*)right_value307)->_protocol_obj, 1, 0, 0); } 
    __dec_obj144=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value308=sNode_clone(right))));
    if(__dec_obj144) { __dec_obj144 = come_decrement_ref_count(__dec_obj144, ((struct sNode*)__dec_obj144)->finalize, ((struct sNode*)__dec_obj144)->_protocol_obj, 0,0,0); }
    if(right_value308 && right_value308 != __result_obj__) { right_value308 = come_decrement_ref_count(right_value308, ((struct sNode*)right_value308)->finalize, ((struct sNode*)right_value308)->_protocol_obj, 1, 0, 0); } 
    __result215__ = __result_obj__ = self;
    if(self) { come_call_finalizer(sAndAndNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    return __result215__;
    if(self) { come_call_finalizer(sAndAndNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
}

_Bool sAndAndNode_terminated(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __result216__;
memset(&__result_obj__, 0, sizeof(void*));
    __result216__ = (_Bool)0;
    return __result216__;
}

char* sAndAndNode_kind(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value309;
char* __result217__;
memset(&__result_obj__, 0, sizeof(void*));
    __result217__ = __result_obj__ = ((char*)(right_value309=__builtin_string("sAndAndNode")));
    return __result217__;
}

_Bool sAndAndNode_compile(struct sAndAndNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
struct sNode* left_node_210;
_Bool _if_conditional259;
_Bool __result218__;
void* right_value310;
struct CVALUE* left_value_211;
struct sNode* right_node_212;
_Bool _if_conditional260;
_Bool __result219__;
void* right_value311;
struct CVALUE* right_value_213;
struct sType* type_214;
char* fun_name_215;
_Bool calling_fun_216;
_Bool _if_conditional261;
_Bool _if_conditional262;
void* right_value312;
struct CVALUE* come_value_217;
void* right_value313;
char* __dec_obj145;
void* right_value314;
struct sType* __dec_obj146;
_Bool __result220__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_210, 0, sizeof(struct sNode*));
memset(&left_value_211, 0, sizeof(struct CVALUE*));
memset(&right_node_212, 0, sizeof(struct sNode*));
memset(&right_value_213, 0, sizeof(struct CVALUE*));
memset(&type_214, 0, sizeof(struct sType*));
memset(&fun_name_215, 0, sizeof(char*));
memset(&calling_fun_216, 0, sizeof(_Bool));
memset(&come_value_217, 0, sizeof(struct CVALUE*));
    left_node_210=self->mLeft;
    if(_if_conditional259=!node_compile(left_node_210,info),    _if_conditional259) {
        __result218__ = (_Bool)0;
        return __result218__;
    }
    left_value_211=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value310=get_value_from_stack(-1,info))));
    if(right_value310 && right_value310 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value310, (void*)0, (void*)0, 0, 1, 0, 0); }
    dec_stack_ptr(1,info);
    right_node_212=self->mRight;
    if(_if_conditional260=!node_compile(right_node_212,info),    _if_conditional260) {
        __result219__ = (_Bool)0;
        if(left_value_211) { come_call_finalizer(CVALUE_finalize,left_value_211, (void*)0, (void*)0, 0, 0, 0, 0); }
        return __result219__;
    }
    right_value_213=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value311=get_value_from_stack(-1,info))));
    if(right_value311 && right_value311 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value311, (void*)0, (void*)0, 0, 1, 0, 0); }
    dec_stack_ptr(1,info);
    type_214=(struct sType*)come_increment_ref_count(left_value_211->type);
    fun_name_215="operator_andand";
    if(_if_conditional261=self->mQuote,    _if_conditional261) {
        calling_fun_216=(_Bool)0;
    }
    else {
        calling_fun_216=operator_overload_fun(type_214,fun_name_215,left_value_211,right_value_213,info);
    }
    if(_if_conditional262=!calling_fun_216,    _if_conditional262) {
        come_value_217=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value312=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1915))));
        if(right_value312 && right_value312 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value312, (void*)0, (void*)0, 0, 1, 0, 0); }
        __dec_obj145=come_value_217->c_value;
        come_value_217->c_value=(char*)come_increment_ref_count(((char*)(right_value313=xsprintf("%s&&%s",left_value_211->c_value,right_value_213->c_value))));
        if(__dec_obj145) { __dec_obj145 = come_decrement_ref_count(__dec_obj145, (void*)0, (void*)0, 0,0,0); }
        if(right_value313 && right_value313 != __result_obj__) { right_value313 = come_decrement_ref_count(right_value313, (void*)0, (void*)0, 1, 0, 0); }
        __dec_obj146=come_value_217->type;
        come_value_217->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value314=sType_clone(left_value_211->type))));
        if(__dec_obj146) { come_call_finalizer(sType_finalize,__dec_obj146, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value314 && right_value314 != __result_obj__) { come_call_finalizer(sType_finalize,right_value314, (void*)0, (void*)0, 0, 1, 0, 0); }
        come_value_217->type->mHeap=(_Bool)0;
        come_value_217->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_217->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_217));
        if(come_value_217) { come_call_finalizer(CVALUE_finalize,come_value_217, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __result220__ = (_Bool)1;
    if(left_value_211) { come_call_finalizer(CVALUE_finalize,left_value_211, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_213) { come_call_finalizer(CVALUE_finalize,right_value_213, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_214) { come_call_finalizer(sType_finalize,type_214, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result220__;
    if(left_value_211) { come_call_finalizer(CVALUE_finalize,left_value_211, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_213) { come_call_finalizer(CVALUE_finalize,right_value_213, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_214) { come_call_finalizer(sType_finalize,type_214, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sAndAndNode_sline(struct sAndAndNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
int __result221__;
memset(&__result_obj__, 0, sizeof(void*));
    __result221__ = self->sline;
    return __result221__;
}

char* sAndAndNode_sname(struct sAndAndNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value315;
char* __result222__;
memset(&__result_obj__, 0, sizeof(void*));
    __result222__ = __result_obj__ = ((char*)(right_value315=__builtin_string(self->sname)));
    return __result222__;
}

struct sOrOrNode* sOrOrNode_initialize(struct sOrOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value316;
char* __dec_obj147;
void* right_value317;
struct sNode* __dec_obj148;
void* right_value318;
struct sNode* __dec_obj149;
struct sOrOrNode* __result223__;
memset(&__result_obj__, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj147=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value316=__builtin_string(info->sname))));
    if(__dec_obj147) { __dec_obj147 = come_decrement_ref_count(__dec_obj147, (void*)0, (void*)0, 0,0,0); }
    if(right_value316 && right_value316 != __result_obj__) { right_value316 = come_decrement_ref_count(right_value316, (void*)0, (void*)0, 1, 0, 0); }
    self->mQuote=quote;
    __dec_obj148=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value317=sNode_clone(left))));
    if(__dec_obj148) { __dec_obj148 = come_decrement_ref_count(__dec_obj148, ((struct sNode*)__dec_obj148)->finalize, ((struct sNode*)__dec_obj148)->_protocol_obj, 0,0,0); }
    if(right_value317 && right_value317 != __result_obj__) { right_value317 = come_decrement_ref_count(right_value317, ((struct sNode*)right_value317)->finalize, ((struct sNode*)right_value317)->_protocol_obj, 1, 0, 0); } 
    __dec_obj149=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value318=sNode_clone(right))));
    if(__dec_obj149) { __dec_obj149 = come_decrement_ref_count(__dec_obj149, ((struct sNode*)__dec_obj149)->finalize, ((struct sNode*)__dec_obj149)->_protocol_obj, 0,0,0); }
    if(right_value318 && right_value318 != __result_obj__) { right_value318 = come_decrement_ref_count(right_value318, ((struct sNode*)right_value318)->finalize, ((struct sNode*)right_value318)->_protocol_obj, 1, 0, 0); } 
    __result223__ = __result_obj__ = self;
    if(self) { come_call_finalizer(sOrOrNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    return __result223__;
    if(self) { come_call_finalizer(sOrOrNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
}

_Bool sOrOrNode_terminated(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __result224__;
memset(&__result_obj__, 0, sizeof(void*));
    __result224__ = (_Bool)0;
    return __result224__;
}

char* sOrOrNode_kind(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value319;
char* __result225__;
memset(&__result_obj__, 0, sizeof(void*));
    __result225__ = __result_obj__ = ((char*)(right_value319=__builtin_string("sOrOrNode")));
    return __result225__;
}

_Bool sOrOrNode_compile(struct sOrOrNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
struct sNode* left_node_218;
_Bool _if_conditional266;
_Bool __result226__;
void* right_value320;
struct CVALUE* left_value_219;
struct sNode* right_node_220;
_Bool _if_conditional267;
_Bool __result227__;
void* right_value321;
struct CVALUE* right_value_221;
struct sType* type_222;
char* fun_name_223;
_Bool calling_fun_224;
_Bool _if_conditional268;
_Bool _if_conditional269;
void* right_value322;
struct CVALUE* come_value_225;
void* right_value323;
char* __dec_obj150;
void* right_value324;
struct sType* __dec_obj151;
_Bool __result228__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_218, 0, sizeof(struct sNode*));
memset(&left_value_219, 0, sizeof(struct CVALUE*));
memset(&right_node_220, 0, sizeof(struct sNode*));
memset(&right_value_221, 0, sizeof(struct CVALUE*));
memset(&type_222, 0, sizeof(struct sType*));
memset(&fun_name_223, 0, sizeof(char*));
memset(&calling_fun_224, 0, sizeof(_Bool));
memset(&come_value_225, 0, sizeof(struct CVALUE*));
    left_node_218=self->mLeft;
    if(_if_conditional266=!node_compile(left_node_218,info),    _if_conditional266) {
        __result226__ = (_Bool)0;
        return __result226__;
    }
    left_value_219=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value320=get_value_from_stack(-1,info))));
    if(right_value320 && right_value320 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value320, (void*)0, (void*)0, 0, 1, 0, 0); }
    dec_stack_ptr(1,info);
    right_node_220=self->mRight;
    if(_if_conditional267=!node_compile(right_node_220,info),    _if_conditional267) {
        __result227__ = (_Bool)0;
        if(left_value_219) { come_call_finalizer(CVALUE_finalize,left_value_219, (void*)0, (void*)0, 0, 0, 0, 0); }
        return __result227__;
    }
    right_value_221=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value321=get_value_from_stack(-1,info))));
    if(right_value321 && right_value321 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value321, (void*)0, (void*)0, 0, 1, 0, 0); }
    dec_stack_ptr(1,info);
    type_222=(struct sType*)come_increment_ref_count(left_value_219->type);
    fun_name_223="operator_oror";
    if(_if_conditional268=self->mQuote,    _if_conditional268) {
        calling_fun_224=(_Bool)0;
    }
    else {
        calling_fun_224=operator_overload_fun(type_222,fun_name_223,left_value_219,right_value_221,info);
    }
    if(_if_conditional269=!calling_fun_224,    _if_conditional269) {
        come_value_225=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value322=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 2005))));
        if(right_value322 && right_value322 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value322, (void*)0, (void*)0, 0, 1, 0, 0); }
        __dec_obj150=come_value_225->c_value;
        come_value_225->c_value=(char*)come_increment_ref_count(((char*)(right_value323=xsprintf("%s||%s",left_value_219->c_value,right_value_221->c_value))));
        if(__dec_obj150) { __dec_obj150 = come_decrement_ref_count(__dec_obj150, (void*)0, (void*)0, 0,0,0); }
        if(right_value323 && right_value323 != __result_obj__) { right_value323 = come_decrement_ref_count(right_value323, (void*)0, (void*)0, 1, 0, 0); }
        __dec_obj151=come_value_225->type;
        come_value_225->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value324=sType_clone(left_value_219->type))));
        if(__dec_obj151) { come_call_finalizer(sType_finalize,__dec_obj151, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value324 && right_value324 != __result_obj__) { come_call_finalizer(sType_finalize,right_value324, (void*)0, (void*)0, 0, 1, 0, 0); }
        come_value_225->type->mHeap=(_Bool)0;
        come_value_225->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_225->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_225));
        if(come_value_225) { come_call_finalizer(CVALUE_finalize,come_value_225, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __result228__ = (_Bool)1;
    if(left_value_219) { come_call_finalizer(CVALUE_finalize,left_value_219, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_221) { come_call_finalizer(CVALUE_finalize,right_value_221, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_222) { come_call_finalizer(sType_finalize,type_222, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result228__;
    if(left_value_219) { come_call_finalizer(CVALUE_finalize,left_value_219, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_221) { come_call_finalizer(CVALUE_finalize,right_value_221, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_222) { come_call_finalizer(sType_finalize,type_222, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sOrOrNode_sline(struct sOrOrNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
int __result229__;
memset(&__result_obj__, 0, sizeof(void*));
    __result229__ = self->sline;
    return __result229__;
}

char* sOrOrNode_sname(struct sOrOrNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value325;
char* __result230__;
memset(&__result_obj__, 0, sizeof(void*));
    __result230__ = __result_obj__ = ((char*)(right_value325=__builtin_string(self->sname)));
    return __result230__;
}

struct sCommaNode* sCommaNode_initialize(struct sCommaNode* self, struct sNode* left, struct sNode* right, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value326;
char* __dec_obj152;
void* right_value327;
struct sNode* __dec_obj153;
void* right_value328;
struct sNode* __dec_obj154;
struct sCommaNode* __result231__;
memset(&__result_obj__, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj152=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value326=__builtin_string(info->sname))));
    if(__dec_obj152) { __dec_obj152 = come_decrement_ref_count(__dec_obj152, (void*)0, (void*)0, 0,0,0); }
    if(right_value326 && right_value326 != __result_obj__) { right_value326 = come_decrement_ref_count(right_value326, (void*)0, (void*)0, 1, 0, 0); }
    __dec_obj153=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value327=sNode_clone(left))));
    if(__dec_obj153) { __dec_obj153 = come_decrement_ref_count(__dec_obj153, ((struct sNode*)__dec_obj153)->finalize, ((struct sNode*)__dec_obj153)->_protocol_obj, 0,0,0); }
    if(right_value327 && right_value327 != __result_obj__) { right_value327 = come_decrement_ref_count(right_value327, ((struct sNode*)right_value327)->finalize, ((struct sNode*)right_value327)->_protocol_obj, 1, 0, 0); } 
    __dec_obj154=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value328=sNode_clone(right))));
    if(__dec_obj154) { __dec_obj154 = come_decrement_ref_count(__dec_obj154, ((struct sNode*)__dec_obj154)->finalize, ((struct sNode*)__dec_obj154)->_protocol_obj, 0,0,0); }
    if(right_value328 && right_value328 != __result_obj__) { right_value328 = come_decrement_ref_count(right_value328, ((struct sNode*)right_value328)->finalize, ((struct sNode*)right_value328)->_protocol_obj, 1, 0, 0); } 
    __result231__ = __result_obj__ = self;
    if(self) { come_call_finalizer(sCommaNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    return __result231__;
    if(self) { come_call_finalizer(sCommaNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
}

_Bool sCommaNode_terminated(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __result232__;
memset(&__result_obj__, 0, sizeof(void*));
    __result232__ = (_Bool)0;
    return __result232__;
}

char* sCommaNode_kind(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value329;
char* __result233__;
memset(&__result_obj__, 0, sizeof(void*));
    __result233__ = __result_obj__ = ((char*)(right_value329=__builtin_string("sCommaNode")));
    return __result233__;
}

_Bool sCommaNode_compile(struct sCommaNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
struct sNode* left_node_226;
_Bool _if_conditional273;
_Bool __result234__;
void* right_value330;
struct CVALUE* left_value_227;
struct sNode* right_node_228;
_Bool _if_conditional274;
_Bool __result235__;
void* right_value331;
struct CVALUE* right_value_229;
void* right_value332;
struct CVALUE* come_value_230;
void* right_value333;
char* __dec_obj155;
void* right_value334;
struct sType* __dec_obj156;
_Bool __result236__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_226, 0, sizeof(struct sNode*));
memset(&left_value_227, 0, sizeof(struct CVALUE*));
memset(&right_node_228, 0, sizeof(struct sNode*));
memset(&right_value_229, 0, sizeof(struct CVALUE*));
memset(&come_value_230, 0, sizeof(struct CVALUE*));
    left_node_226=self->mLeft;
    if(_if_conditional273=!node_compile(left_node_226,info),    _if_conditional273) {
        __result234__ = (_Bool)0;
        return __result234__;
    }
    left_value_227=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value330=get_value_from_stack(-1,info))));
    if(right_value330 && right_value330 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value330, (void*)0, (void*)0, 0, 1, 0, 0); }
    dec_stack_ptr(1,info);
    right_node_228=self->mRight;
    if(_if_conditional274=!node_compile(right_node_228,info),    _if_conditional274) {
        __result235__ = (_Bool)0;
        if(left_value_227) { come_call_finalizer(CVALUE_finalize,left_value_227, (void*)0, (void*)0, 0, 0, 0, 0); }
        return __result235__;
    }
    right_value_229=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value331=get_value_from_stack(-1,info))));
    if(right_value331 && right_value331 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value331, (void*)0, (void*)0, 0, 1, 0, 0); }
    dec_stack_ptr(1,info);
    come_value_230=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value332=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 2082))));
    if(right_value332 && right_value332 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value332, (void*)0, (void*)0, 0, 1, 0, 0); }
    __dec_obj155=come_value_230->c_value;
    come_value_230->c_value=(char*)come_increment_ref_count(((char*)(right_value333=xsprintf("%s,%s",left_value_227->c_value,right_value_229->c_value))));
    if(__dec_obj155) { __dec_obj155 = come_decrement_ref_count(__dec_obj155, (void*)0, (void*)0, 0,0,0); }
    if(right_value333 && right_value333 != __result_obj__) { right_value333 = come_decrement_ref_count(right_value333, (void*)0, (void*)0, 1, 0, 0); }
    __dec_obj156=come_value_230->type;
    come_value_230->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value334=sType_clone(left_value_227->type))));
    if(__dec_obj156) { come_call_finalizer(sType_finalize,__dec_obj156, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value334 && right_value334 != __result_obj__) { come_call_finalizer(sType_finalize,right_value334, (void*)0, (void*)0, 0, 1, 0, 0); }
    come_value_230->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_230->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_230));
    __result236__ = (_Bool)1;
    if(left_value_227) { come_call_finalizer(CVALUE_finalize,left_value_227, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_229) { come_call_finalizer(CVALUE_finalize,right_value_229, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value_230) { come_call_finalizer(CVALUE_finalize,come_value_230, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result236__;
    if(left_value_227) { come_call_finalizer(CVALUE_finalize,left_value_227, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_229) { come_call_finalizer(CVALUE_finalize,right_value_229, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value_230) { come_call_finalizer(CVALUE_finalize,come_value_230, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sCommaNode_sline(struct sCommaNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
int __result237__;
memset(&__result_obj__, 0, sizeof(void*));
    __result237__ = self->sline;
    return __result237__;
}

char* sCommaNode_sname(struct sCommaNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value335;
char* __result238__;
memset(&__result_obj__, 0, sizeof(void*));
    __result238__ = __result_obj__ = ((char*)(right_value335=__builtin_string(self->sname)));
    return __result238__;
}

struct sConditionalNode* sConditionalNode_initialize(struct sConditionalNode* self, struct sNode* value1, struct sNode* value2, struct sNode* value3, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value336;
char* __dec_obj157;
void* right_value337;
struct sNode* __dec_obj158;
void* right_value338;
struct sNode* __dec_obj159;
void* right_value339;
struct sNode* __dec_obj160;
struct sConditionalNode* __result239__;
memset(&__result_obj__, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj157=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value336=__builtin_string(info->sname))));
    if(__dec_obj157) { __dec_obj157 = come_decrement_ref_count(__dec_obj157, (void*)0, (void*)0, 0,0,0); }
    if(right_value336 && right_value336 != __result_obj__) { right_value336 = come_decrement_ref_count(right_value336, (void*)0, (void*)0, 1, 0, 0); }
    __dec_obj158=self->mValue1;
    self->mValue1=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value337=sNode_clone(value1))));
    if(__dec_obj158) { __dec_obj158 = come_decrement_ref_count(__dec_obj158, ((struct sNode*)__dec_obj158)->finalize, ((struct sNode*)__dec_obj158)->_protocol_obj, 0,0,0); }
    if(right_value337 && right_value337 != __result_obj__) { right_value337 = come_decrement_ref_count(right_value337, ((struct sNode*)right_value337)->finalize, ((struct sNode*)right_value337)->_protocol_obj, 1, 0, 0); } 
    __dec_obj159=self->mValue2;
    self->mValue2=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value338=sNode_clone(value2))));
    if(__dec_obj159) { __dec_obj159 = come_decrement_ref_count(__dec_obj159, ((struct sNode*)__dec_obj159)->finalize, ((struct sNode*)__dec_obj159)->_protocol_obj, 0,0,0); }
    if(right_value338 && right_value338 != __result_obj__) { right_value338 = come_decrement_ref_count(right_value338, ((struct sNode*)right_value338)->finalize, ((struct sNode*)right_value338)->_protocol_obj, 1, 0, 0); } 
    __dec_obj160=self->mValue3;
    self->mValue3=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value339=sNode_clone(value3))));
    if(__dec_obj160) { __dec_obj160 = come_decrement_ref_count(__dec_obj160, ((struct sNode*)__dec_obj160)->finalize, ((struct sNode*)__dec_obj160)->_protocol_obj, 0,0,0); }
    if(right_value339 && right_value339 != __result_obj__) { right_value339 = come_decrement_ref_count(right_value339, ((struct sNode*)right_value339)->finalize, ((struct sNode*)right_value339)->_protocol_obj, 1, 0, 0); } 
    __result239__ = __result_obj__ = self;
    if(self) { come_call_finalizer(sConditionalNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(value1) { value1 = come_decrement_ref_count(value1, ((struct sNode*)value1)->finalize, ((struct sNode*)value1)->_protocol_obj, 0, 1, 0); } 
    if(value2) { value2 = come_decrement_ref_count(value2, ((struct sNode*)value2)->finalize, ((struct sNode*)value2)->_protocol_obj, 0, 1, 0); } 
    if(value3) { value3 = come_decrement_ref_count(value3, ((struct sNode*)value3)->finalize, ((struct sNode*)value3)->_protocol_obj, 0, 1, 0); } 
    return __result239__;
    if(self) { come_call_finalizer(sConditionalNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(value1) { value1 = come_decrement_ref_count(value1, ((struct sNode*)value1)->finalize, ((struct sNode*)value1)->_protocol_obj, 0, 1, 0); } 
    if(value2) { value2 = come_decrement_ref_count(value2, ((struct sNode*)value2)->finalize, ((struct sNode*)value2)->_protocol_obj, 0, 1, 0); } 
    if(value3) { value3 = come_decrement_ref_count(value3, ((struct sNode*)value3)->finalize, ((struct sNode*)value3)->_protocol_obj, 0, 1, 0); } 
}

_Bool sConditionalNode_terminated(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __result240__;
memset(&__result_obj__, 0, sizeof(void*));
    __result240__ = (_Bool)0;
    return __result240__;
}

char* sConditionalNode_kind(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value340;
char* __result241__;
memset(&__result_obj__, 0, sizeof(void*));
    __result241__ = __result_obj__ = ((char*)(right_value340=__builtin_string("sConditionalNode")));
    return __result241__;
}

_Bool sConditionalNode_compile(struct sConditionalNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
struct sNode* value1_231;
_Bool _if_conditional279;
_Bool __result242__;
void* right_value341;
struct CVALUE* value1_value_232;
struct sNode* value2_233;
_Bool _if_conditional280;
_Bool __result243__;
void* right_value342;
struct CVALUE* value2_value_234;
struct sNode* value3_235;
_Bool _if_conditional281;
_Bool __result244__;
void* right_value343;
struct CVALUE* value3_value_236;
void* right_value344;
struct CVALUE* come_value_237;
void* right_value345;
char* __dec_obj161;
void* right_value346;
struct sType* __dec_obj162;
_Bool __result245__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&value1_231, 0, sizeof(struct sNode*));
memset(&value1_value_232, 0, sizeof(struct CVALUE*));
memset(&value2_233, 0, sizeof(struct sNode*));
memset(&value2_value_234, 0, sizeof(struct CVALUE*));
memset(&value3_235, 0, sizeof(struct sNode*));
memset(&value3_value_236, 0, sizeof(struct CVALUE*));
memset(&come_value_237, 0, sizeof(struct CVALUE*));
    value1_231=self->mValue1;
    if(_if_conditional279=!node_compile(value1_231,info),    _if_conditional279) {
        __result242__ = (_Bool)0;
        return __result242__;
    }
    value1_value_232=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value341=get_value_from_stack(-1,info))));
    if(right_value341 && right_value341 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value341, (void*)0, (void*)0, 0, 1, 0, 0); }
    dec_stack_ptr(1,info);
    value2_233=self->mValue2;
    if(_if_conditional280=!node_compile(value2_233,info),    _if_conditional280) {
        __result243__ = (_Bool)0;
        if(value1_value_232) { come_call_finalizer(CVALUE_finalize,value1_value_232, (void*)0, (void*)0, 0, 0, 0, 0); }
        return __result243__;
    }
    value2_value_234=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value342=get_value_from_stack(-1,info))));
    if(right_value342 && right_value342 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value342, (void*)0, (void*)0, 0, 1, 0, 0); }
    dec_stack_ptr(1,info);
    value3_235=self->mValue3;
    if(_if_conditional281=!node_compile(value3_235,info),    _if_conditional281) {
        __result244__ = (_Bool)0;
        if(value1_value_232) { come_call_finalizer(CVALUE_finalize,value1_value_232, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(value2_value_234) { come_call_finalizer(CVALUE_finalize,value2_value_234, (void*)0, (void*)0, 0, 0, 0, 0); }
        return __result244__;
    }
    value3_value_236=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value343=get_value_from_stack(-1,info))));
    if(right_value343 && right_value343 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value343, (void*)0, (void*)0, 0, 1, 0, 0); }
    dec_stack_ptr(1,info);
    come_value_237=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value344=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 2168))));
    if(right_value344 && right_value344 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value344, (void*)0, (void*)0, 0, 1, 0, 0); }
    __dec_obj161=come_value_237->c_value;
    come_value_237->c_value=(char*)come_increment_ref_count(((char*)(right_value345=xsprintf("%s?%s:%s",value1_value_232->c_value,value2_value_234->c_value,value3_value_236->c_value))));
    if(__dec_obj161) { __dec_obj161 = come_decrement_ref_count(__dec_obj161, (void*)0, (void*)0, 0,0,0); }
    if(right_value345 && right_value345 != __result_obj__) { right_value345 = come_decrement_ref_count(right_value345, (void*)0, (void*)0, 1, 0, 0); }
    __dec_obj162=come_value_237->type;
    come_value_237->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value346=sType_clone(value1_value_232->type))));
    if(__dec_obj162) { come_call_finalizer(sType_finalize,__dec_obj162, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value346 && right_value346 != __result_obj__) { come_call_finalizer(sType_finalize,right_value346, (void*)0, (void*)0, 0, 1, 0, 0); }
    come_value_237->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_237->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_237));
    __result245__ = (_Bool)1;
    if(value1_value_232) { come_call_finalizer(CVALUE_finalize,value1_value_232, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(value2_value_234) { come_call_finalizer(CVALUE_finalize,value2_value_234, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(value3_value_236) { come_call_finalizer(CVALUE_finalize,value3_value_236, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value_237) { come_call_finalizer(CVALUE_finalize,come_value_237, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result245__;
    if(value1_value_232) { come_call_finalizer(CVALUE_finalize,value1_value_232, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(value2_value_234) { come_call_finalizer(CVALUE_finalize,value2_value_234, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(value3_value_236) { come_call_finalizer(CVALUE_finalize,value3_value_236, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value_237) { come_call_finalizer(CVALUE_finalize,come_value_237, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sConditionalNode_sline(struct sConditionalNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
int __result246__;
memset(&__result_obj__, 0, sizeof(void*));
    __result246__ = self->sline;
    return __result246__;
}

char* sConditionalNode_sname(struct sConditionalNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value347;
char* __result247__;
memset(&__result_obj__, 0, sizeof(void*));
    __result247__ = __result_obj__ = ((char*)(right_value347=__builtin_string(self->sname)));
    return __result247__;
}

struct sNode* mult_exp(struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value348;
struct sNode* node_238;
_Bool _while_condtional10;
_Bool _if_conditional282;
void* right_value349;
struct sNode* right_239;
void* right_value350;
void* right_value351;
struct sNode* _inf_value3;
struct sMultNode* _inf_obj_value3;
void* right_value356;
struct sNode* __result250__;
_Bool _if_conditional292;
void* right_value357;
struct sNode* right_241;
void* right_value358;
void* right_value359;
struct sNode* _inf_value4;
struct sDivNode* _inf_obj_value4;
void* right_value364;
struct sNode* __result253__;
_Bool _if_conditional302;
void* right_value365;
struct sNode* right_243;
void* right_value366;
void* right_value367;
struct sNode* _inf_value5;
struct sModNode* _inf_obj_value5;
void* right_value372;
struct sNode* __result256__;
_Bool _if_conditional312;
void* right_value373;
struct sNode* right_245;
void* right_value374;
void* right_value375;
struct sNode* _inf_value6;
struct sMultNode* _inf_obj_value6;
void* right_value380;
struct sNode* __result259__;
_Bool _if_conditional322;
void* right_value381;
struct sNode* right_247;
void* right_value382;
void* right_value383;
struct sNode* _inf_value7;
struct sDivNode* _inf_obj_value7;
void* right_value388;
struct sNode* __result262__;
_Bool _if_conditional332;
void* right_value389;
struct sNode* right_249;
void* right_value390;
void* right_value391;
struct sNode* _inf_value8;
struct sModNode* _inf_obj_value8;
void* right_value396;
struct sNode* __result265__;
struct sNode* __result266__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&node_238, 0, sizeof(struct sNode*));
memset(&right_239, 0, sizeof(struct sNode*));
memset(&right_241, 0, sizeof(struct sNode*));
memset(&right_243, 0, sizeof(struct sNode*));
memset(&right_245, 0, sizeof(struct sNode*));
memset(&right_247, 0, sizeof(struct sNode*));
memset(&right_249, 0, sizeof(struct sNode*));
    node_238=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value348=expression_node_v99(info))));
    if(right_value348 && right_value348 != __result_obj__) { right_value348 = come_decrement_ref_count(right_value348, ((struct sNode*)right_value348)->finalize, ((struct sNode*)right_value348)->_protocol_obj, 1, 0, 0); } 
    parse_sharp_v5(info);
    while(_while_condtional10=*info->p,    _while_condtional10) {
        if(_if_conditional282=!node_238->terminated(node_238->_protocol_obj)&&*info->p==42&&*(info->p+1)!=61,        _if_conditional282) {
            info->p++;
            skip_spaces_and_lf(info);
            right_239=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value349=mult_exp(info))));
            if(right_value349 && right_value349 != __result_obj__) { right_value349 = come_decrement_ref_count(right_value349, ((struct sNode*)right_value349)->finalize, ((struct sNode*)right_value349)->_protocol_obj, 1, 0, 0); } 
            _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2204);
            _inf_obj_value3=come_increment_ref_count(((struct sMultNode*)(right_value351=sMultNode_initialize((struct sMultNode*)come_increment_ref_count(((struct sMultNode*)(right_value350=(struct sMultNode*)come_calloc(1, sizeof(struct sMultNode)*(1), "13op.c", 2204)))),(struct sNode*)come_increment_ref_count(node_238),(struct sNode*)come_increment_ref_count(right_239),(_Bool)0,info))));
            _inf_value3->_protocol_obj=_inf_obj_value3;
            _inf_value3->finalize=(void*)sMultNode_finalize;
            _inf_value3->clone=(void*)sMultNode_clone;
            _inf_value3->compile=(void*)sMultNode_compile;
            _inf_value3->sline=(void*)sMultNode_sline;
            _inf_value3->sname=(void*)sMultNode_sname;
            _inf_value3->terminated=(void*)sMultNode_terminated;
            _inf_value3->kind=(void*)sMultNode_kind;
            __result250__ = __result_obj__ = ((struct sNode*)(right_value356=_inf_value3));
            if(right_239) { right_239 = come_decrement_ref_count(right_239, ((struct sNode*)right_239)->finalize, ((struct sNode*)right_239)->_protocol_obj, 0, 0, 0); } 
            if(node_238) { node_238 = come_decrement_ref_count(node_238, ((struct sNode*)node_238)->finalize, ((struct sNode*)node_238)->_protocol_obj, 0, 0, 0); } 
            if(right_value350 && right_value350 != __result_obj__) { come_call_finalizer(sMultNode_finalize,right_value350, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value351 && right_value351 != __result_obj__) { come_call_finalizer(sMultNode_finalize,right_value351, (void*)0, (void*)0, 0, 1, 0, 0); }
            return __result250__;
            if(right_239) { right_239 = come_decrement_ref_count(right_239, ((struct sNode*)right_239)->finalize, ((struct sNode*)right_239)->_protocol_obj, 0, 0, 0); } 
        }
        else {
            if(_if_conditional292=*info->p==47&&*(info->p+1)!=61,            _if_conditional292) {
                info->p++;
                skip_spaces_and_lf(info);
                right_241=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value357=mult_exp(info))));
                if(right_value357 && right_value357 != __result_obj__) { right_value357 = come_decrement_ref_count(right_value357, ((struct sNode*)right_value357)->finalize, ((struct sNode*)right_value357)->_protocol_obj, 1, 0, 0); } 
                _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2212);
                _inf_obj_value4=come_increment_ref_count(((struct sDivNode*)(right_value359=sDivNode_initialize((struct sDivNode*)come_increment_ref_count(((struct sDivNode*)(right_value358=(struct sDivNode*)come_calloc(1, sizeof(struct sDivNode)*(1), "13op.c", 2212)))),(struct sNode*)come_increment_ref_count(node_238),(struct sNode*)come_increment_ref_count(right_241),(_Bool)0,info))));
                _inf_value4->_protocol_obj=_inf_obj_value4;
                _inf_value4->finalize=(void*)sDivNode_finalize;
                _inf_value4->clone=(void*)sDivNode_clone;
                _inf_value4->compile=(void*)sDivNode_compile;
                _inf_value4->sline=(void*)sDivNode_sline;
                _inf_value4->sname=(void*)sDivNode_sname;
                _inf_value4->terminated=(void*)sDivNode_terminated;
                _inf_value4->kind=(void*)sDivNode_kind;
                __result253__ = __result_obj__ = ((struct sNode*)(right_value364=_inf_value4));
                if(right_241) { right_241 = come_decrement_ref_count(right_241, ((struct sNode*)right_241)->finalize, ((struct sNode*)right_241)->_protocol_obj, 0, 0, 0); } 
                if(node_238) { node_238 = come_decrement_ref_count(node_238, ((struct sNode*)node_238)->finalize, ((struct sNode*)node_238)->_protocol_obj, 0, 0, 0); } 
                if(right_value358 && right_value358 != __result_obj__) { come_call_finalizer(sDivNode_finalize,right_value358, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value359 && right_value359 != __result_obj__) { come_call_finalizer(sDivNode_finalize,right_value359, (void*)0, (void*)0, 0, 1, 0, 0); }
                return __result253__;
                if(right_241) { right_241 = come_decrement_ref_count(right_241, ((struct sNode*)right_241)->finalize, ((struct sNode*)right_241)->_protocol_obj, 0, 0, 0); } 
            }
            else {
                if(_if_conditional302=*info->p==37&&*(info->p+1)!=61,                _if_conditional302) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    right_243=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value365=expression_node_v99(info))));
                    if(right_value365 && right_value365 != __result_obj__) { right_value365 = come_decrement_ref_count(right_value365, ((struct sNode*)right_value365)->finalize, ((struct sNode*)right_value365)->_protocol_obj, 1, 0, 0); } 
                    _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2220);
                    _inf_obj_value5=come_increment_ref_count(((struct sModNode*)(right_value367=sModNode_initialize((struct sModNode*)come_increment_ref_count(((struct sModNode*)(right_value366=(struct sModNode*)come_calloc(1, sizeof(struct sModNode)*(1), "13op.c", 2220)))),(struct sNode*)come_increment_ref_count(node_238),(struct sNode*)come_increment_ref_count(right_243),(_Bool)0,info))));
                    _inf_value5->_protocol_obj=_inf_obj_value5;
                    _inf_value5->finalize=(void*)sModNode_finalize;
                    _inf_value5->clone=(void*)sModNode_clone;
                    _inf_value5->compile=(void*)sModNode_compile;
                    _inf_value5->sline=(void*)sModNode_sline;
                    _inf_value5->sname=(void*)sModNode_sname;
                    _inf_value5->terminated=(void*)sModNode_terminated;
                    _inf_value5->kind=(void*)sModNode_kind;
                    __result256__ = __result_obj__ = ((struct sNode*)(right_value372=_inf_value5));
                    if(right_243) { right_243 = come_decrement_ref_count(right_243, ((struct sNode*)right_243)->finalize, ((struct sNode*)right_243)->_protocol_obj, 0, 0, 0); } 
                    if(node_238) { node_238 = come_decrement_ref_count(node_238, ((struct sNode*)node_238)->finalize, ((struct sNode*)node_238)->_protocol_obj, 0, 0, 0); } 
                    if(right_value366 && right_value366 != __result_obj__) { come_call_finalizer(sModNode_finalize,right_value366, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(right_value367 && right_value367 != __result_obj__) { come_call_finalizer(sModNode_finalize,right_value367, (void*)0, (void*)0, 0, 1, 0, 0); }
                    return __result256__;
                    if(right_243) { right_243 = come_decrement_ref_count(right_243, ((struct sNode*)right_243)->finalize, ((struct sNode*)right_243)->_protocol_obj, 0, 0, 0); } 
                }
                else {
                    if(_if_conditional312=!node_238->terminated(node_238->_protocol_obj)&&*info->p==92&&*(info->p+1)==42&&*(info->p+2)!=61,                    _if_conditional312) {
                        info->p+=2;
                        skip_spaces_and_lf(info);
                        right_245=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value373=mult_exp(info))));
                        if(right_value373 && right_value373 != __result_obj__) { right_value373 = come_decrement_ref_count(right_value373, ((struct sNode*)right_value373)->finalize, ((struct sNode*)right_value373)->_protocol_obj, 1, 0, 0); } 
                        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2228);
                        _inf_obj_value6=come_increment_ref_count(((struct sMultNode*)(right_value375=sMultNode_initialize((struct sMultNode*)come_increment_ref_count(((struct sMultNode*)(right_value374=(struct sMultNode*)come_calloc(1, sizeof(struct sMultNode)*(1), "13op.c", 2228)))),(struct sNode*)come_increment_ref_count(node_238),(struct sNode*)come_increment_ref_count(right_245),(_Bool)1,info))));
                        _inf_value6->_protocol_obj=_inf_obj_value6;
                        _inf_value6->finalize=(void*)sMultNode_finalize;
                        _inf_value6->clone=(void*)sMultNode_clone;
                        _inf_value6->compile=(void*)sMultNode_compile;
                        _inf_value6->sline=(void*)sMultNode_sline;
                        _inf_value6->sname=(void*)sMultNode_sname;
                        _inf_value6->terminated=(void*)sMultNode_terminated;
                        _inf_value6->kind=(void*)sMultNode_kind;
                        __result259__ = __result_obj__ = ((struct sNode*)(right_value380=_inf_value6));
                        if(right_245) { right_245 = come_decrement_ref_count(right_245, ((struct sNode*)right_245)->finalize, ((struct sNode*)right_245)->_protocol_obj, 0, 0, 0); } 
                        if(node_238) { node_238 = come_decrement_ref_count(node_238, ((struct sNode*)node_238)->finalize, ((struct sNode*)node_238)->_protocol_obj, 0, 0, 0); } 
                        if(right_value374 && right_value374 != __result_obj__) { come_call_finalizer(sMultNode_finalize,right_value374, (void*)0, (void*)0, 0, 1, 0, 0); }
                        if(right_value375 && right_value375 != __result_obj__) { come_call_finalizer(sMultNode_finalize,right_value375, (void*)0, (void*)0, 0, 1, 0, 0); }
                        return __result259__;
                        if(right_245) { right_245 = come_decrement_ref_count(right_245, ((struct sNode*)right_245)->finalize, ((struct sNode*)right_245)->_protocol_obj, 0, 0, 0); } 
                    }
                    else {
                        if(_if_conditional322=*info->p==92&&*(info->p+1)==47&&*(info->p+2)!=61,                        _if_conditional322) {
                            info->p+=2;
                            skip_spaces_and_lf(info);
                            right_247=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value381=mult_exp(info))));
                            if(right_value381 && right_value381 != __result_obj__) { right_value381 = come_decrement_ref_count(right_value381, ((struct sNode*)right_value381)->finalize, ((struct sNode*)right_value381)->_protocol_obj, 1, 0, 0); } 
                            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2236);
                            _inf_obj_value7=come_increment_ref_count(((struct sDivNode*)(right_value383=sDivNode_initialize((struct sDivNode*)come_increment_ref_count(((struct sDivNode*)(right_value382=(struct sDivNode*)come_calloc(1, sizeof(struct sDivNode)*(1), "13op.c", 2236)))),(struct sNode*)come_increment_ref_count(node_238),(struct sNode*)come_increment_ref_count(right_247),(_Bool)1,info))));
                            _inf_value7->_protocol_obj=_inf_obj_value7;
                            _inf_value7->finalize=(void*)sDivNode_finalize;
                            _inf_value7->clone=(void*)sDivNode_clone;
                            _inf_value7->compile=(void*)sDivNode_compile;
                            _inf_value7->sline=(void*)sDivNode_sline;
                            _inf_value7->sname=(void*)sDivNode_sname;
                            _inf_value7->terminated=(void*)sDivNode_terminated;
                            _inf_value7->kind=(void*)sDivNode_kind;
                            __result262__ = __result_obj__ = ((struct sNode*)(right_value388=_inf_value7));
                            if(right_247) { right_247 = come_decrement_ref_count(right_247, ((struct sNode*)right_247)->finalize, ((struct sNode*)right_247)->_protocol_obj, 0, 0, 0); } 
                            if(node_238) { node_238 = come_decrement_ref_count(node_238, ((struct sNode*)node_238)->finalize, ((struct sNode*)node_238)->_protocol_obj, 0, 0, 0); } 
                            if(right_value382 && right_value382 != __result_obj__) { come_call_finalizer(sDivNode_finalize,right_value382, (void*)0, (void*)0, 0, 1, 0, 0); }
                            if(right_value383 && right_value383 != __result_obj__) { come_call_finalizer(sDivNode_finalize,right_value383, (void*)0, (void*)0, 0, 1, 0, 0); }
                            return __result262__;
                            if(right_247) { right_247 = come_decrement_ref_count(right_247, ((struct sNode*)right_247)->finalize, ((struct sNode*)right_247)->_protocol_obj, 0, 0, 0); } 
                        }
                        else {
                            if(_if_conditional332=*info->p==92&&*(info->p+1)==37&&*(info->p+2)!=61,                            _if_conditional332) {
                                info->p+=2;
                                skip_spaces_and_lf(info);
                                right_249=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value389=expression_node_v99(info))));
                                if(right_value389 && right_value389 != __result_obj__) { right_value389 = come_decrement_ref_count(right_value389, ((struct sNode*)right_value389)->finalize, ((struct sNode*)right_value389)->_protocol_obj, 1, 0, 0); } 
                                _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2244);
                                _inf_obj_value8=come_increment_ref_count(((struct sModNode*)(right_value391=sModNode_initialize((struct sModNode*)come_increment_ref_count(((struct sModNode*)(right_value390=(struct sModNode*)come_calloc(1, sizeof(struct sModNode)*(1), "13op.c", 2244)))),(struct sNode*)come_increment_ref_count(node_238),(struct sNode*)come_increment_ref_count(right_249),(_Bool)1,info))));
                                _inf_value8->_protocol_obj=_inf_obj_value8;
                                _inf_value8->finalize=(void*)sModNode_finalize;
                                _inf_value8->clone=(void*)sModNode_clone;
                                _inf_value8->compile=(void*)sModNode_compile;
                                _inf_value8->sline=(void*)sModNode_sline;
                                _inf_value8->sname=(void*)sModNode_sname;
                                _inf_value8->terminated=(void*)sModNode_terminated;
                                _inf_value8->kind=(void*)sModNode_kind;
                                __result265__ = __result_obj__ = ((struct sNode*)(right_value396=_inf_value8));
                                if(right_249) { right_249 = come_decrement_ref_count(right_249, ((struct sNode*)right_249)->finalize, ((struct sNode*)right_249)->_protocol_obj, 0, 0, 0); } 
                                if(node_238) { node_238 = come_decrement_ref_count(node_238, ((struct sNode*)node_238)->finalize, ((struct sNode*)node_238)->_protocol_obj, 0, 0, 0); } 
                                if(right_value390 && right_value390 != __result_obj__) { come_call_finalizer(sModNode_finalize,right_value390, (void*)0, (void*)0, 0, 1, 0, 0); }
                                if(right_value391 && right_value391 != __result_obj__) { come_call_finalizer(sModNode_finalize,right_value391, (void*)0, (void*)0, 0, 1, 0, 0); }
                                return __result265__;
                                if(right_249) { right_249 = come_decrement_ref_count(right_249, ((struct sNode*)right_249)->finalize, ((struct sNode*)right_249)->_protocol_obj, 0, 0, 0); } 
                            }
                            else {
                                break;
                            }
                        }
                    }
                }
            }
        }
    }
    parse_sharp_v5(info);
    __result266__ = __result_obj__ = node_238;
    if(node_238) { node_238 = come_decrement_ref_count(node_238, ((struct sNode*)node_238)->finalize, ((struct sNode*)node_238)->_protocol_obj, 0, 1, 0); } 
    return __result266__;
    if(node_238) { node_238 = come_decrement_ref_count(node_238, ((struct sNode*)node_238)->finalize, ((struct sNode*)node_238)->_protocol_obj, 0, 0, 0); } 
}

static void sMultNode_finalize(struct sMultNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional313;
_Bool _if_conditional314;
_Bool _if_conditional315;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional313=self!=((void*)0)&&self->mLeft!=((void*)0),                            _if_conditional313) {
                                if(self->mLeft) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0); } 
                            }
                            if(_if_conditional314=self!=((void*)0)&&self->mRight!=((void*)0),                            _if_conditional314) {
                                if(self->mRight) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0); } 
                            }
                            if(_if_conditional315=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional315) {
                                if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                            }
}

static struct sMultNode* sMultNode_clone(struct sMultNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional316;
struct sMultNode* __result257__;
void* right_value376;
struct sMultNode* result_246;
_Bool _if_conditional317;
void* right_value377;
struct sNode* __dec_obj172;
_Bool _if_conditional318;
void* right_value378;
struct sNode* __dec_obj173;
_Bool _if_conditional319;
_Bool _if_conditional320;
_Bool _if_conditional321;
void* right_value379;
char* __dec_obj174;
struct sMultNode* __result258__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_246, 0, sizeof(struct sMultNode*));
                            if(_if_conditional316=self==(void*)0,                            _if_conditional316) {
                                __result257__ = __result_obj__ = (void*)0;
                                return __result257__;
                            }
                            result_246=(struct sMultNode*)come_increment_ref_count(((struct sMultNode*)(right_value376=(struct sMultNode*)come_calloc(1, sizeof(struct sMultNode)*(1), "sMultNode_clone", 3))));
                            if(right_value376 && right_value376 != __result_obj__) { come_call_finalizer(sMultNode_finalize,right_value376, (void*)0, (void*)0, 0, 1, 0, 0); }
                            if(_if_conditional317=self!=((void*)0)&&self->mLeft!=((void*)0),                            _if_conditional317) {
                                __dec_obj172=result_246->mLeft;
                                result_246->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value377=sNode_clone(self->mLeft))));
                                if(__dec_obj172) { __dec_obj172 = come_decrement_ref_count(__dec_obj172, ((struct sNode*)__dec_obj172)->finalize, ((struct sNode*)__dec_obj172)->_protocol_obj, 0,0,0); }
                                if(right_value377 && right_value377 != __result_obj__) { right_value377 = come_decrement_ref_count(right_value377, ((struct sNode*)right_value377)->finalize, ((struct sNode*)right_value377)->_protocol_obj, 1, 0, 0); } 
                            }
                            if(_if_conditional318=self!=((void*)0)&&self->mRight!=((void*)0),                            _if_conditional318) {
                                __dec_obj173=result_246->mRight;
                                result_246->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value378=sNode_clone(self->mRight))));
                                if(__dec_obj173) { __dec_obj173 = come_decrement_ref_count(__dec_obj173, ((struct sNode*)__dec_obj173)->finalize, ((struct sNode*)__dec_obj173)->_protocol_obj, 0,0,0); }
                                if(right_value378 && right_value378 != __result_obj__) { right_value378 = come_decrement_ref_count(right_value378, ((struct sNode*)right_value378)->finalize, ((struct sNode*)right_value378)->_protocol_obj, 1, 0, 0); } 
                            }
                            if(_if_conditional319=self!=((void*)0),                            _if_conditional319) {
                                result_246->mQuote=self->mQuote;
                            }
                            if(_if_conditional320=self!=((void*)0),                            _if_conditional320) {
                                result_246->sline=self->sline;
                            }
                            if(_if_conditional321=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional321) {
                                __dec_obj174=result_246->sname;
                                result_246->sname=(char*)come_increment_ref_count(((char*)(right_value379=string_clone(self->sname))));
                                if(__dec_obj174) { __dec_obj174 = come_decrement_ref_count(__dec_obj174, (void*)0, (void*)0, 0,0,0); }
                                if(right_value379 && right_value379 != __result_obj__) { right_value379 = come_decrement_ref_count(right_value379, (void*)0, (void*)0, 1, 0, 0); }
                            }
                            __result258__ = __result_obj__ = result_246;
                            if(result_246) { come_call_finalizer(sMultNode_finalize,result_246, (void*)0, (void*)0, 0, 0, 1, 0); }
                            return __result258__;
                            if(result_246) { come_call_finalizer(sMultNode_finalize,result_246, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sDivNode_finalize(struct sDivNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional323;
_Bool _if_conditional324;
_Bool _if_conditional325;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional323=self!=((void*)0)&&self->mLeft!=((void*)0),                                _if_conditional323) {
                                    if(self->mLeft) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0); } 
                                }
                                if(_if_conditional324=self!=((void*)0)&&self->mRight!=((void*)0),                                _if_conditional324) {
                                    if(self->mRight) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0); } 
                                }
                                if(_if_conditional325=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional325) {
                                    if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                                }
}

static struct sDivNode* sDivNode_clone(struct sDivNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional326;
struct sDivNode* __result260__;
void* right_value384;
struct sDivNode* result_248;
_Bool _if_conditional327;
void* right_value385;
struct sNode* __dec_obj175;
_Bool _if_conditional328;
void* right_value386;
struct sNode* __dec_obj176;
_Bool _if_conditional329;
_Bool _if_conditional330;
_Bool _if_conditional331;
void* right_value387;
char* __dec_obj177;
struct sDivNode* __result261__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_248, 0, sizeof(struct sDivNode*));
                                if(_if_conditional326=self==(void*)0,                                _if_conditional326) {
                                    __result260__ = __result_obj__ = (void*)0;
                                    return __result260__;
                                }
                                result_248=(struct sDivNode*)come_increment_ref_count(((struct sDivNode*)(right_value384=(struct sDivNode*)come_calloc(1, sizeof(struct sDivNode)*(1), "sDivNode_clone", 3))));
                                if(right_value384 && right_value384 != __result_obj__) { come_call_finalizer(sDivNode_finalize,right_value384, (void*)0, (void*)0, 0, 1, 0, 0); }
                                if(_if_conditional327=self!=((void*)0)&&self->mLeft!=((void*)0),                                _if_conditional327) {
                                    __dec_obj175=result_248->mLeft;
                                    result_248->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value385=sNode_clone(self->mLeft))));
                                    if(__dec_obj175) { __dec_obj175 = come_decrement_ref_count(__dec_obj175, ((struct sNode*)__dec_obj175)->finalize, ((struct sNode*)__dec_obj175)->_protocol_obj, 0,0,0); }
                                    if(right_value385 && right_value385 != __result_obj__) { right_value385 = come_decrement_ref_count(right_value385, ((struct sNode*)right_value385)->finalize, ((struct sNode*)right_value385)->_protocol_obj, 1, 0, 0); } 
                                }
                                if(_if_conditional328=self!=((void*)0)&&self->mRight!=((void*)0),                                _if_conditional328) {
                                    __dec_obj176=result_248->mRight;
                                    result_248->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value386=sNode_clone(self->mRight))));
                                    if(__dec_obj176) { __dec_obj176 = come_decrement_ref_count(__dec_obj176, ((struct sNode*)__dec_obj176)->finalize, ((struct sNode*)__dec_obj176)->_protocol_obj, 0,0,0); }
                                    if(right_value386 && right_value386 != __result_obj__) { right_value386 = come_decrement_ref_count(right_value386, ((struct sNode*)right_value386)->finalize, ((struct sNode*)right_value386)->_protocol_obj, 1, 0, 0); } 
                                }
                                if(_if_conditional329=self!=((void*)0),                                _if_conditional329) {
                                    result_248->mQuote=self->mQuote;
                                }
                                if(_if_conditional330=self!=((void*)0),                                _if_conditional330) {
                                    result_248->sline=self->sline;
                                }
                                if(_if_conditional331=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional331) {
                                    __dec_obj177=result_248->sname;
                                    result_248->sname=(char*)come_increment_ref_count(((char*)(right_value387=string_clone(self->sname))));
                                    if(__dec_obj177) { __dec_obj177 = come_decrement_ref_count(__dec_obj177, (void*)0, (void*)0, 0,0,0); }
                                    if(right_value387 && right_value387 != __result_obj__) { right_value387 = come_decrement_ref_count(right_value387, (void*)0, (void*)0, 1, 0, 0); }
                                }
                                __result261__ = __result_obj__ = result_248;
                                if(result_248) { come_call_finalizer(sDivNode_finalize,result_248, (void*)0, (void*)0, 0, 0, 1, 0); }
                                return __result261__;
                                if(result_248) { come_call_finalizer(sDivNode_finalize,result_248, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sModNode_finalize(struct sModNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional333;
_Bool _if_conditional334;
_Bool _if_conditional335;
memset(&__result_obj__, 0, sizeof(void*));
                                    if(_if_conditional333=self!=((void*)0)&&self->mLeft!=((void*)0),                                    _if_conditional333) {
                                        if(self->mLeft) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0); } 
                                    }
                                    if(_if_conditional334=self!=((void*)0)&&self->mRight!=((void*)0),                                    _if_conditional334) {
                                        if(self->mRight) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0); } 
                                    }
                                    if(_if_conditional335=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional335) {
                                        if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                                    }
}

static struct sModNode* sModNode_clone(struct sModNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional336;
struct sModNode* __result263__;
void* right_value392;
struct sModNode* result_250;
_Bool _if_conditional337;
void* right_value393;
struct sNode* __dec_obj178;
_Bool _if_conditional338;
void* right_value394;
struct sNode* __dec_obj179;
_Bool _if_conditional339;
_Bool _if_conditional340;
_Bool _if_conditional341;
void* right_value395;
char* __dec_obj180;
struct sModNode* __result264__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_250, 0, sizeof(struct sModNode*));
                                    if(_if_conditional336=self==(void*)0,                                    _if_conditional336) {
                                        __result263__ = __result_obj__ = (void*)0;
                                        return __result263__;
                                    }
                                    result_250=(struct sModNode*)come_increment_ref_count(((struct sModNode*)(right_value392=(struct sModNode*)come_calloc(1, sizeof(struct sModNode)*(1), "sModNode_clone", 3))));
                                    if(right_value392 && right_value392 != __result_obj__) { come_call_finalizer(sModNode_finalize,right_value392, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    if(_if_conditional337=self!=((void*)0)&&self->mLeft!=((void*)0),                                    _if_conditional337) {
                                        __dec_obj178=result_250->mLeft;
                                        result_250->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value393=sNode_clone(self->mLeft))));
                                        if(__dec_obj178) { __dec_obj178 = come_decrement_ref_count(__dec_obj178, ((struct sNode*)__dec_obj178)->finalize, ((struct sNode*)__dec_obj178)->_protocol_obj, 0,0,0); }
                                        if(right_value393 && right_value393 != __result_obj__) { right_value393 = come_decrement_ref_count(right_value393, ((struct sNode*)right_value393)->finalize, ((struct sNode*)right_value393)->_protocol_obj, 1, 0, 0); } 
                                    }
                                    if(_if_conditional338=self!=((void*)0)&&self->mRight!=((void*)0),                                    _if_conditional338) {
                                        __dec_obj179=result_250->mRight;
                                        result_250->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value394=sNode_clone(self->mRight))));
                                        if(__dec_obj179) { __dec_obj179 = come_decrement_ref_count(__dec_obj179, ((struct sNode*)__dec_obj179)->finalize, ((struct sNode*)__dec_obj179)->_protocol_obj, 0,0,0); }
                                        if(right_value394 && right_value394 != __result_obj__) { right_value394 = come_decrement_ref_count(right_value394, ((struct sNode*)right_value394)->finalize, ((struct sNode*)right_value394)->_protocol_obj, 1, 0, 0); } 
                                    }
                                    if(_if_conditional339=self!=((void*)0),                                    _if_conditional339) {
                                        result_250->mQuote=self->mQuote;
                                    }
                                    if(_if_conditional340=self!=((void*)0),                                    _if_conditional340) {
                                        result_250->sline=self->sline;
                                    }
                                    if(_if_conditional341=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional341) {
                                        __dec_obj180=result_250->sname;
                                        result_250->sname=(char*)come_increment_ref_count(((char*)(right_value395=string_clone(self->sname))));
                                        if(__dec_obj180) { __dec_obj180 = come_decrement_ref_count(__dec_obj180, (void*)0, (void*)0, 0,0,0); }
                                        if(right_value395 && right_value395 != __result_obj__) { right_value395 = come_decrement_ref_count(right_value395, (void*)0, (void*)0, 1, 0, 0); }
                                    }
                                    __result264__ = __result_obj__ = result_250;
                                    if(result_250) { come_call_finalizer(sModNode_finalize,result_250, (void*)0, (void*)0, 0, 0, 1, 0); }
                                    return __result264__;
                                    if(result_250) { come_call_finalizer(sModNode_finalize,result_250, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sNode* add_exp(struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value397;
struct sNode* node_251;
_Bool _while_condtional11;
_Bool _if_conditional342;
void* right_value398;
struct sNode* right_252;
void* right_value399;
void* right_value400;
struct sNode* _inf_value9;
struct sAddNode* _inf_obj_value9;
void* right_value405;
struct sNode* __result269__;
_Bool _if_conditional352;
void* right_value406;
struct sNode* right_254;
void* right_value407;
void* right_value408;
struct sNode* _inf_value10;
struct sSubNode* _inf_obj_value10;
void* right_value413;
struct sNode* __result272__;
_Bool _if_conditional362;
void* right_value414;
struct sNode* right_256;
void* right_value415;
void* right_value416;
struct sNode* _inf_value11;
struct sAddNode* _inf_obj_value11;
void* right_value421;
struct sNode* __result275__;
_Bool _if_conditional372;
void* right_value422;
struct sNode* right_258;
void* right_value423;
void* right_value424;
struct sNode* _inf_value12;
struct sSubNode* _inf_obj_value12;
void* right_value429;
struct sNode* __result278__;
struct sNode* __result279__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&node_251, 0, sizeof(struct sNode*));
memset(&right_252, 0, sizeof(struct sNode*));
memset(&right_254, 0, sizeof(struct sNode*));
memset(&right_256, 0, sizeof(struct sNode*));
memset(&right_258, 0, sizeof(struct sNode*));
    node_251=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value397=mult_exp(info))));
    if(right_value397 && right_value397 != __result_obj__) { right_value397 = come_decrement_ref_count(right_value397, ((struct sNode*)right_value397)->finalize, ((struct sNode*)right_value397)->_protocol_obj, 1, 0, 0); } 
    parse_sharp_v5(info);
    while(_while_condtional11=*info->p,    _while_condtional11) {
        if(_if_conditional342=*info->p==43&&*(info->p+1)!=61&&*(info->p+1)!=43,        _if_conditional342) {
            info->p++;
            skip_spaces_and_lf(info);
            right_252=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value398=add_exp(info))));
            if(right_value398 && right_value398 != __result_obj__) { right_value398 = come_decrement_ref_count(right_value398, ((struct sNode*)right_value398)->finalize, ((struct sNode*)right_value398)->_protocol_obj, 1, 0, 0); } 
            _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2270);
            _inf_obj_value9=come_increment_ref_count(((struct sAddNode*)(right_value400=sAddNode_initialize((struct sAddNode*)come_increment_ref_count(((struct sAddNode*)(right_value399=(struct sAddNode*)come_calloc(1, sizeof(struct sAddNode)*(1), "13op.c", 2270)))),(struct sNode*)come_increment_ref_count(node_251),(struct sNode*)come_increment_ref_count(right_252),(_Bool)0,info))));
            _inf_value9->_protocol_obj=_inf_obj_value9;
            _inf_value9->finalize=(void*)sAddNode_finalize;
            _inf_value9->clone=(void*)sAddNode_clone;
            _inf_value9->compile=(void*)sAddNode_compile;
            _inf_value9->sline=(void*)sAddNode_sline;
            _inf_value9->sname=(void*)sAddNode_sname;
            _inf_value9->terminated=(void*)sAddNode_terminated;
            _inf_value9->kind=(void*)sAddNode_kind;
            __result269__ = __result_obj__ = ((struct sNode*)(right_value405=_inf_value9));
            if(right_252) { right_252 = come_decrement_ref_count(right_252, ((struct sNode*)right_252)->finalize, ((struct sNode*)right_252)->_protocol_obj, 0, 0, 0); } 
            if(node_251) { node_251 = come_decrement_ref_count(node_251, ((struct sNode*)node_251)->finalize, ((struct sNode*)node_251)->_protocol_obj, 0, 0, 0); } 
            if(right_value399 && right_value399 != __result_obj__) { come_call_finalizer(sAddNode_finalize,right_value399, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value400 && right_value400 != __result_obj__) { come_call_finalizer(sAddNode_finalize,right_value400, (void*)0, (void*)0, 0, 1, 0, 0); }
            return __result269__;
            if(right_252) { right_252 = come_decrement_ref_count(right_252, ((struct sNode*)right_252)->finalize, ((struct sNode*)right_252)->_protocol_obj, 0, 0, 0); } 
        }
        else {
            if(_if_conditional352=*info->p==45&&*(info->p+1)!=61&&*(info->p+1)!=45&&*(info->p+1)!=62,            _if_conditional352) {
                info->p++;
                skip_spaces_and_lf(info);
                right_254=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value406=add_exp(info))));
                if(right_value406 && right_value406 != __result_obj__) { right_value406 = come_decrement_ref_count(right_value406, ((struct sNode*)right_value406)->finalize, ((struct sNode*)right_value406)->_protocol_obj, 1, 0, 0); } 
                _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2279);
                _inf_obj_value10=come_increment_ref_count(((struct sSubNode*)(right_value408=sSubNode_initialize((struct sSubNode*)come_increment_ref_count(((struct sSubNode*)(right_value407=(struct sSubNode*)come_calloc(1, sizeof(struct sSubNode)*(1), "13op.c", 2279)))),(struct sNode*)come_increment_ref_count(node_251),(struct sNode*)come_increment_ref_count(right_254),(_Bool)0,info))));
                _inf_value10->_protocol_obj=_inf_obj_value10;
                _inf_value10->finalize=(void*)sSubNode_finalize;
                _inf_value10->clone=(void*)sSubNode_clone;
                _inf_value10->compile=(void*)sSubNode_compile;
                _inf_value10->sline=(void*)sSubNode_sline;
                _inf_value10->sname=(void*)sSubNode_sname;
                _inf_value10->terminated=(void*)sSubNode_terminated;
                _inf_value10->kind=(void*)sSubNode_kind;
                __result272__ = __result_obj__ = ((struct sNode*)(right_value413=_inf_value10));
                if(right_254) { right_254 = come_decrement_ref_count(right_254, ((struct sNode*)right_254)->finalize, ((struct sNode*)right_254)->_protocol_obj, 0, 0, 0); } 
                if(node_251) { node_251 = come_decrement_ref_count(node_251, ((struct sNode*)node_251)->finalize, ((struct sNode*)node_251)->_protocol_obj, 0, 0, 0); } 
                if(right_value407 && right_value407 != __result_obj__) { come_call_finalizer(sSubNode_finalize,right_value407, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value408 && right_value408 != __result_obj__) { come_call_finalizer(sSubNode_finalize,right_value408, (void*)0, (void*)0, 0, 1, 0, 0); }
                return __result272__;
                if(right_254) { right_254 = come_decrement_ref_count(right_254, ((struct sNode*)right_254)->finalize, ((struct sNode*)right_254)->_protocol_obj, 0, 0, 0); } 
            }
            else {
                if(_if_conditional362=*info->p==92&&*(info->p+1)==43&&*(info->p+2)!=61&&*(info->p+2)!=43,                _if_conditional362) {
                    info->p+=2;
                    skip_spaces_and_lf(info);
                    right_256=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value414=add_exp(info))));
                    if(right_value414 && right_value414 != __result_obj__) { right_value414 = come_decrement_ref_count(right_value414, ((struct sNode*)right_value414)->finalize, ((struct sNode*)right_value414)->_protocol_obj, 1, 0, 0); } 
                    _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2288);
                    _inf_obj_value11=come_increment_ref_count(((struct sAddNode*)(right_value416=sAddNode_initialize((struct sAddNode*)come_increment_ref_count(((struct sAddNode*)(right_value415=(struct sAddNode*)come_calloc(1, sizeof(struct sAddNode)*(1), "13op.c", 2288)))),(struct sNode*)come_increment_ref_count(node_251),(struct sNode*)come_increment_ref_count(right_256),(_Bool)1,info))));
                    _inf_value11->_protocol_obj=_inf_obj_value11;
                    _inf_value11->finalize=(void*)sAddNode_finalize;
                    _inf_value11->clone=(void*)sAddNode_clone;
                    _inf_value11->compile=(void*)sAddNode_compile;
                    _inf_value11->sline=(void*)sAddNode_sline;
                    _inf_value11->sname=(void*)sAddNode_sname;
                    _inf_value11->terminated=(void*)sAddNode_terminated;
                    _inf_value11->kind=(void*)sAddNode_kind;
                    __result275__ = __result_obj__ = ((struct sNode*)(right_value421=_inf_value11));
                    if(right_256) { right_256 = come_decrement_ref_count(right_256, ((struct sNode*)right_256)->finalize, ((struct sNode*)right_256)->_protocol_obj, 0, 0, 0); } 
                    if(node_251) { node_251 = come_decrement_ref_count(node_251, ((struct sNode*)node_251)->finalize, ((struct sNode*)node_251)->_protocol_obj, 0, 0, 0); } 
                    if(right_value415 && right_value415 != __result_obj__) { come_call_finalizer(sAddNode_finalize,right_value415, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(right_value416 && right_value416 != __result_obj__) { come_call_finalizer(sAddNode_finalize,right_value416, (void*)0, (void*)0, 0, 1, 0, 0); }
                    return __result275__;
                    if(right_256) { right_256 = come_decrement_ref_count(right_256, ((struct sNode*)right_256)->finalize, ((struct sNode*)right_256)->_protocol_obj, 0, 0, 0); } 
                }
                else {
                    if(_if_conditional372=*info->p==92&&*(info->p+1)==45&&*(info->p+2)!=61&&*(info->p+2)!=45&&*(info->p+2)!=62,                    _if_conditional372) {
                        info->p+=2;
                        skip_spaces_and_lf(info);
                        right_258=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value422=add_exp(info))));
                        if(right_value422 && right_value422 != __result_obj__) { right_value422 = come_decrement_ref_count(right_value422, ((struct sNode*)right_value422)->finalize, ((struct sNode*)right_value422)->_protocol_obj, 1, 0, 0); } 
                        _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2297);
                        _inf_obj_value12=come_increment_ref_count(((struct sSubNode*)(right_value424=sSubNode_initialize((struct sSubNode*)come_increment_ref_count(((struct sSubNode*)(right_value423=(struct sSubNode*)come_calloc(1, sizeof(struct sSubNode)*(1), "13op.c", 2297)))),(struct sNode*)come_increment_ref_count(node_251),(struct sNode*)come_increment_ref_count(right_258),(_Bool)1,info))));
                        _inf_value12->_protocol_obj=_inf_obj_value12;
                        _inf_value12->finalize=(void*)sSubNode_finalize;
                        _inf_value12->clone=(void*)sSubNode_clone;
                        _inf_value12->compile=(void*)sSubNode_compile;
                        _inf_value12->sline=(void*)sSubNode_sline;
                        _inf_value12->sname=(void*)sSubNode_sname;
                        _inf_value12->terminated=(void*)sSubNode_terminated;
                        _inf_value12->kind=(void*)sSubNode_kind;
                        __result278__ = __result_obj__ = ((struct sNode*)(right_value429=_inf_value12));
                        if(right_258) { right_258 = come_decrement_ref_count(right_258, ((struct sNode*)right_258)->finalize, ((struct sNode*)right_258)->_protocol_obj, 0, 0, 0); } 
                        if(node_251) { node_251 = come_decrement_ref_count(node_251, ((struct sNode*)node_251)->finalize, ((struct sNode*)node_251)->_protocol_obj, 0, 0, 0); } 
                        if(right_value423 && right_value423 != __result_obj__) { come_call_finalizer(sSubNode_finalize,right_value423, (void*)0, (void*)0, 0, 1, 0, 0); }
                        if(right_value424 && right_value424 != __result_obj__) { come_call_finalizer(sSubNode_finalize,right_value424, (void*)0, (void*)0, 0, 1, 0, 0); }
                        return __result278__;
                        if(right_258) { right_258 = come_decrement_ref_count(right_258, ((struct sNode*)right_258)->finalize, ((struct sNode*)right_258)->_protocol_obj, 0, 0, 0); } 
                    }
                    else {
                        break;
                    }
                }
            }
        }
    }
    parse_sharp_v5(info);
    __result279__ = __result_obj__ = node_251;
    if(node_251) { node_251 = come_decrement_ref_count(node_251, ((struct sNode*)node_251)->finalize, ((struct sNode*)node_251)->_protocol_obj, 0, 1, 0); } 
    return __result279__;
    if(node_251) { node_251 = come_decrement_ref_count(node_251, ((struct sNode*)node_251)->finalize, ((struct sNode*)node_251)->_protocol_obj, 0, 0, 0); } 
}

static void sAddNode_finalize(struct sAddNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional363;
_Bool _if_conditional364;
_Bool _if_conditional365;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional363=self!=((void*)0)&&self->mLeft!=((void*)0),                        _if_conditional363) {
                            if(self->mLeft) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0); } 
                        }
                        if(_if_conditional364=self!=((void*)0)&&self->mRight!=((void*)0),                        _if_conditional364) {
                            if(self->mRight) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0); } 
                        }
                        if(_if_conditional365=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional365) {
                            if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                        }
}

static struct sAddNode* sAddNode_clone(struct sAddNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional366;
struct sAddNode* __result273__;
void* right_value417;
struct sAddNode* result_257;
_Bool _if_conditional367;
void* right_value418;
struct sNode* __dec_obj187;
_Bool _if_conditional368;
void* right_value419;
struct sNode* __dec_obj188;
_Bool _if_conditional369;
_Bool _if_conditional370;
_Bool _if_conditional371;
void* right_value420;
char* __dec_obj189;
struct sAddNode* __result274__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_257, 0, sizeof(struct sAddNode*));
                        if(_if_conditional366=self==(void*)0,                        _if_conditional366) {
                            __result273__ = __result_obj__ = (void*)0;
                            return __result273__;
                        }
                        result_257=(struct sAddNode*)come_increment_ref_count(((struct sAddNode*)(right_value417=(struct sAddNode*)come_calloc(1, sizeof(struct sAddNode)*(1), "sAddNode_clone", 3))));
                        if(right_value417 && right_value417 != __result_obj__) { come_call_finalizer(sAddNode_finalize,right_value417, (void*)0, (void*)0, 0, 1, 0, 0); }
                        if(_if_conditional367=self!=((void*)0)&&self->mLeft!=((void*)0),                        _if_conditional367) {
                            __dec_obj187=result_257->mLeft;
                            result_257->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value418=sNode_clone(self->mLeft))));
                            if(__dec_obj187) { __dec_obj187 = come_decrement_ref_count(__dec_obj187, ((struct sNode*)__dec_obj187)->finalize, ((struct sNode*)__dec_obj187)->_protocol_obj, 0,0,0); }
                            if(right_value418 && right_value418 != __result_obj__) { right_value418 = come_decrement_ref_count(right_value418, ((struct sNode*)right_value418)->finalize, ((struct sNode*)right_value418)->_protocol_obj, 1, 0, 0); } 
                        }
                        if(_if_conditional368=self!=((void*)0)&&self->mRight!=((void*)0),                        _if_conditional368) {
                            __dec_obj188=result_257->mRight;
                            result_257->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value419=sNode_clone(self->mRight))));
                            if(__dec_obj188) { __dec_obj188 = come_decrement_ref_count(__dec_obj188, ((struct sNode*)__dec_obj188)->finalize, ((struct sNode*)__dec_obj188)->_protocol_obj, 0,0,0); }
                            if(right_value419 && right_value419 != __result_obj__) { right_value419 = come_decrement_ref_count(right_value419, ((struct sNode*)right_value419)->finalize, ((struct sNode*)right_value419)->_protocol_obj, 1, 0, 0); } 
                        }
                        if(_if_conditional369=self!=((void*)0),                        _if_conditional369) {
                            result_257->mQuote=self->mQuote;
                        }
                        if(_if_conditional370=self!=((void*)0),                        _if_conditional370) {
                            result_257->sline=self->sline;
                        }
                        if(_if_conditional371=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional371) {
                            __dec_obj189=result_257->sname;
                            result_257->sname=(char*)come_increment_ref_count(((char*)(right_value420=string_clone(self->sname))));
                            if(__dec_obj189) { __dec_obj189 = come_decrement_ref_count(__dec_obj189, (void*)0, (void*)0, 0,0,0); }
                            if(right_value420 && right_value420 != __result_obj__) { right_value420 = come_decrement_ref_count(right_value420, (void*)0, (void*)0, 1, 0, 0); }
                        }
                        __result274__ = __result_obj__ = result_257;
                        if(result_257) { come_call_finalizer(sAddNode_finalize,result_257, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result274__;
                        if(result_257) { come_call_finalizer(sAddNode_finalize,result_257, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sSubNode_finalize(struct sSubNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional373;
_Bool _if_conditional374;
_Bool _if_conditional375;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional373=self!=((void*)0)&&self->mLeft!=((void*)0),                            _if_conditional373) {
                                if(self->mLeft) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0); } 
                            }
                            if(_if_conditional374=self!=((void*)0)&&self->mRight!=((void*)0),                            _if_conditional374) {
                                if(self->mRight) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0); } 
                            }
                            if(_if_conditional375=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional375) {
                                if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                            }
}

static struct sSubNode* sSubNode_clone(struct sSubNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional376;
struct sSubNode* __result276__;
void* right_value425;
struct sSubNode* result_259;
_Bool _if_conditional377;
void* right_value426;
struct sNode* __dec_obj190;
_Bool _if_conditional378;
void* right_value427;
struct sNode* __dec_obj191;
_Bool _if_conditional379;
_Bool _if_conditional380;
_Bool _if_conditional381;
void* right_value428;
char* __dec_obj192;
struct sSubNode* __result277__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_259, 0, sizeof(struct sSubNode*));
                            if(_if_conditional376=self==(void*)0,                            _if_conditional376) {
                                __result276__ = __result_obj__ = (void*)0;
                                return __result276__;
                            }
                            result_259=(struct sSubNode*)come_increment_ref_count(((struct sSubNode*)(right_value425=(struct sSubNode*)come_calloc(1, sizeof(struct sSubNode)*(1), "sSubNode_clone", 3))));
                            if(right_value425 && right_value425 != __result_obj__) { come_call_finalizer(sSubNode_finalize,right_value425, (void*)0, (void*)0, 0, 1, 0, 0); }
                            if(_if_conditional377=self!=((void*)0)&&self->mLeft!=((void*)0),                            _if_conditional377) {
                                __dec_obj190=result_259->mLeft;
                                result_259->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value426=sNode_clone(self->mLeft))));
                                if(__dec_obj190) { __dec_obj190 = come_decrement_ref_count(__dec_obj190, ((struct sNode*)__dec_obj190)->finalize, ((struct sNode*)__dec_obj190)->_protocol_obj, 0,0,0); }
                                if(right_value426 && right_value426 != __result_obj__) { right_value426 = come_decrement_ref_count(right_value426, ((struct sNode*)right_value426)->finalize, ((struct sNode*)right_value426)->_protocol_obj, 1, 0, 0); } 
                            }
                            if(_if_conditional378=self!=((void*)0)&&self->mRight!=((void*)0),                            _if_conditional378) {
                                __dec_obj191=result_259->mRight;
                                result_259->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value427=sNode_clone(self->mRight))));
                                if(__dec_obj191) { __dec_obj191 = come_decrement_ref_count(__dec_obj191, ((struct sNode*)__dec_obj191)->finalize, ((struct sNode*)__dec_obj191)->_protocol_obj, 0,0,0); }
                                if(right_value427 && right_value427 != __result_obj__) { right_value427 = come_decrement_ref_count(right_value427, ((struct sNode*)right_value427)->finalize, ((struct sNode*)right_value427)->_protocol_obj, 1, 0, 0); } 
                            }
                            if(_if_conditional379=self!=((void*)0),                            _if_conditional379) {
                                result_259->mQuote=self->mQuote;
                            }
                            if(_if_conditional380=self!=((void*)0),                            _if_conditional380) {
                                result_259->sline=self->sline;
                            }
                            if(_if_conditional381=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional381) {
                                __dec_obj192=result_259->sname;
                                result_259->sname=(char*)come_increment_ref_count(((char*)(right_value428=string_clone(self->sname))));
                                if(__dec_obj192) { __dec_obj192 = come_decrement_ref_count(__dec_obj192, (void*)0, (void*)0, 0,0,0); }
                                if(right_value428 && right_value428 != __result_obj__) { right_value428 = come_decrement_ref_count(right_value428, (void*)0, (void*)0, 1, 0, 0); }
                            }
                            __result277__ = __result_obj__ = result_259;
                            if(result_259) { come_call_finalizer(sSubNode_finalize,result_259, (void*)0, (void*)0, 0, 0, 1, 0); }
                            return __result277__;
                            if(result_259) { come_call_finalizer(sSubNode_finalize,result_259, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sNode* shift_exp(struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value430;
struct sNode* node_260;
_Bool _while_condtional12;
_Bool _if_conditional382;
void* right_value431;
struct sNode* right_261;
void* right_value432;
void* right_value433;
struct sNode* _inf_value13;
struct sLShiftNode* _inf_obj_value13;
void* right_value438;
struct sNode* __result282__;
_Bool _if_conditional392;
void* right_value439;
struct sNode* right_263;
void* right_value440;
void* right_value441;
struct sNode* _inf_value14;
struct sRShiftNode* _inf_obj_value14;
void* right_value446;
struct sNode* __result285__;
_Bool _if_conditional402;
void* right_value447;
struct sNode* right_265;
void* right_value448;
void* right_value449;
struct sNode* _inf_value15;
struct sLShiftNode* _inf_obj_value15;
void* right_value454;
struct sNode* __result288__;
_Bool _if_conditional412;
void* right_value455;
struct sNode* right_267;
void* right_value456;
void* right_value457;
struct sNode* _inf_value16;
struct sRShiftNode* _inf_obj_value16;
void* right_value462;
struct sNode* __result291__;
struct sNode* __result292__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&node_260, 0, sizeof(struct sNode*));
memset(&right_261, 0, sizeof(struct sNode*));
memset(&right_263, 0, sizeof(struct sNode*));
memset(&right_265, 0, sizeof(struct sNode*));
memset(&right_267, 0, sizeof(struct sNode*));
    parse_sharp_v5(info);
    node_260=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value430=add_exp(info))));
    if(right_value430 && right_value430 != __result_obj__) { right_value430 = come_decrement_ref_count(right_value430, ((struct sNode*)right_value430)->finalize, ((struct sNode*)right_value430)->_protocol_obj, 1, 0, 0); } 
    parse_sharp_v5(info);
    while(_while_condtional12=*info->p,    _while_condtional12) {
        if(_if_conditional382=*info->p==60&&*(info->p+1)==60&&*(info->p+2)!=61,        _if_conditional382) {
            info->p+=2;
            skip_spaces_and_lf(info);
            right_261=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value431=shift_exp(info))));
            if(right_value431 && right_value431 != __result_obj__) { right_value431 = come_decrement_ref_count(right_value431, ((struct sNode*)right_value431)->finalize, ((struct sNode*)right_value431)->_protocol_obj, 1, 0, 0); } 
            _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2324);
            _inf_obj_value13=come_increment_ref_count(((struct sLShiftNode*)(right_value433=sLShiftNode_initialize((struct sLShiftNode*)come_increment_ref_count(((struct sLShiftNode*)(right_value432=(struct sLShiftNode*)come_calloc(1, sizeof(struct sLShiftNode)*(1), "13op.c", 2324)))),(struct sNode*)come_increment_ref_count(node_260),(struct sNode*)come_increment_ref_count(right_261),(_Bool)0,info))));
            _inf_value13->_protocol_obj=_inf_obj_value13;
            _inf_value13->finalize=(void*)sLShiftNode_finalize;
            _inf_value13->clone=(void*)sLShiftNode_clone;
            _inf_value13->compile=(void*)sLShiftNode_compile;
            _inf_value13->sline=(void*)sLShiftNode_sline;
            _inf_value13->sname=(void*)sLShiftNode_sname;
            _inf_value13->terminated=(void*)sLShiftNode_terminated;
            _inf_value13->kind=(void*)sLShiftNode_kind;
            __result282__ = __result_obj__ = ((struct sNode*)(right_value438=_inf_value13));
            if(right_261) { right_261 = come_decrement_ref_count(right_261, ((struct sNode*)right_261)->finalize, ((struct sNode*)right_261)->_protocol_obj, 0, 0, 0); } 
            if(node_260) { node_260 = come_decrement_ref_count(node_260, ((struct sNode*)node_260)->finalize, ((struct sNode*)node_260)->_protocol_obj, 0, 0, 0); } 
            if(right_value432 && right_value432 != __result_obj__) { come_call_finalizer(sLShiftNode_finalize,right_value432, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value433 && right_value433 != __result_obj__) { come_call_finalizer(sLShiftNode_finalize,right_value433, (void*)0, (void*)0, 0, 1, 0, 0); }
            return __result282__;
            if(right_261) { right_261 = come_decrement_ref_count(right_261, ((struct sNode*)right_261)->finalize, ((struct sNode*)right_261)->_protocol_obj, 0, 0, 0); } 
        }
        else {
            if(_if_conditional392=*info->p==62&&*(info->p+1)==62&&*(info->p+2)!=61&&*(info->p+2)!=62,            _if_conditional392) {
                info->p+=2;
                skip_spaces_and_lf(info);
                right_263=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value439=shift_exp(info))));
                if(right_value439 && right_value439 != __result_obj__) { right_value439 = come_decrement_ref_count(right_value439, ((struct sNode*)right_value439)->finalize, ((struct sNode*)right_value439)->_protocol_obj, 1, 0, 0); } 
                _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2332);
                _inf_obj_value14=come_increment_ref_count(((struct sRShiftNode*)(right_value441=sRShiftNode_initialize((struct sRShiftNode*)come_increment_ref_count(((struct sRShiftNode*)(right_value440=(struct sRShiftNode*)come_calloc(1, sizeof(struct sRShiftNode)*(1), "13op.c", 2332)))),(struct sNode*)come_increment_ref_count(node_260),(struct sNode*)come_increment_ref_count(right_263),(_Bool)0,info))));
                _inf_value14->_protocol_obj=_inf_obj_value14;
                _inf_value14->finalize=(void*)sRShiftNode_finalize;
                _inf_value14->clone=(void*)sRShiftNode_clone;
                _inf_value14->compile=(void*)sRShiftNode_compile;
                _inf_value14->sline=(void*)sRShiftNode_sline;
                _inf_value14->sname=(void*)sRShiftNode_sname;
                _inf_value14->terminated=(void*)sRShiftNode_terminated;
                _inf_value14->kind=(void*)sRShiftNode_kind;
                __result285__ = __result_obj__ = ((struct sNode*)(right_value446=_inf_value14));
                if(right_263) { right_263 = come_decrement_ref_count(right_263, ((struct sNode*)right_263)->finalize, ((struct sNode*)right_263)->_protocol_obj, 0, 0, 0); } 
                if(node_260) { node_260 = come_decrement_ref_count(node_260, ((struct sNode*)node_260)->finalize, ((struct sNode*)node_260)->_protocol_obj, 0, 0, 0); } 
                if(right_value440 && right_value440 != __result_obj__) { come_call_finalizer(sRShiftNode_finalize,right_value440, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value441 && right_value441 != __result_obj__) { come_call_finalizer(sRShiftNode_finalize,right_value441, (void*)0, (void*)0, 0, 1, 0, 0); }
                return __result285__;
                if(right_263) { right_263 = come_decrement_ref_count(right_263, ((struct sNode*)right_263)->finalize, ((struct sNode*)right_263)->_protocol_obj, 0, 0, 0); } 
            }
            else {
                if(_if_conditional402=*info->p==92&&*(info->p+1)==60&&*(info->p+2)==60&&*(info->p+3)!=61,                _if_conditional402) {
                    info->p+=3;
                    skip_spaces_and_lf(info);
                    right_265=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value447=shift_exp(info))));
                    if(right_value447 && right_value447 != __result_obj__) { right_value447 = come_decrement_ref_count(right_value447, ((struct sNode*)right_value447)->finalize, ((struct sNode*)right_value447)->_protocol_obj, 1, 0, 0); } 
                    _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2340);
                    _inf_obj_value15=come_increment_ref_count(((struct sLShiftNode*)(right_value449=sLShiftNode_initialize((struct sLShiftNode*)come_increment_ref_count(((struct sLShiftNode*)(right_value448=(struct sLShiftNode*)come_calloc(1, sizeof(struct sLShiftNode)*(1), "13op.c", 2340)))),(struct sNode*)come_increment_ref_count(node_260),(struct sNode*)come_increment_ref_count(right_265),(_Bool)1,info))));
                    _inf_value15->_protocol_obj=_inf_obj_value15;
                    _inf_value15->finalize=(void*)sLShiftNode_finalize;
                    _inf_value15->clone=(void*)sLShiftNode_clone;
                    _inf_value15->compile=(void*)sLShiftNode_compile;
                    _inf_value15->sline=(void*)sLShiftNode_sline;
                    _inf_value15->sname=(void*)sLShiftNode_sname;
                    _inf_value15->terminated=(void*)sLShiftNode_terminated;
                    _inf_value15->kind=(void*)sLShiftNode_kind;
                    __result288__ = __result_obj__ = ((struct sNode*)(right_value454=_inf_value15));
                    if(right_265) { right_265 = come_decrement_ref_count(right_265, ((struct sNode*)right_265)->finalize, ((struct sNode*)right_265)->_protocol_obj, 0, 0, 0); } 
                    if(node_260) { node_260 = come_decrement_ref_count(node_260, ((struct sNode*)node_260)->finalize, ((struct sNode*)node_260)->_protocol_obj, 0, 0, 0); } 
                    if(right_value448 && right_value448 != __result_obj__) { come_call_finalizer(sLShiftNode_finalize,right_value448, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(right_value449 && right_value449 != __result_obj__) { come_call_finalizer(sLShiftNode_finalize,right_value449, (void*)0, (void*)0, 0, 1, 0, 0); }
                    return __result288__;
                    if(right_265) { right_265 = come_decrement_ref_count(right_265, ((struct sNode*)right_265)->finalize, ((struct sNode*)right_265)->_protocol_obj, 0, 0, 0); } 
                }
                else {
                    if(_if_conditional412=*info->p==92&&*(info->p+1)==62&&*(info->p+2)==62&&*(info->p+3)!=61&&*(info->p+3)!=62,                    _if_conditional412) {
                        info->p+=3;
                        skip_spaces_and_lf(info);
                        right_267=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value455=shift_exp(info))));
                        if(right_value455 && right_value455 != __result_obj__) { right_value455 = come_decrement_ref_count(right_value455, ((struct sNode*)right_value455)->finalize, ((struct sNode*)right_value455)->_protocol_obj, 1, 0, 0); } 
                        _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2348);
                        _inf_obj_value16=come_increment_ref_count(((struct sRShiftNode*)(right_value457=sRShiftNode_initialize((struct sRShiftNode*)come_increment_ref_count(((struct sRShiftNode*)(right_value456=(struct sRShiftNode*)come_calloc(1, sizeof(struct sRShiftNode)*(1), "13op.c", 2348)))),(struct sNode*)come_increment_ref_count(node_260),(struct sNode*)come_increment_ref_count(right_267),(_Bool)1,info))));
                        _inf_value16->_protocol_obj=_inf_obj_value16;
                        _inf_value16->finalize=(void*)sRShiftNode_finalize;
                        _inf_value16->clone=(void*)sRShiftNode_clone;
                        _inf_value16->compile=(void*)sRShiftNode_compile;
                        _inf_value16->sline=(void*)sRShiftNode_sline;
                        _inf_value16->sname=(void*)sRShiftNode_sname;
                        _inf_value16->terminated=(void*)sRShiftNode_terminated;
                        _inf_value16->kind=(void*)sRShiftNode_kind;
                        __result291__ = __result_obj__ = ((struct sNode*)(right_value462=_inf_value16));
                        if(right_267) { right_267 = come_decrement_ref_count(right_267, ((struct sNode*)right_267)->finalize, ((struct sNode*)right_267)->_protocol_obj, 0, 0, 0); } 
                        if(node_260) { node_260 = come_decrement_ref_count(node_260, ((struct sNode*)node_260)->finalize, ((struct sNode*)node_260)->_protocol_obj, 0, 0, 0); } 
                        if(right_value456 && right_value456 != __result_obj__) { come_call_finalizer(sRShiftNode_finalize,right_value456, (void*)0, (void*)0, 0, 1, 0, 0); }
                        if(right_value457 && right_value457 != __result_obj__) { come_call_finalizer(sRShiftNode_finalize,right_value457, (void*)0, (void*)0, 0, 1, 0, 0); }
                        return __result291__;
                        if(right_267) { right_267 = come_decrement_ref_count(right_267, ((struct sNode*)right_267)->finalize, ((struct sNode*)right_267)->_protocol_obj, 0, 0, 0); } 
                    }
                    else {
                        break;
                    }
                }
            }
        }
    }
    parse_sharp_v5(info);
    __result292__ = __result_obj__ = node_260;
    if(node_260) { node_260 = come_decrement_ref_count(node_260, ((struct sNode*)node_260)->finalize, ((struct sNode*)node_260)->_protocol_obj, 0, 1, 0); } 
    return __result292__;
    if(node_260) { node_260 = come_decrement_ref_count(node_260, ((struct sNode*)node_260)->finalize, ((struct sNode*)node_260)->_protocol_obj, 0, 0, 0); } 
}

static void sLShiftNode_finalize(struct sLShiftNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional403;
_Bool _if_conditional404;
_Bool _if_conditional405;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional403=self!=((void*)0)&&self->mLeft!=((void*)0),                        _if_conditional403) {
                            if(self->mLeft) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0); } 
                        }
                        if(_if_conditional404=self!=((void*)0)&&self->mRight!=((void*)0),                        _if_conditional404) {
                            if(self->mRight) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0); } 
                        }
                        if(_if_conditional405=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional405) {
                            if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                        }
}

static struct sLShiftNode* sLShiftNode_clone(struct sLShiftNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional406;
struct sLShiftNode* __result286__;
void* right_value450;
struct sLShiftNode* result_266;
_Bool _if_conditional407;
void* right_value451;
struct sNode* __dec_obj199;
_Bool _if_conditional408;
void* right_value452;
struct sNode* __dec_obj200;
_Bool _if_conditional409;
_Bool _if_conditional410;
_Bool _if_conditional411;
void* right_value453;
char* __dec_obj201;
struct sLShiftNode* __result287__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_266, 0, sizeof(struct sLShiftNode*));
                        if(_if_conditional406=self==(void*)0,                        _if_conditional406) {
                            __result286__ = __result_obj__ = (void*)0;
                            return __result286__;
                        }
                        result_266=(struct sLShiftNode*)come_increment_ref_count(((struct sLShiftNode*)(right_value450=(struct sLShiftNode*)come_calloc(1, sizeof(struct sLShiftNode)*(1), "sLShiftNode_clone", 3))));
                        if(right_value450 && right_value450 != __result_obj__) { come_call_finalizer(sLShiftNode_finalize,right_value450, (void*)0, (void*)0, 0, 1, 0, 0); }
                        if(_if_conditional407=self!=((void*)0)&&self->mLeft!=((void*)0),                        _if_conditional407) {
                            __dec_obj199=result_266->mLeft;
                            result_266->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value451=sNode_clone(self->mLeft))));
                            if(__dec_obj199) { __dec_obj199 = come_decrement_ref_count(__dec_obj199, ((struct sNode*)__dec_obj199)->finalize, ((struct sNode*)__dec_obj199)->_protocol_obj, 0,0,0); }
                            if(right_value451 && right_value451 != __result_obj__) { right_value451 = come_decrement_ref_count(right_value451, ((struct sNode*)right_value451)->finalize, ((struct sNode*)right_value451)->_protocol_obj, 1, 0, 0); } 
                        }
                        if(_if_conditional408=self!=((void*)0)&&self->mRight!=((void*)0),                        _if_conditional408) {
                            __dec_obj200=result_266->mRight;
                            result_266->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value452=sNode_clone(self->mRight))));
                            if(__dec_obj200) { __dec_obj200 = come_decrement_ref_count(__dec_obj200, ((struct sNode*)__dec_obj200)->finalize, ((struct sNode*)__dec_obj200)->_protocol_obj, 0,0,0); }
                            if(right_value452 && right_value452 != __result_obj__) { right_value452 = come_decrement_ref_count(right_value452, ((struct sNode*)right_value452)->finalize, ((struct sNode*)right_value452)->_protocol_obj, 1, 0, 0); } 
                        }
                        if(_if_conditional409=self!=((void*)0),                        _if_conditional409) {
                            result_266->mQuote=self->mQuote;
                        }
                        if(_if_conditional410=self!=((void*)0),                        _if_conditional410) {
                            result_266->sline=self->sline;
                        }
                        if(_if_conditional411=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional411) {
                            __dec_obj201=result_266->sname;
                            result_266->sname=(char*)come_increment_ref_count(((char*)(right_value453=string_clone(self->sname))));
                            if(__dec_obj201) { __dec_obj201 = come_decrement_ref_count(__dec_obj201, (void*)0, (void*)0, 0,0,0); }
                            if(right_value453 && right_value453 != __result_obj__) { right_value453 = come_decrement_ref_count(right_value453, (void*)0, (void*)0, 1, 0, 0); }
                        }
                        __result287__ = __result_obj__ = result_266;
                        if(result_266) { come_call_finalizer(sLShiftNode_finalize,result_266, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result287__;
                        if(result_266) { come_call_finalizer(sLShiftNode_finalize,result_266, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sRShiftNode_finalize(struct sRShiftNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional413;
_Bool _if_conditional414;
_Bool _if_conditional415;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional413=self!=((void*)0)&&self->mLeft!=((void*)0),                            _if_conditional413) {
                                if(self->mLeft) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0); } 
                            }
                            if(_if_conditional414=self!=((void*)0)&&self->mRight!=((void*)0),                            _if_conditional414) {
                                if(self->mRight) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0); } 
                            }
                            if(_if_conditional415=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional415) {
                                if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                            }
}

static struct sRShiftNode* sRShiftNode_clone(struct sRShiftNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional416;
struct sRShiftNode* __result289__;
void* right_value458;
struct sRShiftNode* result_268;
_Bool _if_conditional417;
void* right_value459;
struct sNode* __dec_obj202;
_Bool _if_conditional418;
void* right_value460;
struct sNode* __dec_obj203;
_Bool _if_conditional419;
_Bool _if_conditional420;
_Bool _if_conditional421;
void* right_value461;
char* __dec_obj204;
struct sRShiftNode* __result290__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_268, 0, sizeof(struct sRShiftNode*));
                            if(_if_conditional416=self==(void*)0,                            _if_conditional416) {
                                __result289__ = __result_obj__ = (void*)0;
                                return __result289__;
                            }
                            result_268=(struct sRShiftNode*)come_increment_ref_count(((struct sRShiftNode*)(right_value458=(struct sRShiftNode*)come_calloc(1, sizeof(struct sRShiftNode)*(1), "sRShiftNode_clone", 3))));
                            if(right_value458 && right_value458 != __result_obj__) { come_call_finalizer(sRShiftNode_finalize,right_value458, (void*)0, (void*)0, 0, 1, 0, 0); }
                            if(_if_conditional417=self!=((void*)0)&&self->mLeft!=((void*)0),                            _if_conditional417) {
                                __dec_obj202=result_268->mLeft;
                                result_268->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value459=sNode_clone(self->mLeft))));
                                if(__dec_obj202) { __dec_obj202 = come_decrement_ref_count(__dec_obj202, ((struct sNode*)__dec_obj202)->finalize, ((struct sNode*)__dec_obj202)->_protocol_obj, 0,0,0); }
                                if(right_value459 && right_value459 != __result_obj__) { right_value459 = come_decrement_ref_count(right_value459, ((struct sNode*)right_value459)->finalize, ((struct sNode*)right_value459)->_protocol_obj, 1, 0, 0); } 
                            }
                            if(_if_conditional418=self!=((void*)0)&&self->mRight!=((void*)0),                            _if_conditional418) {
                                __dec_obj203=result_268->mRight;
                                result_268->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value460=sNode_clone(self->mRight))));
                                if(__dec_obj203) { __dec_obj203 = come_decrement_ref_count(__dec_obj203, ((struct sNode*)__dec_obj203)->finalize, ((struct sNode*)__dec_obj203)->_protocol_obj, 0,0,0); }
                                if(right_value460 && right_value460 != __result_obj__) { right_value460 = come_decrement_ref_count(right_value460, ((struct sNode*)right_value460)->finalize, ((struct sNode*)right_value460)->_protocol_obj, 1, 0, 0); } 
                            }
                            if(_if_conditional419=self!=((void*)0),                            _if_conditional419) {
                                result_268->mQuote=self->mQuote;
                            }
                            if(_if_conditional420=self!=((void*)0),                            _if_conditional420) {
                                result_268->sline=self->sline;
                            }
                            if(_if_conditional421=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional421) {
                                __dec_obj204=result_268->sname;
                                result_268->sname=(char*)come_increment_ref_count(((char*)(right_value461=string_clone(self->sname))));
                                if(__dec_obj204) { __dec_obj204 = come_decrement_ref_count(__dec_obj204, (void*)0, (void*)0, 0,0,0); }
                                if(right_value461 && right_value461 != __result_obj__) { right_value461 = come_decrement_ref_count(right_value461, (void*)0, (void*)0, 1, 0, 0); }
                            }
                            __result290__ = __result_obj__ = result_268;
                            if(result_268) { come_call_finalizer(sRShiftNode_finalize,result_268, (void*)0, (void*)0, 0, 0, 1, 0); }
                            return __result290__;
                            if(result_268) { come_call_finalizer(sRShiftNode_finalize,result_268, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sNode* comparison_exp(struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value463;
struct sNode* node_269;
_Bool _while_condtional13;
_Bool _if_conditional422;
void* right_value464;
struct sNode* right_270;
void* right_value465;
void* right_value466;
struct sNode* _inf_value17;
struct sGtEqNode* _inf_obj_value17;
void* right_value471;
struct sNode* __result295__;
_Bool _if_conditional432;
void* right_value472;
struct sNode* right_272;
void* right_value473;
void* right_value474;
struct sNode* _inf_value18;
struct sLtEqNode* _inf_obj_value18;
void* right_value479;
struct sNode* __result298__;
_Bool _if_conditional442;
void* right_value480;
struct sNode* right_274;
void* right_value481;
void* right_value482;
struct sNode* _inf_value19;
struct sGtNode* _inf_obj_value19;
void* right_value487;
struct sNode* __result301__;
_Bool _if_conditional452;
void* right_value488;
struct sNode* right_276;
void* right_value489;
void* right_value490;
struct sNode* _inf_value20;
struct sLtNode* _inf_obj_value20;
void* right_value495;
struct sNode* __result304__;
_Bool _if_conditional462;
void* right_value496;
struct sNode* right_278;
void* right_value497;
void* right_value498;
struct sNode* _inf_value21;
struct sGtEqNode* _inf_obj_value21;
void* right_value503;
struct sNode* __result307__;
_Bool _if_conditional472;
void* right_value504;
struct sNode* right_280;
void* right_value505;
void* right_value506;
struct sNode* _inf_value22;
struct sLtEqNode* _inf_obj_value22;
void* right_value511;
struct sNode* __result310__;
_Bool _if_conditional482;
void* right_value512;
struct sNode* right_282;
void* right_value513;
void* right_value514;
struct sNode* _inf_value23;
struct sGtNode* _inf_obj_value23;
void* right_value519;
struct sNode* __result313__;
_Bool _if_conditional492;
void* right_value520;
struct sNode* right_284;
void* right_value521;
void* right_value522;
struct sNode* _inf_value24;
struct sLtNode* _inf_obj_value24;
void* right_value527;
struct sNode* __result316__;
struct sNode* __result317__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&node_269, 0, sizeof(struct sNode*));
memset(&right_270, 0, sizeof(struct sNode*));
memset(&right_272, 0, sizeof(struct sNode*));
memset(&right_274, 0, sizeof(struct sNode*));
memset(&right_276, 0, sizeof(struct sNode*));
memset(&right_278, 0, sizeof(struct sNode*));
memset(&right_280, 0, sizeof(struct sNode*));
memset(&right_282, 0, sizeof(struct sNode*));
memset(&right_284, 0, sizeof(struct sNode*));
    parse_sharp_v5(info);
    node_269=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value463=shift_exp(info))));
    if(right_value463 && right_value463 != __result_obj__) { right_value463 = come_decrement_ref_count(right_value463, ((struct sNode*)right_value463)->finalize, ((struct sNode*)right_value463)->_protocol_obj, 1, 0, 0); } 
    parse_sharp_v5(info);
    while(_while_condtional13=*info->p,    _while_condtional13) {
        if(_if_conditional422=*info->p==62&&*(info->p+1)==61,        _if_conditional422) {
            info->p+=2;
            skip_spaces_and_lf(info);
            right_270=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value464=shift_exp(info))));
            if(right_value464 && right_value464 != __result_obj__) { right_value464 = come_decrement_ref_count(right_value464, ((struct sNode*)right_value464)->finalize, ((struct sNode*)right_value464)->_protocol_obj, 1, 0, 0); } 
            _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2375);
            _inf_obj_value17=come_increment_ref_count(((struct sGtEqNode*)(right_value466=sGtEqNode_initialize((struct sGtEqNode*)come_increment_ref_count(((struct sGtEqNode*)(right_value465=(struct sGtEqNode*)come_calloc(1, sizeof(struct sGtEqNode)*(1), "13op.c", 2375)))),(struct sNode*)come_increment_ref_count(node_269),(struct sNode*)come_increment_ref_count(right_270),(_Bool)0,info))));
            _inf_value17->_protocol_obj=_inf_obj_value17;
            _inf_value17->finalize=(void*)sGtEqNode_finalize;
            _inf_value17->clone=(void*)sGtEqNode_clone;
            _inf_value17->compile=(void*)sGtEqNode_compile;
            _inf_value17->sline=(void*)sGtEqNode_sline;
            _inf_value17->sname=(void*)sGtEqNode_sname;
            _inf_value17->terminated=(void*)sGtEqNode_terminated;
            _inf_value17->kind=(void*)sGtEqNode_kind;
            __result295__ = __result_obj__ = ((struct sNode*)(right_value471=_inf_value17));
            if(right_270) { right_270 = come_decrement_ref_count(right_270, ((struct sNode*)right_270)->finalize, ((struct sNode*)right_270)->_protocol_obj, 0, 0, 0); } 
            if(node_269) { node_269 = come_decrement_ref_count(node_269, ((struct sNode*)node_269)->finalize, ((struct sNode*)node_269)->_protocol_obj, 0, 0, 0); } 
            if(right_value465 && right_value465 != __result_obj__) { come_call_finalizer(sGtEqNode_finalize,right_value465, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value466 && right_value466 != __result_obj__) { come_call_finalizer(sGtEqNode_finalize,right_value466, (void*)0, (void*)0, 0, 1, 0, 0); }
            return __result295__;
            if(right_270) { right_270 = come_decrement_ref_count(right_270, ((struct sNode*)right_270)->finalize, ((struct sNode*)right_270)->_protocol_obj, 0, 0, 0); } 
        }
        else {
            if(_if_conditional432=*info->p==60&&*(info->p+1)==61,            _if_conditional432) {
                info->p+=2;
                skip_spaces_and_lf(info);
                right_272=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value472=shift_exp(info))));
                if(right_value472 && right_value472 != __result_obj__) { right_value472 = come_decrement_ref_count(right_value472, ((struct sNode*)right_value472)->finalize, ((struct sNode*)right_value472)->_protocol_obj, 1, 0, 0); } 
                _inf_value18=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2383);
                _inf_obj_value18=come_increment_ref_count(((struct sLtEqNode*)(right_value474=sLtEqNode_initialize((struct sLtEqNode*)come_increment_ref_count(((struct sLtEqNode*)(right_value473=(struct sLtEqNode*)come_calloc(1, sizeof(struct sLtEqNode)*(1), "13op.c", 2383)))),(struct sNode*)come_increment_ref_count(node_269),(struct sNode*)come_increment_ref_count(right_272),(_Bool)0,info))));
                _inf_value18->_protocol_obj=_inf_obj_value18;
                _inf_value18->finalize=(void*)sLtEqNode_finalize;
                _inf_value18->clone=(void*)sLtEqNode_clone;
                _inf_value18->compile=(void*)sLtEqNode_compile;
                _inf_value18->sline=(void*)sLtEqNode_sline;
                _inf_value18->sname=(void*)sLtEqNode_sname;
                _inf_value18->terminated=(void*)sLtEqNode_terminated;
                _inf_value18->kind=(void*)sLtEqNode_kind;
                __result298__ = __result_obj__ = ((struct sNode*)(right_value479=_inf_value18));
                if(right_272) { right_272 = come_decrement_ref_count(right_272, ((struct sNode*)right_272)->finalize, ((struct sNode*)right_272)->_protocol_obj, 0, 0, 0); } 
                if(node_269) { node_269 = come_decrement_ref_count(node_269, ((struct sNode*)node_269)->finalize, ((struct sNode*)node_269)->_protocol_obj, 0, 0, 0); } 
                if(right_value473 && right_value473 != __result_obj__) { come_call_finalizer(sLtEqNode_finalize,right_value473, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value474 && right_value474 != __result_obj__) { come_call_finalizer(sLtEqNode_finalize,right_value474, (void*)0, (void*)0, 0, 1, 0, 0); }
                return __result298__;
                if(right_272) { right_272 = come_decrement_ref_count(right_272, ((struct sNode*)right_272)->finalize, ((struct sNode*)right_272)->_protocol_obj, 0, 0, 0); } 
            }
            else {
                if(_if_conditional442=*info->p==62&&*(info->p+1)!=62,                _if_conditional442) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    right_274=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value480=shift_exp(info))));
                    if(right_value480 && right_value480 != __result_obj__) { right_value480 = come_decrement_ref_count(right_value480, ((struct sNode*)right_value480)->finalize, ((struct sNode*)right_value480)->_protocol_obj, 1, 0, 0); } 
                    _inf_value19=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2391);
                    _inf_obj_value19=come_increment_ref_count(((struct sGtNode*)(right_value482=sGtNode_initialize((struct sGtNode*)come_increment_ref_count(((struct sGtNode*)(right_value481=(struct sGtNode*)come_calloc(1, sizeof(struct sGtNode)*(1), "13op.c", 2391)))),(struct sNode*)come_increment_ref_count(node_269),(struct sNode*)come_increment_ref_count(right_274),(_Bool)0,info))));
                    _inf_value19->_protocol_obj=_inf_obj_value19;
                    _inf_value19->finalize=(void*)sGtNode_finalize;
                    _inf_value19->clone=(void*)sGtNode_clone;
                    _inf_value19->compile=(void*)sGtNode_compile;
                    _inf_value19->sline=(void*)sGtNode_sline;
                    _inf_value19->sname=(void*)sGtNode_sname;
                    _inf_value19->terminated=(void*)sGtNode_terminated;
                    _inf_value19->kind=(void*)sGtNode_kind;
                    __result301__ = __result_obj__ = ((struct sNode*)(right_value487=_inf_value19));
                    if(right_274) { right_274 = come_decrement_ref_count(right_274, ((struct sNode*)right_274)->finalize, ((struct sNode*)right_274)->_protocol_obj, 0, 0, 0); } 
                    if(node_269) { node_269 = come_decrement_ref_count(node_269, ((struct sNode*)node_269)->finalize, ((struct sNode*)node_269)->_protocol_obj, 0, 0, 0); } 
                    if(right_value481 && right_value481 != __result_obj__) { come_call_finalizer(sGtNode_finalize,right_value481, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(right_value482 && right_value482 != __result_obj__) { come_call_finalizer(sGtNode_finalize,right_value482, (void*)0, (void*)0, 0, 1, 0, 0); }
                    return __result301__;
                    if(right_274) { right_274 = come_decrement_ref_count(right_274, ((struct sNode*)right_274)->finalize, ((struct sNode*)right_274)->_protocol_obj, 0, 0, 0); } 
                }
                else {
                    if(_if_conditional452=*info->p==60&&*(info->p+1)!=60,                    _if_conditional452) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        right_276=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value488=shift_exp(info))));
                        if(right_value488 && right_value488 != __result_obj__) { right_value488 = come_decrement_ref_count(right_value488, ((struct sNode*)right_value488)->finalize, ((struct sNode*)right_value488)->_protocol_obj, 1, 0, 0); } 
                        _inf_value20=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2399);
                        _inf_obj_value20=come_increment_ref_count(((struct sLtNode*)(right_value490=sLtNode_initialize((struct sLtNode*)come_increment_ref_count(((struct sLtNode*)(right_value489=(struct sLtNode*)come_calloc(1, sizeof(struct sLtNode)*(1), "13op.c", 2399)))),(struct sNode*)come_increment_ref_count(node_269),(struct sNode*)come_increment_ref_count(right_276),(_Bool)0,info))));
                        _inf_value20->_protocol_obj=_inf_obj_value20;
                        _inf_value20->finalize=(void*)sLtNode_finalize;
                        _inf_value20->clone=(void*)sLtNode_clone;
                        _inf_value20->compile=(void*)sLtNode_compile;
                        _inf_value20->sline=(void*)sLtNode_sline;
                        _inf_value20->sname=(void*)sLtNode_sname;
                        _inf_value20->terminated=(void*)sLtNode_terminated;
                        _inf_value20->kind=(void*)sLtNode_kind;
                        __result304__ = __result_obj__ = ((struct sNode*)(right_value495=_inf_value20));
                        if(right_276) { right_276 = come_decrement_ref_count(right_276, ((struct sNode*)right_276)->finalize, ((struct sNode*)right_276)->_protocol_obj, 0, 0, 0); } 
                        if(node_269) { node_269 = come_decrement_ref_count(node_269, ((struct sNode*)node_269)->finalize, ((struct sNode*)node_269)->_protocol_obj, 0, 0, 0); } 
                        if(right_value489 && right_value489 != __result_obj__) { come_call_finalizer(sLtNode_finalize,right_value489, (void*)0, (void*)0, 0, 1, 0, 0); }
                        if(right_value490 && right_value490 != __result_obj__) { come_call_finalizer(sLtNode_finalize,right_value490, (void*)0, (void*)0, 0, 1, 0, 0); }
                        return __result304__;
                        if(right_276) { right_276 = come_decrement_ref_count(right_276, ((struct sNode*)right_276)->finalize, ((struct sNode*)right_276)->_protocol_obj, 0, 0, 0); } 
                    }
                    else {
                        if(_if_conditional462=*info->p==92&&*(info->p+1)==62&&*(info->p+2)==61,                        _if_conditional462) {
                            info->p+=3;
                            skip_spaces_and_lf(info);
                            right_278=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value496=shift_exp(info))));
                            if(right_value496 && right_value496 != __result_obj__) { right_value496 = come_decrement_ref_count(right_value496, ((struct sNode*)right_value496)->finalize, ((struct sNode*)right_value496)->_protocol_obj, 1, 0, 0); } 
                            _inf_value21=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2407);
                            _inf_obj_value21=come_increment_ref_count(((struct sGtEqNode*)(right_value498=sGtEqNode_initialize((struct sGtEqNode*)come_increment_ref_count(((struct sGtEqNode*)(right_value497=(struct sGtEqNode*)come_calloc(1, sizeof(struct sGtEqNode)*(1), "13op.c", 2407)))),(struct sNode*)come_increment_ref_count(node_269),(struct sNode*)come_increment_ref_count(right_278),(_Bool)1,info))));
                            _inf_value21->_protocol_obj=_inf_obj_value21;
                            _inf_value21->finalize=(void*)sGtEqNode_finalize;
                            _inf_value21->clone=(void*)sGtEqNode_clone;
                            _inf_value21->compile=(void*)sGtEqNode_compile;
                            _inf_value21->sline=(void*)sGtEqNode_sline;
                            _inf_value21->sname=(void*)sGtEqNode_sname;
                            _inf_value21->terminated=(void*)sGtEqNode_terminated;
                            _inf_value21->kind=(void*)sGtEqNode_kind;
                            __result307__ = __result_obj__ = ((struct sNode*)(right_value503=_inf_value21));
                            if(right_278) { right_278 = come_decrement_ref_count(right_278, ((struct sNode*)right_278)->finalize, ((struct sNode*)right_278)->_protocol_obj, 0, 0, 0); } 
                            if(node_269) { node_269 = come_decrement_ref_count(node_269, ((struct sNode*)node_269)->finalize, ((struct sNode*)node_269)->_protocol_obj, 0, 0, 0); } 
                            if(right_value497 && right_value497 != __result_obj__) { come_call_finalizer(sGtEqNode_finalize,right_value497, (void*)0, (void*)0, 0, 1, 0, 0); }
                            if(right_value498 && right_value498 != __result_obj__) { come_call_finalizer(sGtEqNode_finalize,right_value498, (void*)0, (void*)0, 0, 1, 0, 0); }
                            return __result307__;
                            if(right_278) { right_278 = come_decrement_ref_count(right_278, ((struct sNode*)right_278)->finalize, ((struct sNode*)right_278)->_protocol_obj, 0, 0, 0); } 
                        }
                        else {
                            if(_if_conditional472=*info->p==92&&*(info->p+1)==60&&*(info->p+2)==61,                            _if_conditional472) {
                                info->p+=3;
                                skip_spaces_and_lf(info);
                                right_280=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value504=shift_exp(info))));
                                if(right_value504 && right_value504 != __result_obj__) { right_value504 = come_decrement_ref_count(right_value504, ((struct sNode*)right_value504)->finalize, ((struct sNode*)right_value504)->_protocol_obj, 1, 0, 0); } 
                                _inf_value22=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2415);
                                _inf_obj_value22=come_increment_ref_count(((struct sLtEqNode*)(right_value506=sLtEqNode_initialize((struct sLtEqNode*)come_increment_ref_count(((struct sLtEqNode*)(right_value505=(struct sLtEqNode*)come_calloc(1, sizeof(struct sLtEqNode)*(1), "13op.c", 2415)))),(struct sNode*)come_increment_ref_count(node_269),(struct sNode*)come_increment_ref_count(right_280),(_Bool)1,info))));
                                _inf_value22->_protocol_obj=_inf_obj_value22;
                                _inf_value22->finalize=(void*)sLtEqNode_finalize;
                                _inf_value22->clone=(void*)sLtEqNode_clone;
                                _inf_value22->compile=(void*)sLtEqNode_compile;
                                _inf_value22->sline=(void*)sLtEqNode_sline;
                                _inf_value22->sname=(void*)sLtEqNode_sname;
                                _inf_value22->terminated=(void*)sLtEqNode_terminated;
                                _inf_value22->kind=(void*)sLtEqNode_kind;
                                __result310__ = __result_obj__ = ((struct sNode*)(right_value511=_inf_value22));
                                if(right_280) { right_280 = come_decrement_ref_count(right_280, ((struct sNode*)right_280)->finalize, ((struct sNode*)right_280)->_protocol_obj, 0, 0, 0); } 
                                if(node_269) { node_269 = come_decrement_ref_count(node_269, ((struct sNode*)node_269)->finalize, ((struct sNode*)node_269)->_protocol_obj, 0, 0, 0); } 
                                if(right_value505 && right_value505 != __result_obj__) { come_call_finalizer(sLtEqNode_finalize,right_value505, (void*)0, (void*)0, 0, 1, 0, 0); }
                                if(right_value506 && right_value506 != __result_obj__) { come_call_finalizer(sLtEqNode_finalize,right_value506, (void*)0, (void*)0, 0, 1, 0, 0); }
                                return __result310__;
                                if(right_280) { right_280 = come_decrement_ref_count(right_280, ((struct sNode*)right_280)->finalize, ((struct sNode*)right_280)->_protocol_obj, 0, 0, 0); } 
                            }
                            else {
                                if(_if_conditional482=*info->p==92&&*(info->p+1)==62&&*(info->p+2)!=62,                                _if_conditional482) {
                                    info->p+=2;
                                    skip_spaces_and_lf(info);
                                    right_282=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value512=shift_exp(info))));
                                    if(right_value512 && right_value512 != __result_obj__) { right_value512 = come_decrement_ref_count(right_value512, ((struct sNode*)right_value512)->finalize, ((struct sNode*)right_value512)->_protocol_obj, 1, 0, 0); } 
                                    _inf_value23=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2423);
                                    _inf_obj_value23=come_increment_ref_count(((struct sGtNode*)(right_value514=sGtNode_initialize((struct sGtNode*)come_increment_ref_count(((struct sGtNode*)(right_value513=(struct sGtNode*)come_calloc(1, sizeof(struct sGtNode)*(1), "13op.c", 2423)))),(struct sNode*)come_increment_ref_count(node_269),(struct sNode*)come_increment_ref_count(right_282),(_Bool)1,info))));
                                    _inf_value23->_protocol_obj=_inf_obj_value23;
                                    _inf_value23->finalize=(void*)sGtNode_finalize;
                                    _inf_value23->clone=(void*)sGtNode_clone;
                                    _inf_value23->compile=(void*)sGtNode_compile;
                                    _inf_value23->sline=(void*)sGtNode_sline;
                                    _inf_value23->sname=(void*)sGtNode_sname;
                                    _inf_value23->terminated=(void*)sGtNode_terminated;
                                    _inf_value23->kind=(void*)sGtNode_kind;
                                    __result313__ = __result_obj__ = ((struct sNode*)(right_value519=_inf_value23));
                                    if(right_282) { right_282 = come_decrement_ref_count(right_282, ((struct sNode*)right_282)->finalize, ((struct sNode*)right_282)->_protocol_obj, 0, 0, 0); } 
                                    if(node_269) { node_269 = come_decrement_ref_count(node_269, ((struct sNode*)node_269)->finalize, ((struct sNode*)node_269)->_protocol_obj, 0, 0, 0); } 
                                    if(right_value513 && right_value513 != __result_obj__) { come_call_finalizer(sGtNode_finalize,right_value513, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    if(right_value514 && right_value514 != __result_obj__) { come_call_finalizer(sGtNode_finalize,right_value514, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    return __result313__;
                                    if(right_282) { right_282 = come_decrement_ref_count(right_282, ((struct sNode*)right_282)->finalize, ((struct sNode*)right_282)->_protocol_obj, 0, 0, 0); } 
                                }
                                else {
                                    if(_if_conditional492=*info->p==92&&*(info->p+1)==60&&*(info->p+2)!=60,                                    _if_conditional492) {
                                        info->p+=2;
                                        skip_spaces_and_lf(info);
                                        right_284=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value520=shift_exp(info))));
                                        if(right_value520 && right_value520 != __result_obj__) { right_value520 = come_decrement_ref_count(right_value520, ((struct sNode*)right_value520)->finalize, ((struct sNode*)right_value520)->_protocol_obj, 1, 0, 0); } 
                                        _inf_value24=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2431);
                                        _inf_obj_value24=come_increment_ref_count(((struct sLtNode*)(right_value522=sLtNode_initialize((struct sLtNode*)come_increment_ref_count(((struct sLtNode*)(right_value521=(struct sLtNode*)come_calloc(1, sizeof(struct sLtNode)*(1), "13op.c", 2431)))),(struct sNode*)come_increment_ref_count(node_269),(struct sNode*)come_increment_ref_count(right_284),(_Bool)1,info))));
                                        _inf_value24->_protocol_obj=_inf_obj_value24;
                                        _inf_value24->finalize=(void*)sLtNode_finalize;
                                        _inf_value24->clone=(void*)sLtNode_clone;
                                        _inf_value24->compile=(void*)sLtNode_compile;
                                        _inf_value24->sline=(void*)sLtNode_sline;
                                        _inf_value24->sname=(void*)sLtNode_sname;
                                        _inf_value24->terminated=(void*)sLtNode_terminated;
                                        _inf_value24->kind=(void*)sLtNode_kind;
                                        __result316__ = __result_obj__ = ((struct sNode*)(right_value527=_inf_value24));
                                        if(right_284) { right_284 = come_decrement_ref_count(right_284, ((struct sNode*)right_284)->finalize, ((struct sNode*)right_284)->_protocol_obj, 0, 0, 0); } 
                                        if(node_269) { node_269 = come_decrement_ref_count(node_269, ((struct sNode*)node_269)->finalize, ((struct sNode*)node_269)->_protocol_obj, 0, 0, 0); } 
                                        if(right_value521 && right_value521 != __result_obj__) { come_call_finalizer(sLtNode_finalize,right_value521, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        if(right_value522 && right_value522 != __result_obj__) { come_call_finalizer(sLtNode_finalize,right_value522, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        return __result316__;
                                        if(right_284) { right_284 = come_decrement_ref_count(right_284, ((struct sNode*)right_284)->finalize, ((struct sNode*)right_284)->_protocol_obj, 0, 0, 0); } 
                                    }
                                    else {
                                        break;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    parse_sharp_v5(info);
    __result317__ = __result_obj__ = node_269;
    if(node_269) { node_269 = come_decrement_ref_count(node_269, ((struct sNode*)node_269)->finalize, ((struct sNode*)node_269)->_protocol_obj, 0, 1, 0); } 
    return __result317__;
    if(node_269) { node_269 = come_decrement_ref_count(node_269, ((struct sNode*)node_269)->finalize, ((struct sNode*)node_269)->_protocol_obj, 0, 0, 0); } 
}

static void sGtEqNode_finalize(struct sGtEqNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional463;
_Bool _if_conditional464;
_Bool _if_conditional465;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional463=self!=((void*)0)&&self->mLeft!=((void*)0),                                _if_conditional463) {
                                    if(self->mLeft) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0); } 
                                }
                                if(_if_conditional464=self!=((void*)0)&&self->mRight!=((void*)0),                                _if_conditional464) {
                                    if(self->mRight) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0); } 
                                }
                                if(_if_conditional465=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional465) {
                                    if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                                }
}

static struct sGtEqNode* sGtEqNode_clone(struct sGtEqNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional466;
struct sGtEqNode* __result305__;
void* right_value499;
struct sGtEqNode* result_279;
_Bool _if_conditional467;
void* right_value500;
struct sNode* __dec_obj217;
_Bool _if_conditional468;
void* right_value501;
struct sNode* __dec_obj218;
_Bool _if_conditional469;
_Bool _if_conditional470;
_Bool _if_conditional471;
void* right_value502;
char* __dec_obj219;
struct sGtEqNode* __result306__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_279, 0, sizeof(struct sGtEqNode*));
                                if(_if_conditional466=self==(void*)0,                                _if_conditional466) {
                                    __result305__ = __result_obj__ = (void*)0;
                                    return __result305__;
                                }
                                result_279=(struct sGtEqNode*)come_increment_ref_count(((struct sGtEqNode*)(right_value499=(struct sGtEqNode*)come_calloc(1, sizeof(struct sGtEqNode)*(1), "sGtEqNode_clone", 3))));
                                if(right_value499 && right_value499 != __result_obj__) { come_call_finalizer(sGtEqNode_finalize,right_value499, (void*)0, (void*)0, 0, 1, 0, 0); }
                                if(_if_conditional467=self!=((void*)0)&&self->mLeft!=((void*)0),                                _if_conditional467) {
                                    __dec_obj217=result_279->mLeft;
                                    result_279->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value500=sNode_clone(self->mLeft))));
                                    if(__dec_obj217) { __dec_obj217 = come_decrement_ref_count(__dec_obj217, ((struct sNode*)__dec_obj217)->finalize, ((struct sNode*)__dec_obj217)->_protocol_obj, 0,0,0); }
                                    if(right_value500 && right_value500 != __result_obj__) { right_value500 = come_decrement_ref_count(right_value500, ((struct sNode*)right_value500)->finalize, ((struct sNode*)right_value500)->_protocol_obj, 1, 0, 0); } 
                                }
                                if(_if_conditional468=self!=((void*)0)&&self->mRight!=((void*)0),                                _if_conditional468) {
                                    __dec_obj218=result_279->mRight;
                                    result_279->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value501=sNode_clone(self->mRight))));
                                    if(__dec_obj218) { __dec_obj218 = come_decrement_ref_count(__dec_obj218, ((struct sNode*)__dec_obj218)->finalize, ((struct sNode*)__dec_obj218)->_protocol_obj, 0,0,0); }
                                    if(right_value501 && right_value501 != __result_obj__) { right_value501 = come_decrement_ref_count(right_value501, ((struct sNode*)right_value501)->finalize, ((struct sNode*)right_value501)->_protocol_obj, 1, 0, 0); } 
                                }
                                if(_if_conditional469=self!=((void*)0),                                _if_conditional469) {
                                    result_279->mQuote=self->mQuote;
                                }
                                if(_if_conditional470=self!=((void*)0),                                _if_conditional470) {
                                    result_279->sline=self->sline;
                                }
                                if(_if_conditional471=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional471) {
                                    __dec_obj219=result_279->sname;
                                    result_279->sname=(char*)come_increment_ref_count(((char*)(right_value502=string_clone(self->sname))));
                                    if(__dec_obj219) { __dec_obj219 = come_decrement_ref_count(__dec_obj219, (void*)0, (void*)0, 0,0,0); }
                                    if(right_value502 && right_value502 != __result_obj__) { right_value502 = come_decrement_ref_count(right_value502, (void*)0, (void*)0, 1, 0, 0); }
                                }
                                __result306__ = __result_obj__ = result_279;
                                if(result_279) { come_call_finalizer(sGtEqNode_finalize,result_279, (void*)0, (void*)0, 0, 0, 1, 0); }
                                return __result306__;
                                if(result_279) { come_call_finalizer(sGtEqNode_finalize,result_279, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sLtEqNode_finalize(struct sLtEqNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional473;
_Bool _if_conditional474;
_Bool _if_conditional475;
memset(&__result_obj__, 0, sizeof(void*));
                                    if(_if_conditional473=self!=((void*)0)&&self->mLeft!=((void*)0),                                    _if_conditional473) {
                                        if(self->mLeft) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0); } 
                                    }
                                    if(_if_conditional474=self!=((void*)0)&&self->mRight!=((void*)0),                                    _if_conditional474) {
                                        if(self->mRight) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0); } 
                                    }
                                    if(_if_conditional475=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional475) {
                                        if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                                    }
}

static struct sLtEqNode* sLtEqNode_clone(struct sLtEqNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional476;
struct sLtEqNode* __result308__;
void* right_value507;
struct sLtEqNode* result_281;
_Bool _if_conditional477;
void* right_value508;
struct sNode* __dec_obj220;
_Bool _if_conditional478;
void* right_value509;
struct sNode* __dec_obj221;
_Bool _if_conditional479;
_Bool _if_conditional480;
_Bool _if_conditional481;
void* right_value510;
char* __dec_obj222;
struct sLtEqNode* __result309__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_281, 0, sizeof(struct sLtEqNode*));
                                    if(_if_conditional476=self==(void*)0,                                    _if_conditional476) {
                                        __result308__ = __result_obj__ = (void*)0;
                                        return __result308__;
                                    }
                                    result_281=(struct sLtEqNode*)come_increment_ref_count(((struct sLtEqNode*)(right_value507=(struct sLtEqNode*)come_calloc(1, sizeof(struct sLtEqNode)*(1), "sLtEqNode_clone", 3))));
                                    if(right_value507 && right_value507 != __result_obj__) { come_call_finalizer(sLtEqNode_finalize,right_value507, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    if(_if_conditional477=self!=((void*)0)&&self->mLeft!=((void*)0),                                    _if_conditional477) {
                                        __dec_obj220=result_281->mLeft;
                                        result_281->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value508=sNode_clone(self->mLeft))));
                                        if(__dec_obj220) { __dec_obj220 = come_decrement_ref_count(__dec_obj220, ((struct sNode*)__dec_obj220)->finalize, ((struct sNode*)__dec_obj220)->_protocol_obj, 0,0,0); }
                                        if(right_value508 && right_value508 != __result_obj__) { right_value508 = come_decrement_ref_count(right_value508, ((struct sNode*)right_value508)->finalize, ((struct sNode*)right_value508)->_protocol_obj, 1, 0, 0); } 
                                    }
                                    if(_if_conditional478=self!=((void*)0)&&self->mRight!=((void*)0),                                    _if_conditional478) {
                                        __dec_obj221=result_281->mRight;
                                        result_281->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value509=sNode_clone(self->mRight))));
                                        if(__dec_obj221) { __dec_obj221 = come_decrement_ref_count(__dec_obj221, ((struct sNode*)__dec_obj221)->finalize, ((struct sNode*)__dec_obj221)->_protocol_obj, 0,0,0); }
                                        if(right_value509 && right_value509 != __result_obj__) { right_value509 = come_decrement_ref_count(right_value509, ((struct sNode*)right_value509)->finalize, ((struct sNode*)right_value509)->_protocol_obj, 1, 0, 0); } 
                                    }
                                    if(_if_conditional479=self!=((void*)0),                                    _if_conditional479) {
                                        result_281->mQuote=self->mQuote;
                                    }
                                    if(_if_conditional480=self!=((void*)0),                                    _if_conditional480) {
                                        result_281->sline=self->sline;
                                    }
                                    if(_if_conditional481=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional481) {
                                        __dec_obj222=result_281->sname;
                                        result_281->sname=(char*)come_increment_ref_count(((char*)(right_value510=string_clone(self->sname))));
                                        if(__dec_obj222) { __dec_obj222 = come_decrement_ref_count(__dec_obj222, (void*)0, (void*)0, 0,0,0); }
                                        if(right_value510 && right_value510 != __result_obj__) { right_value510 = come_decrement_ref_count(right_value510, (void*)0, (void*)0, 1, 0, 0); }
                                    }
                                    __result309__ = __result_obj__ = result_281;
                                    if(result_281) { come_call_finalizer(sLtEqNode_finalize,result_281, (void*)0, (void*)0, 0, 0, 1, 0); }
                                    return __result309__;
                                    if(result_281) { come_call_finalizer(sLtEqNode_finalize,result_281, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sGtNode_finalize(struct sGtNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional483;
_Bool _if_conditional484;
_Bool _if_conditional485;
memset(&__result_obj__, 0, sizeof(void*));
                                        if(_if_conditional483=self!=((void*)0)&&self->mLeft!=((void*)0),                                        _if_conditional483) {
                                            if(self->mLeft) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0); } 
                                        }
                                        if(_if_conditional484=self!=((void*)0)&&self->mRight!=((void*)0),                                        _if_conditional484) {
                                            if(self->mRight) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0); } 
                                        }
                                        if(_if_conditional485=self!=((void*)0)&&self->sname!=((void*)0),                                        _if_conditional485) {
                                            if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                                        }
}

static struct sGtNode* sGtNode_clone(struct sGtNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional486;
struct sGtNode* __result311__;
void* right_value515;
struct sGtNode* result_283;
_Bool _if_conditional487;
void* right_value516;
struct sNode* __dec_obj223;
_Bool _if_conditional488;
void* right_value517;
struct sNode* __dec_obj224;
_Bool _if_conditional489;
_Bool _if_conditional490;
_Bool _if_conditional491;
void* right_value518;
char* __dec_obj225;
struct sGtNode* __result312__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_283, 0, sizeof(struct sGtNode*));
                                        if(_if_conditional486=self==(void*)0,                                        _if_conditional486) {
                                            __result311__ = __result_obj__ = (void*)0;
                                            return __result311__;
                                        }
                                        result_283=(struct sGtNode*)come_increment_ref_count(((struct sGtNode*)(right_value515=(struct sGtNode*)come_calloc(1, sizeof(struct sGtNode)*(1), "sGtNode_clone", 3))));
                                        if(right_value515 && right_value515 != __result_obj__) { come_call_finalizer(sGtNode_finalize,right_value515, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        if(_if_conditional487=self!=((void*)0)&&self->mLeft!=((void*)0),                                        _if_conditional487) {
                                            __dec_obj223=result_283->mLeft;
                                            result_283->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value516=sNode_clone(self->mLeft))));
                                            if(__dec_obj223) { __dec_obj223 = come_decrement_ref_count(__dec_obj223, ((struct sNode*)__dec_obj223)->finalize, ((struct sNode*)__dec_obj223)->_protocol_obj, 0,0,0); }
                                            if(right_value516 && right_value516 != __result_obj__) { right_value516 = come_decrement_ref_count(right_value516, ((struct sNode*)right_value516)->finalize, ((struct sNode*)right_value516)->_protocol_obj, 1, 0, 0); } 
                                        }
                                        if(_if_conditional488=self!=((void*)0)&&self->mRight!=((void*)0),                                        _if_conditional488) {
                                            __dec_obj224=result_283->mRight;
                                            result_283->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value517=sNode_clone(self->mRight))));
                                            if(__dec_obj224) { __dec_obj224 = come_decrement_ref_count(__dec_obj224, ((struct sNode*)__dec_obj224)->finalize, ((struct sNode*)__dec_obj224)->_protocol_obj, 0,0,0); }
                                            if(right_value517 && right_value517 != __result_obj__) { right_value517 = come_decrement_ref_count(right_value517, ((struct sNode*)right_value517)->finalize, ((struct sNode*)right_value517)->_protocol_obj, 1, 0, 0); } 
                                        }
                                        if(_if_conditional489=self!=((void*)0),                                        _if_conditional489) {
                                            result_283->mQuote=self->mQuote;
                                        }
                                        if(_if_conditional490=self!=((void*)0),                                        _if_conditional490) {
                                            result_283->sline=self->sline;
                                        }
                                        if(_if_conditional491=self!=((void*)0)&&self->sname!=((void*)0),                                        _if_conditional491) {
                                            __dec_obj225=result_283->sname;
                                            result_283->sname=(char*)come_increment_ref_count(((char*)(right_value518=string_clone(self->sname))));
                                            if(__dec_obj225) { __dec_obj225 = come_decrement_ref_count(__dec_obj225, (void*)0, (void*)0, 0,0,0); }
                                            if(right_value518 && right_value518 != __result_obj__) { right_value518 = come_decrement_ref_count(right_value518, (void*)0, (void*)0, 1, 0, 0); }
                                        }
                                        __result312__ = __result_obj__ = result_283;
                                        if(result_283) { come_call_finalizer(sGtNode_finalize,result_283, (void*)0, (void*)0, 0, 0, 1, 0); }
                                        return __result312__;
                                        if(result_283) { come_call_finalizer(sGtNode_finalize,result_283, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sLtNode_finalize(struct sLtNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional493;
_Bool _if_conditional494;
_Bool _if_conditional495;
memset(&__result_obj__, 0, sizeof(void*));
                                            if(_if_conditional493=self!=((void*)0)&&self->mLeft!=((void*)0),                                            _if_conditional493) {
                                                if(self->mLeft) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0); } 
                                            }
                                            if(_if_conditional494=self!=((void*)0)&&self->mRight!=((void*)0),                                            _if_conditional494) {
                                                if(self->mRight) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0); } 
                                            }
                                            if(_if_conditional495=self!=((void*)0)&&self->sname!=((void*)0),                                            _if_conditional495) {
                                                if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                                            }
}

static struct sLtNode* sLtNode_clone(struct sLtNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional496;
struct sLtNode* __result314__;
void* right_value523;
struct sLtNode* result_285;
_Bool _if_conditional497;
void* right_value524;
struct sNode* __dec_obj226;
_Bool _if_conditional498;
void* right_value525;
struct sNode* __dec_obj227;
_Bool _if_conditional499;
_Bool _if_conditional500;
_Bool _if_conditional501;
void* right_value526;
char* __dec_obj228;
struct sLtNode* __result315__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_285, 0, sizeof(struct sLtNode*));
                                            if(_if_conditional496=self==(void*)0,                                            _if_conditional496) {
                                                __result314__ = __result_obj__ = (void*)0;
                                                return __result314__;
                                            }
                                            result_285=(struct sLtNode*)come_increment_ref_count(((struct sLtNode*)(right_value523=(struct sLtNode*)come_calloc(1, sizeof(struct sLtNode)*(1), "sLtNode_clone", 3))));
                                            if(right_value523 && right_value523 != __result_obj__) { come_call_finalizer(sLtNode_finalize,right_value523, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            if(_if_conditional497=self!=((void*)0)&&self->mLeft!=((void*)0),                                            _if_conditional497) {
                                                __dec_obj226=result_285->mLeft;
                                                result_285->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value524=sNode_clone(self->mLeft))));
                                                if(__dec_obj226) { __dec_obj226 = come_decrement_ref_count(__dec_obj226, ((struct sNode*)__dec_obj226)->finalize, ((struct sNode*)__dec_obj226)->_protocol_obj, 0,0,0); }
                                                if(right_value524 && right_value524 != __result_obj__) { right_value524 = come_decrement_ref_count(right_value524, ((struct sNode*)right_value524)->finalize, ((struct sNode*)right_value524)->_protocol_obj, 1, 0, 0); } 
                                            }
                                            if(_if_conditional498=self!=((void*)0)&&self->mRight!=((void*)0),                                            _if_conditional498) {
                                                __dec_obj227=result_285->mRight;
                                                result_285->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value525=sNode_clone(self->mRight))));
                                                if(__dec_obj227) { __dec_obj227 = come_decrement_ref_count(__dec_obj227, ((struct sNode*)__dec_obj227)->finalize, ((struct sNode*)__dec_obj227)->_protocol_obj, 0,0,0); }
                                                if(right_value525 && right_value525 != __result_obj__) { right_value525 = come_decrement_ref_count(right_value525, ((struct sNode*)right_value525)->finalize, ((struct sNode*)right_value525)->_protocol_obj, 1, 0, 0); } 
                                            }
                                            if(_if_conditional499=self!=((void*)0),                                            _if_conditional499) {
                                                result_285->mQuote=self->mQuote;
                                            }
                                            if(_if_conditional500=self!=((void*)0),                                            _if_conditional500) {
                                                result_285->sline=self->sline;
                                            }
                                            if(_if_conditional501=self!=((void*)0)&&self->sname!=((void*)0),                                            _if_conditional501) {
                                                __dec_obj228=result_285->sname;
                                                result_285->sname=(char*)come_increment_ref_count(((char*)(right_value526=string_clone(self->sname))));
                                                if(__dec_obj228) { __dec_obj228 = come_decrement_ref_count(__dec_obj228, (void*)0, (void*)0, 0,0,0); }
                                                if(right_value526 && right_value526 != __result_obj__) { right_value526 = come_decrement_ref_count(right_value526, (void*)0, (void*)0, 1, 0, 0); }
                                            }
                                            __result315__ = __result_obj__ = result_285;
                                            if(result_285) { come_call_finalizer(sLtNode_finalize,result_285, (void*)0, (void*)0, 0, 0, 1, 0); }
                                            return __result315__;
                                            if(result_285) { come_call_finalizer(sLtNode_finalize,result_285, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sNode* eq_exp(struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value528;
struct sNode* node_286;
_Bool _while_condtional14;
_Bool _if_conditional502;
void* right_value529;
struct sNode* right_287;
void* right_value530;
void* right_value531;
struct sNode* _inf_value25;
struct sEq2Node* _inf_obj_value25;
void* right_value536;
struct sNode* __result320__;
_Bool _if_conditional512;
void* right_value537;
struct sNode* right_289;
void* right_value538;
void* right_value539;
struct sNode* _inf_value26;
struct sEqNode* _inf_obj_value26;
void* right_value544;
struct sNode* __result323__;
_Bool _if_conditional522;
void* right_value545;
struct sNode* right_291;
void* right_value546;
void* right_value547;
struct sNode* _inf_value27;
struct sNotEq2Node* _inf_obj_value27;
void* right_value552;
struct sNode* __result326__;
_Bool _if_conditional532;
void* right_value553;
struct sNode* right_293;
void* right_value554;
void* right_value555;
struct sNode* _inf_value28;
struct sNotEqNode* _inf_obj_value28;
void* right_value560;
struct sNode* __result329__;
_Bool _if_conditional542;
void* right_value561;
struct sNode* right_295;
void* right_value562;
void* right_value563;
struct sNode* _inf_value29;
struct sEq2Node* _inf_obj_value29;
void* right_value568;
struct sNode* __result332__;
_Bool _if_conditional552;
void* right_value569;
struct sNode* right_297;
void* right_value570;
void* right_value571;
struct sNode* _inf_value30;
struct sEqNode* _inf_obj_value30;
void* right_value576;
struct sNode* __result335__;
_Bool _if_conditional562;
void* right_value577;
struct sNode* right_299;
void* right_value578;
void* right_value579;
struct sNode* _inf_value31;
struct sNotEq2Node* _inf_obj_value31;
void* right_value584;
struct sNode* __result338__;
_Bool _if_conditional572;
void* right_value585;
struct sNode* right_301;
void* right_value586;
void* right_value587;
struct sNode* _inf_value32;
struct sNotEqNode* _inf_obj_value32;
void* right_value592;
struct sNode* __result341__;
struct sNode* __result342__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&node_286, 0, sizeof(struct sNode*));
memset(&right_287, 0, sizeof(struct sNode*));
memset(&right_289, 0, sizeof(struct sNode*));
memset(&right_291, 0, sizeof(struct sNode*));
memset(&right_293, 0, sizeof(struct sNode*));
memset(&right_295, 0, sizeof(struct sNode*));
memset(&right_297, 0, sizeof(struct sNode*));
memset(&right_299, 0, sizeof(struct sNode*));
memset(&right_301, 0, sizeof(struct sNode*));
    parse_sharp_v5(info);
    node_286=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value528=comparison_exp(info))));
    if(right_value528 && right_value528 != __result_obj__) { right_value528 = come_decrement_ref_count(right_value528, ((struct sNode*)right_value528)->finalize, ((struct sNode*)right_value528)->_protocol_obj, 1, 0, 0); } 
    parse_sharp_v5(info);
    while(_while_condtional14=*info->p,    _while_condtional14) {
        if(_if_conditional502=*info->p==61&&*(info->p+1)==61&&*(info->p+2)==61,        _if_conditional502) {
            info->p+=3;
            skip_spaces_and_lf(info);
            right_287=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value529=eq_exp(info))));
            if(right_value529 && right_value529 != __result_obj__) { right_value529 = come_decrement_ref_count(right_value529, ((struct sNode*)right_value529)->finalize, ((struct sNode*)right_value529)->_protocol_obj, 1, 0, 0); } 
            _inf_value25=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2458);
            _inf_obj_value25=come_increment_ref_count(((struct sEq2Node*)(right_value531=sEq2Node_initialize((struct sEq2Node*)come_increment_ref_count(((struct sEq2Node*)(right_value530=(struct sEq2Node*)come_calloc(1, sizeof(struct sEq2Node)*(1), "13op.c", 2458)))),(struct sNode*)come_increment_ref_count(node_286),(struct sNode*)come_increment_ref_count(right_287),(_Bool)0,info))));
            _inf_value25->_protocol_obj=_inf_obj_value25;
            _inf_value25->finalize=(void*)sEq2Node_finalize;
            _inf_value25->clone=(void*)sEq2Node_clone;
            _inf_value25->compile=(void*)sEq2Node_compile;
            _inf_value25->sline=(void*)sEq2Node_sline;
            _inf_value25->sname=(void*)sEq2Node_sname;
            _inf_value25->terminated=(void*)sEq2Node_terminated;
            _inf_value25->kind=(void*)sEq2Node_kind;
            __result320__ = __result_obj__ = ((struct sNode*)(right_value536=_inf_value25));
            if(right_287) { right_287 = come_decrement_ref_count(right_287, ((struct sNode*)right_287)->finalize, ((struct sNode*)right_287)->_protocol_obj, 0, 0, 0); } 
            if(node_286) { node_286 = come_decrement_ref_count(node_286, ((struct sNode*)node_286)->finalize, ((struct sNode*)node_286)->_protocol_obj, 0, 0, 0); } 
            if(right_value530 && right_value530 != __result_obj__) { come_call_finalizer(sEq2Node_finalize,right_value530, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value531 && right_value531 != __result_obj__) { come_call_finalizer(sEq2Node_finalize,right_value531, (void*)0, (void*)0, 0, 1, 0, 0); }
            return __result320__;
            if(right_287) { right_287 = come_decrement_ref_count(right_287, ((struct sNode*)right_287)->finalize, ((struct sNode*)right_287)->_protocol_obj, 0, 0, 0); } 
        }
        else {
            if(_if_conditional512=*info->p==61&&*(info->p+1)==61,            _if_conditional512) {
                info->p+=2;
                skip_spaces_and_lf(info);
                right_289=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value537=eq_exp(info))));
                if(right_value537 && right_value537 != __result_obj__) { right_value537 = come_decrement_ref_count(right_value537, ((struct sNode*)right_value537)->finalize, ((struct sNode*)right_value537)->_protocol_obj, 1, 0, 0); } 
                _inf_value26=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2466);
                _inf_obj_value26=come_increment_ref_count(((struct sEqNode*)(right_value539=sEqNode_initialize((struct sEqNode*)come_increment_ref_count(((struct sEqNode*)(right_value538=(struct sEqNode*)come_calloc(1, sizeof(struct sEqNode)*(1), "13op.c", 2466)))),(struct sNode*)come_increment_ref_count(node_286),(struct sNode*)come_increment_ref_count(right_289),(_Bool)0,info))));
                _inf_value26->_protocol_obj=_inf_obj_value26;
                _inf_value26->finalize=(void*)sEqNode_finalize;
                _inf_value26->clone=(void*)sEqNode_clone;
                _inf_value26->compile=(void*)sEqNode_compile;
                _inf_value26->sline=(void*)sEqNode_sline;
                _inf_value26->sname=(void*)sEqNode_sname;
                _inf_value26->terminated=(void*)sEqNode_terminated;
                _inf_value26->kind=(void*)sEqNode_kind;
                __result323__ = __result_obj__ = ((struct sNode*)(right_value544=_inf_value26));
                if(right_289) { right_289 = come_decrement_ref_count(right_289, ((struct sNode*)right_289)->finalize, ((struct sNode*)right_289)->_protocol_obj, 0, 0, 0); } 
                if(node_286) { node_286 = come_decrement_ref_count(node_286, ((struct sNode*)node_286)->finalize, ((struct sNode*)node_286)->_protocol_obj, 0, 0, 0); } 
                if(right_value538 && right_value538 != __result_obj__) { come_call_finalizer(sEqNode_finalize,right_value538, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value539 && right_value539 != __result_obj__) { come_call_finalizer(sEqNode_finalize,right_value539, (void*)0, (void*)0, 0, 1, 0, 0); }
                return __result323__;
                if(right_289) { right_289 = come_decrement_ref_count(right_289, ((struct sNode*)right_289)->finalize, ((struct sNode*)right_289)->_protocol_obj, 0, 0, 0); } 
            }
            else {
                if(_if_conditional522=*info->p==33&&*(info->p+1)==61&&*(info->p+2)==61,                _if_conditional522) {
                    info->p+=3;
                    skip_spaces_and_lf(info);
                    right_291=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value545=eq_exp(info))));
                    if(right_value545 && right_value545 != __result_obj__) { right_value545 = come_decrement_ref_count(right_value545, ((struct sNode*)right_value545)->finalize, ((struct sNode*)right_value545)->_protocol_obj, 1, 0, 0); } 
                    _inf_value27=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2474);
                    _inf_obj_value27=come_increment_ref_count(((struct sNotEq2Node*)(right_value547=sNotEq2Node_initialize((struct sNotEq2Node*)come_increment_ref_count(((struct sNotEq2Node*)(right_value546=(struct sNotEq2Node*)come_calloc(1, sizeof(struct sNotEq2Node)*(1), "13op.c", 2474)))),(struct sNode*)come_increment_ref_count(node_286),(struct sNode*)come_increment_ref_count(right_291),(_Bool)0,info))));
                    _inf_value27->_protocol_obj=_inf_obj_value27;
                    _inf_value27->finalize=(void*)sNotEq2Node_finalize;
                    _inf_value27->clone=(void*)sNotEq2Node_clone;
                    _inf_value27->compile=(void*)sNotEq2Node_compile;
                    _inf_value27->sline=(void*)sNotEq2Node_sline;
                    _inf_value27->sname=(void*)sNotEq2Node_sname;
                    _inf_value27->terminated=(void*)sNotEq2Node_terminated;
                    _inf_value27->kind=(void*)sNotEq2Node_kind;
                    __result326__ = __result_obj__ = ((struct sNode*)(right_value552=_inf_value27));
                    if(right_291) { right_291 = come_decrement_ref_count(right_291, ((struct sNode*)right_291)->finalize, ((struct sNode*)right_291)->_protocol_obj, 0, 0, 0); } 
                    if(node_286) { node_286 = come_decrement_ref_count(node_286, ((struct sNode*)node_286)->finalize, ((struct sNode*)node_286)->_protocol_obj, 0, 0, 0); } 
                    if(right_value546 && right_value546 != __result_obj__) { come_call_finalizer(sNotEq2Node_finalize,right_value546, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(right_value547 && right_value547 != __result_obj__) { come_call_finalizer(sNotEq2Node_finalize,right_value547, (void*)0, (void*)0, 0, 1, 0, 0); }
                    return __result326__;
                    if(right_291) { right_291 = come_decrement_ref_count(right_291, ((struct sNode*)right_291)->finalize, ((struct sNode*)right_291)->_protocol_obj, 0, 0, 0); } 
                }
                else {
                    if(_if_conditional532=*info->p==33&&*(info->p+1)==61,                    _if_conditional532) {
                        info->p+=2;
                        skip_spaces_and_lf(info);
                        right_293=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value553=eq_exp(info))));
                        if(right_value553 && right_value553 != __result_obj__) { right_value553 = come_decrement_ref_count(right_value553, ((struct sNode*)right_value553)->finalize, ((struct sNode*)right_value553)->_protocol_obj, 1, 0, 0); } 
                        _inf_value28=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2482);
                        _inf_obj_value28=come_increment_ref_count(((struct sNotEqNode*)(right_value555=sNotEqNode_initialize((struct sNotEqNode*)come_increment_ref_count(((struct sNotEqNode*)(right_value554=(struct sNotEqNode*)come_calloc(1, sizeof(struct sNotEqNode)*(1), "13op.c", 2482)))),(struct sNode*)come_increment_ref_count(node_286),(struct sNode*)come_increment_ref_count(right_293),(_Bool)0,info))));
                        _inf_value28->_protocol_obj=_inf_obj_value28;
                        _inf_value28->finalize=(void*)sNotEqNode_finalize;
                        _inf_value28->clone=(void*)sNotEqNode_clone;
                        _inf_value28->compile=(void*)sNotEqNode_compile;
                        _inf_value28->sline=(void*)sNotEqNode_sline;
                        _inf_value28->sname=(void*)sNotEqNode_sname;
                        _inf_value28->terminated=(void*)sNotEqNode_terminated;
                        _inf_value28->kind=(void*)sNotEqNode_kind;
                        __result329__ = __result_obj__ = ((struct sNode*)(right_value560=_inf_value28));
                        if(right_293) { right_293 = come_decrement_ref_count(right_293, ((struct sNode*)right_293)->finalize, ((struct sNode*)right_293)->_protocol_obj, 0, 0, 0); } 
                        if(node_286) { node_286 = come_decrement_ref_count(node_286, ((struct sNode*)node_286)->finalize, ((struct sNode*)node_286)->_protocol_obj, 0, 0, 0); } 
                        if(right_value554 && right_value554 != __result_obj__) { come_call_finalizer(sNotEqNode_finalize,right_value554, (void*)0, (void*)0, 0, 1, 0, 0); }
                        if(right_value555 && right_value555 != __result_obj__) { come_call_finalizer(sNotEqNode_finalize,right_value555, (void*)0, (void*)0, 0, 1, 0, 0); }
                        return __result329__;
                        if(right_293) { right_293 = come_decrement_ref_count(right_293, ((struct sNode*)right_293)->finalize, ((struct sNode*)right_293)->_protocol_obj, 0, 0, 0); } 
                    }
                    else {
                        if(_if_conditional542=*info->p==92&&*(info->p+1)==61&&*(info->p+2)==61&&*(info->p+3)==61,                        _if_conditional542) {
                            info->p+=4;
                            skip_spaces_and_lf(info);
                            right_295=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value561=eq_exp(info))));
                            if(right_value561 && right_value561 != __result_obj__) { right_value561 = come_decrement_ref_count(right_value561, ((struct sNode*)right_value561)->finalize, ((struct sNode*)right_value561)->_protocol_obj, 1, 0, 0); } 
                            _inf_value29=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2490);
                            _inf_obj_value29=come_increment_ref_count(((struct sEq2Node*)(right_value563=sEq2Node_initialize((struct sEq2Node*)come_increment_ref_count(((struct sEq2Node*)(right_value562=(struct sEq2Node*)come_calloc(1, sizeof(struct sEq2Node)*(1), "13op.c", 2490)))),(struct sNode*)come_increment_ref_count(node_286),(struct sNode*)come_increment_ref_count(right_295),(_Bool)1,info))));
                            _inf_value29->_protocol_obj=_inf_obj_value29;
                            _inf_value29->finalize=(void*)sEq2Node_finalize;
                            _inf_value29->clone=(void*)sEq2Node_clone;
                            _inf_value29->compile=(void*)sEq2Node_compile;
                            _inf_value29->sline=(void*)sEq2Node_sline;
                            _inf_value29->sname=(void*)sEq2Node_sname;
                            _inf_value29->terminated=(void*)sEq2Node_terminated;
                            _inf_value29->kind=(void*)sEq2Node_kind;
                            __result332__ = __result_obj__ = ((struct sNode*)(right_value568=_inf_value29));
                            if(right_295) { right_295 = come_decrement_ref_count(right_295, ((struct sNode*)right_295)->finalize, ((struct sNode*)right_295)->_protocol_obj, 0, 0, 0); } 
                            if(node_286) { node_286 = come_decrement_ref_count(node_286, ((struct sNode*)node_286)->finalize, ((struct sNode*)node_286)->_protocol_obj, 0, 0, 0); } 
                            if(right_value562 && right_value562 != __result_obj__) { come_call_finalizer(sEq2Node_finalize,right_value562, (void*)0, (void*)0, 0, 1, 0, 0); }
                            if(right_value563 && right_value563 != __result_obj__) { come_call_finalizer(sEq2Node_finalize,right_value563, (void*)0, (void*)0, 0, 1, 0, 0); }
                            return __result332__;
                            if(right_295) { right_295 = come_decrement_ref_count(right_295, ((struct sNode*)right_295)->finalize, ((struct sNode*)right_295)->_protocol_obj, 0, 0, 0); } 
                        }
                        else {
                            if(_if_conditional552=*info->p==92&&*(info->p+1)==61&&*(info->p+2)==61,                            _if_conditional552) {
                                info->p+=3;
                                skip_spaces_and_lf(info);
                                right_297=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value569=eq_exp(info))));
                                if(right_value569 && right_value569 != __result_obj__) { right_value569 = come_decrement_ref_count(right_value569, ((struct sNode*)right_value569)->finalize, ((struct sNode*)right_value569)->_protocol_obj, 1, 0, 0); } 
                                _inf_value30=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2498);
                                _inf_obj_value30=come_increment_ref_count(((struct sEqNode*)(right_value571=sEqNode_initialize((struct sEqNode*)come_increment_ref_count(((struct sEqNode*)(right_value570=(struct sEqNode*)come_calloc(1, sizeof(struct sEqNode)*(1), "13op.c", 2498)))),(struct sNode*)come_increment_ref_count(node_286),(struct sNode*)come_increment_ref_count(right_297),(_Bool)1,info))));
                                _inf_value30->_protocol_obj=_inf_obj_value30;
                                _inf_value30->finalize=(void*)sEqNode_finalize;
                                _inf_value30->clone=(void*)sEqNode_clone;
                                _inf_value30->compile=(void*)sEqNode_compile;
                                _inf_value30->sline=(void*)sEqNode_sline;
                                _inf_value30->sname=(void*)sEqNode_sname;
                                _inf_value30->terminated=(void*)sEqNode_terminated;
                                _inf_value30->kind=(void*)sEqNode_kind;
                                __result335__ = __result_obj__ = ((struct sNode*)(right_value576=_inf_value30));
                                if(right_297) { right_297 = come_decrement_ref_count(right_297, ((struct sNode*)right_297)->finalize, ((struct sNode*)right_297)->_protocol_obj, 0, 0, 0); } 
                                if(node_286) { node_286 = come_decrement_ref_count(node_286, ((struct sNode*)node_286)->finalize, ((struct sNode*)node_286)->_protocol_obj, 0, 0, 0); } 
                                if(right_value570 && right_value570 != __result_obj__) { come_call_finalizer(sEqNode_finalize,right_value570, (void*)0, (void*)0, 0, 1, 0, 0); }
                                if(right_value571 && right_value571 != __result_obj__) { come_call_finalizer(sEqNode_finalize,right_value571, (void*)0, (void*)0, 0, 1, 0, 0); }
                                return __result335__;
                                if(right_297) { right_297 = come_decrement_ref_count(right_297, ((struct sNode*)right_297)->finalize, ((struct sNode*)right_297)->_protocol_obj, 0, 0, 0); } 
                            }
                            else {
                                if(_if_conditional562=*info->p==92&&*(info->p+1)==33&&*(info->p+2)==61&&*(info->p+3)==61,                                _if_conditional562) {
                                    info->p+=4;
                                    skip_spaces_and_lf(info);
                                    right_299=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value577=eq_exp(info))));
                                    if(right_value577 && right_value577 != __result_obj__) { right_value577 = come_decrement_ref_count(right_value577, ((struct sNode*)right_value577)->finalize, ((struct sNode*)right_value577)->_protocol_obj, 1, 0, 0); } 
                                    _inf_value31=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2506);
                                    _inf_obj_value31=come_increment_ref_count(((struct sNotEq2Node*)(right_value579=sNotEq2Node_initialize((struct sNotEq2Node*)come_increment_ref_count(((struct sNotEq2Node*)(right_value578=(struct sNotEq2Node*)come_calloc(1, sizeof(struct sNotEq2Node)*(1), "13op.c", 2506)))),(struct sNode*)come_increment_ref_count(node_286),(struct sNode*)come_increment_ref_count(right_299),(_Bool)1,info))));
                                    _inf_value31->_protocol_obj=_inf_obj_value31;
                                    _inf_value31->finalize=(void*)sNotEq2Node_finalize;
                                    _inf_value31->clone=(void*)sNotEq2Node_clone;
                                    _inf_value31->compile=(void*)sNotEq2Node_compile;
                                    _inf_value31->sline=(void*)sNotEq2Node_sline;
                                    _inf_value31->sname=(void*)sNotEq2Node_sname;
                                    _inf_value31->terminated=(void*)sNotEq2Node_terminated;
                                    _inf_value31->kind=(void*)sNotEq2Node_kind;
                                    __result338__ = __result_obj__ = ((struct sNode*)(right_value584=_inf_value31));
                                    if(right_299) { right_299 = come_decrement_ref_count(right_299, ((struct sNode*)right_299)->finalize, ((struct sNode*)right_299)->_protocol_obj, 0, 0, 0); } 
                                    if(node_286) { node_286 = come_decrement_ref_count(node_286, ((struct sNode*)node_286)->finalize, ((struct sNode*)node_286)->_protocol_obj, 0, 0, 0); } 
                                    if(right_value578 && right_value578 != __result_obj__) { come_call_finalizer(sNotEq2Node_finalize,right_value578, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    if(right_value579 && right_value579 != __result_obj__) { come_call_finalizer(sNotEq2Node_finalize,right_value579, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    return __result338__;
                                    if(right_299) { right_299 = come_decrement_ref_count(right_299, ((struct sNode*)right_299)->finalize, ((struct sNode*)right_299)->_protocol_obj, 0, 0, 0); } 
                                }
                                else {
                                    if(_if_conditional572=*info->p==92&&*(info->p+1)==33&&*(info->p+2)==61,                                    _if_conditional572) {
                                        info->p+=3;
                                        skip_spaces_and_lf(info);
                                        right_301=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value585=eq_exp(info))));
                                        if(right_value585 && right_value585 != __result_obj__) { right_value585 = come_decrement_ref_count(right_value585, ((struct sNode*)right_value585)->finalize, ((struct sNode*)right_value585)->_protocol_obj, 1, 0, 0); } 
                                        _inf_value32=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2514);
                                        _inf_obj_value32=come_increment_ref_count(((struct sNotEqNode*)(right_value587=sNotEqNode_initialize((struct sNotEqNode*)come_increment_ref_count(((struct sNotEqNode*)(right_value586=(struct sNotEqNode*)come_calloc(1, sizeof(struct sNotEqNode)*(1), "13op.c", 2514)))),(struct sNode*)come_increment_ref_count(node_286),(struct sNode*)come_increment_ref_count(right_301),(_Bool)1,info))));
                                        _inf_value32->_protocol_obj=_inf_obj_value32;
                                        _inf_value32->finalize=(void*)sNotEqNode_finalize;
                                        _inf_value32->clone=(void*)sNotEqNode_clone;
                                        _inf_value32->compile=(void*)sNotEqNode_compile;
                                        _inf_value32->sline=(void*)sNotEqNode_sline;
                                        _inf_value32->sname=(void*)sNotEqNode_sname;
                                        _inf_value32->terminated=(void*)sNotEqNode_terminated;
                                        _inf_value32->kind=(void*)sNotEqNode_kind;
                                        __result341__ = __result_obj__ = ((struct sNode*)(right_value592=_inf_value32));
                                        if(right_301) { right_301 = come_decrement_ref_count(right_301, ((struct sNode*)right_301)->finalize, ((struct sNode*)right_301)->_protocol_obj, 0, 0, 0); } 
                                        if(node_286) { node_286 = come_decrement_ref_count(node_286, ((struct sNode*)node_286)->finalize, ((struct sNode*)node_286)->_protocol_obj, 0, 0, 0); } 
                                        if(right_value586 && right_value586 != __result_obj__) { come_call_finalizer(sNotEqNode_finalize,right_value586, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        if(right_value587 && right_value587 != __result_obj__) { come_call_finalizer(sNotEqNode_finalize,right_value587, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        return __result341__;
                                        if(right_301) { right_301 = come_decrement_ref_count(right_301, ((struct sNode*)right_301)->finalize, ((struct sNode*)right_301)->_protocol_obj, 0, 0, 0); } 
                                    }
                                    else {
                                        break;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    parse_sharp_v5(info);
    __result342__ = __result_obj__ = node_286;
    if(node_286) { node_286 = come_decrement_ref_count(node_286, ((struct sNode*)node_286)->finalize, ((struct sNode*)node_286)->_protocol_obj, 0, 1, 0); } 
    return __result342__;
    if(node_286) { node_286 = come_decrement_ref_count(node_286, ((struct sNode*)node_286)->finalize, ((struct sNode*)node_286)->_protocol_obj, 0, 0, 0); } 
}

static void sEq2Node_finalize(struct sEq2Node* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional543;
_Bool _if_conditional544;
_Bool _if_conditional545;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional543=self!=((void*)0)&&self->mLeft!=((void*)0),                                _if_conditional543) {
                                    if(self->mLeft) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0); } 
                                }
                                if(_if_conditional544=self!=((void*)0)&&self->mRight!=((void*)0),                                _if_conditional544) {
                                    if(self->mRight) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0); } 
                                }
                                if(_if_conditional545=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional545) {
                                    if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                                }
}

static struct sEq2Node* sEq2Node_clone(struct sEq2Node* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional546;
struct sEq2Node* __result330__;
void* right_value564;
struct sEq2Node* result_296;
_Bool _if_conditional547;
void* right_value565;
struct sNode* __dec_obj241;
_Bool _if_conditional548;
void* right_value566;
struct sNode* __dec_obj242;
_Bool _if_conditional549;
_Bool _if_conditional550;
_Bool _if_conditional551;
void* right_value567;
char* __dec_obj243;
struct sEq2Node* __result331__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_296, 0, sizeof(struct sEq2Node*));
                                if(_if_conditional546=self==(void*)0,                                _if_conditional546) {
                                    __result330__ = __result_obj__ = (void*)0;
                                    return __result330__;
                                }
                                result_296=(struct sEq2Node*)come_increment_ref_count(((struct sEq2Node*)(right_value564=(struct sEq2Node*)come_calloc(1, sizeof(struct sEq2Node)*(1), "sEq2Node_clone", 3))));
                                if(right_value564 && right_value564 != __result_obj__) { come_call_finalizer(sEq2Node_finalize,right_value564, (void*)0, (void*)0, 0, 1, 0, 0); }
                                if(_if_conditional547=self!=((void*)0)&&self->mLeft!=((void*)0),                                _if_conditional547) {
                                    __dec_obj241=result_296->mLeft;
                                    result_296->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value565=sNode_clone(self->mLeft))));
                                    if(__dec_obj241) { __dec_obj241 = come_decrement_ref_count(__dec_obj241, ((struct sNode*)__dec_obj241)->finalize, ((struct sNode*)__dec_obj241)->_protocol_obj, 0,0,0); }
                                    if(right_value565 && right_value565 != __result_obj__) { right_value565 = come_decrement_ref_count(right_value565, ((struct sNode*)right_value565)->finalize, ((struct sNode*)right_value565)->_protocol_obj, 1, 0, 0); } 
                                }
                                if(_if_conditional548=self!=((void*)0)&&self->mRight!=((void*)0),                                _if_conditional548) {
                                    __dec_obj242=result_296->mRight;
                                    result_296->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value566=sNode_clone(self->mRight))));
                                    if(__dec_obj242) { __dec_obj242 = come_decrement_ref_count(__dec_obj242, ((struct sNode*)__dec_obj242)->finalize, ((struct sNode*)__dec_obj242)->_protocol_obj, 0,0,0); }
                                    if(right_value566 && right_value566 != __result_obj__) { right_value566 = come_decrement_ref_count(right_value566, ((struct sNode*)right_value566)->finalize, ((struct sNode*)right_value566)->_protocol_obj, 1, 0, 0); } 
                                }
                                if(_if_conditional549=self!=((void*)0),                                _if_conditional549) {
                                    result_296->mQuote=self->mQuote;
                                }
                                if(_if_conditional550=self!=((void*)0),                                _if_conditional550) {
                                    result_296->sline=self->sline;
                                }
                                if(_if_conditional551=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional551) {
                                    __dec_obj243=result_296->sname;
                                    result_296->sname=(char*)come_increment_ref_count(((char*)(right_value567=string_clone(self->sname))));
                                    if(__dec_obj243) { __dec_obj243 = come_decrement_ref_count(__dec_obj243, (void*)0, (void*)0, 0,0,0); }
                                    if(right_value567 && right_value567 != __result_obj__) { right_value567 = come_decrement_ref_count(right_value567, (void*)0, (void*)0, 1, 0, 0); }
                                }
                                __result331__ = __result_obj__ = result_296;
                                if(result_296) { come_call_finalizer(sEq2Node_finalize,result_296, (void*)0, (void*)0, 0, 0, 1, 0); }
                                return __result331__;
                                if(result_296) { come_call_finalizer(sEq2Node_finalize,result_296, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sEqNode_finalize(struct sEqNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional553;
_Bool _if_conditional554;
_Bool _if_conditional555;
memset(&__result_obj__, 0, sizeof(void*));
                                    if(_if_conditional553=self!=((void*)0)&&self->mLeft!=((void*)0),                                    _if_conditional553) {
                                        if(self->mLeft) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0); } 
                                    }
                                    if(_if_conditional554=self!=((void*)0)&&self->mRight!=((void*)0),                                    _if_conditional554) {
                                        if(self->mRight) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0); } 
                                    }
                                    if(_if_conditional555=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional555) {
                                        if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                                    }
}

static struct sEqNode* sEqNode_clone(struct sEqNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional556;
struct sEqNode* __result333__;
void* right_value572;
struct sEqNode* result_298;
_Bool _if_conditional557;
void* right_value573;
struct sNode* __dec_obj244;
_Bool _if_conditional558;
void* right_value574;
struct sNode* __dec_obj245;
_Bool _if_conditional559;
_Bool _if_conditional560;
_Bool _if_conditional561;
void* right_value575;
char* __dec_obj246;
struct sEqNode* __result334__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_298, 0, sizeof(struct sEqNode*));
                                    if(_if_conditional556=self==(void*)0,                                    _if_conditional556) {
                                        __result333__ = __result_obj__ = (void*)0;
                                        return __result333__;
                                    }
                                    result_298=(struct sEqNode*)come_increment_ref_count(((struct sEqNode*)(right_value572=(struct sEqNode*)come_calloc(1, sizeof(struct sEqNode)*(1), "sEqNode_clone", 3))));
                                    if(right_value572 && right_value572 != __result_obj__) { come_call_finalizer(sEqNode_finalize,right_value572, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    if(_if_conditional557=self!=((void*)0)&&self->mLeft!=((void*)0),                                    _if_conditional557) {
                                        __dec_obj244=result_298->mLeft;
                                        result_298->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value573=sNode_clone(self->mLeft))));
                                        if(__dec_obj244) { __dec_obj244 = come_decrement_ref_count(__dec_obj244, ((struct sNode*)__dec_obj244)->finalize, ((struct sNode*)__dec_obj244)->_protocol_obj, 0,0,0); }
                                        if(right_value573 && right_value573 != __result_obj__) { right_value573 = come_decrement_ref_count(right_value573, ((struct sNode*)right_value573)->finalize, ((struct sNode*)right_value573)->_protocol_obj, 1, 0, 0); } 
                                    }
                                    if(_if_conditional558=self!=((void*)0)&&self->mRight!=((void*)0),                                    _if_conditional558) {
                                        __dec_obj245=result_298->mRight;
                                        result_298->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value574=sNode_clone(self->mRight))));
                                        if(__dec_obj245) { __dec_obj245 = come_decrement_ref_count(__dec_obj245, ((struct sNode*)__dec_obj245)->finalize, ((struct sNode*)__dec_obj245)->_protocol_obj, 0,0,0); }
                                        if(right_value574 && right_value574 != __result_obj__) { right_value574 = come_decrement_ref_count(right_value574, ((struct sNode*)right_value574)->finalize, ((struct sNode*)right_value574)->_protocol_obj, 1, 0, 0); } 
                                    }
                                    if(_if_conditional559=self!=((void*)0),                                    _if_conditional559) {
                                        result_298->mQuote=self->mQuote;
                                    }
                                    if(_if_conditional560=self!=((void*)0),                                    _if_conditional560) {
                                        result_298->sline=self->sline;
                                    }
                                    if(_if_conditional561=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional561) {
                                        __dec_obj246=result_298->sname;
                                        result_298->sname=(char*)come_increment_ref_count(((char*)(right_value575=string_clone(self->sname))));
                                        if(__dec_obj246) { __dec_obj246 = come_decrement_ref_count(__dec_obj246, (void*)0, (void*)0, 0,0,0); }
                                        if(right_value575 && right_value575 != __result_obj__) { right_value575 = come_decrement_ref_count(right_value575, (void*)0, (void*)0, 1, 0, 0); }
                                    }
                                    __result334__ = __result_obj__ = result_298;
                                    if(result_298) { come_call_finalizer(sEqNode_finalize,result_298, (void*)0, (void*)0, 0, 0, 1, 0); }
                                    return __result334__;
                                    if(result_298) { come_call_finalizer(sEqNode_finalize,result_298, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sNotEq2Node_finalize(struct sNotEq2Node* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional563;
_Bool _if_conditional564;
_Bool _if_conditional565;
memset(&__result_obj__, 0, sizeof(void*));
                                        if(_if_conditional563=self!=((void*)0)&&self->mLeft!=((void*)0),                                        _if_conditional563) {
                                            if(self->mLeft) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0); } 
                                        }
                                        if(_if_conditional564=self!=((void*)0)&&self->mRight!=((void*)0),                                        _if_conditional564) {
                                            if(self->mRight) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0); } 
                                        }
                                        if(_if_conditional565=self!=((void*)0)&&self->sname!=((void*)0),                                        _if_conditional565) {
                                            if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                                        }
}

static struct sNotEq2Node* sNotEq2Node_clone(struct sNotEq2Node* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional566;
struct sNotEq2Node* __result336__;
void* right_value580;
struct sNotEq2Node* result_300;
_Bool _if_conditional567;
void* right_value581;
struct sNode* __dec_obj247;
_Bool _if_conditional568;
void* right_value582;
struct sNode* __dec_obj248;
_Bool _if_conditional569;
_Bool _if_conditional570;
_Bool _if_conditional571;
void* right_value583;
char* __dec_obj249;
struct sNotEq2Node* __result337__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_300, 0, sizeof(struct sNotEq2Node*));
                                        if(_if_conditional566=self==(void*)0,                                        _if_conditional566) {
                                            __result336__ = __result_obj__ = (void*)0;
                                            return __result336__;
                                        }
                                        result_300=(struct sNotEq2Node*)come_increment_ref_count(((struct sNotEq2Node*)(right_value580=(struct sNotEq2Node*)come_calloc(1, sizeof(struct sNotEq2Node)*(1), "sNotEq2Node_clone", 3))));
                                        if(right_value580 && right_value580 != __result_obj__) { come_call_finalizer(sNotEq2Node_finalize,right_value580, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        if(_if_conditional567=self!=((void*)0)&&self->mLeft!=((void*)0),                                        _if_conditional567) {
                                            __dec_obj247=result_300->mLeft;
                                            result_300->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value581=sNode_clone(self->mLeft))));
                                            if(__dec_obj247) { __dec_obj247 = come_decrement_ref_count(__dec_obj247, ((struct sNode*)__dec_obj247)->finalize, ((struct sNode*)__dec_obj247)->_protocol_obj, 0,0,0); }
                                            if(right_value581 && right_value581 != __result_obj__) { right_value581 = come_decrement_ref_count(right_value581, ((struct sNode*)right_value581)->finalize, ((struct sNode*)right_value581)->_protocol_obj, 1, 0, 0); } 
                                        }
                                        if(_if_conditional568=self!=((void*)0)&&self->mRight!=((void*)0),                                        _if_conditional568) {
                                            __dec_obj248=result_300->mRight;
                                            result_300->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value582=sNode_clone(self->mRight))));
                                            if(__dec_obj248) { __dec_obj248 = come_decrement_ref_count(__dec_obj248, ((struct sNode*)__dec_obj248)->finalize, ((struct sNode*)__dec_obj248)->_protocol_obj, 0,0,0); }
                                            if(right_value582 && right_value582 != __result_obj__) { right_value582 = come_decrement_ref_count(right_value582, ((struct sNode*)right_value582)->finalize, ((struct sNode*)right_value582)->_protocol_obj, 1, 0, 0); } 
                                        }
                                        if(_if_conditional569=self!=((void*)0),                                        _if_conditional569) {
                                            result_300->mQuote=self->mQuote;
                                        }
                                        if(_if_conditional570=self!=((void*)0),                                        _if_conditional570) {
                                            result_300->sline=self->sline;
                                        }
                                        if(_if_conditional571=self!=((void*)0)&&self->sname!=((void*)0),                                        _if_conditional571) {
                                            __dec_obj249=result_300->sname;
                                            result_300->sname=(char*)come_increment_ref_count(((char*)(right_value583=string_clone(self->sname))));
                                            if(__dec_obj249) { __dec_obj249 = come_decrement_ref_count(__dec_obj249, (void*)0, (void*)0, 0,0,0); }
                                            if(right_value583 && right_value583 != __result_obj__) { right_value583 = come_decrement_ref_count(right_value583, (void*)0, (void*)0, 1, 0, 0); }
                                        }
                                        __result337__ = __result_obj__ = result_300;
                                        if(result_300) { come_call_finalizer(sNotEq2Node_finalize,result_300, (void*)0, (void*)0, 0, 0, 1, 0); }
                                        return __result337__;
                                        if(result_300) { come_call_finalizer(sNotEq2Node_finalize,result_300, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sNotEqNode_finalize(struct sNotEqNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional573;
_Bool _if_conditional574;
_Bool _if_conditional575;
memset(&__result_obj__, 0, sizeof(void*));
                                            if(_if_conditional573=self!=((void*)0)&&self->mLeft!=((void*)0),                                            _if_conditional573) {
                                                if(self->mLeft) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0); } 
                                            }
                                            if(_if_conditional574=self!=((void*)0)&&self->mRight!=((void*)0),                                            _if_conditional574) {
                                                if(self->mRight) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0); } 
                                            }
                                            if(_if_conditional575=self!=((void*)0)&&self->sname!=((void*)0),                                            _if_conditional575) {
                                                if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                                            }
}

static struct sNotEqNode* sNotEqNode_clone(struct sNotEqNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional576;
struct sNotEqNode* __result339__;
void* right_value588;
struct sNotEqNode* result_302;
_Bool _if_conditional577;
void* right_value589;
struct sNode* __dec_obj250;
_Bool _if_conditional578;
void* right_value590;
struct sNode* __dec_obj251;
_Bool _if_conditional579;
_Bool _if_conditional580;
_Bool _if_conditional581;
void* right_value591;
char* __dec_obj252;
struct sNotEqNode* __result340__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_302, 0, sizeof(struct sNotEqNode*));
                                            if(_if_conditional576=self==(void*)0,                                            _if_conditional576) {
                                                __result339__ = __result_obj__ = (void*)0;
                                                return __result339__;
                                            }
                                            result_302=(struct sNotEqNode*)come_increment_ref_count(((struct sNotEqNode*)(right_value588=(struct sNotEqNode*)come_calloc(1, sizeof(struct sNotEqNode)*(1), "sNotEqNode_clone", 3))));
                                            if(right_value588 && right_value588 != __result_obj__) { come_call_finalizer(sNotEqNode_finalize,right_value588, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            if(_if_conditional577=self!=((void*)0)&&self->mLeft!=((void*)0),                                            _if_conditional577) {
                                                __dec_obj250=result_302->mLeft;
                                                result_302->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value589=sNode_clone(self->mLeft))));
                                                if(__dec_obj250) { __dec_obj250 = come_decrement_ref_count(__dec_obj250, ((struct sNode*)__dec_obj250)->finalize, ((struct sNode*)__dec_obj250)->_protocol_obj, 0,0,0); }
                                                if(right_value589 && right_value589 != __result_obj__) { right_value589 = come_decrement_ref_count(right_value589, ((struct sNode*)right_value589)->finalize, ((struct sNode*)right_value589)->_protocol_obj, 1, 0, 0); } 
                                            }
                                            if(_if_conditional578=self!=((void*)0)&&self->mRight!=((void*)0),                                            _if_conditional578) {
                                                __dec_obj251=result_302->mRight;
                                                result_302->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value590=sNode_clone(self->mRight))));
                                                if(__dec_obj251) { __dec_obj251 = come_decrement_ref_count(__dec_obj251, ((struct sNode*)__dec_obj251)->finalize, ((struct sNode*)__dec_obj251)->_protocol_obj, 0,0,0); }
                                                if(right_value590 && right_value590 != __result_obj__) { right_value590 = come_decrement_ref_count(right_value590, ((struct sNode*)right_value590)->finalize, ((struct sNode*)right_value590)->_protocol_obj, 1, 0, 0); } 
                                            }
                                            if(_if_conditional579=self!=((void*)0),                                            _if_conditional579) {
                                                result_302->mQuote=self->mQuote;
                                            }
                                            if(_if_conditional580=self!=((void*)0),                                            _if_conditional580) {
                                                result_302->sline=self->sline;
                                            }
                                            if(_if_conditional581=self!=((void*)0)&&self->sname!=((void*)0),                                            _if_conditional581) {
                                                __dec_obj252=result_302->sname;
                                                result_302->sname=(char*)come_increment_ref_count(((char*)(right_value591=string_clone(self->sname))));
                                                if(__dec_obj252) { __dec_obj252 = come_decrement_ref_count(__dec_obj252, (void*)0, (void*)0, 0,0,0); }
                                                if(right_value591 && right_value591 != __result_obj__) { right_value591 = come_decrement_ref_count(right_value591, (void*)0, (void*)0, 1, 0, 0); }
                                            }
                                            __result340__ = __result_obj__ = result_302;
                                            if(result_302) { come_call_finalizer(sNotEqNode_finalize,result_302, (void*)0, (void*)0, 0, 0, 1, 0); }
                                            return __result340__;
                                            if(result_302) { come_call_finalizer(sNotEqNode_finalize,result_302, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sNode* and_exp(struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value593;
struct sNode* node_303;
_Bool _while_condtional15;
_Bool _if_conditional582;
void* right_value594;
struct sNode* right_304;
void* right_value595;
void* right_value596;
struct sNode* _inf_value33;
struct sAndNode* _inf_obj_value33;
void* right_value601;
struct sNode* __result345__;
_Bool _if_conditional592;
void* right_value602;
struct sNode* right_306;
void* right_value603;
void* right_value604;
struct sNode* _inf_value34;
struct sAndNode* _inf_obj_value34;
void* right_value609;
struct sNode* __result348__;
struct sNode* __result349__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&node_303, 0, sizeof(struct sNode*));
memset(&right_304, 0, sizeof(struct sNode*));
memset(&right_306, 0, sizeof(struct sNode*));
    parse_sharp_v5(info);
    node_303=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value593=eq_exp(info))));
    if(right_value593 && right_value593 != __result_obj__) { right_value593 = come_decrement_ref_count(right_value593, ((struct sNode*)right_value593)->finalize, ((struct sNode*)right_value593)->_protocol_obj, 1, 0, 0); } 
    parse_sharp_v5(info);
    while(_while_condtional15=*info->p,    _while_condtional15) {
        if(_if_conditional582=*info->p==38&&*(info->p+1)!=38&&*(info->p+1)!=61,        _if_conditional582) {
            info->p++;
            skip_spaces_and_lf(info);
            right_304=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value594=and_exp(info))));
            if(right_value594 && right_value594 != __result_obj__) { right_value594 = come_decrement_ref_count(right_value594, ((struct sNode*)right_value594)->finalize, ((struct sNode*)right_value594)->_protocol_obj, 1, 0, 0); } 
            _inf_value33=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2541);
            _inf_obj_value33=come_increment_ref_count(((struct sAndNode*)(right_value596=sAndNode_initialize((struct sAndNode*)come_increment_ref_count(((struct sAndNode*)(right_value595=(struct sAndNode*)come_calloc(1, sizeof(struct sAndNode)*(1), "13op.c", 2541)))),(struct sNode*)come_increment_ref_count(node_303),(struct sNode*)come_increment_ref_count(right_304),(_Bool)0,info))));
            _inf_value33->_protocol_obj=_inf_obj_value33;
            _inf_value33->finalize=(void*)sAndNode_finalize;
            _inf_value33->clone=(void*)sAndNode_clone;
            _inf_value33->compile=(void*)sAndNode_compile;
            _inf_value33->sline=(void*)sAndNode_sline;
            _inf_value33->sname=(void*)sAndNode_sname;
            _inf_value33->terminated=(void*)sAndNode_terminated;
            _inf_value33->kind=(void*)sAndNode_kind;
            __result345__ = __result_obj__ = ((struct sNode*)(right_value601=_inf_value33));
            if(right_304) { right_304 = come_decrement_ref_count(right_304, ((struct sNode*)right_304)->finalize, ((struct sNode*)right_304)->_protocol_obj, 0, 0, 0); } 
            if(node_303) { node_303 = come_decrement_ref_count(node_303, ((struct sNode*)node_303)->finalize, ((struct sNode*)node_303)->_protocol_obj, 0, 0, 0); } 
            if(right_value595 && right_value595 != __result_obj__) { come_call_finalizer(sAndNode_finalize,right_value595, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value596 && right_value596 != __result_obj__) { come_call_finalizer(sAndNode_finalize,right_value596, (void*)0, (void*)0, 0, 1, 0, 0); }
            return __result345__;
            if(right_304) { right_304 = come_decrement_ref_count(right_304, ((struct sNode*)right_304)->finalize, ((struct sNode*)right_304)->_protocol_obj, 0, 0, 0); } 
        }
        else {
            if(_if_conditional592=*info->p==92&&*(info->p+1)==38&&*(info->p+2)!=38&&*(info->p+2)!=61,            _if_conditional592) {
                info->p+=2;
                skip_spaces_and_lf(info);
                right_306=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value602=and_exp(info))));
                if(right_value602 && right_value602 != __result_obj__) { right_value602 = come_decrement_ref_count(right_value602, ((struct sNode*)right_value602)->finalize, ((struct sNode*)right_value602)->_protocol_obj, 1, 0, 0); } 
                _inf_value34=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2549);
                _inf_obj_value34=come_increment_ref_count(((struct sAndNode*)(right_value604=sAndNode_initialize((struct sAndNode*)come_increment_ref_count(((struct sAndNode*)(right_value603=(struct sAndNode*)come_calloc(1, sizeof(struct sAndNode)*(1), "13op.c", 2549)))),(struct sNode*)come_increment_ref_count(node_303),(struct sNode*)come_increment_ref_count(right_306),(_Bool)1,info))));
                _inf_value34->_protocol_obj=_inf_obj_value34;
                _inf_value34->finalize=(void*)sAndNode_finalize;
                _inf_value34->clone=(void*)sAndNode_clone;
                _inf_value34->compile=(void*)sAndNode_compile;
                _inf_value34->sline=(void*)sAndNode_sline;
                _inf_value34->sname=(void*)sAndNode_sname;
                _inf_value34->terminated=(void*)sAndNode_terminated;
                _inf_value34->kind=(void*)sAndNode_kind;
                __result348__ = __result_obj__ = ((struct sNode*)(right_value609=_inf_value34));
                if(right_306) { right_306 = come_decrement_ref_count(right_306, ((struct sNode*)right_306)->finalize, ((struct sNode*)right_306)->_protocol_obj, 0, 0, 0); } 
                if(node_303) { node_303 = come_decrement_ref_count(node_303, ((struct sNode*)node_303)->finalize, ((struct sNode*)node_303)->_protocol_obj, 0, 0, 0); } 
                if(right_value603 && right_value603 != __result_obj__) { come_call_finalizer(sAndNode_finalize,right_value603, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value604 && right_value604 != __result_obj__) { come_call_finalizer(sAndNode_finalize,right_value604, (void*)0, (void*)0, 0, 1, 0, 0); }
                return __result348__;
                if(right_306) { right_306 = come_decrement_ref_count(right_306, ((struct sNode*)right_306)->finalize, ((struct sNode*)right_306)->_protocol_obj, 0, 0, 0); } 
            }
            else {
                break;
            }
        }
    }
    parse_sharp_v5(info);
    __result349__ = __result_obj__ = node_303;
    if(node_303) { node_303 = come_decrement_ref_count(node_303, ((struct sNode*)node_303)->finalize, ((struct sNode*)node_303)->_protocol_obj, 0, 1, 0); } 
    return __result349__;
    if(node_303) { node_303 = come_decrement_ref_count(node_303, ((struct sNode*)node_303)->finalize, ((struct sNode*)node_303)->_protocol_obj, 0, 0, 0); } 
}

static void sAndNode_finalize(struct sAndNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional593;
_Bool _if_conditional594;
_Bool _if_conditional595;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional593=self!=((void*)0)&&self->mLeft!=((void*)0),                    _if_conditional593) {
                        if(self->mLeft) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0); } 
                    }
                    if(_if_conditional594=self!=((void*)0)&&self->mRight!=((void*)0),                    _if_conditional594) {
                        if(self->mRight) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0); } 
                    }
                    if(_if_conditional595=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional595) {
                        if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                    }
}

static struct sAndNode* sAndNode_clone(struct sAndNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional596;
struct sAndNode* __result346__;
void* right_value605;
struct sAndNode* result_307;
_Bool _if_conditional597;
void* right_value606;
struct sNode* __dec_obj256;
_Bool _if_conditional598;
void* right_value607;
struct sNode* __dec_obj257;
_Bool _if_conditional599;
_Bool _if_conditional600;
_Bool _if_conditional601;
void* right_value608;
char* __dec_obj258;
struct sAndNode* __result347__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_307, 0, sizeof(struct sAndNode*));
                    if(_if_conditional596=self==(void*)0,                    _if_conditional596) {
                        __result346__ = __result_obj__ = (void*)0;
                        return __result346__;
                    }
                    result_307=(struct sAndNode*)come_increment_ref_count(((struct sAndNode*)(right_value605=(struct sAndNode*)come_calloc(1, sizeof(struct sAndNode)*(1), "sAndNode_clone", 3))));
                    if(right_value605 && right_value605 != __result_obj__) { come_call_finalizer(sAndNode_finalize,right_value605, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(_if_conditional597=self!=((void*)0)&&self->mLeft!=((void*)0),                    _if_conditional597) {
                        __dec_obj256=result_307->mLeft;
                        result_307->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value606=sNode_clone(self->mLeft))));
                        if(__dec_obj256) { __dec_obj256 = come_decrement_ref_count(__dec_obj256, ((struct sNode*)__dec_obj256)->finalize, ((struct sNode*)__dec_obj256)->_protocol_obj, 0,0,0); }
                        if(right_value606 && right_value606 != __result_obj__) { right_value606 = come_decrement_ref_count(right_value606, ((struct sNode*)right_value606)->finalize, ((struct sNode*)right_value606)->_protocol_obj, 1, 0, 0); } 
                    }
                    if(_if_conditional598=self!=((void*)0)&&self->mRight!=((void*)0),                    _if_conditional598) {
                        __dec_obj257=result_307->mRight;
                        result_307->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value607=sNode_clone(self->mRight))));
                        if(__dec_obj257) { __dec_obj257 = come_decrement_ref_count(__dec_obj257, ((struct sNode*)__dec_obj257)->finalize, ((struct sNode*)__dec_obj257)->_protocol_obj, 0,0,0); }
                        if(right_value607 && right_value607 != __result_obj__) { right_value607 = come_decrement_ref_count(right_value607, ((struct sNode*)right_value607)->finalize, ((struct sNode*)right_value607)->_protocol_obj, 1, 0, 0); } 
                    }
                    if(_if_conditional599=self!=((void*)0),                    _if_conditional599) {
                        result_307->mQuote=self->mQuote;
                    }
                    if(_if_conditional600=self!=((void*)0),                    _if_conditional600) {
                        result_307->sline=self->sline;
                    }
                    if(_if_conditional601=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional601) {
                        __dec_obj258=result_307->sname;
                        result_307->sname=(char*)come_increment_ref_count(((char*)(right_value608=string_clone(self->sname))));
                        if(__dec_obj258) { __dec_obj258 = come_decrement_ref_count(__dec_obj258, (void*)0, (void*)0, 0,0,0); }
                        if(right_value608 && right_value608 != __result_obj__) { right_value608 = come_decrement_ref_count(right_value608, (void*)0, (void*)0, 1, 0, 0); }
                    }
                    __result347__ = __result_obj__ = result_307;
                    if(result_307) { come_call_finalizer(sAndNode_finalize,result_307, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result347__;
                    if(result_307) { come_call_finalizer(sAndNode_finalize,result_307, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sNode* xor_exp(struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value610;
struct sNode* node_308;
_Bool _while_condtional16;
_Bool _if_conditional602;
void* right_value611;
struct sNode* right_309;
void* right_value612;
void* right_value613;
struct sNode* _inf_value35;
struct sXOrNode* _inf_obj_value35;
void* right_value618;
struct sNode* __result352__;
_Bool _if_conditional612;
void* right_value619;
struct sNode* right_311;
void* right_value620;
void* right_value621;
struct sNode* _inf_value36;
struct sXOrNode* _inf_obj_value36;
void* right_value626;
struct sNode* __result355__;
struct sNode* __result356__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&node_308, 0, sizeof(struct sNode*));
memset(&right_309, 0, sizeof(struct sNode*));
memset(&right_311, 0, sizeof(struct sNode*));
    parse_sharp_v5(info);
    node_308=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value610=and_exp(info))));
    if(right_value610 && right_value610 != __result_obj__) { right_value610 = come_decrement_ref_count(right_value610, ((struct sNode*)right_value610)->finalize, ((struct sNode*)right_value610)->_protocol_obj, 1, 0, 0); } 
    parse_sharp_v5(info);
    while(_while_condtional16=*info->p,    _while_condtional16) {
        if(_if_conditional602=*info->p==94&&*(info->p+1)!=61,        _if_conditional602) {
            info->p++;
            skip_spaces_and_lf(info);
            right_309=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value611=xor_exp(info))));
            if(right_value611 && right_value611 != __result_obj__) { right_value611 = come_decrement_ref_count(right_value611, ((struct sNode*)right_value611)->finalize, ((struct sNode*)right_value611)->_protocol_obj, 1, 0, 0); } 
            _inf_value35=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2576);
            _inf_obj_value35=come_increment_ref_count(((struct sXOrNode*)(right_value613=sXOrNode_initialize((struct sXOrNode*)come_increment_ref_count(((struct sXOrNode*)(right_value612=(struct sXOrNode*)come_calloc(1, sizeof(struct sXOrNode)*(1), "13op.c", 2576)))),(struct sNode*)come_increment_ref_count(node_308),(struct sNode*)come_increment_ref_count(right_309),(_Bool)0,info))));
            _inf_value35->_protocol_obj=_inf_obj_value35;
            _inf_value35->finalize=(void*)sXOrNode_finalize;
            _inf_value35->clone=(void*)sXOrNode_clone;
            _inf_value35->compile=(void*)sXOrNode_compile;
            _inf_value35->sline=(void*)sXOrNode_sline;
            _inf_value35->sname=(void*)sXOrNode_sname;
            _inf_value35->terminated=(void*)sXOrNode_terminated;
            _inf_value35->kind=(void*)sXOrNode_kind;
            __result352__ = __result_obj__ = ((struct sNode*)(right_value618=_inf_value35));
            if(right_309) { right_309 = come_decrement_ref_count(right_309, ((struct sNode*)right_309)->finalize, ((struct sNode*)right_309)->_protocol_obj, 0, 0, 0); } 
            if(node_308) { node_308 = come_decrement_ref_count(node_308, ((struct sNode*)node_308)->finalize, ((struct sNode*)node_308)->_protocol_obj, 0, 0, 0); } 
            if(right_value612 && right_value612 != __result_obj__) { come_call_finalizer(sXOrNode_finalize,right_value612, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value613 && right_value613 != __result_obj__) { come_call_finalizer(sXOrNode_finalize,right_value613, (void*)0, (void*)0, 0, 1, 0, 0); }
            return __result352__;
            if(right_309) { right_309 = come_decrement_ref_count(right_309, ((struct sNode*)right_309)->finalize, ((struct sNode*)right_309)->_protocol_obj, 0, 0, 0); } 
        }
        else {
            if(_if_conditional612=*info->p==92&&*(info->p+1)==94&&*(info->p+2)!=61,            _if_conditional612) {
                info->p+=2;
                skip_spaces_and_lf(info);
                right_311=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value619=xor_exp(info))));
                if(right_value619 && right_value619 != __result_obj__) { right_value619 = come_decrement_ref_count(right_value619, ((struct sNode*)right_value619)->finalize, ((struct sNode*)right_value619)->_protocol_obj, 1, 0, 0); } 
                _inf_value36=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2584);
                _inf_obj_value36=come_increment_ref_count(((struct sXOrNode*)(right_value621=sXOrNode_initialize((struct sXOrNode*)come_increment_ref_count(((struct sXOrNode*)(right_value620=(struct sXOrNode*)come_calloc(1, sizeof(struct sXOrNode)*(1), "13op.c", 2584)))),(struct sNode*)come_increment_ref_count(node_308),(struct sNode*)come_increment_ref_count(right_311),(_Bool)1,info))));
                _inf_value36->_protocol_obj=_inf_obj_value36;
                _inf_value36->finalize=(void*)sXOrNode_finalize;
                _inf_value36->clone=(void*)sXOrNode_clone;
                _inf_value36->compile=(void*)sXOrNode_compile;
                _inf_value36->sline=(void*)sXOrNode_sline;
                _inf_value36->sname=(void*)sXOrNode_sname;
                _inf_value36->terminated=(void*)sXOrNode_terminated;
                _inf_value36->kind=(void*)sXOrNode_kind;
                __result355__ = __result_obj__ = ((struct sNode*)(right_value626=_inf_value36));
                if(right_311) { right_311 = come_decrement_ref_count(right_311, ((struct sNode*)right_311)->finalize, ((struct sNode*)right_311)->_protocol_obj, 0, 0, 0); } 
                if(node_308) { node_308 = come_decrement_ref_count(node_308, ((struct sNode*)node_308)->finalize, ((struct sNode*)node_308)->_protocol_obj, 0, 0, 0); } 
                if(right_value620 && right_value620 != __result_obj__) { come_call_finalizer(sXOrNode_finalize,right_value620, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value621 && right_value621 != __result_obj__) { come_call_finalizer(sXOrNode_finalize,right_value621, (void*)0, (void*)0, 0, 1, 0, 0); }
                return __result355__;
                if(right_311) { right_311 = come_decrement_ref_count(right_311, ((struct sNode*)right_311)->finalize, ((struct sNode*)right_311)->_protocol_obj, 0, 0, 0); } 
            }
            else {
                break;
            }
        }
    }
    parse_sharp_v5(info);
    __result356__ = __result_obj__ = node_308;
    if(node_308) { node_308 = come_decrement_ref_count(node_308, ((struct sNode*)node_308)->finalize, ((struct sNode*)node_308)->_protocol_obj, 0, 1, 0); } 
    return __result356__;
    if(node_308) { node_308 = come_decrement_ref_count(node_308, ((struct sNode*)node_308)->finalize, ((struct sNode*)node_308)->_protocol_obj, 0, 0, 0); } 
}

static void sXOrNode_finalize(struct sXOrNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional613;
_Bool _if_conditional614;
_Bool _if_conditional615;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional613=self!=((void*)0)&&self->mLeft!=((void*)0),                    _if_conditional613) {
                        if(self->mLeft) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0); } 
                    }
                    if(_if_conditional614=self!=((void*)0)&&self->mRight!=((void*)0),                    _if_conditional614) {
                        if(self->mRight) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0); } 
                    }
                    if(_if_conditional615=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional615) {
                        if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                    }
}

static struct sXOrNode* sXOrNode_clone(struct sXOrNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional616;
struct sXOrNode* __result353__;
void* right_value622;
struct sXOrNode* result_312;
_Bool _if_conditional617;
void* right_value623;
struct sNode* __dec_obj262;
_Bool _if_conditional618;
void* right_value624;
struct sNode* __dec_obj263;
_Bool _if_conditional619;
_Bool _if_conditional620;
_Bool _if_conditional621;
void* right_value625;
char* __dec_obj264;
struct sXOrNode* __result354__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_312, 0, sizeof(struct sXOrNode*));
                    if(_if_conditional616=self==(void*)0,                    _if_conditional616) {
                        __result353__ = __result_obj__ = (void*)0;
                        return __result353__;
                    }
                    result_312=(struct sXOrNode*)come_increment_ref_count(((struct sXOrNode*)(right_value622=(struct sXOrNode*)come_calloc(1, sizeof(struct sXOrNode)*(1), "sXOrNode_clone", 3))));
                    if(right_value622 && right_value622 != __result_obj__) { come_call_finalizer(sXOrNode_finalize,right_value622, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(_if_conditional617=self!=((void*)0)&&self->mLeft!=((void*)0),                    _if_conditional617) {
                        __dec_obj262=result_312->mLeft;
                        result_312->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value623=sNode_clone(self->mLeft))));
                        if(__dec_obj262) { __dec_obj262 = come_decrement_ref_count(__dec_obj262, ((struct sNode*)__dec_obj262)->finalize, ((struct sNode*)__dec_obj262)->_protocol_obj, 0,0,0); }
                        if(right_value623 && right_value623 != __result_obj__) { right_value623 = come_decrement_ref_count(right_value623, ((struct sNode*)right_value623)->finalize, ((struct sNode*)right_value623)->_protocol_obj, 1, 0, 0); } 
                    }
                    if(_if_conditional618=self!=((void*)0)&&self->mRight!=((void*)0),                    _if_conditional618) {
                        __dec_obj263=result_312->mRight;
                        result_312->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value624=sNode_clone(self->mRight))));
                        if(__dec_obj263) { __dec_obj263 = come_decrement_ref_count(__dec_obj263, ((struct sNode*)__dec_obj263)->finalize, ((struct sNode*)__dec_obj263)->_protocol_obj, 0,0,0); }
                        if(right_value624 && right_value624 != __result_obj__) { right_value624 = come_decrement_ref_count(right_value624, ((struct sNode*)right_value624)->finalize, ((struct sNode*)right_value624)->_protocol_obj, 1, 0, 0); } 
                    }
                    if(_if_conditional619=self!=((void*)0),                    _if_conditional619) {
                        result_312->mQuote=self->mQuote;
                    }
                    if(_if_conditional620=self!=((void*)0),                    _if_conditional620) {
                        result_312->sline=self->sline;
                    }
                    if(_if_conditional621=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional621) {
                        __dec_obj264=result_312->sname;
                        result_312->sname=(char*)come_increment_ref_count(((char*)(right_value625=string_clone(self->sname))));
                        if(__dec_obj264) { __dec_obj264 = come_decrement_ref_count(__dec_obj264, (void*)0, (void*)0, 0,0,0); }
                        if(right_value625 && right_value625 != __result_obj__) { right_value625 = come_decrement_ref_count(right_value625, (void*)0, (void*)0, 1, 0, 0); }
                    }
                    __result354__ = __result_obj__ = result_312;
                    if(result_312) { come_call_finalizer(sXOrNode_finalize,result_312, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result354__;
                    if(result_312) { come_call_finalizer(sXOrNode_finalize,result_312, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sNode* or_exp(struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value627;
struct sNode* node_313;
_Bool _while_condtional17;
_Bool _if_conditional622;
void* right_value628;
struct sNode* right_314;
void* right_value629;
void* right_value630;
struct sNode* _inf_value37;
struct sOrNode* _inf_obj_value37;
void* right_value635;
struct sNode* __result359__;
_Bool _if_conditional632;
void* right_value636;
struct sNode* right_316;
void* right_value637;
void* right_value638;
struct sNode* _inf_value38;
struct sOrNode* _inf_obj_value38;
void* right_value643;
struct sNode* __result362__;
struct sNode* __result363__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&node_313, 0, sizeof(struct sNode*));
memset(&right_314, 0, sizeof(struct sNode*));
memset(&right_316, 0, sizeof(struct sNode*));
    parse_sharp_v5(info);
    node_313=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value627=xor_exp(info))));
    if(right_value627 && right_value627 != __result_obj__) { right_value627 = come_decrement_ref_count(right_value627, ((struct sNode*)right_value627)->finalize, ((struct sNode*)right_value627)->_protocol_obj, 1, 0, 0); } 
    parse_sharp_v5(info);
    while(_while_condtional17=*info->p,    _while_condtional17) {
        if(_if_conditional622=*info->p==124&&*(info->p+1)!=61&&*(info->p+1)!=124,        _if_conditional622) {
            info->p++;
            skip_spaces_and_lf(info);
            right_314=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value628=or_exp(info))));
            if(right_value628 && right_value628 != __result_obj__) { right_value628 = come_decrement_ref_count(right_value628, ((struct sNode*)right_value628)->finalize, ((struct sNode*)right_value628)->_protocol_obj, 1, 0, 0); } 
            _inf_value37=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2611);
            _inf_obj_value37=come_increment_ref_count(((struct sOrNode*)(right_value630=sOrNode_initialize((struct sOrNode*)come_increment_ref_count(((struct sOrNode*)(right_value629=(struct sOrNode*)come_calloc(1, sizeof(struct sOrNode)*(1), "13op.c", 2611)))),(struct sNode*)come_increment_ref_count(node_313),(struct sNode*)come_increment_ref_count(right_314),(_Bool)0,info))));
            _inf_value37->_protocol_obj=_inf_obj_value37;
            _inf_value37->finalize=(void*)sOrNode_finalize;
            _inf_value37->clone=(void*)sOrNode_clone;
            _inf_value37->compile=(void*)sOrNode_compile;
            _inf_value37->sline=(void*)sOrNode_sline;
            _inf_value37->sname=(void*)sOrNode_sname;
            _inf_value37->terminated=(void*)sOrNode_terminated;
            _inf_value37->kind=(void*)sOrNode_kind;
            __result359__ = __result_obj__ = ((struct sNode*)(right_value635=_inf_value37));
            if(right_314) { right_314 = come_decrement_ref_count(right_314, ((struct sNode*)right_314)->finalize, ((struct sNode*)right_314)->_protocol_obj, 0, 0, 0); } 
            if(node_313) { node_313 = come_decrement_ref_count(node_313, ((struct sNode*)node_313)->finalize, ((struct sNode*)node_313)->_protocol_obj, 0, 0, 0); } 
            if(right_value629 && right_value629 != __result_obj__) { come_call_finalizer(sOrNode_finalize,right_value629, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value630 && right_value630 != __result_obj__) { come_call_finalizer(sOrNode_finalize,right_value630, (void*)0, (void*)0, 0, 1, 0, 0); }
            return __result359__;
            if(right_314) { right_314 = come_decrement_ref_count(right_314, ((struct sNode*)right_314)->finalize, ((struct sNode*)right_314)->_protocol_obj, 0, 0, 0); } 
        }
        else {
            if(_if_conditional632=*info->p==92&&*(info->p+1)==124&&*(info->p+2)!=61&&*(info->p+2)!=124,            _if_conditional632) {
                info->p+=2;
                skip_spaces_and_lf(info);
                right_316=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value636=or_exp(info))));
                if(right_value636 && right_value636 != __result_obj__) { right_value636 = come_decrement_ref_count(right_value636, ((struct sNode*)right_value636)->finalize, ((struct sNode*)right_value636)->_protocol_obj, 1, 0, 0); } 
                _inf_value38=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2619);
                _inf_obj_value38=come_increment_ref_count(((struct sOrNode*)(right_value638=sOrNode_initialize((struct sOrNode*)come_increment_ref_count(((struct sOrNode*)(right_value637=(struct sOrNode*)come_calloc(1, sizeof(struct sOrNode)*(1), "13op.c", 2619)))),(struct sNode*)come_increment_ref_count(node_313),(struct sNode*)come_increment_ref_count(right_316),(_Bool)1,info))));
                _inf_value38->_protocol_obj=_inf_obj_value38;
                _inf_value38->finalize=(void*)sOrNode_finalize;
                _inf_value38->clone=(void*)sOrNode_clone;
                _inf_value38->compile=(void*)sOrNode_compile;
                _inf_value38->sline=(void*)sOrNode_sline;
                _inf_value38->sname=(void*)sOrNode_sname;
                _inf_value38->terminated=(void*)sOrNode_terminated;
                _inf_value38->kind=(void*)sOrNode_kind;
                __result362__ = __result_obj__ = ((struct sNode*)(right_value643=_inf_value38));
                if(right_316) { right_316 = come_decrement_ref_count(right_316, ((struct sNode*)right_316)->finalize, ((struct sNode*)right_316)->_protocol_obj, 0, 0, 0); } 
                if(node_313) { node_313 = come_decrement_ref_count(node_313, ((struct sNode*)node_313)->finalize, ((struct sNode*)node_313)->_protocol_obj, 0, 0, 0); } 
                if(right_value637 && right_value637 != __result_obj__) { come_call_finalizer(sOrNode_finalize,right_value637, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value638 && right_value638 != __result_obj__) { come_call_finalizer(sOrNode_finalize,right_value638, (void*)0, (void*)0, 0, 1, 0, 0); }
                return __result362__;
                if(right_316) { right_316 = come_decrement_ref_count(right_316, ((struct sNode*)right_316)->finalize, ((struct sNode*)right_316)->_protocol_obj, 0, 0, 0); } 
            }
            else {
                break;
            }
        }
    }
    parse_sharp_v5(info);
    __result363__ = __result_obj__ = node_313;
    if(node_313) { node_313 = come_decrement_ref_count(node_313, ((struct sNode*)node_313)->finalize, ((struct sNode*)node_313)->_protocol_obj, 0, 1, 0); } 
    return __result363__;
    if(node_313) { node_313 = come_decrement_ref_count(node_313, ((struct sNode*)node_313)->finalize, ((struct sNode*)node_313)->_protocol_obj, 0, 0, 0); } 
}

static void sOrNode_finalize(struct sOrNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional633;
_Bool _if_conditional634;
_Bool _if_conditional635;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional633=self!=((void*)0)&&self->mLeft!=((void*)0),                    _if_conditional633) {
                        if(self->mLeft) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0); } 
                    }
                    if(_if_conditional634=self!=((void*)0)&&self->mRight!=((void*)0),                    _if_conditional634) {
                        if(self->mRight) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0); } 
                    }
                    if(_if_conditional635=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional635) {
                        if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                    }
}

static struct sOrNode* sOrNode_clone(struct sOrNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional636;
struct sOrNode* __result360__;
void* right_value639;
struct sOrNode* result_317;
_Bool _if_conditional637;
void* right_value640;
struct sNode* __dec_obj268;
_Bool _if_conditional638;
void* right_value641;
struct sNode* __dec_obj269;
_Bool _if_conditional639;
_Bool _if_conditional640;
_Bool _if_conditional641;
void* right_value642;
char* __dec_obj270;
struct sOrNode* __result361__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_317, 0, sizeof(struct sOrNode*));
                    if(_if_conditional636=self==(void*)0,                    _if_conditional636) {
                        __result360__ = __result_obj__ = (void*)0;
                        return __result360__;
                    }
                    result_317=(struct sOrNode*)come_increment_ref_count(((struct sOrNode*)(right_value639=(struct sOrNode*)come_calloc(1, sizeof(struct sOrNode)*(1), "sOrNode_clone", 3))));
                    if(right_value639 && right_value639 != __result_obj__) { come_call_finalizer(sOrNode_finalize,right_value639, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(_if_conditional637=self!=((void*)0)&&self->mLeft!=((void*)0),                    _if_conditional637) {
                        __dec_obj268=result_317->mLeft;
                        result_317->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value640=sNode_clone(self->mLeft))));
                        if(__dec_obj268) { __dec_obj268 = come_decrement_ref_count(__dec_obj268, ((struct sNode*)__dec_obj268)->finalize, ((struct sNode*)__dec_obj268)->_protocol_obj, 0,0,0); }
                        if(right_value640 && right_value640 != __result_obj__) { right_value640 = come_decrement_ref_count(right_value640, ((struct sNode*)right_value640)->finalize, ((struct sNode*)right_value640)->_protocol_obj, 1, 0, 0); } 
                    }
                    if(_if_conditional638=self!=((void*)0)&&self->mRight!=((void*)0),                    _if_conditional638) {
                        __dec_obj269=result_317->mRight;
                        result_317->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value641=sNode_clone(self->mRight))));
                        if(__dec_obj269) { __dec_obj269 = come_decrement_ref_count(__dec_obj269, ((struct sNode*)__dec_obj269)->finalize, ((struct sNode*)__dec_obj269)->_protocol_obj, 0,0,0); }
                        if(right_value641 && right_value641 != __result_obj__) { right_value641 = come_decrement_ref_count(right_value641, ((struct sNode*)right_value641)->finalize, ((struct sNode*)right_value641)->_protocol_obj, 1, 0, 0); } 
                    }
                    if(_if_conditional639=self!=((void*)0),                    _if_conditional639) {
                        result_317->mQuote=self->mQuote;
                    }
                    if(_if_conditional640=self!=((void*)0),                    _if_conditional640) {
                        result_317->sline=self->sline;
                    }
                    if(_if_conditional641=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional641) {
                        __dec_obj270=result_317->sname;
                        result_317->sname=(char*)come_increment_ref_count(((char*)(right_value642=string_clone(self->sname))));
                        if(__dec_obj270) { __dec_obj270 = come_decrement_ref_count(__dec_obj270, (void*)0, (void*)0, 0,0,0); }
                        if(right_value642 && right_value642 != __result_obj__) { right_value642 = come_decrement_ref_count(right_value642, (void*)0, (void*)0, 1, 0, 0); }
                    }
                    __result361__ = __result_obj__ = result_317;
                    if(result_317) { come_call_finalizer(sOrNode_finalize,result_317, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result361__;
                    if(result_317) { come_call_finalizer(sOrNode_finalize,result_317, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sNode* andand_exp(struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value644;
struct sNode* node_318;
_Bool _while_condtional18;
_Bool _if_conditional642;
void* right_value645;
struct sNode* right_319;
void* right_value646;
void* right_value647;
struct sNode* _inf_value39;
struct sAndAndNode* _inf_obj_value39;
void* right_value652;
struct sNode* __result366__;
_Bool _if_conditional652;
void* right_value653;
struct sNode* right_321;
void* right_value654;
void* right_value655;
struct sNode* _inf_value40;
struct sAndAndNode* _inf_obj_value40;
void* right_value660;
struct sNode* __result369__;
struct sNode* __result370__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&node_318, 0, sizeof(struct sNode*));
memset(&right_319, 0, sizeof(struct sNode*));
memset(&right_321, 0, sizeof(struct sNode*));
    parse_sharp_v5(info);
    node_318=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value644=or_exp(info))));
    if(right_value644 && right_value644 != __result_obj__) { right_value644 = come_decrement_ref_count(right_value644, ((struct sNode*)right_value644)->finalize, ((struct sNode*)right_value644)->_protocol_obj, 1, 0, 0); } 
    parse_sharp_v5(info);
    while(_while_condtional18=*info->p,    _while_condtional18) {
        if(_if_conditional642=*info->p==38&&*(info->p+1)==38,        _if_conditional642) {
            info->p+=2;
            skip_spaces_and_lf(info);
            right_319=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value645=andand_exp(info))));
            if(right_value645 && right_value645 != __result_obj__) { right_value645 = come_decrement_ref_count(right_value645, ((struct sNode*)right_value645)->finalize, ((struct sNode*)right_value645)->_protocol_obj, 1, 0, 0); } 
            _inf_value39=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2646);
            _inf_obj_value39=come_increment_ref_count(((struct sAndAndNode*)(right_value647=sAndAndNode_initialize((struct sAndAndNode*)come_increment_ref_count(((struct sAndAndNode*)(right_value646=(struct sAndAndNode*)come_calloc(1, sizeof(struct sAndAndNode)*(1), "13op.c", 2646)))),(struct sNode*)come_increment_ref_count(node_318),(struct sNode*)come_increment_ref_count(right_319),(_Bool)0,info))));
            _inf_value39->_protocol_obj=_inf_obj_value39;
            _inf_value39->finalize=(void*)sAndAndNode_finalize;
            _inf_value39->clone=(void*)sAndAndNode_clone;
            _inf_value39->compile=(void*)sAndAndNode_compile;
            _inf_value39->sline=(void*)sAndAndNode_sline;
            _inf_value39->sname=(void*)sAndAndNode_sname;
            _inf_value39->terminated=(void*)sAndAndNode_terminated;
            _inf_value39->kind=(void*)sAndAndNode_kind;
            __result366__ = __result_obj__ = ((struct sNode*)(right_value652=_inf_value39));
            if(right_319) { right_319 = come_decrement_ref_count(right_319, ((struct sNode*)right_319)->finalize, ((struct sNode*)right_319)->_protocol_obj, 0, 0, 0); } 
            if(node_318) { node_318 = come_decrement_ref_count(node_318, ((struct sNode*)node_318)->finalize, ((struct sNode*)node_318)->_protocol_obj, 0, 0, 0); } 
            if(right_value646 && right_value646 != __result_obj__) { come_call_finalizer(sAndAndNode_finalize,right_value646, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value647 && right_value647 != __result_obj__) { come_call_finalizer(sAndAndNode_finalize,right_value647, (void*)0, (void*)0, 0, 1, 0, 0); }
            return __result366__;
            if(right_319) { right_319 = come_decrement_ref_count(right_319, ((struct sNode*)right_319)->finalize, ((struct sNode*)right_319)->_protocol_obj, 0, 0, 0); } 
        }
        else {
            if(_if_conditional652=*info->p==92&&*(info->p+1)==38&&*(info->p+2)==38,            _if_conditional652) {
                info->p+=3;
                skip_spaces_and_lf(info);
                right_321=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value653=andand_exp(info))));
                if(right_value653 && right_value653 != __result_obj__) { right_value653 = come_decrement_ref_count(right_value653, ((struct sNode*)right_value653)->finalize, ((struct sNode*)right_value653)->_protocol_obj, 1, 0, 0); } 
                _inf_value40=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2654);
                _inf_obj_value40=come_increment_ref_count(((struct sAndAndNode*)(right_value655=sAndAndNode_initialize((struct sAndAndNode*)come_increment_ref_count(((struct sAndAndNode*)(right_value654=(struct sAndAndNode*)come_calloc(1, sizeof(struct sAndAndNode)*(1), "13op.c", 2654)))),(struct sNode*)come_increment_ref_count(node_318),(struct sNode*)come_increment_ref_count(right_321),(_Bool)1,info))));
                _inf_value40->_protocol_obj=_inf_obj_value40;
                _inf_value40->finalize=(void*)sAndAndNode_finalize;
                _inf_value40->clone=(void*)sAndAndNode_clone;
                _inf_value40->compile=(void*)sAndAndNode_compile;
                _inf_value40->sline=(void*)sAndAndNode_sline;
                _inf_value40->sname=(void*)sAndAndNode_sname;
                _inf_value40->terminated=(void*)sAndAndNode_terminated;
                _inf_value40->kind=(void*)sAndAndNode_kind;
                __result369__ = __result_obj__ = ((struct sNode*)(right_value660=_inf_value40));
                if(right_321) { right_321 = come_decrement_ref_count(right_321, ((struct sNode*)right_321)->finalize, ((struct sNode*)right_321)->_protocol_obj, 0, 0, 0); } 
                if(node_318) { node_318 = come_decrement_ref_count(node_318, ((struct sNode*)node_318)->finalize, ((struct sNode*)node_318)->_protocol_obj, 0, 0, 0); } 
                if(right_value654 && right_value654 != __result_obj__) { come_call_finalizer(sAndAndNode_finalize,right_value654, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value655 && right_value655 != __result_obj__) { come_call_finalizer(sAndAndNode_finalize,right_value655, (void*)0, (void*)0, 0, 1, 0, 0); }
                return __result369__;
                if(right_321) { right_321 = come_decrement_ref_count(right_321, ((struct sNode*)right_321)->finalize, ((struct sNode*)right_321)->_protocol_obj, 0, 0, 0); } 
            }
            else {
                break;
            }
        }
    }
    parse_sharp_v5(info);
    __result370__ = __result_obj__ = node_318;
    if(node_318) { node_318 = come_decrement_ref_count(node_318, ((struct sNode*)node_318)->finalize, ((struct sNode*)node_318)->_protocol_obj, 0, 1, 0); } 
    return __result370__;
    if(node_318) { node_318 = come_decrement_ref_count(node_318, ((struct sNode*)node_318)->finalize, ((struct sNode*)node_318)->_protocol_obj, 0, 0, 0); } 
}

static void sAndAndNode_finalize(struct sAndAndNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional653;
_Bool _if_conditional654;
_Bool _if_conditional655;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional653=self!=((void*)0)&&self->mLeft!=((void*)0),                    _if_conditional653) {
                        if(self->mLeft) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0); } 
                    }
                    if(_if_conditional654=self!=((void*)0)&&self->mRight!=((void*)0),                    _if_conditional654) {
                        if(self->mRight) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0); } 
                    }
                    if(_if_conditional655=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional655) {
                        if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                    }
}

static struct sAndAndNode* sAndAndNode_clone(struct sAndAndNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional656;
struct sAndAndNode* __result367__;
void* right_value656;
struct sAndAndNode* result_322;
_Bool _if_conditional657;
void* right_value657;
struct sNode* __dec_obj274;
_Bool _if_conditional658;
void* right_value658;
struct sNode* __dec_obj275;
_Bool _if_conditional659;
_Bool _if_conditional660;
_Bool _if_conditional661;
void* right_value659;
char* __dec_obj276;
struct sAndAndNode* __result368__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_322, 0, sizeof(struct sAndAndNode*));
                    if(_if_conditional656=self==(void*)0,                    _if_conditional656) {
                        __result367__ = __result_obj__ = (void*)0;
                        return __result367__;
                    }
                    result_322=(struct sAndAndNode*)come_increment_ref_count(((struct sAndAndNode*)(right_value656=(struct sAndAndNode*)come_calloc(1, sizeof(struct sAndAndNode)*(1), "sAndAndNode_clone", 3))));
                    if(right_value656 && right_value656 != __result_obj__) { come_call_finalizer(sAndAndNode_finalize,right_value656, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(_if_conditional657=self!=((void*)0)&&self->mLeft!=((void*)0),                    _if_conditional657) {
                        __dec_obj274=result_322->mLeft;
                        result_322->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value657=sNode_clone(self->mLeft))));
                        if(__dec_obj274) { __dec_obj274 = come_decrement_ref_count(__dec_obj274, ((struct sNode*)__dec_obj274)->finalize, ((struct sNode*)__dec_obj274)->_protocol_obj, 0,0,0); }
                        if(right_value657 && right_value657 != __result_obj__) { right_value657 = come_decrement_ref_count(right_value657, ((struct sNode*)right_value657)->finalize, ((struct sNode*)right_value657)->_protocol_obj, 1, 0, 0); } 
                    }
                    if(_if_conditional658=self!=((void*)0)&&self->mRight!=((void*)0),                    _if_conditional658) {
                        __dec_obj275=result_322->mRight;
                        result_322->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value658=sNode_clone(self->mRight))));
                        if(__dec_obj275) { __dec_obj275 = come_decrement_ref_count(__dec_obj275, ((struct sNode*)__dec_obj275)->finalize, ((struct sNode*)__dec_obj275)->_protocol_obj, 0,0,0); }
                        if(right_value658 && right_value658 != __result_obj__) { right_value658 = come_decrement_ref_count(right_value658, ((struct sNode*)right_value658)->finalize, ((struct sNode*)right_value658)->_protocol_obj, 1, 0, 0); } 
                    }
                    if(_if_conditional659=self!=((void*)0),                    _if_conditional659) {
                        result_322->mQuote=self->mQuote;
                    }
                    if(_if_conditional660=self!=((void*)0),                    _if_conditional660) {
                        result_322->sline=self->sline;
                    }
                    if(_if_conditional661=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional661) {
                        __dec_obj276=result_322->sname;
                        result_322->sname=(char*)come_increment_ref_count(((char*)(right_value659=string_clone(self->sname))));
                        if(__dec_obj276) { __dec_obj276 = come_decrement_ref_count(__dec_obj276, (void*)0, (void*)0, 0,0,0); }
                        if(right_value659 && right_value659 != __result_obj__) { right_value659 = come_decrement_ref_count(right_value659, (void*)0, (void*)0, 1, 0, 0); }
                    }
                    __result368__ = __result_obj__ = result_322;
                    if(result_322) { come_call_finalizer(sAndAndNode_finalize,result_322, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result368__;
                    if(result_322) { come_call_finalizer(sAndAndNode_finalize,result_322, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sNode* oror_exp(struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value661;
struct sNode* node_323;
_Bool _while_condtional19;
_Bool _if_conditional662;
void* right_value662;
struct sNode* right_324;
void* right_value663;
void* right_value664;
struct sNode* _inf_value41;
struct sOrOrNode* _inf_obj_value41;
void* right_value669;
struct sNode* __result373__;
_Bool _if_conditional672;
void* right_value670;
struct sNode* right_326;
void* right_value671;
void* right_value672;
struct sNode* _inf_value42;
struct sOrOrNode* _inf_obj_value42;
void* right_value677;
struct sNode* __result376__;
struct sNode* __result377__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&node_323, 0, sizeof(struct sNode*));
memset(&right_324, 0, sizeof(struct sNode*));
memset(&right_326, 0, sizeof(struct sNode*));
    parse_sharp_v5(info);
    node_323=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value661=andand_exp(info))));
    if(right_value661 && right_value661 != __result_obj__) { right_value661 = come_decrement_ref_count(right_value661, ((struct sNode*)right_value661)->finalize, ((struct sNode*)right_value661)->_protocol_obj, 1, 0, 0); } 
    parse_sharp_v5(info);
    while(_while_condtional19=*info->p,    _while_condtional19) {
        if(_if_conditional662=*info->p==124&&*(info->p+1)==124,        _if_conditional662) {
            info->p+=2;
            skip_spaces_and_lf(info);
            right_324=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value662=oror_exp(info))));
            if(right_value662 && right_value662 != __result_obj__) { right_value662 = come_decrement_ref_count(right_value662, ((struct sNode*)right_value662)->finalize, ((struct sNode*)right_value662)->_protocol_obj, 1, 0, 0); } 
            _inf_value41=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2681);
            _inf_obj_value41=come_increment_ref_count(((struct sOrOrNode*)(right_value664=sOrOrNode_initialize((struct sOrOrNode*)come_increment_ref_count(((struct sOrOrNode*)(right_value663=(struct sOrOrNode*)come_calloc(1, sizeof(struct sOrOrNode)*(1), "13op.c", 2681)))),(struct sNode*)come_increment_ref_count(node_323),(struct sNode*)come_increment_ref_count(right_324),(_Bool)0,info))));
            _inf_value41->_protocol_obj=_inf_obj_value41;
            _inf_value41->finalize=(void*)sOrOrNode_finalize;
            _inf_value41->clone=(void*)sOrOrNode_clone;
            _inf_value41->compile=(void*)sOrOrNode_compile;
            _inf_value41->sline=(void*)sOrOrNode_sline;
            _inf_value41->sname=(void*)sOrOrNode_sname;
            _inf_value41->terminated=(void*)sOrOrNode_terminated;
            _inf_value41->kind=(void*)sOrOrNode_kind;
            __result373__ = __result_obj__ = ((struct sNode*)(right_value669=_inf_value41));
            if(right_324) { right_324 = come_decrement_ref_count(right_324, ((struct sNode*)right_324)->finalize, ((struct sNode*)right_324)->_protocol_obj, 0, 0, 0); } 
            if(node_323) { node_323 = come_decrement_ref_count(node_323, ((struct sNode*)node_323)->finalize, ((struct sNode*)node_323)->_protocol_obj, 0, 0, 0); } 
            if(right_value663 && right_value663 != __result_obj__) { come_call_finalizer(sOrOrNode_finalize,right_value663, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value664 && right_value664 != __result_obj__) { come_call_finalizer(sOrOrNode_finalize,right_value664, (void*)0, (void*)0, 0, 1, 0, 0); }
            return __result373__;
            if(right_324) { right_324 = come_decrement_ref_count(right_324, ((struct sNode*)right_324)->finalize, ((struct sNode*)right_324)->_protocol_obj, 0, 0, 0); } 
        }
        else {
            if(_if_conditional672=*info->p==92&&*(info->p+1)==124&&*(info->p+2)==124,            _if_conditional672) {
                info->p+=3;
                skip_spaces_and_lf(info);
                right_326=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value670=oror_exp(info))));
                if(right_value670 && right_value670 != __result_obj__) { right_value670 = come_decrement_ref_count(right_value670, ((struct sNode*)right_value670)->finalize, ((struct sNode*)right_value670)->_protocol_obj, 1, 0, 0); } 
                _inf_value42=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2689);
                _inf_obj_value42=come_increment_ref_count(((struct sOrOrNode*)(right_value672=sOrOrNode_initialize((struct sOrOrNode*)come_increment_ref_count(((struct sOrOrNode*)(right_value671=(struct sOrOrNode*)come_calloc(1, sizeof(struct sOrOrNode)*(1), "13op.c", 2689)))),(struct sNode*)come_increment_ref_count(node_323),(struct sNode*)come_increment_ref_count(right_326),(_Bool)1,info))));
                _inf_value42->_protocol_obj=_inf_obj_value42;
                _inf_value42->finalize=(void*)sOrOrNode_finalize;
                _inf_value42->clone=(void*)sOrOrNode_clone;
                _inf_value42->compile=(void*)sOrOrNode_compile;
                _inf_value42->sline=(void*)sOrOrNode_sline;
                _inf_value42->sname=(void*)sOrOrNode_sname;
                _inf_value42->terminated=(void*)sOrOrNode_terminated;
                _inf_value42->kind=(void*)sOrOrNode_kind;
                __result376__ = __result_obj__ = ((struct sNode*)(right_value677=_inf_value42));
                if(right_326) { right_326 = come_decrement_ref_count(right_326, ((struct sNode*)right_326)->finalize, ((struct sNode*)right_326)->_protocol_obj, 0, 0, 0); } 
                if(node_323) { node_323 = come_decrement_ref_count(node_323, ((struct sNode*)node_323)->finalize, ((struct sNode*)node_323)->_protocol_obj, 0, 0, 0); } 
                if(right_value671 && right_value671 != __result_obj__) { come_call_finalizer(sOrOrNode_finalize,right_value671, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value672 && right_value672 != __result_obj__) { come_call_finalizer(sOrOrNode_finalize,right_value672, (void*)0, (void*)0, 0, 1, 0, 0); }
                return __result376__;
                if(right_326) { right_326 = come_decrement_ref_count(right_326, ((struct sNode*)right_326)->finalize, ((struct sNode*)right_326)->_protocol_obj, 0, 0, 0); } 
            }
            else {
                break;
            }
        }
    }
    parse_sharp_v5(info);
    __result377__ = __result_obj__ = node_323;
    if(node_323) { node_323 = come_decrement_ref_count(node_323, ((struct sNode*)node_323)->finalize, ((struct sNode*)node_323)->_protocol_obj, 0, 1, 0); } 
    return __result377__;
    if(node_323) { node_323 = come_decrement_ref_count(node_323, ((struct sNode*)node_323)->finalize, ((struct sNode*)node_323)->_protocol_obj, 0, 0, 0); } 
}

static void sOrOrNode_finalize(struct sOrOrNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional673;
_Bool _if_conditional674;
_Bool _if_conditional675;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional673=self!=((void*)0)&&self->mLeft!=((void*)0),                    _if_conditional673) {
                        if(self->mLeft) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0); } 
                    }
                    if(_if_conditional674=self!=((void*)0)&&self->mRight!=((void*)0),                    _if_conditional674) {
                        if(self->mRight) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0); } 
                    }
                    if(_if_conditional675=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional675) {
                        if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                    }
}

static struct sOrOrNode* sOrOrNode_clone(struct sOrOrNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional676;
struct sOrOrNode* __result374__;
void* right_value673;
struct sOrOrNode* result_327;
_Bool _if_conditional677;
void* right_value674;
struct sNode* __dec_obj280;
_Bool _if_conditional678;
void* right_value675;
struct sNode* __dec_obj281;
_Bool _if_conditional679;
_Bool _if_conditional680;
_Bool _if_conditional681;
void* right_value676;
char* __dec_obj282;
struct sOrOrNode* __result375__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_327, 0, sizeof(struct sOrOrNode*));
                    if(_if_conditional676=self==(void*)0,                    _if_conditional676) {
                        __result374__ = __result_obj__ = (void*)0;
                        return __result374__;
                    }
                    result_327=(struct sOrOrNode*)come_increment_ref_count(((struct sOrOrNode*)(right_value673=(struct sOrOrNode*)come_calloc(1, sizeof(struct sOrOrNode)*(1), "sOrOrNode_clone", 3))));
                    if(right_value673 && right_value673 != __result_obj__) { come_call_finalizer(sOrOrNode_finalize,right_value673, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(_if_conditional677=self!=((void*)0)&&self->mLeft!=((void*)0),                    _if_conditional677) {
                        __dec_obj280=result_327->mLeft;
                        result_327->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value674=sNode_clone(self->mLeft))));
                        if(__dec_obj280) { __dec_obj280 = come_decrement_ref_count(__dec_obj280, ((struct sNode*)__dec_obj280)->finalize, ((struct sNode*)__dec_obj280)->_protocol_obj, 0,0,0); }
                        if(right_value674 && right_value674 != __result_obj__) { right_value674 = come_decrement_ref_count(right_value674, ((struct sNode*)right_value674)->finalize, ((struct sNode*)right_value674)->_protocol_obj, 1, 0, 0); } 
                    }
                    if(_if_conditional678=self!=((void*)0)&&self->mRight!=((void*)0),                    _if_conditional678) {
                        __dec_obj281=result_327->mRight;
                        result_327->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value675=sNode_clone(self->mRight))));
                        if(__dec_obj281) { __dec_obj281 = come_decrement_ref_count(__dec_obj281, ((struct sNode*)__dec_obj281)->finalize, ((struct sNode*)__dec_obj281)->_protocol_obj, 0,0,0); }
                        if(right_value675 && right_value675 != __result_obj__) { right_value675 = come_decrement_ref_count(right_value675, ((struct sNode*)right_value675)->finalize, ((struct sNode*)right_value675)->_protocol_obj, 1, 0, 0); } 
                    }
                    if(_if_conditional679=self!=((void*)0),                    _if_conditional679) {
                        result_327->mQuote=self->mQuote;
                    }
                    if(_if_conditional680=self!=((void*)0),                    _if_conditional680) {
                        result_327->sline=self->sline;
                    }
                    if(_if_conditional681=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional681) {
                        __dec_obj282=result_327->sname;
                        result_327->sname=(char*)come_increment_ref_count(((char*)(right_value676=string_clone(self->sname))));
                        if(__dec_obj282) { __dec_obj282 = come_decrement_ref_count(__dec_obj282, (void*)0, (void*)0, 0,0,0); }
                        if(right_value676 && right_value676 != __result_obj__) { right_value676 = come_decrement_ref_count(right_value676, (void*)0, (void*)0, 1, 0, 0); }
                    }
                    __result375__ = __result_obj__ = result_327;
                    if(result_327) { come_call_finalizer(sOrOrNode_finalize,result_327, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result375__;
                    if(result_327) { come_call_finalizer(sOrOrNode_finalize,result_327, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sNode* comma_exp(struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value678;
struct sNode* node_328;
_Bool _while_condtional20;
_Bool _if_conditional682;
void* right_value679;
struct sNode* node2_329;
void* right_value680;
void* right_value681;
struct sNode* _inf_value43;
struct sCommaNode* _inf_obj_value43;
void* right_value686;
struct sNode* __result380__;
struct sNode* __result381__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&node_328, 0, sizeof(struct sNode*));
memset(&node2_329, 0, sizeof(struct sNode*));
    parse_sharp_v5(info);
    node_328=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value678=oror_exp(info))));
    if(right_value678 && right_value678 != __result_obj__) { right_value678 = come_decrement_ref_count(right_value678, ((struct sNode*)right_value678)->finalize, ((struct sNode*)right_value678)->_protocol_obj, 1, 0, 0); } 
    parse_sharp_v5(info);
    while(_while_condtional20=*info->p,    _while_condtional20) {
        if(_if_conditional682=!info->no_comma&&*info->p==44,        _if_conditional682) {
            info->p++;
            skip_spaces_and_lf(info);
            node2_329=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value679=oror_exp(info))));
            if(right_value679 && right_value679 != __result_obj__) { right_value679 = come_decrement_ref_count(right_value679, ((struct sNode*)right_value679)->finalize, ((struct sNode*)right_value679)->_protocol_obj, 1, 0, 0); } 
            _inf_value43=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2716);
            _inf_obj_value43=come_increment_ref_count(((struct sCommaNode*)(right_value681=sCommaNode_initialize((struct sCommaNode*)come_increment_ref_count(((struct sCommaNode*)(right_value680=(struct sCommaNode*)come_calloc(1, sizeof(struct sCommaNode)*(1), "13op.c", 2716)))),(struct sNode*)come_increment_ref_count(node_328),(struct sNode*)come_increment_ref_count(node2_329),info))));
            _inf_value43->_protocol_obj=_inf_obj_value43;
            _inf_value43->finalize=(void*)sCommaNode_finalize;
            _inf_value43->clone=(void*)sCommaNode_clone;
            _inf_value43->compile=(void*)sCommaNode_compile;
            _inf_value43->sline=(void*)sCommaNode_sline;
            _inf_value43->sname=(void*)sCommaNode_sname;
            _inf_value43->terminated=(void*)sCommaNode_terminated;
            _inf_value43->kind=(void*)sCommaNode_kind;
            __result380__ = __result_obj__ = ((struct sNode*)(right_value686=_inf_value43));
            if(node2_329) { node2_329 = come_decrement_ref_count(node2_329, ((struct sNode*)node2_329)->finalize, ((struct sNode*)node2_329)->_protocol_obj, 0, 0, 0); } 
            if(node_328) { node_328 = come_decrement_ref_count(node_328, ((struct sNode*)node_328)->finalize, ((struct sNode*)node_328)->_protocol_obj, 0, 0, 0); } 
            if(right_value680 && right_value680 != __result_obj__) { come_call_finalizer(sCommaNode_finalize,right_value680, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value681 && right_value681 != __result_obj__) { come_call_finalizer(sCommaNode_finalize,right_value681, (void*)0, (void*)0, 0, 1, 0, 0); }
            return __result380__;
            if(node2_329) { node2_329 = come_decrement_ref_count(node2_329, ((struct sNode*)node2_329)->finalize, ((struct sNode*)node2_329)->_protocol_obj, 0, 0, 0); } 
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result381__ = __result_obj__ = node_328;
    if(node_328) { node_328 = come_decrement_ref_count(node_328, ((struct sNode*)node_328)->finalize, ((struct sNode*)node_328)->_protocol_obj, 0, 1, 0); } 
    return __result381__;
    if(node_328) { node_328 = come_decrement_ref_count(node_328, ((struct sNode*)node_328)->finalize, ((struct sNode*)node_328)->_protocol_obj, 0, 0, 0); } 
}

static void sCommaNode_finalize(struct sCommaNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional683;
_Bool _if_conditional684;
_Bool _if_conditional685;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional683=self!=((void*)0)&&self->mLeft!=((void*)0),                _if_conditional683) {
                    if(self->mLeft) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0); } 
                }
                if(_if_conditional684=self!=((void*)0)&&self->mRight!=((void*)0),                _if_conditional684) {
                    if(self->mRight) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0); } 
                }
                if(_if_conditional685=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional685) {
                    if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                }
}

static struct sCommaNode* sCommaNode_clone(struct sCommaNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional686;
struct sCommaNode* __result378__;
void* right_value682;
struct sCommaNode* result_330;
_Bool _if_conditional687;
void* right_value683;
struct sNode* __dec_obj283;
_Bool _if_conditional688;
void* right_value684;
struct sNode* __dec_obj284;
_Bool _if_conditional689;
_Bool _if_conditional690;
void* right_value685;
char* __dec_obj285;
struct sCommaNode* __result379__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_330, 0, sizeof(struct sCommaNode*));
                if(_if_conditional686=self==(void*)0,                _if_conditional686) {
                    __result378__ = __result_obj__ = (void*)0;
                    return __result378__;
                }
                result_330=(struct sCommaNode*)come_increment_ref_count(((struct sCommaNode*)(right_value682=(struct sCommaNode*)come_calloc(1, sizeof(struct sCommaNode)*(1), "sCommaNode_clone", 3))));
                if(right_value682 && right_value682 != __result_obj__) { come_call_finalizer(sCommaNode_finalize,right_value682, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(_if_conditional687=self!=((void*)0)&&self->mLeft!=((void*)0),                _if_conditional687) {
                    __dec_obj283=result_330->mLeft;
                    result_330->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value683=sNode_clone(self->mLeft))));
                    if(__dec_obj283) { __dec_obj283 = come_decrement_ref_count(__dec_obj283, ((struct sNode*)__dec_obj283)->finalize, ((struct sNode*)__dec_obj283)->_protocol_obj, 0,0,0); }
                    if(right_value683 && right_value683 != __result_obj__) { right_value683 = come_decrement_ref_count(right_value683, ((struct sNode*)right_value683)->finalize, ((struct sNode*)right_value683)->_protocol_obj, 1, 0, 0); } 
                }
                if(_if_conditional688=self!=((void*)0)&&self->mRight!=((void*)0),                _if_conditional688) {
                    __dec_obj284=result_330->mRight;
                    result_330->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value684=sNode_clone(self->mRight))));
                    if(__dec_obj284) { __dec_obj284 = come_decrement_ref_count(__dec_obj284, ((struct sNode*)__dec_obj284)->finalize, ((struct sNode*)__dec_obj284)->_protocol_obj, 0,0,0); }
                    if(right_value684 && right_value684 != __result_obj__) { right_value684 = come_decrement_ref_count(right_value684, ((struct sNode*)right_value684)->finalize, ((struct sNode*)right_value684)->_protocol_obj, 1, 0, 0); } 
                }
                if(_if_conditional689=self!=((void*)0),                _if_conditional689) {
                    result_330->sline=self->sline;
                }
                if(_if_conditional690=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional690) {
                    __dec_obj285=result_330->sname;
                    result_330->sname=(char*)come_increment_ref_count(((char*)(right_value685=string_clone(self->sname))));
                    if(__dec_obj285) { __dec_obj285 = come_decrement_ref_count(__dec_obj285, (void*)0, (void*)0, 0,0,0); }
                    if(right_value685 && right_value685 != __result_obj__) { right_value685 = come_decrement_ref_count(right_value685, (void*)0, (void*)0, 1, 0, 0); }
                }
                __result379__ = __result_obj__ = result_330;
                if(result_330) { come_call_finalizer(sCommaNode_finalize,result_330, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result379__;
                if(result_330) { come_call_finalizer(sCommaNode_finalize,result_330, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sNode* conditional_exp(struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value687;
struct sNode* node_331;
_Bool _while_condtional21;
_Bool _if_conditional691;
struct sNode* value1_332;
_Bool _if_conditional692;
void* right_value688;
void* right_value689;
struct sNode* _inf_value44;
struct sNullNode* _inf_obj_value44;
void* right_value692;
struct sNode* __dec_obj287;
void* right_value693;
struct sNode* __dec_obj288;
void* right_value694;
void* right_value695;
struct sNode* value2_335;
void* right_value696;
void* right_value697;
struct sNode* _inf_value45;
struct sConditionalNode* _inf_obj_value45;
void* right_value703;
struct sNode* __result388__;
struct sNode* __result389__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&node_331, 0, sizeof(struct sNode*));
memset(&value1_332, 0, sizeof(struct sNode*));
memset(&value2_335, 0, sizeof(struct sNode*));
    parse_sharp_v5(info);
    node_331=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value687=comma_exp(info))));
    if(right_value687 && right_value687 != __result_obj__) { right_value687 = come_decrement_ref_count(right_value687, ((struct sNode*)right_value687)->finalize, ((struct sNode*)right_value687)->_protocol_obj, 1, 0, 0); } 
    parse_sharp_v5(info);
    while(_while_condtional21=*info->p,    _while_condtional21) {
        if(_if_conditional691=*info->p==63,        _if_conditional691) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            if(_if_conditional692=*info->p==58,            _if_conditional692) {
                _inf_value44=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2745);
                _inf_obj_value44=come_increment_ref_count(((struct sNullNode*)(right_value689=sNullNode_initialize((struct sNullNode*)come_increment_ref_count(((struct sNullNode*)(right_value688=(struct sNullNode*)come_calloc(1, sizeof(struct sNullNode)*(1), "13op.c", 2745)))),info))));
                _inf_value44->_protocol_obj=_inf_obj_value44;
                _inf_value44->finalize=(void*)sNullNode_finalize;
                _inf_value44->clone=(void*)sNullNode_clone;
                _inf_value44->compile=(void*)sNullNode_compile;
                _inf_value44->sline=(void*)sNullNode_sline;
                _inf_value44->sname=(void*)sNullNode_sname;
                _inf_value44->terminated=(void*)sNullNode_terminated;
                _inf_value44->kind=(void*)sNullNode_kind;
                __dec_obj287=value1_332;
                value1_332=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value692=_inf_value44)));
                if(__dec_obj287) { __dec_obj287 = come_decrement_ref_count(__dec_obj287, ((struct sNode*)__dec_obj287)->finalize, ((struct sNode*)__dec_obj287)->_protocol_obj, 0,0,0); }
                if(right_value688 && right_value688 != __result_obj__) { come_call_finalizer(sNullNode_finalize,right_value688, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value689 && right_value689 != __result_obj__) { come_call_finalizer(sNullNode_finalize,right_value689, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value692 && right_value692 != __result_obj__) { right_value692 = come_decrement_ref_count(right_value692, ((struct sNode*)right_value692)->finalize, ((struct sNode*)right_value692)->_protocol_obj, 1, 0, 0); } 
            }
            else {
                __dec_obj288=value1_332;
                value1_332=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value693=comma_exp(info))));
                if(__dec_obj288) { __dec_obj288 = come_decrement_ref_count(__dec_obj288, ((struct sNode*)__dec_obj288)->finalize, ((struct sNode*)__dec_obj288)->_protocol_obj, 0,0,0); }
                if(right_value693 && right_value693 != __result_obj__) { right_value693 = come_decrement_ref_count(right_value693, ((struct sNode*)right_value693)->finalize, ((struct sNode*)right_value693)->_protocol_obj, 1, 0, 0); } 
            }
            parse_sharp_v5(info);
            optional$2intbool_value(((struct optional$2intbool*)(right_value694=expected_next_character(58,info))));
            if(right_value694 && right_value694 != __result_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value694, (void*)0, (void*)0, 0, 1, 0, 0); }
            value2_335=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value695=comma_exp(info))));
            if(right_value695 && right_value695 != __result_obj__) { right_value695 = come_decrement_ref_count(right_value695, ((struct sNode*)right_value695)->finalize, ((struct sNode*)right_value695)->_protocol_obj, 1, 0, 0); } 
            parse_sharp_v5(info);
            _inf_value45=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2759);
            _inf_obj_value45=come_increment_ref_count(((struct sConditionalNode*)(right_value697=sConditionalNode_initialize((struct sConditionalNode*)come_increment_ref_count(((struct sConditionalNode*)(right_value696=(struct sConditionalNode*)come_calloc(1, sizeof(struct sConditionalNode)*(1), "13op.c", 2759)))),(struct sNode*)come_increment_ref_count(node_331),(struct sNode*)come_increment_ref_count(value1_332),(struct sNode*)come_increment_ref_count(value2_335),info))));
            _inf_value45->_protocol_obj=_inf_obj_value45;
            _inf_value45->finalize=(void*)sConditionalNode_finalize;
            _inf_value45->clone=(void*)sConditionalNode_clone;
            _inf_value45->compile=(void*)sConditionalNode_compile;
            _inf_value45->sline=(void*)sConditionalNode_sline;
            _inf_value45->sname=(void*)sConditionalNode_sname;
            _inf_value45->terminated=(void*)sConditionalNode_terminated;
            _inf_value45->kind=(void*)sConditionalNode_kind;
            __result388__ = __result_obj__ = ((struct sNode*)(right_value703=_inf_value45));
            if(value1_332) { value1_332 = come_decrement_ref_count(value1_332, ((struct sNode*)value1_332)->finalize, ((struct sNode*)value1_332)->_protocol_obj, 0, 0, 0); } 
            if(value2_335) { value2_335 = come_decrement_ref_count(value2_335, ((struct sNode*)value2_335)->finalize, ((struct sNode*)value2_335)->_protocol_obj, 0, 0, 0); } 
            if(node_331) { node_331 = come_decrement_ref_count(node_331, ((struct sNode*)node_331)->finalize, ((struct sNode*)node_331)->_protocol_obj, 0, 0, 0); } 
            if(right_value696 && right_value696 != __result_obj__) { come_call_finalizer(sConditionalNode_finalize,right_value696, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value697 && right_value697 != __result_obj__) { come_call_finalizer(sConditionalNode_finalize,right_value697, (void*)0, (void*)0, 0, 1, 0, 0); }
            return __result388__;
            if(value1_332) { value1_332 = come_decrement_ref_count(value1_332, ((struct sNode*)value1_332)->finalize, ((struct sNode*)value1_332)->_protocol_obj, 0, 0, 0); } 
            if(value2_335) { value2_335 = come_decrement_ref_count(value2_335, ((struct sNode*)value2_335)->finalize, ((struct sNode*)value2_335)->_protocol_obj, 0, 0, 0); } 
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result389__ = __result_obj__ = node_331;
    if(node_331) { node_331 = come_decrement_ref_count(node_331, ((struct sNode*)node_331)->finalize, ((struct sNode*)node_331)->_protocol_obj, 0, 1, 0); } 
    return __result389__;
    if(node_331) { node_331 = come_decrement_ref_count(node_331, ((struct sNode*)node_331)->finalize, ((struct sNode*)node_331)->_protocol_obj, 0, 0, 0); } 
}

static int optional$2intbool_value(struct optional$2intbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional697;
int default_value_334;
int __result384__;
int __result385__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_334, 0, sizeof(int));
                if(_if_conditional697=self==((void*)0),                _if_conditional697) {
                    memset(&default_value_334,0,sizeof(int));
                    __result384__ = default_value_334;
                    return __result384__;
                }
                else {
                    __result385__ = self->v1;
                    return __result385__;
                }
}

static void optional$2intboolp_finalize(struct optional$2intbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static void sConditionalNode_finalize(struct sConditionalNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional698;
_Bool _if_conditional699;
_Bool _if_conditional700;
_Bool _if_conditional701;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional698=self!=((void*)0)&&self->mValue1!=((void*)0),                _if_conditional698) {
                    if(self->mValue1) { self->mValue1 = come_decrement_ref_count(self->mValue1, ((struct sNode*)self->mValue1)->finalize, ((struct sNode*)self->mValue1)->_protocol_obj, 0, 0, 0); } 
                }
                if(_if_conditional699=self!=((void*)0)&&self->mValue2!=((void*)0),                _if_conditional699) {
                    if(self->mValue2) { self->mValue2 = come_decrement_ref_count(self->mValue2, ((struct sNode*)self->mValue2)->finalize, ((struct sNode*)self->mValue2)->_protocol_obj, 0, 0, 0); } 
                }
                if(_if_conditional700=self!=((void*)0)&&self->mValue3!=((void*)0),                _if_conditional700) {
                    if(self->mValue3) { self->mValue3 = come_decrement_ref_count(self->mValue3, ((struct sNode*)self->mValue3)->finalize, ((struct sNode*)self->mValue3)->_protocol_obj, 0, 0, 0); } 
                }
                if(_if_conditional701=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional701) {
                    if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                }
}

static struct sConditionalNode* sConditionalNode_clone(struct sConditionalNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional702;
struct sConditionalNode* __result386__;
void* right_value698;
struct sConditionalNode* result_336;
_Bool _if_conditional703;
void* right_value699;
struct sNode* __dec_obj289;
_Bool _if_conditional704;
void* right_value700;
struct sNode* __dec_obj290;
_Bool _if_conditional705;
void* right_value701;
struct sNode* __dec_obj291;
_Bool _if_conditional706;
_Bool _if_conditional707;
void* right_value702;
char* __dec_obj292;
struct sConditionalNode* __result387__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_336, 0, sizeof(struct sConditionalNode*));
                if(_if_conditional702=self==(void*)0,                _if_conditional702) {
                    __result386__ = __result_obj__ = (void*)0;
                    return __result386__;
                }
                result_336=(struct sConditionalNode*)come_increment_ref_count(((struct sConditionalNode*)(right_value698=(struct sConditionalNode*)come_calloc(1, sizeof(struct sConditionalNode)*(1), "sConditionalNode_clone", 3))));
                if(right_value698 && right_value698 != __result_obj__) { come_call_finalizer(sConditionalNode_finalize,right_value698, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(_if_conditional703=self!=((void*)0)&&self->mValue1!=((void*)0),                _if_conditional703) {
                    __dec_obj289=result_336->mValue1;
                    result_336->mValue1=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value699=sNode_clone(self->mValue1))));
                    if(__dec_obj289) { __dec_obj289 = come_decrement_ref_count(__dec_obj289, ((struct sNode*)__dec_obj289)->finalize, ((struct sNode*)__dec_obj289)->_protocol_obj, 0,0,0); }
                    if(right_value699 && right_value699 != __result_obj__) { right_value699 = come_decrement_ref_count(right_value699, ((struct sNode*)right_value699)->finalize, ((struct sNode*)right_value699)->_protocol_obj, 1, 0, 0); } 
                }
                if(_if_conditional704=self!=((void*)0)&&self->mValue2!=((void*)0),                _if_conditional704) {
                    __dec_obj290=result_336->mValue2;
                    result_336->mValue2=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value700=sNode_clone(self->mValue2))));
                    if(__dec_obj290) { __dec_obj290 = come_decrement_ref_count(__dec_obj290, ((struct sNode*)__dec_obj290)->finalize, ((struct sNode*)__dec_obj290)->_protocol_obj, 0,0,0); }
                    if(right_value700 && right_value700 != __result_obj__) { right_value700 = come_decrement_ref_count(right_value700, ((struct sNode*)right_value700)->finalize, ((struct sNode*)right_value700)->_protocol_obj, 1, 0, 0); } 
                }
                if(_if_conditional705=self!=((void*)0)&&self->mValue3!=((void*)0),                _if_conditional705) {
                    __dec_obj291=result_336->mValue3;
                    result_336->mValue3=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value701=sNode_clone(self->mValue3))));
                    if(__dec_obj291) { __dec_obj291 = come_decrement_ref_count(__dec_obj291, ((struct sNode*)__dec_obj291)->finalize, ((struct sNode*)__dec_obj291)->_protocol_obj, 0,0,0); }
                    if(right_value701 && right_value701 != __result_obj__) { right_value701 = come_decrement_ref_count(right_value701, ((struct sNode*)right_value701)->finalize, ((struct sNode*)right_value701)->_protocol_obj, 1, 0, 0); } 
                }
                if(_if_conditional706=self!=((void*)0),                _if_conditional706) {
                    result_336->sline=self->sline;
                }
                if(_if_conditional707=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional707) {
                    __dec_obj292=result_336->sname;
                    result_336->sname=(char*)come_increment_ref_count(((char*)(right_value702=string_clone(self->sname))));
                    if(__dec_obj292) { __dec_obj292 = come_decrement_ref_count(__dec_obj292, (void*)0, (void*)0, 0,0,0); }
                    if(right_value702 && right_value702 != __result_obj__) { right_value702 = come_decrement_ref_count(right_value702, (void*)0, (void*)0, 1, 0, 0); }
                }
                __result387__ = __result_obj__ = result_336;
                if(result_336) { come_call_finalizer(sConditionalNode_finalize,result_336, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result387__;
                if(result_336) { come_call_finalizer(sConditionalNode_finalize,result_336, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sNode* expression_v13(struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value704;
struct sNode* node_337;
struct sNode* __result390__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&node_337, 0, sizeof(struct sNode*));
    parse_sharp_v5(info);
    node_337=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value704=conditional_exp(info))));
    if(right_value704 && right_value704 != __result_obj__) { right_value704 = come_decrement_ref_count(right_value704, ((struct sNode*)right_value704)->finalize, ((struct sNode*)right_value704)->_protocol_obj, 1, 0, 0); } 
    __result390__ = __result_obj__ = node_337;
    if(node_337) { node_337 = come_decrement_ref_count(node_337, ((struct sNode*)node_337)->finalize, ((struct sNode*)node_337)->_protocol_obj, 0, 1, 0); } 
    return __result390__;
    if(node_337) { node_337 = come_decrement_ref_count(node_337, ((struct sNode*)node_337)->finalize, ((struct sNode*)node_337)->_protocol_obj, 0, 0, 0); } 
}

struct sNode* string_node_v13(char* buf, char* head, int head_sline, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional708;
void* right_value705;
void* right_value706;
struct sNode* _inf_value46;
struct sNullNode* _inf_obj_value46;
void* right_value709;
void* right_value710;
void* right_value711;
struct sNode* __result394__;
_Bool _if_conditional714;
void* right_value712;
void* right_value713;
struct sNode* _inf_value47;
struct sNilNode* _inf_obj_value47;
void* right_value716;
void* right_value717;
void* right_value718;
struct sNode* __result397__;
void* right_value719;
struct __current_stack1__ __current_stack1__;
void* right_value722;
struct sNode* result_340;
void* right_value723;
void* right_value724;
struct sNode* __result401__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__current_stack1__, 0, sizeof(struct __current_stack1__));
memset(&result_340, 0, sizeof(struct sNode*));
    if(_if_conditional708=charp_operator_equals(buf,"null"),    _if_conditional708) {
        _inf_value46=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2783);
        _inf_obj_value46=come_increment_ref_count(((struct sNullNode*)(right_value706=sNullNode_initialize((struct sNullNode*)come_increment_ref_count(((struct sNullNode*)(right_value705=(struct sNullNode*)come_calloc(1, sizeof(struct sNullNode)*(1), "13op.c", 2783)))),info))));
        _inf_value46->_protocol_obj=_inf_obj_value46;
        _inf_value46->finalize=(void*)sNullNode_finalize;
        _inf_value46->clone=(void*)sNullNode_clone;
        _inf_value46->compile=(void*)sNullNode_compile;
        _inf_value46->sline=(void*)sNullNode_sline;
        _inf_value46->sname=(void*)sNullNode_sname;
        _inf_value46->terminated=(void*)sNullNode_terminated;
        _inf_value46->kind=(void*)sNullNode_kind;
        __result394__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value711=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value710=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "13op.c", 2783)))),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value709=_inf_value46))),(_Bool)1)));
        if(right_value705 && right_value705 != __result_obj__) { come_call_finalizer(sNullNode_finalize,right_value705, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value706 && right_value706 != __result_obj__) { come_call_finalizer(sNullNode_finalize,right_value706, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value709 && right_value709 != __result_obj__) { right_value709 = come_decrement_ref_count(right_value709, ((struct sNode*)right_value709)->finalize, ((struct sNode*)right_value709)->_protocol_obj, 1, 0, 0); } 
        if(right_value710 && right_value710 != __result_obj__) { right_value710 = come_decrement_ref_count(right_value710, (void*)0, (void*)0, 1, 0, 0); }
        return __result394__;
    }
    else {
        if(_if_conditional714=charp_operator_equals(buf,"nil"),        _if_conditional714) {
            _inf_value47=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2786);
            _inf_obj_value47=come_increment_ref_count(((struct sNilNode*)(right_value713=sNilNode_initialize((struct sNilNode*)come_increment_ref_count(((struct sNilNode*)(right_value712=(struct sNilNode*)come_calloc(1, sizeof(struct sNilNode)*(1), "13op.c", 2786)))),info))));
            _inf_value47->_protocol_obj=_inf_obj_value47;
            _inf_value47->finalize=(void*)sNilNode_finalize;
            _inf_value47->clone=(void*)sNilNode_clone;
            _inf_value47->compile=(void*)sNilNode_compile;
            _inf_value47->sline=(void*)sNilNode_sline;
            _inf_value47->sname=(void*)sNilNode_sname;
            _inf_value47->terminated=(void*)sNilNode_terminated;
            _inf_value47->kind=(void*)sNilNode_kind;
            __result397__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value718=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value717=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "13op.c", 2786)))),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value716=_inf_value47))),(_Bool)1)));
            if(right_value712 && right_value712 != __result_obj__) { come_call_finalizer(sNilNode_finalize,right_value712, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value713 && right_value713 != __result_obj__) { come_call_finalizer(sNilNode_finalize,right_value713, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value716 && right_value716 != __result_obj__) { right_value716 = come_decrement_ref_count(right_value716, ((struct sNode*)right_value716)->finalize, ((struct sNode*)right_value716)->_protocol_obj, 1, 0, 0); } 
            if(right_value717 && right_value717 != __result_obj__) { right_value717 = come_decrement_ref_count(right_value717, (void*)0, (void*)0, 1, 0, 0); }
            return __result397__;
        }
    }
    __current_stack1__.buf = &buf;
    __current_stack1__.head = &head;
    __current_stack1__.head_sline = &head_sline;
    __current_stack1__.info = &info;
    result_340=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value722=optional$2sNodephbool_catch(((struct optional$2sNodephbool*)(right_value719=string_node_v12(buf,head,head_sline,info))),&__current_stack1__,(void*)method_block1_13opc))));
                        if(__current_stack1__.__method_block_result_kind__ == 3)
                    {
                        return (struct sNode*)__current_stack1__.__method_block_return_value__;
                    }
    if(right_value719 && right_value719 != __result_obj__) { come_call_finalizer(optional$2sNodephboolp_finalize,right_value719, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value722 && right_value722 != __result_obj__) { right_value722 = come_decrement_ref_count(right_value722, ((struct sNode*)right_value722)->finalize, ((struct sNode*)right_value722)->_protocol_obj, 1, 0, 0); } 
    __result401__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value724=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value723=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "13op.c", 2793)))),(struct sNode*)come_increment_ref_count(result_340),(_Bool)1)));
    if(result_340) { result_340 = come_decrement_ref_count(result_340, ((struct sNode*)result_340)->finalize, ((struct sNode*)result_340)->_protocol_obj, 0, 0, 0); } 
    if(right_value723 && right_value723 != __result_obj__) { right_value723 = come_decrement_ref_count(right_value723, (void*)0, (void*)0, 1, 0, 0); }
    return __result401__;
    if(result_340) { result_340 = come_decrement_ref_count(result_340, ((struct sNode*)result_340)->finalize, ((struct sNode*)result_340)->_protocol_obj, 0, 0, 0); } 
}

static void sNullNode_finalize(struct sNullNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional709;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional709=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional709) {
                if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
            }
}

static struct sNullNode* sNullNode_clone(struct sNullNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional710;
struct sNullNode* __result391__;
void* right_value707;
struct sNullNode* result_338;
_Bool _if_conditional711;
_Bool _if_conditional712;
void* right_value708;
char* __dec_obj293;
struct sNullNode* __result392__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_338, 0, sizeof(struct sNullNode*));
            if(_if_conditional710=self==(void*)0,            _if_conditional710) {
                __result391__ = __result_obj__ = (void*)0;
                return __result391__;
            }
            result_338=(struct sNullNode*)come_increment_ref_count(((struct sNullNode*)(right_value707=(struct sNullNode*)come_calloc(1, sizeof(struct sNullNode)*(1), "sNullNode_clone", 3))));
            if(right_value707 && right_value707 != __result_obj__) { come_call_finalizer(sNullNode_finalize,right_value707, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(_if_conditional711=self!=((void*)0),            _if_conditional711) {
                result_338->sline=self->sline;
            }
            if(_if_conditional712=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional712) {
                __dec_obj293=result_338->sname;
                result_338->sname=(char*)come_increment_ref_count(((char*)(right_value708=string_clone(self->sname))));
                if(__dec_obj293) { __dec_obj293 = come_decrement_ref_count(__dec_obj293, (void*)0, (void*)0, 0,0,0); }
                if(right_value708 && right_value708 != __result_obj__) { right_value708 = come_decrement_ref_count(right_value708, (void*)0, (void*)0, 1, 0, 0); }
            }
            __result392__ = __result_obj__ = result_338;
            if(result_338) { come_call_finalizer(sNullNode_finalize,result_338, (void*)0, (void*)0, 0, 0, 1, 0); }
            return __result392__;
            if(result_338) { come_call_finalizer(sNullNode_finalize,result_338, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct optional$2sNodephbool* optional$2sNodephbool_initialize(struct optional$2sNodephbool* self, struct sNode* v1, _Bool v2){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
struct sNode* __dec_obj294;
struct optional$2sNodephbool* __result393__;
memset(&__result_obj__, 0, sizeof(void*));
            __dec_obj294=self->v1;
            self->v1=(struct sNode*)come_increment_ref_count(v1);
            if(__dec_obj294) { __dec_obj294 = come_decrement_ref_count(__dec_obj294, ((struct sNode*)__dec_obj294)->finalize, ((struct sNode*)__dec_obj294)->_protocol_obj, 0,0,0); }
            self->v2=v2;
            __result393__ = __result_obj__ = self;
            if(self) { come_call_finalizer(optional$2sNodephboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            if(v1) { v1 = come_decrement_ref_count(v1, ((struct sNode*)v1)->finalize, ((struct sNode*)v1)->_protocol_obj, 0, 1, 0); } 
            return __result393__;
            if(self) { come_call_finalizer(optional$2sNodephboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            if(v1) { v1 = come_decrement_ref_count(v1, ((struct sNode*)v1)->finalize, ((struct sNode*)v1)->_protocol_obj, 0, 1, 0); } 
}

static void optional$2sNodephboolp_finalize(struct optional$2sNodephbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional713;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional713=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional713) {
                    if(self->v1) { self->v1 = come_decrement_ref_count(self->v1, ((struct sNode*)self->v1)->finalize, ((struct sNode*)self->v1)->_protocol_obj, 0, 0, 0); } 
                }
}

static void sNilNode_finalize(struct sNilNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional715;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional715=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional715) {
                    if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                }
}

static struct sNilNode* sNilNode_clone(struct sNilNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional716;
struct sNilNode* __result395__;
void* right_value714;
struct sNilNode* result_339;
_Bool _if_conditional717;
_Bool _if_conditional718;
void* right_value715;
char* __dec_obj295;
struct sNilNode* __result396__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_339, 0, sizeof(struct sNilNode*));
                if(_if_conditional716=self==(void*)0,                _if_conditional716) {
                    __result395__ = __result_obj__ = (void*)0;
                    return __result395__;
                }
                result_339=(struct sNilNode*)come_increment_ref_count(((struct sNilNode*)(right_value714=(struct sNilNode*)come_calloc(1, sizeof(struct sNilNode)*(1), "sNilNode_clone", 3))));
                if(right_value714 && right_value714 != __result_obj__) { come_call_finalizer(sNilNode_finalize,right_value714, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(_if_conditional717=self!=((void*)0),                _if_conditional717) {
                    result_339->sline=self->sline;
                }
                if(_if_conditional718=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional718) {
                    __dec_obj295=result_339->sname;
                    result_339->sname=(char*)come_increment_ref_count(((char*)(right_value715=string_clone(self->sname))));
                    if(__dec_obj295) { __dec_obj295 = come_decrement_ref_count(__dec_obj295, (void*)0, (void*)0, 0,0,0); }
                    if(right_value715 && right_value715 != __result_obj__) { right_value715 = come_decrement_ref_count(right_value715, (void*)0, (void*)0, 1, 0, 0); }
                }
                __result396__ = __result_obj__ = result_339;
                if(result_339) { come_call_finalizer(sNilNode_finalize,result_339, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result396__;
                if(result_339) { come_call_finalizer(sNilNode_finalize,result_339, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct sNode* optional$2sNodephbool_catch(struct optional$2sNodephbool* self, void* parent, void (*block)(void*)){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional719;
_Bool _if_conditional720;
struct sNode* __result398__;
struct sNode* __result399__;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional719=!self->v2,        _if_conditional719) {
            block(parent);
            if(_if_conditional720=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,            _if_conditional720) {
                __result398__ = __result_obj__ = self->v1;
                return __result398__;
            }
        }
        __result399__ = __result_obj__ = self->v1;
        return __result399__;
}

void method_block1_13opc(struct __current_stack1__* parent){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value720;
void* right_value721;
memset(&__result_obj__, 0, sizeof(void*));
        if(right_value720 && right_value720 != __result_obj__) { right_value720 = come_decrement_ref_count(right_value720, (void*)0, (void*)0, 1, 0, 0); }
                    ((struct __current_stack1__*) parent)->__method_block_result_kind__ = 3;
            ((struct __current_stack1__*) parent)->__method_block_return_value__ = (struct optional$2voidpbool*)come_increment_ref_count(((struct optional$2voidpbool*)(right_value721=optional$2voidpbool_initialize(((struct optional$2voidpbool*)(right_value720=(struct optional$2voidpbool*)come_calloc(1, sizeof(struct optional$2voidpbool)*(1), "13op.c", 2791))),((void*)0),(_Bool)0))));
        return;}

static struct optional$2voidpbool* optional$2voidpbool_initialize(struct optional$2voidpbool* self, void* v1, _Bool v2){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
struct optional$2voidpbool* __result400__;
memset(&__result_obj__, 0, sizeof(void*));
            self->v1=v1;
            self->v2=v2;
            __result400__ = __result_obj__ = self;
            if(self) { come_call_finalizer(optional$2voidpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            return __result400__;
            if(self) { come_call_finalizer(optional$2voidpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2voidpboolp_finalize(struct optional$2voidpbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

