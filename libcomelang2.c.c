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
char* gComeStackFrameSName[10];
int gComeStackFrameSLine[10];
int gNumComeStackFrame=0;
struct buffer* gComeStackFrameBuffer=((void*)0);
void* gComeHeapTop=((void*)0);
struct sMemHeader
{
    void* mem;
    long int size;
};
struct sMemHeader* gMemHeaderTable;
long int gSizeMemHeaders=0;
long int gNumMemHeaders=0;
struct optional$2_IO_FILEpbool
{
    struct _IO_FILE* v1;
    _Bool v2;
};

// header function
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

static void smart_pointer$1charp_finalize(struct smart_pointer$1char* self);
static void smart_pointer$1shortp_finalize(struct smart_pointer$1short* self);
static void smart_pointer$1intp_finalize(struct smart_pointer$1int* self);
static void smart_pointer$1longp_finalize(struct smart_pointer$1long* self);
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

struct sNode* create_object(struct sType* type, struct sInfo* info);

struct sNode* create_true_object(struct sInfo* info);

struct sNode* create_false_object(struct sInfo* info);

struct optional$2sNodephbool* string_node_v21(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* top_level_v94(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* post_position_operator3_v21(struct sNode* node, struct sInfo* info);

struct sNode* top_level_v93(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* top_level_v92(char* buf, char* head, int head_sline, struct sInfo* info);

char* dirname(char* __path);

char* __xpg_basename(char* __path);

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

void come_push_stackframe(char* sname, int sline);

void come_pop_stackframe();

void come_save_stackframe(char* sname, int sline);

void exception_stackframe();

void stackframe();

char* come_get_stackframe();

void* come_null_check(void* mem, char* sname, int sline);

void* come_range_check(void* mem, void* begin, void* end, char* sname, int sline);

_Bool bool_expect(_Bool self, void* parent, void (*block)(void*));

_Bool bool_value(_Bool self);

int int_catch(int self, void* parent, void (*block)(void*));

int int_expect(int self, void* parent, void (*block)(void*));

int int_value(int self);

int int_except(int self, void* parent, void (*block)(void*));

_Bool bool_except(_Bool self, void* parent, void (*block)(void*));

_Bool bool_catch(_Bool self, void* parent, void (*block)(void*));

void xassert(char* msg, _Bool test);

void come_heap_init(int come_malloc, int come_debug);

void come_heap_final();

static void come_mem_header_rehash();
static void* come_alloc_mem_from_heap_pool(long int size, char* sname, int sline);
static void come_free_mem_of_heap_pool(char* mem);
static _Bool is_valid_object(char* mem);
void* come_calloc(long int count, long int size, char* sname, int sline);

void come_free_object(void* mem);

void* come_memdup(void* block, char* sname, int sline);

void* come_increment_ref_count(void* mem);

void* come_print_ref_count(void* mem);

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_);

void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_);

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

struct buffer* buffer_append_str(struct buffer* self, char* mem);

struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* mem);

struct buffer* buffer_append_int(struct buffer* self, int value);

struct buffer* buffer_append_long(struct buffer* self, long value);

struct buffer* buffer_append_short(struct buffer* self, short short value);

struct buffer* buffer_alignment(struct buffer* self);

struct optional$2intbool* buffer_compare(struct buffer* left, struct buffer* right);

static struct optional$2intbool* optional$2intbool_initialize(struct optional$2intbool* self, int v1, _Bool v2);
static void optional$2intboolp_finalize(struct optional$2intbool* self);
struct buffer* string_to_buffer(char* self);

struct buffer* charp_to_buffer(char* self);

char* buffer_to_string(struct buffer* self);

_Bool bool_equals(_Bool self, _Bool right);

_Bool int_equals(int self, int right);

_Bool char_equals(char self, char right);

_Bool short_equals(short short self, short short right);

_Bool long_equals(long self, long right);

_Bool size_t_equals(long int self, long int right);

_Bool float_equals(float self, float right);

_Bool double_equals(double self, double right);

struct optional$2boolbool* string_equals(char* self, char* right);

static struct optional$2boolbool* optional$2boolbool_initialize(struct optional$2boolbool* self, _Bool v1, _Bool v2);
static void optional$2boolboolp_finalize(struct optional$2boolbool* self);
struct optional$2boolbool* charp_equals(char* self, char* right);

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

unsigned int short_get_hash_key(short int value);

unsigned int int_get_hash_key(int value);

unsigned int long_get_hash_key(long value);

unsigned int size_t_get_hash_key(long int value);

unsigned int float_get_hash_key(float value);

unsigned int double_get_hash_key(double value);

unsigned int string_get_hash_key(char* value);

unsigned int charp_get_hash_key(char* value);

_Bool bool_clone(_Bool self);

char char_clone(char self);

short int short_clone(short short self);

int int_clone(int self);

long int long_clone(long self);

long int size_t_clone(long int self);

double double_clone(double self);

float float_clone(float self);

char* charp_clone(char* self);

char* string_clone(char* self);

_Bool xiswalpha(unsigned int c);

_Bool xiswblank(unsigned int c);

_Bool xiswdigit(unsigned int c);

_Bool xiswalnum(unsigned int c);

_Bool xisalpha(char c);

_Bool xisblank(char c);

_Bool xisdigit(char c);

_Bool xisalnum(char c);

_Bool xisascii(char c);

_Bool xiswascii(unsigned int c);

int string_length(char* str);

int charp_length(char* str);

char* string_reverse(char* str);

char* charp_reverse(char* str);

char* string_operator_load_range_element(char* str, int head, int tail);

char* charp_operator_load_range_element(char* str, int head, int tail);

char* charp_substring(char* str, int head, int tail);

char* string_substring(char* str, int head, int tail);

char* xsprintf(char* msg, ...);

static void va_list_finalize(va_list self);
char* charp_delete(char* str, int head, int tail);

char* string_delete(char* str, int head, int tail);

struct list$1charph* charp_split_char(char* self, char c);

static struct list$1charph* list$1charph_initialize(struct list$1charph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item);
struct list$1charph* string_split_char(char* self, char c);

char* xbasename(char* path);

char* xdirname(char* path);

char* xnoextname(char* path);

char* xextname(char* path);

char* xrealpath(char* path);

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

int size_t_compare(long int left, long int right);

int float_compare(float left, float right);

int double_compare(double left, double right);

int string_compare(char* left, char* right);

int charp_compare(char* left, char* right);

struct optional$2charphbool* FILE_read(struct _IO_FILE* f);

static struct optional$2charphbool* optional$2charphbool_initialize(struct optional$2charphbool* self, char* v1, _Bool v2);
static void optional$2charphboolp_finalize(struct optional$2charphbool* self);
struct optional$2intbool* FILE_write(struct _IO_FILE* f, char* str);

struct optional$2intbool* FILE_fclose(struct _IO_FILE* f);

struct optional$2_IO_FILEpbool* FILE_fprintf(struct _IO_FILE* f, const char* msg, ...);

static struct optional$2_IO_FILEpbool* optional$2_IO_FILEpbool_initialize(struct optional$2_IO_FILEpbool* self, struct _IO_FILE* v1, _Bool v2);
static void optional$2_IO_FILEpboolp_finalize(struct optional$2_IO_FILEpbool* self);
struct optional$2intbool* string_write(char* self, char* file_name, _Bool append);

struct optional$2intbool* charp_write(char* self, char* file_name, _Bool append);

struct optional$2charphbool* string_read(char* file_name);

struct optional$2charphbool* charp_read(char* file_name);

struct optional$2list$1charphphbool* FILE_readlines(struct _IO_FILE* f);

static struct optional$2list$1charphphbool* optional$2list$1charphphbool_initialize(struct optional$2list$1charphphbool* self, struct list$1charph* v1, _Bool v2);
static void list$1charph_finalize(struct list$1charph* self);
static void optional$2list$1charphphboolp_finalize(struct optional$2list$1charphphbool* self);
struct optional$2intbool* fopen_block(const char* path, const char* mode, void* parent, void (*block)(void*,struct _IO_FILE*));

struct optional$2charphbool* charp_puts(char* self);

struct optional$2charphbool* charp_print(char* self);

struct optional$2charphbool* string_printf(char* self, ...);

struct optional$2charphbool* charp_printf(char* self, ...);

int int_printf(int self, char* msg);

struct optional$2charphbool* string_puts(char* self);

void int_times(int self, void* parent, void (*block)(void*,int));

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

void come_push_stackframe(char* sname, int sline){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional5;
int i_5;
_Bool _for_condtionalA1;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_5, 0, sizeof(int));
    if(_if_conditional5=gNumComeStackFrame==10,    _if_conditional5) {
        for(
        i_5=0 ,        0;        _for_condtionalA1=        i_5<10-1 ,        _for_condtionalA1;        i_5++ ,        0        ){
            gComeStackFrameSName[i_5]=gComeStackFrameSName[i_5+1];
            gComeStackFrameSLine[i_5]=gComeStackFrameSLine[i_5+1];
        }
        gComeStackFrameSName[i_5]=sname;
        gComeStackFrameSLine[i_5]=sline;
    }
    else {
        gComeStackFrameSName[gNumComeStackFrame]=sname;
        gComeStackFrameSLine[gNumComeStackFrame]=sline;
        gNumComeStackFrame++;
    }
}

void come_pop_stackframe(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional6;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional6=gNumComeStackFrame>0,    _if_conditional6) {
        gNumComeStackFrame--;
    }
}

void come_save_stackframe(char* sname, int sline){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional7;
void* right_value10;
int i_6;
_Bool _for_condtionalA2;
void* right_value11;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_6, 0, sizeof(int));
    if(_if_conditional7=gComeStackFrameBuffer,    _if_conditional7) {
        buffer_reset(gComeStackFrameBuffer);
        buffer_append_str(gComeStackFrameBuffer,((char*)(right_value10=xsprintf("%s %d\n",sname,sline))));
        if(right_value10 && right_value10 != __result_obj__) { right_value10 = come_decrement_ref_count(right_value10, (void*)0, (void*)0, 1, 0, 0); }
        for(
        i_6=gNumComeStackFrame-2 ,        0;        _for_condtionalA2=        i_6>=0 ,        _for_condtionalA2;        i_6-- ,        0        ){
            buffer_append_str(gComeStackFrameBuffer,((char*)(right_value11=xsprintf("%s %d\n",gComeStackFrameSName[i_6],gComeStackFrameSLine[i_6]))));
            if(right_value11 && right_value11 != __result_obj__) { right_value11 = come_decrement_ref_count(right_value11, (void*)0, (void*)0, 1, 0, 0); }
        }
    }
}

void exception_stackframe(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value12;
memset(&__result_obj__, 0, sizeof(void*));
    printf("%s",((char*)(right_value12=buffer_to_string(gComeStackFrameBuffer))));
    if(right_value12 && right_value12 != __result_obj__) { right_value12 = come_decrement_ref_count(right_value12, (void*)0, (void*)0, 1, 0, 0); }
}

void stackframe(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
int i_7;
_Bool _for_condtionalA3;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_7, 0, sizeof(int));
    for(
    i_7=gNumComeStackFrame-1 ,    0;    _for_condtionalA3=    i_7>=0 ,    _for_condtionalA3;    i_7-- ,    0    ){
        printf("%s %d\n",gComeStackFrameSName[i_7],gComeStackFrameSLine[i_7]);
    }
}

char* come_get_stackframe(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value13;
char* __result13__;
memset(&__result_obj__, 0, sizeof(void*));
    __result13__ = __result_obj__ = ((char*)(right_value13=buffer_to_string(gComeStackFrameBuffer)));
    return __result13__;
}

void* come_null_check(void* mem, char* sname, int sline){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional8;
void* __result14__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional8=mem==((void*)0),    _if_conditional8) {
        printf("%s %d: null check error\n",sname,sline);
        stackframe();
        exit(2);
    }
    __result14__ = __result_obj__ = mem;
    return __result14__;
}

void* come_range_check(void* mem, void* begin, void* end, char* sname, int sline){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional9;
_Bool _if_conditional10;
_Bool _if_conditional11;
void* __result15__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional9=mem==((void*)0),    _if_conditional9) {
        printf("%s %d: null check error\n",sname,sline);
        stackframe();
        exit(2);
    }
    if(_if_conditional10=mem<begin,    _if_conditional10) {
        printf("%s %d: range check error\n",sname,sline);
        stackframe();
        exit(2);
    }
    if(_if_conditional11=mem>=end,    _if_conditional11) {
        printf("%s %d: range check error\n",sname,sline);
        stackframe();
        exit(2);
    }
    __result15__ = __result_obj__ = mem;
    return __result15__;
}

_Bool bool_expect(_Bool self, void* parent, void (*block)(void*)){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional12;
_Bool _if_conditional13;
_Bool __result16__;
_Bool __result17__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional12=!self,    _if_conditional12) {
        block(parent);
        if(_if_conditional13=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,        _if_conditional13) {
            __result16__ = self;
            return __result16__;
        }
        stackframe();
        exit(1);
    }
    __result17__ = self;
    return __result17__;
}

_Bool bool_value(_Bool self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __result18__;
memset(&__result_obj__, 0, sizeof(void*));
    __result18__ = self;
    return __result18__;
}

int int_catch(int self, void* parent, void (*block)(void*)){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional14;
_Bool _if_conditional15;
int __result19__;
int __result20__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional14=self<0,    _if_conditional14) {
        block(parent);
        if(_if_conditional15=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,        _if_conditional15) {
            __result19__ = self;
            return __result19__;
        }
    }
    __result20__ = self;
    return __result20__;
}

int int_expect(int self, void* parent, void (*block)(void*)){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional16;
_Bool _if_conditional17;
int __result21__;
int __result22__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional16=self<0,    _if_conditional16) {
        block(parent);
        if(_if_conditional17=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,        _if_conditional17) {
            __result21__ = self;
            return __result21__;
        }
        stackframe();
        exit(1);
    }
    __result22__ = self;
    return __result22__;
}

int int_value(int self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
int __result23__;
memset(&__result_obj__, 0, sizeof(void*));
    __result23__ = self;
    return __result23__;
}

int int_except(int self, void* parent, void (*block)(void*)){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional18;
_Bool _if_conditional19;
int __result24__;
int __result25__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional18=self<0,    _if_conditional18) {
        block(parent);
        if(_if_conditional19=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,        _if_conditional19) {
            __result24__ = self;
            return __result24__;
        }
    }
    __result25__ = self;
    return __result25__;
}

_Bool bool_except(_Bool self, void* parent, void (*block)(void*)){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional20;
_Bool _if_conditional21;
_Bool __result26__;
_Bool __result27__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional20=!self,    _if_conditional20) {
        block(parent);
        if(_if_conditional21=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,        _if_conditional21) {
            __result26__ = self;
            return __result26__;
        }
    }
    __result27__ = self;
    return __result27__;
}

_Bool bool_catch(_Bool self, void* parent, void (*block)(void*)){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional22;
_Bool _if_conditional23;
_Bool __result28__;
_Bool __result29__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional22=!self,    _if_conditional22) {
        block(parent);
        if(_if_conditional23=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,        _if_conditional23) {
            __result28__ = self;
            return __result28__;
        }
    }
    __result29__ = self;
    return __result29__;
}

void xassert(char* msg, _Bool test){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional24;
memset(&__result_obj__, 0, sizeof(void*));
    printf("%s...",msg);
    if(_if_conditional24=!test,    _if_conditional24) {
        puts("false");
        exit(2);
    }
    puts("ok");
}

void come_heap_init(int come_malloc, int come_debug){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value14;
void* right_value15;
memset(&__result_obj__, 0, sizeof(void*));
    gSizeMemHeaders=1024;
    gMemHeaderTable=calloc(1,sizeof(struct sMemHeader)*gSizeMemHeaders);
    gNumMemHeaders=0;
    gComeStackFrameBuffer=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value15=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value14=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 231))))))));
    if(right_value14 && right_value14 != __result_obj__) { come_call_finalizer(buffer_finalize,right_value14, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value15 && right_value15 != __result_obj__) { come_call_finalizer(buffer_finalize,right_value15, (void*)0, (void*)0, 0, 1, 0, 0); }
    gComeHeapTop=sbrk(0);
}

void come_heap_final(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
    if(gComeStackFrameBuffer) { come_call_finalizer(buffer_finalize,gComeStackFrameBuffer, (void*)0, (void*)0, 0, 0, 0, 0); }
    free(gMemHeaderTable);
}

static void come_mem_header_rehash(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
long int new_size_8;
struct sMemHeader* new_table_9;
struct sMemHeader* it_10;
_Bool _while_condtional1;
_Bool _if_conditional25;
long int key_11;
struct sMemHeader* it2_12;
_Bool _while_condtional2;
_Bool _if_conditional26;
_Bool _if_conditional27;
_Bool _if_conditional28;
memset(&__result_obj__, 0, sizeof(void*));
memset(&new_size_8, 0, sizeof(long int));
memset(&new_table_9, 0, sizeof(struct sMemHeader*));
memset(&it_10, 0, sizeof(struct sMemHeader*));
memset(&key_11, 0, sizeof(long int));
memset(&it2_12, 0, sizeof(struct sMemHeader*));
    new_size_8=gSizeMemHeaders*3;
    new_table_9=calloc(1,sizeof(struct sMemHeader)*new_size_8);
    it_10=gMemHeaderTable;
    while(_while_condtional1=it_10<gMemHeaderTable+gSizeMemHeaders,    _while_condtional1) {
        if(_if_conditional25=it_10->mem,        _if_conditional25) {
            key_11=(long int)it_10->mem%(long int)new_size_8;
            it2_12=new_table_9+key_11;
            while(_while_condtional2=(_Bool)1,            _while_condtional2) {
                if(_if_conditional26=it2_12->mem==((void*)0),                _if_conditional26) {
                    break;
                }
                else {
                    it2_12++;
                    if(_if_conditional27=it2_12==new_table_9+new_size_8,                    _if_conditional27) {
                        it2_12=new_table_9;
                    }
                    else {
                        if(_if_conditional28=it2_12==new_table_9+key_11,                        _if_conditional28) {
                            puts("mem header unexpected error");
                            stackframe();
                            exit(2);
                        }
                    }
                }
            }
            it2_12->mem=it_10->mem;
            it2_12->size=it_10->size;
        }
        it_10++;
    }
    free(gMemHeaderTable);
    gMemHeaderTable=new_table_9;
    gSizeMemHeaders=new_size_8;
}

static void* come_alloc_mem_from_heap_pool(long int size, char* sname, int sline){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* result_13;
_Bool _if_conditional29;
long int key_14;
struct sMemHeader* it_15;
_Bool _while_condtional3;
_Bool _if_conditional30;
_Bool _if_conditional31;
_Bool _if_conditional32;
void* __result30__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_13, 0, sizeof(void*));
memset(&key_14, 0, sizeof(long int));
memset(&it_15, 0, sizeof(struct sMemHeader*));
    result_13=calloc(1,size);
    if(_if_conditional29=gNumMemHeaders>=gSizeMemHeaders/3,    _if_conditional29) {
        come_mem_header_rehash();
    }
    key_14=(long int)result_13%gSizeMemHeaders;
    it_15=gMemHeaderTable+key_14;
    while(_while_condtional3=(_Bool)1,    _while_condtional3) {
        if(_if_conditional30=it_15->mem==((void*)0),        _if_conditional30) {
            break;
        }
        else {
            it_15++;
            if(_if_conditional31=it_15==gMemHeaderTable+gSizeMemHeaders,            _if_conditional31) {
                it_15=gMemHeaderTable;
            }
            else {
                if(_if_conditional32=it_15==gMemHeaderTable+key_14,                _if_conditional32) {
                    puts("mem header unexpected error");
                    stackframe();
                    exit(2);
                }
            }
        }
    }
    it_15->mem=result_13;
    it_15->size=size;
    gNumMemHeaders++;
    __result30__ = __result_obj__ = result_13;
    return __result30__;
}

static void come_free_mem_of_heap_pool(char* mem){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional33;
long int key_16;
struct sMemHeader* it_17;
_Bool _while_condtional4;
_Bool _if_conditional34;
_Bool _if_conditional35;
_Bool _if_conditional36;
_Bool _if_conditional37;
memset(&__result_obj__, 0, sizeof(void*));
memset(&key_16, 0, sizeof(long int));
memset(&it_17, 0, sizeof(struct sMemHeader*));
    if(_if_conditional33=mem,    _if_conditional33) {
        key_16=(long int)mem%gSizeMemHeaders;
        it_17=gMemHeaderTable+key_16;
        while(_while_condtional4=(_Bool)1,        _while_condtional4) {
            if(_if_conditional34=it_17->mem==((void*)0),            _if_conditional34) {
                return;
            }
            else {
                if(_if_conditional35=it_17->mem==mem,                _if_conditional35) {
                    break;
                }
                else {
                    it_17++;
                    if(_if_conditional36=it_17==gMemHeaderTable+gSizeMemHeaders,                    _if_conditional36) {
                        it_17=gMemHeaderTable;
                    }
                    else {
                        if(_if_conditional37=it_17==gMemHeaderTable+key_16,                        _if_conditional37) {
                            return;
                        }
                    }
                }
            }
        }
        it_17->mem=((void*)0);
        it_17->size=0;
        free(mem);
        gNumMemHeaders--;
    }
}

