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
struct list_item$1sBlockph
{
    struct sBlock* item;
    struct list_item$1sBlockph* prev;
    struct list_item$1sBlockph* next;
};
struct list$1sBlockph
{
    struct list_item$1sBlockph* head;
    struct list_item$1sBlockph* tail;
    int len;
    struct list_item$1sBlockph* it;
};
struct sIfNode
{
    struct sNode* mExpressionNode;
    struct sBlock* mIfBlock;
    struct list$1sNodeph* mElifExpressionNodes;
    struct list$1sBlockph* mElifBlocks;
    int mElifNum;
    struct sBlock* mElseBlock;
    int sline;
    char* sname;
};
struct optional$2sBlockphbool
{
    struct sBlock* v1;
    _Bool v2;
};
struct sOrStatmentNode
{
    struct sNode* mExpressionNode;
    struct sBlock* mIfBlock;
    int sline;
    char* sname;
};
struct sAndStatmentNode
{
    struct sNode* mExpressionNode;
    struct sBlock* mIfBlock;
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

struct sIfNode* sIfNode_initialize(struct sIfNode* self, struct sNode* expression_node, struct sBlock* if_block, struct list$1sNodeph* elif_expression_nodes, struct list$1sBlockph* elif_blocks, int elif_num, struct sBlock* else_block, struct sInfo* info);

static struct sNode* sNode_clone(struct sNode* self);
static struct sBlock* sBlock_clone(struct sBlock* self);
static void sBlock_finalize(struct sBlock* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item);
static void list$1sNodeph_finalize(struct list$1sNodeph* self);
static struct sVarTable* sVarTable_clone(struct sVarTable* self);
static struct map$2charphsVarph* map$2charphsVarphp_clone(struct map$2charphsVarph* self);
static struct map$2charphsVarph* map$2charphsVarph_initialize(struct map$2charphsVarph* self);
static void sVar_finalize(struct sVar* self);
static void sType_finalize(struct sType* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
static struct list$1charp* list$1charp_initialize(struct list$1charp* self);
static void list$1charpp_finalize(struct list$1charp* self);
static void list_item$1charpp_finalize(struct list_item$1charp* self);
static void list$1charp_finalize(struct list$1charp* self);
static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self);
static char* map$2charphsVarph_begin(struct map$2charphsVarph* self);
static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self);
static char* map$2charphsVarph_next(struct map$2charphsVarph* self);
static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value);
static _Bool optional$2boolbool_value(struct optional$2boolbool* self);
static void optional$2boolboolp_finalize(struct optional$2boolbool* self);
static struct map$2charphsVarph* map$2charphsVarph_insert2(struct map$2charphsVarph* self, char* key, struct sVar* item);
static void map$2charphsVarph_rehash(struct map$2charphsVarph* self);
static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item);
static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail);
static struct list$1charp* list$1charp_reset(struct list$1charp* self);
static char* list$1charp_begin(struct list$1charp* self);
static _Bool list$1charp_end(struct list$1charp* self);
static char* list$1charp_next(struct list$1charp* self);
static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item);
static void map$2charphsVarph_finalize(struct map$2charphsVarph* self);
static struct list$1sBlockph* list$1sBlockphp_clone(struct list$1sBlockph* self);
static struct list$1sBlockph* list$1sBlockph_initialize(struct list$1sBlockph* self);
static void list$1sBlockphp_finalize(struct list$1sBlockph* self);
static void list_item$1sBlockphp_finalize(struct list_item$1sBlockph* self);
static struct list$1sBlockph* list$1sBlockph_add(struct list$1sBlockph* self, struct sBlock* item);
static void list$1sBlockph_finalize(struct list$1sBlockph* self);
_Bool sIfNode_terminated();

char* sIfNode_kind();

_Bool sIfNode_compile(struct sIfNode* self, struct sInfo* info);

static void CVALUE_finalize(struct CVALUE* self);
static struct optional$2sNodephbool* list$1sNodephp_operator_load_element(struct list$1sNodeph* self, int position);
static struct optional$2sNodephbool* optional$2sNodephbool_initialize(struct optional$2sNodephbool* self, struct sNode* v1, _Bool v2);
static void optional$2sNodephboolp_finalize(struct optional$2sNodephbool* self);
static struct sNode* optional$2sNodephbool_value(struct optional$2sNodephbool* self);
static struct optional$2sBlockphbool* list$1sBlockphp_operator_load_element(struct list$1sBlockph* self, int position);
static struct optional$2sBlockphbool* optional$2sBlockphbool_initialize(struct optional$2sBlockphbool* self, struct sBlock* v1, _Bool v2);
static void optional$2sBlockphboolp_finalize(struct optional$2sBlockphbool* self);
static struct sBlock* optional$2sBlockphbool_value(struct optional$2sBlockphbool* self);
int sIfNode_sline(struct sIfNode* self, struct sInfo* info);

char* sIfNode_sname(struct sIfNode* self, struct sInfo* info);

struct sOrStatmentNode* sOrStatmentNode_initialize(struct sOrStatmentNode* self, struct sNode* expression_node, struct sBlock* if_block, struct sInfo* info);

_Bool sOrStatmentNode_terminated();

char* sOrStatmentNode_kind();

_Bool sOrStatmentNode_compile(struct sOrStatmentNode* self, struct sInfo* info);

int sOrStatmentNode_sline(struct sOrStatmentNode* self, struct sInfo* info);

char* sOrStatmentNode_sname(struct sOrStatmentNode* self, struct sInfo* info);

struct sAndStatmentNode* sAndStatmentNode_initialize(struct sAndStatmentNode* self, struct sNode* expression_node, struct sBlock* if_block, struct sInfo* info);

_Bool sAndStatmentNode_terminated();

char* sAndStatmentNode_kind();

_Bool sAndStatmentNode_compile(struct sAndStatmentNode* self, struct sInfo* info);

int sAndStatmentNode_sline(struct sAndStatmentNode* self, struct sInfo* info);

char* sAndStatmentNode_sname(struct sAndStatmentNode* self, struct sInfo* info);

struct sNode* parse_if_method_call(struct sNode* expression_node, struct sInfo* info);

static char* optional$2charphbool_value(struct optional$2charphbool* self);
static void optional$2charphboolp_finalize(struct optional$2charphbool* self);
static int optional$2intbool_value(struct optional$2intbool* self);
static void optional$2intboolp_finalize(struct optional$2intbool* self);
static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item);
static struct list$1sBlockph* list$1sBlockph_push_back(struct list$1sBlockph* self, struct sBlock* item);
struct sNode* parse_elif_method_call(struct sNode* expression_node, struct sInfo* info);

struct sNode* string_node_v8(char* buf, char* head, int head_sline, struct sInfo* info);

static void sIfNode_finalize(struct sIfNode* self);
static struct sIfNode* sIfNode_clone(struct sIfNode* self);
static struct sNode* optional$2sNodephbool_catch(struct optional$2sNodephbool* self, void* parent, void (*block)(void*));
void method_block1_08ifc(struct __current_stack1__* parent);

static struct optional$2voidpbool* optional$2voidpbool_initialize(struct optional$2voidpbool* self, void* v1, _Bool v2);
static void optional$2voidpboolp_finalize(struct optional$2voidpbool* self);
struct sNode* parse_or_statment(struct sNode* expression_node, struct sInfo* info);

static void sOrStatmentNode_finalize(struct sOrStatmentNode* self);
static struct sOrStatmentNode* sOrStatmentNode_clone(struct sOrStatmentNode* self);
struct sNode* parse_and_statment(struct sNode* expression_node, struct sInfo* info);

static void sAndStatmentNode_finalize(struct sAndStatmentNode* self);
static struct sAndStatmentNode* sAndStatmentNode_clone(struct sAndStatmentNode* self);
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

struct sIfNode* sIfNode_initialize(struct sIfNode* self, struct sNode* expression_node, struct sBlock* if_block, struct list$1sNodeph* elif_expression_nodes, struct list$1sBlockph* elif_blocks, int elif_num, struct sBlock* else_block, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value10;
char* __dec_obj6;
void* right_value12;
struct sNode* __dec_obj7;
void* right_value41;
struct sBlock* __dec_obj15;
void* right_value42;
struct list$1sNodeph* __dec_obj16;
void* right_value49;
struct list$1sBlockph* __dec_obj20;
_Bool _if_conditional105;
void* right_value50;
struct sBlock* __dec_obj21;
struct sBlock* __dec_obj22;
struct sIfNode* __result57__;
memset(&__result_obj__, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj6=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value10=__builtin_string(info->sname))));
    if(__dec_obj6) { __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0,0,0); }
    if(right_value10 && right_value10 != __result_obj__) { right_value10 = come_decrement_ref_count(right_value10, (void*)0, (void*)0, 1, 0, 0); }
    __dec_obj7=self->mExpressionNode;
    self->mExpressionNode=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value12=sNode_clone(expression_node))));
    if(__dec_obj7) { __dec_obj7 = come_decrement_ref_count(__dec_obj7, ((struct sNode*)__dec_obj7)->finalize, ((struct sNode*)__dec_obj7)->_protocol_obj, 0,0,0); }
    if(right_value12 && right_value12 != __result_obj__) { right_value12 = come_decrement_ref_count(right_value12, ((struct sNode*)right_value12)->finalize, ((struct sNode*)right_value12)->_protocol_obj, 1, 0, 0); } 
    __dec_obj15=self->mIfBlock;
    self->mIfBlock=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value41=sBlock_clone(if_block))));
    if(__dec_obj15) { come_call_finalizer(sBlock_finalize,__dec_obj15, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value41 && right_value41 != __result_obj__) { come_call_finalizer(sBlock_finalize,right_value41, (void*)0, (void*)0, 0, 1, 0, 0); }
    __dec_obj16=self->mElifExpressionNodes;
    self->mElifExpressionNodes=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value42=list$1sNodephp_clone(elif_expression_nodes))));
    if(__dec_obj16) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj16, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value42 && right_value42 != __result_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value42, (void*)0, (void*)0, 0, 1, 0, 0); }
    __dec_obj20=self->mElifBlocks;
    self->mElifBlocks=(struct list$1sBlockph*)come_increment_ref_count(((struct list$1sBlockph*)(right_value49=list$1sBlockphp_clone(elif_blocks))));
    if(__dec_obj20) { come_call_finalizer(list$1sBlockph_finalize,__dec_obj20, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value49 && right_value49 != __result_obj__) { come_call_finalizer(list$1sBlockphp_finalize,right_value49, (void*)0, (void*)0, 0, 1, 0, 0); }
    self->mElifNum=elif_num;
    if(_if_conditional105=else_block,    _if_conditional105) {
        __dec_obj21=self->mElseBlock;
        self->mElseBlock=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value50=sBlock_clone(else_block))));
        if(__dec_obj21) { come_call_finalizer(sBlock_finalize,__dec_obj21, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value50 && right_value50 != __result_obj__) { come_call_finalizer(sBlock_finalize,right_value50, (void*)0, (void*)0, 0, 1, 0, 0); }
    }
    else {
        __dec_obj22=self->mElseBlock;
        self->mElseBlock=((void*)0);
        if(__dec_obj22) { come_call_finalizer(sBlock_finalize,__dec_obj22, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __result57__ = __result_obj__ = self;
    if(self) { come_call_finalizer(sIfNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(expression_node) { expression_node = come_decrement_ref_count(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 1, 0); } 
    return __result57__;
    if(self) { come_call_finalizer(sIfNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(expression_node) { expression_node = come_decrement_ref_count(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 1, 0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional5;
struct sNode* __result13__;
void* right_value11;
struct sNode* result_5;
_Bool _if_conditional6;
_Bool _if_conditional7;
_Bool _if_conditional8;
_Bool _if_conditional9;
_Bool _if_conditional10;
_Bool _if_conditional11;
_Bool _if_conditional12;
_Bool _if_conditional13;
struct sNode* __result14__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_5, 0, sizeof(struct sNode*));
        if(_if_conditional5=self==(void*)0,        _if_conditional5) {
            __result13__ = __result_obj__ = (void*)0;
            return __result13__;
        }
        result_5=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3))));
        if(right_value11 && right_value11 != __result_obj__) { right_value11 = come_decrement_ref_count(right_value11, ((struct sNode*)right_value11)->finalize, ((struct sNode*)right_value11)->_protocol_obj, 1, 0, 0); } 
        if(_if_conditional6=self!=((void*)0)&&self->clone!=((void*)0),        _if_conditional6) {
            result_5->_protocol_obj=self->clone(self->_protocol_obj);
        }
        if(_if_conditional7=self!=((void*)0),        _if_conditional7) {
            result_5->finalize=self->finalize;
        }
        if(_if_conditional8=self!=((void*)0),        _if_conditional8) {
            result_5->clone=self->clone;
        }
        if(_if_conditional9=self!=((void*)0),        _if_conditional9) {
            result_5->compile=self->compile;
        }
        if(_if_conditional10=self!=((void*)0),        _if_conditional10) {
            result_5->sline=self->sline;
        }
        if(_if_conditional11=self!=((void*)0),        _if_conditional11) {
            result_5->sname=self->sname;
        }
        if(_if_conditional12=self!=((void*)0),        _if_conditional12) {
            result_5->terminated=self->terminated;
        }
        if(_if_conditional13=self!=((void*)0),        _if_conditional13) {
            result_5->kind=self->kind;
        }
        __result14__ = __result_obj__ = result_5;
        if(result_5) { result_5 = come_decrement_ref_count(result_5, ((struct sNode*)result_5)->finalize, ((struct sNode*)result_5)->_protocol_obj, 0, 1, 0); } 
        return __result14__;
        if(result_5) { result_5 = come_decrement_ref_count(result_5, ((struct sNode*)result_5)->finalize, ((struct sNode*)result_5)->_protocol_obj, 0, 0, 0); } 
}

static struct sBlock* sBlock_clone(struct sBlock* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional14;
struct sBlock* __result15__;
void* right_value13;
struct sBlock* result_6;
_Bool _if_conditional18;
void* right_value20;
struct list$1sNodeph* __dec_obj11;
_Bool _if_conditional22;
void* right_value40;
struct sVarTable* __dec_obj14;
struct sBlock* __result52__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_6, 0, sizeof(struct sBlock*));
        if(_if_conditional14=self==(void*)0,        _if_conditional14) {
            __result15__ = __result_obj__ = (void*)0;
            return __result15__;
        }
        result_6=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value13=(struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3))));
        if(right_value13 && right_value13 != __result_obj__) { come_call_finalizer(sBlock_finalize,right_value13, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(_if_conditional18=self!=((void*)0)&&self->mNodes!=((void*)0),        _if_conditional18) {
            __dec_obj11=result_6->mNodes;
            result_6->mNodes=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value20=list$1sNodephp_clone(self->mNodes))));
            if(__dec_obj11) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj11, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value20 && right_value20 != __result_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value20, (void*)0, (void*)0, 0, 1, 0, 0); }
        }
        if(_if_conditional22=self!=((void*)0)&&self->mVarTable!=((void*)0),        _if_conditional22) {
            __dec_obj14=result_6->mVarTable;
            result_6->mVarTable=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value40=sVarTable_clone(self->mVarTable))));
            if(__dec_obj14) { come_call_finalizer(sVarTable_finalize,__dec_obj14, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value40 && right_value40 != __result_obj__) { come_call_finalizer(sVarTable_finalize,right_value40, (void*)0, (void*)0, 0, 1, 0, 0); }
        }
        __result52__ = __result_obj__ = result_6;
        if(result_6) { come_call_finalizer(sBlock_finalize,result_6, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result52__;
        if(result_6) { come_call_finalizer(sBlock_finalize,result_6, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sBlock_finalize(struct sBlock* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional15;
_Bool _if_conditional17;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional15=self!=((void*)0)&&self->mNodes!=((void*)0),            _if_conditional15) {
                if(self->mNodes) { come_call_finalizer(list$1sNodephp_finalize,self->mNodes, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            if(_if_conditional17=self!=((void*)0)&&self->mVarTable!=((void*)0),            _if_conditional17) {
                if(self->mVarTable) { come_call_finalizer(sVarTable_finalize,self->mVarTable, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
struct list_item$1sNodeph* it_7;
_Bool _while_condtional1;
struct list_item$1sNodeph* prev_it_8;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_7, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_8, 0, sizeof(struct list_item$1sNodeph*));
                    it_7=self->head;
                    while(_while_condtional1=it_7!=((void*)0),                    _while_condtional1) {
                        prev_it_8=it_7;
                        it_7=it_7->next;
                        if(prev_it_8) { come_call_finalizer(list_item$1sNodephp_finalize,prev_it_8, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional16;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional16=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional16) {
                                if(self->item) { self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0); } 
                            }
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional19;
struct list$1sNodeph* __result16__;
void* right_value14;
void* right_value15;
struct list$1sNodeph* result_9;
struct list_item$1sNodeph* it_10;
_Bool _while_condtional2;
void* right_value19;
struct list$1sNodeph* __result19__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_9, 0, sizeof(struct list$1sNodeph*));
memset(&it_10, 0, sizeof(struct list_item$1sNodeph*));
                if(_if_conditional19=self==((void*)0),                _if_conditional19) {
                    __result16__ = __result_obj__ = ((void*)0);
                    return __result16__;
                }
                result_9=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value15=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value14=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 193))))))));
                if(right_value14 && right_value14 != __result_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value14, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value15 && right_value15 != __result_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value15, (void*)0, (void*)0, 0, 1, 0, 0); }
                it_10=self->head;
                while(_while_condtional2=it_10!=((void*)0),                _while_condtional2) {
                    list$1sNodeph_add(result_9,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value19=sNode_clone(it_10->item)))));
                    if(right_value19 && right_value19 != __result_obj__) { right_value19 = come_decrement_ref_count(right_value19, ((struct sNode*)right_value19)->finalize, ((struct sNode*)right_value19)->_protocol_obj, 1, 0, 0); } 
                    it_10=it_10->next;
                }
                __result19__ = __result_obj__ = result_9;
                if(result_9) { come_call_finalizer(list$1sNodephp_finalize,result_9, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result19__;
                if(result_9) { come_call_finalizer(list$1sNodephp_finalize,result_9, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
struct list$1sNodeph* __result17__;
memset(&__result_obj__, 0, sizeof(void*));
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    __result17__ = __result_obj__ = self;
                    if(self) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result17__;
                    if(self) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional20;
void* right_value16;
struct list_item$1sNodeph* litem_11;
struct sNode* __dec_obj8;
_Bool _if_conditional21;
void* right_value17;
struct list_item$1sNodeph* litem_12;
struct sNode* __dec_obj9;
void* right_value18;
struct list_item$1sNodeph* litem_13;
struct sNode* __dec_obj10;
struct list$1sNodeph* __result18__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&litem_11, 0, sizeof(struct list_item$1sNodeph*));
memset(&litem_12, 0, sizeof(struct list_item$1sNodeph*));
memset(&litem_13, 0, sizeof(struct list_item$1sNodeph*));
                        if(_if_conditional20=self->len==0,                        _if_conditional20) {
                            litem_11=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value16=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 207))));
                            if(right_value16 && right_value16 != __result_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value16, (void*)0, (void*)0, 0, 1, 0, 0); }
                            litem_11->prev=((void*)0);
                            litem_11->next=((void*)0);
                            __dec_obj8=litem_11->item;
                            litem_11->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj8) { __dec_obj8 = come_decrement_ref_count(__dec_obj8, ((struct sNode*)__dec_obj8)->finalize, ((struct sNode*)__dec_obj8)->_protocol_obj, 0,0,0); }
                            self->tail=litem_11;
                            self->head=litem_11;
                        }
                        else {
                            if(_if_conditional21=self->len==1,                            _if_conditional21) {
                                litem_12=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value17=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 217))));
                                if(right_value17 && right_value17 != __result_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value17, (void*)0, (void*)0, 0, 1, 0, 0); }
                                litem_12->prev=self->head;
                                litem_12->next=((void*)0);
                                __dec_obj9=litem_12->item;
                                litem_12->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj9) { __dec_obj9 = come_decrement_ref_count(__dec_obj9, ((struct sNode*)__dec_obj9)->finalize, ((struct sNode*)__dec_obj9)->_protocol_obj, 0,0,0); }
                                self->tail=litem_12;
                                self->head->next=litem_12;
                            }
                            else {
                                litem_13=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value18=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 227))));
                                if(right_value18 && right_value18 != __result_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value18, (void*)0, (void*)0, 0, 1, 0, 0); }
                                litem_13->prev=self->tail;
                                litem_13->next=((void*)0);
                                __dec_obj10=litem_13->item;
                                litem_13->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj10) { __dec_obj10 = come_decrement_ref_count(__dec_obj10, ((struct sNode*)__dec_obj10)->finalize, ((struct sNode*)__dec_obj10)->_protocol_obj, 0,0,0); }
                                self->tail->next=litem_13;
                                self->tail=litem_13;
                            }
                        }
                        self->len++;
                        __result18__ = __result_obj__ = self;
                        if(item) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
                        return __result18__;
                        if(item) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional23;
