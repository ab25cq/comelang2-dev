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
struct sIntNode
{
    int value;
    int sline;
    char* sname;
};
struct sUIntNode
{
    unsigned int value;
    int sline;
    char* sname;
};
struct sLongNode
{
    long value;
    int sline;
    char* sname;
};
struct sULongNode
{
    unsigned long int value;
    int sline;
    char* sname;
};
struct sFloatNode
{
    float value;
    int sline;
    char* sname;
};
struct sDoubleNode
{
    double value;
    int sline;
    char* sname;
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

struct sIntNode* sIntNode_initialize(struct sIntNode* self, int value, struct sInfo* info);

char* sIntNode_kind();

_Bool sIntNode_compile(struct sIntNode* self, struct sInfo* info);

static void CVALUE_finalize(struct CVALUE* self);
static void sType_finalize(struct sType* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
_Bool sIntNode_terminated();

int sIntNode_sline(struct sIntNode* self, struct sInfo* info);

char* sIntNode_sname(struct sIntNode* self, struct sInfo* info);

struct sUIntNode* sUIntNode_initialize(struct sUIntNode* self, unsigned int value, struct sInfo* info);

_Bool sUIntNode_terminated();

char* sUIntNode_kind();

_Bool sUIntNode_compile(struct sUIntNode* self, struct sInfo* info);

int sUIntNode_sline(struct sUIntNode* self, struct sInfo* info);

char* sUIntNode_sname(struct sUIntNode* self, struct sInfo* info);

struct sLongNode* sLongNode_initialize(struct sLongNode* self, unsigned long int value, struct sInfo* info);

char* sLongNode_kind();

_Bool sLongNode_compile(struct sLongNode* self, struct sInfo* info);

_Bool sLongNode_terminated();

int sLongNode_sline(struct sLongNode* self, struct sInfo* info);

char* sLongNode_sname(struct sLongNode* self, struct sInfo* info);

struct sULongNode* sULongNode_initialize(struct sULongNode* self, unsigned long int value, struct sInfo* info);

char* sULongNode_kind();

_Bool sULongNode_compile(struct sULongNode* self, struct sInfo* info);

_Bool sULongNode_terminated();

int sULongNode_sline(struct sULongNode* self, struct sInfo* info);

char* sULongNode_sname(struct sULongNode* self, struct sInfo* info);

struct sFloatNode* sFloatNode_initialize(struct sFloatNode* self, float value, struct sInfo* info);

char* sFloatNode_kind();

_Bool sFloatNode_compile(struct sFloatNode* self, struct sInfo* info);

_Bool sFloatNode_terminated();

int sFloatNode_sline(struct sFloatNode* self, struct sInfo* info);

char* sFloatNode_sname(struct sFloatNode* self, struct sInfo* info);

struct sDoubleNode* sDoubleNode_initialize(struct sDoubleNode* self, double value, struct sInfo* info);

char* sDoubleNode_kind();

_Bool sDoubleNode_compile(struct sDoubleNode* self, struct sInfo* info);

_Bool sDoubleNode_terminated();

int sDoubleNode_sline(struct sDoubleNode* self, struct sInfo* info);

char* sDoubleNode_sname(struct sDoubleNode* self, struct sInfo* info);

struct sNode* get_number(_Bool minus, struct sInfo* info);

static void sFloatNode_finalize(struct sFloatNode* self);
static struct sFloatNode* sFloatNode_clone(struct sFloatNode* self);
static void sDoubleNode_finalize(struct sDoubleNode* self);
static struct sDoubleNode* sDoubleNode_clone(struct sDoubleNode* self);
struct sNode* create_int_node(int value, struct sInfo* info);

struct sNode* get_hex_number(_Bool minus, struct sInfo* info);

struct sNode* get_oct_number(struct sInfo* info);

static void sUIntNode_finalize(struct sUIntNode* self);
static struct sUIntNode* sUIntNode_clone(struct sUIntNode* self);
static void sULongNode_finalize(struct sULongNode* self);
static struct sULongNode* sULongNode_clone(struct sULongNode* self);
static void sLongNode_finalize(struct sLongNode* self);
static struct sLongNode* sLongNode_clone(struct sLongNode* self);
static void sIntNode_finalize(struct sIntNode* self);
static struct sIntNode* sIntNode_clone(struct sIntNode* self);
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

struct sIntNode* sIntNode_initialize(struct sIntNode* self, int value, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value10;
char* __dec_obj6;
struct sIntNode* __result13__;
memset(&__result_obj__, 0, sizeof(void*));
    self->value=value;
    self->sline=info->sline;
    __dec_obj6=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value10=__builtin_string(info->sname))));
    if(__dec_obj6) { __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0,0,0); }
    if(right_value10 && right_value10 != __result_obj__) { right_value10 = come_decrement_ref_count(right_value10, (void*)0, (void*)0, 1, 0, 0); }
    __result13__ = __result_obj__ = self;
    if(self) { come_call_finalizer(sIntNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result13__;
    if(self) { come_call_finalizer(sIntNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

char* sIntNode_kind(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value11;
char* __result14__;
memset(&__result_obj__, 0, sizeof(void*));
    __result14__ = __result_obj__ = ((char*)(right_value11=__builtin_string("sIntNode")));
    return __result14__;
}

_Bool sIntNode_compile(struct sIntNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value12;
struct CVALUE* come_value_5;
void* right_value13;
char* __dec_obj7;
void* right_value14;
void* right_value15;
struct sType* __dec_obj8;
_Bool __result16__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&come_value_5, 0, sizeof(struct CVALUE*));
    come_value_5=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value12=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function3.c", 27))));
    if(right_value12 && right_value12 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value12, (void*)0, (void*)0, 0, 1, 0, 0); }
    __dec_obj7=come_value_5->c_value;
    come_value_5->c_value=(char*)come_increment_ref_count(((char*)(right_value13=xsprintf("%d",self->value))));
    if(__dec_obj7) { __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0,0,0); }
    if(right_value13 && right_value13 != __result_obj__) { right_value13 = come_decrement_ref_count(right_value13, (void*)0, (void*)0, 1, 0, 0); }
    __dec_obj8=come_value_5->type;
    come_value_5->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value15=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value14=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function3.c", 30)))),"int",(_Bool)0,info))));
    if(__dec_obj8) { come_call_finalizer(sType_finalize,__dec_obj8, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value14 && right_value14 != __result_obj__) { come_call_finalizer(sType_finalize,right_value14, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value15 && right_value15 != __result_obj__) { come_call_finalizer(sType_finalize,right_value15, (void*)0, (void*)0, 0, 1, 0, 0); }
    come_value_5->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_5));
    add_come_last_code(info,"%s;\n",come_value_5->c_value);
    __result16__ = (_Bool)1;
    if(come_value_5) { come_call_finalizer(CVALUE_finalize,come_value_5, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result16__;
    if(come_value_5) { come_call_finalizer(CVALUE_finalize,come_value_5, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void CVALUE_finalize(struct CVALUE* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional6;
_Bool _if_conditional7;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional6=self!=((void*)0)&&self->c_value!=((void*)0),        _if_conditional6) {
            if(self->c_value) { self->c_value = come_decrement_ref_count(self->c_value, (void*)0, (void*)0, 0, 0, 0); }
        }
        if(_if_conditional7=self!=((void*)0)&&self->type!=((void*)0),        _if_conditional7) {
            if(self->type) { come_call_finalizer(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
}

static void sType_finalize(struct sType* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional8;
_Bool _if_conditional10;
_Bool _if_conditional11;
_Bool _if_conditional12;
_Bool _if_conditional14;
_Bool _if_conditional16;
_Bool _if_conditional17;
_Bool _if_conditional19;
_Bool _if_conditional20;
_Bool _if_conditional21;
_Bool _if_conditional22;
_Bool _if_conditional23;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional8=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                _if_conditional8) {
                    if(self->mNoSolvedGenericsType) { come_call_finalizer(tuple1$1sTypephp_finalize,self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                if(_if_conditional10=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                _if_conditional10) {
                    if(self->mOriginalLoadVarType) { come_call_finalizer(tuple1$1sTypephp_finalize,self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                if(_if_conditional11=self!=((void*)0)&&self->mGenericsName!=((void*)0),                _if_conditional11) {
                    if(self->mGenericsName) { self->mGenericsName = come_decrement_ref_count(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0); }
                }
                if(_if_conditional12=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                _if_conditional12) {
                    if(self->mGenericsTypes) { come_call_finalizer(list$1sTypephp_finalize,self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                if(_if_conditional14=self!=((void*)0)&&self->mArrayNum!=((void*)0),                _if_conditional14) {
                    if(self->mArrayNum) { come_call_finalizer(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                if(_if_conditional16=self!=((void*)0)&&self->mParamTypes!=((void*)0),                _if_conditional16) {
                    if(self->mParamTypes) { come_call_finalizer(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                if(_if_conditional17=self!=((void*)0)&&self->mParamNames!=((void*)0),                _if_conditional17) {
                    if(self->mParamNames) { come_call_finalizer(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                if(_if_conditional19=self!=((void*)0)&&self->mResultType!=((void*)0),                _if_conditional19) {
                    if(self->mResultType) { come_call_finalizer(tuple1$1sTypephp_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                if(_if_conditional20=self!=((void*)0)&&self->mAlignas!=((void*)0),                _if_conditional20) {
                    if(self->mAlignas) { self->mAlignas = come_decrement_ref_count(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0); } 
                }
                if(_if_conditional21=self!=((void*)0)&&self->mSizeNum!=((void*)0),                _if_conditional21) {
                    if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0); } 
                }
                if(_if_conditional22=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                _if_conditional22) {
                    if(self->mOriginalTypeName) { self->mOriginalTypeName = come_decrement_ref_count(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0); }
                }
                if(_if_conditional23=self!=((void*)0)&&self->mAsmName!=((void*)0),                _if_conditional23) {
                    if(self->mAsmName) { self->mAsmName = come_decrement_ref_count(self->mAsmName, (void*)0, (void*)0, 0, 0, 0); }
                }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional9;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional9=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional9) {
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
_Bool _if_conditional13;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional13=self!=((void*)0)&&self->item!=((void*)0),                                _if_conditional13) {
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
_Bool _if_conditional15;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional15=self!=((void*)0)&&self->item!=((void*)0),                                _if_conditional15) {
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
_Bool _if_conditional18;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional18=self!=((void*)0)&&self->item!=((void*)0),                                _if_conditional18) {
                                    if(self->item) { self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0, 0, 0); }
                                }
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional24;
void* right_value16;
struct list_item$1CVALUEph* litem_12;
struct CVALUE* __dec_obj9;
_Bool _if_conditional26;
void* right_value17;
struct list_item$1CVALUEph* litem_13;
struct CVALUE* __dec_obj10;
void* right_value18;
struct list_item$1CVALUEph* litem_14;
struct CVALUE* __dec_obj11;
struct list$1CVALUEph* __result15__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&litem_12, 0, sizeof(struct list_item$1CVALUEph*));
memset(&litem_13, 0, sizeof(struct list_item$1CVALUEph*));
memset(&litem_14, 0, sizeof(struct list_item$1CVALUEph*));
        if(_if_conditional24=self->len==0,        _if_conditional24) {
            litem_12=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value16=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 277))));
            if(right_value16 && right_value16 != __result_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value16, (void*)0, (void*)0, 0, 1, 0, 0); }
            litem_12->prev=((void*)0);
            litem_12->next=((void*)0);
            __dec_obj9=litem_12->item;
            litem_12->item=(struct CVALUE*)come_increment_ref_count(item);
            if(__dec_obj9) { come_call_finalizer(CVALUE_finalize,__dec_obj9, (void*)0, (void*)0, 0, 0, 0, 0); }
            self->tail=litem_12;
            self->head=litem_12;
        }
        else {
            if(_if_conditional26=self->len==1,            _if_conditional26) {
                litem_13=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value17=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 287))));
                if(right_value17 && right_value17 != __result_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value17, (void*)0, (void*)0, 0, 1, 0, 0); }
                litem_13->prev=self->head;
                litem_13->next=((void*)0);
                __dec_obj10=litem_13->item;
                litem_13->item=(struct CVALUE*)come_increment_ref_count(item);
                if(__dec_obj10) { come_call_finalizer(CVALUE_finalize,__dec_obj10, (void*)0, (void*)0, 0, 0, 0, 0); }
                self->tail=litem_13;
                self->head->next=litem_13;
            }
            else {
                litem_14=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value18=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 297))));
                if(right_value18 && right_value18 != __result_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value18, (void*)0, (void*)0, 0, 1, 0, 0); }
                litem_14->prev=self->tail;
                litem_14->next=((void*)0);
                __dec_obj11=litem_14->item;
                litem_14->item=(struct CVALUE*)come_increment_ref_count(item);
                if(__dec_obj11) { come_call_finalizer(CVALUE_finalize,__dec_obj11, (void*)0, (void*)0, 0, 0, 0, 0); }
                self->tail->next=litem_14;
                self->tail=litem_14;
            }
        }
        self->len++;
        __result15__ = __result_obj__ = self;
        if(item) { come_call_finalizer(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result15__;
        if(item) { come_call_finalizer(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional25;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional25=self!=((void*)0)&&self->item!=((void*)0),                _if_conditional25) {
                    if(self->item) { come_call_finalizer(CVALUE_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
}

_Bool sIntNode_terminated(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __result17__;
memset(&__result_obj__, 0, sizeof(void*));
    __result17__ = (_Bool)0;
    return __result17__;
}

int sIntNode_sline(struct sIntNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
int __result18__;
memset(&__result_obj__, 0, sizeof(void*));
    __result18__ = self->sline;
    return __result18__;
}

char* sIntNode_sname(struct sIntNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value19;
char* __result19__;
memset(&__result_obj__, 0, sizeof(void*));
    __result19__ = __result_obj__ = ((char*)(right_value19=__builtin_string(self->sname)));
    return __result19__;
}

struct sUIntNode* sUIntNode_initialize(struct sUIntNode* self, unsigned int value, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value20;
char* __dec_obj12;
struct sUIntNode* __result20__;
memset(&__result_obj__, 0, sizeof(void*));
    self->value=value;
    self->sline=info->sline;
    __dec_obj12=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value20=__builtin_string(info->sname))));
    if(__dec_obj12) { __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0,0,0); }
    if(right_value20 && right_value20 != __result_obj__) { right_value20 = come_decrement_ref_count(right_value20, (void*)0, (void*)0, 1, 0, 0); }
    __result20__ = __result_obj__ = self;
    if(self) { come_call_finalizer(sUIntNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result20__;
    if(self) { come_call_finalizer(sUIntNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

_Bool sUIntNode_terminated(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __result21__;
memset(&__result_obj__, 0, sizeof(void*));
    __result21__ = (_Bool)0;
    return __result21__;
}

char* sUIntNode_kind(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value21;
char* __result22__;
memset(&__result_obj__, 0, sizeof(void*));
    __result22__ = __result_obj__ = ((char*)(right_value21=__builtin_string("sUIntNode")));
    return __result22__;
}

_Bool sUIntNode_compile(struct sUIntNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value22;
struct CVALUE* come_value_15;
void* right_value23;
char* __dec_obj13;
void* right_value24;
void* right_value25;
struct sType* __dec_obj14;
_Bool __result23__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&come_value_15, 0, sizeof(struct CVALUE*));
    come_value_15=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value22=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function3.c", 84))));
    if(right_value22 && right_value22 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value22, (void*)0, (void*)0, 0, 1, 0, 0); }
    __dec_obj13=come_value_15->c_value;
    come_value_15->c_value=(char*)come_increment_ref_count(((char*)(right_value23=xsprintf("%u",self->value))));
    if(__dec_obj13) { __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0,0,0); }
    if(right_value23 && right_value23 != __result_obj__) { right_value23 = come_decrement_ref_count(right_value23, (void*)0, (void*)0, 1, 0, 0); }
    __dec_obj14=come_value_15->type;
    come_value_15->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value25=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value24=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function3.c", 87)))),"int",(_Bool)0,info))));
    if(__dec_obj14) { come_call_finalizer(sType_finalize,__dec_obj14, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value24 && right_value24 != __result_obj__) { come_call_finalizer(sType_finalize,right_value24, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value25 && right_value25 != __result_obj__) { come_call_finalizer(sType_finalize,right_value25, (void*)0, (void*)0, 0, 1, 0, 0); }
    come_value_15->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_15));
    add_come_last_code(info,"%s;\n",come_value_15->c_value);
    __result23__ = (_Bool)1;
    if(come_value_15) { come_call_finalizer(CVALUE_finalize,come_value_15, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result23__;
    if(come_value_15) { come_call_finalizer(CVALUE_finalize,come_value_15, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sUIntNode_sline(struct sUIntNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
int __result24__;
memset(&__result_obj__, 0, sizeof(void*));
    __result24__ = self->sline;
    return __result24__;
}

char* sUIntNode_sname(struct sUIntNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value26;
char* __result25__;
memset(&__result_obj__, 0, sizeof(void*));
    __result25__ = __result_obj__ = ((char*)(right_value26=__builtin_string(self->sname)));
    return __result25__;
}

struct sLongNode* sLongNode_initialize(struct sLongNode* self, unsigned long int value, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value27;
char* __dec_obj15;
struct sLongNode* __result26__;
memset(&__result_obj__, 0, sizeof(void*));
    self->value=value;
    self->sline=info->sline;
    __dec_obj15=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value27=__builtin_string(info->sname))));
    if(__dec_obj15) { __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0,0,0); }
    if(right_value27 && right_value27 != __result_obj__) { right_value27 = come_decrement_ref_count(right_value27, (void*)0, (void*)0, 1, 0, 0); }
    __result26__ = __result_obj__ = self;
    if(self) { come_call_finalizer(sLongNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result26__;
    if(self) { come_call_finalizer(sLongNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

char* sLongNode_kind(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value28;
char* __result27__;
memset(&__result_obj__, 0, sizeof(void*));
    __result27__ = __result_obj__ = ((char*)(right_value28=__builtin_string("sLongNode")));
    return __result27__;
}

_Bool sLongNode_compile(struct sLongNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value29;
struct CVALUE* come_value_16;
void* right_value30;
char* __dec_obj16;
void* right_value31;
void* right_value32;
struct sType* __dec_obj17;
_Bool __result28__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&come_value_16, 0, sizeof(struct CVALUE*));
    come_value_16=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value29=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function3.c", 131))));
    if(right_value29 && right_value29 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value29, (void*)0, (void*)0, 0, 1, 0, 0); }
    __dec_obj16=come_value_16->c_value;
    come_value_16->c_value=(char*)come_increment_ref_count(((char*)(right_value30=xsprintf("%ld",self->value))));
    if(__dec_obj16) { __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0,0,0); }
    if(right_value30 && right_value30 != __result_obj__) { right_value30 = come_decrement_ref_count(right_value30, (void*)0, (void*)0, 1, 0, 0); }
    __dec_obj17=come_value_16->type;
    come_value_16->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value32=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value31=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function3.c", 134)))),"long",(_Bool)0,info))));
    if(__dec_obj17) { come_call_finalizer(sType_finalize,__dec_obj17, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value31 && right_value31 != __result_obj__) { come_call_finalizer(sType_finalize,right_value31, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value32 && right_value32 != __result_obj__) { come_call_finalizer(sType_finalize,right_value32, (void*)0, (void*)0, 0, 1, 0, 0); }
    come_value_16->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_16));
    add_come_last_code(info,"%s;\n",come_value_16->c_value);
    __result28__ = (_Bool)1;
    if(come_value_16) { come_call_finalizer(CVALUE_finalize,come_value_16, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result28__;
    if(come_value_16) { come_call_finalizer(CVALUE_finalize,come_value_16, (void*)0, (void*)0, 0, 0, 0, 0); }
}

_Bool sLongNode_terminated(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __result29__;
memset(&__result_obj__, 0, sizeof(void*));
    __result29__ = (_Bool)0;
    return __result29__;
}

int sLongNode_sline(struct sLongNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
int __result30__;
memset(&__result_obj__, 0, sizeof(void*));
    __result30__ = self->sline;
    return __result30__;
}

char* sLongNode_sname(struct sLongNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value33;
char* __result31__;
memset(&__result_obj__, 0, sizeof(void*));
    __result31__ = __result_obj__ = ((char*)(right_value33=__builtin_string(self->sname)));
    return __result31__;
}

struct sULongNode* sULongNode_initialize(struct sULongNode* self, unsigned long int value, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value34;
char* __dec_obj18;
struct sULongNode* __result32__;
memset(&__result_obj__, 0, sizeof(void*));
    self->value=value;
    self->sline=info->sline;
    __dec_obj18=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value34=__builtin_string(info->sname))));
    if(__dec_obj18) { __dec_obj18 = come_decrement_ref_count(__dec_obj18, (void*)0, (void*)0, 0,0,0); }
    if(right_value34 && right_value34 != __result_obj__) { right_value34 = come_decrement_ref_count(right_value34, (void*)0, (void*)0, 1, 0, 0); }
    __result32__ = __result_obj__ = self;
    if(self) { come_call_finalizer(sULongNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result32__;
    if(self) { come_call_finalizer(sULongNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

char* sULongNode_kind(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value35;
char* __result33__;
memset(&__result_obj__, 0, sizeof(void*));
    __result33__ = __result_obj__ = ((char*)(right_value35=__builtin_string("sULongNode")));
    return __result33__;
}

_Bool sULongNode_compile(struct sULongNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value36;
struct CVALUE* come_value_17;
void* right_value37;
char* __dec_obj19;
void* right_value38;
void* right_value39;
struct sType* __dec_obj20;
_Bool __result34__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&come_value_17, 0, sizeof(struct CVALUE*));
    come_value_17=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value36=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function3.c", 183))));
    if(right_value36 && right_value36 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value36, (void*)0, (void*)0, 0, 1, 0, 0); }
    __dec_obj19=come_value_17->c_value;
    come_value_17->c_value=(char*)come_increment_ref_count(((char*)(right_value37=xsprintf("%lu",self->value))));
    if(__dec_obj19) { __dec_obj19 = come_decrement_ref_count(__dec_obj19, (void*)0, (void*)0, 0,0,0); }
    if(right_value37 && right_value37 != __result_obj__) { right_value37 = come_decrement_ref_count(right_value37, (void*)0, (void*)0, 1, 0, 0); }
    __dec_obj20=come_value_17->type;
    come_value_17->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value39=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value38=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function3.c", 186)))),"long",(_Bool)0,info))));
    if(__dec_obj20) { come_call_finalizer(sType_finalize,__dec_obj20, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value38 && right_value38 != __result_obj__) { come_call_finalizer(sType_finalize,right_value38, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value39 && right_value39 != __result_obj__) { come_call_finalizer(sType_finalize,right_value39, (void*)0, (void*)0, 0, 1, 0, 0); }
    come_value_17->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_17));
    add_come_last_code(info,"%s;\n",come_value_17->c_value);
    __result34__ = (_Bool)1;
    if(come_value_17) { come_call_finalizer(CVALUE_finalize,come_value_17, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result34__;
    if(come_value_17) { come_call_finalizer(CVALUE_finalize,come_value_17, (void*)0, (void*)0, 0, 0, 0, 0); }
}

_Bool sULongNode_terminated(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __result35__;
memset(&__result_obj__, 0, sizeof(void*));
    __result35__ = (_Bool)0;
    return __result35__;
}

int sULongNode_sline(struct sULongNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
int __result36__;
memset(&__result_obj__, 0, sizeof(void*));
    __result36__ = self->sline;
    return __result36__;
}

char* sULongNode_sname(struct sULongNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value40;
char* __result37__;
memset(&__result_obj__, 0, sizeof(void*));
    __result37__ = __result_obj__ = ((char*)(right_value40=__builtin_string(self->sname)));
    return __result37__;
}

struct sFloatNode* sFloatNode_initialize(struct sFloatNode* self, float value, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value41;
char* __dec_obj21;
struct sFloatNode* __result38__;
memset(&__result_obj__, 0, sizeof(void*));
    self->value=value;
    self->sline=info->sline;
    __dec_obj21=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value41=__builtin_string(info->sname))));
    if(__dec_obj21) { __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0,0,0); }
    if(right_value41 && right_value41 != __result_obj__) { right_value41 = come_decrement_ref_count(right_value41, (void*)0, (void*)0, 1, 0, 0); }
    __result38__ = __result_obj__ = self;
    if(self) { come_call_finalizer(sFloatNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result38__;
    if(self) { come_call_finalizer(sFloatNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

char* sFloatNode_kind(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value42;
char* __result39__;
memset(&__result_obj__, 0, sizeof(void*));
    __result39__ = __result_obj__ = ((char*)(right_value42=__builtin_string("sFloatNode")));
    return __result39__;
}

_Bool sFloatNode_compile(struct sFloatNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value43;
struct CVALUE* come_value_18;
void* right_value44;
char* __dec_obj22;
void* right_value45;
void* right_value46;
struct sType* __dec_obj23;
_Bool __result40__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&come_value_18, 0, sizeof(struct CVALUE*));
    come_value_18=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value43=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function3.c", 235))));
    if(right_value43 && right_value43 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value43, (void*)0, (void*)0, 0, 1, 0, 0); }
    __dec_obj22=come_value_18->c_value;
    come_value_18->c_value=(char*)come_increment_ref_count(((char*)(right_value44=xsprintf("%f",self->value))));
    if(__dec_obj22) { __dec_obj22 = come_decrement_ref_count(__dec_obj22, (void*)0, (void*)0, 0,0,0); }
    if(right_value44 && right_value44 != __result_obj__) { right_value44 = come_decrement_ref_count(right_value44, (void*)0, (void*)0, 1, 0, 0); }
    __dec_obj23=come_value_18->type;
    come_value_18->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value46=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value45=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function3.c", 238)))),"float",(_Bool)0,info))));
    if(__dec_obj23) { come_call_finalizer(sType_finalize,__dec_obj23, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value45 && right_value45 != __result_obj__) { come_call_finalizer(sType_finalize,right_value45, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value46 && right_value46 != __result_obj__) { come_call_finalizer(sType_finalize,right_value46, (void*)0, (void*)0, 0, 1, 0, 0); }
    come_value_18->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_18));
    add_come_last_code(info,"%s;\n",come_value_18->c_value);
    __result40__ = (_Bool)1;
    if(come_value_18) { come_call_finalizer(CVALUE_finalize,come_value_18, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result40__;
    if(come_value_18) { come_call_finalizer(CVALUE_finalize,come_value_18, (void*)0, (void*)0, 0, 0, 0, 0); }
}

_Bool sFloatNode_terminated(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __result41__;
memset(&__result_obj__, 0, sizeof(void*));
    __result41__ = (_Bool)0;
    return __result41__;
}

int sFloatNode_sline(struct sFloatNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
int __result42__;
memset(&__result_obj__, 0, sizeof(void*));
    __result42__ = self->sline;
    return __result42__;
}

char* sFloatNode_sname(struct sFloatNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value47;
char* __result43__;
memset(&__result_obj__, 0, sizeof(void*));
    __result43__ = __result_obj__ = ((char*)(right_value47=__builtin_string(self->sname)));
    return __result43__;
}

struct sDoubleNode* sDoubleNode_initialize(struct sDoubleNode* self, double value, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value48;
char* __dec_obj24;
struct sDoubleNode* __result44__;
memset(&__result_obj__, 0, sizeof(void*));
    self->value=value;
    self->sline=info->sline;
    __dec_obj24=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value48=__builtin_string(info->sname))));
    if(__dec_obj24) { __dec_obj24 = come_decrement_ref_count(__dec_obj24, (void*)0, (void*)0, 0,0,0); }
    if(right_value48 && right_value48 != __result_obj__) { right_value48 = come_decrement_ref_count(right_value48, (void*)0, (void*)0, 1, 0, 0); }
    __result44__ = __result_obj__ = self;
    if(self) { come_call_finalizer(sDoubleNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result44__;
    if(self) { come_call_finalizer(sDoubleNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

char* sDoubleNode_kind(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value49;
char* __result45__;
memset(&__result_obj__, 0, sizeof(void*));
    __result45__ = __result_obj__ = ((char*)(right_value49=__builtin_string("sDoubleNode")));
    return __result45__;
}

_Bool sDoubleNode_compile(struct sDoubleNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value50;
struct CVALUE* come_value_19;
void* right_value51;
char* __dec_obj25;
void* right_value52;
void* right_value53;
struct sType* __dec_obj26;
_Bool __result46__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&come_value_19, 0, sizeof(struct CVALUE*));
    come_value_19=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value50=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function3.c", 287))));
    if(right_value50 && right_value50 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value50, (void*)0, (void*)0, 0, 1, 0, 0); }
    __dec_obj25=come_value_19->c_value;
    come_value_19->c_value=(char*)come_increment_ref_count(((char*)(right_value51=xsprintf("%lf",self->value))));
    if(__dec_obj25) { __dec_obj25 = come_decrement_ref_count(__dec_obj25, (void*)0, (void*)0, 0,0,0); }
    if(right_value51 && right_value51 != __result_obj__) { right_value51 = come_decrement_ref_count(right_value51, (void*)0, (void*)0, 1, 0, 0); }
    __dec_obj26=come_value_19->type;
    come_value_19->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value53=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value52=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function3.c", 290)))),"double",(_Bool)0,info))));
    if(__dec_obj26) { come_call_finalizer(sType_finalize,__dec_obj26, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value52 && right_value52 != __result_obj__) { come_call_finalizer(sType_finalize,right_value52, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value53 && right_value53 != __result_obj__) { come_call_finalizer(sType_finalize,right_value53, (void*)0, (void*)0, 0, 1, 0, 0); }
    come_value_19->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_19));
    add_come_last_code(info,"%s;\n",come_value_19->c_value);
    __result46__ = (_Bool)1;
    if(come_value_19) { come_call_finalizer(CVALUE_finalize,come_value_19, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result46__;
    if(come_value_19) { come_call_finalizer(CVALUE_finalize,come_value_19, (void*)0, (void*)0, 0, 0, 0, 0); }
}

_Bool sDoubleNode_terminated(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __result47__;
memset(&__result_obj__, 0, sizeof(void*));
    __result47__ = (_Bool)0;
    return __result47__;
}

int sDoubleNode_sline(struct sDoubleNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
int __result48__;
memset(&__result_obj__, 0, sizeof(void*));
    __result48__ = self->sline;
    return __result48__;
}

char* sDoubleNode_sname(struct sDoubleNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value54;
char* __result49__;
memset(&__result_obj__, 0, sizeof(void*));
    __result49__ = __result_obj__ = ((char*)(right_value54=__builtin_string(self->sname)));
    return __result49__;
}

struct sNode* get_number(_Bool minus, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
const int buf_size_20=128;
char* p2_22;
_Bool _if_conditional32;
_Bool _if_conditional33;
_Bool _while_condtional4;
_Bool _if_conditional34;
_Bool _if_conditional35;
char c_23;
_Bool _if_conditional36;
_Bool _if_conditional37;
_Bool _while_condtional5;
_Bool _if_conditional38;
_Bool _if_conditional39;
_Bool _if_conditional40;
_Bool _if_conditional41;
_Bool _if_conditional42;
_Bool _if_conditional43;
_Bool _if_conditional44;
_Bool _if_conditional45;
_Bool _while_condtional6;
_Bool _if_conditional46;
_Bool _if_conditional47;
_Bool _if_conditional48;
void* right_value55;
void* right_value56;
struct sNode* _inf_value1;
struct sFloatNode* _inf_obj_value1;
void* right_value59;
struct sNode* __result52__;
_Bool _if_conditional54;
void* right_value60;
void* right_value61;
struct sNode* _inf_value2;
struct sDoubleNode* _inf_obj_value2;
void* right_value64;
struct sNode* __result55__;
void* right_value65;
void* right_value66;
struct sNode* _inf_value3;
struct sDoubleNode* _inf_obj_value3;
void* right_value69;
struct sNode* __result58__;
_Bool _if_conditional65;
_Bool _if_conditional66;
_Bool _if_conditional67;
unsigned long int lont_27;
int value2_28;
void* right_value70;
void* right_value71;
struct sNode* _inf_value4;
struct sULongNode* _inf_obj_value4;
void* right_value74;
struct sNode* __result61__;
unsigned long int lont_30;
int value_31;
void* right_value75;
void* right_value76;
struct sNode* _inf_value5;
struct sULongNode* _inf_obj_value5;
void* right_value79;
struct sNode* __result64__;
unsigned int value_33;
void* right_value80;
void* right_value81;
struct sNode* _inf_value6;
struct sUIntNode* _inf_obj_value6;
void* right_value84;
struct sNode* __result67__;
_Bool _if_conditional83;
_Bool _if_conditional84;
unsigned long long int value_35;
void* right_value85;
void* right_value86;
struct sNode* _inf_value7;
struct sLongNode* _inf_obj_value7;
void* right_value89;
struct sNode* __result70__;
_Bool _if_conditional90;
unsigned long long int value_37;
void* right_value90;
void* right_value91;
struct sNode* _inf_value8;
struct sULongNode* _inf_obj_value8;
void* right_value94;
struct sNode* __result73__;
unsigned long long int value_39;
void* right_value95;
void* right_value96;
struct sNode* _inf_value9;
struct sLongNode* _inf_obj_value9;
void* right_value99;
struct sNode* __result76__;
unsigned long int lont_41;
int value_42;
void* right_value100;
void* right_value101;
struct sNode* _inf_value10;
struct sIntNode* _inf_obj_value10;
void* right_value104;
struct sNode* __result79__;
struct sNode* __result80__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&p2_22, 0, sizeof(char*));
memset(&c_23, 0, sizeof(char));
memset(&lont_27, 0, sizeof(unsigned long int));
memset(&value2_28, 0, sizeof(int));
memset(&lont_30, 0, sizeof(unsigned long int));
memset(&value_31, 0, sizeof(int));
memset(&value_33, 0, sizeof(unsigned int));
memset(&value_35, 0, sizeof(unsigned long long int));
memset(&value_37, 0, sizeof(unsigned long long int));
memset(&value_39, 0, sizeof(unsigned long long int));
memset(&lont_41, 0, sizeof(unsigned long int));
memset(&value_42, 0, sizeof(int));
    char buf_21[128+1];
    memset(&buf_21, 0, sizeof(char)    *(128+1)    );
    p2_22=buf_21;
    if(_if_conditional32=minus,    _if_conditional32) {
        *p2_22=45;
        p2_22++;
    }
    if(_if_conditional33=xisdigit(*info->p),    _if_conditional33) {
        while(_while_condtional4=xisdigit(*info->p)||*info->p==95,        _while_condtional4) {
            if(_if_conditional34=*info->p==95,            _if_conditional34) {
                info->p++;
            }
            else {
                *p2_22++=*info->p;
                info->p++;
            }
            if(_if_conditional35=p2_22-buf_21>=buf_size_20,            _if_conditional35) {
                printf("%s %d: overflow node of number\n",info->sname,info->sline);
                exit(5);
            }
        }
        *p2_22=0;
        skip_spaces_and_lf(info);
        c_23=*(info->p+1);
        if(_if_conditional36=*info->p==46&&xisdigit(c_23),        _if_conditional36) {
            *p2_22++=*info->p;
            if(_if_conditional37=p2_22-buf_21>=buf_size_20,            _if_conditional37) {
                printf("%s %d: overflow node of number",info->sname,info->sline);
                exit(11);
            }
            info->p++;
            skip_spaces_and_lf(info);
            while(_while_condtional5=xisdigit(*info->p)||*info->p==95,            _while_condtional5) {
                if(_if_conditional38=*info->p==95,                _if_conditional38) {
                    info->p++;
                }
                else {
                    *p2_22++=*info->p;
                    info->p++;
                }
                if(_if_conditional39=p2_22-buf_21>=buf_size_20,                _if_conditional39) {
                    err_msg(info,"overflow node of number");
                    exit(2);
                }
            }
            if(_if_conditional40=*info->p==101,            _if_conditional40) {
                *p2_22++=*info->p;
                info->p++;
                if(_if_conditional41=p2_22-buf_21>=buf_size_20,                _if_conditional41) {
                    err_msg(info,"overflow node of number");
                    exit(2);
                }
                if(_if_conditional42=*info->p==43,                _if_conditional42) {
                    *p2_22++=*info->p;
                    info->p++;
                    if(_if_conditional43=p2_22-buf_21>=buf_size_20,                    _if_conditional43) {
                        err_msg(info,"overflow node of number");
                        exit(2);
                    }
                }
                else {
                    if(_if_conditional44=*info->p==45,                    _if_conditional44) {
                        *p2_22++=*info->p;
                        info->p++;
                        if(_if_conditional45=p2_22-buf_21>=buf_size_20,                        _if_conditional45) {
                            err_msg(info,"overflow node of number");
                            exit(2);
                        }
                    }
                    else {
                        err_msg(info,"invalid float value");
                        exit(2);
                    }
                }
                while(_while_condtional6=xisdigit(*info->p)||*info->p==95,                _while_condtional6) {
                    if(_if_conditional46=*info->p==95,                    _if_conditional46) {
                        info->p++;
                    }
                    else {
                        *p2_22++=*info->p;
                        info->p++;
                    }
                    if(_if_conditional47=p2_22-buf_21>=buf_size_20,                    _if_conditional47) {
                        err_msg(info,"overflow node of number");
                        exit(2);
                    }
                }
            }
            *p2_22=0;
            skip_spaces_and_lf(info);
            if(_if_conditional48=*info->p==102||*info->p==70,            _if_conditional48) {
                info->p++;
                skip_spaces_and_lf(info);
                _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 426);
                _inf_obj_value1=come_increment_ref_count(((struct sFloatNode*)(right_value56=sFloatNode_initialize((struct sFloatNode*)come_increment_ref_count(((struct sFloatNode*)(right_value55=(struct sFloatNode*)come_calloc(1, sizeof(struct sFloatNode)*(1), "05function3.c", 426)))),strtof(buf_21,((void*)0)),info))));
                _inf_value1->_protocol_obj=_inf_obj_value1;
                _inf_value1->finalize=(void*)sFloatNode_finalize;
                _inf_value1->clone=(void*)sFloatNode_clone;
                _inf_value1->compile=(void*)sFloatNode_compile;
                _inf_value1->sline=(void*)sFloatNode_sline;
                _inf_value1->sname=(void*)sFloatNode_sname;
                _inf_value1->terminated=(void*)sFloatNode_terminated;
                _inf_value1->kind=(void*)sFloatNode_kind;
                __result52__ = __result_obj__ = ((struct sNode*)(right_value59=_inf_value1));
                if(right_value55 && right_value55 != __result_obj__) { come_call_finalizer(sFloatNode_finalize,right_value55, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value56 && right_value56 != __result_obj__) { come_call_finalizer(sFloatNode_finalize,right_value56, (void*)0, (void*)0, 0, 1, 0, 0); }
                return __result52__;
            }
            else {
                if(_if_conditional54=*info->p==108||*info->p==76,                _if_conditional54) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 432);
                    _inf_obj_value2=come_increment_ref_count(((struct sDoubleNode*)(right_value61=sDoubleNode_initialize((struct sDoubleNode*)come_increment_ref_count(((struct sDoubleNode*)(right_value60=(struct sDoubleNode*)come_calloc(1, sizeof(struct sDoubleNode)*(1), "05function3.c", 432)))),strtod(buf_21,((void*)0)),info))));
                    _inf_value2->_protocol_obj=_inf_obj_value2;
                    _inf_value2->finalize=(void*)sDoubleNode_finalize;
                    _inf_value2->clone=(void*)sDoubleNode_clone;
                    _inf_value2->compile=(void*)sDoubleNode_compile;
                    _inf_value2->sline=(void*)sDoubleNode_sline;
                    _inf_value2->sname=(void*)sDoubleNode_sname;
                    _inf_value2->terminated=(void*)sDoubleNode_terminated;
                    _inf_value2->kind=(void*)sDoubleNode_kind;
                    __result55__ = __result_obj__ = ((struct sNode*)(right_value64=_inf_value2));
                    if(right_value60 && right_value60 != __result_obj__) { come_call_finalizer(sDoubleNode_finalize,right_value60, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(right_value61 && right_value61 != __result_obj__) { come_call_finalizer(sDoubleNode_finalize,right_value61, (void*)0, (void*)0, 0, 1, 0, 0); }
                    return __result55__;
                }
                else {
                    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 435);
                    _inf_obj_value3=come_increment_ref_count(((struct sDoubleNode*)(right_value66=sDoubleNode_initialize((struct sDoubleNode*)come_increment_ref_count(((struct sDoubleNode*)(right_value65=(struct sDoubleNode*)come_calloc(1, sizeof(struct sDoubleNode)*(1), "05function3.c", 435)))),strtod(buf_21,((void*)0)),info))));
                    _inf_value3->_protocol_obj=_inf_obj_value3;
                    _inf_value3->finalize=(void*)sDoubleNode_finalize;
                    _inf_value3->clone=(void*)sDoubleNode_clone;
                    _inf_value3->compile=(void*)sDoubleNode_compile;
                    _inf_value3->sline=(void*)sDoubleNode_sline;
                    _inf_value3->sname=(void*)sDoubleNode_sname;
                    _inf_value3->terminated=(void*)sDoubleNode_terminated;
                    _inf_value3->kind=(void*)sDoubleNode_kind;
                    __result58__ = __result_obj__ = ((struct sNode*)(right_value69=_inf_value3));
                    if(right_value65 && right_value65 != __result_obj__) { come_call_finalizer(sDoubleNode_finalize,right_value65, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(right_value66 && right_value66 != __result_obj__) { come_call_finalizer(sDoubleNode_finalize,right_value66, (void*)0, (void*)0, 0, 1, 0, 0); }
                    return __result58__;
                }
            }
        }
        else {
            if(_if_conditional65=*info->p==117||*info->p==85,            _if_conditional65) {
                info->p++;
                skip_spaces_and_lf(info);
                if(_if_conditional66=*info->p==76||*info->p==108,                _if_conditional66) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(_if_conditional67=*info->p==76||*info->p==108,                    _if_conditional67) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        value2_28=strtoull(buf_21,((void*)0),0);
                        _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 455);
                        _inf_obj_value4=come_increment_ref_count(((struct sULongNode*)(right_value71=sULongNode_initialize((struct sULongNode*)come_increment_ref_count(((struct sULongNode*)(right_value70=(struct sULongNode*)come_calloc(1, sizeof(struct sULongNode)*(1), "05function3.c", 455)))),value2_28,info))));
                        _inf_value4->_protocol_obj=_inf_obj_value4;
                        _inf_value4->finalize=(void*)sULongNode_finalize;
                        _inf_value4->clone=(void*)sULongNode_clone;
                        _inf_value4->compile=(void*)sULongNode_compile;
                        _inf_value4->sline=(void*)sULongNode_sline;
                        _inf_value4->sname=(void*)sULongNode_sname;
                        _inf_value4->terminated=(void*)sULongNode_terminated;
                        _inf_value4->kind=(void*)sULongNode_kind;
                        __result61__ = __result_obj__ = ((struct sNode*)(right_value74=_inf_value4));
                        if(right_value70 && right_value70 != __result_obj__) { come_call_finalizer(sULongNode_finalize,right_value70, (void*)0, (void*)0, 0, 1, 0, 0); }
                        if(right_value71 && right_value71 != __result_obj__) { come_call_finalizer(sULongNode_finalize,right_value71, (void*)0, (void*)0, 0, 1, 0, 0); }
                        return __result61__;
                    }
                    else {
                        value_31=strtoull(buf_21,((void*)0),0);
                        _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 459);
                        _inf_obj_value5=come_increment_ref_count(((struct sULongNode*)(right_value76=sULongNode_initialize((struct sULongNode*)come_increment_ref_count(((struct sULongNode*)(right_value75=(struct sULongNode*)come_calloc(1, sizeof(struct sULongNode)*(1), "05function3.c", 459)))),value_31,info))));
                        _inf_value5->_protocol_obj=_inf_obj_value5;
                        _inf_value5->finalize=(void*)sULongNode_finalize;
                        _inf_value5->clone=(void*)sULongNode_clone;
                        _inf_value5->compile=(void*)sULongNode_compile;
                        _inf_value5->sline=(void*)sULongNode_sline;
                        _inf_value5->sname=(void*)sULongNode_sname;
                        _inf_value5->terminated=(void*)sULongNode_terminated;
                        _inf_value5->kind=(void*)sULongNode_kind;
                        __result64__ = __result_obj__ = ((struct sNode*)(right_value79=_inf_value5));
                        if(right_value75 && right_value75 != __result_obj__) { come_call_finalizer(sULongNode_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0, 0); }
                        if(right_value76 && right_value76 != __result_obj__) { come_call_finalizer(sULongNode_finalize,right_value76, (void*)0, (void*)0, 0, 1, 0, 0); }
                        return __result64__;
                    }
                }
                else {
                    value_33=strtoul(buf_21,((void*)0),0);
                    _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 464);
                    _inf_obj_value6=come_increment_ref_count(((struct sUIntNode*)(right_value81=sUIntNode_initialize((struct sUIntNode*)come_increment_ref_count(((struct sUIntNode*)(right_value80=(struct sUIntNode*)come_calloc(1, sizeof(struct sUIntNode)*(1), "05function3.c", 464)))),value_33,info))));
                    _inf_value6->_protocol_obj=_inf_obj_value6;
                    _inf_value6->finalize=(void*)sUIntNode_finalize;
                    _inf_value6->clone=(void*)sUIntNode_clone;
                    _inf_value6->compile=(void*)sUIntNode_compile;
                    _inf_value6->sline=(void*)sUIntNode_sline;
                    _inf_value6->sname=(void*)sUIntNode_sname;
                    _inf_value6->terminated=(void*)sUIntNode_terminated;
                    _inf_value6->kind=(void*)sUIntNode_kind;
                    __result67__ = __result_obj__ = ((struct sNode*)(right_value84=_inf_value6));
                    if(right_value80 && right_value80 != __result_obj__) { come_call_finalizer(sUIntNode_finalize,right_value80, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(right_value81 && right_value81 != __result_obj__) { come_call_finalizer(sUIntNode_finalize,right_value81, (void*)0, (void*)0, 0, 1, 0, 0); }
                    return __result67__;
                }
            }
            else {
                if(_if_conditional83=*info->p==76||*info->p==108,                _if_conditional83) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(_if_conditional84=*info->p==76||*info->p==108,                    _if_conditional84) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        value_35=strtoull(buf_21,((void*)0),0);
                        _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 478);
                        _inf_obj_value7=come_increment_ref_count(((struct sLongNode*)(right_value86=sLongNode_initialize((struct sLongNode*)come_increment_ref_count(((struct sLongNode*)(right_value85=(struct sLongNode*)come_calloc(1, sizeof(struct sLongNode)*(1), "05function3.c", 478)))),value_35,info))));
                        _inf_value7->_protocol_obj=_inf_obj_value7;
                        _inf_value7->finalize=(void*)sLongNode_finalize;
                        _inf_value7->clone=(void*)sLongNode_clone;
                        _inf_value7->compile=(void*)sLongNode_compile;
                        _inf_value7->sline=(void*)sLongNode_sline;
                        _inf_value7->sname=(void*)sLongNode_sname;
                        _inf_value7->terminated=(void*)sLongNode_terminated;
                        _inf_value7->kind=(void*)sLongNode_kind;
                        __result70__ = __result_obj__ = ((struct sNode*)(right_value89=_inf_value7));
                        if(right_value85 && right_value85 != __result_obj__) { come_call_finalizer(sLongNode_finalize,right_value85, (void*)0, (void*)0, 0, 1, 0, 0); }
                        if(right_value86 && right_value86 != __result_obj__) { come_call_finalizer(sLongNode_finalize,right_value86, (void*)0, (void*)0, 0, 1, 0, 0); }
                        return __result70__;
                    }
                    else {
                        if(_if_conditional90=*info->p==85||*info->p==117,                        _if_conditional90) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            value_37=strtoull(buf_21,((void*)0),0);
                            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 487);
                            _inf_obj_value8=come_increment_ref_count(((struct sULongNode*)(right_value91=sULongNode_initialize((struct sULongNode*)come_increment_ref_count(((struct sULongNode*)(right_value90=(struct sULongNode*)come_calloc(1, sizeof(struct sULongNode)*(1), "05function3.c", 487)))),value_37,info))));
                            _inf_value8->_protocol_obj=_inf_obj_value8;
                            _inf_value8->finalize=(void*)sULongNode_finalize;
                            _inf_value8->clone=(void*)sULongNode_clone;
                            _inf_value8->compile=(void*)sULongNode_compile;
                            _inf_value8->sline=(void*)sULongNode_sline;
                            _inf_value8->sname=(void*)sULongNode_sname;
                            _inf_value8->terminated=(void*)sULongNode_terminated;
                            _inf_value8->kind=(void*)sULongNode_kind;
                            __result73__ = __result_obj__ = ((struct sNode*)(right_value94=_inf_value8));
                            if(right_value90 && right_value90 != __result_obj__) { come_call_finalizer(sULongNode_finalize,right_value90, (void*)0, (void*)0, 0, 1, 0, 0); }
                            if(right_value91 && right_value91 != __result_obj__) { come_call_finalizer(sULongNode_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0, 0); }
                            return __result73__;
                        }
                        else {
                            value_39=strtoull(buf_21,((void*)0),0);
                            _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 491);
                            _inf_obj_value9=come_increment_ref_count(((struct sLongNode*)(right_value96=sLongNode_initialize((struct sLongNode*)come_increment_ref_count(((struct sLongNode*)(right_value95=(struct sLongNode*)come_calloc(1, sizeof(struct sLongNode)*(1), "05function3.c", 491)))),value_39,info))));
                            _inf_value9->_protocol_obj=_inf_obj_value9;
                            _inf_value9->finalize=(void*)sLongNode_finalize;
                            _inf_value9->clone=(void*)sLongNode_clone;
                            _inf_value9->compile=(void*)sLongNode_compile;
                            _inf_value9->sline=(void*)sLongNode_sline;
                            _inf_value9->sname=(void*)sLongNode_sname;
                            _inf_value9->terminated=(void*)sLongNode_terminated;
                            _inf_value9->kind=(void*)sLongNode_kind;
                            __result76__ = __result_obj__ = ((struct sNode*)(right_value99=_inf_value9));
                            if(right_value95 && right_value95 != __result_obj__) { come_call_finalizer(sLongNode_finalize,right_value95, (void*)0, (void*)0, 0, 1, 0, 0); }
                            if(right_value96 && right_value96 != __result_obj__) { come_call_finalizer(sLongNode_finalize,right_value96, (void*)0, (void*)0, 0, 1, 0, 0); }
                            return __result76__;
                        }
                    }
                }
                else {
                    value_42=strtoll(buf_21,((void*)0),0);
                    _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 496);
                    _inf_obj_value10=come_increment_ref_count(((struct sIntNode*)(right_value101=sIntNode_initialize((struct sIntNode*)come_increment_ref_count(((struct sIntNode*)(right_value100=(struct sIntNode*)come_calloc(1, sizeof(struct sIntNode)*(1), "05function3.c", 496)))),value_42,info))));
                    _inf_value10->_protocol_obj=_inf_obj_value10;
                    _inf_value10->finalize=(void*)sIntNode_finalize;
                    _inf_value10->clone=(void*)sIntNode_clone;
                    _inf_value10->compile=(void*)sIntNode_compile;
                    _inf_value10->sline=(void*)sIntNode_sline;
                    _inf_value10->sname=(void*)sIntNode_sname;
                    _inf_value10->terminated=(void*)sIntNode_terminated;
                    _inf_value10->kind=(void*)sIntNode_kind;
                    __result79__ = __result_obj__ = ((struct sNode*)(right_value104=_inf_value10));
                    if(right_value100 && right_value100 != __result_obj__) { come_call_finalizer(sIntNode_finalize,right_value100, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(right_value101 && right_value101 != __result_obj__) { come_call_finalizer(sIntNode_finalize,right_value101, (void*)0, (void*)0, 0, 1, 0, 0); }
                    return __result79__;
                }
            }
        }
    }
    else {
        err_msg(info,"require digits after + or -");
        exit(2);
    }
    __result80__ = __result_obj__ = (struct sNode*)((void*)0);
    return __result80__;
}

static void sFloatNode_finalize(struct sFloatNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional49;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional49=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional49) {
                        if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                    }
}

static struct sFloatNode* sFloatNode_clone(struct sFloatNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional50;
struct sFloatNode* __result50__;
void* right_value57;
struct sFloatNode* result_24;
_Bool _if_conditional51;
_Bool _if_conditional52;
_Bool _if_conditional53;
void* right_value58;
char* __dec_obj27;
struct sFloatNode* __result51__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_24, 0, sizeof(struct sFloatNode*));
                    if(_if_conditional50=self==(void*)0,                    _if_conditional50) {
                        __result50__ = __result_obj__ = (void*)0;
                        return __result50__;
                    }
                    result_24=(struct sFloatNode*)come_increment_ref_count(((struct sFloatNode*)(right_value57=(struct sFloatNode*)come_calloc(1, sizeof(struct sFloatNode)*(1), "sFloatNode_clone", 3))));
                    if(right_value57 && right_value57 != __result_obj__) { come_call_finalizer(sFloatNode_finalize,right_value57, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(_if_conditional51=self!=((void*)0),                    _if_conditional51) {
                        result_24->value=self->value;
                    }
                    if(_if_conditional52=self!=((void*)0),                    _if_conditional52) {
                        result_24->sline=self->sline;
                    }
                    if(_if_conditional53=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional53) {
                        __dec_obj27=result_24->sname;
                        result_24->sname=(char*)come_increment_ref_count(((char*)(right_value58=string_clone(self->sname))));
                        if(__dec_obj27) { __dec_obj27 = come_decrement_ref_count(__dec_obj27, (void*)0, (void*)0, 0,0,0); }
                        if(right_value58 && right_value58 != __result_obj__) { right_value58 = come_decrement_ref_count(right_value58, (void*)0, (void*)0, 1, 0, 0); }
                    }
                    __result51__ = __result_obj__ = result_24;
                    if(result_24) { come_call_finalizer(sFloatNode_finalize,result_24, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result51__;
                    if(result_24) { come_call_finalizer(sFloatNode_finalize,result_24, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sDoubleNode_finalize(struct sDoubleNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional60;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional60=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional60) {
                            if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                        }
}

static struct sDoubleNode* sDoubleNode_clone(struct sDoubleNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional61;
struct sDoubleNode* __result56__;
void* right_value67;
struct sDoubleNode* result_26;
_Bool _if_conditional62;
_Bool _if_conditional63;
_Bool _if_conditional64;
void* right_value68;
char* __dec_obj29;
struct sDoubleNode* __result57__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_26, 0, sizeof(struct sDoubleNode*));
                        if(_if_conditional61=self==(void*)0,                        _if_conditional61) {
                            __result56__ = __result_obj__ = (void*)0;
                            return __result56__;
                        }
                        result_26=(struct sDoubleNode*)come_increment_ref_count(((struct sDoubleNode*)(right_value67=(struct sDoubleNode*)come_calloc(1, sizeof(struct sDoubleNode)*(1), "sDoubleNode_clone", 3))));
                        if(right_value67 && right_value67 != __result_obj__) { come_call_finalizer(sDoubleNode_finalize,right_value67, (void*)0, (void*)0, 0, 1, 0, 0); }
                        if(_if_conditional62=self!=((void*)0),                        _if_conditional62) {
                            result_26->value=self->value;
                        }
                        if(_if_conditional63=self!=((void*)0),                        _if_conditional63) {
                            result_26->sline=self->sline;
                        }
                        if(_if_conditional64=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional64) {
                            __dec_obj29=result_26->sname;
                            result_26->sname=(char*)come_increment_ref_count(((char*)(right_value68=string_clone(self->sname))));
                            if(__dec_obj29) { __dec_obj29 = come_decrement_ref_count(__dec_obj29, (void*)0, (void*)0, 0,0,0); }
                            if(right_value68 && right_value68 != __result_obj__) { right_value68 = come_decrement_ref_count(right_value68, (void*)0, (void*)0, 1, 0, 0); }
                        }
                        __result57__ = __result_obj__ = result_26;
                        if(result_26) { come_call_finalizer(sDoubleNode_finalize,result_26, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result57__;
                        if(result_26) { come_call_finalizer(sDoubleNode_finalize,result_26, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sNode* create_int_node(int value, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value105;
void* right_value106;
struct sNode* _inf_value11;
struct sIntNode* _inf_obj_value11;
void* right_value109;
struct sNode* __result83__;
memset(&__result_obj__, 0, sizeof(void*));
    _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 509);
    _inf_obj_value11=come_increment_ref_count(((struct sIntNode*)(right_value106=sIntNode_initialize((struct sIntNode*)come_increment_ref_count(((struct sIntNode*)(right_value105=(struct sIntNode*)come_calloc(1, sizeof(struct sIntNode)*(1), "05function3.c", 509)))),value,info))));
    _inf_value11->_protocol_obj=_inf_obj_value11;
    _inf_value11->finalize=(void*)sIntNode_finalize;
    _inf_value11->clone=(void*)sIntNode_clone;
    _inf_value11->compile=(void*)sIntNode_compile;
    _inf_value11->sline=(void*)sIntNode_sline;
    _inf_value11->sname=(void*)sIntNode_sname;
    _inf_value11->terminated=(void*)sIntNode_terminated;
    _inf_value11->kind=(void*)sIntNode_kind;
    __result83__ = __result_obj__ = ((struct sNode*)(right_value109=_inf_value11));
    if(right_value105 && right_value105 != __result_obj__) { come_call_finalizer(sIntNode_finalize,right_value105, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value106 && right_value106 != __result_obj__) { come_call_finalizer(sIntNode_finalize,right_value106, (void*)0, (void*)0, 0, 1, 0, 0); }
    return __result83__;
}

struct sNode* get_hex_number(_Bool minus, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
int buf_size_45;
char* p_47;
_Bool _while_condtional7;
_Bool _if_conditional111;
_Bool _if_conditional112;
_Bool _if_conditional113;
_Bool _if_conditional114;
_Bool _if_conditional115;
unsigned long long int value_48;
_Bool _if_conditional116;
void* right_value110;
void* right_value111;
struct sNode* _inf_value12;
struct sULongNode* _inf_obj_value12;
void* right_value114;
struct sNode* __result86__;
void* right_value115;
void* right_value116;
struct sNode* _inf_value13;
struct sULongNode* _inf_obj_value13;
void* right_value119;
struct sNode* __result89__;
unsigned long long int value_51;
_Bool _if_conditional127;
void* right_value120;
void* right_value121;
struct sNode* _inf_value14;
struct sULongNode* _inf_obj_value14;
void* right_value124;
struct sNode* __result92__;
void* right_value125;
void* right_value126;
struct sNode* _inf_value15;
struct sULongNode* _inf_obj_value15;
void* right_value129;
struct sNode* __result95__;
unsigned int value_54;
_Bool _if_conditional138;
void* right_value130;
void* right_value131;
struct sNode* _inf_value16;
struct sUIntNode* _inf_obj_value16;
void* right_value134;
struct sNode* __result98__;
void* right_value135;
void* right_value136;
struct sNode* _inf_value17;
struct sUIntNode* _inf_obj_value17;
void* right_value139;
struct sNode* __result101__;
_Bool _if_conditional149;
_Bool _if_conditional150;
unsigned long long int value_57;
_Bool _if_conditional151;
void* right_value140;
void* right_value141;
struct sNode* _inf_value18;
struct sLongNode* _inf_obj_value18;
void* right_value144;
struct sNode* __result104__;
void* right_value145;
void* right_value146;
struct sNode* _inf_value19;
struct sLongNode* _inf_obj_value19;
void* right_value149;
struct sNode* __result107__;
_Bool _if_conditional162;
unsigned long long int value_60;
_Bool _if_conditional163;
void* right_value150;
void* right_value151;
struct sNode* _inf_value20;
struct sULongNode* _inf_obj_value20;
void* right_value154;
struct sNode* __result110__;
void* right_value155;
void* right_value156;
struct sNode* _inf_value21;
struct sULongNode* _inf_obj_value21;
void* right_value159;
struct sNode* __result113__;
unsigned long long int value_63;
_Bool _if_conditional174;
void* right_value160;
void* right_value161;
struct sNode* _inf_value22;
struct sLongNode* _inf_obj_value22;
void* right_value164;
struct sNode* __result116__;
void* right_value165;
void* right_value166;
struct sNode* _inf_value23;
struct sLongNode* _inf_obj_value23;
void* right_value169;
struct sNode* __result119__;
unsigned long long int value_66;
_Bool _if_conditional185;
void* right_value170;
void* right_value171;
struct sNode* _inf_value24;
struct sIntNode* _inf_obj_value24;
void* right_value174;
struct sNode* __result122__;
void* right_value175;
void* right_value176;
struct sNode* _inf_value25;
struct sIntNode* _inf_obj_value25;
void* right_value179;
struct sNode* __result125__;
struct sNode* __result126__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&buf_size_45, 0, sizeof(int));
memset(&p_47, 0, sizeof(char*));
memset(&value_48, 0, sizeof(unsigned long long int));
memset(&value_51, 0, sizeof(unsigned long long int));
memset(&value_54, 0, sizeof(unsigned int));
memset(&value_57, 0, sizeof(unsigned long long int));
memset(&value_60, 0, sizeof(unsigned long long int));
memset(&value_63, 0, sizeof(unsigned long long int));
memset(&value_66, 0, sizeof(unsigned long long int));
    buf_size_45=128;
    char buf_46[128+1];
    memset(&buf_46, 0, sizeof(char)    *(128+1)    );
    p_47=buf_46;
    *p_47++=48;
    *p_47++=120;
    while(_while_condtional7=(*info->p>=48&&*info->p<=57)||(*info->p>=97&&*info->p<=102)||(*info->p>=65&&*info->p<=70)||*info->p==95,    _while_condtional7) {
        if(_if_conditional111=*info->p==95,        _if_conditional111) {
            info->p++;
        }
        else {
            *p_47++=*info->p;
            info->p++;
        }
        if(_if_conditional112=p_47-buf_46>=buf_size_45-1,        _if_conditional112) {
            err_msg(info,"overflow node of number");
            exit(2);
        }
    }
    *p_47=0;
    skip_spaces_and_lf(info);
    if(_if_conditional113=*info->p==117||*info->p==85,    _if_conditional113) {
        info->p++;
        skip_spaces_and_lf(info);
        if(_if_conditional114=*info->p==76||*info->p==108,        _if_conditional114) {
            info->p++;
            skip_spaces_and_lf(info);
            if(_if_conditional115=*info->p==76||*info->p==108,            _if_conditional115) {
                info->p++;
                skip_spaces_and_lf(info);
                value_48=strtoull(buf_46,((void*)0),0);
                if(_if_conditional116=minus,                _if_conditional116) {
                    _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 557);
                    _inf_obj_value12=come_increment_ref_count(((struct sULongNode*)(right_value111=sULongNode_initialize((struct sULongNode*)come_increment_ref_count(((struct sULongNode*)(right_value110=(struct sULongNode*)come_calloc(1, sizeof(struct sULongNode)*(1), "05function3.c", 557)))),-value_48,info))));
                    _inf_value12->_protocol_obj=_inf_obj_value12;
                    _inf_value12->finalize=(void*)sULongNode_finalize;
                    _inf_value12->clone=(void*)sULongNode_clone;
                    _inf_value12->compile=(void*)sULongNode_compile;
                    _inf_value12->sline=(void*)sULongNode_sline;
                    _inf_value12->sname=(void*)sULongNode_sname;
                    _inf_value12->terminated=(void*)sULongNode_terminated;
                    _inf_value12->kind=(void*)sULongNode_kind;
                    __result86__ = __result_obj__ = ((struct sNode*)(right_value114=_inf_value12));
                    if(right_value110 && right_value110 != __result_obj__) { come_call_finalizer(sULongNode_finalize,right_value110, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(right_value111 && right_value111 != __result_obj__) { come_call_finalizer(sULongNode_finalize,right_value111, (void*)0, (void*)0, 0, 1, 0, 0); }
                    return __result86__;
                }
                else {
                    _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 560);
                    _inf_obj_value13=come_increment_ref_count(((struct sULongNode*)(right_value116=sULongNode_initialize((struct sULongNode*)come_increment_ref_count(((struct sULongNode*)(right_value115=(struct sULongNode*)come_calloc(1, sizeof(struct sULongNode)*(1), "05function3.c", 560)))),value_48,info))));
                    _inf_value13->_protocol_obj=_inf_obj_value13;
                    _inf_value13->finalize=(void*)sULongNode_finalize;
                    _inf_value13->clone=(void*)sULongNode_clone;
                    _inf_value13->compile=(void*)sULongNode_compile;
                    _inf_value13->sline=(void*)sULongNode_sline;
                    _inf_value13->sname=(void*)sULongNode_sname;
                    _inf_value13->terminated=(void*)sULongNode_terminated;
                    _inf_value13->kind=(void*)sULongNode_kind;
                    __result89__ = __result_obj__ = ((struct sNode*)(right_value119=_inf_value13));
                    if(right_value115 && right_value115 != __result_obj__) { come_call_finalizer(sULongNode_finalize,right_value115, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(right_value116 && right_value116 != __result_obj__) { come_call_finalizer(sULongNode_finalize,right_value116, (void*)0, (void*)0, 0, 1, 0, 0); }
                    return __result89__;
                }
            }
            else {
                value_51=strtoull(buf_46,((void*)0),0);
                if(_if_conditional127=minus,                _if_conditional127) {
                    _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 567);
                    _inf_obj_value14=come_increment_ref_count(((struct sULongNode*)(right_value121=sULongNode_initialize((struct sULongNode*)come_increment_ref_count(((struct sULongNode*)(right_value120=(struct sULongNode*)come_calloc(1, sizeof(struct sULongNode)*(1), "05function3.c", 567)))),-value_51,info))));
                    _inf_value14->_protocol_obj=_inf_obj_value14;
                    _inf_value14->finalize=(void*)sULongNode_finalize;
                    _inf_value14->clone=(void*)sULongNode_clone;
                    _inf_value14->compile=(void*)sULongNode_compile;
                    _inf_value14->sline=(void*)sULongNode_sline;
                    _inf_value14->sname=(void*)sULongNode_sname;
                    _inf_value14->terminated=(void*)sULongNode_terminated;
                    _inf_value14->kind=(void*)sULongNode_kind;
                    __result92__ = __result_obj__ = ((struct sNode*)(right_value124=_inf_value14));
                    if(right_value120 && right_value120 != __result_obj__) { come_call_finalizer(sULongNode_finalize,right_value120, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(right_value121 && right_value121 != __result_obj__) { come_call_finalizer(sULongNode_finalize,right_value121, (void*)0, (void*)0, 0, 1, 0, 0); }
                    return __result92__;
                }
                else {
                    _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 570);
                    _inf_obj_value15=come_increment_ref_count(((struct sULongNode*)(right_value126=sULongNode_initialize((struct sULongNode*)come_increment_ref_count(((struct sULongNode*)(right_value125=(struct sULongNode*)come_calloc(1, sizeof(struct sULongNode)*(1), "05function3.c", 570)))),value_51,info))));
                    _inf_value15->_protocol_obj=_inf_obj_value15;
                    _inf_value15->finalize=(void*)sULongNode_finalize;
                    _inf_value15->clone=(void*)sULongNode_clone;
                    _inf_value15->compile=(void*)sULongNode_compile;
                    _inf_value15->sline=(void*)sULongNode_sline;
                    _inf_value15->sname=(void*)sULongNode_sname;
                    _inf_value15->terminated=(void*)sULongNode_terminated;
                    _inf_value15->kind=(void*)sULongNode_kind;
                    __result95__ = __result_obj__ = ((struct sNode*)(right_value129=_inf_value15));
                    if(right_value125 && right_value125 != __result_obj__) { come_call_finalizer(sULongNode_finalize,right_value125, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(right_value126 && right_value126 != __result_obj__) { come_call_finalizer(sULongNode_finalize,right_value126, (void*)0, (void*)0, 0, 1, 0, 0); }
                    return __result95__;
                }
            }
        }
        else {
            value_54=strtoull(buf_46,((void*)0),0);
            if(_if_conditional138=minus,            _if_conditional138) {
                _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 578);
                _inf_obj_value16=come_increment_ref_count(((struct sUIntNode*)(right_value131=sUIntNode_initialize((struct sUIntNode*)come_increment_ref_count(((struct sUIntNode*)(right_value130=(struct sUIntNode*)come_calloc(1, sizeof(struct sUIntNode)*(1), "05function3.c", 578)))),-value_54,info))));
                _inf_value16->_protocol_obj=_inf_obj_value16;
                _inf_value16->finalize=(void*)sUIntNode_finalize;
                _inf_value16->clone=(void*)sUIntNode_clone;
                _inf_value16->compile=(void*)sUIntNode_compile;
                _inf_value16->sline=(void*)sUIntNode_sline;
                _inf_value16->sname=(void*)sUIntNode_sname;
                _inf_value16->terminated=(void*)sUIntNode_terminated;
                _inf_value16->kind=(void*)sUIntNode_kind;
                __result98__ = __result_obj__ = ((struct sNode*)(right_value134=_inf_value16));
                if(right_value130 && right_value130 != __result_obj__) { come_call_finalizer(sUIntNode_finalize,right_value130, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value131 && right_value131 != __result_obj__) { come_call_finalizer(sUIntNode_finalize,right_value131, (void*)0, (void*)0, 0, 1, 0, 0); }
                return __result98__;
            }
            else {
                _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 581);
                _inf_obj_value17=come_increment_ref_count(((struct sUIntNode*)(right_value136=sUIntNode_initialize((struct sUIntNode*)come_increment_ref_count(((struct sUIntNode*)(right_value135=(struct sUIntNode*)come_calloc(1, sizeof(struct sUIntNode)*(1), "05function3.c", 581)))),value_54,info))));
                _inf_value17->_protocol_obj=_inf_obj_value17;
                _inf_value17->finalize=(void*)sUIntNode_finalize;
                _inf_value17->clone=(void*)sUIntNode_clone;
                _inf_value17->compile=(void*)sUIntNode_compile;
                _inf_value17->sline=(void*)sUIntNode_sline;
                _inf_value17->sname=(void*)sUIntNode_sname;
                _inf_value17->terminated=(void*)sUIntNode_terminated;
                _inf_value17->kind=(void*)sUIntNode_kind;
                __result101__ = __result_obj__ = ((struct sNode*)(right_value139=_inf_value17));
                if(right_value135 && right_value135 != __result_obj__) { come_call_finalizer(sUIntNode_finalize,right_value135, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value136 && right_value136 != __result_obj__) { come_call_finalizer(sUIntNode_finalize,right_value136, (void*)0, (void*)0, 0, 1, 0, 0); }
                return __result101__;
            }
        }
    }
    else {
        if(_if_conditional149=*info->p==76||*info->p==108,        _if_conditional149) {
            info->p++;
            skip_spaces_and_lf(info);
            if(_if_conditional150=*info->p==76||*info->p==108,            _if_conditional150) {
                info->p++;
                skip_spaces_and_lf(info);
                value_57=strtoull(buf_46,((void*)0),0);
                if(_if_conditional151=minus,                _if_conditional151) {
                    _inf_value18=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 596);
                    _inf_obj_value18=come_increment_ref_count(((struct sLongNode*)(right_value141=sLongNode_initialize((struct sLongNode*)come_increment_ref_count(((struct sLongNode*)(right_value140=(struct sLongNode*)come_calloc(1, sizeof(struct sLongNode)*(1), "05function3.c", 596)))),-value_57,info))));
                    _inf_value18->_protocol_obj=_inf_obj_value18;
                    _inf_value18->finalize=(void*)sLongNode_finalize;
                    _inf_value18->clone=(void*)sLongNode_clone;
                    _inf_value18->compile=(void*)sLongNode_compile;
                    _inf_value18->sline=(void*)sLongNode_sline;
                    _inf_value18->sname=(void*)sLongNode_sname;
                    _inf_value18->terminated=(void*)sLongNode_terminated;
                    _inf_value18->kind=(void*)sLongNode_kind;
                    __result104__ = __result_obj__ = ((struct sNode*)(right_value144=_inf_value18));
                    if(right_value140 && right_value140 != __result_obj__) { come_call_finalizer(sLongNode_finalize,right_value140, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(right_value141 && right_value141 != __result_obj__) { come_call_finalizer(sLongNode_finalize,right_value141, (void*)0, (void*)0, 0, 1, 0, 0); }
                    return __result104__;
                }
                else {
                    _inf_value19=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 599);
                    _inf_obj_value19=come_increment_ref_count(((struct sLongNode*)(right_value146=sLongNode_initialize((struct sLongNode*)come_increment_ref_count(((struct sLongNode*)(right_value145=(struct sLongNode*)come_calloc(1, sizeof(struct sLongNode)*(1), "05function3.c", 599)))),value_57,info))));
                    _inf_value19->_protocol_obj=_inf_obj_value19;
                    _inf_value19->finalize=(void*)sLongNode_finalize;
                    _inf_value19->clone=(void*)sLongNode_clone;
                    _inf_value19->compile=(void*)sLongNode_compile;
                    _inf_value19->sline=(void*)sLongNode_sline;
                    _inf_value19->sname=(void*)sLongNode_sname;
                    _inf_value19->terminated=(void*)sLongNode_terminated;
                    _inf_value19->kind=(void*)sLongNode_kind;
                    __result107__ = __result_obj__ = ((struct sNode*)(right_value149=_inf_value19));
                    if(right_value145 && right_value145 != __result_obj__) { come_call_finalizer(sLongNode_finalize,right_value145, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(right_value146 && right_value146 != __result_obj__) { come_call_finalizer(sLongNode_finalize,right_value146, (void*)0, (void*)0, 0, 1, 0, 0); }
                    return __result107__;
                }
            }
            else {
                if(_if_conditional162=*info->p==85||*info->p==117,                _if_conditional162) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    value_60=strtoull(buf_46,((void*)0),0);
                    if(_if_conditional163=minus,                    _if_conditional163) {
                        _inf_value20=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 609);
                        _inf_obj_value20=come_increment_ref_count(((struct sULongNode*)(right_value151=sULongNode_initialize((struct sULongNode*)come_increment_ref_count(((struct sULongNode*)(right_value150=(struct sULongNode*)come_calloc(1, sizeof(struct sULongNode)*(1), "05function3.c", 609)))),-value_60,info))));
                        _inf_value20->_protocol_obj=_inf_obj_value20;
                        _inf_value20->finalize=(void*)sULongNode_finalize;
                        _inf_value20->clone=(void*)sULongNode_clone;
                        _inf_value20->compile=(void*)sULongNode_compile;
                        _inf_value20->sline=(void*)sULongNode_sline;
                        _inf_value20->sname=(void*)sULongNode_sname;
                        _inf_value20->terminated=(void*)sULongNode_terminated;
                        _inf_value20->kind=(void*)sULongNode_kind;
                        __result110__ = __result_obj__ = ((struct sNode*)(right_value154=_inf_value20));
                        if(right_value150 && right_value150 != __result_obj__) { come_call_finalizer(sULongNode_finalize,right_value150, (void*)0, (void*)0, 0, 1, 0, 0); }
                        if(right_value151 && right_value151 != __result_obj__) { come_call_finalizer(sULongNode_finalize,right_value151, (void*)0, (void*)0, 0, 1, 0, 0); }
                        return __result110__;
                    }
                    else {
                        _inf_value21=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 612);
                        _inf_obj_value21=come_increment_ref_count(((struct sULongNode*)(right_value156=sULongNode_initialize((struct sULongNode*)come_increment_ref_count(((struct sULongNode*)(right_value155=(struct sULongNode*)come_calloc(1, sizeof(struct sULongNode)*(1), "05function3.c", 612)))),value_60,info))));
                        _inf_value21->_protocol_obj=_inf_obj_value21;
                        _inf_value21->finalize=(void*)sULongNode_finalize;
                        _inf_value21->clone=(void*)sULongNode_clone;
                        _inf_value21->compile=(void*)sULongNode_compile;
                        _inf_value21->sline=(void*)sULongNode_sline;
                        _inf_value21->sname=(void*)sULongNode_sname;
                        _inf_value21->terminated=(void*)sULongNode_terminated;
                        _inf_value21->kind=(void*)sULongNode_kind;
                        __result113__ = __result_obj__ = ((struct sNode*)(right_value159=_inf_value21));
                        if(right_value155 && right_value155 != __result_obj__) { come_call_finalizer(sULongNode_finalize,right_value155, (void*)0, (void*)0, 0, 1, 0, 0); }
                        if(right_value156 && right_value156 != __result_obj__) { come_call_finalizer(sULongNode_finalize,right_value156, (void*)0, (void*)0, 0, 1, 0, 0); }
                        return __result113__;
                    }
                }
                else {
                    value_63=strtoull(buf_46,((void*)0),0);
                    if(_if_conditional174=minus,                    _if_conditional174) {
                        _inf_value22=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 618);
                        _inf_obj_value22=come_increment_ref_count(((struct sLongNode*)(right_value161=sLongNode_initialize((struct sLongNode*)come_increment_ref_count(((struct sLongNode*)(right_value160=(struct sLongNode*)come_calloc(1, sizeof(struct sLongNode)*(1), "05function3.c", 618)))),-value_63,info))));
                        _inf_value22->_protocol_obj=_inf_obj_value22;
                        _inf_value22->finalize=(void*)sLongNode_finalize;
                        _inf_value22->clone=(void*)sLongNode_clone;
                        _inf_value22->compile=(void*)sLongNode_compile;
                        _inf_value22->sline=(void*)sLongNode_sline;
                        _inf_value22->sname=(void*)sLongNode_sname;
                        _inf_value22->terminated=(void*)sLongNode_terminated;
                        _inf_value22->kind=(void*)sLongNode_kind;
                        __result116__ = __result_obj__ = ((struct sNode*)(right_value164=_inf_value22));
                        if(right_value160 && right_value160 != __result_obj__) { come_call_finalizer(sLongNode_finalize,right_value160, (void*)0, (void*)0, 0, 1, 0, 0); }
                        if(right_value161 && right_value161 != __result_obj__) { come_call_finalizer(sLongNode_finalize,right_value161, (void*)0, (void*)0, 0, 1, 0, 0); }
                        return __result116__;
                    }
                    else {
                        _inf_value23=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 621);
                        _inf_obj_value23=come_increment_ref_count(((struct sLongNode*)(right_value166=sLongNode_initialize((struct sLongNode*)come_increment_ref_count(((struct sLongNode*)(right_value165=(struct sLongNode*)come_calloc(1, sizeof(struct sLongNode)*(1), "05function3.c", 621)))),value_63,info))));
                        _inf_value23->_protocol_obj=_inf_obj_value23;
                        _inf_value23->finalize=(void*)sLongNode_finalize;
                        _inf_value23->clone=(void*)sLongNode_clone;
                        _inf_value23->compile=(void*)sLongNode_compile;
                        _inf_value23->sline=(void*)sLongNode_sline;
                        _inf_value23->sname=(void*)sLongNode_sname;
                        _inf_value23->terminated=(void*)sLongNode_terminated;
                        _inf_value23->kind=(void*)sLongNode_kind;
                        __result119__ = __result_obj__ = ((struct sNode*)(right_value169=_inf_value23));
                        if(right_value165 && right_value165 != __result_obj__) { come_call_finalizer(sLongNode_finalize,right_value165, (void*)0, (void*)0, 0, 1, 0, 0); }
                        if(right_value166 && right_value166 != __result_obj__) { come_call_finalizer(sLongNode_finalize,right_value166, (void*)0, (void*)0, 0, 1, 0, 0); }
                        return __result119__;
                    }
                }
            }
        }
        else {
            value_66=strtoll(buf_46,((void*)0),0);
            if(_if_conditional185=minus,            _if_conditional185) {
                _inf_value24=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 628);
                _inf_obj_value24=come_increment_ref_count(((struct sIntNode*)(right_value171=sIntNode_initialize((struct sIntNode*)come_increment_ref_count(((struct sIntNode*)(right_value170=(struct sIntNode*)come_calloc(1, sizeof(struct sIntNode)*(1), "05function3.c", 628)))),-value_66,info))));
                _inf_value24->_protocol_obj=_inf_obj_value24;
                _inf_value24->finalize=(void*)sIntNode_finalize;
                _inf_value24->clone=(void*)sIntNode_clone;
                _inf_value24->compile=(void*)sIntNode_compile;
                _inf_value24->sline=(void*)sIntNode_sline;
                _inf_value24->sname=(void*)sIntNode_sname;
                _inf_value24->terminated=(void*)sIntNode_terminated;
                _inf_value24->kind=(void*)sIntNode_kind;
                __result122__ = __result_obj__ = ((struct sNode*)(right_value174=_inf_value24));
                if(right_value170 && right_value170 != __result_obj__) { come_call_finalizer(sIntNode_finalize,right_value170, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value171 && right_value171 != __result_obj__) { come_call_finalizer(sIntNode_finalize,right_value171, (void*)0, (void*)0, 0, 1, 0, 0); }
                return __result122__;
            }
            else {
                _inf_value25=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 631);
                _inf_obj_value25=come_increment_ref_count(((struct sIntNode*)(right_value176=sIntNode_initialize((struct sIntNode*)come_increment_ref_count(((struct sIntNode*)(right_value175=(struct sIntNode*)come_calloc(1, sizeof(struct sIntNode)*(1), "05function3.c", 631)))),value_66,info))));
                _inf_value25->_protocol_obj=_inf_obj_value25;
                _inf_value25->finalize=(void*)sIntNode_finalize;
                _inf_value25->clone=(void*)sIntNode_clone;
                _inf_value25->compile=(void*)sIntNode_compile;
                _inf_value25->sline=(void*)sIntNode_sline;
                _inf_value25->sname=(void*)sIntNode_sname;
                _inf_value25->terminated=(void*)sIntNode_terminated;
                _inf_value25->kind=(void*)sIntNode_kind;
                __result125__ = __result_obj__ = ((struct sNode*)(right_value179=_inf_value25));
                if(right_value175 && right_value175 != __result_obj__) { come_call_finalizer(sIntNode_finalize,right_value175, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value176 && right_value176 != __result_obj__) { come_call_finalizer(sIntNode_finalize,right_value176, (void*)0, (void*)0, 0, 1, 0, 0); }
                return __result125__;
            }
        }
    }
    __result126__ = __result_obj__ = (struct sNode*)((void*)0);
    return __result126__;
}

struct sNode* get_oct_number(struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
int buf_size_69;
char* p_71;
_Bool _while_condtional8;
_Bool _if_conditional196;
_Bool _if_conditional197;
_Bool _if_conditional198;
_Bool _if_conditional199;
_Bool _if_conditional200;
unsigned long long int value_72;
void* right_value180;
void* right_value181;
struct sNode* _inf_value26;
struct sULongNode* _inf_obj_value26;
void* right_value184;
struct sNode* __result129__;
unsigned long long int value_74;
void* right_value185;
void* right_value186;
struct sNode* _inf_value27;
struct sULongNode* _inf_obj_value27;
void* right_value189;
struct sNode* __result132__;
unsigned int value_76;
void* right_value190;
void* right_value191;
struct sNode* _inf_value28;
struct sUIntNode* _inf_obj_value28;
void* right_value194;
struct sNode* __result135__;
_Bool _if_conditional216;
_Bool _if_conditional217;
unsigned long long int value_78;
void* right_value195;
void* right_value196;
struct sNode* _inf_value29;
struct sLongNode* _inf_obj_value29;
void* right_value199;
struct sNode* __result138__;
_Bool _if_conditional223;
unsigned long long int value_80;
void* right_value200;
void* right_value201;
struct sNode* _inf_value30;
struct sULongNode* _inf_obj_value30;
void* right_value204;
struct sNode* __result141__;
unsigned long long int value_82;
void* right_value205;
void* right_value206;
struct sNode* _inf_value31;
struct sLongNode* _inf_obj_value31;
void* right_value209;
struct sNode* __result144__;
unsigned long long int value_84;
void* right_value210;
void* right_value211;
struct sNode* _inf_value32;
struct sIntNode* _inf_obj_value32;
void* right_value214;
struct sNode* __result147__;
struct sNode* __result148__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&buf_size_69, 0, sizeof(int));
memset(&p_71, 0, sizeof(char*));
memset(&value_72, 0, sizeof(unsigned long long int));
memset(&value_74, 0, sizeof(unsigned long long int));
memset(&value_76, 0, sizeof(unsigned int));
memset(&value_78, 0, sizeof(unsigned long long int));
memset(&value_80, 0, sizeof(unsigned long long int));
memset(&value_82, 0, sizeof(unsigned long long int));
memset(&value_84, 0, sizeof(unsigned long long int));
    buf_size_69=128;
    char buf_70[128+1];
    memset(&buf_70, 0, sizeof(char)    *(128+1)    );
    p_71=buf_70;
    *p_71++=48;
    while(_while_condtional8=(*info->p>=48&&*info->p<=55)||*info->p==95,    _while_condtional8) {
        if(_if_conditional196=*info->p==95,        _if_conditional196) {
            info->p++;
        }
        else {
            *p_71=*info->p;
            p_71++;
            info->p++;
        }
        if(_if_conditional197=p_71-buf_70>=buf_size_69-1,        _if_conditional197) {
            err_msg(info,"overflow node of number");
            exit(2);
        }
    }
    *p_71=0;
    skip_spaces_and_lf(info);
    if(_if_conditional198=*info->p==117||*info->p==85,    _if_conditional198) {
        info->p++;
        skip_spaces_and_lf(info);
        if(_if_conditional199=*info->p==76||*info->p==108,        _if_conditional199) {
            info->p++;
            skip_spaces_and_lf(info);
            if(_if_conditional200=*info->p==76||*info->p==108,            _if_conditional200) {
                info->p++;
                skip_spaces_and_lf(info);
                value_72=strtoull(buf_70,((void*)0),0);
                _inf_value26=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 682);
                _inf_obj_value26=come_increment_ref_count(((struct sULongNode*)(right_value181=sULongNode_initialize((struct sULongNode*)come_increment_ref_count(((struct sULongNode*)(right_value180=(struct sULongNode*)come_calloc(1, sizeof(struct sULongNode)*(1), "05function3.c", 682)))),value_72,info))));
                _inf_value26->_protocol_obj=_inf_obj_value26;
                _inf_value26->finalize=(void*)sULongNode_finalize;
                _inf_value26->clone=(void*)sULongNode_clone;
                _inf_value26->compile=(void*)sULongNode_compile;
                _inf_value26->sline=(void*)sULongNode_sline;
                _inf_value26->sname=(void*)sULongNode_sname;
                _inf_value26->terminated=(void*)sULongNode_terminated;
                _inf_value26->kind=(void*)sULongNode_kind;
                __result129__ = __result_obj__ = ((struct sNode*)(right_value184=_inf_value26));
                if(right_value180 && right_value180 != __result_obj__) { come_call_finalizer(sULongNode_finalize,right_value180, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value181 && right_value181 != __result_obj__) { come_call_finalizer(sULongNode_finalize,right_value181, (void*)0, (void*)0, 0, 1, 0, 0); }
                return __result129__;
            }
            else {
                value_74=strtoull(buf_70,((void*)0),0);
                _inf_value27=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 686);
                _inf_obj_value27=come_increment_ref_count(((struct sULongNode*)(right_value186=sULongNode_initialize((struct sULongNode*)come_increment_ref_count(((struct sULongNode*)(right_value185=(struct sULongNode*)come_calloc(1, sizeof(struct sULongNode)*(1), "05function3.c", 686)))),value_74,info))));
                _inf_value27->_protocol_obj=_inf_obj_value27;
                _inf_value27->finalize=(void*)sULongNode_finalize;
                _inf_value27->clone=(void*)sULongNode_clone;
                _inf_value27->compile=(void*)sULongNode_compile;
                _inf_value27->sline=(void*)sULongNode_sline;
                _inf_value27->sname=(void*)sULongNode_sname;
                _inf_value27->terminated=(void*)sULongNode_terminated;
                _inf_value27->kind=(void*)sULongNode_kind;
                __result132__ = __result_obj__ = ((struct sNode*)(right_value189=_inf_value27));
                if(right_value185 && right_value185 != __result_obj__) { come_call_finalizer(sULongNode_finalize,right_value185, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value186 && right_value186 != __result_obj__) { come_call_finalizer(sULongNode_finalize,right_value186, (void*)0, (void*)0, 0, 1, 0, 0); }
                return __result132__;
            }
        }
        else {
            value_76=strtoul(buf_70,((void*)0),0);
            _inf_value28=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 691);
            _inf_obj_value28=come_increment_ref_count(((struct sUIntNode*)(right_value191=sUIntNode_initialize((struct sUIntNode*)come_increment_ref_count(((struct sUIntNode*)(right_value190=(struct sUIntNode*)come_calloc(1, sizeof(struct sUIntNode)*(1), "05function3.c", 691)))),value_76,info))));
            _inf_value28->_protocol_obj=_inf_obj_value28;
            _inf_value28->finalize=(void*)sUIntNode_finalize;
            _inf_value28->clone=(void*)sUIntNode_clone;
            _inf_value28->compile=(void*)sUIntNode_compile;
            _inf_value28->sline=(void*)sUIntNode_sline;
            _inf_value28->sname=(void*)sUIntNode_sname;
            _inf_value28->terminated=(void*)sUIntNode_terminated;
            _inf_value28->kind=(void*)sUIntNode_kind;
            __result135__ = __result_obj__ = ((struct sNode*)(right_value194=_inf_value28));
            if(right_value190 && right_value190 != __result_obj__) { come_call_finalizer(sUIntNode_finalize,right_value190, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value191 && right_value191 != __result_obj__) { come_call_finalizer(sUIntNode_finalize,right_value191, (void*)0, (void*)0, 0, 1, 0, 0); }
            return __result135__;
        }
    }
    else {
        if(_if_conditional216=*info->p==76||*info->p==108,        _if_conditional216) {
            info->p++;
            skip_spaces_and_lf(info);
            if(_if_conditional217=*info->p==76||*info->p==108,            _if_conditional217) {
                info->p++;
                skip_spaces_and_lf(info);
                value_78=strtoull(buf_70,((void*)0),0);
                _inf_value29=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 704);
                _inf_obj_value29=come_increment_ref_count(((struct sLongNode*)(right_value196=sLongNode_initialize((struct sLongNode*)come_increment_ref_count(((struct sLongNode*)(right_value195=(struct sLongNode*)come_calloc(1, sizeof(struct sLongNode)*(1), "05function3.c", 704)))),value_78,info))));
                _inf_value29->_protocol_obj=_inf_obj_value29;
                _inf_value29->finalize=(void*)sLongNode_finalize;
                _inf_value29->clone=(void*)sLongNode_clone;
                _inf_value29->compile=(void*)sLongNode_compile;
                _inf_value29->sline=(void*)sLongNode_sline;
                _inf_value29->sname=(void*)sLongNode_sname;
                _inf_value29->terminated=(void*)sLongNode_terminated;
                _inf_value29->kind=(void*)sLongNode_kind;
                __result138__ = __result_obj__ = ((struct sNode*)(right_value199=_inf_value29));
                if(right_value195 && right_value195 != __result_obj__) { come_call_finalizer(sLongNode_finalize,right_value195, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value196 && right_value196 != __result_obj__) { come_call_finalizer(sLongNode_finalize,right_value196, (void*)0, (void*)0, 0, 1, 0, 0); }
                return __result138__;
            }
            else {
                if(_if_conditional223=*info->p==85||*info->p==117,                _if_conditional223) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    value_80=strtoull(buf_70,((void*)0),0);
                    _inf_value30=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 712);
                    _inf_obj_value30=come_increment_ref_count(((struct sULongNode*)(right_value201=sULongNode_initialize((struct sULongNode*)come_increment_ref_count(((struct sULongNode*)(right_value200=(struct sULongNode*)come_calloc(1, sizeof(struct sULongNode)*(1), "05function3.c", 712)))),value_80,info))));
                    _inf_value30->_protocol_obj=_inf_obj_value30;
                    _inf_value30->finalize=(void*)sULongNode_finalize;
                    _inf_value30->clone=(void*)sULongNode_clone;
                    _inf_value30->compile=(void*)sULongNode_compile;
                    _inf_value30->sline=(void*)sULongNode_sline;
                    _inf_value30->sname=(void*)sULongNode_sname;
                    _inf_value30->terminated=(void*)sULongNode_terminated;
                    _inf_value30->kind=(void*)sULongNode_kind;
                    __result141__ = __result_obj__ = ((struct sNode*)(right_value204=_inf_value30));
                    if(right_value200 && right_value200 != __result_obj__) { come_call_finalizer(sULongNode_finalize,right_value200, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(right_value201 && right_value201 != __result_obj__) { come_call_finalizer(sULongNode_finalize,right_value201, (void*)0, (void*)0, 0, 1, 0, 0); }
                    return __result141__;
                }
                else {
                    value_82=strtoull(buf_70,((void*)0),0);
                    _inf_value31=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 716);
                    _inf_obj_value31=come_increment_ref_count(((struct sLongNode*)(right_value206=sLongNode_initialize((struct sLongNode*)come_increment_ref_count(((struct sLongNode*)(right_value205=(struct sLongNode*)come_calloc(1, sizeof(struct sLongNode)*(1), "05function3.c", 716)))),value_82,info))));
                    _inf_value31->_protocol_obj=_inf_obj_value31;
                    _inf_value31->finalize=(void*)sLongNode_finalize;
                    _inf_value31->clone=(void*)sLongNode_clone;
                    _inf_value31->compile=(void*)sLongNode_compile;
                    _inf_value31->sline=(void*)sLongNode_sline;
                    _inf_value31->sname=(void*)sLongNode_sname;
                    _inf_value31->terminated=(void*)sLongNode_terminated;
                    _inf_value31->kind=(void*)sLongNode_kind;
                    __result144__ = __result_obj__ = ((struct sNode*)(right_value209=_inf_value31));
                    if(right_value205 && right_value205 != __result_obj__) { come_call_finalizer(sLongNode_finalize,right_value205, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(right_value206 && right_value206 != __result_obj__) { come_call_finalizer(sLongNode_finalize,right_value206, (void*)0, (void*)0, 0, 1, 0, 0); }
                    return __result144__;
                }
            }
        }
        else {
            value_84=strtoull(buf_70,((void*)0),0);
            _inf_value32=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 721);
            _inf_obj_value32=come_increment_ref_count(((struct sIntNode*)(right_value211=sIntNode_initialize((struct sIntNode*)come_increment_ref_count(((struct sIntNode*)(right_value210=(struct sIntNode*)come_calloc(1, sizeof(struct sIntNode)*(1), "05function3.c", 721)))),value_84,info))));
            _inf_value32->_protocol_obj=_inf_obj_value32;
            _inf_value32->finalize=(void*)sIntNode_finalize;
            _inf_value32->clone=(void*)sIntNode_clone;
            _inf_value32->compile=(void*)sIntNode_compile;
            _inf_value32->sline=(void*)sIntNode_sline;
            _inf_value32->sname=(void*)sIntNode_sname;
            _inf_value32->terminated=(void*)sIntNode_terminated;
            _inf_value32->kind=(void*)sIntNode_kind;
            __result147__ = __result_obj__ = ((struct sNode*)(right_value214=_inf_value32));
            if(right_value210 && right_value210 != __result_obj__) { come_call_finalizer(sIntNode_finalize,right_value210, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value211 && right_value211 != __result_obj__) { come_call_finalizer(sIntNode_finalize,right_value211, (void*)0, (void*)0, 0, 1, 0, 0); }
            return __result147__;
        }
    }
    __result148__ = __result_obj__ = (struct sNode*)((void*)0);
    return __result148__;
}

static void sUIntNode_finalize(struct sUIntNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional211;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional211=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional211) {
                    if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                }
}

static struct sUIntNode* sUIntNode_clone(struct sUIntNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional212;
struct sUIntNode* __result133__;
void* right_value192;
struct sUIntNode* result_77;
_Bool _if_conditional213;
_Bool _if_conditional214;
_Bool _if_conditional215;
void* right_value193;
char* __dec_obj54;
struct sUIntNode* __result134__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_77, 0, sizeof(struct sUIntNode*));
                if(_if_conditional212=self==(void*)0,                _if_conditional212) {
                    __result133__ = __result_obj__ = (void*)0;
                    return __result133__;
                }
                result_77=(struct sUIntNode*)come_increment_ref_count(((struct sUIntNode*)(right_value192=(struct sUIntNode*)come_calloc(1, sizeof(struct sUIntNode)*(1), "sUIntNode_clone", 3))));
                if(right_value192 && right_value192 != __result_obj__) { come_call_finalizer(sUIntNode_finalize,right_value192, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(_if_conditional213=self!=((void*)0),                _if_conditional213) {
                    result_77->value=self->value;
                }
                if(_if_conditional214=self!=((void*)0),                _if_conditional214) {
                    result_77->sline=self->sline;
                }
                if(_if_conditional215=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional215) {
                    __dec_obj54=result_77->sname;
                    result_77->sname=(char*)come_increment_ref_count(((char*)(right_value193=string_clone(self->sname))));
                    if(__dec_obj54) { __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0,0,0); }
                    if(right_value193 && right_value193 != __result_obj__) { right_value193 = come_decrement_ref_count(right_value193, (void*)0, (void*)0, 1, 0, 0); }
                }
                __result134__ = __result_obj__ = result_77;
                if(result_77) { come_call_finalizer(sUIntNode_finalize,result_77, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result134__;
                if(result_77) { come_call_finalizer(sUIntNode_finalize,result_77, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sULongNode_finalize(struct sULongNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional224;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional224=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional224) {
                            if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                        }
}

static struct sULongNode* sULongNode_clone(struct sULongNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional225;
struct sULongNode* __result139__;
void* right_value202;
struct sULongNode* result_81;
_Bool _if_conditional226;
_Bool _if_conditional227;
_Bool _if_conditional228;
void* right_value203;
char* __dec_obj56;
struct sULongNode* __result140__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_81, 0, sizeof(struct sULongNode*));
                        if(_if_conditional225=self==(void*)0,                        _if_conditional225) {
                            __result139__ = __result_obj__ = (void*)0;
                            return __result139__;
                        }
                        result_81=(struct sULongNode*)come_increment_ref_count(((struct sULongNode*)(right_value202=(struct sULongNode*)come_calloc(1, sizeof(struct sULongNode)*(1), "sULongNode_clone", 3))));
                        if(right_value202 && right_value202 != __result_obj__) { come_call_finalizer(sULongNode_finalize,right_value202, (void*)0, (void*)0, 0, 1, 0, 0); }
                        if(_if_conditional226=self!=((void*)0),                        _if_conditional226) {
                            result_81->value=self->value;
                        }
                        if(_if_conditional227=self!=((void*)0),                        _if_conditional227) {
                            result_81->sline=self->sline;
                        }
                        if(_if_conditional228=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional228) {
                            __dec_obj56=result_81->sname;
                            result_81->sname=(char*)come_increment_ref_count(((char*)(right_value203=string_clone(self->sname))));
                            if(__dec_obj56) { __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0,0,0); }
                            if(right_value203 && right_value203 != __result_obj__) { right_value203 = come_decrement_ref_count(right_value203, (void*)0, (void*)0, 1, 0, 0); }
                        }
                        __result140__ = __result_obj__ = result_81;
                        if(result_81) { come_call_finalizer(sULongNode_finalize,result_81, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result140__;
                        if(result_81) { come_call_finalizer(sULongNode_finalize,result_81, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sLongNode_finalize(struct sLongNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional229;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional229=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional229) {
                            if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                        }
}

static struct sLongNode* sLongNode_clone(struct sLongNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional230;
struct sLongNode* __result142__;
void* right_value207;
struct sLongNode* result_83;
_Bool _if_conditional231;
_Bool _if_conditional232;
_Bool _if_conditional233;
void* right_value208;
char* __dec_obj57;
struct sLongNode* __result143__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_83, 0, sizeof(struct sLongNode*));
                        if(_if_conditional230=self==(void*)0,                        _if_conditional230) {
                            __result142__ = __result_obj__ = (void*)0;
                            return __result142__;
                        }
                        result_83=(struct sLongNode*)come_increment_ref_count(((struct sLongNode*)(right_value207=(struct sLongNode*)come_calloc(1, sizeof(struct sLongNode)*(1), "sLongNode_clone", 3))));
                        if(right_value207 && right_value207 != __result_obj__) { come_call_finalizer(sLongNode_finalize,right_value207, (void*)0, (void*)0, 0, 1, 0, 0); }
                        if(_if_conditional231=self!=((void*)0),                        _if_conditional231) {
                            result_83->value=self->value;
                        }
                        if(_if_conditional232=self!=((void*)0),                        _if_conditional232) {
                            result_83->sline=self->sline;
                        }
                        if(_if_conditional233=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional233) {
                            __dec_obj57=result_83->sname;
                            result_83->sname=(char*)come_increment_ref_count(((char*)(right_value208=string_clone(self->sname))));
                            if(__dec_obj57) { __dec_obj57 = come_decrement_ref_count(__dec_obj57, (void*)0, (void*)0, 0,0,0); }
                            if(right_value208 && right_value208 != __result_obj__) { right_value208 = come_decrement_ref_count(right_value208, (void*)0, (void*)0, 1, 0, 0); }
                        }
                        __result143__ = __result_obj__ = result_83;
                        if(result_83) { come_call_finalizer(sLongNode_finalize,result_83, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result143__;
                        if(result_83) { come_call_finalizer(sLongNode_finalize,result_83, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sIntNode_finalize(struct sIntNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional234;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional234=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional234) {
                    if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                }
}

static struct sIntNode* sIntNode_clone(struct sIntNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional235;
struct sIntNode* __result145__;
void* right_value212;
struct sIntNode* result_85;
_Bool _if_conditional236;
_Bool _if_conditional237;
_Bool _if_conditional238;
void* right_value213;
char* __dec_obj58;
struct sIntNode* __result146__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_85, 0, sizeof(struct sIntNode*));
                if(_if_conditional235=self==(void*)0,                _if_conditional235) {
                    __result145__ = __result_obj__ = (void*)0;
                    return __result145__;
                }
                result_85=(struct sIntNode*)come_increment_ref_count(((struct sIntNode*)(right_value212=(struct sIntNode*)come_calloc(1, sizeof(struct sIntNode)*(1), "sIntNode_clone", 3))));
                if(right_value212 && right_value212 != __result_obj__) { come_call_finalizer(sIntNode_finalize,right_value212, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(_if_conditional236=self!=((void*)0),                _if_conditional236) {
                    result_85->value=self->value;
                }
                if(_if_conditional237=self!=((void*)0),                _if_conditional237) {
                    result_85->sline=self->sline;
                }
                if(_if_conditional238=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional238) {
                    __dec_obj58=result_85->sname;
                    result_85->sname=(char*)come_increment_ref_count(((char*)(right_value213=string_clone(self->sname))));
                    if(__dec_obj58) { __dec_obj58 = come_decrement_ref_count(__dec_obj58, (void*)0, (void*)0, 0,0,0); }
                    if(right_value213 && right_value213 != __result_obj__) { right_value213 = come_decrement_ref_count(right_value213, (void*)0, (void*)0, 1, 0, 0); }
                }
                __result146__ = __result_obj__ = result_85;
                if(result_85) { come_call_finalizer(sIntNode_finalize,result_85, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result146__;
                if(result_85) { come_call_finalizer(sIntNode_finalize,result_85, (void*)0, (void*)0, 0, 0, 0, 0); }
}