static _Bool is_valid_object(char* mem){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional38;
char* mem2_18;
_Bool _if_conditional39;
_Bool __result31__;
long int key_19;
struct sMemHeader* it_20;
_Bool _while_condtional5;
_Bool _if_conditional40;
_Bool __result32__;
_Bool _if_conditional41;
_Bool __result33__;
_Bool _if_conditional42;
_Bool _if_conditional43;
_Bool __result34__;
_Bool __result35__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&mem2_18, 0, sizeof(char*));
memset(&key_19, 0, sizeof(long int));
memset(&it_20, 0, sizeof(struct sMemHeader*));
    if(_if_conditional38=mem,    _if_conditional38) {
        mem2_18=mem-sizeof(long int)-sizeof(long int);
        if(_if_conditional39=(void*)mem2_18<sbrk(0)&&(void*)mem2_18>=gComeHeapTop,        _if_conditional39) {
        }
        else {
            __result31__ = (_Bool)0;
            return __result31__;
        }
        key_19=(long int)mem2_18%gSizeMemHeaders;
        it_20=gMemHeaderTable+key_19;
        while(_while_condtional5=(_Bool)1,        _while_condtional5) {
            if(_if_conditional40=it_20->mem==((void*)0),            _if_conditional40) {
                __result32__ = (_Bool)0;
                return __result32__;
            }
            else {
                if(_if_conditional41=it_20->mem==mem2_18,                _if_conditional41) {
                    __result33__ = (_Bool)1;
                    return __result33__;
                }
                else {
                    it_20++;
                    if(_if_conditional42=it_20==gMemHeaderTable+gSizeMemHeaders,                    _if_conditional42) {
                        it_20=gMemHeaderTable;
                    }
                    else {
                        if(_if_conditional43=it_20==gMemHeaderTable+key_19,                        _if_conditional43) {
                            __result34__ = (_Bool)0;
                            return __result34__;
                        }
                    }
                }
            }
        }
    }
    __result35__ = (_Bool)0;
    return __result35__;
}

void* come_calloc(long int count, long int size, char* sname, int sline){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
char* mem_21;
long int* ref_count_22;
long int* size2_23;
void* __result36__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&mem_21, 0, sizeof(char*));
memset(&ref_count_22, 0, sizeof(long int*));
memset(&size2_23, 0, sizeof(long int*));
    mem_21=come_alloc_mem_from_heap_pool(sizeof(long int)+sizeof(long int)+count*size,sname,sline);
    ref_count_22=(long int*)mem_21;
    *ref_count_22=0;
    size2_23=(long int*)(mem_21+sizeof(long int));
    *size2_23=size*count+sizeof(long int)+sizeof(long int);
    __result36__ = __result_obj__ = mem_21+sizeof(long int)+sizeof(long int);
    return __result36__;
}

void come_free_object(void* mem){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional44;
long int* ref_count_24;
memset(&__result_obj__, 0, sizeof(void*));
memset(&ref_count_24, 0, sizeof(long int*));
    if(_if_conditional44=mem==((void*)0),    _if_conditional44) {
        return;
    }
    ref_count_24=(long int*)((char*)mem-sizeof(long int)-sizeof(long int));
    come_free_mem_of_heap_pool((char*)ref_count_24);
}

void* come_memdup(void* block, char* sname, int sline){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional45;
void* __result37__;
_Bool _if_conditional46;
void* __result38__;
char* mem_25;
long int* size_p_26;
long int size_27;
void* result_28;
void* __result39__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&mem_25, 0, sizeof(char*));
memset(&size_p_26, 0, sizeof(long int*));
memset(&size_27, 0, sizeof(long int));
memset(&result_28, 0, sizeof(void*));
    if(_if_conditional45=!block,    _if_conditional45) {
        __result37__ = __result_obj__ = ((void*)0);
        return __result37__;
    }
    if(_if_conditional46=!is_valid_object(block),    _if_conditional46) {
        __result38__ = __result_obj__ = ((void*)0);
        return __result38__;
    }
    mem_25=(char*)block-sizeof(long int)-sizeof(long int);
    size_p_26=(long int*)(mem_25+sizeof(long int));
    size_27=*size_p_26-sizeof(long int)-sizeof(long int);
    result_28=come_calloc(1,size_27,sname,sline);
    memcpy(result_28,block,size_27);
    __result39__ = __result_obj__ = result_28;
    return __result39__;
}

void* come_increment_ref_count(void* mem){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional47;
void* __result40__;
_Bool _if_conditional48;
void* __result41__;
long int* ref_count_29;
void* __result42__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&ref_count_29, 0, sizeof(long int*));
    if(_if_conditional47=mem==((void*)0),    _if_conditional47) {
        __result40__ = __result_obj__ = mem;
        return __result40__;
    }
    if(_if_conditional48=!is_valid_object(mem),    _if_conditional48) {
        __result41__ = __result_obj__ = mem;
        return __result41__;
    }
    ref_count_29=(long int*)((char*)mem-sizeof(long int)-sizeof(long int));
    (*ref_count_29)++;
    __result42__ = __result_obj__ = mem;
    return __result42__;
}

void* come_print_ref_count(void* mem){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional49;
void* __result43__;
long int* ref_count_30;
void* __result44__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&ref_count_30, 0, sizeof(long int*));
    if(_if_conditional49=mem==((void*)0),    _if_conditional49) {
        __result43__ = __result_obj__ = mem;
        return __result43__;
    }
    ref_count_30=(long int*)((char*)mem-sizeof(long int)-sizeof(long int));
    printf("ref_count %ld\n",*ref_count_30);
    __result44__ = __result_obj__ = mem;
    return __result44__;
}

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional50;
void* __result45__;
_Bool _if_conditional51;
void* __result46__;
long int* ref_count_31;
_Bool _if_conditional52;
long int count_32;
_Bool _if_conditional53;
_Bool _if_conditional54;
void (*finalizer_33)(void*);
void* __result47__;
void* __result48__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&ref_count_31, 0, sizeof(long int*));
memset(&count_32, 0, sizeof(long int));
memset(&finalizer_33, 0, sizeof(void (*)(void*)));
    if(_if_conditional50=mem==((void*)0),    _if_conditional50) {
        __result45__ = __result_obj__ = ((void*)0);
        return __result45__;
    }
    if(_if_conditional51=!is_valid_object(mem),    _if_conditional51) {
        __result46__ = __result_obj__ = ((void*)0);
        return __result46__;
    }
    ref_count_31=(long int*)((char*)mem-sizeof(long int)-sizeof(long int));
    if(_if_conditional52=!no_decrement,    _if_conditional52) {
        (*ref_count_31)--;
    }
    count_32=*ref_count_31;
    if(_if_conditional53=!no_free&&(count_32<=0||force_delete_),    _if_conditional53) {
        if(_if_conditional54=protocol_obj&&protocol_fun,        _if_conditional54) {
            finalizer_33=protocol_fun;
            finalizer_33(protocol_obj);
            come_free_object(protocol_obj);
        }
        come_free_object(mem);
        __result47__ = __result_obj__ = ((void*)0);
        return __result47__;
    }
    __result48__ = __result_obj__ = mem;
    return __result48__;
}

void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional55;
_Bool _if_conditional56;
_Bool _if_conditional57;
_Bool _if_conditional58;
_Bool _if_conditional59;
void (*finalizer_34)(void*);
void (*finalizer_35)(void*);
long int* ref_count_36;
_Bool _if_conditional60;
long int count_37;
_Bool _if_conditional61;
_Bool _if_conditional62;
_Bool _if_conditional63;
void (*finalizer_38)(void*);
_Bool _if_conditional64;
void (*finalizer_39)(void*);
memset(&__result_obj__, 0, sizeof(void*));
memset(&finalizer_34, 0, sizeof(void (*)(void*)));
memset(&finalizer_35, 0, sizeof(void (*)(void*)));
memset(&ref_count_36, 0, sizeof(long int*));
memset(&count_37, 0, sizeof(long int));
memset(&finalizer_38, 0, sizeof(void (*)(void*)));
memset(&finalizer_39, 0, sizeof(void (*)(void*)));
    if(_if_conditional55=mem==((void*)0),    _if_conditional55) {
        return;
    }
    if(_if_conditional56=!is_valid_object(mem),    _if_conditional56) {
        return;
    }
    if(_if_conditional57=call_finalizer_only,    _if_conditional57) {
        if(_if_conditional58=fun,        _if_conditional58) {
            if(_if_conditional59=protocol_obj&&protocol_fun,            _if_conditional59) {
                finalizer_34=protocol_fun;
                finalizer_34(protocol_obj);
            }
            finalizer_35=fun;
            finalizer_35(mem);
        }
    }
    else {
        ref_count_36=(long int*)((char*)mem-sizeof(long int)-sizeof(long int));
        if(_if_conditional60=!no_decrement,        _if_conditional60) {
            (*ref_count_36)--;
        }
        count_37=*ref_count_36;
        if(_if_conditional61=!no_free&&(count_37<=0||force_delete_),        _if_conditional61) {
            if(_if_conditional62=mem,            _if_conditional62) {
                if(_if_conditional63=protocol_obj&&protocol_fun,                _if_conditional63) {
                    finalizer_38=protocol_fun;
                    finalizer_38(protocol_obj);
                    come_free_object(protocol_obj);
                }
                if(_if_conditional64=fun,                _if_conditional64) {
                    finalizer_39=fun;
                    finalizer_39(mem);
                }
                come_free_object(mem);
            }
        }
    }
}

char* __builtin_string(char* str){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional65;
char* __result49__;
int len_40;
void* right_value16;
char* result_41;
char* __result50__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_40, 0, sizeof(int));
memset(&result_41, 0, sizeof(char*));
    if(_if_conditional65=str==((void*)0),    _if_conditional65) {
        __result49__ = __result_obj__ = ((void*)0);
        return __result49__;
    }
    len_40=strlen(str)+1;
    result_41=(char*)come_increment_ref_count(((char*)(right_value16=(char*)come_calloc(1, sizeof(char)*(1*(len_40)), "libcomelang2.c", 562))));
    if(right_value16 && right_value16 != __result_obj__) { right_value16 = come_decrement_ref_count(right_value16, (void*)0, (void*)0, 1, 0, 0); }
    strncpy(result_41,str,len_40);
    __result50__ = __result_obj__ = result_41;
    if(result_41) { result_41 = come_decrement_ref_count(result_41, (void*)0, (void*)0, 0, 1, 0); }
    return __result50__;
    if(result_41) { result_41 = come_decrement_ref_count(result_41, (void*)0, (void*)0, 0, 0, 0); }
}

_Bool come_is_contained_element(void** array, int len, void* element){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool found_42;
int i_43;
_Bool _for_condtionalA4;
_Bool _if_conditional66;
_Bool __result51__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&found_42, 0, sizeof(_Bool));
memset(&i_43, 0, sizeof(int));
    found_42=(_Bool)0;
    for(
    i_43=0 ,    0;    _for_condtionalA4=    i_43<len ,    _for_condtionalA4;    i_43++ ,    0    ){
        if(_if_conditional66=array[i_43]==element,        _if_conditional66) {
            found_42=(_Bool)1;
            break;
        }
    }
    __result51__ = found_42;
    return __result51__;
}