struct sVarTable* __result20__;
void* right_value21;
struct sVarTable* result_14;
_Bool _if_conditional24;
void* right_value39;
struct map$2charphsVarph* __dec_obj13;
_Bool _if_conditional98;
_Bool _if_conditional99;
_Bool _if_conditional100;
struct sVarTable* __result51__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_14, 0, sizeof(struct sVarTable*));
                if(_if_conditional23=self==(void*)0,                _if_conditional23) {
                    __result20__ = __result_obj__ = (void*)0;
                    return __result20__;
                }
                result_14=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value21=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3))));
                if(right_value21 && right_value21 != __result_obj__) { come_call_finalizer(sVarTable_finalize,right_value21, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(_if_conditional24=self!=((void*)0)&&self->mVars!=((void*)0),                _if_conditional24) {
                    __dec_obj13=result_14->mVars;
                    result_14->mVars=(struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value39=map$2charphsVarphp_clone(self->mVars))));
                    if(__dec_obj13) { come_call_finalizer(map$2charphsVarph_finalize,__dec_obj13, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(right_value39 && right_value39 != __result_obj__) { come_call_finalizer(map$2charphsVarphp_finalize,right_value39, (void*)0, (void*)0, 0, 1, 0, 0); }
                }
                if(_if_conditional98=self!=((void*)0),                _if_conditional98) {
                    result_14->mGlobal=self->mGlobal;
                }
                if(_if_conditional99=self!=((void*)0),                _if_conditional99) {
                    result_14->mParent=self->mParent;
                }
                if(_if_conditional100=self!=((void*)0),                _if_conditional100) {
                    result_14->mID=self->mID;
                }
                __result51__ = __result_obj__ = result_14;
                if(result_14) { come_call_finalizer(sVarTable_finalize,result_14, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result51__;
                if(result_14) { come_call_finalizer(sVarTable_finalize,result_14, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct map$2charphsVarph* map$2charphsVarphp_clone(struct map$2charphsVarph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional25;
struct map$2charphsVarph* __result21__;
void* right_value22;
void* right_value28;
struct map$2charphsVarph* result_24;
char* it_27;
_Bool _for_condtionalA4;
struct sVar* default_value_30;
struct sVar* it2_34;
struct map$2charphsVarph* __result50__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_24, 0, sizeof(struct map$2charphsVarph*));
memset(&it_27, 0, sizeof(char*));
memset(&default_value_30, 0, sizeof(struct sVar*));
memset(&it2_34, 0, sizeof(struct sVar*));
                        if(_if_conditional25=self==((void*)0),                        _if_conditional25) {
                            __result21__ = __result_obj__ = ((void*)0);
                            return __result21__;
                        }
                        result_24=(struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value28=map$2charphsVarph_initialize((struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value22=(struct map$2charphsVarph*)come_calloc(1, sizeof(struct map$2charphsVarph)*(1), "./comelang2.h", 1220))))))));
                        if(right_value22 && right_value22 != __result_obj__) { come_call_finalizer(map$2charphsVarphp_finalize,right_value22, (void*)0, (void*)0, 0, 1, 0, 0); }
                        if(right_value28 && right_value28 != __result_obj__) { come_call_finalizer(map$2charphsVarphp_finalize,right_value28, (void*)0, (void*)0, 0, 1, 0, 0); }
                        for(
                        it_27=map$2charphsVarph_begin(self) ,                        0;                        _for_condtionalA4=                        !map$2charphsVarph_end(self) ,                        _for_condtionalA4;                        it_27=map$2charphsVarph_next(self) ,                        0                        ){
                            memset(&default_value_30,0,sizeof(struct sVar*));
                            it2_34=map$2charphsVarph_at(self,it_27,default_value_30);
                            map$2charphsVarph_insert2(result_24,it_27,it2_34);
                        }
                        __result50__ = __result_obj__ = result_24;
                        if(result_24) { come_call_finalizer(map$2charphsVarphp_finalize,result_24, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result50__;
                        if(result_24) { come_call_finalizer(map$2charphsVarphp_finalize,result_24, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct map$2charphsVarph* map$2charphsVarph_initialize(struct map$2charphsVarph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value23;
void* right_value24;
void* right_value25;
int i_19;
_Bool _for_condtionalA1;
void* right_value26;
void* right_value27;
struct list$1charp* __dec_obj12;
struct map$2charphsVarph* __result23__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_19, 0, sizeof(int));
                            self->keys=(char**)come_increment_ref_count(((char**)(right_value23=(char**)come_calloc(1, sizeof(char*)*(1*(1024)), "./comelang2.h", 1127))));
                            if(right_value23 && right_value23 != __result_obj__) { right_value23 = come_decrement_ref_count(right_value23, (void*)0, (void*)0, 1, 0, 0); }
                            self->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(right_value24=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(1024)), "./comelang2.h", 1128))));
                            if(right_value24 && right_value24 != __result_obj__) { come_call_finalizer(sVar_finalize,right_value24, (void*)0, (void*)0, 0, 1, 0, 0); }
                            self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value25=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(1024)), "./comelang2.h", 1129))));
                            if(right_value25 && right_value25 != __result_obj__) { right_value25 = come_decrement_ref_count(right_value25, (void*)0, (void*)0, 1, 0, 0); }
                            for(
                            i_19=0 ,                            0;                            _for_condtionalA1=                            i_19<1024 ,                            _for_condtionalA1;                            i_19++ ,                            0                            ){
                                self->item_existance[i_19]=(_Bool)0;
                            }
                            self->size=1024;
                            self->len=0;
                            __dec_obj12=self->key_list;
                            self->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value27=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value26=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang2.h", 1139))))))));
                            if(__dec_obj12) { come_call_finalizer(list$1charp_finalize,__dec_obj12, (void*)0, (void*)0, 0, 0, 0, 0); }
                            if(right_value26 && right_value26 != __result_obj__) { come_call_finalizer(list$1charpp_finalize,right_value26, (void*)0, (void*)0, 0, 1, 0, 0); }
                            if(right_value27 && right_value27 != __result_obj__) { come_call_finalizer(list$1charpp_finalize,right_value27, (void*)0, (void*)0, 0, 1, 0, 0); }
                            self->it=0;
                            __result23__ = __result_obj__ = self;
                            if(self) { come_call_finalizer(map$2charphsVarphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                            return __result23__;
                            if(self) { come_call_finalizer(map$2charphsVarphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void sVar_finalize(struct sVar* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional26;
_Bool _if_conditional27;
_Bool _if_conditional28;
_Bool _if_conditional44;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional26=self!=((void*)0)&&self->mName!=((void*)0),                                _if_conditional26) {
                                    if(self->mName) { self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, 0); }
                                }
                                if(_if_conditional27=self!=((void*)0)&&self->mCValueName!=((void*)0),                                _if_conditional27) {
                                    if(self->mCValueName) { self->mCValueName = come_decrement_ref_count(self->mCValueName, (void*)0, (void*)0, 0, 0, 0); }
                                }
                                if(_if_conditional28=self!=((void*)0)&&self->mType!=((void*)0),                                _if_conditional28) {
                                    if(self->mType) { come_call_finalizer(sType_finalize,self->mType, (void*)0, (void*)0, 0, 0, 0, 0); }
                                }
                                if(_if_conditional44=self!=((void*)0)&&self->mFunName!=((void*)0),                                _if_conditional44) {
                                    if(self->mFunName) { self->mFunName = come_decrement_ref_count(self->mFunName, (void*)0, (void*)0, 0, 0, 0); }
                                }
}

static void sType_finalize(struct sType* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional29;
_Bool _if_conditional31;
_Bool _if_conditional32;
_Bool _if_conditional33;
_Bool _if_conditional35;
_Bool _if_conditional36;
_Bool _if_conditional37;
_Bool _if_conditional39;
_Bool _if_conditional40;
_Bool _if_conditional41;
_Bool _if_conditional42;
_Bool _if_conditional43;
memset(&__result_obj__, 0, sizeof(void*));
                                        if(_if_conditional29=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                                        _if_conditional29) {
                                            if(self->mNoSolvedGenericsType) { come_call_finalizer(tuple1$1sTypephp_finalize,self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        }
                                        if(_if_conditional31=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                                        _if_conditional31) {
                                            if(self->mOriginalLoadVarType) { come_call_finalizer(tuple1$1sTypephp_finalize,self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        }
                                        if(_if_conditional32=self!=((void*)0)&&self->mGenericsName!=((void*)0),                                        _if_conditional32) {
                                            if(self->mGenericsName) { self->mGenericsName = come_decrement_ref_count(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0); }
                                        }
                                        if(_if_conditional33=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                                        _if_conditional33) {
                                            if(self->mGenericsTypes) { come_call_finalizer(list$1sTypephp_finalize,self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        }
                                        if(_if_conditional35=self!=((void*)0)&&self->mArrayNum!=((void*)0),                                        _if_conditional35) {
                                            if(self->mArrayNum) { come_call_finalizer(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        }
                                        if(_if_conditional36=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                        _if_conditional36) {
                                            if(self->mParamTypes) { come_call_finalizer(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        }
                                        if(_if_conditional37=self!=((void*)0)&&self->mParamNames!=((void*)0),                                        _if_conditional37) {
                                            if(self->mParamNames) { come_call_finalizer(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        }
                                        if(_if_conditional39=self!=((void*)0)&&self->mResultType!=((void*)0),                                        _if_conditional39) {
                                            if(self->mResultType) { come_call_finalizer(tuple1$1sTypephp_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        }
                                        if(_if_conditional40=self!=((void*)0)&&self->mAlignas!=((void*)0),                                        _if_conditional40) {
                                            if(self->mAlignas) { self->mAlignas = come_decrement_ref_count(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0); } 
                                        }
                                        if(_if_conditional41=self!=((void*)0)&&self->mSizeNum!=((void*)0),                                        _if_conditional41) {
                                            if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0); } 
                                        }
                                        if(_if_conditional42=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                                        _if_conditional42) {
                                            if(self->mOriginalTypeName) { self->mOriginalTypeName = come_decrement_ref_count(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0); }
                                        }
                                        if(_if_conditional43=self!=((void*)0)&&self->mAsmName!=((void*)0),                                        _if_conditional43) {
                                            if(self->mAsmName) { self->mAsmName = come_decrement_ref_count(self->mAsmName, (void*)0, (void*)0, 0, 0, 0); }
                                        }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional30;
memset(&__result_obj__, 0, sizeof(void*));
                                                if(_if_conditional30=self!=((void*)0)&&self->v1!=((void*)0),                                                _if_conditional30) {
                                                    if(self->v1) { come_call_finalizer(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
struct list_item$1sTypeph* it_15;
_Bool _while_condtional3;
struct list_item$1sTypeph* prev_it_16;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_15, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_16, 0, sizeof(struct list_item$1sTypeph*));
                                                it_15=self->head;
                                                while(_while_condtional3=it_15!=((void*)0),                                                _while_condtional3) {
                                                    prev_it_16=it_15;
                                                    it_15=it_15->next;
                                                    if(prev_it_16) { come_call_finalizer(list_item$1sTypephp_finalize,prev_it_16, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional34;
memset(&__result_obj__, 0, sizeof(void*));
                                                        if(_if_conditional34=self!=((void*)0)&&self->item!=((void*)0),                                                        _if_conditional34) {
                                                            if(self->item) { come_call_finalizer(sType_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                        }
}

static void list$1charphp_finalize(struct list$1charph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
struct list_item$1charph* it_17;
_Bool _while_condtional4;
struct list_item$1charph* prev_it_18;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_17, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_18, 0, sizeof(struct list_item$1charph*));
                                                it_17=self->head;
                                                while(_while_condtional4=it_17!=((void*)0),                                                _while_condtional4) {
                                                    prev_it_18=it_17;
                                                    it_17=it_17->next;
                                                    if(prev_it_18) { come_call_finalizer(list_item$1charphp_finalize,prev_it_18, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional38;
memset(&__result_obj__, 0, sizeof(void*));
                                                        if(_if_conditional38=self!=((void*)0)&&self->item!=((void*)0),                                                        _if_conditional38) {
                                                            if(self->item) { self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0, 0, 0); }
                                                        }
}

static struct list$1charp* list$1charp_initialize(struct list$1charp* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
struct list$1charp* __result22__;
memset(&__result_obj__, 0, sizeof(void*));
                                self->head=((void*)0);
                                self->tail=((void*)0);
                                self->len=0;
                                __result22__ = __result_obj__ = self;
                                if(self) { come_call_finalizer(list$1charpp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                                return __result22__;
                                if(self) { come_call_finalizer(list$1charpp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list$1charpp_finalize(struct list$1charp* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
struct list_item$1charp* it_20;
_Bool _while_condtional5;
struct list_item$1charp* prev_it_21;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_20, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_21, 0, sizeof(struct list_item$1charp*));
                                    it_20=self->head;
                                    while(_while_condtional5=it_20!=((void*)0),                                    _while_condtional5) {
                                        prev_it_21=it_20;
                                        it_20=it_20->next;
                                        if(prev_it_21) { come_call_finalizer(list_item$1charpp_finalize,prev_it_21, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    }
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static void list$1charp_finalize(struct list$1charp* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
int i_22;
_Bool _for_condtionalA2;
_Bool _if_conditional45;
_Bool _if_conditional46;
int i_23;
_Bool _for_condtionalA3;
_Bool _if_conditional47;
_Bool _if_conditional48;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_22, 0, sizeof(int));
memset(&i_23, 0, sizeof(int));
                                for(
                                i_22=0 ,                                0;                                _for_condtionalA2=                                i_22<self->size ,                                _for_condtionalA2;                                i_22++ ,                                0                                ){
                                    if(_if_conditional45=self->item_existance[i_22],                                    _if_conditional45) {
                                        if(_if_conditional46=1,                                        _if_conditional46) {
                                            if(self->items[i_22]) { come_call_finalizer(sVar_finalize,self->items[i_22], (void*)0, (void*)0, 0, 0, 0, 0); }
                                        }
                                    }
                                }
                                come_free_object((char*)self->items);
                                for(
                                i_23=0 ,                                0;                                _for_condtionalA3=                                i_23<self->size ,                                _for_condtionalA3;                                i_23++ ,                                0                                ){
                                    if(_if_conditional47=self->item_existance[i_23],                                    _if_conditional47) {
                                        if(_if_conditional48=1,                                        _if_conditional48) {
                                            if(self->keys[i_23]) { self->keys[i_23] = come_decrement_ref_count(self->keys[i_23], (void*)0, (void*)0, 0, 0, 0); }
                                        }
                                    }
                                }
                                come_free_object((char*)self->keys);
                                if(self->key_list) { come_call_finalizer(list$1charpp_finalize,self->key_list, (void*)0, (void*)0, 0, 0, 0, 0); }
                                if(self->item_existance) { self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, 0); }
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional49;
char* result_25;
char* __result24__;
_Bool _if_conditional50;
char* __result25__;
char* result_26;
char* __result26__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_25, 0, sizeof(char*));
memset(&result_26, 0, sizeof(char*));
                            if(_if_conditional49=self==((void*)0),                            _if_conditional49) {
                                memset(&result_25,0,sizeof(char*));
                                __result24__ = __result_obj__ = result_25;
                                return __result24__;
                            }
                            self->key_list->it=self->key_list->head;
                            if(_if_conditional50=self->key_list->it,                            _if_conditional50) {
                                __result25__ = __result_obj__ = self->key_list->it->item;
                                return __result25__;
                            }
                            memset(&result_26,0,sizeof(char*));
                            __result26__ = __result_obj__ = result_26;
                            return __result26__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __result27__;
memset(&__result_obj__, 0, sizeof(void*));
                            __result27__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                            return __result27__;
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional51;
char* result_28;
char* __result28__;
_Bool _if_conditional52;
char* __result29__;
char* result_29;
char* __result30__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_28, 0, sizeof(char*));
memset(&result_29, 0, sizeof(char*));
                            if(_if_conditional51=self==((void*)0)||self->key_list->it==((void*)0),                            _if_conditional51) {
                                memset(&result_28,0,sizeof(char*));
                                __result28__ = __result_obj__ = result_28;
                                return __result28__;
                            }
                            self->key_list->it=self->key_list->it->next;
                            if(_if_conditional52=self->key_list->it,                            _if_conditional52) {
                                __result29__ = __result_obj__ = self->key_list->it->item;
                                return __result29__;
                            }
                            memset(&result_29,0,sizeof(char*));
                            __result30__ = __result_obj__ = result_29;
                            return __result30__;
}

static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
unsigned int hash_31;
unsigned int it_32;
_Bool _while_condtional6;
_Bool _if_conditional53;
void* right_value29;
_Bool _if_conditional55;
struct sVar* __result33__;
_Bool _if_conditional56;
_Bool _if_conditional57;
struct sVar* __result34__;
struct sVar* __result35__;
struct sVar* __result36__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_31, 0, sizeof(unsigned int));
memset(&it_32, 0, sizeof(unsigned int));
                                hash_31=string_get_hash_key(((char*)key))%self->size;
                                it_32=hash_31;
                                while(_while_condtional6=(_Bool)1,                                _while_condtional6) {
                                    if(_if_conditional53=self->item_existance[it_32],                                    _if_conditional53) {
                                        if(_if_conditional55=optional$2boolbool_value(((struct optional$2boolbool*)(right_value29=string_equals(self->keys[it_32],key)))),                                        (right_value29 && right_value29 != __result_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value29, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                        _if_conditional55) {
                                            __result33__ = __result_obj__ = self->items[it_32];
                                            return __result33__;
                                        }
                                        it_32++;
                                        if(_if_conditional56=it_32>=self->size,                                        _if_conditional56) {
                                            it_32=0;
                                        }
                                        else {
                                            if(_if_conditional57=it_32==hash_31,                                            _if_conditional57) {
                                                __result34__ = __result_obj__ = default_value;
                                                return __result34__;
                                            }
                                        }
                                    }
                                    else {
                                        __result35__ = __result_obj__ = default_value;
                                        return __result35__;
                                    }
                                }
                                __result36__ = __result_obj__ = default_value;
                                return __result36__;
}

static _Bool optional$2boolbool_value(struct optional$2boolbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional54;
_Bool default_value_33;
_Bool __result31__;
_Bool __result32__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_33, 0, sizeof(_Bool));
                                            if(_if_conditional54=self==((void*)0),                                            _if_conditional54) {
                                                memset(&default_value_33,0,sizeof(_Bool));
                                                __result31__ = default_value_33;
                                                return __result31__;
                                            }
                                            else {
                                                __result32__ = self->v1;
                                                return __result32__;
                                            }
}

static void optional$2boolboolp_finalize(struct optional$2boolbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct map$2charphsVarph* map$2charphsVarph_insert2(struct map$2charphsVarph* self, char* key, struct sVar* item){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional58;
unsigned int hash_46;
int it_47;
_Bool _while_condtional8;
_Bool _if_conditional62;
void* right_value33;
_Bool _if_conditional63;
_Bool _if_conditional64;
_Bool _if_conditional84;
_Bool _if_conditional85;
_Bool _if_conditional86;
_Bool _if_conditional87;
_Bool _if_conditional88;
_Bool same_key_exist_64;
char* it2_67;
_Bool _for_condtionalA6;
void* right_value35;
_Bool _if_conditional93;
_Bool _if_conditional94;
struct map$2charphsVarph* __result49__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_46, 0, sizeof(unsigned int));
memset(&it_47, 0, sizeof(int));
memset(&same_key_exist_64, 0, sizeof(_Bool));
memset(&it2_67, 0, sizeof(char*));
                                if(_if_conditional58=self->len*2>=self->size,                                _if_conditional58) {
                                    map$2charphsVarph_rehash(self);
                                }
                                hash_46=string_get_hash_key(key)%self->size;
                                it_47=hash_46;
                                while(_while_condtional8=(_Bool)1,                                _while_condtional8) {
                                    if(_if_conditional62=self->item_existance[it_47],                                    _if_conditional62) {
                                        if(_if_conditional63=optional$2boolbool_value(((struct optional$2boolbool*)(right_value33=string_equals(self->keys[it_47],key)))),                                        (right_value33 && right_value33 != __result_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value33, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                        _if_conditional63) {
                                            if(_if_conditional64=1,                                            _if_conditional64) {
                                                if(self->keys[it_47]) { self->keys[it_47] = come_decrement_ref_count(self->keys[it_47], (void*)0, (void*)0, 0, 0, 0); }
                                                list$1charp_remove(self->key_list,self->keys[it_47]);
                                                self->keys[it_47]=(char*)come_increment_ref_count(key);
                                            }
                                            else {
                                                list$1charp_remove(self->key_list,self->keys[it_47]);
                                                self->keys[it_47]=key;
                                            }
                                            if(_if_conditional84=1,                                            _if_conditional84) {
                                                if(self->items[it_47]) { come_call_finalizer(sVar_finalize,self->items[it_47], (void*)0, (void*)0, 0, 0, 0, 0); }
                                                self->items[it_47]=(struct sVar*)come_increment_ref_count(item);
                                            }
                                            else {
                                                self->items[it_47]=item;
                                            }
                                            break;
                                        }
                                        it_47++;
                                        if(_if_conditional85=it_47>=self->size,                                        _if_conditional85) {
                                            it_47=0;
                                        }
                                        else {
                                            if(_if_conditional86=it_47==hash_46,                                            _if_conditional86) {
                                                printf("unexpected error in map.insert\n");
                                                stackframe();
                                                exit(2);
                                            }
                                        }
                                    }
                                    else {
                                        self->item_existance[it_47]=(_Bool)1;
                                        if(_if_conditional87=1,                                        _if_conditional87) {
                                            self->keys[it_47]=(char*)come_increment_ref_count(key);
                                        }
                                        else {
                                            self->keys[it_47]=key;
                                        }
                                        if(_if_conditional88=1,                                        _if_conditional88) {
                                            self->items[it_47]=(struct sVar*)come_increment_ref_count(item);
                                        }
                                        else {
                                            self->items[it_47]=item;
                                        }
                                        self->len++;
                                        break;
                                    }
                                }
                                same_key_exist_64=(_Bool)0;
                                for(
                                it2_67=list$1charp_begin(self->key_list) ,                                0;                                _for_condtionalA6=                                !list$1charp_end(self->key_list) ,                                _for_condtionalA6;                                it2_67=list$1charp_next(self->key_list) ,                                0                                ){
                                    if(_if_conditional93=optional$2boolbool_value(((struct optional$2boolbool*)(right_value35=string_equals(it2_67,key)))),                                    (right_value35 && right_value35 != __result_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value35, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                    _if_conditional93) {
                                        same_key_exist_64=(_Bool)1;
                                    }
                                }
                                if(_if_conditional94=!same_key_exist_64,                                _if_conditional94) {
                                    list$1charp_push_back(self->key_list,key);
                                }
                                __result49__ = __result_obj__ = self;
                                if(key) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
                                if(item) { come_call_finalizer(sVar_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                                return __result49__;
                                if(key) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
                                if(item) { come_call_finalizer(sVar_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void map$2charphsVarph_rehash(struct map$2charphsVarph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
int size_35;
void* right_value30;
char** keys_36;
void* right_value31;
struct sVar** items_37;
void* right_value32;
_Bool* item_existance_38;
int len_39;
char* it_40;
_Bool _for_condtionalA5;
struct sVar* default_value_41;
struct sVar* it2_42;
unsigned int hash_43;
int n_44;
_Bool _while_condtional7;
_Bool _if_conditional59;
_Bool _if_conditional60;
_Bool _if_conditional61;
struct sVar* default_value_45;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_35, 0, sizeof(int));
memset(&keys_36, 0, sizeof(char**));
memset(&items_37, 0, sizeof(struct sVar**));
memset(&item_existance_38, 0, sizeof(_Bool*));
memset(&len_39, 0, sizeof(int));
memset(&it_40, 0, sizeof(char*));
memset(&default_value_41, 0, sizeof(struct sVar*));
memset(&it2_42, 0, sizeof(struct sVar*));
memset(&hash_43, 0, sizeof(unsigned int));
memset(&n_44, 0, sizeof(int));
memset(&default_value_45, 0, sizeof(struct sVar*));
                                        size_35=self->size*10;
                                        keys_36=(char**)come_increment_ref_count(((char**)(right_value30=(char**)come_calloc(1, sizeof(char*)*(1*(size_35)), "./comelang2.h", 1375))));
                                        if(right_value30 && right_value30 != __result_obj__) { right_value30 = come_decrement_ref_count(right_value30, (void*)0, (void*)0, 1, 0, 0); }
                                        items_37=(struct sVar**)come_increment_ref_count(((struct sVar**)(right_value31=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_35)), "./comelang2.h", 1376))));
                                        if(right_value31 && right_value31 != __result_obj__) { come_call_finalizer(sVar_finalize,right_value31, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        item_existance_38=(_Bool*)come_increment_ref_count(((_Bool*)(right_value32=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_35)), "./comelang2.h", 1377))));
                                        if(right_value32 && right_value32 != __result_obj__) { right_value32 = come_decrement_ref_count(right_value32, (void*)0, (void*)0, 1, 0, 0); }
                                        len_39=0;
                                        for(
                                        it_40=map$2charphsVarph_begin(self) ,                                        0;                                        _for_condtionalA5=                                        !map$2charphsVarph_end(self) ,                                        _for_condtionalA5;                                        it_40=map$2charphsVarph_next(self) ,                                        0                                        ){
                                            memset(&default_value_41,0,sizeof(struct sVar*));
                                            it2_42=map$2charphsVarph_at(self,it_40,default_value_41);
                                            hash_43=string_get_hash_key(it_40)%size_35;
                                            n_44=hash_43;
                                            while(_while_condtional7=(_Bool)1,                                            _while_condtional7) {
                                                if(_if_conditional59=item_existance_38[n_44],                                                _if_conditional59) {
                                                    n_44++;
                                                    if(_if_conditional60=n_44>=size_35,                                                    _if_conditional60) {
                                                        n_44=0;
                                                    }
                                                    else {
                                                        if(_if_conditional61=n_44==hash_43,                                                        _if_conditional61) {
                                                            printf("unexpected error in map.rehash(1)\n");
                                                            stackframe();
                                                            exit(2);
                                                        }
                                                    }
                                                }
                                                else {
                                                    item_existance_38[n_44]=(_Bool)1;
                                                    keys_36[n_44]=it_40;
                                                    items_37[n_44]=map$2charphsVarph_at(self,it_40,default_value_45);
                                                    len_39++;
                                                    break;
                                                }
                                            }
                                        }
                                        come_free_object((char*)self->items);
                                        if(self->item_existance) { self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, 0); }
                                        come_free_object((char*)self->keys);
                                        self->keys=keys_36;
                                        self->items=items_37;
                                        self->item_existance=item_existance_38;
                                        self->size=size_35;
                                        self->len=len_39;
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
int it2_48;
struct list_item$1charp* it_49;
_Bool _while_condtional9;
void* right_value34;
_Bool _if_conditional65;
struct list$1charp* __result40__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it2_48, 0, sizeof(int));
memset(&it_49, 0, sizeof(struct list_item$1charp*));
                                                    it2_48=0;
                                                    it_49=self->head;
                                                    while(_while_condtional9=it_49!=((void*)0),                                                    _while_condtional9) {
                                                        if(_if_conditional65=optional$2boolbool_value(((struct optional$2boolbool*)(right_value34=string_equals(it_49->item,item)))),                                                        (right_value34 && right_value34 != __result_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value34, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                                        _if_conditional65) {
                                                            list$1charp_delete(self,it2_48,it2_48+1);
                                                            break;
                                                        }
                                                        it2_48++;
                                                        it_49=it_49->next;
                                                    }
                                                    __result40__ = __result_obj__ = self;
                                                    return __result40__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional66;
_Bool _if_conditional67;
_Bool _if_conditional68;
int tmp_50;
_Bool _if_conditional69;
_Bool _if_conditional70;
_Bool _if_conditional71;
struct list$1charp* __result37__;
_Bool _if_conditional72;
_Bool _if_conditional73;
struct list_item$1charp* it_53;
int i_54;
_Bool _while_condtional11;
_Bool _if_conditional74;
struct list_item$1charp* prev_it_55;
_Bool _if_conditional75;
_Bool _if_conditional76;
struct list_item$1charp* it_56;
int i_57;
_Bool _while_condtional12;
_Bool _if_conditional77;
_Bool _if_conditional78;
struct list_item$1charp* prev_it_58;
struct list_item$1charp* it_59;
struct list_item$1charp* head_prev_it_60;
struct list_item$1charp* tail_it_61;
int i_62;
_Bool _while_condtional13;
_Bool _if_conditional79;
_Bool _if_conditional80;
_Bool _if_conditional81;
struct list_item$1charp* prev_it_63;
_Bool _if_conditional82;
_Bool _if_conditional83;
struct list$1charp* __result39__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&tmp_50, 0, sizeof(int));
memset(&it_53, 0, sizeof(struct list_item$1charp*));
memset(&i_54, 0, sizeof(int));
memset(&prev_it_55, 0, sizeof(struct list_item$1charp*));
memset(&it_56, 0, sizeof(struct list_item$1charp*));
memset(&i_57, 0, sizeof(int));
memset(&prev_it_58, 0, sizeof(struct list_item$1charp*));
memset(&it_59, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_60, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_61, 0, sizeof(struct list_item$1charp*));
memset(&i_62, 0, sizeof(int));
memset(&prev_it_63, 0, sizeof(struct list_item$1charp*));
                                                                if(_if_conditional66=head<0,                                                                _if_conditional66) {
                                                                    head+=self->len;
                                                                }
                                                                if(_if_conditional67=tail<0,                                                                _if_conditional67) {
                                                                    tail+=self->len+1;
                                                                }
                                                                if(_if_conditional68=head>tail,                                                                _if_conditional68) {
                                                                    tmp_50=tail;
                                                                    tail=head;
                                                                    head=tmp_50;
                                                                }
                                                                if(_if_conditional69=head<0,                                                                _if_conditional69) {
                                                                    head=0;
                                                                }
                                                                if(_if_conditional70=tail>self->len,                                                                _if_conditional70) {
                                                                    tail=self->len;
                                                                }
                                                                if(_if_conditional71=head==tail,                                                                _if_conditional71) {
                                                                    __result37__ = __result_obj__ = self;
                                                                    return __result37__;
                                                                }
                                                                if(_if_conditional72=head==0&&tail==self->len,                                                                _if_conditional72) {
                                                                    list$1charp_reset(self);
                                                                }
                                                                else {
                                                                    if(_if_conditional73=head==0,                                                                    _if_conditional73) {
                                                                        it_53=self->head;
                                                                        i_54=0;
                                                                        while(_while_condtional11=it_53!=((void*)0),                                                                        _while_condtional11) {
                                                                            if(_if_conditional74=i_54<tail,                                                                            _if_conditional74) {
                                                                                prev_it_55=it_53;
                                                                                it_53=it_53->next;
                                                                                i_54++;
                                                                                if(prev_it_55) { come_call_finalizer(list_item$1charpp_finalize,prev_it_55, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                                self->len--;
                                                                            }
                                                                            else {
                                                                                if(_if_conditional75=i_54==tail,                                                                                _if_conditional75) {
                                                                                    self->head=it_53;
                                                                                    self->head->prev=((void*)0);
                                                                                    break;
                                                                                }
                                                                                else {
                                                                                    it_53=it_53->next;
                                                                                    i_54++;
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                    else {
                                                                        if(_if_conditional76=tail==self->len,                                                                        _if_conditional76) {
                                                                            it_56=self->head;
                                                                            i_57=0;
                                                                            while(_while_condtional12=it_56!=((void*)0),                                                                            _while_condtional12) {
                                                                                if(_if_conditional77=i_57==head,                                                                                _if_conditional77) {
                                                                                    self->tail=it_56->prev;
                                                                                    self->tail->next=((void*)0);
                                                                                }
                                                                                if(_if_conditional78=i_57>=head,                                                                                _if_conditional78) {
                                                                                    prev_it_58=it_56;
                                                                                    it_56=it_56->next;
                                                                                    i_57++;
                                                                                    if(prev_it_58) { come_call_finalizer(list_item$1charpp_finalize,prev_it_58, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                                    self->len--;
                                                                                }
                                                                                else {
                                                                                    it_56=it_56->next;
                                                                                    i_57++;
                                                                                }
                                                                            }
                                                                        }
                                                                        else {
                                                                            it_59=self->head;
                                                                            head_prev_it_60=((void*)0);
                                                                            tail_it_61=((void*)0);
                                                                            i_62=0;
                                                                            while(_while_condtional13=it_59!=((void*)0),                                                                            _while_condtional13) {
                                                                                if(_if_conditional79=i_62==head,                                                                                _if_conditional79) {
                                                                                    head_prev_it_60=it_59->prev;
                                                                                }
                                                                                if(_if_conditional80=i_62==tail,                                                                                _if_conditional80) {
                                                                                    tail_it_61=it_59;
                                                                                }
                                                                                if(_if_conditional81=i_62>=head&&i_62<tail,                                                                                _if_conditional81) {
                                                                                    prev_it_63=it_59;
                                                                                    it_59=it_59->next;
                                                                                    i_62++;
                                                                                    if(prev_it_63) { come_call_finalizer(list_item$1charpp_finalize,prev_it_63, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                                    self->len--;
                                                                                }
                                                                                else {
                                                                                    it_59=it_59->next;
                                                                                    i_62++;
                                                                                }
                                                                            }
                                                                            if(_if_conditional82=head_prev_it_60!=((void*)0),                                                                            _if_conditional82) {
                                                                                head_prev_it_60->next=tail_it_61;
                                                                            }
                                                                            if(_if_conditional83=tail_it_61!=((void*)0),                                                                            _if_conditional83) {
                                                                                tail_it_61->prev=head_prev_it_60;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                                __result39__ = __result_obj__ = self;
                                                                return __result39__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
struct list_item$1charp* it_51;
_Bool _while_condtional10;
struct list_item$1charp* prev_it_52;
struct list$1charp* __result38__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_51, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_52, 0, sizeof(struct list_item$1charp*));
                                                                        it_51=self->head;
                                                                        while(_while_condtional10=it_51!=((void*)0),                                                                        _while_condtional10) {
                                                                            prev_it_52=it_51;
                                                                            it_51=it_51->next;
                                                                            if(prev_it_52) { come_call_finalizer(list_item$1charpp_finalize,prev_it_52, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                        }
                                                                        self->head=((void*)0);
                                                                        self->tail=((void*)0);
                                                                        self->len=0;
                                                                        __result38__ = __result_obj__ = self;
                                                                        return __result38__;
}

static char* list$1charp_begin(struct list$1charp* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional89;
char* result_65;
char* __result41__;
_Bool _if_conditional90;
char* __result42__;
char* result_66;
char* __result43__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_65, 0, sizeof(char*));
memset(&result_66, 0, sizeof(char*));
                                    if(_if_conditional89=self==((void*)0),                                    _if_conditional89) {
                                        memset(&result_65,0,sizeof(char*));
                                        __result41__ = __result_obj__ = result_65;
                                        return __result41__;
                                    }
                                    self->it=self->head;
                                    if(_if_conditional90=self->it,                                    _if_conditional90) {
                                        __result42__ = __result_obj__ = self->it->item;
                                        return __result42__;
                                    }
                                    memset(&result_66,0,sizeof(char*));
                                    __result43__ = __result_obj__ = result_66;
                                    return __result43__;
}

static _Bool list$1charp_end(struct list$1charp* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __result44__;
memset(&__result_obj__, 0, sizeof(void*));
                                    __result44__ = self==((void*)0)||self->it==((void*)0);
                                    return __result44__;
}

static char* list$1charp_next(struct list$1charp* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional91;
char* result_68;
char* __result45__;
_Bool _if_conditional92;
char* __result46__;
char* result_69;
char* __result47__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_68, 0, sizeof(char*));
memset(&result_69, 0, sizeof(char*));
                                    if(_if_conditional91=self==((void*)0)||self->it==((void*)0),                                    _if_conditional91) {
                                        memset(&result_68,0,sizeof(char*));
                                        __result45__ = __result_obj__ = result_68;
                                        return __result45__;
                                    }
                                    self->it=self->it->next;
                                    if(_if_conditional92=self->it,                                    _if_conditional92) {
                                        __result46__ = __result_obj__ = self->it->item;
                                        return __result46__;
                                    }
                                    memset(&result_69,0,sizeof(char*));
                                    __result47__ = __result_obj__ = result_69;
                                    return __result47__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional95;
void* right_value36;
struct list_item$1charp* litem_70;
_Bool _if_conditional96;
void* right_value37;
struct list_item$1charp* litem_71;
void* right_value38;
struct list_item$1charp* litem_72;
struct list$1charp* __result48__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&litem_70, 0, sizeof(struct list_item$1charp*));
memset(&litem_71, 0, sizeof(struct list_item$1charp*));
memset(&litem_72, 0, sizeof(struct list_item$1charp*));
                                        if(_if_conditional95=self->len==0,                                        _if_conditional95) {
                                            litem_70=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value36=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 277))));
                                            if(right_value36 && right_value36 != __result_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value36, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            litem_70->prev=((void*)0);
                                            litem_70->next=((void*)0);
                                            litem_70->item=item;
                                            self->tail=litem_70;
                                            self->head=litem_70;
                                        }
                                        else {
                                            if(_if_conditional96=self->len==1,                                            _if_conditional96) {
                                                litem_71=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value37=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 287))));
                                                if(right_value37 && right_value37 != __result_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value37, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                litem_71->prev=self->head;
                                                litem_71->next=((void*)0);
                                                litem_71->item=item;
                                                self->tail=litem_71;
                                                self->head->next=litem_71;
                                            }
                                            else {
                                                litem_72=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value38=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 297))));
                                                if(right_value38 && right_value38 != __result_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value38, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                litem_72->prev=self->tail;
                                                litem_72->next=((void*)0);
                                                litem_72->item=item;
                                                self->tail->next=litem_72;
                                                self->tail=litem_72;
                                            }
                                        }
                                        self->len++;
                                        __result48__ = __result_obj__ = self;
                                        return __result48__;
}

static void map$2charphsVarph_finalize(struct map$2charphsVarph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional97;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional97=self!=((void*)0)&&self->key_list!=((void*)0),                        _if_conditional97) {
                            if(self->key_list) { come_call_finalizer(list$1charpp_finalize,self->key_list, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
}

static struct list$1sBlockph* list$1sBlockphp_clone(struct list$1sBlockph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional101;
struct list$1sBlockph* __result53__;
void* right_value43;
void* right_value44;
struct list$1sBlockph* result_75;
struct list_item$1sBlockph* it_76;
_Bool _while_condtional15;
void* right_value48;
struct list$1sBlockph* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_75, 0, sizeof(struct list$1sBlockph*));
memset(&it_76, 0, sizeof(struct list_item$1sBlockph*));
        if(_if_conditional101=self==((void*)0),        _if_conditional101) {
            __result53__ = __result_obj__ = ((void*)0);
            return __result53__;
        }
        result_75=(struct list$1sBlockph*)come_increment_ref_count(((struct list$1sBlockph*)(right_value44=list$1sBlockph_initialize((struct list$1sBlockph*)come_increment_ref_count(((struct list$1sBlockph*)(right_value43=(struct list$1sBlockph*)come_calloc(1, sizeof(struct list$1sBlockph)*(1), "./comelang2.h", 193))))))));
        if(right_value43 && right_value43 != __result_obj__) { come_call_finalizer(list$1sBlockphp_finalize,right_value43, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value44 && right_value44 != __result_obj__) { come_call_finalizer(list$1sBlockphp_finalize,right_value44, (void*)0, (void*)0, 0, 1, 0, 0); }
        it_76=self->head;
        while(_while_condtional15=it_76!=((void*)0),        _while_condtional15) {
            list$1sBlockph_add(result_75,(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value48=sBlock_clone(it_76->item)))));
            if(right_value48 && right_value48 != __result_obj__) { come_call_finalizer(sBlock_finalize,right_value48, (void*)0, (void*)0, 0, 1, 0, 0); }
            it_76=it_76->next;
        }
        __result56__ = __result_obj__ = result_75;
        if(result_75) { come_call_finalizer(list$1sBlockphp_finalize,result_75, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result56__;
        if(result_75) { come_call_finalizer(list$1sBlockphp_finalize,result_75, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sBlockph* list$1sBlockph_initialize(struct list$1sBlockph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
struct list$1sBlockph* __result54__;
memset(&__result_obj__, 0, sizeof(void*));
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            __result54__ = __result_obj__ = self;
            if(self) { come_call_finalizer(list$1sBlockphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            return __result54__;
            if(self) { come_call_finalizer(list$1sBlockphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list$1sBlockphp_finalize(struct list$1sBlockph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
struct list_item$1sBlockph* it_73;
_Bool _while_condtional14;
struct list_item$1sBlockph* prev_it_74;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_73, 0, sizeof(struct list_item$1sBlockph*));
memset(&prev_it_74, 0, sizeof(struct list_item$1sBlockph*));
                it_73=self->head;
                while(_while_condtional14=it_73!=((void*)0),                _while_condtional14) {
                    prev_it_74=it_73;
                    it_73=it_73->next;
                    if(prev_it_74) { come_call_finalizer(list_item$1sBlockphp_finalize,prev_it_74, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
}

static void list_item$1sBlockphp_finalize(struct list_item$1sBlockph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional102;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional102=self!=((void*)0)&&self->item!=((void*)0),                        _if_conditional102) {
                            if(self->item) { come_call_finalizer(sBlock_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
}

static struct list$1sBlockph* list$1sBlockph_add(struct list$1sBlockph* self, struct sBlock* item){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional103;
void* right_value45;
struct list_item$1sBlockph* litem_77;
struct sBlock* __dec_obj17;
_Bool _if_conditional104;
void* right_value46;
struct list_item$1sBlockph* litem_78;
struct sBlock* __dec_obj18;
void* right_value47;
struct list_item$1sBlockph* litem_79;
struct sBlock* __dec_obj19;
struct list$1sBlockph* __result55__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&litem_77, 0, sizeof(struct list_item$1sBlockph*));
memset(&litem_78, 0, sizeof(struct list_item$1sBlockph*));
memset(&litem_79, 0, sizeof(struct list_item$1sBlockph*));
                if(_if_conditional103=self->len==0,                _if_conditional103) {
                    litem_77=(struct list_item$1sBlockph*)come_increment_ref_count(((struct list_item$1sBlockph*)(right_value45=(struct list_item$1sBlockph*)come_calloc(1, sizeof(struct list_item$1sBlockph)*(1), "./comelang2.h", 207))));
                    if(right_value45 && right_value45 != __result_obj__) { come_call_finalizer(list_item$1sBlockphp_finalize,right_value45, (void*)0, (void*)0, 0, 1, 0, 0); }
                    litem_77->prev=((void*)0);
                    litem_77->next=((void*)0);
                    __dec_obj17=litem_77->item;
                    litem_77->item=(struct sBlock*)come_increment_ref_count(item);
                    if(__dec_obj17) { come_call_finalizer(sBlock_finalize,__dec_obj17, (void*)0, (void*)0, 0, 0, 0, 0); }
                    self->tail=litem_77;
                    self->head=litem_77;
                }
                else {
                    if(_if_conditional104=self->len==1,                    _if_conditional104) {
                        litem_78=(struct list_item$1sBlockph*)come_increment_ref_count(((struct list_item$1sBlockph*)(right_value46=(struct list_item$1sBlockph*)come_calloc(1, sizeof(struct list_item$1sBlockph)*(1), "./comelang2.h", 217))));
                        if(right_value46 && right_value46 != __result_obj__) { come_call_finalizer(list_item$1sBlockphp_finalize,right_value46, (void*)0, (void*)0, 0, 1, 0, 0); }
                        litem_78->prev=self->head;
                        litem_78->next=((void*)0);
                        __dec_obj18=litem_78->item;
                        litem_78->item=(struct sBlock*)come_increment_ref_count(item);
                        if(__dec_obj18) { come_call_finalizer(sBlock_finalize,__dec_obj18, (void*)0, (void*)0, 0, 0, 0, 0); }
                        self->tail=litem_78;
                        self->head->next=litem_78;
                    }
                    else {
                        litem_79=(struct list_item$1sBlockph*)come_increment_ref_count(((struct list_item$1sBlockph*)(right_value47=(struct list_item$1sBlockph*)come_calloc(1, sizeof(struct list_item$1sBlockph)*(1), "./comelang2.h", 227))));
                        if(right_value47 && right_value47 != __result_obj__) { come_call_finalizer(list_item$1sBlockphp_finalize,right_value47, (void*)0, (void*)0, 0, 1, 0, 0); }
                        litem_79->prev=self->tail;
                        litem_79->next=((void*)0);
                        __dec_obj19=litem_79->item;
                        litem_79->item=(struct sBlock*)come_increment_ref_count(item);
                        if(__dec_obj19) { come_call_finalizer(sBlock_finalize,__dec_obj19, (void*)0, (void*)0, 0, 0, 0, 0); }
                        self->tail->next=litem_79;
                        self->tail=litem_79;
                    }
                }
                self->len++;
                __result55__ = __result_obj__ = self;
                if(item) { come_call_finalizer(sBlock_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result55__;
                if(item) { come_call_finalizer(sBlock_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list$1sBlockph_finalize(struct list$1sBlockph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

_Bool sIfNode_terminated(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __result58__;
memset(&__result_obj__, 0, sizeof(void*));
    __result58__ = (_Bool)1;
    return __result58__;
}

char* sIfNode_kind(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value51;
char* __result59__;
memset(&__result_obj__, 0, sizeof(void*));
    __result59__ = __result_obj__ = ((char*)(right_value51=__builtin_string("sIfNode")));
    return __result59__;
}

_Bool sIfNode_compile(struct sIfNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
struct sBlock* else_block_80;
int elif_num_81;
struct sNode* expression_node_82;
int sline_83;
char* sname_84;
_Bool _if_conditional112;
_Bool __result60__;
void* right_value52;
struct CVALUE* conditional_value_85;
struct sBlock* if_block_86;
static int num_if_conditional_87=0;
int num_if_conditional_stack_88;
_Bool _if_conditional115;
int i_89;
_Bool _for_condtionalA7;
void* right_value57;
struct sNode* expression_node2_94;
_Bool _if_conditional120;
_Bool __result66__;
void* right_value58;
struct CVALUE* conditional_value_95;
void* right_value63;
struct sBlock* elif_node_block_100;
static int num_elif_conditional_101=0;
int num_elif_conditional_stack_102;
_Bool _if_conditional125;
_Bool __result72__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&else_block_80, 0, sizeof(struct sBlock*));
memset(&elif_num_81, 0, sizeof(int));
memset(&expression_node_82, 0, sizeof(struct sNode*));
memset(&sline_83, 0, sizeof(int));
memset(&sname_84, 0, sizeof(char*));
memset(&conditional_value_85, 0, sizeof(struct CVALUE*));
memset(&if_block_86, 0, sizeof(struct sBlock*));
memset(&num_if_conditional_stack_88, 0, sizeof(int));
memset(&i_89, 0, sizeof(int));
memset(&expression_node2_94, 0, sizeof(struct sNode*));
memset(&conditional_value_95, 0, sizeof(struct CVALUE*));
memset(&elif_node_block_100, 0, sizeof(struct sBlock*));
memset(&num_elif_conditional_stack_102, 0, sizeof(int));
    else_block_80=self->mElseBlock;
    elif_num_81=self->mElifNum;
    expression_node_82=self->mExpressionNode;
    sline_83=info->sline;
    sname_84=info->sname;
    info->writing_source_file_position=(_Bool)1;
    info->without_semicolon=(_Bool)1;
    if(_if_conditional112=!node_compile(expression_node_82,info),    _if_conditional112) {
        __result60__ = (_Bool)0;
        return __result60__;
    }
    info->without_semicolon=(_Bool)0;
    conditional_value_85=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value52=get_value_from_stack(-1,info))));
    if(right_value52 && right_value52 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value52, (void*)0, (void*)0, 0, 1, 0, 0); }
    dec_stack_ptr(1,info);
    if_block_86=self->mIfBlock;
    add_come_code_at_function_head(info,"_Bool _if_conditional%d;\n",++num_if_conditional_87);
    num_if_conditional_stack_88=num_if_conditional_87;
    add_come_code(info,"if(_if_conditional%d=%s,",num_if_conditional_87,conditional_value_85->c_value);
    add_last_code_to_source_with_comma(info);
    free_right_value_objects(info,(_Bool)1);
    add_come_code(info,"_if_conditional%d) {\n",num_if_conditional_stack_88);
    transpile_block(if_block_86,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0);
    add_come_code(info,"}\n");
    if(_if_conditional115=elif_num_81>0,    _if_conditional115) {
        for(
        i_89=0 ,        0;        _for_condtionalA7=        i_89<elif_num_81 ,        _for_condtionalA7;        i_89++ ,        0        ){
            expression_node2_94=optional$2sNodephbool_value(((struct optional$2sNodephbool*)(right_value57=list$1sNodephp_operator_load_element(self->mElifExpressionNodes,i_89))));
            if(right_value57 && right_value57 != __result_obj__) { come_call_finalizer(optional$2sNodephboolp_finalize,right_value57, (void*)0, (void*)0, 0, 1, 0, 0); }
            info->writing_source_file_position=(_Bool)1;
            info->without_semicolon=(_Bool)1;
            if(_if_conditional120=!node_compile(expression_node2_94,info),            _if_conditional120) {
                __result66__ = (_Bool)0;
                if(conditional_value_85) { come_call_finalizer(CVALUE_finalize,conditional_value_85, (void*)0, (void*)0, 0, 0, 0, 0); }
                return __result66__;
            }
            info->without_semicolon=(_Bool)0;
            conditional_value_95=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value58=get_value_from_stack(-1,info))));
            if(right_value58 && right_value58 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value58, (void*)0, (void*)0, 0, 1, 0, 0); }
            dec_stack_ptr(1,info);
            elif_node_block_100=optional$2sBlockphbool_value(((struct optional$2sBlockphbool*)(right_value63=list$1sBlockphp_operator_load_element(self->mElifBlocks,i_89))));
            if(right_value63 && right_value63 != __result_obj__) { come_call_finalizer(optional$2sBlockphboolp_finalize,right_value63, (void*)0, (void*)0, 0, 1, 0, 0); }
            add_come_code_at_function_head(info,"_Bool _elif_conditional%d;\n",++num_elif_conditional_101);
            num_elif_conditional_stack_102=num_elif_conditional_101;
            add_come_code(info,"else if(_elif_conditional%d=%s,",num_elif_conditional_101,conditional_value_95->c_value);
            add_last_code_to_source_with_comma(info);
            free_right_value_objects(info,(_Bool)1);
            add_come_code(info,"_elif_conditional%d) {\n",num_elif_conditional_stack_102);
            transpile_block(elif_node_block_100,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0);
            add_come_code(info,"}\n");
            if(conditional_value_95) { come_call_finalizer(CVALUE_finalize,conditional_value_95, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
    }
    if(_if_conditional125=else_block_80,    _if_conditional125) {
        add_come_code(info,"else {\n");
        transpile_block(else_block_80,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0);
        add_come_code(info,"}\n");
    }
    transpiler_clear_last_code(info);
    __result72__ = (_Bool)1;
    if(conditional_value_85) { come_call_finalizer(CVALUE_finalize,conditional_value_85, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result72__;
    if(conditional_value_85) { come_call_finalizer(CVALUE_finalize,conditional_value_85, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void CVALUE_finalize(struct CVALUE* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional113;
_Bool _if_conditional114;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional113=self!=((void*)0)&&self->c_value!=((void*)0),        _if_conditional113) {
            if(self->c_value) { self->c_value = come_decrement_ref_count(self->c_value, (void*)0, (void*)0, 0, 0, 0); }
        }
        if(_if_conditional114=self!=((void*)0)&&self->type!=((void*)0),        _if_conditional114) {
            if(self->type) { come_call_finalizer(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
}

static struct optional$2sNodephbool* list$1sNodephp_operator_load_element(struct list$1sNodeph* self, int position){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional116;
struct list_item$1sNodeph* it_90;
int i_91;
_Bool _while_condtional16;
_Bool _if_conditional117;
void* right_value53;
void* right_value54;
struct optional$2sNodephbool* __result62__;
struct sNode* default_value_92;
void* right_value55;
void* right_value56;
struct optional$2sNodephbool* __result63__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_90, 0, sizeof(struct list_item$1sNodeph*));
memset(&i_91, 0, sizeof(int));
memset(&default_value_92, 0, sizeof(struct sNode*));
                if(_if_conditional116=position<0,                _if_conditional116) {
                    position+=self->len;
                }
                it_90=self->head;
                i_91=0;
                while(_while_condtional16=it_90!=((void*)0),                _while_condtional16) {
                    if(_if_conditional117=position==i_91,                    _if_conditional117) {
                        __result62__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value54=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value53=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "./comelang2.h", 747)))),(struct sNode*)come_increment_ref_count(it_90->item),(_Bool)1)));
                        if(right_value53 && right_value53 != __result_obj__) { right_value53 = come_decrement_ref_count(right_value53, (void*)0, (void*)0, 1, 0, 0); }
                        return __result62__;
                    }
                    it_90=it_90->next;
                    i_91++;
                }
                memset(&default_value_92,0,sizeof(struct sNode*));
                __result63__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value56=optional$2sNodephbool_initialize(((struct optional$2sNodephbool*)(right_value55=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "./comelang2.h", 755))),(struct sNode*)come_increment_ref_count(default_value_92),(_Bool)0)));
                if(default_value_92) { default_value_92 = come_decrement_ref_count(default_value_92, ((struct sNode*)default_value_92)->finalize, ((struct sNode*)default_value_92)->_protocol_obj, 0, 0, 0); } 
                if(right_value55 && right_value55 != __result_obj__) { right_value55 = come_decrement_ref_count(right_value55, (void*)0, (void*)0, 1, 0, 0); }
                return __result63__;
                if(default_value_92) { default_value_92 = come_decrement_ref_count(default_value_92, ((struct sNode*)default_value_92)->finalize, ((struct sNode*)default_value_92)->_protocol_obj, 0, 0, 0); } 
}

static struct optional$2sNodephbool* optional$2sNodephbool_initialize(struct optional$2sNodephbool* self, struct sNode* v1, _Bool v2){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
struct sNode* __dec_obj23;
struct optional$2sNodephbool* __result61__;
memset(&__result_obj__, 0, sizeof(void*));
                            __dec_obj23=self->v1;
                            self->v1=(struct sNode*)come_increment_ref_count(v1);
                            if(__dec_obj23) { __dec_obj23 = come_decrement_ref_count(__dec_obj23, ((struct sNode*)__dec_obj23)->finalize, ((struct sNode*)__dec_obj23)->_protocol_obj, 0,0,0); }
                            self->v2=v2;
                            __result61__ = __result_obj__ = self;
                            if(self) { come_call_finalizer(optional$2sNodephboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                            if(v1) { v1 = come_decrement_ref_count(v1, ((struct sNode*)v1)->finalize, ((struct sNode*)v1)->_protocol_obj, 0, 1, 0); } 
                            return __result61__;
                            if(self) { come_call_finalizer(optional$2sNodephboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                            if(v1) { v1 = come_decrement_ref_count(v1, ((struct sNode*)v1)->finalize, ((struct sNode*)v1)->_protocol_obj, 0, 1, 0); } 
}

static void optional$2sNodephboolp_finalize(struct optional$2sNodephbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional118;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional118=self!=((void*)0)&&self->v1!=((void*)0),                                _if_conditional118) {
                                    if(self->v1) { self->v1 = come_decrement_ref_count(self->v1, ((struct sNode*)self->v1)->finalize, ((struct sNode*)self->v1)->_protocol_obj, 0, 0, 0); } 
                                }
}

static struct sNode* optional$2sNodephbool_value(struct optional$2sNodephbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional119;
struct sNode* default_value_93;
struct sNode* __result64__;
struct sNode* __result65__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_93, 0, sizeof(struct sNode*));
                if(_if_conditional119=self==((void*)0),                _if_conditional119) {
                    memset(&default_value_93,0,sizeof(struct sNode*));
                    __result64__ = __result_obj__ = default_value_93;
                    return __result64__;
                }
                else {
                    __result65__ = __result_obj__ = self->v1;
                    return __result65__;
                }
}

static struct optional$2sBlockphbool* list$1sBlockphp_operator_load_element(struct list$1sBlockph* self, int position){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional121;
struct list_item$1sBlockph* it_96;
int i_97;
_Bool _while_condtional17;
_Bool _if_conditional122;
void* right_value59;
void* right_value60;
struct optional$2sBlockphbool* __result68__;
struct sBlock* default_value_98;
void* right_value61;
void* right_value62;
struct optional$2sBlockphbool* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_96, 0, sizeof(struct list_item$1sBlockph*));
memset(&i_97, 0, sizeof(int));
memset(&default_value_98, 0, sizeof(struct sBlock*));
                if(_if_conditional121=position<0,                _if_conditional121) {
                    position+=self->len;
                }
                it_96=self->head;
                i_97=0;
                while(_while_condtional17=it_96!=((void*)0),                _while_condtional17) {
                    if(_if_conditional122=position==i_97,                    _if_conditional122) {
                        __result68__ = __result_obj__ = ((struct optional$2sBlockphbool*)(right_value60=optional$2sBlockphbool_initialize((struct optional$2sBlockphbool*)come_increment_ref_count(((struct optional$2sBlockphbool*)(right_value59=(struct optional$2sBlockphbool*)come_calloc(1, sizeof(struct optional$2sBlockphbool)*(1), "./comelang2.h", 747)))),(struct sBlock*)come_increment_ref_count(it_96->item),(_Bool)1)));
                        if(right_value59 && right_value59 != __result_obj__) { right_value59 = come_decrement_ref_count(right_value59, (void*)0, (void*)0, 1, 0, 0); }
                        return __result68__;
                    }
                    it_96=it_96->next;
                    i_97++;
                }
                memset(&default_value_98,0,sizeof(struct sBlock*));
                __result69__ = __result_obj__ = ((struct optional$2sBlockphbool*)(right_value62=optional$2sBlockphbool_initialize(((struct optional$2sBlockphbool*)(right_value61=(struct optional$2sBlockphbool*)come_calloc(1, sizeof(struct optional$2sBlockphbool)*(1), "./comelang2.h", 755))),(struct sBlock*)come_increment_ref_count(default_value_98),(_Bool)0)));
                if(default_value_98) { come_call_finalizer(sBlock_finalize,default_value_98, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(right_value61 && right_value61 != __result_obj__) { right_value61 = come_decrement_ref_count(right_value61, (void*)0, (void*)0, 1, 0, 0); }
                return __result69__;
                if(default_value_98) { come_call_finalizer(sBlock_finalize,default_value_98, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct optional$2sBlockphbool* optional$2sBlockphbool_initialize(struct optional$2sBlockphbool* self, struct sBlock* v1, _Bool v2){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
struct sBlock* __dec_obj24;
struct optional$2sBlockphbool* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
                            __dec_obj24=self->v1;
                            self->v1=(struct sBlock*)come_increment_ref_count(v1);
                            if(__dec_obj24) { come_call_finalizer(sBlock_finalize,__dec_obj24, (void*)0, (void*)0, 0, 0, 0, 0); }
                            self->v2=v2;
                            __result67__ = __result_obj__ = self;
                            if(self) { come_call_finalizer(optional$2sBlockphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                            if(v1) { come_call_finalizer(sBlock_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                            return __result67__;
                            if(self) { come_call_finalizer(optional$2sBlockphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                            if(v1) { come_call_finalizer(sBlock_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2sBlockphboolp_finalize(struct optional$2sBlockphbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional123;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional123=self!=((void*)0)&&self->v1!=((void*)0),                                _if_conditional123) {
                                    if(self->v1) { come_call_finalizer(sBlock_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                                }
}

static struct sBlock* optional$2sBlockphbool_value(struct optional$2sBlockphbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional124;
struct sBlock* default_value_99;
struct sBlock* __result70__;
struct sBlock* __result71__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_99, 0, sizeof(struct sBlock*));
                if(_if_conditional124=self==((void*)0),                _if_conditional124) {
                    memset(&default_value_99,0,sizeof(struct sBlock*));
                    __result70__ = __result_obj__ = default_value_99;
                    return __result70__;
                }
                else {
                    __result71__ = __result_obj__ = self->v1;
                    return __result71__;
                }
}

int sIfNode_sline(struct sIfNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
int __result73__;
memset(&__result_obj__, 0, sizeof(void*));
    __result73__ = self->sline;
    return __result73__;
}

char* sIfNode_sname(struct sIfNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value64;
char* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
    __result74__ = __result_obj__ = ((char*)(right_value64=__builtin_string(self->sname)));
    return __result74__;
}

struct sOrStatmentNode* sOrStatmentNode_initialize(struct sOrStatmentNode* self, struct sNode* expression_node, struct sBlock* if_block, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value65;
char* __dec_obj25;
void* right_value66;
struct sNode* __dec_obj26;
void* right_value67;
struct sBlock* __dec_obj27;
struct sOrStatmentNode* __result75__;
memset(&__result_obj__, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj25=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value65=__builtin_string(info->sname))));
    if(__dec_obj25) { __dec_obj25 = come_decrement_ref_count(__dec_obj25, (void*)0, (void*)0, 0,0,0); }
    if(right_value65 && right_value65 != __result_obj__) { right_value65 = come_decrement_ref_count(right_value65, (void*)0, (void*)0, 1, 0, 0); }
    __dec_obj26=self->mExpressionNode;
    self->mExpressionNode=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value66=sNode_clone(expression_node))));
    if(__dec_obj26) { __dec_obj26 = come_decrement_ref_count(__dec_obj26, ((struct sNode*)__dec_obj26)->finalize, ((struct sNode*)__dec_obj26)->_protocol_obj, 0,0,0); }
    if(right_value66 && right_value66 != __result_obj__) { right_value66 = come_decrement_ref_count(right_value66, ((struct sNode*)right_value66)->finalize, ((struct sNode*)right_value66)->_protocol_obj, 1, 0, 0); } 
    __dec_obj27=self->mIfBlock;
    self->mIfBlock=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value67=sBlock_clone(if_block))));
    if(__dec_obj27) { come_call_finalizer(sBlock_finalize,__dec_obj27, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value67 && right_value67 != __result_obj__) { come_call_finalizer(sBlock_finalize,right_value67, (void*)0, (void*)0, 0, 1, 0, 0); }
    __result75__ = __result_obj__ = self;
    if(self) { come_call_finalizer(sOrStatmentNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(expression_node) { expression_node = come_decrement_ref_count(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 1, 0); } 
    return __result75__;
    if(self) { come_call_finalizer(sOrStatmentNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(expression_node) { expression_node = come_decrement_ref_count(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 1, 0); } 
}

_Bool sOrStatmentNode_terminated(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __result76__;
memset(&__result_obj__, 0, sizeof(void*));
    __result76__ = (_Bool)1;
    return __result76__;
}

char* sOrStatmentNode_kind(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value68;
char* __result77__;
memset(&__result_obj__, 0, sizeof(void*));
    __result77__ = __result_obj__ = ((char*)(right_value68=__builtin_string("sOrStatmentNode")));
    return __result77__;
}

_Bool sOrStatmentNode_compile(struct sOrStatmentNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
struct sNode* expression_node_103;
_Bool _if_conditional129;
_Bool __result78__;
void* right_value69;
struct CVALUE* conditional_value_104;
struct sBlock* if_block_105;
static int num_or_conditional_106=0;
int num_or_conditional_stack_107;
_Bool __result79__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&expression_node_103, 0, sizeof(struct sNode*));
memset(&conditional_value_104, 0, sizeof(struct CVALUE*));
memset(&if_block_105, 0, sizeof(struct sBlock*));
memset(&num_or_conditional_stack_107, 0, sizeof(int));
    expression_node_103=self->mExpressionNode;
    info->without_semicolon=(_Bool)1;
    if(_if_conditional129=!node_compile(expression_node_103,info),    _if_conditional129) {
        __result78__ = (_Bool)0;
        return __result78__;
    }
    info->without_semicolon=(_Bool)0;
    conditional_value_104=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value69=get_value_from_stack(-1,info))));
    if(right_value69 && right_value69 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value69, (void*)0, (void*)0, 0, 1, 0, 0); }
    dec_stack_ptr(1,info);
    if_block_105=self->mIfBlock;
    add_come_code_at_function_head(info,"_Bool _or_conditional%d;\n",++num_or_conditional_106);
    add_come_code(info,"if(_or_conditional%d=%s,",num_or_conditional_106,conditional_value_104->c_value);
    num_or_conditional_stack_107=num_or_conditional_106;
    add_last_code_to_source_with_comma(info);
    free_right_value_objects(info,(_Bool)1);
    add_come_code(info,"_or_conditional%d != 0) {\n",num_or_conditional_stack_107);
    transpile_block(if_block_105,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0);
    add_come_code(info,"}\n");
    transpiler_clear_last_code(info);
    __result79__ = (_Bool)1;
    if(conditional_value_104) { come_call_finalizer(CVALUE_finalize,conditional_value_104, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result79__;
    if(conditional_value_104) { come_call_finalizer(CVALUE_finalize,conditional_value_104, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sOrStatmentNode_sline(struct sOrStatmentNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
int __result80__;
memset(&__result_obj__, 0, sizeof(void*));
    __result80__ = self->sline;
    return __result80__;
}

char* sOrStatmentNode_sname(struct sOrStatmentNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value70;
char* __result81__;
memset(&__result_obj__, 0, sizeof(void*));
    __result81__ = __result_obj__ = ((char*)(right_value70=__builtin_string(self->sname)));
    return __result81__;
}

struct sAndStatmentNode* sAndStatmentNode_initialize(struct sAndStatmentNode* self, struct sNode* expression_node, struct sBlock* if_block, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value71;
char* __dec_obj28;
void* right_value72;
struct sNode* __dec_obj29;
void* right_value73;
struct sBlock* __dec_obj30;
struct sAndStatmentNode* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj28=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value71=__builtin_string(info->sname))));
    if(__dec_obj28) { __dec_obj28 = come_decrement_ref_count(__dec_obj28, (void*)0, (void*)0, 0,0,0); }
    if(right_value71 && right_value71 != __result_obj__) { right_value71 = come_decrement_ref_count(right_value71, (void*)0, (void*)0, 1, 0, 0); }
    __dec_obj29=self->mExpressionNode;
    self->mExpressionNode=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value72=sNode_clone(expression_node))));
    if(__dec_obj29) { __dec_obj29 = come_decrement_ref_count(__dec_obj29, ((struct sNode*)__dec_obj29)->finalize, ((struct sNode*)__dec_obj29)->_protocol_obj, 0,0,0); }
    if(right_value72 && right_value72 != __result_obj__) { right_value72 = come_decrement_ref_count(right_value72, ((struct sNode*)right_value72)->finalize, ((struct sNode*)right_value72)->_protocol_obj, 1, 0, 0); } 
    __dec_obj30=self->mIfBlock;
    self->mIfBlock=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value73=sBlock_clone(if_block))));
    if(__dec_obj30) { come_call_finalizer(sBlock_finalize,__dec_obj30, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value73 && right_value73 != __result_obj__) { come_call_finalizer(sBlock_finalize,right_value73, (void*)0, (void*)0, 0, 1, 0, 0); }
    __result82__ = __result_obj__ = self;
    if(self) { come_call_finalizer(sAndStatmentNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(expression_node) { expression_node = come_decrement_ref_count(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 1, 0); } 
    return __result82__;
    if(self) { come_call_finalizer(sAndStatmentNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(expression_node) { expression_node = come_decrement_ref_count(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 1, 0); } 
}

_Bool sAndStatmentNode_terminated(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __result83__;
memset(&__result_obj__, 0, sizeof(void*));
    __result83__ = (_Bool)1;
    return __result83__;
}

char* sAndStatmentNode_kind(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value74;
char* __result84__;
memset(&__result_obj__, 0, sizeof(void*));
    __result84__ = __result_obj__ = ((char*)(right_value74=__builtin_string("sAndStatmentNode")));
    return __result84__;
}

_Bool sAndStatmentNode_compile(struct sAndStatmentNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
struct sNode* expression_node_108;
_Bool _if_conditional133;
_Bool __result85__;
void* right_value75;
struct CVALUE* conditional_value_109;
struct sBlock* if_block_110;
static int num_and_conditional_111=0;
int num_and_conditional_stack_112;
_Bool __result86__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&expression_node_108, 0, sizeof(struct sNode*));
memset(&conditional_value_109, 0, sizeof(struct CVALUE*));
memset(&if_block_110, 0, sizeof(struct sBlock*));
memset(&num_and_conditional_stack_112, 0, sizeof(int));
    expression_node_108=self->mExpressionNode;
    info->without_semicolon=(_Bool)1;
    if(_if_conditional133=!node_compile(expression_node_108,info),    _if_conditional133) {
        __result85__ = (_Bool)0;
        return __result85__;
    }
    info->without_semicolon=(_Bool)0;
    conditional_value_109=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value75=get_value_from_stack(-1,info))));
    if(right_value75 && right_value75 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0, 0); }
    dec_stack_ptr(1,info);
    if_block_110=self->mIfBlock;
    add_come_code_at_function_head(info,"_Bool _and_conditional%d;\n",++num_and_conditional_111);
    add_come_code(info,"if(_and_conditional%d=%s,",num_and_conditional_111,conditional_value_109->c_value);
    num_and_conditional_stack_112=num_and_conditional_111;
    add_last_code_to_source_with_comma(info);
    free_right_value_objects(info,(_Bool)1);
    add_come_code(info,"_and_conditional%d == 0) {\n",num_and_conditional_stack_112);
    transpile_block(if_block_110,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0);
    add_come_code(info,"}\n");
    transpiler_clear_last_code(info);
    __result86__ = (_Bool)1;
    if(conditional_value_109) { come_call_finalizer(CVALUE_finalize,conditional_value_109, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result86__;
    if(conditional_value_109) { come_call_finalizer(CVALUE_finalize,conditional_value_109, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sAndStatmentNode_sline(struct sAndStatmentNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
int __result87__;
memset(&__result_obj__, 0, sizeof(void*));
    __result87__ = self->sline;
    return __result87__;
}

char* sAndStatmentNode_sname(struct sAndStatmentNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value76;
char* __result88__;
memset(&__result_obj__, 0, sizeof(void*));
    __result88__ = __result_obj__ = ((char*)(right_value76=__builtin_string(self->sname)));
    return __result88__;
}

struct sNode* parse_if_method_call(struct sNode* expression_node, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value77;
char* sname_113;
int sline_114;
void* right_value78;
struct sBlock* if_block_115;
void* right_value79;
void* right_value80;
struct list$1sNodeph* elif_expression_nodes_116;
void* right_value81;
void* right_value82;
struct list$1sBlockph* elif_blocks_117;
int elif_num_118;
struct sBlock* else_block_119;
_Bool _while_condtional18;
char* saved_p_120;
int saved_sline_121;
_Bool _if_conditional134;
void* right_value83;
char* buf_123;
_Bool _if_conditional137;
_Bool _if_conditional138;
void* right_value84;
void* right_value85;
struct sNode* expression_node_125;
void* right_value89;
void* right_value90;
struct sBlock* elif_block_129;
void* right_value94;
struct sBlock* __dec_obj37;
void* right_value95;
void* right_value96;
struct sNode* _inf_value1;
struct sIfNode* _inf_obj_value1;
void* right_value104;
struct sNode* result_134;
struct sNode* __result97__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&sname_113, 0, sizeof(char*));
memset(&sline_114, 0, sizeof(int));
memset(&if_block_115, 0, sizeof(struct sBlock*));
memset(&elif_expression_nodes_116, 0, sizeof(struct list$1sNodeph*));
memset(&elif_blocks_117, 0, sizeof(struct list$1sBlockph*));
memset(&elif_num_118, 0, sizeof(int));
memset(&else_block_119, 0, sizeof(struct sBlock*));
memset(&saved_p_120, 0, sizeof(char*));
memset(&saved_sline_121, 0, sizeof(int));
memset(&buf_123, 0, sizeof(char*));
memset(&expression_node_125, 0, sizeof(struct sNode*));
memset(&elif_block_129, 0, sizeof(struct sBlock*));
memset(&result_134, 0, sizeof(struct sNode*));
    sname_113=(char*)come_increment_ref_count(((char*)(right_value77=string_clone(info->sname))));
    if(right_value77 && right_value77 != __result_obj__) { right_value77 = come_decrement_ref_count(right_value77, (void*)0, (void*)0, 1, 0, 0); }
    sline_114=info->sline;
    parse_sharp_v5(info);
    if_block_115=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value78=parse_block(info,(_Bool)0))));
    if(right_value78 && right_value78 != __result_obj__) { come_call_finalizer(sBlock_finalize,right_value78, (void*)0, (void*)0, 0, 1, 0, 0); }
    elif_expression_nodes_116=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value80=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value79=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "08if.c", 307))))))));
    if(right_value79 && right_value79 != __result_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value79, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value80 && right_value80 != __result_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value80, (void*)0, (void*)0, 0, 1, 0, 0); }
    elif_blocks_117=(struct list$1sBlockph*)come_increment_ref_count(((struct list$1sBlockph*)(right_value82=list$1sBlockph_initialize((struct list$1sBlockph*)come_increment_ref_count(((struct list$1sBlockph*)(right_value81=(struct list$1sBlockph*)come_calloc(1, sizeof(struct list$1sBlockph)*(1), "08if.c", 309))))))));
    if(right_value81 && right_value81 != __result_obj__) { come_call_finalizer(list$1sBlockphp_finalize,right_value81, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value82 && right_value82 != __result_obj__) { come_call_finalizer(list$1sBlockphp_finalize,right_value82, (void*)0, (void*)0, 0, 1, 0, 0); }
    elif_num_118=0;
    else_block_119=((void*)0);
    while(_while_condtional18=1,    _while_condtional18) {
        saved_p_120=info->p;
        saved_sline_121=info->sline;
        parse_sharp_v5(info);
        if(_if_conditional134=!xisalpha(*info->p),        _if_conditional134) {
            break;
        }
        parse_sharp_v5(info);
        buf_123=(char*)come_increment_ref_count(optional$2charphbool_value(((struct optional$2charphbool*)(right_value83=parse_word(info)))));
        if(right_value83 && right_value83 != __result_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value83, (void*)0, (void*)0, 0, 1, 0, 0); }
        parse_sharp_v5(info);
        if(_if_conditional137=string_operator_equals(buf_123,"else"),        _if_conditional137) {
            if(_if_conditional138=parsecmp("if",info),            _if_conditional138) {
                parse_sharp_v5(info);
                info->p+=strlen("if");
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                optional$2intbool_value(((struct optional$2intbool*)(right_value84=expected_next_character(40,info))));
                if(right_value84 && right_value84 != __result_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value84, (void*)0, (void*)0, 0, 1, 0, 0); }
                expression_node_125=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value85=expression_v13(info))));
                if(right_value85 && right_value85 != __result_obj__) { right_value85 = come_decrement_ref_count(right_value85, ((struct sNode*)right_value85)->finalize, ((struct sNode*)right_value85)->_protocol_obj, 1, 0, 0); } 
                list$1sNodeph_push_back(elif_expression_nodes_116,(struct sNode*)come_increment_ref_count(expression_node_125));
                optional$2intbool_value(((struct optional$2intbool*)(right_value89=expected_next_character(41,info))));
                if(right_value89 && right_value89 != __result_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value89, (void*)0, (void*)0, 0, 1, 0, 0); }
                parse_sharp_v5(info);
                elif_block_129=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value90=parse_block(info,(_Bool)0))));
                if(right_value90 && right_value90 != __result_obj__) { come_call_finalizer(sBlock_finalize,right_value90, (void*)0, (void*)0, 0, 1, 0, 0); }
                list$1sBlockph_push_back(elif_blocks_117,(struct sBlock*)come_increment_ref_count(elif_block_129));
                elif_num_118++;
                if(expression_node_125) { expression_node_125 = come_decrement_ref_count(expression_node_125, ((struct sNode*)expression_node_125)->finalize, ((struct sNode*)expression_node_125)->_protocol_obj, 0, 0, 0); } 
                if(elif_block_129) { come_call_finalizer(sBlock_finalize,elif_block_129, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            else {
                __dec_obj37=else_block_119;
                else_block_119=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value94=parse_block(info,(_Bool)0))));
                if(__dec_obj37) { come_call_finalizer(sBlock_finalize,__dec_obj37, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(right_value94 && right_value94 != __result_obj__) { come_call_finalizer(sBlock_finalize,right_value94, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(buf_123) { buf_123 = come_decrement_ref_count(buf_123, (void*)0, (void*)0, 0, 0, 0); }
                break;
            }
        }
        else {
            info->p=saved_p_120;
            info->sline=saved_sline_121;
            if(buf_123) { buf_123 = come_decrement_ref_count(buf_123, (void*)0, (void*)0, 0, 0, 0); }
            break;
        }
        if(buf_123) { buf_123 = come_decrement_ref_count(buf_123, (void*)0, (void*)0, 0, 0, 0); }
    }
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 364);
    _inf_obj_value1=come_increment_ref_count(((struct sIfNode*)(right_value96=sIfNode_initialize((struct sIfNode*)come_increment_ref_count(((struct sIfNode*)(right_value95=(struct sIfNode*)come_calloc(1, sizeof(struct sIfNode)*(1), "08if.c", 364)))),(struct sNode*)come_increment_ref_count(expression_node),if_block_115,elif_expression_nodes_116,elif_blocks_117,elif_num_118,else_block_119,info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sIfNode_finalize;
    _inf_value1->clone=(void*)sIfNode_clone;
    _inf_value1->compile=(void*)sIfNode_compile;
    _inf_value1->sline=(void*)sIfNode_sline;
    _inf_value1->sname=(void*)sIfNode_sname;
    _inf_value1->terminated=(void*)sIfNode_terminated;
    _inf_value1->kind=(void*)sIfNode_kind;
    result_134=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value104=_inf_value1)));
    if(right_value95 && right_value95 != __result_obj__) { come_call_finalizer(sIfNode_finalize,right_value95, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value96 && right_value96 != __result_obj__) { come_call_finalizer(sIfNode_finalize,right_value96, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value104 && right_value104 != __result_obj__) { right_value104 = come_decrement_ref_count(right_value104, ((struct sNode*)right_value104)->finalize, ((struct sNode*)right_value104)->_protocol_obj, 1, 0, 0); } 
    __result97__ = __result_obj__ = result_134;
    if(expression_node) { expression_node = come_decrement_ref_count(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 1, 0); } 
    if(sname_113) { sname_113 = come_decrement_ref_count(sname_113, (void*)0, (void*)0, 0, 0, 0); }
    if(if_block_115) { come_call_finalizer(sBlock_finalize,if_block_115, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(elif_expression_nodes_116) { come_call_finalizer(list$1sNodephp_finalize,elif_expression_nodes_116, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(elif_blocks_117) { come_call_finalizer(list$1sBlockphp_finalize,elif_blocks_117, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(else_block_119) { come_call_finalizer(sBlock_finalize,else_block_119, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(result_134) { result_134 = come_decrement_ref_count(result_134, ((struct sNode*)result_134)->finalize, ((struct sNode*)result_134)->_protocol_obj, 0, 1, 0); } 
    return __result97__;
    if(expression_node) { expression_node = come_decrement_ref_count(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 1, 0); } 
    if(sname_113) { sname_113 = come_decrement_ref_count(sname_113, (void*)0, (void*)0, 0, 0, 0); }
    if(if_block_115) { come_call_finalizer(sBlock_finalize,if_block_115, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(elif_expression_nodes_116) { come_call_finalizer(list$1sNodephp_finalize,elif_expression_nodes_116, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(elif_blocks_117) { come_call_finalizer(list$1sBlockphp_finalize,elif_blocks_117, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(else_block_119) { come_call_finalizer(sBlock_finalize,else_block_119, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(result_134) { result_134 = come_decrement_ref_count(result_134, ((struct sNode*)result_134)->finalize, ((struct sNode*)result_134)->_protocol_obj, 0, 0, 0); } 
}

static char* optional$2charphbool_value(struct optional$2charphbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional135;
char* default_value_122;
char* __result89__;
char* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_122, 0, sizeof(char*));
            if(_if_conditional135=self==((void*)0),            _if_conditional135) {
                memset(&default_value_122,0,sizeof(char*));
                __result89__ = __result_obj__ = default_value_122;
                return __result89__;
            }
            else {
                __result90__ = __result_obj__ = self->v1;
                return __result90__;
            }
}

static void optional$2charphboolp_finalize(struct optional$2charphbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional136;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional136=self!=((void*)0)&&self->v1!=((void*)0),            _if_conditional136) {
                if(self->v1) { self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, 0); }
            }
}

static int optional$2intbool_value(struct optional$2intbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional139;
int default_value_124;
int __result91__;
int __result92__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_124, 0, sizeof(int));
                    if(_if_conditional139=self==((void*)0),                    _if_conditional139) {
                        memset(&default_value_124,0,sizeof(int));
                        __result91__ = default_value_124;
                        return __result91__;
                    }
                    else {
                        __result92__ = self->v1;
                        return __result92__;
                    }
}

static void optional$2intboolp_finalize(struct optional$2intbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional140;
void* right_value86;
struct list_item$1sNodeph* litem_126;
struct sNode* __dec_obj31;
_Bool _if_conditional141;
void* right_value87;
struct list_item$1sNodeph* litem_127;
struct sNode* __dec_obj32;
void* right_value88;
struct list_item$1sNodeph* litem_128;
struct sNode* __dec_obj33;
struct list$1sNodeph* __result93__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&litem_126, 0, sizeof(struct list_item$1sNodeph*));
memset(&litem_127, 0, sizeof(struct list_item$1sNodeph*));
memset(&litem_128, 0, sizeof(struct list_item$1sNodeph*));
                    if(_if_conditional140=self->len==0,                    _if_conditional140) {
                        litem_126=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value86=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 277))));
                        if(right_value86 && right_value86 != __result_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value86, (void*)0, (void*)0, 0, 1, 0, 0); }
                        litem_126->prev=((void*)0);
                        litem_126->next=((void*)0);
                        __dec_obj31=litem_126->item;
                        litem_126->item=(struct sNode*)come_increment_ref_count(item);
                        if(__dec_obj31) { __dec_obj31 = come_decrement_ref_count(__dec_obj31, ((struct sNode*)__dec_obj31)->finalize, ((struct sNode*)__dec_obj31)->_protocol_obj, 0,0,0); }
                        self->tail=litem_126;
                        self->head=litem_126;
                    }
                    else {
                        if(_if_conditional141=self->len==1,                        _if_conditional141) {
                            litem_127=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value87=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 287))));
                            if(right_value87 && right_value87 != __result_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value87, (void*)0, (void*)0, 0, 1, 0, 0); }
                            litem_127->prev=self->head;
                            litem_127->next=((void*)0);
                            __dec_obj32=litem_127->item;
                            litem_127->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0,0,0); }
                            self->tail=litem_127;
                            self->head->next=litem_127;
                        }
                        else {
                            litem_128=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value88=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 297))));
                            if(right_value88 && right_value88 != __result_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value88, (void*)0, (void*)0, 0, 1, 0, 0); }
                            litem_128->prev=self->tail;
                            litem_128->next=((void*)0);
                            __dec_obj33=litem_128->item;
                            litem_128->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count(__dec_obj33, ((struct sNode*)__dec_obj33)->finalize, ((struct sNode*)__dec_obj33)->_protocol_obj, 0,0,0); }
                            self->tail->next=litem_128;
                            self->tail=litem_128;
                        }
                    }
                    self->len++;
                    __result93__ = __result_obj__ = self;
                    if(item) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
                    return __result93__;
                    if(item) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
}

static struct list$1sBlockph* list$1sBlockph_push_back(struct list$1sBlockph* self, struct sBlock* item){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional142;
void* right_value91;
struct list_item$1sBlockph* litem_130;
struct sBlock* __dec_obj34;
_Bool _if_conditional143;
void* right_value92;
struct list_item$1sBlockph* litem_131;
struct sBlock* __dec_obj35;
void* right_value93;
struct list_item$1sBlockph* litem_132;
struct sBlock* __dec_obj36;
struct list$1sBlockph* __result94__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&litem_130, 0, sizeof(struct list_item$1sBlockph*));
memset(&litem_131, 0, sizeof(struct list_item$1sBlockph*));
memset(&litem_132, 0, sizeof(struct list_item$1sBlockph*));
                    if(_if_conditional142=self->len==0,                    _if_conditional142) {
                        litem_130=(struct list_item$1sBlockph*)come_increment_ref_count(((struct list_item$1sBlockph*)(right_value91=(struct list_item$1sBlockph*)come_calloc(1, sizeof(struct list_item$1sBlockph)*(1), "./comelang2.h", 277))));
                        if(right_value91 && right_value91 != __result_obj__) { come_call_finalizer(list_item$1sBlockphp_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0, 0); }
                        litem_130->prev=((void*)0);
                        litem_130->next=((void*)0);
                        __dec_obj34=litem_130->item;
                        litem_130->item=(struct sBlock*)come_increment_ref_count(item);
                        if(__dec_obj34) { come_call_finalizer(sBlock_finalize,__dec_obj34, (void*)0, (void*)0, 0, 0, 0, 0); }
                        self->tail=litem_130;
                        self->head=litem_130;
                    }
                    else {
                        if(_if_conditional143=self->len==1,                        _if_conditional143) {
                            litem_131=(struct list_item$1sBlockph*)come_increment_ref_count(((struct list_item$1sBlockph*)(right_value92=(struct list_item$1sBlockph*)come_calloc(1, sizeof(struct list_item$1sBlockph)*(1), "./comelang2.h", 287))));
                            if(right_value92 && right_value92 != __result_obj__) { come_call_finalizer(list_item$1sBlockphp_finalize,right_value92, (void*)0, (void*)0, 0, 1, 0, 0); }
                            litem_131->prev=self->head;
                            litem_131->next=((void*)0);
                            __dec_obj35=litem_131->item;
                            litem_131->item=(struct sBlock*)come_increment_ref_count(item);
                            if(__dec_obj35) { come_call_finalizer(sBlock_finalize,__dec_obj35, (void*)0, (void*)0, 0, 0, 0, 0); }
                            self->tail=litem_131;
                            self->head->next=litem_131;
                        }
                        else {
                            litem_132=(struct list_item$1sBlockph*)come_increment_ref_count(((struct list_item$1sBlockph*)(right_value93=(struct list_item$1sBlockph*)come_calloc(1, sizeof(struct list_item$1sBlockph)*(1), "./comelang2.h", 297))));
                            if(right_value93 && right_value93 != __result_obj__) { come_call_finalizer(list_item$1sBlockphp_finalize,right_value93, (void*)0, (void*)0, 0, 1, 0, 0); }
                            litem_132->prev=self->tail;
                            litem_132->next=((void*)0);
                            __dec_obj36=litem_132->item;
                            litem_132->item=(struct sBlock*)come_increment_ref_count(item);
                            if(__dec_obj36) { come_call_finalizer(sBlock_finalize,__dec_obj36, (void*)0, (void*)0, 0, 0, 0, 0); }
                            self->tail->next=litem_132;
                            self->tail=litem_132;
                        }
                    }
                    self->len++;
                    __result94__ = __result_obj__ = self;
                    if(item) { come_call_finalizer(sBlock_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result94__;
                    if(item) { come_call_finalizer(sBlock_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

struct sNode* parse_elif_method_call(struct sNode* expression_node, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value105;
char* sname_135;
int sline_136;
void* right_value106;
struct sNode* expression_node2_137;
void* right_value107;
struct sBlock* if_block_138;
void* right_value108;
void* right_value109;
struct list$1sNodeph* elif_expression_nodes_139;
void* right_value110;
void* right_value111;
struct list$1sBlockph* elif_blocks_140;
int elif_num_141;
struct sBlock* else_block_142;
_Bool _while_condtional19;
char* saved_p_143;
int saved_sline_144;
_Bool _if_conditional159;
void* right_value112;
char* buf_145;
_Bool _if_conditional160;
_Bool _if_conditional161;
void* right_value113;
void* right_value114;
struct sNode* expression_node_146;
void* right_value115;
void* right_value116;
struct sBlock* elif_block_147;
void* right_value117;
struct sBlock* __dec_obj44;
void* right_value118;
void* right_value119;
struct sNode* _inf_value2;
struct sIfNode* _inf_obj_value2;
void* right_value127;
struct sNode* result_149;
struct sNode* __result100__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&sname_135, 0, sizeof(char*));
memset(&sline_136, 0, sizeof(int));
memset(&expression_node2_137, 0, sizeof(struct sNode*));
memset(&if_block_138, 0, sizeof(struct sBlock*));
memset(&elif_expression_nodes_139, 0, sizeof(struct list$1sNodeph*));
memset(&elif_blocks_140, 0, sizeof(struct list$1sBlockph*));
memset(&elif_num_141, 0, sizeof(int));
memset(&else_block_142, 0, sizeof(struct sBlock*));
memset(&saved_p_143, 0, sizeof(char*));
memset(&saved_sline_144, 0, sizeof(int));
memset(&buf_145, 0, sizeof(char*));
memset(&expression_node_146, 0, sizeof(struct sNode*));
memset(&elif_block_147, 0, sizeof(struct sBlock*));
memset(&result_149, 0, sizeof(struct sNode*));
    sname_135=(char*)come_increment_ref_count(((char*)(right_value105=string_clone(info->sname))));
    if(right_value105 && right_value105 != __result_obj__) { right_value105 = come_decrement_ref_count(right_value105, (void*)0, (void*)0, 1, 0, 0); }
    sline_136=info->sline;
    parse_sharp_v5(info);
    expression_node2_137=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value106=craete_logical_denial((struct sNode*)come_increment_ref_count(expression_node),info))));
    if(right_value106 && right_value106 != __result_obj__) { right_value106 = come_decrement_ref_count(right_value106, ((struct sNode*)right_value106)->finalize, ((struct sNode*)right_value106)->_protocol_obj, 1, 0, 0); } 
    if_block_138=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value107=parse_block(info,(_Bool)0))));
    if(right_value107 && right_value107 != __result_obj__) { come_call_finalizer(sBlock_finalize,right_value107, (void*)0, (void*)0, 0, 1, 0, 0); }
    elif_expression_nodes_139=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value109=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value108=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "08if.c", 380))))))));
    if(right_value108 && right_value108 != __result_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value108, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value109 && right_value109 != __result_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value109, (void*)0, (void*)0, 0, 1, 0, 0); }
    elif_blocks_140=(struct list$1sBlockph*)come_increment_ref_count(((struct list$1sBlockph*)(right_value111=list$1sBlockph_initialize((struct list$1sBlockph*)come_increment_ref_count(((struct list$1sBlockph*)(right_value110=(struct list$1sBlockph*)come_calloc(1, sizeof(struct list$1sBlockph)*(1), "08if.c", 382))))))));
    if(right_value110 && right_value110 != __result_obj__) { come_call_finalizer(list$1sBlockphp_finalize,right_value110, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value111 && right_value111 != __result_obj__) { come_call_finalizer(list$1sBlockphp_finalize,right_value111, (void*)0, (void*)0, 0, 1, 0, 0); }
    elif_num_141=0;
    else_block_142=((void*)0);
    while(_while_condtional19=1,    _while_condtional19) {
        saved_p_143=info->p;
        saved_sline_144=info->sline;
        parse_sharp_v5(info);
        if(_if_conditional159=!xisalpha(*info->p),        _if_conditional159) {
            break;
        }
        parse_sharp_v5(info);
        buf_145=(char*)come_increment_ref_count(optional$2charphbool_value(((struct optional$2charphbool*)(right_value112=parse_word(info)))));
        if(right_value112 && right_value112 != __result_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value112, (void*)0, (void*)0, 0, 1, 0, 0); }
        parse_sharp_v5(info);
        if(_if_conditional160=string_operator_equals(buf_145,"else"),        _if_conditional160) {
            if(_if_conditional161=parsecmp("if",info),            _if_conditional161) {
                parse_sharp_v5(info);
                info->p+=strlen("if");
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                optional$2intbool_value(((struct optional$2intbool*)(right_value113=expected_next_character(40,info))));
                if(right_value113 && right_value113 != __result_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value113, (void*)0, (void*)0, 0, 1, 0, 0); }
                expression_node_146=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value114=expression_v13(info))));
                if(right_value114 && right_value114 != __result_obj__) { right_value114 = come_decrement_ref_count(right_value114, ((struct sNode*)right_value114)->finalize, ((struct sNode*)right_value114)->_protocol_obj, 1, 0, 0); } 
                list$1sNodeph_push_back(elif_expression_nodes_139,(struct sNode*)come_increment_ref_count(expression_node_146));
                optional$2intbool_value(((struct optional$2intbool*)(right_value115=expected_next_character(41,info))));
                if(right_value115 && right_value115 != __result_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value115, (void*)0, (void*)0, 0, 1, 0, 0); }
                parse_sharp_v5(info);
                elif_block_147=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value116=parse_block(info,(_Bool)0))));
                if(right_value116 && right_value116 != __result_obj__) { come_call_finalizer(sBlock_finalize,right_value116, (void*)0, (void*)0, 0, 1, 0, 0); }
                list$1sBlockph_push_back(elif_blocks_140,(struct sBlock*)come_increment_ref_count(elif_block_147));
                elif_num_141++;
                if(expression_node_146) { expression_node_146 = come_decrement_ref_count(expression_node_146, ((struct sNode*)expression_node_146)->finalize, ((struct sNode*)expression_node_146)->_protocol_obj, 0, 0, 0); } 
                if(elif_block_147) { come_call_finalizer(sBlock_finalize,elif_block_147, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            else {
                __dec_obj44=else_block_142;
                else_block_142=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value117=parse_block(info,(_Bool)0))));
                if(__dec_obj44) { come_call_finalizer(sBlock_finalize,__dec_obj44, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(right_value117 && right_value117 != __result_obj__) { come_call_finalizer(sBlock_finalize,right_value117, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(buf_145) { buf_145 = come_decrement_ref_count(buf_145, (void*)0, (void*)0, 0, 0, 0); }
                break;
            }
        }
        else {
            info->p=saved_p_143;
            info->sline=saved_sline_144;
            if(buf_145) { buf_145 = come_decrement_ref_count(buf_145, (void*)0, (void*)0, 0, 0, 0); }
            break;
        }
        if(buf_145) { buf_145 = come_decrement_ref_count(buf_145, (void*)0, (void*)0, 0, 0, 0); }
    }
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 437);
    _inf_obj_value2=come_increment_ref_count(((struct sIfNode*)(right_value119=sIfNode_initialize((struct sIfNode*)come_increment_ref_count(((struct sIfNode*)(right_value118=(struct sIfNode*)come_calloc(1, sizeof(struct sIfNode)*(1), "08if.c", 437)))),(struct sNode*)come_increment_ref_count(expression_node2_137),if_block_138,elif_expression_nodes_139,elif_blocks_140,elif_num_141,else_block_142,info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sIfNode_finalize;
    _inf_value2->clone=(void*)sIfNode_clone;
    _inf_value2->compile=(void*)sIfNode_compile;
    _inf_value2->sline=(void*)sIfNode_sline;
    _inf_value2->sname=(void*)sIfNode_sname;
    _inf_value2->terminated=(void*)sIfNode_terminated;
    _inf_value2->kind=(void*)sIfNode_kind;
    result_149=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value127=_inf_value2)));
    if(right_value118 && right_value118 != __result_obj__) { come_call_finalizer(sIfNode_finalize,right_value118, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value119 && right_value119 != __result_obj__) { come_call_finalizer(sIfNode_finalize,right_value119, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value127 && right_value127 != __result_obj__) { right_value127 = come_decrement_ref_count(right_value127, ((struct sNode*)right_value127)->finalize, ((struct sNode*)right_value127)->_protocol_obj, 1, 0, 0); } 
    __result100__ = __result_obj__ = result_149;
    if(expression_node) { expression_node = come_decrement_ref_count(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 1, 0); } 
    if(sname_135) { sname_135 = come_decrement_ref_count(sname_135, (void*)0, (void*)0, 0, 0, 0); }
    if(expression_node2_137) { expression_node2_137 = come_decrement_ref_count(expression_node2_137, ((struct sNode*)expression_node2_137)->finalize, ((struct sNode*)expression_node2_137)->_protocol_obj, 0, 0, 0); } 
    if(if_block_138) { come_call_finalizer(sBlock_finalize,if_block_138, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(elif_expression_nodes_139) { come_call_finalizer(list$1sNodephp_finalize,elif_expression_nodes_139, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(elif_blocks_140) { come_call_finalizer(list$1sBlockphp_finalize,elif_blocks_140, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(else_block_142) { come_call_finalizer(sBlock_finalize,else_block_142, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(result_149) { result_149 = come_decrement_ref_count(result_149, ((struct sNode*)result_149)->finalize, ((struct sNode*)result_149)->_protocol_obj, 0, 1, 0); } 
    return __result100__;
    if(expression_node) { expression_node = come_decrement_ref_count(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 1, 0); } 
    if(sname_135) { sname_135 = come_decrement_ref_count(sname_135, (void*)0, (void*)0, 0, 0, 0); }
    if(expression_node2_137) { expression_node2_137 = come_decrement_ref_count(expression_node2_137, ((struct sNode*)expression_node2_137)->finalize, ((struct sNode*)expression_node2_137)->_protocol_obj, 0, 0, 0); } 
    if(if_block_138) { come_call_finalizer(sBlock_finalize,if_block_138, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(elif_expression_nodes_139) { come_call_finalizer(list$1sNodephp_finalize,elif_expression_nodes_139, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(elif_blocks_140) { come_call_finalizer(list$1sBlockphp_finalize,elif_blocks_140, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(else_block_142) { come_call_finalizer(sBlock_finalize,else_block_142, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(result_149) { result_149 = come_decrement_ref_count(result_149, ((struct sNode*)result_149)->finalize, ((struct sNode*)result_149)->_protocol_obj, 0, 0, 0); } 
}

struct sNode* string_node_v8(char* buf, char* head, int head_sline, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional177;
void* right_value128;
char* sname_150;
int sline_151;
void* right_value129;
void* right_value130;
struct sNode* expression_node_152;
void* right_value131;
void* right_value132;
struct sBlock* if_block_153;
void* right_value133;
void* right_value134;
struct list$1sNodeph* elif_expression_nodes_154;
void* right_value135;
void* right_value136;
struct list$1sBlockph* elif_blocks_155;
int elif_num_156;
struct sBlock* else_block_157;
_Bool _while_condtional20;
char* saved_p_158;
int saved_sline_159;
_Bool _if_conditional178;
void* right_value137;
char* buf_160;
_Bool _if_conditional179;
_Bool _if_conditional180;
void* right_value138;
void* right_value139;
struct sNode* expression_node_161;
void* right_value140;
void* right_value141;
struct sBlock* elif_block_162;
void* right_value142;
struct sBlock* __dec_obj51;
void* right_value143;
void* right_value144;
struct sNode* _inf_value3;
struct sIfNode* _inf_obj_value3;
void* right_value152;
struct sNode* result_164;
void* right_value153;
void* right_value154;
struct sNode* __result103__;
void* right_value155;
struct __current_stack1__ __current_stack1__;
void* right_value158;
struct sNode* result_165;
void* right_value159;
void* right_value160;
struct sNode* __result107__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&sname_150, 0, sizeof(char*));
memset(&sline_151, 0, sizeof(int));
memset(&expression_node_152, 0, sizeof(struct sNode*));
memset(&if_block_153, 0, sizeof(struct sBlock*));
memset(&elif_expression_nodes_154, 0, sizeof(struct list$1sNodeph*));
memset(&elif_blocks_155, 0, sizeof(struct list$1sBlockph*));
memset(&elif_num_156, 0, sizeof(int));
memset(&else_block_157, 0, sizeof(struct sBlock*));
memset(&saved_p_158, 0, sizeof(char*));
memset(&saved_sline_159, 0, sizeof(int));
memset(&buf_160, 0, sizeof(char*));
memset(&expression_node_161, 0, sizeof(struct sNode*));
memset(&elif_block_162, 0, sizeof(struct sBlock*));
memset(&result_164, 0, sizeof(struct sNode*));
memset(&__current_stack1__, 0, sizeof(struct __current_stack1__));
memset(&result_165, 0, sizeof(struct sNode*));
    if(_if_conditional177=charp_operator_equals(buf,"if"),    _if_conditional177) {
        sname_150=(char*)come_increment_ref_count(((char*)(right_value128=string_clone(info->sname))));
        if(right_value128 && right_value128 != __result_obj__) { right_value128 = come_decrement_ref_count(right_value128, (void*)0, (void*)0, 1, 0, 0); }
        sline_151=info->sline;
        parse_sharp_v5(info);
        optional$2intbool_value(((struct optional$2intbool*)(right_value129=expected_next_character(40,info))));
        if(right_value129 && right_value129 != __result_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value129, (void*)0, (void*)0, 0, 1, 0, 0); }
        expression_node_152=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value130=expression_v13(info))));
        if(right_value130 && right_value130 != __result_obj__) { right_value130 = come_decrement_ref_count(right_value130, ((struct sNode*)right_value130)->finalize, ((struct sNode*)right_value130)->_protocol_obj, 1, 0, 0); } 
        optional$2intbool_value(((struct optional$2intbool*)(right_value131=expected_next_character(41,info))));
        if(right_value131 && right_value131 != __result_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value131, (void*)0, (void*)0, 0, 1, 0, 0); }
        parse_sharp_v5(info);
        if_block_153=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value132=parse_block(info,(_Bool)0))));
        if(right_value132 && right_value132 != __result_obj__) { come_call_finalizer(sBlock_finalize,right_value132, (void*)0, (void*)0, 0, 1, 0, 0); }
        elif_expression_nodes_154=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value134=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value133=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "08if.c", 460))))))));
        if(right_value133 && right_value133 != __result_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value133, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value134 && right_value134 != __result_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value134, (void*)0, (void*)0, 0, 1, 0, 0); }
        elif_blocks_155=(struct list$1sBlockph*)come_increment_ref_count(((struct list$1sBlockph*)(right_value136=list$1sBlockph_initialize((struct list$1sBlockph*)come_increment_ref_count(((struct list$1sBlockph*)(right_value135=(struct list$1sBlockph*)come_calloc(1, sizeof(struct list$1sBlockph)*(1), "08if.c", 462))))))));
        if(right_value135 && right_value135 != __result_obj__) { come_call_finalizer(list$1sBlockphp_finalize,right_value135, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value136 && right_value136 != __result_obj__) { come_call_finalizer(list$1sBlockphp_finalize,right_value136, (void*)0, (void*)0, 0, 1, 0, 0); }
        elif_num_156=0;
        else_block_157=((void*)0);
        while(_while_condtional20=1,        _while_condtional20) {
            saved_p_158=info->p;
            saved_sline_159=info->sline;
            parse_sharp_v5(info);
            if(_if_conditional178=!xisalpha(*info->p),            _if_conditional178) {
                break;
            }
            parse_sharp_v5(info);
            buf_160=(char*)come_increment_ref_count(optional$2charphbool_value(((struct optional$2charphbool*)(right_value137=parse_word(info)))));
            if(right_value137 && right_value137 != __result_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value137, (void*)0, (void*)0, 0, 1, 0, 0); }
            parse_sharp_v5(info);
            if(_if_conditional179=string_operator_equals(buf_160,"else"),            _if_conditional179) {
                if(_if_conditional180=parsecmp("if",info),                _if_conditional180) {
                    parse_sharp_v5(info);
                    info->p+=strlen("if");
                    skip_spaces_and_lf(info);
                    parse_sharp_v5(info);
                    optional$2intbool_value(((struct optional$2intbool*)(right_value138=expected_next_character(40,info))));
                    if(right_value138 && right_value138 != __result_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value138, (void*)0, (void*)0, 0, 1, 0, 0); }
                    expression_node_161=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value139=expression_v13(info))));
                    if(right_value139 && right_value139 != __result_obj__) { right_value139 = come_decrement_ref_count(right_value139, ((struct sNode*)right_value139)->finalize, ((struct sNode*)right_value139)->_protocol_obj, 1, 0, 0); } 
                    list$1sNodeph_push_back(elif_expression_nodes_154,(struct sNode*)come_increment_ref_count(expression_node_161));
                    optional$2intbool_value(((struct optional$2intbool*)(right_value140=expected_next_character(41,info))));
                    if(right_value140 && right_value140 != __result_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value140, (void*)0, (void*)0, 0, 1, 0, 0); }
                    parse_sharp_v5(info);
                    elif_block_162=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value141=parse_block(info,(_Bool)0))));
                    if(right_value141 && right_value141 != __result_obj__) { come_call_finalizer(sBlock_finalize,right_value141, (void*)0, (void*)0, 0, 1, 0, 0); }
                    list$1sBlockph_push_back(elif_blocks_155,(struct sBlock*)come_increment_ref_count(elif_block_162));
                    elif_num_156++;
                    if(expression_node_161) { expression_node_161 = come_decrement_ref_count(expression_node_161, ((struct sNode*)expression_node_161)->finalize, ((struct sNode*)expression_node_161)->_protocol_obj, 0, 0, 0); } 
                    if(elif_block_162) { come_call_finalizer(sBlock_finalize,elif_block_162, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                else {
                    __dec_obj51=else_block_157;
                    else_block_157=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value142=parse_block(info,(_Bool)0))));
                    if(__dec_obj51) { come_call_finalizer(sBlock_finalize,__dec_obj51, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(right_value142 && right_value142 != __result_obj__) { come_call_finalizer(sBlock_finalize,right_value142, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(buf_160) { buf_160 = come_decrement_ref_count(buf_160, (void*)0, (void*)0, 0, 0, 0); }
                    break;
                }
            }
            else {
                info->p=saved_p_158;
                info->sline=saved_sline_159;
                if(buf_160) { buf_160 = come_decrement_ref_count(buf_160, (void*)0, (void*)0, 0, 0, 0); }
                break;
            }
            if(buf_160) { buf_160 = come_decrement_ref_count(buf_160, (void*)0, (void*)0, 0, 0, 0); }
        }
        _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 517);
        _inf_obj_value3=come_increment_ref_count(((struct sIfNode*)(right_value144=sIfNode_initialize((struct sIfNode*)come_increment_ref_count(((struct sIfNode*)(right_value143=(struct sIfNode*)come_calloc(1, sizeof(struct sIfNode)*(1), "08if.c", 517)))),(struct sNode*)come_increment_ref_count(expression_node_152),if_block_153,elif_expression_nodes_154,elif_blocks_155,elif_num_156,else_block_157,info))));
        _inf_value3->_protocol_obj=_inf_obj_value3;
        _inf_value3->finalize=(void*)sIfNode_finalize;
        _inf_value3->clone=(void*)sIfNode_clone;
        _inf_value3->compile=(void*)sIfNode_compile;
        _inf_value3->sline=(void*)sIfNode_sline;
        _inf_value3->sname=(void*)sIfNode_sname;
        _inf_value3->terminated=(void*)sIfNode_terminated;
        _inf_value3->kind=(void*)sIfNode_kind;
        result_164=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value152=_inf_value3)));
        if(right_value143 && right_value143 != __result_obj__) { come_call_finalizer(sIfNode_finalize,right_value143, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value144 && right_value144 != __result_obj__) { come_call_finalizer(sIfNode_finalize,right_value144, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value152 && right_value152 != __result_obj__) { right_value152 = come_decrement_ref_count(right_value152, ((struct sNode*)right_value152)->finalize, ((struct sNode*)right_value152)->_protocol_obj, 1, 0, 0); } 
        __result103__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value154=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value153=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "08if.c", 519)))),(struct sNode*)come_increment_ref_count(result_164),(_Bool)1)));
        if(sname_150) { sname_150 = come_decrement_ref_count(sname_150, (void*)0, (void*)0, 0, 0, 0); }
        if(expression_node_152) { expression_node_152 = come_decrement_ref_count(expression_node_152, ((struct sNode*)expression_node_152)->finalize, ((struct sNode*)expression_node_152)->_protocol_obj, 0, 0, 0); } 
        if(if_block_153) { come_call_finalizer(sBlock_finalize,if_block_153, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(elif_expression_nodes_154) { come_call_finalizer(list$1sNodephp_finalize,elif_expression_nodes_154, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(elif_blocks_155) { come_call_finalizer(list$1sBlockphp_finalize,elif_blocks_155, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(else_block_157) { come_call_finalizer(sBlock_finalize,else_block_157, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(result_164) { result_164 = come_decrement_ref_count(result_164, ((struct sNode*)result_164)->finalize, ((struct sNode*)result_164)->_protocol_obj, 0, 0, 0); } 
        if(right_value153 && right_value153 != __result_obj__) { right_value153 = come_decrement_ref_count(right_value153, (void*)0, (void*)0, 1, 0, 0); }
        return __result103__;
        if(sname_150) { sname_150 = come_decrement_ref_count(sname_150, (void*)0, (void*)0, 0, 0, 0); }
        if(expression_node_152) { expression_node_152 = come_decrement_ref_count(expression_node_152, ((struct sNode*)expression_node_152)->finalize, ((struct sNode*)expression_node_152)->_protocol_obj, 0, 0, 0); } 
        if(if_block_153) { come_call_finalizer(sBlock_finalize,if_block_153, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(elif_expression_nodes_154) { come_call_finalizer(list$1sNodephp_finalize,elif_expression_nodes_154, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(elif_blocks_155) { come_call_finalizer(list$1sBlockphp_finalize,elif_blocks_155, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(else_block_157) { come_call_finalizer(sBlock_finalize,else_block_157, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(result_164) { result_164 = come_decrement_ref_count(result_164, ((struct sNode*)result_164)->finalize, ((struct sNode*)result_164)->_protocol_obj, 0, 0, 0); } 
    }
    __current_stack1__.buf = &buf;
    __current_stack1__.head = &head;
    __current_stack1__.head_sline = &head_sline;
    __current_stack1__.info = &info;
    result_165=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value158=optional$2sNodephbool_catch(((struct optional$2sNodephbool*)(right_value155=string_node_v7(buf,head,head_sline,info))),&__current_stack1__,(void*)method_block1_08ifc))));
                        if(__current_stack1__.__method_block_result_kind__ == 3)
                    {
                        return (struct sNode*)__current_stack1__.__method_block_return_value__;
                    }
    if(right_value155 && right_value155 != __result_obj__) { come_call_finalizer(optional$2sNodephboolp_finalize,right_value155, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value158 && right_value158 != __result_obj__) { right_value158 = come_decrement_ref_count(right_value158, ((struct sNode*)right_value158)->finalize, ((struct sNode*)right_value158)->_protocol_obj, 1, 0, 0); } 
    __result107__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value160=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value159=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "08if.c", 526)))),(struct sNode*)come_increment_ref_count(result_165),(_Bool)1)));
    if(result_165) { result_165 = come_decrement_ref_count(result_165, ((struct sNode*)result_165)->finalize, ((struct sNode*)result_165)->_protocol_obj, 0, 0, 0); } 
    if(right_value159 && right_value159 != __result_obj__) { right_value159 = come_decrement_ref_count(right_value159, (void*)0, (void*)0, 1, 0, 0); }
    return __result107__;
    if(result_165) { result_165 = come_decrement_ref_count(result_165, ((struct sNode*)result_165)->finalize, ((struct sNode*)result_165)->_protocol_obj, 0, 0, 0); } 
}

static void sIfNode_finalize(struct sIfNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional181;
_Bool _if_conditional182;
_Bool _if_conditional183;
_Bool _if_conditional184;
_Bool _if_conditional185;
_Bool _if_conditional186;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional181=self!=((void*)0)&&self->mExpressionNode!=((void*)0),            _if_conditional181) {
                if(self->mExpressionNode) { self->mExpressionNode = come_decrement_ref_count(self->mExpressionNode, ((struct sNode*)self->mExpressionNode)->finalize, ((struct sNode*)self->mExpressionNode)->_protocol_obj, 0, 0, 0); } 
            }
            if(_if_conditional182=self!=((void*)0)&&self->mIfBlock!=((void*)0),            _if_conditional182) {
                if(self->mIfBlock) { come_call_finalizer(sBlock_finalize,self->mIfBlock, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            if(_if_conditional183=self!=((void*)0)&&self->mElifExpressionNodes!=((void*)0),            _if_conditional183) {
                if(self->mElifExpressionNodes) { come_call_finalizer(list$1sNodephp_finalize,self->mElifExpressionNodes, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            if(_if_conditional184=self!=((void*)0)&&self->mElifBlocks!=((void*)0),            _if_conditional184) {
                if(self->mElifBlocks) { come_call_finalizer(list$1sBlockphp_finalize,self->mElifBlocks, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            if(_if_conditional185=self!=((void*)0)&&self->mElseBlock!=((void*)0),            _if_conditional185) {
                if(self->mElseBlock) { come_call_finalizer(sBlock_finalize,self->mElseBlock, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            if(_if_conditional186=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional186) {
                if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
            }
}

static struct sIfNode* sIfNode_clone(struct sIfNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional187;
struct sIfNode* __result101__;
void* right_value145;
struct sIfNode* result_163;
_Bool _if_conditional188;
void* right_value146;
struct sNode* __dec_obj52;
_Bool _if_conditional189;
void* right_value147;
struct sBlock* __dec_obj53;
_Bool _if_conditional190;
void* right_value148;
struct list$1sNodeph* __dec_obj54;
_Bool _if_conditional191;
void* right_value149;
struct list$1sBlockph* __dec_obj55;
_Bool _if_conditional192;
_Bool _if_conditional193;
void* right_value150;
struct sBlock* __dec_obj56;
_Bool _if_conditional194;
_Bool _if_conditional195;
void* right_value151;
char* __dec_obj57;
struct sIfNode* __result102__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_163, 0, sizeof(struct sIfNode*));
            if(_if_conditional187=self==(void*)0,            _if_conditional187) {
                __result101__ = __result_obj__ = (void*)0;
                return __result101__;
            }
            result_163=(struct sIfNode*)come_increment_ref_count(((struct sIfNode*)(right_value145=(struct sIfNode*)come_calloc(1, sizeof(struct sIfNode)*(1), "sIfNode_clone", 3))));
            if(right_value145 && right_value145 != __result_obj__) { come_call_finalizer(sIfNode_finalize,right_value145, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(_if_conditional188=self!=((void*)0)&&self->mExpressionNode!=((void*)0),            _if_conditional188) {
                __dec_obj52=result_163->mExpressionNode;
                result_163->mExpressionNode=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value146=sNode_clone(self->mExpressionNode))));
                if(__dec_obj52) { __dec_obj52 = come_decrement_ref_count(__dec_obj52, ((struct sNode*)__dec_obj52)->finalize, ((struct sNode*)__dec_obj52)->_protocol_obj, 0,0,0); }
                if(right_value146 && right_value146 != __result_obj__) { right_value146 = come_decrement_ref_count(right_value146, ((struct sNode*)right_value146)->finalize, ((struct sNode*)right_value146)->_protocol_obj, 1, 0, 0); } 
            }
            if(_if_conditional189=self!=((void*)0)&&self->mIfBlock!=((void*)0),            _if_conditional189) {
                __dec_obj53=result_163->mIfBlock;
                result_163->mIfBlock=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value147=sBlock_clone(self->mIfBlock))));
                if(__dec_obj53) { come_call_finalizer(sBlock_finalize,__dec_obj53, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(right_value147 && right_value147 != __result_obj__) { come_call_finalizer(sBlock_finalize,right_value147, (void*)0, (void*)0, 0, 1, 0, 0); }
            }
            if(_if_conditional190=self!=((void*)0)&&self->mElifExpressionNodes!=((void*)0),            _if_conditional190) {
                __dec_obj54=result_163->mElifExpressionNodes;
                result_163->mElifExpressionNodes=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value148=list$1sNodephp_clone(self->mElifExpressionNodes))));
                if(__dec_obj54) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj54, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(right_value148 && right_value148 != __result_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value148, (void*)0, (void*)0, 0, 1, 0, 0); }
            }
            if(_if_conditional191=self!=((void*)0)&&self->mElifBlocks!=((void*)0),            _if_conditional191) {
                __dec_obj55=result_163->mElifBlocks;
                result_163->mElifBlocks=(struct list$1sBlockph*)come_increment_ref_count(((struct list$1sBlockph*)(right_value149=list$1sBlockphp_clone(self->mElifBlocks))));
                if(__dec_obj55) { come_call_finalizer(list$1sBlockph_finalize,__dec_obj55, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(right_value149 && right_value149 != __result_obj__) { come_call_finalizer(list$1sBlockphp_finalize,right_value149, (void*)0, (void*)0, 0, 1, 0, 0); }
            }
            if(_if_conditional192=self!=((void*)0),            _if_conditional192) {
                result_163->mElifNum=self->mElifNum;
            }
            if(_if_conditional193=self!=((void*)0)&&self->mElseBlock!=((void*)0),            _if_conditional193) {
                __dec_obj56=result_163->mElseBlock;
                result_163->mElseBlock=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value150=sBlock_clone(self->mElseBlock))));
                if(__dec_obj56) { come_call_finalizer(sBlock_finalize,__dec_obj56, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(right_value150 && right_value150 != __result_obj__) { come_call_finalizer(sBlock_finalize,right_value150, (void*)0, (void*)0, 0, 1, 0, 0); }
            }
            if(_if_conditional194=self!=((void*)0),            _if_conditional194) {
                result_163->sline=self->sline;
            }
            if(_if_conditional195=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional195) {
                __dec_obj57=result_163->sname;
                result_163->sname=(char*)come_increment_ref_count(((char*)(right_value151=string_clone(self->sname))));
                if(__dec_obj57) { __dec_obj57 = come_decrement_ref_count(__dec_obj57, (void*)0, (void*)0, 0,0,0); }
                if(right_value151 && right_value151 != __result_obj__) { right_value151 = come_decrement_ref_count(right_value151, (void*)0, (void*)0, 1, 0, 0); }
            }
            __result102__ = __result_obj__ = result_163;
            if(result_163) { come_call_finalizer(sIfNode_finalize,result_163, (void*)0, (void*)0, 0, 0, 1, 0); }
            return __result102__;
            if(result_163) { come_call_finalizer(sIfNode_finalize,result_163, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct sNode* optional$2sNodephbool_catch(struct optional$2sNodephbool* self, void* parent, void (*block)(void*)){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional196;
_Bool _if_conditional197;
struct sNode* __result104__;
struct sNode* __result105__;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional196=!self->v2,        _if_conditional196) {
            block(parent);
            if(_if_conditional197=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,            _if_conditional197) {
                __result104__ = __result_obj__ = self->v1;
                return __result104__;
            }
        }
        __result105__ = __result_obj__ = self->v1;
        return __result105__;
}

void method_block1_08ifc(struct __current_stack1__* parent){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value156;
void* right_value157;
memset(&__result_obj__, 0, sizeof(void*));
        if(right_value156 && right_value156 != __result_obj__) { right_value156 = come_decrement_ref_count(right_value156, (void*)0, (void*)0, 1, 0, 0); }
                    ((struct __current_stack1__*) parent)->__method_block_result_kind__ = 3;
            ((struct __current_stack1__*) parent)->__method_block_return_value__ = (struct optional$2voidpbool*)come_increment_ref_count(((struct optional$2voidpbool*)(right_value157=optional$2voidpbool_initialize(((struct optional$2voidpbool*)(right_value156=(struct optional$2voidpbool*)come_calloc(1, sizeof(struct optional$2voidpbool)*(1), "08if.c", 524))),((void*)0),(_Bool)0))));
        return;}

static struct optional$2voidpbool* optional$2voidpbool_initialize(struct optional$2voidpbool* self, void* v1, _Bool v2){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
struct optional$2voidpbool* __result106__;
memset(&__result_obj__, 0, sizeof(void*));
            self->v1=v1;
            self->v2=v2;
            __result106__ = __result_obj__ = self;
            if(self) { come_call_finalizer(optional$2voidpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            return __result106__;
            if(self) { come_call_finalizer(optional$2voidpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2voidpboolp_finalize(struct optional$2voidpbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

struct sNode* parse_or_statment(struct sNode* expression_node, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value161;
char* sname_166;
int sline_167;
void* right_value162;
struct sBlock* if_block_168;
void* right_value163;
void* right_value164;
struct sNode* _inf_value4;
struct sOrStatmentNode* _inf_obj_value4;
void* right_value169;
struct sNode* __result110__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&sname_166, 0, sizeof(char*));
memset(&sline_167, 0, sizeof(int));
memset(&if_block_168, 0, sizeof(struct sBlock*));
    sname_166=(char*)come_increment_ref_count(((char*)(right_value161=string_clone(info->sname))));
    if(right_value161 && right_value161 != __result_obj__) { right_value161 = come_decrement_ref_count(right_value161, (void*)0, (void*)0, 1, 0, 0); }
    sline_167=info->sline;
    parse_sharp_v5(info);
    if_block_168=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value162=parse_block(info,(_Bool)0))));
    if(right_value162 && right_value162 != __result_obj__) { come_call_finalizer(sBlock_finalize,right_value162, (void*)0, (void*)0, 0, 1, 0, 0); }
    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 538);
    _inf_obj_value4=come_increment_ref_count(((struct sOrStatmentNode*)(right_value164=sOrStatmentNode_initialize((struct sOrStatmentNode*)come_increment_ref_count(((struct sOrStatmentNode*)(right_value163=(struct sOrStatmentNode*)come_calloc(1, sizeof(struct sOrStatmentNode)*(1), "08if.c", 538)))),(struct sNode*)come_increment_ref_count(expression_node),if_block_168,info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sOrStatmentNode_finalize;
    _inf_value4->clone=(void*)sOrStatmentNode_clone;
    _inf_value4->compile=(void*)sOrStatmentNode_compile;
    _inf_value4->sline=(void*)sOrStatmentNode_sline;
    _inf_value4->sname=(void*)sOrStatmentNode_sname;
    _inf_value4->terminated=(void*)sOrStatmentNode_terminated;
    _inf_value4->kind=(void*)sOrStatmentNode_kind;
    __result110__ = __result_obj__ = ((struct sNode*)(right_value169=_inf_value4));
    if(expression_node) { expression_node = come_decrement_ref_count(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 1, 0); } 
    if(sname_166) { sname_166 = come_decrement_ref_count(sname_166, (void*)0, (void*)0, 0, 0, 0); }
    if(if_block_168) { come_call_finalizer(sBlock_finalize,if_block_168, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value163 && right_value163 != __result_obj__) { come_call_finalizer(sOrStatmentNode_finalize,right_value163, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value164 && right_value164 != __result_obj__) { come_call_finalizer(sOrStatmentNode_finalize,right_value164, (void*)0, (void*)0, 0, 1, 0, 0); }
    return __result110__;
    if(expression_node) { expression_node = come_decrement_ref_count(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 1, 0); } 
    if(sname_166) { sname_166 = come_decrement_ref_count(sname_166, (void*)0, (void*)0, 0, 0, 0); }
    if(if_block_168) { come_call_finalizer(sBlock_finalize,if_block_168, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sOrStatmentNode_finalize(struct sOrStatmentNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional198;
_Bool _if_conditional199;
_Bool _if_conditional200;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional198=self!=((void*)0)&&self->mExpressionNode!=((void*)0),        _if_conditional198) {
            if(self->mExpressionNode) { self->mExpressionNode = come_decrement_ref_count(self->mExpressionNode, ((struct sNode*)self->mExpressionNode)->finalize, ((struct sNode*)self->mExpressionNode)->_protocol_obj, 0, 0, 0); } 
        }
        if(_if_conditional199=self!=((void*)0)&&self->mIfBlock!=((void*)0),        _if_conditional199) {
            if(self->mIfBlock) { come_call_finalizer(sBlock_finalize,self->mIfBlock, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(_if_conditional200=self!=((void*)0)&&self->sname!=((void*)0),        _if_conditional200) {
            if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
        }
}

static struct sOrStatmentNode* sOrStatmentNode_clone(struct sOrStatmentNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional201;
struct sOrStatmentNode* __result108__;
void* right_value165;
struct sOrStatmentNode* result_169;
_Bool _if_conditional202;
void* right_value166;
struct sNode* __dec_obj58;
_Bool _if_conditional203;
void* right_value167;
struct sBlock* __dec_obj59;
_Bool _if_conditional204;
_Bool _if_conditional205;
void* right_value168;
char* __dec_obj60;
struct sOrStatmentNode* __result109__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_169, 0, sizeof(struct sOrStatmentNode*));
        if(_if_conditional201=self==(void*)0,        _if_conditional201) {
            __result108__ = __result_obj__ = (void*)0;
            return __result108__;
        }
        result_169=(struct sOrStatmentNode*)come_increment_ref_count(((struct sOrStatmentNode*)(right_value165=(struct sOrStatmentNode*)come_calloc(1, sizeof(struct sOrStatmentNode)*(1), "sOrStatmentNode_clone", 3))));
        if(right_value165 && right_value165 != __result_obj__) { come_call_finalizer(sOrStatmentNode_finalize,right_value165, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(_if_conditional202=self!=((void*)0)&&self->mExpressionNode!=((void*)0),        _if_conditional202) {
            __dec_obj58=result_169->mExpressionNode;
            result_169->mExpressionNode=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value166=sNode_clone(self->mExpressionNode))));
            if(__dec_obj58) { __dec_obj58 = come_decrement_ref_count(__dec_obj58, ((struct sNode*)__dec_obj58)->finalize, ((struct sNode*)__dec_obj58)->_protocol_obj, 0,0,0); }
            if(right_value166 && right_value166 != __result_obj__) { right_value166 = come_decrement_ref_count(right_value166, ((struct sNode*)right_value166)->finalize, ((struct sNode*)right_value166)->_protocol_obj, 1, 0, 0); } 
        }
        if(_if_conditional203=self!=((void*)0)&&self->mIfBlock!=((void*)0),        _if_conditional203) {
            __dec_obj59=result_169->mIfBlock;
            result_169->mIfBlock=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value167=sBlock_clone(self->mIfBlock))));
            if(__dec_obj59) { come_call_finalizer(sBlock_finalize,__dec_obj59, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value167 && right_value167 != __result_obj__) { come_call_finalizer(sBlock_finalize,right_value167, (void*)0, (void*)0, 0, 1, 0, 0); }
        }
        if(_if_conditional204=self!=((void*)0),        _if_conditional204) {
            result_169->sline=self->sline;
        }
        if(_if_conditional205=self!=((void*)0)&&self->sname!=((void*)0),        _if_conditional205) {
            __dec_obj60=result_169->sname;
            result_169->sname=(char*)come_increment_ref_count(((char*)(right_value168=string_clone(self->sname))));
            if(__dec_obj60) { __dec_obj60 = come_decrement_ref_count(__dec_obj60, (void*)0, (void*)0, 0,0,0); }
            if(right_value168 && right_value168 != __result_obj__) { right_value168 = come_decrement_ref_count(right_value168, (void*)0, (void*)0, 1, 0, 0); }
        }
        __result109__ = __result_obj__ = result_169;
        if(result_169) { come_call_finalizer(sOrStatmentNode_finalize,result_169, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result109__;
        if(result_169) { come_call_finalizer(sOrStatmentNode_finalize,result_169, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sNode* parse_and_statment(struct sNode* expression_node, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value170;
char* sname_170;
int sline_171;
void* right_value171;
struct sBlock* if_block_172;
void* right_value172;
void* right_value173;
struct sNode* _inf_value5;
struct sAndStatmentNode* _inf_obj_value5;
void* right_value178;
struct sNode* __result113__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&sname_170, 0, sizeof(char*));
memset(&sline_171, 0, sizeof(int));
memset(&if_block_172, 0, sizeof(struct sBlock*));
    sname_170=(char*)come_increment_ref_count(((char*)(right_value170=string_clone(info->sname))));
    if(right_value170 && right_value170 != __result_obj__) { right_value170 = come_decrement_ref_count(right_value170, (void*)0, (void*)0, 1, 0, 0); }
    sline_171=info->sline;
    parse_sharp_v5(info);
    if_block_172=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value171=parse_block(info,(_Bool)0))));
    if(right_value171 && right_value171 != __result_obj__) { come_call_finalizer(sBlock_finalize,right_value171, (void*)0, (void*)0, 0, 1, 0, 0); }
    _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 550);
    _inf_obj_value5=come_increment_ref_count(((struct sAndStatmentNode*)(right_value173=sAndStatmentNode_initialize((struct sAndStatmentNode*)come_increment_ref_count(((struct sAndStatmentNode*)(right_value172=(struct sAndStatmentNode*)come_calloc(1, sizeof(struct sAndStatmentNode)*(1), "08if.c", 550)))),(struct sNode*)come_increment_ref_count(expression_node),if_block_172,info))));
    _inf_value5->_protocol_obj=_inf_obj_value5;
    _inf_value5->finalize=(void*)sAndStatmentNode_finalize;
    _inf_value5->clone=(void*)sAndStatmentNode_clone;
    _inf_value5->compile=(void*)sAndStatmentNode_compile;
    _inf_value5->sline=(void*)sAndStatmentNode_sline;
    _inf_value5->sname=(void*)sAndStatmentNode_sname;
    _inf_value5->terminated=(void*)sAndStatmentNode_terminated;
    _inf_value5->kind=(void*)sAndStatmentNode_kind;
    __result113__ = __result_obj__ = ((struct sNode*)(right_value178=_inf_value5));
    if(expression_node) { expression_node = come_decrement_ref_count(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 1, 0); } 
    if(sname_170) { sname_170 = come_decrement_ref_count(sname_170, (void*)0, (void*)0, 0, 0, 0); }
    if(if_block_172) { come_call_finalizer(sBlock_finalize,if_block_172, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value172 && right_value172 != __result_obj__) { come_call_finalizer(sAndStatmentNode_finalize,right_value172, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value173 && right_value173 != __result_obj__) { come_call_finalizer(sAndStatmentNode_finalize,right_value173, (void*)0, (void*)0, 0, 1, 0, 0); }
    return __result113__;
    if(expression_node) { expression_node = come_decrement_ref_count(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 1, 0); } 
    if(sname_170) { sname_170 = come_decrement_ref_count(sname_170, (void*)0, (void*)0, 0, 0, 0); }
    if(if_block_172) { come_call_finalizer(sBlock_finalize,if_block_172, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sAndStatmentNode_finalize(struct sAndStatmentNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional206;
_Bool _if_conditional207;
_Bool _if_conditional208;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional206=self!=((void*)0)&&self->mExpressionNode!=((void*)0),        _if_conditional206) {
            if(self->mExpressionNode) { self->mExpressionNode = come_decrement_ref_count(self->mExpressionNode, ((struct sNode*)self->mExpressionNode)->finalize, ((struct sNode*)self->mExpressionNode)->_protocol_obj, 0, 0, 0); } 
        }
        if(_if_conditional207=self!=((void*)0)&&self->mIfBlock!=((void*)0),        _if_conditional207) {
            if(self->mIfBlock) { come_call_finalizer(sBlock_finalize,self->mIfBlock, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(_if_conditional208=self!=((void*)0)&&self->sname!=((void*)0),        _if_conditional208) {
            if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
        }
}

static struct sAndStatmentNode* sAndStatmentNode_clone(struct sAndStatmentNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional209;
struct sAndStatmentNode* __result111__;
void* right_value174;
struct sAndStatmentNode* result_173;
_Bool _if_conditional210;
void* right_value175;
struct sNode* __dec_obj61;
_Bool _if_conditional211;
void* right_value176;
struct sBlock* __dec_obj62;
_Bool _if_conditional212;
_Bool _if_conditional213;
void* right_value177;
char* __dec_obj63;
struct sAndStatmentNode* __result112__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_173, 0, sizeof(struct sAndStatmentNode*));
        if(_if_conditional209=self==(void*)0,        _if_conditional209) {
            __result111__ = __result_obj__ = (void*)0;
            return __result111__;
        }
        result_173=(struct sAndStatmentNode*)come_increment_ref_count(((struct sAndStatmentNode*)(right_value174=(struct sAndStatmentNode*)come_calloc(1, sizeof(struct sAndStatmentNode)*(1), "sAndStatmentNode_clone", 3))));
        if(right_value174 && right_value174 != __result_obj__) { come_call_finalizer(sAndStatmentNode_finalize,right_value174, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(_if_conditional210=self!=((void*)0)&&self->mExpressionNode!=((void*)0),        _if_conditional210) {
            __dec_obj61=result_173->mExpressionNode;
            result_173->mExpressionNode=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value175=sNode_clone(self->mExpressionNode))));
            if(__dec_obj61) { __dec_obj61 = come_decrement_ref_count(__dec_obj61, ((struct sNode*)__dec_obj61)->finalize, ((struct sNode*)__dec_obj61)->_protocol_obj, 0,0,0); }
            if(right_value175 && right_value175 != __result_obj__) { right_value175 = come_decrement_ref_count(right_value175, ((struct sNode*)right_value175)->finalize, ((struct sNode*)right_value175)->_protocol_obj, 1, 0, 0); } 
        }
        if(_if_conditional211=self!=((void*)0)&&self->mIfBlock!=((void*)0),        _if_conditional211) {
            __dec_obj62=result_173->mIfBlock;
            result_173->mIfBlock=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value176=sBlock_clone(self->mIfBlock))));
            if(__dec_obj62) { come_call_finalizer(sBlock_finalize,__dec_obj62, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value176 && right_value176 != __result_obj__) { come_call_finalizer(sBlock_finalize,right_value176, (void*)0, (void*)0, 0, 1, 0, 0); }
        }
        if(_if_conditional212=self!=((void*)0),        _if_conditional212) {
            result_173->sline=self->sline;
        }
        if(_if_conditional213=self!=((void*)0)&&self->sname!=((void*)0),        _if_conditional213) {
            __dec_obj63=result_173->sname;
            result_173->sname=(char*)come_increment_ref_count(((char*)(right_value177=string_clone(self->sname))));
            if(__dec_obj63) { __dec_obj63 = come_decrement_ref_count(__dec_obj63, (void*)0, (void*)0, 0,0,0); }
            if(right_value177 && right_value177 != __result_obj__) { right_value177 = come_decrement_ref_count(right_value177, (void*)0, (void*)0, 1, 0, 0); }
        }
        __result112__ = __result_obj__ = result_173;
        if(result_173) { come_call_finalizer(sAndStatmentNode_finalize,result_173, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result112__;
        if(result_173) { come_call_finalizer(sAndStatmentNode_finalize,result_173, (void*)0, (void*)0, 0, 0, 0, 0); }
}

