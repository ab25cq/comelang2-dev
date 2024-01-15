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
typedef long int ptrdiff_t;
struct anonymous_typeX21
{
    long long __max_align_ll;
    long double __max_align_ld;
};
typedef struct anonymous_typeX21 max_align_t;
struct mallinfo
{
    int arena;
    int ordblks;
    int smblks;
    int hblks;
    int hblkhd;
    int usmblks;
    int fsmblks;
    int uordblks;
    int fordblks;
    int keepcost;
};
struct mallinfo2
{
    long int arena;
    long int ordblks;
    long int smblks;
    long int hblks;
    long int hblkhd;
    long int usmblks;
    long int fsmblks;
    long int uordblks;
    long int fordblks;
    long int keepcost;
};
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
char* gComeStackFrameSName[10];
int gComeStackFrameSLine[10];
int gNumComeStackFrame=0;
struct buffer* gComeStackFrameBuffer=((void*)0);
static _Bool gComeDebugLib=(_Bool)0;
struct sMemHeader
{
    void* mem;
    char* caller_sname[10];
    int caller_sline[10];
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

void* alloca(long int __size);

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

void* malloc(long int __size);

void* calloc(long int __nmemb, long int __size);

void* realloc(void* __ptr, long int __size);

void* reallocarray(void* __ptr, long int __nmemb, long int __size);

void free(void* __ptr);

void* memalign(long int __alignment, long int __size);

void* valloc(long int __size);

void* pvalloc(long int __size);

struct mallinfo mallinfo();

struct mallinfo2 mallinfo2();

int mallopt(int __param, int __val);

int malloc_trim(long int __pad);

long int malloc_usable_size(void* __ptr);

void malloc_stats();

int malloc_info(int __options, struct _IO_FILE* __fp);

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
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned short int __result1__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result1__ = ((unsigned short int)((((__bsx)>>8)&255)|(((__bsx)&255)<<8)));
    return __result1__;
}
static inline unsigned int __bswap_32(unsigned int __bsx){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int __result2__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result2__ = ((((__bsx)&4278190080)>>24)|(((__bsx)&16711680)>>8)|(((__bsx)&65280)<<8)|(((__bsx)&255)<<24));
    return __result2__;
}
static inline unsigned long int __bswap_64(unsigned long int __bsx){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned long int __result3__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result3__ = ((((__bsx)&18374686479671623680)>>56)|(((__bsx)&71776119061217280)>>40)|(((__bsx)&280375465082880)>>24)|(((__bsx)&1095216660480)>>8)|(((__bsx)&4278190080)<<8)|(((__bsx)&16711680)<<24)|(((__bsx)&65280)<<40)|(((__bsx)&255)<<56));
    return __result3__;
}
static inline unsigned short int __uint16_identity(unsigned short int __x){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned short int __result4__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result4__ = __x;
    return __result4__;
}
static inline unsigned int __uint32_identity(unsigned int __x){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int __result5__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result5__ = __x;
    return __result5__;
}
static inline unsigned long int __uint64_identity(unsigned long int __x){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned long int __result6__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result6__ = __x;
    return __result6__;
}
static inline _Bool die(char* msg){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result7__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
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
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value0;
struct smart_pointer$1char* result_0;
void* right_value1;
struct buffer* __dec_obj1;
struct smart_pointer$1char* __result8__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value0, 0, sizeof(void*));
memset(&result_0, 0, sizeof(struct smart_pointer$1char*));
memset(&right_value1, 0, sizeof(void*));
    result_0=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value0=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 2001))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value0);
    if(right_value0 && right_value0 != __result_obj__ && !__freed_obj__) { come_call_finalizer(smart_pointer$1charp_finalize,right_value0, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value0;
    __freed_obj__ = 0;
    __dec_obj1=result_0->memory;
    result_0->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value1=buffer_clone(self))));
    if(__dec_obj1) { come_call_finalizer(buffer_finalize,__dec_obj1, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value1);
    if(right_value1 && right_value1 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value1, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value1;
    __freed_obj__ = 0;
    result_0->p=result_0->memory->buf;
    __result8__ = __result_obj__ = result_0;
    if(result_0 && !__freed_obj__) { come_call_finalizer(smart_pointer$1charp_finalize,result_0, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result8__;
    if(result_0 && !__freed_obj__) { come_call_finalizer(smart_pointer$1charp_finalize,result_0, (void*)0, (void*)0, 0, 0, 0, 0); }
}
static inline struct smart_pointer$1char* buffer_to_char_pointer(struct buffer* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value2;
struct smart_pointer$1char* result_1;
void* right_value3;
struct buffer* __dec_obj2;
struct smart_pointer$1char* __result9__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value2, 0, sizeof(void*));
memset(&result_1, 0, sizeof(struct smart_pointer$1char*));
memset(&right_value3, 0, sizeof(void*));
    result_1=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value2=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 2011))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value2);
    if(right_value2 && right_value2 != __result_obj__ && !__freed_obj__) { come_call_finalizer(smart_pointer$1charp_finalize,right_value2, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value2;
    __freed_obj__ = 0;
    __dec_obj2=result_1->memory;
    result_1->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value3=buffer_clone(self))));
    if(__dec_obj2) { come_call_finalizer(buffer_finalize,__dec_obj2, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value3);
    if(right_value3 && right_value3 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value3, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value3;
    __freed_obj__ = 0;
    result_1->p=(char*)result_1->memory->buf;
    __result9__ = __result_obj__ = result_1;
    if(result_1 && !__freed_obj__) { come_call_finalizer(smart_pointer$1charp_finalize,result_1, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result9__;
    if(result_1 && !__freed_obj__) { come_call_finalizer(smart_pointer$1charp_finalize,result_1, (void*)0, (void*)0, 0, 0, 0, 0); }
}
static inline struct smart_pointer$1short* buffer_to_short_pointer(struct buffer* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value4;
struct smart_pointer$1short* result_2;
void* right_value5;
struct buffer* __dec_obj3;
struct smart_pointer$1short* __result10__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value4, 0, sizeof(void*));
memset(&result_2, 0, sizeof(struct smart_pointer$1short*));
memset(&right_value5, 0, sizeof(void*));
    result_2=(struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value4=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang2.h", 2021))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value4);
    if(right_value4 && right_value4 != __result_obj__ && !__freed_obj__) { come_call_finalizer(smart_pointer$1shortp_finalize,right_value4, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value4;
    __freed_obj__ = 0;
    __dec_obj3=result_2->memory;
    result_2->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value5=buffer_clone(self))));
    if(__dec_obj3) { come_call_finalizer(buffer_finalize,__dec_obj3, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value5);
    if(right_value5 && right_value5 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value5, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value5;
    __freed_obj__ = 0;
    result_2->p=(short short*)result_2->memory->buf;
    __result10__ = __result_obj__ = result_2;
    if(result_2 && !__freed_obj__) { come_call_finalizer(smart_pointer$1shortp_finalize,result_2, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result10__;
    if(result_2 && !__freed_obj__) { come_call_finalizer(smart_pointer$1shortp_finalize,result_2, (void*)0, (void*)0, 0, 0, 0, 0); }
}
static inline struct smart_pointer$1int* buffer_to_int_pointer(struct buffer* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value6;
struct smart_pointer$1int* result_3;
void* right_value7;
struct buffer* __dec_obj4;
struct smart_pointer$1int* __result11__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value6, 0, sizeof(void*));
memset(&result_3, 0, sizeof(struct smart_pointer$1int*));
memset(&right_value7, 0, sizeof(void*));
    result_3=(struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value6=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang2.h", 2031))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value6);
    if(right_value6 && right_value6 != __result_obj__ && !__freed_obj__) { come_call_finalizer(smart_pointer$1intp_finalize,right_value6, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value6;
    __freed_obj__ = 0;
    __dec_obj4=result_3->memory;
    result_3->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value7=buffer_clone(self))));
    if(__dec_obj4) { come_call_finalizer(buffer_finalize,__dec_obj4, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value7);
    if(right_value7 && right_value7 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value7, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value7;
    __freed_obj__ = 0;
    result_3->p=(int*)result_3->memory->buf;
    __result11__ = __result_obj__ = result_3;
    if(result_3 && !__freed_obj__) { come_call_finalizer(smart_pointer$1intp_finalize,result_3, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result11__;
    if(result_3 && !__freed_obj__) { come_call_finalizer(smart_pointer$1intp_finalize,result_3, (void*)0, (void*)0, 0, 0, 0, 0); }
}
static inline struct smart_pointer$1long* buffer_to_long_pointer(struct buffer* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value8;
struct smart_pointer$1long* result_4;
void* right_value9;
struct buffer* __dec_obj5;
struct smart_pointer$1long* __result12__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value8, 0, sizeof(void*));
memset(&result_4, 0, sizeof(struct smart_pointer$1long*));
memset(&right_value9, 0, sizeof(void*));
    result_4=(struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value8=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang2.h", 2041))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value8);
    if(right_value8 && right_value8 != __result_obj__ && !__freed_obj__) { come_call_finalizer(smart_pointer$1longp_finalize,right_value8, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value8;
    __freed_obj__ = 0;
    __dec_obj5=result_4->memory;
    result_4->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value9=buffer_clone(self))));
    if(__dec_obj5) { come_call_finalizer(buffer_finalize,__dec_obj5, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value9);
    if(right_value9 && right_value9 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value9, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value9;
    __freed_obj__ = 0;
    result_4->p=(long*)result_4->memory->buf;
    __result12__ = __result_obj__ = result_4;
    if(result_4 && !__freed_obj__) { come_call_finalizer(smart_pointer$1longp_finalize,result_4, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result12__;
    if(result_4 && !__freed_obj__) { come_call_finalizer(smart_pointer$1longp_finalize,result_4, (void*)0, (void*)0, 0, 0, 0, 0); }
}

// body function








static void smart_pointer$1charp_finalize(struct smart_pointer$1char* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional1;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional1=self!=((void*)0)&&self->memory!=((void*)0),        _if_conditional1) {
            if(self->memory && !__freed_obj__) { come_call_finalizer(buffer_finalize,self->memory, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
}



static void smart_pointer$1shortp_finalize(struct smart_pointer$1short* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional2;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional2=self!=((void*)0)&&self->memory!=((void*)0),        _if_conditional2) {
            if(self->memory && !__freed_obj__) { come_call_finalizer(buffer_finalize,self->memory, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
}


static void smart_pointer$1intp_finalize(struct smart_pointer$1int* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional3;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional3=self!=((void*)0)&&self->memory!=((void*)0),        _if_conditional3) {
            if(self->memory && !__freed_obj__) { come_call_finalizer(buffer_finalize,self->memory, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
}


static void smart_pointer$1longp_finalize(struct smart_pointer$1long* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional4;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional4=self!=((void*)0)&&self->memory!=((void*)0),        _if_conditional4) {
            if(self->memory && !__freed_obj__) { come_call_finalizer(buffer_finalize,self->memory, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
}

void come_push_stackframe(char* sname, int sline){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional5;
int i_5;
_Bool _for_condtionalA1;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
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
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional6;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional6=gNumComeStackFrame>0,    _if_conditional6) {
        gNumComeStackFrame--;
    }
}

void come_save_stackframe(char* sname, int sline){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional7;
void* right_value10;
int i_6;
_Bool _for_condtionalA2;
void* right_value11;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value10, 0, sizeof(void*));
memset(&i_6, 0, sizeof(int));
memset(&right_value11, 0, sizeof(void*));
    if(_if_conditional7=gComeStackFrameBuffer,    _if_conditional7) {
        buffer_reset(gComeStackFrameBuffer);
        buffer_append_str(gComeStackFrameBuffer,((char*)(right_value10=xsprintf("%s %d\n",sname,sline))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value10);
        if(right_value10 && right_value10 != __result_obj__ && !__freed_obj__) { right_value10 = come_decrement_ref_count(right_value10, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value10;
        __freed_obj__ = 0;
        for(
        i_6=gNumComeStackFrame-2 ,        0;        _for_condtionalA2=        i_6>=0 ,        _for_condtionalA2;        i_6-- ,        0        ){
            buffer_append_str(gComeStackFrameBuffer,((char*)(right_value11=xsprintf("%s %d\n",gComeStackFrameSName[i_6],gComeStackFrameSLine[i_6]))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value11);
            if(right_value11 && right_value11 != __result_obj__ && !__freed_obj__) { right_value11 = come_decrement_ref_count(right_value11, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value11;
            __freed_obj__ = 0;
        }
    }
}

void exception_stackframe(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value12;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value12, 0, sizeof(void*));
    printf("%s",((char*)(right_value12=buffer_to_string(gComeStackFrameBuffer))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value12);
    if(right_value12 && right_value12 != __result_obj__ && !__freed_obj__) { right_value12 = come_decrement_ref_count(right_value12, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value12;
    __freed_obj__ = 0;
}

void stackframe(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int i_7;
_Bool _for_condtionalA3;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
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
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value13;
char* __result13__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value13, 0, sizeof(void*));
    __result13__ = __result_obj__ = ((char*)(right_value13=buffer_to_string(gComeStackFrameBuffer)));
    return __result13__;
}

void* come_null_check(void* mem, char* sname, int sline){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional8;
void* __result14__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
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
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional9;
_Bool _if_conditional10;
_Bool _if_conditional11;
void* __result15__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
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
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional12;
_Bool _if_conditional13;
_Bool __result16__;
_Bool __result17__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
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
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result18__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result18__ = self;
    return __result18__;
}

int int_catch(int self, void* parent, void (*block)(void*)){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional14;
_Bool _if_conditional15;
int __result19__;
int __result20__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
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
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional16;
_Bool _if_conditional17;
int __result21__;
int __result22__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
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
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result23__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result23__ = self;
    return __result23__;
}

int int_except(int self, void* parent, void (*block)(void*)){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional18;
_Bool _if_conditional19;
int __result24__;
int __result25__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
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
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional20;
_Bool _if_conditional21;
_Bool __result26__;
_Bool __result27__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
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
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional22;
_Bool _if_conditional23;
_Bool __result28__;
_Bool __result29__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
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
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional24;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
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
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value14;
void* right_value15;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value14, 0, sizeof(void*));
memset(&right_value15, 0, sizeof(void*));
    gComeDebugLib=come_debug;
    gSizeMemHeaders=1024;
    gMemHeaderTable=calloc(1,sizeof(struct sMemHeader)*gSizeMemHeaders);
    gNumMemHeaders=0;
    gComeStackFrameBuffer=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value15=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value14=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 231))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value14);
    if(right_value14 && right_value14 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value14, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value14;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value15);
    if(right_value15 && right_value15 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value15, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value15;
    __freed_obj__ = 0;
}

void come_heap_final(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(gComeStackFrameBuffer && !__freed_obj__) { come_call_finalizer(buffer_finalize,gComeStackFrameBuffer, (void*)0, (void*)0, 0, 0, 0, 0); }
    free(gMemHeaderTable);
}

static void come_mem_header_rehash(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
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
memset(&__freed_obj__, 0, sizeof(_Bool));
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
            *it2_12=*it_10;
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
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
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
memset(&__freed_obj__, 0, sizeof(_Bool));
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
    come_push_stackframe(sname,sline);
    memcpy(it_15->caller_sname,gComeStackFrameSName,sizeof(char*)*10);
    memcpy(it_15->caller_sline,gComeStackFrameSLine,sizeof(int)*10);
    come_pop_stackframe();
    gNumMemHeaders++;
    __result30__ = __result_obj__ = result_13;
    return __result30__;
}

static void come_free_mem_of_heap_pool(char* mem){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional33;
long int key_16;
struct sMemHeader* it_17;
_Bool _while_condtional4;
_Bool _if_conditional34;
_Bool _if_conditional35;
_Bool _if_conditional36;
_Bool _if_conditional37;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
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
        memset(it_17,0,sizeof(struct sMemHeader));
        free(mem);
        gNumMemHeaders--;
    }
}

static _Bool is_valid_object(char* mem){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional38;
char* mem2_18;
long int key_19;
struct sMemHeader* it_20;
_Bool _while_condtional5;
_Bool _if_conditional39;
_Bool __result31__;
_Bool _if_conditional40;
_Bool __result32__;
_Bool _if_conditional41;
_Bool _if_conditional42;
_Bool __result33__;
_Bool __result34__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&mem2_18, 0, sizeof(char*));
memset(&key_19, 0, sizeof(long int));
memset(&it_20, 0, sizeof(struct sMemHeader*));
    if(_if_conditional38=mem,    _if_conditional38) {
        mem2_18=mem-sizeof(long int)-sizeof(long int);
        key_19=(long int)mem2_18%gSizeMemHeaders;
        it_20=gMemHeaderTable+key_19;
        while(_while_condtional5=(_Bool)1,        _while_condtional5) {
            if(_if_conditional39=it_20->mem==((void*)0),            _if_conditional39) {
                __result31__ = (_Bool)0;
                return __result31__;
            }
            else {
                if(_if_conditional40=it_20->mem==mem2_18,                _if_conditional40) {
                    __result32__ = (_Bool)1;
                    return __result32__;
                }
                else {
                    it_20++;
                    if(_if_conditional41=it_20==gMemHeaderTable+gSizeMemHeaders,                    _if_conditional41) {
                        it_20=gMemHeaderTable;
                    }
                    else {
                        if(_if_conditional42=it_20==gMemHeaderTable+key_19,                        _if_conditional42) {
                            __result33__ = (_Bool)0;
                            return __result33__;
                        }
                    }
                }
            }
        }
    }
    __result34__ = (_Bool)0;
    return __result34__;
}

void* come_calloc(long int count, long int size, char* sname, int sline){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* mem_21;
long int* ref_count_22;
long int* size2_23;
void* __result35__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&mem_21, 0, sizeof(char*));
memset(&ref_count_22, 0, sizeof(long int*));
memset(&size2_23, 0, sizeof(long int*));
    mem_21=come_alloc_mem_from_heap_pool(sizeof(long int)+sizeof(long int)+count*size,sname,sline);
    ref_count_22=(long int*)mem_21;
    *ref_count_22=0;
    size2_23=(long int*)(mem_21+sizeof(long int));
    *size2_23=size*count+sizeof(long int)+sizeof(long int);
    __result35__ = __result_obj__ = mem_21+sizeof(long int)+sizeof(long int);
    return __result35__;
}

void come_free_object(void* mem){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional43;
long int* ref_count_24;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&ref_count_24, 0, sizeof(long int*));
    if(_if_conditional43=mem==((void*)0),    _if_conditional43) {
        return;
    }
    ref_count_24=(long int*)((char*)mem-sizeof(long int)-sizeof(long int));
    come_free_mem_of_heap_pool((char*)ref_count_24);
}

void* come_memdup(void* block, char* sname, int sline){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional44;
void* __result36__;
char* mem_25;
long int* size_p_26;
long int size_27;
void* result_28;
void* __result37__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&mem_25, 0, sizeof(char*));
memset(&size_p_26, 0, sizeof(long int*));
memset(&size_27, 0, sizeof(long int));
memset(&result_28, 0, sizeof(void*));
    if(_if_conditional44=!block,    _if_conditional44) {
        __result36__ = __result_obj__ = ((void*)0);
        return __result36__;
    }
    mem_25=(char*)block-sizeof(long int)-sizeof(long int);
    size_p_26=(long int*)(mem_25+sizeof(long int));
    size_27=*size_p_26-sizeof(long int)-sizeof(long int);
    result_28=come_calloc(1,size_27,sname,sline);
    memcpy(result_28,block,size_27);
    __result37__ = __result_obj__ = result_28;
    return __result37__;
}

void* come_increment_ref_count(void* mem){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional45;
void* __result38__;
long int* ref_count_29;
void* __result39__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&ref_count_29, 0, sizeof(long int*));
    if(_if_conditional45=mem==((void*)0),    _if_conditional45) {
        __result38__ = __result_obj__ = mem;
        return __result38__;
    }
    ref_count_29=(long int*)((char*)mem-sizeof(long int)-sizeof(long int));
    (*ref_count_29)++;
    __result39__ = __result_obj__ = mem;
    return __result39__;
}

void* come_print_ref_count(void* mem){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional46;
void* __result40__;
long int* ref_count_30;
void* __result41__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&ref_count_30, 0, sizeof(long int*));
    if(_if_conditional46=mem==((void*)0),    _if_conditional46) {
        __result40__ = __result_obj__ = mem;
        return __result40__;
    }
    ref_count_30=(long int*)((char*)mem-sizeof(long int)-sizeof(long int));
    printf("ref_count %ld\n",*ref_count_30);
    __result41__ = __result_obj__ = mem;
    return __result41__;
}

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional47;
void* __result42__;
long int* ref_count_31;
_Bool _if_conditional48;
long int count_32;
_Bool _if_conditional49;
_Bool _if_conditional50;
void (*finalizer_33)(void*);
void* __result43__;
void* __result44__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&ref_count_31, 0, sizeof(long int*));
memset(&count_32, 0, sizeof(long int));
memset(&finalizer_33, 0, sizeof(void (*)(void*)));
    if(_if_conditional47=mem==((void*)0),    _if_conditional47) {
        __result42__ = __result_obj__ = ((void*)0);
        return __result42__;
    }
    ref_count_31=(long int*)((char*)mem-sizeof(long int)-sizeof(long int));
    if(_if_conditional48=!no_decrement,    _if_conditional48) {
        (*ref_count_31)--;
    }
    count_32=*ref_count_31;
    if(_if_conditional49=!no_free&&(count_32<=0||force_delete_),    _if_conditional49) {
        if(_if_conditional50=protocol_obj&&protocol_fun,        _if_conditional50) {
            finalizer_33=protocol_fun;
            finalizer_33(protocol_obj);
            come_free_object(protocol_obj);
        }
        come_free_object(mem);
        __result43__ = __result_obj__ = ((void*)0);
        return __result43__;
    }
    __result44__ = __result_obj__ = mem;
    return __result44__;
}

void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional51;
_Bool _if_conditional52;
_Bool _if_conditional53;
_Bool _if_conditional54;
_Bool _if_conditional55;
void (*finalizer_34)(void*);
void (*finalizer_35)(void*);
long int* ref_count_36;
_Bool _if_conditional56;
long int count_37;
_Bool _if_conditional57;
_Bool _if_conditional58;
_Bool _if_conditional59;
void (*finalizer_38)(void*);
_Bool _if_conditional60;
void (*finalizer_39)(void*);
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&finalizer_34, 0, sizeof(void (*)(void*)));
memset(&finalizer_35, 0, sizeof(void (*)(void*)));
memset(&ref_count_36, 0, sizeof(long int*));
memset(&count_37, 0, sizeof(long int));
memset(&finalizer_38, 0, sizeof(void (*)(void*)));
memset(&finalizer_39, 0, sizeof(void (*)(void*)));
    if(_if_conditional51=mem==((void*)0),    _if_conditional51) {
        return;
    }
    if(_if_conditional52=!is_valid_object(mem)&&!call_finalizer_only,    _if_conditional52) {
        return;
    }
    if(_if_conditional53=call_finalizer_only,    _if_conditional53) {
        if(_if_conditional54=fun,        _if_conditional54) {
            if(_if_conditional55=protocol_obj&&protocol_fun,            _if_conditional55) {
                finalizer_34=protocol_fun;
                finalizer_34(protocol_obj);
            }
            finalizer_35=fun;
            finalizer_35(mem);
        }
    }
    else {
        ref_count_36=(long int*)((char*)mem-sizeof(long int)-sizeof(long int));
        if(_if_conditional56=!no_decrement,        _if_conditional56) {
            (*ref_count_36)--;
        }
        count_37=*ref_count_36;
        if(_if_conditional57=!no_free&&(count_37<=0||force_delete_),        _if_conditional57) {
            if(_if_conditional58=mem,            _if_conditional58) {
                if(_if_conditional59=protocol_obj&&protocol_fun,                _if_conditional59) {
                    finalizer_38=protocol_fun;
                    finalizer_38(protocol_obj);
                    come_free_object(protocol_obj);
                }
                if(_if_conditional60=fun,                _if_conditional60) {
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
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional61;
char* __result45__;
int len_40;
void* right_value16;
char* result_41;
char* __result46__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&len_40, 0, sizeof(int));
memset(&right_value16, 0, sizeof(void*));
memset(&result_41, 0, sizeof(char*));
    if(_if_conditional61=str==((void*)0),    _if_conditional61) {
        __result45__ = __result_obj__ = ((void*)0);
        return __result45__;
    }
    len_40=strlen(str)+1;
    result_41=(char*)come_increment_ref_count(((char*)(right_value16=(char*)come_calloc(1, sizeof(char)*(1*(len_40)), "libcomelang2.c", 577))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value16);
    if(right_value16 && right_value16 != __result_obj__ && !__freed_obj__) { right_value16 = come_decrement_ref_count(right_value16, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value16;
    __freed_obj__ = 0;
    strncpy(result_41,str,len_40);
    __result46__ = __result_obj__ = result_41;
    if(result_41 && !__freed_obj__) { result_41 = come_decrement_ref_count(result_41, (void*)0, (void*)0, 0, 1, 0); }
    return __result46__;
    if(result_41 && !__freed_obj__) { result_41 = come_decrement_ref_count(result_41, (void*)0, (void*)0, 0, 0, 0); }
}

_Bool come_is_contained_element(void** array, int len, void* element){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool found_42;
int i_43;
_Bool _for_condtionalA4;
_Bool _if_conditional62;
_Bool __result47__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&found_42, 0, sizeof(_Bool));
memset(&i_43, 0, sizeof(int));
    found_42=(_Bool)0;
    for(
    i_43=0 ,    0;    _for_condtionalA4=    i_43<len ,    _for_condtionalA4;    i_43++ ,    0    ){
        if(_if_conditional62=array[i_43]==element,        _if_conditional62) {
            found_42=(_Bool)1;
            break;
        }
    }
    __result47__ = found_42;
    return __result47__;
}

struct buffer* buffer_initialize(struct buffer* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value17;
char* __dec_obj6;
struct buffer* __result48__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value17, 0, sizeof(void*));
    self->size=128;
    __dec_obj6=self->buf;
    self->buf=(char*)come_increment_ref_count(((char*)(right_value17=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang2.c", 602))));
    if(__dec_obj6) { __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value17);
    if(right_value17 && right_value17 != __result_obj__ && !__freed_obj__) { right_value17 = come_decrement_ref_count(right_value17, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value17;
    __freed_obj__ = 0;
    self->buf[0]=0;
    self->len=0;
    __result48__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(buffer_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result48__;
    if(self && !__freed_obj__) { come_call_finalizer(buffer_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

void buffer_finalize(struct buffer* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional63;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional63=self&&self->buf,    _if_conditional63) {
        if(self->buf && !__freed_obj__) { self->buf = come_decrement_ref_count(self->buf, (void*)0, (void*)0, 0, 0, 0); }
    }
}

void buffer_force_finalize(struct buffer* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional64;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional64=self&&self->buf,    _if_conditional64) {
        if(self->buf && !__freed_obj__) { self->buf = come_decrement_ref_count(self->buf, (void*)0, (void*)0, 0, 0, 0); }
    }
}

struct buffer* buffer_clone(struct buffer* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional65;
struct buffer* __result49__;
void* right_value18;
struct buffer* result_44;
void* right_value19;
char* __dec_obj7;
struct buffer* __result50__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value18, 0, sizeof(void*));
memset(&result_44, 0, sizeof(struct buffer*));
memset(&right_value19, 0, sizeof(void*));
    if(_if_conditional65=self==((void*)0),    _if_conditional65) {
        __result49__ = __result_obj__ = ((void*)0);
        return __result49__;
    }
    result_44=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value18=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 624))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value18);
    if(right_value18 && right_value18 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value18, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value18;
    __freed_obj__ = 0;
    result_44->size=self->size;
    __dec_obj7=result_44->buf;
    result_44->buf=(char*)come_increment_ref_count(((char*)(right_value19=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang2.c", 627))));
    if(__dec_obj7) { __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value19);
    if(right_value19 && right_value19 != __result_obj__ && !__freed_obj__) { right_value19 = come_decrement_ref_count(right_value19, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value19;
    __freed_obj__ = 0;
    result_44->len=self->len;
    memcpy(result_44->buf,self->buf,self->len);
    __result50__ = __result_obj__ = result_44;
    if(result_44 && !__freed_obj__) { come_call_finalizer(buffer_finalize,result_44, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result50__;
    if(result_44 && !__freed_obj__) { come_call_finalizer(buffer_finalize,result_44, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int buffer_length(struct buffer* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional66;
int __result51__;
int __result52__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional66=self==((void*)0),    _if_conditional66) {
        __result51__ = 0;
        return __result51__;
    }
    __result52__ = self->len;
    return __result52__;
}

void buffer_reset(struct buffer* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional67;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional67=self==((void*)0),    _if_conditional67) {
        return;
    }
    self->buf[0]=0;
    self->len=0;
}

void buffer_trim(struct buffer* self, int len){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional68;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional68=self==((void*)0),    _if_conditional68) {
        return;
    }
    self->len-=len;
    self->buf[self->len]=0;
}

struct buffer* buffer_append(struct buffer* self, char* mem, long int size){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional69;
struct buffer* __result53__;
_Bool _if_conditional70;
void* right_value20;
char* old_buf_45;
int old_len_46;
int new_size_47;
void* right_value21;
char* __dec_obj8;
struct buffer* __result54__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value20, 0, sizeof(void*));
memset(&old_buf_45, 0, sizeof(char*));
memset(&old_len_46, 0, sizeof(int));
memset(&new_size_47, 0, sizeof(int));
memset(&right_value21, 0, sizeof(void*));
    if(_if_conditional69=self==((void*)0)||mem==((void*)0),    _if_conditional69) {
        __result53__ = __result_obj__ = self;
        return __result53__;
    }
    if(_if_conditional70=self->len+size+1+1>=self->size,    _if_conditional70) {
        old_buf_45=(char*)come_increment_ref_count(((char*)(right_value20=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang2.c", 666))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value20);
        if(right_value20 && right_value20 != __result_obj__ && !__freed_obj__) { right_value20 = come_decrement_ref_count(right_value20, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value20;
        __freed_obj__ = 0;
        memcpy(old_buf_45,self->buf,self->size);
        old_len_46=self->len;
        new_size_47=(self->size+size+1)*2;
        __dec_obj8=self->buf;
        self->buf=(char*)come_increment_ref_count(((char*)(right_value21=(char*)come_calloc(1, sizeof(char)*(1*(new_size_47)), "libcomelang2.c", 670))));
        if(__dec_obj8) { __dec_obj8 = come_decrement_ref_count(__dec_obj8, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value21);
        if(right_value21 && right_value21 != __result_obj__ && !__freed_obj__) { right_value21 = come_decrement_ref_count(right_value21, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value21;
        __freed_obj__ = 0;
        memcpy(self->buf,old_buf_45,old_len_46);
        self->buf[old_len_46]=0;
        self->size=new_size_47;
        if(old_buf_45 && !__freed_obj__) { old_buf_45 = come_decrement_ref_count(old_buf_45, (void*)0, (void*)0, 0, 0, 0); }
    }
    memcpy(self->buf+self->len,mem,size);
    self->len+=size;
    self->buf[self->len]=0;
    __result54__ = __result_obj__ = self;
    return __result54__;
}

struct buffer* buffer_append_char(struct buffer* self, char c){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional71;
struct buffer* __result55__;
_Bool _if_conditional72;
void* right_value22;
char* old_buf_48;
int old_len_49;
int new_size_50;
void* right_value23;
char* __dec_obj9;
struct buffer* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value22, 0, sizeof(void*));
memset(&old_buf_48, 0, sizeof(char*));
memset(&old_len_49, 0, sizeof(int));
memset(&new_size_50, 0, sizeof(int));
memset(&right_value23, 0, sizeof(void*));
    if(_if_conditional71=self==((void*)0),    _if_conditional71) {
        __result55__ = __result_obj__ = ((void*)0);
        return __result55__;
    }
    if(_if_conditional72=self->len+1+1+1>=self->size,    _if_conditional72) {
        old_buf_48=(char*)come_increment_ref_count(((char*)(right_value22=charp_clone(self->buf))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value22);
        if(right_value22 && right_value22 != __result_obj__ && !__freed_obj__) { right_value22 = come_decrement_ref_count(right_value22, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value22;
        __freed_obj__ = 0;
        old_len_49=self->len;
        new_size_50=(self->size+10+1)*2;
        __dec_obj9=self->buf;
        self->buf=(char*)come_increment_ref_count(((char*)(right_value23=(char*)come_calloc(1, sizeof(char)*(1*(new_size_50)), "libcomelang2.c", 693))));
        if(__dec_obj9) { __dec_obj9 = come_decrement_ref_count(__dec_obj9, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value23);
        if(right_value23 && right_value23 != __result_obj__ && !__freed_obj__) { right_value23 = come_decrement_ref_count(right_value23, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value23;
        __freed_obj__ = 0;
        memcpy(self->buf,old_buf_48,old_len_49);
        self->buf[old_len_49]=0;
        self->size=new_size_50;
        if(old_buf_48 && !__freed_obj__) { old_buf_48 = come_decrement_ref_count(old_buf_48, (void*)0, (void*)0, 0, 0, 0); }
    }
    self->buf[self->len]=c;
    self->len++;
    self->buf[self->len]=0;
    __result56__ = __result_obj__ = self;
    return __result56__;
}

struct buffer* buffer_append_str(struct buffer* self, char* mem){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional73;
struct buffer* __result57__;
int size_51;
_Bool _if_conditional74;
void* right_value24;
char* old_buf_52;
int old_len_53;
int new_size_54;
void* right_value25;
char* __dec_obj10;
struct buffer* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&size_51, 0, sizeof(int));
memset(&right_value24, 0, sizeof(void*));
memset(&old_buf_52, 0, sizeof(char*));
memset(&old_len_53, 0, sizeof(int));
memset(&new_size_54, 0, sizeof(int));
memset(&right_value25, 0, sizeof(void*));
    if(_if_conditional73=self==((void*)0)||mem==((void*)0),    _if_conditional73) {
        __result57__ = __result_obj__ = self;
        return __result57__;
    }
    size_51=strlen(mem);
    if(_if_conditional74=self->len+size_51+1+1>=self->size,    _if_conditional74) {
        old_buf_52=(char*)come_increment_ref_count(((char*)(right_value24=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang2.c", 715))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value24);
        if(right_value24 && right_value24 != __result_obj__ && !__freed_obj__) { right_value24 = come_decrement_ref_count(right_value24, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value24;
        __freed_obj__ = 0;
        memcpy(old_buf_52,self->buf,self->size);
        old_len_53=self->len;
        new_size_54=(self->size+size_51+1)*2;
        __dec_obj10=self->buf;
        self->buf=(char*)come_increment_ref_count(((char*)(right_value25=(char*)come_calloc(1, sizeof(char)*(1*(new_size_54)), "libcomelang2.c", 719))));
        if(__dec_obj10) { __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value25);
        if(right_value25 && right_value25 != __result_obj__ && !__freed_obj__) { right_value25 = come_decrement_ref_count(right_value25, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value25;
        __freed_obj__ = 0;
        memcpy(self->buf,old_buf_52,old_len_53);
        self->buf[old_len_53]=0;
        self->size=new_size_54;
        if(old_buf_52 && !__freed_obj__) { old_buf_52 = come_decrement_ref_count(old_buf_52, (void*)0, (void*)0, 0, 0, 0); }
    }
    memcpy(self->buf+self->len,mem,size_51);
    self->len+=size_51;
    self->buf[self->len]=0;
    __result58__ = __result_obj__ = self;
    return __result58__;
}

struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* mem){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional75;
struct buffer* __result59__;
int size_55;
_Bool _if_conditional76;
void* right_value26;
char* old_buf_56;
int old_len_57;
int new_size_58;
void* right_value27;
char* __dec_obj11;
struct buffer* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&size_55, 0, sizeof(int));
memset(&right_value26, 0, sizeof(void*));
memset(&old_buf_56, 0, sizeof(char*));
memset(&old_len_57, 0, sizeof(int));
memset(&new_size_58, 0, sizeof(int));
memset(&right_value27, 0, sizeof(void*));
    if(_if_conditional75=self==((void*)0)||mem==((void*)0),    _if_conditional75) {
        __result59__ = __result_obj__ = self;
        return __result59__;
    }
    size_55=strlen(mem)+1;
    if(_if_conditional76=self->len+size_55+1+1+1>=self->size,    _if_conditional76) {
        old_buf_56=(char*)come_increment_ref_count(((char*)(right_value26=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang2.c", 739))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value26);
        if(right_value26 && right_value26 != __result_obj__ && !__freed_obj__) { right_value26 = come_decrement_ref_count(right_value26, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value26;
        __freed_obj__ = 0;
        memcpy(old_buf_56,self->buf,self->size);
        old_len_57=self->len;
        new_size_58=(self->size+size_55+1)*2;
        __dec_obj11=self->buf;
        self->buf=(char*)come_increment_ref_count(((char*)(right_value27=(char*)come_calloc(1, sizeof(char)*(1*(new_size_58)), "libcomelang2.c", 743))));
        if(__dec_obj11) { __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value27);
        if(right_value27 && right_value27 != __result_obj__ && !__freed_obj__) { right_value27 = come_decrement_ref_count(right_value27, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value27;
        __freed_obj__ = 0;
        memcpy(self->buf,old_buf_56,old_len_57);
        self->buf[old_len_57]=0;
        self->size=new_size_58;
        if(old_buf_56 && !__freed_obj__) { old_buf_56 = come_decrement_ref_count(old_buf_56, (void*)0, (void*)0, 0, 0, 0); }
    }
    memcpy(self->buf+self->len,mem,size_55);
    self->len+=size_55;
    self->buf[self->len]=0;
    self->len++;
    __result60__ = __result_obj__ = self;
    return __result60__;
}

struct buffer* buffer_append_int(struct buffer* self, int value){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional77;
struct buffer* __result61__;
int* mem_59;
int size_60;
_Bool _if_conditional78;
void* right_value28;
char* old_buf_61;
int old_len_62;
int new_size_63;
void* right_value29;
char* __dec_obj12;
struct buffer* __result62__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&mem_59, 0, sizeof(int*));
memset(&size_60, 0, sizeof(int));
memset(&right_value28, 0, sizeof(void*));
memset(&old_buf_61, 0, sizeof(char*));
memset(&old_len_62, 0, sizeof(int));
memset(&new_size_63, 0, sizeof(int));
memset(&right_value29, 0, sizeof(void*));
    if(_if_conditional77=self==((void*)0),    _if_conditional77) {
        __result61__ = __result_obj__ = ((void*)0);
        return __result61__;
    }
    mem_59=&value;
    size_60=sizeof(int);
    if(_if_conditional78=self->len+size_60+1+1>=self->size,    _if_conditional78) {
        old_buf_61=(char*)come_increment_ref_count(((char*)(right_value28=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang2.c", 766))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value28);
        if(right_value28 && right_value28 != __result_obj__ && !__freed_obj__) { right_value28 = come_decrement_ref_count(right_value28, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value28;
        __freed_obj__ = 0;
        memcpy(old_buf_61,self->buf,self->size);
        old_len_62=self->len;
        new_size_63=(self->size+size_60+1)*2;
        __dec_obj12=self->buf;
        self->buf=(char*)come_increment_ref_count(((char*)(right_value29=(char*)come_calloc(1, sizeof(char)*(1*(new_size_63)), "libcomelang2.c", 770))));
        if(__dec_obj12) { __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value29);
        if(right_value29 && right_value29 != __result_obj__ && !__freed_obj__) { right_value29 = come_decrement_ref_count(right_value29, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value29;
        __freed_obj__ = 0;
        memcpy(self->buf,old_buf_61,old_len_62);
        self->buf[old_len_62]=0;
        self->size=new_size_63;
        if(old_buf_61 && !__freed_obj__) { old_buf_61 = come_decrement_ref_count(old_buf_61, (void*)0, (void*)0, 0, 0, 0); }
    }
    memcpy(self->buf+self->len,mem_59,size_60);
    self->len+=size_60;
    self->buf[self->len]=0;
    __result62__ = __result_obj__ = self;
    return __result62__;
}

struct buffer* buffer_append_long(struct buffer* self, long value){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
long* mem_64;
int size_65;
_Bool _if_conditional79;
void* right_value30;
char* old_buf_66;
int old_len_67;
int new_size_68;
void* right_value31;
char* __dec_obj13;
struct buffer* __result63__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&mem_64, 0, sizeof(long*));
memset(&size_65, 0, sizeof(int));
memset(&right_value30, 0, sizeof(void*));
memset(&old_buf_66, 0, sizeof(char*));
memset(&old_len_67, 0, sizeof(int));
memset(&new_size_68, 0, sizeof(int));
memset(&right_value31, 0, sizeof(void*));
    mem_64=&value;
    size_65=sizeof(long);
    if(_if_conditional79=self->len+size_65+1+1>=self->size,    _if_conditional79) {
        old_buf_66=(char*)come_increment_ref_count(((char*)(right_value30=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang2.c", 789))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value30);
        if(right_value30 && right_value30 != __result_obj__ && !__freed_obj__) { right_value30 = come_decrement_ref_count(right_value30, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value30;
        __freed_obj__ = 0;
        memcpy(old_buf_66,self->buf,self->size);
        old_len_67=self->len;
        new_size_68=(self->size+size_65+1)*2;
        __dec_obj13=self->buf;
        self->buf=(char*)come_increment_ref_count(((char*)(right_value31=(char*)come_calloc(1, sizeof(char)*(1*(new_size_68)), "libcomelang2.c", 793))));
        if(__dec_obj13) { __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value31);
        if(right_value31 && right_value31 != __result_obj__ && !__freed_obj__) { right_value31 = come_decrement_ref_count(right_value31, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value31;
        __freed_obj__ = 0;
        memcpy(self->buf,old_buf_66,old_len_67);
        self->buf[old_len_67]=0;
        self->size=new_size_68;
        if(old_buf_66 && !__freed_obj__) { old_buf_66 = come_decrement_ref_count(old_buf_66, (void*)0, (void*)0, 0, 0, 0); }
    }
    memcpy(self->buf+self->len,mem_64,size_65);
    self->len+=size_65;
    self->buf[self->len]=0;
    __result63__ = __result_obj__ = self;
    return __result63__;
}

struct buffer* buffer_append_short(struct buffer* self, short short value){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional80;
struct buffer* __result64__;
short short* mem_69;
int size_70;
_Bool _if_conditional81;
void* right_value32;
char* old_buf_71;
int old_len_72;
int new_size_73;
void* right_value33;
char* __dec_obj14;
struct buffer* __result65__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&mem_69, 0, sizeof(short short*));
memset(&size_70, 0, sizeof(int));
memset(&right_value32, 0, sizeof(void*));
memset(&old_buf_71, 0, sizeof(char*));
memset(&old_len_72, 0, sizeof(int));
memset(&new_size_73, 0, sizeof(int));
memset(&right_value33, 0, sizeof(void*));
    if(_if_conditional80=self==((void*)0),    _if_conditional80) {
        __result64__ = __result_obj__ = ((void*)0);
        return __result64__;
    }
    mem_69=&value;
    size_70=sizeof(short short);
    if(_if_conditional81=self->len+size_70+1+1>=self->size,    _if_conditional81) {
        old_buf_71=(char*)come_increment_ref_count(((char*)(right_value32=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang2.c", 816))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value32);
        if(right_value32 && right_value32 != __result_obj__ && !__freed_obj__) { right_value32 = come_decrement_ref_count(right_value32, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value32;
        __freed_obj__ = 0;
        memcpy(old_buf_71,self->buf,self->size);
        old_len_72=self->len;
        new_size_73=(self->size+size_70+1)*2;
        __dec_obj14=self->buf;
        self->buf=(char*)come_increment_ref_count(((char*)(right_value33=(char*)come_calloc(1, sizeof(char)*(1*(new_size_73)), "libcomelang2.c", 820))));
        if(__dec_obj14) { __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value33);
        if(right_value33 && right_value33 != __result_obj__ && !__freed_obj__) { right_value33 = come_decrement_ref_count(right_value33, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value33;
        __freed_obj__ = 0;
        memcpy(self->buf,old_buf_71,old_len_72);
        self->buf[old_len_72]=0;
        self->size=new_size_73;
        if(old_buf_71 && !__freed_obj__) { old_buf_71 = come_decrement_ref_count(old_buf_71, (void*)0, (void*)0, 0, 0, 0); }
    }
    memcpy(self->buf+self->len,mem_69,size_70);
    self->len+=size_70;
    self->buf[self->len]=0;
    __result65__ = __result_obj__ = self;
    return __result65__;
}

struct buffer* buffer_alignment(struct buffer* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional82;
struct buffer* __result66__;
int len_74;
_Bool _if_conditional83;
int new_size_75;
void* right_value34;
char* __dec_obj15;
int i_76;
_Bool _for_condtionalA5;
struct buffer* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&len_74, 0, sizeof(int));
memset(&new_size_75, 0, sizeof(int));
memset(&right_value34, 0, sizeof(void*));
memset(&i_76, 0, sizeof(int));
    if(_if_conditional82=self==((void*)0),    _if_conditional82) {
        __result66__ = __result_obj__ = ((void*)0);
        return __result66__;
    }
    len_74=self->len;
    len_74=(len_74+3)&~3;
    if(_if_conditional83=len_74>=self->size,    _if_conditional83) {
        new_size_75=(self->size+1+1)*2;
        __dec_obj15=self->buf;
        self->buf=(char*)come_increment_ref_count(((char*)(right_value34=(char*)come_calloc(1, sizeof(char)*(1*(new_size_75)), "libcomelang2.c", 844))));
        if(__dec_obj15) { __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value34);
        if(right_value34 && right_value34 != __result_obj__ && !__freed_obj__) { right_value34 = come_decrement_ref_count(right_value34, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value34;
        __freed_obj__ = 0;
        self->size=new_size_75;
    }
    for(
    i_76=self->len ,    0;    _for_condtionalA5=    i_76<len_74 ,    _for_condtionalA5;    i_76++ ,    0    ){
        self->buf[i_76]=0;
    }
    self->len=len_74;
    __result67__ = __result_obj__ = self;
    return __result67__;
}

struct optional$2intbool* buffer_compare(struct buffer* left, struct buffer* right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional84;
void* right_value35;
void* right_value36;
struct optional$2intbool* __result69__;
_Bool _if_conditional85;
void* right_value37;
void* right_value38;
struct optional$2intbool* __result70__;
_Bool _if_conditional86;
void* right_value39;
void* right_value40;
struct optional$2intbool* __result71__;
void* right_value41;
void* right_value42;
struct optional$2intbool* __result72__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value35, 0, sizeof(void*));
memset(&right_value36, 0, sizeof(void*));
memset(&right_value37, 0, sizeof(void*));
memset(&right_value38, 0, sizeof(void*));
memset(&right_value39, 0, sizeof(void*));
memset(&right_value40, 0, sizeof(void*));
memset(&right_value41, 0, sizeof(void*));
memset(&right_value42, 0, sizeof(void*));
    if(_if_conditional84=left==((void*)0)&&right==((void*)0),    _if_conditional84) {
        __result69__ = __result_obj__ = ((struct optional$2intbool*)(right_value36=optional$2intbool_initialize(((struct optional$2intbool*)(right_value35=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 860))),0,(_Bool)0)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value35);
        if(right_value35 && right_value35 != __result_obj__ && !__freed_obj__) { right_value35 = come_decrement_ref_count(right_value35, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value35;
        __freed_obj__ = 0;
        return __result69__;
    }
    else {
        if(_if_conditional85=left==((void*)0),        _if_conditional85) {
            __result70__ = __result_obj__ = ((struct optional$2intbool*)(right_value38=optional$2intbool_initialize(((struct optional$2intbool*)(right_value37=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 863))),-1,(_Bool)0)));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value37);
            if(right_value37 && right_value37 != __result_obj__ && !__freed_obj__) { right_value37 = come_decrement_ref_count(right_value37, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value37;
            __freed_obj__ = 0;
            return __result70__;
        }
        else {
            if(_if_conditional86=right==((void*)0),            _if_conditional86) {
                __result71__ = __result_obj__ = ((struct optional$2intbool*)(right_value40=optional$2intbool_initialize(((struct optional$2intbool*)(right_value39=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 866))),1,(_Bool)0)));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value39);
                if(right_value39 && right_value39 != __result_obj__ && !__freed_obj__) { right_value39 = come_decrement_ref_count(right_value39, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value39;
                __freed_obj__ = 0;
                return __result71__;
            }
        }
    }
    __result72__ = __result_obj__ = ((struct optional$2intbool*)(right_value42=optional$2intbool_initialize((struct optional$2intbool*)come_increment_ref_count(((struct optional$2intbool*)(right_value41=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 869)))),strcmp(left->buf,right->buf),(_Bool)1)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value41);
    if(right_value41 && right_value41 != __result_obj__ && !__freed_obj__) { right_value41 = come_decrement_ref_count(right_value41, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value41;
    __freed_obj__ = 0;
    return __result72__;
}

static struct optional$2intbool* optional$2intbool_initialize(struct optional$2intbool* self, int v1, _Bool v2){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct optional$2intbool* __result68__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            self->v1=v1;
            self->v2=v2;
            __result68__ = __result_obj__ = self;
            if(self && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            return __result68__;
            if(self && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2intboolp_finalize(struct optional$2intbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

struct buffer* string_to_buffer(char* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value43;
void* right_value44;
struct buffer* result_77;
_Bool _if_conditional87;
struct buffer* __result73__;
struct buffer* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value43, 0, sizeof(void*));
memset(&right_value44, 0, sizeof(void*));
memset(&result_77, 0, sizeof(struct buffer*));
    result_77=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value44=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value43=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 874))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value43);
    if(right_value43 && right_value43 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value43, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value43;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value44);
    if(right_value44 && right_value44 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value44, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value44;
    __freed_obj__ = 0;
    if(_if_conditional87=self==((void*)0),    _if_conditional87) {
        __result73__ = __result_obj__ = result_77;
        if(result_77 && !__freed_obj__) { come_call_finalizer(buffer_finalize,result_77, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result73__;
    }
    buffer_append_str(result_77,self);
    __result74__ = __result_obj__ = result_77;
    if(result_77 && !__freed_obj__) { come_call_finalizer(buffer_finalize,result_77, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result74__;
    if(result_77 && !__freed_obj__) { come_call_finalizer(buffer_finalize,result_77, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct buffer* charp_to_buffer(char* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value45;
void* right_value46;
struct buffer* result_78;
_Bool _if_conditional88;
struct buffer* __result75__;
struct buffer* __result76__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value45, 0, sizeof(void*));
memset(&right_value46, 0, sizeof(void*));
memset(&result_78, 0, sizeof(struct buffer*));
    result_78=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value46=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value45=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 887))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value45);
    if(right_value45 && right_value45 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value45, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value45;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value46);
    if(right_value46 && right_value46 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value46, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value46;
    __freed_obj__ = 0;
    if(_if_conditional88=self==((void*)0),    _if_conditional88) {
        __result75__ = __result_obj__ = result_78;
        if(result_78 && !__freed_obj__) { come_call_finalizer(buffer_finalize,result_78, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result75__;
    }
    buffer_append_str(result_78,self);
    __result76__ = __result_obj__ = result_78;
    if(result_78 && !__freed_obj__) { come_call_finalizer(buffer_finalize,result_78, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result76__;
    if(result_78 && !__freed_obj__) { come_call_finalizer(buffer_finalize,result_78, (void*)0, (void*)0, 0, 0, 0, 0); }
}

char* buffer_to_string(struct buffer* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional89;
void* right_value47;
char* __result77__;
void* right_value48;
char* __result78__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value47, 0, sizeof(void*));
memset(&right_value48, 0, sizeof(void*));
    if(_if_conditional89=self==((void*)0),    _if_conditional89) {
        __result77__ = __result_obj__ = ((char*)(right_value47=__builtin_string("")));
        return __result77__;
    }
    __result78__ = __result_obj__ = ((char*)(right_value48=__builtin_string(self->buf)));
    return __result78__;
}

_Bool bool_equals(_Bool self, _Bool right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result79__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result79__ = self==right;
    return __result79__;
}

_Bool int_equals(int self, int right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result80__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result80__ = self==right;
    return __result80__;
}

_Bool char_equals(char self, char right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result81__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result81__ = self==right;
    return __result81__;
}

_Bool short_equals(short short self, short short right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result82__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result82__ = self==right;
    return __result82__;
}

_Bool long_equals(long self, long right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result83__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result83__ = self==right;
    return __result83__;
}

_Bool size_t_equals(long int self, long int right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result84__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result84__ = self==right;
    return __result84__;
}

_Bool float_equals(float self, float right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result85__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result85__ = self==right;
    return __result85__;
}

_Bool double_equals(double self, double right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result86__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result86__ = self==right;
    return __result86__;
}

struct optional$2boolbool* string_equals(char* self, char* right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional90;
void* right_value49;
void* right_value50;
struct optional$2boolbool* __result88__;
_Bool _if_conditional91;
void* right_value51;
void* right_value52;
struct optional$2boolbool* __result89__;
_Bool _if_conditional92;
void* right_value53;
void* right_value54;
struct optional$2boolbool* __result90__;
void* right_value55;
void* right_value56;
struct optional$2boolbool* __result91__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value49, 0, sizeof(void*));
memset(&right_value50, 0, sizeof(void*));
memset(&right_value51, 0, sizeof(void*));
memset(&right_value52, 0, sizeof(void*));
memset(&right_value53, 0, sizeof(void*));
memset(&right_value54, 0, sizeof(void*));
memset(&right_value55, 0, sizeof(void*));
memset(&right_value56, 0, sizeof(void*));
    if(_if_conditional90=self==((void*)0)&&right==((void*)0),    _if_conditional90) {
        __result88__ = __result_obj__ = ((struct optional$2boolbool*)(right_value50=optional$2boolbool_initialize(((struct optional$2boolbool*)(right_value49=(struct optional$2boolbool*)come_calloc(1, sizeof(struct optional$2boolbool)*(1), "libcomelang2.c", 953))),(_Bool)1,(_Bool)0)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value49);
        if(right_value49 && right_value49 != __result_obj__ && !__freed_obj__) { right_value49 = come_decrement_ref_count(right_value49, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value49;
        __freed_obj__ = 0;
        return __result88__;
    }
    else {
        if(_if_conditional91=self==((void*)0),        _if_conditional91) {
            __result89__ = __result_obj__ = ((struct optional$2boolbool*)(right_value52=optional$2boolbool_initialize(((struct optional$2boolbool*)(right_value51=(struct optional$2boolbool*)come_calloc(1, sizeof(struct optional$2boolbool)*(1), "libcomelang2.c", 956))),(_Bool)0,(_Bool)0)));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value51);
            if(right_value51 && right_value51 != __result_obj__ && !__freed_obj__) { right_value51 = come_decrement_ref_count(right_value51, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value51;
            __freed_obj__ = 0;
            return __result89__;
        }
        else {
            if(_if_conditional92=right==((void*)0),            _if_conditional92) {
                __result90__ = __result_obj__ = ((struct optional$2boolbool*)(right_value54=optional$2boolbool_initialize(((struct optional$2boolbool*)(right_value53=(struct optional$2boolbool*)come_calloc(1, sizeof(struct optional$2boolbool)*(1), "libcomelang2.c", 959))),(_Bool)0,(_Bool)0)));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value53);
                if(right_value53 && right_value53 != __result_obj__ && !__freed_obj__) { right_value53 = come_decrement_ref_count(right_value53, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value53;
                __freed_obj__ = 0;
                return __result90__;
            }
        }
    }
    __result91__ = __result_obj__ = ((struct optional$2intbool*)(right_value56=optional$2intbool_initialize((struct optional$2intbool*)come_increment_ref_count(((struct optional$2intbool*)(right_value55=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 962)))),strcmp(self,right)==0,(_Bool)1)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value55);
    if(right_value55 && right_value55 != __result_obj__ && !__freed_obj__) { right_value55 = come_decrement_ref_count(right_value55, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value55;
    __freed_obj__ = 0;
    return __result91__;
}

static struct optional$2boolbool* optional$2boolbool_initialize(struct optional$2boolbool* self, _Bool v1, _Bool v2){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct optional$2boolbool* __result87__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            self->v1=v1;
            self->v2=v2;
            __result87__ = __result_obj__ = self;
            if(self && !__freed_obj__) { come_call_finalizer(optional$2boolboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            return __result87__;
            if(self && !__freed_obj__) { come_call_finalizer(optional$2boolboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2boolboolp_finalize(struct optional$2boolbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

struct optional$2boolbool* charp_equals(char* self, char* right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional93;
void* right_value57;
void* right_value58;
struct optional$2boolbool* __result92__;
_Bool _if_conditional94;
void* right_value59;
void* right_value60;
struct optional$2boolbool* __result93__;
_Bool _if_conditional95;
void* right_value61;
void* right_value62;
struct optional$2boolbool* __result94__;
void* right_value63;
void* right_value64;
struct optional$2boolbool* __result95__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value57, 0, sizeof(void*));
memset(&right_value58, 0, sizeof(void*));
memset(&right_value59, 0, sizeof(void*));
memset(&right_value60, 0, sizeof(void*));
memset(&right_value61, 0, sizeof(void*));
memset(&right_value62, 0, sizeof(void*));
memset(&right_value63, 0, sizeof(void*));
memset(&right_value64, 0, sizeof(void*));
    if(_if_conditional93=self==((void*)0)&&right==((void*)0),    _if_conditional93) {
        __result92__ = __result_obj__ = ((struct optional$2boolbool*)(right_value58=optional$2boolbool_initialize(((struct optional$2boolbool*)(right_value57=(struct optional$2boolbool*)come_calloc(1, sizeof(struct optional$2boolbool)*(1), "libcomelang2.c", 968))),(_Bool)1,(_Bool)0)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value57);
        if(right_value57 && right_value57 != __result_obj__ && !__freed_obj__) { right_value57 = come_decrement_ref_count(right_value57, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value57;
        __freed_obj__ = 0;
        return __result92__;
    }
    else {
        if(_if_conditional94=self==((void*)0),        _if_conditional94) {
            __result93__ = __result_obj__ = ((struct optional$2boolbool*)(right_value60=optional$2boolbool_initialize(((struct optional$2boolbool*)(right_value59=(struct optional$2boolbool*)come_calloc(1, sizeof(struct optional$2boolbool)*(1), "libcomelang2.c", 971))),(_Bool)0,(_Bool)0)));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value59);
            if(right_value59 && right_value59 != __result_obj__ && !__freed_obj__) { right_value59 = come_decrement_ref_count(right_value59, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value59;
            __freed_obj__ = 0;
            return __result93__;
        }
        else {
            if(_if_conditional95=right==((void*)0),            _if_conditional95) {
                __result94__ = __result_obj__ = ((struct optional$2boolbool*)(right_value62=optional$2boolbool_initialize(((struct optional$2boolbool*)(right_value61=(struct optional$2boolbool*)come_calloc(1, sizeof(struct optional$2boolbool)*(1), "libcomelang2.c", 974))),(_Bool)0,(_Bool)0)));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value61);
                if(right_value61 && right_value61 != __result_obj__ && !__freed_obj__) { right_value61 = come_decrement_ref_count(right_value61, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value61;
                __freed_obj__ = 0;
                return __result94__;
            }
        }
    }
    __result95__ = __result_obj__ = ((struct optional$2intbool*)(right_value64=optional$2intbool_initialize((struct optional$2intbool*)come_increment_ref_count(((struct optional$2intbool*)(right_value63=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 977)))),strcmp(self,right)==0,(_Bool)1)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value63);
    if(right_value63 && right_value63 != __result_obj__ && !__freed_obj__) { right_value63 = come_decrement_ref_count(right_value63, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value63;
    __freed_obj__ = 0;
    return __result95__;
}

_Bool string_operator_equals(char* self, char* right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional96;
_Bool __result96__;
_Bool _if_conditional97;
_Bool __result97__;
_Bool _if_conditional98;
_Bool __result98__;
_Bool __result99__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional96=self==((void*)0)&&right==((void*)0),    _if_conditional96) {
        __result96__ = (_Bool)1;
        return __result96__;
    }
    else {
        if(_if_conditional97=self==((void*)0),        _if_conditional97) {
            __result97__ = (_Bool)0;
            return __result97__;
        }
        else {
            if(_if_conditional98=right==((void*)0),            _if_conditional98) {
                __result98__ = (_Bool)0;
                return __result98__;
            }
        }
    }
    __result99__ = strcmp(self,right)==0;
    return __result99__;
}

_Bool charp_operator_equals(char* self, char* right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional99;
_Bool __result100__;
_Bool _if_conditional100;
_Bool __result101__;
_Bool _if_conditional101;
_Bool __result102__;
_Bool __result103__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional99=self==((void*)0)&&right==((void*)0),    _if_conditional99) {
        __result100__ = (_Bool)1;
        return __result100__;
    }
    else {
        if(_if_conditional100=self==((void*)0),        _if_conditional100) {
            __result101__ = (_Bool)0;
            return __result101__;
        }
        else {
            if(_if_conditional101=right==((void*)0),            _if_conditional101) {
                __result102__ = (_Bool)0;
                return __result102__;
            }
        }
    }
    __result103__ = strcmp(self,right)==0;
    return __result103__;
}

_Bool string_operator_not_equals(char* self, char* right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional102;
_Bool __result104__;
_Bool _if_conditional103;
_Bool __result105__;
_Bool _if_conditional104;
_Bool __result106__;
_Bool __result107__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional102=self==((void*)0)&&right==((void*)0),    _if_conditional102) {
        __result104__ = (_Bool)0;
        return __result104__;
    }
    else {
        if(_if_conditional103=self==((void*)0),        _if_conditional103) {
            __result105__ = (_Bool)1;
            return __result105__;
        }
        else {
            if(_if_conditional104=right==((void*)0),            _if_conditional104) {
                __result106__ = (_Bool)1;
                return __result106__;
            }
        }
    }
    __result107__ = strcmp(self,right)!=0;
    return __result107__;
}

_Bool charp_operator_not_equals(char* self, char* right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional105;
_Bool __result108__;
_Bool _if_conditional106;
_Bool __result109__;
_Bool _if_conditional107;
_Bool __result110__;
_Bool __result111__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional105=self==((void*)0)&&right==((void*)0),    _if_conditional105) {
        __result108__ = (_Bool)0;
        return __result108__;
    }
    else {
        if(_if_conditional106=self==((void*)0),        _if_conditional106) {
            __result109__ = (_Bool)1;
            return __result109__;
        }
        else {
            if(_if_conditional107=right==((void*)0),            _if_conditional107) {
                __result110__ = (_Bool)1;
                return __result110__;
            }
        }
    }
    __result111__ = strcmp(self,right)!=0;
    return __result111__;
}

char* charp_operator_add(char* self, char* right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional108;
void* right_value65;
char* __result112__;
int len_79;
void* right_value66;
char* result_80;
char* __result113__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value65, 0, sizeof(void*));
memset(&len_79, 0, sizeof(int));
memset(&right_value66, 0, sizeof(void*));
memset(&result_80, 0, sizeof(char*));
    if(_if_conditional108=self==((void*)0)||right==((void*)0),    _if_conditional108) {
        __result112__ = __result_obj__ = ((char*)(right_value65=__builtin_string("")));
        return __result112__;
    }
    len_79=strlen(self)+strlen(right);
    result_80=(char*)come_increment_ref_count(((char*)(right_value66=(char*)come_calloc(1, sizeof(char)*(1*(len_79+1)), "libcomelang2.c", 1048))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value66);
    if(right_value66 && right_value66 != __result_obj__ && !__freed_obj__) { right_value66 = come_decrement_ref_count(right_value66, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value66;
    __freed_obj__ = 0;
    strncpy(result_80,self,len_79+1);
    strncat(result_80,right,len_79+1);
    __result113__ = __result_obj__ = result_80;
    if(result_80 && !__freed_obj__) { result_80 = come_decrement_ref_count(result_80, (void*)0, (void*)0, 0, 1, 0); }
    return __result113__;
    if(result_80 && !__freed_obj__) { result_80 = come_decrement_ref_count(result_80, (void*)0, (void*)0, 0, 0, 0); }
}

char* string_operator_add(char* self, char* right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional109;
void* right_value67;
char* __result114__;
int len_81;
void* right_value68;
char* result_82;
char* __result115__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value67, 0, sizeof(void*));
memset(&len_81, 0, sizeof(int));
memset(&right_value68, 0, sizeof(void*));
memset(&result_82, 0, sizeof(char*));
    if(_if_conditional109=self==((void*)0)||right==((void*)0),    _if_conditional109) {
        __result114__ = __result_obj__ = ((char*)(right_value67=__builtin_string("")));
        return __result114__;
    }
    len_81=strlen(self)+strlen(right);
    result_82=(char*)come_increment_ref_count(((char*)(right_value68=(char*)come_calloc(1, sizeof(char)*(1*(len_81+1)), "libcomelang2.c", 1063))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value68);
    if(right_value68 && right_value68 != __result_obj__ && !__freed_obj__) { right_value68 = come_decrement_ref_count(right_value68, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value68;
    __freed_obj__ = 0;
    strncpy(result_82,self,len_81+1);
    strncat(result_82,right,len_81+1);
    __result115__ = __result_obj__ = result_82;
    if(result_82 && !__freed_obj__) { result_82 = come_decrement_ref_count(result_82, (void*)0, (void*)0, 0, 1, 0); }
    return __result115__;
    if(result_82 && !__freed_obj__) { result_82 = come_decrement_ref_count(result_82, (void*)0, (void*)0, 0, 0, 0); }
}

char* charp_operator_mult(char* self, int right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional110;
void* right_value69;
char* __result116__;
void* right_value70;
void* right_value71;
struct buffer* buf_83;
int i_84;
_Bool _for_condtionalA6;
void* right_value72;
char* __result117__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value69, 0, sizeof(void*));
memset(&right_value70, 0, sizeof(void*));
memset(&right_value71, 0, sizeof(void*));
memset(&buf_83, 0, sizeof(struct buffer*));
memset(&i_84, 0, sizeof(int));
memset(&right_value72, 0, sizeof(void*));
    if(_if_conditional110=self==((void*)0),    _if_conditional110) {
        __result116__ = __result_obj__ = ((char*)(right_value69=__builtin_string("")));
        return __result116__;
    }
    buf_83=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value71=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value70=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 1076))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value70);
    if(right_value70 && right_value70 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value70, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value70;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value71);
    if(right_value71 && right_value71 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value71, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value71;
    __freed_obj__ = 0;
    for(
    i_84=0 ,    0;    _for_condtionalA6=    i_84<right ,    _for_condtionalA6;    i_84++ ,    0    ){
        buffer_append_str(buf_83,self);
    }
    __result117__ = __result_obj__ = ((char*)(right_value72=buffer_to_string(buf_83)));
    if(buf_83 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_83, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result117__;
    if(buf_83 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_83, (void*)0, (void*)0, 0, 0, 0, 0); }
}

char* string_operator_mult(char* self, int right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional111;
void* right_value73;
char* __result118__;
void* right_value74;
void* right_value75;
struct buffer* buf_85;
int i_86;
_Bool _for_condtionalA7;
void* right_value76;
char* __result119__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value73, 0, sizeof(void*));
memset(&right_value74, 0, sizeof(void*));
memset(&right_value75, 0, sizeof(void*));
memset(&buf_85, 0, sizeof(struct buffer*));
memset(&i_86, 0, sizeof(int));
memset(&right_value76, 0, sizeof(void*));
    if(_if_conditional111=self==((void*)0),    _if_conditional111) {
        __result118__ = __result_obj__ = ((char*)(right_value73=__builtin_string("")));
        return __result118__;
    }
    buf_85=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value75=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value74=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 1090))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value74);
    if(right_value74 && right_value74 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value74, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value74;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value75);
    if(right_value75 && right_value75 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value75;
    __freed_obj__ = 0;
    for(
    i_86=0 ,    0;    _for_condtionalA7=    i_86<right ,    _for_condtionalA7;    i_86++ ,    0    ){
        buffer_append_str(buf_85,self);
    }
    __result119__ = __result_obj__ = ((char*)(right_value76=buffer_to_string(buf_85)));
    if(buf_85 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_85, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result119__;
    if(buf_85 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_85, (void*)0, (void*)0, 0, 0, 0, 0); }
}

unsigned int bool_get_hash_key(_Bool value){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int __result120__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result120__ = (int_get_hash_key(((int)value)));
    return __result120__;
}

unsigned int char_get_hash_key(char value){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int __result121__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result121__ = value;
    return __result121__;
}

unsigned int short_get_hash_key(short int value){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int __result122__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result122__ = value;
    return __result122__;
}

unsigned int int_get_hash_key(int value){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int __result123__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result123__ = value;
    return __result123__;
}

unsigned int long_get_hash_key(long value){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int __result124__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result124__ = value;
    return __result124__;
}

unsigned int size_t_get_hash_key(long int value){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int __result125__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result125__ = value;
    return __result125__;
}

unsigned int float_get_hash_key(float value){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int __result126__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result126__ = (unsigned int)value;
    return __result126__;
}

unsigned int double_get_hash_key(double value){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int __result127__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result127__ = (unsigned int)value;
    return __result127__;
}

unsigned int string_get_hash_key(char* value){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional112;
unsigned int __result128__;
int result_87;
char* p_88;
_Bool _while_condtional6;
unsigned int __result129__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_87, 0, sizeof(int));
memset(&p_88, 0, sizeof(char*));
    if(_if_conditional112=value==((void*)0),    _if_conditional112) {
        __result128__ = 0;
        return __result128__;
    }
    result_87=0;
    p_88=value;
    while(_while_condtional6=*p_88,    _while_condtional6) {
        result_87+=(*p_88);
        p_88++;
    }
    __result129__ = result_87;
    return __result129__;
}

unsigned int charp_get_hash_key(char* value){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional113;
unsigned int __result130__;
int result_89;
char* p_90;
_Bool _while_condtional7;
unsigned int __result131__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_89, 0, sizeof(int));
memset(&p_90, 0, sizeof(char*));
    if(_if_conditional113=value==((void*)0),    _if_conditional113) {
        __result130__ = 0;
        return __result130__;
    }
    result_89=0;
    p_90=value;
    while(_while_condtional7=*p_90,    _while_condtional7) {
        result_89+=(*p_90);
        p_90++;
    }
    __result131__ = result_89;
    return __result131__;
}

_Bool bool_clone(_Bool self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result132__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result132__ = self;
    return __result132__;
}

char char_clone(char self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char __result133__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result133__ = self;
    return __result133__;
}

short int short_clone(short short self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
short int __result134__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result134__ = self;
    return __result134__;
}

int int_clone(int self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result135__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result135__ = self;
    return __result135__;
}

long int long_clone(long self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
long int __result136__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result136__ = self;
    return __result136__;
}

long int size_t_clone(long int self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
long int __result137__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result137__ = self;
    return __result137__;
}

double double_clone(double self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
double __result138__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result138__ = self;
    return __result138__;
}

float float_clone(float self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
float __result139__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result139__ = self;
    return __result139__;
}

char* charp_clone(char* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional114;
char* __result140__;
void* right_value77;
char* __result141__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value77, 0, sizeof(void*));
    if(_if_conditional114=self==((void*)0),    _if_conditional114) {
        __result140__ = __result_obj__ = ((void*)0);
        return __result140__;
    }
    __result141__ = __result_obj__ = ((char*)(right_value77=__builtin_string(self)));
    return __result141__;
}

char* string_clone(char* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional115;
char* __result142__;
void* right_value78;
char* __result143__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value78, 0, sizeof(void*));
    if(_if_conditional115=self==((void*)0),    _if_conditional115) {
        __result142__ = __result_obj__ = ((void*)0);
        return __result142__;
    }
    __result143__ = __result_obj__ = ((char*)(right_value78=__builtin_string(self)));
    return __result143__;
}

_Bool xiswalpha(unsigned int c){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool result_91;
_Bool __result144__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_91, 0, sizeof(_Bool));
    result_91=(c>=97&&c<=122)||(c>=65&&c<=90);
    __result144__ = result_91;
    return __result144__;
}

_Bool xiswblank(unsigned int c){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result145__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result145__ = c==32||c==9;
    return __result145__;
}

_Bool xiswdigit(unsigned int c){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result146__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result146__ = (c>=48&&c<=57);
    return __result146__;
}

_Bool xiswalnum(unsigned int c){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result147__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result147__ = xiswalpha(c)||xiswdigit(c);
    return __result147__;
}

_Bool xisalpha(char c){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool result_92;
_Bool __result148__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_92, 0, sizeof(_Bool));
    result_92=(c>=97&&c<=122)||(c>=65&&c<=90);
    __result148__ = result_92;
    return __result148__;
}

_Bool xisblank(char c){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result149__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result149__ = c==32||c==9;
    return __result149__;
}

_Bool xisdigit(char c){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result150__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result150__ = (c>=48&&c<=57);
    return __result150__;
}

_Bool xisalnum(char c){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result151__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result151__ = xisalpha(c)||xisdigit(c);
    return __result151__;
}

_Bool xisascii(char c){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool result_93;
_Bool __result152__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_93, 0, sizeof(_Bool));
    result_93=(c>=32&&c<=126);
    __result152__ = result_93;
    return __result152__;
}

_Bool xiswascii(unsigned int c){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool result_94;
_Bool __result153__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_94, 0, sizeof(_Bool));
    result_94=(c>=32&&c<=126);
    __result153__ = result_94;
    return __result153__;
}

int string_length(char* str){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional116;
int __result154__;
int __result155__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional116=str==((void*)0),    _if_conditional116) {
        __result154__ = 0;
        return __result154__;
    }
    __result155__ = strlen(str);
    return __result155__;
}

int charp_length(char* str){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional117;
int __result156__;
int __result157__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional117=str==((void*)0),    _if_conditional117) {
        __result156__ = 0;
        return __result156__;
    }
    __result157__ = strlen(str);
    return __result157__;
}

char* string_reverse(char* str){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional118;
void* right_value79;
char* __result158__;
int len_95;
void* right_value80;
char* result_96;
int i_97;
_Bool _for_condtionalA8;
char* __result159__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value79, 0, sizeof(void*));
memset(&len_95, 0, sizeof(int));
memset(&right_value80, 0, sizeof(void*));
memset(&result_96, 0, sizeof(char*));
memset(&i_97, 0, sizeof(int));
    if(_if_conditional118=str==((void*)0),    _if_conditional118) {
        __result158__ = __result_obj__ = ((char*)(right_value79=__builtin_string("")));
        return __result158__;
    }
    len_95=strlen(str);
    result_96=(char*)come_increment_ref_count(((char*)(right_value80=(char*)come_calloc(1, sizeof(char)*(1*(len_95+1)), "libcomelang2.c", 1307))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value80);
    if(right_value80 && right_value80 != __result_obj__ && !__freed_obj__) { right_value80 = come_decrement_ref_count(right_value80, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value80;
    __freed_obj__ = 0;
    for(
    i_97=0 ,    0;    _for_condtionalA8=    i_97<len_95 ,    _for_condtionalA8;    i_97++ ,    0    ){
        result_96[i_97]=str[len_95-i_97-1];
    }
    result_96[len_95]=0;
    __result159__ = __result_obj__ = result_96;
    if(result_96 && !__freed_obj__) { result_96 = come_decrement_ref_count(result_96, (void*)0, (void*)0, 0, 1, 0); }
    return __result159__;
    if(result_96 && !__freed_obj__) { result_96 = come_decrement_ref_count(result_96, (void*)0, (void*)0, 0, 0, 0); }
}

char* charp_reverse(char* str){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional119;
void* right_value81;
char* __result160__;
int len_98;
void* right_value82;
char* result_99;
int i_100;
_Bool _for_condtionalA9;
char* __result161__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value81, 0, sizeof(void*));
memset(&len_98, 0, sizeof(int));
memset(&right_value82, 0, sizeof(void*));
memset(&result_99, 0, sizeof(char*));
memset(&i_100, 0, sizeof(int));
    if(_if_conditional119=str==((void*)0),    _if_conditional119) {
        __result160__ = __result_obj__ = ((char*)(right_value81=__builtin_string("")));
        return __result160__;
    }
    len_98=strlen(str);
    result_99=(char*)come_increment_ref_count(((char*)(right_value82=(char*)come_calloc(1, sizeof(char)*(1*(len_98+1)), "libcomelang2.c", 1324))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value82);
    if(right_value82 && right_value82 != __result_obj__ && !__freed_obj__) { right_value82 = come_decrement_ref_count(right_value82, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value82;
    __freed_obj__ = 0;
    for(
    i_100=0 ,    0;    _for_condtionalA9=    i_100<len_98 ,    _for_condtionalA9;    i_100++ ,    0    ){
        result_99[i_100]=str[len_98-i_100-1];
    }
    result_99[len_98]=0;
    __result161__ = __result_obj__ = result_99;
    if(result_99 && !__freed_obj__) { result_99 = come_decrement_ref_count(result_99, (void*)0, (void*)0, 0, 1, 0); }
    return __result161__;
    if(result_99 && !__freed_obj__) { result_99 = come_decrement_ref_count(result_99, (void*)0, (void*)0, 0, 0, 0); }
}

char* string_operator_load_range_element(char* str, int head, int tail){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional120;
void* right_value83;
char* __result162__;
int len_101;
_Bool _if_conditional121;
_Bool _if_conditional122;
_Bool _if_conditional123;
void* right_value84;
void* right_value85;
char* __result163__;
_Bool _if_conditional124;
_Bool _if_conditional125;
_Bool _if_conditional126;
void* right_value86;
char* __result164__;
_Bool _if_conditional127;
void* right_value87;
char* __result165__;
void* right_value88;
char* result_102;
char* __result166__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value83, 0, sizeof(void*));
memset(&len_101, 0, sizeof(int));
memset(&right_value84, 0, sizeof(void*));
memset(&right_value85, 0, sizeof(void*));
memset(&right_value86, 0, sizeof(void*));
memset(&right_value87, 0, sizeof(void*));
memset(&right_value88, 0, sizeof(void*));
memset(&result_102, 0, sizeof(char*));
    if(_if_conditional120=str==((void*)0),    _if_conditional120) {
        __result162__ = __result_obj__ = ((char*)(right_value83=__builtin_string("")));
        return __result162__;
    }
    len_101=strlen(str);
    if(_if_conditional121=head<0,    _if_conditional121) {
        head+=len_101;
    }
    if(_if_conditional122=tail<0,    _if_conditional122) {
        tail+=len_101+1;
    }
    if(_if_conditional123=head>tail,    _if_conditional123) {
        __result163__ = __result_obj__ = ((char*)(right_value85=string_reverse(((char*)(right_value84=charp_substring(str,tail,head))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value84);
        if(right_value84 && right_value84 != __result_obj__ && !__freed_obj__) { right_value84 = come_decrement_ref_count(right_value84, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value84;
        __freed_obj__ = 0;
        return __result163__;
    }
    if(_if_conditional124=head<0,    _if_conditional124) {
        head=0;
    }
    if(_if_conditional125=tail>=len_101,    _if_conditional125) {
        tail=len_101;
    }
    if(_if_conditional126=head==tail,    _if_conditional126) {
        __result164__ = __result_obj__ = ((char*)(right_value86=__builtin_string("")));
        return __result164__;
    }
    if(_if_conditional127=tail-head+1<1,    _if_conditional127) {
        __result165__ = __result_obj__ = ((char*)(right_value87=__builtin_string("")));
        return __result165__;
    }
    result_102=(char*)come_increment_ref_count(((char*)(right_value88=(char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "libcomelang2.c", 1369))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value88);
    if(right_value88 && right_value88 != __result_obj__ && !__freed_obj__) { right_value88 = come_decrement_ref_count(right_value88, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value88;
    __freed_obj__ = 0;
    memcpy(result_102,str+head,tail-head);
    result_102[tail-head]=0;
    __result166__ = __result_obj__ = result_102;
    if(result_102 && !__freed_obj__) { result_102 = come_decrement_ref_count(result_102, (void*)0, (void*)0, 0, 1, 0); }
    return __result166__;
    if(result_102 && !__freed_obj__) { result_102 = come_decrement_ref_count(result_102, (void*)0, (void*)0, 0, 0, 0); }
}

char* charp_operator_load_range_element(char* str, int head, int tail){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional128;
void* right_value89;
char* __result167__;
int len_103;
_Bool _if_conditional129;
_Bool _if_conditional130;
_Bool _if_conditional131;
void* right_value90;
void* right_value91;
char* __result168__;
_Bool _if_conditional132;
_Bool _if_conditional133;
_Bool _if_conditional134;
void* right_value92;
char* __result169__;
_Bool _if_conditional135;
void* right_value93;
char* __result170__;
void* right_value94;
char* result_104;
char* __result171__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value89, 0, sizeof(void*));
memset(&len_103, 0, sizeof(int));
memset(&right_value90, 0, sizeof(void*));
memset(&right_value91, 0, sizeof(void*));
memset(&right_value92, 0, sizeof(void*));
memset(&right_value93, 0, sizeof(void*));
memset(&right_value94, 0, sizeof(void*));
memset(&result_104, 0, sizeof(char*));
    if(_if_conditional128=str==((void*)0),    _if_conditional128) {
        __result167__ = __result_obj__ = ((char*)(right_value89=__builtin_string("")));
        return __result167__;
    }
    len_103=strlen(str);
    if(_if_conditional129=head<0,    _if_conditional129) {
        head+=len_103;
    }
    if(_if_conditional130=tail<0,    _if_conditional130) {
        tail+=len_103+1;
    }
    if(_if_conditional131=head>tail,    _if_conditional131) {
        __result168__ = __result_obj__ = ((char*)(right_value91=string_reverse(((char*)(right_value90=charp_substring(str,tail,head))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value90);
        if(right_value90 && right_value90 != __result_obj__ && !__freed_obj__) { right_value90 = come_decrement_ref_count(right_value90, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value90;
        __freed_obj__ = 0;
        return __result168__;
    }
    if(_if_conditional132=head<0,    _if_conditional132) {
        head=0;
    }
    if(_if_conditional133=tail>=len_103,    _if_conditional133) {
        tail=len_103;
    }
    if(_if_conditional134=head==tail,    _if_conditional134) {
        __result169__ = __result_obj__ = ((char*)(right_value92=__builtin_string("")));
        return __result169__;
    }
    if(_if_conditional135=tail-head+1<1,    _if_conditional135) {
        __result170__ = __result_obj__ = ((char*)(right_value93=__builtin_string("")));
        return __result170__;
    }
    result_104=(char*)come_increment_ref_count(((char*)(right_value94=(char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "libcomelang2.c", 1412))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value94);
    if(right_value94 && right_value94 != __result_obj__ && !__freed_obj__) { right_value94 = come_decrement_ref_count(right_value94, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value94;
    __freed_obj__ = 0;
    memcpy(result_104,str+head,tail-head);
    result_104[tail-head]=0;
    __result171__ = __result_obj__ = result_104;
    if(result_104 && !__freed_obj__) { result_104 = come_decrement_ref_count(result_104, (void*)0, (void*)0, 0, 1, 0); }
    return __result171__;
    if(result_104 && !__freed_obj__) { result_104 = come_decrement_ref_count(result_104, (void*)0, (void*)0, 0, 0, 0); }
}

char* charp_substring(char* str, int head, int tail){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional136;
void* right_value95;
char* __result172__;
int len_105;
_Bool _if_conditional137;
_Bool _if_conditional138;
_Bool _if_conditional139;
void* right_value96;
void* right_value97;
char* __result173__;
_Bool _if_conditional140;
_Bool _if_conditional141;
_Bool _if_conditional142;
void* right_value98;
char* __result174__;
_Bool _if_conditional143;
void* right_value99;
char* __result175__;
void* right_value100;
char* result_106;
char* __result176__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value95, 0, sizeof(void*));
memset(&len_105, 0, sizeof(int));
memset(&right_value96, 0, sizeof(void*));
memset(&right_value97, 0, sizeof(void*));
memset(&right_value98, 0, sizeof(void*));
memset(&right_value99, 0, sizeof(void*));
memset(&right_value100, 0, sizeof(void*));
memset(&result_106, 0, sizeof(char*));
    if(_if_conditional136=str==((void*)0),    _if_conditional136) {
        __result172__ = __result_obj__ = ((char*)(right_value95=__builtin_string("")));
        return __result172__;
    }
    len_105=strlen(str);
    if(_if_conditional137=head<0,    _if_conditional137) {
        head+=len_105;
    }
    if(_if_conditional138=tail<0,    _if_conditional138) {
        tail+=len_105+1;
    }
    if(_if_conditional139=head>tail,    _if_conditional139) {
        __result173__ = __result_obj__ = ((char*)(right_value97=string_reverse(((char*)(right_value96=charp_substring(str,tail,head))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value96);
        if(right_value96 && right_value96 != __result_obj__ && !__freed_obj__) { right_value96 = come_decrement_ref_count(right_value96, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value96;
        __freed_obj__ = 0;
        return __result173__;
    }
    if(_if_conditional140=head<0,    _if_conditional140) {
        head=0;
    }
    if(_if_conditional141=tail>=len_105,    _if_conditional141) {
        tail=len_105;
    }
    if(_if_conditional142=head==tail,    _if_conditional142) {
        __result174__ = __result_obj__ = ((char*)(right_value98=__builtin_string("")));
        return __result174__;
    }
    if(_if_conditional143=tail-head+1<1,    _if_conditional143) {
        __result175__ = __result_obj__ = ((char*)(right_value99=__builtin_string("")));
        return __result175__;
    }
    result_106=(char*)come_increment_ref_count(((char*)(right_value100=(char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "libcomelang2.c", 1455))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value100);
    if(right_value100 && right_value100 != __result_obj__ && !__freed_obj__) { right_value100 = come_decrement_ref_count(right_value100, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value100;
    __freed_obj__ = 0;
    memcpy(result_106,str+head,tail-head);
    result_106[tail-head]=0;
    __result176__ = __result_obj__ = result_106;
    if(result_106 && !__freed_obj__) { result_106 = come_decrement_ref_count(result_106, (void*)0, (void*)0, 0, 1, 0); }
    return __result176__;
    if(result_106 && !__freed_obj__) { result_106 = come_decrement_ref_count(result_106, (void*)0, (void*)0, 0, 0, 0); }
}

char* string_substring(char* str, int head, int tail){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional144;
void* right_value101;
char* __result177__;
int len_107;
_Bool _if_conditional145;
_Bool _if_conditional146;
_Bool _if_conditional147;
void* right_value102;
void* right_value103;
char* __result178__;
_Bool _if_conditional148;
_Bool _if_conditional149;
_Bool _if_conditional150;
void* right_value104;
char* __result179__;
_Bool _if_conditional151;
void* right_value105;
char* __result180__;
void* right_value106;
char* result_108;
char* __result181__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value101, 0, sizeof(void*));
memset(&len_107, 0, sizeof(int));
memset(&right_value102, 0, sizeof(void*));
memset(&right_value103, 0, sizeof(void*));
memset(&right_value104, 0, sizeof(void*));
memset(&right_value105, 0, sizeof(void*));
memset(&right_value106, 0, sizeof(void*));
memset(&result_108, 0, sizeof(char*));
    if(_if_conditional144=str==((void*)0),    _if_conditional144) {
        __result177__ = __result_obj__ = ((char*)(right_value101=__builtin_string("")));
        return __result177__;
    }
    len_107=strlen(str);
    if(_if_conditional145=head<0,    _if_conditional145) {
        head+=len_107;
    }
    if(_if_conditional146=tail<0,    _if_conditional146) {
        tail+=len_107+1;
    }
    if(_if_conditional147=head>tail,    _if_conditional147) {
        __result178__ = __result_obj__ = ((char*)(right_value103=string_reverse(((char*)(right_value102=charp_substring(str,tail,head))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value102);
        if(right_value102 && right_value102 != __result_obj__ && !__freed_obj__) { right_value102 = come_decrement_ref_count(right_value102, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value102;
        __freed_obj__ = 0;
        return __result178__;
    }
    if(_if_conditional148=head<0,    _if_conditional148) {
        head=0;
    }
    if(_if_conditional149=tail>=len_107,    _if_conditional149) {
        tail=len_107;
    }
    if(_if_conditional150=head==tail,    _if_conditional150) {
        __result179__ = __result_obj__ = ((char*)(right_value104=__builtin_string("")));
        return __result179__;
    }
    if(_if_conditional151=tail-head+1<1,    _if_conditional151) {
        __result180__ = __result_obj__ = ((char*)(right_value105=__builtin_string("")));
        return __result180__;
    }
    result_108=(char*)come_increment_ref_count(((char*)(right_value106=(char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "libcomelang2.c", 1498))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value106);
    if(right_value106 && right_value106 != __result_obj__ && !__freed_obj__) { right_value106 = come_decrement_ref_count(right_value106, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value106;
    __freed_obj__ = 0;
    memcpy(result_108,str+head,tail-head);
    result_108[tail-head]=0;
    __result181__ = __result_obj__ = result_108;
    if(result_108 && !__freed_obj__) { result_108 = come_decrement_ref_count(result_108, (void*)0, (void*)0, 0, 1, 0); }
    return __result181__;
    if(result_108 && !__freed_obj__) { result_108 = come_decrement_ref_count(result_108, (void*)0, (void*)0, 0, 0, 0); }
}

char* xsprintf(char* msg, ...){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional152;
void* right_value107;
char* __result182__;
va_list args_109;
char* result_110;
int len_111;
_Bool _if_conditional153;
void* right_value108;
char* __result183__;
void* right_value109;
char* result2_112;
char* __result184__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value107, 0, sizeof(void*));
memset(&args_109, 0, sizeof(va_list));
memset(&result_110, 0, sizeof(char*));
memset(&len_111, 0, sizeof(int));
memset(&right_value108, 0, sizeof(void*));
memset(&right_value109, 0, sizeof(void*));
memset(&result2_112, 0, sizeof(char*));
    if(_if_conditional152=msg==((void*)0),    _if_conditional152) {
        __result182__ = __result_obj__ = ((char*)(right_value107=__builtin_string("")));
        return __result182__;
    }
    __builtin_va_start(args_109,msg);
    len_111=vasprintf(&result_110,msg,args_109);
    __builtin_va_end(args_109);
    if(_if_conditional153=len_111<0,    _if_conditional153) {
        __result183__ = __result_obj__ = ((char*)(right_value108=__builtin_string("")));
        if((&args_109) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_109), (void*)0, (void*)0, 1, 0, 0, 0); }
        return __result183__;
    }
    result2_112=(char*)come_increment_ref_count(((char*)(right_value109=__builtin_string(result_110))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value109);
    if(right_value109 && right_value109 != __result_obj__ && !__freed_obj__) { right_value109 = come_decrement_ref_count(right_value109, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value109;
    __freed_obj__ = 0;
    free(result_110);
    __result184__ = __result_obj__ = result2_112;
    if((&args_109) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_109), (void*)0, (void*)0, 1, 0, 0, 0); }
    if(result2_112 && !__freed_obj__) { result2_112 = come_decrement_ref_count(result2_112, (void*)0, (void*)0, 0, 1, 0); }
    return __result184__;
    if((&args_109) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_109), (void*)0, (void*)0, 1, 0, 0, 0); }
    if(result2_112 && !__freed_obj__) { result2_112 = come_decrement_ref_count(result2_112, (void*)0, (void*)0, 0, 0, 0); }
}

static void va_list_finalize(va_list self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

char* charp_delete(char* str, int head, int tail){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional154;
void* right_value110;
char* __result185__;
int len_113;
_Bool _if_conditional155;
void* right_value111;
char* __result186__;
_Bool _if_conditional156;
_Bool _if_conditional157;
_Bool _if_conditional158;
_Bool _if_conditional159;
void* right_value112;
char* __result187__;
_Bool _if_conditional160;
void* right_value113;
char* sub_str_114;
void* right_value114;
char* __result188__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value110, 0, sizeof(void*));
memset(&len_113, 0, sizeof(int));
memset(&right_value111, 0, sizeof(void*));
memset(&right_value112, 0, sizeof(void*));
memset(&right_value113, 0, sizeof(void*));
memset(&sub_str_114, 0, sizeof(char*));
memset(&right_value114, 0, sizeof(void*));
    if(_if_conditional154=str==((void*)0),    _if_conditional154) {
        __result185__ = __result_obj__ = ((char*)(right_value110=__builtin_string("")));
        return __result185__;
    }
    len_113=strlen(str);
    if(_if_conditional155=strcmp(str,"")==0,    _if_conditional155) {
        __result186__ = __result_obj__ = ((char*)(right_value111=__builtin_string(str)));
        return __result186__;
    }
    if(_if_conditional156=head<0,    _if_conditional156) {
        head+=len_113;
    }
    if(_if_conditional157=tail<0,    _if_conditional157) {
        tail+=len_113+1;
    }
    if(_if_conditional158=head<0,    _if_conditional158) {
        head=0;
    }
    if(_if_conditional159=tail<0,    _if_conditional159) {
        __result187__ = __result_obj__ = ((char*)(right_value112=__builtin_string(str)));
        return __result187__;
    }
    if(_if_conditional160=tail>=len_113,    _if_conditional160) {
        tail=len_113;
    }
    sub_str_114=(char*)come_increment_ref_count(((char*)(right_value113=charp_substring(str,tail,-1))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value113);
    if(right_value113 && right_value113 != __result_obj__ && !__freed_obj__) { right_value113 = come_decrement_ref_count(right_value113, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value113;
    __freed_obj__ = 0;
    memcpy(str+head,sub_str_114,string_length(sub_str_114)+1);
    __result188__ = __result_obj__ = ((char*)(right_value114=__builtin_string(str)));
    if(sub_str_114 && !__freed_obj__) { sub_str_114 = come_decrement_ref_count(sub_str_114, (void*)0, (void*)0, 0, 0, 0); }
    return __result188__;
    if(sub_str_114 && !__freed_obj__) { sub_str_114 = come_decrement_ref_count(sub_str_114, (void*)0, (void*)0, 0, 0, 0); }
}

char* string_delete(char* str, int head, int tail){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional161;
void* right_value115;
char* __result189__;
int len_115;
_Bool _if_conditional162;
void* right_value116;
char* __result190__;
_Bool _if_conditional163;
_Bool _if_conditional164;
_Bool _if_conditional165;
_Bool _if_conditional166;
void* right_value117;
char* __result191__;
_Bool _if_conditional167;
void* right_value118;
char* sub_str_116;
void* right_value119;
char* __result192__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value115, 0, sizeof(void*));
memset(&len_115, 0, sizeof(int));
memset(&right_value116, 0, sizeof(void*));
memset(&right_value117, 0, sizeof(void*));
memset(&right_value118, 0, sizeof(void*));
memset(&sub_str_116, 0, sizeof(char*));
memset(&right_value119, 0, sizeof(void*));
    if(_if_conditional161=str==((void*)0),    _if_conditional161) {
        __result189__ = __result_obj__ = ((char*)(right_value115=__builtin_string("")));
        return __result189__;
    }
    len_115=strlen(str);
    if(_if_conditional162=strcmp(str,"")==0,    _if_conditional162) {
        __result190__ = __result_obj__ = ((char*)(right_value116=__builtin_string(str)));
        return __result190__;
    }
    if(_if_conditional163=head<0,    _if_conditional163) {
        head+=len_115;
    }
    if(_if_conditional164=tail<0,    _if_conditional164) {
        tail+=len_115+1;
    }
    if(_if_conditional165=head<0,    _if_conditional165) {
        head=0;
    }
    if(_if_conditional166=tail<0,    _if_conditional166) {
        __result191__ = __result_obj__ = ((char*)(right_value117=__builtin_string(str)));
        return __result191__;
    }
    if(_if_conditional167=tail>=len_115,    _if_conditional167) {
        tail=len_115;
    }
    sub_str_116=(char*)come_increment_ref_count(((char*)(right_value118=charp_substring(str,tail,-1))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value118);
    if(right_value118 && right_value118 != __result_obj__ && !__freed_obj__) { right_value118 = come_decrement_ref_count(right_value118, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value118;
    __freed_obj__ = 0;
    memcpy(str+head,sub_str_116,string_length(sub_str_116)+1);
    __result192__ = __result_obj__ = ((char*)(right_value119=__builtin_string(str)));
    if(sub_str_116 && !__freed_obj__) { sub_str_116 = come_decrement_ref_count(sub_str_116, (void*)0, (void*)0, 0, 0, 0); }
    return __result192__;
    if(sub_str_116 && !__freed_obj__) { sub_str_116 = come_decrement_ref_count(sub_str_116, (void*)0, (void*)0, 0, 0, 0); }
}

struct list$1charph* charp_split_char(char* self, char c){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional168;
void* right_value120;
void* right_value121;
struct list$1charph* __result194__;
void* right_value122;
void* right_value123;
struct list$1charph* result_119;
void* right_value124;
void* right_value125;
struct buffer* str_120;
int i_121;
_Bool _for_condtionalA10;
_Bool _if_conditional170;
void* right_value129;
_Bool _if_conditional173;
void* right_value130;
struct list$1charph* __result196__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value120, 0, sizeof(void*));
memset(&right_value121, 0, sizeof(void*));
memset(&right_value122, 0, sizeof(void*));
memset(&right_value123, 0, sizeof(void*));
memset(&result_119, 0, sizeof(struct list$1charph*));
memset(&right_value124, 0, sizeof(void*));
memset(&right_value125, 0, sizeof(void*));
memset(&str_120, 0, sizeof(struct buffer*));
memset(&i_121, 0, sizeof(int));
memset(&right_value129, 0, sizeof(void*));
memset(&right_value130, 0, sizeof(void*));
    if(_if_conditional168=self==((void*)0),    _if_conditional168) {
        __result194__ = __result_obj__ = ((struct list$1charph*)(right_value121=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value120=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2.c", 1609)))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value120);
        if(right_value120 && right_value120 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value120, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value120;
        __freed_obj__ = 0;
        return __result194__;
    }
    result_119=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value123=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value122=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2.c", 1612))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value122);
    if(right_value122 && right_value122 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value122, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value122;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value123);
    if(right_value123 && right_value123 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value123, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value123;
    __freed_obj__ = 0;
    str_120=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value125=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value124=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 1614))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value124);
    if(right_value124 && right_value124 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value124, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value124;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value125);
    if(right_value125 && right_value125 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value125, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value125;
    __freed_obj__ = 0;
    for(
    i_121=0 ,    0;    _for_condtionalA10=    i_121<charp_length(self) ,    _for_condtionalA10;    i_121++ ,    0    ){
        if(_if_conditional170=self[i_121]==c,        _if_conditional170) {
            list$1charph_push_back(result_119,(char*)come_increment_ref_count(((char*)(right_value129=__builtin_string(str_120->buf)))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value129);
            if(right_value129 && right_value129 != __result_obj__ && !__freed_obj__) { right_value129 = come_decrement_ref_count(right_value129, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value129;
            __freed_obj__ = 0;
            buffer_reset(str_120);
        }
        else {
            buffer_append_char(str_120,self[i_121]);
        }
    }
    if(_if_conditional173=buffer_length(str_120)!=0,    _if_conditional173) {
        list$1charph_push_back(result_119,(char*)come_increment_ref_count(((char*)(right_value130=__builtin_string(str_120->buf)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value130);
        if(right_value130 && right_value130 != __result_obj__ && !__freed_obj__) { right_value130 = come_decrement_ref_count(right_value130, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value130;
        __freed_obj__ = 0;
    }
    __result196__ = __result_obj__ = result_119;
    if(result_119 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_119, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(str_120 && !__freed_obj__) { come_call_finalizer(buffer_finalize,str_120, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result196__;
    if(result_119 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_119, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(str_120 && !__freed_obj__) { come_call_finalizer(buffer_finalize,str_120, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1charph* __result193__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            __result193__ = __result_obj__ = self;
            if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            return __result193__;
            if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list$1charphp_finalize(struct list$1charph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1charph* it_117;
_Bool _while_condtional8;
struct list_item$1charph* prev_it_118;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_117, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_118, 0, sizeof(struct list_item$1charph*));
                it_117=self->head;
                while(_while_condtional8=it_117!=((void*)0),                _while_condtional8) {
                    prev_it_118=it_117;
                    it_117=it_117->next;
                    if(prev_it_118 && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,prev_it_118, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional169;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional169=self!=((void*)0)&&self->item!=((void*)0),                        _if_conditional169) {
                            if(self->item && !__freed_obj__) { self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0, 0, 0); }
                        }
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional171;
void* right_value126;
struct list_item$1charph* litem_122;
char* __dec_obj16;
_Bool _if_conditional172;
void* right_value127;
struct list_item$1charph* litem_123;
char* __dec_obj17;
void* right_value128;
struct list_item$1charph* litem_124;
char* __dec_obj18;
struct list$1charph* __result195__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value126, 0, sizeof(void*));
memset(&litem_122, 0, sizeof(struct list_item$1charph*));
memset(&right_value127, 0, sizeof(void*));
memset(&litem_123, 0, sizeof(struct list_item$1charph*));
memset(&right_value128, 0, sizeof(void*));
memset(&litem_124, 0, sizeof(struct list_item$1charph*));
                if(_if_conditional171=self->len==0,                _if_conditional171) {
                    litem_122=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value126=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 283))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value126);
                    if(right_value126 && right_value126 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value126, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value126;
                    __freed_obj__ = 0;
                    litem_122->prev=((void*)0);
                    litem_122->next=((void*)0);
                    __dec_obj16=litem_122->item;
                    litem_122->item=(char*)come_increment_ref_count(item);
                    if(__dec_obj16) { __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0,0,0); }
                    self->tail=litem_122;
                    self->head=litem_122;
                }
                else {
                    if(_if_conditional172=self->len==1,                    _if_conditional172) {
                        litem_123=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value127=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 293))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value127);
                        if(right_value127 && right_value127 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value127, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value127;
                        __freed_obj__ = 0;
                        litem_123->prev=self->head;
                        litem_123->next=((void*)0);
                        __dec_obj17=litem_123->item;
                        litem_123->item=(char*)come_increment_ref_count(item);
                        if(__dec_obj17) { __dec_obj17 = come_decrement_ref_count(__dec_obj17, (void*)0, (void*)0, 0,0,0); }
                        self->tail=litem_123;
                        self->head->next=litem_123;
                    }
                    else {
                        litem_124=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value128=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 303))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value128);
                        if(right_value128 && right_value128 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value128, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value128;
                        __freed_obj__ = 0;
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
                __result195__ = __result_obj__ = self;
                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
                return __result195__;
                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
}

struct list$1charph* string_split_char(char* self, char c){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional174;
void* right_value131;
void* right_value132;
struct list$1charph* __result197__;
void* right_value133;
void* right_value134;
struct list$1charph* result_125;
void* right_value135;
void* right_value136;
struct buffer* str_126;
int i_127;
_Bool _for_condtionalA11;
_Bool _if_conditional175;
void* right_value137;
_Bool _if_conditional176;
void* right_value138;
struct list$1charph* __result198__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value131, 0, sizeof(void*));
memset(&right_value132, 0, sizeof(void*));
memset(&right_value133, 0, sizeof(void*));
memset(&right_value134, 0, sizeof(void*));
memset(&result_125, 0, sizeof(struct list$1charph*));
memset(&right_value135, 0, sizeof(void*));
memset(&right_value136, 0, sizeof(void*));
memset(&str_126, 0, sizeof(struct buffer*));
memset(&i_127, 0, sizeof(int));
memset(&right_value137, 0, sizeof(void*));
memset(&right_value138, 0, sizeof(void*));
    if(_if_conditional174=self==((void*)0),    _if_conditional174) {
        __result197__ = __result_obj__ = ((struct list$1charph*)(right_value132=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value131=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2.c", 1635)))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value131);
        if(right_value131 && right_value131 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value131, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value131;
        __freed_obj__ = 0;
        return __result197__;
    }
    result_125=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value134=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value133=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2.c", 1638))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value133);
    if(right_value133 && right_value133 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value133, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value133;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value134);
    if(right_value134 && right_value134 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value134, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value134;
    __freed_obj__ = 0;
    str_126=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value136=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value135=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 1640))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value135);
    if(right_value135 && right_value135 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value135, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value135;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value136);
    if(right_value136 && right_value136 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value136, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value136;
    __freed_obj__ = 0;
    for(
    i_127=0 ,    0;    _for_condtionalA11=    i_127<charp_length(self) ,    _for_condtionalA11;    i_127++ ,    0    ){
        if(_if_conditional175=self[i_127]==c,        _if_conditional175) {
            list$1charph_push_back(result_125,(char*)come_increment_ref_count(((char*)(right_value137=__builtin_string(str_126->buf)))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value137);
            if(right_value137 && right_value137 != __result_obj__ && !__freed_obj__) { right_value137 = come_decrement_ref_count(right_value137, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value137;
            __freed_obj__ = 0;
            buffer_reset(str_126);
        }
        else {
            buffer_append_char(str_126,self[i_127]);
        }
    }
    if(_if_conditional176=buffer_length(str_126)!=0,    _if_conditional176) {
        list$1charph_push_back(result_125,(char*)come_increment_ref_count(((char*)(right_value138=__builtin_string(str_126->buf)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value138);
        if(right_value138 && right_value138 != __result_obj__ && !__freed_obj__) { right_value138 = come_decrement_ref_count(right_value138, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value138;
        __freed_obj__ = 0;
    }
    __result198__ = __result_obj__ = result_125;
    if(result_125 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_125, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(str_126 && !__freed_obj__) { come_call_finalizer(buffer_finalize,str_126, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result198__;
    if(result_125 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_125, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(str_126 && !__freed_obj__) { come_call_finalizer(buffer_finalize,str_126, (void*)0, (void*)0, 0, 0, 0, 0); }
}

char* xbasename(char* path){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional177;
void* right_value139;
char* __result199__;
char* p_128;
_Bool _while_condtional9;
_Bool _if_conditional178;
_Bool _if_conditional179;
void* right_value140;
char* __result200__;
void* right_value141;
char* __result201__;
void* right_value142;
char* __result202__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value139, 0, sizeof(void*));
memset(&p_128, 0, sizeof(char*));
memset(&right_value140, 0, sizeof(void*));
memset(&right_value141, 0, sizeof(void*));
memset(&right_value142, 0, sizeof(void*));
    if(_if_conditional177=path==((void*)0),    _if_conditional177) {
        __result199__ = __result_obj__ = ((char*)(right_value139=__builtin_string("")));
        return __result199__;
    }
    p_128=path+strlen(path);
    while(_while_condtional9=p_128>=path,    _while_condtional9) {
        if(_if_conditional178=*p_128==47,        _if_conditional178) {
            break;
        }
        else {
            p_128--;
        }
    }
    if(_if_conditional179=p_128<path,    _if_conditional179) {
        __result200__ = __result_obj__ = ((char*)(right_value140=__builtin_string(path)));
        return __result200__;
    }
    else {
        __result201__ = __result_obj__ = ((char*)(right_value141=__builtin_string(p_128+1)));
        return __result201__;
    }
    __result202__ = __result_obj__ = ((char*)(right_value142=__builtin_string("")));
    return __result202__;
}

char* xdirname(char* path){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional180;
void* right_value143;
char* __result203__;
void* right_value144;
void* right_value145;
char* __result204__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value143, 0, sizeof(void*));
memset(&right_value144, 0, sizeof(void*));
memset(&right_value145, 0, sizeof(void*));
    if(_if_conditional180=path==((void*)0),    _if_conditional180) {
        __result203__ = __result_obj__ = ((char*)(right_value143=__builtin_string("")));
        return __result203__;
    }
    __result204__ = __result_obj__ = ((char*)(right_value145=__builtin_string(dirname(((char*)(right_value144=__builtin_string(path)))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value144);
    if(right_value144 && right_value144 != __result_obj__ && !__freed_obj__) { right_value144 = come_decrement_ref_count(right_value144, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value144;
    __freed_obj__ = 0;
    return __result204__;
}

char* xnoextname(char* path){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional181;
void* right_value146;
char* __result205__;
void* right_value147;
char* path2_129;
char* p_130;
_Bool _while_condtional10;
_Bool _if_conditional182;
_Bool _if_conditional183;
void* right_value148;
char* __result206__;
void* right_value149;
char* __result207__;
void* right_value150;
char* __result208__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value146, 0, sizeof(void*));
memset(&right_value147, 0, sizeof(void*));
memset(&path2_129, 0, sizeof(char*));
memset(&p_130, 0, sizeof(char*));
memset(&right_value148, 0, sizeof(void*));
memset(&right_value149, 0, sizeof(void*));
memset(&right_value150, 0, sizeof(void*));
    if(_if_conditional181=path==((void*)0),    _if_conditional181) {
        __result205__ = __result_obj__ = ((char*)(right_value146=__builtin_string("")));
        return __result205__;
    }
    path2_129=(char*)come_increment_ref_count(((char*)(right_value147=xbasename(path))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value147);
    if(right_value147 && right_value147 != __result_obj__ && !__freed_obj__) { right_value147 = come_decrement_ref_count(right_value147, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value147;
    __freed_obj__ = 0;
    p_130=path2_129+strlen(path2_129);
    while(_while_condtional10=p_130>=path2_129,    _while_condtional10) {
        if(_if_conditional182=*p_130==46,        _if_conditional182) {
            break;
        }
        else {
            p_130--;
        }
    }
    if(_if_conditional183=p_130<path2_129,    _if_conditional183) {
        __result206__ = __result_obj__ = ((char*)(right_value148=__builtin_string(path2_129)));
        if(path2_129 && !__freed_obj__) { path2_129 = come_decrement_ref_count(path2_129, (void*)0, (void*)0, 0, 0, 0); }
        return __result206__;
    }
    else {
        __result207__ = __result_obj__ = ((char*)(right_value149=string_substring(path2_129,0,p_130-path2_129)));
        if(path2_129 && !__freed_obj__) { path2_129 = come_decrement_ref_count(path2_129, (void*)0, (void*)0, 0, 0, 0); }
        return __result207__;
    }
    __result208__ = __result_obj__ = ((char*)(right_value150=__builtin_string("")));
    if(path2_129 && !__freed_obj__) { path2_129 = come_decrement_ref_count(path2_129, (void*)0, (void*)0, 0, 0, 0); }
    return __result208__;
    if(path2_129 && !__freed_obj__) { path2_129 = come_decrement_ref_count(path2_129, (void*)0, (void*)0, 0, 0, 0); }
}

char* xextname(char* path){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional184;
void* right_value151;
char* __result209__;
char* p_131;
_Bool _while_condtional11;
_Bool _if_conditional185;
_Bool _if_conditional186;
void* right_value152;
char* __result210__;
void* right_value153;
char* __result211__;
void* right_value154;
char* __result212__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value151, 0, sizeof(void*));
memset(&p_131, 0, sizeof(char*));
memset(&right_value152, 0, sizeof(void*));
memset(&right_value153, 0, sizeof(void*));
memset(&right_value154, 0, sizeof(void*));
    if(_if_conditional184=path==((void*)0),    _if_conditional184) {
        __result209__ = __result_obj__ = ((char*)(right_value151=__builtin_string("")));
        return __result209__;
    }
    p_131=path+strlen(path);
    while(_while_condtional11=p_131>=path,    _while_condtional11) {
        if(_if_conditional185=*p_131==46,        _if_conditional185) {
            break;
        }
        else {
            p_131--;
        }
    }
    if(_if_conditional186=p_131<path,    _if_conditional186) {
        __result210__ = __result_obj__ = ((char*)(right_value152=__builtin_string(path)));
        return __result210__;
    }
    else {
        __result211__ = __result_obj__ = ((char*)(right_value153=__builtin_string(p_131+1)));
        return __result211__;
    }
    __result212__ = __result_obj__ = ((char*)(right_value154=__builtin_string("")));
    return __result212__;
}

char* xrealpath(char* path){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional187;
void* right_value155;
char* __result213__;
char* result_132;
void* right_value156;
char* result2_133;
char* __result214__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value155, 0, sizeof(void*));
memset(&result_132, 0, sizeof(char*));
memset(&right_value156, 0, sizeof(void*));
memset(&result2_133, 0, sizeof(char*));
    if(_if_conditional187=path==((void*)0),    _if_conditional187) {
        __result213__ = __result_obj__ = ((char*)(right_value155=__builtin_string("")));
        return __result213__;
    }
    result_132=realpath(path,((void*)0));
    result2_133=(char*)come_increment_ref_count(((char*)(right_value156=__builtin_string(result_132))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value156);
    if(right_value156 && right_value156 != __result_obj__ && !__freed_obj__) { right_value156 = come_decrement_ref_count(right_value156, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value156;
    __freed_obj__ = 0;
    free(result_132);
    __result214__ = __result_obj__ = result2_133;
    if(result2_133 && !__freed_obj__) { result2_133 = come_decrement_ref_count(result2_133, (void*)0, (void*)0, 0, 1, 0); }
    return __result214__;
    if(result2_133 && !__freed_obj__) { result2_133 = come_decrement_ref_count(result2_133, (void*)0, (void*)0, 0, 0, 0); }
}

char* bool_to_string(_Bool self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional188;
void* right_value157;
char* __result215__;
void* right_value158;
char* __result216__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value157, 0, sizeof(void*));
memset(&right_value158, 0, sizeof(void*));
    if(_if_conditional188=self,    _if_conditional188) {
        __result215__ = __result_obj__ = ((char*)(right_value157=__builtin_string("true")));
        return __result215__;
    }
    else {
        __result216__ = __result_obj__ = ((char*)(right_value158=__builtin_string("false")));
        return __result216__;
    }
}

char* char_to_string(char self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value159;
char* __result217__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value159, 0, sizeof(void*));
    __result217__ = __result_obj__ = ((char*)(right_value159=xsprintf("%c",self)));
    return __result217__;
}

char* short_to_string(short short self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value160;
char* __result218__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value160, 0, sizeof(void*));
    __result218__ = __result_obj__ = ((char*)(right_value160=xsprintf("%d",self)));
    return __result218__;
}

char* int_to_string(int self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value161;
char* __result219__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value161, 0, sizeof(void*));
    __result219__ = __result_obj__ = ((char*)(right_value161=xsprintf("%d",self)));
    return __result219__;
}

char* long_to_string(long self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value162;
char* __result220__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value162, 0, sizeof(void*));
    __result220__ = __result_obj__ = ((char*)(right_value162=xsprintf("%ld",self)));
    return __result220__;
}

char* size_t_to_string(long int self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value163;
char* __result221__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value163, 0, sizeof(void*));
    __result221__ = __result_obj__ = ((char*)(right_value163=xsprintf("%ld",self)));
    return __result221__;
}

char* float_to_string(float self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value164;
char* __result222__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value164, 0, sizeof(void*));
    __result222__ = __result_obj__ = ((char*)(right_value164=xsprintf("%f",self)));
    return __result222__;
}

char* double_to_string(double self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value165;
char* __result223__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value165, 0, sizeof(void*));
    __result223__ = __result_obj__ = ((char*)(right_value165=xsprintf("%lf",self)));
    return __result223__;
}

char* string_to_string(char* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional189;
void* right_value166;
char* __result224__;
void* right_value167;
char* __result225__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value166, 0, sizeof(void*));
memset(&right_value167, 0, sizeof(void*));
    if(_if_conditional189=self==((void*)0),    _if_conditional189) {
        __result224__ = __result_obj__ = ((char*)(right_value166=__builtin_string("")));
        return __result224__;
    }
    __result225__ = __result_obj__ = ((char*)(right_value167=__builtin_string(self)));
    return __result225__;
}

char* charp_to_string(char* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional190;
void* right_value168;
char* __result226__;
void* right_value169;
char* __result227__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value168, 0, sizeof(void*));
memset(&right_value169, 0, sizeof(void*));
    if(_if_conditional190=self==((void*)0),    _if_conditional190) {
        __result226__ = __result_obj__ = ((char*)(right_value168=__builtin_string("")));
        return __result226__;
    }
    __result227__ = __result_obj__ = ((char*)(right_value169=__builtin_string(self)));
    return __result227__;
}

int bool_compare(_Bool left, _Bool right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional191;
int __result228__;
_Bool _if_conditional192;
int __result229__;
_Bool _if_conditional193;
int __result230__;
int __result231__;
int __result232__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional191=!left&&right,    _if_conditional191) {
        __result228__ = -1;
        return __result228__;
    }
    else {
        if(_if_conditional192=left&&right,        _if_conditional192) {
            __result229__ = 0;
            return __result229__;
        }
        else {
            if(_if_conditional193=!left&&!right,            _if_conditional193) {
                __result230__ = 0;
                return __result230__;
            }
            else {
                __result231__ = 1;
                return __result231__;
            }
        }
    }
    __result232__ = 0;
    return __result232__;
}

int char_compare(char left, char right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional194;
int __result233__;
_Bool _if_conditional195;
int __result234__;
int __result235__;
int __result236__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional194=left<right,    _if_conditional194) {
        __result233__ = -1;
        return __result233__;
    }
    else {
        if(_if_conditional195=left>right,        _if_conditional195) {
            __result234__ = 1;
            return __result234__;
        }
        else {
            __result235__ = 0;
            return __result235__;
        }
    }
    __result236__ = 0;
    return __result236__;
}

int short_compare(short short left, short short right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional196;
int __result237__;
_Bool _if_conditional197;
int __result238__;
int __result239__;
int __result240__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional196=left<right,    _if_conditional196) {
        __result237__ = -1;
        return __result237__;
    }
    else {
        if(_if_conditional197=left>right,        _if_conditional197) {
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

int int_compare(int left, int right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional198;
int __result241__;
_Bool _if_conditional199;
int __result242__;
int __result243__;
int __result244__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional198=left<right,    _if_conditional198) {
        __result241__ = -1;
        return __result241__;
    }
    else {
        if(_if_conditional199=left>right,        _if_conditional199) {
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

int long_compare(long left, long right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional200;
int __result245__;
_Bool _if_conditional201;
int __result246__;
int __result247__;
int __result248__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional200=left<right,    _if_conditional200) {
        __result245__ = -1;
        return __result245__;
    }
    else {
        if(_if_conditional201=left>right,        _if_conditional201) {
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

int size_t_compare(long int left, long int right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional202;
int __result249__;
_Bool _if_conditional203;
int __result250__;
int __result251__;
int __result252__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional202=left<right,    _if_conditional202) {
        __result249__ = -1;
        return __result249__;
    }
    else {
        if(_if_conditional203=left>right,        _if_conditional203) {
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

int float_compare(float left, float right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional204;
int __result253__;
_Bool _if_conditional205;
int __result254__;
int __result255__;
int __result256__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional204=left<right,    _if_conditional204) {
        __result253__ = -1;
        return __result253__;
    }
    else {
        if(_if_conditional205=left>right,        _if_conditional205) {
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

int double_compare(double left, double right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional206;
int __result257__;
_Bool _if_conditional207;
int __result258__;
int __result259__;
int __result260__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional206=left<right,    _if_conditional206) {
        __result257__ = -1;
        return __result257__;
    }
    else {
        if(_if_conditional207=left>right,        _if_conditional207) {
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

int string_compare(char* left, char* right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional208;
int __result261__;
_Bool _if_conditional209;
int __result262__;
_Bool _if_conditional210;
int __result263__;
int __result264__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional208=left==((void*)0)&&right==((void*)0),    _if_conditional208) {
        __result261__ = 0;
        return __result261__;
    }
    else {
        if(_if_conditional209=left==((void*)0),        _if_conditional209) {
            __result262__ = -1;
            return __result262__;
        }
        else {
            if(_if_conditional210=right==((void*)0),            _if_conditional210) {
                __result263__ = 1;
                return __result263__;
            }
        }
    }
    __result264__ = strcmp(left,right);
    return __result264__;
}

int charp_compare(char* left, char* right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional211;
int __result265__;
_Bool _if_conditional212;
int __result266__;
_Bool _if_conditional213;
int __result267__;
int __result268__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional211=left==((void*)0)&&right==((void*)0),    _if_conditional211) {
        __result265__ = 0;
        return __result265__;
    }
    else {
        if(_if_conditional212=left==((void*)0),        _if_conditional212) {
            __result266__ = -1;
            return __result266__;
        }
        else {
            if(_if_conditional213=right==((void*)0),            _if_conditional213) {
                __result267__ = 1;
                return __result267__;
            }
        }
    }
    __result268__ = strcmp(left,right);
    return __result268__;
}

struct optional$2charphbool* FILE_read(struct _IO_FILE* f){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional214;
void* right_value170;
void* right_value171;
void* right_value172;
struct optional$2charphbool* __result270__;
void* right_value173;
void* right_value174;
struct buffer* buf_134;
_Bool _while_condtional12;
int size_136;
_Bool _if_conditional216;
void* right_value175;
void* right_value176;
void* right_value177;
struct optional$2charphbool* __result271__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value170, 0, sizeof(void*));
memset(&right_value171, 0, sizeof(void*));
memset(&right_value172, 0, sizeof(void*));
memset(&right_value173, 0, sizeof(void*));
memset(&right_value174, 0, sizeof(void*));
memset(&buf_134, 0, sizeof(struct buffer*));
memset(&size_136, 0, sizeof(int));
memset(&right_value175, 0, sizeof(void*));
memset(&right_value176, 0, sizeof(void*));
memset(&right_value177, 0, sizeof(void*));
    if(_if_conditional214=f==((void*)0),    _if_conditional214) {
        __result270__ = __result_obj__ = ((struct optional$2charphbool*)(right_value172=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value171=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 1989))),(char*)come_increment_ref_count(((char*)(right_value170=__builtin_string("")))),(_Bool)0)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value170);
        if(right_value170 && right_value170 != __result_obj__ && !__freed_obj__) { right_value170 = come_decrement_ref_count(right_value170, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value170;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value171);
        if(right_value171 && right_value171 != __result_obj__ && !__freed_obj__) { right_value171 = come_decrement_ref_count(right_value171, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value171;
        __freed_obj__ = 0;
        return __result270__;
    }
    buf_134=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value174=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value173=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 1991))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value173);
    if(right_value173 && right_value173 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value173, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value173;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value174);
    if(right_value174 && right_value174 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value174, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value174;
    __freed_obj__ = 0;
    while(_while_condtional12=1,    _while_condtional12) {
        char buf2_135[8192];
        memset(&buf2_135, 0, sizeof(char)        *(8192)        );
        size_136=fread(buf2_135,1,8192,f);
        buffer_append(buf_134,buf2_135,size_136);
        if(_if_conditional216=size_136<8192,        _if_conditional216) {
            break;
        }
    }
    __result271__ = __result_obj__ = ((struct optional$2charphbool*)(right_value177=optional$2charphbool_initialize((struct optional$2charphbool*)come_increment_ref_count(((struct optional$2charphbool*)(right_value176=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2005)))),(char*)come_increment_ref_count(((char*)(right_value175=buffer_to_string(buf_134)))),(_Bool)1)));
    if(buf_134 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_134, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value175);
    if(right_value175 && right_value175 != __result_obj__ && !__freed_obj__) { right_value175 = come_decrement_ref_count(right_value175, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value175;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value176);
    if(right_value176 && right_value176 != __result_obj__ && !__freed_obj__) { right_value176 = come_decrement_ref_count(right_value176, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value176;
    __freed_obj__ = 0;
    return __result271__;
    if(buf_134 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_134, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct optional$2charphbool* optional$2charphbool_initialize(struct optional$2charphbool* self, char* v1, _Bool v2){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* __dec_obj19;
struct optional$2charphbool* __result269__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            __dec_obj19=self->v1;
            self->v1=(char*)come_increment_ref_count(v1);
            if(__dec_obj19) { __dec_obj19 = come_decrement_ref_count(__dec_obj19, (void*)0, (void*)0, 0,0,0); }
            self->v2=v2;
            __result269__ = __result_obj__ = self;
            if(self && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            if(v1 && !__freed_obj__) { v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 1, 0); }
            return __result269__;
            if(self && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            if(v1 && !__freed_obj__) { v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 1, 0); }
}

static void optional$2charphboolp_finalize(struct optional$2charphbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional215;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional215=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional215) {
                    if(self->v1 && !__freed_obj__) { self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, 0); }
                }
}

struct optional$2intbool* FILE_write(struct _IO_FILE* f, char* str){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional217;
void* right_value178;
void* right_value179;
struct optional$2intbool* __result272__;
void* right_value180;
void* right_value181;
struct optional$2intbool* __result273__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value178, 0, sizeof(void*));
memset(&right_value179, 0, sizeof(void*));
memset(&right_value180, 0, sizeof(void*));
memset(&right_value181, 0, sizeof(void*));
    if(_if_conditional217=f==((void*)0)||str==((void*)0),    _if_conditional217) {
        __result272__ = __result_obj__ = ((struct optional$2intbool*)(right_value179=optional$2intbool_initialize(((struct optional$2intbool*)(right_value178=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2011))),-1,(_Bool)0)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value178);
        if(right_value178 && right_value178 != __result_obj__ && !__freed_obj__) { right_value178 = come_decrement_ref_count(right_value178, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value178;
        __freed_obj__ = 0;
        return __result272__;
    }
    __result273__ = __result_obj__ = ((struct optional$2intbool*)(right_value181=optional$2intbool_initialize((struct optional$2intbool*)come_increment_ref_count(((struct optional$2intbool*)(right_value180=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2014)))),fwrite(str,strlen(str),1,f),(_Bool)1)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value180);
    if(right_value180 && right_value180 != __result_obj__ && !__freed_obj__) { right_value180 = come_decrement_ref_count(right_value180, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value180;
    __freed_obj__ = 0;
    return __result273__;
}

struct optional$2intbool* FILE_fclose(struct _IO_FILE* f){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional218;
void* right_value182;
void* right_value183;
struct optional$2intbool* __result274__;
int result_137;
_Bool _if_conditional219;
void* right_value184;
void* right_value185;
struct optional$2intbool* __result275__;
void* right_value186;
void* right_value187;
struct optional$2intbool* __result276__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value182, 0, sizeof(void*));
memset(&right_value183, 0, sizeof(void*));
memset(&result_137, 0, sizeof(int));
memset(&right_value184, 0, sizeof(void*));
memset(&right_value185, 0, sizeof(void*));
memset(&right_value186, 0, sizeof(void*));
memset(&right_value187, 0, sizeof(void*));
    if(_if_conditional218=f==((void*)0),    _if_conditional218) {
        __result274__ = __result_obj__ = ((struct optional$2intbool*)(right_value183=optional$2intbool_initialize(((struct optional$2intbool*)(right_value182=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2020))),-1,(_Bool)0)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value182);
        if(right_value182 && right_value182 != __result_obj__ && !__freed_obj__) { right_value182 = come_decrement_ref_count(right_value182, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value182;
        __freed_obj__ = 0;
        return __result274__;
    }
    result_137=fclose(f);
    if(_if_conditional219=result_137<0,    _if_conditional219) {
        __result275__ = __result_obj__ = ((struct optional$2intbool*)(right_value185=optional$2intbool_initialize(((struct optional$2intbool*)(right_value184=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2026))),result_137,(_Bool)0)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value184);
        if(right_value184 && right_value184 != __result_obj__ && !__freed_obj__) { right_value184 = come_decrement_ref_count(right_value184, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value184;
        __freed_obj__ = 0;
        return __result275__;
    }
    __result276__ = __result_obj__ = ((struct optional$2intbool*)(right_value187=optional$2intbool_initialize((struct optional$2intbool*)come_increment_ref_count(((struct optional$2intbool*)(right_value186=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2029)))),result_137,(_Bool)1)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value186);
    if(right_value186 && right_value186 != __result_obj__ && !__freed_obj__) { right_value186 = come_decrement_ref_count(right_value186, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value186;
    __freed_obj__ = 0;
    return __result276__;
}

struct optional$2_IO_FILEpbool* FILE_fprintf(struct _IO_FILE* f, const char* msg, ...){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional220;
void* right_value188;
void* right_value189;
struct optional$2_IO_FILEpbool* __result278__;
va_list args_139;
int result_140;
_Bool _if_conditional221;
void* right_value190;
void* right_value191;
struct optional$2_IO_FILEpbool* __result279__;
void* right_value192;
void* right_value193;
struct optional$2_IO_FILEpbool* __result280__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value188, 0, sizeof(void*));
memset(&right_value189, 0, sizeof(void*));
memset(&args_139, 0, sizeof(va_list));
memset(&result_140, 0, sizeof(int));
memset(&right_value190, 0, sizeof(void*));
memset(&right_value191, 0, sizeof(void*));
memset(&right_value192, 0, sizeof(void*));
memset(&right_value193, 0, sizeof(void*));
    if(_if_conditional220=f==((void*)0)||msg==((void*)0),    _if_conditional220) {
        __result278__ = __result_obj__ = ((struct optional$2_IO_FILEpbool*)(right_value189=optional$2_IO_FILEpbool_initialize(((struct optional$2_IO_FILEpbool*)(right_value188=(struct optional$2_IO_FILEpbool*)come_calloc(1, sizeof(struct optional$2_IO_FILEpbool)*(1), "libcomelang2.c", 2035))),f,(_Bool)0)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value188);
        if(right_value188 && right_value188 != __result_obj__ && !__freed_obj__) { right_value188 = come_decrement_ref_count(right_value188, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value188;
        __freed_obj__ = 0;
        return __result278__;
    }
    char msg2_138[1024*2*2*2];
    memset(&msg2_138, 0, sizeof(char)    *(1024*2*2*2)    );
    __builtin_va_start(args_139,msg);
    vsnprintf(msg2_138,1024*2*2*2,msg,args_139);
    __builtin_va_end(args_139);
    result_140=fprintf(f,"%s",msg2_138);
    if(_if_conditional221=result_140<0,    _if_conditional221) {
        __result279__ = __result_obj__ = ((struct optional$2intbool*)(right_value191=optional$2intbool_initialize(((struct optional$2intbool*)(right_value190=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2047))),result_140,(_Bool)0)));
        if((&args_139) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_139), (void*)0, (void*)0, 1, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value190);
        if(right_value190 && right_value190 != __result_obj__ && !__freed_obj__) { right_value190 = come_decrement_ref_count(right_value190, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value190;
        __freed_obj__ = 0;
        return __result279__;
    }
    __result280__ = __result_obj__ = ((struct optional$2_IO_FILEpbool*)(right_value193=optional$2_IO_FILEpbool_initialize((struct optional$2_IO_FILEpbool*)come_increment_ref_count(((struct optional$2_IO_FILEpbool*)(right_value192=(struct optional$2_IO_FILEpbool*)come_calloc(1, sizeof(struct optional$2_IO_FILEpbool)*(1), "libcomelang2.c", 2050)))),f,(_Bool)1)));
    if((&args_139) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_139), (void*)0, (void*)0, 1, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value192);
    if(right_value192 && right_value192 != __result_obj__ && !__freed_obj__) { right_value192 = come_decrement_ref_count(right_value192, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value192;
    __freed_obj__ = 0;
    return __result280__;
    if((&args_139) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_139), (void*)0, (void*)0, 1, 0, 0, 0); }
}

static struct optional$2_IO_FILEpbool* optional$2_IO_FILEpbool_initialize(struct optional$2_IO_FILEpbool* self, struct _IO_FILE* v1, _Bool v2){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct optional$2_IO_FILEpbool* __result277__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            self->v1=v1;
            self->v2=v2;
            __result277__ = __result_obj__ = self;
            if(self && !__freed_obj__) { come_call_finalizer(optional$2_IO_FILEpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            return __result277__;
            if(self && !__freed_obj__) { come_call_finalizer(optional$2_IO_FILEpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2_IO_FILEpboolp_finalize(struct optional$2_IO_FILEpbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

struct optional$2intbool* string_write(char* self, char* file_name, _Bool append){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional222;
void* right_value194;
void* right_value195;
struct optional$2intbool* __result281__;
struct _IO_FILE* f_141;
_Bool _if_conditional223;
_Bool _if_conditional224;
void* right_value196;
void* right_value197;
struct optional$2intbool* __result282__;
int result_142;
_Bool _if_conditional225;
void* right_value198;
void* right_value199;
struct optional$2intbool* __result283__;
int result2_143;
_Bool _if_conditional226;
void* right_value200;
void* right_value201;
struct optional$2intbool* __result284__;
void* right_value202;
void* right_value203;
struct optional$2intbool* __result285__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value194, 0, sizeof(void*));
memset(&right_value195, 0, sizeof(void*));
memset(&f_141, 0, sizeof(struct _IO_FILE*));
memset(&right_value196, 0, sizeof(void*));
memset(&right_value197, 0, sizeof(void*));
memset(&result_142, 0, sizeof(int));
memset(&right_value198, 0, sizeof(void*));
memset(&right_value199, 0, sizeof(void*));
memset(&result2_143, 0, sizeof(int));
memset(&right_value200, 0, sizeof(void*));
memset(&right_value201, 0, sizeof(void*));
memset(&right_value202, 0, sizeof(void*));
memset(&right_value203, 0, sizeof(void*));
    if(_if_conditional222=self==((void*)0)||file_name==((void*)0),    _if_conditional222) {
        __result281__ = __result_obj__ = ((struct optional$2intbool*)(right_value195=optional$2intbool_initialize(((struct optional$2intbool*)(right_value194=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2056))),-1,(_Bool)0)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value194);
        if(right_value194 && right_value194 != __result_obj__ && !__freed_obj__) { right_value194 = come_decrement_ref_count(right_value194, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value194;
        __freed_obj__ = 0;
        return __result281__;
    }
    if(_if_conditional223=append,    _if_conditional223) {
        f_141=fopen(file_name,"a");
    }
    else {
        f_141=fopen(file_name,"w");
    }
    if(_if_conditional224=f_141==((void*)0),    _if_conditional224) {
        __result282__ = __result_obj__ = ((struct optional$2intbool*)(right_value197=optional$2intbool_initialize(((struct optional$2intbool*)(right_value196=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2068))),-1,(_Bool)0)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value196);
        if(right_value196 && right_value196 != __result_obj__ && !__freed_obj__) { right_value196 = come_decrement_ref_count(right_value196, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value196;
        __freed_obj__ = 0;
        return __result282__;
    }
    result_142=fwrite(self,strlen(self),1,f_141);
    if(_if_conditional225=result_142<0,    _if_conditional225) {
        __result283__ = __result_obj__ = ((struct optional$2intbool*)(right_value199=optional$2intbool_initialize(((struct optional$2intbool*)(right_value198=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2074))),result_142,(_Bool)0)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value198);
        if(right_value198 && right_value198 != __result_obj__ && !__freed_obj__) { right_value198 = come_decrement_ref_count(right_value198, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value198;
        __freed_obj__ = 0;
        return __result283__;
    }
    result2_143=fclose(f_141);
    if(_if_conditional226=result2_143<0,    _if_conditional226) {
        __result284__ = __result_obj__ = ((struct optional$2intbool*)(right_value201=optional$2intbool_initialize(((struct optional$2intbool*)(right_value200=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2080))),result2_143,(_Bool)0)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value200);
        if(right_value200 && right_value200 != __result_obj__ && !__freed_obj__) { right_value200 = come_decrement_ref_count(right_value200, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value200;
        __freed_obj__ = 0;
        return __result284__;
    }
    __result285__ = __result_obj__ = ((struct optional$2intbool*)(right_value203=optional$2intbool_initialize((struct optional$2intbool*)come_increment_ref_count(((struct optional$2intbool*)(right_value202=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2083)))),result_142,(_Bool)1)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value202);
    if(right_value202 && right_value202 != __result_obj__ && !__freed_obj__) { right_value202 = come_decrement_ref_count(right_value202, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value202;
    __freed_obj__ = 0;
    return __result285__;
}

struct optional$2intbool* charp_write(char* self, char* file_name, _Bool append){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional227;
void* right_value204;
void* right_value205;
struct optional$2intbool* __result286__;
struct _IO_FILE* f_144;
_Bool _if_conditional228;
_Bool _if_conditional229;
void* right_value206;
void* right_value207;
struct optional$2intbool* __result287__;
int result_145;
_Bool _if_conditional230;
void* right_value208;
void* right_value209;
struct optional$2intbool* __result288__;
int result2_146;
_Bool _if_conditional231;
void* right_value210;
void* right_value211;
struct optional$2intbool* __result289__;
void* right_value212;
void* right_value213;
struct optional$2intbool* __result290__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value204, 0, sizeof(void*));
memset(&right_value205, 0, sizeof(void*));
memset(&f_144, 0, sizeof(struct _IO_FILE*));
memset(&right_value206, 0, sizeof(void*));
memset(&right_value207, 0, sizeof(void*));
memset(&result_145, 0, sizeof(int));
memset(&right_value208, 0, sizeof(void*));
memset(&right_value209, 0, sizeof(void*));
memset(&result2_146, 0, sizeof(int));
memset(&right_value210, 0, sizeof(void*));
memset(&right_value211, 0, sizeof(void*));
memset(&right_value212, 0, sizeof(void*));
memset(&right_value213, 0, sizeof(void*));
    if(_if_conditional227=self==((void*)0)||file_name==((void*)0),    _if_conditional227) {
        __result286__ = __result_obj__ = ((struct optional$2intbool*)(right_value205=optional$2intbool_initialize(((struct optional$2intbool*)(right_value204=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2089))),-1,(_Bool)0)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value204);
        if(right_value204 && right_value204 != __result_obj__ && !__freed_obj__) { right_value204 = come_decrement_ref_count(right_value204, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value204;
        __freed_obj__ = 0;
        return __result286__;
    }
    if(_if_conditional228=append,    _if_conditional228) {
        f_144=fopen(file_name,"a");
    }
    else {
        f_144=fopen(file_name,"w");
    }
    if(_if_conditional229=f_144==((void*)0),    _if_conditional229) {
        __result287__ = __result_obj__ = ((struct optional$2intbool*)(right_value207=optional$2intbool_initialize(((struct optional$2intbool*)(right_value206=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2101))),-1,(_Bool)0)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value206);
        if(right_value206 && right_value206 != __result_obj__ && !__freed_obj__) { right_value206 = come_decrement_ref_count(right_value206, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value206;
        __freed_obj__ = 0;
        return __result287__;
    }
    result_145=fwrite(self,strlen(self),1,f_144);
    if(_if_conditional230=result_145<0,    _if_conditional230) {
        __result288__ = __result_obj__ = ((struct optional$2intbool*)(right_value209=optional$2intbool_initialize(((struct optional$2intbool*)(right_value208=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2107))),result_145,(_Bool)0)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value208);
        if(right_value208 && right_value208 != __result_obj__ && !__freed_obj__) { right_value208 = come_decrement_ref_count(right_value208, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value208;
        __freed_obj__ = 0;
        return __result288__;
    }
    result2_146=fclose(f_144);
    if(_if_conditional231=result2_146<0,    _if_conditional231) {
        __result289__ = __result_obj__ = ((struct optional$2intbool*)(right_value211=optional$2intbool_initialize(((struct optional$2intbool*)(right_value210=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2113))),result2_146,(_Bool)0)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value210);
        if(right_value210 && right_value210 != __result_obj__ && !__freed_obj__) { right_value210 = come_decrement_ref_count(right_value210, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value210;
        __freed_obj__ = 0;
        return __result289__;
    }
    __result290__ = __result_obj__ = ((struct optional$2intbool*)(right_value213=optional$2intbool_initialize((struct optional$2intbool*)come_increment_ref_count(((struct optional$2intbool*)(right_value212=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2116)))),result_145,(_Bool)1)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value212);
    if(right_value212 && right_value212 != __result_obj__ && !__freed_obj__) { right_value212 = come_decrement_ref_count(right_value212, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value212;
    __freed_obj__ = 0;
    return __result290__;
}

struct optional$2charphbool* string_read(char* file_name){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional232;
void* right_value214;
void* right_value215;
void* right_value216;
struct optional$2charphbool* __result291__;
struct _IO_FILE* f_147;
_Bool _if_conditional233;
void* right_value217;
void* right_value218;
void* right_value219;
struct optional$2charphbool* __result292__;
void* right_value220;
void* right_value221;
struct buffer* buf_148;
_Bool _while_condtional13;
int size_150;
_Bool _if_conditional234;
void* right_value222;
char* result_151;
int result2_152;
_Bool _if_conditional235;
void* right_value223;
void* right_value224;
void* right_value225;
struct optional$2charphbool* __result293__;
void* right_value226;
void* right_value227;
struct optional$2charphbool* __result294__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value214, 0, sizeof(void*));
memset(&right_value215, 0, sizeof(void*));
memset(&right_value216, 0, sizeof(void*));
memset(&f_147, 0, sizeof(struct _IO_FILE*));
memset(&right_value217, 0, sizeof(void*));
memset(&right_value218, 0, sizeof(void*));
memset(&right_value219, 0, sizeof(void*));
memset(&right_value220, 0, sizeof(void*));
memset(&right_value221, 0, sizeof(void*));
memset(&buf_148, 0, sizeof(struct buffer*));
memset(&size_150, 0, sizeof(int));
memset(&right_value222, 0, sizeof(void*));
memset(&result_151, 0, sizeof(char*));
memset(&result2_152, 0, sizeof(int));
memset(&right_value223, 0, sizeof(void*));
memset(&right_value224, 0, sizeof(void*));
memset(&right_value225, 0, sizeof(void*));
memset(&right_value226, 0, sizeof(void*));
memset(&right_value227, 0, sizeof(void*));
    if(_if_conditional232=file_name==((void*)0),    _if_conditional232) {
        __result291__ = __result_obj__ = ((struct optional$2charphbool*)(right_value216=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value215=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2122))),(char*)come_increment_ref_count(((char*)(right_value214=__builtin_string("")))),(_Bool)0)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value214);
        if(right_value214 && right_value214 != __result_obj__ && !__freed_obj__) { right_value214 = come_decrement_ref_count(right_value214, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value214;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value215);
        if(right_value215 && right_value215 != __result_obj__ && !__freed_obj__) { right_value215 = come_decrement_ref_count(right_value215, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value215;
        __freed_obj__ = 0;
        return __result291__;
    }
    f_147=fopen(file_name,"r");
    if(_if_conditional233=f_147==((void*)0),    _if_conditional233) {
        __result292__ = __result_obj__ = ((struct optional$2charphbool*)(right_value219=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value218=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2128))),(char*)come_increment_ref_count(((char*)(right_value217=__builtin_string("")))),(_Bool)0)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value217);
        if(right_value217 && right_value217 != __result_obj__ && !__freed_obj__) { right_value217 = come_decrement_ref_count(right_value217, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value217;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value218);
        if(right_value218 && right_value218 != __result_obj__ && !__freed_obj__) { right_value218 = come_decrement_ref_count(right_value218, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value218;
        __freed_obj__ = 0;
        return __result292__;
    }
    buf_148=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value221=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value220=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 2131))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value220);
    if(right_value220 && right_value220 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value220, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value220;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value221);
    if(right_value221 && right_value221 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value221, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value221;
    __freed_obj__ = 0;
    while(_while_condtional13=1,    _while_condtional13) {
        char buf2_149[8192];
        memset(&buf2_149, 0, sizeof(char)        *(8192)        );
        size_150=fread(buf2_149,1,8192,f_147);
        buffer_append(buf_148,buf2_149,size_150);
        if(_if_conditional234=size_150<8192,        _if_conditional234) {
            break;
        }
    }
    result_151=(char*)come_increment_ref_count(((char*)(right_value222=buffer_to_string(buf_148))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value222);
    if(right_value222 && right_value222 != __result_obj__ && !__freed_obj__) { right_value222 = come_decrement_ref_count(right_value222, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value222;
    __freed_obj__ = 0;
    result2_152=fclose(f_147);
    if(_if_conditional235=result2_152<0,    _if_conditional235) {
        __result293__ = __result_obj__ = ((struct optional$2charphbool*)(right_value225=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value224=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2150))),(char*)come_increment_ref_count(((char*)(right_value223=__builtin_string("")))),(_Bool)0)));
        if(buf_148 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_148, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(result_151 && !__freed_obj__) { result_151 = come_decrement_ref_count(result_151, (void*)0, (void*)0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value223);
        if(right_value223 && right_value223 != __result_obj__ && !__freed_obj__) { right_value223 = come_decrement_ref_count(right_value223, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value223;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value224);
        if(right_value224 && right_value224 != __result_obj__ && !__freed_obj__) { right_value224 = come_decrement_ref_count(right_value224, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value224;
        __freed_obj__ = 0;
        return __result293__;
    }
    __result294__ = __result_obj__ = ((struct optional$2charphbool*)(right_value227=optional$2charphbool_initialize((struct optional$2charphbool*)come_increment_ref_count(((struct optional$2charphbool*)(right_value226=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2153)))),(char*)come_increment_ref_count(result_151),(_Bool)1)));
    if(buf_148 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_148, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(result_151 && !__freed_obj__) { result_151 = come_decrement_ref_count(result_151, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value226);
    if(right_value226 && right_value226 != __result_obj__ && !__freed_obj__) { right_value226 = come_decrement_ref_count(right_value226, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value226;
    __freed_obj__ = 0;
    return __result294__;
    if(buf_148 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_148, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(result_151 && !__freed_obj__) { result_151 = come_decrement_ref_count(result_151, (void*)0, (void*)0, 0, 0, 0); }
}

struct optional$2charphbool* charp_read(char* file_name){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional236;
void* right_value228;
void* right_value229;
void* right_value230;
struct optional$2charphbool* __result295__;
struct _IO_FILE* f_153;
_Bool _if_conditional237;
void* right_value231;
void* right_value232;
void* right_value233;
struct optional$2charphbool* __result296__;
void* right_value234;
void* right_value235;
struct buffer* buf_154;
_Bool _while_condtional14;
int size_156;
_Bool _if_conditional238;
void* right_value236;
char* result_157;
int result2_158;
_Bool _if_conditional239;
void* right_value237;
void* right_value238;
void* right_value239;
struct optional$2charphbool* __result297__;
void* right_value240;
void* right_value241;
struct optional$2charphbool* __result298__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value228, 0, sizeof(void*));
memset(&right_value229, 0, sizeof(void*));
memset(&right_value230, 0, sizeof(void*));
memset(&f_153, 0, sizeof(struct _IO_FILE*));
memset(&right_value231, 0, sizeof(void*));
memset(&right_value232, 0, sizeof(void*));
memset(&right_value233, 0, sizeof(void*));
memset(&right_value234, 0, sizeof(void*));
memset(&right_value235, 0, sizeof(void*));
memset(&buf_154, 0, sizeof(struct buffer*));
memset(&size_156, 0, sizeof(int));
memset(&right_value236, 0, sizeof(void*));
memset(&result_157, 0, sizeof(char*));
memset(&result2_158, 0, sizeof(int));
memset(&right_value237, 0, sizeof(void*));
memset(&right_value238, 0, sizeof(void*));
memset(&right_value239, 0, sizeof(void*));
memset(&right_value240, 0, sizeof(void*));
memset(&right_value241, 0, sizeof(void*));
    if(_if_conditional236=file_name==((void*)0),    _if_conditional236) {
        __result295__ = __result_obj__ = ((struct optional$2charphbool*)(right_value230=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value229=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2159))),(char*)come_increment_ref_count(((char*)(right_value228=__builtin_string("")))),(_Bool)0)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value228);
        if(right_value228 && right_value228 != __result_obj__ && !__freed_obj__) { right_value228 = come_decrement_ref_count(right_value228, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value228;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value229);
        if(right_value229 && right_value229 != __result_obj__ && !__freed_obj__) { right_value229 = come_decrement_ref_count(right_value229, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value229;
        __freed_obj__ = 0;
        return __result295__;
    }
    f_153=fopen(file_name,"r");
    if(_if_conditional237=f_153==((void*)0),    _if_conditional237) {
        __result296__ = __result_obj__ = ((struct optional$2charphbool*)(right_value233=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value232=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2165))),(char*)come_increment_ref_count(((char*)(right_value231=__builtin_string("")))),(_Bool)0)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value231);
        if(right_value231 && right_value231 != __result_obj__ && !__freed_obj__) { right_value231 = come_decrement_ref_count(right_value231, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value231;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value232);
        if(right_value232 && right_value232 != __result_obj__ && !__freed_obj__) { right_value232 = come_decrement_ref_count(right_value232, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value232;
        __freed_obj__ = 0;
        return __result296__;
    }
    buf_154=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value235=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value234=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 2168))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value234);
    if(right_value234 && right_value234 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value234, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value234;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value235);
    if(right_value235 && right_value235 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value235, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value235;
    __freed_obj__ = 0;
    while(_while_condtional14=1,    _while_condtional14) {
        char buf2_155[8192];
        memset(&buf2_155, 0, sizeof(char)        *(8192)        );
        size_156=fread(buf2_155,1,8192,f_153);
        buffer_append(buf_154,buf2_155,size_156);
        if(_if_conditional238=size_156<8192,        _if_conditional238) {
            break;
        }
    }
    result_157=(char*)come_increment_ref_count(((char*)(right_value236=buffer_to_string(buf_154))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value236);
    if(right_value236 && right_value236 != __result_obj__ && !__freed_obj__) { right_value236 = come_decrement_ref_count(right_value236, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value236;
    __freed_obj__ = 0;
    result2_158=fclose(f_153);
    if(_if_conditional239=result2_158<0,    _if_conditional239) {
        __result297__ = __result_obj__ = ((struct optional$2charphbool*)(right_value239=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value238=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2187))),(char*)come_increment_ref_count(((char*)(right_value237=__builtin_string("")))),(_Bool)0)));
        if(buf_154 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_154, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(result_157 && !__freed_obj__) { result_157 = come_decrement_ref_count(result_157, (void*)0, (void*)0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value237);
        if(right_value237 && right_value237 != __result_obj__ && !__freed_obj__) { right_value237 = come_decrement_ref_count(right_value237, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value237;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value238);
        if(right_value238 && right_value238 != __result_obj__ && !__freed_obj__) { right_value238 = come_decrement_ref_count(right_value238, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value238;
        __freed_obj__ = 0;
        return __result297__;
    }
    __result298__ = __result_obj__ = ((struct optional$2charphbool*)(right_value241=optional$2charphbool_initialize((struct optional$2charphbool*)come_increment_ref_count(((struct optional$2charphbool*)(right_value240=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2190)))),(char*)come_increment_ref_count(result_157),(_Bool)1)));
    if(buf_154 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_154, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(result_157 && !__freed_obj__) { result_157 = come_decrement_ref_count(result_157, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value240);
    if(right_value240 && right_value240 != __result_obj__ && !__freed_obj__) { right_value240 = come_decrement_ref_count(right_value240, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value240;
    __freed_obj__ = 0;
    return __result298__;
    if(buf_154 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_154, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(result_157 && !__freed_obj__) { result_157 = come_decrement_ref_count(result_157, (void*)0, (void*)0, 0, 0, 0); }
}

struct optional$2list$1charphphbool* FILE_readlines(struct _IO_FILE* f){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value242;
void* right_value243;
struct list$1charph* result_159;
_Bool _if_conditional240;
void* right_value244;
void* right_value245;
struct optional$2list$1charphphbool* __result300__;
_Bool _while_condtional15;
_Bool _if_conditional242;
void* right_value246;
void* right_value247;
void* right_value248;
struct optional$2list$1charphphbool* __result301__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value242, 0, sizeof(void*));
memset(&right_value243, 0, sizeof(void*));
memset(&result_159, 0, sizeof(struct list$1charph*));
memset(&right_value244, 0, sizeof(void*));
memset(&right_value245, 0, sizeof(void*));
memset(&right_value246, 0, sizeof(void*));
memset(&right_value247, 0, sizeof(void*));
memset(&right_value248, 0, sizeof(void*));
    result_159=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value243=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value242=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2.c", 2195))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value242);
    if(right_value242 && right_value242 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value242, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value242;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value243);
    if(right_value243 && right_value243 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value243, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value243;
    __freed_obj__ = 0;
    if(_if_conditional240=f==((void*)0),    _if_conditional240) {
        __result300__ = __result_obj__ = ((struct optional$2list$1charphphbool*)(right_value245=optional$2list$1charphphbool_initialize(((struct optional$2list$1charphphbool*)(right_value244=(struct optional$2list$1charphphbool*)come_calloc(1, sizeof(struct optional$2list$1charphphbool)*(1), "libcomelang2.c", 2198))),(struct list$1charph*)come_increment_ref_count(result_159),(_Bool)0)));
        if(result_159 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_159, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value244);
        if(right_value244 && right_value244 != __result_obj__ && !__freed_obj__) { right_value244 = come_decrement_ref_count(right_value244, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value244;
        __freed_obj__ = 0;
        return __result300__;
    }
    while(_while_condtional15=1,    _while_condtional15) {
        char buf_160[8192];
        memset(&buf_160, 0, sizeof(char)        *(8192)        );
        if(_if_conditional242=fgets(buf_160,8192,f)==((void*)0),        _if_conditional242) {
            break;
        }
        list$1charph_push_back(result_159,(char*)come_increment_ref_count(((char*)(right_value246=__builtin_string(buf_160)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value246);
        if(right_value246 && right_value246 != __result_obj__ && !__freed_obj__) { right_value246 = come_decrement_ref_count(right_value246, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value246;
        __freed_obj__ = 0;
    }
    __result301__ = __result_obj__ = ((struct optional$2list$1charphphbool*)(right_value248=optional$2list$1charphphbool_initialize((struct optional$2list$1charphphbool*)come_increment_ref_count(((struct optional$2list$1charphphbool*)(right_value247=(struct optional$2list$1charphphbool*)come_calloc(1, sizeof(struct optional$2list$1charphphbool)*(1), "libcomelang2.c", 2211)))),(struct list$1charph*)come_increment_ref_count(result_159),(_Bool)1)));
    if(result_159 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_159, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value247);
    if(right_value247 && right_value247 != __result_obj__ && !__freed_obj__) { right_value247 = come_decrement_ref_count(right_value247, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value247;
    __freed_obj__ = 0;
    return __result301__;
    if(result_159 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_159, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct optional$2list$1charphphbool* optional$2list$1charphphbool_initialize(struct optional$2list$1charphphbool* self, struct list$1charph* v1, _Bool v2){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1charph* __dec_obj20;
struct optional$2list$1charphphbool* __result299__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            __dec_obj20=self->v1;
            self->v1=(struct list$1charph*)come_increment_ref_count(v1);
            if(__dec_obj20) { come_call_finalizer(list$1charph_finalize,__dec_obj20, (void*)0, (void*)0, 0, 0, 0, 0); }
            self->v2=v2;
            __result299__ = __result_obj__ = self;
            if(self && !__freed_obj__) { come_call_finalizer(optional$2list$1charphphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            if(v1 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
            return __result299__;
            if(self && !__freed_obj__) { come_call_finalizer(optional$2list$1charphphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            if(v1 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list$1charph_finalize(struct list$1charph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static void optional$2list$1charphphboolp_finalize(struct optional$2list$1charphphbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional241;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional241=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional241) {
                    if(self->v1 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
}

struct optional$2intbool* fopen_block(const char* path, const char* mode, void* parent, void (*block)(void*,struct _IO_FILE*)){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional243;
void* right_value249;
void* right_value250;
struct optional$2intbool* __result302__;
struct _IO_FILE* f_161;
_Bool _if_conditional244;
_Bool _if_conditional245;
void* right_value251;
void* right_value252;
struct optional$2intbool* __result303__;
void* right_value253;
void* right_value254;
struct optional$2intbool* __result304__;
void* right_value255;
void* right_value256;
struct optional$2intbool* __result305__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value249, 0, sizeof(void*));
memset(&right_value250, 0, sizeof(void*));
memset(&f_161, 0, sizeof(struct _IO_FILE*));
memset(&right_value251, 0, sizeof(void*));
memset(&right_value252, 0, sizeof(void*));
memset(&right_value253, 0, sizeof(void*));
memset(&right_value254, 0, sizeof(void*));
memset(&right_value255, 0, sizeof(void*));
memset(&right_value256, 0, sizeof(void*));
    if(_if_conditional243=path==((void*)0)||mode==((void*)0),    _if_conditional243) {
        __result302__ = __result_obj__ = ((struct optional$2intbool*)(right_value250=optional$2intbool_initialize(((struct optional$2intbool*)(right_value249=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2217))),-1,(_Bool)0)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value249);
        if(right_value249 && right_value249 != __result_obj__ && !__freed_obj__) { right_value249 = come_decrement_ref_count(right_value249, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value249;
        __freed_obj__ = 0;
        return __result302__;
    }
    f_161=fopen(path,mode);
    if(_if_conditional244=f_161,    _if_conditional244) {
        block(parent,f_161);
        if(_if_conditional245=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,        _if_conditional245) {
            fclose(f_161);
            __result303__ = __result_obj__ = ((struct optional$2intbool*)(right_value252=optional$2intbool_initialize((struct optional$2intbool*)come_increment_ref_count(((struct optional$2intbool*)(right_value251=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2225)))),0,(_Bool)1)));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value251);
            if(right_value251 && right_value251 != __result_obj__ && !__freed_obj__) { right_value251 = come_decrement_ref_count(right_value251, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value251;
            __freed_obj__ = 0;
            return __result303__;
        }
        fclose(f_161);
        __result304__ = __result_obj__ = ((struct optional$2intbool*)(right_value254=optional$2intbool_initialize((struct optional$2intbool*)come_increment_ref_count(((struct optional$2intbool*)(right_value253=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2230)))),0,(_Bool)1)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value253);
        if(right_value253 && right_value253 != __result_obj__ && !__freed_obj__) { right_value253 = come_decrement_ref_count(right_value253, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value253;
        __freed_obj__ = 0;
        return __result304__;
    }
    __result305__ = __result_obj__ = ((struct optional$2intbool*)(right_value256=optional$2intbool_initialize(((struct optional$2intbool*)(right_value255=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2233))),-1,(_Bool)0)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value255);
    if(right_value255 && right_value255 != __result_obj__ && !__freed_obj__) { right_value255 = come_decrement_ref_count(right_value255, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value255;
    __freed_obj__ = 0;
    return __result305__;
}

struct optional$2charphbool* charp_puts(char* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional246;
void* right_value257;
void* right_value258;
struct optional$2charphbool* __result306__;
void* right_value259;
void* right_value260;
void* right_value261;
struct optional$2charphbool* __result307__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value257, 0, sizeof(void*));
memset(&right_value258, 0, sizeof(void*));
memset(&right_value259, 0, sizeof(void*));
memset(&right_value260, 0, sizeof(void*));
memset(&right_value261, 0, sizeof(void*));
    if(_if_conditional246=self==((void*)0),    _if_conditional246) {
        __result306__ = __result_obj__ = ((struct optional$2intbool*)(right_value258=optional$2intbool_initialize(((struct optional$2intbool*)(right_value257=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2242))),-1,(_Bool)0)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value257);
        if(right_value257 && right_value257 != __result_obj__ && !__freed_obj__) { right_value257 = come_decrement_ref_count(right_value257, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value257;
        __freed_obj__ = 0;
        return __result306__;
    }
    puts(self);
    __result307__ = __result_obj__ = ((struct optional$2charphbool*)(right_value261=optional$2charphbool_initialize((struct optional$2charphbool*)come_increment_ref_count(((struct optional$2charphbool*)(right_value260=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2246)))),(char*)come_increment_ref_count(((char*)(right_value259=__builtin_string(self)))),(_Bool)1)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value259);
    if(right_value259 && right_value259 != __result_obj__ && !__freed_obj__) { right_value259 = come_decrement_ref_count(right_value259, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value259;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value260);
    if(right_value260 && right_value260 != __result_obj__ && !__freed_obj__) { right_value260 = come_decrement_ref_count(right_value260, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value260;
    __freed_obj__ = 0;
    return __result307__;
}

struct optional$2charphbool* charp_print(char* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional247;
void* right_value262;
void* right_value263;
struct optional$2charphbool* __result308__;
void* right_value264;
void* right_value265;
void* right_value266;
struct optional$2charphbool* __result309__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value262, 0, sizeof(void*));
memset(&right_value263, 0, sizeof(void*));
memset(&right_value264, 0, sizeof(void*));
memset(&right_value265, 0, sizeof(void*));
memset(&right_value266, 0, sizeof(void*));
    if(_if_conditional247=self==((void*)0),    _if_conditional247) {
        __result308__ = __result_obj__ = ((struct optional$2intbool*)(right_value263=optional$2intbool_initialize(((struct optional$2intbool*)(right_value262=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2252))),-1,(_Bool)0)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value262);
        if(right_value262 && right_value262 != __result_obj__ && !__freed_obj__) { right_value262 = come_decrement_ref_count(right_value262, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value262;
        __freed_obj__ = 0;
        return __result308__;
    }
    printf("%s",self);
    __result309__ = __result_obj__ = ((struct optional$2charphbool*)(right_value266=optional$2charphbool_initialize((struct optional$2charphbool*)come_increment_ref_count(((struct optional$2charphbool*)(right_value265=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2256)))),(char*)come_increment_ref_count(((char*)(right_value264=__builtin_string(self)))),(_Bool)1)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value264);
    if(right_value264 && right_value264 != __result_obj__ && !__freed_obj__) { right_value264 = come_decrement_ref_count(right_value264, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value264;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value265);
    if(right_value265 && right_value265 != __result_obj__ && !__freed_obj__) { right_value265 = come_decrement_ref_count(right_value265, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value265;
    __freed_obj__ = 0;
    return __result309__;
}

struct optional$2charphbool* string_printf(char* self, ...){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional248;
void* right_value267;
void* right_value268;
void* right_value269;
struct optional$2charphbool* __result310__;
char* msg2_162;
va_list args_163;
void* right_value270;
void* right_value271;
void* right_value272;
struct optional$2charphbool* __result311__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value267, 0, sizeof(void*));
memset(&right_value268, 0, sizeof(void*));
memset(&right_value269, 0, sizeof(void*));
memset(&msg2_162, 0, sizeof(char*));
memset(&args_163, 0, sizeof(va_list));
memset(&right_value270, 0, sizeof(void*));
memset(&right_value271, 0, sizeof(void*));
memset(&right_value272, 0, sizeof(void*));
    if(_if_conditional248=self==((void*)0),    _if_conditional248) {
        __result310__ = __result_obj__ = ((struct optional$2charphbool*)(right_value269=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value268=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2263))),(char*)come_increment_ref_count(((char*)(right_value267=__builtin_string("")))),(_Bool)0)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value267);
        if(right_value267 && right_value267 != __result_obj__ && !__freed_obj__) { right_value267 = come_decrement_ref_count(right_value267, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value267;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value268);
        if(right_value268 && right_value268 != __result_obj__ && !__freed_obj__) { right_value268 = come_decrement_ref_count(right_value268, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value268;
        __freed_obj__ = 0;
        return __result310__;
    }
    __builtin_va_start(args_163,self);
    vasprintf(&msg2_162,self,args_163);
    __builtin_va_end(args_163);
    printf("%s",msg2_162);
    free(msg2_162);
    __result311__ = __result_obj__ = ((struct optional$2charphbool*)(right_value272=optional$2charphbool_initialize((struct optional$2charphbool*)come_increment_ref_count(((struct optional$2charphbool*)(right_value271=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2276)))),(char*)come_increment_ref_count(((char*)(right_value270=__builtin_string(self)))),(_Bool)1)));
    if((&args_163) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_163), (void*)0, (void*)0, 1, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value270);
    if(right_value270 && right_value270 != __result_obj__ && !__freed_obj__) { right_value270 = come_decrement_ref_count(right_value270, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value270;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value271);
    if(right_value271 && right_value271 != __result_obj__ && !__freed_obj__) { right_value271 = come_decrement_ref_count(right_value271, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value271;
    __freed_obj__ = 0;
    return __result311__;
    if((&args_163) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_163), (void*)0, (void*)0, 1, 0, 0, 0); }
}

struct optional$2charphbool* charp_printf(char* self, ...){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional249;
void* right_value273;
void* right_value274;
void* right_value275;
struct optional$2charphbool* __result312__;
char* msg2_164;
va_list args_165;
void* right_value276;
void* right_value277;
void* right_value278;
struct optional$2charphbool* __result313__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value273, 0, sizeof(void*));
memset(&right_value274, 0, sizeof(void*));
memset(&right_value275, 0, sizeof(void*));
memset(&msg2_164, 0, sizeof(char*));
memset(&args_165, 0, sizeof(va_list));
memset(&right_value276, 0, sizeof(void*));
memset(&right_value277, 0, sizeof(void*));
memset(&right_value278, 0, sizeof(void*));
    if(_if_conditional249=self==((void*)0),    _if_conditional249) {
        __result312__ = __result_obj__ = ((struct optional$2charphbool*)(right_value275=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value274=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2282))),(char*)come_increment_ref_count(((char*)(right_value273=__builtin_string("")))),(_Bool)0)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value273);
        if(right_value273 && right_value273 != __result_obj__ && !__freed_obj__) { right_value273 = come_decrement_ref_count(right_value273, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value273;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value274);
        if(right_value274 && right_value274 != __result_obj__ && !__freed_obj__) { right_value274 = come_decrement_ref_count(right_value274, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value274;
        __freed_obj__ = 0;
        return __result312__;
    }
    __builtin_va_start(args_165,self);
    vasprintf(&msg2_164,self,args_165);
    __builtin_va_end(args_165);
    printf("%s",msg2_164);
    free(msg2_164);
    __result313__ = __result_obj__ = ((struct optional$2charphbool*)(right_value278=optional$2charphbool_initialize((struct optional$2charphbool*)come_increment_ref_count(((struct optional$2charphbool*)(right_value277=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2295)))),(char*)come_increment_ref_count(((char*)(right_value276=__builtin_string(self)))),(_Bool)1)));
    if((&args_165) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_165), (void*)0, (void*)0, 1, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value276);
    if(right_value276 && right_value276 != __result_obj__ && !__freed_obj__) { right_value276 = come_decrement_ref_count(right_value276, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value276;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value277);
    if(right_value277 && right_value277 != __result_obj__ && !__freed_obj__) { right_value277 = come_decrement_ref_count(right_value277, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value277;
    __freed_obj__ = 0;
    return __result313__;
    if((&args_165) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_165), (void*)0, (void*)0, 1, 0, 0, 0); }
}

int int_printf(int self, char* msg){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result314__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    printf(msg,self);
    __result314__ = self;
    return __result314__;
}

struct optional$2charphbool* string_puts(char* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional250;
void* right_value279;
void* right_value280;
void* right_value281;
struct optional$2charphbool* __result315__;
void* right_value282;
void* right_value283;
void* right_value284;
struct optional$2charphbool* __result316__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value279, 0, sizeof(void*));
memset(&right_value280, 0, sizeof(void*));
memset(&right_value281, 0, sizeof(void*));
memset(&right_value282, 0, sizeof(void*));
memset(&right_value283, 0, sizeof(void*));
memset(&right_value284, 0, sizeof(void*));
    if(_if_conditional250=self==((void*)0),    _if_conditional250) {
        __result315__ = __result_obj__ = ((struct optional$2charphbool*)(right_value281=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value280=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2308))),(char*)come_increment_ref_count(((char*)(right_value279=__builtin_string("")))),(_Bool)0)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value279);
        if(right_value279 && right_value279 != __result_obj__ && !__freed_obj__) { right_value279 = come_decrement_ref_count(right_value279, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value279;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value280);
        if(right_value280 && right_value280 != __result_obj__ && !__freed_obj__) { right_value280 = come_decrement_ref_count(right_value280, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value280;
        __freed_obj__ = 0;
        return __result315__;
    }
    puts(self);
    __result316__ = __result_obj__ = ((struct optional$2charphbool*)(right_value284=optional$2charphbool_initialize((struct optional$2charphbool*)come_increment_ref_count(((struct optional$2charphbool*)(right_value283=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2312)))),(char*)come_increment_ref_count(((char*)(right_value282=__builtin_string(self)))),(_Bool)1)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value282);
    if(right_value282 && right_value282 != __result_obj__ && !__freed_obj__) { right_value282 = come_decrement_ref_count(right_value282, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value282;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value283);
    if(right_value283 && right_value283 != __result_obj__ && !__freed_obj__) { right_value283 = come_decrement_ref_count(right_value283, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value283;
    __freed_obj__ = 0;
    return __result316__;
}

void int_times(int self, void* parent, void (*block)(void*,int)){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int i_166;
_Bool _for_condtionalA12;
_Bool _if_conditional251;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&i_166, 0, sizeof(int));
    for(
    i_166=0 ,    0;    _for_condtionalA12=    i_166<self ,    _for_condtionalA12;    i_166++ ,    0    ){
        block(parent,i_166);
        if(_if_conditional251=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,        _if_conditional251) {
            return;
        }
    }
}