struct buffer* buffer_initialize(struct buffer* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value17;
char* __dec_obj6;
struct buffer* __result52__;
memset(&__result_obj__, 0, sizeof(void*));
    self->size=128;
    __dec_obj6=self->buf;
    self->buf=(char*)come_increment_ref_count(((char*)(right_value17=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang2.c", 587))));
    if(__dec_obj6) { __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0,0,0); }
    if(right_value17 && right_value17 != __result_obj__) { right_value17 = come_decrement_ref_count(right_value17, (void*)0, (void*)0, 1, 0, 0); }
    self->buf[0]=0;
    self->len=0;
    __result52__ = __result_obj__ = self;
    if(self) { come_call_finalizer(buffer_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result52__;
    if(self) { come_call_finalizer(buffer_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

void buffer_finalize(struct buffer* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional67;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional67=self&&self->buf,    _if_conditional67) {
        if(self->buf) { self->buf = come_decrement_ref_count(self->buf, (void*)0, (void*)0, 0, 0, 0); }
    }
}

void buffer_force_finalize(struct buffer* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional68;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional68=self&&self->buf,    _if_conditional68) {
        if(self->buf) { self->buf = come_decrement_ref_count(self->buf, (void*)0, (void*)0, 0, 0, 0); }
    }
}

struct buffer* buffer_clone(struct buffer* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional69;
struct buffer* __result53__;
void* right_value18;
struct buffer* result_44;
void* right_value19;
char* __dec_obj7;
struct buffer* __result54__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_44, 0, sizeof(struct buffer*));
    if(_if_conditional69=self==((void*)0),    _if_conditional69) {
        __result53__ = __result_obj__ = ((void*)0);
        return __result53__;
    }
    result_44=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value18=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 609))));
    if(right_value18 && right_value18 != __result_obj__) { come_call_finalizer(buffer_finalize,right_value18, (void*)0, (void*)0, 0, 1, 0, 0); }
    result_44->size=self->size;
    __dec_obj7=result_44->buf;
    result_44->buf=(char*)come_increment_ref_count(((char*)(right_value19=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang2.c", 612))));
    if(__dec_obj7) { __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0,0,0); }
    if(right_value19 && right_value19 != __result_obj__) { right_value19 = come_decrement_ref_count(right_value19, (void*)0, (void*)0, 1, 0, 0); }
    result_44->len=self->len;
    memcpy(result_44->buf,self->buf,self->len);
    __result54__ = __result_obj__ = result_44;
    if(result_44) { come_call_finalizer(buffer_finalize,result_44, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result54__;
    if(result_44) { come_call_finalizer(buffer_finalize,result_44, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int buffer_length(struct buffer* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional70;
int __result55__;
int __result56__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional70=self==((void*)0),    _if_conditional70) {
        __result55__ = 0;
        return __result55__;
    }
    __result56__ = self->len;
    return __result56__;
}

void buffer_reset(struct buffer* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional71;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional71=self==((void*)0),    _if_conditional71) {
        return;
    }
    self->buf[0]=0;
    self->len=0;
}

void buffer_trim(struct buffer* self, int len){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional72;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional72=self==((void*)0),    _if_conditional72) {
        return;
    }
    self->len-=len;
    self->buf[self->len]=0;
}

struct buffer* buffer_append(struct buffer* self, char* mem, long int size){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional73;
struct buffer* __result57__;
_Bool _if_conditional74;
void* right_value20;
char* old_buf_45;
int old_len_46;
int new_size_47;
void* right_value21;
char* __dec_obj8;
struct buffer* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&old_buf_45, 0, sizeof(char*));
memset(&old_len_46, 0, sizeof(int));
memset(&new_size_47, 0, sizeof(int));
    if(_if_conditional73=self==((void*)0)||mem==((void*)0),    _if_conditional73) {
        __result57__ = __result_obj__ = self;
        return __result57__;
    }
    if(_if_conditional74=self->len+size+1+1>=self->size,    _if_conditional74) {
        old_buf_45=(char*)come_increment_ref_count(((char*)(right_value20=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang2.c", 651))));
        if(right_value20 && right_value20 != __result_obj__) { right_value20 = come_decrement_ref_count(right_value20, (void*)0, (void*)0, 1, 0, 0); }
        memcpy(old_buf_45,self->buf,self->size);
        old_len_46=self->len;
        new_size_47=(self->size+size+1)*2;
        __dec_obj8=self->buf;
        self->buf=(char*)come_increment_ref_count(((char*)(right_value21=(char*)come_calloc(1, sizeof(char)*(1*(new_size_47)), "libcomelang2.c", 655))));
        if(__dec_obj8) { __dec_obj8 = come_decrement_ref_count(__dec_obj8, (void*)0, (void*)0, 0,0,0); }
        if(right_value21 && right_value21 != __result_obj__) { right_value21 = come_decrement_ref_count(right_value21, (void*)0, (void*)0, 1, 0, 0); }
        memcpy(self->buf,old_buf_45,old_len_46);
        self->buf[old_len_46]=0;
        self->size=new_size_47;
        if(old_buf_45) { old_buf_45 = come_decrement_ref_count(old_buf_45, (void*)0, (void*)0, 0, 0, 0); }
    }
    memcpy(self->buf+self->len,mem,size);
    self->len+=size;
    self->buf[self->len]=0;
    __result58__ = __result_obj__ = self;
    return __result58__;
}

struct buffer* buffer_append_char(struct buffer* self, char c){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional75;
struct buffer* __result59__;
_Bool _if_conditional76;
void* right_value22;
char* old_buf_48;
int old_len_49;
int new_size_50;
void* right_value23;
char* __dec_obj9;
struct buffer* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&old_buf_48, 0, sizeof(char*));
memset(&old_len_49, 0, sizeof(int));
memset(&new_size_50, 0, sizeof(int));
    if(_if_conditional75=self==((void*)0),    _if_conditional75) {
        __result59__ = __result_obj__ = ((void*)0);
        return __result59__;
    }
    if(_if_conditional76=self->len+1+1+1>=self->size,    _if_conditional76) {
        old_buf_48=(char*)come_increment_ref_count(((char*)(right_value22=charp_clone(self->buf))));
        if(right_value22 && right_value22 != __result_obj__) { right_value22 = come_decrement_ref_count(right_value22, (void*)0, (void*)0, 1, 0, 0); }
        old_len_49=self->len;
        new_size_50=(self->size+10+1)*2;
        __dec_obj9=self->buf;
        self->buf=(char*)come_increment_ref_count(((char*)(right_value23=(char*)come_calloc(1, sizeof(char)*(1*(new_size_50)), "libcomelang2.c", 678))));
        if(__dec_obj9) { __dec_obj9 = come_decrement_ref_count(__dec_obj9, (void*)0, (void*)0, 0,0,0); }
        if(right_value23 && right_value23 != __result_obj__) { right_value23 = come_decrement_ref_count(right_value23, (void*)0, (void*)0, 1, 0, 0); }
        memcpy(self->buf,old_buf_48,old_len_49);
        self->buf[old_len_49]=0;
        self->size=new_size_50;
        if(old_buf_48) { old_buf_48 = come_decrement_ref_count(old_buf_48, (void*)0, (void*)0, 0, 0, 0); }
    }
    self->buf[self->len]=c;
    self->len++;
    self->buf[self->len]=0;
    __result60__ = __result_obj__ = self;
    return __result60__;
}

struct buffer* buffer_append_str(struct buffer* self, char* mem){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional77;
struct buffer* __result61__;
int size_51;
_Bool _if_conditional78;
void* right_value24;
char* old_buf_52;
int old_len_53;
int new_size_54;
void* right_value25;
char* __dec_obj10;
struct buffer* __result62__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_51, 0, sizeof(int));
memset(&old_buf_52, 0, sizeof(char*));
memset(&old_len_53, 0, sizeof(int));
memset(&new_size_54, 0, sizeof(int));
    if(_if_conditional77=self==((void*)0)||mem==((void*)0),    _if_conditional77) {
        __result61__ = __result_obj__ = self;
        return __result61__;
    }
    size_51=strlen(mem);
    if(_if_conditional78=self->len+size_51+1+1>=self->size,    _if_conditional78) {
        old_buf_52=(char*)come_increment_ref_count(((char*)(right_value24=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang2.c", 700))));
        if(right_value24 && right_value24 != __result_obj__) { right_value24 = come_decrement_ref_count(right_value24, (void*)0, (void*)0, 1, 0, 0); }
        memcpy(old_buf_52,self->buf,self->size);
        old_len_53=self->len;
        new_size_54=(self->size+size_51+1)*2;
        __dec_obj10=self->buf;
        self->buf=(char*)come_increment_ref_count(((char*)(right_value25=(char*)come_calloc(1, sizeof(char)*(1*(new_size_54)), "libcomelang2.c", 704))));
        if(__dec_obj10) { __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0,0,0); }
        if(right_value25 && right_value25 != __result_obj__) { right_value25 = come_decrement_ref_count(right_value25, (void*)0, (void*)0, 1, 0, 0); }
        memcpy(self->buf,old_buf_52,old_len_53);
        self->buf[old_len_53]=0;
        self->size=new_size_54;
        if(old_buf_52) { old_buf_52 = come_decrement_ref_count(old_buf_52, (void*)0, (void*)0, 0, 0, 0); }
    }
    memcpy(self->buf+self->len,mem,size_51);
    self->len+=size_51;
    self->buf[self->len]=0;
    __result62__ = __result_obj__ = self;
    return __result62__;
}

struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* mem){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional79;
struct buffer* __result63__;
int size_55;
_Bool _if_conditional80;
void* right_value26;
char* old_buf_56;
int old_len_57;
int new_size_58;
void* right_value27;
char* __dec_obj11;
struct buffer* __result64__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_55, 0, sizeof(int));
memset(&old_buf_56, 0, sizeof(char*));
memset(&old_len_57, 0, sizeof(int));
memset(&new_size_58, 0, sizeof(int));
    if(_if_conditional79=self==((void*)0)||mem==((void*)0),    _if_conditional79) {
        __result63__ = __result_obj__ = self;
        return __result63__;
    }
    size_55=strlen(mem)+1;
    if(_if_conditional80=self->len+size_55+1+1+1>=self->size,    _if_conditional80) {
        old_buf_56=(char*)come_increment_ref_count(((char*)(right_value26=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang2.c", 724))));
        if(right_value26 && right_value26 != __result_obj__) { right_value26 = come_decrement_ref_count(right_value26, (void*)0, (void*)0, 1, 0, 0); }
        memcpy(old_buf_56,self->buf,self->size);
        old_len_57=self->len;
        new_size_58=(self->size+size_55+1)*2;
        __dec_obj11=self->buf;
        self->buf=(char*)come_increment_ref_count(((char*)(right_value27=(char*)come_calloc(1, sizeof(char)*(1*(new_size_58)), "libcomelang2.c", 728))));
        if(__dec_obj11) { __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0,0,0); }
        if(right_value27 && right_value27 != __result_obj__) { right_value27 = come_decrement_ref_count(right_value27, (void*)0, (void*)0, 1, 0, 0); }
        memcpy(self->buf,old_buf_56,old_len_57);
        self->buf[old_len_57]=0;
        self->size=new_size_58;
        if(old_buf_56) { old_buf_56 = come_decrement_ref_count(old_buf_56, (void*)0, (void*)0, 0, 0, 0); }
    }
    memcpy(self->buf+self->len,mem,size_55);
    self->len+=size_55;
    self->buf[self->len]=0;
    self->len++;
    __result64__ = __result_obj__ = self;
    return __result64__;
}

struct buffer* buffer_append_int(struct buffer* self, int value){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional81;
struct buffer* __result65__;
int* mem_59;
int size_60;
_Bool _if_conditional82;
void* right_value28;
char* old_buf_61;
int old_len_62;
int new_size_63;
void* right_value29;
char* __dec_obj12;
struct buffer* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&mem_59, 0, sizeof(int*));
memset(&size_60, 0, sizeof(int));
memset(&old_buf_61, 0, sizeof(char*));
memset(&old_len_62, 0, sizeof(int));
memset(&new_size_63, 0, sizeof(int));
    if(_if_conditional81=self==((void*)0),    _if_conditional81) {
        __result65__ = __result_obj__ = ((void*)0);
        return __result65__;
    }
    mem_59=&value;
    size_60=sizeof(int);
    if(_if_conditional82=self->len+size_60+1+1>=self->size,    _if_conditional82) {
        old_buf_61=(char*)come_increment_ref_count(((char*)(right_value28=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang2.c", 751))));
        if(right_value28 && right_value28 != __result_obj__) { right_value28 = come_decrement_ref_count(right_value28, (void*)0, (void*)0, 1, 0, 0); }
        memcpy(old_buf_61,self->buf,self->size);
        old_len_62=self->len;
        new_size_63=(self->size+size_60+1)*2;
        __dec_obj12=self->buf;
        self->buf=(char*)come_increment_ref_count(((char*)(right_value29=(char*)come_calloc(1, sizeof(char)*(1*(new_size_63)), "libcomelang2.c", 755))));
        if(__dec_obj12) { __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0,0,0); }
        if(right_value29 && right_value29 != __result_obj__) { right_value29 = come_decrement_ref_count(right_value29, (void*)0, (void*)0, 1, 0, 0); }
        memcpy(self->buf,old_buf_61,old_len_62);
        self->buf[old_len_62]=0;
        self->size=new_size_63;
        if(old_buf_61) { old_buf_61 = come_decrement_ref_count(old_buf_61, (void*)0, (void*)0, 0, 0, 0); }
    }
    memcpy(self->buf+self->len,mem_59,size_60);
    self->len+=size_60;
    self->buf[self->len]=0;
    __result66__ = __result_obj__ = self;
    return __result66__;
}

struct buffer* buffer_append_long(struct buffer* self, long value){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
long* mem_64;
int size_65;
_Bool _if_conditional83;
void* right_value30;
char* old_buf_66;
int old_len_67;
int new_size_68;
void* right_value31;
char* __dec_obj13;
struct buffer* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&mem_64, 0, sizeof(long*));
memset(&size_65, 0, sizeof(int));
memset(&old_buf_66, 0, sizeof(char*));
memset(&old_len_67, 0, sizeof(int));
memset(&new_size_68, 0, sizeof(int));
    mem_64=&value;
    size_65=sizeof(long);
    if(_if_conditional83=self->len+size_65+1+1>=self->size,    _if_conditional83) {
        old_buf_66=(char*)come_increment_ref_count(((char*)(right_value30=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang2.c", 774))));
        if(right_value30 && right_value30 != __result_obj__) { right_value30 = come_decrement_ref_count(right_value30, (void*)0, (void*)0, 1, 0, 0); }
        memcpy(old_buf_66,self->buf,self->size);
        old_len_67=self->len;
        new_size_68=(self->size+size_65+1)*2;
        __dec_obj13=self->buf;
        self->buf=(char*)come_increment_ref_count(((char*)(right_value31=(char*)come_calloc(1, sizeof(char)*(1*(new_size_68)), "libcomelang2.c", 778))));
        if(__dec_obj13) { __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0,0,0); }
        if(right_value31 && right_value31 != __result_obj__) { right_value31 = come_decrement_ref_count(right_value31, (void*)0, (void*)0, 1, 0, 0); }
        memcpy(self->buf,old_buf_66,old_len_67);
        self->buf[old_len_67]=0;
        self->size=new_size_68;
        if(old_buf_66) { old_buf_66 = come_decrement_ref_count(old_buf_66, (void*)0, (void*)0, 0, 0, 0); }
    }
    memcpy(self->buf+self->len,mem_64,size_65);
    self->len+=size_65;
    self->buf[self->len]=0;
    __result67__ = __result_obj__ = self;
    return __result67__;
}

struct buffer* buffer_append_short(struct buffer* self, short short value){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional84;
struct buffer* __result68__;
short short* mem_69;
int size_70;
_Bool _if_conditional85;
void* right_value32;
char* old_buf_71;
int old_len_72;
int new_size_73;
void* right_value33;
char* __dec_obj14;
struct buffer* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&mem_69, 0, sizeof(short short*));
memset(&size_70, 0, sizeof(int));
memset(&old_buf_71, 0, sizeof(char*));
memset(&old_len_72, 0, sizeof(int));
memset(&new_size_73, 0, sizeof(int));
    if(_if_conditional84=self==((void*)0),    _if_conditional84) {
        __result68__ = __result_obj__ = ((void*)0);
        return __result68__;
    }
    mem_69=&value;
    size_70=sizeof(short short);
    if(_if_conditional85=self->len+size_70+1+1>=self->size,    _if_conditional85) {
        old_buf_71=(char*)come_increment_ref_count(((char*)(right_value32=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang2.c", 801))));
        if(right_value32 && right_value32 != __result_obj__) { right_value32 = come_decrement_ref_count(right_value32, (void*)0, (void*)0, 1, 0, 0); }
        memcpy(old_buf_71,self->buf,self->size);
        old_len_72=self->len;
        new_size_73=(self->size+size_70+1)*2;
        __dec_obj14=self->buf;
        self->buf=(char*)come_increment_ref_count(((char*)(right_value33=(char*)come_calloc(1, sizeof(char)*(1*(new_size_73)), "libcomelang2.c", 805))));
        if(__dec_obj14) { __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0,0,0); }
        if(right_value33 && right_value33 != __result_obj__) { right_value33 = come_decrement_ref_count(right_value33, (void*)0, (void*)0, 1, 0, 0); }
        memcpy(self->buf,old_buf_71,old_len_72);
        self->buf[old_len_72]=0;
        self->size=new_size_73;
        if(old_buf_71) { old_buf_71 = come_decrement_ref_count(old_buf_71, (void*)0, (void*)0, 0, 0, 0); }
    }
    memcpy(self->buf+self->len,mem_69,size_70);
    self->len+=size_70;
    self->buf[self->len]=0;
    __result69__ = __result_obj__ = self;
    return __result69__;
}

struct buffer* buffer_alignment(struct buffer* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional86;
struct buffer* __result70__;
int len_74;
_Bool _if_conditional87;
int new_size_75;
void* right_value34;
char* __dec_obj15;
int i_76;
_Bool _for_condtionalA5;
struct buffer* __result71__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_74, 0, sizeof(int));
memset(&new_size_75, 0, sizeof(int));
memset(&i_76, 0, sizeof(int));
    if(_if_conditional86=self==((void*)0),    _if_conditional86) {
        __result70__ = __result_obj__ = ((void*)0);
        return __result70__;
    }
    len_74=self->len;
    len_74=(len_74+3)&~3;
    if(_if_conditional87=len_74>=self->size,    _if_conditional87) {
        new_size_75=(self->size+1+1)*2;
        __dec_obj15=self->buf;
        self->buf=(char*)come_increment_ref_count(((char*)(right_value34=(char*)come_calloc(1, sizeof(char)*(1*(new_size_75)), "libcomelang2.c", 829))));
        if(__dec_obj15) { __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0,0,0); }
        if(right_value34 && right_value34 != __result_obj__) { right_value34 = come_decrement_ref_count(right_value34, (void*)0, (void*)0, 1, 0, 0); }
        self->size=new_size_75;
    }
    for(
    i_76=self->len ,    0;    _for_condtionalA5=    i_76<len_74 ,    _for_condtionalA5;    i_76++ ,    0    ){
        self->buf[i_76]=0;
    }
    self->len=len_74;
    __result71__ = __result_obj__ = self;
    return __result71__;
}

struct optional$2intbool* buffer_compare(struct buffer* left, struct buffer* right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional88;
void* right_value35;
void* right_value36;
struct optional$2intbool* __result73__;
_Bool _if_conditional89;
void* right_value37;
void* right_value38;
struct optional$2intbool* __result74__;
_Bool _if_conditional90;
void* right_value39;
void* right_value40;
struct optional$2intbool* __result75__;
void* right_value41;
void* right_value42;
struct optional$2intbool* __result76__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional88=left==((void*)0)&&right==((void*)0),    _if_conditional88) {
        __result73__ = __result_obj__ = ((struct optional$2intbool*)(right_value36=optional$2intbool_initialize(((struct optional$2intbool*)(right_value35=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 845))),0,(_Bool)0)));
        if(right_value35 && right_value35 != __result_obj__) { right_value35 = come_decrement_ref_count(right_value35, (void*)0, (void*)0, 1, 0, 0); }
        return __result73__;
    }
    else {
        if(_if_conditional89=left==((void*)0),        _if_conditional89) {
            __result74__ = __result_obj__ = ((struct optional$2intbool*)(right_value38=optional$2intbool_initialize(((struct optional$2intbool*)(right_value37=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 848))),-1,(_Bool)0)));
            if(right_value37 && right_value37 != __result_obj__) { right_value37 = come_decrement_ref_count(right_value37, (void*)0, (void*)0, 1, 0, 0); }
            return __result74__;
        }
        else {
            if(_if_conditional90=right==((void*)0),            _if_conditional90) {
                __result75__ = __result_obj__ = ((struct optional$2intbool*)(right_value40=optional$2intbool_initialize(((struct optional$2intbool*)(right_value39=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 851))),1,(_Bool)0)));
                if(right_value39 && right_value39 != __result_obj__) { right_value39 = come_decrement_ref_count(right_value39, (void*)0, (void*)0, 1, 0, 0); }
                return __result75__;
            }
        }
    }
    __result76__ = __result_obj__ = ((struct optional$2intbool*)(right_value42=optional$2intbool_initialize((struct optional$2intbool*)come_increment_ref_count(((struct optional$2intbool*)(right_value41=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 854)))),strcmp(left->buf,right->buf),(_Bool)1)));
    if(right_value41 && right_value41 != __result_obj__) { right_value41 = come_decrement_ref_count(right_value41, (void*)0, (void*)0, 1, 0, 0); }
    return __result76__;
}

static struct optional$2intbool* optional$2intbool_initialize(struct optional$2intbool* self, int v1, _Bool v2){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
struct optional$2intbool* __result72__;
memset(&__result_obj__, 0, sizeof(void*));
            self->v1=v1;
            self->v2=v2;
            __result72__ = __result_obj__ = self;
            if(self) { come_call_finalizer(optional$2intboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            return __result72__;
            if(self) { come_call_finalizer(optional$2intboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2intboolp_finalize(struct optional$2intbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

struct buffer* string_to_buffer(char* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value43;
void* right_value44;
struct buffer* result_77;
_Bool _if_conditional91;
struct buffer* __result77__;
struct buffer* __result78__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_77, 0, sizeof(struct buffer*));
    result_77=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value44=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value43=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 859))))))));
    if(right_value43 && right_value43 != __result_obj__) { come_call_finalizer(buffer_finalize,right_value43, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value44 && right_value44 != __result_obj__) { come_call_finalizer(buffer_finalize,right_value44, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(_if_conditional91=self==((void*)0),    _if_conditional91) {
        __result77__ = __result_obj__ = result_77;
        if(result_77) { come_call_finalizer(buffer_finalize,result_77, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result77__;
    }
    buffer_append_str(result_77,self);
    __result78__ = __result_obj__ = result_77;
    if(result_77) { come_call_finalizer(buffer_finalize,result_77, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result78__;
    if(result_77) { come_call_finalizer(buffer_finalize,result_77, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct buffer* charp_to_buffer(char* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value45;
void* right_value46;
struct buffer* result_78;
_Bool _if_conditional92;
struct buffer* __result79__;
struct buffer* __result80__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_78, 0, sizeof(struct buffer*));
    result_78=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value46=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value45=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 872))))))));
    if(right_value45 && right_value45 != __result_obj__) { come_call_finalizer(buffer_finalize,right_value45, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value46 && right_value46 != __result_obj__) { come_call_finalizer(buffer_finalize,right_value46, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(_if_conditional92=self==((void*)0),    _if_conditional92) {
        __result79__ = __result_obj__ = result_78;
        if(result_78) { come_call_finalizer(buffer_finalize,result_78, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result79__;
    }
    buffer_append_str(result_78,self);
    __result80__ = __result_obj__ = result_78;
    if(result_78) { come_call_finalizer(buffer_finalize,result_78, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result80__;
    if(result_78) { come_call_finalizer(buffer_finalize,result_78, (void*)0, (void*)0, 0, 0, 0, 0); }
}

char* buffer_to_string(struct buffer* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional93;
void* right_value47;
char* __result81__;
void* right_value48;
char* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional93=self==((void*)0),    _if_conditional93) {
        __result81__ = __result_obj__ = ((char*)(right_value47=__builtin_string("")));
        return __result81__;
    }
    __result82__ = __result_obj__ = ((char*)(right_value48=__builtin_string(self->buf)));
    return __result82__;
}

_Bool bool_equals(_Bool self, _Bool right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __result83__;
memset(&__result_obj__, 0, sizeof(void*));
    __result83__ = self==right;
    return __result83__;
}

_Bool int_equals(int self, int right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __result84__;
memset(&__result_obj__, 0, sizeof(void*));
    __result84__ = self==right;
    return __result84__;
}

_Bool char_equals(char self, char right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __result85__;
memset(&__result_obj__, 0, sizeof(void*));
    __result85__ = self==right;
    return __result85__;
}

_Bool short_equals(short short self, short short right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __result86__;
memset(&__result_obj__, 0, sizeof(void*));
    __result86__ = self==right;
    return __result86__;
}

_Bool long_equals(long self, long right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __result87__;
memset(&__result_obj__, 0, sizeof(void*));
    __result87__ = self==right;
    return __result87__;
}

_Bool size_t_equals(long int self, long int right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __result88__;
memset(&__result_obj__, 0, sizeof(void*));
    __result88__ = self==right;
    return __result88__;
}

_Bool float_equals(float self, float right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __result89__;
memset(&__result_obj__, 0, sizeof(void*));
    __result89__ = self==right;
    return __result89__;
}

_Bool double_equals(double self, double right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __result90__;
memset(&__result_obj__, 0, sizeof(void*));
    __result90__ = self==right;
    return __result90__;
}

struct optional$2boolbool* string_equals(char* self, char* right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional94;
void* right_value49;
void* right_value50;
struct optional$2boolbool* __result92__;
_Bool _if_conditional95;
void* right_value51;
void* right_value52;
struct optional$2boolbool* __result93__;
_Bool _if_conditional96;
void* right_value53;
void* right_value54;
struct optional$2boolbool* __result94__;
void* right_value55;
void* right_value56;
struct optional$2boolbool* __result95__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional94=self==((void*)0)&&right==((void*)0),    _if_conditional94) {
        __result92__ = __result_obj__ = ((struct optional$2boolbool*)(right_value50=optional$2boolbool_initialize(((struct optional$2boolbool*)(right_value49=(struct optional$2boolbool*)come_calloc(1, sizeof(struct optional$2boolbool)*(1), "libcomelang2.c", 938))),(_Bool)1,(_Bool)0)));
        if(right_value49 && right_value49 != __result_obj__) { right_value49 = come_decrement_ref_count(right_value49, (void*)0, (void*)0, 1, 0, 0); }
        return __result92__;
    }
    else {
        if(_if_conditional95=self==((void*)0),        _if_conditional95) {
            __result93__ = __result_obj__ = ((struct optional$2boolbool*)(right_value52=optional$2boolbool_initialize(((struct optional$2boolbool*)(right_value51=(struct optional$2boolbool*)come_calloc(1, sizeof(struct optional$2boolbool)*(1), "libcomelang2.c", 941))),(_Bool)0,(_Bool)0)));
            if(right_value51 && right_value51 != __result_obj__) { right_value51 = come_decrement_ref_count(right_value51, (void*)0, (void*)0, 1, 0, 0); }
            return __result93__;
        }
        else {
            if(_if_conditional96=right==((void*)0),            _if_conditional96) {
                __result94__ = __result_obj__ = ((struct optional$2boolbool*)(right_value54=optional$2boolbool_initialize(((struct optional$2boolbool*)(right_value53=(struct optional$2boolbool*)come_calloc(1, sizeof(struct optional$2boolbool)*(1), "libcomelang2.c", 944))),(_Bool)0,(_Bool)0)));
                if(right_value53 && right_value53 != __result_obj__) { right_value53 = come_decrement_ref_count(right_value53, (void*)0, (void*)0, 1, 0, 0); }
                return __result94__;
            }
        }
    }
    __result95__ = __result_obj__ = ((struct optional$2intbool*)(right_value56=optional$2intbool_initialize((struct optional$2intbool*)come_increment_ref_count(((struct optional$2intbool*)(right_value55=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 947)))),strcmp(self,right)==0,(_Bool)1)));
    if(right_value55 && right_value55 != __result_obj__) { right_value55 = come_decrement_ref_count(right_value55, (void*)0, (void*)0, 1, 0, 0); }
    return __result95__;
}

static struct optional$2boolbool* optional$2boolbool_initialize(struct optional$2boolbool* self, _Bool v1, _Bool v2){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
struct optional$2boolbool* __result91__;
memset(&__result_obj__, 0, sizeof(void*));
            self->v1=v1;
            self->v2=v2;
            __result91__ = __result_obj__ = self;
            if(self) { come_call_finalizer(optional$2boolboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            return __result91__;
            if(self) { come_call_finalizer(optional$2boolboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2boolboolp_finalize(struct optional$2boolbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

struct optional$2boolbool* charp_equals(char* self, char* right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional97;
void* right_value57;
void* right_value58;
struct optional$2boolbool* __result96__;
_Bool _if_conditional98;
void* right_value59;
void* right_value60;
struct optional$2boolbool* __result97__;
_Bool _if_conditional99;
void* right_value61;
void* right_value62;
struct optional$2boolbool* __result98__;
void* right_value63;
void* right_value64;
struct optional$2boolbool* __result99__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional97=self==((void*)0)&&right==((void*)0),    _if_conditional97) {
        __result96__ = __result_obj__ = ((struct optional$2boolbool*)(right_value58=optional$2boolbool_initialize(((struct optional$2boolbool*)(right_value57=(struct optional$2boolbool*)come_calloc(1, sizeof(struct optional$2boolbool)*(1), "libcomelang2.c", 953))),(_Bool)1,(_Bool)0)));
        if(right_value57 && right_value57 != __result_obj__) { right_value57 = come_decrement_ref_count(right_value57, (void*)0, (void*)0, 1, 0, 0); }
        return __result96__;
    }
    else {
        if(_if_conditional98=self==((void*)0),        _if_conditional98) {
            __result97__ = __result_obj__ = ((struct optional$2boolbool*)(right_value60=optional$2boolbool_initialize(((struct optional$2boolbool*)(right_value59=(struct optional$2boolbool*)come_calloc(1, sizeof(struct optional$2boolbool)*(1), "libcomelang2.c", 956))),(_Bool)0,(_Bool)0)));
            if(right_value59 && right_value59 != __result_obj__) { right_value59 = come_decrement_ref_count(right_value59, (void*)0, (void*)0, 1, 0, 0); }
            return __result97__;
        }
        else {
            if(_if_conditional99=right==((void*)0),            _if_conditional99) {
                __result98__ = __result_obj__ = ((struct optional$2boolbool*)(right_value62=optional$2boolbool_initialize(((struct optional$2boolbool*)(right_value61=(struct optional$2boolbool*)come_calloc(1, sizeof(struct optional$2boolbool)*(1), "libcomelang2.c", 959))),(_Bool)0,(_Bool)0)));
                if(right_value61 && right_value61 != __result_obj__) { right_value61 = come_decrement_ref_count(right_value61, (void*)0, (void*)0, 1, 0, 0); }
                return __result98__;
            }
        }
    }
    __result99__ = __result_obj__ = ((struct optional$2intbool*)(right_value64=optional$2intbool_initialize((struct optional$2intbool*)come_increment_ref_count(((struct optional$2intbool*)(right_value63=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 962)))),strcmp(self,right)==0,(_Bool)1)));
    if(right_value63 && right_value63 != __result_obj__) { right_value63 = come_decrement_ref_count(right_value63, (void*)0, (void*)0, 1, 0, 0); }
    return __result99__;
}

_Bool string_operator_equals(char* self, char* right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional100;
_Bool __result100__;
_Bool _if_conditional101;
_Bool __result101__;
_Bool _if_conditional102;
_Bool __result102__;
_Bool __result103__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional100=self==((void*)0)&&right==((void*)0),    _if_conditional100) {
        __result100__ = (_Bool)1;
        return __result100__;
    }
    else {
        if(_if_conditional101=self==((void*)0),        _if_conditional101) {
            __result101__ = (_Bool)0;
            return __result101__;
        }
        else {
            if(_if_conditional102=right==((void*)0),            _if_conditional102) {
                __result102__ = (_Bool)0;
                return __result102__;
            }
        }
    }
    __result103__ = strcmp(self,right)==0;
    return __result103__;
}

_Bool charp_operator_equals(char* self, char* right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional103;
_Bool __result104__;
_Bool _if_conditional104;
_Bool __result105__;
_Bool _if_conditional105;
_Bool __result106__;
_Bool __result107__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional103=self==((void*)0)&&right==((void*)0),    _if_conditional103) {
        __result104__ = (_Bool)1;
        return __result104__;
    }
    else {
        if(_if_conditional104=self==((void*)0),        _if_conditional104) {
            __result105__ = (_Bool)0;
            return __result105__;
        }
        else {
            if(_if_conditional105=right==((void*)0),            _if_conditional105) {
                __result106__ = (_Bool)0;
                return __result106__;
            }
        }
    }
    __result107__ = strcmp(self,right)==0;
    return __result107__;
}

_Bool string_operator_not_equals(char* self, char* right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional106;
_Bool __result108__;
_Bool _if_conditional107;
_Bool __result109__;
_Bool _if_conditional108;
_Bool __result110__;
_Bool __result111__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional106=self==((void*)0)&&right==((void*)0),    _if_conditional106) {
        __result108__ = (_Bool)0;
        return __result108__;
    }
    else {
        if(_if_conditional107=self==((void*)0),        _if_conditional107) {
            __result109__ = (_Bool)1;
            return __result109__;
        }
        else {
            if(_if_conditional108=right==((void*)0),            _if_conditional108) {
                __result110__ = (_Bool)1;
                return __result110__;
            }
        }
    }
    __result111__ = strcmp(self,right)!=0;
    return __result111__;
}

_Bool charp_operator_not_equals(char* self, char* right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional109;
_Bool __result112__;
_Bool _if_conditional110;
_Bool __result113__;
_Bool _if_conditional111;
_Bool __result114__;
_Bool __result115__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional109=self==((void*)0)&&right==((void*)0),    _if_conditional109) {
        __result112__ = (_Bool)0;
        return __result112__;
    }
    else {
        if(_if_conditional110=self==((void*)0),        _if_conditional110) {
            __result113__ = (_Bool)1;
            return __result113__;
        }
        else {
            if(_if_conditional111=right==((void*)0),            _if_conditional111) {
                __result114__ = (_Bool)1;
                return __result114__;
            }
        }
    }
    __result115__ = strcmp(self,right)!=0;
    return __result115__;
}

char* charp_operator_add(char* self, char* right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional112;
void* right_value65;
char* __result116__;
int len_79;
void* right_value66;
char* result_80;
char* __result117__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_79, 0, sizeof(int));
memset(&result_80, 0, sizeof(char*));
    if(_if_conditional112=self==((void*)0)||right==((void*)0),    _if_conditional112) {
        __result116__ = __result_obj__ = ((char*)(right_value65=__builtin_string("")));
        return __result116__;
    }
    len_79=strlen(self)+strlen(right);
    result_80=(char*)come_increment_ref_count(((char*)(right_value66=(char*)come_calloc(1, sizeof(char)*(1*(len_79+1)), "libcomelang2.c", 1033))));
    if(right_value66 && right_value66 != __result_obj__) { right_value66 = come_decrement_ref_count(right_value66, (void*)0, (void*)0, 1, 0, 0); }
    strncpy(result_80,self,len_79+1);
    strncat(result_80,right,len_79+1);
    __result117__ = __result_obj__ = result_80;
    if(result_80) { result_80 = come_decrement_ref_count(result_80, (void*)0, (void*)0, 0, 1, 0); }
    return __result117__;
    if(result_80) { result_80 = come_decrement_ref_count(result_80, (void*)0, (void*)0, 0, 0, 0); }
}

char* string_operator_add(char* self, char* right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional113;
void* right_value67;
char* __result118__;
int len_81;
void* right_value68;
char* result_82;
char* __result119__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_81, 0, sizeof(int));
memset(&result_82, 0, sizeof(char*));
    if(_if_conditional113=self==((void*)0)||right==((void*)0),    _if_conditional113) {
        __result118__ = __result_obj__ = ((char*)(right_value67=__builtin_string("")));
        return __result118__;
    }
    len_81=strlen(self)+strlen(right);
    result_82=(char*)come_increment_ref_count(((char*)(right_value68=(char*)come_calloc(1, sizeof(char)*(1*(len_81+1)), "libcomelang2.c", 1048))));
    if(right_value68 && right_value68 != __result_obj__) { right_value68 = come_decrement_ref_count(right_value68, (void*)0, (void*)0, 1, 0, 0); }
    strncpy(result_82,self,len_81+1);
    strncat(result_82,right,len_81+1);
    __result119__ = __result_obj__ = result_82;
    if(result_82) { result_82 = come_decrement_ref_count(result_82, (void*)0, (void*)0, 0, 1, 0); }
    return __result119__;
    if(result_82) { result_82 = come_decrement_ref_count(result_82, (void*)0, (void*)0, 0, 0, 0); }
}

char* charp_operator_mult(char* self, int right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional114;
void* right_value69;
char* __result120__;
void* right_value70;
void* right_value71;
struct buffer* buf_83;
int i_84;
_Bool _for_condtionalA6;
void* right_value72;
char* __result121__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&buf_83, 0, sizeof(struct buffer*));
memset(&i_84, 0, sizeof(int));
    if(_if_conditional114=self==((void*)0),    _if_conditional114) {
        __result120__ = __result_obj__ = ((char*)(right_value69=__builtin_string("")));
        return __result120__;
    }
    buf_83=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value71=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value70=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 1061))))))));
    if(right_value70 && right_value70 != __result_obj__) { come_call_finalizer(buffer_finalize,right_value70, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value71 && right_value71 != __result_obj__) { come_call_finalizer(buffer_finalize,right_value71, (void*)0, (void*)0, 0, 1, 0, 0); }
    for(
    i_84=0 ,    0;    _for_condtionalA6=    i_84<right ,    _for_condtionalA6;    i_84++ ,    0    ){
        buffer_append_str(buf_83,self);
    }
    __result121__ = __result_obj__ = ((char*)(right_value72=buffer_to_string(buf_83)));
    if(buf_83) { come_call_finalizer(buffer_finalize,buf_83, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result121__;
    if(buf_83) { come_call_finalizer(buffer_finalize,buf_83, (void*)0, (void*)0, 0, 0, 0, 0); }
}

char* string_operator_mult(char* self, int right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional115;
void* right_value73;
char* __result122__;
void* right_value74;
void* right_value75;
struct buffer* buf_85;
int i_86;
_Bool _for_condtionalA7;
void* right_value76;
char* __result123__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&buf_85, 0, sizeof(struct buffer*));
memset(&i_86, 0, sizeof(int));
    if(_if_conditional115=self==((void*)0),    _if_conditional115) {
        __result122__ = __result_obj__ = ((char*)(right_value73=__builtin_string("")));
        return __result122__;
    }
    buf_85=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value75=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value74=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 1075))))))));
    if(right_value74 && right_value74 != __result_obj__) { come_call_finalizer(buffer_finalize,right_value74, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value75 && right_value75 != __result_obj__) { come_call_finalizer(buffer_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0, 0); }
    for(
    i_86=0 ,    0;    _for_condtionalA7=    i_86<right ,    _for_condtionalA7;    i_86++ ,    0    ){
        buffer_append_str(buf_85,self);
    }
    __result123__ = __result_obj__ = ((char*)(right_value76=buffer_to_string(buf_85)));
    if(buf_85) { come_call_finalizer(buffer_finalize,buf_85, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result123__;
    if(buf_85) { come_call_finalizer(buffer_finalize,buf_85, (void*)0, (void*)0, 0, 0, 0, 0); }
}

unsigned int bool_get_hash_key(_Bool value){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
unsigned int __result124__;
memset(&__result_obj__, 0, sizeof(void*));
    __result124__ = (int_get_hash_key(((int)value)));
    return __result124__;
}

unsigned int char_get_hash_key(char value){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
unsigned int __result125__;
memset(&__result_obj__, 0, sizeof(void*));
    __result125__ = value;
    return __result125__;
}

unsigned int short_get_hash_key(short int value){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
unsigned int __result126__;
memset(&__result_obj__, 0, sizeof(void*));
    __result126__ = value;
    return __result126__;
}

unsigned int int_get_hash_key(int value){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
unsigned int __result127__;
memset(&__result_obj__, 0, sizeof(void*));
    __result127__ = value;
    return __result127__;
}

unsigned int long_get_hash_key(long value){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
unsigned int __result128__;
memset(&__result_obj__, 0, sizeof(void*));
    __result128__ = value;
    return __result128__;
}

unsigned int size_t_get_hash_key(long int value){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
unsigned int __result129__;
memset(&__result_obj__, 0, sizeof(void*));
    __result129__ = value;
    return __result129__;
}

unsigned int float_get_hash_key(float value){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
unsigned int __result130__;
memset(&__result_obj__, 0, sizeof(void*));
    __result130__ = (unsigned int)value;
    return __result130__;
}

unsigned int double_get_hash_key(double value){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
unsigned int __result131__;
memset(&__result_obj__, 0, sizeof(void*));
    __result131__ = (unsigned int)value;
    return __result131__;
}

unsigned int string_get_hash_key(char* value){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional116;
unsigned int __result132__;
int result_87;
char* p_88;
_Bool _while_condtional6;
unsigned int __result133__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_87, 0, sizeof(int));
memset(&p_88, 0, sizeof(char*));
    if(_if_conditional116=value==((void*)0),    _if_conditional116) {
        __result132__ = 0;
        return __result132__;
    }
    result_87=0;
    p_88=value;
    while(_while_condtional6=*p_88,    _while_condtional6) {
        result_87+=(*p_88);
        p_88++;
    }
    __result133__ = result_87;
    return __result133__;
}

unsigned int charp_get_hash_key(char* value){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional117;
unsigned int __result134__;
int result_89;
char* p_90;
_Bool _while_condtional7;
unsigned int __result135__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_89, 0, sizeof(int));
memset(&p_90, 0, sizeof(char*));
    if(_if_conditional117=value==((void*)0),    _if_conditional117) {
        __result134__ = 0;
        return __result134__;
    }
    result_89=0;
    p_90=value;
    while(_while_condtional7=*p_90,    _while_condtional7) {
        result_89+=(*p_90);
        p_90++;
    }
    __result135__ = result_89;
    return __result135__;
}

