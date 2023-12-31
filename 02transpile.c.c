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
typedef long int intptr_t;
typedef unsigned int socklen_t;
extern char** __environ;
extern char** environ;
enum { _PC_LINK_MAX
,_PC_MAX_CANON
,_PC_MAX_INPUT
,_PC_NAME_MAX
,_PC_PATH_MAX
,_PC_PIPE_BUF
,_PC_CHOWN_RESTRICTED
,_PC_NO_TRUNC
,_PC_VDISABLE
,_PC_SYNC_IO
,_PC_ASYNC_IO
,_PC_PRIO_IO
,_PC_SOCK_MAXBUF
,_PC_FILESIZEBITS
,_PC_REC_INCR_XFER_SIZE
,_PC_REC_MAX_XFER_SIZE
,_PC_REC_MIN_XFER_SIZE
,_PC_REC_XFER_ALIGN
,_PC_ALLOC_SIZE_MIN
,_PC_SYMLINK_MAX
,_PC_2_SYMLINKS
};
enum { _SC_ARG_MAX
,_SC_CHILD_MAX
,_SC_CLK_TCK
,_SC_NGROUPS_MAX
,_SC_OPEN_MAX
,_SC_STREAM_MAX
,_SC_TZNAME_MAX
,_SC_JOB_CONTROL
,_SC_SAVED_IDS
,_SC_REALTIME_SIGNALS
,_SC_PRIORITY_SCHEDULING
,_SC_TIMERS
,_SC_ASYNCHRONOUS_IO
,_SC_PRIORITIZED_IO
,_SC_SYNCHRONIZED_IO
,_SC_FSYNC
,_SC_MAPPED_FILES
,_SC_MEMLOCK
,_SC_MEMLOCK_RANGE
,_SC_MEMORY_PROTECTION
,_SC_MESSAGE_PASSING
,_SC_SEMAPHORES
,_SC_SHARED_MEMORY_OBJECTS
,_SC_AIO_LISTIO_MAX
,_SC_AIO_MAX
,_SC_AIO_PRIO_DELTA_MAX
,_SC_DELAYTIMER_MAX
,_SC_MQ_OPEN_MAX
,_SC_MQ_PRIO_MAX
,_SC_VERSION
,_SC_PAGESIZE
,_SC_RTSIG_MAX
,_SC_SEM_NSEMS_MAX
,_SC_SEM_VALUE_MAX
,_SC_SIGQUEUE_MAX
,_SC_TIMER_MAX
,_SC_BC_BASE_MAX
,_SC_BC_DIM_MAX
,_SC_BC_SCALE_MAX
,_SC_BC_STRING_MAX
,_SC_COLL_WEIGHTS_MAX
,_SC_EQUIV_CLASS_MAX
,_SC_EXPR_NEST_MAX
,_SC_LINE_MAX
,_SC_RE_DUP_MAX
,_SC_CHARCLASS_NAME_MAX
,_SC_2_VERSION
,_SC_2_C_BIND
,_SC_2_C_DEV
,_SC_2_FORT_DEV
,_SC_2_FORT_RUN
,_SC_2_SW_DEV
,_SC_2_LOCALEDEF
,_SC_PII
,_SC_PII_XTI
,_SC_PII_SOCKET
,_SC_PII_INTERNET
,_SC_PII_OSI
,_SC_POLL
,_SC_SELECT
,_SC_UIO_MAXIOV
,_SC_IOV_MAX=60,
_SC_PII_INTERNET_STREAM
,_SC_PII_INTERNET_DGRAM
,_SC_PII_OSI_COTS
,_SC_PII_OSI_CLTS
,_SC_PII_OSI_M
,_SC_T_IOV_MAX
,_SC_THREADS
,_SC_THREAD_SAFE_FUNCTIONS
,_SC_GETGR_R_SIZE_MAX
,_SC_GETPW_R_SIZE_MAX
,_SC_LOGIN_NAME_MAX
,_SC_TTY_NAME_MAX
,_SC_THREAD_DESTRUCTOR_ITERATIONS
,_SC_THREAD_KEYS_MAX
,_SC_THREAD_STACK_MIN
,_SC_THREAD_THREADS_MAX
,_SC_THREAD_ATTR_STACKADDR
,_SC_THREAD_ATTR_STACKSIZE
,_SC_THREAD_PRIORITY_SCHEDULING
,_SC_THREAD_PRIO_INHERIT
,_SC_THREAD_PRIO_PROTECT
,_SC_THREAD_PROCESS_SHARED
,_SC_NPROCESSORS_CONF
,_SC_NPROCESSORS_ONLN
,_SC_PHYS_PAGES
,_SC_AVPHYS_PAGES
,_SC_ATEXIT_MAX
,_SC_PASS_MAX
,_SC_XOPEN_VERSION
,_SC_XOPEN_XCU_VERSION
,_SC_XOPEN_UNIX
,_SC_XOPEN_CRYPT
,_SC_XOPEN_ENH_I18N
,_SC_XOPEN_SHM
,_SC_2_CHAR_TERM
,_SC_2_C_VERSION
,_SC_2_UPE
,_SC_XOPEN_XPG2
,_SC_XOPEN_XPG3
,_SC_XOPEN_XPG4
,_SC_CHAR_BIT
,_SC_CHAR_MAX
,_SC_CHAR_MIN
,_SC_INT_MAX
,_SC_INT_MIN
,_SC_LONG_BIT
,_SC_WORD_BIT
,_SC_MB_LEN_MAX
,_SC_NZERO
,_SC_SSIZE_MAX
,_SC_SCHAR_MAX
,_SC_SCHAR_MIN
,_SC_SHRT_MAX
,_SC_SHRT_MIN
,_SC_UCHAR_MAX
,_SC_UINT_MAX
,_SC_ULONG_MAX
,_SC_USHRT_MAX
,_SC_NL_ARGMAX
,_SC_NL_LANGMAX
,_SC_NL_MSGMAX
,_SC_NL_NMAX
,_SC_NL_SETMAX
,_SC_NL_TEXTMAX
,_SC_XBS5_ILP32_OFF32
,_SC_XBS5_ILP32_OFFBIG
,_SC_XBS5_LP64_OFF64
,_SC_XBS5_LPBIG_OFFBIG
,_SC_XOPEN_LEGACY
,_SC_XOPEN_REALTIME
,_SC_XOPEN_REALTIME_THREADS
,_SC_ADVISORY_INFO
,_SC_BARRIERS
,_SC_BASE
,_SC_C_LANG_SUPPORT
,_SC_C_LANG_SUPPORT_R
,_SC_CLOCK_SELECTION
,_SC_CPUTIME
,_SC_THREAD_CPUTIME
,_SC_DEVICE_IO
,_SC_DEVICE_SPECIFIC
,_SC_DEVICE_SPECIFIC_R
,_SC_FD_MGMT
,_SC_FIFO
,_SC_PIPE
,_SC_FILE_ATTRIBUTES
,_SC_FILE_LOCKING
,_SC_FILE_SYSTEM
,_SC_MONOTONIC_CLOCK
,_SC_MULTI_PROCESS
,_SC_SINGLE_PROCESS
,_SC_NETWORKING
,_SC_READER_WRITER_LOCKS
,_SC_SPIN_LOCKS
,_SC_REGEXP
,_SC_REGEX_VERSION
,_SC_SHELL
,_SC_SIGNALS
,_SC_SPAWN
,_SC_SPORADIC_SERVER
,_SC_THREAD_SPORADIC_SERVER
,_SC_SYSTEM_DATABASE
,_SC_SYSTEM_DATABASE_R
,_SC_TIMEOUTS
,_SC_TYPED_MEMORY_OBJECTS
,_SC_USER_GROUPS
,_SC_USER_GROUPS_R
,_SC_2_PBS
,_SC_2_PBS_ACCOUNTING
,_SC_2_PBS_LOCATE
,_SC_2_PBS_MESSAGE
,_SC_2_PBS_TRACK
,_SC_SYMLOOP_MAX
,_SC_STREAMS
,_SC_2_PBS_CHECKPOINT
,_SC_V6_ILP32_OFF32
,_SC_V6_ILP32_OFFBIG
,_SC_V6_LP64_OFF64
,_SC_V6_LPBIG_OFFBIG
,_SC_HOST_NAME_MAX
,_SC_TRACE
,_SC_TRACE_EVENT_FILTER
,_SC_TRACE_INHERIT
,_SC_TRACE_LOG
,_SC_LEVEL1_ICACHE_SIZE
,_SC_LEVEL1_ICACHE_ASSOC
,_SC_LEVEL1_ICACHE_LINESIZE
,_SC_LEVEL1_DCACHE_SIZE
,_SC_LEVEL1_DCACHE_ASSOC
,_SC_LEVEL1_DCACHE_LINESIZE
,_SC_LEVEL2_CACHE_SIZE
,_SC_LEVEL2_CACHE_ASSOC
,_SC_LEVEL2_CACHE_LINESIZE
,_SC_LEVEL3_CACHE_SIZE
,_SC_LEVEL3_CACHE_ASSOC
,_SC_LEVEL3_CACHE_LINESIZE
,_SC_LEVEL4_CACHE_SIZE
,_SC_LEVEL4_CACHE_ASSOC
,_SC_LEVEL4_CACHE_LINESIZE
,_SC_IPV6=185+50,
_SC_RAW_SOCKETS
,_SC_V7_ILP32_OFF32
,_SC_V7_ILP32_OFFBIG
,_SC_V7_LP64_OFF64
,_SC_V7_LPBIG_OFFBIG
,_SC_SS_REPL_MAX
,_SC_TRACE_EVENT_NAME_MAX
,_SC_TRACE_NAME_MAX
,_SC_TRACE_SYS_MAX
,_SC_TRACE_USER_EVENT_MAX
,_SC_XOPEN_STREAMS
,_SC_THREAD_ROBUST_PRIO_INHERIT
,_SC_THREAD_ROBUST_PRIO_PROTECT
,_SC_MINSIGSTKSZ
,_SC_SIGSTKSZ
};
enum { _CS_PATH
,_CS_V6_WIDTH_RESTRICTED_ENVS
,_CS_GNU_LIBC_VERSION
,_CS_GNU_LIBPTHREAD_VERSION
,_CS_V5_WIDTH_RESTRICTED_ENVS
,_CS_V7_WIDTH_RESTRICTED_ENVS
,_CS_LFS_CFLAGS=1000,
_CS_LFS_LDFLAGS
,_CS_LFS_LIBS
,_CS_LFS_LINTFLAGS
,_CS_LFS64_CFLAGS
,_CS_LFS64_LDFLAGS
,_CS_LFS64_LIBS
,_CS_LFS64_LINTFLAGS
,_CS_XBS5_ILP32_OFF32_CFLAGS=1100,
_CS_XBS5_ILP32_OFF32_LDFLAGS
,_CS_XBS5_ILP32_OFF32_LIBS
,_CS_XBS5_ILP32_OFF32_LINTFLAGS
,_CS_XBS5_ILP32_OFFBIG_CFLAGS
,_CS_XBS5_ILP32_OFFBIG_LDFLAGS
,_CS_XBS5_ILP32_OFFBIG_LIBS
,_CS_XBS5_ILP32_OFFBIG_LINTFLAGS
,_CS_XBS5_LP64_OFF64_CFLAGS
,_CS_XBS5_LP64_OFF64_LDFLAGS
,_CS_XBS5_LP64_OFF64_LIBS
,_CS_XBS5_LP64_OFF64_LINTFLAGS
,_CS_XBS5_LPBIG_OFFBIG_CFLAGS
,_CS_XBS5_LPBIG_OFFBIG_LDFLAGS
,_CS_XBS5_LPBIG_OFFBIG_LIBS
,_CS_XBS5_LPBIG_OFFBIG_LINTFLAGS
,_CS_POSIX_V6_ILP32_OFF32_CFLAGS
,_CS_POSIX_V6_ILP32_OFF32_LDFLAGS
,_CS_POSIX_V6_ILP32_OFF32_LIBS
,_CS_POSIX_V6_ILP32_OFF32_LINTFLAGS
,_CS_POSIX_V6_ILP32_OFFBIG_CFLAGS
,_CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS
,_CS_POSIX_V6_ILP32_OFFBIG_LIBS
,_CS_POSIX_V6_ILP32_OFFBIG_LINTFLAGS
,_CS_POSIX_V6_LP64_OFF64_CFLAGS
,_CS_POSIX_V6_LP64_OFF64_LDFLAGS
,_CS_POSIX_V6_LP64_OFF64_LIBS
,_CS_POSIX_V6_LP64_OFF64_LINTFLAGS
,_CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS
,_CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS
,_CS_POSIX_V6_LPBIG_OFFBIG_LIBS
,_CS_POSIX_V6_LPBIG_OFFBIG_LINTFLAGS
,_CS_POSIX_V7_ILP32_OFF32_CFLAGS
,_CS_POSIX_V7_ILP32_OFF32_LDFLAGS
,_CS_POSIX_V7_ILP32_OFF32_LIBS
,_CS_POSIX_V7_ILP32_OFF32_LINTFLAGS
,_CS_POSIX_V7_ILP32_OFFBIG_CFLAGS
,_CS_POSIX_V7_ILP32_OFFBIG_LDFLAGS
,_CS_POSIX_V7_ILP32_OFFBIG_LIBS
,_CS_POSIX_V7_ILP32_OFFBIG_LINTFLAGS
,_CS_POSIX_V7_LP64_OFF64_CFLAGS
,_CS_POSIX_V7_LP64_OFF64_LDFLAGS
,_CS_POSIX_V7_LP64_OFF64_LIBS
,_CS_POSIX_V7_LP64_OFF64_LINTFLAGS
,_CS_POSIX_V7_LPBIG_OFFBIG_CFLAGS
,_CS_POSIX_V7_LPBIG_OFFBIG_LDFLAGS
,_CS_POSIX_V7_LPBIG_OFFBIG_LIBS
,_CS_POSIX_V7_LPBIG_OFFBIG_LINTFLAGS
,_CS_V6_ENV
,_CS_V7_ENV
};
extern char* optarg;
extern int optind;
extern int opterr;
extern int optopt;
struct stat
{
    unsigned long int st_dev;
    unsigned long int st_ino;
    unsigned int st_mode;
    unsigned int st_nlink;
    unsigned int st_uid;
    unsigned int st_gid;
    unsigned long int st_rdev;
    unsigned long int __pad1;
    long int st_size;
    int st_blksize;
    int __pad2;
    long int st_blocks;
    struct timespec st_atim;
    struct timespec st_mtim;
    struct timespec st_ctim;
    int __glibc_reserved[2];
};
struct stat64
{
    unsigned long int st_dev;
    unsigned long int st_ino;
    unsigned int st_mode;
    unsigned int st_nlink;
    unsigned int st_uid;
    unsigned int st_gid;
    unsigned long int st_rdev;
    unsigned long int __pad1;
    long int st_size;
    int st_blksize;
    int __pad2;
    long int st_blocks;
    struct timespec st_atim;
    struct timespec st_mtim;
    struct timespec st_ctim;
    int __glibc_reserved[2];
};
typedef char __s8;
typedef unsigned char __u8;
typedef short short __s16;
typedef unsigned short int __u16;
typedef int __s32;
typedef unsigned int __u32;
typedef long long __s64;
typedef unsigned long long __u64;
struct anonymous_typeX21
{
    unsigned long int fds_bits[1024/(8*sizeof(long))];
};
typedef struct anonymous_typeX21 __kernel_fd_set;
typedef void (*__kernel_sighandler_t)(int);
typedef int __kernel_key_t;
typedef int __kernel_mqd_t;
typedef unsigned short int __kernel_old_uid_t;
typedef unsigned short int __kernel_old_gid_t;
typedef long __kernel_long_t;
typedef unsigned long int __kernel_ulong_t;
typedef unsigned long int __kernel_ino_t;
typedef unsigned int __kernel_mode_t;
typedef int __kernel_pid_t;
typedef int __kernel_ipc_pid_t;
typedef unsigned int __kernel_uid_t;
typedef unsigned int __kernel_gid_t;
typedef long __kernel_suseconds_t;
typedef int __kernel_daddr_t;
typedef unsigned int __kernel_uid32_t;
typedef unsigned int __kernel_gid32_t;
typedef unsigned int __kernel_old_dev_t;
typedef unsigned long int __kernel_size_t;
typedef long __kernel_ssize_t;
typedef long __kernel_ptrdiff_t;
struct anonymous_typeX22
{
    int val[2];
};
typedef struct anonymous_typeX22 __kernel_fsid_t;
typedef long __kernel_off_t;
typedef long long __kernel_loff_t;
typedef long __kernel_old_time_t;
typedef long __kernel_time_t;
typedef long long __kernel_time64_t;
typedef long __kernel_clock_t;
typedef int __kernel_timer_t;
typedef int __kernel_clockid_t;
typedef char* __kernel_caddr_t;
typedef unsigned short int __kernel_uid16_t;
typedef unsigned short int __kernel_gid16_t;
typedef unsigned short int __le16;
typedef unsigned short int __be16;
typedef unsigned int __le32;
typedef unsigned int __be32;
typedef unsigned long long __le64;
typedef unsigned long long __be64;
typedef unsigned short int __sum16;
typedef unsigned int __wsum;
typedef unsigned int __poll_t;
struct statx_timestamp
{
    long long tv_sec;
    unsigned int tv_nsec;
    int __reserved;
};
struct statx
{
    unsigned int stx_mask;
    unsigned int stx_blksize;
    unsigned long long stx_attributes;
    unsigned int stx_nlink;
    unsigned int stx_uid;
    unsigned int stx_gid;
    unsigned short int stx_mode;
    unsigned short int __spare0[1];
    unsigned long long stx_ino;
    unsigned long long stx_size;
    unsigned long long stx_blocks;
    unsigned long long stx_attributes_mask;
    struct statx_timestamp stx_atime;
    struct statx_timestamp stx_btime;
    struct statx_timestamp stx_ctime;
    struct statx_timestamp stx_mtime;
    unsigned int stx_rdev_major;
    unsigned int stx_rdev_minor;
    unsigned int stx_dev_major;
    unsigned int stx_dev_minor;
    unsigned long long stx_mnt_id;
    unsigned long long __spare2;
    unsigned long long __spare3[12];
};
extern char* program_invocation_name;
extern char* program_invocation_short_name;
typedef int error_t;
_Bool gComeDebug=(_Bool)0;
_Bool gComeGC=(_Bool)0;
_Bool gComeC=(_Bool)0;
char* gProgramName=((void*)0);
_Bool gCommonHeader=(_Bool)0;
struct __current_stack1__
{
    int __method_block_result_kind__;
    void* __method_block_return_value__;
    int* n_7;
    char** msg2_5;
    struct sInfo** info;
    char** msg;
};
struct optional$2sClasspbool
{
    struct sClass* v1;
    _Bool v2;
};
struct __current_stack2__
{
    int __method_block_result_kind__;
    void* __method_block_return_value__;
    struct sInfo* info_275;
    struct buffer** clang_option_261;
    struct buffer** cpp_option_262;
    struct list$1charph** files_263;
    struct list$1charph** object_files_264;
    _Bool* output_object_file_265;
    _Bool* output_cpp_file_266;
    _Bool* output_source_file_flag_267;
    char** output_file_name_268;
    _Bool* verbose_269;
    int* argc;
    char*** argv;
};

// header function
void come_heap_init(_Bool self);

void come_heap_final(int check_mem_leak);

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

void come_save_stackframe(char* sname, int sline);

void come_show_stackframe();

void come_clear_stackframe();

char* come_get_stackframe();

void stackframe();

void* come_null_check(void* mem, char* sname, int sline);

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

struct sNode* create_object(struct sType* type, struct sInfo* info);

struct sNode* create_true_object(struct sInfo* info);

struct sNode* create_false_object(struct sInfo* info);

struct optional$2sNodephbool* string_node_v21(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* top_level_v94(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* post_position_operator3_v21(struct sNode* node, struct sInfo* info);

struct sNode* top_level_v93(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* top_level_v92(char* buf, char* head, int head_sline, struct sInfo* info);

int access(const char* __name, int __type);

int euidaccess(const char* __name, int __type);

int eaccess(const char* __name, int __type);

int execveat(int __fd, const char* __path, char** __argv, char** __envp, int __flags);

int faccessat(int __fd, const char* __file, int __type, int __flag);

long int lseek(int __fd, long int __offset, int __whence);

long int lseek64(int __fd, long int __offset, int __whence);

int close(int __fd);

void closefrom(int __lowfd);

long int read(int __fd, void* __buf, long int __nbytes);

long int write(int __fd, const void* __buf, long int __n);

long int pread(int __fd, void* __buf, long int __nbytes, long int __offset);

long int pwrite(int __fd, const void* __buf, long int __n, long int __offset);

long int pread64(int __fd, void* __buf, long int __nbytes, long int __offset);

long int pwrite64(int __fd, const void* __buf, long int __n, long int __offset);

int pipe(int __pipedes[2]);

int pipe2(int __pipedes[2], int __flags);

unsigned int alarm(unsigned int __seconds);

unsigned int sleep(unsigned int __seconds);

unsigned int ualarm(unsigned int __value, unsigned int __interval);

int usleep(unsigned int __useconds);

int pause();

int chown(const char* __file, unsigned int __owner, unsigned int __group);

int fchown(int __fd, unsigned int __owner, unsigned int __group);

int lchown(const char* __file, unsigned int __owner, unsigned int __group);

int fchownat(int __fd, const char* __file, unsigned int __owner, unsigned int __group, int __flag);

int chdir(const char* __path);

int fchdir(int __fd);

char* getcwd(char* __buf, long int __size);

char* get_current_dir_name();

char* getwd(char* __buf);

int dup(int __fd);

int dup2(int __fd, int __fd2);

int dup3(int __fd, int __fd2, int __flags);

int execve(const char* __path, char** __argv, char** __envp);

int fexecve(int __fd, char** __argv, char** __envp);

int execv(const char* __path, char** __argv);

int execle(const char* __path, const char* __arg, ...);

int execl(const char* __path, const char* __arg, ...);

int execvp(const char* __file, char** __argv);

int execlp(const char* __file, const char* __arg, ...);

int execvpe(const char* __file, char** __argv, char** __envp);

int nice(int __inc);

void _exit(int __status);

long int pathconf(const char* __path, int __name);

long int fpathconf(int __fd, int __name);

long int sysconf(int __name);

long int confstr(int __name, char* __buf, long int __len);

int getpid();

int getppid();

int getpgrp();

int __getpgid(int __pid);

int getpgid(int __pid);

int setpgid(int __pid, int __pgid);

int setpgrp();

int setsid();

int getsid(int __pid);

unsigned int getuid();

unsigned int geteuid();

unsigned int getgid();

unsigned int getegid();

int getgroups(int __size, unsigned int* __list);

int group_member(unsigned int __gid);

int setuid(unsigned int __uid);

int setreuid(unsigned int __ruid, unsigned int __euid);

int seteuid(unsigned int __uid);

int setgid(unsigned int __gid);

int setregid(unsigned int __rgid, unsigned int __egid);

int setegid(unsigned int __gid);

int getresuid(unsigned int* __ruid, unsigned int* __euid, unsigned int* __suid);

int getresgid(unsigned int* __rgid, unsigned int* __egid, unsigned int* __sgid);

int setresuid(unsigned int __ruid, unsigned int __euid, unsigned int __suid);

int setresgid(unsigned int __rgid, unsigned int __egid, unsigned int __sgid);

int fork();

int vfork();

int _Fork();

char* ttyname(int __fd);

int ttyname_r(int __fd, char* __buf, long int __buflen);

int isatty(int __fd);

int ttyslot();

int link(const char* __from, const char* __to);

int linkat(int __fromfd, const char* __from, int __tofd, const char* __to, int __flags);

int symlink(const char* __from, const char* __to);

long int readlink(const char* __path, char* __buf, long int __len);

int symlinkat(const char* __from, int __tofd, const char* __to);

long int readlinkat(int __fd, const char* __path, char* __buf, long int __len);

int unlink(const char* __name);

int unlinkat(int __fd, const char* __name, int __flag);

int rmdir(const char* __path);

int tcgetpgrp(int __fd);

int tcsetpgrp(int __fd, int __pgrp_id);

char* getlogin();

int getlogin_r(char* __name, long int __name_len);

int setlogin(const char* __name);

int getopt(int ___argc, char** ___argv, const char* __shortopts);

int gethostname(char* __name, long int __len);

int sethostname(const char* __name, long int __len);

int sethostid(long int __id);

int getdomainname(char* __name, long int __len);

int setdomainname(const char* __name, long int __len);

int vhangup();

int revoke(const char* __file);

int profil(unsigned short int* __sample_buffer, long int __size, long int __offset, unsigned int __scale);

int acct(const char* __name);

char* getusershell();

void endusershell();

void setusershell();

int daemon(int __nochdir, int __noclose);

int chroot(const char* __path);

char* getpass(const char* __prompt);

int fsync(int __fd);

int syncfs(int __fd);

long int gethostid();

void sync();

int getpagesize();

int getdtablesize();

int truncate(const char* __file, long int __length);

int truncate64(const char* __file, long int __length);

int ftruncate(int __fd, long int __length);

int ftruncate64(int __fd, long int __length);

int brk(void* __addr);

void* sbrk(long int __delta);

long int syscall(long int __sysno, ...);

int lockf(int __fd, int __cmd, long int __len);

int lockf64(int __fd, int __cmd, long int __len);

long int copy_file_range(int __infd, long int* __pinoff, int __outfd, long int* __poutoff, long int __length, unsigned int __flags);

int fdatasync(int __fildes);

char* crypt(const char* __key, const char* __salt);

void swab(const void* __from, void* __to, long int __n);

int getentropy(void* __buffer, long int __length);

int close_range(unsigned int __fd, unsigned int __max_fd, int __flags);

int gettid();

int stat(const char* __file, struct stat* __buf);

int fstat(int __fd, struct stat* __buf);

int stat64(const char* __file, struct stat64* __buf);

int fstat64(int __fd, struct stat64* __buf);

int fstatat(int __fd, const char* __file, struct stat* __buf, int __flag);

int fstatat64(int __fd, const char* __file, struct stat64* __buf, int __flag);

int lstat(const char* __file, struct stat* __buf);

int lstat64(const char* __file, struct stat64* __buf);

int chmod(const char* __file, unsigned int __mode);

int lchmod(const char* __file, unsigned int __mode);

int fchmod(int __fd, unsigned int __mode);

int fchmodat(int __fd, const char* __file, unsigned int __mode, int __flag);

unsigned int umask(unsigned int __mask);

unsigned int getumask();

int mkdir(const char* __path, unsigned int __mode);

int mkdirat(int __fd, const char* __path, unsigned int __mode);

int mknod(const char* __path, unsigned int __mode, unsigned long int __dev);

int mknodat(int __fd, const char* __path, unsigned int __mode, unsigned long int __dev);

int mkfifo(const char* __path, unsigned int __mode);

int mkfifoat(int __fd, const char* __path, unsigned int __mode);

int utimensat(int __fd, const char* __path, const struct timespec __times[2], int __flags);

int futimens(int __fd, const struct timespec __times[2]);

int statx(int __dirfd, const char* __path, int __flags, unsigned int __mask, struct statx* __buf);

int* __errno_location();

void come_init_v2();

void come_final_v2();

void err_msg(struct sInfo* info, char* msg, ...);

static struct list$1charph* list$1charph_sublist(struct list$1charph* self, int begin, int tail);
static struct list$1charph* list$1charph_initialize(struct list$1charph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item);
static struct list$1voidp* list$1charph_map(struct list$1charph* self, void* parent, void* (*block)(void*,char*));
static struct list$1voidp* list$1voidp_initialize(struct list$1voidp* self);
static void list$1voidpp_finalize(struct list$1voidp* self);
static void list_item$1voidpp_finalize(struct list_item$1voidp* self);
static struct list$1voidp* list$1voidp_push_back(struct list$1voidp* self, void* item);
void* method_block1_02transpilec(struct __current_stack1__* parent, char* it);

static char* list$1voidp_join(struct list$1voidp* self, char* sep);
static void* list$1voidp_begin(struct list$1voidp* self);
static _Bool list$1voidp_end(struct list$1voidp* self);
static void* list$1voidp_next(struct list$1voidp* self);
static int list$1voidp_length(struct list$1voidp* self);
static char* optional$2charphbool_value(struct optional$2charphbool* self);
static void optional$2charphboolp_finalize(struct optional$2charphbool* self);
static void va_list_finalize(va_list self);
int transpile_v2(struct sInfo* info);

_Bool output_source_file_v2(struct sInfo* info);

static int optional$2intbool_value(struct optional$2intbool* self);
static void optional$2intboolp_finalize(struct optional$2intbool* self);
static _Bool cpp(struct sInfo* info);
static _Bool compile(struct sInfo* info, _Bool output_object_file, struct list$1charph* object_files);
static _Bool linker(struct sInfo* info, struct list$1charph* object_files);
static char* list$1charph_begin(struct list$1charph* self);
static _Bool list$1charph_end(struct list$1charph* self);
static char* list$1charph_next(struct list$1charph* self);
struct sModule* sModule_initialize(struct sModule* self);

static void sModule_finalize(struct sModule* self);
struct sVarTable* sVarTable_initialize(struct sVarTable* self, _Bool global, struct sVarTable* parent);

static struct map$2charphsVarph* map$2charphsVarph_initialize(struct map$2charphsVarph* self);
static void sVar_finalize(struct sVar* self);
static void sType_finalize(struct sType* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static struct list$1charp* list$1charp_initialize(struct list$1charp* self);
static void list$1charpp_finalize(struct list$1charp* self);
static void list_item$1charpp_finalize(struct list_item$1charp* self);
static void list$1charp_finalize(struct list$1charp* self);
static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self);
static void map$2charphsVarph_finalize(struct map$2charphsVarph* self);
void sVarTable_finalize(struct sVarTable* self);

struct sType* sType_initialize(struct sType* self, char* name, _Bool heap, struct sInfo* info);

static struct optional$2sClasspbool* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key);
static _Bool optional$2boolbool_value(struct optional$2boolbool* self);
static void optional$2boolboolp_finalize(struct optional$2boolbool* self);
static struct optional$2sClasspbool* optional$2sClasspbool_initialize(struct optional$2sClasspbool* self, struct sClass* v1, _Bool v2);
static void optional$2sClasspboolp_finalize(struct optional$2sClasspbool* self);
static struct sClass* optional$2sClasspbool_value(struct optional$2sClasspbool* self);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item);
static void map$2charphsClassph_rehash(struct map$2charphsClassph* self);
static char* map$2charphsClassph_begin(struct map$2charphsClassph* self);
static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self);
static char* map$2charphsClassph_next(struct map$2charphsClassph* self);
static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value);
static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item);
static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail);
static struct list$1charp* list$1charp_reset(struct list$1charp* self);
static char* list$1charp_begin(struct list$1charp* self);
static _Bool list$1charp_end(struct list$1charp* self);
static char* list$1charp_next(struct list$1charp* self);
static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item);
static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1);
static struct sType* sType_clone(struct sType* self);
static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_clone(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item);
static void list$1sTypeph_finalize(struct list$1sTypeph* self);
static struct list$1sNodeph* list$1sNodeph_clone(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item);
static struct sNode* sNode_clone(struct sNode* self);
static void list$1sNodeph_finalize(struct list$1sNodeph* self);
static struct list$1charph* list$1charph_clone(struct list$1charph* self);
static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item);
static void list$1charph_finalize(struct list$1charph* self);
static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self);
struct sClass* sClass_initialize(struct sClass* self, char* name, _Bool number, _Bool union_, _Bool generics, _Bool method_generics, _Bool protocol_, _Bool struct_, _Bool float_, int generics_num, int method_generics_num, _Bool enum_, struct sInfo* info);

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_initialize(struct list$1tuple2$2charphsTypephph* self);
static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self);
struct sFun* sFun_initialize(struct sFun* self, char* name, struct sType* result_type, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct list$1charph* param_default_parametors, _Bool external, _Bool var_args, struct sBlock* block, _Bool static_, char* come_header, char* declare_sname, struct sInfo* info);

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self);
static _Bool list$1sTypeph_end(struct list$1sTypeph* self);
static struct sType* list$1sTypeph_next(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item);
static struct sBlock* sBlock_clone(struct sBlock* self);
static void sBlock_finalize(struct sBlock* self);
static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self);
static struct sVarTable* sVarTable_clone(struct sVarTable* self);
static struct map$2charphsVarph* map$2charphsVarphp_clone(struct map$2charphsVarph* self);
static char* map$2charphsVarph_begin(struct map$2charphsVarph* self);
static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self);
static char* map$2charphsVarph_next(struct map$2charphsVarph* self);
static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value);
static struct map$2charphsVarph* map$2charphsVarph_insert2(struct map$2charphsVarph* self, char* key, struct sVar* item);
static void map$2charphsVarph_rehash(struct map$2charphsVarph* self);
static struct sVar* sVar_clone(struct sVar* self);
static void sFun_finalize(struct sFun* self);
void init_classes(struct sInfo* info);

static struct map$2charphsTypeph* map$2charphsTypeph_insert(struct map$2charphsTypeph* self, char* key, struct sType* item);
static void map$2charphsTypeph_rehash(struct map$2charphsTypeph* self);
static char* map$2charphsTypeph_begin(struct map$2charphsTypeph* self);
static _Bool map$2charphsTypeph_end(struct map$2charphsTypeph* self);
static char* map$2charphsTypeph_next(struct map$2charphsTypeph* self);
static struct sType* map$2charphsTypeph_at(struct map$2charphsTypeph* self, char* key, struct sType* default_value);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item);
static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2);
void init_module(struct sInfo* info);

_Bool new_project(int argc, char** argv);

_Bool run_project(int argc, char** argv);

int come_main_v2(int argc, char** argv);

static struct map$2charphsFunph* map$2charphsFunph_initialize(struct map$2charphsFunph* self);
static void map$2charphsFunphp_finalize(struct map$2charphsFunph* self);
static void map$2charphsFunph_finalize(struct map$2charphsFunph* self);
static struct map$2charphsGenericsFunph* map$2charphsGenericsFunph_initialize(struct map$2charphsGenericsFunph* self);
static void sGenericsFun_finalize(struct sGenericsFun* self);
static void map$2charphsGenericsFunphp_finalize(struct map$2charphsGenericsFunph* self);
static void map$2charphsGenericsFunph_finalize(struct map$2charphsGenericsFunph* self);
static struct map$2charphsClassph* map$2charphsClassph_initialize(struct map$2charphsClassph* self);
static void map$2charphsClassphp_finalize(struct map$2charphsClassph* self);
static void map$2charphsClassph_finalize(struct map$2charphsClassph* self);
static struct map$2charphsTypeph* map$2charphsTypeph_initialize(struct map$2charphsTypeph* self);
static void map$2charphsTypephp_finalize(struct map$2charphsTypeph* self);
static void map$2charphsTypeph_finalize(struct map$2charphsTypeph* self);
static struct list$1sRightValueObjectph* list$1sRightValueObjectph_initialize(struct list$1sRightValueObjectph* self);
static void list$1sRightValueObjectphp_finalize(struct list$1sRightValueObjectph* self);
static void list_item$1sRightValueObjectphp_finalize(struct list_item$1sRightValueObjectph* self);
static void sRightValueObject_finalize(struct sRightValueObject* self);
static void list$1sRightValueObjectph_finalize(struct list$1sRightValueObjectph* self);
static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self);
static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
static void CVALUE_finalize(struct CVALUE* self);
static void list$1CVALUEph_finalize(struct list$1CVALUEph* self);
static int list$1charph_length(struct list$1charph* self);
static void sInfo_finalize(struct sInfo* self);
static struct optional$2charphbool* list$1charphp_operator_load_element(struct list$1charph* self, int position);
static struct optional$2charphbool* optional$2charphbool_initialize(struct optional$2charphbool* self, char* v1, _Bool v2);
void method_block2_02transpilec(struct __current_stack2__* parent);

// inline function
static inline unsigned short int __bswap_16(unsigned short int __bsx){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned short int __result1__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result1__ = ((unsigned short int)((((__bsx)>>8)&255)|(((__bsx)&255)<<8)));
    __freed_obj__ = 0;
    return __result1__;
    __freed_obj__ = 0;
}
static inline unsigned int __bswap_32(unsigned int __bsx){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int __result2__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result2__ = ((((__bsx)&4278190080)>>24)|(((__bsx)&16711680)>>8)|(((__bsx)&65280)<<8)|(((__bsx)&255)<<24));
    __freed_obj__ = 0;
    return __result2__;
    __freed_obj__ = 0;
}
static inline unsigned long int __bswap_64(unsigned long int __bsx){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned long int __result3__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result3__ = ((((__bsx)&18374686479671623680)>>56)|(((__bsx)&71776119061217280)>>40)|(((__bsx)&280375465082880)>>24)|(((__bsx)&1095216660480)>>8)|(((__bsx)&4278190080)<<8)|(((__bsx)&16711680)<<24)|(((__bsx)&65280)<<40)|(((__bsx)&255)<<56));
    __freed_obj__ = 0;
    return __result3__;
    __freed_obj__ = 0;
}
static inline unsigned short int __uint16_identity(unsigned short int __x){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned short int __result4__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result4__ = __x;
    __freed_obj__ = 0;
    return __result4__;
    __freed_obj__ = 0;
}
static inline unsigned int __uint32_identity(unsigned int __x){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int __result5__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result5__ = __x;
    __freed_obj__ = 0;
    return __result5__;
    __freed_obj__ = 0;
}
static inline unsigned long int __uint64_identity(unsigned long int __x){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned long int __result6__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result6__ = __x;
    __freed_obj__ = 0;
    return __result6__;
    __freed_obj__ = 0;
}
static inline void die(char* msg){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    perror(msg);
    __freed_obj__ = 0;
    exit(4);
    __freed_obj__ = 0;
}
static inline struct smart_pointer$1char* buffer_to_pointer(struct buffer* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value0;
struct smart_pointer$1char* result_0;
void* right_value1;
struct buffer* __dec_obj1;
struct smart_pointer$1char* __result7__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value0, 0, sizeof(void*));
memset(&result_0, 0, sizeof(struct smart_pointer$1char*));
memset(&right_value1, 0, sizeof(void*));
    result_0=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value0=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 1987))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value0);
    if(right_value0 && right_value0 != __result_obj__ && !__freed_obj__) { come_call_finalizer(smart_pointer$1charp_finalize,right_value0, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value0;
    __freed_obj__ = 0;
    __dec_obj1=((struct smart_pointer$1char*)come_null_check(result_0, "./comelang2.h", 1989))->memory;
    ((struct smart_pointer$1char*)come_null_check(result_0, "./comelang2.h", 1989))->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value1=buffer_clone(self))));
    if(__dec_obj1) { come_call_finalizer(buffer_finalize,__dec_obj1, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value1);
    if(right_value1 && right_value1 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value1, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value1;
    __freed_obj__ = 0;
    ((struct smart_pointer$1char*)come_null_check(result_0, "./comelang2.h", 1990))->p=((struct buffer*)come_null_check(((struct smart_pointer$1char*)come_null_check(result_0, "./comelang2.h", 1990))->memory, "./comelang2.h", 1990))->buf;
    __freed_obj__ = 0;
    __result7__ = __result_obj__ = result_0;
    if(result_0 && !__freed_obj__) { come_call_finalizer(smart_pointer$1charp_finalize,result_0, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result7__;
    __freed_obj__ = 0;
    if(result_0 && !__freed_obj__) { come_call_finalizer(smart_pointer$1charp_finalize,result_0, (void*)0, (void*)0, 0, 0, 0, 0); }
}
static inline struct smart_pointer$1char* buffer_to_char_pointer(struct buffer* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value2;
struct smart_pointer$1char* result_1;
void* right_value3;
struct buffer* __dec_obj2;
struct smart_pointer$1char* __result8__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value2, 0, sizeof(void*));
memset(&result_1, 0, sizeof(struct smart_pointer$1char*));
memset(&right_value3, 0, sizeof(void*));
    result_1=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value2=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 1997))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value2);
    if(right_value2 && right_value2 != __result_obj__ && !__freed_obj__) { come_call_finalizer(smart_pointer$1charp_finalize,right_value2, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value2;
    __freed_obj__ = 0;
    __dec_obj2=((struct smart_pointer$1char*)come_null_check(result_1, "./comelang2.h", 1999))->memory;
    ((struct smart_pointer$1char*)come_null_check(result_1, "./comelang2.h", 1999))->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value3=buffer_clone(self))));
    if(__dec_obj2) { come_call_finalizer(buffer_finalize,__dec_obj2, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value3);
    if(right_value3 && right_value3 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value3, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value3;
    __freed_obj__ = 0;
    ((struct smart_pointer$1char*)come_null_check(result_1, "./comelang2.h", 2000))->p=(char*)((struct buffer*)come_null_check(((struct smart_pointer$1char*)come_null_check(result_1, "./comelang2.h", 2000))->memory, "./comelang2.h", 2000))->buf;
    __freed_obj__ = 0;
    __result8__ = __result_obj__ = result_1;
    if(result_1 && !__freed_obj__) { come_call_finalizer(smart_pointer$1charp_finalize,result_1, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result8__;
    __freed_obj__ = 0;
    if(result_1 && !__freed_obj__) { come_call_finalizer(smart_pointer$1charp_finalize,result_1, (void*)0, (void*)0, 0, 0, 0, 0); }
}
static inline struct smart_pointer$1short* buffer_to_short_pointer(struct buffer* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value4;
struct smart_pointer$1short* result_2;
void* right_value5;
struct buffer* __dec_obj3;
struct smart_pointer$1short* __result9__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value4, 0, sizeof(void*));
memset(&result_2, 0, sizeof(struct smart_pointer$1short*));
memset(&right_value5, 0, sizeof(void*));
    result_2=(struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value4=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang2.h", 2007))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value4);
    if(right_value4 && right_value4 != __result_obj__ && !__freed_obj__) { come_call_finalizer(smart_pointer$1shortp_finalize,right_value4, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value4;
    __freed_obj__ = 0;
    __dec_obj3=((struct smart_pointer$1short*)come_null_check(result_2, "./comelang2.h", 2009))->memory;
    ((struct smart_pointer$1short*)come_null_check(result_2, "./comelang2.h", 2009))->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value5=buffer_clone(self))));
    if(__dec_obj3) { come_call_finalizer(buffer_finalize,__dec_obj3, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value5);
    if(right_value5 && right_value5 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value5, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value5;
    __freed_obj__ = 0;
    ((struct smart_pointer$1short*)come_null_check(result_2, "./comelang2.h", 2010))->p=(short short*)((struct buffer*)come_null_check(((struct smart_pointer$1short*)come_null_check(result_2, "./comelang2.h", 2010))->memory, "./comelang2.h", 2010))->buf;
    __freed_obj__ = 0;
    __result9__ = __result_obj__ = result_2;
    if(result_2 && !__freed_obj__) { come_call_finalizer(smart_pointer$1shortp_finalize,result_2, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result9__;
    __freed_obj__ = 0;
    if(result_2 && !__freed_obj__) { come_call_finalizer(smart_pointer$1shortp_finalize,result_2, (void*)0, (void*)0, 0, 0, 0, 0); }
}
static inline struct smart_pointer$1int* buffer_to_int_pointer(struct buffer* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value6;
struct smart_pointer$1int* result_3;
void* right_value7;
struct buffer* __dec_obj4;
struct smart_pointer$1int* __result10__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value6, 0, sizeof(void*));
memset(&result_3, 0, sizeof(struct smart_pointer$1int*));
memset(&right_value7, 0, sizeof(void*));
    result_3=(struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value6=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang2.h", 2017))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value6);
    if(right_value6 && right_value6 != __result_obj__ && !__freed_obj__) { come_call_finalizer(smart_pointer$1intp_finalize,right_value6, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value6;
    __freed_obj__ = 0;
    __dec_obj4=((struct smart_pointer$1int*)come_null_check(result_3, "./comelang2.h", 2019))->memory;
    ((struct smart_pointer$1int*)come_null_check(result_3, "./comelang2.h", 2019))->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value7=buffer_clone(self))));
    if(__dec_obj4) { come_call_finalizer(buffer_finalize,__dec_obj4, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value7);
    if(right_value7 && right_value7 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value7, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value7;
    __freed_obj__ = 0;
    ((struct smart_pointer$1int*)come_null_check(result_3, "./comelang2.h", 2020))->p=(int*)((struct buffer*)come_null_check(((struct smart_pointer$1int*)come_null_check(result_3, "./comelang2.h", 2020))->memory, "./comelang2.h", 2020))->buf;
    __freed_obj__ = 0;
    __result10__ = __result_obj__ = result_3;
    if(result_3 && !__freed_obj__) { come_call_finalizer(smart_pointer$1intp_finalize,result_3, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result10__;
    __freed_obj__ = 0;
    if(result_3 && !__freed_obj__) { come_call_finalizer(smart_pointer$1intp_finalize,result_3, (void*)0, (void*)0, 0, 0, 0, 0); }
}
static inline struct smart_pointer$1long* buffer_to_long_pointer(struct buffer* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value8;
struct smart_pointer$1long* result_4;
void* right_value9;
struct buffer* __dec_obj5;
struct smart_pointer$1long* __result11__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value8, 0, sizeof(void*));
memset(&result_4, 0, sizeof(struct smart_pointer$1long*));
memset(&right_value9, 0, sizeof(void*));
    result_4=(struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value8=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang2.h", 2027))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value8);
    if(right_value8 && right_value8 != __result_obj__ && !__freed_obj__) { come_call_finalizer(smart_pointer$1longp_finalize,right_value8, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value8;
    __freed_obj__ = 0;
    __dec_obj5=((struct smart_pointer$1long*)come_null_check(result_4, "./comelang2.h", 2029))->memory;
    ((struct smart_pointer$1long*)come_null_check(result_4, "./comelang2.h", 2029))->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value9=buffer_clone(self))));
    if(__dec_obj5) { come_call_finalizer(buffer_finalize,__dec_obj5, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value9);
    if(right_value9 && right_value9 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value9, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value9;
    __freed_obj__ = 0;
    ((struct smart_pointer$1long*)come_null_check(result_4, "./comelang2.h", 2030))->p=(long*)((struct buffer*)come_null_check(((struct smart_pointer$1long*)come_null_check(result_4, "./comelang2.h", 2030))->memory, "./comelang2.h", 2030))->buf;
    __freed_obj__ = 0;
    __result11__ = __result_obj__ = result_4;
    if(result_4 && !__freed_obj__) { come_call_finalizer(smart_pointer$1longp_finalize,result_4, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result11__;
    __freed_obj__ = 0;
    if(result_4 && !__freed_obj__) { come_call_finalizer(smart_pointer$1longp_finalize,result_4, (void*)0, (void*)0, 0, 0, 0, 0); }
}

// body function








static void smart_pointer$1charp_finalize(struct smart_pointer$1char* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional1;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional1=self!=((void*)0)&&((struct smart_pointer$1char*)come_null_check(self, "smart_pointer$1charp_finalize", 1))->memory!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional1) {
            if(((struct smart_pointer$1char*)come_null_check(self, "smart_pointer$1charp_finalize", 0))->memory && !__freed_obj__) { come_call_finalizer(buffer_finalize,((struct smart_pointer$1char*)come_null_check(self, "smart_pointer$1charp_finalize", 0))->memory, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
}



static void smart_pointer$1shortp_finalize(struct smart_pointer$1short* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional2;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional2=self!=((void*)0)&&((struct smart_pointer$1short*)come_null_check(self, "smart_pointer$1shortp_finalize", 1))->memory!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional2) {
            if(((struct smart_pointer$1short*)come_null_check(self, "smart_pointer$1shortp_finalize", 0))->memory && !__freed_obj__) { come_call_finalizer(buffer_finalize,((struct smart_pointer$1short*)come_null_check(self, "smart_pointer$1shortp_finalize", 0))->memory, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
}


static void smart_pointer$1intp_finalize(struct smart_pointer$1int* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional3;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional3=self!=((void*)0)&&((struct smart_pointer$1int*)come_null_check(self, "smart_pointer$1intp_finalize", 1))->memory!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional3) {
            if(((struct smart_pointer$1int*)come_null_check(self, "smart_pointer$1intp_finalize", 0))->memory && !__freed_obj__) { come_call_finalizer(buffer_finalize,((struct smart_pointer$1int*)come_null_check(self, "smart_pointer$1intp_finalize", 0))->memory, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
}


static void smart_pointer$1longp_finalize(struct smart_pointer$1long* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional4;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional4=self!=((void*)0)&&((struct smart_pointer$1long*)come_null_check(self, "smart_pointer$1longp_finalize", 1))->memory!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional4) {
            if(((struct smart_pointer$1long*)come_null_check(self, "smart_pointer$1longp_finalize", 0))->memory && !__freed_obj__) { come_call_finalizer(buffer_finalize,((struct smart_pointer$1long*)come_null_check(self, "smart_pointer$1longp_finalize", 0))->memory, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
}

void come_init_v2(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

void come_final_v2(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

void err_msg(struct sInfo* info, char* msg, ...){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional5;
char* msg2_5;
va_list args_6;
_Bool _if_conditional6;
int n_7;
void* right_value10;
void* right_value11;
void* right_value17;
struct __current_stack1__ __current_stack1__;
void* right_value24;
void* right_value28;
void* right_value29;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&msg2_5, 0, sizeof(char*));
memset(&args_6, 0, sizeof(va_list));
memset(&n_7, 0, sizeof(int));
memset(&right_value10, 0, sizeof(void*));
memset(&right_value11, 0, sizeof(void*));
memset(&right_value17, 0, sizeof(void*));
memset(&__current_stack1__, 0, sizeof(struct __current_stack1__));
memset(&right_value24, 0, sizeof(void*));
memset(&right_value28, 0, sizeof(void*));
memset(&right_value29, 0, sizeof(void*));
    if(_if_conditional5=!((struct sInfo*)come_null_check(info, "02transpile.c", 44))->no_output_err,    __freed_obj__ = 0, 
    _if_conditional5) {
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        __builtin_va_start(args_6,msg);
        __freed_obj__ = 0;
        vasprintf(&msg2_5,msg,args_6);
        __freed_obj__ = 0;
        __builtin_va_end(args_6);
        __freed_obj__ = 0;
        printf("%s %d: %s\n",((struct sInfo*)come_null_check(info, "02transpile.c", 34))->sname,((struct sInfo*)come_null_check(info, "02transpile.c", 34))->sline,msg2_5);
        __freed_obj__ = 0;
        ((struct sInfo*)come_null_check(info, "02transpile.c", 35))->err_num++;
        __freed_obj__ = 0;
        if(_if_conditional6=((struct sInfo*)come_null_check(info, "02transpile.c", 42))->come_fun,        __freed_obj__ = 0, 
        _if_conditional6) {
            n_7=((struct sInfo*)come_null_check(info, "02transpile.c", 38))->sline-5;
            __freed_obj__ = 0;
            __current_stack1__.n_7 = &n_7;
            __current_stack1__.msg2_5 = &msg2_5;
            __current_stack1__.info = &info;
            __current_stack1__.msg = &msg;
            come_clear_stackframe();
            optional$2charphbool_value((come_push_stackframe("02transpile.c", 39),((struct optional$2charphbool*)(right_value29=string_puts(((char*)come_null_check(((char*)(right_value28=list$1voidp_join(((struct list$1voidp*)come_null_check(((struct list$1voidp*)(right_value24=list$1charph_map(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value17=list$1charph_sublist(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value11=string_split_char(((char*)come_null_check(((char*)(right_value10=buffer_to_string(((struct buffer*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 39))->original_source, "02transpile.c", 39))))), "02transpile.c", 39)),10))), "02transpile.c", 39)),n_7,n_7+10))), "02transpile.c", 39)),&__current_stack1__,(void*)method_block1_02transpilec))), "02transpile.c", 39)),"\n"))), "02transpile.c", 39)))))));
            come_pop_stackframe();
                                if(__current_stack1__.__method_block_result_kind__ == 4)
                    {
                        return;
                    }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value10);
            if(right_value10 && right_value10 != __result_obj__ && !__freed_obj__) { right_value10 = come_decrement_ref_count(right_value10, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value10;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value11);
            if(right_value11 && right_value11 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value11, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value11;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value17);
            if(right_value17 && right_value17 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value17, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value17;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value24);
            if(right_value24 && right_value24 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1voidpp_finalize,right_value24, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[3] = right_value24;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value28);
            if(right_value28 && right_value28 != __result_obj__ && !__freed_obj__) { right_value28 = come_decrement_ref_count(right_value28, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[4] = right_value28;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value29);
            if(right_value29 && right_value29 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value29, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[5] = right_value29;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        free(msg2_5);
        __freed_obj__ = 0;
        if((&args_6) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_6), (void*)0, (void*)0, 1, 0, 0, 0); }
    }
    __freed_obj__ = 0;
}

static struct list$1charph* list$1charph_sublist(struct list$1charph* self, int begin, int tail){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value12;
void* right_value13;
struct list$1charph* result_10;
_Bool _if_conditional8;
_Bool _if_conditional9;
_Bool _if_conditional10;
_Bool _if_conditional11;
struct list_item$1charph* it_11;
int i_12;
_Bool _while_condtional2;
_Bool _if_conditional12;
struct list$1charph* __result14__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value12, 0, sizeof(void*));
memset(&right_value13, 0, sizeof(void*));
memset(&result_10, 0, sizeof(struct list$1charph*));
memset(&it_11, 0, sizeof(struct list_item$1charph*));
memset(&i_12, 0, sizeof(int));
                result_10=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value13=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value12=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 689))), "./comelang2.h", 689)))))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value12);
                if(right_value12 && right_value12 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value12, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value12;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value13);
                if(right_value13 && right_value13 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value13, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value13;
                __freed_obj__ = 0;
                if(_if_conditional8=begin<0,                __freed_obj__ = 0, 
                _if_conditional8) {
                    begin+=((struct list$1charph*)come_null_check(self, "./comelang2.h", 692))->len;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional9=tail<0,                __freed_obj__ = 0, 
                _if_conditional9) {
                    tail+=((struct list$1charph*)come_null_check(self, "./comelang2.h", 696))->len+1;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional10=begin<0,                __freed_obj__ = 0, 
                _if_conditional10) {
                    begin=0;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional11=tail>=((struct list$1charph*)come_null_check(self, "./comelang2.h", 707))->len,                __freed_obj__ = 0, 
                _if_conditional11) {
                    tail=((struct list$1charph*)come_null_check(self, "./comelang2.h", 704))->len;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                it_11=((struct list$1charph*)come_null_check(self, "./comelang2.h", 707))->head;
                __freed_obj__ = 0;
                i_12=0;
                __freed_obj__ = 0;
                while(_while_condtional2=it_11!=((void*)0),                __freed_obj__ = 0, 
                _while_condtional2) {
                    if(_if_conditional12=i_12>=begin&&i_12<tail,                    __freed_obj__ = 0, 
                    _if_conditional12) {
                        list$1charph_push_back(((struct list$1charph*)come_null_check(result_10, "./comelang2.h", 711)),(char*)come_increment_ref_count(((struct list_item$1charph*)come_null_check(it_11, "./comelang2.h", 711))->item));
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    it_11=((struct list_item$1charph*)come_null_check(it_11, "./comelang2.h", 713))->next;
                    __freed_obj__ = 0;
                    i_12++;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __result14__ = __result_obj__ = result_10;
                if(result_10 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_10, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result14__;
                __freed_obj__ = 0;
                if(result_10 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_10, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1charph* __result12__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 150))->head=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 151))->tail=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 152))->len=0;
                    __freed_obj__ = 0;
                    __result12__ = __result_obj__ = self;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result12__;
                    __freed_obj__ = 0;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1charph* it_8;
_Bool _while_condtional1;
struct list_item$1charph* prev_it_9;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_8, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_9, 0, sizeof(struct list_item$1charph*));
                        it_8=((struct list$1charph*)come_null_check(self, "./comelang2.h", 169))->head;
                        __freed_obj__ = 0;
                        while(_while_condtional1=it_8!=((void*)0),                        __freed_obj__ = 0, 
                        _while_condtional1) {
                            prev_it_9=it_8;
                            __freed_obj__ = 0;
                            it_8=((struct list_item$1charph*)come_null_check(it_8, "./comelang2.h", 172))->next;
                            __freed_obj__ = 0;
                            if(prev_it_9 && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,prev_it_9, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional7;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional7=self!=((void*)0)&&((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 1))->item!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional7) {
                                    if(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item && !__freed_obj__) { ((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item = come_decrement_ref_count(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional13;
void* right_value14;
struct list_item$1charph* litem_13;
char* __dec_obj6;
_Bool _if_conditional14;
void* right_value15;
struct list_item$1charph* litem_14;
char* __dec_obj7;
void* right_value16;
struct list_item$1charph* litem_15;
char* __dec_obj8;
struct list$1charph* __result13__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value14, 0, sizeof(void*));
memset(&litem_13, 0, sizeof(struct list_item$1charph*));
memset(&right_value15, 0, sizeof(void*));
memset(&litem_14, 0, sizeof(struct list_item$1charph*));
memset(&right_value16, 0, sizeof(void*));
memset(&litem_15, 0, sizeof(struct list_item$1charph*));
                            if(_if_conditional13=((struct list$1charph*)come_null_check(self, "./comelang2.h", 302))->len==0,                            __freed_obj__ = 0, 
                            _if_conditional13) {
                                litem_13=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value14=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 272))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value14);
                                if(right_value14 && right_value14 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value14, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value14;
                                __freed_obj__ = 0;
                                ((struct list_item$1charph*)come_null_check(litem_13, "./comelang2.h", 274))->prev=((void*)0);
                                __freed_obj__ = 0;
                                ((struct list_item$1charph*)come_null_check(litem_13, "./comelang2.h", 275))->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj6=((struct list_item$1charph*)come_null_check(litem_13, "./comelang2.h", 276))->item;
                                ((struct list_item$1charph*)come_null_check(litem_13, "./comelang2.h", 276))->item=(char*)come_increment_ref_count(item);
                                if(__dec_obj6) { __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = 0;
                                ((struct list$1charph*)come_null_check(self, "./comelang2.h", 278))->tail=litem_13;
                                __freed_obj__ = 0;
                                ((struct list$1charph*)come_null_check(self, "./comelang2.h", 279))->head=litem_13;
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional14=((struct list$1charph*)come_null_check(self, "./comelang2.h", 302))->len==1,                                __freed_obj__ = 0, 
                                _if_conditional14) {
                                    litem_14=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value15=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 282))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value15);
                                    if(right_value15 && right_value15 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value15, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value15;
                                    __freed_obj__ = 0;
                                    ((struct list_item$1charph*)come_null_check(litem_14, "./comelang2.h", 284))->prev=((struct list$1charph*)come_null_check(self, "./comelang2.h", 284))->head;
                                    __freed_obj__ = 0;
                                    ((struct list_item$1charph*)come_null_check(litem_14, "./comelang2.h", 285))->next=((void*)0);
                                    __freed_obj__ = 0;
                                    __dec_obj7=((struct list_item$1charph*)come_null_check(litem_14, "./comelang2.h", 286))->item;
                                    ((struct list_item$1charph*)come_null_check(litem_14, "./comelang2.h", 286))->item=(char*)come_increment_ref_count(item);
                                    if(__dec_obj7) { __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = 0;
                                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 288))->tail=litem_14;
                                    __freed_obj__ = 0;
                                    ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 289))->head, "./comelang2.h", 289))->next=litem_14;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    litem_15=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value16=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 292))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value16);
                                    if(right_value16 && right_value16 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value16, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value16;
                                    __freed_obj__ = 0;
                                    ((struct list_item$1charph*)come_null_check(litem_15, "./comelang2.h", 294))->prev=((struct list$1charph*)come_null_check(self, "./comelang2.h", 294))->tail;
                                    __freed_obj__ = 0;
                                    ((struct list_item$1charph*)come_null_check(litem_15, "./comelang2.h", 295))->next=((void*)0);
                                    __freed_obj__ = 0;
                                    __dec_obj8=((struct list_item$1charph*)come_null_check(litem_15, "./comelang2.h", 296))->item;
                                    ((struct list_item$1charph*)come_null_check(litem_15, "./comelang2.h", 296))->item=(char*)come_increment_ref_count(item);
                                    if(__dec_obj8) { __dec_obj8 = come_decrement_ref_count(__dec_obj8, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = 0;
                                    ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 298))->tail, "./comelang2.h", 298))->next=litem_15;
                                    __freed_obj__ = 0;
                                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 299))->tail=litem_15;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            ((struct list$1charph*)come_null_check(self, "./comelang2.h", 302))->len++;
                            __freed_obj__ = 0;
                            __result13__ = __result_obj__ = self;
                            if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
                            __freed_obj__ = 0;
                            return __result13__;
                            __freed_obj__ = 0;
                            if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
}

static struct list$1voidp* list$1charph_map(struct list$1charph* self, void* parent, void* (*block)(void*,char*)){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value18;
void* right_value19;
struct list$1voidp* result_18;
struct list_item$1charph* it_19;
_Bool _while_condtional4;
_Bool _if_conditional17;
struct list$1voidp* __result17__;
struct list$1voidp* __result18__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value18, 0, sizeof(void*));
memset(&right_value19, 0, sizeof(void*));
memset(&result_18, 0, sizeof(struct list$1voidp*));
memset(&it_19, 0, sizeof(struct list_item$1charph*));
                result_18=(struct list$1voidp*)come_increment_ref_count(((struct list$1voidp*)(right_value19=list$1voidp_initialize((struct list$1voidp*)come_increment_ref_count(((struct list$1voidp*)come_null_check(((struct list$1voidp*)(right_value18=(struct list$1voidp*)come_calloc(1, sizeof(struct list$1voidp)*(1), "./comelang2.h", 979))), "./comelang2.h", 979)))))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value18);
                if(right_value18 && right_value18 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1voidpp_finalize,right_value18, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value18;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value19);
                if(right_value19 && right_value19 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1voidpp_finalize,right_value19, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value19;
                __freed_obj__ = 0;
                it_19=((struct list$1charph*)come_null_check(self, "./comelang2.h", 981))->head;
                __freed_obj__ = 0;
                while(_while_condtional4=it_19!=((void*)0),                __freed_obj__ = 0, 
                _while_condtional4) {
                    list$1voidp_push_back(((struct list$1voidp*)come_null_check(result_18, "./comelang2.h", 983)),block(parent,((struct list_item$1charph*)come_null_check(it_19, "./comelang2.h", 983))->item));
                    __freed_obj__ = 0;
                    if(_if_conditional17=((struct sDummyCurrentStack*)come_null_check(((struct sDummyCurrentStack*)parent), "./comelang2.h", 989))->__method_block_result_kind__!=0,                    __freed_obj__ = 0, 
                    _if_conditional17) {
                        __result17__ = __result_obj__ = result_18;
                        if(result_18 && !__freed_obj__) { come_call_finalizer(list$1voidpp_finalize,result_18, (void*)0, (void*)0, 0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result17__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    it_19=((struct list_item$1charph*)come_null_check(it_19, "./comelang2.h", 989))->next;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __result18__ = __result_obj__ = result_18;
                if(result_18 && !__freed_obj__) { come_call_finalizer(list$1voidpp_finalize,result_18, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result18__;
                __freed_obj__ = 0;
                if(result_18 && !__freed_obj__) { come_call_finalizer(list$1voidpp_finalize,result_18, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1voidp* list$1voidp_initialize(struct list$1voidp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1voidp* __result15__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    ((struct list$1voidp*)come_null_check(self, "./comelang2.h", 150))->head=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list$1voidp*)come_null_check(self, "./comelang2.h", 151))->tail=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list$1voidp*)come_null_check(self, "./comelang2.h", 152))->len=0;
                    __freed_obj__ = 0;
                    __result15__ = __result_obj__ = self;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1voidpp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result15__;
                    __freed_obj__ = 0;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1voidpp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list$1voidpp_finalize(struct list$1voidp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1voidp* it_16;
_Bool _while_condtional3;
struct list_item$1voidp* prev_it_17;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_16, 0, sizeof(struct list_item$1voidp*));
memset(&prev_it_17, 0, sizeof(struct list_item$1voidp*));
                        it_16=((struct list$1voidp*)come_null_check(self, "./comelang2.h", 169))->head;
                        __freed_obj__ = 0;
                        while(_while_condtional3=it_16!=((void*)0),                        __freed_obj__ = 0, 
                        _while_condtional3) {
                            prev_it_17=it_16;
                            __freed_obj__ = 0;
                            it_16=((struct list_item$1voidp*)come_null_check(it_16, "./comelang2.h", 172))->next;
                            __freed_obj__ = 0;
                            if(prev_it_17 && !__freed_obj__) { come_call_finalizer(list_item$1voidpp_finalize,prev_it_17, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

static void list_item$1voidpp_finalize(struct list_item$1voidp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct list$1voidp* list$1voidp_push_back(struct list$1voidp* self, void* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional15;
void* right_value20;
struct list_item$1voidp* litem_20;
_Bool _if_conditional16;
void* right_value21;
struct list_item$1voidp* litem_21;
void* right_value22;
struct list_item$1voidp* litem_22;
struct list$1voidp* __result16__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value20, 0, sizeof(void*));
memset(&litem_20, 0, sizeof(struct list_item$1voidp*));
memset(&right_value21, 0, sizeof(void*));
memset(&litem_21, 0, sizeof(struct list_item$1voidp*));
memset(&right_value22, 0, sizeof(void*));
memset(&litem_22, 0, sizeof(struct list_item$1voidp*));
                        if(_if_conditional15=((struct list$1voidp*)come_null_check(self, "./comelang2.h", 302))->len==0,                        __freed_obj__ = 0, 
                        _if_conditional15) {
                            litem_20=(struct list_item$1voidp*)come_increment_ref_count(((struct list_item$1voidp*)(right_value20=(struct list_item$1voidp*)come_calloc(1, sizeof(struct list_item$1voidp)*(1), "./comelang2.h", 272))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value20);
                            if(right_value20 && right_value20 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1voidpp_finalize,right_value20, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value20;
                            __freed_obj__ = 0;
                            ((struct list_item$1voidp*)come_null_check(litem_20, "./comelang2.h", 274))->prev=((void*)0);
                            __freed_obj__ = 0;
                            ((struct list_item$1voidp*)come_null_check(litem_20, "./comelang2.h", 275))->next=((void*)0);
                            __freed_obj__ = 0;
                            ((struct list_item$1voidp*)come_null_check(litem_20, "./comelang2.h", 276))->item=item;
                            __freed_obj__ = 0;
                            ((struct list$1voidp*)come_null_check(self, "./comelang2.h", 278))->tail=litem_20;
                            __freed_obj__ = 0;
                            ((struct list$1voidp*)come_null_check(self, "./comelang2.h", 279))->head=litem_20;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional16=((struct list$1voidp*)come_null_check(self, "./comelang2.h", 302))->len==1,                            __freed_obj__ = 0, 
                            _if_conditional16) {
                                litem_21=(struct list_item$1voidp*)come_increment_ref_count(((struct list_item$1voidp*)(right_value21=(struct list_item$1voidp*)come_calloc(1, sizeof(struct list_item$1voidp)*(1), "./comelang2.h", 282))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value21);
                                if(right_value21 && right_value21 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1voidpp_finalize,right_value21, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value21;
                                __freed_obj__ = 0;
                                ((struct list_item$1voidp*)come_null_check(litem_21, "./comelang2.h", 284))->prev=((struct list$1voidp*)come_null_check(self, "./comelang2.h", 284))->head;
                                __freed_obj__ = 0;
                                ((struct list_item$1voidp*)come_null_check(litem_21, "./comelang2.h", 285))->next=((void*)0);
                                __freed_obj__ = 0;
                                ((struct list_item$1voidp*)come_null_check(litem_21, "./comelang2.h", 286))->item=item;
                                __freed_obj__ = 0;
                                ((struct list$1voidp*)come_null_check(self, "./comelang2.h", 288))->tail=litem_21;
                                __freed_obj__ = 0;
                                ((struct list_item$1voidp*)come_null_check(((struct list$1voidp*)come_null_check(self, "./comelang2.h", 289))->head, "./comelang2.h", 289))->next=litem_21;
                                __freed_obj__ = 0;
                            }
                            else {
                                litem_22=(struct list_item$1voidp*)come_increment_ref_count(((struct list_item$1voidp*)(right_value22=(struct list_item$1voidp*)come_calloc(1, sizeof(struct list_item$1voidp)*(1), "./comelang2.h", 292))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value22);
                                if(right_value22 && right_value22 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1voidpp_finalize,right_value22, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value22;
                                __freed_obj__ = 0;
                                ((struct list_item$1voidp*)come_null_check(litem_22, "./comelang2.h", 294))->prev=((struct list$1voidp*)come_null_check(self, "./comelang2.h", 294))->tail;
                                __freed_obj__ = 0;
                                ((struct list_item$1voidp*)come_null_check(litem_22, "./comelang2.h", 295))->next=((void*)0);
                                __freed_obj__ = 0;
                                ((struct list_item$1voidp*)come_null_check(litem_22, "./comelang2.h", 296))->item=item;
                                __freed_obj__ = 0;
                                ((struct list_item$1voidp*)come_null_check(((struct list$1voidp*)come_null_check(self, "./comelang2.h", 298))->tail, "./comelang2.h", 298))->next=litem_22;
                                __freed_obj__ = 0;
                                ((struct list$1voidp*)come_null_check(self, "./comelang2.h", 299))->tail=litem_22;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        ((struct list$1voidp*)come_null_check(self, "./comelang2.h", 302))->len++;
                        __freed_obj__ = 0;
                        __result16__ = __result_obj__ = self;
                        __freed_obj__ = 0;
                        return __result16__;
                        __freed_obj__ = 0;
}

void* method_block1_02transpilec(struct __current_stack1__* parent, char* it){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value23;
void* __result19__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value23, 0, sizeof(void*));
                __result19__ = __result_obj__ = ((char*)(right_value23=xsprintf("%d %s",++(*(parent->n_7)),it)));
                __freed_obj__ = 0;
                return __result19__;
                __freed_obj__ = 0;
}

static char* list$1voidp_join(struct list$1voidp* self, char* sep){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value25;
void* right_value26;
struct buffer* buf_23;
int n_24;
void* it_27;
_Bool _for_condtionalA1;
_Bool _if_conditional22;
void* right_value27;
char* __result28__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value25, 0, sizeof(void*));
memset(&right_value26, 0, sizeof(void*));
memset(&buf_23, 0, sizeof(struct buffer*));
memset(&n_24, 0, sizeof(int));
memset(&it_27, 0, sizeof(void*));
memset(&right_value27, 0, sizeof(void*));
                buf_23=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value26=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value25=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 1082))))))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value25);
                if(right_value25 && right_value25 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value25, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value25;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value26);
                if(right_value26 && right_value26 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value26, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value26;
                __freed_obj__ = 0;
                n_24=0;
                __freed_obj__ = 0;
                for(
                it_27=list$1voidp_begin(((struct list$1voidp*)come_null_check(self, "./comelang2.h", 1095))) ,                __freed_obj__ = 0, 
                0;                _for_condtionalA1=                !list$1voidp_end(((struct list$1voidp*)come_null_check(self, "./comelang2.h", 1095))) ,                __freed_obj__ = 0, 
                _for_condtionalA1;                it_27=list$1voidp_next(((struct list$1voidp*)come_null_check(self, "./comelang2.h", 1095))) ,                __freed_obj__ = 0, 
                0                ){
                    buffer_append_str(((struct buffer*)come_null_check(buf_23, "./comelang2.h", 1086)),it_27);
                    __freed_obj__ = 0;
                    if(_if_conditional22=n_24<list$1voidp_length(((struct list$1voidp*)come_null_check(self, "./comelang2.h", 1092)))-1,                    __freed_obj__ = 0, 
                    _if_conditional22) {
                        buffer_append_str(((struct buffer*)come_null_check(buf_23, "./comelang2.h", 1089)),sep);
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    n_24++;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __result28__ = __result_obj__ = ((char*)(right_value27=buffer_to_string(((struct buffer*)come_null_check(buf_23, "./comelang2.h", 1095)))));
                if(buf_23 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_23, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                return __result28__;
                __freed_obj__ = 0;
                if(buf_23 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_23, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void* list$1voidp_begin(struct list$1voidp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional18;
void* result_25;
void* __result20__;
_Bool _if_conditional19;
void* __result21__;
void* result_26;
void* __result22__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_25, 0, sizeof(void*));
memset(&result_26, 0, sizeof(void*));
                    if(_if_conditional18=self==((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional18) {
                        __freed_obj__ = 0;
                        memset(&result_25,0,sizeof(void*));
                        __freed_obj__ = 0;
                        __result20__ = __result_obj__ = result_25;
                        __freed_obj__ = 0;
                        return __result20__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    ((struct list$1voidp*)come_null_check(self, "./comelang2.h", 336))->it=((struct list$1voidp*)come_null_check(self, "./comelang2.h", 336))->head;
                    __freed_obj__ = 0;
                    if(_if_conditional19=((struct list$1voidp*)come_null_check(self, "./comelang2.h", 342))->it,                    __freed_obj__ = 0, 
                    _if_conditional19) {
                        __result21__ = __result_obj__ = ((struct list_item$1voidp*)come_null_check(((struct list$1voidp*)come_null_check(self, "./comelang2.h", 339))->it, "./comelang2.h", 339))->item;
                        __freed_obj__ = 0;
                        return __result21__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __freed_obj__ = 0;
                    memset(&result_26,0,sizeof(void*));
                    __freed_obj__ = 0;
                    __result22__ = __result_obj__ = result_26;
                    __freed_obj__ = 0;
                    return __result22__;
                    __freed_obj__ = 0;
}

static _Bool list$1voidp_end(struct list$1voidp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result23__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    __result23__ = self==((void*)0)||((struct list$1voidp*)come_null_check(self, "./comelang2.h", 366))->it==((void*)0);
                    __freed_obj__ = 0;
                    return __result23__;
                    __freed_obj__ = 0;
}

static void* list$1voidp_next(struct list$1voidp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional20;
void* result_28;
void* __result24__;
_Bool _if_conditional21;
void* __result25__;
void* result_29;
void* __result26__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_28, 0, sizeof(void*));
memset(&result_29, 0, sizeof(void*));
                    if(_if_conditional20=self==((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional20) {
                        __freed_obj__ = 0;
                        memset(&result_28,0,sizeof(void*));
                        __freed_obj__ = 0;
                        __result24__ = __result_obj__ = result_28;
                        __freed_obj__ = 0;
                        return __result24__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    ((struct list$1voidp*)come_null_check(self, "./comelang2.h", 354))->it=((struct list_item$1voidp*)come_null_check(((struct list$1voidp*)come_null_check(self, "./comelang2.h", 354))->it, "./comelang2.h", 354))->next;
                    __freed_obj__ = 0;
                    if(_if_conditional21=((struct list$1voidp*)come_null_check(self, "./comelang2.h", 360))->it,                    __freed_obj__ = 0, 
                    _if_conditional21) {
                        __result25__ = __result_obj__ = ((struct list_item$1voidp*)come_null_check(((struct list$1voidp*)come_null_check(self, "./comelang2.h", 357))->it, "./comelang2.h", 357))->item;
                        __freed_obj__ = 0;
                        return __result25__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __freed_obj__ = 0;
                    memset(&result_29,0,sizeof(void*));
                    __freed_obj__ = 0;
                    __result26__ = __result_obj__ = result_29;
                    __freed_obj__ = 0;
                    return __result26__;
                    __freed_obj__ = 0;
}

static int list$1voidp_length(struct list$1voidp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result27__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        __result27__ = ((struct list$1voidp*)come_null_check(self, "./comelang2.h", 410))->len;
                        __freed_obj__ = 0;
                        return __result27__;
                        __freed_obj__ = 0;
}

static char* optional$2charphbool_value(struct optional$2charphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional23;
char* default_value_30;
char* __result29__;
char* __result30__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_30, 0, sizeof(char*));
                if(_if_conditional23=self==((void*)0),                __freed_obj__ = 0, 
                _if_conditional23) {
                    __freed_obj__ = 0;
                    memset(&default_value_30,0,sizeof(char*));
                    __freed_obj__ = 0;
                    __result29__ = __result_obj__ = default_value_30;
                    __freed_obj__ = 0;
                    return __result29__;
                    __freed_obj__ = 0;
                }
                else {
                    __result30__ = __result_obj__ = ((struct optional$2charphbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                    __freed_obj__ = 0;
                    return __result30__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static void optional$2charphboolp_finalize(struct optional$2charphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional24;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional24=self!=((void*)0)&&((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 1))->v1!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional24) {
                    if(((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 0))->v1 && !__freed_obj__) { ((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 0))->v1 = come_decrement_ref_count(((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static void va_list_finalize(va_list self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

int transpile_v2(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result31__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result31__ = 0;
    __freed_obj__ = 0;
    return __result31__;
    __freed_obj__ = 0;
}

_Bool output_source_file_v2(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value30;
char* output_file_name_31;
void* right_value31;
void* right_value32;
_Bool __result34__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value30, 0, sizeof(void*));
memset(&output_file_name_31, 0, sizeof(char*));
memset(&right_value31, 0, sizeof(void*));
memset(&right_value32, 0, sizeof(void*));
    output_file_name_31=(char*)come_increment_ref_count(((char*)(right_value30=xsprintf("%s.c",((struct sInfo*)come_null_check(info, "02transpile.c", 53))->sname))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value30);
    if(right_value30 && right_value30 != __result_obj__ && !__freed_obj__) { right_value30 = come_decrement_ref_count(right_value30, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value30;
    __freed_obj__ = 0;
    come_clear_stackframe();
    optional$2intbool_value((come_push_stackframe("02transpile.c", 57),((struct optional$2intbool*)(right_value32=string_write(((char*)come_null_check(((char*)(right_value31=__builtin_string("int main(int argc, char** argv) { return 0; }\n"))), "02transpile.c", 57)),output_file_name_31,(_Bool)0)))));
    come_pop_stackframe();
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value31);
    if(right_value31 && right_value31 != __result_obj__ && !__freed_obj__) { right_value31 = come_decrement_ref_count(right_value31, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value31;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value32);
    if(right_value32 && right_value32 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value32, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value32;
    __freed_obj__ = 0;
    __result34__ = (_Bool)1;
    if(output_file_name_31 && !__freed_obj__) { output_file_name_31 = come_decrement_ref_count(output_file_name_31, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result34__;
    __freed_obj__ = 0;
    if(output_file_name_31 && !__freed_obj__) { output_file_name_31 = come_decrement_ref_count(output_file_name_31, (void*)0, (void*)0, 0, 0, 0); }
}

static int optional$2intbool_value(struct optional$2intbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional25;
int default_value_32;
int __result32__;
int __result33__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_32, 0, sizeof(int));
        if(_if_conditional25=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional25) {
            __freed_obj__ = 0;
            memset(&default_value_32,0,sizeof(int));
            __freed_obj__ = 0;
            __result32__ = default_value_32;
            __freed_obj__ = 0;
            return __result32__;
            __freed_obj__ = 0;
        }
        else {
            __result33__ = ((struct optional$2intbool*)come_null_check(self, "./comelang2.h", 65))->v1;
            __freed_obj__ = 0;
            return __result33__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
}

static void optional$2intboolp_finalize(struct optional$2intbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static _Bool cpp(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* input_file_name_33;
char* output_file_name_34;
_Bool _if_conditional26;
void* right_value33;
char* __dec_obj9;
void* right_value34;
char* __dec_obj10;
void* right_value35;
char* cmd_35;
_Bool exist_common_h_36;
struct _IO_FILE* f_37;
_Bool _if_conditional27;
_Bool _if_conditional28;
_Bool _if_conditional29;
_Bool _if_conditional30;
int rc_38;
_Bool _if_conditional31;
void* right_value36;
void* right_value37;
char* cmd2_39;
_Bool _if_conditional32;
int rc_40;
_Bool _if_conditional33;
void* right_value38;
char* command2_41;
_Bool _if_conditional34;
void* right_value39;
void* right_value40;
char* cmd3_42;
_Bool _if_conditional35;
void* right_value41;
char* command2_43;
_Bool _if_conditional36;
_Bool _if_conditional37;
void* right_value42;
void* right_value43;
char* cmd4_44;
void* right_value44;
char* command_45;
_Bool _if_conditional38;
void* right_value45;
char* command2_46;
_Bool _if_conditional39;
_Bool _if_conditional40;
_Bool __result35__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&input_file_name_33, 0, sizeof(char*));
memset(&output_file_name_34, 0, sizeof(char*));
memset(&right_value33, 0, sizeof(void*));
memset(&right_value34, 0, sizeof(void*));
memset(&right_value35, 0, sizeof(void*));
memset(&cmd_35, 0, sizeof(char*));
memset(&exist_common_h_36, 0, sizeof(_Bool));
memset(&f_37, 0, sizeof(struct _IO_FILE*));
memset(&rc_38, 0, sizeof(int));
memset(&right_value36, 0, sizeof(void*));
memset(&right_value37, 0, sizeof(void*));
memset(&cmd2_39, 0, sizeof(char*));
memset(&rc_40, 0, sizeof(int));
memset(&right_value38, 0, sizeof(void*));
memset(&command2_41, 0, sizeof(char*));
memset(&right_value39, 0, sizeof(void*));
memset(&right_value40, 0, sizeof(void*));
memset(&cmd3_42, 0, sizeof(char*));
memset(&right_value41, 0, sizeof(void*));
memset(&command2_43, 0, sizeof(char*));
memset(&right_value42, 0, sizeof(void*));
memset(&right_value43, 0, sizeof(void*));
memset(&cmd4_44, 0, sizeof(char*));
memset(&right_value44, 0, sizeof(void*));
memset(&command_45, 0, sizeof(char*));
memset(&right_value45, 0, sizeof(void*));
memset(&command2_46, 0, sizeof(char*));
    input_file_name_33=(char*)come_increment_ref_count(((struct sInfo*)come_null_check(info, "02transpile.c", 64))->sname);
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    if(_if_conditional26=!((struct sInfo*)come_null_check(info, "02transpile.c", 74))->output_header_file&&((struct sInfo*)come_null_check(info, "02transpile.c", 74))->output_file_name,    __freed_obj__ = 0, 
    _if_conditional26) {
        __dec_obj9=output_file_name_34;
        output_file_name_34=(char*)come_increment_ref_count(((char*)(right_value33=string_operator_add(((struct sInfo*)come_null_check(info, "02transpile.c", 68))->output_file_name,".i"))));
        if(__dec_obj9) { __dec_obj9 = come_decrement_ref_count(__dec_obj9, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value33);
        if(right_value33 && right_value33 != __result_obj__ && !__freed_obj__) { right_value33 = come_decrement_ref_count(right_value33, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value33;
        __freed_obj__ = 0;
    }
    else {
        __dec_obj10=output_file_name_34;
        output_file_name_34=(char*)come_increment_ref_count(((char*)(right_value34=string_operator_add(((struct sInfo*)come_null_check(info, "02transpile.c", 71))->sname,".i"))));
        if(__dec_obj10) { __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value34);
        if(right_value34 && right_value34 != __result_obj__ && !__freed_obj__) { right_value34 = come_decrement_ref_count(right_value34, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value34;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    cmd_35=(char*)come_increment_ref_count(((char*)(right_value35=xsprintf("which /opt/homebrew/opt/llvm/bin/clang-cpp 1> /dev/null 2>/dev/null"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value35);
    if(right_value35 && right_value35 != __result_obj__ && !__freed_obj__) { right_value35 = come_decrement_ref_count(right_value35, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value35;
    __freed_obj__ = 0;
    exist_common_h_36=(_Bool)0;
    __freed_obj__ = 0;
    {
        f_37=fopen("common.h","r");
        __freed_obj__ = 0;
        if(_if_conditional27=f_37,        __freed_obj__ = 0, 
        _if_conditional27) {
            exist_common_h_36=(_Bool)1;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional28=string_operator_equals(((struct sInfo*)come_null_check(info, "02transpile.c", 85))->output_file_name,"common.h"),        __freed_obj__ = 0, 
        _if_conditional28) {
            exist_common_h_36=(_Bool)0;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional29=f_37,        __freed_obj__ = 0, 
        _if_conditional29) {
            fclose(f_37);
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional30=!gCommonHeader,    __freed_obj__ = 0, 
    _if_conditional30) {
        exist_common_h_36=(_Bool)0;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    rc_38=system(cmd_35);
    __freed_obj__ = 0;
    if(_if_conditional31=rc_38==0,    __freed_obj__ = 0, 
    _if_conditional31) {
        cmd2_39=(char*)come_increment_ref_count(((char*)(right_value37=xsprintf("/opt/homebrew/opt/llvm/bin/clang-cpp -lang-c %s -I. -I/usr/local/include -DPREFIX=\"\\\"%s\\\"\" -I%s/include -DCOMELANG2 -D__DARWIN_ARM__ -I/opt/homebrew/opt/pcre/include -U__GNUC__ %s %s > %s 2> %s.cpp.out",((struct sInfo*)come_null_check(info, "02transpile.c", 97))->cpp_option,"/usr/local/","/usr/local/",exist_common_h_36?((char*)(right_value36=__builtin_string(" -include common.h "))):"",input_file_name_33,output_file_name_34,output_file_name_34))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value36);
        if(right_value36 && right_value36 != __result_obj__ && !__freed_obj__) { right_value36 = come_decrement_ref_count(right_value36, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value36;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value37);
        if(right_value37 && right_value37 != __result_obj__ && !__freed_obj__) { right_value37 = come_decrement_ref_count(right_value37, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value37;
        __freed_obj__ = 0;
        if(_if_conditional32=((struct sInfo*)come_null_check(info, "02transpile.c", 98))->verbose,        __freed_obj__ = 0, 
        _if_conditional32) {
            puts(cmd2_39);
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        rc_40=system(cmd2_39);
        __freed_obj__ = 0;
        if(_if_conditional33=rc_40!=0,        __freed_obj__ = 0, 
        _if_conditional33) {
            printf("failed to cpp(2) (%s)\n",cmd2_39);
            __freed_obj__ = 0;
            exit(5);
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        command2_41=(char*)come_increment_ref_count(((char*)(right_value38=xsprintf("grep error\\: %s.cpp.out",output_file_name_34))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value38);
        if(right_value38 && right_value38 != __result_obj__ && !__freed_obj__) { right_value38 = come_decrement_ref_count(right_value38, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value38;
        __freed_obj__ = 0;
        if(_if_conditional34=((struct sInfo*)come_null_check(info, "02transpile.c", 109))->verbose,        __freed_obj__ = 0, 
        _if_conditional34) {
            puts(command2_41);
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        (void)system(command2_41);
        __freed_obj__ = 0;
        if(cmd2_39 && !__freed_obj__) { cmd2_39 = come_decrement_ref_count(cmd2_39, (void*)0, (void*)0, 0, 0, 0); }
        if(command2_41 && !__freed_obj__) { command2_41 = come_decrement_ref_count(command2_41, (void*)0, (void*)0, 0, 0, 0); }
    }
    else {
        cmd3_42=(char*)come_increment_ref_count(((char*)(right_value40=xsprintf("cpp -lang-c %s -I. -I%s/include -DPREFIX=\"\\\"%s\\\"\" -I%s/include -DCOMELANG2 -U__GNUC__ %s %s > %s 2> %s.cpp.out",((struct sInfo*)come_null_check(info, "02transpile.c", 114))->cpp_option,getenv("HOME"),"/usr/local/","/usr/local/",exist_common_h_36?((char*)(right_value39=__builtin_string(" -include common.h "))):"",input_file_name_33,output_file_name_34,output_file_name_34))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value39);
        if(right_value39 && right_value39 != __result_obj__ && !__freed_obj__) { right_value39 = come_decrement_ref_count(right_value39, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value39;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value40);
        if(right_value40 && right_value40 != __result_obj__ && !__freed_obj__) { right_value40 = come_decrement_ref_count(right_value40, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value40;
        __freed_obj__ = 0;
        if(_if_conditional35=((struct sInfo*)come_null_check(info, "02transpile.c", 116))->verbose,        __freed_obj__ = 0, 
        _if_conditional35) {
            puts(cmd3_42);
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        rc_38=system(cmd3_42);
        __freed_obj__ = 0;
        command2_43=(char*)come_increment_ref_count(((char*)(right_value41=xsprintf("grep error\\: %s.cpp.out",output_file_name_34))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value41);
        if(right_value41 && right_value41 != __result_obj__ && !__freed_obj__) { right_value41 = come_decrement_ref_count(right_value41, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value41;
        __freed_obj__ = 0;
        if(_if_conditional36=((struct sInfo*)come_null_check(info, "02transpile.c", 121))->verbose,        __freed_obj__ = 0, 
        _if_conditional36) {
            puts(command2_43);
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        (void)system(command2_43);
        __freed_obj__ = 0;
        if(_if_conditional37=rc_38!=0,        __freed_obj__ = 0, 
        _if_conditional37) {
            cmd4_44=(char*)come_increment_ref_count(((char*)(right_value43=xsprintf("cpp -I. %s -DPREFIX=%s -I%s/include -C %s %s > %s 2> %s.cpp.out",((struct sInfo*)come_null_check(info, "02transpile.c", 125))->cpp_option,"/usr/local/","/usr/local/",exist_common_h_36?((char*)(right_value42=__builtin_string(" -include common.h "))):"",input_file_name_33,output_file_name_34,output_file_name_34))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value42);
            if(right_value42 && right_value42 != __result_obj__ && !__freed_obj__) { right_value42 = come_decrement_ref_count(right_value42, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value42;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value43);
            if(right_value43 && right_value43 != __result_obj__ && !__freed_obj__) { right_value43 = come_decrement_ref_count(right_value43, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value43;
            __freed_obj__ = 0;
            command_45=(char*)come_increment_ref_count(((char*)(right_value44=xsprintf("clang -o %s -c %s %s >> %s.out 2>&1",output_file_name_34,input_file_name_33,((struct sInfo*)come_null_check(info, "02transpile.c", 126))->clang_option,input_file_name_33))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value44);
            if(right_value44 && right_value44 != __result_obj__ && !__freed_obj__) { right_value44 = come_decrement_ref_count(right_value44, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value44;
            __freed_obj__ = 0;
            if(_if_conditional38=((struct sInfo*)come_null_check(info, "02transpile.c", 128))->verbose,            __freed_obj__ = 0, 
            _if_conditional38) {
                puts(cmd4_44);
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            rc_38=system(cmd4_44);
            __freed_obj__ = 0;
            command2_46=(char*)come_increment_ref_count(((char*)(right_value45=xsprintf("grep error\\: %s.cpp.out",output_file_name_34))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value45);
            if(right_value45 && right_value45 != __result_obj__ && !__freed_obj__) { right_value45 = come_decrement_ref_count(right_value45, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[3] = right_value45;
            __freed_obj__ = 0;
            if(_if_conditional39=((struct sInfo*)come_null_check(info, "02transpile.c", 133))->verbose,            __freed_obj__ = 0, 
            _if_conditional39) {
                puts(command2_46);
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            (void)system(command2_46);
            __freed_obj__ = 0;
            if(_if_conditional40=rc_38!=0,            __freed_obj__ = 0, 
            _if_conditional40) {
                printf("failed to cpp(2) (%s)\n",cmd4_44);
                __freed_obj__ = 0;
                exit(5);
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(cmd4_44 && !__freed_obj__) { cmd4_44 = come_decrement_ref_count(cmd4_44, (void*)0, (void*)0, 0, 0, 0); }
            if(command_45 && !__freed_obj__) { command_45 = come_decrement_ref_count(command_45, (void*)0, (void*)0, 0, 0, 0); }
            if(command2_46 && !__freed_obj__) { command2_46 = come_decrement_ref_count(command2_46, (void*)0, (void*)0, 0, 0, 0); }
        }
        __freed_obj__ = 0;
        if(cmd3_42 && !__freed_obj__) { cmd3_42 = come_decrement_ref_count(cmd3_42, (void*)0, (void*)0, 0, 0, 0); }
        if(command2_43 && !__freed_obj__) { command2_43 = come_decrement_ref_count(command2_43, (void*)0, (void*)0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __result35__ = (_Bool)1;
    if(input_file_name_33 && !__freed_obj__) { input_file_name_33 = come_decrement_ref_count(input_file_name_33, (void*)0, (void*)0, 0, 0, 0); }
    if(output_file_name_34 && !__freed_obj__) { output_file_name_34 = come_decrement_ref_count(output_file_name_34, (void*)0, (void*)0, 0, 0, 0); }
    if(cmd_35 && !__freed_obj__) { cmd_35 = come_decrement_ref_count(cmd_35, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result35__;
    __freed_obj__ = 0;
    if(input_file_name_33 && !__freed_obj__) { input_file_name_33 = come_decrement_ref_count(input_file_name_33, (void*)0, (void*)0, 0, 0, 0); }
    if(output_file_name_34 && !__freed_obj__) { output_file_name_34 = come_decrement_ref_count(output_file_name_34, (void*)0, (void*)0, 0, 0, 0); }
    if(cmd_35 && !__freed_obj__) { cmd_35 = come_decrement_ref_count(cmd_35, (void*)0, (void*)0, 0, 0, 0); }
}

static _Bool compile(struct sInfo* info, _Bool output_object_file, struct list$1charph* object_files){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value46;
char* input_file_name_47;
char* output_file_name_48;
_Bool _if_conditional41;
void* right_value47;
char* __dec_obj11;
void* right_value48;
char* __dec_obj12;
void* right_value49;
char* command_49;
_Bool _if_conditional42;
int rc_50;
void* right_value50;
char* command2_51;
_Bool _if_conditional43;
_Bool _if_conditional44;
_Bool __result36__;
_Bool _if_conditional45;
void* right_value51;
_Bool __result37__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value46, 0, sizeof(void*));
memset(&input_file_name_47, 0, sizeof(char*));
memset(&output_file_name_48, 0, sizeof(char*));
memset(&right_value47, 0, sizeof(void*));
memset(&right_value48, 0, sizeof(void*));
memset(&right_value49, 0, sizeof(void*));
memset(&command_49, 0, sizeof(char*));
memset(&rc_50, 0, sizeof(int));
memset(&right_value50, 0, sizeof(void*));
memset(&command2_51, 0, sizeof(char*));
memset(&right_value51, 0, sizeof(void*));
    input_file_name_47=(char*)come_increment_ref_count(((char*)(right_value46=string_operator_add(((struct sInfo*)come_null_check(info, "02transpile.c", 148))->sname,".c"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value46);
    if(right_value46 && right_value46 != __result_obj__ && !__freed_obj__) { right_value46 = come_decrement_ref_count(right_value46, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value46;
    __freed_obj__ = 0;
    output_file_name_48=((void*)0);
    __freed_obj__ = 0;
    if(_if_conditional41=((struct sInfo*)come_null_check(info, "02transpile.c", 158))->output_file_name,    __freed_obj__ = 0, 
    _if_conditional41) {
        __dec_obj11=output_file_name_48;
        output_file_name_48=(char*)come_increment_ref_count(((char*)(right_value47=__builtin_string(((struct sInfo*)come_null_check(info, "02transpile.c", 152))->output_file_name))));
        if(__dec_obj11) { __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value47);
        if(right_value47 && right_value47 != __result_obj__ && !__freed_obj__) { right_value47 = come_decrement_ref_count(right_value47, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value47;
        __freed_obj__ = 0;
    }
    else {
        __dec_obj12=output_file_name_48;
        output_file_name_48=(char*)come_increment_ref_count(((char*)(right_value48=string_operator_add(((struct sInfo*)come_null_check(info, "02transpile.c", 155))->sname,".o"))));
        if(__dec_obj12) { __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value48);
        if(right_value48 && right_value48 != __result_obj__ && !__freed_obj__) { right_value48 = come_decrement_ref_count(right_value48, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value48;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    command_49=(char*)come_increment_ref_count(((char*)(right_value49=xsprintf("clang -o %s -c %s %s >> %s.out 2>&1",output_file_name_48,input_file_name_47,((struct sInfo*)come_null_check(info, "02transpile.c", 158))->clang_option,input_file_name_47))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value49);
    if(right_value49 && right_value49 != __result_obj__ && !__freed_obj__) { right_value49 = come_decrement_ref_count(right_value49, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value49;
    __freed_obj__ = 0;
    if(_if_conditional42=((struct sInfo*)come_null_check(info, "02transpile.c", 160))->verbose,    __freed_obj__ = 0, 
    _if_conditional42) {
        puts(command_49);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    rc_50=system(command_49);
    __freed_obj__ = 0;
    command2_51=(char*)come_increment_ref_count(((char*)(right_value50=xsprintf("grep error\\: %s.out",input_file_name_47))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value50);
    if(right_value50 && right_value50 != __result_obj__ && !__freed_obj__) { right_value50 = come_decrement_ref_count(right_value50, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value50;
    __freed_obj__ = 0;
    if(_if_conditional43=((struct sInfo*)come_null_check(info, "02transpile.c", 165))->verbose,    __freed_obj__ = 0, 
    _if_conditional43) {
        puts(command2_51);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    (void)system(command2_51);
    __freed_obj__ = 0;
    if(_if_conditional44=rc_50!=0,    __freed_obj__ = 0, 
    _if_conditional44) {
        printf("%s %d: clang is faild\n",((struct sInfo*)come_null_check(info, "02transpile.c", 169))->sname,((struct sInfo*)come_null_check(info, "02transpile.c", 169))->sline);
        __freed_obj__ = 0;
        __result36__ = (_Bool)0;
        if(input_file_name_47 && !__freed_obj__) { input_file_name_47 = come_decrement_ref_count(input_file_name_47, (void*)0, (void*)0, 0, 0, 0); }
        if(output_file_name_48 && !__freed_obj__) { output_file_name_48 = come_decrement_ref_count(output_file_name_48, (void*)0, (void*)0, 0, 0, 0); }
        if(command_49 && !__freed_obj__) { command_49 = come_decrement_ref_count(command_49, (void*)0, (void*)0, 0, 0, 0); }
        if(command2_51 && !__freed_obj__) { command2_51 = come_decrement_ref_count(command2_51, (void*)0, (void*)0, 0, 0, 0); }
        __freed_obj__ = 0;
        return __result36__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional45=!output_object_file,    __freed_obj__ = 0, 
    _if_conditional45) {
        list$1charph_push_back(((struct list$1charph*)come_null_check(object_files, "02transpile.c", 174)),(char*)come_increment_ref_count(((char*)(right_value51=__builtin_string(output_file_name_48)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value51);
        if(right_value51 && right_value51 != __result_obj__ && !__freed_obj__) { right_value51 = come_decrement_ref_count(right_value51, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value51;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result37__ = (_Bool)1;
    if(input_file_name_47 && !__freed_obj__) { input_file_name_47 = come_decrement_ref_count(input_file_name_47, (void*)0, (void*)0, 0, 0, 0); }
    if(output_file_name_48 && !__freed_obj__) { output_file_name_48 = come_decrement_ref_count(output_file_name_48, (void*)0, (void*)0, 0, 0, 0); }
    if(command_49 && !__freed_obj__) { command_49 = come_decrement_ref_count(command_49, (void*)0, (void*)0, 0, 0, 0); }
    if(command2_51 && !__freed_obj__) { command2_51 = come_decrement_ref_count(command2_51, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result37__;
    __freed_obj__ = 0;
    if(input_file_name_47 && !__freed_obj__) { input_file_name_47 = come_decrement_ref_count(input_file_name_47, (void*)0, (void*)0, 0, 0, 0); }
    if(output_file_name_48 && !__freed_obj__) { output_file_name_48 = come_decrement_ref_count(output_file_name_48, (void*)0, (void*)0, 0, 0, 0); }
    if(command_49 && !__freed_obj__) { command_49 = come_decrement_ref_count(command_49, (void*)0, (void*)0, 0, 0, 0); }
    if(command2_51 && !__freed_obj__) { command2_51 = come_decrement_ref_count(command2_51, (void*)0, (void*)0, 0, 0, 0); }
}

static _Bool linker(struct sInfo* info, struct list$1charph* object_files){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* output_file_name_52;
_Bool _if_conditional46;
void* right_value52;
char* __dec_obj13;
void* right_value53;
char* __dec_obj14;
void* right_value54;
void* right_value55;
struct buffer* command_53;
void* right_value56;
struct list$1charph* o2_saved_54;
char* it_57;
_Bool _for_condtionalA2;
void* right_value57;
void* right_value58;
char* cmd_60;
int rc_61;
_Bool _if_conditional51;
void* right_value59;
_Bool _if_conditional52;
void* right_value60;
_Bool _if_conditional53;
void* right_value61;
void* right_value62;
_Bool _if_conditional54;
_Bool __result45__;
_Bool __result46__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&output_file_name_52, 0, sizeof(char*));
memset(&right_value52, 0, sizeof(void*));
memset(&right_value53, 0, sizeof(void*));
memset(&right_value54, 0, sizeof(void*));
memset(&right_value55, 0, sizeof(void*));
memset(&command_53, 0, sizeof(struct buffer*));
memset(&right_value56, 0, sizeof(void*));
memset(&o2_saved_54, 0, sizeof(struct list$1charph*));
memset(&it_57, 0, sizeof(char*));
memset(&right_value57, 0, sizeof(void*));
memset(&right_value58, 0, sizeof(void*));
memset(&cmd_60, 0, sizeof(char*));
memset(&rc_61, 0, sizeof(int));
memset(&right_value59, 0, sizeof(void*));
memset(&right_value60, 0, sizeof(void*));
memset(&right_value61, 0, sizeof(void*));
memset(&right_value62, 0, sizeof(void*));
    output_file_name_52=((void*)0);
    __freed_obj__ = 0;
    if(_if_conditional46=((struct sInfo*)come_null_check(info, "02transpile.c", 190))->output_file_name,    __freed_obj__ = 0, 
    _if_conditional46) {
        __dec_obj13=output_file_name_52;
        output_file_name_52=(char*)come_increment_ref_count(((char*)(right_value52=__builtin_string(((struct sInfo*)come_null_check(info, "02transpile.c", 184))->output_file_name))));
        if(__dec_obj13) { __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value52);
        if(right_value52 && right_value52 != __result_obj__ && !__freed_obj__) { right_value52 = come_decrement_ref_count(right_value52, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value52;
        __freed_obj__ = 0;
    }
    else {
        __dec_obj14=output_file_name_52;
        output_file_name_52=(char*)come_increment_ref_count(((char*)(right_value53=xnoextname(((struct sInfo*)come_null_check(info, "02transpile.c", 187))->sname))));
        if(__dec_obj14) { __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value53);
        if(right_value53 && right_value53 != __result_obj__ && !__freed_obj__) { right_value53 = come_decrement_ref_count(right_value53, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value53;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    command_53=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value55=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value54=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 190))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value54);
    if(right_value54 && right_value54 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value54, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value54;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value55);
    if(right_value55 && right_value55 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value55, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value55;
    __freed_obj__ = 0;
    buffer_append_str(((struct buffer*)come_null_check(command_53, "02transpile.c", 192)),((char*)(right_value56=xsprintf("clang -o %s -L%s/lib -L%s/lib ",output_file_name_52,getenv("HOME"),"/usr/local/"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value56);
    if(right_value56 && right_value56 != __result_obj__ && !__freed_obj__) { right_value56 = come_decrement_ref_count(right_value56, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value56;
    __freed_obj__ = 0;
    for(
    o2_saved_54=(object_files),it_57=list$1charph_begin(((struct list$1charph*)come_null_check((o2_saved_54), "02transpile.c", 199))) ,    __freed_obj__ = 0, 
    0;    _for_condtionalA2=    !list$1charph_end(((struct list$1charph*)come_null_check((o2_saved_54), "02transpile.c", 199))) ,    __freed_obj__ = 0, 
    _for_condtionalA2;    it_57=list$1charph_next(((struct list$1charph*)come_null_check((o2_saved_54), "02transpile.c", 199))) ,    __freed_obj__ = 0, 
    0    ){
        buffer_append_str(((struct buffer*)come_null_check(command_53, "02transpile.c", 195)),((char*)(right_value57=xsprintf("%s ",it_57))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value57);
        if(right_value57 && right_value57 != __result_obj__ && !__freed_obj__) { right_value57 = come_decrement_ref_count(right_value57, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value57;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    buffer_append_str(((struct buffer*)come_null_check(command_53, "02transpile.c", 199)),"-L/usr/local/lib -lcomelang2 ");
    __freed_obj__ = 0;
    cmd_60=(char*)come_increment_ref_count(((char*)(right_value58=xsprintf("which /opt/homebrew/opt/llvm/bin/clang-cpp 1> /dev/null 2>/dev/null"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value58);
    if(right_value58 && right_value58 != __result_obj__ && !__freed_obj__) { right_value58 = come_decrement_ref_count(right_value58, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value58;
    __freed_obj__ = 0;
    rc_61=system(cmd_60);
    __freed_obj__ = 0;
    if(_if_conditional51=rc_61==0,    __freed_obj__ = 0, 
    _if_conditional51) {
        buffer_append_str(((struct buffer*)come_null_check(command_53, "02transpile.c", 205))," -L/opt/homebrew/opt/pcre/lib ");
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    buffer_append_str(((struct buffer*)come_null_check(command_53, "02transpile.c", 207)),((char*)(right_value59=xsprintf(" %s ",((struct sInfo*)come_null_check(info, "02transpile.c", 207))->clang_option))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value59);
    if(right_value59 && right_value59 != __result_obj__ && !__freed_obj__) { right_value59 = come_decrement_ref_count(right_value59, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value59;
    __freed_obj__ = 0;
    if(_if_conditional52=gComeGC,    __freed_obj__ = 0, 
    _if_conditional52) {
        buffer_append_str(((struct buffer*)come_null_check(command_53, "02transpile.c", 210)),((char*)(right_value60=xsprintf(" -lgc "))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value60);
        if(right_value60 && right_value60 != __result_obj__ && !__freed_obj__) { right_value60 = come_decrement_ref_count(right_value60, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value60;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional53=((struct sInfo*)come_null_check(info, "02transpile.c", 213))->verbose,    __freed_obj__ = 0, 
    _if_conditional53) {
        puts(((char*)(right_value61=buffer_to_string(((struct buffer*)come_null_check(command_53, "02transpile.c", 213))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value61);
        if(right_value61 && right_value61 != __result_obj__ && !__freed_obj__) { right_value61 = come_decrement_ref_count(right_value61, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value61;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    rc_61=system(((char*)(right_value62=buffer_to_string(((struct buffer*)come_null_check(command_53, "02transpile.c", 214))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value62);
    if(right_value62 && right_value62 != __result_obj__ && !__freed_obj__) { right_value62 = come_decrement_ref_count(right_value62, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[5] = right_value62;
    __freed_obj__ = 0;
    if(_if_conditional54=rc_61!=0,    __freed_obj__ = 0, 
    _if_conditional54) {
        printf("%s %d: clang is faild\n",((struct sInfo*)come_null_check(info, "02transpile.c", 217))->sname,((struct sInfo*)come_null_check(info, "02transpile.c", 217))->sline);
        __freed_obj__ = 0;
        __result45__ = (_Bool)0;
        if(output_file_name_52 && !__freed_obj__) { output_file_name_52 = come_decrement_ref_count(output_file_name_52, (void*)0, (void*)0, 0, 0, 0); }
        if(command_53 && !__freed_obj__) { come_call_finalizer(buffer_finalize,command_53, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(cmd_60 && !__freed_obj__) { cmd_60 = come_decrement_ref_count(cmd_60, (void*)0, (void*)0, 0, 0, 0); }
        __freed_obj__ = 0;
        return __result45__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result46__ = (_Bool)1;
    if(output_file_name_52 && !__freed_obj__) { output_file_name_52 = come_decrement_ref_count(output_file_name_52, (void*)0, (void*)0, 0, 0, 0); }
    if(command_53 && !__freed_obj__) { come_call_finalizer(buffer_finalize,command_53, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(cmd_60 && !__freed_obj__) { cmd_60 = come_decrement_ref_count(cmd_60, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result46__;
    __freed_obj__ = 0;
    if(output_file_name_52 && !__freed_obj__) { output_file_name_52 = come_decrement_ref_count(output_file_name_52, (void*)0, (void*)0, 0, 0, 0); }
    if(command_53 && !__freed_obj__) { come_call_finalizer(buffer_finalize,command_53, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(cmd_60 && !__freed_obj__) { cmd_60 = come_decrement_ref_count(cmd_60, (void*)0, (void*)0, 0, 0, 0); }
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional47;
char* result_55;
char* __result38__;
_Bool _if_conditional48;
char* __result39__;
char* result_56;
char* __result40__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_55, 0, sizeof(char*));
memset(&result_56, 0, sizeof(char*));
        if(_if_conditional47=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional47) {
            __freed_obj__ = 0;
            memset(&result_55,0,sizeof(char*));
            __freed_obj__ = 0;
            __result38__ = __result_obj__ = result_55;
            __freed_obj__ = 0;
            return __result38__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 336))->it=((struct list$1charph*)come_null_check(self, "./comelang2.h", 336))->head;
        __freed_obj__ = 0;
        if(_if_conditional48=((struct list$1charph*)come_null_check(self, "./comelang2.h", 342))->it,        __freed_obj__ = 0, 
        _if_conditional48) {
            __result39__ = __result_obj__ = ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 339))->it, "./comelang2.h", 339))->item;
            __freed_obj__ = 0;
            return __result39__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        memset(&result_56,0,sizeof(char*));
        __freed_obj__ = 0;
        __result40__ = __result_obj__ = result_56;
        __freed_obj__ = 0;
        return __result40__;
        __freed_obj__ = 0;
}

static _Bool list$1charph_end(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result41__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __result41__ = self==((void*)0)||((struct list$1charph*)come_null_check(self, "./comelang2.h", 366))->it==((void*)0);
        __freed_obj__ = 0;
        return __result41__;
        __freed_obj__ = 0;
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional49;
char* result_58;
char* __result42__;
_Bool _if_conditional50;
char* __result43__;
char* result_59;
char* __result44__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_58, 0, sizeof(char*));
memset(&result_59, 0, sizeof(char*));
        if(_if_conditional49=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional49) {
            __freed_obj__ = 0;
            memset(&result_58,0,sizeof(char*));
            __freed_obj__ = 0;
            __result42__ = __result_obj__ = result_58;
            __freed_obj__ = 0;
            return __result42__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 354))->it=((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 354))->it, "./comelang2.h", 354))->next;
        __freed_obj__ = 0;
        if(_if_conditional50=((struct list$1charph*)come_null_check(self, "./comelang2.h", 360))->it,        __freed_obj__ = 0, 
        _if_conditional50) {
            __result43__ = __result_obj__ = ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 357))->it, "./comelang2.h", 357))->item;
            __freed_obj__ = 0;
            return __result43__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        memset(&result_59,0,sizeof(char*));
        __freed_obj__ = 0;
        __result44__ = __result_obj__ = result_59;
        __freed_obj__ = 0;
        return __result44__;
        __freed_obj__ = 0;
}

struct sModule* sModule_initialize(struct sModule* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value63;
void* right_value64;
struct buffer* __dec_obj15;
void* right_value65;
void* right_value66;
struct buffer* __dec_obj16;
char* __dec_obj17;
char* __dec_obj18;
struct sModule* __result47__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value63, 0, sizeof(void*));
memset(&right_value64, 0, sizeof(void*));
memset(&right_value65, 0, sizeof(void*));
memset(&right_value66, 0, sizeof(void*));
    __dec_obj15=((struct sModule*)come_null_check(self, "02transpile.c", 226))->mSourceHead;
    ((struct sModule*)come_null_check(self, "02transpile.c", 226))->mSourceHead=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value64=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value63=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 226))))))));
    if(__dec_obj15) { come_call_finalizer(buffer_finalize,__dec_obj15, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value63);
    if(right_value63 && right_value63 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value63, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value63;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value64);
    if(right_value64 && right_value64 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value64, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value64;
    __freed_obj__ = 0;
    __dec_obj16=((struct sModule*)come_null_check(self, "02transpile.c", 227))->mSource;
    ((struct sModule*)come_null_check(self, "02transpile.c", 227))->mSource=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value66=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value65=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 227))))))));
    if(__dec_obj16) { come_call_finalizer(buffer_finalize,__dec_obj16, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value65);
    if(right_value65 && right_value65 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value65, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value65;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value66);
    if(right_value66 && right_value66 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value66, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value66;
    __freed_obj__ = 0;
    __dec_obj17=((struct sModule*)come_null_check(self, "02transpile.c", 228))->mLastCode;
    ((struct sModule*)come_null_check(self, "02transpile.c", 228))->mLastCode=((void*)0);
    if(__dec_obj17) { __dec_obj17 = come_decrement_ref_count(__dec_obj17, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = 0;
    __dec_obj18=((struct sModule*)come_null_check(self, "02transpile.c", 229))->mLastCode2;
    ((struct sModule*)come_null_check(self, "02transpile.c", 229))->mLastCode2=((void*)0);
    if(__dec_obj18) { __dec_obj18 = come_decrement_ref_count(__dec_obj18, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = 0;
    __result47__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sModule_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result47__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sModule_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void sModule_finalize(struct sModule* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional55;
_Bool _if_conditional56;
_Bool _if_conditional57;
_Bool _if_conditional58;
_Bool _if_conditional59;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional55=self!=((void*)0)&&((struct sModule*)come_null_check(self, "sModule_finalize", 1))->mSourceHead!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional55) {
            if(((struct sModule*)come_null_check(self, "sModule_finalize", 0))->mSourceHead && !__freed_obj__) { come_call_finalizer(buffer_finalize,((struct sModule*)come_null_check(self, "sModule_finalize", 0))->mSourceHead, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional56=self!=((void*)0)&&((struct sModule*)come_null_check(self, "sModule_finalize", 2))->mSource!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional56) {
            if(((struct sModule*)come_null_check(self, "sModule_finalize", 1))->mSource && !__freed_obj__) { come_call_finalizer(buffer_finalize,((struct sModule*)come_null_check(self, "sModule_finalize", 1))->mSource, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional57=self!=((void*)0)&&((struct sModule*)come_null_check(self, "sModule_finalize", 3))->mLastCode!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional57) {
            if(((struct sModule*)come_null_check(self, "sModule_finalize", 2))->mLastCode && !__freed_obj__) { ((struct sModule*)come_null_check(self, "sModule_finalize", 2))->mLastCode = come_decrement_ref_count(((struct sModule*)come_null_check(self, "sModule_finalize", 2))->mLastCode, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional58=self!=((void*)0)&&((struct sModule*)come_null_check(self, "sModule_finalize", 4))->mLastCode2!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional58) {
            if(((struct sModule*)come_null_check(self, "sModule_finalize", 3))->mLastCode2 && !__freed_obj__) { ((struct sModule*)come_null_check(self, "sModule_finalize", 3))->mLastCode2 = come_decrement_ref_count(((struct sModule*)come_null_check(self, "sModule_finalize", 3))->mLastCode2, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional59=self!=((void*)0)&&((struct sModule*)come_null_check(self, "sModule_finalize", 5))->mLastCode3!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional59) {
            if(((struct sModule*)come_null_check(self, "sModule_finalize", 4))->mLastCode3 && !__freed_obj__) { ((struct sModule*)come_null_check(self, "sModule_finalize", 4))->mLastCode3 = come_decrement_ref_count(((struct sModule*)come_null_check(self, "sModule_finalize", 4))->mLastCode3, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
}

struct sVarTable* sVarTable_initialize(struct sVarTable* self, _Bool global, struct sVarTable* parent){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value67;
void* right_value73;
struct map$2charphsVarph* __dec_obj20;
static int id_71=0;
struct sVarTable* __result50__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value67, 0, sizeof(void*));
memset(&right_value73, 0, sizeof(void*));
    __dec_obj20=((struct sVarTable*)come_null_check(self, "02transpile.c", 236))->mVars;
    ((struct sVarTable*)come_null_check(self, "02transpile.c", 236))->mVars=(struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value73=map$2charphsVarph_initialize((struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value67=(struct map$2charphsVarph*)come_calloc(1, sizeof(struct map$2charphsVarph)*(1), "02transpile.c", 236))))))));
    if(__dec_obj20) { come_call_finalizer(map$2charphsVarph_finalize,__dec_obj20, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value67);
    if(right_value67 && right_value67 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsVarphp_finalize,right_value67, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value67;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value73);
    if(right_value73 && right_value73 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsVarphp_finalize,right_value73, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value73;
    __freed_obj__ = 0;
    ((struct sVarTable*)come_null_check(self, "02transpile.c", 237))->mGlobal=global;
    __freed_obj__ = 0;
    ((struct sVarTable*)come_null_check(self, "02transpile.c", 238))->mParent=parent;
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    ((struct sVarTable*)come_null_check(self, "02transpile.c", 240))->mID=++id_71;
    __freed_obj__ = 0;
    __result50__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result50__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct map$2charphsVarph* map$2charphsVarph_initialize(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value68;
void* right_value69;
void* right_value70;
int i_66;
_Bool _for_condtionalA3;
void* right_value71;
void* right_value72;
struct list$1charp* __dec_obj19;
struct map$2charphsVarph* __result49__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value68, 0, sizeof(void*));
memset(&right_value69, 0, sizeof(void*));
memset(&right_value70, 0, sizeof(void*));
memset(&i_66, 0, sizeof(int));
memset(&right_value71, 0, sizeof(void*));
memset(&right_value72, 0, sizeof(void*));
        ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1122))->keys=(char**)come_increment_ref_count(((char**)(right_value68=(char**)come_calloc(1, sizeof(char*)*(1*(1024)), "./comelang2.h", 1122))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value68);
        if(right_value68 && right_value68 != __result_obj__ && !__freed_obj__) { right_value68 = come_decrement_ref_count(right_value68, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value68;
        __freed_obj__ = 0;
        ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1123))->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(right_value69=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(1024)), "./comelang2.h", 1123))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value69);
        if(right_value69 && right_value69 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVar_finalize,right_value69, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value69;
        __freed_obj__ = 0;
        ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1124))->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value70=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(1024)), "./comelang2.h", 1124))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value70);
        if(right_value70 && right_value70 != __result_obj__ && !__freed_obj__) { right_value70 = come_decrement_ref_count(right_value70, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value70;
        __freed_obj__ = 0;
        for(
        i_66=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA3=        i_66<1024 ,        __freed_obj__ = 0, 
        _for_condtionalA3;        i_66++ ,        __freed_obj__ = 0, 
        0        ){
            ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1128))->item_existance[i_66]=(_Bool)0;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1131))->size=1024;
        __freed_obj__ = 0;
        ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1132))->len=0;
        __freed_obj__ = 0;
        __dec_obj19=((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1134))->key_list;
        ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1134))->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value72=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value71=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang2.h", 1134))))))));
        if(__dec_obj19) { come_call_finalizer(list$1charp_finalize,__dec_obj19, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value71);
        if(right_value71 && right_value71 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,right_value71, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value71;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value72);
        if(right_value72 && right_value72 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,right_value72, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[4] = right_value72;
        __freed_obj__ = 0;
        ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1136))->it=0;
        __freed_obj__ = 0;
        __result49__ = __result_obj__ = self;
        if(self && !__freed_obj__) { come_call_finalizer(map$2charphsVarphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result49__;
        __freed_obj__ = 0;
        if(self && !__freed_obj__) { come_call_finalizer(map$2charphsVarphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void sVar_finalize(struct sVar* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional60;
_Bool _if_conditional61;
_Bool _if_conditional62;
_Bool _if_conditional78;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            if(_if_conditional60=self!=((void*)0)&&((struct sVar*)come_null_check(self, "sVar_finalize", 1))->mName!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional60) {
                if(((struct sVar*)come_null_check(self, "sVar_finalize", 0))->mName && !__freed_obj__) { ((struct sVar*)come_null_check(self, "sVar_finalize", 0))->mName = come_decrement_ref_count(((struct sVar*)come_null_check(self, "sVar_finalize", 0))->mName, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional61=self!=((void*)0)&&((struct sVar*)come_null_check(self, "sVar_finalize", 2))->mCValueName!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional61) {
                if(((struct sVar*)come_null_check(self, "sVar_finalize", 1))->mCValueName && !__freed_obj__) { ((struct sVar*)come_null_check(self, "sVar_finalize", 1))->mCValueName = come_decrement_ref_count(((struct sVar*)come_null_check(self, "sVar_finalize", 1))->mCValueName, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional62=self!=((void*)0)&&((struct sVar*)come_null_check(self, "sVar_finalize", 3))->mType!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional62) {
                if(((struct sVar*)come_null_check(self, "sVar_finalize", 2))->mType && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct sVar*)come_null_check(self, "sVar_finalize", 2))->mType, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional78=self!=((void*)0)&&((struct sVar*)come_null_check(self, "sVar_finalize", 4))->mFunName!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional78) {
                if(((struct sVar*)come_null_check(self, "sVar_finalize", 3))->mFunName && !__freed_obj__) { ((struct sVar*)come_null_check(self, "sVar_finalize", 3))->mFunName = come_decrement_ref_count(((struct sVar*)come_null_check(self, "sVar_finalize", 3))->mFunName, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional63;
_Bool _if_conditional65;
_Bool _if_conditional66;
_Bool _if_conditional67;
_Bool _if_conditional69;
_Bool _if_conditional71;
_Bool _if_conditional72;
_Bool _if_conditional73;
_Bool _if_conditional74;
_Bool _if_conditional75;
_Bool _if_conditional76;
_Bool _if_conditional77;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional63=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 1))->mNoSolvedGenericsType!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional63) {
                        if(((struct sType*)come_null_check(self, "sType_finalize", 0))->mNoSolvedGenericsType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 0))->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional65=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 2))->mOriginalLoadVarType!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional65) {
                        if(((struct sType*)come_null_check(self, "sType_finalize", 1))->mOriginalLoadVarType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 1))->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional66=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 3))->mGenericsName!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional66) {
                        if(((struct sType*)come_null_check(self, "sType_finalize", 2))->mGenericsName && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 2))->mGenericsName = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 2))->mGenericsName, (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional67=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 4))->mGenericsTypes!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional67) {
                        if(((struct sType*)come_null_check(self, "sType_finalize", 3))->mGenericsTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 3))->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional69=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 5))->mArrayNum!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional69) {
                        if(((struct sType*)come_null_check(self, "sType_finalize", 4))->mArrayNum && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 4))->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional71=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 6))->mParamTypes!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional71) {
                        if(((struct sType*)come_null_check(self, "sType_finalize", 5))->mParamTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 5))->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional72=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 7))->mParamNames!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional72) {
                        if(((struct sType*)come_null_check(self, "sType_finalize", 6))->mParamNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 6))->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional73=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 8))->mResultType!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional73) {
                        if(((struct sType*)come_null_check(self, "sType_finalize", 7))->mResultType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 7))->mResultType, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional74=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 9))->mAlignas!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional74) {
                        if(((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas)->finalize, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas)->_protocol_obj, 0, 0, 0); } 
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional75=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 10))->mSizeNum!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional75) {
                        if(((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum)->finalize, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum)->_protocol_obj, 0, 0, 0); } 
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional76=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 11))->mOriginalTypeName!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional76) {
                        if(((struct sType*)come_null_check(self, "sType_finalize", 10))->mOriginalTypeName && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 10))->mOriginalTypeName = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 10))->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional77=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 12))->mAsmName!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional77) {
                        if(((struct sType*)come_null_check(self, "sType_finalize", 11))->mAsmName && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 11))->mAsmName = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 11))->mAsmName, (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional64;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional64=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 1))->v1!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional64) {
                                if(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1sTypeph* it_62;
_Bool _while_condtional5;
struct list_item$1sTypeph* prev_it_63;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_62, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_63, 0, sizeof(struct list_item$1sTypeph*));
                            it_62=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 169))->head;
                            __freed_obj__ = 0;
                            while(_while_condtional5=it_62!=((void*)0),                            __freed_obj__ = 0, 
                            _while_condtional5) {
                                prev_it_63=it_62;
                                __freed_obj__ = 0;
                                it_62=((struct list_item$1sTypeph*)come_null_check(it_62, "./comelang2.h", 172))->next;
                                __freed_obj__ = 0;
                                if(prev_it_63 && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,prev_it_63, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional68;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                    if(_if_conditional68=self!=((void*)0)&&((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 1))->item!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional68) {
                                        if(((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 0))->item && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1sNodeph* it_64;
_Bool _while_condtional6;
struct list_item$1sNodeph* prev_it_65;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_64, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_65, 0, sizeof(struct list_item$1sNodeph*));
                            it_64=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 169))->head;
                            __freed_obj__ = 0;
                            while(_while_condtional6=it_64!=((void*)0),                            __freed_obj__ = 0, 
                            _while_condtional6) {
                                prev_it_65=it_64;
                                __freed_obj__ = 0;
                                it_64=((struct list_item$1sNodeph*)come_null_check(it_64, "./comelang2.h", 172))->next;
                                __freed_obj__ = 0;
                                if(prev_it_65 && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,prev_it_65, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional70;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                    if(_if_conditional70=self!=((void*)0)&&((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 1))->item!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional70) {
                                        if(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item && !__freed_obj__) { ((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item = come_decrement_ref_count(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item, ((struct sNode*)((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item)->finalize, ((struct sNode*)((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item)->_protocol_obj, 0, 0, 0); } 
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
}

static struct list$1charp* list$1charp_initialize(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1charp* __result48__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            ((struct list$1charp*)come_null_check(self, "./comelang2.h", 150))->head=((void*)0);
            __freed_obj__ = 0;
            ((struct list$1charp*)come_null_check(self, "./comelang2.h", 151))->tail=((void*)0);
            __freed_obj__ = 0;
            ((struct list$1charp*)come_null_check(self, "./comelang2.h", 152))->len=0;
            __freed_obj__ = 0;
            __result48__ = __result_obj__ = self;
            if(self && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result48__;
            __freed_obj__ = 0;
            if(self && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list$1charpp_finalize(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1charp* it_67;
_Bool _while_condtional7;
struct list_item$1charp* prev_it_68;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_67, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_68, 0, sizeof(struct list_item$1charp*));
                it_67=((struct list$1charp*)come_null_check(self, "./comelang2.h", 169))->head;
                __freed_obj__ = 0;
                while(_while_condtional7=it_67!=((void*)0),                __freed_obj__ = 0, 
                _while_condtional7) {
                    prev_it_68=it_67;
                    __freed_obj__ = 0;
                    it_67=((struct list_item$1charp*)come_null_check(it_67, "./comelang2.h", 172))->next;
                    __freed_obj__ = 0;
                    if(prev_it_68 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_68, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static void list$1charp_finalize(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int i_69;
_Bool _for_condtionalA4;
_Bool _if_conditional79;
_Bool _if_conditional80;
int i_70;
_Bool _for_condtionalA5;
_Bool _if_conditional81;
_Bool _if_conditional82;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&i_69, 0, sizeof(int));
memset(&i_70, 0, sizeof(int));
            for(
            i_69=0 ,            __freed_obj__ = 0, 
            0;            _for_condtionalA4=            i_69<((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1172))->size ,            __freed_obj__ = 0, 
            _for_condtionalA4;            i_69++ ,            __freed_obj__ = 0, 
            0            ){
                if(_if_conditional79=((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1171))->item_existance[i_69],                __freed_obj__ = 0, 
                _if_conditional79) {
                    if(_if_conditional80=1,                    __freed_obj__ = 0, 
                    _if_conditional80) {
                        if(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1168))->items[i_69] && !__freed_obj__) { come_call_finalizer(sVar_finalize,((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1168))->items[i_69], (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            come_free_object((char*)((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1172))->items);
            __freed_obj__ = 0;
            for(
            i_70=0 ,            __freed_obj__ = 0, 
            0;            _for_condtionalA5=            i_70<((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1181))->size ,            __freed_obj__ = 0, 
            _for_condtionalA5;            i_70++ ,            __freed_obj__ = 0, 
            0            ){
                if(_if_conditional81=((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1180))->item_existance[i_70],                __freed_obj__ = 0, 
                _if_conditional81) {
                    if(_if_conditional82=1,                    __freed_obj__ = 0, 
                    _if_conditional82) {
                        if(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1177))->keys[i_70] && !__freed_obj__) { ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1177))->keys[i_70] = come_decrement_ref_count(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1177))->keys[i_70], (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            come_free_object((char*)((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1181))->keys);
            __freed_obj__ = 0;
            if(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1183))->key_list && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1183))->key_list, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
            if(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1185))->item_existance && !__freed_obj__) { ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1185))->item_existance = come_decrement_ref_count(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1185))->item_existance, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
}

static void map$2charphsVarph_finalize(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional83;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional83=self!=((void*)0)&&((struct map$2charphsVarph*)come_null_check(self, "map$2charphsVarph_finalize", 1))->key_list!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional83) {
            if(((struct map$2charphsVarph*)come_null_check(self, "map$2charphsVarph_finalize", 0))->key_list && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,((struct map$2charphsVarph*)come_null_check(self, "map$2charphsVarph_finalize", 0))->key_list, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
}

void sVarTable_finalize(struct sVarTable* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(((struct sVarTable*)come_null_check(self, "02transpile.c", 247))->mVars && !__freed_obj__) { come_call_finalizer(map$2charphsVarphp_finalize,((struct sVarTable*)come_null_check(self, "02transpile.c", 247))->mVars, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
}

struct sType* sType_initialize(struct sType* self, char* name, _Bool heap, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int pointer_num_72;
char* p_73;
_Bool _while_condtional8;
_Bool _if_conditional84;
_Bool _while_condtional9;
void* right_value74;
void* right_value75;
char* name2_74;
void* right_value85;
struct sClass* klass_80;
void* right_value86;
struct sClass* generics_class_81;
_Bool _if_conditional91;
_Bool _if_conditional92;
void* right_value87;
struct sClass* klass2_82;
void* right_value88;
char* __dec_obj21;
void* right_value89;
char* __dec_obj22;
void* right_value102;
void* right_value103;
void* right_value104;
void* right_value105;
void* right_value145;
struct tuple1$1sTypeph* __dec_obj48;
void* right_value146;
void* right_value147;
struct tuple1$1sTypeph* __dec_obj49;
void* right_value148;
void* right_value149;
struct list$1sTypeph* __dec_obj50;
void* right_value150;
void* right_value151;
struct list$1sNodeph* __dec_obj51;
void* right_value152;
void* right_value153;
struct list$1sTypeph* __dec_obj52;
void* right_value154;
void* right_value155;
struct list$1charph* __dec_obj53;
struct tuple1$1sTypeph* __dec_obj54;
struct sNode* __dec_obj55;
void* right_value156;
char* __dec_obj56;
struct sType* __result106__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&pointer_num_72, 0, sizeof(int));
memset(&p_73, 0, sizeof(char*));
memset(&right_value74, 0, sizeof(void*));
memset(&right_value75, 0, sizeof(void*));
memset(&name2_74, 0, sizeof(char*));
memset(&right_value85, 0, sizeof(void*));
memset(&klass_80, 0, sizeof(struct sClass*));
memset(&right_value86, 0, sizeof(void*));
memset(&generics_class_81, 0, sizeof(struct sClass*));
memset(&right_value87, 0, sizeof(void*));
memset(&klass2_82, 0, sizeof(struct sClass*));
memset(&right_value88, 0, sizeof(void*));
memset(&right_value89, 0, sizeof(void*));
memset(&right_value102, 0, sizeof(void*));
memset(&right_value103, 0, sizeof(void*));
memset(&right_value104, 0, sizeof(void*));
memset(&right_value105, 0, sizeof(void*));
memset(&right_value145, 0, sizeof(void*));
memset(&right_value146, 0, sizeof(void*));
memset(&right_value147, 0, sizeof(void*));
memset(&right_value148, 0, sizeof(void*));
memset(&right_value149, 0, sizeof(void*));
memset(&right_value150, 0, sizeof(void*));
memset(&right_value151, 0, sizeof(void*));
memset(&right_value152, 0, sizeof(void*));
memset(&right_value153, 0, sizeof(void*));
memset(&right_value154, 0, sizeof(void*));
memset(&right_value155, 0, sizeof(void*));
memset(&right_value156, 0, sizeof(void*));
    pointer_num_72=0;
    __freed_obj__ = 0;
    p_73=name;
    __freed_obj__ = 0;
    while(_while_condtional8=*p_73,    __freed_obj__ = 0, 
    _while_condtional8) {
        if(_if_conditional84=xisalpha(*p_73),        __freed_obj__ = 0, 
        _if_conditional84) {
            p_73++;
            __freed_obj__ = 0;
        }
        else {
            break;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    while(_while_condtional9=*p_73==42,    __freed_obj__ = 0, 
    _while_condtional9) {
        pointer_num_72++;
        __freed_obj__ = 0;
        p_73++;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    name2_74=(char*)come_increment_ref_count(((char*)(right_value75=string_substring(((char*)come_null_check(((char*)(right_value74=__builtin_string(name))), "02transpile.c", 267)),0,-pointer_num_72-1))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value74);
    if(right_value74 && right_value74 != __result_obj__ && !__freed_obj__) { right_value74 = come_decrement_ref_count(right_value74, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value74;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value75);
    if(right_value75 && right_value75 != __result_obj__ && !__freed_obj__) { right_value75 = come_decrement_ref_count(right_value75, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value75;
    __freed_obj__ = 0;
    come_clear_stackframe();
    klass_80=optional$2sClasspbool_value((come_push_stackframe("02transpile.c", 269),((struct optional$2sClasspbool*)(right_value85=map$2charphsClassphp_operator_load_element(((struct sInfo*)come_null_check(info, "02transpile.c", 269))->classes,name2_74)))));
    come_pop_stackframe();
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value85);
    if(right_value85 && right_value85 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,right_value85, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value85;
    __freed_obj__ = 0;
    come_clear_stackframe();
    generics_class_81=optional$2sClasspbool_value((come_push_stackframe("02transpile.c", 270),((struct optional$2sClasspbool*)(right_value86=map$2charphsClassphp_operator_load_element(((struct sInfo*)come_null_check(info, "02transpile.c", 270))->generics_classes,name2_74)))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value86);
    if(right_value86 && right_value86 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,right_value86, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value86;
    __freed_obj__ = 0;
    if(_if_conditional91=klass_80==((void*)0)&&generics_class_81==((void*)0),    __freed_obj__ = 0, 
    _if_conditional91) {
        printf("%s %d: class not found(%s)(1)\n",((struct sInfo*)come_null_check(info, "02transpile.c", 273))->sname,((struct sInfo*)come_null_check(info, "02transpile.c", 273))->sline,name2_74);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional92=klass_80,    __freed_obj__ = 0, 
    _if_conditional92) {
        ((struct sType*)come_null_check(self, "02transpile.c", 276))->mClass=klass_80;
        __freed_obj__ = 0;
    }
    else {
        klass2_82=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value87=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 279))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value87);
        if(right_value87 && right_value87 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value87, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value87;
        __freed_obj__ = 0;
        __dec_obj21=((struct sClass*)come_null_check(klass2_82, "02transpile.c", 280))->mName;
        ((struct sClass*)come_null_check(klass2_82, "02transpile.c", 280))->mName=(char*)come_increment_ref_count(((char*)(right_value88=__builtin_string(name))));
        if(__dec_obj21) { __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value88);
        if(right_value88 && right_value88 != __result_obj__ && !__freed_obj__) { right_value88 = come_decrement_ref_count(right_value88, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value88;
        __freed_obj__ = 0;
        __dec_obj22=((struct sClass*)come_null_check(klass2_82, "02transpile.c", 281))->mDeclareSName;
        ((struct sClass*)come_null_check(klass2_82, "02transpile.c", 281))->mDeclareSName=(char*)come_increment_ref_count(((char*)(right_value89=__builtin_string(((struct sInfo*)come_null_check(info, "02transpile.c", 281))->sname))));
        if(__dec_obj22) { __dec_obj22 = come_decrement_ref_count(__dec_obj22, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value89);
        if(right_value89 && right_value89 != __result_obj__ && !__freed_obj__) { right_value89 = come_decrement_ref_count(right_value89, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value89;
        __freed_obj__ = 0;
        map$2charphsClassph_insert(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 283))->classes, "02transpile.c", 283)),(char*)come_increment_ref_count(((char*)(right_value102=__builtin_string(name)))),(struct sClass*)come_increment_ref_count(klass2_82));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value102);
        if(right_value102 && right_value102 != __result_obj__ && !__freed_obj__) { right_value102 = come_decrement_ref_count(right_value102, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value102;
        __freed_obj__ = 0;
        come_clear_stackframe();
        ((struct sType*)come_null_check(self, "02transpile.c", 285))->mClass=optional$2sClasspbool_value((come_push_stackframe("02transpile.c", 285),((struct optional$2sClasspbool*)(right_value104=map$2charphsClassphp_operator_load_element(((struct sInfo*)come_null_check(info, "02transpile.c", 285))->classes,((char*)(right_value103=__builtin_string(name))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value103);
        if(right_value103 && right_value103 != __result_obj__ && !__freed_obj__) { right_value103 = come_decrement_ref_count(right_value103, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[4] = right_value103;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value104);
        if(right_value104 && right_value104 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,right_value104, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[5] = right_value104;
        __freed_obj__ = 0;
        if(klass2_82 && !__freed_obj__) { come_call_finalizer(sClass_finalize,klass2_82, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __dec_obj48=((struct sType*)come_null_check(self, "02transpile.c", 288))->mNoSolvedGenericsType;
    ((struct sType*)come_null_check(self, "02transpile.c", 288))->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value145=tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value105=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "02transpile.c", 288)))),((void*)0)))));
    if(__dec_obj48) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj48, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value105);
    if(right_value105 && right_value105 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value105, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value105;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value145);
    if(right_value145 && right_value145 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value145, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[5] = right_value145;
    __freed_obj__ = 0;
    __dec_obj49=((struct sType*)come_null_check(self, "02transpile.c", 289))->mOriginalLoadVarType;
    ((struct sType*)come_null_check(self, "02transpile.c", 289))->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value147=tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value146=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "02transpile.c", 289)))),((void*)0)))));
    if(__dec_obj49) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj49, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value146);
    if(right_value146 && right_value146 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value146, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[6] = right_value146;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value147);
    if(right_value147 && right_value147 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value147, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[7] = right_value147;
    __freed_obj__ = 0;
    __dec_obj50=((struct sType*)come_null_check(self, "02transpile.c", 290))->mGenericsTypes;
    ((struct sType*)come_null_check(self, "02transpile.c", 290))->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value149=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value148=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "02transpile.c", 290))))))));
    if(__dec_obj50) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj50, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value148);
    if(right_value148 && right_value148 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value148, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[8] = right_value148;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 9, right_value149);
    if(right_value149 && right_value149 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value149, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[9] = right_value149;
    __freed_obj__ = 0;
    __dec_obj51=((struct sType*)come_null_check(self, "02transpile.c", 291))->mArrayNum;
    ((struct sType*)come_null_check(self, "02transpile.c", 291))->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value151=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value150=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "02transpile.c", 291))))))));
    if(__dec_obj51) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj51, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 10, right_value150);
    if(right_value150 && right_value150 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value150, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[10] = right_value150;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 11, right_value151);
    if(right_value151 && right_value151 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value151, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[11] = right_value151;
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(self, "02transpile.c", 292))->mOmitArrayNum=(_Bool)0;
    __freed_obj__ = 0;
    __dec_obj52=((struct sType*)come_null_check(self, "02transpile.c", 293))->mParamTypes;
    ((struct sType*)come_null_check(self, "02transpile.c", 293))->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value153=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value152=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "02transpile.c", 293))))))));
    if(__dec_obj52) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj52, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 12, right_value152);
    if(right_value152 && right_value152 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value152, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[12] = right_value152;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 13, right_value153);
    if(right_value153 && right_value153 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value153, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[13] = right_value153;
    __freed_obj__ = 0;
    __dec_obj53=((struct sType*)come_null_check(self, "02transpile.c", 294))->mParamNames;
    ((struct sType*)come_null_check(self, "02transpile.c", 294))->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value155=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value154=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 294))))))));
    if(__dec_obj53) { come_call_finalizer(list$1charph_finalize,__dec_obj53, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 14, right_value154);
    if(right_value154 && right_value154 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value154, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[14] = right_value154;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 15, right_value155);
    if(right_value155 && right_value155 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value155, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[15] = right_value155;
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(self, "02transpile.c", 295))->mVarArgs=(_Bool)0;
    __freed_obj__ = 0;
    __dec_obj54=((struct sType*)come_null_check(self, "02transpile.c", 296))->mResultType;
    ((struct sType*)come_null_check(self, "02transpile.c", 296))->mResultType=((void*)0);
    if(__dec_obj54) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj54, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(self, "02transpile.c", 297))->mUnsigned=(_Bool)0;
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(self, "02transpile.c", 298))->mConstant=(_Bool)0;
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(self, "02transpile.c", 299))->mRegister=(_Bool)0;
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(self, "02transpile.c", 300))->mVolatile=(_Bool)0;
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(self, "02transpile.c", 301))->mStatic=(_Bool)0;
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(self, "02transpile.c", 302))->mRestrict=(_Bool)0;
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(self, "02transpile.c", 303))->mImmutable=(_Bool)0;
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(self, "02transpile.c", 304))->mLongLong=(_Bool)0;
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(self, "02transpile.c", 305))->mHeap=heap;
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(self, "02transpile.c", 306))->mDummyHeap=(_Bool)0;
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(self, "02transpile.c", 307))->mNoHeap=(_Bool)0;
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(self, "02transpile.c", 308))->mRefference=(_Bool)0;
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(self, "02transpile.c", 310))->mPointerNum=pointer_num_72;
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(self, "02transpile.c", 311))->mNoArrayPointerNum=0;
    __freed_obj__ = 0;
    __dec_obj55=((struct sType*)come_null_check(self, "02transpile.c", 312))->mSizeNum;
    ((struct sType*)come_null_check(self, "02transpile.c", 312))->mSizeNum=((void*)0);
    if(__dec_obj55) { __dec_obj55 = come_decrement_ref_count(__dec_obj55, ((struct sNode*)__dec_obj55)->finalize, ((struct sNode*)__dec_obj55)->_protocol_obj, 0,0,0); }
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(self, "02transpile.c", 314))->mDynamicArrayNum=0;
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(self, "02transpile.c", 315))->mTypeOfExpression=0;
    __freed_obj__ = 0;
    __dec_obj56=((struct sType*)come_null_check(self, "02transpile.c", 317))->mOriginalTypeName;
    ((struct sType*)come_null_check(self, "02transpile.c", 317))->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value156=__builtin_string(""))));
    if(__dec_obj56) { __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 16, right_value156);
    if(right_value156 && right_value156 != __result_obj__ && !__freed_obj__) { right_value156 = come_decrement_ref_count(right_value156, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[16] = right_value156;
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(self, "02transpile.c", 318))->mOriginalPointerNum=0;
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(self, "02transpile.c", 320))->mFunctionParam=(_Bool)0;
    __freed_obj__ = 0;
    __result106__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sType_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(name2_74 && !__freed_obj__) { name2_74 = come_decrement_ref_count(name2_74, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result106__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sType_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(name2_74 && !__freed_obj__) { name2_74 = come_decrement_ref_count(name2_74, (void*)0, (void*)0, 0, 0, 0); }
}

static struct optional$2sClasspbool* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sClass* default_value_75;
unsigned int hash_76;
unsigned int it_77;
_Bool _while_condtional10;
_Bool _if_conditional85;
void* right_value76;
struct optional$2boolbool* __exception_result_var_b1;
_Bool _if_conditional87;
void* right_value77;
void* right_value78;
struct optional$2sClasspbool* __result54__;
_Bool _if_conditional88;
_Bool _if_conditional89;
void* right_value79;
void* right_value80;
struct optional$2sClasspbool* __result55__;
void* right_value81;
void* right_value82;
struct optional$2sClasspbool* __result56__;
void* right_value83;
void* right_value84;
struct optional$2sClasspbool* __result57__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_75, 0, sizeof(struct sClass*));
memset(&hash_76, 0, sizeof(unsigned int));
memset(&it_77, 0, sizeof(unsigned int));
memset(&right_value76, 0, sizeof(void*));
memset(&right_value77, 0, sizeof(void*));
memset(&right_value78, 0, sizeof(void*));
memset(&right_value79, 0, sizeof(void*));
memset(&right_value80, 0, sizeof(void*));
memset(&right_value81, 0, sizeof(void*));
memset(&right_value82, 0, sizeof(void*));
memset(&right_value83, 0, sizeof(void*));
memset(&right_value84, 0, sizeof(void*));
        __freed_obj__ = 0;
        memset(&default_value_75,0,sizeof(struct sClass*));
        __freed_obj__ = 0;
        hash_76=string_get_hash_key(((char*)come_null_check(((char*)key), "./comelang2.h", 1584)))%((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1584))->size;
        __freed_obj__ = 0;
        it_77=hash_76;
        __freed_obj__ = 0;
        while(_while_condtional10=(_Bool)1,        __freed_obj__ = 0, 
        _while_condtional10) {
            if(_if_conditional85=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1607))->item_existance[it_77],            __freed_obj__ = 0, 
            _if_conditional85) {
                if(_if_conditional87=optional$2boolbool_value((come_push_stackframe("./comelang2.h", 1595),__exception_result_var_b1=((struct optional$2boolbool*)(right_value76=string_equals(((char*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1595))->keys[it_77], "./comelang2.h", 1595)),key))), come_pop_stackframe(), __exception_result_var_b1)),                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value76),
                (right_value76 && right_value76 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value76, (void*)0, (void*)0, 0, 1, 0, 0):0,
                __right_value_freed_obj[0] = right_value76, 
                __freed_obj__ = 0, 
                _if_conditional87) {
                    __result54__ = __result_obj__ = ((struct optional$2sClasspbool*)(right_value78=optional$2sClasspbool_initialize((struct optional$2sClasspbool*)come_increment_ref_count(((struct optional$2sClasspbool*)(right_value77=(struct optional$2sClasspbool*)come_calloc(1, sizeof(struct optional$2sClasspbool)*(1), "./comelang2.h", 1592)))),((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1592))->items[it_77],(_Bool)1)));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value77);
                    if(right_value77 && right_value77 != __result_obj__ && !__freed_obj__) { right_value77 = come_decrement_ref_count(right_value77, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value77;
                    __freed_obj__ = 0;
                    return __result54__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                it_77++;
                __freed_obj__ = 0;
                if(_if_conditional88=it_77>=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1603))->size,                __freed_obj__ = 0, 
                _if_conditional88) {
                    it_77=0;
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional89=it_77==hash_76,                    __freed_obj__ = 0, 
                    _if_conditional89) {
                        __result55__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1601), ((struct optional$2sClasspbool*)(right_value80=optional$2sClasspbool_initialize(((struct optional$2sClasspbool*)(right_value79=(struct optional$2sClasspbool*)come_calloc(1, sizeof(struct optional$2sClasspbool)*(1), "./comelang2.h", 1601))),default_value_75,(_Bool)0))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value79);
                        if(right_value79 && right_value79 != __result_obj__ && !__freed_obj__) { right_value79 = come_decrement_ref_count(right_value79, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value79;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value80);
                        if(right_value80 && right_value80 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,right_value80, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value80;
                        __freed_obj__ = 0;
                        return __result55__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            else {
                __result56__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1605), ((struct optional$2sClasspbool*)(right_value82=optional$2sClasspbool_initialize(((struct optional$2sClasspbool*)(right_value81=(struct optional$2sClasspbool*)come_calloc(1, sizeof(struct optional$2sClasspbool)*(1), "./comelang2.h", 1605))),default_value_75,(_Bool)0))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value81);
                if(right_value81 && right_value81 != __result_obj__ && !__freed_obj__) { right_value81 = come_decrement_ref_count(right_value81, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value81;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value82);
                if(right_value82 && right_value82 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,right_value82, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value82;
                __freed_obj__ = 0;
                return __result56__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __result57__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1609), ((struct optional$2sClasspbool*)(right_value84=optional$2sClasspbool_initialize(((struct optional$2sClasspbool*)(right_value83=(struct optional$2sClasspbool*)come_calloc(1, sizeof(struct optional$2sClasspbool)*(1), "./comelang2.h", 1609))),default_value_75,(_Bool)0))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value83);
        if(right_value83 && right_value83 != __result_obj__ && !__freed_obj__) { right_value83 = come_decrement_ref_count(right_value83, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value83;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value84);
        if(right_value84 && right_value84 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,right_value84, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value84;
        __freed_obj__ = 0;
        return __result57__;
        __freed_obj__ = 0;
}

static _Bool optional$2boolbool_value(struct optional$2boolbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional86;
_Bool default_value_78;
_Bool __result51__;
_Bool __result52__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_78, 0, sizeof(_Bool));
                    if(_if_conditional86=self==((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional86) {
                        __freed_obj__ = 0;
                        memset(&default_value_78,0,sizeof(_Bool));
                        __freed_obj__ = 0;
                        __result51__ = default_value_78;
                        __freed_obj__ = 0;
                        return __result51__;
                        __freed_obj__ = 0;
                    }
                    else {
                        __result52__ = ((struct optional$2boolbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                        __freed_obj__ = 0;
                        return __result52__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
}

static void optional$2boolboolp_finalize(struct optional$2boolbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct optional$2sClasspbool* optional$2sClasspbool_initialize(struct optional$2sClasspbool* self, struct sClass* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct optional$2sClasspbool* __result53__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        ((struct optional$2sClasspbool*)come_null_check(self, "./comelang2.h", 38))->v1=v1;
                        __freed_obj__ = 0;
                        ((struct optional$2sClasspbool*)come_null_check(self, "./comelang2.h", 39))->v2=v2;
                        __freed_obj__ = 0;
                        __result53__ = __result_obj__ = self;
                        if(self && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result53__;
                        __freed_obj__ = 0;
                        if(self && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2sClasspboolp_finalize(struct optional$2sClasspbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct sClass* optional$2sClasspbool_value(struct optional$2sClasspbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional90;
struct sClass* default_value_79;
struct sClass* __result58__;
struct sClass* __result59__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_79, 0, sizeof(struct sClass*));
        if(_if_conditional90=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional90) {
            __freed_obj__ = 0;
            memset(&default_value_79,0,sizeof(struct sClass*));
            __freed_obj__ = 0;
            __result58__ = __result_obj__ = default_value_79;
            __freed_obj__ = 0;
            return __result58__;
            __freed_obj__ = 0;
        }
        else {
            __result59__ = __result_obj__ = ((struct optional$2sClasspbool*)come_null_check(self, "./comelang2.h", 65))->v1;
            __freed_obj__ = 0;
            return __result59__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
}

static void sClass_finalize(struct sClass* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional93;
_Bool _if_conditional94;
_Bool _if_conditional98;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            if(_if_conditional93=self!=((void*)0)&&((struct sClass*)come_null_check(self, "sClass_finalize", 1))->mName!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional93) {
                if(((struct sClass*)come_null_check(self, "sClass_finalize", 0))->mName && !__freed_obj__) { ((struct sClass*)come_null_check(self, "sClass_finalize", 0))->mName = come_decrement_ref_count(((struct sClass*)come_null_check(self, "sClass_finalize", 0))->mName, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional94=self!=((void*)0)&&((struct sClass*)come_null_check(self, "sClass_finalize", 2))->mFields!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional94) {
                if(((struct sClass*)come_null_check(self, "sClass_finalize", 1))->mFields && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,((struct sClass*)come_null_check(self, "sClass_finalize", 1))->mFields, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional98=self!=((void*)0)&&((struct sClass*)come_null_check(self, "sClass_finalize", 3))->mDeclareSName!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional98) {
                if(((struct sClass*)come_null_check(self, "sClass_finalize", 2))->mDeclareSName && !__freed_obj__) { ((struct sClass*)come_null_check(self, "sClass_finalize", 2))->mDeclareSName = come_decrement_ref_count(((struct sClass*)come_null_check(self, "sClass_finalize", 2))->mDeclareSName, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1tuple2$2charphsTypephph* it_83;
_Bool _while_condtional11;
struct list_item$1tuple2$2charphsTypephph* prev_it_84;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_83, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_84, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                    it_83=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 169))->head;
                    __freed_obj__ = 0;
                    while(_while_condtional11=it_83!=((void*)0),                    __freed_obj__ = 0, 
                    _while_condtional11) {
                        prev_it_84=it_83;
                        __freed_obj__ = 0;
                        it_83=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(it_83, "./comelang2.h", 172))->next;
                        __freed_obj__ = 0;
                        if(prev_it_84 && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,prev_it_84, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional95;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional95=self!=((void*)0)&&((struct list_item$1tuple2$2charphsTypephph*)come_null_check(self, "list_item$1tuple2$2charphsTypephphp_finalize", 1))->item!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional95) {
                                if(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(self, "list_item$1tuple2$2charphsTypephphp_finalize", 0))->item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,((struct list_item$1tuple2$2charphsTypephph*)come_null_check(self, "list_item$1tuple2$2charphsTypephphp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional96;
_Bool _if_conditional97;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                    if(_if_conditional96=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 1))->v1!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional96) {
                                        if(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0))->v1 && !__freed_obj__) { ((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0))->v1 = come_decrement_ref_count(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional97=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 2))->v2!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional97) {
                                        if(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 1))->v2 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 1))->v2, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
}

static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional99;
unsigned int hash_102;
unsigned int it_103;
_Bool _while_condtional14;
_Bool _if_conditional111;
void* right_value96;
struct optional$2boolbool* __exception_result_var_a2;
_Bool _if_conditional112;
_Bool _if_conditional113;
_Bool _if_conditional133;
_Bool _if_conditional134;
_Bool _if_conditional135;
_Bool _if_conditional136;
_Bool _if_conditional137;
_Bool same_key_exist_120;
char* it2_123;
_Bool _for_condtionalA7;
void* right_value98;
struct optional$2boolbool* __exception_result_var_a4;
_Bool _if_conditional142;
_Bool _if_conditional143;
struct map$2charphsClassph* __result83__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_102, 0, sizeof(unsigned int));
memset(&it_103, 0, sizeof(unsigned int));
memset(&right_value96, 0, sizeof(void*));
memset(&same_key_exist_120, 0, sizeof(_Bool));
memset(&it2_123, 0, sizeof(char*));
memset(&right_value98, 0, sizeof(void*));
            if(_if_conditional99=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1424))->len*10>=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1424))->size,            __freed_obj__ = 0, 
            _if_conditional99) {
                map$2charphsClassph_rehash(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1422)));
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            hash_102=string_get_hash_key(((char*)come_null_check(key, "./comelang2.h", 1424)))%((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1424))->size;
            __freed_obj__ = 0;
            it_103=hash_102;
            __freed_obj__ = 0;
            while(_while_condtional14=(_Bool)1,            __freed_obj__ = 0, 
            _while_condtional14) {
                if(_if_conditional111=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1480))->item_existance[it_103],                __freed_obj__ = 0, 
                _if_conditional111) {
                    if(_if_conditional112=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 1451),__exception_result_var_a2=((struct optional$2boolbool*)(right_value96=string_equals(((char*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1451))->keys[it_103], "./comelang2.h", 1451)),key))), come_pop_stackframe(), __exception_result_var_a2)),                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value96),
                    (right_value96 && right_value96 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value96, (void*)0, (void*)0, 0, 1, 0, 0):0,
                    __right_value_freed_obj[0] = right_value96, 
                    __freed_obj__ = 0, 
                    _if_conditional112) {
                        if(_if_conditional113=1,                        __freed_obj__ = 0, 
                        _if_conditional113) {
                            list$1charp_remove(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1433))->key_list, "./comelang2.h", 1433)),((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1433))->keys[it_103]);
                            __freed_obj__ = 0;
                            if(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1434))->keys[it_103] && !__freed_obj__) { ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1434))->keys[it_103] = come_decrement_ref_count(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1434))->keys[it_103], (void*)0, (void*)0, 0, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1435))->keys[it_103]=(char*)come_increment_ref_count(key);
                            __freed_obj__ = 0;
                        }
                        else {
                            list$1charp_remove(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1438))->key_list, "./comelang2.h", 1438)),((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1438))->keys[it_103]);
                            __freed_obj__ = 0;
                            ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1439))->keys[it_103]=key;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional133=1,                        __freed_obj__ = 0, 
                        _if_conditional133) {
                            if(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1442))->items[it_103] && !__freed_obj__) { come_call_finalizer(sClass_finalize,((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1442))->items[it_103], (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1443))->items[it_103]=(struct sClass*)come_increment_ref_count(item);
                            __freed_obj__ = 0;
                        }
                        else {
                            ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1446))->items[it_103]=item;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        break;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    it_103++;
                    __freed_obj__ = 0;
                    if(_if_conditional134=it_103>=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1460))->size,                    __freed_obj__ = 0, 
                    _if_conditional134) {
                        it_103=0;
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional135=it_103==hash_102,                        __freed_obj__ = 0, 
                        _if_conditional135) {
                            printf("unexpected error in map.insert\n");
                            __freed_obj__ = 0;
                            exit(2);
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                else {
                    ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1462))->item_existance[it_103]=(_Bool)1;
                    __freed_obj__ = 0;
                    if(_if_conditional136=1,                    __freed_obj__ = 0, 
                    _if_conditional136) {
                        ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1464))->keys[it_103]=(char*)come_increment_ref_count(key);
                        __freed_obj__ = 0;
                    }
                    else {
                        ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1467))->keys[it_103]=key;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional137=1,                    __freed_obj__ = 0, 
                    _if_conditional137) {
                        ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1470))->items[it_103]=(struct sClass*)come_increment_ref_count(item);
                        __freed_obj__ = 0;
                    }
                    else {
                        ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1473))->items[it_103]=item;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1476))->len++;
                    __freed_obj__ = 0;
                    break;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            same_key_exist_120=(_Bool)0;
            __freed_obj__ = 0;
            for(
            it2_123=list$1charp_begin(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1490))->key_list, "./comelang2.h", 1490))) ,            __freed_obj__ = 0, 
            0;            _for_condtionalA7=            !list$1charp_end(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1490))->key_list, "./comelang2.h", 1490))) ,            __freed_obj__ = 0, 
            _for_condtionalA7;            it2_123=list$1charp_next(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1490))->key_list, "./comelang2.h", 1490))) ,            __freed_obj__ = 0, 
            0            ){
                if(_if_conditional142=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 1488),__exception_result_var_a4=((struct optional$2boolbool*)(right_value98=string_equals(((char*)come_null_check(it2_123, "./comelang2.h", 1488)),key))), come_pop_stackframe(), __exception_result_var_a4)),                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value98),
                (right_value98 && right_value98 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value98, (void*)0, (void*)0, 0, 1, 0, 0):0,
                __right_value_freed_obj[0] = right_value98, 
                __freed_obj__ = 0, 
                _if_conditional142) {
                    same_key_exist_120=(_Bool)1;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional143=!same_key_exist_120,            __freed_obj__ = 0, 
            _if_conditional143) {
                list$1charp_push_back(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1491))->key_list, "./comelang2.h", 1491)),key);
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __result83__ = __result_obj__ = self;
            if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
            if(item && !__freed_obj__) { come_call_finalizer(sClass_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result83__;
            __freed_obj__ = 0;
            if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
            if(item && !__freed_obj__) { come_call_finalizer(sClass_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void map$2charphsClassph_rehash(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int size_85;
void* right_value90;
char** keys_86;
void* right_value91;
struct sClass** items_87;
void* right_value92;
_Bool* item_existance_88;
int len_89;
char* it_92;
_Bool _for_condtionalA6;
struct sClass* default_value_95;
void* right_value94;
struct sClass* it2_98;
unsigned int hash_99;
int n_100;
_Bool _while_condtional13;
_Bool _if_conditional108;
_Bool _if_conditional109;
_Bool _if_conditional110;
struct sClass* default_value_101;
void* right_value95;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&size_85, 0, sizeof(int));
memset(&right_value90, 0, sizeof(void*));
memset(&keys_86, 0, sizeof(char**));
memset(&right_value91, 0, sizeof(void*));
memset(&items_87, 0, sizeof(struct sClass**));
memset(&right_value92, 0, sizeof(void*));
memset(&item_existance_88, 0, sizeof(_Bool*));
memset(&len_89, 0, sizeof(int));
memset(&it_92, 0, sizeof(char*));
memset(&default_value_95, 0, sizeof(struct sClass*));
memset(&right_value94, 0, sizeof(void*));
memset(&it2_98, 0, sizeof(struct sClass*));
memset(&hash_99, 0, sizeof(unsigned int));
memset(&n_100, 0, sizeof(int));
memset(&default_value_101, 0, sizeof(struct sClass*));
memset(&right_value95, 0, sizeof(void*));
                    size_85=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1369))->size*10;
                    __freed_obj__ = 0;
                    keys_86=(char**)come_increment_ref_count(((char**)(right_value90=(char**)come_calloc(1, sizeof(char*)*(1*(size_85)), "./comelang2.h", 1370))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value90);
                    if(right_value90 && right_value90 != __result_obj__ && !__freed_obj__) { right_value90 = come_decrement_ref_count(right_value90, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value90;
                    __freed_obj__ = 0;
                    items_87=(struct sClass**)come_increment_ref_count(((struct sClass**)(right_value91=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_85)), "./comelang2.h", 1371))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value91);
                    if(right_value91 && right_value91 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value91;
                    __freed_obj__ = 0;
                    item_existance_88=(_Bool*)come_increment_ref_count(((_Bool*)(right_value92=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_85)), "./comelang2.h", 1372))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value92);
                    if(right_value92 && right_value92 != __result_obj__ && !__freed_obj__) { right_value92 = come_decrement_ref_count(right_value92, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[2] = right_value92;
                    __freed_obj__ = 0;
                    len_89=0;
                    __freed_obj__ = 0;
                    for(
                    it_92=map$2charphsClassph_begin(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1408))) ,                    __freed_obj__ = 0, 
                    0;                    _for_condtionalA6=                    !map$2charphsClassph_end(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1408))) ,                    __freed_obj__ = 0, 
                    _for_condtionalA6;                    it_92=map$2charphsClassph_next(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1408))) ,                    __freed_obj__ = 0, 
                    0                    ){
                        __freed_obj__ = 0;
                        memset(&default_value_95,0,sizeof(struct sClass*));
                        __freed_obj__ = 0;
                        it2_98=((struct sClass*)(right_value94=map$2charphsClassph_at(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1379)),it_92,default_value_95)));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value94);
                        if(right_value94 && right_value94 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value94, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value94;
                        __freed_obj__ = 0;
                        hash_99=string_get_hash_key(((char*)come_null_check(it_92, "./comelang2.h", 1380)))%size_85;
                        __freed_obj__ = 0;
                        n_100=hash_99;
                        __freed_obj__ = 0;
                        while(_while_condtional13=(_Bool)1,                        __freed_obj__ = 0, 
                        _while_condtional13) {
                            if(_if_conditional108=item_existance_88[n_100],                            __freed_obj__ = 0, 
                            _if_conditional108) {
                                n_100++;
                                __freed_obj__ = 0;
                                if(_if_conditional109=n_100>=size_85,                                __freed_obj__ = 0, 
                                _if_conditional109) {
                                    n_100=0;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    if(_if_conditional110=n_100==hash_99,                                    __freed_obj__ = 0, 
                                    _if_conditional110) {
                                        printf("unexpected error in map.rehash(1)\n");
                                        __freed_obj__ = 0;
                                        exit(2);
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            else {
                                item_existance_88[n_100]=(_Bool)1;
                                __freed_obj__ = 0;
                                keys_86[n_100]=it_92;
                                __freed_obj__ = 0;
                                __freed_obj__ = 0;
                                items_87[n_100]=((struct sClass*)(right_value95=map$2charphsClassph_at(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1400)),it_92,default_value_101)));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value95);
                                if(right_value95 && right_value95 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value95, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value95;
                                __freed_obj__ = 0;
                                len_89++;
                                __freed_obj__ = 0;
                                break;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    come_free_object((char*)((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1408))->items);
                    __freed_obj__ = 0;
                    if(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1409))->item_existance && !__freed_obj__) { ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1409))->item_existance = come_decrement_ref_count(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1409))->item_existance, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    come_free_object((char*)((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1410))->keys);
                    __freed_obj__ = 0;
                    ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1412))->keys=keys_86;
                    __freed_obj__ = 0;
                    ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1413))->items=items_87;
                    __freed_obj__ = 0;
                    ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1414))->item_existance=item_existance_88;
                    __freed_obj__ = 0;
                    ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1416))->size=size_85;
                    __freed_obj__ = 0;
                    ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1417))->len=len_89;
                    __freed_obj__ = 0;
}

static char* map$2charphsClassph_begin(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional100;
char* result_90;
char* __result60__;
_Bool _if_conditional101;
char* __result61__;
char* result_91;
char* __result62__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_90, 0, sizeof(char*));
memset(&result_91, 0, sizeof(char*));
                        if(_if_conditional100=self==((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional100) {
                            __freed_obj__ = 0;
                            memset(&result_90,0,sizeof(char*));
                            __freed_obj__ = 0;
                            __result60__ = __result_obj__ = result_90;
                            __freed_obj__ = 0;
                            return __result60__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        ((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1336))->key_list, "./comelang2.h", 1336))->it=((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1336))->key_list, "./comelang2.h", 1336))->head;
                        __freed_obj__ = 0;
                        if(_if_conditional101=((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1342))->key_list, "./comelang2.h", 1342))->it,                        __freed_obj__ = 0, 
                        _if_conditional101) {
                            __result61__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1339))->key_list, "./comelang2.h", 1339))->it, "./comelang2.h", 1339))->item;
                            __freed_obj__ = 0;
                            return __result61__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __freed_obj__ = 0;
                        memset(&result_91,0,sizeof(char*));
                        __freed_obj__ = 0;
                        __result62__ = __result_obj__ = result_91;
                        __freed_obj__ = 0;
                        return __result62__;
                        __freed_obj__ = 0;
}

static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result63__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        __result63__ = self==((void*)0)||((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1365))->key_list==((void*)0)||((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1365))->key_list, "./comelang2.h", 1365))->it==((void*)0);
                        __freed_obj__ = 0;
                        return __result63__;
                        __freed_obj__ = 0;
}

static char* map$2charphsClassph_next(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional102;
char* result_93;
char* __result64__;
_Bool _if_conditional103;
char* __result65__;
char* result_94;
char* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_93, 0, sizeof(char*));
memset(&result_94, 0, sizeof(char*));
                        if(_if_conditional102=self==((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional102) {
                            __freed_obj__ = 0;
                            memset(&result_93,0,sizeof(char*));
                            __freed_obj__ = 0;
                            __result64__ = __result_obj__ = result_93;
                            __freed_obj__ = 0;
                            return __result64__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        ((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1353))->key_list, "./comelang2.h", 1353))->it=((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1353))->key_list, "./comelang2.h", 1353))->it, "./comelang2.h", 1353))->next;
                        __freed_obj__ = 0;
                        if(_if_conditional103=((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1359))->key_list, "./comelang2.h", 1359))->it,                        __freed_obj__ = 0, 
                        _if_conditional103) {
                            __result65__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1356))->key_list, "./comelang2.h", 1356))->it, "./comelang2.h", 1356))->item;
                            __freed_obj__ = 0;
                            return __result65__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __freed_obj__ = 0;
                        memset(&result_94,0,sizeof(char*));
                        __freed_obj__ = 0;
                        __result66__ = __result_obj__ = result_94;
                        __freed_obj__ = 0;
                        return __result66__;
                        __freed_obj__ = 0;
}

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int hash_96;
unsigned int it_97;
_Bool _while_condtional12;
_Bool _if_conditional104;
void* right_value93;
struct optional$2boolbool* __exception_result_var_a1;
_Bool _if_conditional105;
struct sClass* __result67__;
_Bool _if_conditional106;
_Bool _if_conditional107;
struct sClass* __result68__;
struct sClass* __result69__;
struct sClass* __result70__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_96, 0, sizeof(unsigned int));
memset(&it_97, 0, sizeof(unsigned int));
memset(&right_value93, 0, sizeof(void*));
                            hash_96=string_get_hash_key(((char*)come_null_check(((char*)key), "./comelang2.h", 1258)))%((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1258))->size;
                            __freed_obj__ = 0;
                            it_97=hash_96;
                            __freed_obj__ = 0;
                            while(_while_condtional12=(_Bool)1,                            __freed_obj__ = 0, 
                            _while_condtional12) {
                                if(_if_conditional104=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1281))->item_existance[it_97],                                __freed_obj__ = 0, 
                                _if_conditional104) {
                                    if(_if_conditional105=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 1269),__exception_result_var_a1=((struct optional$2boolbool*)(right_value93=string_equals(((char*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1269))->keys[it_97], "./comelang2.h", 1269)),key))), come_pop_stackframe(), __exception_result_var_a1)),                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value93),
                                    (right_value93 && right_value93 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value93, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                    __right_value_freed_obj[0] = right_value93, 
                                    __freed_obj__ = 0, 
                                    _if_conditional105) {
                                        __result67__ = __result_obj__ = ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1266))->items[it_97];
                                        __freed_obj__ = 0;
                                        return __result67__;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    it_97++;
                                    __freed_obj__ = 0;
                                    if(_if_conditional106=it_97>=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1277))->size,                                    __freed_obj__ = 0, 
                                    _if_conditional106) {
                                        it_97=0;
                                        __freed_obj__ = 0;
                                    }
                                    else {
                                        if(_if_conditional107=it_97==hash_96,                                        __freed_obj__ = 0, 
                                        _if_conditional107) {
                                            __result68__ = __result_obj__ = default_value;
                                            __freed_obj__ = 0;
                                            return __result68__;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                }
                                else {
                                    __result69__ = __result_obj__ = default_value;
                                    __freed_obj__ = 0;
                                    return __result69__;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            __result70__ = __result_obj__ = default_value;
                            __freed_obj__ = 0;
                            return __result70__;
                            __freed_obj__ = 0;
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int it2_104;
struct list_item$1charp* it_105;
_Bool _while_condtional15;
void* right_value97;
struct optional$2boolbool* __exception_result_var_a3;
_Bool _if_conditional114;
struct list$1charp* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it2_104, 0, sizeof(int));
memset(&it_105, 0, sizeof(struct list_item$1charp*));
memset(&right_value97, 0, sizeof(void*));
                                it2_104=0;
                                __freed_obj__ = 0;
                                it_105=((struct list$1charp*)come_null_check(self, "./comelang2.h", 492))->head;
                                __freed_obj__ = 0;
                                while(_while_condtional15=it_105!=((void*)0),                                __freed_obj__ = 0, 
                                _while_condtional15) {
                                    if(_if_conditional114=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 498),__exception_result_var_a3=((struct optional$2boolbool*)(right_value97=string_equals(((char*)come_null_check(((struct list_item$1charp*)come_null_check(it_105, "./comelang2.h", 498))->item, "./comelang2.h", 498)),item))), come_pop_stackframe(), __exception_result_var_a3)),                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value97),
                                    (right_value97 && right_value97 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value97, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                    __right_value_freed_obj[0] = right_value97, 
                                    __freed_obj__ = 0, 
                                    _if_conditional114) {
                                        list$1charp_delete(((struct list$1charp*)come_null_check(self, "./comelang2.h", 495)),it2_104,it2_104+1);
                                        __freed_obj__ = 0;
                                        break;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    it2_104++;
                                    __freed_obj__ = 0;
                                    it_105=((struct list_item$1charp*)come_null_check(it_105, "./comelang2.h", 500))->next;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                __result74__ = __result_obj__ = self;
                                __freed_obj__ = 0;
                                return __result74__;
                                __freed_obj__ = 0;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional115;
_Bool _if_conditional116;
_Bool _if_conditional117;
int tmp_106;
_Bool _if_conditional118;
_Bool _if_conditional119;
_Bool _if_conditional120;
struct list$1charp* __result71__;
_Bool _if_conditional121;
_Bool _if_conditional122;
struct list_item$1charp* it_109;
int i_110;
_Bool _while_condtional17;
_Bool _if_conditional123;
struct list_item$1charp* prev_it_111;
_Bool _if_conditional124;
_Bool _if_conditional125;
struct list_item$1charp* it_112;
int i_113;
_Bool _while_condtional18;
_Bool _if_conditional126;
_Bool _if_conditional127;
struct list_item$1charp* prev_it_114;
struct list_item$1charp* it_115;
struct list_item$1charp* head_prev_it_116;
struct list_item$1charp* tail_it_117;
int i_118;
_Bool _while_condtional19;
_Bool _if_conditional128;
_Bool _if_conditional129;
_Bool _if_conditional130;
struct list_item$1charp* prev_it_119;
_Bool _if_conditional131;
_Bool _if_conditional132;
struct list$1charp* __result73__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&tmp_106, 0, sizeof(int));
memset(&it_109, 0, sizeof(struct list_item$1charp*));
memset(&i_110, 0, sizeof(int));
memset(&prev_it_111, 0, sizeof(struct list_item$1charp*));
memset(&it_112, 0, sizeof(struct list_item$1charp*));
memset(&i_113, 0, sizeof(int));
memset(&prev_it_114, 0, sizeof(struct list_item$1charp*));
memset(&it_115, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_116, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_117, 0, sizeof(struct list_item$1charp*));
memset(&i_118, 0, sizeof(int));
memset(&prev_it_119, 0, sizeof(struct list_item$1charp*));
                                            if(_if_conditional115=head<0,                                            __freed_obj__ = 0, 
                                            _if_conditional115) {
                                                head+=((struct list$1charp*)come_null_check(self, "./comelang2.h", 508))->len;
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            if(_if_conditional116=tail<0,                                            __freed_obj__ = 0, 
                                            _if_conditional116) {
                                                tail+=((struct list$1charp*)come_null_check(self, "./comelang2.h", 511))->len+1;
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            if(_if_conditional117=head>tail,                                            __freed_obj__ = 0, 
                                            _if_conditional117) {
                                                tmp_106=tail;
                                                __freed_obj__ = 0;
                                                tail=head;
                                                __freed_obj__ = 0;
                                                head=tmp_106;
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            if(_if_conditional118=head<0,                                            __freed_obj__ = 0, 
                                            _if_conditional118) {
                                                head=0;
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            if(_if_conditional119=tail>((struct list$1charp*)come_null_check(self, "./comelang2.h", 528))->len,                                            __freed_obj__ = 0, 
                                            _if_conditional119) {
                                                tail=((struct list$1charp*)come_null_check(self, "./comelang2.h", 525))->len;
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            if(_if_conditional120=head==tail,                                            __freed_obj__ = 0, 
                                            _if_conditional120) {
                                                __result71__ = __result_obj__ = self;
                                                __freed_obj__ = 0;
                                                return __result71__;
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            if(_if_conditional121=head==0&&tail==((struct list$1charp*)come_null_check(self, "./comelang2.h", 627))->len,                                            __freed_obj__ = 0, 
                                            _if_conditional121) {
                                                list$1charp_reset(((struct list$1charp*)come_null_check(self, "./comelang2.h", 534)));
                                                __freed_obj__ = 0;
                                            }
                                            else {
                                                if(_if_conditional122=head==0,                                                __freed_obj__ = 0, 
                                                _if_conditional122) {
                                                    it_109=((struct list$1charp*)come_null_check(self, "./comelang2.h", 537))->head;
                                                    __freed_obj__ = 0;
                                                    i_110=0;
                                                    __freed_obj__ = 0;
                                                    while(_while_condtional17=it_109!=((void*)0),                                                    __freed_obj__ = 0, 
                                                    _while_condtional17) {
                                                        if(_if_conditional123=i_110<tail,                                                        __freed_obj__ = 0, 
                                                        _if_conditional123) {
                                                            prev_it_111=it_109;
                                                            __freed_obj__ = 0;
                                                            it_109=((struct list_item$1charp*)come_null_check(it_109, "./comelang2.h", 543))->next;
                                                            __freed_obj__ = 0;
                                                            i_110++;
                                                            __freed_obj__ = 0;
                                                            if(prev_it_111 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_111, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                            __freed_obj__ = 0;
                                                            ((struct list$1charp*)come_null_check(self, "./comelang2.h", 548))->len--;
                                                            __freed_obj__ = 0;
                                                        }
                                                        else {
                                                            if(_if_conditional124=i_110==tail,                                                            __freed_obj__ = 0, 
                                                            _if_conditional124) {
                                                                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 551))->head=it_109;
                                                                __freed_obj__ = 0;
                                                                ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 552))->head, "./comelang2.h", 552))->prev=((void*)0);
                                                                __freed_obj__ = 0;
                                                                break;
                                                                __freed_obj__ = 0;
                                                            }
                                                            else {
                                                                it_109=((struct list_item$1charp*)come_null_check(it_109, "./comelang2.h", 556))->next;
                                                                __freed_obj__ = 0;
                                                                i_110++;
                                                                __freed_obj__ = 0;
                                                            }
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                }
                                                else {
                                                    if(_if_conditional125=tail==((struct list$1charp*)come_null_check(self, "./comelang2.h", 627))->len,                                                    __freed_obj__ = 0, 
                                                    _if_conditional125) {
                                                        it_112=((struct list$1charp*)come_null_check(self, "./comelang2.h", 562))->head;
                                                        __freed_obj__ = 0;
                                                        i_113=0;
                                                        __freed_obj__ = 0;
                                                        while(_while_condtional18=it_112!=((void*)0),                                                        __freed_obj__ = 0, 
                                                        _while_condtional18) {
                                                            if(_if_conditional126=i_113==head,                                                            __freed_obj__ = 0, 
                                                            _if_conditional126) {
                                                                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 566))->tail=((struct list_item$1charp*)come_null_check(it_112, "./comelang2.h", 566))->prev;
                                                                __freed_obj__ = 0;
                                                                ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 567))->tail, "./comelang2.h", 567))->next=((void*)0);
                                                                __freed_obj__ = 0;
                                                            }
                                                            __freed_obj__ = 0;
                                                            if(_if_conditional127=i_113>=head,                                                            __freed_obj__ = 0, 
                                                            _if_conditional127) {
                                                                prev_it_114=it_112;
                                                                __freed_obj__ = 0;
                                                                it_112=((struct list_item$1charp*)come_null_check(it_112, "./comelang2.h", 573))->next;
                                                                __freed_obj__ = 0;
                                                                i_113++;
                                                                __freed_obj__ = 0;
                                                                if(prev_it_114 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_114, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                __freed_obj__ = 0;
                                                                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 578))->len--;
                                                                __freed_obj__ = 0;
                                                            }
                                                            else {
                                                                it_112=((struct list_item$1charp*)come_null_check(it_112, "./comelang2.h", 581))->next;
                                                                __freed_obj__ = 0;
                                                                i_113++;
                                                                __freed_obj__ = 0;
                                                            }
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                    }
                                                    else {
                                                        it_115=((struct list$1charp*)come_null_check(self, "./comelang2.h", 587))->head;
                                                        __freed_obj__ = 0;
                                                        head_prev_it_116=((void*)0);
                                                        __freed_obj__ = 0;
                                                        tail_it_117=((void*)0);
                                                        __freed_obj__ = 0;
                                                        i_118=0;
                                                        __freed_obj__ = 0;
                                                        while(_while_condtional19=it_115!=((void*)0),                                                        __freed_obj__ = 0, 
                                                        _while_condtional19) {
                                                            if(_if_conditional128=i_118==head,                                                            __freed_obj__ = 0, 
                                                            _if_conditional128) {
                                                                head_prev_it_116=((struct list_item$1charp*)come_null_check(it_115, "./comelang2.h", 596))->prev;
                                                                __freed_obj__ = 0;
                                                            }
                                                            __freed_obj__ = 0;
                                                            if(_if_conditional129=i_118==tail,                                                            __freed_obj__ = 0, 
                                                            _if_conditional129) {
                                                                tail_it_117=it_115;
                                                                __freed_obj__ = 0;
                                                            }
                                                            __freed_obj__ = 0;
                                                            if(_if_conditional130=i_118>=head&&i_118<tail,                                                            __freed_obj__ = 0, 
                                                            _if_conditional130) {
                                                                prev_it_119=it_115;
                                                                __freed_obj__ = 0;
                                                                it_115=((struct list_item$1charp*)come_null_check(it_115, "./comelang2.h", 606))->next;
                                                                __freed_obj__ = 0;
                                                                i_118++;
                                                                __freed_obj__ = 0;
                                                                if(prev_it_119 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_119, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                __freed_obj__ = 0;
                                                                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 611))->len--;
                                                                __freed_obj__ = 0;
                                                            }
                                                            else {
                                                                it_115=((struct list_item$1charp*)come_null_check(it_115, "./comelang2.h", 614))->next;
                                                                __freed_obj__ = 0;
                                                                i_118++;
                                                                __freed_obj__ = 0;
                                                            }
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                        if(_if_conditional131=head_prev_it_116!=((void*)0),                                                        __freed_obj__ = 0, 
                                                        _if_conditional131) {
                                                            ((struct list_item$1charp*)come_null_check(head_prev_it_116, "./comelang2.h", 620))->next=tail_it_117;
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                        if(_if_conditional132=tail_it_117!=((void*)0),                                                        __freed_obj__ = 0, 
                                                        _if_conditional132) {
                                                            ((struct list_item$1charp*)come_null_check(tail_it_117, "./comelang2.h", 623))->prev=head_prev_it_116;
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            __result73__ = __result_obj__ = self;
                                            __freed_obj__ = 0;
                                            return __result73__;
                                            __freed_obj__ = 0;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1charp* it_107;
_Bool _while_condtional16;
struct list_item$1charp* prev_it_108;
struct list$1charp* __result72__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_107, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_108, 0, sizeof(struct list_item$1charp*));
                                                    it_107=((struct list$1charp*)come_null_check(self, "./comelang2.h", 476))->head;
                                                    __freed_obj__ = 0;
                                                    while(_while_condtional16=it_107!=((void*)0),                                                    __freed_obj__ = 0, 
                                                    _while_condtional16) {
                                                        prev_it_108=it_107;
                                                        __freed_obj__ = 0;
                                                        it_107=((struct list_item$1charp*)come_null_check(it_107, "./comelang2.h", 479))->next;
                                                        __freed_obj__ = 0;
                                                        if(prev_it_108 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_108, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                    ((struct list$1charp*)come_null_check(self, "./comelang2.h", 483))->head=((void*)0);
                                                    __freed_obj__ = 0;
                                                    ((struct list$1charp*)come_null_check(self, "./comelang2.h", 484))->tail=((void*)0);
                                                    __freed_obj__ = 0;
                                                    ((struct list$1charp*)come_null_check(self, "./comelang2.h", 486))->len=0;
                                                    __freed_obj__ = 0;
                                                    __result72__ = __result_obj__ = self;
                                                    __freed_obj__ = 0;
                                                    return __result72__;
                                                    __freed_obj__ = 0;
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional138;
char* result_121;
char* __result75__;
_Bool _if_conditional139;
char* __result76__;
char* result_122;
char* __result77__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_121, 0, sizeof(char*));
memset(&result_122, 0, sizeof(char*));
                if(_if_conditional138=self==((void*)0),                __freed_obj__ = 0, 
                _if_conditional138) {
                    __freed_obj__ = 0;
                    memset(&result_121,0,sizeof(char*));
                    __freed_obj__ = 0;
                    __result75__ = __result_obj__ = result_121;
                    __freed_obj__ = 0;
                    return __result75__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 336))->it=((struct list$1charp*)come_null_check(self, "./comelang2.h", 336))->head;
                __freed_obj__ = 0;
                if(_if_conditional139=((struct list$1charp*)come_null_check(self, "./comelang2.h", 342))->it,                __freed_obj__ = 0, 
                _if_conditional139) {
                    __result76__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 339))->it, "./comelang2.h", 339))->item;
                    __freed_obj__ = 0;
                    return __result76__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __freed_obj__ = 0;
                memset(&result_122,0,sizeof(char*));
                __freed_obj__ = 0;
                __result77__ = __result_obj__ = result_122;
                __freed_obj__ = 0;
                return __result77__;
                __freed_obj__ = 0;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result78__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                __result78__ = self==((void*)0)||((struct list$1charp*)come_null_check(self, "./comelang2.h", 366))->it==((void*)0);
                __freed_obj__ = 0;
                return __result78__;
                __freed_obj__ = 0;
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional140;
char* result_124;
char* __result79__;
_Bool _if_conditional141;
char* __result80__;
char* result_125;
char* __result81__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_124, 0, sizeof(char*));
memset(&result_125, 0, sizeof(char*));
                if(_if_conditional140=self==((void*)0),                __freed_obj__ = 0, 
                _if_conditional140) {
                    __freed_obj__ = 0;
                    memset(&result_124,0,sizeof(char*));
                    __freed_obj__ = 0;
                    __result79__ = __result_obj__ = result_124;
                    __freed_obj__ = 0;
                    return __result79__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 354))->it=((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 354))->it, "./comelang2.h", 354))->next;
                __freed_obj__ = 0;
                if(_if_conditional141=((struct list$1charp*)come_null_check(self, "./comelang2.h", 360))->it,                __freed_obj__ = 0, 
                _if_conditional141) {
                    __result80__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 357))->it, "./comelang2.h", 357))->item;
                    __freed_obj__ = 0;
                    return __result80__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __freed_obj__ = 0;
                memset(&result_125,0,sizeof(char*));
                __freed_obj__ = 0;
                __result81__ = __result_obj__ = result_125;
                __freed_obj__ = 0;
                return __result81__;
                __freed_obj__ = 0;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional144;
void* right_value99;
struct list_item$1charp* litem_126;
_Bool _if_conditional145;
void* right_value100;
struct list_item$1charp* litem_127;
void* right_value101;
struct list_item$1charp* litem_128;
struct list$1charp* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value99, 0, sizeof(void*));
memset(&litem_126, 0, sizeof(struct list_item$1charp*));
memset(&right_value100, 0, sizeof(void*));
memset(&litem_127, 0, sizeof(struct list_item$1charp*));
memset(&right_value101, 0, sizeof(void*));
memset(&litem_128, 0, sizeof(struct list_item$1charp*));
                    if(_if_conditional144=((struct list$1charp*)come_null_check(self, "./comelang2.h", 302))->len==0,                    __freed_obj__ = 0, 
                    _if_conditional144) {
                        litem_126=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value99=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 272))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value99);
                        if(right_value99 && right_value99 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value99, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value99;
                        __freed_obj__ = 0;
                        ((struct list_item$1charp*)come_null_check(litem_126, "./comelang2.h", 274))->prev=((void*)0);
                        __freed_obj__ = 0;
                        ((struct list_item$1charp*)come_null_check(litem_126, "./comelang2.h", 275))->next=((void*)0);
                        __freed_obj__ = 0;
                        ((struct list_item$1charp*)come_null_check(litem_126, "./comelang2.h", 276))->item=item;
                        __freed_obj__ = 0;
                        ((struct list$1charp*)come_null_check(self, "./comelang2.h", 278))->tail=litem_126;
                        __freed_obj__ = 0;
                        ((struct list$1charp*)come_null_check(self, "./comelang2.h", 279))->head=litem_126;
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional145=((struct list$1charp*)come_null_check(self, "./comelang2.h", 302))->len==1,                        __freed_obj__ = 0, 
                        _if_conditional145) {
                            litem_127=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value100=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 282))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value100);
                            if(right_value100 && right_value100 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value100, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value100;
                            __freed_obj__ = 0;
                            ((struct list_item$1charp*)come_null_check(litem_127, "./comelang2.h", 284))->prev=((struct list$1charp*)come_null_check(self, "./comelang2.h", 284))->head;
                            __freed_obj__ = 0;
                            ((struct list_item$1charp*)come_null_check(litem_127, "./comelang2.h", 285))->next=((void*)0);
                            __freed_obj__ = 0;
                            ((struct list_item$1charp*)come_null_check(litem_127, "./comelang2.h", 286))->item=item;
                            __freed_obj__ = 0;
                            ((struct list$1charp*)come_null_check(self, "./comelang2.h", 288))->tail=litem_127;
                            __freed_obj__ = 0;
                            ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 289))->head, "./comelang2.h", 289))->next=litem_127;
                            __freed_obj__ = 0;
                        }
                        else {
                            litem_128=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value101=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 292))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value101);
                            if(right_value101 && right_value101 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value101, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value101;
                            __freed_obj__ = 0;
                            ((struct list_item$1charp*)come_null_check(litem_128, "./comelang2.h", 294))->prev=((struct list$1charp*)come_null_check(self, "./comelang2.h", 294))->tail;
                            __freed_obj__ = 0;
                            ((struct list_item$1charp*)come_null_check(litem_128, "./comelang2.h", 295))->next=((void*)0);
                            __freed_obj__ = 0;
                            ((struct list_item$1charp*)come_null_check(litem_128, "./comelang2.h", 296))->item=item;
                            __freed_obj__ = 0;
                            ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 298))->tail, "./comelang2.h", 298))->next=litem_128;
                            __freed_obj__ = 0;
                            ((struct list$1charp*)come_null_check(self, "./comelang2.h", 299))->tail=litem_128;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    ((struct list$1charp*)come_null_check(self, "./comelang2.h", 302))->len++;
                    __freed_obj__ = 0;
                    __result82__ = __result_obj__ = self;
                    __freed_obj__ = 0;
                    return __result82__;
                    __freed_obj__ = 0;
}

static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value144;
struct sType* __dec_obj47;
struct tuple1$1sTypeph* __result105__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value144, 0, sizeof(void*));
        __dec_obj47=((struct tuple1$1sTypeph*)come_null_check(self, "./comelang2.h", 1772))->v1;
        ((struct tuple1$1sTypeph*)come_null_check(self, "./comelang2.h", 1772))->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value144=sType_clone(v1))));
        if(__dec_obj47) { come_call_finalizer(sType_finalize,__dec_obj47, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value144);
        if(right_value144 && right_value144 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value144, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value144;
        __freed_obj__ = 0;
        __result105__ = __result_obj__ = self;
        if(self && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result105__;
        __freed_obj__ = 0;
        if(self && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional146;
struct sType* __result84__;
void* right_value106;
struct sType* result_129;
_Bool _if_conditional147;
_Bool _if_conditional148;
void* right_value109;
struct tuple1$1sTypeph* __dec_obj24;
_Bool _if_conditional152;
void* right_value112;
struct tuple1$1sTypeph* __dec_obj26;
_Bool _if_conditional155;
void* right_value113;
char* __dec_obj27;
_Bool _if_conditional156;
void* right_value120;
struct list$1sTypeph* __dec_obj31;
_Bool _if_conditional160;
void* right_value128;
struct list$1sNodeph* __dec_obj35;
_Bool _if_conditional173;
_Bool _if_conditional174;
void* right_value129;
struct list$1sTypeph* __dec_obj36;
_Bool _if_conditional175;
void* right_value136;
struct list$1charph* __dec_obj40;
_Bool _if_conditional179;
void* right_value139;
struct tuple1$1sTypeph* __dec_obj42;
_Bool _if_conditional182;
_Bool _if_conditional183;
void* right_value140;
struct sNode* __dec_obj43;
_Bool _if_conditional184;
_Bool _if_conditional185;
_Bool _if_conditional186;
_Bool _if_conditional187;
_Bool _if_conditional188;
_Bool _if_conditional189;
_Bool _if_conditional190;
_Bool _if_conditional191;
_Bool _if_conditional192;
_Bool _if_conditional193;
_Bool _if_conditional194;
_Bool _if_conditional195;
_Bool _if_conditional196;
_Bool _if_conditional197;
_Bool _if_conditional198;
_Bool _if_conditional199;
_Bool _if_conditional200;
_Bool _if_conditional201;
_Bool _if_conditional202;
_Bool _if_conditional203;
_Bool _if_conditional204;
_Bool _if_conditional205;
_Bool _if_conditional206;
_Bool _if_conditional207;
void* right_value141;
struct sNode* __dec_obj44;
_Bool _if_conditional208;
_Bool _if_conditional209;
_Bool _if_conditional210;
void* right_value142;
char* __dec_obj45;
_Bool _if_conditional211;
_Bool _if_conditional212;
_Bool _if_conditional213;
_Bool _if_conditional214;
_Bool _if_conditional215;
_Bool _if_conditional216;
_Bool _if_conditional217;
_Bool _if_conditional218;
_Bool _if_conditional219;
void* right_value143;
char* __dec_obj46;
struct sType* __result104__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value106, 0, sizeof(void*));
memset(&result_129, 0, sizeof(struct sType*));
memset(&right_value109, 0, sizeof(void*));
memset(&right_value112, 0, sizeof(void*));
memset(&right_value113, 0, sizeof(void*));
memset(&right_value120, 0, sizeof(void*));
memset(&right_value128, 0, sizeof(void*));
memset(&right_value129, 0, sizeof(void*));
memset(&right_value136, 0, sizeof(void*));
memset(&right_value139, 0, sizeof(void*));
memset(&right_value140, 0, sizeof(void*));
memset(&right_value141, 0, sizeof(void*));
memset(&right_value142, 0, sizeof(void*));
memset(&right_value143, 0, sizeof(void*));
            if(_if_conditional146=self==(void*)0,            __freed_obj__ = 0, 
            _if_conditional146) {
                __result84__ = __result_obj__ = (void*)0;
                __freed_obj__ = 0;
                return __result84__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            result_129=(struct sType*)come_increment_ref_count(((struct sType*)(right_value106=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value106);
            if(right_value106 && right_value106 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value106, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value106;
            __freed_obj__ = 0;
            if(_if_conditional147=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional147) {
                ((struct sType*)come_null_check(result_129, "sType_clone", 4))->mClass=((struct sType*)come_null_check(self, "sType_clone", 4))->mClass;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional148=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 6))->mNoSolvedGenericsType!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional148) {
                __dec_obj24=((struct sType*)come_null_check(result_129, "sType_clone", 5))->mNoSolvedGenericsType;
                ((struct sType*)come_null_check(result_129, "sType_clone", 5))->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value109=tuple1$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 5))->mNoSolvedGenericsType))));
                if(__dec_obj24) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj24, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value109);
                if(right_value109 && right_value109 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value109, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value109;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional152=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 7))->mOriginalLoadVarType!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional152) {
                __dec_obj26=((struct sType*)come_null_check(result_129, "sType_clone", 6))->mOriginalLoadVarType;
                ((struct sType*)come_null_check(result_129, "sType_clone", 6))->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value112=tuple1$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 6))->mOriginalLoadVarType))));
                if(__dec_obj26) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj26, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value112);
                if(right_value112 && right_value112 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value112, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value112;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional155=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 8))->mGenericsName!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional155) {
                __dec_obj27=((struct sType*)come_null_check(result_129, "sType_clone", 7))->mGenericsName;
                ((struct sType*)come_null_check(result_129, "sType_clone", 7))->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value113=string_clone(((struct sType*)come_null_check(self, "sType_clone", 7))->mGenericsName))));
                if(__dec_obj27) { __dec_obj27 = come_decrement_ref_count(__dec_obj27, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value113);
                if(right_value113 && right_value113 != __result_obj__ && !__freed_obj__) { right_value113 = come_decrement_ref_count(right_value113, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value113;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional156=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 9))->mGenericsTypes!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional156) {
                __dec_obj31=((struct sType*)come_null_check(result_129, "sType_clone", 8))->mGenericsTypes;
                ((struct sType*)come_null_check(result_129, "sType_clone", 8))->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value120=list$1sTypeph_clone(((struct sType*)come_null_check(self, "sType_clone", 8))->mGenericsTypes))));
                if(__dec_obj31) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj31, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value120);
                if(right_value120 && right_value120 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value120, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value120;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional160=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 10))->mArrayNum!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional160) {
                __dec_obj35=((struct sType*)come_null_check(result_129, "sType_clone", 9))->mArrayNum;
                ((struct sType*)come_null_check(result_129, "sType_clone", 9))->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value128=list$1sNodeph_clone(((struct sType*)come_null_check(self, "sType_clone", 9))->mArrayNum))));
                if(__dec_obj35) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj35, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value128);
                if(right_value128 && right_value128 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value128, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value128;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional173=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional173) {
                ((struct sType*)come_null_check(result_129, "sType_clone", 10))->mOmitArrayNum=((struct sType*)come_null_check(self, "sType_clone", 10))->mOmitArrayNum;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional174=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 12))->mParamTypes!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional174) {
                __dec_obj36=((struct sType*)come_null_check(result_129, "sType_clone", 11))->mParamTypes;
                ((struct sType*)come_null_check(result_129, "sType_clone", 11))->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value129=list$1sTypeph_clone(((struct sType*)come_null_check(self, "sType_clone", 11))->mParamTypes))));
                if(__dec_obj36) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj36, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value129);
                if(right_value129 && right_value129 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value129, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value129;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional175=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 13))->mParamNames!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional175) {
                __dec_obj40=((struct sType*)come_null_check(result_129, "sType_clone", 12))->mParamNames;
                ((struct sType*)come_null_check(result_129, "sType_clone", 12))->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value136=list$1charph_clone(((struct sType*)come_null_check(self, "sType_clone", 12))->mParamNames))));
                if(__dec_obj40) { come_call_finalizer(list$1charph_finalize,__dec_obj40, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value136);
                if(right_value136 && right_value136 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value136, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value136;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional179=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 14))->mResultType!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional179) {
                __dec_obj42=((struct sType*)come_null_check(result_129, "sType_clone", 13))->mResultType;
                ((struct sType*)come_null_check(result_129, "sType_clone", 13))->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value139=tuple1$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 13))->mResultType))));
                if(__dec_obj42) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj42, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value139);
                if(right_value139 && right_value139 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value139, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value139;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional182=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional182) {
                ((struct sType*)come_null_check(result_129, "sType_clone", 14))->mVarArgs=((struct sType*)come_null_check(self, "sType_clone", 14))->mVarArgs;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional183=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 16))->mAlignas!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional183) {
                __dec_obj43=((struct sType*)come_null_check(result_129, "sType_clone", 15))->mAlignas;
                ((struct sType*)come_null_check(result_129, "sType_clone", 15))->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value140=sNode_clone(((struct sType*)come_null_check(self, "sType_clone", 15))->mAlignas))));
                if(__dec_obj43) { __dec_obj43 = come_decrement_ref_count(__dec_obj43, ((struct sNode*)__dec_obj43)->finalize, ((struct sNode*)__dec_obj43)->_protocol_obj, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value140);
                if(right_value140 && right_value140 != __result_obj__ && !__freed_obj__) { right_value140 = come_decrement_ref_count(right_value140, ((struct sNode*)right_value140)->finalize, ((struct sNode*)right_value140)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[0] = right_value140;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional184=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional184) {
                ((struct sType*)come_null_check(result_129, "sType_clone", 16))->mUnsigned=((struct sType*)come_null_check(self, "sType_clone", 16))->mUnsigned;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional185=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional185) {
                ((struct sType*)come_null_check(result_129, "sType_clone", 17))->mShort=((struct sType*)come_null_check(self, "sType_clone", 17))->mShort;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional186=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional186) {
                ((struct sType*)come_null_check(result_129, "sType_clone", 18))->mLong=((struct sType*)come_null_check(self, "sType_clone", 18))->mLong;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional187=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional187) {
                ((struct sType*)come_null_check(result_129, "sType_clone", 19))->mLongLong=((struct sType*)come_null_check(self, "sType_clone", 19))->mLongLong;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional188=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional188) {
                ((struct sType*)come_null_check(result_129, "sType_clone", 20))->mConstant=((struct sType*)come_null_check(self, "sType_clone", 20))->mConstant;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional189=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional189) {
                ((struct sType*)come_null_check(result_129, "sType_clone", 21))->mRegister=((struct sType*)come_null_check(self, "sType_clone", 21))->mRegister;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional190=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional190) {
                ((struct sType*)come_null_check(result_129, "sType_clone", 22))->mVolatile=((struct sType*)come_null_check(self, "sType_clone", 22))->mVolatile;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional191=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional191) {
                ((struct sType*)come_null_check(result_129, "sType_clone", 23))->mStatic=((struct sType*)come_null_check(self, "sType_clone", 23))->mStatic;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional192=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional192) {
                ((struct sType*)come_null_check(result_129, "sType_clone", 24))->mExtern=((struct sType*)come_null_check(self, "sType_clone", 24))->mExtern;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional193=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional193) {
                ((struct sType*)come_null_check(result_129, "sType_clone", 25))->mRestrict=((struct sType*)come_null_check(self, "sType_clone", 25))->mRestrict;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional194=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional194) {
                ((struct sType*)come_null_check(result_129, "sType_clone", 26))->mImmutable=((struct sType*)come_null_check(self, "sType_clone", 26))->mImmutable;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional195=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional195) {
                ((struct sType*)come_null_check(result_129, "sType_clone", 27))->mHeap=((struct sType*)come_null_check(self, "sType_clone", 27))->mHeap;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional196=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional196) {
                ((struct sType*)come_null_check(result_129, "sType_clone", 28))->mDummyHeap=((struct sType*)come_null_check(self, "sType_clone", 28))->mDummyHeap;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional197=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional197) {
                ((struct sType*)come_null_check(result_129, "sType_clone", 29))->mDelegate=((struct sType*)come_null_check(self, "sType_clone", 29))->mDelegate;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional198=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional198) {
                ((struct sType*)come_null_check(result_129, "sType_clone", 30))->mShare=((struct sType*)come_null_check(self, "sType_clone", 30))->mShare;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional199=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional199) {
                ((struct sType*)come_null_check(result_129, "sType_clone", 31))->mClone=((struct sType*)come_null_check(self, "sType_clone", 31))->mClone;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional200=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional200) {
                ((struct sType*)come_null_check(result_129, "sType_clone", 32))->mNoHeap=((struct sType*)come_null_check(self, "sType_clone", 32))->mNoHeap;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional201=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional201) {
                ((struct sType*)come_null_check(result_129, "sType_clone", 33))->mNoCallingDestructor=((struct sType*)come_null_check(self, "sType_clone", 33))->mNoCallingDestructor;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional202=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional202) {
                ((struct sType*)come_null_check(result_129, "sType_clone", 34))->mRefference=((struct sType*)come_null_check(self, "sType_clone", 34))->mRefference;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional203=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional203) {
                ((struct sType*)come_null_check(result_129, "sType_clone", 35))->mException=((struct sType*)come_null_check(self, "sType_clone", 35))->mException;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional204=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional204) {
                ((struct sType*)come_null_check(result_129, "sType_clone", 36))->mPointerNum=((struct sType*)come_null_check(self, "sType_clone", 36))->mPointerNum;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional205=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional205) {
                ((struct sType*)come_null_check(result_129, "sType_clone", 37))->mOriginalTypeNamePointerNum=((struct sType*)come_null_check(self, "sType_clone", 37))->mOriginalTypeNamePointerNum;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional206=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional206) {
                ((struct sType*)come_null_check(result_129, "sType_clone", 38))->mNoArrayPointerNum=((struct sType*)come_null_check(self, "sType_clone", 38))->mNoArrayPointerNum;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional207=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 40))->mSizeNum!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional207) {
                __dec_obj44=((struct sType*)come_null_check(result_129, "sType_clone", 39))->mSizeNum;
                ((struct sType*)come_null_check(result_129, "sType_clone", 39))->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value141=sNode_clone(((struct sType*)come_null_check(self, "sType_clone", 39))->mSizeNum))));
                if(__dec_obj44) { __dec_obj44 = come_decrement_ref_count(__dec_obj44, ((struct sNode*)__dec_obj44)->finalize, ((struct sNode*)__dec_obj44)->_protocol_obj, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value141);
                if(right_value141 && right_value141 != __result_obj__ && !__freed_obj__) { right_value141 = come_decrement_ref_count(right_value141, ((struct sNode*)right_value141)->finalize, ((struct sNode*)right_value141)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[0] = right_value141;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional208=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional208) {
                ((struct sType*)come_null_check(result_129, "sType_clone", 40))->mDynamicArrayNum=((struct sType*)come_null_check(self, "sType_clone", 40))->mDynamicArrayNum;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional209=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional209) {
                ((struct sType*)come_null_check(result_129, "sType_clone", 41))->mTypeOfExpression=((struct sType*)come_null_check(self, "sType_clone", 41))->mTypeOfExpression;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional210=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 43))->mOriginalTypeName!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional210) {
                __dec_obj45=((struct sType*)come_null_check(result_129, "sType_clone", 42))->mOriginalTypeName;
                ((struct sType*)come_null_check(result_129, "sType_clone", 42))->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value142=string_clone(((struct sType*)come_null_check(self, "sType_clone", 42))->mOriginalTypeName))));
                if(__dec_obj45) { __dec_obj45 = come_decrement_ref_count(__dec_obj45, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value142);
                if(right_value142 && right_value142 != __result_obj__ && !__freed_obj__) { right_value142 = come_decrement_ref_count(right_value142, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value142;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional211=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional211) {
                ((struct sType*)come_null_check(result_129, "sType_clone", 43))->mOriginalPointerNum=((struct sType*)come_null_check(self, "sType_clone", 43))->mOriginalPointerNum;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional212=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional212) {
                ((struct sType*)come_null_check(result_129, "sType_clone", 44))->mFunctionParam=((struct sType*)come_null_check(self, "sType_clone", 44))->mFunctionParam;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional213=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional213) {
                ((struct sType*)come_null_check(result_129, "sType_clone", 45))->mAllocaValue=((struct sType*)come_null_check(self, "sType_clone", 45))->mAllocaValue;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional214=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional214) {
                ((struct sType*)come_null_check(result_129, "sType_clone", 46))->mGenericsStruct=((struct sType*)come_null_check(self, "sType_clone", 46))->mGenericsStruct;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional215=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional215) {
                ((struct sType*)come_null_check(result_129, "sType_clone", 47))->mSolvedGenericsName=((struct sType*)come_null_check(self, "sType_clone", 47))->mSolvedGenericsName;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional216=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional216) {
                ((struct sType*)come_null_check(result_129, "sType_clone", 48))->mComeMemCore=((struct sType*)come_null_check(self, "sType_clone", 48))->mComeMemCore;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional217=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional217) {
                ((struct sType*)come_null_check(result_129, "sType_clone", 49))->mInline=((struct sType*)come_null_check(self, "sType_clone", 49))->mInline;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional218=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional218) {
                ((struct sType*)come_null_check(result_129, "sType_clone", 50))->mNullValue=((struct sType*)come_null_check(self, "sType_clone", 50))->mNullValue;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional219=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 52))->mAsmName!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional219) {
                __dec_obj46=((struct sType*)come_null_check(result_129, "sType_clone", 51))->mAsmName;
                ((struct sType*)come_null_check(result_129, "sType_clone", 51))->mAsmName=(char*)come_increment_ref_count(((char*)(right_value143=string_clone(((struct sType*)come_null_check(self, "sType_clone", 51))->mAsmName))));
                if(__dec_obj46) { __dec_obj46 = come_decrement_ref_count(__dec_obj46, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value143);
                if(right_value143 && right_value143 != __result_obj__ && !__freed_obj__) { right_value143 = come_decrement_ref_count(right_value143, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value143;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __result104__ = __result_obj__ = result_129;
            if(result_129 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_129, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result104__;
            __freed_obj__ = 0;
            if(result_129 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_129, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional150;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional150=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 1))->v1!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional150) {
                            if(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

static struct list$1sTypeph* list$1sTypeph_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional157;
struct list$1sTypeph* __result89__;
void* right_value114;
void* right_value115;
struct list$1sTypeph* result_132;
struct list_item$1sTypeph* it_133;
_Bool _while_condtional20;
void* right_value119;
struct list$1sTypeph* __result92__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value114, 0, sizeof(void*));
memset(&right_value115, 0, sizeof(void*));
memset(&result_132, 0, sizeof(struct list$1sTypeph*));
memset(&it_133, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value119, 0, sizeof(void*));
                    if(_if_conditional157=self==((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional157) {
                        __result89__ = __result_obj__ = ((void*)0);
                        __freed_obj__ = 0;
                        return __result89__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    result_132=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value115=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)(right_value114=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 188))), "./comelang2.h", 188)))))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value114);
                    if(right_value114 && right_value114 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value114, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value114;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value115);
                    if(right_value115 && right_value115 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value115, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value115;
                    __freed_obj__ = 0;
                    it_133=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 190))->head;
                    __freed_obj__ = 0;
                    while(_while_condtional20=it_133!=((void*)0),                    __freed_obj__ = 0, 
                    _while_condtional20) {
                        list$1sTypeph_add(((struct list$1sTypeph*)come_null_check(result_132, "./comelang2.h", 192)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value119=sType_clone(((struct list_item$1sTypeph*)come_null_check(it_133, "./comelang2.h", 192))->item)))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value119);
                        if(right_value119 && right_value119 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value119, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value119;
                        __freed_obj__ = 0;
                        it_133=((struct list_item$1sTypeph*)come_null_check(it_133, "./comelang2.h", 194))->next;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __result92__ = __result_obj__ = result_132;
                    if(result_132 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,result_132, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result92__;
                    __freed_obj__ = 0;
                    if(result_132 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,result_132, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1sTypeph* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 150))->head=((void*)0);
                        __freed_obj__ = 0;
                        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 151))->tail=((void*)0);
                        __freed_obj__ = 0;
                        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 152))->len=0;
                        __freed_obj__ = 0;
                        __result90__ = __result_obj__ = self;
                        if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result90__;
                        __freed_obj__ = 0;
                        if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional158;
void* right_value116;
struct list_item$1sTypeph* litem_134;
struct sType* __dec_obj28;
_Bool _if_conditional159;
void* right_value117;
struct list_item$1sTypeph* litem_135;
struct sType* __dec_obj29;
void* right_value118;
struct list_item$1sTypeph* litem_136;
struct sType* __dec_obj30;
struct list$1sTypeph* __result91__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value116, 0, sizeof(void*));
memset(&litem_134, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value117, 0, sizeof(void*));
memset(&litem_135, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value118, 0, sizeof(void*));
memset(&litem_136, 0, sizeof(struct list_item$1sTypeph*));
                            if(_if_conditional158=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 232))->len==0,                            __freed_obj__ = 0, 
                            _if_conditional158) {
                                litem_134=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value116=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 202))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value116);
                                if(right_value116 && right_value116 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value116, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value116;
                                __freed_obj__ = 0;
                                ((struct list_item$1sTypeph*)come_null_check(litem_134, "./comelang2.h", 204))->prev=((void*)0);
                                __freed_obj__ = 0;
                                ((struct list_item$1sTypeph*)come_null_check(litem_134, "./comelang2.h", 205))->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj28=((struct list_item$1sTypeph*)come_null_check(litem_134, "./comelang2.h", 206))->item;
                                ((struct list_item$1sTypeph*)come_null_check(litem_134, "./comelang2.h", 206))->item=(struct sType*)come_increment_ref_count(item);
                                if(__dec_obj28) { come_call_finalizer(sType_finalize,__dec_obj28, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = 0;
                                ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 208))->tail=litem_134;
                                __freed_obj__ = 0;
                                ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 209))->head=litem_134;
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional159=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 232))->len==1,                                __freed_obj__ = 0, 
                                _if_conditional159) {
                                    litem_135=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value117=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 212))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value117);
                                    if(right_value117 && right_value117 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value117, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value117;
                                    __freed_obj__ = 0;
                                    ((struct list_item$1sTypeph*)come_null_check(litem_135, "./comelang2.h", 214))->prev=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 214))->head;
                                    __freed_obj__ = 0;
                                    ((struct list_item$1sTypeph*)come_null_check(litem_135, "./comelang2.h", 215))->next=((void*)0);
                                    __freed_obj__ = 0;
                                    __dec_obj29=((struct list_item$1sTypeph*)come_null_check(litem_135, "./comelang2.h", 216))->item;
                                    ((struct list_item$1sTypeph*)come_null_check(litem_135, "./comelang2.h", 216))->item=(struct sType*)come_increment_ref_count(item);
                                    if(__dec_obj29) { come_call_finalizer(sType_finalize,__dec_obj29, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                    ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 218))->tail=litem_135;
                                    __freed_obj__ = 0;
                                    ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 219))->head, "./comelang2.h", 219))->next=litem_135;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    litem_136=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value118=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 222))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value118);
                                    if(right_value118 && right_value118 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value118, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value118;
                                    __freed_obj__ = 0;
                                    ((struct list_item$1sTypeph*)come_null_check(litem_136, "./comelang2.h", 224))->prev=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 224))->tail;
                                    __freed_obj__ = 0;
                                    ((struct list_item$1sTypeph*)come_null_check(litem_136, "./comelang2.h", 225))->next=((void*)0);
                                    __freed_obj__ = 0;
                                    __dec_obj30=((struct list_item$1sTypeph*)come_null_check(litem_136, "./comelang2.h", 226))->item;
                                    ((struct list_item$1sTypeph*)come_null_check(litem_136, "./comelang2.h", 226))->item=(struct sType*)come_increment_ref_count(item);
                                    if(__dec_obj30) { come_call_finalizer(sType_finalize,__dec_obj30, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                    ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 228))->tail, "./comelang2.h", 228))->next=litem_136;
                                    __freed_obj__ = 0;
                                    ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 229))->tail=litem_136;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 232))->len++;
                            __freed_obj__ = 0;
                            __result91__ = __result_obj__ = self;
                            if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                            __freed_obj__ = 0;
                            return __result91__;
                            __freed_obj__ = 0;
                            if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct list$1sNodeph* list$1sNodeph_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional161;
struct list$1sNodeph* __result93__;
void* right_value121;
void* right_value122;
struct list$1sNodeph* result_137;
struct list_item$1sNodeph* it_138;
_Bool _while_condtional21;
void* right_value127;
struct list$1sNodeph* __result98__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value121, 0, sizeof(void*));
memset(&right_value122, 0, sizeof(void*));
memset(&result_137, 0, sizeof(struct list$1sNodeph*));
memset(&it_138, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value127, 0, sizeof(void*));
                    if(_if_conditional161=self==((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional161) {
                        __result93__ = __result_obj__ = ((void*)0);
                        __freed_obj__ = 0;
                        return __result93__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    result_137=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value122=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)(right_value121=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 188))), "./comelang2.h", 188)))))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value121);
                    if(right_value121 && right_value121 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value121, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value121;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value122);
                    if(right_value122 && right_value122 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value122, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value122;
                    __freed_obj__ = 0;
                    it_138=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 190))->head;
                    __freed_obj__ = 0;
                    while(_while_condtional21=it_138!=((void*)0),                    __freed_obj__ = 0, 
                    _while_condtional21) {
                        list$1sNodeph_add(((struct list$1sNodeph*)come_null_check(result_137, "./comelang2.h", 192)),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value127=sNode_clone(((struct list_item$1sNodeph*)come_null_check(it_138, "./comelang2.h", 192))->item)))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value127);
                        if(right_value127 && right_value127 != __result_obj__ && !__freed_obj__) { right_value127 = come_decrement_ref_count(right_value127, ((struct sNode*)right_value127)->finalize, ((struct sNode*)right_value127)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[0] = right_value127;
                        __freed_obj__ = 0;
                        it_138=((struct list_item$1sNodeph*)come_null_check(it_138, "./comelang2.h", 194))->next;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __result98__ = __result_obj__ = result_137;
                    if(result_137 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,result_137, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result98__;
                    __freed_obj__ = 0;
                    if(result_137 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,result_137, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1sNodeph* __result94__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 150))->head=((void*)0);
                        __freed_obj__ = 0;
                        ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 151))->tail=((void*)0);
                        __freed_obj__ = 0;
                        ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 152))->len=0;
                        __freed_obj__ = 0;
                        __result94__ = __result_obj__ = self;
                        if(self && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result94__;
                        __freed_obj__ = 0;
                        if(self && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional162;
void* right_value123;
struct list_item$1sNodeph* litem_139;
struct sNode* __dec_obj32;
_Bool _if_conditional163;
void* right_value124;
struct list_item$1sNodeph* litem_140;
struct sNode* __dec_obj33;
void* right_value125;
struct list_item$1sNodeph* litem_141;
struct sNode* __dec_obj34;
struct list$1sNodeph* __result95__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value123, 0, sizeof(void*));
memset(&litem_139, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value124, 0, sizeof(void*));
memset(&litem_140, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value125, 0, sizeof(void*));
memset(&litem_141, 0, sizeof(struct list_item$1sNodeph*));
                            if(_if_conditional162=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 232))->len==0,                            __freed_obj__ = 0, 
                            _if_conditional162) {
                                litem_139=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value123=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 202))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value123);
                                if(right_value123 && right_value123 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value123, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value123;
                                __freed_obj__ = 0;
                                ((struct list_item$1sNodeph*)come_null_check(litem_139, "./comelang2.h", 204))->prev=((void*)0);
                                __freed_obj__ = 0;
                                ((struct list_item$1sNodeph*)come_null_check(litem_139, "./comelang2.h", 205))->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj32=((struct list_item$1sNodeph*)come_null_check(litem_139, "./comelang2.h", 206))->item;
                                ((struct list_item$1sNodeph*)come_null_check(litem_139, "./comelang2.h", 206))->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0,0,0); }
                                __freed_obj__ = 0;
                                ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 208))->tail=litem_139;
                                __freed_obj__ = 0;
                                ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 209))->head=litem_139;
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional163=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 232))->len==1,                                __freed_obj__ = 0, 
                                _if_conditional163) {
                                    litem_140=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value124=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 212))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value124);
                                    if(right_value124 && right_value124 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value124, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value124;
                                    __freed_obj__ = 0;
                                    ((struct list_item$1sNodeph*)come_null_check(litem_140, "./comelang2.h", 214))->prev=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 214))->head;
                                    __freed_obj__ = 0;
                                    ((struct list_item$1sNodeph*)come_null_check(litem_140, "./comelang2.h", 215))->next=((void*)0);
                                    __freed_obj__ = 0;
                                    __dec_obj33=((struct list_item$1sNodeph*)come_null_check(litem_140, "./comelang2.h", 216))->item;
                                    ((struct list_item$1sNodeph*)come_null_check(litem_140, "./comelang2.h", 216))->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count(__dec_obj33, ((struct sNode*)__dec_obj33)->finalize, ((struct sNode*)__dec_obj33)->_protocol_obj, 0,0,0); }
                                    __freed_obj__ = 0;
                                    ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 218))->tail=litem_140;
                                    __freed_obj__ = 0;
                                    ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 219))->head, "./comelang2.h", 219))->next=litem_140;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    litem_141=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value125=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 222))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value125);
                                    if(right_value125 && right_value125 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value125, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value125;
                                    __freed_obj__ = 0;
                                    ((struct list_item$1sNodeph*)come_null_check(litem_141, "./comelang2.h", 224))->prev=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 224))->tail;
                                    __freed_obj__ = 0;
                                    ((struct list_item$1sNodeph*)come_null_check(litem_141, "./comelang2.h", 225))->next=((void*)0);
                                    __freed_obj__ = 0;
                                    __dec_obj34=((struct list_item$1sNodeph*)come_null_check(litem_141, "./comelang2.h", 226))->item;
                                    ((struct list_item$1sNodeph*)come_null_check(litem_141, "./comelang2.h", 226))->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj34) { __dec_obj34 = come_decrement_ref_count(__dec_obj34, ((struct sNode*)__dec_obj34)->finalize, ((struct sNode*)__dec_obj34)->_protocol_obj, 0,0,0); }
                                    __freed_obj__ = 0;
                                    ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 228))->tail, "./comelang2.h", 228))->next=litem_141;
                                    __freed_obj__ = 0;
                                    ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 229))->tail=litem_141;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 232))->len++;
                            __freed_obj__ = 0;
                            __result95__ = __result_obj__ = self;
                            if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
                            __freed_obj__ = 0;
                            return __result95__;
                            __freed_obj__ = 0;
                            if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional164;
struct sNode* __result96__;
void* right_value126;
struct sNode* result_142;
_Bool _if_conditional165;
_Bool _if_conditional166;
_Bool _if_conditional167;
_Bool _if_conditional168;
_Bool _if_conditional169;
_Bool _if_conditional170;
_Bool _if_conditional171;
_Bool _if_conditional172;
struct sNode* __result97__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value126, 0, sizeof(void*));
memset(&result_142, 0, sizeof(struct sNode*));
                            if(_if_conditional164=self==(void*)0,                            __freed_obj__ = 0, 
                            _if_conditional164) {
                                __result96__ = __result_obj__ = (void*)0;
                                __freed_obj__ = 0;
                                return __result96__;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            result_142=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value126=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value126);
                            if(right_value126 && right_value126 != __result_obj__ && !__freed_obj__) { right_value126 = come_decrement_ref_count(right_value126, ((struct sNode*)right_value126)->finalize, ((struct sNode*)right_value126)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[0] = right_value126;
                            __freed_obj__ = 0;
                            if(_if_conditional165=self!=((void*)0)&&((struct sNode*)come_null_check(self, "sNode_clone", 5))->clone!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional165) {
                                ((struct sNode*)come_null_check(result_142, "sNode_clone", 4))->_protocol_obj=((struct sNode*)come_null_check(self, "sNode_clone", 4))->clone(((struct sNode*)come_null_check(self, "sNode_clone", 4))->_protocol_obj);
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional166=self!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional166) {
                                ((struct sNode*)come_null_check(result_142, "sNode_clone", 5))->finalize=((struct sNode*)come_null_check(self, "sNode_clone", 5))->finalize;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional167=self!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional167) {
                                ((struct sNode*)come_null_check(result_142, "sNode_clone", 6))->clone=((struct sNode*)come_null_check(self, "sNode_clone", 6))->clone;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional168=self!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional168) {
                                ((struct sNode*)come_null_check(result_142, "sNode_clone", 7))->compile=((struct sNode*)come_null_check(self, "sNode_clone", 7))->compile;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional169=self!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional169) {
                                ((struct sNode*)come_null_check(result_142, "sNode_clone", 8))->sline=((struct sNode*)come_null_check(self, "sNode_clone", 8))->sline;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional170=self!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional170) {
                                ((struct sNode*)come_null_check(result_142, "sNode_clone", 9))->sname=((struct sNode*)come_null_check(self, "sNode_clone", 9))->sname;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional171=self!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional171) {
                                ((struct sNode*)come_null_check(result_142, "sNode_clone", 10))->terminated=((struct sNode*)come_null_check(self, "sNode_clone", 10))->terminated;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional172=self!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional172) {
                                ((struct sNode*)come_null_check(result_142, "sNode_clone", 11))->kind=((struct sNode*)come_null_check(self, "sNode_clone", 11))->kind;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            __result97__ = __result_obj__ = result_142;
                            if(result_142 && !__freed_obj__) { result_142 = come_decrement_ref_count(result_142, ((struct sNode*)result_142)->finalize, ((struct sNode*)result_142)->_protocol_obj, 0, 1, 0); } 
                            __freed_obj__ = 0;
                            return __result97__;
                            __freed_obj__ = 0;
                            if(result_142 && !__freed_obj__) { result_142 = come_decrement_ref_count(result_142, ((struct sNode*)result_142)->finalize, ((struct sNode*)result_142)->_protocol_obj, 0, 0, 0); } 
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct list$1charph* list$1charph_clone(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional176;
struct list$1charph* __result99__;
void* right_value130;
void* right_value131;
struct list$1charph* result_143;
struct list_item$1charph* it_144;
_Bool _while_condtional22;
void* right_value135;
struct list$1charph* __result101__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value130, 0, sizeof(void*));
memset(&right_value131, 0, sizeof(void*));
memset(&result_143, 0, sizeof(struct list$1charph*));
memset(&it_144, 0, sizeof(struct list_item$1charph*));
memset(&right_value135, 0, sizeof(void*));
                    if(_if_conditional176=self==((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional176) {
                        __result99__ = __result_obj__ = ((void*)0);
                        __freed_obj__ = 0;
                        return __result99__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    result_143=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value131=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value130=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 188))), "./comelang2.h", 188)))))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value130);
                    if(right_value130 && right_value130 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value130, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value130;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value131);
                    if(right_value131 && right_value131 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value131, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value131;
                    __freed_obj__ = 0;
                    it_144=((struct list$1charph*)come_null_check(self, "./comelang2.h", 190))->head;
                    __freed_obj__ = 0;
                    while(_while_condtional22=it_144!=((void*)0),                    __freed_obj__ = 0, 
                    _while_condtional22) {
                        list$1charph_add(((struct list$1charph*)come_null_check(result_143, "./comelang2.h", 192)),(char*)come_increment_ref_count(((char*)(right_value135=string_clone(((struct list_item$1charph*)come_null_check(it_144, "./comelang2.h", 192))->item)))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value135);
                        if(right_value135 && right_value135 != __result_obj__ && !__freed_obj__) { right_value135 = come_decrement_ref_count(right_value135, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value135;
                        __freed_obj__ = 0;
                        it_144=((struct list_item$1charph*)come_null_check(it_144, "./comelang2.h", 194))->next;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __result101__ = __result_obj__ = result_143;
                    if(result_143 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_143, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result101__;
                    __freed_obj__ = 0;
                    if(result_143 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_143, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional177;
void* right_value132;
struct list_item$1charph* litem_145;
char* __dec_obj37;
_Bool _if_conditional178;
void* right_value133;
struct list_item$1charph* litem_146;
char* __dec_obj38;
void* right_value134;
struct list_item$1charph* litem_147;
char* __dec_obj39;
struct list$1charph* __result100__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value132, 0, sizeof(void*));
memset(&litem_145, 0, sizeof(struct list_item$1charph*));
memset(&right_value133, 0, sizeof(void*));
memset(&litem_146, 0, sizeof(struct list_item$1charph*));
memset(&right_value134, 0, sizeof(void*));
memset(&litem_147, 0, sizeof(struct list_item$1charph*));
                            if(_if_conditional177=((struct list$1charph*)come_null_check(self, "./comelang2.h", 232))->len==0,                            __freed_obj__ = 0, 
                            _if_conditional177) {
                                litem_145=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value132=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 202))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value132);
                                if(right_value132 && right_value132 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value132, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value132;
                                __freed_obj__ = 0;
                                ((struct list_item$1charph*)come_null_check(litem_145, "./comelang2.h", 204))->prev=((void*)0);
                                __freed_obj__ = 0;
                                ((struct list_item$1charph*)come_null_check(litem_145, "./comelang2.h", 205))->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj37=((struct list_item$1charph*)come_null_check(litem_145, "./comelang2.h", 206))->item;
                                ((struct list_item$1charph*)come_null_check(litem_145, "./comelang2.h", 206))->item=(char*)come_increment_ref_count(item);
                                if(__dec_obj37) { __dec_obj37 = come_decrement_ref_count(__dec_obj37, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = 0;
                                ((struct list$1charph*)come_null_check(self, "./comelang2.h", 208))->tail=litem_145;
                                __freed_obj__ = 0;
                                ((struct list$1charph*)come_null_check(self, "./comelang2.h", 209))->head=litem_145;
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional178=((struct list$1charph*)come_null_check(self, "./comelang2.h", 232))->len==1,                                __freed_obj__ = 0, 
                                _if_conditional178) {
                                    litem_146=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value133=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 212))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value133);
                                    if(right_value133 && right_value133 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value133, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value133;
                                    __freed_obj__ = 0;
                                    ((struct list_item$1charph*)come_null_check(litem_146, "./comelang2.h", 214))->prev=((struct list$1charph*)come_null_check(self, "./comelang2.h", 214))->head;
                                    __freed_obj__ = 0;
                                    ((struct list_item$1charph*)come_null_check(litem_146, "./comelang2.h", 215))->next=((void*)0);
                                    __freed_obj__ = 0;
                                    __dec_obj38=((struct list_item$1charph*)come_null_check(litem_146, "./comelang2.h", 216))->item;
                                    ((struct list_item$1charph*)come_null_check(litem_146, "./comelang2.h", 216))->item=(char*)come_increment_ref_count(item);
                                    if(__dec_obj38) { __dec_obj38 = come_decrement_ref_count(__dec_obj38, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = 0;
                                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 218))->tail=litem_146;
                                    __freed_obj__ = 0;
                                    ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 219))->head, "./comelang2.h", 219))->next=litem_146;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    litem_147=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value134=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 222))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value134);
                                    if(right_value134 && right_value134 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value134, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value134;
                                    __freed_obj__ = 0;
                                    ((struct list_item$1charph*)come_null_check(litem_147, "./comelang2.h", 224))->prev=((struct list$1charph*)come_null_check(self, "./comelang2.h", 224))->tail;
                                    __freed_obj__ = 0;
                                    ((struct list_item$1charph*)come_null_check(litem_147, "./comelang2.h", 225))->next=((void*)0);
                                    __freed_obj__ = 0;
                                    __dec_obj39=((struct list_item$1charph*)come_null_check(litem_147, "./comelang2.h", 226))->item;
                                    ((struct list_item$1charph*)come_null_check(litem_147, "./comelang2.h", 226))->item=(char*)come_increment_ref_count(item);
                                    if(__dec_obj39) { __dec_obj39 = come_decrement_ref_count(__dec_obj39, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = 0;
                                    ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 228))->tail, "./comelang2.h", 228))->next=litem_147;
                                    __freed_obj__ = 0;
                                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 229))->tail=litem_147;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            ((struct list$1charph*)come_null_check(self, "./comelang2.h", 232))->len++;
                            __freed_obj__ = 0;
                            __result100__ = __result_obj__ = self;
                            if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
                            __freed_obj__ = 0;
                            return __result100__;
                            __freed_obj__ = 0;
                            if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
}

static void list$1charph_finalize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional180;
struct tuple1$1sTypeph* __result102__;
void* right_value137;
struct tuple1$1sTypeph* result_148;
_Bool _if_conditional181;
void* right_value138;
struct sType* __dec_obj41;
struct tuple1$1sTypeph* __result103__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value137, 0, sizeof(void*));
memset(&result_148, 0, sizeof(struct tuple1$1sTypeph*));
memset(&right_value138, 0, sizeof(void*));
                    if(_if_conditional180=self==(void*)0,                    __freed_obj__ = 0, 
                    _if_conditional180) {
                        __result102__ = __result_obj__ = (void*)0;
                        __freed_obj__ = 0;
                        return __result102__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    result_148=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value137=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value137);
                    if(right_value137 && right_value137 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,right_value137, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value137;
                    __freed_obj__ = 0;
                    if(_if_conditional181=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_clone", 5))->v1!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional181) {
                        __dec_obj41=((struct tuple1$1sTypeph*)come_null_check(result_148, "tuple1$1sTypephp_clone", 4))->v1;
                        ((struct tuple1$1sTypeph*)come_null_check(result_148, "tuple1$1sTypephp_clone", 4))->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value138=sType_clone(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_clone", 4))->v1))));
                        if(__dec_obj41) { come_call_finalizer(sType_finalize,__dec_obj41, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value138);
                        if(right_value138 && right_value138 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value138, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value138;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __result103__ = __result_obj__ = result_148;
                    if(result_148 && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,result_148, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result103__;
                    __freed_obj__ = 0;
                    if(result_148 && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,result_148, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sClass* sClass_initialize(struct sClass* self, char* name, _Bool number, _Bool union_, _Bool generics, _Bool method_generics, _Bool protocol_, _Bool struct_, _Bool float_, int generics_num, int method_generics_num, _Bool enum_, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value157;
char* __dec_obj57;
void* right_value158;
void* right_value159;
struct list$1tuple2$2charphsTypephph* __dec_obj58;
void* right_value160;
char* __dec_obj59;
struct sClass* __result108__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value157, 0, sizeof(void*));
memset(&right_value158, 0, sizeof(void*));
memset(&right_value159, 0, sizeof(void*));
memset(&right_value160, 0, sizeof(void*));
    ((struct sClass*)come_null_check(self, "02transpile.c", 327))->mNumber=number;
    __freed_obj__ = 0;
    ((struct sClass*)come_null_check(self, "02transpile.c", 328))->mStruct=struct_;
    __freed_obj__ = 0;
    ((struct sClass*)come_null_check(self, "02transpile.c", 329))->mUnion=union_;
    __freed_obj__ = 0;
    ((struct sClass*)come_null_check(self, "02transpile.c", 330))->mGenerics=generics;
    __freed_obj__ = 0;
    ((struct sClass*)come_null_check(self, "02transpile.c", 331))->mMethodGenerics=method_generics;
    __freed_obj__ = 0;
    ((struct sClass*)come_null_check(self, "02transpile.c", 332))->mEnum=(_Bool)0;
    __freed_obj__ = 0;
    ((struct sClass*)come_null_check(self, "02transpile.c", 333))->mProtocol=protocol_;
    __freed_obj__ = 0;
    ((struct sClass*)come_null_check(self, "02transpile.c", 334))->mFloat=float_;
    __freed_obj__ = 0;
    ((struct sClass*)come_null_check(self, "02transpile.c", 335))->mEnum=enum_;
    __freed_obj__ = 0;
    __dec_obj57=((struct sClass*)come_null_check(self, "02transpile.c", 337))->mName;
    ((struct sClass*)come_null_check(self, "02transpile.c", 337))->mName=(char*)come_increment_ref_count(((char*)(right_value157=__builtin_string(name))));
    if(__dec_obj57) { __dec_obj57 = come_decrement_ref_count(__dec_obj57, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value157);
    if(right_value157 && right_value157 != __result_obj__ && !__freed_obj__) { right_value157 = come_decrement_ref_count(right_value157, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value157;
    __freed_obj__ = 0;
    ((struct sClass*)come_null_check(self, "02transpile.c", 339))->mGenericsNum=generics_num;
    __freed_obj__ = 0;
    ((struct sClass*)come_null_check(self, "02transpile.c", 340))->mMethodGenericsNum=method_generics_num;
    __freed_obj__ = 0;
    __dec_obj58=((struct sClass*)come_null_check(self, "02transpile.c", 342))->mFields;
    ((struct sClass*)come_null_check(self, "02transpile.c", 342))->mFields=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value159=list$1tuple2$2charphsTypephph_initialize((struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value158=(struct list$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsTypephph)*(1), "02transpile.c", 342))))))));
    if(__dec_obj58) { come_call_finalizer(list$1tuple2$2charphsTypephph_finalize,__dec_obj58, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value158);
    if(right_value158 && right_value158 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,right_value158, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value158;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value159);
    if(right_value159 && right_value159 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,right_value159, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value159;
    __freed_obj__ = 0;
    __dec_obj59=((struct sClass*)come_null_check(self, "02transpile.c", 344))->mDeclareSName;
    ((struct sClass*)come_null_check(self, "02transpile.c", 344))->mDeclareSName=(char*)come_increment_ref_count(((char*)(right_value160=__builtin_string(((struct sInfo*)come_null_check(info, "02transpile.c", 344))->sname))));
    if(__dec_obj59) { __dec_obj59 = come_decrement_ref_count(__dec_obj59, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value160);
    if(right_value160 && right_value160 != __result_obj__ && !__freed_obj__) { right_value160 = come_decrement_ref_count(right_value160, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value160;
    __freed_obj__ = 0;
    __result108__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sClass_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result108__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sClass_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_initialize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1tuple2$2charphsTypephph* __result107__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 150))->head=((void*)0);
        __freed_obj__ = 0;
        ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 151))->tail=((void*)0);
        __freed_obj__ = 0;
        ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 152))->len=0;
        __freed_obj__ = 0;
        __result107__ = __result_obj__ = self;
        if(self && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result107__;
        __freed_obj__ = 0;
        if(self && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

struct sFun* sFun_initialize(struct sFun* self, char* name, struct sType* result_type, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct list$1charph* param_default_parametors, _Bool external, _Bool var_args, struct sBlock* block, _Bool static_, char* come_header, char* declare_sname, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* __dec_obj60;
struct sType* __dec_obj61;
struct list$1sTypeph* __dec_obj62;
struct list$1charph* __dec_obj63;
struct list$1charph* __dec_obj64;
void* right_value161;
void* right_value162;
struct sType* __dec_obj65;
struct list$1sTypeph* o2_saved_149;
struct sType* it_152;
_Bool _for_condtionalA8;
void* right_value166;
struct list$1charph* o2_saved_158;
char* it_159;
_Bool _for_condtionalA9;
void* right_value167;
void* right_value168;
void* right_value169;
struct tuple1$1sTypeph* __dec_obj69;
void* right_value170;
void* right_value171;
struct buffer* __dec_obj70;
void* right_value172;
void* right_value173;
struct buffer* __dec_obj71;
void* right_value174;
void* right_value175;
struct buffer* __dec_obj72;
void* right_value176;
void* right_value177;
struct buffer* __dec_obj73;
void* right_value203;
struct sBlock* __dec_obj81;
char* __dec_obj82;
void* right_value204;
char* __dec_obj83;
struct sFun* __result139__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value161, 0, sizeof(void*));
memset(&right_value162, 0, sizeof(void*));
memset(&o2_saved_149, 0, sizeof(struct list$1sTypeph*));
memset(&it_152, 0, sizeof(struct sType*));
memset(&right_value166, 0, sizeof(void*));
memset(&o2_saved_158, 0, sizeof(struct list$1charph*));
memset(&it_159, 0, sizeof(char*));
memset(&right_value167, 0, sizeof(void*));
memset(&right_value168, 0, sizeof(void*));
memset(&right_value169, 0, sizeof(void*));
memset(&right_value170, 0, sizeof(void*));
memset(&right_value171, 0, sizeof(void*));
memset(&right_value172, 0, sizeof(void*));
memset(&right_value173, 0, sizeof(void*));
memset(&right_value174, 0, sizeof(void*));
memset(&right_value175, 0, sizeof(void*));
memset(&right_value176, 0, sizeof(void*));
memset(&right_value177, 0, sizeof(void*));
memset(&right_value203, 0, sizeof(void*));
memset(&right_value204, 0, sizeof(void*));
    __dec_obj60=((struct sFun*)come_null_check(self, "02transpile.c", 351))->mName;
    ((struct sFun*)come_null_check(self, "02transpile.c", 351))->mName=(char*)come_increment_ref_count(name);
    if(__dec_obj60) { __dec_obj60 = come_decrement_ref_count(__dec_obj60, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = 0;
    __dec_obj61=((struct sFun*)come_null_check(self, "02transpile.c", 352))->mResultType;
    ((struct sFun*)come_null_check(self, "02transpile.c", 352))->mResultType=(struct sType*)come_increment_ref_count(result_type);
    if(__dec_obj61) { come_call_finalizer(sType_finalize,__dec_obj61, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj62=((struct sFun*)come_null_check(self, "02transpile.c", 353))->mParamTypes;
    ((struct sFun*)come_null_check(self, "02transpile.c", 353))->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(param_types);
    if(__dec_obj62) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj62, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj63=((struct sFun*)come_null_check(self, "02transpile.c", 354))->mParamNames;
    ((struct sFun*)come_null_check(self, "02transpile.c", 354))->mParamNames=(struct list$1charph*)come_increment_ref_count(param_names);
    if(__dec_obj63) { come_call_finalizer(list$1charph_finalize,__dec_obj63, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj64=((struct sFun*)come_null_check(self, "02transpile.c", 355))->mParamDefaultParametors;
    ((struct sFun*)come_null_check(self, "02transpile.c", 355))->mParamDefaultParametors=(struct list$1charph*)come_increment_ref_count(param_default_parametors);
    if(__dec_obj64) { come_call_finalizer(list$1charph_finalize,__dec_obj64, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    ((struct sFun*)come_null_check(self, "02transpile.c", 356))->mExternal=external;
    __freed_obj__ = 0;
    ((struct sFun*)come_null_check(self, "02transpile.c", 357))->mVarArgs=var_args;
    __freed_obj__ = 0;
    ((struct sFun*)come_null_check(self, "02transpile.c", 358))->mStatic=static_;
    __freed_obj__ = 0;
    __dec_obj65=((struct sFun*)come_null_check(self, "02transpile.c", 360))->mLambdaType;
    ((struct sFun*)come_null_check(self, "02transpile.c", 360))->mLambdaType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value162=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value161=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 360)))),"lambda",(_Bool)0,info))));
    if(__dec_obj65) { come_call_finalizer(sType_finalize,__dec_obj65, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value161);
    if(right_value161 && right_value161 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value161, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value161;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value162);
    if(right_value162 && right_value162 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value162, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value162;
    __freed_obj__ = 0;
    for(
    o2_saved_149=(struct list$1sTypeph*)come_increment_ref_count((param_types)),it_152=list$1sTypeph_begin(((struct list$1sTypeph*)come_null_check((o2_saved_149), "02transpile.c", 366))) ,    __freed_obj__ = 0, 
    0;    _for_condtionalA8=    !list$1sTypeph_end(((struct list$1sTypeph*)come_null_check((o2_saved_149), "02transpile.c", 366))) ,    __freed_obj__ = 0, 
    _for_condtionalA8;    it_152=list$1sTypeph_next(((struct list$1sTypeph*)come_null_check((o2_saved_149), "02transpile.c", 366))) ,    __freed_obj__ = 0, 
    0    ){
        list$1sTypeph_push_back(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sFun*)come_null_check(self, "02transpile.c", 363))->mLambdaType, "02transpile.c", 363))->mParamTypes, "02transpile.c", 363)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value166=sType_clone(it_152)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value166);
        if(right_value166 && right_value166 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value166, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value166;
        __freed_obj__ = 0;
    }
    if(o2_saved_149 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_149, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    for(
    o2_saved_158=(struct list$1charph*)come_increment_ref_count((param_names)),it_159=list$1charph_begin(((struct list$1charph*)come_null_check((o2_saved_158), "02transpile.c", 370))) ,    __freed_obj__ = 0, 
    0;    _for_condtionalA9=    !list$1charph_end(((struct list$1charph*)come_null_check((o2_saved_158), "02transpile.c", 370))) ,    __freed_obj__ = 0, 
    _for_condtionalA9;    it_159=list$1charph_next(((struct list$1charph*)come_null_check((o2_saved_158), "02transpile.c", 370))) ,    __freed_obj__ = 0, 
    0    ){
        list$1charph_push_back(((struct list$1charph*)come_null_check(((struct sType*)come_null_check(((struct sFun*)come_null_check(self, "02transpile.c", 367))->mLambdaType, "02transpile.c", 367))->mParamNames, "02transpile.c", 367)),(char*)come_increment_ref_count(((char*)(right_value167=string_clone(it_159)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value167);
        if(right_value167 && right_value167 != __result_obj__ && !__freed_obj__) { right_value167 = come_decrement_ref_count(right_value167, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value167;
        __freed_obj__ = 0;
    }
    if(o2_saved_158 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,o2_saved_158, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj69=((struct sType*)come_null_check(((struct sFun*)come_null_check(self, "02transpile.c", 370))->mLambdaType, "02transpile.c", 370))->mResultType;
    ((struct sType*)come_null_check(((struct sFun*)come_null_check(self, "02transpile.c", 370))->mLambdaType, "02transpile.c", 370))->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value169=tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value168=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "02transpile.c", 370)))),(struct sType*)come_increment_ref_count(result_type)))));
    if(__dec_obj69) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj69, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value168);
    if(right_value168 && right_value168 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value168, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value168;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value169);
    if(right_value169 && right_value169 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value169, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value169;
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(((struct sFun*)come_null_check(self, "02transpile.c", 371))->mLambdaType, "02transpile.c", 371))->mVarArgs=var_args;
    __freed_obj__ = 0;
    __dec_obj70=((struct sFun*)come_null_check(self, "02transpile.c", 373))->mSource;
    ((struct sFun*)come_null_check(self, "02transpile.c", 373))->mSource=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value171=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value170=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 373))))))));
    if(__dec_obj70) { come_call_finalizer(buffer_finalize,__dec_obj70, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value170);
    if(right_value170 && right_value170 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value170, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value170;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value171);
    if(right_value171 && right_value171 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value171, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[5] = right_value171;
    __freed_obj__ = 0;
    __dec_obj71=((struct sFun*)come_null_check(self, "02transpile.c", 374))->mSourceHead;
    ((struct sFun*)come_null_check(self, "02transpile.c", 374))->mSourceHead=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value173=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value172=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 374))))))));
    if(__dec_obj71) { come_call_finalizer(buffer_finalize,__dec_obj71, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value172);
    if(right_value172 && right_value172 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value172, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[6] = right_value172;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value173);
    if(right_value173 && right_value173 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value173, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[7] = right_value173;
    __freed_obj__ = 0;
    __dec_obj72=((struct sFun*)come_null_check(self, "02transpile.c", 375))->mSourceHead2;
    ((struct sFun*)come_null_check(self, "02transpile.c", 375))->mSourceHead2=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value175=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value174=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 375))))))));
    if(__dec_obj72) { come_call_finalizer(buffer_finalize,__dec_obj72, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value174);
    if(right_value174 && right_value174 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value174, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[8] = right_value174;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 9, right_value175);
    if(right_value175 && right_value175 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value175, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[9] = right_value175;
    __freed_obj__ = 0;
    __dec_obj73=((struct sFun*)come_null_check(self, "02transpile.c", 376))->mSourceDefer;
    ((struct sFun*)come_null_check(self, "02transpile.c", 376))->mSourceDefer=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value177=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value176=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 376))))))));
    if(__dec_obj73) { come_call_finalizer(buffer_finalize,__dec_obj73, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 10, right_value176);
    if(right_value176 && right_value176 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value176, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[10] = right_value176;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 11, right_value177);
    if(right_value177 && right_value177 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value177, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[11] = right_value177;
    __freed_obj__ = 0;
    __dec_obj81=((struct sFun*)come_null_check(self, "02transpile.c", 378))->mBlock;
    ((struct sFun*)come_null_check(self, "02transpile.c", 378))->mBlock=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value203=sBlock_clone(block))));
    if(__dec_obj81) { come_call_finalizer(sBlock_finalize,__dec_obj81, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 12, right_value203);
    if(right_value203 && right_value203 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sBlock_finalize,right_value203, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[12] = right_value203;
    __freed_obj__ = 0;
    __dec_obj82=((struct sFun*)come_null_check(self, "02transpile.c", 380))->mComeHeader;
    ((struct sFun*)come_null_check(self, "02transpile.c", 380))->mComeHeader=(char*)come_increment_ref_count(come_header);
    if(__dec_obj82) { __dec_obj82 = come_decrement_ref_count(__dec_obj82, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = 0;
    __dec_obj83=((struct sFun*)come_null_check(self, "02transpile.c", 382))->mDeclareSName;
    ((struct sFun*)come_null_check(self, "02transpile.c", 382))->mDeclareSName=(char*)come_increment_ref_count(((char*)(right_value204=__builtin_string(declare_sname))));
    if(__dec_obj83) { __dec_obj83 = come_decrement_ref_count(__dec_obj83, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 13, right_value204);
    if(right_value204 && right_value204 != __result_obj__ && !__freed_obj__) { right_value204 = come_decrement_ref_count(right_value204, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[13] = right_value204;
    __freed_obj__ = 0;
    __result139__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sFun_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
    if(result_type && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(param_types && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,param_types, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(param_names && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_names, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(param_default_parametors && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_default_parametors, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(block && !__freed_obj__) { come_call_finalizer(sBlock_finalize,block, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(come_header && !__freed_obj__) { come_header = come_decrement_ref_count(come_header, (void*)0, (void*)0, 0, 1, 0); }
    if(declare_sname && !__freed_obj__) { declare_sname = come_decrement_ref_count(declare_sname, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result139__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sFun_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
    if(result_type && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(param_types && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,param_types, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(param_names && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_names, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(param_default_parametors && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_default_parametors, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(block && !__freed_obj__) { come_call_finalizer(sBlock_finalize,block, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(come_header && !__freed_obj__) { come_header = come_decrement_ref_count(come_header, (void*)0, (void*)0, 0, 1, 0); }
    if(declare_sname && !__freed_obj__) { declare_sname = come_decrement_ref_count(declare_sname, (void*)0, (void*)0, 0, 1, 0); }
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional220;
struct sType* result_150;
struct sType* __result109__;
_Bool _if_conditional221;
struct sType* __result110__;
struct sType* result_151;
struct sType* __result111__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_150, 0, sizeof(struct sType*));
memset(&result_151, 0, sizeof(struct sType*));
        if(_if_conditional220=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional220) {
            __freed_obj__ = 0;
            memset(&result_150,0,sizeof(struct sType*));
            __freed_obj__ = 0;
            __result109__ = __result_obj__ = result_150;
            __freed_obj__ = 0;
            return __result109__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 336))->it=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 336))->head;
        __freed_obj__ = 0;
        if(_if_conditional221=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 342))->it,        __freed_obj__ = 0, 
        _if_conditional221) {
            __result110__ = __result_obj__ = ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 339))->it, "./comelang2.h", 339))->item;
            __freed_obj__ = 0;
            return __result110__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        memset(&result_151,0,sizeof(struct sType*));
        __freed_obj__ = 0;
        __result111__ = __result_obj__ = result_151;
        __freed_obj__ = 0;
        return __result111__;
        __freed_obj__ = 0;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result112__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __result112__ = self==((void*)0)||((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 366))->it==((void*)0);
        __freed_obj__ = 0;
        return __result112__;
        __freed_obj__ = 0;
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional222;
struct sType* result_153;
struct sType* __result113__;
_Bool _if_conditional223;
struct sType* __result114__;
struct sType* result_154;
struct sType* __result115__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_153, 0, sizeof(struct sType*));
memset(&result_154, 0, sizeof(struct sType*));
        if(_if_conditional222=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional222) {
            __freed_obj__ = 0;
            memset(&result_153,0,sizeof(struct sType*));
            __freed_obj__ = 0;
            __result113__ = __result_obj__ = result_153;
            __freed_obj__ = 0;
            return __result113__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 354))->it=((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 354))->it, "./comelang2.h", 354))->next;
        __freed_obj__ = 0;
        if(_if_conditional223=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 360))->it,        __freed_obj__ = 0, 
        _if_conditional223) {
            __result114__ = __result_obj__ = ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 357))->it, "./comelang2.h", 357))->item;
            __freed_obj__ = 0;
            return __result114__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        memset(&result_154,0,sizeof(struct sType*));
        __freed_obj__ = 0;
        __result115__ = __result_obj__ = result_154;
        __freed_obj__ = 0;
        return __result115__;
        __freed_obj__ = 0;
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional224;
void* right_value163;
struct list_item$1sTypeph* litem_155;
struct sType* __dec_obj66;
_Bool _if_conditional225;
void* right_value164;
struct list_item$1sTypeph* litem_156;
struct sType* __dec_obj67;
void* right_value165;
struct list_item$1sTypeph* litem_157;
struct sType* __dec_obj68;
struct list$1sTypeph* __result116__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value163, 0, sizeof(void*));
memset(&litem_155, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value164, 0, sizeof(void*));
memset(&litem_156, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value165, 0, sizeof(void*));
memset(&litem_157, 0, sizeof(struct list_item$1sTypeph*));
            if(_if_conditional224=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 302))->len==0,            __freed_obj__ = 0, 
            _if_conditional224) {
                litem_155=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value163=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 272))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value163);
                if(right_value163 && right_value163 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value163, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value163;
                __freed_obj__ = 0;
                ((struct list_item$1sTypeph*)come_null_check(litem_155, "./comelang2.h", 274))->prev=((void*)0);
                __freed_obj__ = 0;
                ((struct list_item$1sTypeph*)come_null_check(litem_155, "./comelang2.h", 275))->next=((void*)0);
                __freed_obj__ = 0;
                __dec_obj66=((struct list_item$1sTypeph*)come_null_check(litem_155, "./comelang2.h", 276))->item;
                ((struct list_item$1sTypeph*)come_null_check(litem_155, "./comelang2.h", 276))->item=(struct sType*)come_increment_ref_count(item);
                if(__dec_obj66) { come_call_finalizer(sType_finalize,__dec_obj66, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 278))->tail=litem_155;
                __freed_obj__ = 0;
                ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 279))->head=litem_155;
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional225=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 302))->len==1,                __freed_obj__ = 0, 
                _if_conditional225) {
                    litem_156=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value164=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 282))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value164);
                    if(right_value164 && right_value164 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value164, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value164;
                    __freed_obj__ = 0;
                    ((struct list_item$1sTypeph*)come_null_check(litem_156, "./comelang2.h", 284))->prev=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 284))->head;
                    __freed_obj__ = 0;
                    ((struct list_item$1sTypeph*)come_null_check(litem_156, "./comelang2.h", 285))->next=((void*)0);
                    __freed_obj__ = 0;
                    __dec_obj67=((struct list_item$1sTypeph*)come_null_check(litem_156, "./comelang2.h", 286))->item;
                    ((struct list_item$1sTypeph*)come_null_check(litem_156, "./comelang2.h", 286))->item=(struct sType*)come_increment_ref_count(item);
                    if(__dec_obj67) { come_call_finalizer(sType_finalize,__dec_obj67, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 288))->tail=litem_156;
                    __freed_obj__ = 0;
                    ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 289))->head, "./comelang2.h", 289))->next=litem_156;
                    __freed_obj__ = 0;
                }
                else {
                    litem_157=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value165=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 292))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value165);
                    if(right_value165 && right_value165 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value165, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value165;
                    __freed_obj__ = 0;
                    ((struct list_item$1sTypeph*)come_null_check(litem_157, "./comelang2.h", 294))->prev=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 294))->tail;
                    __freed_obj__ = 0;
                    ((struct list_item$1sTypeph*)come_null_check(litem_157, "./comelang2.h", 295))->next=((void*)0);
                    __freed_obj__ = 0;
                    __dec_obj68=((struct list_item$1sTypeph*)come_null_check(litem_157, "./comelang2.h", 296))->item;
                    ((struct list_item$1sTypeph*)come_null_check(litem_157, "./comelang2.h", 296))->item=(struct sType*)come_increment_ref_count(item);
                    if(__dec_obj68) { come_call_finalizer(sType_finalize,__dec_obj68, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 298))->tail, "./comelang2.h", 298))->next=litem_157;
                    __freed_obj__ = 0;
                    ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 299))->tail=litem_157;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 302))->len++;
            __freed_obj__ = 0;
            __result116__ = __result_obj__ = self;
            if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result116__;
            __freed_obj__ = 0;
            if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct sBlock* sBlock_clone(struct sBlock* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional226;
struct sBlock* __result117__;
void* right_value178;
struct sBlock* result_160;
_Bool _if_conditional229;
void* right_value182;
struct list$1sNodeph* __dec_obj74;
_Bool _if_conditional231;
void* right_value202;
struct sVarTable* __dec_obj80;
struct sBlock* __result138__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value178, 0, sizeof(void*));
memset(&result_160, 0, sizeof(struct sBlock*));
memset(&right_value182, 0, sizeof(void*));
memset(&right_value202, 0, sizeof(void*));
        if(_if_conditional226=self==(void*)0,        __freed_obj__ = 0, 
        _if_conditional226) {
            __result117__ = __result_obj__ = (void*)0;
            __freed_obj__ = 0;
            return __result117__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        result_160=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value178=(struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value178);
        if(right_value178 && right_value178 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sBlock_finalize,right_value178, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value178;
        __freed_obj__ = 0;
        if(_if_conditional229=self!=((void*)0)&&((struct sBlock*)come_null_check(self, "sBlock_clone", 5))->mNodes!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional229) {
            __dec_obj74=((struct sBlock*)come_null_check(result_160, "sBlock_clone", 4))->mNodes;
            ((struct sBlock*)come_null_check(result_160, "sBlock_clone", 4))->mNodes=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value182=list$1sNodephp_clone(((struct sBlock*)come_null_check(self, "sBlock_clone", 4))->mNodes))));
            if(__dec_obj74) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj74, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value182);
            if(right_value182 && right_value182 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value182, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value182;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional231=self!=((void*)0)&&((struct sBlock*)come_null_check(self, "sBlock_clone", 6))->mVarTable!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional231) {
            __dec_obj80=((struct sBlock*)come_null_check(result_160, "sBlock_clone", 5))->mVarTable;
            ((struct sBlock*)come_null_check(result_160, "sBlock_clone", 5))->mVarTable=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value202=sVarTable_clone(((struct sBlock*)come_null_check(self, "sBlock_clone", 5))->mVarTable))));
            if(__dec_obj80) { come_call_finalizer(sVarTable_finalize,__dec_obj80, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value202);
            if(right_value202 && right_value202 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,right_value202, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value202;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __result138__ = __result_obj__ = result_160;
        if(result_160 && !__freed_obj__) { come_call_finalizer(sBlock_finalize,result_160, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result138__;
        __freed_obj__ = 0;
        if(result_160 && !__freed_obj__) { come_call_finalizer(sBlock_finalize,result_160, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional227;
_Bool _if_conditional228;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            if(_if_conditional227=self!=((void*)0)&&((struct sBlock*)come_null_check(self, "sBlock_finalize", 1))->mNodes!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional227) {
                if(((struct sBlock*)come_null_check(self, "sBlock_finalize", 0))->mNodes && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,((struct sBlock*)come_null_check(self, "sBlock_finalize", 0))->mNodes, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional228=self!=((void*)0)&&((struct sBlock*)come_null_check(self, "sBlock_finalize", 2))->mVarTable!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional228) {
                if(((struct sBlock*)come_null_check(self, "sBlock_finalize", 1))->mVarTable && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,((struct sBlock*)come_null_check(self, "sBlock_finalize", 1))->mVarTable, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional230;
struct list$1sNodeph* __result118__;
void* right_value179;
void* right_value180;
struct list$1sNodeph* result_161;
struct list_item$1sNodeph* it_162;
_Bool _while_condtional23;
void* right_value181;
struct list$1sNodeph* __result119__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value179, 0, sizeof(void*));
memset(&right_value180, 0, sizeof(void*));
memset(&result_161, 0, sizeof(struct list$1sNodeph*));
memset(&it_162, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value181, 0, sizeof(void*));
                if(_if_conditional230=self==((void*)0),                __freed_obj__ = 0, 
                _if_conditional230) {
                    __result118__ = __result_obj__ = ((void*)0);
                    __freed_obj__ = 0;
                    return __result118__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                result_161=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value180=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)(right_value179=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 188))), "./comelang2.h", 188)))))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value179);
                if(right_value179 && right_value179 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value179, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value179;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value180);
                if(right_value180 && right_value180 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value180, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value180;
                __freed_obj__ = 0;
                it_162=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 190))->head;
                __freed_obj__ = 0;
                while(_while_condtional23=it_162!=((void*)0),                __freed_obj__ = 0, 
                _while_condtional23) {
                    list$1sNodeph_add(((struct list$1sNodeph*)come_null_check(result_161, "./comelang2.h", 192)),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value181=sNode_clone(((struct list_item$1sNodeph*)come_null_check(it_162, "./comelang2.h", 192))->item)))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value181);
                    if(right_value181 && right_value181 != __result_obj__ && !__freed_obj__) { right_value181 = come_decrement_ref_count(right_value181, ((struct sNode*)right_value181)->finalize, ((struct sNode*)right_value181)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value181;
                    __freed_obj__ = 0;
                    it_162=((struct list_item$1sNodeph*)come_null_check(it_162, "./comelang2.h", 194))->next;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __result119__ = __result_obj__ = result_161;
                if(result_161 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,result_161, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result119__;
                __freed_obj__ = 0;
                if(result_161 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,result_161, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional232;
struct sVarTable* __result120__;
void* right_value183;
struct sVarTable* result_163;
_Bool _if_conditional233;
void* right_value201;
struct map$2charphsVarph* __dec_obj79;
_Bool _if_conditional267;
_Bool _if_conditional268;
_Bool _if_conditional269;
struct sVarTable* __result137__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value183, 0, sizeof(void*));
memset(&result_163, 0, sizeof(struct sVarTable*));
memset(&right_value201, 0, sizeof(void*));
                if(_if_conditional232=self==(void*)0,                __freed_obj__ = 0, 
                _if_conditional232) {
                    __result120__ = __result_obj__ = (void*)0;
                    __freed_obj__ = 0;
                    return __result120__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                result_163=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value183=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value183);
                if(right_value183 && right_value183 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,right_value183, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value183;
                __freed_obj__ = 0;
                if(_if_conditional233=self!=((void*)0)&&((struct sVarTable*)come_null_check(self, "sVarTable_clone", 5))->mVars!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional233) {
                    __dec_obj79=((struct sVarTable*)come_null_check(result_163, "sVarTable_clone", 4))->mVars;
                    ((struct sVarTable*)come_null_check(result_163, "sVarTable_clone", 4))->mVars=(struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value201=map$2charphsVarphp_clone(((struct sVarTable*)come_null_check(self, "sVarTable_clone", 4))->mVars))));
                    if(__dec_obj79) { come_call_finalizer(map$2charphsVarph_finalize,__dec_obj79, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value201);
                    if(right_value201 && right_value201 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsVarphp_finalize,right_value201, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value201;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional267=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional267) {
                    ((struct sVarTable*)come_null_check(result_163, "sVarTable_clone", 5))->mGlobal=((struct sVarTable*)come_null_check(self, "sVarTable_clone", 5))->mGlobal;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional268=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional268) {
                    ((struct sVarTable*)come_null_check(result_163, "sVarTable_clone", 6))->mParent=((struct sVarTable*)come_null_check(self, "sVarTable_clone", 6))->mParent;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional269=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional269) {
                    ((struct sVarTable*)come_null_check(result_163, "sVarTable_clone", 7))->mID=((struct sVarTable*)come_null_check(self, "sVarTable_clone", 7))->mID;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __result137__ = __result_obj__ = result_163;
                if(result_163 && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,result_163, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result137__;
                __freed_obj__ = 0;
                if(result_163 && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,result_163, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct map$2charphsVarph* map$2charphsVarphp_clone(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional234;
struct map$2charphsVarph* __result121__;
void* right_value184;
void* right_value185;
struct map$2charphsVarph* result_164;
char* it_167;
_Bool _for_condtionalA10;
struct sVar* default_value_170;
void* right_value187;
struct sVar* it2_173;
void* right_value200;
struct map$2charphsVarph* __result136__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value184, 0, sizeof(void*));
memset(&right_value185, 0, sizeof(void*));
memset(&result_164, 0, sizeof(struct map$2charphsVarph*));
memset(&it_167, 0, sizeof(char*));
memset(&default_value_170, 0, sizeof(struct sVar*));
memset(&right_value187, 0, sizeof(void*));
memset(&it2_173, 0, sizeof(struct sVar*));
memset(&right_value200, 0, sizeof(void*));
                        if(_if_conditional234=self==((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional234) {
                            __result121__ = __result_obj__ = ((void*)0);
                            __freed_obj__ = 0;
                            return __result121__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        result_164=(struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value185=map$2charphsVarph_initialize((struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value184=(struct map$2charphsVarph*)come_calloc(1, sizeof(struct map$2charphsVarph)*(1), "./comelang2.h", 1215))))))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value184);
                        if(right_value184 && right_value184 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsVarphp_finalize,right_value184, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value184;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value185);
                        if(right_value185 && right_value185 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsVarphp_finalize,right_value185, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value185;
                        __freed_obj__ = 0;
                        for(
                        it_167=map$2charphsVarph_begin(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1226))) ,                        __freed_obj__ = 0, 
                        0;                        _for_condtionalA10=                        !map$2charphsVarph_end(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1226))) ,                        __freed_obj__ = 0, 
                        _for_condtionalA10;                        it_167=map$2charphsVarph_next(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1226))) ,                        __freed_obj__ = 0, 
                        0                        ){
                            __freed_obj__ = 0;
                            memset(&default_value_170,0,sizeof(struct sVar*));
                            __freed_obj__ = 0;
                            it2_173=(struct sVar*)come_increment_ref_count(((struct sVar*)(right_value187=map$2charphsVarph_at(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1221)),it_167,default_value_170))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value187);
                            if(right_value187 && right_value187 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVar_finalize,right_value187, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value187;
                            __freed_obj__ = 0;
                            map$2charphsVarph_insert2(((struct map$2charphsVarph*)come_null_check(result_164, "./comelang2.h", 1223)),it_167,(struct sVar*)come_increment_ref_count(((struct sVar*)(right_value200=sVar_clone(it2_173)))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value200);
                            if(right_value200 && right_value200 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVar_finalize,right_value200, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value200;
                            __freed_obj__ = 0;
                            if(it2_173 && !__freed_obj__) { come_call_finalizer(sVar_finalize,it2_173, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
                        __freed_obj__ = 0;
                        __result136__ = __result_obj__ = result_164;
                        if(result_164 && !__freed_obj__) { come_call_finalizer(map$2charphsVarphp_finalize,result_164, (void*)0, (void*)0, 0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result136__;
                        __freed_obj__ = 0;
                        if(result_164 && !__freed_obj__) { come_call_finalizer(map$2charphsVarphp_finalize,result_164, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional235;
char* result_165;
char* __result122__;
_Bool _if_conditional236;
char* __result123__;
char* result_166;
char* __result124__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_165, 0, sizeof(char*));
memset(&result_166, 0, sizeof(char*));
                            if(_if_conditional235=self==((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional235) {
                                __freed_obj__ = 0;
                                memset(&result_165,0,sizeof(char*));
                                __freed_obj__ = 0;
                                __result122__ = __result_obj__ = result_165;
                                __freed_obj__ = 0;
                                return __result122__;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            ((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1336))->key_list, "./comelang2.h", 1336))->it=((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1336))->key_list, "./comelang2.h", 1336))->head;
                            __freed_obj__ = 0;
                            if(_if_conditional236=((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1342))->key_list, "./comelang2.h", 1342))->it,                            __freed_obj__ = 0, 
                            _if_conditional236) {
                                __result123__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1339))->key_list, "./comelang2.h", 1339))->it, "./comelang2.h", 1339))->item;
                                __freed_obj__ = 0;
                                return __result123__;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            __freed_obj__ = 0;
                            memset(&result_166,0,sizeof(char*));
                            __freed_obj__ = 0;
                            __result124__ = __result_obj__ = result_166;
                            __freed_obj__ = 0;
                            return __result124__;
                            __freed_obj__ = 0;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result125__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            __result125__ = self==((void*)0)||((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1365))->key_list==((void*)0)||((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1365))->key_list, "./comelang2.h", 1365))->it==((void*)0);
                            __freed_obj__ = 0;
                            return __result125__;
                            __freed_obj__ = 0;
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional237;
char* result_168;
char* __result126__;
_Bool _if_conditional238;
char* __result127__;
char* result_169;
char* __result128__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_168, 0, sizeof(char*));
memset(&result_169, 0, sizeof(char*));
                            if(_if_conditional237=self==((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional237) {
                                __freed_obj__ = 0;
                                memset(&result_168,0,sizeof(char*));
                                __freed_obj__ = 0;
                                __result126__ = __result_obj__ = result_168;
                                __freed_obj__ = 0;
                                return __result126__;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            ((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1353))->key_list, "./comelang2.h", 1353))->it=((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1353))->key_list, "./comelang2.h", 1353))->it, "./comelang2.h", 1353))->next;
                            __freed_obj__ = 0;
                            if(_if_conditional238=((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1359))->key_list, "./comelang2.h", 1359))->it,                            __freed_obj__ = 0, 
                            _if_conditional238) {
                                __result127__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1356))->key_list, "./comelang2.h", 1356))->it, "./comelang2.h", 1356))->item;
                                __freed_obj__ = 0;
                                return __result127__;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            __freed_obj__ = 0;
                            memset(&result_169,0,sizeof(char*));
                            __freed_obj__ = 0;
                            __result128__ = __result_obj__ = result_169;
                            __freed_obj__ = 0;
                            return __result128__;
                            __freed_obj__ = 0;
}

static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int hash_171;
unsigned int it_172;
_Bool _while_condtional24;
_Bool _if_conditional239;
void* right_value186;
struct optional$2boolbool* __exception_result_var_a5;
_Bool _if_conditional240;
struct sVar* __result129__;
_Bool _if_conditional241;
_Bool _if_conditional242;
struct sVar* __result130__;
struct sVar* __result131__;
struct sVar* __result132__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_171, 0, sizeof(unsigned int));
memset(&it_172, 0, sizeof(unsigned int));
memset(&right_value186, 0, sizeof(void*));
                                hash_171=string_get_hash_key(((char*)come_null_check(((char*)key), "./comelang2.h", 1258)))%((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1258))->size;
                                __freed_obj__ = 0;
                                it_172=hash_171;
                                __freed_obj__ = 0;
                                while(_while_condtional24=(_Bool)1,                                __freed_obj__ = 0, 
                                _while_condtional24) {
                                    if(_if_conditional239=((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1281))->item_existance[it_172],                                    __freed_obj__ = 0, 
                                    _if_conditional239) {
                                        if(_if_conditional240=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 1269),__exception_result_var_a5=((struct optional$2boolbool*)(right_value186=string_equals(((char*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1269))->keys[it_172], "./comelang2.h", 1269)),key))), come_pop_stackframe(), __exception_result_var_a5)),                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value186),
                                        (right_value186 && right_value186 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value186, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                        __right_value_freed_obj[0] = right_value186, 
                                        __freed_obj__ = 0, 
                                        _if_conditional240) {
                                            __result129__ = __result_obj__ = ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1266))->items[it_172];
                                            __freed_obj__ = 0;
                                            return __result129__;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        it_172++;
                                        __freed_obj__ = 0;
                                        if(_if_conditional241=it_172>=((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1277))->size,                                        __freed_obj__ = 0, 
                                        _if_conditional241) {
                                            it_172=0;
                                            __freed_obj__ = 0;
                                        }
                                        else {
                                            if(_if_conditional242=it_172==hash_171,                                            __freed_obj__ = 0, 
                                            _if_conditional242) {
                                                __result130__ = __result_obj__ = default_value;
                                                __freed_obj__ = 0;
                                                return __result130__;
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                    }
                                    else {
                                        __result131__ = __result_obj__ = default_value;
                                        __freed_obj__ = 0;
                                        return __result131__;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                __result132__ = __result_obj__ = default_value;
                                __freed_obj__ = 0;
                                return __result132__;
                                __freed_obj__ = 0;
}

static struct map$2charphsVarph* map$2charphsVarph_insert2(struct map$2charphsVarph* self, char* key, struct sVar* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional243;
unsigned int hash_185;
int it_186;
_Bool _while_condtional26;
_Bool _if_conditional247;
void* right_value193;
struct optional$2boolbool* __exception_result_var_a6;
_Bool _if_conditional248;
_Bool _if_conditional249;
_Bool _if_conditional250;
_Bool _if_conditional251;
_Bool _if_conditional252;
_Bool _if_conditional253;
_Bool _if_conditional254;
_Bool same_key_exist_187;
char* it2_188;
_Bool _for_condtionalA12;
void* right_value194;
struct optional$2boolbool* __exception_result_var_a7;
_Bool _if_conditional255;
_Bool _if_conditional256;
struct map$2charphsVarph* __result133__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_185, 0, sizeof(unsigned int));
memset(&it_186, 0, sizeof(int));
memset(&right_value193, 0, sizeof(void*));
memset(&same_key_exist_187, 0, sizeof(_Bool));
memset(&it2_188, 0, sizeof(char*));
memset(&right_value194, 0, sizeof(void*));
                                if(_if_conditional243=((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1500))->len*2>=((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1500))->size,                                __freed_obj__ = 0, 
                                _if_conditional243) {
                                    map$2charphsVarph_rehash(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1498)));
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                hash_185=string_get_hash_key(((char*)come_null_check(key, "./comelang2.h", 1500)))%((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1500))->size;
                                __freed_obj__ = 0;
                                it_186=hash_185;
                                __freed_obj__ = 0;
                                while(_while_condtional26=(_Bool)1,                                __freed_obj__ = 0, 
                                _while_condtional26) {
                                    if(_if_conditional247=((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1556))->item_existance[it_186],                                    __freed_obj__ = 0, 
                                    _if_conditional247) {
                                        if(_if_conditional248=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 1527),__exception_result_var_a6=((struct optional$2boolbool*)(right_value193=string_equals(((char*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1527))->keys[it_186], "./comelang2.h", 1527)),key))), come_pop_stackframe(), __exception_result_var_a6)),                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value193),
                                        (right_value193 && right_value193 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value193, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                        __right_value_freed_obj[0] = right_value193, 
                                        __freed_obj__ = 0, 
                                        _if_conditional248) {
                                            if(_if_conditional249=1,                                            __freed_obj__ = 0, 
                                            _if_conditional249) {
                                                if(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1509))->keys[it_186] && !__freed_obj__) { ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1509))->keys[it_186] = come_decrement_ref_count(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1509))->keys[it_186], (void*)0, (void*)0, 0, 0, 0); }
                                                __freed_obj__ = 0;
                                                list$1charp_remove(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1510))->key_list, "./comelang2.h", 1510)),((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1510))->keys[it_186]);
                                                __freed_obj__ = 0;
                                                ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1511))->keys[it_186]=(char*)come_increment_ref_count(key);
                                                __freed_obj__ = 0;
                                            }
                                            else {
                                                list$1charp_remove(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1514))->key_list, "./comelang2.h", 1514)),((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1514))->keys[it_186]);
                                                __freed_obj__ = 0;
                                                ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1515))->keys[it_186]=key;
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            if(_if_conditional250=1,                                            __freed_obj__ = 0, 
                                            _if_conditional250) {
                                                if(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1518))->items[it_186] && !__freed_obj__) { come_call_finalizer(sVar_finalize,((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1518))->items[it_186], (void*)0, (void*)0, 0, 0, 0, 0); }
                                                __freed_obj__ = 0;
                                                ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1519))->items[it_186]=(struct sVar*)come_increment_ref_count(item);
                                                __freed_obj__ = 0;
                                            }
                                            else {
                                                ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1522))->items[it_186]=item;
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            break;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        it_186++;
                                        __freed_obj__ = 0;
                                        if(_if_conditional251=it_186>=((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1536))->size,                                        __freed_obj__ = 0, 
                                        _if_conditional251) {
                                            it_186=0;
                                            __freed_obj__ = 0;
                                        }
                                        else {
                                            if(_if_conditional252=it_186==hash_185,                                            __freed_obj__ = 0, 
                                            _if_conditional252) {
                                                printf("unexpected error in map.insert\n");
                                                __freed_obj__ = 0;
                                                exit(2);
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                    }
                                    else {
                                        ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1538))->item_existance[it_186]=(_Bool)1;
                                        __freed_obj__ = 0;
                                        if(_if_conditional253=1,                                        __freed_obj__ = 0, 
                                        _if_conditional253) {
                                            ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1540))->keys[it_186]=(char*)come_increment_ref_count(key);
                                            __freed_obj__ = 0;
                                        }
                                        else {
                                            ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1543))->keys[it_186]=key;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional254=1,                                        __freed_obj__ = 0, 
                                        _if_conditional254) {
                                            ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1546))->items[it_186]=(struct sVar*)come_increment_ref_count(item);
                                            __freed_obj__ = 0;
                                        }
                                        else {
                                            ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1549))->items[it_186]=item;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1552))->len++;
                                        __freed_obj__ = 0;
                                        break;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                same_key_exist_187=(_Bool)0;
                                __freed_obj__ = 0;
                                for(
                                it2_188=list$1charp_begin(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1566))->key_list, "./comelang2.h", 1566))) ,                                __freed_obj__ = 0, 
                                0;                                _for_condtionalA12=                                !list$1charp_end(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1566))->key_list, "./comelang2.h", 1566))) ,                                __freed_obj__ = 0, 
                                _for_condtionalA12;                                it2_188=list$1charp_next(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1566))->key_list, "./comelang2.h", 1566))) ,                                __freed_obj__ = 0, 
                                0                                ){
                                    if(_if_conditional255=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 1564),__exception_result_var_a7=((struct optional$2boolbool*)(right_value194=string_equals(((char*)come_null_check(it2_188, "./comelang2.h", 1564)),key))), come_pop_stackframe(), __exception_result_var_a7)),                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value194),
                                    (right_value194 && right_value194 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value194, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                    __right_value_freed_obj[0] = right_value194, 
                                    __freed_obj__ = 0, 
                                    _if_conditional255) {
                                        same_key_exist_187=(_Bool)1;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional256=!same_key_exist_187,                                __freed_obj__ = 0, 
                                _if_conditional256) {
                                    list$1charp_push_back(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1567))->key_list, "./comelang2.h", 1567)),key);
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                __result133__ = __result_obj__ = self;
                                if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
                                if(item && !__freed_obj__) { come_call_finalizer(sVar_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                                __freed_obj__ = 0;
                                return __result133__;
                                __freed_obj__ = 0;
                                if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
                                if(item && !__freed_obj__) { come_call_finalizer(sVar_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void map$2charphsVarph_rehash(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int size_174;
void* right_value188;
char** keys_175;
void* right_value189;
struct sVar** items_176;
void* right_value190;
_Bool* item_existance_177;
int len_178;
char* it_179;
_Bool _for_condtionalA11;
struct sVar* default_value_180;
void* right_value191;
struct sVar* it2_181;
unsigned int hash_182;
int n_183;
_Bool _while_condtional25;
_Bool _if_conditional244;
_Bool _if_conditional245;
_Bool _if_conditional246;
struct sVar* default_value_184;
void* right_value192;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&size_174, 0, sizeof(int));
memset(&right_value188, 0, sizeof(void*));
memset(&keys_175, 0, sizeof(char**));
memset(&right_value189, 0, sizeof(void*));
memset(&items_176, 0, sizeof(struct sVar**));
memset(&right_value190, 0, sizeof(void*));
memset(&item_existance_177, 0, sizeof(_Bool*));
memset(&len_178, 0, sizeof(int));
memset(&it_179, 0, sizeof(char*));
memset(&default_value_180, 0, sizeof(struct sVar*));
memset(&right_value191, 0, sizeof(void*));
memset(&it2_181, 0, sizeof(struct sVar*));
memset(&hash_182, 0, sizeof(unsigned int));
memset(&n_183, 0, sizeof(int));
memset(&default_value_184, 0, sizeof(struct sVar*));
memset(&right_value192, 0, sizeof(void*));
                                        size_174=((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1369))->size*10;
                                        __freed_obj__ = 0;
                                        keys_175=(char**)come_increment_ref_count(((char**)(right_value188=(char**)come_calloc(1, sizeof(char*)*(1*(size_174)), "./comelang2.h", 1370))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value188);
                                        if(right_value188 && right_value188 != __result_obj__ && !__freed_obj__) { right_value188 = come_decrement_ref_count(right_value188, (void*)0, (void*)0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value188;
                                        __freed_obj__ = 0;
                                        items_176=(struct sVar**)come_increment_ref_count(((struct sVar**)(right_value189=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_174)), "./comelang2.h", 1371))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value189);
                                        if(right_value189 && right_value189 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVar_finalize,right_value189, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[1] = right_value189;
                                        __freed_obj__ = 0;
                                        item_existance_177=(_Bool*)come_increment_ref_count(((_Bool*)(right_value190=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_174)), "./comelang2.h", 1372))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value190);
                                        if(right_value190 && right_value190 != __result_obj__ && !__freed_obj__) { right_value190 = come_decrement_ref_count(right_value190, (void*)0, (void*)0, 1, 0, 0); }
                                        __right_value_freed_obj[2] = right_value190;
                                        __freed_obj__ = 0;
                                        len_178=0;
                                        __freed_obj__ = 0;
                                        for(
                                        it_179=map$2charphsVarph_begin(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1408))) ,                                        __freed_obj__ = 0, 
                                        0;                                        _for_condtionalA11=                                        !map$2charphsVarph_end(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1408))) ,                                        __freed_obj__ = 0, 
                                        _for_condtionalA11;                                        it_179=map$2charphsVarph_next(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1408))) ,                                        __freed_obj__ = 0, 
                                        0                                        ){
                                            __freed_obj__ = 0;
                                            memset(&default_value_180,0,sizeof(struct sVar*));
                                            __freed_obj__ = 0;
                                            it2_181=((struct sVar*)(right_value191=map$2charphsVarph_at(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1379)),it_179,default_value_180)));
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value191);
                                            if(right_value191 && right_value191 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVar_finalize,right_value191, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[0] = right_value191;
                                            __freed_obj__ = 0;
                                            hash_182=string_get_hash_key(((char*)come_null_check(it_179, "./comelang2.h", 1380)))%size_174;
                                            __freed_obj__ = 0;
                                            n_183=hash_182;
                                            __freed_obj__ = 0;
                                            while(_while_condtional25=(_Bool)1,                                            __freed_obj__ = 0, 
                                            _while_condtional25) {
                                                if(_if_conditional244=item_existance_177[n_183],                                                __freed_obj__ = 0, 
                                                _if_conditional244) {
                                                    n_183++;
                                                    __freed_obj__ = 0;
                                                    if(_if_conditional245=n_183>=size_174,                                                    __freed_obj__ = 0, 
                                                    _if_conditional245) {
                                                        n_183=0;
                                                        __freed_obj__ = 0;
                                                    }
                                                    else {
                                                        if(_if_conditional246=n_183==hash_182,                                                        __freed_obj__ = 0, 
                                                        _if_conditional246) {
                                                            printf("unexpected error in map.rehash(1)\n");
                                                            __freed_obj__ = 0;
                                                            exit(2);
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                }
                                                else {
                                                    item_existance_177[n_183]=(_Bool)1;
                                                    __freed_obj__ = 0;
                                                    keys_175[n_183]=it_179;
                                                    __freed_obj__ = 0;
                                                    __freed_obj__ = 0;
                                                    items_176[n_183]=((struct sVar*)(right_value192=map$2charphsVarph_at(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1400)),it_179,default_value_184)));
                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value192);
                                                    if(right_value192 && right_value192 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVar_finalize,right_value192, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                    __right_value_freed_obj[0] = right_value192;
                                                    __freed_obj__ = 0;
                                                    len_178++;
                                                    __freed_obj__ = 0;
                                                    break;
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        come_free_object((char*)((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1408))->items);
                                        __freed_obj__ = 0;
                                        if(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1409))->item_existance && !__freed_obj__) { ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1409))->item_existance = come_decrement_ref_count(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1409))->item_existance, (void*)0, (void*)0, 0, 0, 0); }
                                        __freed_obj__ = 0;
                                        come_free_object((char*)((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1410))->keys);
                                        __freed_obj__ = 0;
                                        ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1412))->keys=keys_175;
                                        __freed_obj__ = 0;
                                        ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1413))->items=items_176;
                                        __freed_obj__ = 0;
                                        ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1414))->item_existance=item_existance_177;
                                        __freed_obj__ = 0;
                                        ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1416))->size=size_174;
                                        __freed_obj__ = 0;
                                        ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1417))->len=len_178;
                                        __freed_obj__ = 0;
}

static struct sVar* sVar_clone(struct sVar* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional257;
struct sVar* __result134__;
void* right_value195;
struct sVar* result_189;
_Bool _if_conditional258;
void* right_value196;
char* __dec_obj75;
_Bool _if_conditional259;
void* right_value197;
char* __dec_obj76;
_Bool _if_conditional260;
void* right_value198;
struct sType* __dec_obj77;
_Bool _if_conditional261;
_Bool _if_conditional262;
_Bool _if_conditional263;
_Bool _if_conditional264;
_Bool _if_conditional265;
_Bool _if_conditional266;
void* right_value199;
char* __dec_obj78;
struct sVar* __result135__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value195, 0, sizeof(void*));
memset(&result_189, 0, sizeof(struct sVar*));
memset(&right_value196, 0, sizeof(void*));
memset(&right_value197, 0, sizeof(void*));
memset(&right_value198, 0, sizeof(void*));
memset(&right_value199, 0, sizeof(void*));
                                if(_if_conditional257=self==(void*)0,                                __freed_obj__ = 0, 
                                _if_conditional257) {
                                    __result134__ = __result_obj__ = (void*)0;
                                    __freed_obj__ = 0;
                                    return __result134__;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                result_189=(struct sVar*)come_increment_ref_count(((struct sVar*)(right_value195=(struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "sVar_clone", 3))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value195);
                                if(right_value195 && right_value195 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVar_finalize,right_value195, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value195;
                                __freed_obj__ = 0;
                                if(_if_conditional258=self!=((void*)0)&&((struct sVar*)come_null_check(self, "sVar_clone", 5))->mName!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional258) {
                                    __dec_obj75=((struct sVar*)come_null_check(result_189, "sVar_clone", 4))->mName;
                                    ((struct sVar*)come_null_check(result_189, "sVar_clone", 4))->mName=(char*)come_increment_ref_count(((char*)(right_value196=string_clone(((struct sVar*)come_null_check(self, "sVar_clone", 4))->mName))));
                                    if(__dec_obj75) { __dec_obj75 = come_decrement_ref_count(__dec_obj75, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value196);
                                    if(right_value196 && right_value196 != __result_obj__ && !__freed_obj__) { right_value196 = come_decrement_ref_count(right_value196, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value196;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional259=self!=((void*)0)&&((struct sVar*)come_null_check(self, "sVar_clone", 6))->mCValueName!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional259) {
                                    __dec_obj76=((struct sVar*)come_null_check(result_189, "sVar_clone", 5))->mCValueName;
                                    ((struct sVar*)come_null_check(result_189, "sVar_clone", 5))->mCValueName=(char*)come_increment_ref_count(((char*)(right_value197=string_clone(((struct sVar*)come_null_check(self, "sVar_clone", 5))->mCValueName))));
                                    if(__dec_obj76) { __dec_obj76 = come_decrement_ref_count(__dec_obj76, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value197);
                                    if(right_value197 && right_value197 != __result_obj__ && !__freed_obj__) { right_value197 = come_decrement_ref_count(right_value197, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value197;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional260=self!=((void*)0)&&((struct sVar*)come_null_check(self, "sVar_clone", 7))->mType!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional260) {
                                    __dec_obj77=((struct sVar*)come_null_check(result_189, "sVar_clone", 6))->mType;
                                    ((struct sVar*)come_null_check(result_189, "sVar_clone", 6))->mType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value198=sType_clone(((struct sVar*)come_null_check(self, "sVar_clone", 6))->mType))));
                                    if(__dec_obj77) { come_call_finalizer(sType_finalize,__dec_obj77, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value198);
                                    if(right_value198 && right_value198 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value198, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value198;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional261=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional261) {
                                    ((struct sVar*)come_null_check(result_189, "sVar_clone", 7))->mBlockLevel=((struct sVar*)come_null_check(self, "sVar_clone", 7))->mBlockLevel;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional262=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional262) {
                                    ((struct sVar*)come_null_check(result_189, "sVar_clone", 8))->mGlobal=((struct sVar*)come_null_check(self, "sVar_clone", 8))->mGlobal;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional263=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional263) {
                                    ((struct sVar*)come_null_check(result_189, "sVar_clone", 9))->mAllocaValue=((struct sVar*)come_null_check(self, "sVar_clone", 9))->mAllocaValue;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional264=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional264) {
                                    ((struct sVar*)come_null_check(result_189, "sVar_clone", 10))->mFunctionParam=((struct sVar*)come_null_check(self, "sVar_clone", 10))->mFunctionParam;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional265=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional265) {
                                    ((struct sVar*)come_null_check(result_189, "sVar_clone", 11))->mNoFree=((struct sVar*)come_null_check(self, "sVar_clone", 11))->mNoFree;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional266=self!=((void*)0)&&((struct sVar*)come_null_check(self, "sVar_clone", 13))->mFunName!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional266) {
                                    __dec_obj78=((struct sVar*)come_null_check(result_189, "sVar_clone", 12))->mFunName;
                                    ((struct sVar*)come_null_check(result_189, "sVar_clone", 12))->mFunName=(char*)come_increment_ref_count(((char*)(right_value199=string_clone(((struct sVar*)come_null_check(self, "sVar_clone", 12))->mFunName))));
                                    if(__dec_obj78) { __dec_obj78 = come_decrement_ref_count(__dec_obj78, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value199);
                                    if(right_value199 && right_value199 != __result_obj__ && !__freed_obj__) { right_value199 = come_decrement_ref_count(right_value199, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value199;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                __result135__ = __result_obj__ = result_189;
                                if(result_189 && !__freed_obj__) { come_call_finalizer(sVar_finalize,result_189, (void*)0, (void*)0, 0, 0, 1, 0); }
                                __freed_obj__ = 0;
                                return __result135__;
                                __freed_obj__ = 0;
                                if(result_189 && !__freed_obj__) { come_call_finalizer(sVar_finalize,result_189, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sFun_finalize(struct sFun* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional270;
_Bool _if_conditional271;
_Bool _if_conditional272;
_Bool _if_conditional273;
_Bool _if_conditional274;
_Bool _if_conditional275;
_Bool _if_conditional276;
_Bool _if_conditional277;
_Bool _if_conditional278;
_Bool _if_conditional279;
_Bool _if_conditional280;
_Bool _if_conditional281;
_Bool _if_conditional282;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional270=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 1))->mName!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional270) {
            if(((struct sFun*)come_null_check(self, "sFun_finalize", 0))->mName && !__freed_obj__) { ((struct sFun*)come_null_check(self, "sFun_finalize", 0))->mName = come_decrement_ref_count(((struct sFun*)come_null_check(self, "sFun_finalize", 0))->mName, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional271=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 2))->mResultType!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional271) {
            if(((struct sFun*)come_null_check(self, "sFun_finalize", 1))->mResultType && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 1))->mResultType, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional272=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 3))->mParamTypes!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional272) {
            if(((struct sFun*)come_null_check(self, "sFun_finalize", 2))->mParamTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 2))->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional273=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 4))->mParamNames!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional273) {
            if(((struct sFun*)come_null_check(self, "sFun_finalize", 3))->mParamNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 3))->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional274=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 5))->mParamDefaultParametors!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional274) {
            if(((struct sFun*)come_null_check(self, "sFun_finalize", 4))->mParamDefaultParametors && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 4))->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional275=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 6))->mLambdaType!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional275) {
            if(((struct sFun*)come_null_check(self, "sFun_finalize", 5))->mLambdaType && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 5))->mLambdaType, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional276=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 7))->mBlock!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional276) {
            if(((struct sFun*)come_null_check(self, "sFun_finalize", 6))->mBlock && !__freed_obj__) { come_call_finalizer(sBlock_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 6))->mBlock, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional277=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 8))->mSource!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional277) {
            if(((struct sFun*)come_null_check(self, "sFun_finalize", 7))->mSource && !__freed_obj__) { come_call_finalizer(buffer_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 7))->mSource, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional278=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 9))->mSourceHead!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional278) {
            if(((struct sFun*)come_null_check(self, "sFun_finalize", 8))->mSourceHead && !__freed_obj__) { come_call_finalizer(buffer_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 8))->mSourceHead, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional279=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 10))->mSourceHead2!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional279) {
            if(((struct sFun*)come_null_check(self, "sFun_finalize", 9))->mSourceHead2 && !__freed_obj__) { come_call_finalizer(buffer_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 9))->mSourceHead2, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional280=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 11))->mSourceDefer!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional280) {
            if(((struct sFun*)come_null_check(self, "sFun_finalize", 10))->mSourceDefer && !__freed_obj__) { come_call_finalizer(buffer_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 10))->mSourceDefer, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional281=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 12))->mComeHeader!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional281) {
            if(((struct sFun*)come_null_check(self, "sFun_finalize", 11))->mComeHeader && !__freed_obj__) { ((struct sFun*)come_null_check(self, "sFun_finalize", 11))->mComeHeader = come_decrement_ref_count(((struct sFun*)come_null_check(self, "sFun_finalize", 11))->mComeHeader, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional282=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 13))->mDeclareSName!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional282) {
            if(((struct sFun*)come_null_check(self, "sFun_finalize", 12))->mDeclareSName && !__freed_obj__) { ((struct sFun*)come_null_check(self, "sFun_finalize", 12))->mDeclareSName = come_decrement_ref_count(((struct sFun*)come_null_check(self, "sFun_finalize", 12))->mDeclareSName, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
}

void init_classes(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value205;
void* right_value206;
void* right_value207;
void* right_value208;
void* right_value209;
void* right_value210;
void* right_value211;
void* right_value212;
void* right_value213;
void* right_value214;
void* right_value215;
void* right_value216;
void* right_value217;
void* right_value218;
void* right_value219;
void* right_value220;
void* right_value221;
void* right_value222;
void* right_value223;
void* right_value224;
void* right_value225;
void* right_value226;
void* right_value227;
void* right_value228;
void* right_value229;
void* right_value230;
void* right_value231;
void* right_value232;
void* right_value233;
void* right_value234;
void* right_value235;
void* right_value236;
void* right_value237;
int i_190;
_Bool _for_condtionalA13;
void* right_value238;
char* generics_type_191;
void* right_value239;
void* right_value240;
int rc_193;
_Bool _if_conditional283;
void* right_value241;
void* right_value242;
void* right_value243;
void* right_value244;
char* type_name_194;
void* right_value245;
void* right_value246;
struct sType* type_195;
void* right_value247;
char* __dec_obj84;
void* right_value256;
void* right_value257;
void* right_value258;
struct sClass* klass_217;
void* right_value262;
void* right_value265;
void* right_value266;
void* right_value267;
void* right_value268;
void* right_value269;
void* right_value270;
void* right_value271;
void* right_value272;
void* right_value273;
void* right_value274;
void* right_value275;
void* right_value276;
void* right_value277;
void* right_value278;
void* right_value279;
void* right_value280;
void* right_value281;
void* right_value282;
void* right_value283;
void* right_value284;
void* right_value285;
void* right_value286;
void* right_value287;
void* right_value288;
void* right_value289;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value205, 0, sizeof(void*));
memset(&right_value206, 0, sizeof(void*));
memset(&right_value207, 0, sizeof(void*));
memset(&right_value208, 0, sizeof(void*));
memset(&right_value209, 0, sizeof(void*));
memset(&right_value210, 0, sizeof(void*));
memset(&right_value211, 0, sizeof(void*));
memset(&right_value212, 0, sizeof(void*));
memset(&right_value213, 0, sizeof(void*));
memset(&right_value214, 0, sizeof(void*));
memset(&right_value215, 0, sizeof(void*));
memset(&right_value216, 0, sizeof(void*));
memset(&right_value217, 0, sizeof(void*));
memset(&right_value218, 0, sizeof(void*));
memset(&right_value219, 0, sizeof(void*));
memset(&right_value220, 0, sizeof(void*));
memset(&right_value221, 0, sizeof(void*));
memset(&right_value222, 0, sizeof(void*));
memset(&right_value223, 0, sizeof(void*));
memset(&right_value224, 0, sizeof(void*));
memset(&right_value225, 0, sizeof(void*));
memset(&right_value226, 0, sizeof(void*));
memset(&right_value227, 0, sizeof(void*));
memset(&right_value228, 0, sizeof(void*));
memset(&right_value229, 0, sizeof(void*));
memset(&right_value230, 0, sizeof(void*));
memset(&right_value231, 0, sizeof(void*));
memset(&right_value232, 0, sizeof(void*));
memset(&right_value233, 0, sizeof(void*));
memset(&right_value234, 0, sizeof(void*));
memset(&right_value235, 0, sizeof(void*));
memset(&right_value236, 0, sizeof(void*));
memset(&right_value237, 0, sizeof(void*));
memset(&i_190, 0, sizeof(int));
memset(&right_value238, 0, sizeof(void*));
memset(&generics_type_191, 0, sizeof(char*));
memset(&right_value239, 0, sizeof(void*));
memset(&right_value240, 0, sizeof(void*));
memset(&rc_193, 0, sizeof(int));
memset(&right_value241, 0, sizeof(void*));
memset(&right_value242, 0, sizeof(void*));
memset(&right_value243, 0, sizeof(void*));
memset(&right_value244, 0, sizeof(void*));
memset(&type_name_194, 0, sizeof(char*));
memset(&right_value245, 0, sizeof(void*));
memset(&right_value246, 0, sizeof(void*));
memset(&type_195, 0, sizeof(struct sType*));
memset(&right_value247, 0, sizeof(void*));
memset(&right_value256, 0, sizeof(void*));
memset(&right_value257, 0, sizeof(void*));
memset(&right_value258, 0, sizeof(void*));
memset(&klass_217, 0, sizeof(struct sClass*));
memset(&right_value262, 0, sizeof(void*));
memset(&right_value265, 0, sizeof(void*));
memset(&right_value266, 0, sizeof(void*));
memset(&right_value267, 0, sizeof(void*));
memset(&right_value268, 0, sizeof(void*));
memset(&right_value269, 0, sizeof(void*));
memset(&right_value270, 0, sizeof(void*));
memset(&right_value271, 0, sizeof(void*));
memset(&right_value272, 0, sizeof(void*));
memset(&right_value273, 0, sizeof(void*));
memset(&right_value274, 0, sizeof(void*));
memset(&right_value275, 0, sizeof(void*));
memset(&right_value276, 0, sizeof(void*));
memset(&right_value277, 0, sizeof(void*));
memset(&right_value278, 0, sizeof(void*));
memset(&right_value279, 0, sizeof(void*));
memset(&right_value280, 0, sizeof(void*));
memset(&right_value281, 0, sizeof(void*));
memset(&right_value282, 0, sizeof(void*));
memset(&right_value283, 0, sizeof(void*));
memset(&right_value284, 0, sizeof(void*));
memset(&right_value285, 0, sizeof(void*));
memset(&right_value286, 0, sizeof(void*));
memset(&right_value287, 0, sizeof(void*));
memset(&right_value288, 0, sizeof(void*));
memset(&right_value289, 0, sizeof(void*));
    map$2charphsClassph_insert(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 389))->classes, "02transpile.c", 389)),(char*)come_increment_ref_count(((char*)(right_value205=__builtin_string("int")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value207=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value206=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 389)))),"int",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value205);
    if(right_value205 && right_value205 != __result_obj__ && !__freed_obj__) { right_value205 = come_decrement_ref_count(right_value205, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value205;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value206);
    if(right_value206 && right_value206 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value206, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value206;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value207);
    if(right_value207 && right_value207 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value207, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value207;
    __freed_obj__ = 0;
    map$2charphsClassph_insert(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 390))->classes, "02transpile.c", 390)),(char*)come_increment_ref_count(((char*)(right_value208=__builtin_string("short")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value210=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value209=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 390)))),"short",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value208);
    if(right_value208 && right_value208 != __result_obj__ && !__freed_obj__) { right_value208 = come_decrement_ref_count(right_value208, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value208;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value209);
    if(right_value209 && right_value209 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value209, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value209;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value210);
    if(right_value210 && right_value210 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value210, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[5] = right_value210;
    __freed_obj__ = 0;
    map$2charphsClassph_insert(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 391))->classes, "02transpile.c", 391)),(char*)come_increment_ref_count(((char*)(right_value211=__builtin_string("long")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value213=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value212=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 391)))),"long",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value211);
    if(right_value211 && right_value211 != __result_obj__ && !__freed_obj__) { right_value211 = come_decrement_ref_count(right_value211, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[6] = right_value211;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value212);
    if(right_value212 && right_value212 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value212, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[7] = right_value212;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value213);
    if(right_value213 && right_value213 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value213, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[8] = right_value213;
    __freed_obj__ = 0;
    map$2charphsClassph_insert(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 392))->classes, "02transpile.c", 392)),(char*)come_increment_ref_count(((char*)(right_value214=__builtin_string("char")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value216=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value215=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 392)))),"char",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 9, right_value214);
    if(right_value214 && right_value214 != __result_obj__ && !__freed_obj__) { right_value214 = come_decrement_ref_count(right_value214, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[9] = right_value214;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 10, right_value215);
    if(right_value215 && right_value215 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value215, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[10] = right_value215;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 11, right_value216);
    if(right_value216 && right_value216 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value216, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[11] = right_value216;
    __freed_obj__ = 0;
    map$2charphsClassph_insert(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 393))->classes, "02transpile.c", 393)),(char*)come_increment_ref_count(((char*)(right_value217=__builtin_string("bool")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value219=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value218=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 393)))),"bool",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 12, right_value217);
    if(right_value217 && right_value217 != __result_obj__ && !__freed_obj__) { right_value217 = come_decrement_ref_count(right_value217, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[12] = right_value217;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 13, right_value218);
    if(right_value218 && right_value218 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value218, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[13] = right_value218;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 14, right_value219);
    if(right_value219 && right_value219 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value219, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[14] = right_value219;
    __freed_obj__ = 0;
    map$2charphsClassph_insert(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 394))->classes, "02transpile.c", 394)),(char*)come_increment_ref_count(((char*)(right_value220=__builtin_string("_Bool")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value222=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value221=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 394)))),"_Bool",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 15, right_value220);
    if(right_value220 && right_value220 != __result_obj__ && !__freed_obj__) { right_value220 = come_decrement_ref_count(right_value220, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[15] = right_value220;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 16, right_value221);
    if(right_value221 && right_value221 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value221, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[16] = right_value221;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 17, right_value222);
    if(right_value222 && right_value222 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value222, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[17] = right_value222;
    __freed_obj__ = 0;
    map$2charphsClassph_insert(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 395))->classes, "02transpile.c", 395)),(char*)come_increment_ref_count(((char*)(right_value223=__builtin_string("void")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value225=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value224=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 395)))),"void",(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 18, right_value223);
    if(right_value223 && right_value223 != __result_obj__ && !__freed_obj__) { right_value223 = come_decrement_ref_count(right_value223, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[18] = right_value223;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 19, right_value224);
    if(right_value224 && right_value224 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value224, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[19] = right_value224;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 20, right_value225);
    if(right_value225 && right_value225 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value225, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[20] = right_value225;
    __freed_obj__ = 0;
    map$2charphsClassph_insert(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 396))->classes, "02transpile.c", 396)),(char*)come_increment_ref_count(((char*)(right_value226=__builtin_string("float")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value228=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value227=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 396)))),"float",(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,-1,-1,(_Bool)0,info)))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 21, right_value226);
    if(right_value226 && right_value226 != __result_obj__ && !__freed_obj__) { right_value226 = come_decrement_ref_count(right_value226, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[21] = right_value226;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 22, right_value227);
    if(right_value227 && right_value227 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value227, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[22] = right_value227;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 23, right_value228);
    if(right_value228 && right_value228 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value228, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[23] = right_value228;
    __freed_obj__ = 0;
    map$2charphsClassph_insert(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 397))->classes, "02transpile.c", 397)),(char*)come_increment_ref_count(((char*)(right_value229=__builtin_string("double")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value231=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value230=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 397)))),"double",(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,-1,-1,(_Bool)0,info)))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 24, right_value229);
    if(right_value229 && right_value229 != __result_obj__ && !__freed_obj__) { right_value229 = come_decrement_ref_count(right_value229, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[24] = right_value229;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 25, right_value230);
    if(right_value230 && right_value230 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value230, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[25] = right_value230;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 26, right_value231);
    if(right_value231 && right_value231 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value231, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[26] = right_value231;
    __freed_obj__ = 0;
    map$2charphsClassph_insert(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 398))->classes, "02transpile.c", 398)),(char*)come_increment_ref_count(((char*)(right_value232=__builtin_string("lambda")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value234=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value233=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 398)))),"lambda",(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 27, right_value232);
    if(right_value232 && right_value232 != __result_obj__ && !__freed_obj__) { right_value232 = come_decrement_ref_count(right_value232, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[27] = right_value232;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 28, right_value233);
    if(right_value233 && right_value233 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value233, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[28] = right_value233;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 29, right_value234);
    if(right_value234 && right_value234 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value234, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[29] = right_value234;
    __freed_obj__ = 0;
    map$2charphsClassph_insert(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 399))->classes, "02transpile.c", 399)),(char*)come_increment_ref_count(((char*)(right_value235=__builtin_string("__uint128_t")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value237=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value236=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 399)))),"__uint128_t",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 30, right_value235);
    if(right_value235 && right_value235 != __result_obj__ && !__freed_obj__) { right_value235 = come_decrement_ref_count(right_value235, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[30] = right_value235;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 31, right_value236);
    if(right_value236 && right_value236 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value236, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[31] = right_value236;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 32, right_value237);
    if(right_value237 && right_value237 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value237, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[32] = right_value237;
    __freed_obj__ = 0;
    for(
    i_190=0 ,    __freed_obj__ = 0, 
    0;    _for_condtionalA13=    i_190<12 ,    __freed_obj__ = 0, 
    _for_condtionalA13;    i_190++ ,    __freed_obj__ = 0, 
    0    ){
        generics_type_191=(char*)come_increment_ref_count(((char*)(right_value238=xsprintf("generics_type%d",i_190))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value238);
        if(right_value238 && right_value238 != __result_obj__ && !__freed_obj__) { right_value238 = come_decrement_ref_count(right_value238, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value238;
        __freed_obj__ = 0;
        map$2charphsClassph_insert(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 402))->classes, "02transpile.c", 402)),(char*)come_increment_ref_count(generics_type_191),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value240=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value239=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 402)))),generics_type_191,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,i_190,-1,(_Bool)0,info)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value239);
        if(right_value239 && right_value239 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value239, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value239;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value240);
        if(right_value240 && right_value240 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value240, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value240;
        __freed_obj__ = 0;
        if(generics_type_191 && !__freed_obj__) { generics_type_191 = come_decrement_ref_count(generics_type_191, (void*)0, (void*)0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    char cmd_192[1024];
    memset(&cmd_192, 0, sizeof(char)    *(1024)    );
    __freed_obj__ = 0;
    snprintf(cmd_192,1024,"which /opt/homebrew/opt/llvm/bin/clang-cpp 1> /dev/null 2>/dev/null");
    __freed_obj__ = 0;
    rc_193=system(cmd_192);
    __freed_obj__ = 0;
    if(_if_conditional283=rc_193==0,    __freed_obj__ = 0, 
    _if_conditional283) {
        map$2charphsClassph_insert(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 410))->classes, "02transpile.c", 410)),(char*)come_increment_ref_count(((char*)(right_value241=__builtin_string("__builtin_va_list")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value243=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value242=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 410)))),"__builtin_va_list",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value241);
        if(right_value241 && right_value241 != __result_obj__ && !__freed_obj__) { right_value241 = come_decrement_ref_count(right_value241, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value241;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value242);
        if(right_value242 && right_value242 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value242, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value242;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value243);
        if(right_value243 && right_value243 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value243, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value243;
        __freed_obj__ = 0;
        type_name_194=(char*)come_increment_ref_count(((char*)(right_value244=__builtin_string("__builtin_va_list"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value244);
        if(right_value244 && right_value244 != __result_obj__ && !__freed_obj__) { right_value244 = come_decrement_ref_count(right_value244, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value244;
        __freed_obj__ = 0;
        type_195=(struct sType*)come_increment_ref_count(((struct sType*)(right_value246=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value245=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 414)))),"__builtin_va_list",(_Bool)0,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value245);
        if(right_value245 && right_value245 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value245, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[4] = right_value245;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value246);
        if(right_value246 && right_value246 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value246, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[5] = right_value246;
        __freed_obj__ = 0;
        __dec_obj84=((struct sType*)come_null_check(type_195, "02transpile.c", 415))->mOriginalTypeName;
        ((struct sType*)come_null_check(type_195, "02transpile.c", 415))->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value247=__builtin_string("__builtin_va_list"))));
        if(__dec_obj84) { __dec_obj84 = come_decrement_ref_count(__dec_obj84, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value247);
        if(right_value247 && right_value247 != __result_obj__ && !__freed_obj__) { right_value247 = come_decrement_ref_count(right_value247, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[6] = right_value247;
        __freed_obj__ = 0;
        map$2charphsTypeph_insert(((struct map$2charphsTypeph*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 417))->types, "02transpile.c", 417)),(char*)come_increment_ref_count(((char*)(right_value256=__builtin_string(type_name_194)))),(struct sType*)come_increment_ref_count(type_195));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value256);
        if(right_value256 && right_value256 != __result_obj__ && !__freed_obj__) { right_value256 = come_decrement_ref_count(right_value256, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[7] = right_value256;
        __freed_obj__ = 0;
        if(type_name_194 && !__freed_obj__) { type_name_194 = come_decrement_ref_count(type_name_194, (void*)0, (void*)0, 0, 0, 0); }
        if(type_195 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_195, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    else {
        klass_217=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value258=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value257=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 422)))),"__builtin_va_list",(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value257);
        if(right_value257 && right_value257 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value257, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value257;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value258);
        if(right_value258 && right_value258 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value258, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value258;
        __freed_obj__ = 0;
        list$1tuple2$2charphsTypephph_push_back(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(klass_217, "02transpile.c", 424))->mFields, "02transpile.c", 424)),(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value268=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value262=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "02transpile.c", 424)))),(char*)come_increment_ref_count(((char*)(right_value265=__builtin_string("v1")))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value267=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value266=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 424)))),"char*",(_Bool)0,info)))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value262);
        if(right_value262 && right_value262 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value262, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value262;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value265);
        if(right_value265 && right_value265 != __result_obj__ && !__freed_obj__) { right_value265 = come_decrement_ref_count(right_value265, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value265;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value266);
        if(right_value266 && right_value266 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value266, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[4] = right_value266;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value267);
        if(right_value267 && right_value267 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value267, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[5] = right_value267;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value268);
        if(right_value268 && right_value268 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value268, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[6] = right_value268;
        __freed_obj__ = 0;
        list$1tuple2$2charphsTypephph_push_back(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(klass_217, "02transpile.c", 425))->mFields, "02transpile.c", 425)),(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value273=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value269=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "02transpile.c", 425)))),(char*)come_increment_ref_count(((char*)(right_value270=__builtin_string("v2")))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value272=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value271=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 425)))),"char*",(_Bool)0,info)))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value269);
        if(right_value269 && right_value269 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value269, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[7] = right_value269;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value270);
        if(right_value270 && right_value270 != __result_obj__ && !__freed_obj__) { right_value270 = come_decrement_ref_count(right_value270, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[8] = right_value270;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 9, right_value271);
        if(right_value271 && right_value271 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value271, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[9] = right_value271;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 10, right_value272);
        if(right_value272 && right_value272 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value272, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[10] = right_value272;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 11, right_value273);
        if(right_value273 && right_value273 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value273, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[11] = right_value273;
        __freed_obj__ = 0;
        list$1tuple2$2charphsTypephph_push_back(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(klass_217, "02transpile.c", 426))->mFields, "02transpile.c", 426)),(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value278=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value274=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "02transpile.c", 426)))),(char*)come_increment_ref_count(((char*)(right_value275=__builtin_string("v3")))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value277=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value276=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 426)))),"char*",(_Bool)0,info)))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 12, right_value274);
        if(right_value274 && right_value274 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value274, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[12] = right_value274;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 13, right_value275);
        if(right_value275 && right_value275 != __result_obj__ && !__freed_obj__) { right_value275 = come_decrement_ref_count(right_value275, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[13] = right_value275;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 14, right_value276);
        if(right_value276 && right_value276 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value276, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[14] = right_value276;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 15, right_value277);
        if(right_value277 && right_value277 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value277, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[15] = right_value277;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 16, right_value278);
        if(right_value278 && right_value278 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value278, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[16] = right_value278;
        __freed_obj__ = 0;
        list$1tuple2$2charphsTypephph_push_back(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(klass_217, "02transpile.c", 427))->mFields, "02transpile.c", 427)),(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value283=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value279=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "02transpile.c", 427)))),(char*)come_increment_ref_count(((char*)(right_value280=__builtin_string("v4")))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value282=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value281=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 427)))),"int",(_Bool)0,info)))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 17, right_value279);
        if(right_value279 && right_value279 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value279, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[17] = right_value279;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 18, right_value280);
        if(right_value280 && right_value280 != __result_obj__ && !__freed_obj__) { right_value280 = come_decrement_ref_count(right_value280, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[18] = right_value280;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 19, right_value281);
        if(right_value281 && right_value281 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value281, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[19] = right_value281;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 20, right_value282);
        if(right_value282 && right_value282 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value282, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[20] = right_value282;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 21, right_value283);
        if(right_value283 && right_value283 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value283, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[21] = right_value283;
        __freed_obj__ = 0;
        list$1tuple2$2charphsTypephph_push_back(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(klass_217, "02transpile.c", 428))->mFields, "02transpile.c", 428)),(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value288=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value284=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "02transpile.c", 428)))),(char*)come_increment_ref_count(((char*)(right_value285=__builtin_string("v5")))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value287=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value286=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 428)))),"int",(_Bool)0,info)))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 22, right_value284);
        if(right_value284 && right_value284 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value284, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[22] = right_value284;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 23, right_value285);
        if(right_value285 && right_value285 != __result_obj__ && !__freed_obj__) { right_value285 = come_decrement_ref_count(right_value285, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[23] = right_value285;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 24, right_value286);
        if(right_value286 && right_value286 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value286, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[24] = right_value286;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 25, right_value287);
        if(right_value287 && right_value287 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value287, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[25] = right_value287;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 26, right_value288);
        if(right_value288 && right_value288 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value288, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[26] = right_value288;
        __freed_obj__ = 0;
        map$2charphsClassph_insert(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 430))->classes, "02transpile.c", 430)),(char*)come_increment_ref_count(((char*)(right_value289=__builtin_string("__builtin_va_list")))),(struct sClass*)come_increment_ref_count(klass_217));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 27, right_value289);
        if(right_value289 && right_value289 != __result_obj__ && !__freed_obj__) { right_value289 = come_decrement_ref_count(right_value289, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[27] = right_value289;
        __freed_obj__ = 0;
        if(klass_217 && !__freed_obj__) { come_call_finalizer(sClass_finalize,klass_217, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
}

static struct map$2charphsTypeph* map$2charphsTypeph_insert(struct map$2charphsTypeph* self, char* key, struct sType* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional284;
unsigned int hash_213;
unsigned int it_214;
_Bool _while_condtional29;
_Bool _if_conditional296;
void* right_value254;
struct optional$2boolbool* __exception_result_var_a9;
_Bool _if_conditional297;
_Bool _if_conditional298;
_Bool _if_conditional299;
_Bool _if_conditional300;
_Bool _if_conditional301;
_Bool _if_conditional302;
_Bool _if_conditional303;
_Bool same_key_exist_215;
char* it2_216;
_Bool _for_condtionalA15;
void* right_value255;
struct optional$2boolbool* __exception_result_var_a10;
_Bool _if_conditional304;
_Bool _if_conditional305;
struct map$2charphsTypeph* __result151__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_213, 0, sizeof(unsigned int));
memset(&it_214, 0, sizeof(unsigned int));
memset(&right_value254, 0, sizeof(void*));
memset(&same_key_exist_215, 0, sizeof(_Bool));
memset(&it2_216, 0, sizeof(char*));
memset(&right_value255, 0, sizeof(void*));
            if(_if_conditional284=((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1424))->len*10>=((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1424))->size,            __freed_obj__ = 0, 
            _if_conditional284) {
                map$2charphsTypeph_rehash(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1422)));
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            hash_213=string_get_hash_key(((char*)come_null_check(key, "./comelang2.h", 1424)))%((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1424))->size;
            __freed_obj__ = 0;
            it_214=hash_213;
            __freed_obj__ = 0;
            while(_while_condtional29=(_Bool)1,            __freed_obj__ = 0, 
            _while_condtional29) {
                if(_if_conditional296=((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1480))->item_existance[it_214],                __freed_obj__ = 0, 
                _if_conditional296) {
                    if(_if_conditional297=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 1451),__exception_result_var_a9=((struct optional$2boolbool*)(right_value254=string_equals(((char*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1451))->keys[it_214], "./comelang2.h", 1451)),key))), come_pop_stackframe(), __exception_result_var_a9)),                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value254),
                    (right_value254 && right_value254 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value254, (void*)0, (void*)0, 0, 1, 0, 0):0,
                    __right_value_freed_obj[0] = right_value254, 
                    __freed_obj__ = 0, 
                    _if_conditional297) {
                        if(_if_conditional298=1,                        __freed_obj__ = 0, 
                        _if_conditional298) {
                            list$1charp_remove(((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1433))->key_list, "./comelang2.h", 1433)),((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1433))->keys[it_214]);
                            __freed_obj__ = 0;
                            if(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1434))->keys[it_214] && !__freed_obj__) { ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1434))->keys[it_214] = come_decrement_ref_count(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1434))->keys[it_214], (void*)0, (void*)0, 0, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1435))->keys[it_214]=(char*)come_increment_ref_count(key);
                            __freed_obj__ = 0;
                        }
                        else {
                            list$1charp_remove(((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1438))->key_list, "./comelang2.h", 1438)),((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1438))->keys[it_214]);
                            __freed_obj__ = 0;
                            ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1439))->keys[it_214]=key;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional299=1,                        __freed_obj__ = 0, 
                        _if_conditional299) {
                            if(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1442))->items[it_214] && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1442))->items[it_214], (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1443))->items[it_214]=(struct sType*)come_increment_ref_count(item);
                            __freed_obj__ = 0;
                        }
                        else {
                            ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1446))->items[it_214]=item;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        break;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    it_214++;
                    __freed_obj__ = 0;
                    if(_if_conditional300=it_214>=((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1460))->size,                    __freed_obj__ = 0, 
                    _if_conditional300) {
                        it_214=0;
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional301=it_214==hash_213,                        __freed_obj__ = 0, 
                        _if_conditional301) {
                            printf("unexpected error in map.insert\n");
                            __freed_obj__ = 0;
                            exit(2);
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                else {
                    ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1462))->item_existance[it_214]=(_Bool)1;
                    __freed_obj__ = 0;
                    if(_if_conditional302=1,                    __freed_obj__ = 0, 
                    _if_conditional302) {
                        ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1464))->keys[it_214]=(char*)come_increment_ref_count(key);
                        __freed_obj__ = 0;
                    }
                    else {
                        ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1467))->keys[it_214]=key;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional303=1,                    __freed_obj__ = 0, 
                    _if_conditional303) {
                        ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1470))->items[it_214]=(struct sType*)come_increment_ref_count(item);
                        __freed_obj__ = 0;
                    }
                    else {
                        ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1473))->items[it_214]=item;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1476))->len++;
                    __freed_obj__ = 0;
                    break;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            same_key_exist_215=(_Bool)0;
            __freed_obj__ = 0;
            for(
            it2_216=list$1charp_begin(((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1490))->key_list, "./comelang2.h", 1490))) ,            __freed_obj__ = 0, 
            0;            _for_condtionalA15=            !list$1charp_end(((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1490))->key_list, "./comelang2.h", 1490))) ,            __freed_obj__ = 0, 
            _for_condtionalA15;            it2_216=list$1charp_next(((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1490))->key_list, "./comelang2.h", 1490))) ,            __freed_obj__ = 0, 
            0            ){
                if(_if_conditional304=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 1488),__exception_result_var_a10=((struct optional$2boolbool*)(right_value255=string_equals(((char*)come_null_check(it2_216, "./comelang2.h", 1488)),key))), come_pop_stackframe(), __exception_result_var_a10)),                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value255),
                (right_value255 && right_value255 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value255, (void*)0, (void*)0, 0, 1, 0, 0):0,
                __right_value_freed_obj[0] = right_value255, 
                __freed_obj__ = 0, 
                _if_conditional304) {
                    same_key_exist_215=(_Bool)1;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional305=!same_key_exist_215,            __freed_obj__ = 0, 
            _if_conditional305) {
                list$1charp_push_back(((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1491))->key_list, "./comelang2.h", 1491)),key);
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __result151__ = __result_obj__ = self;
            if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
            if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result151__;
            __freed_obj__ = 0;
            if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
            if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void map$2charphsTypeph_rehash(struct map$2charphsTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int size_196;
void* right_value248;
char** keys_197;
void* right_value249;
struct sType** items_198;
void* right_value250;
_Bool* item_existance_199;
int len_200;
char* it_203;
_Bool _for_condtionalA14;
struct sType* default_value_206;
void* right_value252;
struct sType* it2_209;
unsigned int hash_210;
int n_211;
_Bool _while_condtional28;
_Bool _if_conditional293;
_Bool _if_conditional294;
_Bool _if_conditional295;
struct sType* default_value_212;
void* right_value253;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&size_196, 0, sizeof(int));
memset(&right_value248, 0, sizeof(void*));
memset(&keys_197, 0, sizeof(char**));
memset(&right_value249, 0, sizeof(void*));
memset(&items_198, 0, sizeof(struct sType**));
memset(&right_value250, 0, sizeof(void*));
memset(&item_existance_199, 0, sizeof(_Bool*));
memset(&len_200, 0, sizeof(int));
memset(&it_203, 0, sizeof(char*));
memset(&default_value_206, 0, sizeof(struct sType*));
memset(&right_value252, 0, sizeof(void*));
memset(&it2_209, 0, sizeof(struct sType*));
memset(&hash_210, 0, sizeof(unsigned int));
memset(&n_211, 0, sizeof(int));
memset(&default_value_212, 0, sizeof(struct sType*));
memset(&right_value253, 0, sizeof(void*));
                    size_196=((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1369))->size*10;
                    __freed_obj__ = 0;
                    keys_197=(char**)come_increment_ref_count(((char**)(right_value248=(char**)come_calloc(1, sizeof(char*)*(1*(size_196)), "./comelang2.h", 1370))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value248);
                    if(right_value248 && right_value248 != __result_obj__ && !__freed_obj__) { right_value248 = come_decrement_ref_count(right_value248, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value248;
                    __freed_obj__ = 0;
                    items_198=(struct sType**)come_increment_ref_count(((struct sType**)(right_value249=(struct sType**)come_calloc(1, sizeof(struct sType*)*(1*(size_196)), "./comelang2.h", 1371))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value249);
                    if(right_value249 && right_value249 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value249, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value249;
                    __freed_obj__ = 0;
                    item_existance_199=(_Bool*)come_increment_ref_count(((_Bool*)(right_value250=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_196)), "./comelang2.h", 1372))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value250);
                    if(right_value250 && right_value250 != __result_obj__ && !__freed_obj__) { right_value250 = come_decrement_ref_count(right_value250, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[2] = right_value250;
                    __freed_obj__ = 0;
                    len_200=0;
                    __freed_obj__ = 0;
                    for(
                    it_203=map$2charphsTypeph_begin(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1408))) ,                    __freed_obj__ = 0, 
                    0;                    _for_condtionalA14=                    !map$2charphsTypeph_end(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1408))) ,                    __freed_obj__ = 0, 
                    _for_condtionalA14;                    it_203=map$2charphsTypeph_next(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1408))) ,                    __freed_obj__ = 0, 
                    0                    ){
                        __freed_obj__ = 0;
                        memset(&default_value_206,0,sizeof(struct sType*));
                        __freed_obj__ = 0;
                        it2_209=((struct sType*)(right_value252=map$2charphsTypeph_at(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1379)),it_203,default_value_206)));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value252);
                        if(right_value252 && right_value252 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value252, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value252;
                        __freed_obj__ = 0;
                        hash_210=string_get_hash_key(((char*)come_null_check(it_203, "./comelang2.h", 1380)))%size_196;
                        __freed_obj__ = 0;
                        n_211=hash_210;
                        __freed_obj__ = 0;
                        while(_while_condtional28=(_Bool)1,                        __freed_obj__ = 0, 
                        _while_condtional28) {
                            if(_if_conditional293=item_existance_199[n_211],                            __freed_obj__ = 0, 
                            _if_conditional293) {
                                n_211++;
                                __freed_obj__ = 0;
                                if(_if_conditional294=n_211>=size_196,                                __freed_obj__ = 0, 
                                _if_conditional294) {
                                    n_211=0;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    if(_if_conditional295=n_211==hash_210,                                    __freed_obj__ = 0, 
                                    _if_conditional295) {
                                        printf("unexpected error in map.rehash(1)\n");
                                        __freed_obj__ = 0;
                                        exit(2);
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            else {
                                item_existance_199[n_211]=(_Bool)1;
                                __freed_obj__ = 0;
                                keys_197[n_211]=it_203;
                                __freed_obj__ = 0;
                                __freed_obj__ = 0;
                                items_198[n_211]=((struct sType*)(right_value253=map$2charphsTypeph_at(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1400)),it_203,default_value_212)));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value253);
                                if(right_value253 && right_value253 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value253, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value253;
                                __freed_obj__ = 0;
                                len_200++;
                                __freed_obj__ = 0;
                                break;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    come_free_object((char*)((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1408))->items);
                    __freed_obj__ = 0;
                    if(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1409))->item_existance && !__freed_obj__) { ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1409))->item_existance = come_decrement_ref_count(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1409))->item_existance, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    come_free_object((char*)((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1410))->keys);
                    __freed_obj__ = 0;
                    ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1412))->keys=keys_197;
                    __freed_obj__ = 0;
                    ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1413))->items=items_198;
                    __freed_obj__ = 0;
                    ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1414))->item_existance=item_existance_199;
                    __freed_obj__ = 0;
                    ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1416))->size=size_196;
                    __freed_obj__ = 0;
                    ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1417))->len=len_200;
                    __freed_obj__ = 0;
}

static char* map$2charphsTypeph_begin(struct map$2charphsTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional285;
char* result_201;
char* __result140__;
_Bool _if_conditional286;
char* __result141__;
char* result_202;
char* __result142__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_201, 0, sizeof(char*));
memset(&result_202, 0, sizeof(char*));
                        if(_if_conditional285=self==((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional285) {
                            __freed_obj__ = 0;
                            memset(&result_201,0,sizeof(char*));
                            __freed_obj__ = 0;
                            __result140__ = __result_obj__ = result_201;
                            __freed_obj__ = 0;
                            return __result140__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        ((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1336))->key_list, "./comelang2.h", 1336))->it=((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1336))->key_list, "./comelang2.h", 1336))->head;
                        __freed_obj__ = 0;
                        if(_if_conditional286=((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1342))->key_list, "./comelang2.h", 1342))->it,                        __freed_obj__ = 0, 
                        _if_conditional286) {
                            __result141__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1339))->key_list, "./comelang2.h", 1339))->it, "./comelang2.h", 1339))->item;
                            __freed_obj__ = 0;
                            return __result141__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __freed_obj__ = 0;
                        memset(&result_202,0,sizeof(char*));
                        __freed_obj__ = 0;
                        __result142__ = __result_obj__ = result_202;
                        __freed_obj__ = 0;
                        return __result142__;
                        __freed_obj__ = 0;
}

static _Bool map$2charphsTypeph_end(struct map$2charphsTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result143__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        __result143__ = self==((void*)0)||((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1365))->key_list==((void*)0)||((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1365))->key_list, "./comelang2.h", 1365))->it==((void*)0);
                        __freed_obj__ = 0;
                        return __result143__;
                        __freed_obj__ = 0;
}

static char* map$2charphsTypeph_next(struct map$2charphsTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional287;
char* result_204;
char* __result144__;
_Bool _if_conditional288;
char* __result145__;
char* result_205;
char* __result146__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_204, 0, sizeof(char*));
memset(&result_205, 0, sizeof(char*));
                        if(_if_conditional287=self==((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional287) {
                            __freed_obj__ = 0;
                            memset(&result_204,0,sizeof(char*));
                            __freed_obj__ = 0;
                            __result144__ = __result_obj__ = result_204;
                            __freed_obj__ = 0;
                            return __result144__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        ((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1353))->key_list, "./comelang2.h", 1353))->it=((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1353))->key_list, "./comelang2.h", 1353))->it, "./comelang2.h", 1353))->next;
                        __freed_obj__ = 0;
                        if(_if_conditional288=((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1359))->key_list, "./comelang2.h", 1359))->it,                        __freed_obj__ = 0, 
                        _if_conditional288) {
                            __result145__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1356))->key_list, "./comelang2.h", 1356))->it, "./comelang2.h", 1356))->item;
                            __freed_obj__ = 0;
                            return __result145__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __freed_obj__ = 0;
                        memset(&result_205,0,sizeof(char*));
                        __freed_obj__ = 0;
                        __result146__ = __result_obj__ = result_205;
                        __freed_obj__ = 0;
                        return __result146__;
                        __freed_obj__ = 0;
}

static struct sType* map$2charphsTypeph_at(struct map$2charphsTypeph* self, char* key, struct sType* default_value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int hash_207;
unsigned int it_208;
_Bool _while_condtional27;
_Bool _if_conditional289;
void* right_value251;
struct optional$2boolbool* __exception_result_var_a8;
_Bool _if_conditional290;
struct sType* __result147__;
_Bool _if_conditional291;
_Bool _if_conditional292;
struct sType* __result148__;
struct sType* __result149__;
struct sType* __result150__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_207, 0, sizeof(unsigned int));
memset(&it_208, 0, sizeof(unsigned int));
memset(&right_value251, 0, sizeof(void*));
                            hash_207=string_get_hash_key(((char*)come_null_check(((char*)key), "./comelang2.h", 1258)))%((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1258))->size;
                            __freed_obj__ = 0;
                            it_208=hash_207;
                            __freed_obj__ = 0;
                            while(_while_condtional27=(_Bool)1,                            __freed_obj__ = 0, 
                            _while_condtional27) {
                                if(_if_conditional289=((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1281))->item_existance[it_208],                                __freed_obj__ = 0, 
                                _if_conditional289) {
                                    if(_if_conditional290=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 1269),__exception_result_var_a8=((struct optional$2boolbool*)(right_value251=string_equals(((char*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1269))->keys[it_208], "./comelang2.h", 1269)),key))), come_pop_stackframe(), __exception_result_var_a8)),                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value251),
                                    (right_value251 && right_value251 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value251, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                    __right_value_freed_obj[0] = right_value251, 
                                    __freed_obj__ = 0, 
                                    _if_conditional290) {
                                        __result147__ = __result_obj__ = ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1266))->items[it_208];
                                        __freed_obj__ = 0;
                                        return __result147__;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    it_208++;
                                    __freed_obj__ = 0;
                                    if(_if_conditional291=it_208>=((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1277))->size,                                    __freed_obj__ = 0, 
                                    _if_conditional291) {
                                        it_208=0;
                                        __freed_obj__ = 0;
                                    }
                                    else {
                                        if(_if_conditional292=it_208==hash_207,                                        __freed_obj__ = 0, 
                                        _if_conditional292) {
                                            __result148__ = __result_obj__ = default_value;
                                            __freed_obj__ = 0;
                                            return __result148__;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                }
                                else {
                                    __result149__ = __result_obj__ = default_value;
                                    __freed_obj__ = 0;
                                    return __result149__;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            __result150__ = __result_obj__ = default_value;
                            __freed_obj__ = 0;
                            return __result150__;
                            __freed_obj__ = 0;
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional306;
void* right_value259;
struct list_item$1tuple2$2charphsTypephph* litem_218;
struct tuple2$2charphsTypeph* __dec_obj85;
_Bool _if_conditional309;
void* right_value260;
struct list_item$1tuple2$2charphsTypephph* litem_219;
struct tuple2$2charphsTypeph* __dec_obj86;
void* right_value261;
struct list_item$1tuple2$2charphsTypephph* litem_220;
struct tuple2$2charphsTypeph* __dec_obj87;
struct list$1tuple2$2charphsTypephph* __result152__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value259, 0, sizeof(void*));
memset(&litem_218, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&right_value260, 0, sizeof(void*));
memset(&litem_219, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&right_value261, 0, sizeof(void*));
memset(&litem_220, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
            if(_if_conditional306=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 302))->len==0,            __freed_obj__ = 0, 
            _if_conditional306) {
                litem_218=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value259=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 272))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value259);
                if(right_value259 && right_value259 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,right_value259, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value259;
                __freed_obj__ = 0;
                ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_218, "./comelang2.h", 274))->prev=((void*)0);
                __freed_obj__ = 0;
                ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_218, "./comelang2.h", 275))->next=((void*)0);
                __freed_obj__ = 0;
                __dec_obj85=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_218, "./comelang2.h", 276))->item;
                ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_218, "./comelang2.h", 276))->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                if(__dec_obj85) { come_call_finalizer(tuple2$2charphsTypeph_finalize,__dec_obj85, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 278))->tail=litem_218;
                __freed_obj__ = 0;
                ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 279))->head=litem_218;
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional309=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 302))->len==1,                __freed_obj__ = 0, 
                _if_conditional309) {
                    litem_219=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value260=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 282))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value260);
                    if(right_value260 && right_value260 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,right_value260, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value260;
                    __freed_obj__ = 0;
                    ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_219, "./comelang2.h", 284))->prev=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 284))->head;
                    __freed_obj__ = 0;
                    ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_219, "./comelang2.h", 285))->next=((void*)0);
                    __freed_obj__ = 0;
                    __dec_obj86=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_219, "./comelang2.h", 286))->item;
                    ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_219, "./comelang2.h", 286))->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                    if(__dec_obj86) { come_call_finalizer(tuple2$2charphsTypeph_finalize,__dec_obj86, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 288))->tail=litem_219;
                    __freed_obj__ = 0;
                    ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 289))->head, "./comelang2.h", 289))->next=litem_219;
                    __freed_obj__ = 0;
                }
                else {
                    litem_220=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value261=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 292))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value261);
                    if(right_value261 && right_value261 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,right_value261, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value261;
                    __freed_obj__ = 0;
                    ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_220, "./comelang2.h", 294))->prev=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 294))->tail;
                    __freed_obj__ = 0;
                    ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_220, "./comelang2.h", 295))->next=((void*)0);
                    __freed_obj__ = 0;
                    __dec_obj87=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_220, "./comelang2.h", 296))->item;
                    ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_220, "./comelang2.h", 296))->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                    if(__dec_obj87) { come_call_finalizer(tuple2$2charphsTypeph_finalize,__dec_obj87, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 298))->tail, "./comelang2.h", 298))->next=litem_220;
                    __freed_obj__ = 0;
                    ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 299))->tail=litem_220;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 302))->len++;
            __freed_obj__ = 0;
            __result152__ = __result_obj__ = self;
            if(item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result152__;
            __freed_obj__ = 0;
            if(item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional307;
_Bool _if_conditional308;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional307=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 1))->v1!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional307) {
                        if(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 0))->v1 && !__freed_obj__) { ((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 0))->v1 = come_decrement_ref_count(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional308=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 2))->v2!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional308) {
                        if(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 1))->v2 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 1))->v2, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value263;
char* __dec_obj88;
void* right_value264;
struct sType* __dec_obj89;
struct tuple2$2charphsTypeph* __result153__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value263, 0, sizeof(void*));
memset(&right_value264, 0, sizeof(void*));
            __dec_obj88=((struct tuple2$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1804))->v1;
            ((struct tuple2$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1804))->v1=(char*)come_increment_ref_count(((char*)(right_value263=string_clone(v1))));
            if(__dec_obj88) { __dec_obj88 = come_decrement_ref_count(__dec_obj88, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value263);
            if(right_value263 && right_value263 != __result_obj__ && !__freed_obj__) { right_value263 = come_decrement_ref_count(right_value263, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value263;
            __freed_obj__ = 0;
            __dec_obj89=((struct tuple2$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1805))->v2;
            ((struct tuple2$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1805))->v2=(struct sType*)come_increment_ref_count(((struct sType*)(right_value264=sType_clone(v2))));
            if(__dec_obj89) { come_call_finalizer(sType_finalize,__dec_obj89, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value264);
            if(right_value264 && right_value264 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value264, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value264;
            __freed_obj__ = 0;
            __result153__ = __result_obj__ = self;
            if(self && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            if(v1 && !__freed_obj__) { v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 1, 0); }
            if(v2 && !__freed_obj__) { come_call_finalizer(sType_finalize,v2, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result153__;
            __freed_obj__ = 0;
            if(self && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            if(v1 && !__freed_obj__) { v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 1, 0); }
            if(v2 && !__freed_obj__) { come_call_finalizer(sType_finalize,v2, (void*)0, (void*)0, 0, 0, 1, 0); }
}

void init_module(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

_Bool new_project(int argc, char** argv){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value290;
char* project_name_221;
void* right_value291;
char* cc_222;
void* right_value292;
char* install_223;
void* right_value293;
char* libs_224;
void* right_value294;
char* os_225;
void* right_value295;
char* prefix_226;
void* right_value296;
char* cflags_227;
_Bool _or_conditional1;
void* right_value297;
void* right_value298;
void* right_value299;
void* right_value300;
void* right_value301;
void* right_value302;
void* right_value303;
void* right_value304;
void* right_value305;
void* right_value306;
void* right_value307;
void* right_value308;
void* right_value309;
void* right_value310;
void* right_value311;
void* right_value312;
void* right_value313;
void* right_value314;
void* right_value315;
void* right_value316;
void* right_value317;
void* right_value318;
void* right_value319;
void* right_value320;
void* right_value321;
_Bool __result154__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value290, 0, sizeof(void*));
memset(&project_name_221, 0, sizeof(char*));
memset(&right_value291, 0, sizeof(void*));
memset(&cc_222, 0, sizeof(char*));
memset(&right_value292, 0, sizeof(void*));
memset(&install_223, 0, sizeof(char*));
memset(&right_value293, 0, sizeof(void*));
memset(&libs_224, 0, sizeof(char*));
memset(&right_value294, 0, sizeof(void*));
memset(&os_225, 0, sizeof(char*));
memset(&right_value295, 0, sizeof(void*));
memset(&prefix_226, 0, sizeof(char*));
memset(&right_value296, 0, sizeof(void*));
memset(&cflags_227, 0, sizeof(char*));
memset(&right_value297, 0, sizeof(void*));
memset(&right_value298, 0, sizeof(void*));
memset(&right_value299, 0, sizeof(void*));
memset(&right_value300, 0, sizeof(void*));
memset(&right_value301, 0, sizeof(void*));
memset(&right_value302, 0, sizeof(void*));
memset(&right_value303, 0, sizeof(void*));
memset(&right_value304, 0, sizeof(void*));
memset(&right_value305, 0, sizeof(void*));
memset(&right_value306, 0, sizeof(void*));
memset(&right_value307, 0, sizeof(void*));
memset(&right_value308, 0, sizeof(void*));
memset(&right_value309, 0, sizeof(void*));
memset(&right_value310, 0, sizeof(void*));
memset(&right_value311, 0, sizeof(void*));
memset(&right_value312, 0, sizeof(void*));
memset(&right_value313, 0, sizeof(void*));
memset(&right_value314, 0, sizeof(void*));
memset(&right_value315, 0, sizeof(void*));
memset(&right_value316, 0, sizeof(void*));
memset(&right_value317, 0, sizeof(void*));
memset(&right_value318, 0, sizeof(void*));
memset(&right_value319, 0, sizeof(void*));
memset(&right_value320, 0, sizeof(void*));
memset(&right_value321, 0, sizeof(void*));
    project_name_221=(char*)come_increment_ref_count(((char*)(right_value290=__builtin_string(argv[2]))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value290);
    if(right_value290 && right_value290 != __result_obj__ && !__freed_obj__) { right_value290 = come_decrement_ref_count(right_value290, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value290;
    __freed_obj__ = 0;
    cc_222=(char*)come_increment_ref_count(((char*)(right_value291=__builtin_string("comelang2"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value291);
    if(right_value291 && right_value291 != __result_obj__ && !__freed_obj__) { right_value291 = come_decrement_ref_count(right_value291, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value291;
    __freed_obj__ = 0;
    install_223=(char*)come_increment_ref_count(((char*)(right_value292=__builtin_string("install"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value292);
    if(right_value292 && right_value292 != __result_obj__ && !__freed_obj__) { right_value292 = come_decrement_ref_count(right_value292, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value292;
    __freed_obj__ = 0;
    libs_224=(char*)come_increment_ref_count(((char*)(right_value293=__builtin_string("-lpcre"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value293);
    if(right_value293 && right_value293 != __result_obj__ && !__freed_obj__) { right_value293 = come_decrement_ref_count(right_value293, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value293;
    __freed_obj__ = 0;
    os_225=(char*)come_increment_ref_count(((char*)(right_value294=__builtin_string("linux"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value294);
    if(right_value294 && right_value294 != __result_obj__ && !__freed_obj__) { right_value294 = come_decrement_ref_count(right_value294, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value294;
    __freed_obj__ = 0;
    prefix_226=(char*)come_increment_ref_count(((char*)(right_value295=__builtin_string("/usr/local/"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value295);
    if(right_value295 && right_value295 != __result_obj__ && !__freed_obj__) { right_value295 = come_decrement_ref_count(right_value295, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[5] = right_value295;
    __freed_obj__ = 0;
    cflags_227=(char*)come_increment_ref_count(((char*)(right_value296=__builtin_string(" -common-header "))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value296);
    if(right_value296 && right_value296 != __result_obj__ && !__freed_obj__) { right_value296 = come_decrement_ref_count(right_value296, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[6] = right_value296;
    __freed_obj__ = 0;
    if(_or_conditional1=mkdir(project_name_221,(256|128|64)|((256|128|64)>>3)|((256>>3)>>3)|((64>>3)>>3)),    __freed_obj__ = 0, 
    _or_conditional1 != 0) {
        die("mkdir error");
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    come_clear_stackframe();
    optional$2intbool_value((come_push_stackframe("02transpile.c", 531),((struct optional$2intbool*)(right_value321=charp_write(((char*)come_null_check(((char*)(right_value318=xsprintf("\#########################################\n\# istalled directories\n\#########################################\nprefix=\%s\nexec_prefix=${prefix}\nbindir=${exec_prefix}/bin\ndatadir=${datarootdir}\nmandir=${datarootdir}/man\nsharedstatedir=${prefix}/\%s\nsysconfdir=${prefix}/etc/\%s\nincludedir=${prefix}/include/\%s\ndatarootdir=${prefix}/share/\%s\ndocdir=${datarootdir}/doc\nlibdir=${exec_prefix}/lib\n\n\#########################################\n\# environmnet variables\n\#########################################\nCC=\%s\nINSTALL=\%s\nCFLAGS=\%s\nLIBS=\%s\nOS=\%s\nDESTDIR=\%s\nSRCS=$(wildcard *.c)\nSINGLE_SRCS=$(filter-out %%.c.c, $(SRCS))\nOBJS=$(SINGLE_SRCS:.c=.o)\nTARGET=\%s\n\n\#########################################\n\# main\n\#########################################\nall: common.h \%s\n\n$(TARGET): $(OBJS)\n\t$(CC) $(CFLAGS) $^ -o $@\n\n%%.o: %%.c header\n\t$(CC) $(CFLAGS) -c $< -o $@\n\n\#########################################\n\# header\n\#########################################\n\nheader:\n\tcomelang2 header $(SINGLE_SRCS)\n\n\n\ncommon.h: *.c\n\tbash -c 'shopt -s extglob; comelang2 header !(*.c).c'\n\n\#########################################\n\# install\n\#########################################\ninstall:\n\tmkdir -p \"$(DESTDIR)/bin\"\n\t$(INSTALL) -m 755 ./\%s \"$(DESTDIR)/bin\"\n\tmkdir -p \"$(DESTDIR)/include\"\n\tmkdir -p \"$(DESTDIR)/lib\"\n\tmkdir -p \"$(DESTDIR)/share/doc/\%s\"\n\t$(INSTALL) -m 644 README.md \"$(DESTDIR)/share/doc/\%s/README.md\"\n\n\#########################################\n\# clean\n\#########################################\nclean:\n\trm -fR *.o *.c.i *.c.out *.c.c \%s\n\ndistclean: clean\n\trm -fR config.h Makefile autom4te.cache\n\n\#########################################\n\# uninstall\n\#########################################\nuninstall:\n\trm -f \"$(DESTDIR)\"/bin/\%s\n\trm -f \"$(DESTDIR)/share/doc/\%s/README.md\"\n\nrun: \%s\n\t./\%s\n",((char*)(right_value297=string_to_string(prefix_226))),((char*)(right_value298=string_to_string(project_name_221))),((char*)(right_value299=string_to_string(project_name_221))),((char*)(right_value300=string_to_string(project_name_221))),((char*)(right_value301=string_to_string(project_name_221))),((char*)(right_value302=string_to_string(cc_222))),((char*)(right_value303=string_to_string(install_223))),((char*)(right_value304=string_to_string(cflags_227))),((char*)(right_value305=string_to_string(libs_224))),((char*)(right_value306=string_to_string(os_225))),((char*)(right_value307=string_to_string(prefix_226))),((char*)(right_value308=string_to_string(project_name_221))),((char*)(right_value309=string_to_string(project_name_221))),((char*)(right_value310=string_to_string(project_name_221))),((char*)(right_value311=string_to_string(project_name_221))),((char*)(right_value312=string_to_string(project_name_221))),((char*)(right_value313=string_to_string(project_name_221))),((char*)(right_value314=string_to_string(project_name_221))),((char*)(right_value315=string_to_string(project_name_221))),((char*)(right_value316=string_to_string(project_name_221))),((char*)(right_value317=string_to_string(project_name_221)))))), "02transpile.c", 531)),((char*)(right_value320=xsprintf("\%s/Makefile",((char*)(right_value319=string_to_string(project_name_221)))))),(_Bool)0)))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value297);
    if(right_value297 && right_value297 != __result_obj__ && !__freed_obj__) { right_value297 = come_decrement_ref_count(right_value297, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[7] = right_value297;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value298);
    if(right_value298 && right_value298 != __result_obj__ && !__freed_obj__) { right_value298 = come_decrement_ref_count(right_value298, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[8] = right_value298;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 9, right_value299);
    if(right_value299 && right_value299 != __result_obj__ && !__freed_obj__) { right_value299 = come_decrement_ref_count(right_value299, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[9] = right_value299;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 10, right_value300);
    if(right_value300 && right_value300 != __result_obj__ && !__freed_obj__) { right_value300 = come_decrement_ref_count(right_value300, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[10] = right_value300;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 11, right_value301);
    if(right_value301 && right_value301 != __result_obj__ && !__freed_obj__) { right_value301 = come_decrement_ref_count(right_value301, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[11] = right_value301;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 12, right_value302);
    if(right_value302 && right_value302 != __result_obj__ && !__freed_obj__) { right_value302 = come_decrement_ref_count(right_value302, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[12] = right_value302;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 13, right_value303);
    if(right_value303 && right_value303 != __result_obj__ && !__freed_obj__) { right_value303 = come_decrement_ref_count(right_value303, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[13] = right_value303;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 14, right_value304);
    if(right_value304 && right_value304 != __result_obj__ && !__freed_obj__) { right_value304 = come_decrement_ref_count(right_value304, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[14] = right_value304;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 15, right_value305);
    if(right_value305 && right_value305 != __result_obj__ && !__freed_obj__) { right_value305 = come_decrement_ref_count(right_value305, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[15] = right_value305;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 16, right_value306);
    if(right_value306 && right_value306 != __result_obj__ && !__freed_obj__) { right_value306 = come_decrement_ref_count(right_value306, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[16] = right_value306;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 17, right_value307);
    if(right_value307 && right_value307 != __result_obj__ && !__freed_obj__) { right_value307 = come_decrement_ref_count(right_value307, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[17] = right_value307;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 18, right_value308);
    if(right_value308 && right_value308 != __result_obj__ && !__freed_obj__) { right_value308 = come_decrement_ref_count(right_value308, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[18] = right_value308;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 19, right_value309);
    if(right_value309 && right_value309 != __result_obj__ && !__freed_obj__) { right_value309 = come_decrement_ref_count(right_value309, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[19] = right_value309;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 20, right_value310);
    if(right_value310 && right_value310 != __result_obj__ && !__freed_obj__) { right_value310 = come_decrement_ref_count(right_value310, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[20] = right_value310;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 21, right_value311);
    if(right_value311 && right_value311 != __result_obj__ && !__freed_obj__) { right_value311 = come_decrement_ref_count(right_value311, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[21] = right_value311;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 22, right_value312);
    if(right_value312 && right_value312 != __result_obj__ && !__freed_obj__) { right_value312 = come_decrement_ref_count(right_value312, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[22] = right_value312;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 23, right_value313);
    if(right_value313 && right_value313 != __result_obj__ && !__freed_obj__) { right_value313 = come_decrement_ref_count(right_value313, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[23] = right_value313;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 24, right_value314);
    if(right_value314 && right_value314 != __result_obj__ && !__freed_obj__) { right_value314 = come_decrement_ref_count(right_value314, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[24] = right_value314;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 25, right_value315);
    if(right_value315 && right_value315 != __result_obj__ && !__freed_obj__) { right_value315 = come_decrement_ref_count(right_value315, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[25] = right_value315;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 26, right_value316);
    if(right_value316 && right_value316 != __result_obj__ && !__freed_obj__) { right_value316 = come_decrement_ref_count(right_value316, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[26] = right_value316;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 27, right_value317);
    if(right_value317 && right_value317 != __result_obj__ && !__freed_obj__) { right_value317 = come_decrement_ref_count(right_value317, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[27] = right_value317;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 28, right_value318);
    if(right_value318 && right_value318 != __result_obj__ && !__freed_obj__) { right_value318 = come_decrement_ref_count(right_value318, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[28] = right_value318;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 29, right_value319);
    if(right_value319 && right_value319 != __result_obj__ && !__freed_obj__) { right_value319 = come_decrement_ref_count(right_value319, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[29] = right_value319;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 30, right_value320);
    if(right_value320 && right_value320 != __result_obj__ && !__freed_obj__) { right_value320 = come_decrement_ref_count(right_value320, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[30] = right_value320;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 31, right_value321);
    if(right_value321 && right_value321 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value321, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[31] = right_value321;
    __freed_obj__ = 0;
    __result154__ = (_Bool)1;
    if(project_name_221 && !__freed_obj__) { project_name_221 = come_decrement_ref_count(project_name_221, (void*)0, (void*)0, 0, 0, 0); }
    if(cc_222 && !__freed_obj__) { cc_222 = come_decrement_ref_count(cc_222, (void*)0, (void*)0, 0, 0, 0); }
    if(install_223 && !__freed_obj__) { install_223 = come_decrement_ref_count(install_223, (void*)0, (void*)0, 0, 0, 0); }
    if(libs_224 && !__freed_obj__) { libs_224 = come_decrement_ref_count(libs_224, (void*)0, (void*)0, 0, 0, 0); }
    if(os_225 && !__freed_obj__) { os_225 = come_decrement_ref_count(os_225, (void*)0, (void*)0, 0, 0, 0); }
    if(prefix_226 && !__freed_obj__) { prefix_226 = come_decrement_ref_count(prefix_226, (void*)0, (void*)0, 0, 0, 0); }
    if(cflags_227 && !__freed_obj__) { cflags_227 = come_decrement_ref_count(cflags_227, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result154__;
    __freed_obj__ = 0;
    if(project_name_221 && !__freed_obj__) { project_name_221 = come_decrement_ref_count(project_name_221, (void*)0, (void*)0, 0, 0, 0); }
    if(cc_222 && !__freed_obj__) { cc_222 = come_decrement_ref_count(cc_222, (void*)0, (void*)0, 0, 0, 0); }
    if(install_223 && !__freed_obj__) { install_223 = come_decrement_ref_count(install_223, (void*)0, (void*)0, 0, 0, 0); }
    if(libs_224 && !__freed_obj__) { libs_224 = come_decrement_ref_count(libs_224, (void*)0, (void*)0, 0, 0, 0); }
    if(os_225 && !__freed_obj__) { os_225 = come_decrement_ref_count(os_225, (void*)0, (void*)0, 0, 0, 0); }
    if(prefix_226 && !__freed_obj__) { prefix_226 = come_decrement_ref_count(prefix_226, (void*)0, (void*)0, 0, 0, 0); }
    if(cflags_227 && !__freed_obj__) { cflags_227 = come_decrement_ref_count(cflags_227, (void*)0, (void*)0, 0, 0, 0); }
}

_Bool run_project(int argc, char** argv){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _or_conditional2;
_Bool __result155__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_or_conditional2=system("make run"),    __freed_obj__ = 0, 
    _or_conditional2 != 0) {
        die("system");
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result155__ = (_Bool)1;
    __freed_obj__ = 0;
    return __result155__;
    __freed_obj__ = 0;
}

int come_main_v2(int argc, char** argv){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional310;
void* right_value322;
void* right_value323;
struct buffer* clang_option_228;
void* right_value324;
void* right_value325;
struct buffer* cpp_option_229;
void* right_value326;
void* right_value327;
struct list$1charph* files_230;
void* right_value328;
void* right_value329;
struct list$1charph* object_files_231;
_Bool output_object_file_232;
_Bool output_cpp_file_233;
_Bool output_source_file_flag_234;
void* right_value330;
char* output_file_name_235;
_Bool verbose_236;
_Bool prohibit_common_header_237;
int i_238;
_Bool _for_condtionalA16;
_Bool _if_conditional311;
void* right_value331;
char* __dec_obj90;
_Bool _if_conditional312;
_Bool _if_conditional313;
_Bool _if_conditional314;
_Bool _if_conditional315;
_Bool _if_conditional316;
void* right_value332;
void* right_value333;
_Bool _if_conditional317;
_Bool _if_conditional318;
_Bool _if_conditional319;
_Bool _if_conditional320;
_Bool _if_conditional321;
_Bool _if_conditional322;
void* right_value334;
_Bool _if_conditional323;
void* right_value335;
void* right_value336;
struct _IO_FILE* f_239;
_Bool _and_conditional1;
_Bool _or_conditional3;
struct list$1charph* o2_saved_240;
char* it_241;
_Bool _for_condtionalA17;
struct sInfo info_242;
void* right_value337;
char* __dec_obj91;
void* right_value338;
char* __dec_obj92;
void* right_value339;
char* __dec_obj93;
void* right_value340;
char* __dec_obj94;
void* right_value341;
void* right_value347;
struct map$2charphsFunph* __dec_obj96;
void* right_value348;
void* right_value354;
struct map$2charphsGenericsFunph* __dec_obj98;
void* right_value355;
void* right_value361;
struct map$2charphsClassph* __dec_obj100;
void* right_value362;
void* right_value368;
struct map$2charphsTypeph* __dec_obj102;
void* right_value369;
void* right_value370;
struct sModule* __dec_obj103;
void* right_value371;
void* right_value372;
struct list$1sRightValueObjectph* __dec_obj104;
void* right_value373;
void* right_value374;
struct list$1CVALUEph* __dec_obj105;
void* right_value375;
void* right_value376;
struct sVarTable* __dec_obj106;
void* right_value377;
void* right_value378;
struct sVarTable* lv_table_259;
void* right_value379;
void* right_value380;
struct list$1charph* __dec_obj107;
void* right_value381;
void* right_value382;
struct map$2charphsClassph* __dec_obj108;
static int n_260=0;
void* right_value383;
char* __dec_obj109;
_Bool _if_conditional360;
void* right_value384;
void* right_value385;
void* right_value386;
struct buffer* __dec_obj110;
void* right_value387;
void* right_value388;
void* right_value389;
struct buffer* __dec_obj111;
_Bool _if_conditional361;
_Bool _if_conditional362;
_Bool _if_conditional386;
_Bool _if_conditional387;
int __result163__;
_Bool _if_conditional388;
_Bool _if_conditional389;
int __result164__;
void* right_value390;
void* right_value391;
struct buffer* clang_option_261;
void* right_value392;
void* right_value393;
struct buffer* cpp_option_262;
void* right_value394;
void* right_value395;
struct list$1charph* files_263;
void* right_value396;
void* right_value397;
struct list$1charph* object_files_264;
_Bool output_object_file_265;
_Bool output_cpp_file_266;
_Bool output_source_file_flag_267;
char* output_file_name_268;
_Bool verbose_269;
int i_270;
_Bool _for_condtionalA30;
_Bool _if_conditional390;
void* right_value398;
char* __dec_obj112;
_Bool _if_conditional391;
_Bool _if_conditional392;
_Bool _if_conditional393;
_Bool _if_conditional394;
_Bool _if_conditional395;
void* right_value399;
void* right_value400;
_Bool _if_conditional396;
_Bool _if_conditional397;
_Bool _if_conditional398;
_Bool _if_conditional399;
_Bool _if_conditional400;
_Bool _if_conditional401;
void* right_value401;
_Bool _if_conditional402;
void* right_value402;
void* right_value403;
void* right_value404;
struct list$1charph* o2_saved_271;
char* it_272;
_Bool _for_condtionalA31;
struct sInfo info_273;
void* right_value405;
char* __dec_obj113;
void* right_value406;
char* __dec_obj114;
void* right_value407;
char* __dec_obj115;
void* right_value408;
void* right_value409;
struct map$2charphsFunph* __dec_obj116;
void* right_value410;
void* right_value411;
struct map$2charphsGenericsFunph* __dec_obj117;
void* right_value412;
void* right_value413;
struct map$2charphsClassph* __dec_obj118;
void* right_value414;
void* right_value415;
struct map$2charphsTypeph* __dec_obj119;
void* right_value416;
void* right_value417;
struct sModule* __dec_obj120;
void* right_value418;
void* right_value419;
struct list$1sRightValueObjectph* __dec_obj121;
void* right_value420;
void* right_value421;
struct list$1CVALUEph* __dec_obj122;
void* right_value422;
void* right_value423;
struct sVarTable* __dec_obj123;
void* right_value424;
void* right_value425;
struct sVarTable* lv_table_274;
void* right_value426;
void* right_value427;
struct list$1charph* __dec_obj124;
void* right_value428;
void* right_value429;
struct map$2charphsClassph* __dec_obj125;
_Bool _if_conditional403;
void* right_value430;
void* right_value431;
void* right_value432;
struct buffer* __dec_obj126;
void* right_value433;
void* right_value434;
void* right_value435;
struct buffer* __dec_obj127;
_Bool _if_conditional404;
void* right_value436;
char* __dec_obj128;
char* __dec_obj129;
_Bool _if_conditional405;
_Bool _if_conditional406;
_Bool _if_conditional407;
_Bool _if_conditional408;
_Bool _if_conditional409;
struct sInfo info_275;
void* right_value441;
void* right_value442;
char* __dec_obj131;
void* right_value443;
char* __dec_obj132;
_Bool _if_conditional412;
void* right_value444;
char* __dec_obj133;
char* __dec_obj134;
struct __current_stack2__ __current_stack2__;
int __result168__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value322, 0, sizeof(void*));
memset(&right_value323, 0, sizeof(void*));
memset(&clang_option_228, 0, sizeof(struct buffer*));
memset(&right_value324, 0, sizeof(void*));
memset(&right_value325, 0, sizeof(void*));
memset(&cpp_option_229, 0, sizeof(struct buffer*));
memset(&right_value326, 0, sizeof(void*));
memset(&right_value327, 0, sizeof(void*));
memset(&files_230, 0, sizeof(struct list$1charph*));
memset(&right_value328, 0, sizeof(void*));
memset(&right_value329, 0, sizeof(void*));
memset(&object_files_231, 0, sizeof(struct list$1charph*));
memset(&output_object_file_232, 0, sizeof(_Bool));
memset(&output_cpp_file_233, 0, sizeof(_Bool));
memset(&output_source_file_flag_234, 0, sizeof(_Bool));
memset(&right_value330, 0, sizeof(void*));
memset(&output_file_name_235, 0, sizeof(char*));
memset(&verbose_236, 0, sizeof(_Bool));
memset(&prohibit_common_header_237, 0, sizeof(_Bool));
memset(&i_238, 0, sizeof(int));
memset(&right_value331, 0, sizeof(void*));
memset(&right_value332, 0, sizeof(void*));
memset(&right_value333, 0, sizeof(void*));
memset(&right_value334, 0, sizeof(void*));
memset(&right_value335, 0, sizeof(void*));
memset(&right_value336, 0, sizeof(void*));
memset(&f_239, 0, sizeof(struct _IO_FILE*));
memset(&o2_saved_240, 0, sizeof(struct list$1charph*));
memset(&it_241, 0, sizeof(char*));
memset(&info_242, 0, sizeof(struct sInfo));
memset(&right_value337, 0, sizeof(void*));
memset(&right_value338, 0, sizeof(void*));
memset(&right_value339, 0, sizeof(void*));
memset(&right_value340, 0, sizeof(void*));
memset(&right_value341, 0, sizeof(void*));
memset(&right_value347, 0, sizeof(void*));
memset(&right_value348, 0, sizeof(void*));
memset(&right_value354, 0, sizeof(void*));
memset(&right_value355, 0, sizeof(void*));
memset(&right_value361, 0, sizeof(void*));
memset(&right_value362, 0, sizeof(void*));
memset(&right_value368, 0, sizeof(void*));
memset(&right_value369, 0, sizeof(void*));
memset(&right_value370, 0, sizeof(void*));
memset(&right_value371, 0, sizeof(void*));
memset(&right_value372, 0, sizeof(void*));
memset(&right_value373, 0, sizeof(void*));
memset(&right_value374, 0, sizeof(void*));
memset(&right_value375, 0, sizeof(void*));
memset(&right_value376, 0, sizeof(void*));
memset(&right_value377, 0, sizeof(void*));
memset(&right_value378, 0, sizeof(void*));
memset(&lv_table_259, 0, sizeof(struct sVarTable*));
memset(&right_value379, 0, sizeof(void*));
memset(&right_value380, 0, sizeof(void*));
memset(&right_value381, 0, sizeof(void*));
memset(&right_value382, 0, sizeof(void*));
memset(&right_value383, 0, sizeof(void*));
memset(&right_value384, 0, sizeof(void*));
memset(&right_value385, 0, sizeof(void*));
memset(&right_value386, 0, sizeof(void*));
memset(&right_value387, 0, sizeof(void*));
memset(&right_value388, 0, sizeof(void*));
memset(&right_value389, 0, sizeof(void*));
memset(&right_value390, 0, sizeof(void*));
memset(&right_value391, 0, sizeof(void*));
memset(&clang_option_261, 0, sizeof(struct buffer*));
memset(&right_value392, 0, sizeof(void*));
memset(&right_value393, 0, sizeof(void*));
memset(&cpp_option_262, 0, sizeof(struct buffer*));
memset(&right_value394, 0, sizeof(void*));
memset(&right_value395, 0, sizeof(void*));
memset(&files_263, 0, sizeof(struct list$1charph*));
memset(&right_value396, 0, sizeof(void*));
memset(&right_value397, 0, sizeof(void*));
memset(&object_files_264, 0, sizeof(struct list$1charph*));
memset(&output_object_file_265, 0, sizeof(_Bool));
memset(&output_cpp_file_266, 0, sizeof(_Bool));
memset(&output_source_file_flag_267, 0, sizeof(_Bool));
memset(&output_file_name_268, 0, sizeof(char*));
memset(&verbose_269, 0, sizeof(_Bool));
memset(&i_270, 0, sizeof(int));
memset(&right_value398, 0, sizeof(void*));
memset(&right_value399, 0, sizeof(void*));
memset(&right_value400, 0, sizeof(void*));
memset(&right_value401, 0, sizeof(void*));
memset(&right_value402, 0, sizeof(void*));
memset(&right_value403, 0, sizeof(void*));
memset(&right_value404, 0, sizeof(void*));
memset(&o2_saved_271, 0, sizeof(struct list$1charph*));
memset(&it_272, 0, sizeof(char*));
memset(&info_273, 0, sizeof(struct sInfo));
memset(&right_value405, 0, sizeof(void*));
memset(&right_value406, 0, sizeof(void*));
memset(&right_value407, 0, sizeof(void*));
memset(&right_value408, 0, sizeof(void*));
memset(&right_value409, 0, sizeof(void*));
memset(&right_value410, 0, sizeof(void*));
memset(&right_value411, 0, sizeof(void*));
memset(&right_value412, 0, sizeof(void*));
memset(&right_value413, 0, sizeof(void*));
memset(&right_value414, 0, sizeof(void*));
memset(&right_value415, 0, sizeof(void*));
memset(&right_value416, 0, sizeof(void*));
memset(&right_value417, 0, sizeof(void*));
memset(&right_value418, 0, sizeof(void*));
memset(&right_value419, 0, sizeof(void*));
memset(&right_value420, 0, sizeof(void*));
memset(&right_value421, 0, sizeof(void*));
memset(&right_value422, 0, sizeof(void*));
memset(&right_value423, 0, sizeof(void*));
memset(&right_value424, 0, sizeof(void*));
memset(&right_value425, 0, sizeof(void*));
memset(&lv_table_274, 0, sizeof(struct sVarTable*));
memset(&right_value426, 0, sizeof(void*));
memset(&right_value427, 0, sizeof(void*));
memset(&right_value428, 0, sizeof(void*));
memset(&right_value429, 0, sizeof(void*));
memset(&right_value430, 0, sizeof(void*));
memset(&right_value431, 0, sizeof(void*));
memset(&right_value432, 0, sizeof(void*));
memset(&right_value433, 0, sizeof(void*));
memset(&right_value434, 0, sizeof(void*));
memset(&right_value435, 0, sizeof(void*));
memset(&right_value436, 0, sizeof(void*));
memset(&info_275, 0, sizeof(struct sInfo));
memset(&right_value441, 0, sizeof(void*));
memset(&right_value442, 0, sizeof(void*));
memset(&right_value443, 0, sizeof(void*));
memset(&right_value444, 0, sizeof(void*));
memset(&__current_stack2__, 0, sizeof(struct __current_stack2__));
    if(_if_conditional310=charp_operator_equals(argv[1],"header")&&argc>=3,    __freed_obj__ = 0, 
    _if_conditional310) {
        gProgramName=argv[0];
        __freed_obj__ = 0;
        clang_option_228=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value323=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value322=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 548))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value322);
        if(right_value322 && right_value322 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value322, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value322;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value323);
        if(right_value323 && right_value323 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value323, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value323;
        __freed_obj__ = 0;
        cpp_option_229=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value325=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value324=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 549))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value324);
        if(right_value324 && right_value324 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value324, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value324;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value325);
        if(right_value325 && right_value325 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value325, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value325;
        __freed_obj__ = 0;
        files_230=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value327=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value326=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 550))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value326);
        if(right_value326 && right_value326 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value326, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[4] = right_value326;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value327);
        if(right_value327 && right_value327 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value327, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[5] = right_value327;
        __freed_obj__ = 0;
        object_files_231=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value329=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value328=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 551))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value328);
        if(right_value328 && right_value328 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value328, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[6] = right_value328;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value329);
        if(right_value329 && right_value329 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value329, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[7] = right_value329;
        __freed_obj__ = 0;
        output_object_file_232=(_Bool)0;
        __freed_obj__ = 0;
        output_cpp_file_233=(_Bool)0;
        __freed_obj__ = 0;
        output_source_file_flag_234=(_Bool)0;
        __freed_obj__ = 0;
        output_file_name_235=(char*)come_increment_ref_count(((char*)(right_value330=__builtin_string("common.h"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value330);
        if(right_value330 && right_value330 != __result_obj__ && !__freed_obj__) { right_value330 = come_decrement_ref_count(right_value330, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[8] = right_value330;
        __freed_obj__ = 0;
        verbose_236=(_Bool)0;
        __freed_obj__ = 0;
        prohibit_common_header_237=(_Bool)0;
        __freed_obj__ = 0;
        for(
        i_238=2 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA16=        i_238<argc ,        __freed_obj__ = 0, 
        _for_condtionalA16;        i_238++ ,        __freed_obj__ = 0, 
        0        ){
            if(_if_conditional311=charp_operator_equals(argv[i_238],"-o")&&i_238+1<argc,            __freed_obj__ = 0, 
            _if_conditional311) {
                __dec_obj90=output_file_name_235;
                output_file_name_235=(char*)come_increment_ref_count(((char*)(right_value331=__builtin_string(argv[i_238+1]))));
                if(__dec_obj90) { __dec_obj90 = come_decrement_ref_count(__dec_obj90, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value331);
                if(right_value331 && right_value331 != __result_obj__ && !__freed_obj__) { right_value331 = come_decrement_ref_count(right_value331, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value331;
                __freed_obj__ = 0;
                i_238++;
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional312=charp_operator_equals(argv[i_238],"-str"),                __freed_obj__ = 0, 
                _if_conditional312) {
                    buffer_append_str(((struct buffer*)come_null_check(clang_option_228, "02transpile.c", 564))," -lcomelang2-str -lpcre ");
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional313=charp_operator_equals(argv[i_238],"-g"),                    __freed_obj__ = 0, 
                    _if_conditional313) {
                        buffer_append_str(((struct buffer*)come_null_check(clang_option_228, "02transpile.c", 567)),"-g ");
                        __freed_obj__ = 0;
                        gComeDebug=(_Bool)1;
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional314=charp_operator_equals(argv[i_238],"-common-header"),                        __freed_obj__ = 0, 
                        _if_conditional314) {
                            gCommonHeader=(_Bool)1;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional315=charp_operator_equals(argv[i_238],"-v"),                            __freed_obj__ = 0, 
                            _if_conditional315) {
                                buffer_append_str(((struct buffer*)come_null_check(clang_option_228, "02transpile.c", 574)),"-v ");
                                __freed_obj__ = 0;
                                verbose_236=(_Bool)1;
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional316=memcmp(argv[i_238],"-I",strlen("-I"))==0,                                __freed_obj__ = 0, 
                                _if_conditional316) {
                                    buffer_append_str(((struct buffer*)come_null_check(cpp_option_229, "02transpile.c", 578)),((char*)(right_value333=charp_operator_add(" ",((char*)(right_value332=charp_operator_add(argv[i_238]," ")))))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value332);
                                    if(right_value332 && right_value332 != __result_obj__ && !__freed_obj__) { right_value332 = come_decrement_ref_count(right_value332, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value332;
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value333);
                                    if(right_value333 && right_value333 != __result_obj__ && !__freed_obj__) { right_value333 = come_decrement_ref_count(right_value333, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[1] = right_value333;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    if(_if_conditional317=charp_operator_equals(argv[i_238],"-gdwarf-4"),                                    __freed_obj__ = 0, 
                                    _if_conditional317) {
                                        buffer_append_str(((struct buffer*)come_null_check(clang_option_228, "02transpile.c", 581)),"-gdwarf-4 ");
                                        __freed_obj__ = 0;
                                        gComeDebug=(_Bool)1;
                                        __freed_obj__ = 0;
                                    }
                                    else {
                                        if(_if_conditional318=charp_operator_equals(argv[i_238],"-gc"),                                        __freed_obj__ = 0, 
                                        _if_conditional318) {
                                            gComeGC=(_Bool)1;
                                            __freed_obj__ = 0;
                                        }
                                        else {
                                            if(_if_conditional319=charp_operator_equals(argv[i_238],"-s")||charp_operator_equals(argv[i_238],"-S"),                                            __freed_obj__ = 0, 
                                            _if_conditional319) {
                                                output_source_file_flag_234=(_Bool)1;
                                                __freed_obj__ = 0;
                                            }
                                            else {
                                                if(_if_conditional320=charp_operator_equals(argv[i_238],"-c"),                                                __freed_obj__ = 0, 
                                                _if_conditional320) {
                                                    output_object_file_232=(_Bool)1;
                                                    __freed_obj__ = 0;
                                                }
                                                else {
                                                    if(_if_conditional321=charp_operator_equals(argv[i_238],"-E"),                                                    __freed_obj__ = 0, 
                                                    _if_conditional321) {
                                                        output_cpp_file_233=(_Bool)1;
                                                        __freed_obj__ = 0;
                                                    }
                                                    else {
                                                        if(_if_conditional322=argv[i_238][0]==45,                                                        __freed_obj__ = 0, 
                                                        _if_conditional322) {
                                                            buffer_append_str(((struct buffer*)come_null_check(clang_option_228, "02transpile.c", 597)),((char*)(right_value334=charp_operator_add(argv[i_238]," "))));
                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value334);
                                                            if(right_value334 && right_value334 != __result_obj__ && !__freed_obj__) { right_value334 = come_decrement_ref_count(right_value334, (void*)0, (void*)0, 1, 0, 0); }
                                                            __right_value_freed_obj[0] = right_value334;
                                                            __freed_obj__ = 0;
                                                        }
                                                        else {
                                                            if(_if_conditional323=memcmp(argv[i_238]+strlen(argv[i_238])-2,".o",2)==0,                                                            __freed_obj__ = 0, 
                                                            _if_conditional323) {
                                                                list$1charph_push_back(((struct list$1charph*)come_null_check(object_files_231, "02transpile.c", 600)),(char*)come_increment_ref_count(((char*)(right_value335=__builtin_string(argv[i_238])))));
                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value335);
                                                                if(right_value335 && right_value335 != __result_obj__ && !__freed_obj__) { right_value335 = come_decrement_ref_count(right_value335, (void*)0, (void*)0, 1, 0, 0); }
                                                                __right_value_freed_obj[0] = right_value335;
                                                                __freed_obj__ = 0;
                                                            }
                                                            else {
                                                                list$1charph_push_back(((struct list$1charph*)come_null_check(files_230, "02transpile.c", 603)),(char*)come_increment_ref_count(((char*)(right_value336=__builtin_string(argv[i_238])))));
                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value336);
                                                                if(right_value336 && right_value336 != __result_obj__ && !__freed_obj__) { right_value336 = come_decrement_ref_count(right_value336, (void*)0, (void*)0, 1, 0, 0); }
                                                                __right_value_freed_obj[0] = right_value336;
                                                                __freed_obj__ = 0;
                                                            }
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_and_conditional1=f_239=fopen(output_file_name_235,"w"),        __freed_obj__ = 0, 
        _and_conditional1 == 0) {
            die("fopen");
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        fclose(f_239);
        __freed_obj__ = 0;
        if(_or_conditional3=truncate(output_file_name_235,0),        __freed_obj__ = 0, 
        _or_conditional3 != 0) {
            die("truncate");
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        come_init_v5();
        __freed_obj__ = 0;
        for(
        o2_saved_240=(struct list$1charph*)come_increment_ref_count((files_230)),it_241=list$1charph_begin(((struct list$1charph*)come_null_check((o2_saved_240), "02transpile.c", 670))) ,        __freed_obj__ = 0, 
        0;        _for_condtionalA17=        !list$1charph_end(((struct list$1charph*)come_null_check((o2_saved_240), "02transpile.c", 670))) ,        __freed_obj__ = 0, 
        _for_condtionalA17;        it_241=list$1charph_next(((struct list$1charph*)come_null_check((o2_saved_240), "02transpile.c", 670))) ,        __freed_obj__ = 0, 
        0        ){
            __freed_obj__ = 0;
            memset(&info_242,0,sizeof(struct sInfo));
            __freed_obj__ = 0;
            __dec_obj91=info_242.base_sname;
            info_242.base_sname=(char*)come_increment_ref_count(((char*)(right_value337=__builtin_string(it_241))));
            if(__dec_obj91) { __dec_obj91 = come_decrement_ref_count(__dec_obj91, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value337);
            if(right_value337 && right_value337 != __result_obj__ && !__freed_obj__) { right_value337 = come_decrement_ref_count(right_value337, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value337;
            __freed_obj__ = 0;
            __dec_obj92=info_242.sname;
            info_242.sname=(char*)come_increment_ref_count(((char*)(right_value338=__builtin_string(it_241))));
            if(__dec_obj92) { __dec_obj92 = come_decrement_ref_count(__dec_obj92, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value338);
            if(right_value338 && right_value338 != __result_obj__ && !__freed_obj__) { right_value338 = come_decrement_ref_count(right_value338, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value338;
            __freed_obj__ = 0;
            info_242.sline=1;
            __freed_obj__ = 0;
            info_242.err_num=0;
            __freed_obj__ = 0;
            __dec_obj93=info_242.clang_option;
            info_242.clang_option=(char*)come_increment_ref_count(((char*)(right_value339=buffer_to_string(((struct buffer*)come_null_check(clang_option_228, "02transpile.c", 623))))));
            if(__dec_obj93) { __dec_obj93 = come_decrement_ref_count(__dec_obj93, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value339);
            if(right_value339 && right_value339 != __result_obj__ && !__freed_obj__) { right_value339 = come_decrement_ref_count(right_value339, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value339;
            __freed_obj__ = 0;
            __dec_obj94=info_242.cpp_option;
            info_242.cpp_option=(char*)come_increment_ref_count(((char*)(right_value340=buffer_to_string(((struct buffer*)come_null_check(cpp_option_229, "02transpile.c", 624))))));
            if(__dec_obj94) { __dec_obj94 = come_decrement_ref_count(__dec_obj94, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value340);
            if(right_value340 && right_value340 != __result_obj__ && !__freed_obj__) { right_value340 = come_decrement_ref_count(right_value340, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[3] = right_value340;
            __freed_obj__ = 0;
            info_242.no_output_err=(_Bool)0;
            __freed_obj__ = 0;
            __dec_obj96=info_242.funcs;
            info_242.funcs=(struct map$2charphsFunph*)come_increment_ref_count(((struct map$2charphsFunph*)(right_value347=map$2charphsFunph_initialize((struct map$2charphsFunph*)come_increment_ref_count(((struct map$2charphsFunph*)(right_value341=(struct map$2charphsFunph*)come_calloc(1, sizeof(struct map$2charphsFunph)*(1), "02transpile.c", 626))))))));
            if(__dec_obj96) { come_call_finalizer(map$2charphsFunph_finalize,__dec_obj96, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value341);
            if(right_value341 && right_value341 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsFunphp_finalize,right_value341, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[4] = right_value341;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value347);
            if(right_value347 && right_value347 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsFunphp_finalize,right_value347, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[5] = right_value347;
            __freed_obj__ = 0;
            __dec_obj98=info_242.generics_funcs;
            info_242.generics_funcs=(struct map$2charphsGenericsFunph*)come_increment_ref_count(((struct map$2charphsGenericsFunph*)(right_value354=map$2charphsGenericsFunph_initialize((struct map$2charphsGenericsFunph*)come_increment_ref_count(((struct map$2charphsGenericsFunph*)(right_value348=(struct map$2charphsGenericsFunph*)come_calloc(1, sizeof(struct map$2charphsGenericsFunph)*(1), "02transpile.c", 627))))))));
            if(__dec_obj98) { come_call_finalizer(map$2charphsGenericsFunph_finalize,__dec_obj98, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value348);
            if(right_value348 && right_value348 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsGenericsFunphp_finalize,right_value348, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[6] = right_value348;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value354);
            if(right_value354 && right_value354 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsGenericsFunphp_finalize,right_value354, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[7] = right_value354;
            __freed_obj__ = 0;
            __dec_obj100=info_242.classes;
            info_242.classes=(struct map$2charphsClassph*)come_increment_ref_count(((struct map$2charphsClassph*)(right_value361=map$2charphsClassph_initialize((struct map$2charphsClassph*)come_increment_ref_count(((struct map$2charphsClassph*)(right_value355=(struct map$2charphsClassph*)come_calloc(1, sizeof(struct map$2charphsClassph)*(1), "02transpile.c", 628))))))));
            if(__dec_obj100) { come_call_finalizer(map$2charphsClassph_finalize,__dec_obj100, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value355);
            if(right_value355 && right_value355 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsClassphp_finalize,right_value355, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[8] = right_value355;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 9, right_value361);
            if(right_value361 && right_value361 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsClassphp_finalize,right_value361, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[9] = right_value361;
            __freed_obj__ = 0;
            __dec_obj102=info_242.types;
            info_242.types=(struct map$2charphsTypeph*)come_increment_ref_count(((struct map$2charphsTypeph*)(right_value368=map$2charphsTypeph_initialize((struct map$2charphsTypeph*)come_increment_ref_count(((struct map$2charphsTypeph*)(right_value362=(struct map$2charphsTypeph*)come_calloc(1, sizeof(struct map$2charphsTypeph)*(1), "02transpile.c", 629))))))));
            if(__dec_obj102) { come_call_finalizer(map$2charphsTypeph_finalize,__dec_obj102, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 10, right_value362);
            if(right_value362 && right_value362 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsTypephp_finalize,right_value362, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[10] = right_value362;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 11, right_value368);
            if(right_value368 && right_value368 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsTypephp_finalize,right_value368, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[11] = right_value368;
            __freed_obj__ = 0;
            __dec_obj103=info_242.module;
            info_242.module=(struct sModule*)come_increment_ref_count(((struct sModule*)(right_value370=sModule_initialize((struct sModule*)come_increment_ref_count(((struct sModule*)(right_value369=(struct sModule*)come_calloc(1, sizeof(struct sModule)*(1), "02transpile.c", 630))))))));
            if(__dec_obj103) { come_call_finalizer(sModule_finalize,__dec_obj103, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 12, right_value369);
            if(right_value369 && right_value369 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sModule_finalize,right_value369, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[12] = right_value369;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 13, right_value370);
            if(right_value370 && right_value370 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sModule_finalize,right_value370, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[13] = right_value370;
            __freed_obj__ = 0;
            __dec_obj104=info_242.right_value_objects;
            info_242.right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(((struct list$1sRightValueObjectph*)(right_value372=list$1sRightValueObjectph_initialize((struct list$1sRightValueObjectph*)come_increment_ref_count(((struct list$1sRightValueObjectph*)(right_value371=(struct list$1sRightValueObjectph*)come_calloc(1, sizeof(struct list$1sRightValueObjectph)*(1), "02transpile.c", 631))))))));
            if(__dec_obj104) { come_call_finalizer(list$1sRightValueObjectph_finalize,__dec_obj104, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 14, right_value371);
            if(right_value371 && right_value371 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sRightValueObjectphp_finalize,right_value371, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[14] = right_value371;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 15, right_value372);
            if(right_value372 && right_value372 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sRightValueObjectphp_finalize,right_value372, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[15] = right_value372;
            __freed_obj__ = 0;
            __dec_obj105=info_242.stack;
            info_242.stack=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value374=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value373=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "02transpile.c", 632))))))));
            if(__dec_obj105) { come_call_finalizer(list$1CVALUEph_finalize,__dec_obj105, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 16, right_value373);
            if(right_value373 && right_value373 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value373, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[16] = right_value373;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 17, right_value374);
            if(right_value374 && right_value374 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value374, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[17] = right_value374;
            __freed_obj__ = 0;
            __dec_obj106=info_242.gv_table;
            info_242.gv_table=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value376=sVarTable_initialize((struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value375=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "02transpile.c", 633)))),(_Bool)1,((void*)0)))));
            if(__dec_obj106) { come_call_finalizer(sVarTable_finalize,__dec_obj106, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 18, right_value375);
            if(right_value375 && right_value375 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,right_value375, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[18] = right_value375;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 19, right_value376);
            if(right_value376 && right_value376 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,right_value376, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[19] = right_value376;
            __freed_obj__ = 0;
            lv_table_259=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value378=sVarTable_initialize((struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value377=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "02transpile.c", 634)))),(_Bool)0,((void*)0)))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 20, right_value377);
            if(right_value377 && right_value377 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,right_value377, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[20] = right_value377;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 21, right_value378);
            if(right_value378 && right_value378 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,right_value378, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[21] = right_value378;
            __freed_obj__ = 0;
            info_242.lv_table=lv_table_259;
            __freed_obj__ = 0;
            __dec_obj107=info_242.generics_type_names;
            info_242.generics_type_names=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value380=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value379=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 636))))))));
            if(__dec_obj107) { come_call_finalizer(list$1charph_finalize,__dec_obj107, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 22, right_value379);
            if(right_value379 && right_value379 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value379, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[22] = right_value379;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 23, right_value380);
            if(right_value380 && right_value380 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value380, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[23] = right_value380;
            __freed_obj__ = 0;
            __dec_obj108=info_242.generics_classes;
            info_242.generics_classes=(struct map$2charphsClassph*)come_increment_ref_count(((struct map$2charphsClassph*)(right_value382=map$2charphsClassph_initialize((struct map$2charphsClassph*)come_increment_ref_count(((struct map$2charphsClassph*)(right_value381=(struct map$2charphsClassph*)come_calloc(1, sizeof(struct map$2charphsClassph)*(1), "02transpile.c", 637))))))));
            if(__dec_obj108) { come_call_finalizer(map$2charphsClassph_finalize,__dec_obj108, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 24, right_value381);
            if(right_value381 && right_value381 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsClassphp_finalize,right_value381, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[24] = right_value381;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 25, right_value382);
            if(right_value382 && right_value382 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsClassphp_finalize,right_value382, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[25] = right_value382;
            __freed_obj__ = 0;
            info_242.verbose=verbose_236;
            __freed_obj__ = 0;
            info_242.output_header_file=(_Bool)1;
            __freed_obj__ = 0;
            __freed_obj__ = 0;
            info_242.num_source_files=n_260++;
            __freed_obj__ = 0;
            info_242.max_source_files=list$1charph_length(((struct list$1charph*)come_null_check(files_230, "02transpile.c", 643)));
            __freed_obj__ = 0;
            __dec_obj109=info_242.output_file_name;
            info_242.output_file_name=(char*)come_increment_ref_count(((char*)(right_value383=__builtin_string(output_file_name_235))));
            if(__dec_obj109) { __dec_obj109 = come_decrement_ref_count(__dec_obj109, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 26, right_value383);
            if(right_value383 && right_value383 != __result_obj__ && !__freed_obj__) { right_value383 = come_decrement_ref_count(right_value383, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[26] = right_value383;
            __freed_obj__ = 0;
            init_classes(&info_242);
            __freed_obj__ = 0;
            init_module(&info_242);
            __freed_obj__ = 0;
            if(_if_conditional360=!cpp(&info_242),            __freed_obj__ = 0, 
            _if_conditional360) {
                printf("%s %d: transpile failed\n",info_242.sname,info_242.sline);
                __freed_obj__ = 0;
                exit(2);
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            come_clear_stackframe();
            __dec_obj110=info_242.original_source;
            info_242.original_source=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value386=string_to_buffer(((char*)come_null_check(optional$2charphbool_value((come_push_stackframe("02transpile.c", 655),((struct optional$2charphbool*)(right_value385=string_read(((char*)come_null_check(((char*)(right_value384=xsprintf("%s",it_241))), "02transpile.c", 655))))))), "02transpile.c", 655))))));
            if(__dec_obj110) { come_call_finalizer(buffer_finalize,__dec_obj110, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 27, right_value384);
            if(right_value384 && right_value384 != __result_obj__ && !__freed_obj__) { right_value384 = come_decrement_ref_count(right_value384, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[27] = right_value384;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 28, right_value385);
            if(right_value385 && right_value385 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value385, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[28] = right_value385;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 29, right_value386);
            if(right_value386 && right_value386 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value386, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[29] = right_value386;
            __freed_obj__ = 0;
            come_clear_stackframe();
            __dec_obj111=info_242.source;
            info_242.source=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value389=string_to_buffer(((char*)come_null_check(optional$2charphbool_value((come_push_stackframe("02transpile.c", 656),((struct optional$2charphbool*)(right_value388=string_read(((char*)come_null_check(((char*)(right_value387=xsprintf("%s.i",it_241))), "02transpile.c", 656))))))), "02transpile.c", 656))))));
            if(__dec_obj111) { come_call_finalizer(buffer_finalize,__dec_obj111, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 30, right_value387);
            if(right_value387 && right_value387 != __result_obj__ && !__freed_obj__) { right_value387 = come_decrement_ref_count(right_value387, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[30] = right_value387;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 31, right_value388);
            if(right_value388 && right_value388 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value388, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[31] = right_value388;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 32, right_value389);
            if(right_value389 && right_value389 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value389, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[32] = right_value389;
            __freed_obj__ = 0;
            info_242.p=((struct buffer*)come_null_check(info_242.source, "02transpile.c", 657))->buf;
            __freed_obj__ = 0;
            info_242.head=((struct buffer*)come_null_check(info_242.source, "02transpile.c", 658))->buf;
            __freed_obj__ = 0;
            if(_if_conditional361=!output_cpp_file_233,            __freed_obj__ = 0, 
            _if_conditional361) {
                transpile_v5(&info_242);
                __freed_obj__ = 0;
                if(_if_conditional362=!output_header_file(&info_242),                __freed_obj__ = 0, 
                _if_conditional362) {
                    printf("%s %d: output source file faield\n",info_242.sname,info_242.sline);
                    __freed_obj__ = 0;
                    exit(2);
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if((&info_242) && !__freed_obj__) { come_call_finalizer(sInfo_finalize,(&info_242), (void*)0, (void*)0, 1, 0, 0, 0); }
            if(lv_table_259 && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,lv_table_259, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(o2_saved_240 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,o2_saved_240, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        come_final_v5();
        __freed_obj__ = 0;
        if(clang_option_228 && !__freed_obj__) { come_call_finalizer(buffer_finalize,clang_option_228, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(cpp_option_229 && !__freed_obj__) { come_call_finalizer(buffer_finalize,cpp_option_229, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(files_230 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,files_230, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(object_files_231 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,object_files_231, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(output_file_name_235 && !__freed_obj__) { output_file_name_235 = come_decrement_ref_count(output_file_name_235, (void*)0, (void*)0, 0, 0, 0); }
    }
    else {
        if(_if_conditional386=charp_operator_equals(argv[1],"new")&&argc==3,        __freed_obj__ = 0, 
        _if_conditional386) {
            if(_if_conditional387=!new_project(argc,argv),            __freed_obj__ = 0, 
            _if_conditional387) {
                __result163__ = (_Bool)0;
                __freed_obj__ = 0;
                return __result163__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional388=charp_operator_equals(argv[1],"run")&&argc==2,            __freed_obj__ = 0, 
            _if_conditional388) {
                if(_if_conditional389=!run_project(argc,argv),                __freed_obj__ = 0, 
                _if_conditional389) {
                    __result164__ = (_Bool)0;
                    __freed_obj__ = 0;
                    return __result164__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            else {
                gProgramName=argv[0];
                __freed_obj__ = 0;
                clang_option_261=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value391=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value390=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 685))))))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value390);
                if(right_value390 && right_value390 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value390, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value390;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value391);
                if(right_value391 && right_value391 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value391, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value391;
                __freed_obj__ = 0;
                cpp_option_262=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value393=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value392=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 686))))))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value392);
                if(right_value392 && right_value392 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value392, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value392;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value393);
                if(right_value393 && right_value393 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value393, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[3] = right_value393;
                __freed_obj__ = 0;
                files_263=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value395=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value394=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 687))))))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value394);
                if(right_value394 && right_value394 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value394, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[4] = right_value394;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value395);
                if(right_value395 && right_value395 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value395, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[5] = right_value395;
                __freed_obj__ = 0;
                object_files_264=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value397=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value396=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 688))))))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value396);
                if(right_value396 && right_value396 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value396, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[6] = right_value396;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value397);
                if(right_value397 && right_value397 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value397, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[7] = right_value397;
                __freed_obj__ = 0;
                output_object_file_265=(_Bool)0;
                __freed_obj__ = 0;
                output_cpp_file_266=(_Bool)0;
                __freed_obj__ = 0;
                output_source_file_flag_267=(_Bool)0;
                __freed_obj__ = 0;
                output_file_name_268=((void*)0);
                __freed_obj__ = 0;
                verbose_269=(_Bool)0;
                __freed_obj__ = 0;
                for(
                i_270=1 ,                __freed_obj__ = 0, 
                0;                _for_condtionalA30=                i_270<argc ,                __freed_obj__ = 0, 
                _for_condtionalA30;                i_270++ ,                __freed_obj__ = 0, 
                0                ){
                    if(_if_conditional390=charp_operator_equals(argv[i_270],"-o")&&i_270+1<argc,                    __freed_obj__ = 0, 
                    _if_conditional390) {
                        __dec_obj112=output_file_name_268;
                        output_file_name_268=(char*)come_increment_ref_count(((char*)(right_value398=__builtin_string(argv[i_270+1]))));
                        if(__dec_obj112) { __dec_obj112 = come_decrement_ref_count(__dec_obj112, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value398);
                        if(right_value398 && right_value398 != __result_obj__ && !__freed_obj__) { right_value398 = come_decrement_ref_count(right_value398, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value398;
                        __freed_obj__ = 0;
                        i_270++;
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional391=charp_operator_equals(argv[i_270],"-str"),                        __freed_obj__ = 0, 
                        _if_conditional391) {
                            buffer_append_str(((struct buffer*)come_null_check(clang_option_261, "02transpile.c", 700))," -lcomelang2-str -lpcre ");
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional392=charp_operator_equals(argv[i_270],"-common-header"),                            __freed_obj__ = 0, 
                            _if_conditional392) {
                                gCommonHeader=(_Bool)1;
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional393=charp_operator_equals(argv[i_270],"-g"),                                __freed_obj__ = 0, 
                                _if_conditional393) {
                                    buffer_append_str(((struct buffer*)come_null_check(clang_option_261, "02transpile.c", 706)),"-g ");
                                    __freed_obj__ = 0;
                                    gComeDebug=(_Bool)1;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    if(_if_conditional394=charp_operator_equals(argv[i_270],"-v"),                                    __freed_obj__ = 0, 
                                    _if_conditional394) {
                                        buffer_append_str(((struct buffer*)come_null_check(clang_option_261, "02transpile.c", 710)),"-v ");
                                        __freed_obj__ = 0;
                                        verbose_269=(_Bool)1;
                                        __freed_obj__ = 0;
                                    }
                                    else {
                                        if(_if_conditional395=memcmp(argv[i_270],"-I",strlen("-I"))==0,                                        __freed_obj__ = 0, 
                                        _if_conditional395) {
                                            buffer_append_str(((struct buffer*)come_null_check(cpp_option_262, "02transpile.c", 714)),((char*)(right_value400=charp_operator_add(" ",((char*)(right_value399=charp_operator_add(argv[i_270]," ")))))));
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value399);
                                            if(right_value399 && right_value399 != __result_obj__ && !__freed_obj__) { right_value399 = come_decrement_ref_count(right_value399, (void*)0, (void*)0, 1, 0, 0); }
                                            __right_value_freed_obj[0] = right_value399;
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value400);
                                            if(right_value400 && right_value400 != __result_obj__ && !__freed_obj__) { right_value400 = come_decrement_ref_count(right_value400, (void*)0, (void*)0, 1, 0, 0); }
                                            __right_value_freed_obj[1] = right_value400;
                                            __freed_obj__ = 0;
                                        }
                                        else {
                                            if(_if_conditional396=charp_operator_equals(argv[i_270],"-gdwarf-4"),                                            __freed_obj__ = 0, 
                                            _if_conditional396) {
                                                buffer_append_str(((struct buffer*)come_null_check(clang_option_261, "02transpile.c", 717)),"-gdwarf-4 ");
                                                __freed_obj__ = 0;
                                                gComeDebug=(_Bool)1;
                                                __freed_obj__ = 0;
                                            }
                                            else {
                                                if(_if_conditional397=charp_operator_equals(argv[i_270],"-gc"),                                                __freed_obj__ = 0, 
                                                _if_conditional397) {
                                                    gComeGC=(_Bool)1;
                                                    __freed_obj__ = 0;
                                                }
                                                else {
                                                    if(_if_conditional398=charp_operator_equals(argv[i_270],"-s")||charp_operator_equals(argv[i_270],"-S"),                                                    __freed_obj__ = 0, 
                                                    _if_conditional398) {
                                                        output_source_file_flag_267=(_Bool)1;
                                                        __freed_obj__ = 0;
                                                    }
                                                    else {
                                                        if(_if_conditional399=charp_operator_equals(argv[i_270],"-c"),                                                        __freed_obj__ = 0, 
                                                        _if_conditional399) {
                                                            output_object_file_265=(_Bool)1;
                                                            __freed_obj__ = 0;
                                                        }
                                                        else {
                                                            if(_if_conditional400=charp_operator_equals(argv[i_270],"-E"),                                                            __freed_obj__ = 0, 
                                                            _if_conditional400) {
                                                                output_cpp_file_266=(_Bool)1;
                                                                __freed_obj__ = 0;
                                                            }
                                                            else {
                                                                if(_if_conditional401=argv[i_270][0]==45,                                                                __freed_obj__ = 0, 
                                                                _if_conditional401) {
                                                                    buffer_append_str(((struct buffer*)come_null_check(clang_option_261, "02transpile.c", 733)),((char*)(right_value401=charp_operator_add(argv[i_270]," "))));
                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value401);
                                                                    if(right_value401 && right_value401 != __result_obj__ && !__freed_obj__) { right_value401 = come_decrement_ref_count(right_value401, (void*)0, (void*)0, 1, 0, 0); }
                                                                    __right_value_freed_obj[0] = right_value401;
                                                                    __freed_obj__ = 0;
                                                                }
                                                                else {
                                                                    if(_if_conditional402=memcmp(argv[i_270]+strlen(argv[i_270])-2,".o",2)==0,                                                                    __freed_obj__ = 0, 
                                                                    _if_conditional402) {
                                                                        list$1charph_push_back(((struct list$1charph*)come_null_check(object_files_264, "02transpile.c", 736)),(char*)come_increment_ref_count(((char*)(right_value402=__builtin_string(argv[i_270])))));
                                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value402);
                                                                        if(right_value402 && right_value402 != __result_obj__ && !__freed_obj__) { right_value402 = come_decrement_ref_count(right_value402, (void*)0, (void*)0, 1, 0, 0); }
                                                                        __right_value_freed_obj[0] = right_value402;
                                                                        __freed_obj__ = 0;
                                                                    }
                                                                    else {
                                                                        list$1charph_push_back(((struct list$1charph*)come_null_check(files_263, "02transpile.c", 739)),(char*)come_increment_ref_count(((char*)(right_value404=string_clone(((char*)(right_value403=__builtin_string(argv[i_270]))))))));
                                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value403);
                                                                        if(right_value403 && right_value403 != __result_obj__ && !__freed_obj__) { right_value403 = come_decrement_ref_count(right_value403, (void*)0, (void*)0, 1, 0, 0); }
                                                                        __right_value_freed_obj[0] = right_value403;
                                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value404);
                                                                        if(right_value404 && right_value404 != __result_obj__ && !__freed_obj__) { right_value404 = come_decrement_ref_count(right_value404, (void*)0, (void*)0, 1, 0, 0); }
                                                                        __right_value_freed_obj[1] = right_value404;
                                                                        __freed_obj__ = 0;
                                                                    }
                                                                    __freed_obj__ = 0;
                                                                }
                                                                __freed_obj__ = 0;
                                                            }
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                come_init_v5();
                __freed_obj__ = 0;
                for(
                o2_saved_271=(struct list$1charph*)come_increment_ref_count((files_263)),it_272=list$1charph_begin(((struct list$1charph*)come_null_check((o2_saved_271), "02transpile.c", 814))) ,                __freed_obj__ = 0, 
                0;                _for_condtionalA31=                !list$1charph_end(((struct list$1charph*)come_null_check((o2_saved_271), "02transpile.c", 814))) ,                __freed_obj__ = 0, 
                _for_condtionalA31;                it_272=list$1charph_next(((struct list$1charph*)come_null_check((o2_saved_271), "02transpile.c", 814))) ,                __freed_obj__ = 0, 
                0                ){
                    __freed_obj__ = 0;
                    memset(&info_273,0,sizeof(struct sInfo));
                    __freed_obj__ = 0;
                    __dec_obj113=info_273.sname;
                    info_273.sname=(char*)come_increment_ref_count(((char*)(right_value405=__builtin_string(it_272))));
                    if(__dec_obj113) { __dec_obj113 = come_decrement_ref_count(__dec_obj113, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value405);
                    if(right_value405 && right_value405 != __result_obj__ && !__freed_obj__) { right_value405 = come_decrement_ref_count(right_value405, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value405;
                    __freed_obj__ = 0;
                    info_273.sline=1;
                    __freed_obj__ = 0;
                    info_273.err_num=0;
                    __freed_obj__ = 0;
                    __dec_obj114=info_273.clang_option;
                    info_273.clang_option=(char*)come_increment_ref_count(((char*)(right_value406=buffer_to_string(((struct buffer*)come_null_check(clang_option_261, "02transpile.c", 753))))));
                    if(__dec_obj114) { __dec_obj114 = come_decrement_ref_count(__dec_obj114, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value406);
                    if(right_value406 && right_value406 != __result_obj__ && !__freed_obj__) { right_value406 = come_decrement_ref_count(right_value406, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value406;
                    __freed_obj__ = 0;
                    __dec_obj115=info_273.cpp_option;
                    info_273.cpp_option=(char*)come_increment_ref_count(((char*)(right_value407=buffer_to_string(((struct buffer*)come_null_check(cpp_option_262, "02transpile.c", 754))))));
                    if(__dec_obj115) { __dec_obj115 = come_decrement_ref_count(__dec_obj115, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value407);
                    if(right_value407 && right_value407 != __result_obj__ && !__freed_obj__) { right_value407 = come_decrement_ref_count(right_value407, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[2] = right_value407;
                    __freed_obj__ = 0;
                    info_273.no_output_err=(_Bool)0;
                    __freed_obj__ = 0;
                    __dec_obj116=info_273.funcs;
                    info_273.funcs=(struct map$2charphsFunph*)come_increment_ref_count(((struct map$2charphsFunph*)(right_value409=map$2charphsFunph_initialize((struct map$2charphsFunph*)come_increment_ref_count(((struct map$2charphsFunph*)(right_value408=(struct map$2charphsFunph*)come_calloc(1, sizeof(struct map$2charphsFunph)*(1), "02transpile.c", 756))))))));
                    if(__dec_obj116) { come_call_finalizer(map$2charphsFunph_finalize,__dec_obj116, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value408);
                    if(right_value408 && right_value408 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsFunphp_finalize,right_value408, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[3] = right_value408;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value409);
                    if(right_value409 && right_value409 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsFunphp_finalize,right_value409, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[4] = right_value409;
                    __freed_obj__ = 0;
                    __dec_obj117=info_273.generics_funcs;
                    info_273.generics_funcs=(struct map$2charphsGenericsFunph*)come_increment_ref_count(((struct map$2charphsGenericsFunph*)(right_value411=map$2charphsGenericsFunph_initialize((struct map$2charphsGenericsFunph*)come_increment_ref_count(((struct map$2charphsGenericsFunph*)(right_value410=(struct map$2charphsGenericsFunph*)come_calloc(1, sizeof(struct map$2charphsGenericsFunph)*(1), "02transpile.c", 757))))))));
                    if(__dec_obj117) { come_call_finalizer(map$2charphsGenericsFunph_finalize,__dec_obj117, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value410);
                    if(right_value410 && right_value410 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsGenericsFunphp_finalize,right_value410, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[5] = right_value410;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value411);
                    if(right_value411 && right_value411 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsGenericsFunphp_finalize,right_value411, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[6] = right_value411;
                    __freed_obj__ = 0;
                    __dec_obj118=info_273.classes;
                    info_273.classes=(struct map$2charphsClassph*)come_increment_ref_count(((struct map$2charphsClassph*)(right_value413=map$2charphsClassph_initialize((struct map$2charphsClassph*)come_increment_ref_count(((struct map$2charphsClassph*)(right_value412=(struct map$2charphsClassph*)come_calloc(1, sizeof(struct map$2charphsClassph)*(1), "02transpile.c", 758))))))));
                    if(__dec_obj118) { come_call_finalizer(map$2charphsClassph_finalize,__dec_obj118, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value412);
                    if(right_value412 && right_value412 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsClassphp_finalize,right_value412, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[7] = right_value412;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value413);
                    if(right_value413 && right_value413 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsClassphp_finalize,right_value413, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[8] = right_value413;
                    __freed_obj__ = 0;
                    __dec_obj119=info_273.types;
                    info_273.types=(struct map$2charphsTypeph*)come_increment_ref_count(((struct map$2charphsTypeph*)(right_value415=map$2charphsTypeph_initialize((struct map$2charphsTypeph*)come_increment_ref_count(((struct map$2charphsTypeph*)(right_value414=(struct map$2charphsTypeph*)come_calloc(1, sizeof(struct map$2charphsTypeph)*(1), "02transpile.c", 759))))))));
                    if(__dec_obj119) { come_call_finalizer(map$2charphsTypeph_finalize,__dec_obj119, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 9, right_value414);
                    if(right_value414 && right_value414 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsTypephp_finalize,right_value414, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[9] = right_value414;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 10, right_value415);
                    if(right_value415 && right_value415 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsTypephp_finalize,right_value415, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[10] = right_value415;
                    __freed_obj__ = 0;
                    __dec_obj120=info_273.module;
                    info_273.module=(struct sModule*)come_increment_ref_count(((struct sModule*)(right_value417=sModule_initialize((struct sModule*)come_increment_ref_count(((struct sModule*)(right_value416=(struct sModule*)come_calloc(1, sizeof(struct sModule)*(1), "02transpile.c", 760))))))));
                    if(__dec_obj120) { come_call_finalizer(sModule_finalize,__dec_obj120, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 11, right_value416);
                    if(right_value416 && right_value416 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sModule_finalize,right_value416, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[11] = right_value416;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 12, right_value417);
                    if(right_value417 && right_value417 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sModule_finalize,right_value417, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[12] = right_value417;
                    __freed_obj__ = 0;
                    __dec_obj121=info_273.right_value_objects;
                    info_273.right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(((struct list$1sRightValueObjectph*)(right_value419=list$1sRightValueObjectph_initialize((struct list$1sRightValueObjectph*)come_increment_ref_count(((struct list$1sRightValueObjectph*)(right_value418=(struct list$1sRightValueObjectph*)come_calloc(1, sizeof(struct list$1sRightValueObjectph)*(1), "02transpile.c", 761))))))));
                    if(__dec_obj121) { come_call_finalizer(list$1sRightValueObjectph_finalize,__dec_obj121, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 13, right_value418);
                    if(right_value418 && right_value418 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sRightValueObjectphp_finalize,right_value418, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[13] = right_value418;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 14, right_value419);
                    if(right_value419 && right_value419 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sRightValueObjectphp_finalize,right_value419, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[14] = right_value419;
                    __freed_obj__ = 0;
                    __dec_obj122=info_273.stack;
                    info_273.stack=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value421=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value420=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "02transpile.c", 762))))))));
                    if(__dec_obj122) { come_call_finalizer(list$1CVALUEph_finalize,__dec_obj122, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 15, right_value420);
                    if(right_value420 && right_value420 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value420, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[15] = right_value420;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 16, right_value421);
                    if(right_value421 && right_value421 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value421, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[16] = right_value421;
                    __freed_obj__ = 0;
                    __dec_obj123=info_273.gv_table;
                    info_273.gv_table=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value423=sVarTable_initialize((struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value422=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "02transpile.c", 763)))),(_Bool)1,((void*)0)))));
                    if(__dec_obj123) { come_call_finalizer(sVarTable_finalize,__dec_obj123, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 17, right_value422);
                    if(right_value422 && right_value422 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,right_value422, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[17] = right_value422;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 18, right_value423);
                    if(right_value423 && right_value423 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,right_value423, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[18] = right_value423;
                    __freed_obj__ = 0;
                    lv_table_274=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value425=sVarTable_initialize((struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value424=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "02transpile.c", 764)))),(_Bool)0,((void*)0)))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 19, right_value424);
                    if(right_value424 && right_value424 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,right_value424, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[19] = right_value424;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 20, right_value425);
                    if(right_value425 && right_value425 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,right_value425, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[20] = right_value425;
                    __freed_obj__ = 0;
                    info_273.lv_table=lv_table_274;
                    __freed_obj__ = 0;
                    __dec_obj124=info_273.generics_type_names;
                    info_273.generics_type_names=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value427=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value426=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 766))))))));
                    if(__dec_obj124) { come_call_finalizer(list$1charph_finalize,__dec_obj124, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 21, right_value426);
                    if(right_value426 && right_value426 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value426, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[21] = right_value426;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 22, right_value427);
                    if(right_value427 && right_value427 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value427, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[22] = right_value427;
                    __freed_obj__ = 0;
                    __dec_obj125=info_273.generics_classes;
                    info_273.generics_classes=(struct map$2charphsClassph*)come_increment_ref_count(((struct map$2charphsClassph*)(right_value429=map$2charphsClassph_initialize((struct map$2charphsClassph*)come_increment_ref_count(((struct map$2charphsClassph*)(right_value428=(struct map$2charphsClassph*)come_calloc(1, sizeof(struct map$2charphsClassph)*(1), "02transpile.c", 767))))))));
                    if(__dec_obj125) { come_call_finalizer(map$2charphsClassph_finalize,__dec_obj125, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 23, right_value428);
                    if(right_value428 && right_value428 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsClassphp_finalize,right_value428, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[23] = right_value428;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 24, right_value429);
                    if(right_value429 && right_value429 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsClassphp_finalize,right_value429, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[24] = right_value429;
                    __freed_obj__ = 0;
                    info_273.verbose=verbose_269;
                    __freed_obj__ = 0;
                    init_classes(&info_273);
                    __freed_obj__ = 0;
                    init_module(&info_273);
                    __freed_obj__ = 0;
                    if(_if_conditional403=!cpp(&info_273),                    __freed_obj__ = 0, 
                    _if_conditional403) {
                        printf("%s %d: transpile failed\n",info_273.sname,info_273.sline);
                        __freed_obj__ = 0;
                        exit(2);
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    come_clear_stackframe();
                    __dec_obj126=info_273.original_source;
                    info_273.original_source=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value432=string_to_buffer(((char*)come_null_check(optional$2charphbool_value((come_push_stackframe("02transpile.c", 778),((struct optional$2charphbool*)(right_value431=string_read(((char*)come_null_check(((char*)(right_value430=xsprintf("%s",it_272))), "02transpile.c", 778))))))), "02transpile.c", 778))))));
                    if(__dec_obj126) { come_call_finalizer(buffer_finalize,__dec_obj126, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 25, right_value430);
                    if(right_value430 && right_value430 != __result_obj__ && !__freed_obj__) { right_value430 = come_decrement_ref_count(right_value430, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[25] = right_value430;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 26, right_value431);
                    if(right_value431 && right_value431 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value431, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[26] = right_value431;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 27, right_value432);
                    if(right_value432 && right_value432 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value432, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[27] = right_value432;
                    __freed_obj__ = 0;
                    come_clear_stackframe();
                    __dec_obj127=info_273.source;
                    info_273.source=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value435=string_to_buffer(((char*)come_null_check(optional$2charphbool_value((come_push_stackframe("02transpile.c", 779),((struct optional$2charphbool*)(right_value434=string_read(((char*)come_null_check(((char*)(right_value433=xsprintf("%s.i",it_272))), "02transpile.c", 779))))))), "02transpile.c", 779))))));
                    if(__dec_obj127) { come_call_finalizer(buffer_finalize,__dec_obj127, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 28, right_value433);
                    if(right_value433 && right_value433 != __result_obj__ && !__freed_obj__) { right_value433 = come_decrement_ref_count(right_value433, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[28] = right_value433;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 29, right_value434);
                    if(right_value434 && right_value434 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value434, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[29] = right_value434;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 30, right_value435);
                    if(right_value435 && right_value435 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value435, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[30] = right_value435;
                    __freed_obj__ = 0;
                    info_273.p=((struct buffer*)come_null_check(info_273.source, "02transpile.c", 780))->buf;
                    __freed_obj__ = 0;
                    info_273.head=((struct buffer*)come_null_check(info_273.source, "02transpile.c", 781))->buf;
                    __freed_obj__ = 0;
                    if(_if_conditional404=output_file_name_268,                    __freed_obj__ = 0, 
                    _if_conditional404) {
                        __dec_obj128=info_273.output_file_name;
                        info_273.output_file_name=(char*)come_increment_ref_count(((char*)(right_value436=__builtin_string(output_file_name_268))));
                        if(__dec_obj128) { __dec_obj128 = come_decrement_ref_count(__dec_obj128, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value436);
                        if(right_value436 && right_value436 != __result_obj__ && !__freed_obj__) { right_value436 = come_decrement_ref_count(right_value436, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value436;
                        __freed_obj__ = 0;
                    }
                    else {
                        __dec_obj129=info_273.output_file_name;
                        info_273.output_file_name=((void*)0);
                        if(__dec_obj129) { __dec_obj129 = come_decrement_ref_count(__dec_obj129, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional405=!output_cpp_file_266,                    __freed_obj__ = 0, 
                    _if_conditional405) {
                        transpile_v5(&info_273);
                        __freed_obj__ = 0;
                        if(_if_conditional406=!output_source_file_v3(&info_273),                        __freed_obj__ = 0, 
                        _if_conditional406) {
                            printf("%s %d: output source file faield\n",info_273.sname,info_273.sline);
                            __freed_obj__ = 0;
                            exit(2);
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional407=info_273.err_num>0,                        __freed_obj__ = 0, 
                        _if_conditional407) {
                            printf("transpile error. err num %d\n",info_273.err_num);
                            __freed_obj__ = 0;
                            exit(2);
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional408=!compile(&info_273,output_object_file_265,object_files_264),                            __freed_obj__ = 0, 
                            _if_conditional408) {
                                printf("%s %d: compile faield\n",info_273.sname,info_273.sline);
                                __freed_obj__ = 0;
                                exit(27);
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if((&info_273) && !__freed_obj__) { come_call_finalizer(sInfo_finalize,(&info_273), (void*)0, (void*)0, 1, 0, 0, 0); }
                    if(lv_table_274 && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,lv_table_274, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                if(o2_saved_271 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,o2_saved_271, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                if(_if_conditional409=!output_object_file_265&&!output_cpp_file_266&&(list$1charph_length(((struct list$1charph*)come_null_check(files_263, "02transpile.c", 836)))>0||list$1charph_length(((struct list$1charph*)come_null_check(object_files_264, "02transpile.c", 836)))>0),                __freed_obj__ = 0, 
                _if_conditional409) {
                    __freed_obj__ = 0;
                    memset(&info_275,0,sizeof(struct sInfo));
                    __freed_obj__ = 0;
                    come_clear_stackframe();
                    __dec_obj131=info_275.sname;
                    info_275.sname=(char*)come_increment_ref_count(((char*)(right_value442=string_clone(optional$2charphbool_value((come_push_stackframe("02transpile.c", 819),((struct optional$2charphbool*)(right_value441=list$1charphp_operator_load_element(files_263,0)))))))));
                    if(__dec_obj131) { __dec_obj131 = come_decrement_ref_count(__dec_obj131, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value441);
                    if(right_value441 && right_value441 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value441, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value441;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value442);
                    if(right_value442 && right_value442 != __result_obj__ && !__freed_obj__) { right_value442 = come_decrement_ref_count(right_value442, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value442;
                    __freed_obj__ = 0;
                    __dec_obj132=info_275.clang_option;
                    info_275.clang_option=(char*)come_increment_ref_count(((char*)(right_value443=buffer_to_string(((struct buffer*)come_null_check(clang_option_261, "02transpile.c", 820))))));
                    if(__dec_obj132) { __dec_obj132 = come_decrement_ref_count(__dec_obj132, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value443);
                    if(right_value443 && right_value443 != __result_obj__ && !__freed_obj__) { right_value443 = come_decrement_ref_count(right_value443, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[2] = right_value443;
                    __freed_obj__ = 0;
                    info_275.verbose=verbose_269;
                    __freed_obj__ = 0;
                    if(_if_conditional412=output_file_name_268,                    __freed_obj__ = 0, 
                    _if_conditional412) {
                        __dec_obj133=info_275.output_file_name;
                        info_275.output_file_name=(char*)come_increment_ref_count(((char*)(right_value444=__builtin_string(output_file_name_268))));
                        if(__dec_obj133) { __dec_obj133 = come_decrement_ref_count(__dec_obj133, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value444);
                        if(right_value444 && right_value444 != __result_obj__ && !__freed_obj__) { right_value444 = come_decrement_ref_count(right_value444, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value444;
                        __freed_obj__ = 0;
                    }
                    else {
                        __dec_obj134=info_275.output_file_name;
                        info_275.output_file_name=((void*)0);
                        if(__dec_obj134) { __dec_obj134 = come_decrement_ref_count(__dec_obj134, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __current_stack2__.info_275 = &info_275;
                    __current_stack2__.clang_option_261 = &clang_option_261;
                    __current_stack2__.cpp_option_262 = &cpp_option_262;
                    __current_stack2__.files_263 = &files_263;
                    __current_stack2__.object_files_264 = &object_files_264;
                    __current_stack2__.output_object_file_265 = &output_object_file_265;
                    __current_stack2__.output_cpp_file_266 = &output_cpp_file_266;
                    __current_stack2__.output_source_file_flag_267 = &output_source_file_flag_267;
                    __current_stack2__.output_file_name_268 = &output_file_name_268;
                    __current_stack2__.verbose_269 = &verbose_269;
                    __current_stack2__.argc = &argc;
                    __current_stack2__.argv = &argv;
                    bool_expect(linker(&info_275,object_files_264),&__current_stack2__,(void*)method_block2_02transpilec);
                                        if(__current_stack2__.__method_block_result_kind__ == 3)
                    {
                        return (int)__current_stack2__.__method_block_return_value__;
                    }
                    __freed_obj__ = 0;
                    if((&info_275) && !__freed_obj__) { come_call_finalizer(sInfo_finalize,(&info_275), (void*)0, (void*)0, 1, 0, 0, 0); }
                }
                __freed_obj__ = 0;
                come_final_v5();
                __freed_obj__ = 0;
                if(clang_option_261 && !__freed_obj__) { come_call_finalizer(buffer_finalize,clang_option_261, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(cpp_option_262 && !__freed_obj__) { come_call_finalizer(buffer_finalize,cpp_option_262, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(files_263 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,files_263, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(object_files_264 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,object_files_264, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(output_file_name_268 && !__freed_obj__) { output_file_name_268 = come_decrement_ref_count(output_file_name_268, (void*)0, (void*)0, 0, 0, 0); }
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result168__ = 0;
    __freed_obj__ = 0;
    return __result168__;
    __freed_obj__ = 0;
}

static struct map$2charphsFunph* map$2charphsFunph_initialize(struct map$2charphsFunph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value342;
void* right_value343;
void* right_value344;
int i_243;
_Bool _for_condtionalA18;
void* right_value345;
void* right_value346;
struct list$1charp* __dec_obj95;
struct map$2charphsFunph* __result156__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value342, 0, sizeof(void*));
memset(&right_value343, 0, sizeof(void*));
memset(&right_value344, 0, sizeof(void*));
memset(&i_243, 0, sizeof(int));
memset(&right_value345, 0, sizeof(void*));
memset(&right_value346, 0, sizeof(void*));
                ((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1122))->keys=(char**)come_increment_ref_count(((char**)(right_value342=(char**)come_calloc(1, sizeof(char*)*(1*(1024)), "./comelang2.h", 1122))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value342);
                if(right_value342 && right_value342 != __result_obj__ && !__freed_obj__) { right_value342 = come_decrement_ref_count(right_value342, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value342;
                __freed_obj__ = 0;
                ((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1123))->items=(struct sFun**)come_increment_ref_count(((struct sFun**)(right_value343=(struct sFun**)come_calloc(1, sizeof(struct sFun*)*(1*(1024)), "./comelang2.h", 1123))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value343);
                if(right_value343 && right_value343 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value343, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value343;
                __freed_obj__ = 0;
                ((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1124))->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value344=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(1024)), "./comelang2.h", 1124))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value344);
                if(right_value344 && right_value344 != __result_obj__ && !__freed_obj__) { right_value344 = come_decrement_ref_count(right_value344, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value344;
                __freed_obj__ = 0;
                for(
                i_243=0 ,                __freed_obj__ = 0, 
                0;                _for_condtionalA18=                i_243<1024 ,                __freed_obj__ = 0, 
                _for_condtionalA18;                i_243++ ,                __freed_obj__ = 0, 
                0                ){
                    ((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1128))->item_existance[i_243]=(_Bool)0;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                ((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1131))->size=1024;
                __freed_obj__ = 0;
                ((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1132))->len=0;
                __freed_obj__ = 0;
                __dec_obj95=((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1134))->key_list;
                ((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1134))->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value346=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value345=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang2.h", 1134))))))));
                if(__dec_obj95) { come_call_finalizer(list$1charp_finalize,__dec_obj95, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value345);
                if(right_value345 && right_value345 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,right_value345, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[3] = right_value345;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value346);
                if(right_value346 && right_value346 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,right_value346, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[4] = right_value346;
                __freed_obj__ = 0;
                ((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1136))->it=0;
                __freed_obj__ = 0;
                __result156__ = __result_obj__ = self;
                if(self && !__freed_obj__) { come_call_finalizer(map$2charphsFunphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result156__;
                __freed_obj__ = 0;
                if(self && !__freed_obj__) { come_call_finalizer(map$2charphsFunphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void map$2charphsFunphp_finalize(struct map$2charphsFunph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int i_244;
_Bool _for_condtionalA19;
_Bool _if_conditional324;
_Bool _if_conditional325;
int i_245;
_Bool _for_condtionalA20;
_Bool _if_conditional326;
_Bool _if_conditional327;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&i_244, 0, sizeof(int));
memset(&i_245, 0, sizeof(int));
                    for(
                    i_244=0 ,                    __freed_obj__ = 0, 
                    0;                    _for_condtionalA19=                    i_244<((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1172))->size ,                    __freed_obj__ = 0, 
                    _for_condtionalA19;                    i_244++ ,                    __freed_obj__ = 0, 
                    0                    ){
                        if(_if_conditional324=((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1171))->item_existance[i_244],                        __freed_obj__ = 0, 
                        _if_conditional324) {
                            if(_if_conditional325=1,                            __freed_obj__ = 0, 
                            _if_conditional325) {
                                if(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1168))->items[i_244] && !__freed_obj__) { come_call_finalizer(sFun_finalize,((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1168))->items[i_244], (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    come_free_object((char*)((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1172))->items);
                    __freed_obj__ = 0;
                    for(
                    i_245=0 ,                    __freed_obj__ = 0, 
                    0;                    _for_condtionalA20=                    i_245<((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1181))->size ,                    __freed_obj__ = 0, 
                    _for_condtionalA20;                    i_245++ ,                    __freed_obj__ = 0, 
                    0                    ){
                        if(_if_conditional326=((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1180))->item_existance[i_245],                        __freed_obj__ = 0, 
                        _if_conditional326) {
                            if(_if_conditional327=1,                            __freed_obj__ = 0, 
                            _if_conditional327) {
                                if(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1177))->keys[i_245] && !__freed_obj__) { ((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1177))->keys[i_245] = come_decrement_ref_count(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1177))->keys[i_245], (void*)0, (void*)0, 0, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    come_free_object((char*)((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1181))->keys);
                    __freed_obj__ = 0;
                    if(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1183))->key_list && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1183))->key_list, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    if(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1185))->item_existance && !__freed_obj__) { ((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1185))->item_existance = come_decrement_ref_count(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1185))->item_existance, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
}

static void map$2charphsFunph_finalize(struct map$2charphsFunph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional328;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional328=self!=((void*)0)&&((struct map$2charphsFunph*)come_null_check(self, "map$2charphsFunph_finalize", 1))->key_list!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional328) {
                    if(((struct map$2charphsFunph*)come_null_check(self, "map$2charphsFunph_finalize", 0))->key_list && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,((struct map$2charphsFunph*)come_null_check(self, "map$2charphsFunph_finalize", 0))->key_list, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static struct map$2charphsGenericsFunph* map$2charphsGenericsFunph_initialize(struct map$2charphsGenericsFunph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value349;
void* right_value350;
void* right_value351;
int i_246;
_Bool _for_condtionalA21;
void* right_value352;
void* right_value353;
struct list$1charp* __dec_obj97;
struct map$2charphsGenericsFunph* __result157__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value349, 0, sizeof(void*));
memset(&right_value350, 0, sizeof(void*));
memset(&right_value351, 0, sizeof(void*));
memset(&i_246, 0, sizeof(int));
memset(&right_value352, 0, sizeof(void*));
memset(&right_value353, 0, sizeof(void*));
                ((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1122))->keys=(char**)come_increment_ref_count(((char**)(right_value349=(char**)come_calloc(1, sizeof(char*)*(1*(1024)), "./comelang2.h", 1122))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value349);
                if(right_value349 && right_value349 != __result_obj__ && !__freed_obj__) { right_value349 = come_decrement_ref_count(right_value349, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value349;
                __freed_obj__ = 0;
                ((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1123))->items=(struct sGenericsFun**)come_increment_ref_count(((struct sGenericsFun**)(right_value350=(struct sGenericsFun**)come_calloc(1, sizeof(struct sGenericsFun*)*(1*(1024)), "./comelang2.h", 1123))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value350);
                if(right_value350 && right_value350 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sGenericsFun_finalize,right_value350, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value350;
                __freed_obj__ = 0;
                ((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1124))->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value351=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(1024)), "./comelang2.h", 1124))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value351);
                if(right_value351 && right_value351 != __result_obj__ && !__freed_obj__) { right_value351 = come_decrement_ref_count(right_value351, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value351;
                __freed_obj__ = 0;
                for(
                i_246=0 ,                __freed_obj__ = 0, 
                0;                _for_condtionalA21=                i_246<1024 ,                __freed_obj__ = 0, 
                _for_condtionalA21;                i_246++ ,                __freed_obj__ = 0, 
                0                ){
                    ((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1128))->item_existance[i_246]=(_Bool)0;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                ((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1131))->size=1024;
                __freed_obj__ = 0;
                ((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1132))->len=0;
                __freed_obj__ = 0;
                __dec_obj97=((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1134))->key_list;
                ((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1134))->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value353=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value352=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang2.h", 1134))))))));
                if(__dec_obj97) { come_call_finalizer(list$1charp_finalize,__dec_obj97, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value352);
                if(right_value352 && right_value352 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,right_value352, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[3] = right_value352;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value353);
                if(right_value353 && right_value353 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,right_value353, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[4] = right_value353;
                __freed_obj__ = 0;
                ((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1136))->it=0;
                __freed_obj__ = 0;
                __result157__ = __result_obj__ = self;
                if(self && !__freed_obj__) { come_call_finalizer(map$2charphsGenericsFunphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result157__;
                __freed_obj__ = 0;
                if(self && !__freed_obj__) { come_call_finalizer(map$2charphsGenericsFunphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional329;
_Bool _if_conditional330;
_Bool _if_conditional331;
_Bool _if_conditional332;
_Bool _if_conditional333;
_Bool _if_conditional334;
_Bool _if_conditional335;
_Bool _if_conditional336;
_Bool _if_conditional337;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional329=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 1))->mImplType!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional329) {
                        if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 0))->mImplType && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 0))->mImplType, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional330=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 2))->mGenericsTypeNames!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional330) {
                        if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 1))->mGenericsTypeNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 1))->mGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional331=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 3))->mName!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional331) {
                        if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 2))->mName && !__freed_obj__) { ((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 2))->mName = come_decrement_ref_count(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 2))->mName, (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional332=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 4))->mResultType!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional332) {
                        if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 3))->mResultType && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 3))->mResultType, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional333=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 5))->mParamTypes!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional333) {
                        if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 4))->mParamTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 4))->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional334=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 6))->mParamNames!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional334) {
                        if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 5))->mParamNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 5))->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional335=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 7))->mParamDefaultParametors!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional335) {
                        if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 6))->mParamDefaultParametors && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 6))->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional336=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 8))->mBlock!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional336) {
                        if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 7))->mBlock && !__freed_obj__) { ((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 7))->mBlock = come_decrement_ref_count(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 7))->mBlock, (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional337=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 9))->mGenericsSName!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional337) {
                        if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 8))->mGenericsSName && !__freed_obj__) { ((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 8))->mGenericsSName = come_decrement_ref_count(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 8))->mGenericsSName, (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
}

static void map$2charphsGenericsFunphp_finalize(struct map$2charphsGenericsFunph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int i_247;
_Bool _for_condtionalA22;
_Bool _if_conditional338;
_Bool _if_conditional339;
int i_248;
_Bool _for_condtionalA23;
_Bool _if_conditional340;
_Bool _if_conditional341;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&i_247, 0, sizeof(int));
memset(&i_248, 0, sizeof(int));
                    for(
                    i_247=0 ,                    __freed_obj__ = 0, 
                    0;                    _for_condtionalA22=                    i_247<((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1172))->size ,                    __freed_obj__ = 0, 
                    _for_condtionalA22;                    i_247++ ,                    __freed_obj__ = 0, 
                    0                    ){
                        if(_if_conditional338=((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1171))->item_existance[i_247],                        __freed_obj__ = 0, 
                        _if_conditional338) {
                            if(_if_conditional339=1,                            __freed_obj__ = 0, 
                            _if_conditional339) {
                                if(((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1168))->items[i_247] && !__freed_obj__) { come_call_finalizer(sGenericsFun_finalize,((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1168))->items[i_247], (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    come_free_object((char*)((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1172))->items);
                    __freed_obj__ = 0;
                    for(
                    i_248=0 ,                    __freed_obj__ = 0, 
                    0;                    _for_condtionalA23=                    i_248<((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1181))->size ,                    __freed_obj__ = 0, 
                    _for_condtionalA23;                    i_248++ ,                    __freed_obj__ = 0, 
                    0                    ){
                        if(_if_conditional340=((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1180))->item_existance[i_248],                        __freed_obj__ = 0, 
                        _if_conditional340) {
                            if(_if_conditional341=1,                            __freed_obj__ = 0, 
                            _if_conditional341) {
                                if(((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1177))->keys[i_248] && !__freed_obj__) { ((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1177))->keys[i_248] = come_decrement_ref_count(((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1177))->keys[i_248], (void*)0, (void*)0, 0, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    come_free_object((char*)((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1181))->keys);
                    __freed_obj__ = 0;
                    if(((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1183))->key_list && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1183))->key_list, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    if(((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1185))->item_existance && !__freed_obj__) { ((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1185))->item_existance = come_decrement_ref_count(((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1185))->item_existance, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
}

static void map$2charphsGenericsFunph_finalize(struct map$2charphsGenericsFunph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional342;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional342=self!=((void*)0)&&((struct map$2charphsGenericsFunph*)come_null_check(self, "map$2charphsGenericsFunph_finalize", 1))->key_list!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional342) {
                    if(((struct map$2charphsGenericsFunph*)come_null_check(self, "map$2charphsGenericsFunph_finalize", 0))->key_list && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,((struct map$2charphsGenericsFunph*)come_null_check(self, "map$2charphsGenericsFunph_finalize", 0))->key_list, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static struct map$2charphsClassph* map$2charphsClassph_initialize(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value356;
void* right_value357;
void* right_value358;
int i_249;
_Bool _for_condtionalA24;
void* right_value359;
void* right_value360;
struct list$1charp* __dec_obj99;
struct map$2charphsClassph* __result158__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value356, 0, sizeof(void*));
memset(&right_value357, 0, sizeof(void*));
memset(&right_value358, 0, sizeof(void*));
memset(&i_249, 0, sizeof(int));
memset(&right_value359, 0, sizeof(void*));
memset(&right_value360, 0, sizeof(void*));
                ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1122))->keys=(char**)come_increment_ref_count(((char**)(right_value356=(char**)come_calloc(1, sizeof(char*)*(1*(1024)), "./comelang2.h", 1122))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value356);
                if(right_value356 && right_value356 != __result_obj__ && !__freed_obj__) { right_value356 = come_decrement_ref_count(right_value356, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value356;
                __freed_obj__ = 0;
                ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1123))->items=(struct sClass**)come_increment_ref_count(((struct sClass**)(right_value357=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(1024)), "./comelang2.h", 1123))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value357);
                if(right_value357 && right_value357 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value357, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value357;
                __freed_obj__ = 0;
                ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1124))->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value358=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(1024)), "./comelang2.h", 1124))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value358);
                if(right_value358 && right_value358 != __result_obj__ && !__freed_obj__) { right_value358 = come_decrement_ref_count(right_value358, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value358;
                __freed_obj__ = 0;
                for(
                i_249=0 ,                __freed_obj__ = 0, 
                0;                _for_condtionalA24=                i_249<1024 ,                __freed_obj__ = 0, 
                _for_condtionalA24;                i_249++ ,                __freed_obj__ = 0, 
                0                ){
                    ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1128))->item_existance[i_249]=(_Bool)0;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1131))->size=1024;
                __freed_obj__ = 0;
                ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1132))->len=0;
                __freed_obj__ = 0;
                __dec_obj99=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1134))->key_list;
                ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1134))->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value360=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value359=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang2.h", 1134))))))));
                if(__dec_obj99) { come_call_finalizer(list$1charp_finalize,__dec_obj99, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value359);
                if(right_value359 && right_value359 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,right_value359, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[3] = right_value359;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value360);
                if(right_value360 && right_value360 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,right_value360, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[4] = right_value360;
                __freed_obj__ = 0;
                ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1136))->it=0;
                __freed_obj__ = 0;
                __result158__ = __result_obj__ = self;
                if(self && !__freed_obj__) { come_call_finalizer(map$2charphsClassphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result158__;
                __freed_obj__ = 0;
                if(self && !__freed_obj__) { come_call_finalizer(map$2charphsClassphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void map$2charphsClassphp_finalize(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int i_250;
_Bool _for_condtionalA25;
_Bool _if_conditional343;
_Bool _if_conditional344;
int i_251;
_Bool _for_condtionalA26;
_Bool _if_conditional345;
_Bool _if_conditional346;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&i_250, 0, sizeof(int));
memset(&i_251, 0, sizeof(int));
                    for(
                    i_250=0 ,                    __freed_obj__ = 0, 
                    0;                    _for_condtionalA25=                    i_250<((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1172))->size ,                    __freed_obj__ = 0, 
                    _for_condtionalA25;                    i_250++ ,                    __freed_obj__ = 0, 
                    0                    ){
                        if(_if_conditional343=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1171))->item_existance[i_250],                        __freed_obj__ = 0, 
                        _if_conditional343) {
                            if(_if_conditional344=1,                            __freed_obj__ = 0, 
                            _if_conditional344) {
                                if(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1168))->items[i_250] && !__freed_obj__) { come_call_finalizer(sClass_finalize,((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1168))->items[i_250], (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    come_free_object((char*)((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1172))->items);
                    __freed_obj__ = 0;
                    for(
                    i_251=0 ,                    __freed_obj__ = 0, 
                    0;                    _for_condtionalA26=                    i_251<((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1181))->size ,                    __freed_obj__ = 0, 
                    _for_condtionalA26;                    i_251++ ,                    __freed_obj__ = 0, 
                    0                    ){
                        if(_if_conditional345=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1180))->item_existance[i_251],                        __freed_obj__ = 0, 
                        _if_conditional345) {
                            if(_if_conditional346=1,                            __freed_obj__ = 0, 
                            _if_conditional346) {
                                if(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1177))->keys[i_251] && !__freed_obj__) { ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1177))->keys[i_251] = come_decrement_ref_count(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1177))->keys[i_251], (void*)0, (void*)0, 0, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    come_free_object((char*)((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1181))->keys);
                    __freed_obj__ = 0;
                    if(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1183))->key_list && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1183))->key_list, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    if(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1185))->item_existance && !__freed_obj__) { ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1185))->item_existance = come_decrement_ref_count(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1185))->item_existance, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
}

static void map$2charphsClassph_finalize(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional347;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional347=self!=((void*)0)&&((struct map$2charphsClassph*)come_null_check(self, "map$2charphsClassph_finalize", 1))->key_list!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional347) {
                    if(((struct map$2charphsClassph*)come_null_check(self, "map$2charphsClassph_finalize", 0))->key_list && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,((struct map$2charphsClassph*)come_null_check(self, "map$2charphsClassph_finalize", 0))->key_list, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static struct map$2charphsTypeph* map$2charphsTypeph_initialize(struct map$2charphsTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value363;
void* right_value364;
void* right_value365;
int i_252;
_Bool _for_condtionalA27;
void* right_value366;
void* right_value367;
struct list$1charp* __dec_obj101;
struct map$2charphsTypeph* __result159__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value363, 0, sizeof(void*));
memset(&right_value364, 0, sizeof(void*));
memset(&right_value365, 0, sizeof(void*));
memset(&i_252, 0, sizeof(int));
memset(&right_value366, 0, sizeof(void*));
memset(&right_value367, 0, sizeof(void*));
                ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1122))->keys=(char**)come_increment_ref_count(((char**)(right_value363=(char**)come_calloc(1, sizeof(char*)*(1*(1024)), "./comelang2.h", 1122))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value363);
                if(right_value363 && right_value363 != __result_obj__ && !__freed_obj__) { right_value363 = come_decrement_ref_count(right_value363, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value363;
                __freed_obj__ = 0;
                ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1123))->items=(struct sType**)come_increment_ref_count(((struct sType**)(right_value364=(struct sType**)come_calloc(1, sizeof(struct sType*)*(1*(1024)), "./comelang2.h", 1123))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value364);
                if(right_value364 && right_value364 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value364, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value364;
                __freed_obj__ = 0;
                ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1124))->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value365=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(1024)), "./comelang2.h", 1124))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value365);
                if(right_value365 && right_value365 != __result_obj__ && !__freed_obj__) { right_value365 = come_decrement_ref_count(right_value365, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value365;
                __freed_obj__ = 0;
                for(
                i_252=0 ,                __freed_obj__ = 0, 
                0;                _for_condtionalA27=                i_252<1024 ,                __freed_obj__ = 0, 
                _for_condtionalA27;                i_252++ ,                __freed_obj__ = 0, 
                0                ){
                    ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1128))->item_existance[i_252]=(_Bool)0;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1131))->size=1024;
                __freed_obj__ = 0;
                ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1132))->len=0;
                __freed_obj__ = 0;
                __dec_obj101=((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1134))->key_list;
                ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1134))->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value367=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value366=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang2.h", 1134))))))));
                if(__dec_obj101) { come_call_finalizer(list$1charp_finalize,__dec_obj101, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value366);
                if(right_value366 && right_value366 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,right_value366, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[3] = right_value366;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value367);
                if(right_value367 && right_value367 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,right_value367, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[4] = right_value367;
                __freed_obj__ = 0;
                ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1136))->it=0;
                __freed_obj__ = 0;
                __result159__ = __result_obj__ = self;
                if(self && !__freed_obj__) { come_call_finalizer(map$2charphsTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result159__;
                __freed_obj__ = 0;
                if(self && !__freed_obj__) { come_call_finalizer(map$2charphsTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void map$2charphsTypephp_finalize(struct map$2charphsTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int i_253;
_Bool _for_condtionalA28;
_Bool _if_conditional348;
_Bool _if_conditional349;
int i_254;
_Bool _for_condtionalA29;
_Bool _if_conditional350;
_Bool _if_conditional351;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&i_253, 0, sizeof(int));
memset(&i_254, 0, sizeof(int));
                    for(
                    i_253=0 ,                    __freed_obj__ = 0, 
                    0;                    _for_condtionalA28=                    i_253<((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1172))->size ,                    __freed_obj__ = 0, 
                    _for_condtionalA28;                    i_253++ ,                    __freed_obj__ = 0, 
                    0                    ){
                        if(_if_conditional348=((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1171))->item_existance[i_253],                        __freed_obj__ = 0, 
                        _if_conditional348) {
                            if(_if_conditional349=1,                            __freed_obj__ = 0, 
                            _if_conditional349) {
                                if(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1168))->items[i_253] && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1168))->items[i_253], (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    come_free_object((char*)((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1172))->items);
                    __freed_obj__ = 0;
                    for(
                    i_254=0 ,                    __freed_obj__ = 0, 
                    0;                    _for_condtionalA29=                    i_254<((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1181))->size ,                    __freed_obj__ = 0, 
                    _for_condtionalA29;                    i_254++ ,                    __freed_obj__ = 0, 
                    0                    ){
                        if(_if_conditional350=((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1180))->item_existance[i_254],                        __freed_obj__ = 0, 
                        _if_conditional350) {
                            if(_if_conditional351=1,                            __freed_obj__ = 0, 
                            _if_conditional351) {
                                if(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1177))->keys[i_254] && !__freed_obj__) { ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1177))->keys[i_254] = come_decrement_ref_count(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1177))->keys[i_254], (void*)0, (void*)0, 0, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    come_free_object((char*)((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1181))->keys);
                    __freed_obj__ = 0;
                    if(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1183))->key_list && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1183))->key_list, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    if(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1185))->item_existance && !__freed_obj__) { ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1185))->item_existance = come_decrement_ref_count(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1185))->item_existance, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
}

static void map$2charphsTypeph_finalize(struct map$2charphsTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional352;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional352=self!=((void*)0)&&((struct map$2charphsTypeph*)come_null_check(self, "map$2charphsTypeph_finalize", 1))->key_list!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional352) {
                    if(((struct map$2charphsTypeph*)come_null_check(self, "map$2charphsTypeph_finalize", 0))->key_list && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,((struct map$2charphsTypeph*)come_null_check(self, "map$2charphsTypeph_finalize", 0))->key_list, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_initialize(struct list$1sRightValueObjectph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1sRightValueObjectph* __result160__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                ((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 150))->head=((void*)0);
                __freed_obj__ = 0;
                ((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 151))->tail=((void*)0);
                __freed_obj__ = 0;
                ((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 152))->len=0;
                __freed_obj__ = 0;
                __result160__ = __result_obj__ = self;
                if(self && !__freed_obj__) { come_call_finalizer(list$1sRightValueObjectphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result160__;
                __freed_obj__ = 0;
                if(self && !__freed_obj__) { come_call_finalizer(list$1sRightValueObjectphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list$1sRightValueObjectphp_finalize(struct list$1sRightValueObjectph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1sRightValueObjectph* it_255;
_Bool _while_condtional30;
struct list_item$1sRightValueObjectph* prev_it_256;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_255, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&prev_it_256, 0, sizeof(struct list_item$1sRightValueObjectph*));
                    it_255=((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 169))->head;
                    __freed_obj__ = 0;
                    while(_while_condtional30=it_255!=((void*)0),                    __freed_obj__ = 0, 
                    _while_condtional30) {
                        prev_it_256=it_255;
                        __freed_obj__ = 0;
                        it_255=((struct list_item$1sRightValueObjectph*)come_null_check(it_255, "./comelang2.h", 172))->next;
                        __freed_obj__ = 0;
                        if(prev_it_256 && !__freed_obj__) { come_call_finalizer(list_item$1sRightValueObjectphp_finalize,prev_it_256, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
}

static void list_item$1sRightValueObjectphp_finalize(struct list_item$1sRightValueObjectph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional353;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional353=self!=((void*)0)&&((struct list_item$1sRightValueObjectph*)come_null_check(self, "list_item$1sRightValueObjectphp_finalize", 1))->item!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional353) {
                                if(((struct list_item$1sRightValueObjectph*)come_null_check(self, "list_item$1sRightValueObjectphp_finalize", 0))->item && !__freed_obj__) { come_call_finalizer(sRightValueObject_finalize,((struct list_item$1sRightValueObjectph*)come_null_check(self, "list_item$1sRightValueObjectphp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
}

static void sRightValueObject_finalize(struct sRightValueObject* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional354;
_Bool _if_conditional355;
_Bool _if_conditional356;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                    if(_if_conditional354=self!=((void*)0)&&((struct sRightValueObject*)come_null_check(self, "sRightValueObject_finalize", 1))->mType!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional354) {
                                        if(((struct sRightValueObject*)come_null_check(self, "sRightValueObject_finalize", 0))->mType && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct sRightValueObject*)come_null_check(self, "sRightValueObject_finalize", 0))->mType, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional355=self!=((void*)0)&&((struct sRightValueObject*)come_null_check(self, "sRightValueObject_finalize", 2))->mVarName!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional355) {
                                        if(((struct sRightValueObject*)come_null_check(self, "sRightValueObject_finalize", 1))->mVarName && !__freed_obj__) { ((struct sRightValueObject*)come_null_check(self, "sRightValueObject_finalize", 1))->mVarName = come_decrement_ref_count(((struct sRightValueObject*)come_null_check(self, "sRightValueObject_finalize", 1))->mVarName, (void*)0, (void*)0, 0, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional356=self!=((void*)0)&&((struct sRightValueObject*)come_null_check(self, "sRightValueObject_finalize", 3))->mFunName!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional356) {
                                        if(((struct sRightValueObject*)come_null_check(self, "sRightValueObject_finalize", 2))->mFunName && !__freed_obj__) { ((struct sRightValueObject*)come_null_check(self, "sRightValueObject_finalize", 2))->mFunName = come_decrement_ref_count(((struct sRightValueObject*)come_null_check(self, "sRightValueObject_finalize", 2))->mFunName, (void*)0, (void*)0, 0, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
}

static void list$1sRightValueObjectph_finalize(struct list$1sRightValueObjectph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1CVALUEph* __result161__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 150))->head=((void*)0);
                __freed_obj__ = 0;
                ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 151))->tail=((void*)0);
                __freed_obj__ = 0;
                ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 152))->len=0;
                __freed_obj__ = 0;
                __result161__ = __result_obj__ = self;
                if(self && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result161__;
                __freed_obj__ = 0;
                if(self && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1CVALUEph* it_257;
_Bool _while_condtional31;
struct list_item$1CVALUEph* prev_it_258;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_257, 0, sizeof(struct list_item$1CVALUEph*));
memset(&prev_it_258, 0, sizeof(struct list_item$1CVALUEph*));
                    it_257=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 169))->head;
                    __freed_obj__ = 0;
                    while(_while_condtional31=it_257!=((void*)0),                    __freed_obj__ = 0, 
                    _while_condtional31) {
                        prev_it_258=it_257;
                        __freed_obj__ = 0;
                        it_257=((struct list_item$1CVALUEph*)come_null_check(it_257, "./comelang2.h", 172))->next;
                        __freed_obj__ = 0;
                        if(prev_it_258 && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,prev_it_258, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional357;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional357=self!=((void*)0)&&((struct list_item$1CVALUEph*)come_null_check(self, "list_item$1CVALUEphp_finalize", 1))->item!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional357) {
                                if(((struct list_item$1CVALUEph*)come_null_check(self, "list_item$1CVALUEphp_finalize", 0))->item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,((struct list_item$1CVALUEph*)come_null_check(self, "list_item$1CVALUEphp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional358;
_Bool _if_conditional359;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                    if(_if_conditional358=self!=((void*)0)&&((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1))->c_value!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional358) {
                                        if(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value && !__freed_obj__) { ((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value = come_decrement_ref_count(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value, (void*)0, (void*)0, 0, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional359=self!=((void*)0)&&((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 2))->type!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional359) {
                                        if(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1))->type && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1))->type, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
}

static void list$1CVALUEph_finalize(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static int list$1charph_length(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result162__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                __result162__ = ((struct list$1charph*)come_null_check(self, "./comelang2.h", 410))->len;
                __freed_obj__ = 0;
                return __result162__;
                __freed_obj__ = 0;
}

static void sInfo_finalize(struct sInfo* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional363;
_Bool _if_conditional364;
_Bool _if_conditional365;
_Bool _if_conditional366;
_Bool _if_conditional367;
_Bool _if_conditional368;
_Bool _if_conditional369;
_Bool _if_conditional370;
_Bool _if_conditional371;
_Bool _if_conditional372;
_Bool _if_conditional373;
_Bool _if_conditional374;
_Bool _if_conditional375;
_Bool _if_conditional376;
_Bool _if_conditional377;
_Bool _if_conditional378;
_Bool _if_conditional379;
_Bool _if_conditional380;
_Bool _if_conditional381;
_Bool _if_conditional382;
_Bool _if_conditional383;
_Bool _if_conditional384;
_Bool _if_conditional385;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional363=self!=((void*)0)&&((struct sInfo*)come_null_check(self, "sInfo_finalize", 1))->original_source!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional363) {
                    if(((struct sInfo*)come_null_check(self, "sInfo_finalize", 0))->original_source && !__freed_obj__) { come_call_finalizer(buffer_finalize,((struct sInfo*)come_null_check(self, "sInfo_finalize", 0))->original_source, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional364=self!=((void*)0)&&((struct sInfo*)come_null_check(self, "sInfo_finalize", 2))->source!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional364) {
                    if(((struct sInfo*)come_null_check(self, "sInfo_finalize", 1))->source && !__freed_obj__) { come_call_finalizer(buffer_finalize,((struct sInfo*)come_null_check(self, "sInfo_finalize", 1))->source, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional365=self!=((void*)0)&&((struct sInfo*)come_null_check(self, "sInfo_finalize", 3))->sname!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional365) {
                    if(((struct sInfo*)come_null_check(self, "sInfo_finalize", 2))->sname && !__freed_obj__) { ((struct sInfo*)come_null_check(self, "sInfo_finalize", 2))->sname = come_decrement_ref_count(((struct sInfo*)come_null_check(self, "sInfo_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional366=self!=((void*)0)&&((struct sInfo*)come_null_check(self, "sInfo_finalize", 4))->base_sname!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional366) {
                    if(((struct sInfo*)come_null_check(self, "sInfo_finalize", 3))->base_sname && !__freed_obj__) { ((struct sInfo*)come_null_check(self, "sInfo_finalize", 3))->base_sname = come_decrement_ref_count(((struct sInfo*)come_null_check(self, "sInfo_finalize", 3))->base_sname, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional367=self!=((void*)0)&&((struct sInfo*)come_null_check(self, "sInfo_finalize", 5))->err_line!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional367) {
                    if(((struct sInfo*)come_null_check(self, "sInfo_finalize", 4))->err_line && !__freed_obj__) { ((struct sInfo*)come_null_check(self, "sInfo_finalize", 4))->err_line = come_decrement_ref_count(((struct sInfo*)come_null_check(self, "sInfo_finalize", 4))->err_line, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional368=self!=((void*)0)&&((struct sInfo*)come_null_check(self, "sInfo_finalize", 6))->clang_option!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional368) {
                    if(((struct sInfo*)come_null_check(self, "sInfo_finalize", 5))->clang_option && !__freed_obj__) { ((struct sInfo*)come_null_check(self, "sInfo_finalize", 5))->clang_option = come_decrement_ref_count(((struct sInfo*)come_null_check(self, "sInfo_finalize", 5))->clang_option, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional369=self!=((void*)0)&&((struct sInfo*)come_null_check(self, "sInfo_finalize", 7))->cpp_option!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional369) {
                    if(((struct sInfo*)come_null_check(self, "sInfo_finalize", 6))->cpp_option && !__freed_obj__) { ((struct sInfo*)come_null_check(self, "sInfo_finalize", 6))->cpp_option = come_decrement_ref_count(((struct sInfo*)come_null_check(self, "sInfo_finalize", 6))->cpp_option, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional370=self!=((void*)0)&&((struct sInfo*)come_null_check(self, "sInfo_finalize", 8))->funcs!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional370) {
                    if(((struct sInfo*)come_null_check(self, "sInfo_finalize", 7))->funcs && !__freed_obj__) { come_call_finalizer(map$2charphsFunphp_finalize,((struct sInfo*)come_null_check(self, "sInfo_finalize", 7))->funcs, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional371=self!=((void*)0)&&((struct sInfo*)come_null_check(self, "sInfo_finalize", 9))->generics_funcs!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional371) {
                    if(((struct sInfo*)come_null_check(self, "sInfo_finalize", 8))->generics_funcs && !__freed_obj__) { come_call_finalizer(map$2charphsGenericsFunphp_finalize,((struct sInfo*)come_null_check(self, "sInfo_finalize", 8))->generics_funcs, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional372=self!=((void*)0)&&((struct sInfo*)come_null_check(self, "sInfo_finalize", 10))->classes!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional372) {
                    if(((struct sInfo*)come_null_check(self, "sInfo_finalize", 9))->classes && !__freed_obj__) { come_call_finalizer(map$2charphsClassphp_finalize,((struct sInfo*)come_null_check(self, "sInfo_finalize", 9))->classes, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional373=self!=((void*)0)&&((struct sInfo*)come_null_check(self, "sInfo_finalize", 11))->types!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional373) {
                    if(((struct sInfo*)come_null_check(self, "sInfo_finalize", 10))->types && !__freed_obj__) { come_call_finalizer(map$2charphsTypephp_finalize,((struct sInfo*)come_null_check(self, "sInfo_finalize", 10))->types, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional374=self!=((void*)0)&&((struct sInfo*)come_null_check(self, "sInfo_finalize", 12))->generics_classes!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional374) {
                    if(((struct sInfo*)come_null_check(self, "sInfo_finalize", 11))->generics_classes && !__freed_obj__) { come_call_finalizer(map$2charphsClassphp_finalize,((struct sInfo*)come_null_check(self, "sInfo_finalize", 11))->generics_classes, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional375=self!=((void*)0)&&((struct sInfo*)come_null_check(self, "sInfo_finalize", 13))->module!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional375) {
                    if(((struct sInfo*)come_null_check(self, "sInfo_finalize", 12))->module && !__freed_obj__) { come_call_finalizer(sModule_finalize,((struct sInfo*)come_null_check(self, "sInfo_finalize", 12))->module, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional376=self!=((void*)0)&&((struct sInfo*)come_null_check(self, "sInfo_finalize", 14))->type!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional376) {
                    if(((struct sInfo*)come_null_check(self, "sInfo_finalize", 13))->type && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct sInfo*)come_null_check(self, "sInfo_finalize", 13))->type, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional377=self!=((void*)0)&&((struct sInfo*)come_null_check(self, "sInfo_finalize", 15))->right_value_objects!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional377) {
                    if(((struct sInfo*)come_null_check(self, "sInfo_finalize", 14))->right_value_objects && !__freed_obj__) { come_call_finalizer(list$1sRightValueObjectphp_finalize,((struct sInfo*)come_null_check(self, "sInfo_finalize", 14))->right_value_objects, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional378=self!=((void*)0)&&((struct sInfo*)come_null_check(self, "sInfo_finalize", 16))->generics_type!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional378) {
                    if(((struct sInfo*)come_null_check(self, "sInfo_finalize", 15))->generics_type && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct sInfo*)come_null_check(self, "sInfo_finalize", 15))->generics_type, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional379=self!=((void*)0)&&((struct sInfo*)come_null_check(self, "sInfo_finalize", 17))->method_generics_types!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional379) {
                    if(((struct sInfo*)come_null_check(self, "sInfo_finalize", 16))->method_generics_types && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,((struct sInfo*)come_null_check(self, "sInfo_finalize", 16))->method_generics_types, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional380=self!=((void*)0)&&((struct sInfo*)come_null_check(self, "sInfo_finalize", 18))->stack!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional380) {
                    if(((struct sInfo*)come_null_check(self, "sInfo_finalize", 17))->stack && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,((struct sInfo*)come_null_check(self, "sInfo_finalize", 17))->stack, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional381=self!=((void*)0)&&((struct sInfo*)come_null_check(self, "sInfo_finalize", 19))->come_function_result_type!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional381) {
                    if(((struct sInfo*)come_null_check(self, "sInfo_finalize", 18))->come_function_result_type && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct sInfo*)come_null_check(self, "sInfo_finalize", 18))->come_function_result_type, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional382=self!=((void*)0)&&((struct sInfo*)come_null_check(self, "sInfo_finalize", 20))->gv_table!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional382) {
                    if(((struct sInfo*)come_null_check(self, "sInfo_finalize", 19))->gv_table && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,((struct sInfo*)come_null_check(self, "sInfo_finalize", 19))->gv_table, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional383=self!=((void*)0)&&((struct sInfo*)come_null_check(self, "sInfo_finalize", 21))->generics_type_names!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional383) {
                    if(((struct sInfo*)come_null_check(self, "sInfo_finalize", 20))->generics_type_names && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct sInfo*)come_null_check(self, "sInfo_finalize", 20))->generics_type_names, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional384=self!=((void*)0)&&((struct sInfo*)come_null_check(self, "sInfo_finalize", 22))->impl_type!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional384) {
                    if(((struct sInfo*)come_null_check(self, "sInfo_finalize", 21))->impl_type && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct sInfo*)come_null_check(self, "sInfo_finalize", 21))->impl_type, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional385=self!=((void*)0)&&((struct sInfo*)come_null_check(self, "sInfo_finalize", 23))->output_file_name!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional385) {
                    if(((struct sInfo*)come_null_check(self, "sInfo_finalize", 22))->output_file_name && !__freed_obj__) { ((struct sInfo*)come_null_check(self, "sInfo_finalize", 22))->output_file_name = come_decrement_ref_count(((struct sInfo*)come_null_check(self, "sInfo_finalize", 22))->output_file_name, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static struct optional$2charphbool* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional410;
struct list_item$1charph* it_276;
int i_277;
_Bool _while_condtional32;
_Bool _if_conditional411;
void* right_value437;
void* right_value438;
struct optional$2charphbool* __result166__;
char* default_value_278;
void* right_value439;
void* right_value440;
struct optional$2charphbool* __result167__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_276, 0, sizeof(struct list_item$1charph*));
memset(&i_277, 0, sizeof(int));
memset(&right_value437, 0, sizeof(void*));
memset(&right_value438, 0, sizeof(void*));
memset(&default_value_278, 0, sizeof(char*));
memset(&right_value439, 0, sizeof(void*));
memset(&right_value440, 0, sizeof(void*));
                        if(_if_conditional410=position<0,                        __freed_obj__ = 0, 
                        _if_conditional410) {
                            position+=((struct list$1charph*)come_null_check(self, "./comelang2.h", 735))->len;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        it_276=((struct list$1charph*)come_null_check(self, "./comelang2.h", 738))->head;
                        __freed_obj__ = 0;
                        i_277=0;
                        __freed_obj__ = 0;
                        while(_while_condtional32=it_276!=((void*)0),                        __freed_obj__ = 0, 
                        _while_condtional32) {
                            if(_if_conditional411=position==i_277,                            __freed_obj__ = 0, 
                            _if_conditional411) {
                                __result166__ = __result_obj__ = ((struct optional$2charphbool*)(right_value438=optional$2charphbool_initialize((struct optional$2charphbool*)come_increment_ref_count(((struct optional$2charphbool*)(right_value437=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "./comelang2.h", 742)))),(char*)come_increment_ref_count(((struct list_item$1charph*)come_null_check(it_276, "./comelang2.h", 742))->item),(_Bool)1)));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value437);
                                if(right_value437 && right_value437 != __result_obj__ && !__freed_obj__) { right_value437 = come_decrement_ref_count(right_value437, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value437;
                                __freed_obj__ = 0;
                                return __result166__;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            it_276=((struct list_item$1charph*)come_null_check(it_276, "./comelang2.h", 744))->next;
                            __freed_obj__ = 0;
                            i_277++;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __freed_obj__ = 0;
                        memset(&default_value_278,0,sizeof(char*));
                        __freed_obj__ = 0;
                        __result167__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 750), ((struct optional$2charphbool*)(right_value440=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value439=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "./comelang2.h", 750))),(char*)come_increment_ref_count(default_value_278),(_Bool)0))));
                        if(default_value_278 && !__freed_obj__) { default_value_278 = come_decrement_ref_count(default_value_278, (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value439);
                        if(right_value439 && right_value439 != __result_obj__ && !__freed_obj__) { right_value439 = come_decrement_ref_count(right_value439, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value439;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value440);
                        if(right_value440 && right_value440 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value440, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value440;
                        __freed_obj__ = 0;
                        return __result167__;
                        __freed_obj__ = 0;
                        if(default_value_278 && !__freed_obj__) { default_value_278 = come_decrement_ref_count(default_value_278, (void*)0, (void*)0, 0, 0, 0); }
}

static struct optional$2charphbool* optional$2charphbool_initialize(struct optional$2charphbool* self, char* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* __dec_obj130;
struct optional$2charphbool* __result165__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                    __dec_obj130=((struct optional$2charphbool*)come_null_check(self, "./comelang2.h", 38))->v1;
                                    ((struct optional$2charphbool*)come_null_check(self, "./comelang2.h", 38))->v1=(char*)come_increment_ref_count(v1);
                                    if(__dec_obj130) { __dec_obj130 = come_decrement_ref_count(__dec_obj130, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = 0;
                                    ((struct optional$2charphbool*)come_null_check(self, "./comelang2.h", 39))->v2=v2;
                                    __freed_obj__ = 0;
                                    __result165__ = __result_obj__ = self;
                                    if(self && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                                    if(v1 && !__freed_obj__) { v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 1, 0); }
                                    __freed_obj__ = 0;
                                    return __result165__;
                                    __freed_obj__ = 0;
                                    if(self && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                                    if(v1 && !__freed_obj__) { v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 1, 0); }
}

void method_block2_02transpilec(struct __current_stack2__* parent){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        printf("%s %d: linker faield\n",(*(parent->info_275)).sname,(*(parent->info_275)).sline);
                        __freed_obj__ = 0;
                        exit(13);
                        __freed_obj__ = 0;
}