_Bool bool_clone(_Bool self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __result136__;
memset(&__result_obj__, 0, sizeof(void*));
    __result136__ = self;
    return __result136__;
}

char char_clone(char self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
char __result137__;
memset(&__result_obj__, 0, sizeof(void*));
    __result137__ = self;
    return __result137__;
}

short int short_clone(short short self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
short int __result138__;
memset(&__result_obj__, 0, sizeof(void*));
    __result138__ = self;
    return __result138__;
}

int int_clone(int self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
int __result139__;
memset(&__result_obj__, 0, sizeof(void*));
    __result139__ = self;
    return __result139__;
}

long int long_clone(long self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
long int __result140__;
memset(&__result_obj__, 0, sizeof(void*));
    __result140__ = self;
    return __result140__;
}

long int size_t_clone(long int self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
long int __result141__;
memset(&__result_obj__, 0, sizeof(void*));
    __result141__ = self;
    return __result141__;
}

double double_clone(double self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
double __result142__;
memset(&__result_obj__, 0, sizeof(void*));
    __result142__ = self;
    return __result142__;
}

float float_clone(float self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
float __result143__;
memset(&__result_obj__, 0, sizeof(void*));
    __result143__ = self;
    return __result143__;
}

char* charp_clone(char* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional118;
char* __result144__;
void* right_value77;
char* __result145__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional118=self==((void*)0),    _if_conditional118) {
        __result144__ = __result_obj__ = ((void*)0);
        return __result144__;
    }
    __result145__ = __result_obj__ = ((char*)(right_value77=__builtin_string(self)));
    return __result145__;
}

char* string_clone(char* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional119;
char* __result146__;
void* right_value78;
char* __result147__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional119=self==((void*)0),    _if_conditional119) {
        __result146__ = __result_obj__ = ((void*)0);
        return __result146__;
    }
    __result147__ = __result_obj__ = ((char*)(right_value78=__builtin_string(self)));
    return __result147__;
}

_Bool xiswalpha(unsigned int c){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool result_91;
_Bool __result148__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_91, 0, sizeof(_Bool));
    result_91=(c>=97&&c<=122)||(c>=65&&c<=90);
    __result148__ = result_91;
    return __result148__;
}

_Bool xiswblank(unsigned int c){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __result149__;
memset(&__result_obj__, 0, sizeof(void*));
    __result149__ = c==32||c==9;
    return __result149__;
}

_Bool xiswdigit(unsigned int c){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __result150__;
memset(&__result_obj__, 0, sizeof(void*));
    __result150__ = (c>=48&&c<=57);
    return __result150__;
}

_Bool xiswalnum(unsigned int c){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __result151__;
memset(&__result_obj__, 0, sizeof(void*));
    __result151__ = xiswalpha(c)||xiswdigit(c);
    return __result151__;
}

_Bool xisalpha(char c){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool result_92;
_Bool __result152__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_92, 0, sizeof(_Bool));
    result_92=(c>=97&&c<=122)||(c>=65&&c<=90);
    __result152__ = result_92;
    return __result152__;
}

_Bool xisblank(char c){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __result153__;
memset(&__result_obj__, 0, sizeof(void*));
    __result153__ = c==32||c==9;
    return __result153__;
}

_Bool xisdigit(char c){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __result154__;
memset(&__result_obj__, 0, sizeof(void*));
    __result154__ = (c>=48&&c<=57);
    return __result154__;
}

_Bool xisalnum(char c){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __result155__;
memset(&__result_obj__, 0, sizeof(void*));
    __result155__ = xisalpha(c)||xisdigit(c);
    return __result155__;
}

_Bool xisascii(char c){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool result_93;
_Bool __result156__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_93, 0, sizeof(_Bool));
    result_93=(c>=32&&c<=126);
    __result156__ = result_93;
    return __result156__;
}

_Bool xiswascii(unsigned int c){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool result_94;
_Bool __result157__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_94, 0, sizeof(_Bool));
    result_94=(c>=32&&c<=126);
    __result157__ = result_94;
    return __result157__;
}

int string_length(char* str){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional120;
int __result158__;
int __result159__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional120=str==((void*)0),    _if_conditional120) {
        __result158__ = 0;
        return __result158__;
    }
    __result159__ = strlen(str);
    return __result159__;
}

int charp_length(char* str){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional121;
int __result160__;
int __result161__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional121=str==((void*)0),    _if_conditional121) {
        __result160__ = 0;
        return __result160__;
    }
    __result161__ = strlen(str);
    return __result161__;
}

char* string_reverse(char* str){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional122;
void* right_value79;
char* __result162__;
int len_95;
void* right_value80;
char* result_96;
int i_97;
_Bool _for_condtionalA8;
char* __result163__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_95, 0, sizeof(int));
memset(&result_96, 0, sizeof(char*));
memset(&i_97, 0, sizeof(int));
    if(_if_conditional122=str==((void*)0),    _if_conditional122) {
        __result162__ = __result_obj__ = ((char*)(right_value79=__builtin_string("")));
        return __result162__;
    }
    len_95=strlen(str);
    result_96=(char*)come_increment_ref_count(((char*)(right_value80=(char*)come_calloc(1, sizeof(char)*(1*(len_95+1)), "libcomelang2.c", 1292))));
    if(right_value80 && right_value80 != __result_obj__) { right_value80 = come_decrement_ref_count(right_value80, (void*)0, (void*)0, 1, 0, 0); }
    for(
    i_97=0 ,    0;    _for_condtionalA8=    i_97<len_95 ,    _for_condtionalA8;    i_97++ ,    0    ){
        result_96[i_97]=str[len_95-i_97-1];
    }
    result_96[len_95]=0;
    __result163__ = __result_obj__ = result_96;
    if(result_96) { result_96 = come_decrement_ref_count(result_96, (void*)0, (void*)0, 0, 1, 0); }
    return __result163__;
    if(result_96) { result_96 = come_decrement_ref_count(result_96, (void*)0, (void*)0, 0, 0, 0); }
}

char* charp_reverse(char* str){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional123;
void* right_value81;
char* __result164__;
int len_98;
void* right_value82;
char* result_99;
int i_100;
_Bool _for_condtionalA9;
char* __result165__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_98, 0, sizeof(int));
memset(&result_99, 0, sizeof(char*));
memset(&i_100, 0, sizeof(int));
    if(_if_conditional123=str==((void*)0),    _if_conditional123) {
        __result164__ = __result_obj__ = ((char*)(right_value81=__builtin_string("")));
        return __result164__;
    }
    len_98=strlen(str);
    result_99=(char*)come_increment_ref_count(((char*)(right_value82=(char*)come_calloc(1, sizeof(char)*(1*(len_98+1)), "libcomelang2.c", 1309))));
    if(right_value82 && right_value82 != __result_obj__) { right_value82 = come_decrement_ref_count(right_value82, (void*)0, (void*)0, 1, 0, 0); }
    for(
    i_100=0 ,    0;    _for_condtionalA9=    i_100<len_98 ,    _for_condtionalA9;    i_100++ ,    0    ){
        result_99[i_100]=str[len_98-i_100-1];
    }
    result_99[len_98]=0;
    __result165__ = __result_obj__ = result_99;
    if(result_99) { result_99 = come_decrement_ref_count(result_99, (void*)0, (void*)0, 0, 1, 0); }
    return __result165__;
    if(result_99) { result_99 = come_decrement_ref_count(result_99, (void*)0, (void*)0, 0, 0, 0); }
}

char* string_operator_load_range_element(char* str, int head, int tail){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional124;
void* right_value83;
char* __result166__;
int len_101;
_Bool _if_conditional125;
_Bool _if_conditional126;
_Bool _if_conditional127;
void* right_value84;
void* right_value85;
char* __result167__;
_Bool _if_conditional128;
_Bool _if_conditional129;
_Bool _if_conditional130;
void* right_value86;
char* __result168__;
_Bool _if_conditional131;
void* right_value87;
char* __result169__;
void* right_value88;
char* result_102;
char* __result170__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_101, 0, sizeof(int));
memset(&result_102, 0, sizeof(char*));
    if(_if_conditional124=str==((void*)0),    _if_conditional124) {
        __result166__ = __result_obj__ = ((char*)(right_value83=__builtin_string("")));
        return __result166__;
    }
    len_101=strlen(str);
    if(_if_conditional125=head<0,    _if_conditional125) {
        head+=len_101;
    }
    if(_if_conditional126=tail<0,    _if_conditional126) {
        tail+=len_101+1;
    }
    if(_if_conditional127=head>tail,    _if_conditional127) {
        __result167__ = __result_obj__ = ((char*)(right_value85=string_reverse(((char*)(right_value84=charp_substring(str,tail,head))))));
        if(right_value84 && right_value84 != __result_obj__) { right_value84 = come_decrement_ref_count(right_value84, (void*)0, (void*)0, 1, 0, 0); }
        return __result167__;
    }
    if(_if_conditional128=head<0,    _if_conditional128) {
        head=0;
    }
    if(_if_conditional129=tail>=len_101,    _if_conditional129) {
        tail=len_101;
    }
    if(_if_conditional130=head==tail,    _if_conditional130) {
        __result168__ = __result_obj__ = ((char*)(right_value86=__builtin_string("")));
        return __result168__;
    }
    if(_if_conditional131=tail-head+1<1,    _if_conditional131) {
        __result169__ = __result_obj__ = ((char*)(right_value87=__builtin_string("")));
        return __result169__;
    }
    result_102=(char*)come_increment_ref_count(((char*)(right_value88=(char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "libcomelang2.c", 1354))));
    if(right_value88 && right_value88 != __result_obj__) { right_value88 = come_decrement_ref_count(right_value88, (void*)0, (void*)0, 1, 0, 0); }
    memcpy(result_102,str+head,tail-head);
    result_102[tail-head]=0;
    __result170__ = __result_obj__ = result_102;
    if(result_102) { result_102 = come_decrement_ref_count(result_102, (void*)0, (void*)0, 0, 1, 0); }
    return __result170__;
    if(result_102) { result_102 = come_decrement_ref_count(result_102, (void*)0, (void*)0, 0, 0, 0); }
}

char* charp_operator_load_range_element(char* str, int head, int tail){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional132;
void* right_value89;
char* __result171__;
int len_103;
_Bool _if_conditional133;
_Bool _if_conditional134;
_Bool _if_conditional135;
void* right_value90;
void* right_value91;
char* __result172__;
_Bool _if_conditional136;
_Bool _if_conditional137;
_Bool _if_conditional138;
void* right_value92;
char* __result173__;
_Bool _if_conditional139;
void* right_value93;
char* __result174__;
void* right_value94;
char* result_104;
char* __result175__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_103, 0, sizeof(int));
memset(&result_104, 0, sizeof(char*));
    if(_if_conditional132=str==((void*)0),    _if_conditional132) {
        __result171__ = __result_obj__ = ((char*)(right_value89=__builtin_string("")));
        return __result171__;
    }
    len_103=strlen(str);
    if(_if_conditional133=head<0,    _if_conditional133) {
        head+=len_103;
    }
    if(_if_conditional134=tail<0,    _if_conditional134) {
        tail+=len_103+1;
    }
    if(_if_conditional135=head>tail,    _if_conditional135) {
        __result172__ = __result_obj__ = ((char*)(right_value91=string_reverse(((char*)(right_value90=charp_substring(str,tail,head))))));
        if(right_value90 && right_value90 != __result_obj__) { right_value90 = come_decrement_ref_count(right_value90, (void*)0, (void*)0, 1, 0, 0); }
        return __result172__;
    }
    if(_if_conditional136=head<0,    _if_conditional136) {
        head=0;
    }
    if(_if_conditional137=tail>=len_103,    _if_conditional137) {
        tail=len_103;
    }
    if(_if_conditional138=head==tail,    _if_conditional138) {
        __result173__ = __result_obj__ = ((char*)(right_value92=__builtin_string("")));
        return __result173__;
    }
    if(_if_conditional139=tail-head+1<1,    _if_conditional139) {
        __result174__ = __result_obj__ = ((char*)(right_value93=__builtin_string("")));
        return __result174__;
    }
    result_104=(char*)come_increment_ref_count(((char*)(right_value94=(char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "libcomelang2.c", 1397))));
    if(right_value94 && right_value94 != __result_obj__) { right_value94 = come_decrement_ref_count(right_value94, (void*)0, (void*)0, 1, 0, 0); }
    memcpy(result_104,str+head,tail-head);
    result_104[tail-head]=0;
    __result175__ = __result_obj__ = result_104;
    if(result_104) { result_104 = come_decrement_ref_count(result_104, (void*)0, (void*)0, 0, 1, 0); }
    return __result175__;
    if(result_104) { result_104 = come_decrement_ref_count(result_104, (void*)0, (void*)0, 0, 0, 0); }
}

char* charp_substring(char* str, int head, int tail){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional140;
void* right_value95;
char* __result176__;
int len_105;
_Bool _if_conditional141;
_Bool _if_conditional142;
_Bool _if_conditional143;
void* right_value96;
void* right_value97;
char* __result177__;
_Bool _if_conditional144;
_Bool _if_conditional145;
_Bool _if_conditional146;
void* right_value98;
char* __result178__;
_Bool _if_conditional147;
void* right_value99;
char* __result179__;
void* right_value100;
char* result_106;
char* __result180__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_105, 0, sizeof(int));
memset(&result_106, 0, sizeof(char*));
    if(_if_conditional140=str==((void*)0),    _if_conditional140) {
        __result176__ = __result_obj__ = ((char*)(right_value95=__builtin_string("")));
        return __result176__;
    }
    len_105=strlen(str);
    if(_if_conditional141=head<0,    _if_conditional141) {
        head+=len_105;
    }
    if(_if_conditional142=tail<0,    _if_conditional142) {
        tail+=len_105+1;
    }
    if(_if_conditional143=head>tail,    _if_conditional143) {
        __result177__ = __result_obj__ = ((char*)(right_value97=string_reverse(((char*)(right_value96=charp_substring(str,tail,head))))));
        if(right_value96 && right_value96 != __result_obj__) { right_value96 = come_decrement_ref_count(right_value96, (void*)0, (void*)0, 1, 0, 0); }
        return __result177__;
    }
    if(_if_conditional144=head<0,    _if_conditional144) {
        head=0;
    }
    if(_if_conditional145=tail>=len_105,    _if_conditional145) {
        tail=len_105;
    }
    if(_if_conditional146=head==tail,    _if_conditional146) {
        __result178__ = __result_obj__ = ((char*)(right_value98=__builtin_string("")));
        return __result178__;
    }
    if(_if_conditional147=tail-head+1<1,    _if_conditional147) {
        __result179__ = __result_obj__ = ((char*)(right_value99=__builtin_string("")));
        return __result179__;
    }
    result_106=(char*)come_increment_ref_count(((char*)(right_value100=(char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "libcomelang2.c", 1440))));
    if(right_value100 && right_value100 != __result_obj__) { right_value100 = come_decrement_ref_count(right_value100, (void*)0, (void*)0, 1, 0, 0); }
    memcpy(result_106,str+head,tail-head);
    result_106[tail-head]=0;
    __result180__ = __result_obj__ = result_106;
    if(result_106) { result_106 = come_decrement_ref_count(result_106, (void*)0, (void*)0, 0, 1, 0); }
    return __result180__;
    if(result_106) { result_106 = come_decrement_ref_count(result_106, (void*)0, (void*)0, 0, 0, 0); }
}

char* string_substring(char* str, int head, int tail){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional148;
void* right_value101;
char* __result181__;
int len_107;
_Bool _if_conditional149;
_Bool _if_conditional150;
_Bool _if_conditional151;
void* right_value102;
void* right_value103;
char* __result182__;
_Bool _if_conditional152;
_Bool _if_conditional153;
_Bool _if_conditional154;
void* right_value104;
char* __result183__;
_Bool _if_conditional155;
void* right_value105;
char* __result184__;
void* right_value106;
char* result_108;
char* __result185__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_107, 0, sizeof(int));
memset(&result_108, 0, sizeof(char*));
    if(_if_conditional148=str==((void*)0),    _if_conditional148) {
        __result181__ = __result_obj__ = ((char*)(right_value101=__builtin_string("")));
        return __result181__;
    }
    len_107=strlen(str);
    if(_if_conditional149=head<0,    _if_conditional149) {
        head+=len_107;
    }
    if(_if_conditional150=tail<0,    _if_conditional150) {
        tail+=len_107+1;
    }
    if(_if_conditional151=head>tail,    _if_conditional151) {
        __result182__ = __result_obj__ = ((char*)(right_value103=string_reverse(((char*)(right_value102=charp_substring(str,tail,head))))));
        if(right_value102 && right_value102 != __result_obj__) { right_value102 = come_decrement_ref_count(right_value102, (void*)0, (void*)0, 1, 0, 0); }
        return __result182__;
    }
    if(_if_conditional152=head<0,    _if_conditional152) {
        head=0;
    }
    if(_if_conditional153=tail>=len_107,    _if_conditional153) {
        tail=len_107;
    }
    if(_if_conditional154=head==tail,    _if_conditional154) {
        __result183__ = __result_obj__ = ((char*)(right_value104=__builtin_string("")));
        return __result183__;
    }
    if(_if_conditional155=tail-head+1<1,    _if_conditional155) {
        __result184__ = __result_obj__ = ((char*)(right_value105=__builtin_string("")));
        return __result184__;
    }
    result_108=(char*)come_increment_ref_count(((char*)(right_value106=(char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "libcomelang2.c", 1483))));
    if(right_value106 && right_value106 != __result_obj__) { right_value106 = come_decrement_ref_count(right_value106, (void*)0, (void*)0, 1, 0, 0); }
    memcpy(result_108,str+head,tail-head);
    result_108[tail-head]=0;
    __result185__ = __result_obj__ = result_108;
    if(result_108) { result_108 = come_decrement_ref_count(result_108, (void*)0, (void*)0, 0, 1, 0); }
    return __result185__;
    if(result_108) { result_108 = come_decrement_ref_count(result_108, (void*)0, (void*)0, 0, 0, 0); }
}

char* xsprintf(char* msg, ...){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional156;
void* right_value107;
char* __result186__;
va_list args_109;
char* result_110;
int len_111;
_Bool _if_conditional157;
void* right_value108;
char* __result187__;
void* right_value109;
char* result2_112;
char* __result188__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&args_109, 0, sizeof(va_list));
memset(&result_110, 0, sizeof(char*));
memset(&len_111, 0, sizeof(int));
memset(&result2_112, 0, sizeof(char*));
    if(_if_conditional156=msg==((void*)0),    _if_conditional156) {
        __result186__ = __result_obj__ = ((char*)(right_value107=__builtin_string("")));
        return __result186__;
    }
    __builtin_va_start(args_109,msg);
    len_111=vasprintf(&result_110,msg,args_109);
    __builtin_va_end(args_109);
    if(_if_conditional157=len_111<0,    _if_conditional157) {
        __result187__ = __result_obj__ = ((char*)(right_value108=__builtin_string("")));
        if((&args_109)) { come_call_finalizer(va_list_finalize,(&args_109), (void*)0, (void*)0, 1, 0, 0, 0); }
        return __result187__;
    }
    result2_112=(char*)come_increment_ref_count(((char*)(right_value109=__builtin_string(result_110))));
    if(right_value109 && right_value109 != __result_obj__) { right_value109 = come_decrement_ref_count(right_value109, (void*)0, (void*)0, 1, 0, 0); }
    free(result_110);
    __result188__ = __result_obj__ = result2_112;
    if((&args_109)) { come_call_finalizer(va_list_finalize,(&args_109), (void*)0, (void*)0, 1, 0, 0, 0); }
    if(result2_112) { result2_112 = come_decrement_ref_count(result2_112, (void*)0, (void*)0, 0, 1, 0); }
    return __result188__;
    if((&args_109)) { come_call_finalizer(va_list_finalize,(&args_109), (void*)0, (void*)0, 1, 0, 0, 0); }
    if(result2_112) { result2_112 = come_decrement_ref_count(result2_112, (void*)0, (void*)0, 0, 0, 0); }
}

static void va_list_finalize(va_list self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

char* charp_delete(char* str, int head, int tail){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional158;
void* right_value110;
char* __result189__;
int len_113;
_Bool _if_conditional159;
void* right_value111;
char* __result190__;
_Bool _if_conditional160;
_Bool _if_conditional161;
_Bool _if_conditional162;
_Bool _if_conditional163;
void* right_value112;
char* __result191__;
_Bool _if_conditional164;
void* right_value113;
char* sub_str_114;
void* right_value114;
char* __result192__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_113, 0, sizeof(int));
memset(&sub_str_114, 0, sizeof(char*));
    if(_if_conditional158=str==((void*)0),    _if_conditional158) {
        __result189__ = __result_obj__ = ((char*)(right_value110=__builtin_string("")));
        return __result189__;
    }
    len_113=strlen(str);
    if(_if_conditional159=strcmp(str,"")==0,    _if_conditional159) {
        __result190__ = __result_obj__ = ((char*)(right_value111=__builtin_string(str)));
        return __result190__;
    }
    if(_if_conditional160=head<0,    _if_conditional160) {
        head+=len_113;
    }
    if(_if_conditional161=tail<0,    _if_conditional161) {
        tail+=len_113+1;
    }
    if(_if_conditional162=head<0,    _if_conditional162) {
        head=0;
    }
    if(_if_conditional163=tail<0,    _if_conditional163) {
        __result191__ = __result_obj__ = ((char*)(right_value112=__builtin_string(str)));
        return __result191__;
    }
    if(_if_conditional164=tail>=len_113,    _if_conditional164) {
        tail=len_113;
    }
    sub_str_114=(char*)come_increment_ref_count(((char*)(right_value113=charp_substring(str,tail,-1))));
    if(right_value113 && right_value113 != __result_obj__) { right_value113 = come_decrement_ref_count(right_value113, (void*)0, (void*)0, 1, 0, 0); }
    memcpy(str+head,sub_str_114,string_length(sub_str_114)+1);
    __result192__ = __result_obj__ = ((char*)(right_value114=__builtin_string(str)));
    if(sub_str_114) { sub_str_114 = come_decrement_ref_count(sub_str_114, (void*)0, (void*)0, 0, 0, 0); }
    return __result192__;
    if(sub_str_114) { sub_str_114 = come_decrement_ref_count(sub_str_114, (void*)0, (void*)0, 0, 0, 0); }
}

char* string_delete(char* str, int head, int tail){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional165;
void* right_value115;
char* __result193__;
int len_115;
_Bool _if_conditional166;
void* right_value116;
char* __result194__;
_Bool _if_conditional167;
_Bool _if_conditional168;
_Bool _if_conditional169;
_Bool _if_conditional170;
void* right_value117;
char* __result195__;
_Bool _if_conditional171;
void* right_value118;
char* sub_str_116;
void* right_value119;
char* __result196__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_115, 0, sizeof(int));
memset(&sub_str_116, 0, sizeof(char*));
    if(_if_conditional165=str==((void*)0),    _if_conditional165) {
        __result193__ = __result_obj__ = ((char*)(right_value115=__builtin_string("")));
        return __result193__;
    }
    len_115=strlen(str);
    if(_if_conditional166=strcmp(str,"")==0,    _if_conditional166) {
        __result194__ = __result_obj__ = ((char*)(right_value116=__builtin_string(str)));
        return __result194__;
    }
    if(_if_conditional167=head<0,    _if_conditional167) {
        head+=len_115;
    }
    if(_if_conditional168=tail<0,    _if_conditional168) {
        tail+=len_115+1;
    }
    if(_if_conditional169=head<0,    _if_conditional169) {
        head=0;
    }
    if(_if_conditional170=tail<0,    _if_conditional170) {
        __result195__ = __result_obj__ = ((char*)(right_value117=__builtin_string(str)));
        return __result195__;
    }
    if(_if_conditional171=tail>=len_115,    _if_conditional171) {
        tail=len_115;
    }
    sub_str_116=(char*)come_increment_ref_count(((char*)(right_value118=charp_substring(str,tail,-1))));
    if(right_value118 && right_value118 != __result_obj__) { right_value118 = come_decrement_ref_count(right_value118, (void*)0, (void*)0, 1, 0, 0); }
    memcpy(str+head,sub_str_116,string_length(sub_str_116)+1);
    __result196__ = __result_obj__ = ((char*)(right_value119=__builtin_string(str)));
    if(sub_str_116) { sub_str_116 = come_decrement_ref_count(sub_str_116, (void*)0, (void*)0, 0, 0, 0); }
    return __result196__;
    if(sub_str_116) { sub_str_116 = come_decrement_ref_count(sub_str_116, (void*)0, (void*)0, 0, 0, 0); }
}

struct list$1charph* charp_split_char(char* self, char c){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional172;
void* right_value120;
void* right_value121;
struct list$1charph* __result198__;
void* right_value122;
void* right_value123;
struct list$1charph* result_119;
void* right_value124;
void* right_value125;
struct buffer* str_120;
int i_121;
_Bool _for_condtionalA10;
_Bool _if_conditional174;
void* right_value129;
_Bool _if_conditional177;
void* right_value130;
struct list$1charph* __result200__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_119, 0, sizeof(struct list$1charph*));
memset(&str_120, 0, sizeof(struct buffer*));
memset(&i_121, 0, sizeof(int));
    if(_if_conditional172=self==((void*)0),    _if_conditional172) {
        __result198__ = __result_obj__ = ((struct list$1charph*)(right_value121=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value120=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2.c", 1594)))))));
        if(right_value120 && right_value120 != __result_obj__) { come_call_finalizer(list$1charphp_finalize,right_value120, (void*)0, (void*)0, 0, 1, 0, 0); }
        return __result198__;
    }
    result_119=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value123=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value122=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2.c", 1597))))))));
    if(right_value122 && right_value122 != __result_obj__) { come_call_finalizer(list$1charphp_finalize,right_value122, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value123 && right_value123 != __result_obj__) { come_call_finalizer(list$1charphp_finalize,right_value123, (void*)0, (void*)0, 0, 1, 0, 0); }
    str_120=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value125=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value124=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 1599))))))));
    if(right_value124 && right_value124 != __result_obj__) { come_call_finalizer(buffer_finalize,right_value124, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value125 && right_value125 != __result_obj__) { come_call_finalizer(buffer_finalize,right_value125, (void*)0, (void*)0, 0, 1, 0, 0); }
    for(
    i_121=0 ,    0;    _for_condtionalA10=    i_121<charp_length(self) ,    _for_condtionalA10;    i_121++ ,    0    ){
        if(_if_conditional174=self[i_121]==c,        _if_conditional174) {
            list$1charph_push_back(result_119,(char*)come_increment_ref_count(((char*)(right_value129=__builtin_string(str_120->buf)))));
            if(right_value129 && right_value129 != __result_obj__) { right_value129 = come_decrement_ref_count(right_value129, (void*)0, (void*)0, 1, 0, 0); }
            buffer_reset(str_120);
        }
        else {
            buffer_append_char(str_120,self[i_121]);
        }
    }
    if(_if_conditional177=buffer_length(str_120)!=0,    _if_conditional177) {
        list$1charph_push_back(result_119,(char*)come_increment_ref_count(((char*)(right_value130=__builtin_string(str_120->buf)))));
        if(right_value130 && right_value130 != __result_obj__) { right_value130 = come_decrement_ref_count(right_value130, (void*)0, (void*)0, 1, 0, 0); }
    }
    __result200__ = __result_obj__ = result_119;
    if(result_119) { come_call_finalizer(list$1charphp_finalize,result_119, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(str_120) { come_call_finalizer(buffer_finalize,str_120, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result200__;
    if(result_119) { come_call_finalizer(list$1charphp_finalize,result_119, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(str_120) { come_call_finalizer(buffer_finalize,str_120, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
struct list$1charph* __result197__;
memset(&__result_obj__, 0, sizeof(void*));
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            __result197__ = __result_obj__ = self;
            if(self) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            return __result197__;
            if(self) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list$1charphp_finalize(struct list$1charph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
struct list_item$1charph* it_117;
_Bool _while_condtional8;
struct list_item$1charph* prev_it_118;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_117, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_118, 0, sizeof(struct list_item$1charph*));
                it_117=self->head;
                while(_while_condtional8=it_117!=((void*)0),                _while_condtional8) {
                    prev_it_118=it_117;
                    it_117=it_117->next;
                    if(prev_it_118) { come_call_finalizer(list_item$1charphp_finalize,prev_it_118, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional173;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional173=self!=((void*)0)&&self->item!=((void*)0),                        _if_conditional173) {
                            if(self->item) { self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0, 0, 0); }
                        }
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional175;
void* right_value126;
struct list_item$1charph* litem_122;
char* __dec_obj16;
_Bool _if_conditional176;
void* right_value127;
struct list_item$1charph* litem_123;
char* __dec_obj17;
void* right_value128;
struct list_item$1charph* litem_124;
char* __dec_obj18;
struct list$1charph* __result199__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&litem_122, 0, sizeof(struct list_item$1charph*));
memset(&litem_123, 0, sizeof(struct list_item$1charph*));
memset(&litem_124, 0, sizeof(struct list_item$1charph*));
                if(_if_conditional175=self->len==0,                _if_conditional175) {
                    litem_122=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value126=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 277))));
                    if(right_value126 && right_value126 != __result_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value126, (void*)0, (void*)0, 0, 1, 0, 0); }
                    litem_122->prev=((void*)0);
                    litem_122->next=((void*)0);
                    __dec_obj16=litem_122->item;
                    litem_122->item=(char*)come_increment_ref_count(item);
                    if(__dec_obj16) { __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0,0,0); }
                    self->tail=litem_122;
                    self->head=litem_122;
                }
                else {
                    if(_if_conditional176=self->len==1,                    _if_conditional176) {
                        litem_123=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value127=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 287))));
                        if(right_value127 && right_value127 != __result_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value127, (void*)0, (void*)0, 0, 1, 0, 0); }
                        litem_123->prev=self->head;
                        litem_123->next=((void*)0);
                        __dec_obj17=litem_123->item;
                        litem_123->item=(char*)come_increment_ref_count(item);
                        if(__dec_obj17) { __dec_obj17 = come_decrement_ref_count(__dec_obj17, (void*)0, (void*)0, 0,0,0); }
                        self->tail=litem_123;
                        self->head->next=litem_123;
                    }
                    else {
                        litem_124=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value128=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 297))));
                        if(right_value128 && right_value128 != __result_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value128, (void*)0, (void*)0, 0, 1, 0, 0); }
                        litem_124->prev=self->tail;
                        litem_124->next=((void*)0);
                        __dec_obj18=litem_124->item;
                        litem_124->item=(char*)come_increment_ref_count(item);
                        if(__dec_obj18) { __dec_obj18 = come_decrement_ref_count(__dec_obj18, (void*)0, (void*)0, 0,0,0); }
                        self->tail->next=litem_124;
                        self->tail=litem_124;
                    }
                }
                self->len++;
                __result199__ = __result_obj__ = self;
                if(item) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
                return __result199__;
                if(item) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
}

struct list$1charph* string_split_char(char* self, char c){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional178;
void* right_value131;
void* right_value132;
struct list$1charph* __result201__;
void* right_value133;
void* right_value134;
struct list$1charph* result_125;
void* right_value135;
void* right_value136;
struct buffer* str_126;
int i_127;
_Bool _for_condtionalA11;
_Bool _if_conditional179;
void* right_value137;
_Bool _if_conditional180;
void* right_value138;
struct list$1charph* __result202__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_125, 0, sizeof(struct list$1charph*));
memset(&str_126, 0, sizeof(struct buffer*));
memset(&i_127, 0, sizeof(int));
    if(_if_conditional178=self==((void*)0),    _if_conditional178) {
        __result201__ = __result_obj__ = ((struct list$1charph*)(right_value132=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value131=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2.c", 1620)))))));
        if(right_value131 && right_value131 != __result_obj__) { come_call_finalizer(list$1charphp_finalize,right_value131, (void*)0, (void*)0, 0, 1, 0, 0); }
        return __result201__;
    }
    result_125=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value134=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value133=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2.c", 1623))))))));
    if(right_value133 && right_value133 != __result_obj__) { come_call_finalizer(list$1charphp_finalize,right_value133, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value134 && right_value134 != __result_obj__) { come_call_finalizer(list$1charphp_finalize,right_value134, (void*)0, (void*)0, 0, 1, 0, 0); }
    str_126=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value136=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value135=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 1625))))))));
    if(right_value135 && right_value135 != __result_obj__) { come_call_finalizer(buffer_finalize,right_value135, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value136 && right_value136 != __result_obj__) { come_call_finalizer(buffer_finalize,right_value136, (void*)0, (void*)0, 0, 1, 0, 0); }
    for(
    i_127=0 ,    0;    _for_condtionalA11=    i_127<charp_length(self) ,    _for_condtionalA11;    i_127++ ,    0    ){
        if(_if_conditional179=self[i_127]==c,        _if_conditional179) {
            list$1charph_push_back(result_125,(char*)come_increment_ref_count(((char*)(right_value137=__builtin_string(str_126->buf)))));
            if(right_value137 && right_value137 != __result_obj__) { right_value137 = come_decrement_ref_count(right_value137, (void*)0, (void*)0, 1, 0, 0); }
            buffer_reset(str_126);
        }
        else {
            buffer_append_char(str_126,self[i_127]);
        }
    }
    if(_if_conditional180=buffer_length(str_126)!=0,    _if_conditional180) {
        list$1charph_push_back(result_125,(char*)come_increment_ref_count(((char*)(right_value138=__builtin_string(str_126->buf)))));
        if(right_value138 && right_value138 != __result_obj__) { right_value138 = come_decrement_ref_count(right_value138, (void*)0, (void*)0, 1, 0, 0); }
    }
    __result202__ = __result_obj__ = result_125;
    if(result_125) { come_call_finalizer(list$1charphp_finalize,result_125, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(str_126) { come_call_finalizer(buffer_finalize,str_126, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result202__;
    if(result_125) { come_call_finalizer(list$1charphp_finalize,result_125, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(str_126) { come_call_finalizer(buffer_finalize,str_126, (void*)0, (void*)0, 0, 0, 0, 0); }
}

char* xbasename(char* path){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional181;
void* right_value139;
char* __result203__;
char* p_128;
_Bool _while_condtional9;
_Bool _if_conditional182;
_Bool _if_conditional183;
void* right_value140;
char* __result204__;
void* right_value141;
char* __result205__;
void* right_value142;
char* __result206__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&p_128, 0, sizeof(char*));
    if(_if_conditional181=path==((void*)0),    _if_conditional181) {
        __result203__ = __result_obj__ = ((char*)(right_value139=__builtin_string("")));
        return __result203__;
    }
    p_128=path+strlen(path);
    while(_while_condtional9=p_128>=path,    _while_condtional9) {
        if(_if_conditional182=*p_128==47,        _if_conditional182) {
            break;
        }
        else {
            p_128--;
        }
    }
    if(_if_conditional183=p_128<path,    _if_conditional183) {
        __result204__ = __result_obj__ = ((char*)(right_value140=__builtin_string(path)));
        return __result204__;
    }
    else {
        __result205__ = __result_obj__ = ((char*)(right_value141=__builtin_string(p_128+1)));
        return __result205__;
    }
    __result206__ = __result_obj__ = ((char*)(right_value142=__builtin_string("")));
    return __result206__;
}

char* xdirname(char* path){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional184;
void* right_value143;
char* __result207__;
void* right_value144;
void* right_value145;
char* __result208__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional184=path==((void*)0),    _if_conditional184) {
        __result207__ = __result_obj__ = ((char*)(right_value143=__builtin_string("")));
        return __result207__;
    }
    __result208__ = __result_obj__ = ((char*)(right_value145=__builtin_string(dirname(((char*)(right_value144=__builtin_string(path)))))));
    if(right_value144 && right_value144 != __result_obj__) { right_value144 = come_decrement_ref_count(right_value144, (void*)0, (void*)0, 1, 0, 0); }
    return __result208__;
}

char* xnoextname(char* path){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional185;
void* right_value146;
char* __result209__;
void* right_value147;
char* path2_129;
char* p_130;
_Bool _while_condtional10;
_Bool _if_conditional186;
_Bool _if_conditional187;
void* right_value148;
char* __result210__;
void* right_value149;
char* __result211__;
void* right_value150;
char* __result212__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&path2_129, 0, sizeof(char*));
memset(&p_130, 0, sizeof(char*));
    if(_if_conditional185=path==((void*)0),    _if_conditional185) {
        __result209__ = __result_obj__ = ((char*)(right_value146=__builtin_string("")));
        return __result209__;
    }
    path2_129=(char*)come_increment_ref_count(((char*)(right_value147=xbasename(path))));
    if(right_value147 && right_value147 != __result_obj__) { right_value147 = come_decrement_ref_count(right_value147, (void*)0, (void*)0, 1, 0, 0); }
    p_130=path2_129+strlen(path2_129);
    while(_while_condtional10=p_130>=path2_129,    _while_condtional10) {
        if(_if_conditional186=*p_130==46,        _if_conditional186) {
            break;
        }
        else {
            p_130--;
        }
    }
    if(_if_conditional187=p_130<path2_129,    _if_conditional187) {
        __result210__ = __result_obj__ = ((char*)(right_value148=__builtin_string(path2_129)));
        if(path2_129) { path2_129 = come_decrement_ref_count(path2_129, (void*)0, (void*)0, 0, 0, 0); }
        return __result210__;
    }
    else {
        __result211__ = __result_obj__ = ((char*)(right_value149=string_substring(path2_129,0,p_130-path2_129)));
        if(path2_129) { path2_129 = come_decrement_ref_count(path2_129, (void*)0, (void*)0, 0, 0, 0); }
        return __result211__;
    }
    __result212__ = __result_obj__ = ((char*)(right_value150=__builtin_string("")));
    if(path2_129) { path2_129 = come_decrement_ref_count(path2_129, (void*)0, (void*)0, 0, 0, 0); }
    return __result212__;
    if(path2_129) { path2_129 = come_decrement_ref_count(path2_129, (void*)0, (void*)0, 0, 0, 0); }
}

char* xextname(char* path){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional188;
void* right_value151;
char* __result213__;
char* p_131;
_Bool _while_condtional11;
_Bool _if_conditional189;
_Bool _if_conditional190;
void* right_value152;
char* __result214__;
void* right_value153;
char* __result215__;
void* right_value154;
char* __result216__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&p_131, 0, sizeof(char*));
    if(_if_conditional188=path==((void*)0),    _if_conditional188) {
        __result213__ = __result_obj__ = ((char*)(right_value151=__builtin_string("")));
        return __result213__;
    }
    p_131=path+strlen(path);
    while(_while_condtional11=p_131>=path,    _while_condtional11) {
        if(_if_conditional189=*p_131==46,        _if_conditional189) {
            break;
        }
        else {
            p_131--;
        }
    }
    if(_if_conditional190=p_131<path,    _if_conditional190) {
        __result214__ = __result_obj__ = ((char*)(right_value152=__builtin_string(path)));
        return __result214__;
    }
    else {
        __result215__ = __result_obj__ = ((char*)(right_value153=__builtin_string(p_131+1)));
        return __result215__;
    }
    __result216__ = __result_obj__ = ((char*)(right_value154=__builtin_string("")));
    return __result216__;
}

char* xrealpath(char* path){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional191;
void* right_value155;
char* __result217__;
char* result_132;
void* right_value156;
char* result2_133;
char* __result218__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_132, 0, sizeof(char*));
memset(&result2_133, 0, sizeof(char*));
    if(_if_conditional191=path==((void*)0),    _if_conditional191) {
        __result217__ = __result_obj__ = ((char*)(right_value155=__builtin_string("")));
        return __result217__;
    }
    result_132=realpath(path,((void*)0));
    result2_133=(char*)come_increment_ref_count(((char*)(right_value156=__builtin_string(result_132))));
    if(right_value156 && right_value156 != __result_obj__) { right_value156 = come_decrement_ref_count(right_value156, (void*)0, (void*)0, 1, 0, 0); }
    free(result_132);
    __result218__ = __result_obj__ = result2_133;
    if(result2_133) { result2_133 = come_decrement_ref_count(result2_133, (void*)0, (void*)0, 0, 1, 0); }
    return __result218__;
    if(result2_133) { result2_133 = come_decrement_ref_count(result2_133, (void*)0, (void*)0, 0, 0, 0); }
}

char* bool_to_string(_Bool self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional192;
void* right_value157;
char* __result219__;
void* right_value158;
char* __result220__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional192=self,    _if_conditional192) {
        __result219__ = __result_obj__ = ((char*)(right_value157=__builtin_string("true")));
        return __result219__;
    }
    else {
        __result220__ = __result_obj__ = ((char*)(right_value158=__builtin_string("false")));
        return __result220__;
    }
}

char* char_to_string(char self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value159;
char* __result221__;
memset(&__result_obj__, 0, sizeof(void*));
    __result221__ = __result_obj__ = ((char*)(right_value159=xsprintf("%c",self)));
    return __result221__;
}

char* short_to_string(short short self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value160;
char* __result222__;
memset(&__result_obj__, 0, sizeof(void*));
    __result222__ = __result_obj__ = ((char*)(right_value160=xsprintf("%d",self)));
    return __result222__;
}

char* int_to_string(int self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value161;
char* __result223__;
memset(&__result_obj__, 0, sizeof(void*));
    __result223__ = __result_obj__ = ((char*)(right_value161=xsprintf("%d",self)));
    return __result223__;
}

char* long_to_string(long self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value162;
char* __result224__;
memset(&__result_obj__, 0, sizeof(void*));
    __result224__ = __result_obj__ = ((char*)(right_value162=xsprintf("%ld",self)));
    return __result224__;
}

char* size_t_to_string(long int self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value163;
char* __result225__;
memset(&__result_obj__, 0, sizeof(void*));
    __result225__ = __result_obj__ = ((char*)(right_value163=xsprintf("%ld",self)));
    return __result225__;
}

char* float_to_string(float self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value164;
char* __result226__;
memset(&__result_obj__, 0, sizeof(void*));
    __result226__ = __result_obj__ = ((char*)(right_value164=xsprintf("%f",self)));
    return __result226__;
}

char* double_to_string(double self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value165;
char* __result227__;
memset(&__result_obj__, 0, sizeof(void*));
    __result227__ = __result_obj__ = ((char*)(right_value165=xsprintf("%lf",self)));
    return __result227__;
}

char* string_to_string(char* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional193;
void* right_value166;
char* __result228__;
void* right_value167;
char* __result229__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional193=self==((void*)0),    _if_conditional193) {
        __result228__ = __result_obj__ = ((char*)(right_value166=__builtin_string("")));
        return __result228__;
    }
    __result229__ = __result_obj__ = ((char*)(right_value167=__builtin_string(self)));
    return __result229__;
}

char* charp_to_string(char* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional194;
void* right_value168;
char* __result230__;
void* right_value169;
char* __result231__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional194=self==((void*)0),    _if_conditional194) {
        __result230__ = __result_obj__ = ((char*)(right_value168=__builtin_string("")));
        return __result230__;
    }
    __result231__ = __result_obj__ = ((char*)(right_value169=__builtin_string(self)));
    return __result231__;
}

int bool_compare(_Bool left, _Bool right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional195;
int __result232__;
_Bool _if_conditional196;
int __result233__;
_Bool _if_conditional197;
int __result234__;
int __result235__;
int __result236__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional195=!left&&right,    _if_conditional195) {
        __result232__ = -1;
        return __result232__;
    }
    else {
        if(_if_conditional196=left&&right,        _if_conditional196) {
            __result233__ = 0;
            return __result233__;
        }
        else {
            if(_if_conditional197=!left&&!right,            _if_conditional197) {
                __result234__ = 0;
                return __result234__;
            }
            else {
                __result235__ = 1;
                return __result235__;
            }
        }
    }
    __result236__ = 0;
    return __result236__;
}

int char_compare(char left, char right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional198;
int __result237__;
_Bool _if_conditional199;
int __result238__;
int __result239__;
int __result240__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional198=left<right,    _if_conditional198) {
        __result237__ = -1;
        return __result237__;
    }
    else {
        if(_if_conditional199=left>right,        _if_conditional199) {
            __result238__ = 1;
            return __result238__;
        }
        else {
            __result239__ = 0;
            return __result239__;
        }
    }
    __result240__ = 0;
    return __result240__;
}

int short_compare(short short left, short short right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional200;
int __result241__;
_Bool _if_conditional201;
int __result242__;
int __result243__;
int __result244__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional200=left<right,    _if_conditional200) {
        __result241__ = -1;
        return __result241__;
    }
    else {
        if(_if_conditional201=left>right,        _if_conditional201) {
            __result242__ = 1;
            return __result242__;
        }
        else {
            __result243__ = 0;
            return __result243__;
        }
    }
    __result244__ = 0;
    return __result244__;
}

int int_compare(int left, int right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional202;
int __result245__;
_Bool _if_conditional203;
int __result246__;
int __result247__;
int __result248__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional202=left<right,    _if_conditional202) {
        __result245__ = -1;
        return __result245__;
    }
    else {
        if(_if_conditional203=left>right,        _if_conditional203) {
            __result246__ = 1;
            return __result246__;
        }
        else {
            __result247__ = 0;
            return __result247__;
        }
    }
    __result248__ = 0;
    return __result248__;
}

int long_compare(long left, long right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional204;
int __result249__;
_Bool _if_conditional205;
int __result250__;
int __result251__;
int __result252__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional204=left<right,    _if_conditional204) {
        __result249__ = -1;
        return __result249__;
    }
    else {
        if(_if_conditional205=left>right,        _if_conditional205) {
            __result250__ = 1;
            return __result250__;
        }
        else {
            __result251__ = 0;
            return __result251__;
        }
    }
    __result252__ = 0;
    return __result252__;
}

int size_t_compare(long int left, long int right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional206;
int __result253__;
_Bool _if_conditional207;
int __result254__;
int __result255__;
int __result256__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional206=left<right,    _if_conditional206) {
        __result253__ = -1;
        return __result253__;
    }
    else {
        if(_if_conditional207=left>right,        _if_conditional207) {
            __result254__ = 1;
            return __result254__;
        }
        else {
            __result255__ = 0;
            return __result255__;
        }
    }
    __result256__ = 0;
    return __result256__;
}

int float_compare(float left, float right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional208;
int __result257__;
_Bool _if_conditional209;
int __result258__;
int __result259__;
int __result260__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional208=left<right,    _if_conditional208) {
        __result257__ = -1;
        return __result257__;
    }
    else {
        if(_if_conditional209=left>right,        _if_conditional209) {
            __result258__ = 1;
            return __result258__;
        }
        else {
            __result259__ = 0;
            return __result259__;
        }
    }
    __result260__ = 0;
    return __result260__;
}

int double_compare(double left, double right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional210;
int __result261__;
_Bool _if_conditional211;
int __result262__;
int __result263__;
int __result264__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional210=left<right,    _if_conditional210) {
        __result261__ = -1;
        return __result261__;
    }
    else {
        if(_if_conditional211=left>right,        _if_conditional211) {
            __result262__ = 1;
            return __result262__;
        }
        else {
            __result263__ = 0;
            return __result263__;
        }
    }
    __result264__ = 0;
    return __result264__;
}

int string_compare(char* left, char* right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional212;
int __result265__;
_Bool _if_conditional213;
int __result266__;
_Bool _if_conditional214;
int __result267__;
int __result268__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional212=left==((void*)0)&&right==((void*)0),    _if_conditional212) {
        __result265__ = 0;
        return __result265__;
    }
    else {
        if(_if_conditional213=left==((void*)0),        _if_conditional213) {
            __result266__ = -1;
            return __result266__;
        }
        else {
            if(_if_conditional214=right==((void*)0),            _if_conditional214) {
                __result267__ = 1;
                return __result267__;
            }
        }
    }
    __result268__ = strcmp(left,right);
    return __result268__;
}

int charp_compare(char* left, char* right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional215;
int __result269__;
_Bool _if_conditional216;
int __result270__;
_Bool _if_conditional217;
int __result271__;
int __result272__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional215=left==((void*)0)&&right==((void*)0),    _if_conditional215) {
        __result269__ = 0;
        return __result269__;
    }
    else {
        if(_if_conditional216=left==((void*)0),        _if_conditional216) {
            __result270__ = -1;
            return __result270__;
        }
        else {
            if(_if_conditional217=right==((void*)0),            _if_conditional217) {
                __result271__ = 1;
                return __result271__;
            }
        }
    }
    __result272__ = strcmp(left,right);
    return __result272__;
}

struct optional$2charphbool* FILE_read(struct _IO_FILE* f){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional218;
void* right_value170;
void* right_value171;
void* right_value172;
struct optional$2charphbool* __result274__;
void* right_value173;
void* right_value174;
struct buffer* buf_134;
_Bool _while_condtional12;
int size_136;
_Bool _if_conditional220;
void* right_value175;
void* right_value176;
void* right_value177;
struct optional$2charphbool* __result275__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&buf_134, 0, sizeof(struct buffer*));
memset(&size_136, 0, sizeof(int));
    if(_if_conditional218=f==((void*)0),    _if_conditional218) {
        __result274__ = __result_obj__ = ((struct optional$2charphbool*)(right_value172=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value171=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 1974))),(char*)come_increment_ref_count(((char*)(right_value170=__builtin_string("")))),(_Bool)0)));
        if(right_value170 && right_value170 != __result_obj__) { right_value170 = come_decrement_ref_count(right_value170, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value171 && right_value171 != __result_obj__) { right_value171 = come_decrement_ref_count(right_value171, (void*)0, (void*)0, 1, 0, 0); }
        return __result274__;
    }
    buf_134=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value174=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value173=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 1976))))))));
    if(right_value173 && right_value173 != __result_obj__) { come_call_finalizer(buffer_finalize,right_value173, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value174 && right_value174 != __result_obj__) { come_call_finalizer(buffer_finalize,right_value174, (void*)0, (void*)0, 0, 1, 0, 0); }
    while(_while_condtional12=1,    _while_condtional12) {
        char buf2_135[8192];
        memset(&buf2_135, 0, sizeof(char)        *(8192)        );
        size_136=fread(buf2_135,1,8192,f);
        buffer_append(buf_134,buf2_135,size_136);
        if(_if_conditional220=size_136<8192,        _if_conditional220) {
            break;
        }
    }
    __result275__ = __result_obj__ = ((struct optional$2charphbool*)(right_value177=optional$2charphbool_initialize((struct optional$2charphbool*)come_increment_ref_count(((struct optional$2charphbool*)(right_value176=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 1990)))),(char*)come_increment_ref_count(((char*)(right_value175=buffer_to_string(buf_134)))),(_Bool)1)));
    if(buf_134) { come_call_finalizer(buffer_finalize,buf_134, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value175 && right_value175 != __result_obj__) { right_value175 = come_decrement_ref_count(right_value175, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value176 && right_value176 != __result_obj__) { right_value176 = come_decrement_ref_count(right_value176, (void*)0, (void*)0, 1, 0, 0); }
    return __result275__;
    if(buf_134) { come_call_finalizer(buffer_finalize,buf_134, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct optional$2charphbool* optional$2charphbool_initialize(struct optional$2charphbool* self, char* v1, _Bool v2){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
char* __dec_obj19;
struct optional$2charphbool* __result273__;
memset(&__result_obj__, 0, sizeof(void*));
            __dec_obj19=self->v1;
            self->v1=(char*)come_increment_ref_count(v1);
            if(__dec_obj19) { __dec_obj19 = come_decrement_ref_count(__dec_obj19, (void*)0, (void*)0, 0,0,0); }
            self->v2=v2;
            __result273__ = __result_obj__ = self;
            if(self) { come_call_finalizer(optional$2charphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            if(v1) { v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 1, 0); }
            return __result273__;
            if(self) { come_call_finalizer(optional$2charphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            if(v1) { v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 1, 0); }
}

static void optional$2charphboolp_finalize(struct optional$2charphbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional219;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional219=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional219) {
                    if(self->v1) { self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, 0); }
                }
}

struct optional$2intbool* FILE_write(struct _IO_FILE* f, char* str){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional221;
void* right_value178;
void* right_value179;
struct optional$2intbool* __result276__;
void* right_value180;
void* right_value181;
struct optional$2intbool* __result277__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional221=f==((void*)0)||str==((void*)0),    _if_conditional221) {
        __result276__ = __result_obj__ = ((struct optional$2intbool*)(right_value179=optional$2intbool_initialize(((struct optional$2intbool*)(right_value178=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 1996))),-1,(_Bool)0)));
        if(right_value178 && right_value178 != __result_obj__) { right_value178 = come_decrement_ref_count(right_value178, (void*)0, (void*)0, 1, 0, 0); }
        return __result276__;
    }
    __result277__ = __result_obj__ = ((struct optional$2intbool*)(right_value181=optional$2intbool_initialize((struct optional$2intbool*)come_increment_ref_count(((struct optional$2intbool*)(right_value180=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 1999)))),fwrite(str,strlen(str),1,f),(_Bool)1)));
    if(right_value180 && right_value180 != __result_obj__) { right_value180 = come_decrement_ref_count(right_value180, (void*)0, (void*)0, 1, 0, 0); }
    return __result277__;
}

struct optional$2intbool* FILE_fclose(struct _IO_FILE* f){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional222;
void* right_value182;
void* right_value183;
struct optional$2intbool* __result278__;
int result_137;
_Bool _if_conditional223;
void* right_value184;
void* right_value185;
struct optional$2intbool* __result279__;
void* right_value186;
void* right_value187;
struct optional$2intbool* __result280__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_137, 0, sizeof(int));
    if(_if_conditional222=f==((void*)0),    _if_conditional222) {
        __result278__ = __result_obj__ = ((struct optional$2intbool*)(right_value183=optional$2intbool_initialize(((struct optional$2intbool*)(right_value182=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2005))),-1,(_Bool)0)));
        if(right_value182 && right_value182 != __result_obj__) { right_value182 = come_decrement_ref_count(right_value182, (void*)0, (void*)0, 1, 0, 0); }
        return __result278__;
    }
    result_137=fclose(f);
    if(_if_conditional223=result_137<0,    _if_conditional223) {
        __result279__ = __result_obj__ = ((struct optional$2intbool*)(right_value185=optional$2intbool_initialize(((struct optional$2intbool*)(right_value184=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2011))),result_137,(_Bool)0)));
        if(right_value184 && right_value184 != __result_obj__) { right_value184 = come_decrement_ref_count(right_value184, (void*)0, (void*)0, 1, 0, 0); }
        return __result279__;
    }
    __result280__ = __result_obj__ = ((struct optional$2intbool*)(right_value187=optional$2intbool_initialize((struct optional$2intbool*)come_increment_ref_count(((struct optional$2intbool*)(right_value186=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2014)))),result_137,(_Bool)1)));
    if(right_value186 && right_value186 != __result_obj__) { right_value186 = come_decrement_ref_count(right_value186, (void*)0, (void*)0, 1, 0, 0); }
    return __result280__;
}

struct optional$2_IO_FILEpbool* FILE_fprintf(struct _IO_FILE* f, const char* msg, ...){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional224;
void* right_value188;
void* right_value189;
struct optional$2_IO_FILEpbool* __result282__;
va_list args_139;
int result_140;
_Bool _if_conditional225;
void* right_value190;
void* right_value191;
struct optional$2_IO_FILEpbool* __result283__;
void* right_value192;
void* right_value193;
struct optional$2_IO_FILEpbool* __result284__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&args_139, 0, sizeof(va_list));
memset(&result_140, 0, sizeof(int));
    if(_if_conditional224=f==((void*)0)||msg==((void*)0),    _if_conditional224) {
        __result282__ = __result_obj__ = ((struct optional$2_IO_FILEpbool*)(right_value189=optional$2_IO_FILEpbool_initialize(((struct optional$2_IO_FILEpbool*)(right_value188=(struct optional$2_IO_FILEpbool*)come_calloc(1, sizeof(struct optional$2_IO_FILEpbool)*(1), "libcomelang2.c", 2020))),f,(_Bool)0)));
        if(right_value188 && right_value188 != __result_obj__) { right_value188 = come_decrement_ref_count(right_value188, (void*)0, (void*)0, 1, 0, 0); }
        return __result282__;
    }
    char msg2_138[1024*2*2*2];
    memset(&msg2_138, 0, sizeof(char)    *(1024*2*2*2)    );
    __builtin_va_start(args_139,msg);
    vsnprintf(msg2_138,1024*2*2*2,msg,args_139);
    __builtin_va_end(args_139);
    result_140=fprintf(f,"%s",msg2_138);
    if(_if_conditional225=result_140<0,    _if_conditional225) {
        __result283__ = __result_obj__ = ((struct optional$2intbool*)(right_value191=optional$2intbool_initialize(((struct optional$2intbool*)(right_value190=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2032))),result_140,(_Bool)0)));
        if((&args_139)) { come_call_finalizer(va_list_finalize,(&args_139), (void*)0, (void*)0, 1, 0, 0, 0); }
        if(right_value190 && right_value190 != __result_obj__) { right_value190 = come_decrement_ref_count(right_value190, (void*)0, (void*)0, 1, 0, 0); }
        return __result283__;
    }
    __result284__ = __result_obj__ = ((struct optional$2_IO_FILEpbool*)(right_value193=optional$2_IO_FILEpbool_initialize((struct optional$2_IO_FILEpbool*)come_increment_ref_count(((struct optional$2_IO_FILEpbool*)(right_value192=(struct optional$2_IO_FILEpbool*)come_calloc(1, sizeof(struct optional$2_IO_FILEpbool)*(1), "libcomelang2.c", 2035)))),f,(_Bool)1)));
    if((&args_139)) { come_call_finalizer(va_list_finalize,(&args_139), (void*)0, (void*)0, 1, 0, 0, 0); }
    if(right_value192 && right_value192 != __result_obj__) { right_value192 = come_decrement_ref_count(right_value192, (void*)0, (void*)0, 1, 0, 0); }
    return __result284__;
    if((&args_139)) { come_call_finalizer(va_list_finalize,(&args_139), (void*)0, (void*)0, 1, 0, 0, 0); }
}

static struct optional$2_IO_FILEpbool* optional$2_IO_FILEpbool_initialize(struct optional$2_IO_FILEpbool* self, struct _IO_FILE* v1, _Bool v2){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
struct optional$2_IO_FILEpbool* __result281__;
memset(&__result_obj__, 0, sizeof(void*));
            self->v1=v1;
            self->v2=v2;
            __result281__ = __result_obj__ = self;
            if(self) { come_call_finalizer(optional$2_IO_FILEpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            return __result281__;
            if(self) { come_call_finalizer(optional$2_IO_FILEpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2_IO_FILEpboolp_finalize(struct optional$2_IO_FILEpbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

struct optional$2intbool* string_write(char* self, char* file_name, _Bool append){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional226;
void* right_value194;
void* right_value195;
struct optional$2intbool* __result285__;
struct _IO_FILE* f_141;
_Bool _if_conditional227;
_Bool _if_conditional228;
void* right_value196;
void* right_value197;
struct optional$2intbool* __result286__;
int result_142;
_Bool _if_conditional229;
void* right_value198;
void* right_value199;
struct optional$2intbool* __result287__;
int result2_143;
_Bool _if_conditional230;
void* right_value200;
void* right_value201;
struct optional$2intbool* __result288__;
void* right_value202;
void* right_value203;
struct optional$2intbool* __result289__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&f_141, 0, sizeof(struct _IO_FILE*));
memset(&result_142, 0, sizeof(int));
memset(&result2_143, 0, sizeof(int));
    if(_if_conditional226=self==((void*)0)||file_name==((void*)0),    _if_conditional226) {
        __result285__ = __result_obj__ = ((struct optional$2intbool*)(right_value195=optional$2intbool_initialize(((struct optional$2intbool*)(right_value194=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2041))),-1,(_Bool)0)));
        if(right_value194 && right_value194 != __result_obj__) { right_value194 = come_decrement_ref_count(right_value194, (void*)0, (void*)0, 1, 0, 0); }
        return __result285__;
    }
    if(_if_conditional227=append,    _if_conditional227) {
        f_141=fopen(file_name,"a");
    }
    else {
        f_141=fopen(file_name,"w");
    }
    if(_if_conditional228=f_141==((void*)0),    _if_conditional228) {
        __result286__ = __result_obj__ = ((struct optional$2intbool*)(right_value197=optional$2intbool_initialize(((struct optional$2intbool*)(right_value196=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2053))),-1,(_Bool)0)));
        if(right_value196 && right_value196 != __result_obj__) { right_value196 = come_decrement_ref_count(right_value196, (void*)0, (void*)0, 1, 0, 0); }
        return __result286__;
    }
    result_142=fwrite(self,strlen(self),1,f_141);
    if(_if_conditional229=result_142<0,    _if_conditional229) {
        __result287__ = __result_obj__ = ((struct optional$2intbool*)(right_value199=optional$2intbool_initialize(((struct optional$2intbool*)(right_value198=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2059))),result_142,(_Bool)0)));
        if(right_value198 && right_value198 != __result_obj__) { right_value198 = come_decrement_ref_count(right_value198, (void*)0, (void*)0, 1, 0, 0); }
        return __result287__;
    }
    result2_143=fclose(f_141);
    if(_if_conditional230=result2_143<0,    _if_conditional230) {
        __result288__ = __result_obj__ = ((struct optional$2intbool*)(right_value201=optional$2intbool_initialize(((struct optional$2intbool*)(right_value200=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2065))),result2_143,(_Bool)0)));
        if(right_value200 && right_value200 != __result_obj__) { right_value200 = come_decrement_ref_count(right_value200, (void*)0, (void*)0, 1, 0, 0); }
        return __result288__;
    }
    __result289__ = __result_obj__ = ((struct optional$2intbool*)(right_value203=optional$2intbool_initialize((struct optional$2intbool*)come_increment_ref_count(((struct optional$2intbool*)(right_value202=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2068)))),result_142,(_Bool)1)));
    if(right_value202 && right_value202 != __result_obj__) { right_value202 = come_decrement_ref_count(right_value202, (void*)0, (void*)0, 1, 0, 0); }
    return __result289__;
}

struct optional$2intbool* charp_write(char* self, char* file_name, _Bool append){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional231;
void* right_value204;
void* right_value205;
struct optional$2intbool* __result290__;
struct _IO_FILE* f_144;
_Bool _if_conditional232;
_Bool _if_conditional233;
void* right_value206;
void* right_value207;
struct optional$2intbool* __result291__;
int result_145;
_Bool _if_conditional234;
void* right_value208;
void* right_value209;
struct optional$2intbool* __result292__;
int result2_146;
_Bool _if_conditional235;
void* right_value210;
void* right_value211;
struct optional$2intbool* __result293__;
void* right_value212;
void* right_value213;
struct optional$2intbool* __result294__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&f_144, 0, sizeof(struct _IO_FILE*));
memset(&result_145, 0, sizeof(int));
memset(&result2_146, 0, sizeof(int));
    if(_if_conditional231=self==((void*)0)||file_name==((void*)0),    _if_conditional231) {
        __result290__ = __result_obj__ = ((struct optional$2intbool*)(right_value205=optional$2intbool_initialize(((struct optional$2intbool*)(right_value204=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2074))),-1,(_Bool)0)));
        if(right_value204 && right_value204 != __result_obj__) { right_value204 = come_decrement_ref_count(right_value204, (void*)0, (void*)0, 1, 0, 0); }
        return __result290__;
    }
    if(_if_conditional232=append,    _if_conditional232) {
        f_144=fopen(file_name,"a");
    }
    else {
        f_144=fopen(file_name,"w");
    }
    if(_if_conditional233=f_144==((void*)0),    _if_conditional233) {
        __result291__ = __result_obj__ = ((struct optional$2intbool*)(right_value207=optional$2intbool_initialize(((struct optional$2intbool*)(right_value206=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2086))),-1,(_Bool)0)));
        if(right_value206 && right_value206 != __result_obj__) { right_value206 = come_decrement_ref_count(right_value206, (void*)0, (void*)0, 1, 0, 0); }
        return __result291__;
    }
    result_145=fwrite(self,strlen(self),1,f_144);
    if(_if_conditional234=result_145<0,    _if_conditional234) {
        __result292__ = __result_obj__ = ((struct optional$2intbool*)(right_value209=optional$2intbool_initialize(((struct optional$2intbool*)(right_value208=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2092))),result_145,(_Bool)0)));
        if(right_value208 && right_value208 != __result_obj__) { right_value208 = come_decrement_ref_count(right_value208, (void*)0, (void*)0, 1, 0, 0); }
        return __result292__;
    }
    result2_146=fclose(f_144);
    if(_if_conditional235=result2_146<0,    _if_conditional235) {
        __result293__ = __result_obj__ = ((struct optional$2intbool*)(right_value211=optional$2intbool_initialize(((struct optional$2intbool*)(right_value210=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2098))),result2_146,(_Bool)0)));
        if(right_value210 && right_value210 != __result_obj__) { right_value210 = come_decrement_ref_count(right_value210, (void*)0, (void*)0, 1, 0, 0); }
        return __result293__;
    }
    __result294__ = __result_obj__ = ((struct optional$2intbool*)(right_value213=optional$2intbool_initialize((struct optional$2intbool*)come_increment_ref_count(((struct optional$2intbool*)(right_value212=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2101)))),result_145,(_Bool)1)));
    if(right_value212 && right_value212 != __result_obj__) { right_value212 = come_decrement_ref_count(right_value212, (void*)0, (void*)0, 1, 0, 0); }
    return __result294__;
}

struct optional$2charphbool* string_read(char* file_name){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional236;
void* right_value214;
void* right_value215;
void* right_value216;
struct optional$2charphbool* __result295__;
struct _IO_FILE* f_147;
_Bool _if_conditional237;
void* right_value217;
void* right_value218;
void* right_value219;
struct optional$2charphbool* __result296__;
void* right_value220;
void* right_value221;
struct buffer* buf_148;
_Bool _while_condtional13;
int size_150;
_Bool _if_conditional238;
void* right_value222;
char* result_151;
int result2_152;
_Bool _if_conditional239;
void* right_value223;
void* right_value224;
void* right_value225;
struct optional$2charphbool* __result297__;
void* right_value226;
void* right_value227;
struct optional$2charphbool* __result298__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&f_147, 0, sizeof(struct _IO_FILE*));
memset(&buf_148, 0, sizeof(struct buffer*));
memset(&size_150, 0, sizeof(int));
memset(&result_151, 0, sizeof(char*));
memset(&result2_152, 0, sizeof(int));
    if(_if_conditional236=file_name==((void*)0),    _if_conditional236) {
        __result295__ = __result_obj__ = ((struct optional$2charphbool*)(right_value216=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value215=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2107))),(char*)come_increment_ref_count(((char*)(right_value214=__builtin_string("")))),(_Bool)0)));
        if(right_value214 && right_value214 != __result_obj__) { right_value214 = come_decrement_ref_count(right_value214, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value215 && right_value215 != __result_obj__) { right_value215 = come_decrement_ref_count(right_value215, (void*)0, (void*)0, 1, 0, 0); }
        return __result295__;
    }
    f_147=fopen(file_name,"r");
    if(_if_conditional237=f_147==((void*)0),    _if_conditional237) {
        __result296__ = __result_obj__ = ((struct optional$2charphbool*)(right_value219=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value218=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2113))),(char*)come_increment_ref_count(((char*)(right_value217=__builtin_string("")))),(_Bool)0)));
        if(right_value217 && right_value217 != __result_obj__) { right_value217 = come_decrement_ref_count(right_value217, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value218 && right_value218 != __result_obj__) { right_value218 = come_decrement_ref_count(right_value218, (void*)0, (void*)0, 1, 0, 0); }
        return __result296__;
    }
    buf_148=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value221=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value220=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 2116))))))));
    if(right_value220 && right_value220 != __result_obj__) { come_call_finalizer(buffer_finalize,right_value220, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value221 && right_value221 != __result_obj__) { come_call_finalizer(buffer_finalize,right_value221, (void*)0, (void*)0, 0, 1, 0, 0); }
    while(_while_condtional13=1,    _while_condtional13) {
        char buf2_149[8192];
        memset(&buf2_149, 0, sizeof(char)        *(8192)        );
        size_150=fread(buf2_149,1,8192,f_147);
        buffer_append(buf_148,buf2_149,size_150);
        if(_if_conditional238=size_150<8192,        _if_conditional238) {
            break;
        }
    }
    result_151=(char*)come_increment_ref_count(((char*)(right_value222=buffer_to_string(buf_148))));
    if(right_value222 && right_value222 != __result_obj__) { right_value222 = come_decrement_ref_count(right_value222, (void*)0, (void*)0, 1, 0, 0); }
    result2_152=fclose(f_147);
    if(_if_conditional239=result2_152<0,    _if_conditional239) {
        __result297__ = __result_obj__ = ((struct optional$2charphbool*)(right_value225=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value224=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2135))),(char*)come_increment_ref_count(((char*)(right_value223=__builtin_string("")))),(_Bool)0)));
        if(buf_148) { come_call_finalizer(buffer_finalize,buf_148, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(result_151) { result_151 = come_decrement_ref_count(result_151, (void*)0, (void*)0, 0, 0, 0); }
        if(right_value223 && right_value223 != __result_obj__) { right_value223 = come_decrement_ref_count(right_value223, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value224 && right_value224 != __result_obj__) { right_value224 = come_decrement_ref_count(right_value224, (void*)0, (void*)0, 1, 0, 0); }
        return __result297__;
    }
    __result298__ = __result_obj__ = ((struct optional$2charphbool*)(right_value227=optional$2charphbool_initialize((struct optional$2charphbool*)come_increment_ref_count(((struct optional$2charphbool*)(right_value226=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2138)))),(char*)come_increment_ref_count(result_151),(_Bool)1)));
    if(buf_148) { come_call_finalizer(buffer_finalize,buf_148, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(result_151) { result_151 = come_decrement_ref_count(result_151, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value226 && right_value226 != __result_obj__) { right_value226 = come_decrement_ref_count(right_value226, (void*)0, (void*)0, 1, 0, 0); }
    return __result298__;
    if(buf_148) { come_call_finalizer(buffer_finalize,buf_148, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(result_151) { result_151 = come_decrement_ref_count(result_151, (void*)0, (void*)0, 0, 0, 0); }
}

struct optional$2charphbool* charp_read(char* file_name){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional240;
void* right_value228;
void* right_value229;
void* right_value230;
struct optional$2charphbool* __result299__;
struct _IO_FILE* f_153;
_Bool _if_conditional241;
void* right_value231;
void* right_value232;
void* right_value233;
struct optional$2charphbool* __result300__;
void* right_value234;
void* right_value235;
struct buffer* buf_154;
_Bool _while_condtional14;
int size_156;
_Bool _if_conditional242;
void* right_value236;
char* result_157;
int result2_158;
_Bool _if_conditional243;
void* right_value237;
void* right_value238;
void* right_value239;
struct optional$2charphbool* __result301__;
void* right_value240;
void* right_value241;
struct optional$2charphbool* __result302__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&f_153, 0, sizeof(struct _IO_FILE*));
memset(&buf_154, 0, sizeof(struct buffer*));
memset(&size_156, 0, sizeof(int));
memset(&result_157, 0, sizeof(char*));
memset(&result2_158, 0, sizeof(int));
    if(_if_conditional240=file_name==((void*)0),    _if_conditional240) {
        __result299__ = __result_obj__ = ((struct optional$2charphbool*)(right_value230=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value229=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2144))),(char*)come_increment_ref_count(((char*)(right_value228=__builtin_string("")))),(_Bool)0)));
        if(right_value228 && right_value228 != __result_obj__) { right_value228 = come_decrement_ref_count(right_value228, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value229 && right_value229 != __result_obj__) { right_value229 = come_decrement_ref_count(right_value229, (void*)0, (void*)0, 1, 0, 0); }
        return __result299__;
    }
    f_153=fopen(file_name,"r");
    if(_if_conditional241=f_153==((void*)0),    _if_conditional241) {
        __result300__ = __result_obj__ = ((struct optional$2charphbool*)(right_value233=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value232=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2150))),(char*)come_increment_ref_count(((char*)(right_value231=__builtin_string("")))),(_Bool)0)));
        if(right_value231 && right_value231 != __result_obj__) { right_value231 = come_decrement_ref_count(right_value231, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value232 && right_value232 != __result_obj__) { right_value232 = come_decrement_ref_count(right_value232, (void*)0, (void*)0, 1, 0, 0); }
        return __result300__;
    }
    buf_154=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value235=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value234=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 2153))))))));
    if(right_value234 && right_value234 != __result_obj__) { come_call_finalizer(buffer_finalize,right_value234, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value235 && right_value235 != __result_obj__) { come_call_finalizer(buffer_finalize,right_value235, (void*)0, (void*)0, 0, 1, 0, 0); }
    while(_while_condtional14=1,    _while_condtional14) {
        char buf2_155[8192];
        memset(&buf2_155, 0, sizeof(char)        *(8192)        );
        size_156=fread(buf2_155,1,8192,f_153);
        buffer_append(buf_154,buf2_155,size_156);
        if(_if_conditional242=size_156<8192,        _if_conditional242) {
            break;
        }
    }
    result_157=(char*)come_increment_ref_count(((char*)(right_value236=buffer_to_string(buf_154))));
    if(right_value236 && right_value236 != __result_obj__) { right_value236 = come_decrement_ref_count(right_value236, (void*)0, (void*)0, 1, 0, 0); }
    result2_158=fclose(f_153);
    if(_if_conditional243=result2_158<0,    _if_conditional243) {
        __result301__ = __result_obj__ = ((struct optional$2charphbool*)(right_value239=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value238=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2172))),(char*)come_increment_ref_count(((char*)(right_value237=__builtin_string("")))),(_Bool)0)));
        if(buf_154) { come_call_finalizer(buffer_finalize,buf_154, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(result_157) { result_157 = come_decrement_ref_count(result_157, (void*)0, (void*)0, 0, 0, 0); }
        if(right_value237 && right_value237 != __result_obj__) { right_value237 = come_decrement_ref_count(right_value237, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value238 && right_value238 != __result_obj__) { right_value238 = come_decrement_ref_count(right_value238, (void*)0, (void*)0, 1, 0, 0); }
        return __result301__;
    }
    __result302__ = __result_obj__ = ((struct optional$2charphbool*)(right_value241=optional$2charphbool_initialize((struct optional$2charphbool*)come_increment_ref_count(((struct optional$2charphbool*)(right_value240=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2175)))),(char*)come_increment_ref_count(result_157),(_Bool)1)));
    if(buf_154) { come_call_finalizer(buffer_finalize,buf_154, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(result_157) { result_157 = come_decrement_ref_count(result_157, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value240 && right_value240 != __result_obj__) { right_value240 = come_decrement_ref_count(right_value240, (void*)0, (void*)0, 1, 0, 0); }
    return __result302__;
    if(buf_154) { come_call_finalizer(buffer_finalize,buf_154, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(result_157) { result_157 = come_decrement_ref_count(result_157, (void*)0, (void*)0, 0, 0, 0); }
}

struct optional$2list$1charphphbool* FILE_readlines(struct _IO_FILE* f){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value242;
void* right_value243;
struct list$1charph* result_159;
_Bool _if_conditional244;
void* right_value244;
void* right_value245;
struct optional$2list$1charphphbool* __result304__;
_Bool _while_condtional15;
_Bool _if_conditional246;
void* right_value246;
void* right_value247;
void* right_value248;
struct optional$2list$1charphphbool* __result305__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_159, 0, sizeof(struct list$1charph*));
    result_159=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value243=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value242=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2.c", 2180))))))));
    if(right_value242 && right_value242 != __result_obj__) { come_call_finalizer(list$1charphp_finalize,right_value242, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value243 && right_value243 != __result_obj__) { come_call_finalizer(list$1charphp_finalize,right_value243, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(_if_conditional244=f==((void*)0),    _if_conditional244) {
        __result304__ = __result_obj__ = ((struct optional$2list$1charphphbool*)(right_value245=optional$2list$1charphphbool_initialize(((struct optional$2list$1charphphbool*)(right_value244=(struct optional$2list$1charphphbool*)come_calloc(1, sizeof(struct optional$2list$1charphphbool)*(1), "libcomelang2.c", 2183))),(struct list$1charph*)come_increment_ref_count(result_159),(_Bool)0)));
        if(result_159) { come_call_finalizer(list$1charphp_finalize,result_159, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value244 && right_value244 != __result_obj__) { right_value244 = come_decrement_ref_count(right_value244, (void*)0, (void*)0, 1, 0, 0); }
        return __result304__;
    }
    while(_while_condtional15=1,    _while_condtional15) {
        char buf_160[8192];
        memset(&buf_160, 0, sizeof(char)        *(8192)        );
        if(_if_conditional246=fgets(buf_160,8192,f)==((void*)0),        _if_conditional246) {
            break;
        }
        list$1charph_push_back(result_159,(char*)come_increment_ref_count(((char*)(right_value246=__builtin_string(buf_160)))));
        if(right_value246 && right_value246 != __result_obj__) { right_value246 = come_decrement_ref_count(right_value246, (void*)0, (void*)0, 1, 0, 0); }
    }
    __result305__ = __result_obj__ = ((struct optional$2list$1charphphbool*)(right_value248=optional$2list$1charphphbool_initialize((struct optional$2list$1charphphbool*)come_increment_ref_count(((struct optional$2list$1charphphbool*)(right_value247=(struct optional$2list$1charphphbool*)come_calloc(1, sizeof(struct optional$2list$1charphphbool)*(1), "libcomelang2.c", 2196)))),(struct list$1charph*)come_increment_ref_count(result_159),(_Bool)1)));
    if(result_159) { come_call_finalizer(list$1charphp_finalize,result_159, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value247 && right_value247 != __result_obj__) { right_value247 = come_decrement_ref_count(right_value247, (void*)0, (void*)0, 1, 0, 0); }
    return __result305__;
    if(result_159) { come_call_finalizer(list$1charphp_finalize,result_159, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct optional$2list$1charphphbool* optional$2list$1charphphbool_initialize(struct optional$2list$1charphphbool* self, struct list$1charph* v1, _Bool v2){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
struct list$1charph* __dec_obj20;
struct optional$2list$1charphphbool* __result303__;
memset(&__result_obj__, 0, sizeof(void*));
            __dec_obj20=self->v1;
            self->v1=(struct list$1charph*)come_increment_ref_count(v1);
            if(__dec_obj20) { come_call_finalizer(list$1charph_finalize,__dec_obj20, (void*)0, (void*)0, 0, 0, 0, 0); }
            self->v2=v2;
            __result303__ = __result_obj__ = self;
            if(self) { come_call_finalizer(optional$2list$1charphphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            if(v1) { come_call_finalizer(list$1charphp_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
            return __result303__;
            if(self) { come_call_finalizer(optional$2list$1charphphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            if(v1) { come_call_finalizer(list$1charphp_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list$1charph_finalize(struct list$1charph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static void optional$2list$1charphphboolp_finalize(struct optional$2list$1charphphbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional245;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional245=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional245) {
                    if(self->v1) { come_call_finalizer(list$1charphp_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
}

struct optional$2intbool* fopen_block(const char* path, const char* mode, void* parent, void (*block)(void*,struct _IO_FILE*)){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional247;
void* right_value249;
void* right_value250;
struct optional$2intbool* __result306__;
struct _IO_FILE* f_161;
_Bool _if_conditional248;
_Bool _if_conditional249;
void* right_value251;
void* right_value252;
struct optional$2intbool* __result307__;
void* right_value253;
void* right_value254;
struct optional$2intbool* __result308__;
void* right_value255;
void* right_value256;
struct optional$2intbool* __result309__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&f_161, 0, sizeof(struct _IO_FILE*));
    if(_if_conditional247=path==((void*)0)||mode==((void*)0),    _if_conditional247) {
        __result306__ = __result_obj__ = ((struct optional$2intbool*)(right_value250=optional$2intbool_initialize(((struct optional$2intbool*)(right_value249=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2202))),-1,(_Bool)0)));
        if(right_value249 && right_value249 != __result_obj__) { right_value249 = come_decrement_ref_count(right_value249, (void*)0, (void*)0, 1, 0, 0); }
        return __result306__;
    }
    f_161=fopen(path,mode);
    if(_if_conditional248=f_161,    _if_conditional248) {
        block(parent,f_161);
        if(_if_conditional249=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,        _if_conditional249) {
            fclose(f_161);
            __result307__ = __result_obj__ = ((struct optional$2intbool*)(right_value252=optional$2intbool_initialize((struct optional$2intbool*)come_increment_ref_count(((struct optional$2intbool*)(right_value251=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2210)))),0,(_Bool)1)));
            if(right_value251 && right_value251 != __result_obj__) { right_value251 = come_decrement_ref_count(right_value251, (void*)0, (void*)0, 1, 0, 0); }
            return __result307__;
        }
        fclose(f_161);
        __result308__ = __result_obj__ = ((struct optional$2intbool*)(right_value254=optional$2intbool_initialize((struct optional$2intbool*)come_increment_ref_count(((struct optional$2intbool*)(right_value253=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2215)))),0,(_Bool)1)));
        if(right_value253 && right_value253 != __result_obj__) { right_value253 = come_decrement_ref_count(right_value253, (void*)0, (void*)0, 1, 0, 0); }
        return __result308__;
    }
    __result309__ = __result_obj__ = ((struct optional$2intbool*)(right_value256=optional$2intbool_initialize(((struct optional$2intbool*)(right_value255=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2218))),-1,(_Bool)0)));
    if(right_value255 && right_value255 != __result_obj__) { right_value255 = come_decrement_ref_count(right_value255, (void*)0, (void*)0, 1, 0, 0); }
    return __result309__;
}

struct optional$2charphbool* charp_puts(char* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional250;
void* right_value257;
void* right_value258;
struct optional$2charphbool* __result310__;
void* right_value259;
void* right_value260;
void* right_value261;
struct optional$2charphbool* __result311__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional250=self==((void*)0),    _if_conditional250) {
        __result310__ = __result_obj__ = ((struct optional$2intbool*)(right_value258=optional$2intbool_initialize(((struct optional$2intbool*)(right_value257=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2227))),-1,(_Bool)0)));
        if(right_value257 && right_value257 != __result_obj__) { right_value257 = come_decrement_ref_count(right_value257, (void*)0, (void*)0, 1, 0, 0); }
        return __result310__;
    }
    puts(self);
    __result311__ = __result_obj__ = ((struct optional$2charphbool*)(right_value261=optional$2charphbool_initialize((struct optional$2charphbool*)come_increment_ref_count(((struct optional$2charphbool*)(right_value260=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2231)))),(char*)come_increment_ref_count(((char*)(right_value259=__builtin_string(self)))),(_Bool)1)));
    if(right_value259 && right_value259 != __result_obj__) { right_value259 = come_decrement_ref_count(right_value259, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value260 && right_value260 != __result_obj__) { right_value260 = come_decrement_ref_count(right_value260, (void*)0, (void*)0, 1, 0, 0); }
    return __result311__;
}

struct optional$2charphbool* charp_print(char* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional251;
void* right_value262;
void* right_value263;
struct optional$2charphbool* __result312__;
void* right_value264;
void* right_value265;
void* right_value266;
struct optional$2charphbool* __result313__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional251=self==((void*)0),    _if_conditional251) {
        __result312__ = __result_obj__ = ((struct optional$2intbool*)(right_value263=optional$2intbool_initialize(((struct optional$2intbool*)(right_value262=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2237))),-1,(_Bool)0)));
        if(right_value262 && right_value262 != __result_obj__) { right_value262 = come_decrement_ref_count(right_value262, (void*)0, (void*)0, 1, 0, 0); }
        return __result312__;
    }
    printf("%s",self);
    __result313__ = __result_obj__ = ((struct optional$2charphbool*)(right_value266=optional$2charphbool_initialize((struct optional$2charphbool*)come_increment_ref_count(((struct optional$2charphbool*)(right_value265=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2241)))),(char*)come_increment_ref_count(((char*)(right_value264=__builtin_string(self)))),(_Bool)1)));
    if(right_value264 && right_value264 != __result_obj__) { right_value264 = come_decrement_ref_count(right_value264, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value265 && right_value265 != __result_obj__) { right_value265 = come_decrement_ref_count(right_value265, (void*)0, (void*)0, 1, 0, 0); }
    return __result313__;
}

struct optional$2charphbool* string_printf(char* self, ...){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional252;
void* right_value267;
void* right_value268;
void* right_value269;
struct optional$2charphbool* __result314__;
char* msg2_162;
va_list args_163;
void* right_value270;
void* right_value271;
void* right_value272;
struct optional$2charphbool* __result315__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&msg2_162, 0, sizeof(char*));
memset(&args_163, 0, sizeof(va_list));
    if(_if_conditional252=self==((void*)0),    _if_conditional252) {
        __result314__ = __result_obj__ = ((struct optional$2charphbool*)(right_value269=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value268=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2248))),(char*)come_increment_ref_count(((char*)(right_value267=__builtin_string("")))),(_Bool)0)));
        if(right_value267 && right_value267 != __result_obj__) { right_value267 = come_decrement_ref_count(right_value267, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value268 && right_value268 != __result_obj__) { right_value268 = come_decrement_ref_count(right_value268, (void*)0, (void*)0, 1, 0, 0); }
        return __result314__;
    }
    __builtin_va_start(args_163,self);
    vasprintf(&msg2_162,self,args_163);
    __builtin_va_end(args_163);
    printf("%s",msg2_162);
    free(msg2_162);
    __result315__ = __result_obj__ = ((struct optional$2charphbool*)(right_value272=optional$2charphbool_initialize((struct optional$2charphbool*)come_increment_ref_count(((struct optional$2charphbool*)(right_value271=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2261)))),(char*)come_increment_ref_count(((char*)(right_value270=__builtin_string(self)))),(_Bool)1)));
    if((&args_163)) { come_call_finalizer(va_list_finalize,(&args_163), (void*)0, (void*)0, 1, 0, 0, 0); }
    if(right_value270 && right_value270 != __result_obj__) { right_value270 = come_decrement_ref_count(right_value270, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value271 && right_value271 != __result_obj__) { right_value271 = come_decrement_ref_count(right_value271, (void*)0, (void*)0, 1, 0, 0); }
    return __result315__;
    if((&args_163)) { come_call_finalizer(va_list_finalize,(&args_163), (void*)0, (void*)0, 1, 0, 0, 0); }
}

struct optional$2charphbool* charp_printf(char* self, ...){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional253;
void* right_value273;
void* right_value274;
void* right_value275;
struct optional$2charphbool* __result316__;
char* msg2_164;
va_list args_165;
void* right_value276;
void* right_value277;
void* right_value278;
struct optional$2charphbool* __result317__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&msg2_164, 0, sizeof(char*));
memset(&args_165, 0, sizeof(va_list));
    if(_if_conditional253=self==((void*)0),    _if_conditional253) {
        __result316__ = __result_obj__ = ((struct optional$2charphbool*)(right_value275=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value274=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2267))),(char*)come_increment_ref_count(((char*)(right_value273=__builtin_string("")))),(_Bool)0)));
        if(right_value273 && right_value273 != __result_obj__) { right_value273 = come_decrement_ref_count(right_value273, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value274 && right_value274 != __result_obj__) { right_value274 = come_decrement_ref_count(right_value274, (void*)0, (void*)0, 1, 0, 0); }
        return __result316__;
    }
    __builtin_va_start(args_165,self);
    vasprintf(&msg2_164,self,args_165);
    __builtin_va_end(args_165);
    printf("%s",msg2_164);
    free(msg2_164);
    __result317__ = __result_obj__ = ((struct optional$2charphbool*)(right_value278=optional$2charphbool_initialize((struct optional$2charphbool*)come_increment_ref_count(((struct optional$2charphbool*)(right_value277=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2280)))),(char*)come_increment_ref_count(((char*)(right_value276=__builtin_string(self)))),(_Bool)1)));
    if((&args_165)) { come_call_finalizer(va_list_finalize,(&args_165), (void*)0, (void*)0, 1, 0, 0, 0); }
    if(right_value276 && right_value276 != __result_obj__) { right_value276 = come_decrement_ref_count(right_value276, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value277 && right_value277 != __result_obj__) { right_value277 = come_decrement_ref_count(right_value277, (void*)0, (void*)0, 1, 0, 0); }
    return __result317__;
    if((&args_165)) { come_call_finalizer(va_list_finalize,(&args_165), (void*)0, (void*)0, 1, 0, 0, 0); }
}

int int_printf(int self, char* msg){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
int __result318__;
memset(&__result_obj__, 0, sizeof(void*));
    printf(msg,self);
    __result318__ = self;
    return __result318__;
}

struct optional$2charphbool* string_puts(char* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional254;
void* right_value279;
void* right_value280;
void* right_value281;
struct optional$2charphbool* __result319__;
void* right_value282;
void* right_value283;
void* right_value284;
struct optional$2charphbool* __result320__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional254=self==((void*)0),    _if_conditional254) {
        __result319__ = __result_obj__ = ((struct optional$2charphbool*)(right_value281=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value280=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2293))),(char*)come_increment_ref_count(((char*)(right_value279=__builtin_string("")))),(_Bool)0)));
        if(right_value279 && right_value279 != __result_obj__) { right_value279 = come_decrement_ref_count(right_value279, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value280 && right_value280 != __result_obj__) { right_value280 = come_decrement_ref_count(right_value280, (void*)0, (void*)0, 1, 0, 0); }
        return __result319__;
    }
    puts(self);
    __result320__ = __result_obj__ = ((struct optional$2charphbool*)(right_value284=optional$2charphbool_initialize((struct optional$2charphbool*)come_increment_ref_count(((struct optional$2charphbool*)(right_value283=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2297)))),(char*)come_increment_ref_count(((char*)(right_value282=__builtin_string(self)))),(_Bool)1)));
    if(right_value282 && right_value282 != __result_obj__) { right_value282 = come_decrement_ref_count(right_value282, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value283 && right_value283 != __result_obj__) { right_value283 = come_decrement_ref_count(right_value283, (void*)0, (void*)0, 1, 0, 0); }
    return __result320__;
}

void int_times(int self, void* parent, void (*block)(void*,int)){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
int i_166;
_Bool _for_condtionalA12;
_Bool _if_conditional255;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_166, 0, sizeof(int));
    for(
    i_166=0 ,    0;    _for_condtionalA12=    i_166<self ,    _for_condtionalA12;    i_166++ ,    0    ){
        block(parent,i_166);
        if(_if_conditional255=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,        _if_conditional255) {
            return;
        }
    }
}

