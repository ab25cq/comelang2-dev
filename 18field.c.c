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
struct sStoreFieldNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    char* mName;
    int sline;
    char* sname;
};
struct optional$2sClasspbool
{
    struct sClass* v1;
    _Bool v2;
};
struct sNullCheckNode
{
    struct sNode* mLeft;
    _Bool mOnlyNullCecker;
    int sline;
    char* sname;
};
struct sRangeCheckNode
{
    struct sNode* mLeft;
    struct sNode* mBegin;
    struct sNode* mEnd;
    int sline;
    char* sname;
};
struct sExceptionGetValueNode
{
    struct sNode* mLeft;
    int sline;
    char* sname;
};
struct sLoadFieldNode
{
    struct sNode* mLeft;
    char* mName;
    int sline;
    char* sname;
};
struct sStoreArrayNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    struct list$1sNodeph* mArrayNum;
    _Bool mQuote;
    int sline;
    char* sname;
};
struct optional$2CVALUEphbool
{
    struct CVALUE* v1;
    _Bool v2;
};
struct sLoadArrayNode
{
    struct sNode* mLeft;
    struct list$1sNodeph* mArrayNum;
    _Bool mQuote;
    int sline;
    char* sname;
};
struct sLoadRangeArrayNode
{
    struct sNode* mLeft;
    struct list$1sNodeph* mArrayNum;
    _Bool mQuote;
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

_Bool operator_overload_fun2(struct sType* type, char* fun_name, struct CVALUE* left_value, struct CVALUE* middle_value, struct CVALUE* right_value, struct sInfo* info);

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
static void CVALUE_finalize(struct CVALUE* self);
static struct optional$2sTypephbool* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
static struct optional$2sTypephbool* optional$2sTypephbool_initialize(struct optional$2sTypephbool* self, struct sType* v1, _Bool v2);
static void optional$2sTypephboolp_finalize(struct optional$2sTypephbool* self);
static struct sType* optional$2sTypephbool_value(struct optional$2sTypephbool* self);
static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
struct sStoreFieldNode* sStoreFieldNode_initialize(struct sStoreFieldNode* self, struct sNode* left, struct sNode* right, char* name, struct sInfo* info);

_Bool sStoreFieldNode_terminated();

char* sStoreFieldNode_kind();

_Bool sStoreFieldNode_compile(struct sStoreFieldNode* self, struct sInfo* info);

static struct optional$2sClasspbool* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key);
static struct optional$2sClasspbool* optional$2sClasspbool_initialize(struct optional$2sClasspbool* self, struct sClass* v1, _Bool v2);
static void optional$2sClasspboolp_finalize(struct optional$2sClasspbool* self);
static struct sClass* optional$2sClasspbool_value(struct optional$2sClasspbool* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self);
static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self);
int sStoreFieldNode_sline(struct sStoreFieldNode* self, struct sInfo* info);

char* sStoreFieldNode_sname(struct sStoreFieldNode* self, struct sInfo* info);

struct sNullCheckNode* sNullCheckNode_initialize(struct sNullCheckNode* self, struct sNode* left, _Bool only_null_checker, struct sInfo* info);

_Bool sNullCheckNode_terminated();

char* sNullCheckNode_kind();

_Bool sNullCheckNode_compile(struct sNullCheckNode* self, struct sInfo* info);

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value);
static char* optional$2charphbool_expect(struct optional$2charphbool* self);
static void optional$2charphboolp_finalize(struct optional$2charphbool* self);
int sNullCheckNode_sline(struct sNullCheckNode* self, struct sInfo* info);

char* sNullCheckNode_sname(struct sNullCheckNode* self, struct sInfo* info);

struct sRangeCheckNode* sRangeCheckNode_initialize(struct sRangeCheckNode* self, struct sNode* left, struct sNode* begin, struct sNode* end, struct sInfo* info);

_Bool sRangeCheckNode_terminated();

char* sRangeCheckNode_kind();

_Bool sRangeCheckNode_compile(struct sRangeCheckNode* self, struct sInfo* info);

int sRangeCheckNode_sline(struct sRangeCheckNode* self, struct sInfo* info);

char* sRangeCheckNode_sname(struct sRangeCheckNode* self, struct sInfo* info);

struct sExceptionGetValueNode* sExceptionGetValueNode_initialize(struct sExceptionGetValueNode* self, struct sNode* left, struct sInfo* info);

_Bool sExceptionGetValueNode_terminated();

_Bool compiletime_get_exception_value(struct sInfo* info);

char* sExceptionGetValueNode_kind();

_Bool sExceptionGetValueNode_compile(struct sExceptionGetValueNode* self, struct sInfo* info);

int sExceptionGetValueNode_sline(struct sExceptionGetValueNode* self, struct sInfo* info);

char* sExceptionGetValueNode_sname(struct sExceptionGetValueNode* self, struct sInfo* info);

struct sNode* store_field(struct sNode* left, struct sNode* right, char* name, struct sInfo* info);

struct sLoadFieldNode* sLoadFieldNode_initialize(struct sLoadFieldNode* self, struct sNode* left, char* name, struct sInfo* info);

_Bool sLoadFieldNode_terminated();

char* sLoadFieldNode_kind();

_Bool sLoadFieldNode_compile(struct sLoadFieldNode* self, struct sInfo* info);

static int list$1sNodeph_length(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self);
int sLoadFieldNode_sline(struct sLoadFieldNode* self, struct sInfo* info);

char* sLoadFieldNode_sname(struct sLoadFieldNode* self, struct sInfo* info);

struct sStoreArrayNode* sStoreArrayNode_initialize(struct sStoreArrayNode* self, struct sNode* left, struct sNode* right, struct list$1sNodeph* array_num, _Bool quote, struct sInfo* info);

_Bool sStoreArrayNode_terminated();

char* sStoreArrayNode_kind();

_Bool sStoreArrayNode_compile(struct sStoreArrayNode* self, struct sInfo* info);

static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self);
static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self);
static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self);
static _Bool list$1sNodeph_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self);
static struct optional$2CVALUEphbool* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position);
static struct optional$2CVALUEphbool* optional$2CVALUEphbool_initialize(struct optional$2CVALUEphbool* self, struct CVALUE* v1, _Bool v2);
static void optional$2CVALUEphboolp_finalize(struct optional$2CVALUEphbool* self);
static struct CVALUE* optional$2CVALUEphbool_value(struct optional$2CVALUEphbool* self);
static int list$1CVALUEph_length(struct list$1CVALUEph* self);
static struct list$1sNodeph* list$1sNodeph_delete(struct list$1sNodeph* self, int head, int tail);
static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self);
static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self);
static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self);
int sStoreArrayNode_sline(struct sStoreArrayNode* self, struct sInfo* info);

char* sStoreArrayNode_sname(struct sStoreArrayNode* self, struct sInfo* info);

struct sLoadArrayNode* sLoadArrayNode_initialize(struct sLoadArrayNode* self, struct sNode* left, struct list$1sNodeph* array_num, _Bool quote, struct sInfo* info);

_Bool sLoadArrayNode_terminated();

char* sLoadArrayNode_kind();

_Bool sLoadArrayNode_compile(struct sLoadArrayNode* self, struct sInfo* info);

int sLoadArrayNode_sline(struct sLoadArrayNode* self, struct sInfo* info);

char* sLoadArrayNode_sname(struct sLoadArrayNode* self, struct sInfo* info);

struct sLoadRangeArrayNode* sLoadRangeArrayNode_initialize(struct sLoadRangeArrayNode* self, struct sNode* left, struct list$1sNodeph* array_num, _Bool quote, struct sInfo* info);

_Bool sLoadRangeArrayNode_terminated();

char* sLoadRangeArrayNode_kind();

_Bool sLoadRangeArrayNode_compile(struct sLoadRangeArrayNode* self, struct sInfo* info);

int sLoadRangeArrayNode_sline(struct sLoadRangeArrayNode* self, struct sInfo* info);

char* sLoadRangeArrayNode_sname(struct sLoadRangeArrayNode* self, struct sInfo* info);

struct sNode* post_position_operator2_v18(struct sNode* node, struct sInfo* info);

struct sNode* parse_method_call_v18(struct sNode* obj, char* fun_name, struct sInfo* info);

struct sNode* exception_get_value(struct sNode* node, struct sInfo* info);

static void sExceptionGetValueNode_finalize(struct sExceptionGetValueNode* self);
static struct sExceptionGetValueNode* sExceptionGetValueNode_clone(struct sExceptionGetValueNode* self);
struct sNode* post_position_operator_v18(struct sNode* node, struct sInfo* info);

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item);
static int optional$2intbool_value(struct optional$2intbool* self);
static void optional$2intboolp_finalize(struct optional$2intbool* self);
static void sLoadRangeArrayNode_finalize(struct sLoadRangeArrayNode* self);
static struct sLoadRangeArrayNode* sLoadRangeArrayNode_clone(struct sLoadRangeArrayNode* self);
static void sStoreArrayNode_finalize(struct sStoreArrayNode* self);
static struct sStoreArrayNode* sStoreArrayNode_clone(struct sStoreArrayNode* self);
static void sLoadArrayNode_finalize(struct sLoadArrayNode* self);
static struct sLoadArrayNode* sLoadArrayNode_clone(struct sLoadArrayNode* self);
static void sRangeCheckNode_finalize(struct sRangeCheckNode* self);
static struct sRangeCheckNode* sRangeCheckNode_clone(struct sRangeCheckNode* self);
static void sNullCheckNode_finalize(struct sNullCheckNode* self);
static struct sNullCheckNode* sNullCheckNode_clone(struct sNullCheckNode* self);
static void sStoreFieldNode_finalize(struct sStoreFieldNode* self);
static struct sStoreFieldNode* sStoreFieldNode_clone(struct sStoreFieldNode* self);
static void sLoadFieldNode_finalize(struct sLoadFieldNode* self);
static struct sLoadFieldNode* sLoadFieldNode_clone(struct sLoadFieldNode* self);
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

_Bool operator_overload_fun2(struct sType* type, char* fun_name, struct CVALUE* left_value, struct CVALUE* middle_value, struct CVALUE* right_value, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value44;
struct sType* generics_type_29;
_Bool _if_conditional91;
struct sType* __dec_obj28;
struct sClass* klass_30;
char* class_name_31;
char* fun_name2_32;
struct sFun* operator_fun_33;
_Bool _if_conditional92;
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
void* right_value61;
char* __dec_obj30;
int i_45;
_Bool _for_condtionalA1;
void* right_value62;
char* new_fun_name_46;
void* right_value63;
_Bool _if_conditional106;
void* right_value64;
char* __dec_obj31;
_Bool _if_conditional107;
void* right_value65;
_Bool result_47;
_Bool _if_conditional108;
void* right_value66;
struct CVALUE* come_value_48;
char* left_value2_49;
void* right_value67;
void* right_value68;
void* right_value73;
void* right_value74;
_Bool _if_conditional115;
void* right_value75;
void* right_value76;
char* __dec_obj33;
void* right_value77;
char* __dec_obj34;
char* middle_value2_54;
void* right_value78;
void* right_value79;
void* right_value80;
void* right_value81;
_Bool _if_conditional116;
void* right_value82;
void* right_value83;
char* __dec_obj35;
void* right_value84;
char* __dec_obj36;
char* right_value2_55;
void* right_value85;
void* right_value86;
void* right_value87;
void* right_value88;
_Bool _if_conditional117;
void* right_value89;
void* right_value90;
char* __dec_obj37;
void* right_value91;
char* __dec_obj38;
void* right_value92;
void* right_value93;
void* right_value94;
void* right_value95;
void* right_value96;
char* __dec_obj39;
void* right_value97;
struct sType* result_type1_56;
void* right_value98;
struct sType* result_type2_57;
void* right_value99;
struct sType* __dec_obj40;
_Bool _if_conditional118;
void* right_value100;
char* __dec_obj41;
void* right_value101;
char* __dec_obj42;
_Bool __result52__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&generics_type_29, 0, sizeof(struct sType*));
memset(&klass_30, 0, sizeof(struct sClass*));
memset(&class_name_31, 0, sizeof(char*));
memset(&fun_name2_32, 0, sizeof(char*));
memset(&operator_fun_33, 0, sizeof(struct sFun*));
memset(&none_generics_name_34, 0, sizeof(char*));
memset(&obj_type_35, 0, sizeof(struct sType*));
memset(&fun_name3_36, 0, sizeof(char*));
memset(&generics_fun_40, 0, sizeof(struct sGenericsFun*));
memset(&i_45, 0, sizeof(int));
memset(&new_fun_name_46, 0, sizeof(char*));
memset(&result_47, 0, sizeof(_Bool));
memset(&come_value_48, 0, sizeof(struct CVALUE*));
memset(&left_value2_49, 0, sizeof(char*));
memset(&middle_value2_54, 0, sizeof(char*));
memset(&right_value2_55, 0, sizeof(char*));
memset(&result_type1_56, 0, sizeof(struct sType*));
memset(&result_type2_57, 0, sizeof(struct sType*));
    generics_type_29=(struct sType*)come_increment_ref_count(((struct sType*)(right_value44=sType_clone(type))));
    if(right_value44 && right_value44 != __result_obj__) { come_call_finalizer(sType_finalize,right_value44, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(_if_conditional91=generics_type_29->mNoSolvedGenericsType->v1,    _if_conditional91) {
        __dec_obj28=generics_type_29;
        generics_type_29=(struct sType*)come_increment_ref_count(generics_type_29->mNoSolvedGenericsType->v1);
        if(__dec_obj28) { come_call_finalizer(sType_finalize,__dec_obj28, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    klass_30=type->mClass;
    class_name_31=klass_30->mName;
    operator_fun_33=((void*)0);
    if(_if_conditional92=type->mNoSolvedGenericsType->v1,    _if_conditional92) {
        type=type->mNoSolvedGenericsType->v1;
    }
    if(_if_conditional93=list$1sTypeph_length(type->mGenericsTypes)>0,    _if_conditional93) {
        none_generics_name_34=(char*)come_increment_ref_count(((char*)(right_value45=get_none_generics_name(type->mClass->mName))));
        if(right_value45 && right_value45 != __result_obj__) { right_value45 = come_decrement_ref_count(right_value45, (void*)0, (void*)0, 1, 0, 0); }
        obj_type_35=(struct sType*)come_increment_ref_count(((struct sType*)(right_value46=solve_generics(type,info->generics_type,info))));
        if(right_value46 && right_value46 != __result_obj__) { come_call_finalizer(sType_finalize,right_value46, (void*)0, (void*)0, 0, 1, 0, 0); }
        __dec_obj29=fun_name2_32;
        fun_name2_32=(char*)come_increment_ref_count(((char*)(right_value47=create_method_name(obj_type_35,(_Bool)0,fun_name,info))));
        if(__dec_obj29) { __dec_obj29 = come_decrement_ref_count(__dec_obj29, (void*)0, (void*)0, 0,0,0); }
        if(right_value47 && right_value47 != __result_obj__) { right_value47 = come_decrement_ref_count(right_value47, (void*)0, (void*)0, 1, 0, 0); }
        fun_name3_36=(char*)come_increment_ref_count(((char*)(right_value48=xsprintf("%s_%s",none_generics_name_34,fun_name))));
        if(right_value48 && right_value48 != __result_obj__) { right_value48 = come_decrement_ref_count(right_value48, (void*)0, (void*)0, 1, 0, 0); }
        generics_fun_40=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_36,((void*)0));
        if(_if_conditional99=generics_fun_40,        _if_conditional99) {
            if(_if_conditional100=!create_generics_fun((char*)come_increment_ref_count(((char*)(right_value50=__builtin_string(fun_name2_32)))),generics_fun_40,obj_type_35,info),            (right_value50 && right_value50 != __result_obj__) ? right_value50 = come_decrement_ref_count(right_value50, (void*)0, (void*)0, 1, 0, 0):0,
            _if_conditional100) {
                __result38__ = (_Bool)0;
                if(none_generics_name_34) { none_generics_name_34 = come_decrement_ref_count(none_generics_name_34, (void*)0, (void*)0, 0, 0, 0); }
                if(obj_type_35) { come_call_finalizer(sType_finalize,obj_type_35, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(fun_name3_36) { fun_name3_36 = come_decrement_ref_count(fun_name3_36, (void*)0, (void*)0, 0, 0, 0); }
                if(generics_type_29) { come_call_finalizer(sType_finalize,generics_type_29, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(fun_name2_32) { fun_name2_32 = come_decrement_ref_count(fun_name2_32, (void*)0, (void*)0, 0, 0, 0); }
                return __result38__;
            }
        }
        operator_fun_33=optional$2sFunpbool_value(((struct optional$2sFunpbool*)(right_value60=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_32))));
        if(right_value60 && right_value60 != __result_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value60, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(none_generics_name_34) { none_generics_name_34 = come_decrement_ref_count(none_generics_name_34, (void*)0, (void*)0, 0, 0, 0); }
        if(obj_type_35) { come_call_finalizer(sType_finalize,obj_type_35, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(fun_name3_36) { fun_name3_36 = come_decrement_ref_count(fun_name3_36, (void*)0, (void*)0, 0, 0, 0); }
    }
    else {
        __dec_obj30=fun_name2_32;
        fun_name2_32=(char*)come_increment_ref_count(((char*)(right_value61=create_method_name(type,(_Bool)0,fun_name,info))));
        if(__dec_obj30) { __dec_obj30 = come_decrement_ref_count(__dec_obj30, (void*)0, (void*)0, 0,0,0); }
        if(right_value61 && right_value61 != __result_obj__) { right_value61 = come_decrement_ref_count(right_value61, (void*)0, (void*)0, 1, 0, 0); }
        for(
        i_45=128-1 ,        0;        _for_condtionalA1=        i_45>=1 ,        _for_condtionalA1;        i_45-- ,        0        ){
            new_fun_name_46=(char*)come_increment_ref_count(((char*)(right_value62=xsprintf("%s_v%d",fun_name2_32,i_45))));
            if(right_value62 && right_value62 != __result_obj__) { right_value62 = come_decrement_ref_count(right_value62, (void*)0, (void*)0, 1, 0, 0); }
            operator_fun_33=optional$2sFunpbool_value(((struct optional$2sFunpbool*)(right_value63=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_46))));
            if(right_value63 && right_value63 != __result_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value63, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(_if_conditional106=operator_fun_33,            _if_conditional106) {
                __dec_obj31=fun_name2_32;
                fun_name2_32=(char*)come_increment_ref_count(((char*)(right_value64=__builtin_string(new_fun_name_46))));
                if(__dec_obj31) { __dec_obj31 = come_decrement_ref_count(__dec_obj31, (void*)0, (void*)0, 0,0,0); }
                if(right_value64 && right_value64 != __result_obj__) { right_value64 = come_decrement_ref_count(right_value64, (void*)0, (void*)0, 1, 0, 0); }
                if(new_fun_name_46) { new_fun_name_46 = come_decrement_ref_count(new_fun_name_46, (void*)0, (void*)0, 0, 0, 0); }
                break;
            }
            if(new_fun_name_46) { new_fun_name_46 = come_decrement_ref_count(new_fun_name_46, (void*)0, (void*)0, 0, 0, 0); }
        }
        if(_if_conditional107=operator_fun_33==((void*)0),        _if_conditional107) {
            operator_fun_33=optional$2sFunpbool_value(((struct optional$2sFunpbool*)(right_value65=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_32))));
            if(right_value65 && right_value65 != __result_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value65, (void*)0, (void*)0, 0, 1, 0, 0); }
        }
    }
    result_47=(_Bool)0;
    if(_if_conditional108=operator_fun_33,    _if_conditional108) {
        come_value_48=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value66=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 61))));
        if(right_value66 && right_value66 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value66, (void*)0, (void*)0, 0, 1, 0, 0); }
        check_assign_type(((char*)(right_value68=xsprintf("\%s is assigned to",((char*)(right_value67=string_to_string(fun_name2_32)))))),optional$2sTypephbool_value(((struct optional$2sTypephbool*)(right_value73=list$1sTypephp_operator_load_element(operator_fun_33->mParamTypes,0)))),left_value->type,left_value,(_Bool)0,info);
        if(right_value67 && right_value67 != __result_obj__) { right_value67 = come_decrement_ref_count(right_value67, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value68 && right_value68 != __result_obj__) { right_value68 = come_decrement_ref_count(right_value68, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value73 && right_value73 != __result_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,right_value73, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(_if_conditional115=optional$2sTypephbool_value(((struct optional$2sTypephbool*)(right_value74=list$1sTypephp_operator_load_element(operator_fun_33->mParamTypes,0))))->mHeap&&left_value->type->mHeap,        (right_value74 && right_value74 != __result_obj__) ? come_call_finalizer(optional$2sTypephboolp_finalize,right_value74, (void*)0, (void*)0, 0, 1, 0, 0):0,
        _if_conditional115) {
            std_move(optional$2sTypephbool_value(((struct optional$2sTypephbool*)(right_value75=list$1sTypephp_operator_load_element(operator_fun_33->mParamTypes,0)))),left_value->type,left_value,info);
            if(right_value75 && right_value75 != __result_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0, 0); }
            __dec_obj33=left_value2_49;
            left_value2_49=(char*)come_increment_ref_count(((char*)(right_value76=xsprintf("%s",left_value->c_value))));
            if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count(__dec_obj33, (void*)0, (void*)0, 0,0,0); }
            if(right_value76 && right_value76 != __result_obj__) { right_value76 = come_decrement_ref_count(right_value76, (void*)0, (void*)0, 1, 0, 0); }
        }
        else {
            __dec_obj34=left_value2_49;
            left_value2_49=(char*)come_increment_ref_count(((char*)(right_value77=string_clone(left_value->c_value))));
            if(__dec_obj34) { __dec_obj34 = come_decrement_ref_count(__dec_obj34, (void*)0, (void*)0, 0,0,0); }
            if(right_value77 && right_value77 != __result_obj__) { right_value77 = come_decrement_ref_count(right_value77, (void*)0, (void*)0, 1, 0, 0); }
        }
        check_assign_type(((char*)(right_value79=xsprintf("\%s is assigned to",((char*)(right_value78=string_to_string(fun_name2_32)))))),optional$2sTypephbool_value(((struct optional$2sTypephbool*)(right_value80=list$1sTypephp_operator_load_element(operator_fun_33->mParamTypes,1)))),middle_value->type,middle_value,(_Bool)0,info);
        if(right_value78 && right_value78 != __result_obj__) { right_value78 = come_decrement_ref_count(right_value78, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value79 && right_value79 != __result_obj__) { right_value79 = come_decrement_ref_count(right_value79, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value80 && right_value80 != __result_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,right_value80, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(_if_conditional116=optional$2sTypephbool_value(((struct optional$2sTypephbool*)(right_value81=list$1sTypephp_operator_load_element(operator_fun_33->mParamTypes,1))))->mHeap&&middle_value->type->mHeap,        (right_value81 && right_value81 != __result_obj__) ? come_call_finalizer(optional$2sTypephboolp_finalize,right_value81, (void*)0, (void*)0, 0, 1, 0, 0):0,
        _if_conditional116) {
            std_move(optional$2sTypephbool_value(((struct optional$2sTypephbool*)(right_value82=list$1sTypephp_operator_load_element(operator_fun_33->mParamTypes,1)))),middle_value->type,middle_value,info);
            if(right_value82 && right_value82 != __result_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,right_value82, (void*)0, (void*)0, 0, 1, 0, 0); }
            __dec_obj35=middle_value2_54;
            middle_value2_54=(char*)come_increment_ref_count(((char*)(right_value83=xsprintf("%s",middle_value->c_value))));
            if(__dec_obj35) { __dec_obj35 = come_decrement_ref_count(__dec_obj35, (void*)0, (void*)0, 0,0,0); }
            if(right_value83 && right_value83 != __result_obj__) { right_value83 = come_decrement_ref_count(right_value83, (void*)0, (void*)0, 1, 0, 0); }
        }
        else {
            __dec_obj36=middle_value2_54;
            middle_value2_54=(char*)come_increment_ref_count(((char*)(right_value84=string_clone(middle_value->c_value))));
            if(__dec_obj36) { __dec_obj36 = come_decrement_ref_count(__dec_obj36, (void*)0, (void*)0, 0,0,0); }
            if(right_value84 && right_value84 != __result_obj__) { right_value84 = come_decrement_ref_count(right_value84, (void*)0, (void*)0, 1, 0, 0); }
        }
        check_assign_type(((char*)(right_value86=xsprintf("\%s is assigned to",((char*)(right_value85=string_to_string(fun_name2_32)))))),optional$2sTypephbool_value(((struct optional$2sTypephbool*)(right_value87=list$1sTypephp_operator_load_element(operator_fun_33->mParamTypes,2)))),right_value->type,right_value,(_Bool)0,info);
        if(right_value85 && right_value85 != __result_obj__) { right_value85 = come_decrement_ref_count(right_value85, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value86 && right_value86 != __result_obj__) { right_value86 = come_decrement_ref_count(right_value86, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value87 && right_value87 != __result_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,right_value87, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(_if_conditional117=optional$2sTypephbool_value(((struct optional$2sTypephbool*)(right_value88=list$1sTypephp_operator_load_element(operator_fun_33->mParamTypes,2))))->mHeap&&right_value->type->mHeap,        (right_value88 && right_value88 != __result_obj__) ? come_call_finalizer(optional$2sTypephboolp_finalize,right_value88, (void*)0, (void*)0, 0, 1, 0, 0):0,
        _if_conditional117) {
            std_move(optional$2sTypephbool_value(((struct optional$2sTypephbool*)(right_value89=list$1sTypephp_operator_load_element(operator_fun_33->mParamTypes,2)))),right_value->type,right_value,info);
            if(right_value89 && right_value89 != __result_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,right_value89, (void*)0, (void*)0, 0, 1, 0, 0); }
            __dec_obj37=right_value2_55;
            right_value2_55=(char*)come_increment_ref_count(((char*)(right_value90=xsprintf("%s",right_value->c_value))));
            if(__dec_obj37) { __dec_obj37 = come_decrement_ref_count(__dec_obj37, (void*)0, (void*)0, 0,0,0); }
            if(right_value90 && right_value90 != __result_obj__) { right_value90 = come_decrement_ref_count(right_value90, (void*)0, (void*)0, 1, 0, 0); }
        }
        else {
            __dec_obj38=right_value2_55;
            right_value2_55=(char*)come_increment_ref_count(((char*)(right_value91=string_clone(right_value->c_value))));
            if(__dec_obj38) { __dec_obj38 = come_decrement_ref_count(__dec_obj38, (void*)0, (void*)0, 0,0,0); }
            if(right_value91 && right_value91 != __result_obj__) { right_value91 = come_decrement_ref_count(right_value91, (void*)0, (void*)0, 1, 0, 0); }
        }
        __dec_obj39=come_value_48->c_value;
        come_value_48->c_value=(char*)come_increment_ref_count(((char*)(right_value96=xsprintf("\%s(\%s,\%s,\%s)",((char*)(right_value92=string_to_string(fun_name2_32))),((char*)(right_value93=string_to_string(left_value2_49))),((char*)(right_value94=string_to_string(middle_value2_54))),((char*)(right_value95=string_to_string(right_value2_55)))))));
        if(__dec_obj39) { __dec_obj39 = come_decrement_ref_count(__dec_obj39, (void*)0, (void*)0, 0,0,0); }
        if(right_value92 && right_value92 != __result_obj__) { right_value92 = come_decrement_ref_count(right_value92, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value93 && right_value93 != __result_obj__) { right_value93 = come_decrement_ref_count(right_value93, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value94 && right_value94 != __result_obj__) { right_value94 = come_decrement_ref_count(right_value94, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value95 && right_value95 != __result_obj__) { right_value95 = come_decrement_ref_count(right_value95, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value96 && right_value96 != __result_obj__) { right_value96 = come_decrement_ref_count(right_value96, (void*)0, (void*)0, 1, 0, 0); }
        result_type1_56=(struct sType*)come_increment_ref_count(((struct sType*)(right_value97=sType_clone(operator_fun_33->mResultType))));
        if(right_value97 && right_value97 != __result_obj__) { come_call_finalizer(sType_finalize,right_value97, (void*)0, (void*)0, 0, 1, 0, 0); }
        result_type2_57=(struct sType*)come_increment_ref_count(((struct sType*)(right_value98=solve_generics(result_type1_56,generics_type_29,info))));
        if(right_value98 && right_value98 != __result_obj__) { come_call_finalizer(sType_finalize,right_value98, (void*)0, (void*)0, 0, 1, 0, 0); }
        __dec_obj40=come_value_48->type;
        come_value_48->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value99=sType_clone(result_type2_57))));
        if(__dec_obj40) { come_call_finalizer(sType_finalize,__dec_obj40, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value99 && right_value99 != __result_obj__) { come_call_finalizer(sType_finalize,right_value99, (void*)0, (void*)0, 0, 1, 0, 0); }
        come_value_48->var=((void*)0);
        if(_if_conditional118=result_type2_57->mHeap,        _if_conditional118) {
            __dec_obj41=come_value_48->c_value;
            come_value_48->c_value=(char*)come_increment_ref_count(((char*)(right_value100=append_object_to_right_values(come_value_48->c_value,(struct sType*)come_increment_ref_count(result_type2_57),info))));
            if(__dec_obj41) { __dec_obj41 = come_decrement_ref_count(__dec_obj41, (void*)0, (void*)0, 0,0,0); }
            if(right_value100 && right_value100 != __result_obj__) { right_value100 = come_decrement_ref_count(right_value100, (void*)0, (void*)0, 1, 0, 0); }
        }
        __dec_obj42=come_value_48->c_value;
        come_value_48->c_value=(char*)come_increment_ref_count(((char*)(right_value101=append_exception_value(come_value_48->c_value,come_value_48->type,info))));
        if(__dec_obj42) { __dec_obj42 = come_decrement_ref_count(__dec_obj42, (void*)0, (void*)0, 0,0,0); }
        if(right_value101 && right_value101 != __result_obj__) { right_value101 = come_decrement_ref_count(right_value101, (void*)0, (void*)0, 1, 0, 0); }
        add_come_last_code(info,"%s;\n",come_value_48->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_48));
        result_47=(_Bool)1;
        if(come_value_48) { come_call_finalizer(CVALUE_finalize,come_value_48, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(left_value2_49) { left_value2_49 = come_decrement_ref_count(left_value2_49, (void*)0, (void*)0, 0, 0, 0); }
        if(middle_value2_54) { middle_value2_54 = come_decrement_ref_count(middle_value2_54, (void*)0, (void*)0, 0, 0, 0); }
        if(right_value2_55) { right_value2_55 = come_decrement_ref_count(right_value2_55, (void*)0, (void*)0, 0, 0, 0); }
        if(result_type1_56) { come_call_finalizer(sType_finalize,result_type1_56, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(result_type2_57) { come_call_finalizer(sType_finalize,result_type2_57, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __result52__ = result_47;
    if(generics_type_29) { come_call_finalizer(sType_finalize,generics_type_29, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(fun_name2_32) { fun_name2_32 = come_decrement_ref_count(fun_name2_32, (void*)0, (void*)0, 0, 0, 0); }
    return __result52__;
    if(generics_type_29) { come_call_finalizer(sType_finalize,generics_type_29, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(fun_name2_32) { fun_name2_32 = come_decrement_ref_count(fun_name2_32, (void*)0, (void*)0, 0, 0, 0); }
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
            while(_while_condtional8=(_Bool)1,            _while_condtional8) {
                if(_if_conditional101=self->item_existance[it_43],                _if_conditional101) {
                    if(_if_conditional102=optional$2boolbool_value(((struct optional$2boolbool*)(right_value51=string_equals(self->keys[it_43],key)))),                    (right_value51 && right_value51 != __result_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value51, (void*)0, (void*)0, 0, 1, 0, 0):0,
                    _if_conditional102) {
                        __result40__ = __result_obj__ = ((struct optional$2sFunpbool*)(right_value53=optional$2sFunpbool_initialize((struct optional$2sFunpbool*)come_increment_ref_count(((struct optional$2sFunpbool*)(right_value52=(struct optional$2sFunpbool*)come_calloc(1, sizeof(struct optional$2sFunpbool)*(1), "./comelang2.h", 1600)))),self->items[it_43],(_Bool)1)));
                        if(right_value52 && right_value52 != __result_obj__) { right_value52 = come_decrement_ref_count(right_value52, (void*)0, (void*)0, 1, 0, 0); }
                        return __result40__;
                    }
                    it_43++;
                    if(_if_conditional103=it_43>=self->size,                    _if_conditional103) {
                        it_43=0;
                    }
                    else {
                        if(_if_conditional104=it_43==hash_42,                        _if_conditional104) {
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
            if(_if_conditional105=self==((void*)0),            _if_conditional105) {
                memset(&default_value_44,0,sizeof(struct sFun*));
                __result44__ = __result_obj__ = default_value_44;
                return __result44__;
            }
            else {
                __result45__ = __result_obj__ = self->v1;
                return __result45__;
            }
}

static void CVALUE_finalize(struct CVALUE* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional109;
_Bool _if_conditional110;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional109=self!=((void*)0)&&self->c_value!=((void*)0),            _if_conditional109) {
                if(self->c_value) { self->c_value = come_decrement_ref_count(self->c_value, (void*)0, (void*)0, 0, 0, 0); }
            }
            if(_if_conditional110=self!=((void*)0)&&self->type!=((void*)0),            _if_conditional110) {
                if(self->type) { come_call_finalizer(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
}

static struct optional$2sTypephbool* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional111;
struct list_item$1sTypeph* it_50;
int i_51;
_Bool _while_condtional9;
_Bool _if_conditional112;
void* right_value69;
void* right_value70;
struct optional$2sTypephbool* __result47__;
struct sType* default_value_52;
void* right_value71;
void* right_value72;
struct optional$2sTypephbool* __result48__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_50, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_51, 0, sizeof(int));
memset(&default_value_52, 0, sizeof(struct sType*));
            if(_if_conditional111=position<0,            _if_conditional111) {
                position+=self->len;
            }
            it_50=self->head;
            i_51=0;
            while(_while_condtional9=it_50!=((void*)0),            _while_condtional9) {
                if(_if_conditional112=position==i_51,                _if_conditional112) {
                    __result47__ = __result_obj__ = ((struct optional$2sTypephbool*)(right_value70=optional$2sTypephbool_initialize((struct optional$2sTypephbool*)come_increment_ref_count(((struct optional$2sTypephbool*)(right_value69=(struct optional$2sTypephbool*)come_calloc(1, sizeof(struct optional$2sTypephbool)*(1), "./comelang2.h", 747)))),(struct sType*)come_increment_ref_count(it_50->item),(_Bool)1)));
                    if(right_value69 && right_value69 != __result_obj__) { right_value69 = come_decrement_ref_count(right_value69, (void*)0, (void*)0, 1, 0, 0); }
                    return __result47__;
                }
                it_50=it_50->next;
                i_51++;
            }
            memset(&default_value_52,0,sizeof(struct sType*));
            __result48__ = __result_obj__ = ((struct optional$2sTypephbool*)(right_value72=optional$2sTypephbool_initialize(((struct optional$2sTypephbool*)(right_value71=(struct optional$2sTypephbool*)come_calloc(1, sizeof(struct optional$2sTypephbool)*(1), "./comelang2.h", 755))),(struct sType*)come_increment_ref_count(default_value_52),(_Bool)0)));
            if(default_value_52) { come_call_finalizer(sType_finalize,default_value_52, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value71 && right_value71 != __result_obj__) { right_value71 = come_decrement_ref_count(right_value71, (void*)0, (void*)0, 1, 0, 0); }
            return __result48__;
            if(default_value_52) { come_call_finalizer(sType_finalize,default_value_52, (void*)0, (void*)0, 0, 0, 0, 0); }
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
_Bool _if_conditional113;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional113=self!=((void*)0)&&self->v1!=((void*)0),                            _if_conditional113) {
                                if(self->v1) { come_call_finalizer(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
}

static struct sType* optional$2sTypephbool_value(struct optional$2sTypephbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional114;
struct sType* default_value_53;
struct sType* __result49__;
struct sType* __result50__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_53, 0, sizeof(struct sType*));
            if(_if_conditional114=self==((void*)0),            _if_conditional114) {
                memset(&default_value_53,0,sizeof(struct sType*));
                __result49__ = __result_obj__ = default_value_53;
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
_Bool _if_conditional119;
void* right_value102;
struct list_item$1CVALUEph* litem_58;
struct CVALUE* __dec_obj43;
_Bool _if_conditional121;
void* right_value103;
struct list_item$1CVALUEph* litem_59;
struct CVALUE* __dec_obj44;
void* right_value104;
struct list_item$1CVALUEph* litem_60;
struct CVALUE* __dec_obj45;
struct list$1CVALUEph* __result51__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&litem_58, 0, sizeof(struct list_item$1CVALUEph*));
memset(&litem_59, 0, sizeof(struct list_item$1CVALUEph*));
memset(&litem_60, 0, sizeof(struct list_item$1CVALUEph*));
            if(_if_conditional119=self->len==0,            _if_conditional119) {
                litem_58=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value102=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 277))));
                if(right_value102 && right_value102 != __result_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value102, (void*)0, (void*)0, 0, 1, 0, 0); }
                litem_58->prev=((void*)0);
                litem_58->next=((void*)0);
                __dec_obj43=litem_58->item;
                litem_58->item=(struct CVALUE*)come_increment_ref_count(item);
                if(__dec_obj43) { come_call_finalizer(CVALUE_finalize,__dec_obj43, (void*)0, (void*)0, 0, 0, 0, 0); }
                self->tail=litem_58;
                self->head=litem_58;
            }
            else {
                if(_if_conditional121=self->len==1,                _if_conditional121) {
                    litem_59=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value103=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 287))));
                    if(right_value103 && right_value103 != __result_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value103, (void*)0, (void*)0, 0, 1, 0, 0); }
                    litem_59->prev=self->head;
                    litem_59->next=((void*)0);
                    __dec_obj44=litem_59->item;
                    litem_59->item=(struct CVALUE*)come_increment_ref_count(item);
                    if(__dec_obj44) { come_call_finalizer(CVALUE_finalize,__dec_obj44, (void*)0, (void*)0, 0, 0, 0, 0); }
                    self->tail=litem_59;
                    self->head->next=litem_59;
                }
                else {
                    litem_60=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value104=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 297))));
                    if(right_value104 && right_value104 != __result_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value104, (void*)0, (void*)0, 0, 1, 0, 0); }
                    litem_60->prev=self->tail;
                    litem_60->next=((void*)0);
                    __dec_obj45=litem_60->item;
                    litem_60->item=(struct CVALUE*)come_increment_ref_count(item);
                    if(__dec_obj45) { come_call_finalizer(CVALUE_finalize,__dec_obj45, (void*)0, (void*)0, 0, 0, 0, 0); }
                    self->tail->next=litem_60;
                    self->tail=litem_60;
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
_Bool _if_conditional120;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional120=self!=((void*)0)&&self->item!=((void*)0),                    _if_conditional120) {
                        if(self->item) { come_call_finalizer(CVALUE_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
}

struct sStoreFieldNode* sStoreFieldNode_initialize(struct sStoreFieldNode* self, struct sNode* left, struct sNode* right, char* name, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value105;
char* __dec_obj46;
void* right_value106;
struct sNode* __dec_obj47;
void* right_value107;
struct sNode* __dec_obj48;
void* right_value108;
char* __dec_obj49;
struct sStoreFieldNode* __result53__;
memset(&__result_obj__, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj46=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value105=__builtin_string(info->sname))));
    if(__dec_obj46) { __dec_obj46 = come_decrement_ref_count(__dec_obj46, (void*)0, (void*)0, 0,0,0); }
    if(right_value105 && right_value105 != __result_obj__) { right_value105 = come_decrement_ref_count(right_value105, (void*)0, (void*)0, 1, 0, 0); }
    __dec_obj47=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value106=sNode_clone(left))));
    if(__dec_obj47) { __dec_obj47 = come_decrement_ref_count(__dec_obj47, ((struct sNode*)__dec_obj47)->finalize, ((struct sNode*)__dec_obj47)->_protocol_obj, 0,0,0); }
    if(right_value106 && right_value106 != __result_obj__) { right_value106 = come_decrement_ref_count(right_value106, ((struct sNode*)right_value106)->finalize, ((struct sNode*)right_value106)->_protocol_obj, 1, 0, 0); } 
    __dec_obj48=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value107=sNode_clone(right))));
    if(__dec_obj48) { __dec_obj48 = come_decrement_ref_count(__dec_obj48, ((struct sNode*)__dec_obj48)->finalize, ((struct sNode*)__dec_obj48)->_protocol_obj, 0,0,0); }
    if(right_value107 && right_value107 != __result_obj__) { right_value107 = come_decrement_ref_count(right_value107, ((struct sNode*)right_value107)->finalize, ((struct sNode*)right_value107)->_protocol_obj, 1, 0, 0); } 
    __dec_obj49=self->mName;
    self->mName=(char*)come_increment_ref_count(((char*)(right_value108=__builtin_string(name))));
    if(__dec_obj49) { __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0,0,0); }
    if(right_value108 && right_value108 != __result_obj__) { right_value108 = come_decrement_ref_count(right_value108, (void*)0, (void*)0, 1, 0, 0); }
    __result53__ = __result_obj__ = self;
    if(self) { come_call_finalizer(sStoreFieldNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(right) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    if(name) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
    return __result53__;
    if(self) { come_call_finalizer(sStoreFieldNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(right) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    if(name) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
}

_Bool sStoreFieldNode_terminated(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __result54__;
memset(&__result_obj__, 0, sizeof(void*));
    __result54__ = (_Bool)0;
    return __result54__;
}

char* sStoreFieldNode_kind(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value109;
char* __result55__;
memset(&__result_obj__, 0, sizeof(void*));
    __result55__ = __result_obj__ = ((char*)(right_value109=__builtin_string("sStoreFieldNode")));
    return __result55__;
}

_Bool sStoreFieldNode_compile(struct sStoreFieldNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
struct sNode* left_61;
struct sNode* right_62;
void* right_value110;
char* name_63;
_Bool _if_conditional126;
_Bool __result56__;
void* right_value111;
struct CVALUE* left_value_64;
_Bool _if_conditional127;
_Bool __result57__;
void* right_value112;
struct CVALUE* right_value_65;
struct sType* right_type_66;
struct sType* left_type_67;
void* right_value113;
struct sType* left_type2_68;
struct sClass* klass_69;
void* right_value123;
struct sType* field_type_74;
int index_75;
char* child_field_name_76;
void* right_value124;
_Bool _if_conditional133;
_Bool __result65__;
struct list$1tuple2$2charphsTypephph* o2_saved_77;
struct tuple2$2charphsTypeph* field_80;
_Bool _for_condtionalA2;
struct tuple2$2charphsTypeph* multiple_assgin_var1;
char* field_name_83;
struct sType* field_type2_84;
_Bool _if_conditional138;
void* right_value125;
struct sType* __dec_obj50;
_Bool _if_conditional142;
struct list$1tuple2$2charphsTypephph* o2_saved_87;
struct tuple2$2charphsTypeph* field_88;
_Bool _for_condtionalA3;
struct tuple2$2charphsTypeph* multiple_assgin_var2;
char* field_name_89;
struct sType* field_type2_90;
struct sClass* klass2_91;
struct list$1tuple2$2charphsTypephph* o2_saved_92;
struct tuple2$2charphsTypeph* field2_93;
_Bool _for_condtionalA4;
struct tuple2$2charphsTypeph* multiple_assgin_var3;
char* field_name2_94;
struct sType* field_type3_95;
_Bool _if_conditional143;
void* right_value126;
char* __dec_obj51;
void* right_value127;
struct sType* __dec_obj52;
_Bool _if_conditional144;
_Bool _if_conditional145;
void* right_value128;
struct sType* __dec_obj53;
_Bool _if_conditional146;
_Bool __result74__;
void* right_value129;
struct CVALUE* come_value_96;
_Bool _if_conditional147;
_Bool _if_conditional148;
_Bool _if_conditional149;
_Bool __result75__;
void* right_value130;
void* right_value131;
_Bool _if_conditional150;
_Bool _if_conditional151;
_Bool _if_conditional152;
void* right_value132;
char* c_value_97;
void* right_value133;
char* __dec_obj54;
void* right_value134;
char* c_value_98;
void* right_value135;
char* __dec_obj55;
_Bool _if_conditional153;
_Bool _if_conditional154;
void* right_value136;
char* c_value_99;
void* right_value137;
char* __dec_obj56;
void* right_value138;
char* c_value_100;
void* right_value139;
char* __dec_obj57;
void* right_value140;
char* __dec_obj58;
_Bool __result76__;
int right_value_id_101;
_Bool _if_conditional155;
_Bool _if_conditional156;
_Bool _if_conditional157;
_Bool _if_conditional158;
void* right_value141;
char* c_value_102;
void* right_value142;
char* __dec_obj59;
void* right_value143;
char* c_value_103;
void* right_value144;
char* __dec_obj60;
_Bool _if_conditional159;
_Bool _if_conditional160;
void* right_value145;
char* c_value_104;
void* right_value146;
char* __dec_obj61;
void* right_value147;
char* c_value_105;
void* right_value148;
char* __dec_obj62;
_Bool __result77__;
_Bool _if_conditional161;
_Bool _if_conditional162;
void* right_value149;
char* __dec_obj63;
void* right_value150;
char* __dec_obj64;
_Bool _if_conditional163;
_Bool _if_conditional164;
void* right_value151;
char* __dec_obj65;
void* right_value152;
char* __dec_obj66;
_Bool __result78__;
void* right_value153;
struct sType* __dec_obj67;
_Bool __result79__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_61, 0, sizeof(struct sNode*));
memset(&right_62, 0, sizeof(struct sNode*));
memset(&name_63, 0, sizeof(char*));
memset(&left_value_64, 0, sizeof(struct CVALUE*));
memset(&right_value_65, 0, sizeof(struct CVALUE*));
memset(&right_type_66, 0, sizeof(struct sType*));
memset(&left_type_67, 0, sizeof(struct sType*));
memset(&left_type2_68, 0, sizeof(struct sType*));
memset(&klass_69, 0, sizeof(struct sClass*));
memset(&field_type_74, 0, sizeof(struct sType*));
memset(&index_75, 0, sizeof(int));
memset(&child_field_name_76, 0, sizeof(char*));
memset(&o2_saved_77, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&field_80, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&field_name_83, 0, sizeof(char*));
memset(&field_type2_84, 0, sizeof(struct sType*));
memset(&field_name_83, 0, sizeof(char*));
memset(&field_type2_84, 0, sizeof(struct sType*));
memset(&o2_saved_87, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&field_88, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&field_name_89, 0, sizeof(char*));
memset(&field_type2_90, 0, sizeof(struct sType*));
memset(&field_name_89, 0, sizeof(char*));
memset(&field_type2_90, 0, sizeof(struct sType*));
memset(&klass2_91, 0, sizeof(struct sClass*));
memset(&o2_saved_92, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&field2_93, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&field_name2_94, 0, sizeof(char*));
memset(&field_type3_95, 0, sizeof(struct sType*));
memset(&field_name2_94, 0, sizeof(char*));
memset(&field_type3_95, 0, sizeof(struct sType*));
memset(&come_value_96, 0, sizeof(struct CVALUE*));
memset(&c_value_97, 0, sizeof(char*));
memset(&c_value_98, 0, sizeof(char*));
memset(&c_value_99, 0, sizeof(char*));
memset(&c_value_100, 0, sizeof(char*));
memset(&right_value_id_101, 0, sizeof(int));
memset(&c_value_102, 0, sizeof(char*));
memset(&c_value_103, 0, sizeof(char*));
memset(&c_value_104, 0, sizeof(char*));
memset(&c_value_105, 0, sizeof(char*));
    left_61=self->mLeft;
    right_62=self->mRight;
    name_63=(char*)come_increment_ref_count(((char*)(right_value110=__builtin_string(self->mName))));
    if(right_value110 && right_value110 != __result_obj__) { right_value110 = come_decrement_ref_count(right_value110, (void*)0, (void*)0, 1, 0, 0); }
    if(_if_conditional126=!node_compile(left_61,info),    _if_conditional126) {
        __result56__ = (_Bool)0;
        if(name_63) { name_63 = come_decrement_ref_count(name_63, (void*)0, (void*)0, 0, 0, 0); }
        return __result56__;
    }
    left_value_64=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value111=get_value_from_stack(-1,info))));
    if(right_value111 && right_value111 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value111, (void*)0, (void*)0, 0, 1, 0, 0); }
    dec_stack_ptr(1,info);
    if(_if_conditional127=!node_compile(right_62,info),    _if_conditional127) {
        __result57__ = (_Bool)0;
        if(name_63) { name_63 = come_decrement_ref_count(name_63, (void*)0, (void*)0, 0, 0, 0); }
        if(left_value_64) { come_call_finalizer(CVALUE_finalize,left_value_64, (void*)0, (void*)0, 0, 0, 0, 0); }
        return __result57__;
    }
    right_value_65=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value112=get_value_from_stack(-1,info))));
    if(right_value112 && right_value112 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value112, (void*)0, (void*)0, 0, 1, 0, 0); }
    dec_stack_ptr(1,info);
    right_type_66=right_value_65->type;
    left_type_67=left_value_64->type;
    left_type2_68=(struct sType*)come_increment_ref_count(((struct sType*)(right_value113=solve_generics(left_type_67,left_type_67,info))));
    if(right_value113 && right_value113 != __result_obj__) { come_call_finalizer(sType_finalize,right_value113, (void*)0, (void*)0, 0, 1, 0, 0); }
    klass_69=left_type2_68->mClass;
    klass_69=optional$2sClasspbool_value(((struct optional$2sClasspbool*)(right_value123=map$2charphsClassphp_operator_load_element(info->classes,klass_69->mName))));
    if(right_value123 && right_value123 != __result_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,right_value123, (void*)0, (void*)0, 0, 1, 0, 0); }
    field_type_74=((void*)0);
    index_75=0;
    child_field_name_76=((void*)0);
    klass_69=optional$2sClasspbool_value(((struct optional$2sClasspbool*)(right_value124=map$2charphsClassphp_operator_load_element(info->classes,klass_69->mName))));
    if(right_value124 && right_value124 != __result_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,right_value124, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(_if_conditional133=klass_69->mFields==((void*)0),    _if_conditional133) {
        err_msg(info,"%s fields are null",klass_69->mName);
        __result65__ = (_Bool)0;
        if(name_63) { name_63 = come_decrement_ref_count(name_63, (void*)0, (void*)0, 0, 0, 0); }
        if(left_value_64) { come_call_finalizer(CVALUE_finalize,left_value_64, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value_65) { come_call_finalizer(CVALUE_finalize,right_value_65, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(left_type2_68) { come_call_finalizer(sType_finalize,left_type2_68, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(field_type_74) { come_call_finalizer(sType_finalize,field_type_74, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(child_field_name_76) { child_field_name_76 = come_decrement_ref_count(child_field_name_76, (void*)0, (void*)0, 0, 0, 0); }
        return __result65__;
    }
    for(
    o2_saved_77=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_69->mFields)),field_80=list$1tuple2$2charphsTypephph_begin((o2_saved_77)) ,    0;    _for_condtionalA2=    !list$1tuple2$2charphsTypephph_end((o2_saved_77)) ,    _for_condtionalA2;    field_80=list$1tuple2$2charphsTypephph_next((o2_saved_77)) ,    0    ){
        multiple_assgin_var1=field_80;
        field_name_83=(char*)come_increment_ref_count(multiple_assgin_var1->v1);
        field_type2_84=(struct sType*)come_increment_ref_count(multiple_assgin_var1->v2);
        if(_if_conditional138=string_operator_equals(field_name_83,name_63),        _if_conditional138) {
            __dec_obj50=field_type_74;
            field_type_74=(struct sType*)come_increment_ref_count(((struct sType*)(right_value125=sType_clone(field_type2_84))));
            if(__dec_obj50) { come_call_finalizer(sType_finalize,__dec_obj50, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value125 && right_value125 != __result_obj__) { come_call_finalizer(sType_finalize,right_value125, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(field_name_83) { field_name_83 = come_decrement_ref_count(field_name_83, (void*)0, (void*)0, 0, 0, 0); }
            if(field_type2_84) { come_call_finalizer(sType_finalize,field_type2_84, (void*)0, (void*)0, 0, 0, 0, 0); }
            break;
        }
        index_75++;
        if(field_name_83) { field_name_83 = come_decrement_ref_count(field_name_83, (void*)0, (void*)0, 0, 0, 0); }
        if(field_type2_84) { come_call_finalizer(sType_finalize,field_type2_84, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    if(o2_saved_77) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,o2_saved_77, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(_if_conditional142=index_75==list$1tuple2$2charphsTypephph_length(klass_69->mFields),    _if_conditional142) {
        index_75=0;
        for(
        o2_saved_87=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_69->mFields)),field_88=list$1tuple2$2charphsTypephph_begin((o2_saved_87)) ,        0;        _for_condtionalA3=        !list$1tuple2$2charphsTypephph_end((o2_saved_87)) ,        _for_condtionalA3;        field_88=list$1tuple2$2charphsTypephph_next((o2_saved_87)) ,        0        ){
            multiple_assgin_var2=field_88;
            field_name_89=(char*)come_increment_ref_count(multiple_assgin_var2->v1);
            field_type2_90=(struct sType*)come_increment_ref_count(multiple_assgin_var2->v2);
            klass2_91=field_type2_90->mClass;
            for(
            o2_saved_92=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass2_91->mFields)),field2_93=list$1tuple2$2charphsTypephph_begin((o2_saved_92)) ,            0;            _for_condtionalA4=            !list$1tuple2$2charphsTypephph_end((o2_saved_92)) ,            _for_condtionalA4;            field2_93=list$1tuple2$2charphsTypephph_next((o2_saved_92)) ,            0            ){
                multiple_assgin_var3=field2_93;
                field_name2_94=(char*)come_increment_ref_count(multiple_assgin_var3->v1);
                field_type3_95=(struct sType*)come_increment_ref_count(multiple_assgin_var3->v2);
                if(_if_conditional143=string_operator_equals(field_name2_94,name_63),                _if_conditional143) {
                    __dec_obj51=child_field_name_76;
                    child_field_name_76=(char*)come_increment_ref_count(((char*)(right_value126=__builtin_string(field_name_89))));
                    if(__dec_obj51) { __dec_obj51 = come_decrement_ref_count(__dec_obj51, (void*)0, (void*)0, 0,0,0); }
                    if(right_value126 && right_value126 != __result_obj__) { right_value126 = come_decrement_ref_count(right_value126, (void*)0, (void*)0, 1, 0, 0); }
                    __dec_obj52=field_type_74;
                    field_type_74=(struct sType*)come_increment_ref_count(((struct sType*)(right_value127=sType_clone(field_type3_95))));
                    if(__dec_obj52) { come_call_finalizer(sType_finalize,__dec_obj52, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(right_value127 && right_value127 != __result_obj__) { come_call_finalizer(sType_finalize,right_value127, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(field_name2_94) { field_name2_94 = come_decrement_ref_count(field_name2_94, (void*)0, (void*)0, 0, 0, 0); }
                    if(field_type3_95) { come_call_finalizer(sType_finalize,field_type3_95, (void*)0, (void*)0, 0, 0, 0, 0); }
                    break;
                }
                if(field_name2_94) { field_name2_94 = come_decrement_ref_count(field_name2_94, (void*)0, (void*)0, 0, 0, 0); }
                if(field_type3_95) { come_call_finalizer(sType_finalize,field_type3_95, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            if(o2_saved_92) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,o2_saved_92, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(_if_conditional144=child_field_name_76,            _if_conditional144) {
                if(field_name_89) { field_name_89 = come_decrement_ref_count(field_name_89, (void*)0, (void*)0, 0, 0, 0); }
                if(field_type2_90) { come_call_finalizer(sType_finalize,field_type2_90, (void*)0, (void*)0, 0, 0, 0, 0); }
                break;
            }
            if(_if_conditional145=string_operator_equals(field_name_89,name_63),            _if_conditional145) {
                __dec_obj53=field_type_74;
                field_type_74=(struct sType*)come_increment_ref_count(((struct sType*)(right_value128=sType_clone(field_type2_90))));
                if(__dec_obj53) { come_call_finalizer(sType_finalize,__dec_obj53, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(right_value128 && right_value128 != __result_obj__) { come_call_finalizer(sType_finalize,right_value128, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(field_name_89) { field_name_89 = come_decrement_ref_count(field_name_89, (void*)0, (void*)0, 0, 0, 0); }
                if(field_type2_90) { come_call_finalizer(sType_finalize,field_type2_90, (void*)0, (void*)0, 0, 0, 0, 0); }
                break;
            }
            index_75++;
            if(field_name_89) { field_name_89 = come_decrement_ref_count(field_name_89, (void*)0, (void*)0, 0, 0, 0); }
            if(field_type2_90) { come_call_finalizer(sType_finalize,field_type2_90, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(o2_saved_87) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,o2_saved_87, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(_if_conditional146=index_75==list$1tuple2$2charphsTypephph_length(klass_69->mFields),        _if_conditional146) {
            err_msg(info,"field not found(%s) in %s(1)",name_63,klass_69->mName);
            __result74__ = (_Bool)0;
            if(name_63) { name_63 = come_decrement_ref_count(name_63, (void*)0, (void*)0, 0, 0, 0); }
            if(left_value_64) { come_call_finalizer(CVALUE_finalize,left_value_64, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value_65) { come_call_finalizer(CVALUE_finalize,right_value_65, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(left_type2_68) { come_call_finalizer(sType_finalize,left_type2_68, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(field_type_74) { come_call_finalizer(sType_finalize,field_type_74, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(child_field_name_76) { child_field_name_76 = come_decrement_ref_count(child_field_name_76, (void*)0, (void*)0, 0, 0, 0); }
            return __result74__;
        }
    }
    come_value_96=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value129=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 232))));
    if(right_value129 && right_value129 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value129, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(_if_conditional147=field_type_74->mHeap&&!right_type_66->mHeap,    _if_conditional147) {
        if(_if_conditional148=string_operator_equals(right_type_66->mClass->mName,"void")&&right_type_66->mPointerNum==1,        _if_conditional148) {
        }
        else {
            if(_if_conditional149=!right_type_66->mDelegate&&!right_type_66->mShare,            _if_conditional149) {
                err_msg(info,"require right value as heap object(%s)",name_63);
                __result75__ = (_Bool)0;
                if(name_63) { name_63 = come_decrement_ref_count(name_63, (void*)0, (void*)0, 0, 0, 0); }
                if(left_value_64) { come_call_finalizer(CVALUE_finalize,left_value_64, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(right_value_65) { come_call_finalizer(CVALUE_finalize,right_value_65, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(left_type2_68) { come_call_finalizer(sType_finalize,left_type2_68, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(field_type_74) { come_call_finalizer(sType_finalize,field_type_74, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(child_field_name_76) { child_field_name_76 = come_decrement_ref_count(child_field_name_76, (void*)0, (void*)0, 0, 0, 0); }
                if(come_value_96) { come_call_finalizer(CVALUE_finalize,come_value_96, (void*)0, (void*)0, 0, 0, 0, 0); }
                return __result75__;
            }
        }
    }
    check_assign_type(((char*)(right_value131=xsprintf("\%s is assigned to",((char*)(right_value130=string_to_string(name_63)))))),field_type_74,right_type_66,right_value_65,(_Bool)0,info);
    if(right_value130 && right_value130 != __result_obj__) { right_value130 = come_decrement_ref_count(right_value130, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value131 && right_value131 != __result_obj__) { right_value131 = come_decrement_ref_count(right_value131, (void*)0, (void*)0, 1, 0, 0); }
    if(_if_conditional150=field_type_74->mHeap&&right_type_66->mHeap&&field_type_74->mPointerNum>0&&right_type_66->mPointerNum>0,    _if_conditional150) {
        if(_if_conditional151=left_value_64->type->mPointerNum==1,        _if_conditional151) {
            if(_if_conditional152=child_field_name_76,            _if_conditional152) {
                c_value_97=(char*)come_increment_ref_count(((char*)(right_value132=xsprintf("%s->%s.%s",left_value_64->c_value,child_field_name_76,name_63))));
                if(right_value132 && right_value132 != __result_obj__) { right_value132 = come_decrement_ref_count(right_value132, (void*)0, (void*)0, 1, 0, 0); }
                decrement_ref_count_object(field_type_74,c_value_97,info,(_Bool)0);
                std_move(field_type_74,right_type_66,right_value_65,info);
                __dec_obj54=come_value_96->c_value;
                come_value_96->c_value=(char*)come_increment_ref_count(((char*)(right_value133=xsprintf("%s->%s.%s=%s",left_value_64->c_value,child_field_name_76,name_63,right_value_65->c_value))));
                if(__dec_obj54) { __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0,0,0); }
                if(right_value133 && right_value133 != __result_obj__) { right_value133 = come_decrement_ref_count(right_value133, (void*)0, (void*)0, 1, 0, 0); }
                if(c_value_97) { c_value_97 = come_decrement_ref_count(c_value_97, (void*)0, (void*)0, 0, 0, 0); }
            }
            else {
                c_value_98=(char*)come_increment_ref_count(((char*)(right_value134=xsprintf("%s->%s",left_value_64->c_value,name_63))));
                if(right_value134 && right_value134 != __result_obj__) { right_value134 = come_decrement_ref_count(right_value134, (void*)0, (void*)0, 1, 0, 0); }
                decrement_ref_count_object(field_type_74,c_value_98,info,(_Bool)0);
                std_move(field_type_74,right_type_66,right_value_65,info);
                __dec_obj55=come_value_96->c_value;
                come_value_96->c_value=(char*)come_increment_ref_count(((char*)(right_value135=xsprintf("%s->%s=%s",left_value_64->c_value,name_63,right_value_65->c_value))));
                if(__dec_obj55) { __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0,0,0); }
                if(right_value135 && right_value135 != __result_obj__) { right_value135 = come_decrement_ref_count(right_value135, (void*)0, (void*)0, 1, 0, 0); }
                if(c_value_98) { c_value_98 = come_decrement_ref_count(c_value_98, (void*)0, (void*)0, 0, 0, 0); }
            }
        }
        else {
            if(_if_conditional153=left_value_64->type->mPointerNum==0,            _if_conditional153) {
                if(_if_conditional154=child_field_name_76,                _if_conditional154) {
                    c_value_99=(char*)come_increment_ref_count(((char*)(right_value136=xsprintf("%s.%s.%s",left_value_64->c_value,child_field_name_76,name_63))));
                    if(right_value136 && right_value136 != __result_obj__) { right_value136 = come_decrement_ref_count(right_value136, (void*)0, (void*)0, 1, 0, 0); }
                    decrement_ref_count_object(field_type_74,c_value_99,info,(_Bool)0);
                    std_move(field_type_74,right_type_66,right_value_65,info);
                    __dec_obj56=come_value_96->c_value;
                    come_value_96->c_value=(char*)come_increment_ref_count(((char*)(right_value137=xsprintf("%s.%s.%s=%s",left_value_64->c_value,child_field_name_76,name_63,right_value_65->c_value))));
                    if(__dec_obj56) { __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0,0,0); }
                    if(right_value137 && right_value137 != __result_obj__) { right_value137 = come_decrement_ref_count(right_value137, (void*)0, (void*)0, 1, 0, 0); }
                    if(c_value_99) { c_value_99 = come_decrement_ref_count(c_value_99, (void*)0, (void*)0, 0, 0, 0); }
                }
                else {
                    c_value_100=(char*)come_increment_ref_count(((char*)(right_value138=xsprintf("%s.%s",left_value_64->c_value,name_63))));
                    if(right_value138 && right_value138 != __result_obj__) { right_value138 = come_decrement_ref_count(right_value138, (void*)0, (void*)0, 1, 0, 0); }
                    decrement_ref_count_object(field_type_74,c_value_100,info,(_Bool)0);
                    __dec_obj57=right_value_65->c_value;
                    right_value_65->c_value=(char*)come_increment_ref_count(((char*)(right_value139=increment_ref_count_object(right_value_65->type,right_value_65->c_value,info))));
                    if(__dec_obj57) { __dec_obj57 = come_decrement_ref_count(__dec_obj57, (void*)0, (void*)0, 0,0,0); }
                    if(right_value139 && right_value139 != __result_obj__) { right_value139 = come_decrement_ref_count(right_value139, (void*)0, (void*)0, 1, 0, 0); }
                    __dec_obj58=come_value_96->c_value;
                    come_value_96->c_value=(char*)come_increment_ref_count(((char*)(right_value140=xsprintf("%s.%s=%s",left_value_64->c_value,name_63,right_value_65->c_value))));
                    if(__dec_obj58) { __dec_obj58 = come_decrement_ref_count(__dec_obj58, (void*)0, (void*)0, 0,0,0); }
                    if(right_value140 && right_value140 != __result_obj__) { right_value140 = come_decrement_ref_count(right_value140, (void*)0, (void*)0, 1, 0, 0); }
                    if(c_value_100) { c_value_100 = come_decrement_ref_count(c_value_100, (void*)0, (void*)0, 0, 0, 0); }
                }
            }
            else {
                err_msg(info,"Invalid left_type. The field name is %s. The pointer num is %d.",name_63,left_value_64->type->mPointerNum);
                __result76__ = (_Bool)0;
                if(name_63) { name_63 = come_decrement_ref_count(name_63, (void*)0, (void*)0, 0, 0, 0); }
                if(left_value_64) { come_call_finalizer(CVALUE_finalize,left_value_64, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(right_value_65) { come_call_finalizer(CVALUE_finalize,right_value_65, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(left_type2_68) { come_call_finalizer(sType_finalize,left_type2_68, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(field_type_74) { come_call_finalizer(sType_finalize,field_type_74, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(child_field_name_76) { child_field_name_76 = come_decrement_ref_count(child_field_name_76, (void*)0, (void*)0, 0, 0, 0); }
                if(come_value_96) { come_call_finalizer(CVALUE_finalize,come_value_96, (void*)0, (void*)0, 0, 0, 0, 0); }
                return __result76__;
            }
        }
        right_value_id_101=get_right_value_id_from_obj((char*)come_increment_ref_count(right_value_65->c_value));
        if(_if_conditional155=right_value_id_101!=-1,        _if_conditional155) {
            remove_object_from_right_values(right_value_id_101,info);
        }
    }
    else {
        if(_if_conditional156=field_type_74->mHeap&&field_type_74->mPointerNum>0&&right_type_66->mPointerNum>0&&string_operator_equals(right_type_66->mClass->mName,"void"),        _if_conditional156) {
            if(_if_conditional157=left_value_64->type->mPointerNum==1,            _if_conditional157) {
                if(_if_conditional158=child_field_name_76,                _if_conditional158) {
                    c_value_102=(char*)come_increment_ref_count(((char*)(right_value141=xsprintf("%s->%s.%s",left_value_64->c_value,child_field_name_76,name_63))));
                    if(right_value141 && right_value141 != __result_obj__) { right_value141 = come_decrement_ref_count(right_value141, (void*)0, (void*)0, 1, 0, 0); }
                    decrement_ref_count_object(field_type_74,c_value_102,info,(_Bool)0);
                    __dec_obj59=come_value_96->c_value;
                    come_value_96->c_value=(char*)come_increment_ref_count(((char*)(right_value142=xsprintf("%s->%s.%s=%s",left_value_64->c_value,child_field_name_76,name_63,right_value_65->c_value))));
                    if(__dec_obj59) { __dec_obj59 = come_decrement_ref_count(__dec_obj59, (void*)0, (void*)0, 0,0,0); }
                    if(right_value142 && right_value142 != __result_obj__) { right_value142 = come_decrement_ref_count(right_value142, (void*)0, (void*)0, 1, 0, 0); }
                    if(c_value_102) { c_value_102 = come_decrement_ref_count(c_value_102, (void*)0, (void*)0, 0, 0, 0); }
                }
                else {
                    c_value_103=(char*)come_increment_ref_count(((char*)(right_value143=xsprintf("%s->%s",left_value_64->c_value,name_63))));
                    if(right_value143 && right_value143 != __result_obj__) { right_value143 = come_decrement_ref_count(right_value143, (void*)0, (void*)0, 1, 0, 0); }
                    decrement_ref_count_object(field_type_74,c_value_103,info,(_Bool)0);
                    __dec_obj60=come_value_96->c_value;
                    come_value_96->c_value=(char*)come_increment_ref_count(((char*)(right_value144=xsprintf("%s->%s=%s",left_value_64->c_value,name_63,right_value_65->c_value))));
                    if(__dec_obj60) { __dec_obj60 = come_decrement_ref_count(__dec_obj60, (void*)0, (void*)0, 0,0,0); }
                    if(right_value144 && right_value144 != __result_obj__) { right_value144 = come_decrement_ref_count(right_value144, (void*)0, (void*)0, 1, 0, 0); }
                    if(c_value_103) { c_value_103 = come_decrement_ref_count(c_value_103, (void*)0, (void*)0, 0, 0, 0); }
                }
            }
            else {
                if(_if_conditional159=left_value_64->type->mPointerNum==0,                _if_conditional159) {
                    if(_if_conditional160=child_field_name_76,                    _if_conditional160) {
                        c_value_104=(char*)come_increment_ref_count(((char*)(right_value145=xsprintf("%s.%s.%s",left_value_64->c_value,child_field_name_76,name_63))));
                        if(right_value145 && right_value145 != __result_obj__) { right_value145 = come_decrement_ref_count(right_value145, (void*)0, (void*)0, 1, 0, 0); }
                        decrement_ref_count_object(field_type_74,c_value_104,info,(_Bool)0);
                        __dec_obj61=come_value_96->c_value;
                        come_value_96->c_value=(char*)come_increment_ref_count(((char*)(right_value146=xsprintf("%s.%s.%s=%s",left_value_64->c_value,child_field_name_76,name_63,right_value_65->c_value))));
                        if(__dec_obj61) { __dec_obj61 = come_decrement_ref_count(__dec_obj61, (void*)0, (void*)0, 0,0,0); }
                        if(right_value146 && right_value146 != __result_obj__) { right_value146 = come_decrement_ref_count(right_value146, (void*)0, (void*)0, 1, 0, 0); }
                        if(c_value_104) { c_value_104 = come_decrement_ref_count(c_value_104, (void*)0, (void*)0, 0, 0, 0); }
                    }
                    else {
                        c_value_105=(char*)come_increment_ref_count(((char*)(right_value147=xsprintf("%s.%s",left_value_64->c_value,name_63))));
                        if(right_value147 && right_value147 != __result_obj__) { right_value147 = come_decrement_ref_count(right_value147, (void*)0, (void*)0, 1, 0, 0); }
                        decrement_ref_count_object(field_type_74,c_value_105,info,(_Bool)0);
                        __dec_obj62=come_value_96->c_value;
                        come_value_96->c_value=(char*)come_increment_ref_count(((char*)(right_value148=xsprintf("%s.%s=%s",left_value_64->c_value,name_63,right_value_65->c_value))));
                        if(__dec_obj62) { __dec_obj62 = come_decrement_ref_count(__dec_obj62, (void*)0, (void*)0, 0,0,0); }
                        if(right_value148 && right_value148 != __result_obj__) { right_value148 = come_decrement_ref_count(right_value148, (void*)0, (void*)0, 1, 0, 0); }
                        if(c_value_105) { c_value_105 = come_decrement_ref_count(c_value_105, (void*)0, (void*)0, 0, 0, 0); }
                    }
                }
                else {
                    err_msg(info,"Invalid left_type. The field name is %s. The pointer num is %d.",name_63,left_value_64->type->mPointerNum);
                    __result77__ = (_Bool)0;
                    if(name_63) { name_63 = come_decrement_ref_count(name_63, (void*)0, (void*)0, 0, 0, 0); }
                    if(left_value_64) { come_call_finalizer(CVALUE_finalize,left_value_64, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(right_value_65) { come_call_finalizer(CVALUE_finalize,right_value_65, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(left_type2_68) { come_call_finalizer(sType_finalize,left_type2_68, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(field_type_74) { come_call_finalizer(sType_finalize,field_type_74, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(child_field_name_76) { child_field_name_76 = come_decrement_ref_count(child_field_name_76, (void*)0, (void*)0, 0, 0, 0); }
                    if(come_value_96) { come_call_finalizer(CVALUE_finalize,come_value_96, (void*)0, (void*)0, 0, 0, 0, 0); }
                    return __result77__;
                }
            }
        }
        else {
            if(_if_conditional161=left_value_64->type->mPointerNum==1,            _if_conditional161) {
                if(_if_conditional162=child_field_name_76,                _if_conditional162) {
                    __dec_obj63=come_value_96->c_value;
                    come_value_96->c_value=(char*)come_increment_ref_count(((char*)(right_value149=xsprintf("%s->%s.%s=%s",left_value_64->c_value,child_field_name_76,name_63,right_value_65->c_value))));
                    if(__dec_obj63) { __dec_obj63 = come_decrement_ref_count(__dec_obj63, (void*)0, (void*)0, 0,0,0); }
                    if(right_value149 && right_value149 != __result_obj__) { right_value149 = come_decrement_ref_count(right_value149, (void*)0, (void*)0, 1, 0, 0); }
                }
                else {
                    __dec_obj64=come_value_96->c_value;
                    come_value_96->c_value=(char*)come_increment_ref_count(((char*)(right_value150=xsprintf("%s->%s=%s",left_value_64->c_value,name_63,right_value_65->c_value))));
                    if(__dec_obj64) { __dec_obj64 = come_decrement_ref_count(__dec_obj64, (void*)0, (void*)0, 0,0,0); }
                    if(right_value150 && right_value150 != __result_obj__) { right_value150 = come_decrement_ref_count(right_value150, (void*)0, (void*)0, 1, 0, 0); }
                }
            }
            else {
                if(_if_conditional163=left_value_64->type->mPointerNum==0,                _if_conditional163) {
                    if(_if_conditional164=child_field_name_76,                    _if_conditional164) {
                        __dec_obj65=come_value_96->c_value;
                        come_value_96->c_value=(char*)come_increment_ref_count(((char*)(right_value151=xsprintf("%s.%s.%s=%s",left_value_64->c_value,child_field_name_76,name_63,right_value_65->c_value))));
                        if(__dec_obj65) { __dec_obj65 = come_decrement_ref_count(__dec_obj65, (void*)0, (void*)0, 0,0,0); }
                        if(right_value151 && right_value151 != __result_obj__) { right_value151 = come_decrement_ref_count(right_value151, (void*)0, (void*)0, 1, 0, 0); }
                    }
                    else {
                        __dec_obj66=come_value_96->c_value;
                        come_value_96->c_value=(char*)come_increment_ref_count(((char*)(right_value152=xsprintf("%s.%s=%s",left_value_64->c_value,name_63,right_value_65->c_value))));
                        if(__dec_obj66) { __dec_obj66 = come_decrement_ref_count(__dec_obj66, (void*)0, (void*)0, 0,0,0); }
                        if(right_value152 && right_value152 != __result_obj__) { right_value152 = come_decrement_ref_count(right_value152, (void*)0, (void*)0, 1, 0, 0); }
                    }
                }
                else {
                    err_msg(info,"Invalid left_type. The field name is %s. The pointer num is %d.",name_63,left_value_64->type->mPointerNum);
                    __result78__ = (_Bool)0;
                    if(name_63) { name_63 = come_decrement_ref_count(name_63, (void*)0, (void*)0, 0, 0, 0); }
                    if(left_value_64) { come_call_finalizer(CVALUE_finalize,left_value_64, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(right_value_65) { come_call_finalizer(CVALUE_finalize,right_value_65, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(left_type2_68) { come_call_finalizer(sType_finalize,left_type2_68, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(field_type_74) { come_call_finalizer(sType_finalize,field_type_74, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(child_field_name_76) { child_field_name_76 = come_decrement_ref_count(child_field_name_76, (void*)0, (void*)0, 0, 0, 0); }
                    if(come_value_96) { come_call_finalizer(CVALUE_finalize,come_value_96, (void*)0, (void*)0, 0, 0, 0, 0); }
                    return __result78__;
                }
            }
        }
    }
    __dec_obj67=come_value_96->type;
    come_value_96->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value153=sType_clone(field_type_74))));
    if(__dec_obj67) { come_call_finalizer(sType_finalize,__dec_obj67, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value153 && right_value153 != __result_obj__) { come_call_finalizer(sType_finalize,right_value153, (void*)0, (void*)0, 0, 1, 0, 0); }
    come_value_96->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_96));
    add_come_last_code(info,"%s;\n",come_value_96->c_value);
    __result79__ = (_Bool)1;
    if(name_63) { name_63 = come_decrement_ref_count(name_63, (void*)0, (void*)0, 0, 0, 0); }
    if(left_value_64) { come_call_finalizer(CVALUE_finalize,left_value_64, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_65) { come_call_finalizer(CVALUE_finalize,right_value_65, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(left_type2_68) { come_call_finalizer(sType_finalize,left_type2_68, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(field_type_74) { come_call_finalizer(sType_finalize,field_type_74, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(child_field_name_76) { child_field_name_76 = come_decrement_ref_count(child_field_name_76, (void*)0, (void*)0, 0, 0, 0); }
    if(come_value_96) { come_call_finalizer(CVALUE_finalize,come_value_96, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result79__;
    if(name_63) { name_63 = come_decrement_ref_count(name_63, (void*)0, (void*)0, 0, 0, 0); }
    if(left_value_64) { come_call_finalizer(CVALUE_finalize,left_value_64, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_65) { come_call_finalizer(CVALUE_finalize,right_value_65, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(left_type2_68) { come_call_finalizer(sType_finalize,left_type2_68, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(field_type_74) { come_call_finalizer(sType_finalize,field_type_74, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(child_field_name_76) { child_field_name_76 = come_decrement_ref_count(child_field_name_76, (void*)0, (void*)0, 0, 0, 0); }
    if(come_value_96) { come_call_finalizer(CVALUE_finalize,come_value_96, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct optional$2sClasspbool* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
struct sClass* default_value_70;
unsigned int hash_71;
unsigned int it_72;
_Bool _while_condtional10;
_Bool _if_conditional128;
void* right_value114;
_Bool _if_conditional129;
void* right_value115;
void* right_value116;
struct optional$2sClasspbool* __result59__;
_Bool _if_conditional130;
_Bool _if_conditional131;
void* right_value117;
void* right_value118;
struct optional$2sClasspbool* __result60__;
void* right_value119;
void* right_value120;
struct optional$2sClasspbool* __result61__;
void* right_value121;
void* right_value122;
struct optional$2sClasspbool* __result62__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_70, 0, sizeof(struct sClass*));
memset(&hash_71, 0, sizeof(unsigned int));
memset(&it_72, 0, sizeof(unsigned int));
        memset(&default_value_70,0,sizeof(struct sClass*));
        hash_71=string_get_hash_key(((char*)key))%self->size;
        it_72=hash_71;
        while(_while_condtional10=(_Bool)1,        _while_condtional10) {
            if(_if_conditional128=self->item_existance[it_72],            _if_conditional128) {
                if(_if_conditional129=optional$2boolbool_value(((struct optional$2boolbool*)(right_value114=string_equals(self->keys[it_72],key)))),                (right_value114 && right_value114 != __result_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value114, (void*)0, (void*)0, 0, 1, 0, 0):0,
                _if_conditional129) {
                    __result59__ = __result_obj__ = ((struct optional$2sClasspbool*)(right_value116=optional$2sClasspbool_initialize((struct optional$2sClasspbool*)come_increment_ref_count(((struct optional$2sClasspbool*)(right_value115=(struct optional$2sClasspbool*)come_calloc(1, sizeof(struct optional$2sClasspbool)*(1), "./comelang2.h", 1600)))),self->items[it_72],(_Bool)1)));
                    if(right_value115 && right_value115 != __result_obj__) { right_value115 = come_decrement_ref_count(right_value115, (void*)0, (void*)0, 1, 0, 0); }
                    return __result59__;
                }
                it_72++;
                if(_if_conditional130=it_72>=self->size,                _if_conditional130) {
                    it_72=0;
                }
                else {
                    if(_if_conditional131=it_72==hash_71,                    _if_conditional131) {
                        __result60__ = __result_obj__ = ((struct optional$2sClasspbool*)(right_value118=optional$2sClasspbool_initialize(((struct optional$2sClasspbool*)(right_value117=(struct optional$2sClasspbool*)come_calloc(1, sizeof(struct optional$2sClasspbool)*(1), "./comelang2.h", 1609))),default_value_70,(_Bool)0)));
                        if(right_value117 && right_value117 != __result_obj__) { right_value117 = come_decrement_ref_count(right_value117, (void*)0, (void*)0, 1, 0, 0); }
                        return __result60__;
                    }
                }
            }
            else {
                __result61__ = __result_obj__ = ((struct optional$2sClasspbool*)(right_value120=optional$2sClasspbool_initialize(((struct optional$2sClasspbool*)(right_value119=(struct optional$2sClasspbool*)come_calloc(1, sizeof(struct optional$2sClasspbool)*(1), "./comelang2.h", 1613))),default_value_70,(_Bool)0)));
                if(right_value119 && right_value119 != __result_obj__) { right_value119 = come_decrement_ref_count(right_value119, (void*)0, (void*)0, 1, 0, 0); }
                return __result61__;
            }
        }
        __result62__ = __result_obj__ = ((struct optional$2sClasspbool*)(right_value122=optional$2sClasspbool_initialize(((struct optional$2sClasspbool*)(right_value121=(struct optional$2sClasspbool*)come_calloc(1, sizeof(struct optional$2sClasspbool)*(1), "./comelang2.h", 1617))),default_value_70,(_Bool)0)));
        if(right_value121 && right_value121 != __result_obj__) { right_value121 = come_decrement_ref_count(right_value121, (void*)0, (void*)0, 1, 0, 0); }
        return __result62__;
}

static struct optional$2sClasspbool* optional$2sClasspbool_initialize(struct optional$2sClasspbool* self, struct sClass* v1, _Bool v2){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
struct optional$2sClasspbool* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
                        self->v1=v1;
                        self->v2=v2;
                        __result58__ = __result_obj__ = self;
                        if(self) { come_call_finalizer(optional$2sClasspboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result58__;
                        if(self) { come_call_finalizer(optional$2sClasspboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2sClasspboolp_finalize(struct optional$2sClasspbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct sClass* optional$2sClasspbool_value(struct optional$2sClasspbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional132;
struct sClass* default_value_73;
struct sClass* __result63__;
struct sClass* __result64__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_73, 0, sizeof(struct sClass*));
        if(_if_conditional132=self==((void*)0),        _if_conditional132) {
            memset(&default_value_73,0,sizeof(struct sClass*));
            __result63__ = __result_obj__ = default_value_73;
            return __result63__;
        }
        else {
            __result64__ = __result_obj__ = self->v1;
            return __result64__;
        }
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional134;
struct tuple2$2charphsTypeph* result_78;
struct tuple2$2charphsTypeph* __result66__;
_Bool _if_conditional135;
struct tuple2$2charphsTypeph* __result67__;
struct tuple2$2charphsTypeph* result_79;
struct tuple2$2charphsTypeph* __result68__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_78, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_79, 0, sizeof(struct tuple2$2charphsTypeph*));
        if(_if_conditional134=self==((void*)0),        _if_conditional134) {
            memset(&result_78,0,sizeof(struct tuple2$2charphsTypeph*));
            __result66__ = __result_obj__ = result_78;
            return __result66__;
        }
        self->it=self->head;
        if(_if_conditional135=self->it,        _if_conditional135) {
            __result67__ = __result_obj__ = self->it->item;
            return __result67__;
        }
        memset(&result_79,0,sizeof(struct tuple2$2charphsTypeph*));
        __result68__ = __result_obj__ = result_79;
        return __result68__;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __result69__;
memset(&__result_obj__, 0, sizeof(void*));
        __result69__ = self==((void*)0)||self->it==((void*)0);
        return __result69__;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional136;
struct tuple2$2charphsTypeph* result_81;
struct tuple2$2charphsTypeph* __result70__;
_Bool _if_conditional137;
struct tuple2$2charphsTypeph* __result71__;
struct tuple2$2charphsTypeph* result_82;
struct tuple2$2charphsTypeph* __result72__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_81, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_82, 0, sizeof(struct tuple2$2charphsTypeph*));
        if(_if_conditional136=self==((void*)0)||self->it==((void*)0),        _if_conditional136) {
            memset(&result_81,0,sizeof(struct tuple2$2charphsTypeph*));
            __result70__ = __result_obj__ = result_81;
            return __result70__;
        }
        self->it=self->it->next;
        if(_if_conditional137=self->it,        _if_conditional137) {
            __result71__ = __result_obj__ = self->it->item;
            return __result71__;
        }
        memset(&result_82,0,sizeof(struct tuple2$2charphsTypeph*));
        __result72__ = __result_obj__ = result_82;
        return __result72__;
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
struct list_item$1tuple2$2charphsTypephph* it_85;
_Bool _while_condtional11;
struct list_item$1tuple2$2charphsTypephph* prev_it_86;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_85, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_86, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
        it_85=self->head;
        while(_while_condtional11=it_85!=((void*)0),        _while_condtional11) {
            prev_it_86=it_85;
            it_85=it_85->next;
            if(prev_it_86) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,prev_it_86, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional139;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional139=self!=((void*)0)&&self->item!=((void*)0),                _if_conditional139) {
                    if(self->item) { come_call_finalizer(tuple2$2charphsTypephp_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional140;
_Bool _if_conditional141;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional140=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional140) {
                            if(self->v1) { self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, 0); }
                        }
                        if(_if_conditional141=self!=((void*)0)&&self->v2!=((void*)0),                        _if_conditional141) {
                            if(self->v2) { come_call_finalizer(sType_finalize,self->v2, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
}

static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
int __result73__;
memset(&__result_obj__, 0, sizeof(void*));
        __result73__ = self->len;
        return __result73__;
}

int sStoreFieldNode_sline(struct sStoreFieldNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
int __result80__;
memset(&__result_obj__, 0, sizeof(void*));
    __result80__ = self->sline;
    return __result80__;
}

char* sStoreFieldNode_sname(struct sStoreFieldNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value154;
char* __result81__;
memset(&__result_obj__, 0, sizeof(void*));
    __result81__ = __result_obj__ = ((char*)(right_value154=__builtin_string(self->sname)));
    return __result81__;
}

struct sNullCheckNode* sNullCheckNode_initialize(struct sNullCheckNode* self, struct sNode* left, _Bool only_null_checker, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value155;
char* __dec_obj68;
void* right_value156;
struct sNode* __dec_obj69;
struct sNullCheckNode* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj68=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value155=__builtin_string(info->sname))));
    if(__dec_obj68) { __dec_obj68 = come_decrement_ref_count(__dec_obj68, (void*)0, (void*)0, 0,0,0); }
    if(right_value155 && right_value155 != __result_obj__) { right_value155 = come_decrement_ref_count(right_value155, (void*)0, (void*)0, 1, 0, 0); }
    __dec_obj69=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value156=sNode_clone(left))));
    if(__dec_obj69) { __dec_obj69 = come_decrement_ref_count(__dec_obj69, ((struct sNode*)__dec_obj69)->finalize, ((struct sNode*)__dec_obj69)->_protocol_obj, 0,0,0); }
    if(right_value156 && right_value156 != __result_obj__) { right_value156 = come_decrement_ref_count(right_value156, ((struct sNode*)right_value156)->finalize, ((struct sNode*)right_value156)->_protocol_obj, 1, 0, 0); } 
    self->mOnlyNullCecker=only_null_checker;
    __result82__ = __result_obj__ = self;
    if(self) { come_call_finalizer(sNullCheckNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result82__;
    if(self) { come_call_finalizer(sNullCheckNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

_Bool sNullCheckNode_terminated(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __result83__;
memset(&__result_obj__, 0, sizeof(void*));
    __result83__ = (_Bool)0;
    return __result83__;
}

char* sNullCheckNode_kind(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value157;
char* __result84__;
memset(&__result_obj__, 0, sizeof(void*));
    __result84__ = __result_obj__ = ((char*)(right_value157=__builtin_string("sNullCheckNode")));
    return __result84__;
}

_Bool sNullCheckNode_compile(struct sNullCheckNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
struct sNode* left_106;
_Bool _if_conditional167;
_Bool __result85__;
void* right_value158;
struct CVALUE* left_value_107;
_Bool _if_conditional168;
void* right_value159;
char* method_name_108;
_Bool _if_conditional173;
struct sType* obj_type_111;
_Bool _if_conditional174;
struct sType* obj_type2_112;
void* right_value161;
void* right_value162;
char* __dec_obj70;
void* right_value163;
struct sFun* fun_113;
_Bool _if_conditional175;
_Bool __result90__;
void* right_value164;
struct sType* type_114;
void* right_value165;
struct CVALUE* come_value_115;
void* right_value166;
char* __dec_obj71;
void* right_value167;
struct sType* __dec_obj72;
_Bool _if_conditional176;
_Bool _if_conditional177;
void* right_value168;
struct CVALUE* come_value_116;
void* right_value169;
void* right_value170;
char* __dec_obj73;
void* right_value171;
struct sType* __dec_obj74;
_Bool __result92__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_106, 0, sizeof(struct sNode*));
memset(&left_value_107, 0, sizeof(struct CVALUE*));
memset(&method_name_108, 0, sizeof(char*));
memset(&obj_type_111, 0, sizeof(struct sType*));
memset(&obj_type2_112, 0, sizeof(struct sType*));
memset(&fun_113, 0, sizeof(struct sFun*));
memset(&type_114, 0, sizeof(struct sType*));
memset(&come_value_115, 0, sizeof(struct CVALUE*));
memset(&come_value_116, 0, sizeof(struct CVALUE*));
    left_106=self->mLeft;
    if(_if_conditional167=!node_compile(left_106,info),    _if_conditional167) {
        __result85__ = (_Bool)0;
        return __result85__;
    }
    left_value_107=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value158=get_value_from_stack(-1,info))));
    if(right_value158 && right_value158 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value158, (void*)0, (void*)0, 0, 1, 0, 0); }
    dec_stack_ptr(1,info);
    if(_if_conditional168=!self->mOnlyNullCecker&&left_value_107->type->mNoSolvedGenericsType&&left_value_107->type->mNoSolvedGenericsType->v1&&left_value_107->type->mNoSolvedGenericsType->v1->mClass&&string_operator_equals(left_value_107->type->mNoSolvedGenericsType->v1->mClass->mName,"optional"),    _if_conditional168) {
        method_name_108=(char*)come_increment_ref_count(((char*)(right_value159=create_method_name(left_value_107->type,(_Bool)0,"expect",info))));
        if(right_value159 && right_value159 != __result_obj__) { right_value159 = come_decrement_ref_count(right_value159, (void*)0, (void*)0, 1, 0, 0); }
        if(_if_conditional173=map$2charphsFunph_at(info->funcs,method_name_108,((void*)0))==((void*)0),        _if_conditional173) {
            obj_type_111=left_value_107->type->mNoSolvedGenericsType->v1;
            if(_if_conditional174=list$1sTypeph_length(obj_type_111->mGenericsTypes)>0,            _if_conditional174) {
                obj_type2_112=left_value_107->type;
                __dec_obj70=method_name_108;
                method_name_108=(char*)come_increment_ref_count(((char*)(right_value162=make_generics_function(obj_type2_112,(char*)come_increment_ref_count(((char*)(right_value161=__builtin_string("expect")))),info))));
                if(__dec_obj70) { __dec_obj70 = come_decrement_ref_count(__dec_obj70, (void*)0, (void*)0, 0,0,0); }
                if(right_value161 && right_value161 != __result_obj__) { right_value161 = come_decrement_ref_count(right_value161, (void*)0, (void*)0, 1, 0, 0); }
                if(right_value162 && right_value162 != __result_obj__) { right_value162 = come_decrement_ref_count(right_value162, (void*)0, (void*)0, 1, 0, 0); }
            }
            else {
                err_msg(info,"require expect implementation(%s)",left_value_107->type->mClass->mName);
                exit(1);
            }
        }
        fun_113=optional$2sFunpbool_value(((struct optional$2sFunpbool*)(right_value163=map$2charphsFunphp_operator_load_element(info->funcs,method_name_108))));
        if(right_value163 && right_value163 != __result_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value163, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(_if_conditional175=fun_113==((void*)0),        _if_conditional175) {
            err_msg(info,"function not found(%s)",method_name_108);
            __result90__ = (_Bool)1;
            if(method_name_108) { method_name_108 = come_decrement_ref_count(method_name_108, (void*)0, (void*)0, 0, 0, 0); }
            if(left_value_107) { come_call_finalizer(CVALUE_finalize,left_value_107, (void*)0, (void*)0, 0, 0, 0, 0); }
            return __result90__;
        }
        type_114=(struct sType*)come_increment_ref_count(((struct sType*)(right_value164=solve_generics(fun_113->mResultType,left_value_107->type,info))));
        if(right_value164 && right_value164 != __result_obj__) { come_call_finalizer(sType_finalize,right_value164, (void*)0, (void*)0, 0, 1, 0, 0); }
        come_value_115=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value165=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 427))));
        if(right_value165 && right_value165 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value165, (void*)0, (void*)0, 0, 1, 0, 0); }
        __dec_obj71=come_value_115->c_value;
        come_value_115->c_value=(char*)come_increment_ref_count(((char*)(right_value166=xsprintf("%s(%s)",method_name_108,left_value_107->c_value))));
        if(__dec_obj71) { __dec_obj71 = come_decrement_ref_count(__dec_obj71, (void*)0, (void*)0, 0,0,0); }
        if(right_value166 && right_value166 != __result_obj__) { right_value166 = come_decrement_ref_count(right_value166, (void*)0, (void*)0, 1, 0, 0); }
        __dec_obj72=come_value_115->type;
        come_value_115->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value167=sType_clone(type_114))));
        if(__dec_obj72) { come_call_finalizer(sType_finalize,__dec_obj72, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value167 && right_value167 != __result_obj__) { come_call_finalizer(sType_finalize,right_value167, (void*)0, (void*)0, 0, 1, 0, 0); }
        come_value_115->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_115));
        add_come_last_code(info,"%s;\n",come_value_115->c_value);
        if(method_name_108) { method_name_108 = come_decrement_ref_count(method_name_108, (void*)0, (void*)0, 0, 0, 0); }
        if(type_114) { come_call_finalizer(sType_finalize,type_114, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(come_value_115) { come_call_finalizer(CVALUE_finalize,come_value_115, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    else {
        if(_if_conditional176=!gComeDebug,        _if_conditional176) {
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_107));
        }
        else {
            if(_if_conditional177=left_value_107->type->mPointerNum>0,            _if_conditional177) {
                come_value_116=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value168=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 441))));
                if(right_value168 && right_value168 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value168, (void*)0, (void*)0, 0, 1, 0, 0); }
                __dec_obj73=come_value_116->c_value;
                come_value_116->c_value=(char*)come_increment_ref_count(((char*)(right_value170=xsprintf("((%s)come_null_check(%s, \"%s\", %d))",optional$2charphbool_expect(((struct optional$2charphbool*)(right_value169=make_type_name_string(left_value_107->type,(_Bool)0,(_Bool)0,(_Bool)0,info)))),left_value_107->c_value,info->sname,info->sline))));
                if(__dec_obj73) { __dec_obj73 = come_decrement_ref_count(__dec_obj73, (void*)0, (void*)0, 0,0,0); }
                if(right_value169 && right_value169 != __result_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value169, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value170 && right_value170 != __result_obj__) { right_value170 = come_decrement_ref_count(right_value170, (void*)0, (void*)0, 1, 0, 0); }
                __dec_obj74=come_value_116->type;
                come_value_116->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value171=sType_clone(left_value_107->type))));
                if(__dec_obj74) { come_call_finalizer(sType_finalize,__dec_obj74, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(right_value171 && right_value171 != __result_obj__) { come_call_finalizer(sType_finalize,right_value171, (void*)0, (void*)0, 0, 1, 0, 0); }
                come_value_116->var=((void*)0);
                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_116));
                add_come_last_code(info,"%s;\n",come_value_116->c_value);
                if(come_value_116) { come_call_finalizer(CVALUE_finalize,come_value_116, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            else {
                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_107));
            }
        }
    }
    __result92__ = (_Bool)1;
    if(left_value_107) { come_call_finalizer(CVALUE_finalize,left_value_107, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result92__;
    if(left_value_107) { come_call_finalizer(CVALUE_finalize,left_value_107, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
unsigned int hash_109;
unsigned int it_110;
_Bool _while_condtional12;
_Bool _if_conditional169;
void* right_value160;
_Bool _if_conditional170;
struct sFun* __result86__;
_Bool _if_conditional171;
_Bool _if_conditional172;
struct sFun* __result87__;
struct sFun* __result88__;
struct sFun* __result89__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_109, 0, sizeof(unsigned int));
memset(&it_110, 0, sizeof(unsigned int));
            hash_109=string_get_hash_key(((char*)key))%self->size;
            it_110=hash_109;
            while(_while_condtional12=(_Bool)1,            _while_condtional12) {
                if(_if_conditional169=self->item_existance[it_110],                _if_conditional169) {
                    if(_if_conditional170=optional$2boolbool_value(((struct optional$2boolbool*)(right_value160=string_equals(self->keys[it_110],key)))),                    (right_value160 && right_value160 != __result_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value160, (void*)0, (void*)0, 0, 1, 0, 0):0,
                    _if_conditional170) {
                        __result86__ = __result_obj__ = self->items[it_110];
                        return __result86__;
                    }
                    it_110++;
                    if(_if_conditional171=it_110>=self->size,                    _if_conditional171) {
                        it_110=0;
                    }
                    else {
                        if(_if_conditional172=it_110==hash_109,                        _if_conditional172) {
                            __result87__ = __result_obj__ = default_value;
                            return __result87__;
                        }
                    }
                }
                else {
                    __result88__ = __result_obj__ = default_value;
                    return __result88__;
                }
            }
            __result89__ = __result_obj__ = default_value;
            return __result89__;
}

static char* optional$2charphbool_expect(struct optional$2charphbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional178;
char* __result91__;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional178=!self->v2,                    _if_conditional178) {
                        puts("Exception: at");
                        exception_stackframe();
                        puts("abort.");
                        exit(2);
                    }
                    __result91__ = __result_obj__ = self->v1;
                    return __result91__;
}

static void optional$2charphboolp_finalize(struct optional$2charphbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional179;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional179=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional179) {
                        if(self->v1) { self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, 0); }
                    }
}

int sNullCheckNode_sline(struct sNullCheckNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
int __result93__;
memset(&__result_obj__, 0, sizeof(void*));
    __result93__ = self->sline;
    return __result93__;
}

char* sNullCheckNode_sname(struct sNullCheckNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value172;
char* __result94__;
memset(&__result_obj__, 0, sizeof(void*));
    __result94__ = __result_obj__ = ((char*)(right_value172=__builtin_string(self->sname)));
    return __result94__;
}

struct sRangeCheckNode* sRangeCheckNode_initialize(struct sRangeCheckNode* self, struct sNode* left, struct sNode* begin, struct sNode* end, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value173;
char* __dec_obj75;
void* right_value174;
struct sNode* __dec_obj76;
void* right_value175;
struct sNode* __dec_obj77;
void* right_value176;
struct sNode* __dec_obj78;
struct sRangeCheckNode* __result95__;
memset(&__result_obj__, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj75=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value173=__builtin_string(info->sname))));
    if(__dec_obj75) { __dec_obj75 = come_decrement_ref_count(__dec_obj75, (void*)0, (void*)0, 0,0,0); }
    if(right_value173 && right_value173 != __result_obj__) { right_value173 = come_decrement_ref_count(right_value173, (void*)0, (void*)0, 1, 0, 0); }
    __dec_obj76=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value174=sNode_clone(left))));
    if(__dec_obj76) { __dec_obj76 = come_decrement_ref_count(__dec_obj76, ((struct sNode*)__dec_obj76)->finalize, ((struct sNode*)__dec_obj76)->_protocol_obj, 0,0,0); }
    if(right_value174 && right_value174 != __result_obj__) { right_value174 = come_decrement_ref_count(right_value174, ((struct sNode*)right_value174)->finalize, ((struct sNode*)right_value174)->_protocol_obj, 1, 0, 0); } 
    __dec_obj77=self->mBegin;
    self->mBegin=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value175=sNode_clone(begin))));
    if(__dec_obj77) { __dec_obj77 = come_decrement_ref_count(__dec_obj77, ((struct sNode*)__dec_obj77)->finalize, ((struct sNode*)__dec_obj77)->_protocol_obj, 0,0,0); }
    if(right_value175 && right_value175 != __result_obj__) { right_value175 = come_decrement_ref_count(right_value175, ((struct sNode*)right_value175)->finalize, ((struct sNode*)right_value175)->_protocol_obj, 1, 0, 0); } 
    __dec_obj78=self->mEnd;
    self->mEnd=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value176=sNode_clone(end))));
    if(__dec_obj78) { __dec_obj78 = come_decrement_ref_count(__dec_obj78, ((struct sNode*)__dec_obj78)->finalize, ((struct sNode*)__dec_obj78)->_protocol_obj, 0,0,0); }
    if(right_value176 && right_value176 != __result_obj__) { right_value176 = come_decrement_ref_count(right_value176, ((struct sNode*)right_value176)->finalize, ((struct sNode*)right_value176)->_protocol_obj, 1, 0, 0); } 
    __result95__ = __result_obj__ = self;
    if(self) { come_call_finalizer(sRangeCheckNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result95__;
    if(self) { come_call_finalizer(sRangeCheckNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

_Bool sRangeCheckNode_terminated(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __result96__;
memset(&__result_obj__, 0, sizeof(void*));
    __result96__ = (_Bool)0;
    return __result96__;
}

char* sRangeCheckNode_kind(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value177;
char* __result97__;
memset(&__result_obj__, 0, sizeof(void*));
    __result97__ = __result_obj__ = ((char*)(right_value177=__builtin_string("sRangeCheckNode")));
    return __result97__;
}

_Bool sRangeCheckNode_compile(struct sRangeCheckNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
struct sNode* left_117;
_Bool _if_conditional184;
_Bool __result98__;
void* right_value178;
struct CVALUE* left_value_118;
struct sNode* begin_119;
_Bool _if_conditional185;
_Bool __result99__;
void* right_value179;
struct CVALUE* begin_value_120;
struct sNode* end_121;
_Bool _if_conditional186;
_Bool __result100__;
void* right_value180;
struct CVALUE* end_value_122;
_Bool _if_conditional187;
_Bool _if_conditional188;
void* right_value181;
struct CVALUE* come_value_123;
void* right_value182;
void* right_value183;
char* __dec_obj79;
void* right_value184;
struct sType* __dec_obj80;
void* right_value185;
struct CVALUE* come_value_124;
void* right_value186;
void* right_value187;
char* __dec_obj81;
void* right_value188;
struct sType* __dec_obj82;
_Bool __result101__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_117, 0, sizeof(struct sNode*));
memset(&left_value_118, 0, sizeof(struct CVALUE*));
memset(&begin_119, 0, sizeof(struct sNode*));
memset(&begin_value_120, 0, sizeof(struct CVALUE*));
memset(&end_121, 0, sizeof(struct sNode*));
memset(&end_value_122, 0, sizeof(struct CVALUE*));
memset(&come_value_123, 0, sizeof(struct CVALUE*));
memset(&come_value_124, 0, sizeof(struct CVALUE*));
    left_117=self->mLeft;
    if(_if_conditional184=!node_compile(left_117,info),    _if_conditional184) {
        __result98__ = (_Bool)0;
        return __result98__;
    }
    left_value_118=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value178=get_value_from_stack(-1,info))));
    if(right_value178 && right_value178 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value178, (void*)0, (void*)0, 0, 1, 0, 0); }
    dec_stack_ptr(1,info);
    begin_119=self->mBegin;
    if(_if_conditional185=!node_compile(begin_119,info),    _if_conditional185) {
        __result99__ = (_Bool)0;
        if(left_value_118) { come_call_finalizer(CVALUE_finalize,left_value_118, (void*)0, (void*)0, 0, 0, 0, 0); }
        return __result99__;
    }
    begin_value_120=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value179=get_value_from_stack(-1,info))));
    if(right_value179 && right_value179 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value179, (void*)0, (void*)0, 0, 1, 0, 0); }
    dec_stack_ptr(1,info);
    end_121=self->mEnd;
    if(_if_conditional186=!node_compile(end_121,info),    _if_conditional186) {
        __result100__ = (_Bool)0;
        if(left_value_118) { come_call_finalizer(CVALUE_finalize,left_value_118, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(begin_value_120) { come_call_finalizer(CVALUE_finalize,begin_value_120, (void*)0, (void*)0, 0, 0, 0, 0); }
        return __result100__;
    }
    end_value_122=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value180=get_value_from_stack(-1,info))));
    if(right_value180 && right_value180 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value180, (void*)0, (void*)0, 0, 1, 0, 0); }
    dec_stack_ptr(1,info);
    if(_if_conditional187=left_value_118->type->mPointerNum>0,    _if_conditional187) {
        if(_if_conditional188=!gComeDebug,        _if_conditional188) {
            come_value_123=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value181=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 531))));
            if(right_value181 && right_value181 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value181, (void*)0, (void*)0, 0, 1, 0, 0); }
            __dec_obj79=come_value_123->c_value;
            come_value_123->c_value=(char*)come_increment_ref_count(((char*)(right_value183=xsprintf("(*((%s)%s))",optional$2charphbool_expect(((struct optional$2charphbool*)(right_value182=make_type_name_string(left_value_118->type,(_Bool)0,(_Bool)0,(_Bool)0,info)))),left_value_118->c_value))));
            if(__dec_obj79) { __dec_obj79 = come_decrement_ref_count(__dec_obj79, (void*)0, (void*)0, 0,0,0); }
            if(right_value182 && right_value182 != __result_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value182, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value183 && right_value183 != __result_obj__) { right_value183 = come_decrement_ref_count(right_value183, (void*)0, (void*)0, 1, 0, 0); }
            left_value_118->type->mPointerNum--;
            __dec_obj80=come_value_123->type;
            come_value_123->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value184=sType_clone(left_value_118->type))));
            if(__dec_obj80) { come_call_finalizer(sType_finalize,__dec_obj80, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value184 && right_value184 != __result_obj__) { come_call_finalizer(sType_finalize,right_value184, (void*)0, (void*)0, 0, 1, 0, 0); }
            come_value_123->var=((void*)0);
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_123));
            add_come_last_code(info,"%s;\n",come_value_123->c_value);
            if(come_value_123) { come_call_finalizer(CVALUE_finalize,come_value_123, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        else {
            come_value_124=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value185=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 544))));
            if(right_value185 && right_value185 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value185, (void*)0, (void*)0, 0, 1, 0, 0); }
            __dec_obj81=come_value_124->c_value;
            come_value_124->c_value=(char*)come_increment_ref_count(((char*)(right_value187=xsprintf("(*((%s)come_range_check(%s, %s, %s, \"%s\", %d)))",optional$2charphbool_expect(((struct optional$2charphbool*)(right_value186=make_type_name_string(left_value_118->type,(_Bool)0,(_Bool)0,(_Bool)0,info)))),left_value_118->c_value,begin_value_120->c_value,end_value_122->c_value,info->sname,info->sline))));
            if(__dec_obj81) { __dec_obj81 = come_decrement_ref_count(__dec_obj81, (void*)0, (void*)0, 0,0,0); }
            if(right_value186 && right_value186 != __result_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value186, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value187 && right_value187 != __result_obj__) { right_value187 = come_decrement_ref_count(right_value187, (void*)0, (void*)0, 1, 0, 0); }
            left_value_118->type->mPointerNum--;
            __dec_obj82=come_value_124->type;
            come_value_124->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value188=sType_clone(left_value_118->type))));
            if(__dec_obj82) { come_call_finalizer(sType_finalize,__dec_obj82, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value188 && right_value188 != __result_obj__) { come_call_finalizer(sType_finalize,right_value188, (void*)0, (void*)0, 0, 1, 0, 0); }
            come_value_124->var=((void*)0);
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_124));
            add_come_last_code(info,"%s;\n",come_value_124->c_value);
            if(come_value_124) { come_call_finalizer(CVALUE_finalize,come_value_124, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
    }
    else {
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_118));
    }
    __result101__ = (_Bool)1;
    if(left_value_118) { come_call_finalizer(CVALUE_finalize,left_value_118, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(begin_value_120) { come_call_finalizer(CVALUE_finalize,begin_value_120, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(end_value_122) { come_call_finalizer(CVALUE_finalize,end_value_122, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result101__;
    if(left_value_118) { come_call_finalizer(CVALUE_finalize,left_value_118, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(begin_value_120) { come_call_finalizer(CVALUE_finalize,begin_value_120, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(end_value_122) { come_call_finalizer(CVALUE_finalize,end_value_122, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sRangeCheckNode_sline(struct sRangeCheckNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
int __result102__;
memset(&__result_obj__, 0, sizeof(void*));
    __result102__ = self->sline;
    return __result102__;
}

char* sRangeCheckNode_sname(struct sRangeCheckNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value189;
char* __result103__;
memset(&__result_obj__, 0, sizeof(void*));
    __result103__ = __result_obj__ = ((char*)(right_value189=__builtin_string(self->sname)));
    return __result103__;
}

struct sExceptionGetValueNode* sExceptionGetValueNode_initialize(struct sExceptionGetValueNode* self, struct sNode* left, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value190;
char* __dec_obj83;
void* right_value191;
struct sNode* __dec_obj84;
struct sExceptionGetValueNode* __result104__;
memset(&__result_obj__, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj83=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value190=__builtin_string(info->sname))));
    if(__dec_obj83) { __dec_obj83 = come_decrement_ref_count(__dec_obj83, (void*)0, (void*)0, 0,0,0); }
    if(right_value190 && right_value190 != __result_obj__) { right_value190 = come_decrement_ref_count(right_value190, (void*)0, (void*)0, 1, 0, 0); }
    __dec_obj84=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value191=sNode_clone(left))));
    if(__dec_obj84) { __dec_obj84 = come_decrement_ref_count(__dec_obj84, ((struct sNode*)__dec_obj84)->finalize, ((struct sNode*)__dec_obj84)->_protocol_obj, 0,0,0); }
    if(right_value191 && right_value191 != __result_obj__) { right_value191 = come_decrement_ref_count(right_value191, ((struct sNode*)right_value191)->finalize, ((struct sNode*)right_value191)->_protocol_obj, 1, 0, 0); } 
    __result104__ = __result_obj__ = self;
    if(self) { come_call_finalizer(sExceptionGetValueNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result104__;
    if(self) { come_call_finalizer(sExceptionGetValueNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

_Bool sExceptionGetValueNode_terminated(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __result105__;
memset(&__result_obj__, 0, sizeof(void*));
    __result105__ = (_Bool)0;
    return __result105__;
}

_Bool compiletime_get_exception_value(struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value192;
struct CVALUE* left_value_125;
_Bool _if_conditional191;
_Bool _if_conditional192;
void* right_value193;
char* method_name_126;
_Bool _if_conditional193;
struct sType* obj_type_127;
_Bool _if_conditional194;
struct sType* obj_type2_128;
void* right_value194;
void* right_value195;
char* __dec_obj85;
void* right_value196;
struct sFun* fun_129;
_Bool _if_conditional195;
_Bool __result106__;
void* right_value197;
struct sType* type_130;
void* right_value198;
struct CVALUE* come_value_131;
void* right_value199;
char* __dec_obj86;
void* right_value200;
struct sType* __dec_obj87;
_Bool __result107__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_value_125, 0, sizeof(struct CVALUE*));
memset(&method_name_126, 0, sizeof(char*));
memset(&obj_type_127, 0, sizeof(struct sType*));
memset(&obj_type2_128, 0, sizeof(struct sType*));
memset(&fun_129, 0, sizeof(struct sFun*));
memset(&type_130, 0, sizeof(struct sType*));
memset(&come_value_131, 0, sizeof(struct CVALUE*));
    left_value_125=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value192=get_value_from_stack(-1,info))));
    if(right_value192 && right_value192 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value192, (void*)0, (void*)0, 0, 1, 0, 0); }
    dec_stack_ptr(1,info);
    if(_if_conditional191=left_value_125==((void*)0),    _if_conditional191) {
    }
    else {
        if(_if_conditional192=left_value_125->type->mNoSolvedGenericsType&&left_value_125->type->mNoSolvedGenericsType->v1&&left_value_125->type->mNoSolvedGenericsType->v1->mClass&&string_operator_equals(left_value_125->type->mNoSolvedGenericsType->v1->mClass->mName,"optional"),        _if_conditional192) {
            method_name_126=(char*)come_increment_ref_count(((char*)(right_value193=create_method_name(left_value_125->type,(_Bool)0,"expect",info))));
            if(right_value193 && right_value193 != __result_obj__) { right_value193 = come_decrement_ref_count(right_value193, (void*)0, (void*)0, 1, 0, 0); }
            if(_if_conditional193=map$2charphsFunph_at(info->funcs,method_name_126,((void*)0))==((void*)0),            _if_conditional193) {
                obj_type_127=left_value_125->type->mNoSolvedGenericsType->v1;
                if(_if_conditional194=list$1sTypeph_length(obj_type_127->mGenericsTypes)>0,                _if_conditional194) {
                    obj_type2_128=left_value_125->type;
                    __dec_obj85=method_name_126;
                    method_name_126=(char*)come_increment_ref_count(((char*)(right_value195=make_generics_function(obj_type2_128,(char*)come_increment_ref_count(((char*)(right_value194=__builtin_string("value")))),info))));
                    if(__dec_obj85) { __dec_obj85 = come_decrement_ref_count(__dec_obj85, (void*)0, (void*)0, 0,0,0); }
                    if(right_value194 && right_value194 != __result_obj__) { right_value194 = come_decrement_ref_count(right_value194, (void*)0, (void*)0, 1, 0, 0); }
                    if(right_value195 && right_value195 != __result_obj__) { right_value195 = come_decrement_ref_count(right_value195, (void*)0, (void*)0, 1, 0, 0); }
                }
                else {
                    err_msg(info,"require expect implementation(%s)",left_value_125->type->mClass->mName);
                    exit(1);
                }
            }
            fun_129=optional$2sFunpbool_value(((struct optional$2sFunpbool*)(right_value196=map$2charphsFunphp_operator_load_element(info->funcs,method_name_126))));
            if(right_value196 && right_value196 != __result_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value196, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(_if_conditional195=fun_129==((void*)0),            _if_conditional195) {
                err_msg(info,"function not found(%s)",method_name_126);
                __result106__ = (_Bool)1;
                if(method_name_126) { method_name_126 = come_decrement_ref_count(method_name_126, (void*)0, (void*)0, 0, 0, 0); }
                if(left_value_125) { come_call_finalizer(CVALUE_finalize,left_value_125, (void*)0, (void*)0, 0, 0, 0, 0); }
                return __result106__;
            }
            type_130=(struct sType*)come_increment_ref_count(((struct sType*)(right_value197=solve_generics(fun_129->mResultType,left_value_125->type,info))));
            if(right_value197 && right_value197 != __result_obj__) { come_call_finalizer(sType_finalize,right_value197, (void*)0, (void*)0, 0, 1, 0, 0); }
            come_value_131=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value198=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 627))));
            if(right_value198 && right_value198 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value198, (void*)0, (void*)0, 0, 1, 0, 0); }
            __dec_obj86=come_value_131->c_value;
            come_value_131->c_value=(char*)come_increment_ref_count(((char*)(right_value199=xsprintf("%s(%s)",method_name_126,left_value_125->c_value))));
            if(__dec_obj86) { __dec_obj86 = come_decrement_ref_count(__dec_obj86, (void*)0, (void*)0, 0,0,0); }
            if(right_value199 && right_value199 != __result_obj__) { right_value199 = come_decrement_ref_count(right_value199, (void*)0, (void*)0, 1, 0, 0); }
            __dec_obj87=come_value_131->type;
            come_value_131->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value200=sType_clone(type_130))));
            if(__dec_obj87) { come_call_finalizer(sType_finalize,__dec_obj87, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value200 && right_value200 != __result_obj__) { come_call_finalizer(sType_finalize,right_value200, (void*)0, (void*)0, 0, 1, 0, 0); }
            come_value_131->var=((void*)0);
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_131));
            add_come_last_code(info,"%s;\n",come_value_131->c_value);
            if(method_name_126) { method_name_126 = come_decrement_ref_count(method_name_126, (void*)0, (void*)0, 0, 0, 0); }
            if(type_130) { come_call_finalizer(sType_finalize,type_130, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(come_value_131) { come_call_finalizer(CVALUE_finalize,come_value_131, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        else {
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_125));
            add_come_last_code(info,"%s;\n",left_value_125->c_value);
        }
    }
    __result107__ = (_Bool)1;
    if(left_value_125) { come_call_finalizer(CVALUE_finalize,left_value_125, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result107__;
    if(left_value_125) { come_call_finalizer(CVALUE_finalize,left_value_125, (void*)0, (void*)0, 0, 0, 0, 0); }
}

char* sExceptionGetValueNode_kind(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value201;
char* __result108__;
memset(&__result_obj__, 0, sizeof(void*));
    __result108__ = __result_obj__ = ((char*)(right_value201=__builtin_string("sExceptionGetValueNode")));
    return __result108__;
}

_Bool sExceptionGetValueNode_compile(struct sExceptionGetValueNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
struct sNode* left_132;
_Bool _if_conditional196;
_Bool __result109__;
_Bool __result110__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_132, 0, sizeof(struct sNode*));
    left_132=self->mLeft;
    if(_if_conditional196=!node_compile(left_132,info),    _if_conditional196) {
        __result109__ = (_Bool)0;
        return __result109__;
    }
    __result110__ = compiletime_get_exception_value(info);
    return __result110__;
}

int sExceptionGetValueNode_sline(struct sExceptionGetValueNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
int __result111__;
memset(&__result_obj__, 0, sizeof(void*));
    __result111__ = self->sline;
    return __result111__;
}

char* sExceptionGetValueNode_sname(struct sExceptionGetValueNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value202;
char* __result112__;
memset(&__result_obj__, 0, sizeof(void*));
    __result112__ = __result_obj__ = ((char*)(right_value202=__builtin_string(self->sname)));
    return __result112__;
}

struct sNode* store_field(struct sNode* left, struct sNode* right, char* name, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value203;
void* right_value204;
struct sNode* _inf_value1;
struct sStoreFieldNode* _inf_obj_value1;
void* right_value210;
struct sNode* __result115__;
memset(&__result_obj__, 0, sizeof(void*));
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 674);
    _inf_obj_value1=come_increment_ref_count(((struct sStoreFieldNode*)(right_value204=sStoreFieldNode_initialize((struct sStoreFieldNode*)come_increment_ref_count(((struct sStoreFieldNode*)(right_value203=(struct sStoreFieldNode*)come_calloc(1, sizeof(struct sStoreFieldNode)*(1), "18field.c", 674)))),left,(struct sNode*)come_increment_ref_count(right),(char*)come_increment_ref_count(name),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sStoreFieldNode_finalize;
    _inf_value1->clone=(void*)sStoreFieldNode_clone;
    _inf_value1->compile=(void*)sStoreFieldNode_compile;
    _inf_value1->sline=(void*)sStoreFieldNode_sline;
    _inf_value1->sname=(void*)sStoreFieldNode_sname;
    _inf_value1->terminated=(void*)sStoreFieldNode_terminated;
    _inf_value1->kind=(void*)sStoreFieldNode_kind;
    __result115__ = __result_obj__ = ((struct sNode*)(right_value210=_inf_value1));
    if(right) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    if(name) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value203 && right_value203 != __result_obj__) { come_call_finalizer(sStoreFieldNode_finalize,right_value203, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value204 && right_value204 != __result_obj__) { come_call_finalizer(sStoreFieldNode_finalize,right_value204, (void*)0, (void*)0, 0, 1, 0, 0); }
    return __result115__;
    if(right) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    if(name) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
}

struct sLoadFieldNode* sLoadFieldNode_initialize(struct sLoadFieldNode* self, struct sNode* left, char* name, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value211;
char* __dec_obj92;
void* right_value212;
struct sNode* __dec_obj93;
void* right_value213;
char* __dec_obj94;
struct sLoadFieldNode* __result116__;
memset(&__result_obj__, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj92=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value211=__builtin_string(info->sname))));
    if(__dec_obj92) { __dec_obj92 = come_decrement_ref_count(__dec_obj92, (void*)0, (void*)0, 0,0,0); }
    if(right_value211 && right_value211 != __result_obj__) { right_value211 = come_decrement_ref_count(right_value211, (void*)0, (void*)0, 1, 0, 0); }
    __dec_obj93=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value212=sNode_clone(left))));
    if(__dec_obj93) { __dec_obj93 = come_decrement_ref_count(__dec_obj93, ((struct sNode*)__dec_obj93)->finalize, ((struct sNode*)__dec_obj93)->_protocol_obj, 0,0,0); }
    if(right_value212 && right_value212 != __result_obj__) { right_value212 = come_decrement_ref_count(right_value212, ((struct sNode*)right_value212)->finalize, ((struct sNode*)right_value212)->_protocol_obj, 1, 0, 0); } 
    __dec_obj94=self->mName;
    self->mName=(char*)come_increment_ref_count(((char*)(right_value213=__builtin_string(name))));
    if(__dec_obj94) { __dec_obj94 = come_decrement_ref_count(__dec_obj94, (void*)0, (void*)0, 0,0,0); }
    if(right_value213 && right_value213 != __result_obj__) { right_value213 = come_decrement_ref_count(right_value213, (void*)0, (void*)0, 1, 0, 0); }
    __result116__ = __result_obj__ = self;
    if(self) { come_call_finalizer(sLoadFieldNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(name) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
    return __result116__;
    if(self) { come_call_finalizer(sLoadFieldNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(name) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
}

_Bool sLoadFieldNode_terminated(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __result117__;
memset(&__result_obj__, 0, sizeof(void*));
    __result117__ = (_Bool)0;
    return __result117__;
}

char* sLoadFieldNode_kind(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value214;
char* __result118__;
memset(&__result_obj__, 0, sizeof(void*));
    __result118__ = __result_obj__ = ((char*)(right_value214=__builtin_string("sLoadFieldNode")));
    return __result118__;
}

_Bool sLoadFieldNode_compile(struct sLoadFieldNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
struct sNode* left_134;
void* right_value215;
char* name_135;
_Bool _if_conditional210;
_Bool __result119__;
void* right_value216;
struct CVALUE* left_value_136;
struct sType* left_type_137;
void* right_value217;
struct sType* left_type2_138;
struct sClass* klass_139;
void* right_value218;
struct sType* field_type_140;
int index_141;
char* child_field_name_142;
void* right_value219;
struct list$1tuple2$2charphsTypephph* o2_saved_143;
struct tuple2$2charphsTypeph* field_144;
_Bool _for_condtionalA5;
struct tuple2$2charphsTypeph* multiple_assgin_var4;
char* field_name_145;
struct sType* field_type2_146;
_Bool _if_conditional211;
void* right_value220;
struct sType* __dec_obj95;
_Bool _if_conditional212;
struct list$1tuple2$2charphsTypephph* o2_saved_147;
struct tuple2$2charphsTypeph* field_148;
_Bool _for_condtionalA6;
struct tuple2$2charphsTypeph* multiple_assgin_var5;
char* field_name_149;
struct sType* field_type2_150;
struct sClass* klass2_151;
struct list$1tuple2$2charphsTypephph* o2_saved_152;
struct tuple2$2charphsTypeph* field2_153;
_Bool _for_condtionalA7;
struct tuple2$2charphsTypeph* multiple_assgin_var6;
char* field_name2_154;
struct sType* field_type3_155;
_Bool _if_conditional213;
void* right_value221;
char* __dec_obj96;
void* right_value222;
struct sType* __dec_obj97;
_Bool _if_conditional214;
_Bool _if_conditional215;
void* right_value223;
struct sType* __dec_obj98;
_Bool _if_conditional216;
_Bool __result120__;
void* right_value224;
struct CVALUE* come_value_156;
_Bool _if_conditional217;
_Bool _if_conditional218;
void* right_value225;
char* __dec_obj99;
void* right_value226;
char* __dec_obj100;
_Bool _if_conditional219;
void* right_value227;
char* __dec_obj101;
void* right_value228;
char* __dec_obj102;
void* right_value229;
struct sType* __dec_obj103;
_Bool _if_conditional220;
void* right_value230;
struct sType* __dec_obj104;
_Bool __result123__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_134, 0, sizeof(struct sNode*));
memset(&name_135, 0, sizeof(char*));
memset(&left_value_136, 0, sizeof(struct CVALUE*));
memset(&left_type_137, 0, sizeof(struct sType*));
memset(&left_type2_138, 0, sizeof(struct sType*));
memset(&klass_139, 0, sizeof(struct sClass*));
memset(&field_type_140, 0, sizeof(struct sType*));
memset(&index_141, 0, sizeof(int));
memset(&child_field_name_142, 0, sizeof(char*));
memset(&o2_saved_143, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&field_144, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&field_name_145, 0, sizeof(char*));
memset(&field_type2_146, 0, sizeof(struct sType*));
memset(&field_name_145, 0, sizeof(char*));
memset(&field_type2_146, 0, sizeof(struct sType*));
memset(&o2_saved_147, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&field_148, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&field_name_149, 0, sizeof(char*));
memset(&field_type2_150, 0, sizeof(struct sType*));
memset(&field_name_149, 0, sizeof(char*));
memset(&field_type2_150, 0, sizeof(struct sType*));
memset(&klass2_151, 0, sizeof(struct sClass*));
memset(&o2_saved_152, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&field2_153, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&field_name2_154, 0, sizeof(char*));
memset(&field_type3_155, 0, sizeof(struct sType*));
memset(&field_name2_154, 0, sizeof(char*));
memset(&field_type3_155, 0, sizeof(struct sType*));
memset(&come_value_156, 0, sizeof(struct CVALUE*));
    left_134=self->mLeft;
    name_135=(char*)come_increment_ref_count(((char*)(right_value215=__builtin_string(self->mName))));
    if(right_value215 && right_value215 != __result_obj__) { right_value215 = come_decrement_ref_count(right_value215, (void*)0, (void*)0, 1, 0, 0); }
    if(_if_conditional210=!node_compile(left_134,info),    _if_conditional210) {
        __result119__ = (_Bool)0;
        if(name_135) { name_135 = come_decrement_ref_count(name_135, (void*)0, (void*)0, 0, 0, 0); }
        return __result119__;
    }
    left_value_136=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value216=get_value_from_stack(-1,info))));
    if(right_value216 && right_value216 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value216, (void*)0, (void*)0, 0, 1, 0, 0); }
    dec_stack_ptr(1,info);
    left_type_137=left_value_136->type;
    left_type2_138=(struct sType*)come_increment_ref_count(((struct sType*)(right_value217=solve_generics(left_type_137,left_type_137,info))));
    if(right_value217 && right_value217 != __result_obj__) { come_call_finalizer(sType_finalize,right_value217, (void*)0, (void*)0, 0, 1, 0, 0); }
    klass_139=left_type2_138->mClass;
    klass_139=optional$2sClasspbool_value(((struct optional$2sClasspbool*)(right_value218=map$2charphsClassphp_operator_load_element(info->classes,klass_139->mName))));
    if(right_value218 && right_value218 != __result_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,right_value218, (void*)0, (void*)0, 0, 1, 0, 0); }
    field_type_140=((void*)0);
    index_141=0;
    child_field_name_142=((void*)0);
    klass_139=optional$2sClasspbool_value(((struct optional$2sClasspbool*)(right_value219=map$2charphsClassphp_operator_load_element(info->classes,klass_139->mName))));
    if(right_value219 && right_value219 != __result_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,right_value219, (void*)0, (void*)0, 0, 1, 0, 0); }
    for(
    o2_saved_143=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_139->mFields)),field_144=list$1tuple2$2charphsTypephph_begin((o2_saved_143)) ,    0;    _for_condtionalA5=    !list$1tuple2$2charphsTypephph_end((o2_saved_143)) ,    _for_condtionalA5;    field_144=list$1tuple2$2charphsTypephph_next((o2_saved_143)) ,    0    ){
        multiple_assgin_var4=field_144;
        field_name_145=(char*)come_increment_ref_count(multiple_assgin_var4->v1);
        field_type2_146=(struct sType*)come_increment_ref_count(multiple_assgin_var4->v2);
        if(_if_conditional211=string_operator_equals(field_name_145,name_135),        _if_conditional211) {
            __dec_obj95=field_type_140;
            field_type_140=(struct sType*)come_increment_ref_count(((struct sType*)(right_value220=sType_clone(field_type2_146))));
            if(__dec_obj95) { come_call_finalizer(sType_finalize,__dec_obj95, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value220 && right_value220 != __result_obj__) { come_call_finalizer(sType_finalize,right_value220, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(field_name_145) { field_name_145 = come_decrement_ref_count(field_name_145, (void*)0, (void*)0, 0, 0, 0); }
            if(field_type2_146) { come_call_finalizer(sType_finalize,field_type2_146, (void*)0, (void*)0, 0, 0, 0, 0); }
            break;
        }
        index_141++;
        if(field_name_145) { field_name_145 = come_decrement_ref_count(field_name_145, (void*)0, (void*)0, 0, 0, 0); }
        if(field_type2_146) { come_call_finalizer(sType_finalize,field_type2_146, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    if(o2_saved_143) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,o2_saved_143, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(_if_conditional212=index_141==list$1tuple2$2charphsTypephph_length(klass_139->mFields),    _if_conditional212) {
        index_141=0;
        for(
        o2_saved_147=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_139->mFields)),field_148=list$1tuple2$2charphsTypephph_begin((o2_saved_147)) ,        0;        _for_condtionalA6=        !list$1tuple2$2charphsTypephph_end((o2_saved_147)) ,        _for_condtionalA6;        field_148=list$1tuple2$2charphsTypephph_next((o2_saved_147)) ,        0        ){
            multiple_assgin_var5=field_148;
            field_name_149=(char*)come_increment_ref_count(multiple_assgin_var5->v1);
            field_type2_150=(struct sType*)come_increment_ref_count(multiple_assgin_var5->v2);
            klass2_151=field_type2_150->mClass;
            for(
            o2_saved_152=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass2_151->mFields)),field2_153=list$1tuple2$2charphsTypephph_begin((o2_saved_152)) ,            0;            _for_condtionalA7=            !list$1tuple2$2charphsTypephph_end((o2_saved_152)) ,            _for_condtionalA7;            field2_153=list$1tuple2$2charphsTypephph_next((o2_saved_152)) ,            0            ){
                multiple_assgin_var6=field2_153;
                field_name2_154=(char*)come_increment_ref_count(multiple_assgin_var6->v1);
                field_type3_155=(struct sType*)come_increment_ref_count(multiple_assgin_var6->v2);
                if(_if_conditional213=string_operator_equals(field_name2_154,name_135),                _if_conditional213) {
                    __dec_obj96=child_field_name_142;
                    child_field_name_142=(char*)come_increment_ref_count(((char*)(right_value221=__builtin_string(field_name_149))));
                    if(__dec_obj96) { __dec_obj96 = come_decrement_ref_count(__dec_obj96, (void*)0, (void*)0, 0,0,0); }
                    if(right_value221 && right_value221 != __result_obj__) { right_value221 = come_decrement_ref_count(right_value221, (void*)0, (void*)0, 1, 0, 0); }
                    __dec_obj97=field_type_140;
                    field_type_140=(struct sType*)come_increment_ref_count(((struct sType*)(right_value222=sType_clone(field_type3_155))));
                    if(__dec_obj97) { come_call_finalizer(sType_finalize,__dec_obj97, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(right_value222 && right_value222 != __result_obj__) { come_call_finalizer(sType_finalize,right_value222, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(field_name2_154) { field_name2_154 = come_decrement_ref_count(field_name2_154, (void*)0, (void*)0, 0, 0, 0); }
                    if(field_type3_155) { come_call_finalizer(sType_finalize,field_type3_155, (void*)0, (void*)0, 0, 0, 0, 0); }
                    break;
                }
                if(field_name2_154) { field_name2_154 = come_decrement_ref_count(field_name2_154, (void*)0, (void*)0, 0, 0, 0); }
                if(field_type3_155) { come_call_finalizer(sType_finalize,field_type3_155, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            if(o2_saved_152) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,o2_saved_152, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(_if_conditional214=child_field_name_142,            _if_conditional214) {
                if(field_name_149) { field_name_149 = come_decrement_ref_count(field_name_149, (void*)0, (void*)0, 0, 0, 0); }
                if(field_type2_150) { come_call_finalizer(sType_finalize,field_type2_150, (void*)0, (void*)0, 0, 0, 0, 0); }
                break;
            }
            if(_if_conditional215=string_operator_equals(field_name_149,name_135),            _if_conditional215) {
                __dec_obj98=field_type_140;
                field_type_140=(struct sType*)come_increment_ref_count(((struct sType*)(right_value223=sType_clone(field_type2_150))));
                if(__dec_obj98) { come_call_finalizer(sType_finalize,__dec_obj98, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(right_value223 && right_value223 != __result_obj__) { come_call_finalizer(sType_finalize,right_value223, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(field_name_149) { field_name_149 = come_decrement_ref_count(field_name_149, (void*)0, (void*)0, 0, 0, 0); }
                if(field_type2_150) { come_call_finalizer(sType_finalize,field_type2_150, (void*)0, (void*)0, 0, 0, 0, 0); }
                break;
            }
            index_141++;
            if(field_name_149) { field_name_149 = come_decrement_ref_count(field_name_149, (void*)0, (void*)0, 0, 0, 0); }
            if(field_type2_150) { come_call_finalizer(sType_finalize,field_type2_150, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(o2_saved_147) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,o2_saved_147, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(_if_conditional216=index_141==list$1tuple2$2charphsTypephph_length(klass_139->mFields),        _if_conditional216) {
            err_msg(info,"field not found(%s) in %s(2)",name_135,klass_139->mName);
            __result120__ = (_Bool)0;
            if(name_135) { name_135 = come_decrement_ref_count(name_135, (void*)0, (void*)0, 0, 0, 0); }
            if(left_value_136) { come_call_finalizer(CVALUE_finalize,left_value_136, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(left_type2_138) { come_call_finalizer(sType_finalize,left_type2_138, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(field_type_140) { come_call_finalizer(sType_finalize,field_type_140, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(child_field_name_142) { child_field_name_142 = come_decrement_ref_count(child_field_name_142, (void*)0, (void*)0, 0, 0, 0); }
            return __result120__;
        }
    }
    come_value_156=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value224=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 776))));
    if(right_value224 && right_value224 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value224, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(_if_conditional217=left_value_136->type->mPointerNum>0,    _if_conditional217) {
        if(_if_conditional218=child_field_name_142,        _if_conditional218) {
            __dec_obj99=come_value_156->c_value;
            come_value_156->c_value=(char*)come_increment_ref_count(((char*)(right_value225=xsprintf("%s->%s.%s",left_value_136->c_value,child_field_name_142,name_135))));
            if(__dec_obj99) { __dec_obj99 = come_decrement_ref_count(__dec_obj99, (void*)0, (void*)0, 0,0,0); }
            if(right_value225 && right_value225 != __result_obj__) { right_value225 = come_decrement_ref_count(right_value225, (void*)0, (void*)0, 1, 0, 0); }
        }
        else {
            __dec_obj100=come_value_156->c_value;
            come_value_156->c_value=(char*)come_increment_ref_count(((char*)(right_value226=xsprintf("%s->%s",left_value_136->c_value,name_135))));
            if(__dec_obj100) { __dec_obj100 = come_decrement_ref_count(__dec_obj100, (void*)0, (void*)0, 0,0,0); }
            if(right_value226 && right_value226 != __result_obj__) { right_value226 = come_decrement_ref_count(right_value226, (void*)0, (void*)0, 1, 0, 0); }
        }
    }
    else {
        if(_if_conditional219=child_field_name_142,        _if_conditional219) {
            __dec_obj101=come_value_156->c_value;
            come_value_156->c_value=(char*)come_increment_ref_count(((char*)(right_value227=xsprintf("%s.%s.%s",left_value_136->c_value,child_field_name_142,name_135))));
            if(__dec_obj101) { __dec_obj101 = come_decrement_ref_count(__dec_obj101, (void*)0, (void*)0, 0,0,0); }
            if(right_value227 && right_value227 != __result_obj__) { right_value227 = come_decrement_ref_count(right_value227, (void*)0, (void*)0, 1, 0, 0); }
        }
        else {
            __dec_obj102=come_value_156->c_value;
            come_value_156->c_value=(char*)come_increment_ref_count(((char*)(right_value228=xsprintf("%s.%s",left_value_136->c_value,name_135))));
            if(__dec_obj102) { __dec_obj102 = come_decrement_ref_count(__dec_obj102, (void*)0, (void*)0, 0,0,0); }
            if(right_value228 && right_value228 != __result_obj__) { right_value228 = come_decrement_ref_count(right_value228, (void*)0, (void*)0, 1, 0, 0); }
        }
    }
    __dec_obj103=come_value_156->type;
    come_value_156->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value229=sType_clone(field_type_140))));
    if(__dec_obj103) { come_call_finalizer(sType_finalize,__dec_obj103, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value229 && right_value229 != __result_obj__) { come_call_finalizer(sType_finalize,right_value229, (void*)0, (void*)0, 0, 1, 0, 0); }
    come_value_156->var=((void*)0);
    if(_if_conditional220=list$1sNodeph_length(come_value_156->type->mArrayNum)==1,    _if_conditional220) {
        __dec_obj104=come_value_156->type->mOriginalLoadVarType->v1;
        come_value_156->type->mOriginalLoadVarType->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value230=sType_clone(come_value_156->type))));
        if(__dec_obj104) { come_call_finalizer(sType_finalize,__dec_obj104, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value230 && right_value230 != __result_obj__) { come_call_finalizer(sType_finalize,right_value230, (void*)0, (void*)0, 0, 1, 0, 0); }
        list$1sNodeph_reset(come_value_156->type->mArrayNum);
        come_value_156->type->mPointerNum++;
        come_value_156->type->mOriginalTypeNamePointerNum=come_value_156->type->mPointerNum;
    }
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_156));
    __result123__ = (_Bool)1;
    if(name_135) { name_135 = come_decrement_ref_count(name_135, (void*)0, (void*)0, 0, 0, 0); }
    if(left_value_136) { come_call_finalizer(CVALUE_finalize,left_value_136, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(left_type2_138) { come_call_finalizer(sType_finalize,left_type2_138, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(field_type_140) { come_call_finalizer(sType_finalize,field_type_140, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(child_field_name_142) { child_field_name_142 = come_decrement_ref_count(child_field_name_142, (void*)0, (void*)0, 0, 0, 0); }
    if(come_value_156) { come_call_finalizer(CVALUE_finalize,come_value_156, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result123__;
    if(name_135) { name_135 = come_decrement_ref_count(name_135, (void*)0, (void*)0, 0, 0, 0); }
    if(left_value_136) { come_call_finalizer(CVALUE_finalize,left_value_136, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(left_type2_138) { come_call_finalizer(sType_finalize,left_type2_138, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(field_type_140) { come_call_finalizer(sType_finalize,field_type_140, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(child_field_name_142) { child_field_name_142 = come_decrement_ref_count(child_field_name_142, (void*)0, (void*)0, 0, 0, 0); }
    if(come_value_156) { come_call_finalizer(CVALUE_finalize,come_value_156, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
int __result121__;
memset(&__result_obj__, 0, sizeof(void*));
        __result121__ = self->len;
        return __result121__;
}

static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
struct list_item$1sNodeph* it_157;
_Bool _while_condtional13;
struct list_item$1sNodeph* prev_it_158;
struct list$1sNodeph* __result122__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_157, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_158, 0, sizeof(struct list_item$1sNodeph*));
            it_157=self->head;
            while(_while_condtional13=it_157!=((void*)0),            _while_condtional13) {
                prev_it_158=it_157;
                it_157=it_157->next;
                if(prev_it_158) { come_call_finalizer(list_item$1sNodephp_finalize,prev_it_158, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            __result122__ = __result_obj__ = self;
            return __result122__;
}

int sLoadFieldNode_sline(struct sLoadFieldNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
int __result124__;
memset(&__result_obj__, 0, sizeof(void*));
    __result124__ = self->sline;
    return __result124__;
}

char* sLoadFieldNode_sname(struct sLoadFieldNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value231;
char* __result125__;
memset(&__result_obj__, 0, sizeof(void*));
    __result125__ = __result_obj__ = ((char*)(right_value231=__builtin_string(self->sname)));
    return __result125__;
}

struct sStoreArrayNode* sStoreArrayNode_initialize(struct sStoreArrayNode* self, struct sNode* left, struct sNode* right, struct list$1sNodeph* array_num, _Bool quote, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value232;
char* __dec_obj105;
void* right_value233;
struct sNode* __dec_obj106;
void* right_value234;
struct sNode* __dec_obj107;
void* right_value235;
struct list$1sNodeph* __dec_obj108;
struct sStoreArrayNode* __result126__;
memset(&__result_obj__, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj105=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value232=__builtin_string(info->sname))));
    if(__dec_obj105) { __dec_obj105 = come_decrement_ref_count(__dec_obj105, (void*)0, (void*)0, 0,0,0); }
    if(right_value232 && right_value232 != __result_obj__) { right_value232 = come_decrement_ref_count(right_value232, (void*)0, (void*)0, 1, 0, 0); }
    __dec_obj106=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value233=sNode_clone(left))));
    if(__dec_obj106) { __dec_obj106 = come_decrement_ref_count(__dec_obj106, ((struct sNode*)__dec_obj106)->finalize, ((struct sNode*)__dec_obj106)->_protocol_obj, 0,0,0); }
    if(right_value233 && right_value233 != __result_obj__) { right_value233 = come_decrement_ref_count(right_value233, ((struct sNode*)right_value233)->finalize, ((struct sNode*)right_value233)->_protocol_obj, 1, 0, 0); } 
    __dec_obj107=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value234=sNode_clone(right))));
    if(__dec_obj107) { __dec_obj107 = come_decrement_ref_count(__dec_obj107, ((struct sNode*)__dec_obj107)->finalize, ((struct sNode*)__dec_obj107)->_protocol_obj, 0,0,0); }
    if(right_value234 && right_value234 != __result_obj__) { right_value234 = come_decrement_ref_count(right_value234, ((struct sNode*)right_value234)->finalize, ((struct sNode*)right_value234)->_protocol_obj, 1, 0, 0); } 
    __dec_obj108=self->mArrayNum;
    self->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value235=list$1sNodephp_clone(array_num))));
    if(__dec_obj108) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj108, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value235 && right_value235 != __result_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value235, (void*)0, (void*)0, 0, 1, 0, 0); }
    self->mQuote=quote;
    __result126__ = __result_obj__ = self;
    if(self) { come_call_finalizer(sStoreArrayNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(right) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    if(array_num) { come_call_finalizer(list$1sNodephp_finalize,array_num, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result126__;
    if(self) { come_call_finalizer(sStoreArrayNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(right) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    if(array_num) { come_call_finalizer(list$1sNodephp_finalize,array_num, (void*)0, (void*)0, 0, 0, 1, 0); }
}

_Bool sStoreArrayNode_terminated(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __result127__;
memset(&__result_obj__, 0, sizeof(void*));
    __result127__ = (_Bool)0;
    return __result127__;
}

char* sStoreArrayNode_kind(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value236;
char* __result128__;
memset(&__result_obj__, 0, sizeof(void*));
    __result128__ = __result_obj__ = ((char*)(right_value236=__builtin_string("sStoreArrayNode")));
    return __result128__;
}

_Bool sStoreArrayNode_compile(struct sStoreArrayNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
struct sNode* left_159;
struct sNode* right_160;
struct list$1sNodeph* array_num_nodes_161;
_Bool _if_conditional225;
_Bool __result129__;
void* right_value237;
struct CVALUE* left_value_162;
struct sType* left_type_163;
void* right_value238;
void* right_value239;
struct list$1CVALUEph* array_num_166;
struct list$1sNodeph* o2_saved_167;
struct sNode* it_170;
_Bool _for_condtionalA8;
_Bool _if_conditional230;
_Bool __result138__;
void* right_value240;
struct CVALUE* c_value_173;
_Bool _if_conditional231;
_Bool __result139__;
void* right_value241;
struct CVALUE* right_value_174;
struct sType* right_type_175;
struct sClass* klass_176;
void* right_value242;
struct sType* type_177;
char* fun_name_178;
_Bool calling_fun_179;
_Bool _if_conditional232;
void* right_value247;
_Bool _if_conditional237;
void* right_value248;
struct CVALUE* come_value_184;
_Bool _if_conditional238;
int i_185;
_Bool _for_condtionalA9;
_Bool _if_conditional257;
_Bool _if_conditional258;
void* right_value249;
void* right_value250;
struct buffer* buf_198;
struct list$1CVALUEph* o2_saved_199;
struct CVALUE* it_202;
_Bool _for_condtionalA10;
void* right_value251;
void* right_value252;
char* left_value_code_205;
void* right_value253;
_Bool _if_conditional263;
_Bool _if_conditional264;
void* right_value254;
char* __dec_obj110;
_Bool _if_conditional265;
void* right_value255;
char* __dec_obj111;
_Bool __result155__;
int right_value_id_206;
_Bool _if_conditional266;
_Bool _if_conditional267;
void* right_value256;
char* __dec_obj112;
_Bool _if_conditional268;
void* right_value257;
char* __dec_obj113;
_Bool __result156__;
void* right_value258;
struct sType* result_type_207;
void* right_value259;
void* right_value260;
struct list$1sNodeph* __dec_obj114;
struct sType* __dec_obj115;
_Bool __result157__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_159, 0, sizeof(struct sNode*));
memset(&right_160, 0, sizeof(struct sNode*));
memset(&array_num_nodes_161, 0, sizeof(struct list$1sNodeph*));
memset(&left_value_162, 0, sizeof(struct CVALUE*));
memset(&left_type_163, 0, sizeof(struct sType*));
memset(&array_num_166, 0, sizeof(struct list$1CVALUEph*));
memset(&o2_saved_167, 0, sizeof(struct list$1sNodeph*));
memset(&it_170, 0, sizeof(struct sNode*));
memset(&c_value_173, 0, sizeof(struct CVALUE*));
memset(&right_value_174, 0, sizeof(struct CVALUE*));
memset(&right_type_175, 0, sizeof(struct sType*));
memset(&klass_176, 0, sizeof(struct sClass*));
memset(&type_177, 0, sizeof(struct sType*));
memset(&fun_name_178, 0, sizeof(char*));
memset(&calling_fun_179, 0, sizeof(_Bool));
memset(&come_value_184, 0, sizeof(struct CVALUE*));
memset(&i_185, 0, sizeof(int));
memset(&buf_198, 0, sizeof(struct buffer*));
memset(&o2_saved_199, 0, sizeof(struct list$1CVALUEph*));
memset(&it_202, 0, sizeof(struct CVALUE*));
memset(&left_value_code_205, 0, sizeof(char*));
memset(&right_value_id_206, 0, sizeof(int));
memset(&result_type_207, 0, sizeof(struct sType*));
    left_159=self->mLeft;
    right_160=self->mRight;
    array_num_nodes_161=self->mArrayNum;
    if(_if_conditional225=!node_compile(left_159,info),    _if_conditional225) {
        __result129__ = (_Bool)0;
        return __result129__;
    }
    left_value_162=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value237=get_value_from_stack(-1,info))));
    if(right_value237 && right_value237 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value237, (void*)0, (void*)0, 0, 1, 0, 0); }
    dec_stack_ptr(1,info);
    left_type_163=left_value_162->type;
    array_num_166=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value239=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value238=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "18field.c", 869))))))));
    if(right_value238 && right_value238 != __result_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value238, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value239 && right_value239 != __result_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value239, (void*)0, (void*)0, 0, 1, 0, 0); }
    for(
    o2_saved_167=(array_num_nodes_161),it_170=list$1sNodeph_begin((o2_saved_167)) ,    0;    _for_condtionalA8=    !list$1sNodeph_end((o2_saved_167)) ,    _for_condtionalA8;    it_170=list$1sNodeph_next((o2_saved_167)) ,    0    ){
        if(_if_conditional230=!node_compile(it_170,info),        _if_conditional230) {
            __result138__ = (_Bool)0;
            if(left_value_162) { come_call_finalizer(CVALUE_finalize,left_value_162, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(array_num_166) { come_call_finalizer(list$1CVALUEphp_finalize,array_num_166, (void*)0, (void*)0, 0, 0, 0, 0); }
            return __result138__;
        }
        c_value_173=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value240=get_value_from_stack(-1,info))));
        if(right_value240 && right_value240 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value240, (void*)0, (void*)0, 0, 1, 0, 0); }
        dec_stack_ptr(1,info);
        list$1CVALUEph_push_back(array_num_166,(struct CVALUE*)come_increment_ref_count(c_value_173));
        if(c_value_173) { come_call_finalizer(CVALUE_finalize,c_value_173, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    if(_if_conditional231=!node_compile(right_160,info),    _if_conditional231) {
        __result139__ = (_Bool)0;
        if(left_value_162) { come_call_finalizer(CVALUE_finalize,left_value_162, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(array_num_166) { come_call_finalizer(list$1CVALUEphp_finalize,array_num_166, (void*)0, (void*)0, 0, 0, 0, 0); }
        return __result139__;
    }
    right_value_174=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value241=get_value_from_stack(-1,info))));
    if(right_value241 && right_value241 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value241, (void*)0, (void*)0, 0, 1, 0, 0); }
    dec_stack_ptr(1,info);
    right_type_175=right_value_174->type;
    klass_176=left_value_162->type->mClass;
    type_177=(struct sType*)come_increment_ref_count(((struct sType*)(right_value242=sType_clone(left_value_162->type))));
    if(right_value242 && right_value242 != __result_obj__) { come_call_finalizer(sType_finalize,right_value242, (void*)0, (void*)0, 0, 1, 0, 0); }
    fun_name_178="operator_store_element";
    if(_if_conditional232=self->mQuote,    _if_conditional232) {
        calling_fun_179=(_Bool)0;
    }
    else {
        calling_fun_179=operator_overload_fun2(type_177,fun_name_178,left_value_162,optional$2CVALUEphbool_value(((struct optional$2CVALUEphbool*)(right_value247=list$1CVALUEphp_operator_load_element(array_num_166,0)))),right_value_174,info);
        if(right_value247 && right_value247 != __result_obj__) { come_call_finalizer(optional$2CVALUEphboolp_finalize,right_value247, (void*)0, (void*)0, 0, 1, 0, 0); }
    }
    if(_if_conditional237=!calling_fun_179,    _if_conditional237) {
        come_value_184=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value248=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 905))));
        if(right_value248 && right_value248 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value248, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(_if_conditional238=list$1sNodeph_length(left_type_163->mArrayNum)>0,        _if_conditional238) {
            for(
            i_185=0 ,            0;            _for_condtionalA9=            i_185<list$1CVALUEph_length(array_num_166) ,            _for_condtionalA9;            i_185++ ,            0            ){
                list$1sNodeph_delete(left_type_163->mArrayNum,-1,-1);
            }
        }
        else {
            if(_if_conditional257=left_type_163->mPointerNum>0,            _if_conditional257) {
                left_type_163->mPointerNum-=list$1CVALUEph_length(array_num_166);
                if(_if_conditional258=left_type_163->mPointerNum<0,                _if_conditional258) {
                    left_type_163->mPointerNum=0;
                }
            }
        }
        buf_198=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value250=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value249=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "18field.c", 926))))))));
        if(right_value249 && right_value249 != __result_obj__) { come_call_finalizer(buffer_finalize,right_value249, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value250 && right_value250 != __result_obj__) { come_call_finalizer(buffer_finalize,right_value250, (void*)0, (void*)0, 0, 1, 0, 0); }
        buffer_append_str(buf_198,left_value_162->c_value);
        for(
        o2_saved_199=(struct list$1CVALUEph*)come_increment_ref_count((array_num_166)),it_202=list$1CVALUEph_begin((o2_saved_199)) ,        0;        _for_condtionalA10=        !list$1CVALUEph_end((o2_saved_199)) ,        _for_condtionalA10;        it_202=list$1CVALUEph_next((o2_saved_199)) ,        0        ){
            buffer_append_str(buf_198,((char*)(right_value251=xsprintf("[%s]",it_202->c_value))));
            if(right_value251 && right_value251 != __result_obj__) { right_value251 = come_decrement_ref_count(right_value251, (void*)0, (void*)0, 1, 0, 0); }
        }
        if(o2_saved_199) { come_call_finalizer(list$1CVALUEphp_finalize,o2_saved_199, (void*)0, (void*)0, 0, 0, 0, 0); }
        left_value_code_205=(char*)come_increment_ref_count(((char*)(right_value252=buffer_to_string(buf_198))));
        if(right_value252 && right_value252 != __result_obj__) { right_value252 = come_decrement_ref_count(right_value252, (void*)0, (void*)0, 1, 0, 0); }
        check_assign_type(((char*)(right_value253=xsprintf("array is assinged to"))),left_type_163,right_type_175,right_value_174,(_Bool)0,info);
        if(right_value253 && right_value253 != __result_obj__) { right_value253 = come_decrement_ref_count(right_value253, (void*)0, (void*)0, 1, 0, 0); }
        if(_if_conditional263=left_type_163->mHeap&&right_type_175->mHeap&&left_type_163->mPointerNum>0&&right_type_175->mPointerNum>0,        _if_conditional263) {
            if(_if_conditional264=left_value_162->type->mPointerNum>=1,            _if_conditional264) {
                decrement_ref_count_object(left_type_163,left_value_code_205,info,(_Bool)0);
                std_move(left_type_163,right_type_175,right_value_174,info);
                __dec_obj110=come_value_184->c_value;
                come_value_184->c_value=(char*)come_increment_ref_count(((char*)(right_value254=xsprintf("%s=%s",left_value_code_205,right_value_174->c_value))));
                if(__dec_obj110) { __dec_obj110 = come_decrement_ref_count(__dec_obj110, (void*)0, (void*)0, 0,0,0); }
                if(right_value254 && right_value254 != __result_obj__) { right_value254 = come_decrement_ref_count(right_value254, (void*)0, (void*)0, 1, 0, 0); }
            }
            else {
                if(_if_conditional265=left_value_162->type->mPointerNum==0,                _if_conditional265) {
                    decrement_ref_count_object(left_type_163,left_value_code_205,info,(_Bool)0);
                    std_move(left_type_163,right_type_175,right_value_174,info);
                    __dec_obj111=come_value_184->c_value;
                    come_value_184->c_value=(char*)come_increment_ref_count(((char*)(right_value255=xsprintf("%s=%s",left_value_code_205,right_value_174->c_value))));
                    if(__dec_obj111) { __dec_obj111 = come_decrement_ref_count(__dec_obj111, (void*)0, (void*)0, 0,0,0); }
                    if(right_value255 && right_value255 != __result_obj__) { right_value255 = come_decrement_ref_count(right_value255, (void*)0, (void*)0, 1, 0, 0); }
                }
                else {
                    err_msg(info,"Invalid left_type. The name is %s. The pointer num is %d.(1)",left_value_code_205,left_value_162->type->mPointerNum);
                    __result155__ = (_Bool)0;
                    if(come_value_184) { come_call_finalizer(CVALUE_finalize,come_value_184, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(buf_198) { come_call_finalizer(buffer_finalize,buf_198, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(left_value_code_205) { left_value_code_205 = come_decrement_ref_count(left_value_code_205, (void*)0, (void*)0, 0, 0, 0); }
                    if(left_value_162) { come_call_finalizer(CVALUE_finalize,left_value_162, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(array_num_166) { come_call_finalizer(list$1CVALUEphp_finalize,array_num_166, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(right_value_174) { come_call_finalizer(CVALUE_finalize,right_value_174, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(type_177) { come_call_finalizer(sType_finalize,type_177, (void*)0, (void*)0, 0, 0, 0, 0); }
                    return __result155__;
                }
            }
            right_value_id_206=get_right_value_id_from_obj((char*)come_increment_ref_count(right_value_174->c_value));
            if(_if_conditional266=right_value_id_206!=-1,            _if_conditional266) {
                remove_object_from_right_values(right_value_id_206,info);
            }
        }
        else {
            if(_if_conditional267=left_value_162->type->mPointerNum>=1,            _if_conditional267) {
                __dec_obj112=come_value_184->c_value;
                come_value_184->c_value=(char*)come_increment_ref_count(((char*)(right_value256=xsprintf("%s=%s",left_value_code_205,right_value_174->c_value))));
                if(__dec_obj112) { __dec_obj112 = come_decrement_ref_count(__dec_obj112, (void*)0, (void*)0, 0,0,0); }
                if(right_value256 && right_value256 != __result_obj__) { right_value256 = come_decrement_ref_count(right_value256, (void*)0, (void*)0, 1, 0, 0); }
            }
            else {
                if(_if_conditional268=left_value_162->type->mPointerNum==0,                _if_conditional268) {
                    __dec_obj113=come_value_184->c_value;
                    come_value_184->c_value=(char*)come_increment_ref_count(((char*)(right_value257=xsprintf("%s=%s",left_value_code_205,right_value_174->c_value))));
                    if(__dec_obj113) { __dec_obj113 = come_decrement_ref_count(__dec_obj113, (void*)0, (void*)0, 0,0,0); }
                    if(right_value257 && right_value257 != __result_obj__) { right_value257 = come_decrement_ref_count(right_value257, (void*)0, (void*)0, 1, 0, 0); }
                }
                else {
                    err_msg(info,"Invalid left_type. The name is %s. The pointer num is %d.(2)",left_value_code_205,left_value_162->type->mPointerNum);
                    __result156__ = (_Bool)0;
                    if(come_value_184) { come_call_finalizer(CVALUE_finalize,come_value_184, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(buf_198) { come_call_finalizer(buffer_finalize,buf_198, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(left_value_code_205) { left_value_code_205 = come_decrement_ref_count(left_value_code_205, (void*)0, (void*)0, 0, 0, 0); }
                    if(left_value_162) { come_call_finalizer(CVALUE_finalize,left_value_162, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(array_num_166) { come_call_finalizer(list$1CVALUEphp_finalize,array_num_166, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(right_value_174) { come_call_finalizer(CVALUE_finalize,right_value_174, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(type_177) { come_call_finalizer(sType_finalize,type_177, (void*)0, (void*)0, 0, 0, 0, 0); }
                    return __result156__;
                }
            }
        }
        result_type_207=(struct sType*)come_increment_ref_count(((struct sType*)(right_value258=sType_clone(left_type_163))));
        if(right_value258 && right_value258 != __result_obj__) { come_call_finalizer(sType_finalize,right_value258, (void*)0, (void*)0, 0, 1, 0, 0); }
        __dec_obj114=result_type_207->mArrayNum;
        result_type_207->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value260=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value259=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "18field.c", 972))))))));
        if(__dec_obj114) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj114, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value259 && right_value259 != __result_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value259, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value260 && right_value260 != __result_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value260, (void*)0, (void*)0, 0, 1, 0, 0); }
        __dec_obj115=come_value_184->type;
        come_value_184->type=(struct sType*)come_increment_ref_count(result_type_207);
        if(__dec_obj115) { come_call_finalizer(sType_finalize,__dec_obj115, (void*)0, (void*)0, 0, 0, 0, 0); }
        come_value_184->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_184));
        add_come_last_code(info,"%s;\n",come_value_184->c_value);
        if(come_value_184) { come_call_finalizer(CVALUE_finalize,come_value_184, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(buf_198) { come_call_finalizer(buffer_finalize,buf_198, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(left_value_code_205) { left_value_code_205 = come_decrement_ref_count(left_value_code_205, (void*)0, (void*)0, 0, 0, 0); }
        if(result_type_207) { come_call_finalizer(sType_finalize,result_type_207, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __result157__ = (_Bool)1;
    if(left_value_162) { come_call_finalizer(CVALUE_finalize,left_value_162, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(array_num_166) { come_call_finalizer(list$1CVALUEphp_finalize,array_num_166, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_174) { come_call_finalizer(CVALUE_finalize,right_value_174, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_177) { come_call_finalizer(sType_finalize,type_177, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result157__;
    if(left_value_162) { come_call_finalizer(CVALUE_finalize,left_value_162, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(array_num_166) { come_call_finalizer(list$1CVALUEphp_finalize,array_num_166, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_174) { come_call_finalizer(CVALUE_finalize,right_value_174, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_177) { come_call_finalizer(sType_finalize,type_177, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
struct list$1CVALUEph* __result130__;
memset(&__result_obj__, 0, sizeof(void*));
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        __result130__ = __result_obj__ = self;
        if(self) { come_call_finalizer(list$1CVALUEphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result130__;
        if(self) { come_call_finalizer(list$1CVALUEphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
struct list_item$1CVALUEph* it_164;
_Bool _while_condtional14;
struct list_item$1CVALUEph* prev_it_165;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_164, 0, sizeof(struct list_item$1CVALUEph*));
memset(&prev_it_165, 0, sizeof(struct list_item$1CVALUEph*));
            it_164=self->head;
            while(_while_condtional14=it_164!=((void*)0),            _while_condtional14) {
                prev_it_165=it_164;
                it_164=it_164->next;
                if(prev_it_165) { come_call_finalizer(list_item$1CVALUEphp_finalize,prev_it_165, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional226;
struct sNode* result_168;
struct sNode* __result131__;
_Bool _if_conditional227;
struct sNode* __result132__;
struct sNode* result_169;
struct sNode* __result133__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_168, 0, sizeof(struct sNode*));
memset(&result_169, 0, sizeof(struct sNode*));
        if(_if_conditional226=self==((void*)0),        _if_conditional226) {
            memset(&result_168,0,sizeof(struct sNode*));
            __result131__ = __result_obj__ = result_168;
            return __result131__;
        }
        self->it=self->head;
        if(_if_conditional227=self->it,        _if_conditional227) {
            __result132__ = __result_obj__ = self->it->item;
            return __result132__;
        }
        memset(&result_169,0,sizeof(struct sNode*));
        __result133__ = __result_obj__ = result_169;
        return __result133__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __result134__;
memset(&__result_obj__, 0, sizeof(void*));
        __result134__ = self==((void*)0)||self->it==((void*)0);
        return __result134__;
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional228;
struct sNode* result_171;
struct sNode* __result135__;
_Bool _if_conditional229;
struct sNode* __result136__;
struct sNode* result_172;
struct sNode* __result137__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_171, 0, sizeof(struct sNode*));
memset(&result_172, 0, sizeof(struct sNode*));
        if(_if_conditional228=self==((void*)0)||self->it==((void*)0),        _if_conditional228) {
            memset(&result_171,0,sizeof(struct sNode*));
            __result135__ = __result_obj__ = result_171;
            return __result135__;
        }
        self->it=self->it->next;
        if(_if_conditional229=self->it,        _if_conditional229) {
            __result136__ = __result_obj__ = self->it->item;
            return __result136__;
        }
        memset(&result_172,0,sizeof(struct sNode*));
        __result137__ = __result_obj__ = result_172;
        return __result137__;
}

static struct optional$2CVALUEphbool* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional233;
struct list_item$1CVALUEph* it_180;
int i_181;
_Bool _while_condtional15;
_Bool _if_conditional234;
void* right_value243;
void* right_value244;
struct optional$2CVALUEphbool* __result141__;
struct CVALUE* default_value_182;
void* right_value245;
void* right_value246;
struct optional$2CVALUEphbool* __result142__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_180, 0, sizeof(struct list_item$1CVALUEph*));
memset(&i_181, 0, sizeof(int));
memset(&default_value_182, 0, sizeof(struct CVALUE*));
            if(_if_conditional233=position<0,            _if_conditional233) {
                position+=self->len;
            }
            it_180=self->head;
            i_181=0;
            while(_while_condtional15=it_180!=((void*)0),            _while_condtional15) {
                if(_if_conditional234=position==i_181,                _if_conditional234) {
                    __result141__ = __result_obj__ = ((struct optional$2CVALUEphbool*)(right_value244=optional$2CVALUEphbool_initialize((struct optional$2CVALUEphbool*)come_increment_ref_count(((struct optional$2CVALUEphbool*)(right_value243=(struct optional$2CVALUEphbool*)come_calloc(1, sizeof(struct optional$2CVALUEphbool)*(1), "./comelang2.h", 747)))),(struct CVALUE*)come_increment_ref_count(it_180->item),(_Bool)1)));
                    if(right_value243 && right_value243 != __result_obj__) { right_value243 = come_decrement_ref_count(right_value243, (void*)0, (void*)0, 1, 0, 0); }
                    return __result141__;
                }
                it_180=it_180->next;
                i_181++;
            }
            memset(&default_value_182,0,sizeof(struct CVALUE*));
            __result142__ = __result_obj__ = ((struct optional$2CVALUEphbool*)(right_value246=optional$2CVALUEphbool_initialize(((struct optional$2CVALUEphbool*)(right_value245=(struct optional$2CVALUEphbool*)come_calloc(1, sizeof(struct optional$2CVALUEphbool)*(1), "./comelang2.h", 755))),(struct CVALUE*)come_increment_ref_count(default_value_182),(_Bool)0)));
            if(default_value_182) { come_call_finalizer(CVALUE_finalize,default_value_182, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value245 && right_value245 != __result_obj__) { right_value245 = come_decrement_ref_count(right_value245, (void*)0, (void*)0, 1, 0, 0); }
            return __result142__;
            if(default_value_182) { come_call_finalizer(CVALUE_finalize,default_value_182, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct optional$2CVALUEphbool* optional$2CVALUEphbool_initialize(struct optional$2CVALUEphbool* self, struct CVALUE* v1, _Bool v2){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
struct CVALUE* __dec_obj109;
struct optional$2CVALUEphbool* __result140__;
memset(&__result_obj__, 0, sizeof(void*));
                        __dec_obj109=self->v1;
                        self->v1=(struct CVALUE*)come_increment_ref_count(v1);
                        if(__dec_obj109) { come_call_finalizer(CVALUE_finalize,__dec_obj109, (void*)0, (void*)0, 0, 0, 0, 0); }
                        self->v2=v2;
                        __result140__ = __result_obj__ = self;
                        if(self) { come_call_finalizer(optional$2CVALUEphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                        if(v1) { come_call_finalizer(CVALUE_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result140__;
                        if(self) { come_call_finalizer(optional$2CVALUEphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                        if(v1) { come_call_finalizer(CVALUE_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2CVALUEphboolp_finalize(struct optional$2CVALUEphbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional235;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional235=self!=((void*)0)&&self->v1!=((void*)0),                            _if_conditional235) {
                                if(self->v1) { come_call_finalizer(CVALUE_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
}

static struct CVALUE* optional$2CVALUEphbool_value(struct optional$2CVALUEphbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional236;
struct CVALUE* default_value_183;
struct CVALUE* __result143__;
struct CVALUE* __result144__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_183, 0, sizeof(struct CVALUE*));
            if(_if_conditional236=self==((void*)0),            _if_conditional236) {
                memset(&default_value_183,0,sizeof(struct CVALUE*));
                __result143__ = __result_obj__ = default_value_183;
                return __result143__;
            }
            else {
                __result144__ = __result_obj__ = self->v1;
                return __result144__;
            }
}

static int list$1CVALUEph_length(struct list$1CVALUEph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
int __result145__;
memset(&__result_obj__, 0, sizeof(void*));
                __result145__ = self->len;
                return __result145__;
}

static struct list$1sNodeph* list$1sNodeph_delete(struct list$1sNodeph* self, int head, int tail){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional239;
_Bool _if_conditional240;
_Bool _if_conditional241;
int tmp_186;
_Bool _if_conditional242;
_Bool _if_conditional243;
_Bool _if_conditional244;
struct list$1sNodeph* __result146__;
_Bool _if_conditional245;
_Bool _if_conditional246;
struct list_item$1sNodeph* it_187;
int i_188;
_Bool _while_condtional16;
_Bool _if_conditional247;
struct list_item$1sNodeph* prev_it_189;
_Bool _if_conditional248;
_Bool _if_conditional249;
struct list_item$1sNodeph* it_190;
int i_191;
_Bool _while_condtional17;
_Bool _if_conditional250;
_Bool _if_conditional251;
struct list_item$1sNodeph* prev_it_192;
struct list_item$1sNodeph* it_193;
struct list_item$1sNodeph* head_prev_it_194;
struct list_item$1sNodeph* tail_it_195;
int i_196;
_Bool _while_condtional18;
_Bool _if_conditional252;
_Bool _if_conditional253;
_Bool _if_conditional254;
struct list_item$1sNodeph* prev_it_197;
_Bool _if_conditional255;
_Bool _if_conditional256;
struct list$1sNodeph* __result147__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&tmp_186, 0, sizeof(int));
memset(&it_187, 0, sizeof(struct list_item$1sNodeph*));
memset(&i_188, 0, sizeof(int));
memset(&prev_it_189, 0, sizeof(struct list_item$1sNodeph*));
memset(&it_190, 0, sizeof(struct list_item$1sNodeph*));
memset(&i_191, 0, sizeof(int));
memset(&prev_it_192, 0, sizeof(struct list_item$1sNodeph*));
memset(&it_193, 0, sizeof(struct list_item$1sNodeph*));
memset(&head_prev_it_194, 0, sizeof(struct list_item$1sNodeph*));
memset(&tail_it_195, 0, sizeof(struct list_item$1sNodeph*));
memset(&i_196, 0, sizeof(int));
memset(&prev_it_197, 0, sizeof(struct list_item$1sNodeph*));
                    if(_if_conditional239=head<0,                    _if_conditional239) {
                        head+=self->len;
                    }
                    if(_if_conditional240=tail<0,                    _if_conditional240) {
                        tail+=self->len+1;
                    }
                    if(_if_conditional241=head>tail,                    _if_conditional241) {
                        tmp_186=tail;
                        tail=head;
                        head=tmp_186;
                    }
                    if(_if_conditional242=head<0,                    _if_conditional242) {
                        head=0;
                    }
                    if(_if_conditional243=tail>self->len,                    _if_conditional243) {
                        tail=self->len;
                    }
                    if(_if_conditional244=head==tail,                    _if_conditional244) {
                        __result146__ = __result_obj__ = self;
                        return __result146__;
                    }
                    if(_if_conditional245=head==0&&tail==self->len,                    _if_conditional245) {
                        list$1sNodeph_reset(self);
                    }
                    else {
                        if(_if_conditional246=head==0,                        _if_conditional246) {
                            it_187=self->head;
                            i_188=0;
                            while(_while_condtional16=it_187!=((void*)0),                            _while_condtional16) {
                                if(_if_conditional247=i_188<tail,                                _if_conditional247) {
                                    prev_it_189=it_187;
                                    it_187=it_187->next;
                                    i_188++;
                                    if(prev_it_189) { come_call_finalizer(list_item$1sNodephp_finalize,prev_it_189, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    self->len--;
                                }
                                else {
                                    if(_if_conditional248=i_188==tail,                                    _if_conditional248) {
                                        self->head=it_187;
                                        self->head->prev=((void*)0);
                                        break;
                                    }
                                    else {
                                        it_187=it_187->next;
                                        i_188++;
                                    }
                                }
                            }
                        }
                        else {
                            if(_if_conditional249=tail==self->len,                            _if_conditional249) {
                                it_190=self->head;
                                i_191=0;
                                while(_while_condtional17=it_190!=((void*)0),                                _while_condtional17) {
                                    if(_if_conditional250=i_191==head,                                    _if_conditional250) {
                                        self->tail=it_190->prev;
                                        self->tail->next=((void*)0);
                                    }
                                    if(_if_conditional251=i_191>=head,                                    _if_conditional251) {
                                        prev_it_192=it_190;
                                        it_190=it_190->next;
                                        i_191++;
                                        if(prev_it_192) { come_call_finalizer(list_item$1sNodephp_finalize,prev_it_192, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        self->len--;
                                    }
                                    else {
                                        it_190=it_190->next;
                                        i_191++;
                                    }
                                }
                            }
                            else {
                                it_193=self->head;
                                head_prev_it_194=((void*)0);
                                tail_it_195=((void*)0);
                                i_196=0;
                                while(_while_condtional18=it_193!=((void*)0),                                _while_condtional18) {
                                    if(_if_conditional252=i_196==head,                                    _if_conditional252) {
                                        head_prev_it_194=it_193->prev;
                                    }
                                    if(_if_conditional253=i_196==tail,                                    _if_conditional253) {
                                        tail_it_195=it_193;
                                    }
                                    if(_if_conditional254=i_196>=head&&i_196<tail,                                    _if_conditional254) {
                                        prev_it_197=it_193;
                                        it_193=it_193->next;
                                        i_196++;
                                        if(prev_it_197) { come_call_finalizer(list_item$1sNodephp_finalize,prev_it_197, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        self->len--;
                                    }
                                    else {
                                        it_193=it_193->next;
                                        i_196++;
                                    }
                                }
                                if(_if_conditional255=head_prev_it_194!=((void*)0),                                _if_conditional255) {
                                    head_prev_it_194->next=tail_it_195;
                                }
                                if(_if_conditional256=tail_it_195!=((void*)0),                                _if_conditional256) {
                                    tail_it_195->prev=head_prev_it_194;
                                }
                            }
                        }
                    }
                    __result147__ = __result_obj__ = self;
                    return __result147__;
}

static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional259;
struct CVALUE* result_200;
struct CVALUE* __result148__;
_Bool _if_conditional260;
struct CVALUE* __result149__;
struct CVALUE* result_201;
struct CVALUE* __result150__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_200, 0, sizeof(struct CVALUE*));
memset(&result_201, 0, sizeof(struct CVALUE*));
            if(_if_conditional259=self==((void*)0),            _if_conditional259) {
                memset(&result_200,0,sizeof(struct CVALUE*));
                __result148__ = __result_obj__ = result_200;
                return __result148__;
            }
            self->it=self->head;
            if(_if_conditional260=self->it,            _if_conditional260) {
                __result149__ = __result_obj__ = self->it->item;
                return __result149__;
            }
            memset(&result_201,0,sizeof(struct CVALUE*));
            __result150__ = __result_obj__ = result_201;
            return __result150__;
}

static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __result151__;
memset(&__result_obj__, 0, sizeof(void*));
            __result151__ = self==((void*)0)||self->it==((void*)0);
            return __result151__;
}

static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional261;
struct CVALUE* result_203;
struct CVALUE* __result152__;
_Bool _if_conditional262;
struct CVALUE* __result153__;
struct CVALUE* result_204;
struct CVALUE* __result154__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_203, 0, sizeof(struct CVALUE*));
memset(&result_204, 0, sizeof(struct CVALUE*));
            if(_if_conditional261=self==((void*)0)||self->it==((void*)0),            _if_conditional261) {
                memset(&result_203,0,sizeof(struct CVALUE*));
                __result152__ = __result_obj__ = result_203;
                return __result152__;
            }
            self->it=self->it->next;
            if(_if_conditional262=self->it,            _if_conditional262) {
                __result153__ = __result_obj__ = self->it->item;
                return __result153__;
            }
            memset(&result_204,0,sizeof(struct CVALUE*));
            __result154__ = __result_obj__ = result_204;
            return __result154__;
}

int sStoreArrayNode_sline(struct sStoreArrayNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
int __result158__;
memset(&__result_obj__, 0, sizeof(void*));
    __result158__ = self->sline;
    return __result158__;
}

char* sStoreArrayNode_sname(struct sStoreArrayNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value261;
char* __result159__;
memset(&__result_obj__, 0, sizeof(void*));
    __result159__ = __result_obj__ = ((char*)(right_value261=__builtin_string(self->sname)));
    return __result159__;
}

struct sLoadArrayNode* sLoadArrayNode_initialize(struct sLoadArrayNode* self, struct sNode* left, struct list$1sNodeph* array_num, _Bool quote, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value262;
char* __dec_obj116;
void* right_value263;
struct list$1sNodeph* __dec_obj117;
void* right_value264;
struct sNode* __dec_obj118;
struct sLoadArrayNode* __result160__;
memset(&__result_obj__, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj116=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value262=__builtin_string(info->sname))));
    if(__dec_obj116) { __dec_obj116 = come_decrement_ref_count(__dec_obj116, (void*)0, (void*)0, 0,0,0); }
    if(right_value262 && right_value262 != __result_obj__) { right_value262 = come_decrement_ref_count(right_value262, (void*)0, (void*)0, 1, 0, 0); }
    __dec_obj117=self->mArrayNum;
    self->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value263=list$1sNodephp_clone(array_num))));
    if(__dec_obj117) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj117, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value263 && right_value263 != __result_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value263, (void*)0, (void*)0, 0, 1, 0, 0); }
    __dec_obj118=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value264=sNode_clone(left))));
    if(__dec_obj118) { __dec_obj118 = come_decrement_ref_count(__dec_obj118, ((struct sNode*)__dec_obj118)->finalize, ((struct sNode*)__dec_obj118)->_protocol_obj, 0,0,0); }
    if(right_value264 && right_value264 != __result_obj__) { right_value264 = come_decrement_ref_count(right_value264, ((struct sNode*)right_value264)->finalize, ((struct sNode*)right_value264)->_protocol_obj, 1, 0, 0); } 
    self->mQuote=quote;
    __result160__ = __result_obj__ = self;
    if(self) { come_call_finalizer(sLoadArrayNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(array_num) { come_call_finalizer(list$1sNodephp_finalize,array_num, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result160__;
    if(self) { come_call_finalizer(sLoadArrayNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(array_num) { come_call_finalizer(list$1sNodephp_finalize,array_num, (void*)0, (void*)0, 0, 0, 1, 0); }
}

_Bool sLoadArrayNode_terminated(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __result161__;
memset(&__result_obj__, 0, sizeof(void*));
    __result161__ = (_Bool)0;
    return __result161__;
}

char* sLoadArrayNode_kind(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value265;
char* __result162__;
memset(&__result_obj__, 0, sizeof(void*));
    __result162__ = __result_obj__ = ((char*)(right_value265=__builtin_string("sLoadArrayNode")));
    return __result162__;
}

_Bool sLoadArrayNode_compile(struct sLoadArrayNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
struct sNode* left_208;
struct list$1sNodeph* array_num_nodes_209;
_Bool _if_conditional272;
_Bool __result163__;
void* right_value266;
struct CVALUE* left_value_210;
void* right_value267;
struct sType* left_type_211;
void* right_value268;
void* right_value269;
struct list$1CVALUEph* array_num_212;
struct list$1sNodeph* o2_saved_213;
struct sNode* it_214;
_Bool _for_condtionalA11;
_Bool _if_conditional273;
_Bool __result164__;
void* right_value270;
struct CVALUE* c_value_215;
void* right_value271;
struct sType* type_216;
char* fun_name_217;
_Bool calling_fun_218;
_Bool _if_conditional274;
void* right_value272;
_Bool _if_conditional275;
void* right_value273;
struct CVALUE* come_value_219;
void* right_value274;
void* right_value275;
struct buffer* buf_220;
struct list$1CVALUEph* o2_saved_221;
struct CVALUE* it_222;
_Bool _for_condtionalA12;
void* right_value276;
void* right_value277;
char* left_value_code_223;
void* right_value278;
char* __dec_obj119;
void* right_value279;
struct sType* result_type_224;
_Bool _if_conditional276;
struct sType* __dec_obj120;
_Bool _if_conditional277;
int n_225;
_Bool _if_conditional278;
void* right_value280;
struct sType* __dec_obj121;
_Bool _if_conditional279;
void* right_value281;
struct sType* __dec_obj122;
_Bool _if_conditional280;
int i_226;
_Bool _for_condtionalA13;
_Bool _if_conditional281;
_Bool _if_conditional282;
_Bool _if_conditional283;
_Bool _if_conditional284;
void* right_value282;
struct sType* __dec_obj123;
_Bool __result165__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_208, 0, sizeof(struct sNode*));
memset(&array_num_nodes_209, 0, sizeof(struct list$1sNodeph*));
memset(&left_value_210, 0, sizeof(struct CVALUE*));
memset(&left_type_211, 0, sizeof(struct sType*));
memset(&array_num_212, 0, sizeof(struct list$1CVALUEph*));
memset(&o2_saved_213, 0, sizeof(struct list$1sNodeph*));
memset(&it_214, 0, sizeof(struct sNode*));
memset(&c_value_215, 0, sizeof(struct CVALUE*));
memset(&type_216, 0, sizeof(struct sType*));
memset(&fun_name_217, 0, sizeof(char*));
memset(&calling_fun_218, 0, sizeof(_Bool));
memset(&come_value_219, 0, sizeof(struct CVALUE*));
memset(&buf_220, 0, sizeof(struct buffer*));
memset(&o2_saved_221, 0, sizeof(struct list$1CVALUEph*));
memset(&it_222, 0, sizeof(struct CVALUE*));
memset(&left_value_code_223, 0, sizeof(char*));
memset(&result_type_224, 0, sizeof(struct sType*));
memset(&n_225, 0, sizeof(int));
memset(&i_226, 0, sizeof(int));
    left_208=self->mLeft;
    array_num_nodes_209=self->mArrayNum;
    if(_if_conditional272=!node_compile(left_208,info),    _if_conditional272) {
        __result163__ = (_Bool)0;
        return __result163__;
    }
    left_value_210=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value266=get_value_from_stack(-1,info))));
    if(right_value266 && right_value266 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value266, (void*)0, (void*)0, 0, 1, 0, 0); }
    dec_stack_ptr(1,info);
    left_type_211=(struct sType*)come_increment_ref_count(((struct sType*)(right_value267=sType_clone(left_value_210->type))));
    if(right_value267 && right_value267 != __result_obj__) { come_call_finalizer(sType_finalize,right_value267, (void*)0, (void*)0, 0, 1, 0, 0); }
    array_num_212=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value269=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value268=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "18field.c", 1041))))))));
    if(right_value268 && right_value268 != __result_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value268, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value269 && right_value269 != __result_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value269, (void*)0, (void*)0, 0, 1, 0, 0); }
    for(
    o2_saved_213=(array_num_nodes_209),it_214=list$1sNodeph_begin((o2_saved_213)) ,    0;    _for_condtionalA11=    !list$1sNodeph_end((o2_saved_213)) ,    _for_condtionalA11;    it_214=list$1sNodeph_next((o2_saved_213)) ,    0    ){
        if(_if_conditional273=!node_compile(it_214,info),        _if_conditional273) {
            __result164__ = (_Bool)0;
            if(left_value_210) { come_call_finalizer(CVALUE_finalize,left_value_210, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(left_type_211) { come_call_finalizer(sType_finalize,left_type_211, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(array_num_212) { come_call_finalizer(list$1CVALUEphp_finalize,array_num_212, (void*)0, (void*)0, 0, 0, 0, 0); }
            return __result164__;
        }
        c_value_215=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value270=get_value_from_stack(-1,info))));
        if(right_value270 && right_value270 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value270, (void*)0, (void*)0, 0, 1, 0, 0); }
        dec_stack_ptr(1,info);
        list$1CVALUEph_push_back(array_num_212,(struct CVALUE*)come_increment_ref_count(c_value_215));
        if(c_value_215) { come_call_finalizer(CVALUE_finalize,c_value_215, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    type_216=(struct sType*)come_increment_ref_count(((struct sType*)(right_value271=sType_clone(left_value_210->type))));
    if(right_value271 && right_value271 != __result_obj__) { come_call_finalizer(sType_finalize,right_value271, (void*)0, (void*)0, 0, 1, 0, 0); }
    fun_name_217="operator_load_element";
    if(_if_conditional274=self->mQuote,    _if_conditional274) {
        calling_fun_218=(_Bool)0;
    }
    else {
        calling_fun_218=operator_overload_fun(type_216,fun_name_217,left_value_210,optional$2CVALUEphbool_value(((struct optional$2CVALUEphbool*)(right_value272=list$1CVALUEphp_operator_load_element(array_num_212,0)))),info);
        if(right_value272 && right_value272 != __result_obj__) { come_call_finalizer(optional$2CVALUEphboolp_finalize,right_value272, (void*)0, (void*)0, 0, 1, 0, 0); }
    }
    if(_if_conditional275=!calling_fun_218,    _if_conditional275) {
        come_value_219=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value273=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 1066))));
        if(right_value273 && right_value273 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value273, (void*)0, (void*)0, 0, 1, 0, 0); }
        buf_220=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value275=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value274=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "18field.c", 1068))))))));
        if(right_value274 && right_value274 != __result_obj__) { come_call_finalizer(buffer_finalize,right_value274, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value275 && right_value275 != __result_obj__) { come_call_finalizer(buffer_finalize,right_value275, (void*)0, (void*)0, 0, 1, 0, 0); }
        buffer_append_str(buf_220,left_value_210->c_value);
        for(
        o2_saved_221=(struct list$1CVALUEph*)come_increment_ref_count((array_num_212)),it_222=list$1CVALUEph_begin((o2_saved_221)) ,        0;        _for_condtionalA12=        !list$1CVALUEph_end((o2_saved_221)) ,        _for_condtionalA12;        it_222=list$1CVALUEph_next((o2_saved_221)) ,        0        ){
            buffer_append_str(buf_220,((char*)(right_value276=xsprintf("[%s]",it_222->c_value))));
            if(right_value276 && right_value276 != __result_obj__) { right_value276 = come_decrement_ref_count(right_value276, (void*)0, (void*)0, 1, 0, 0); }
        }
        if(o2_saved_221) { come_call_finalizer(list$1CVALUEphp_finalize,o2_saved_221, (void*)0, (void*)0, 0, 0, 0, 0); }
        left_value_code_223=(char*)come_increment_ref_count(((char*)(right_value277=buffer_to_string(buf_220))));
        if(right_value277 && right_value277 != __result_obj__) { right_value277 = come_decrement_ref_count(right_value277, (void*)0, (void*)0, 1, 0, 0); }
        __dec_obj119=come_value_219->c_value;
        come_value_219->c_value=(char*)come_increment_ref_count(((char*)(right_value278=xsprintf("%s",left_value_code_223))));
        if(__dec_obj119) { __dec_obj119 = come_decrement_ref_count(__dec_obj119, (void*)0, (void*)0, 0,0,0); }
        if(right_value278 && right_value278 != __result_obj__) { right_value278 = come_decrement_ref_count(right_value278, (void*)0, (void*)0, 1, 0, 0); }
        result_type_224=(struct sType*)come_increment_ref_count(((struct sType*)(right_value279=sType_clone(left_type_211))));
        if(right_value279 && right_value279 != __result_obj__) { come_call_finalizer(sType_finalize,right_value279, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(_if_conditional276=result_type_224->mOriginalLoadVarType->v1,        _if_conditional276) {
            __dec_obj120=result_type_224;
            result_type_224=(struct sType*)come_increment_ref_count(result_type_224->mOriginalLoadVarType->v1);
            if(__dec_obj120) { come_call_finalizer(sType_finalize,__dec_obj120, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(_if_conditional277=list$1sNodeph_length(result_type_224->mArrayNum)>0,        _if_conditional277) {
            n_225=list$1sNodeph_length(result_type_224->mArrayNum)-list$1CVALUEph_length(array_num_212);
            if(_if_conditional278=n_225==0,            _if_conditional278) {
                __dec_obj121=result_type_224;
                result_type_224=(struct sType*)come_increment_ref_count(((struct sType*)(right_value280=sType_clone(left_type_211))));
                if(__dec_obj121) { come_call_finalizer(sType_finalize,__dec_obj121, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(right_value280 && right_value280 != __result_obj__) { come_call_finalizer(sType_finalize,right_value280, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(_if_conditional279=left_type_211->mOriginalLoadVarType->v1,                _if_conditional279) {
                    __dec_obj122=result_type_224;
                    result_type_224=(struct sType*)come_increment_ref_count(((struct sType*)(right_value281=sType_clone(left_type_211->mOriginalLoadVarType->v1))));
                    if(__dec_obj122) { come_call_finalizer(sType_finalize,__dec_obj122, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(right_value281 && right_value281 != __result_obj__) { come_call_finalizer(sType_finalize,right_value281, (void*)0, (void*)0, 0, 1, 0, 0); }
                }
                list$1sNodeph_reset(result_type_224->mArrayNum);
            }
            else {
                if(_if_conditional280=n_225>0,                _if_conditional280) {
                    for(
                    i_226=0 ,                    0;                    _for_condtionalA13=                    i_226<n_225 ,                    _for_condtionalA13;                    i_226++ ,                    0                    ){
                        list$1sNodeph_delete(result_type_224->mArrayNum,-1,-1);
                    }
                }
                else {
                    if(_if_conditional281=n_225<0,                    _if_conditional281) {
                        list$1sNodeph_reset(result_type_224->mArrayNum);
                        result_type_224->mPointerNum+=n_225;
                        if(_if_conditional282=result_type_224->mPointerNum<0,                        _if_conditional282) {
                            result_type_224->mPointerNum=0;
                        }
                    }
                }
            }
        }
        else {
            if(_if_conditional283=result_type_224->mPointerNum>0,            _if_conditional283) {
                result_type_224->mPointerNum-=list$1CVALUEph_length(array_num_212);
                if(_if_conditional284=result_type_224->mPointerNum<0,                _if_conditional284) {
                    result_type_224->mPointerNum=0;
                }
            }
        }
        __dec_obj123=come_value_219->type;
        come_value_219->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value282=sType_clone(result_type_224))));
        if(__dec_obj123) { come_call_finalizer(sType_finalize,__dec_obj123, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value282 && right_value282 != __result_obj__) { come_call_finalizer(sType_finalize,right_value282, (void*)0, (void*)0, 0, 1, 0, 0); }
        come_value_219->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_219));
        add_come_last_code(info,"%s;\n",come_value_219->c_value);
        if(come_value_219) { come_call_finalizer(CVALUE_finalize,come_value_219, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(buf_220) { come_call_finalizer(buffer_finalize,buf_220, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(left_value_code_223) { left_value_code_223 = come_decrement_ref_count(left_value_code_223, (void*)0, (void*)0, 0, 0, 0); }
        if(result_type_224) { come_call_finalizer(sType_finalize,result_type_224, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __result165__ = (_Bool)1;
    if(left_value_210) { come_call_finalizer(CVALUE_finalize,left_value_210, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(left_type_211) { come_call_finalizer(sType_finalize,left_type_211, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(array_num_212) { come_call_finalizer(list$1CVALUEphp_finalize,array_num_212, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_216) { come_call_finalizer(sType_finalize,type_216, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result165__;
    if(left_value_210) { come_call_finalizer(CVALUE_finalize,left_value_210, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(left_type_211) { come_call_finalizer(sType_finalize,left_type_211, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(array_num_212) { come_call_finalizer(list$1CVALUEphp_finalize,array_num_212, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_216) { come_call_finalizer(sType_finalize,type_216, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sLoadArrayNode_sline(struct sLoadArrayNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
int __result166__;
memset(&__result_obj__, 0, sizeof(void*));
    __result166__ = self->sline;
    return __result166__;
}

char* sLoadArrayNode_sname(struct sLoadArrayNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value283;
char* __result167__;
memset(&__result_obj__, 0, sizeof(void*));
    __result167__ = __result_obj__ = ((char*)(right_value283=__builtin_string(self->sname)));
    return __result167__;
}

struct sLoadRangeArrayNode* sLoadRangeArrayNode_initialize(struct sLoadRangeArrayNode* self, struct sNode* left, struct list$1sNodeph* array_num, _Bool quote, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value284;
char* __dec_obj124;
void* right_value285;
struct list$1sNodeph* __dec_obj125;
void* right_value286;
struct sNode* __dec_obj126;
struct sLoadRangeArrayNode* __result168__;
memset(&__result_obj__, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj124=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value284=__builtin_string(info->sname))));
    if(__dec_obj124) { __dec_obj124 = come_decrement_ref_count(__dec_obj124, (void*)0, (void*)0, 0,0,0); }
    if(right_value284 && right_value284 != __result_obj__) { right_value284 = come_decrement_ref_count(right_value284, (void*)0, (void*)0, 1, 0, 0); }
    __dec_obj125=self->mArrayNum;
    self->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value285=list$1sNodephp_clone(array_num))));
    if(__dec_obj125) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj125, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value285 && right_value285 != __result_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value285, (void*)0, (void*)0, 0, 1, 0, 0); }
    __dec_obj126=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value286=sNode_clone(left))));
    if(__dec_obj126) { __dec_obj126 = come_decrement_ref_count(__dec_obj126, ((struct sNode*)__dec_obj126)->finalize, ((struct sNode*)__dec_obj126)->_protocol_obj, 0,0,0); }
    if(right_value286 && right_value286 != __result_obj__) { right_value286 = come_decrement_ref_count(right_value286, ((struct sNode*)right_value286)->finalize, ((struct sNode*)right_value286)->_protocol_obj, 1, 0, 0); } 
    self->mQuote=quote;
    __result168__ = __result_obj__ = self;
    if(self) { come_call_finalizer(sLoadRangeArrayNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(array_num) { come_call_finalizer(list$1sNodephp_finalize,array_num, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result168__;
    if(self) { come_call_finalizer(sLoadRangeArrayNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(array_num) { come_call_finalizer(list$1sNodephp_finalize,array_num, (void*)0, (void*)0, 0, 0, 1, 0); }
}

_Bool sLoadRangeArrayNode_terminated(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __result169__;
memset(&__result_obj__, 0, sizeof(void*));
    __result169__ = (_Bool)0;
    return __result169__;
}

char* sLoadRangeArrayNode_kind(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value287;
char* __result170__;
memset(&__result_obj__, 0, sizeof(void*));
    __result170__ = __result_obj__ = ((char*)(right_value287=__builtin_string("sLoadRangeArrayNode")));
    return __result170__;
}

_Bool sLoadRangeArrayNode_compile(struct sLoadRangeArrayNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
struct sNode* left_227;
struct list$1sNodeph* array_num_nodes_228;
_Bool _if_conditional288;
_Bool __result171__;
void* right_value288;
struct CVALUE* left_value_229;
void* right_value289;
struct sType* left_type_230;
void* right_value290;
void* right_value291;
struct list$1CVALUEph* array_num_231;
struct list$1sNodeph* o2_saved_232;
struct sNode* it_233;
_Bool _for_condtionalA14;
_Bool _if_conditional289;
_Bool __result172__;
void* right_value292;
struct CVALUE* c_value_234;
void* right_value293;
struct sType* type_235;
char* fun_name_236;
_Bool calling_fun_237;
_Bool _if_conditional290;
void* right_value294;
void* right_value295;
_Bool _if_conditional291;
void* right_value296;
struct CVALUE* come_value_238;
void* right_value297;
void* right_value298;
struct buffer* buf_239;
struct list$1CVALUEph* o2_saved_240;
struct CVALUE* it_241;
_Bool _for_condtionalA15;
void* right_value299;
void* right_value300;
char* left_value_code_242;
void* right_value301;
char* __dec_obj127;
void* right_value302;
struct sType* result_type_243;
_Bool _if_conditional292;
struct sType* __dec_obj128;
_Bool _if_conditional293;
int n_244;
_Bool _if_conditional294;
void* right_value303;
struct sType* __dec_obj129;
_Bool _if_conditional295;
void* right_value304;
struct sType* __dec_obj130;
_Bool _if_conditional296;
int i_245;
_Bool _for_condtionalA16;
_Bool _if_conditional297;
_Bool _if_conditional298;
_Bool _if_conditional299;
_Bool _if_conditional300;
void* right_value305;
struct sType* __dec_obj131;
_Bool __result173__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_227, 0, sizeof(struct sNode*));
memset(&array_num_nodes_228, 0, sizeof(struct list$1sNodeph*));
memset(&left_value_229, 0, sizeof(struct CVALUE*));
memset(&left_type_230, 0, sizeof(struct sType*));
memset(&array_num_231, 0, sizeof(struct list$1CVALUEph*));
memset(&o2_saved_232, 0, sizeof(struct list$1sNodeph*));
memset(&it_233, 0, sizeof(struct sNode*));
memset(&c_value_234, 0, sizeof(struct CVALUE*));
memset(&type_235, 0, sizeof(struct sType*));
memset(&fun_name_236, 0, sizeof(char*));
memset(&calling_fun_237, 0, sizeof(_Bool));
memset(&come_value_238, 0, sizeof(struct CVALUE*));
memset(&buf_239, 0, sizeof(struct buffer*));
memset(&o2_saved_240, 0, sizeof(struct list$1CVALUEph*));
memset(&it_241, 0, sizeof(struct CVALUE*));
memset(&left_value_code_242, 0, sizeof(char*));
memset(&result_type_243, 0, sizeof(struct sType*));
memset(&n_244, 0, sizeof(int));
memset(&i_245, 0, sizeof(int));
    left_227=self->mLeft;
    array_num_nodes_228=self->mArrayNum;
    if(_if_conditional288=!node_compile(left_227,info),    _if_conditional288) {
        __result171__ = (_Bool)0;
        return __result171__;
    }
    left_value_229=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value288=get_value_from_stack(-1,info))));
    if(right_value288 && right_value288 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value288, (void*)0, (void*)0, 0, 1, 0, 0); }
    dec_stack_ptr(1,info);
    left_type_230=(struct sType*)come_increment_ref_count(((struct sType*)(right_value289=sType_clone(left_value_229->type))));
    if(right_value289 && right_value289 != __result_obj__) { come_call_finalizer(sType_finalize,right_value289, (void*)0, (void*)0, 0, 1, 0, 0); }
    array_num_231=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value291=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value290=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "18field.c", 1188))))))));
    if(right_value290 && right_value290 != __result_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value290, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value291 && right_value291 != __result_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value291, (void*)0, (void*)0, 0, 1, 0, 0); }
    for(
    o2_saved_232=(array_num_nodes_228),it_233=list$1sNodeph_begin((o2_saved_232)) ,    0;    _for_condtionalA14=    !list$1sNodeph_end((o2_saved_232)) ,    _for_condtionalA14;    it_233=list$1sNodeph_next((o2_saved_232)) ,    0    ){
        if(_if_conditional289=!node_compile(it_233,info),        _if_conditional289) {
            __result172__ = (_Bool)0;
            if(left_value_229) { come_call_finalizer(CVALUE_finalize,left_value_229, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(left_type_230) { come_call_finalizer(sType_finalize,left_type_230, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(array_num_231) { come_call_finalizer(list$1CVALUEphp_finalize,array_num_231, (void*)0, (void*)0, 0, 0, 0, 0); }
            return __result172__;
        }
        c_value_234=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value292=get_value_from_stack(-1,info))));
        if(right_value292 && right_value292 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value292, (void*)0, (void*)0, 0, 1, 0, 0); }
        dec_stack_ptr(1,info);
        list$1CVALUEph_push_back(array_num_231,(struct CVALUE*)come_increment_ref_count(c_value_234));
        if(c_value_234) { come_call_finalizer(CVALUE_finalize,c_value_234, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    type_235=(struct sType*)come_increment_ref_count(((struct sType*)(right_value293=sType_clone(left_value_229->type))));
    if(right_value293 && right_value293 != __result_obj__) { come_call_finalizer(sType_finalize,right_value293, (void*)0, (void*)0, 0, 1, 0, 0); }
    fun_name_236="operator_load_range_element";
    if(_if_conditional290=self->mQuote,    _if_conditional290) {
        calling_fun_237=(_Bool)0;
    }
    else {
        calling_fun_237=operator_overload_fun2(type_235,fun_name_236,left_value_229,optional$2CVALUEphbool_value(((struct optional$2CVALUEphbool*)(right_value294=list$1CVALUEphp_operator_load_element(array_num_231,0)))),optional$2CVALUEphbool_value(((struct optional$2CVALUEphbool*)(right_value295=list$1CVALUEphp_operator_load_element(array_num_231,1)))),info);
        if(right_value294 && right_value294 != __result_obj__) { come_call_finalizer(optional$2CVALUEphboolp_finalize,right_value294, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value295 && right_value295 != __result_obj__) { come_call_finalizer(optional$2CVALUEphboolp_finalize,right_value295, (void*)0, (void*)0, 0, 1, 0, 0); }
    }
    if(_if_conditional291=!calling_fun_237,    _if_conditional291) {
        come_value_238=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value296=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 1213))));
        if(right_value296 && right_value296 != __result_obj__) { come_call_finalizer(CVALUE_finalize,right_value296, (void*)0, (void*)0, 0, 1, 0, 0); }
        buf_239=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value298=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value297=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "18field.c", 1215))))))));
        if(right_value297 && right_value297 != __result_obj__) { come_call_finalizer(buffer_finalize,right_value297, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value298 && right_value298 != __result_obj__) { come_call_finalizer(buffer_finalize,right_value298, (void*)0, (void*)0, 0, 1, 0, 0); }
        buffer_append_str(buf_239,left_value_229->c_value);
        for(
        o2_saved_240=(struct list$1CVALUEph*)come_increment_ref_count((array_num_231)),it_241=list$1CVALUEph_begin((o2_saved_240)) ,        0;        _for_condtionalA15=        !list$1CVALUEph_end((o2_saved_240)) ,        _for_condtionalA15;        it_241=list$1CVALUEph_next((o2_saved_240)) ,        0        ){
            buffer_append_str(buf_239,((char*)(right_value299=xsprintf("[%s]",it_241->c_value))));
            if(right_value299 && right_value299 != __result_obj__) { right_value299 = come_decrement_ref_count(right_value299, (void*)0, (void*)0, 1, 0, 0); }
        }
        if(o2_saved_240) { come_call_finalizer(list$1CVALUEphp_finalize,o2_saved_240, (void*)0, (void*)0, 0, 0, 0, 0); }
        left_value_code_242=(char*)come_increment_ref_count(((char*)(right_value300=buffer_to_string(buf_239))));
        if(right_value300 && right_value300 != __result_obj__) { right_value300 = come_decrement_ref_count(right_value300, (void*)0, (void*)0, 1, 0, 0); }
        __dec_obj127=come_value_238->c_value;
        come_value_238->c_value=(char*)come_increment_ref_count(((char*)(right_value301=xsprintf("%s",left_value_code_242))));
        if(__dec_obj127) { __dec_obj127 = come_decrement_ref_count(__dec_obj127, (void*)0, (void*)0, 0,0,0); }
        if(right_value301 && right_value301 != __result_obj__) { right_value301 = come_decrement_ref_count(right_value301, (void*)0, (void*)0, 1, 0, 0); }
        result_type_243=(struct sType*)come_increment_ref_count(((struct sType*)(right_value302=sType_clone(left_type_230))));
        if(right_value302 && right_value302 != __result_obj__) { come_call_finalizer(sType_finalize,right_value302, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(_if_conditional292=result_type_243->mOriginalLoadVarType->v1,        _if_conditional292) {
            __dec_obj128=result_type_243;
            result_type_243=(struct sType*)come_increment_ref_count(result_type_243->mOriginalLoadVarType->v1);
            if(__dec_obj128) { come_call_finalizer(sType_finalize,__dec_obj128, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(_if_conditional293=list$1sNodeph_length(result_type_243->mArrayNum)>0,        _if_conditional293) {
            n_244=list$1sNodeph_length(result_type_243->mArrayNum)-list$1CVALUEph_length(array_num_231);
            if(_if_conditional294=n_244==0,            _if_conditional294) {
                __dec_obj129=result_type_243;
                result_type_243=(struct sType*)come_increment_ref_count(((struct sType*)(right_value303=sType_clone(left_type_230))));
                if(__dec_obj129) { come_call_finalizer(sType_finalize,__dec_obj129, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(right_value303 && right_value303 != __result_obj__) { come_call_finalizer(sType_finalize,right_value303, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(_if_conditional295=left_type_230->mOriginalLoadVarType->v1,                _if_conditional295) {
                    __dec_obj130=result_type_243;
                    result_type_243=(struct sType*)come_increment_ref_count(((struct sType*)(right_value304=sType_clone(left_type_230->mOriginalLoadVarType->v1))));
                    if(__dec_obj130) { come_call_finalizer(sType_finalize,__dec_obj130, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(right_value304 && right_value304 != __result_obj__) { come_call_finalizer(sType_finalize,right_value304, (void*)0, (void*)0, 0, 1, 0, 0); }
                }
                list$1sNodeph_reset(result_type_243->mArrayNum);
            }
            else {
                if(_if_conditional296=n_244>0,                _if_conditional296) {
                    for(
                    i_245=0 ,                    0;                    _for_condtionalA16=                    i_245<n_244 ,                    _for_condtionalA16;                    i_245++ ,                    0                    ){
                        list$1sNodeph_delete(result_type_243->mArrayNum,-1,-1);
                    }
                }
                else {
                    if(_if_conditional297=n_244<0,                    _if_conditional297) {
                        list$1sNodeph_reset(result_type_243->mArrayNum);
                        result_type_243->mPointerNum+=n_244;
                        if(_if_conditional298=result_type_243->mPointerNum<0,                        _if_conditional298) {
                            result_type_243->mPointerNum=0;
                        }
                    }
                }
            }
        }
        else {
            if(_if_conditional299=result_type_243->mPointerNum>0,            _if_conditional299) {
                result_type_243->mPointerNum-=list$1CVALUEph_length(array_num_231);
                if(_if_conditional300=result_type_243->mPointerNum<0,                _if_conditional300) {
                    result_type_243->mPointerNum=0;
                }
            }
        }
        __dec_obj131=come_value_238->type;
        come_value_238->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value305=sType_clone(result_type_243))));
        if(__dec_obj131) { come_call_finalizer(sType_finalize,__dec_obj131, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value305 && right_value305 != __result_obj__) { come_call_finalizer(sType_finalize,right_value305, (void*)0, (void*)0, 0, 1, 0, 0); }
        come_value_238->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_238));
        add_come_last_code(info,"%s;\n",come_value_238->c_value);
        if(come_value_238) { come_call_finalizer(CVALUE_finalize,come_value_238, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(buf_239) { come_call_finalizer(buffer_finalize,buf_239, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(left_value_code_242) { left_value_code_242 = come_decrement_ref_count(left_value_code_242, (void*)0, (void*)0, 0, 0, 0); }
        if(result_type_243) { come_call_finalizer(sType_finalize,result_type_243, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __result173__ = (_Bool)1;
    if(left_value_229) { come_call_finalizer(CVALUE_finalize,left_value_229, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(left_type_230) { come_call_finalizer(sType_finalize,left_type_230, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(array_num_231) { come_call_finalizer(list$1CVALUEphp_finalize,array_num_231, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_235) { come_call_finalizer(sType_finalize,type_235, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result173__;
    if(left_value_229) { come_call_finalizer(CVALUE_finalize,left_value_229, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(left_type_230) { come_call_finalizer(sType_finalize,left_type_230, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(array_num_231) { come_call_finalizer(list$1CVALUEphp_finalize,array_num_231, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_235) { come_call_finalizer(sType_finalize,type_235, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sLoadRangeArrayNode_sline(struct sLoadRangeArrayNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
int __result174__;
memset(&__result_obj__, 0, sizeof(void*));
    __result174__ = self->sline;
    return __result174__;
}

char* sLoadRangeArrayNode_sname(struct sLoadRangeArrayNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
void* right_value306;
char* __result175__;
memset(&__result_obj__, 0, sizeof(void*));
    __result175__ = __result_obj__ = ((char*)(right_value306=__builtin_string(self->sname)));
    return __result175__;
}

struct sNode* post_position_operator2_v18(struct sNode* node, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
struct sNode* __result176__;
memset(&__result_obj__, 0, sizeof(void*));
    __result176__ = __result_obj__ = (struct sNode*)((void*)0);
    if(node) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
    return __result176__;
    if(node) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
}

struct sNode* parse_method_call_v18(struct sNode* obj, char* fun_name, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
struct sNode* __result177__;
memset(&__result_obj__, 0, sizeof(void*));
    err_msg(info,"parse_method_call is failed");
    exit(2);
    __result177__ = __result_obj__ = (struct sNode*)((void*)0);
    if(obj) { obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 1, 0); } 
    if(fun_name) { fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 1, 0); }
    return __result177__;
    if(obj) { obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 1, 0); } 
    if(fun_name) { fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 1, 0); }
}

struct sNode* exception_get_value(struct sNode* node, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional301;
char* p_246;
int sline_247;
_Bool _if_conditional302;
void* right_value307;
char* word_248;
_Bool _if_conditional303;
void* right_value308;
void* right_value309;
struct sNode* _inf_value2;
struct sExceptionGetValueNode* _inf_obj_value2;
void* right_value313;
struct sNode* __dec_obj134;
void* right_value314;
void* right_value315;
struct sNode* _inf_value3;
struct sExceptionGetValueNode* _inf_obj_value3;
void* right_value319;
struct sNode* __dec_obj137;
_Bool _if_conditional316;
_Bool _if_conditional317;
void* right_value320;
void* right_value321;
struct sNode* _inf_value4;
struct sExceptionGetValueNode* _inf_obj_value4;
void* right_value325;
struct sNode* __dec_obj140;
struct sNode* __result184__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&p_246, 0, sizeof(char*));
memset(&sline_247, 0, sizeof(int));
memset(&word_248, 0, sizeof(char*));
    if(_if_conditional301=(*info->p==46&&*(info->p+1)!=46)||(*info->p==45&&*(info->p+1)==62),    _if_conditional301) {
        p_246=info->p;
        sline_247=info->sline;
        info->p++;
        skip_spaces_and_lf(info);
        if(_if_conditional302=xisalpha(*info->p)||*info->p==95,        _if_conditional302) {
            word_248=(char*)come_increment_ref_count(optional$2charphbool_expect(((struct optional$2charphbool*)(right_value307=parse_word(info)))));
            if(right_value307 && right_value307 != __result_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value307, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(_if_conditional303=(string_operator_equals(word_248,"expect")||string_operator_equals(word_248,"value")||string_operator_equals(word_248,"catch"))&&(*info->p==40||*info->p==123),            _if_conditional303) {
                info->p=p_246;
                info->sline=sline_247;
            }
            else {
                info->p=p_246;
                info->sline=sline_247;
                _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1321);
                _inf_obj_value2=come_increment_ref_count(((struct sExceptionGetValueNode*)(right_value309=sExceptionGetValueNode_initialize((struct sExceptionGetValueNode*)come_increment_ref_count(((struct sExceptionGetValueNode*)(right_value308=(struct sExceptionGetValueNode*)come_calloc(1, sizeof(struct sExceptionGetValueNode)*(1), "18field.c", 1321)))),node,info))));
                _inf_value2->_protocol_obj=_inf_obj_value2;
                _inf_value2->finalize=(void*)sExceptionGetValueNode_finalize;
                _inf_value2->clone=(void*)sExceptionGetValueNode_clone;
                _inf_value2->compile=(void*)sExceptionGetValueNode_compile;
                _inf_value2->sline=(void*)sExceptionGetValueNode_sline;
                _inf_value2->sname=(void*)sExceptionGetValueNode_sname;
                _inf_value2->terminated=(void*)sExceptionGetValueNode_terminated;
                _inf_value2->kind=(void*)sExceptionGetValueNode_kind;
                __dec_obj134=node;
                node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value313=_inf_value2)));
                if(__dec_obj134) { __dec_obj134 = come_decrement_ref_count(__dec_obj134, ((struct sNode*)__dec_obj134)->finalize, ((struct sNode*)__dec_obj134)->_protocol_obj, 0,0,0); }
                if(right_value308 && right_value308 != __result_obj__) { come_call_finalizer(sExceptionGetValueNode_finalize,right_value308, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value309 && right_value309 != __result_obj__) { come_call_finalizer(sExceptionGetValueNode_finalize,right_value309, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value313 && right_value313 != __result_obj__) { right_value313 = come_decrement_ref_count(right_value313, ((struct sNode*)right_value313)->finalize, ((struct sNode*)right_value313)->_protocol_obj, 1, 0, 0); } 
            }
            if(word_248) { word_248 = come_decrement_ref_count(word_248, (void*)0, (void*)0, 0, 0, 0); }
        }
        else {
            info->p=p_246;
            info->sline=sline_247;
            _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1328);
            _inf_obj_value3=come_increment_ref_count(((struct sExceptionGetValueNode*)(right_value315=sExceptionGetValueNode_initialize((struct sExceptionGetValueNode*)come_increment_ref_count(((struct sExceptionGetValueNode*)(right_value314=(struct sExceptionGetValueNode*)come_calloc(1, sizeof(struct sExceptionGetValueNode)*(1), "18field.c", 1328)))),node,info))));
            _inf_value3->_protocol_obj=_inf_obj_value3;
            _inf_value3->finalize=(void*)sExceptionGetValueNode_finalize;
            _inf_value3->clone=(void*)sExceptionGetValueNode_clone;
            _inf_value3->compile=(void*)sExceptionGetValueNode_compile;
            _inf_value3->sline=(void*)sExceptionGetValueNode_sline;
            _inf_value3->sname=(void*)sExceptionGetValueNode_sname;
            _inf_value3->terminated=(void*)sExceptionGetValueNode_terminated;
            _inf_value3->kind=(void*)sExceptionGetValueNode_kind;
            __dec_obj137=node;
            node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value319=_inf_value3)));
            if(__dec_obj137) { __dec_obj137 = come_decrement_ref_count(__dec_obj137, ((struct sNode*)__dec_obj137)->finalize, ((struct sNode*)__dec_obj137)->_protocol_obj, 0,0,0); }
            if(right_value314 && right_value314 != __result_obj__) { come_call_finalizer(sExceptionGetValueNode_finalize,right_value314, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value315 && right_value315 != __result_obj__) { come_call_finalizer(sExceptionGetValueNode_finalize,right_value315, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value319 && right_value319 != __result_obj__) { right_value319 = come_decrement_ref_count(right_value319, ((struct sNode*)right_value319)->finalize, ((struct sNode*)right_value319)->_protocol_obj, 1, 0, 0); } 
        }
    }
    else {
        if(_if_conditional316=*info->p==33&&*(info->p+1)!=61&&*(info->p+1)!=123,        _if_conditional316) {
        }
        else {
            if(_if_conditional317=node==((void*)0),            _if_conditional317) {
            }
            else {
                _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1336);
                _inf_obj_value4=come_increment_ref_count(((struct sExceptionGetValueNode*)(right_value321=sExceptionGetValueNode_initialize((struct sExceptionGetValueNode*)come_increment_ref_count(((struct sExceptionGetValueNode*)(right_value320=(struct sExceptionGetValueNode*)come_calloc(1, sizeof(struct sExceptionGetValueNode)*(1), "18field.c", 1336)))),node,info))));
                _inf_value4->_protocol_obj=_inf_obj_value4;
                _inf_value4->finalize=(void*)sExceptionGetValueNode_finalize;
                _inf_value4->clone=(void*)sExceptionGetValueNode_clone;
                _inf_value4->compile=(void*)sExceptionGetValueNode_compile;
                _inf_value4->sline=(void*)sExceptionGetValueNode_sline;
                _inf_value4->sname=(void*)sExceptionGetValueNode_sname;
                _inf_value4->terminated=(void*)sExceptionGetValueNode_terminated;
                _inf_value4->kind=(void*)sExceptionGetValueNode_kind;
                __dec_obj140=node;
                node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value325=_inf_value4)));
                if(__dec_obj140) { __dec_obj140 = come_decrement_ref_count(__dec_obj140, ((struct sNode*)__dec_obj140)->finalize, ((struct sNode*)__dec_obj140)->_protocol_obj, 0,0,0); }
                if(right_value320 && right_value320 != __result_obj__) { come_call_finalizer(sExceptionGetValueNode_finalize,right_value320, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value321 && right_value321 != __result_obj__) { come_call_finalizer(sExceptionGetValueNode_finalize,right_value321, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value325 && right_value325 != __result_obj__) { right_value325 = come_decrement_ref_count(right_value325, ((struct sNode*)right_value325)->finalize, ((struct sNode*)right_value325)->_protocol_obj, 1, 0, 0); } 
            }
        }
    }
    __result184__ = __result_obj__ = node;
    if(node) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
    return __result184__;
    if(node) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
}

static void sExceptionGetValueNode_finalize(struct sExceptionGetValueNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional318;
_Bool _if_conditional319;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional318=self!=((void*)0)&&self->mLeft!=((void*)0),                    _if_conditional318) {
                        if(self->mLeft) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0); } 
                    }
                    if(_if_conditional319=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional319) {
                        if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                    }
}

static struct sExceptionGetValueNode* sExceptionGetValueNode_clone(struct sExceptionGetValueNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional320;
struct sExceptionGetValueNode* __result182__;
void* right_value322;
struct sExceptionGetValueNode* result_251;
_Bool _if_conditional321;
void* right_value323;
struct sNode* __dec_obj138;
_Bool _if_conditional322;
_Bool _if_conditional323;
void* right_value324;
char* __dec_obj139;
struct sExceptionGetValueNode* __result183__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_251, 0, sizeof(struct sExceptionGetValueNode*));
                    if(_if_conditional320=self==(void*)0,                    _if_conditional320) {
                        __result182__ = __result_obj__ = (void*)0;
                        return __result182__;
                    }
                    result_251=(struct sExceptionGetValueNode*)come_increment_ref_count(((struct sExceptionGetValueNode*)(right_value322=(struct sExceptionGetValueNode*)come_calloc(1, sizeof(struct sExceptionGetValueNode)*(1), "sExceptionGetValueNode_clone", 3))));
                    if(right_value322 && right_value322 != __result_obj__) { come_call_finalizer(sExceptionGetValueNode_finalize,right_value322, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(_if_conditional321=self!=((void*)0)&&self->mLeft!=((void*)0),                    _if_conditional321) {
                        __dec_obj138=result_251->mLeft;
                        result_251->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value323=sNode_clone(self->mLeft))));
                        if(__dec_obj138) { __dec_obj138 = come_decrement_ref_count(__dec_obj138, ((struct sNode*)__dec_obj138)->finalize, ((struct sNode*)__dec_obj138)->_protocol_obj, 0,0,0); }
                        if(right_value323 && right_value323 != __result_obj__) { right_value323 = come_decrement_ref_count(right_value323, ((struct sNode*)right_value323)->finalize, ((struct sNode*)right_value323)->_protocol_obj, 1, 0, 0); } 
                    }
                    if(_if_conditional322=self!=((void*)0),                    _if_conditional322) {
                        result_251->sline=self->sline;
                    }
                    if(_if_conditional323=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional323) {
                        __dec_obj139=result_251->sname;
                        result_251->sname=(char*)come_increment_ref_count(((char*)(right_value324=string_clone(self->sname))));
                        if(__dec_obj139) { __dec_obj139 = come_decrement_ref_count(__dec_obj139, (void*)0, (void*)0, 0,0,0); }
                        if(right_value324 && right_value324 != __result_obj__) { right_value324 = come_decrement_ref_count(right_value324, (void*)0, (void*)0, 1, 0, 0); }
                    }
                    __result183__ = __result_obj__ = result_251;
                    if(result_251) { come_call_finalizer(sExceptionGetValueNode_finalize,result_251, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result183__;
                    if(result_251) { come_call_finalizer(sExceptionGetValueNode_finalize,result_251, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sNode* post_position_operator_v18(struct sNode* node, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _while_condtional19;
_Bool range_array_252;
char* p_253;
int sline_254;
_Bool _if_conditional324;
_Bool no_comma_255;
_Bool no_output_err_256;
_Bool no_output_come_code_257;
void* right_value326;
struct sNode* exp_258;
_Bool _if_conditional325;
_Bool _if_conditional326;
_Bool quote_259;
_Bool _if_conditional327;
void* right_value327;
void* right_value328;
struct list$1sNodeph* array_num_260;
void* right_value329;
struct sNode* node2_261;
_Bool _if_conditional330;
void* right_value333;
struct sNode* node3_265;
void* right_value334;
void* right_value335;
void* right_value336;
struct sNode* _inf_value5;
struct sLoadRangeArrayNode* _inf_obj_value5;
void* right_value341;
struct sNode* __dec_obj147;
_Bool _if_conditional341;
_Bool quote_268;
_Bool _if_conditional342;
_Bool range_269;
void* right_value342;
void* right_value343;
struct list$1sNodeph* array_num_270;
_Bool _while_condtional20;
_Bool range_array2_271;
char* p_272;
int sline_273;
_Bool _if_conditional343;
_Bool no_comma_274;
_Bool no_output_err_275;
_Bool no_output_come_code_276;
void* right_value344;
struct sNode* exp_277;
_Bool _if_conditional344;
_Bool _if_conditional345;
_Bool _if_conditional346;
void* right_value345;
struct sNode* node2_278;
_Bool _if_conditional347;
_Bool _if_conditional348;
void* right_value346;
struct sNode* right_node_279;
void* right_value347;
void* right_value348;
struct sNode* _inf_value6;
struct sStoreArrayNode* _inf_obj_value6;
void* right_value354;
struct sNode* __dec_obj152;
void* right_value355;
void* right_value356;
struct sNode* _inf_value7;
struct sLoadArrayNode* _inf_obj_value7;
void* right_value361;
struct sNode* __dec_obj156;
void* right_value362;
struct sNode* __dec_obj157;
_Bool _if_conditional369;
_Bool no_comma_282;
void* right_value363;
struct sNode* begin_283;
void* right_value364;
void* right_value365;
struct sNode* end_284;
void* right_value366;
void* right_value367;
void* right_value368;
struct sNode* _inf_value8;
struct sRangeCheckNode* _inf_obj_value8;
void* right_value374;
struct sNode* __dec_obj162;
_Bool _if_conditional380;
void* right_value375;
void* right_value376;
struct sNode* _inf_value9;
struct sNullCheckNode* _inf_obj_value9;
void* right_value380;
struct sNode* __dec_obj165;
_Bool _if_conditional388;
_Bool _if_conditional389;
void* right_value381;
void* right_value382;
void* right_value383;
struct sNode* _inf_value10;
struct sNullCheckNode* _inf_obj_value10;
void* right_value387;
struct sNode* __dec_obj168;
void* right_value388;
char* field_name_288;
_Bool _if_conditional397;
void* right_value389;
struct sNode* right_node_289;
void* right_value390;
void* right_value391;
struct sNode* _inf_value11;
struct sStoreFieldNode* _inf_obj_value11;
void* right_value397;
struct sNode* __dec_obj173;
_Bool _if_conditional408;
_Bool _if_conditional409;
void* right_value398;
void* right_value399;
struct sNode* __dec_obj174;
_Bool _if_conditional410;
void* right_value400;
void* right_value401;
struct sNode* __dec_obj175;
void* right_value402;
void* right_value403;
struct sNode* __dec_obj176;
void* right_value404;
void* right_value405;
struct sNode* _inf_value12;
struct sLoadFieldNode* _inf_obj_value12;
void* right_value410;
struct sNode* __dec_obj180;
void* right_value411;
struct sNode* node2_292;
_Bool _if_conditional419;
struct sNode* __dec_obj181;
struct sNode* __result204__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&range_array_252, 0, sizeof(_Bool));
memset(&p_253, 0, sizeof(char*));
memset(&sline_254, 0, sizeof(int));
memset(&no_comma_255, 0, sizeof(_Bool));
memset(&no_output_err_256, 0, sizeof(_Bool));
memset(&no_output_come_code_257, 0, sizeof(_Bool));
memset(&exp_258, 0, sizeof(struct sNode*));
memset(&quote_259, 0, sizeof(_Bool));
memset(&array_num_260, 0, sizeof(struct list$1sNodeph*));
memset(&node2_261, 0, sizeof(struct sNode*));
memset(&node3_265, 0, sizeof(struct sNode*));
memset(&quote_268, 0, sizeof(_Bool));
memset(&range_269, 0, sizeof(_Bool));
memset(&array_num_270, 0, sizeof(struct list$1sNodeph*));
memset(&range_array2_271, 0, sizeof(_Bool));
memset(&p_272, 0, sizeof(char*));
memset(&sline_273, 0, sizeof(int));
memset(&no_comma_274, 0, sizeof(_Bool));
memset(&no_output_err_275, 0, sizeof(_Bool));
memset(&no_output_come_code_276, 0, sizeof(_Bool));
memset(&exp_277, 0, sizeof(struct sNode*));
memset(&node2_278, 0, sizeof(struct sNode*));
memset(&right_node_279, 0, sizeof(struct sNode*));
memset(&no_comma_282, 0, sizeof(_Bool));
memset(&begin_283, 0, sizeof(struct sNode*));
memset(&end_284, 0, sizeof(struct sNode*));
memset(&field_name_288, 0, sizeof(char*));
memset(&right_node_289, 0, sizeof(struct sNode*));
memset(&node2_292, 0, sizeof(struct sNode*));
    while(_while_condtional19=(_Bool)1,    _while_condtional19) {
        range_array_252=(_Bool)0;
        {
            p_253=info->p;
            sline_254=info->sline;
            if(_if_conditional324=*info->p==91,            _if_conditional324) {
                info->p++;
                skip_spaces_and_lf(info);
                no_comma_255=info->no_comma;
                no_output_err_256=info->no_output_err;
                no_output_come_code_257=info->no_output_come_code;
                info->no_output_err=(_Bool)1;
                info->no_comma=(_Bool)1;
                info->no_output_come_code=(_Bool)1;
                exp_258=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value326=expression_v13(info))));
                if(right_value326 && right_value326 != __result_obj__) { right_value326 = come_decrement_ref_count(right_value326, ((struct sNode*)right_value326)->finalize, ((struct sNode*)right_value326)->_protocol_obj, 1, 0, 0); } 
                info->no_comma=no_comma_255;
                info->no_output_err=no_output_err_256;
                info->no_output_come_code=no_output_come_code_257;
                if(_if_conditional325=*info->p==46&&*(info->p+1)==46,                _if_conditional325) {
                    range_array_252=(_Bool)1;
                }
                if(exp_258) { exp_258 = come_decrement_ref_count(exp_258, ((struct sNode*)exp_258)->finalize, ((struct sNode*)exp_258)->_protocol_obj, 0, 0, 0); } 
            }
            info->p=p_253;
            info->sline=sline_254;
        }
        if(_if_conditional326=range_array_252&&(*info->p==92&&*(info->p+1)==91||*info->p==91),        _if_conditional326) {
            quote_259=*info->p==92;
            if(_if_conditional327=quote_259,            _if_conditional327) {
                info->p++;
            }
            info->p++;
            skip_spaces_and_lf(info);
            array_num_260=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value328=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value327=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "18field.c", 1382))))))));
            if(right_value327 && right_value327 != __result_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value327, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value328 && right_value328 != __result_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value328, (void*)0, (void*)0, 0, 1, 0, 0); }
            skip_pointer_attribute(info);
            node2_261=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value329=expression_v13(info))));
            if(right_value329 && right_value329 != __result_obj__) { right_value329 = come_decrement_ref_count(right_value329, ((struct sNode*)right_value329)->finalize, ((struct sNode*)right_value329)->_protocol_obj, 1, 0, 0); } 
            list$1sNodeph_push_back(array_num_260,(struct sNode*)come_increment_ref_count(node2_261));
            if(_if_conditional330=*info->p==46&&*(info->p+1)==46,            _if_conditional330) {
                info->p+=2;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                node3_265=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value333=expression_v13(info))));
                if(right_value333 && right_value333 != __result_obj__) { right_value333 = come_decrement_ref_count(right_value333, ((struct sNode*)right_value333)->finalize, ((struct sNode*)right_value333)->_protocol_obj, 1, 0, 0); } 
                list$1sNodeph_push_back(array_num_260,(struct sNode*)come_increment_ref_count(node3_265));
                optional$2intbool_value(((struct optional$2intbool*)(right_value334=expected_next_character(93,info))));
                if(right_value334 && right_value334 != __result_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value334, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(node3_265) { node3_265 = come_decrement_ref_count(node3_265, ((struct sNode*)node3_265)->finalize, ((struct sNode*)node3_265)->_protocol_obj, 0, 0, 0); } 
            }
            _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1403);
            _inf_obj_value5=come_increment_ref_count(((struct sLoadRangeArrayNode*)(right_value336=sLoadRangeArrayNode_initialize((struct sLoadRangeArrayNode*)come_increment_ref_count(((struct sLoadRangeArrayNode*)(right_value335=(struct sLoadRangeArrayNode*)come_calloc(1, sizeof(struct sLoadRangeArrayNode)*(1), "18field.c", 1403)))),node,(struct list$1sNodeph*)come_increment_ref_count(array_num_260),quote_259,info))));
            _inf_value5->_protocol_obj=_inf_obj_value5;
            _inf_value5->finalize=(void*)sLoadRangeArrayNode_finalize;
            _inf_value5->clone=(void*)sLoadRangeArrayNode_clone;
            _inf_value5->compile=(void*)sLoadRangeArrayNode_compile;
            _inf_value5->sline=(void*)sLoadRangeArrayNode_sline;
            _inf_value5->sname=(void*)sLoadRangeArrayNode_sname;
            _inf_value5->terminated=(void*)sLoadRangeArrayNode_terminated;
            _inf_value5->kind=(void*)sLoadRangeArrayNode_kind;
            __dec_obj147=node;
            node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value341=_inf_value5)));
            if(__dec_obj147) { __dec_obj147 = come_decrement_ref_count(__dec_obj147, ((struct sNode*)__dec_obj147)->finalize, ((struct sNode*)__dec_obj147)->_protocol_obj, 0,0,0); }
            if(right_value335 && right_value335 != __result_obj__) { come_call_finalizer(sLoadRangeArrayNode_finalize,right_value335, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value336 && right_value336 != __result_obj__) { come_call_finalizer(sLoadRangeArrayNode_finalize,right_value336, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value341 && right_value341 != __result_obj__) { right_value341 = come_decrement_ref_count(right_value341, ((struct sNode*)right_value341)->finalize, ((struct sNode*)right_value341)->_protocol_obj, 1, 0, 0); } 
            if(array_num_260) { come_call_finalizer(list$1sNodephp_finalize,array_num_260, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(node2_261) { node2_261 = come_decrement_ref_count(node2_261, ((struct sNode*)node2_261)->finalize, ((struct sNode*)node2_261)->_protocol_obj, 0, 0, 0); } 
        }
        else {
            if(_if_conditional341=!range_array_252&&(*info->p==92&&*(info->p+1)==91||*info->p==91),            _if_conditional341) {
                quote_268=*info->p==92;
                if(_if_conditional342=quote_268,                _if_conditional342) {
                    info->p++;
                }
                range_269=(_Bool)0;
                array_num_270=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value343=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value342=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "18field.c", 1414))))))));
                if(right_value342 && right_value342 != __result_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value342, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value343 && right_value343 != __result_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value343, (void*)0, (void*)0, 0, 1, 0, 0); }
                while(_while_condtional20=1,                _while_condtional20) {
                    range_array2_271=(_Bool)0;
                    {
                        p_272=info->p;
                        sline_273=info->sline;
                        if(_if_conditional343=*info->p==91,                        _if_conditional343) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            no_comma_274=info->no_comma;
                            no_output_err_275=info->no_output_err;
                            no_output_come_code_276=info->no_output_come_code;
                            info->no_output_err=(_Bool)1;
                            info->no_comma=(_Bool)1;
                            info->no_output_come_code=(_Bool)1;
                            exp_277=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value344=expression_v13(info))));
                            if(right_value344 && right_value344 != __result_obj__) { right_value344 = come_decrement_ref_count(right_value344, ((struct sNode*)right_value344)->finalize, ((struct sNode*)right_value344)->_protocol_obj, 1, 0, 0); } 
                            info->no_comma=no_comma_274;
                            info->no_output_err=no_output_err_275;
                            info->no_output_come_code=no_output_come_code_276;
                            if(_if_conditional344=*info->p==46&&*(info->p+1)==46,                            _if_conditional344) {
                                range_array2_271=(_Bool)1;
                            }
                            if(exp_277) { exp_277 = come_decrement_ref_count(exp_277, ((struct sNode*)exp_277)->finalize, ((struct sNode*)exp_277)->_protocol_obj, 0, 0, 0); } 
                        }
                        info->p=p_272;
                        info->sline=sline_273;
                    }
                    if(_if_conditional345=range_array2_271,                    _if_conditional345) {
                        break;
                    }
                    else {
                        if(_if_conditional346=*info->p==91,                        _if_conditional346) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            skip_pointer_attribute(info);
                            node2_278=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value345=expression_v13(info))));
                            if(right_value345 && right_value345 != __result_obj__) { right_value345 = come_decrement_ref_count(right_value345, ((struct sNode*)right_value345)->finalize, ((struct sNode*)right_value345)->_protocol_obj, 1, 0, 0); } 
                            list$1sNodeph_push_back(array_num_270,(struct sNode*)come_increment_ref_count(node2_278));
                            if(_if_conditional347=*info->p==93,                            _if_conditional347) {
                                info->p++;
                                skip_spaces_and_lf(info);
                            }
                            else {
                                err_msg(info,"require ] character");
                                exit(2);
                            }
                            if(node2_278) { node2_278 = come_decrement_ref_count(node2_278, ((struct sNode*)node2_278)->finalize, ((struct sNode*)node2_278)->_protocol_obj, 0, 0, 0); } 
                        }
                        else {
                            break;
                        }
                    }
                }
                if(_if_conditional348=*info->p==61&&*(info->p+1)!=61,                _if_conditional348) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    parse_sharp_v5(info);
                    right_node_279=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value346=expression_v13(info))));
                    if(right_value346 && right_value346 != __result_obj__) { right_value346 = come_decrement_ref_count(right_value346, ((struct sNode*)right_value346)->finalize, ((struct sNode*)right_value346)->_protocol_obj, 1, 0, 0); } 
                    parse_sharp_v5(info);
                    _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1482);
                    _inf_obj_value6=come_increment_ref_count(((struct sStoreArrayNode*)(right_value348=sStoreArrayNode_initialize((struct sStoreArrayNode*)come_increment_ref_count(((struct sStoreArrayNode*)(right_value347=(struct sStoreArrayNode*)come_calloc(1, sizeof(struct sStoreArrayNode)*(1), "18field.c", 1482)))),node,(struct sNode*)come_increment_ref_count(right_node_279),(struct list$1sNodeph*)come_increment_ref_count(array_num_270),quote_268,info))));
                    _inf_value6->_protocol_obj=_inf_obj_value6;
                    _inf_value6->finalize=(void*)sStoreArrayNode_finalize;
                    _inf_value6->clone=(void*)sStoreArrayNode_clone;
                    _inf_value6->compile=(void*)sStoreArrayNode_compile;
                    _inf_value6->sline=(void*)sStoreArrayNode_sline;
                    _inf_value6->sname=(void*)sStoreArrayNode_sname;
                    _inf_value6->terminated=(void*)sStoreArrayNode_terminated;
                    _inf_value6->kind=(void*)sStoreArrayNode_kind;
                    __dec_obj152=node;
                    node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value354=_inf_value6)));
                    if(__dec_obj152) { __dec_obj152 = come_decrement_ref_count(__dec_obj152, ((struct sNode*)__dec_obj152)->finalize, ((struct sNode*)__dec_obj152)->_protocol_obj, 0,0,0); }
                    if(right_value347 && right_value347 != __result_obj__) { come_call_finalizer(sStoreArrayNode_finalize,right_value347, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(right_value348 && right_value348 != __result_obj__) { come_call_finalizer(sStoreArrayNode_finalize,right_value348, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(right_value354 && right_value354 != __result_obj__) { right_value354 = come_decrement_ref_count(right_value354, ((struct sNode*)right_value354)->finalize, ((struct sNode*)right_value354)->_protocol_obj, 1, 0, 0); } 
                    if(right_node_279) { right_node_279 = come_decrement_ref_count(right_node_279, ((struct sNode*)right_node_279)->finalize, ((struct sNode*)right_node_279)->_protocol_obj, 0, 0, 0); } 
                }
                else {
                    _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1485);
                    _inf_obj_value7=come_increment_ref_count(((struct sLoadArrayNode*)(right_value356=sLoadArrayNode_initialize((struct sLoadArrayNode*)come_increment_ref_count(((struct sLoadArrayNode*)(right_value355=(struct sLoadArrayNode*)come_calloc(1, sizeof(struct sLoadArrayNode)*(1), "18field.c", 1485)))),node,(struct list$1sNodeph*)come_increment_ref_count(array_num_270),quote_268,info))));
                    _inf_value7->_protocol_obj=_inf_obj_value7;
                    _inf_value7->finalize=(void*)sLoadArrayNode_finalize;
                    _inf_value7->clone=(void*)sLoadArrayNode_clone;
                    _inf_value7->compile=(void*)sLoadArrayNode_compile;
                    _inf_value7->sline=(void*)sLoadArrayNode_sline;
                    _inf_value7->sname=(void*)sLoadArrayNode_sname;
                    _inf_value7->terminated=(void*)sLoadArrayNode_terminated;
                    _inf_value7->kind=(void*)sLoadArrayNode_kind;
                    __dec_obj156=node;
                    node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value361=_inf_value7)));
                    if(__dec_obj156) { __dec_obj156 = come_decrement_ref_count(__dec_obj156, ((struct sNode*)__dec_obj156)->finalize, ((struct sNode*)__dec_obj156)->_protocol_obj, 0,0,0); }
                    if(right_value355 && right_value355 != __result_obj__) { come_call_finalizer(sLoadArrayNode_finalize,right_value355, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(right_value356 && right_value356 != __result_obj__) { come_call_finalizer(sLoadArrayNode_finalize,right_value356, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(right_value361 && right_value361 != __result_obj__) { right_value361 = come_decrement_ref_count(right_value361, ((struct sNode*)right_value361)->finalize, ((struct sNode*)right_value361)->_protocol_obj, 1, 0, 0); } 
                    __dec_obj157=node;
                    node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value362=exception_get_value((struct sNode*)come_increment_ref_count(node),info))));
                    if(__dec_obj157) { __dec_obj157 = come_decrement_ref_count(__dec_obj157, ((struct sNode*)__dec_obj157)->finalize, ((struct sNode*)__dec_obj157)->_protocol_obj, 0,0,0); }
                    if(right_value362 && right_value362 != __result_obj__) { right_value362 = come_decrement_ref_count(right_value362, ((struct sNode*)right_value362)->finalize, ((struct sNode*)right_value362)->_protocol_obj, 1, 0, 0); } 
                }
                if(array_num_270) { come_call_finalizer(list$1sNodephp_finalize,array_num_270, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            else {
                if(_if_conditional369=*info->p==33&&*(info->p+1)==123,                _if_conditional369) {
                    info->p+=2;
                    skip_spaces_and_lf(info);
                    no_comma_282=info->no_comma;
                    info->no_comma=(_Bool)1;
                    begin_283=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value363=expression_v13(info))));
                    if(right_value363 && right_value363 != __result_obj__) { right_value363 = come_decrement_ref_count(right_value363, ((struct sNode*)right_value363)->finalize, ((struct sNode*)right_value363)->_protocol_obj, 1, 0, 0); } 
                    info->no_comma=no_comma_282;
                    optional$2intbool_value(((struct optional$2intbool*)(right_value364=expected_next_character(44,info))));
                    if(right_value364 && right_value364 != __result_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value364, (void*)0, (void*)0, 0, 1, 0, 0); }
                    end_284=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value365=expression_v13(info))));
                    if(right_value365 && right_value365 != __result_obj__) { right_value365 = come_decrement_ref_count(right_value365, ((struct sNode*)right_value365)->finalize, ((struct sNode*)right_value365)->_protocol_obj, 1, 0, 0); } 
                    optional$2intbool_value(((struct optional$2intbool*)(right_value366=expected_next_character(125,info))));
                    if(right_value366 && right_value366 != __result_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value366, (void*)0, (void*)0, 0, 1, 0, 0); }
                    parse_sharp_v5(info);
                    _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1507);
                    _inf_obj_value8=come_increment_ref_count(((struct sRangeCheckNode*)(right_value368=sRangeCheckNode_initialize((struct sRangeCheckNode*)come_increment_ref_count(((struct sRangeCheckNode*)(right_value367=(struct sRangeCheckNode*)come_calloc(1, sizeof(struct sRangeCheckNode)*(1), "18field.c", 1507)))),node,begin_283,end_284,info))));
                    _inf_value8->_protocol_obj=_inf_obj_value8;
                    _inf_value8->finalize=(void*)sRangeCheckNode_finalize;
                    _inf_value8->clone=(void*)sRangeCheckNode_clone;
                    _inf_value8->compile=(void*)sRangeCheckNode_compile;
                    _inf_value8->sline=(void*)sRangeCheckNode_sline;
                    _inf_value8->sname=(void*)sRangeCheckNode_sname;
                    _inf_value8->terminated=(void*)sRangeCheckNode_terminated;
                    _inf_value8->kind=(void*)sRangeCheckNode_kind;
                    __dec_obj162=node;
                    node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value374=_inf_value8)));
                    if(__dec_obj162) { __dec_obj162 = come_decrement_ref_count(__dec_obj162, ((struct sNode*)__dec_obj162)->finalize, ((struct sNode*)__dec_obj162)->_protocol_obj, 0,0,0); }
                    if(right_value367 && right_value367 != __result_obj__) { come_call_finalizer(sRangeCheckNode_finalize,right_value367, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(right_value368 && right_value368 != __result_obj__) { come_call_finalizer(sRangeCheckNode_finalize,right_value368, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(right_value374 && right_value374 != __result_obj__) { right_value374 = come_decrement_ref_count(right_value374, ((struct sNode*)right_value374)->finalize, ((struct sNode*)right_value374)->_protocol_obj, 1, 0, 0); } 
                    if(begin_283) { begin_283 = come_decrement_ref_count(begin_283, ((struct sNode*)begin_283)->finalize, ((struct sNode*)begin_283)->_protocol_obj, 0, 0, 0); } 
                    if(end_284) { end_284 = come_decrement_ref_count(end_284, ((struct sNode*)end_284)->finalize, ((struct sNode*)end_284)->_protocol_obj, 0, 0, 0); } 
                }
                else {
                    if(_if_conditional380=*info->p==33&&*(info->p+1)!=61,                    _if_conditional380) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        parse_sharp_v5(info);
                        _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1515);
                        _inf_obj_value9=come_increment_ref_count(((struct sNullCheckNode*)(right_value376=sNullCheckNode_initialize((struct sNullCheckNode*)come_increment_ref_count(((struct sNullCheckNode*)(right_value375=(struct sNullCheckNode*)come_calloc(1, sizeof(struct sNullCheckNode)*(1), "18field.c", 1515)))),node,(_Bool)0,info))));
                        _inf_value9->_protocol_obj=_inf_obj_value9;
                        _inf_value9->finalize=(void*)sNullCheckNode_finalize;
                        _inf_value9->clone=(void*)sNullCheckNode_clone;
                        _inf_value9->compile=(void*)sNullCheckNode_compile;
                        _inf_value9->sline=(void*)sNullCheckNode_sline;
                        _inf_value9->sname=(void*)sNullCheckNode_sname;
                        _inf_value9->terminated=(void*)sNullCheckNode_terminated;
                        _inf_value9->kind=(void*)sNullCheckNode_kind;
                        __dec_obj165=node;
                        node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value380=_inf_value9)));
                        if(__dec_obj165) { __dec_obj165 = come_decrement_ref_count(__dec_obj165, ((struct sNode*)__dec_obj165)->finalize, ((struct sNode*)__dec_obj165)->_protocol_obj, 0,0,0); }
                        if(right_value375 && right_value375 != __result_obj__) { come_call_finalizer(sNullCheckNode_finalize,right_value375, (void*)0, (void*)0, 0, 1, 0, 0); }
                        if(right_value376 && right_value376 != __result_obj__) { come_call_finalizer(sNullCheckNode_finalize,right_value376, (void*)0, (void*)0, 0, 1, 0, 0); }
                        if(right_value380 && right_value380 != __result_obj__) { right_value380 = come_decrement_ref_count(right_value380, ((struct sNode*)right_value380)->finalize, ((struct sNode*)right_value380)->_protocol_obj, 1, 0, 0); } 
                    }
                    else {
                        if(_if_conditional388=(*info->p==46&&*(info->p+1)!=46)||(*info->p==45&&*(info->p+1)==62),                        _if_conditional388) {
                            if(_if_conditional389=*info->p==46,                            _if_conditional389) {
                                info->p++;
                                skip_spaces_and_lf(info);
                            }
                            else {
                                info->p+=2;
                                skip_spaces_and_lf(info);
                            }
                            _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1527);
                            _inf_obj_value10=come_increment_ref_count(((struct sNullCheckNode*)(right_value383=sNullCheckNode_initialize((struct sNullCheckNode*)come_increment_ref_count(((struct sNullCheckNode*)(right_value381=(struct sNullCheckNode*)come_calloc(1, sizeof(struct sNullCheckNode)*(1), "18field.c", 1527)))),((struct sNode*)(right_value382=sNode_clone(node))),(_Bool)1,info))));
                            _inf_value10->_protocol_obj=_inf_obj_value10;
                            _inf_value10->finalize=(void*)sNullCheckNode_finalize;
                            _inf_value10->clone=(void*)sNullCheckNode_clone;
                            _inf_value10->compile=(void*)sNullCheckNode_compile;
                            _inf_value10->sline=(void*)sNullCheckNode_sline;
                            _inf_value10->sname=(void*)sNullCheckNode_sname;
                            _inf_value10->terminated=(void*)sNullCheckNode_terminated;
                            _inf_value10->kind=(void*)sNullCheckNode_kind;
                            __dec_obj168=node;
                            node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value387=_inf_value10)));
                            if(__dec_obj168) { __dec_obj168 = come_decrement_ref_count(__dec_obj168, ((struct sNode*)__dec_obj168)->finalize, ((struct sNode*)__dec_obj168)->_protocol_obj, 0,0,0); }
                            if(right_value381 && right_value381 != __result_obj__) { come_call_finalizer(sNullCheckNode_finalize,right_value381, (void*)0, (void*)0, 0, 1, 0, 0); }
                            if(right_value382 && right_value382 != __result_obj__) { right_value382 = come_decrement_ref_count(right_value382, ((struct sNode*)right_value382)->finalize, ((struct sNode*)right_value382)->_protocol_obj, 1, 0, 0); } 
                            if(right_value383 && right_value383 != __result_obj__) { come_call_finalizer(sNullCheckNode_finalize,right_value383, (void*)0, (void*)0, 0, 1, 0, 0); }
                            if(right_value387 && right_value387 != __result_obj__) { right_value387 = come_decrement_ref_count(right_value387, ((struct sNode*)right_value387)->finalize, ((struct sNode*)right_value387)->_protocol_obj, 1, 0, 0); } 
                            parse_sharp_v5(info);
                            field_name_288=(char*)come_increment_ref_count(optional$2charphbool_expect(((struct optional$2charphbool*)(right_value388=parse_word(info)))));
                            if(right_value388 && right_value388 != __result_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value388, (void*)0, (void*)0, 0, 1, 0, 0); }
                            parse_sharp_v5(info);
                            if(_if_conditional397=*info->p==61&&*(info->p+1)!=61,                            _if_conditional397) {
                                info->p++;
                                skip_spaces_and_lf(info);
                                parse_sharp_v5(info);
                                right_node_289=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value389=expression_v13(info))));
                                if(right_value389 && right_value389 != __result_obj__) { right_value389 = come_decrement_ref_count(right_value389, ((struct sNode*)right_value389)->finalize, ((struct sNode*)right_value389)->_protocol_obj, 1, 0, 0); } 
                                _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1543);
                                _inf_obj_value11=come_increment_ref_count(((struct sStoreFieldNode*)(right_value391=sStoreFieldNode_initialize((struct sStoreFieldNode*)come_increment_ref_count(((struct sStoreFieldNode*)(right_value390=(struct sStoreFieldNode*)come_calloc(1, sizeof(struct sStoreFieldNode)*(1), "18field.c", 1543)))),node,(struct sNode*)come_increment_ref_count(right_node_289),(char*)come_increment_ref_count(field_name_288),info))));
                                _inf_value11->_protocol_obj=_inf_obj_value11;
                                _inf_value11->finalize=(void*)sStoreFieldNode_finalize;
                                _inf_value11->clone=(void*)sStoreFieldNode_clone;
                                _inf_value11->compile=(void*)sStoreFieldNode_compile;
                                _inf_value11->sline=(void*)sStoreFieldNode_sline;
                                _inf_value11->sname=(void*)sStoreFieldNode_sname;
                                _inf_value11->terminated=(void*)sStoreFieldNode_terminated;
                                _inf_value11->kind=(void*)sStoreFieldNode_kind;
                                __dec_obj173=node;
                                node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value397=_inf_value11)));
                                if(__dec_obj173) { __dec_obj173 = come_decrement_ref_count(__dec_obj173, ((struct sNode*)__dec_obj173)->finalize, ((struct sNode*)__dec_obj173)->_protocol_obj, 0,0,0); }
                                if(right_value390 && right_value390 != __result_obj__) { come_call_finalizer(sStoreFieldNode_finalize,right_value390, (void*)0, (void*)0, 0, 1, 0, 0); }
                                if(right_value391 && right_value391 != __result_obj__) { come_call_finalizer(sStoreFieldNode_finalize,right_value391, (void*)0, (void*)0, 0, 1, 0, 0); }
                                if(right_value397 && right_value397 != __result_obj__) { right_value397 = come_decrement_ref_count(right_value397, ((struct sNode*)right_value397)->finalize, ((struct sNode*)right_value397)->_protocol_obj, 1, 0, 0); } 
                                if(right_node_289) { right_node_289 = come_decrement_ref_count(right_node_289, ((struct sNode*)right_node_289)->finalize, ((struct sNode*)right_node_289)->_protocol_obj, 0, 0, 0); } 
                            }
                            else {
                                if(_if_conditional408=*info->p==40||*info->p==123||(*info->p==45&&*(info->p+1)==62&&*(info->p+2)==40),                                _if_conditional408) {
                                    if(_if_conditional409=string_operator_equals(field_name_288,"if"),                                    _if_conditional409) {
                                        __dec_obj174=node;
                                        node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value399=parse_if_method_call((struct sNode*)come_increment_ref_count(((struct sNode*)(right_value398=sNode_clone(node)))),info))));
                                        if(__dec_obj174) { __dec_obj174 = come_decrement_ref_count(__dec_obj174, ((struct sNode*)__dec_obj174)->finalize, ((struct sNode*)__dec_obj174)->_protocol_obj, 0,0,0); }
                                        if(right_value398 && right_value398 != __result_obj__) { right_value398 = come_decrement_ref_count(right_value398, ((struct sNode*)right_value398)->finalize, ((struct sNode*)right_value398)->_protocol_obj, 1, 0, 0); } 
                                        if(right_value399 && right_value399 != __result_obj__) { right_value399 = come_decrement_ref_count(right_value399, ((struct sNode*)right_value399)->finalize, ((struct sNode*)right_value399)->_protocol_obj, 1, 0, 0); } 
                                    }
                                    else {
                                        if(_if_conditional410=string_operator_equals(field_name_288,"elif"),                                        _if_conditional410) {
                                            __dec_obj175=node;
                                            node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value401=parse_elif_method_call((struct sNode*)come_increment_ref_count(((struct sNode*)(right_value400=sNode_clone(node)))),info))));
                                            if(__dec_obj175) { __dec_obj175 = come_decrement_ref_count(__dec_obj175, ((struct sNode*)__dec_obj175)->finalize, ((struct sNode*)__dec_obj175)->_protocol_obj, 0,0,0); }
                                            if(right_value400 && right_value400 != __result_obj__) { right_value400 = come_decrement_ref_count(right_value400, ((struct sNode*)right_value400)->finalize, ((struct sNode*)right_value400)->_protocol_obj, 1, 0, 0); } 
                                            if(right_value401 && right_value401 != __result_obj__) { right_value401 = come_decrement_ref_count(right_value401, ((struct sNode*)right_value401)->finalize, ((struct sNode*)right_value401)->_protocol_obj, 1, 0, 0); } 
                                        }
                                        else {
                                            __dec_obj176=node;
                                            node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value403=parse_method_call_v20((struct sNode*)come_increment_ref_count(((struct sNode*)(right_value402=sNode_clone(node)))),(char*)come_increment_ref_count(field_name_288),info))));
                                            if(__dec_obj176) { __dec_obj176 = come_decrement_ref_count(__dec_obj176, ((struct sNode*)__dec_obj176)->finalize, ((struct sNode*)__dec_obj176)->_protocol_obj, 0,0,0); }
                                            if(right_value402 && right_value402 != __result_obj__) { right_value402 = come_decrement_ref_count(right_value402, ((struct sNode*)right_value402)->finalize, ((struct sNode*)right_value402)->_protocol_obj, 1, 0, 0); } 
                                            if(right_value403 && right_value403 != __result_obj__) { right_value403 = come_decrement_ref_count(right_value403, ((struct sNode*)right_value403)->finalize, ((struct sNode*)right_value403)->_protocol_obj, 1, 0, 0); } 
                                        }
                                    }
                                }
                                else {
                                    _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1557);
                                    _inf_obj_value12=come_increment_ref_count(((struct sLoadFieldNode*)(right_value405=sLoadFieldNode_initialize((struct sLoadFieldNode*)come_increment_ref_count(((struct sLoadFieldNode*)(right_value404=(struct sLoadFieldNode*)come_calloc(1, sizeof(struct sLoadFieldNode)*(1), "18field.c", 1557)))),node,(char*)come_increment_ref_count(field_name_288),info))));
                                    _inf_value12->_protocol_obj=_inf_obj_value12;
                                    _inf_value12->finalize=(void*)sLoadFieldNode_finalize;
                                    _inf_value12->clone=(void*)sLoadFieldNode_clone;
                                    _inf_value12->compile=(void*)sLoadFieldNode_compile;
                                    _inf_value12->sline=(void*)sLoadFieldNode_sline;
                                    _inf_value12->sname=(void*)sLoadFieldNode_sname;
                                    _inf_value12->terminated=(void*)sLoadFieldNode_terminated;
                                    _inf_value12->kind=(void*)sLoadFieldNode_kind;
                                    __dec_obj180=node;
                                    node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value410=_inf_value12)));
                                    if(__dec_obj180) { __dec_obj180 = come_decrement_ref_count(__dec_obj180, ((struct sNode*)__dec_obj180)->finalize, ((struct sNode*)__dec_obj180)->_protocol_obj, 0,0,0); }
                                    if(right_value404 && right_value404 != __result_obj__) { come_call_finalizer(sLoadFieldNode_finalize,right_value404, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    if(right_value405 && right_value405 != __result_obj__) { come_call_finalizer(sLoadFieldNode_finalize,right_value405, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    if(right_value410 && right_value410 != __result_obj__) { right_value410 = come_decrement_ref_count(right_value410, ((struct sNode*)right_value410)->finalize, ((struct sNode*)right_value410)->_protocol_obj, 1, 0, 0); } 
                                }
                            }
                            if(field_name_288) { field_name_288 = come_decrement_ref_count(field_name_288, (void*)0, (void*)0, 0, 0, 0); }
                        }
                        else {
                            node2_292=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value411=post_position_operator2_v19((struct sNode*)come_increment_ref_count(node),info))));
                            if(right_value411 && right_value411 != __result_obj__) { right_value411 = come_decrement_ref_count(right_value411, ((struct sNode*)right_value411)->finalize, ((struct sNode*)right_value411)->_protocol_obj, 1, 0, 0); } 
                            if(_if_conditional419=node2_292==((void*)0),                            _if_conditional419) {
                                if(node2_292) { node2_292 = come_decrement_ref_count(node2_292, ((struct sNode*)node2_292)->finalize, ((struct sNode*)node2_292)->_protocol_obj, 0, 0, 0); } 
                                break;
                            }
                            __dec_obj181=node;
                            node=(struct sNode*)come_increment_ref_count(node2_292);
                            if(__dec_obj181) { __dec_obj181 = come_decrement_ref_count(__dec_obj181, ((struct sNode*)__dec_obj181)->finalize, ((struct sNode*)__dec_obj181)->_protocol_obj, 0,0,0); }
                            if(node2_292) { node2_292 = come_decrement_ref_count(node2_292, ((struct sNode*)node2_292)->finalize, ((struct sNode*)node2_292)->_protocol_obj, 0, 0, 0); } 
                        }
                    }
                }
            }
        }
    }
    __result204__ = __result_obj__ = node;
    if(node) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
    return __result204__;
    if(node) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
}

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional328;
void* right_value330;
struct list_item$1sNodeph* litem_262;
struct sNode* __dec_obj141;
_Bool _if_conditional329;
void* right_value331;
struct list_item$1sNodeph* litem_263;
struct sNode* __dec_obj142;
void* right_value332;
struct list_item$1sNodeph* litem_264;
struct sNode* __dec_obj143;
struct list$1sNodeph* __result185__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&litem_262, 0, sizeof(struct list_item$1sNodeph*));
memset(&litem_263, 0, sizeof(struct list_item$1sNodeph*));
memset(&litem_264, 0, sizeof(struct list_item$1sNodeph*));
                if(_if_conditional328=self->len==0,                _if_conditional328) {
                    litem_262=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value330=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 277))));
                    if(right_value330 && right_value330 != __result_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value330, (void*)0, (void*)0, 0, 1, 0, 0); }
                    litem_262->prev=((void*)0);
                    litem_262->next=((void*)0);
                    __dec_obj141=litem_262->item;
                    litem_262->item=(struct sNode*)come_increment_ref_count(item);
                    if(__dec_obj141) { __dec_obj141 = come_decrement_ref_count(__dec_obj141, ((struct sNode*)__dec_obj141)->finalize, ((struct sNode*)__dec_obj141)->_protocol_obj, 0,0,0); }
                    self->tail=litem_262;
                    self->head=litem_262;
                }
                else {
                    if(_if_conditional329=self->len==1,                    _if_conditional329) {
                        litem_263=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value331=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 287))));
                        if(right_value331 && right_value331 != __result_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value331, (void*)0, (void*)0, 0, 1, 0, 0); }
                        litem_263->prev=self->head;
                        litem_263->next=((void*)0);
                        __dec_obj142=litem_263->item;
                        litem_263->item=(struct sNode*)come_increment_ref_count(item);
                        if(__dec_obj142) { __dec_obj142 = come_decrement_ref_count(__dec_obj142, ((struct sNode*)__dec_obj142)->finalize, ((struct sNode*)__dec_obj142)->_protocol_obj, 0,0,0); }
                        self->tail=litem_263;
                        self->head->next=litem_263;
                    }
                    else {
                        litem_264=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value332=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 297))));
                        if(right_value332 && right_value332 != __result_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value332, (void*)0, (void*)0, 0, 1, 0, 0); }
                        litem_264->prev=self->tail;
                        litem_264->next=((void*)0);
                        __dec_obj143=litem_264->item;
                        litem_264->item=(struct sNode*)come_increment_ref_count(item);
                        if(__dec_obj143) { __dec_obj143 = come_decrement_ref_count(__dec_obj143, ((struct sNode*)__dec_obj143)->finalize, ((struct sNode*)__dec_obj143)->_protocol_obj, 0,0,0); }
                        self->tail->next=litem_264;
                        self->tail=litem_264;
                    }
                }
                self->len++;
                __result185__ = __result_obj__ = self;
                if(item) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
                return __result185__;
                if(item) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
}

static int optional$2intbool_value(struct optional$2intbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional331;
int default_value_266;
int __result186__;
int __result187__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_266, 0, sizeof(int));
                    if(_if_conditional331=self==((void*)0),                    _if_conditional331) {
                        memset(&default_value_266,0,sizeof(int));
                        __result186__ = default_value_266;
                        return __result186__;
                    }
                    else {
                        __result187__ = self->v1;
                        return __result187__;
                    }
}

static void optional$2intboolp_finalize(struct optional$2intbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static void sLoadRangeArrayNode_finalize(struct sLoadRangeArrayNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional332;
_Bool _if_conditional333;
_Bool _if_conditional334;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional332=self!=((void*)0)&&self->mLeft!=((void*)0),                _if_conditional332) {
                    if(self->mLeft) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0); } 
                }
                if(_if_conditional333=self!=((void*)0)&&self->mArrayNum!=((void*)0),                _if_conditional333) {
                    if(self->mArrayNum) { come_call_finalizer(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                if(_if_conditional334=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional334) {
                    if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                }
}

static struct sLoadRangeArrayNode* sLoadRangeArrayNode_clone(struct sLoadRangeArrayNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional335;
struct sLoadRangeArrayNode* __result188__;
void* right_value337;
struct sLoadRangeArrayNode* result_267;
_Bool _if_conditional336;
void* right_value338;
struct sNode* __dec_obj144;
_Bool _if_conditional337;
void* right_value339;
struct list$1sNodeph* __dec_obj145;
_Bool _if_conditional338;
_Bool _if_conditional339;
_Bool _if_conditional340;
void* right_value340;
char* __dec_obj146;
struct sLoadRangeArrayNode* __result189__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_267, 0, sizeof(struct sLoadRangeArrayNode*));
                if(_if_conditional335=self==(void*)0,                _if_conditional335) {
                    __result188__ = __result_obj__ = (void*)0;
                    return __result188__;
                }
                result_267=(struct sLoadRangeArrayNode*)come_increment_ref_count(((struct sLoadRangeArrayNode*)(right_value337=(struct sLoadRangeArrayNode*)come_calloc(1, sizeof(struct sLoadRangeArrayNode)*(1), "sLoadRangeArrayNode_clone", 3))));
                if(right_value337 && right_value337 != __result_obj__) { come_call_finalizer(sLoadRangeArrayNode_finalize,right_value337, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(_if_conditional336=self!=((void*)0)&&self->mLeft!=((void*)0),                _if_conditional336) {
                    __dec_obj144=result_267->mLeft;
                    result_267->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value338=sNode_clone(self->mLeft))));
                    if(__dec_obj144) { __dec_obj144 = come_decrement_ref_count(__dec_obj144, ((struct sNode*)__dec_obj144)->finalize, ((struct sNode*)__dec_obj144)->_protocol_obj, 0,0,0); }
                    if(right_value338 && right_value338 != __result_obj__) { right_value338 = come_decrement_ref_count(right_value338, ((struct sNode*)right_value338)->finalize, ((struct sNode*)right_value338)->_protocol_obj, 1, 0, 0); } 
                }
                if(_if_conditional337=self!=((void*)0)&&self->mArrayNum!=((void*)0),                _if_conditional337) {
                    __dec_obj145=result_267->mArrayNum;
                    result_267->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value339=list$1sNodephp_clone(self->mArrayNum))));
                    if(__dec_obj145) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj145, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(right_value339 && right_value339 != __result_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value339, (void*)0, (void*)0, 0, 1, 0, 0); }
                }
                if(_if_conditional338=self!=((void*)0),                _if_conditional338) {
                    result_267->mQuote=self->mQuote;
                }
                if(_if_conditional339=self!=((void*)0),                _if_conditional339) {
                    result_267->sline=self->sline;
                }
                if(_if_conditional340=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional340) {
                    __dec_obj146=result_267->sname;
                    result_267->sname=(char*)come_increment_ref_count(((char*)(right_value340=string_clone(self->sname))));
                    if(__dec_obj146) { __dec_obj146 = come_decrement_ref_count(__dec_obj146, (void*)0, (void*)0, 0,0,0); }
                    if(right_value340 && right_value340 != __result_obj__) { right_value340 = come_decrement_ref_count(right_value340, (void*)0, (void*)0, 1, 0, 0); }
                }
                __result189__ = __result_obj__ = result_267;
                if(result_267) { come_call_finalizer(sLoadRangeArrayNode_finalize,result_267, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result189__;
                if(result_267) { come_call_finalizer(sLoadRangeArrayNode_finalize,result_267, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sStoreArrayNode_finalize(struct sStoreArrayNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional349;
_Bool _if_conditional350;
_Bool _if_conditional351;
_Bool _if_conditional352;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional349=self!=((void*)0)&&self->mLeft!=((void*)0),                        _if_conditional349) {
                            if(self->mLeft) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0); } 
                        }
                        if(_if_conditional350=self!=((void*)0)&&self->mRight!=((void*)0),                        _if_conditional350) {
                            if(self->mRight) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0); } 
                        }
                        if(_if_conditional351=self!=((void*)0)&&self->mArrayNum!=((void*)0),                        _if_conditional351) {
                            if(self->mArrayNum) { come_call_finalizer(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
                        if(_if_conditional352=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional352) {
                            if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                        }
}

static struct sStoreArrayNode* sStoreArrayNode_clone(struct sStoreArrayNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional353;
struct sStoreArrayNode* __result190__;
void* right_value349;
struct sStoreArrayNode* result_280;
_Bool _if_conditional354;
void* right_value350;
struct sNode* __dec_obj148;
_Bool _if_conditional355;
void* right_value351;
struct sNode* __dec_obj149;
_Bool _if_conditional356;
void* right_value352;
struct list$1sNodeph* __dec_obj150;
_Bool _if_conditional357;
_Bool _if_conditional358;
_Bool _if_conditional359;
void* right_value353;
char* __dec_obj151;
struct sStoreArrayNode* __result191__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_280, 0, sizeof(struct sStoreArrayNode*));
                        if(_if_conditional353=self==(void*)0,                        _if_conditional353) {
                            __result190__ = __result_obj__ = (void*)0;
                            return __result190__;
                        }
                        result_280=(struct sStoreArrayNode*)come_increment_ref_count(((struct sStoreArrayNode*)(right_value349=(struct sStoreArrayNode*)come_calloc(1, sizeof(struct sStoreArrayNode)*(1), "sStoreArrayNode_clone", 3))));
                        if(right_value349 && right_value349 != __result_obj__) { come_call_finalizer(sStoreArrayNode_finalize,right_value349, (void*)0, (void*)0, 0, 1, 0, 0); }
                        if(_if_conditional354=self!=((void*)0)&&self->mLeft!=((void*)0),                        _if_conditional354) {
                            __dec_obj148=result_280->mLeft;
                            result_280->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value350=sNode_clone(self->mLeft))));
                            if(__dec_obj148) { __dec_obj148 = come_decrement_ref_count(__dec_obj148, ((struct sNode*)__dec_obj148)->finalize, ((struct sNode*)__dec_obj148)->_protocol_obj, 0,0,0); }
                            if(right_value350 && right_value350 != __result_obj__) { right_value350 = come_decrement_ref_count(right_value350, ((struct sNode*)right_value350)->finalize, ((struct sNode*)right_value350)->_protocol_obj, 1, 0, 0); } 
                        }
                        if(_if_conditional355=self!=((void*)0)&&self->mRight!=((void*)0),                        _if_conditional355) {
                            __dec_obj149=result_280->mRight;
                            result_280->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value351=sNode_clone(self->mRight))));
                            if(__dec_obj149) { __dec_obj149 = come_decrement_ref_count(__dec_obj149, ((struct sNode*)__dec_obj149)->finalize, ((struct sNode*)__dec_obj149)->_protocol_obj, 0,0,0); }
                            if(right_value351 && right_value351 != __result_obj__) { right_value351 = come_decrement_ref_count(right_value351, ((struct sNode*)right_value351)->finalize, ((struct sNode*)right_value351)->_protocol_obj, 1, 0, 0); } 
                        }
                        if(_if_conditional356=self!=((void*)0)&&self->mArrayNum!=((void*)0),                        _if_conditional356) {
                            __dec_obj150=result_280->mArrayNum;
                            result_280->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value352=list$1sNodephp_clone(self->mArrayNum))));
                            if(__dec_obj150) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj150, (void*)0, (void*)0, 0, 0, 0, 0); }
                            if(right_value352 && right_value352 != __result_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value352, (void*)0, (void*)0, 0, 1, 0, 0); }
                        }
                        if(_if_conditional357=self!=((void*)0),                        _if_conditional357) {
                            result_280->mQuote=self->mQuote;
                        }
                        if(_if_conditional358=self!=((void*)0),                        _if_conditional358) {
                            result_280->sline=self->sline;
                        }
                        if(_if_conditional359=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional359) {
                            __dec_obj151=result_280->sname;
                            result_280->sname=(char*)come_increment_ref_count(((char*)(right_value353=string_clone(self->sname))));
                            if(__dec_obj151) { __dec_obj151 = come_decrement_ref_count(__dec_obj151, (void*)0, (void*)0, 0,0,0); }
                            if(right_value353 && right_value353 != __result_obj__) { right_value353 = come_decrement_ref_count(right_value353, (void*)0, (void*)0, 1, 0, 0); }
                        }
                        __result191__ = __result_obj__ = result_280;
                        if(result_280) { come_call_finalizer(sStoreArrayNode_finalize,result_280, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result191__;
                        if(result_280) { come_call_finalizer(sStoreArrayNode_finalize,result_280, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sLoadArrayNode_finalize(struct sLoadArrayNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional360;
_Bool _if_conditional361;
_Bool _if_conditional362;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional360=self!=((void*)0)&&self->mLeft!=((void*)0),                        _if_conditional360) {
                            if(self->mLeft) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0); } 
                        }
                        if(_if_conditional361=self!=((void*)0)&&self->mArrayNum!=((void*)0),                        _if_conditional361) {
                            if(self->mArrayNum) { come_call_finalizer(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
                        if(_if_conditional362=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional362) {
                            if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                        }
}

static struct sLoadArrayNode* sLoadArrayNode_clone(struct sLoadArrayNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional363;
struct sLoadArrayNode* __result192__;
void* right_value357;
struct sLoadArrayNode* result_281;
_Bool _if_conditional364;
void* right_value358;
struct sNode* __dec_obj153;
_Bool _if_conditional365;
void* right_value359;
struct list$1sNodeph* __dec_obj154;
_Bool _if_conditional366;
_Bool _if_conditional367;
_Bool _if_conditional368;
void* right_value360;
char* __dec_obj155;
struct sLoadArrayNode* __result193__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_281, 0, sizeof(struct sLoadArrayNode*));
                        if(_if_conditional363=self==(void*)0,                        _if_conditional363) {
                            __result192__ = __result_obj__ = (void*)0;
                            return __result192__;
                        }
                        result_281=(struct sLoadArrayNode*)come_increment_ref_count(((struct sLoadArrayNode*)(right_value357=(struct sLoadArrayNode*)come_calloc(1, sizeof(struct sLoadArrayNode)*(1), "sLoadArrayNode_clone", 3))));
                        if(right_value357 && right_value357 != __result_obj__) { come_call_finalizer(sLoadArrayNode_finalize,right_value357, (void*)0, (void*)0, 0, 1, 0, 0); }
                        if(_if_conditional364=self!=((void*)0)&&self->mLeft!=((void*)0),                        _if_conditional364) {
                            __dec_obj153=result_281->mLeft;
                            result_281->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value358=sNode_clone(self->mLeft))));
                            if(__dec_obj153) { __dec_obj153 = come_decrement_ref_count(__dec_obj153, ((struct sNode*)__dec_obj153)->finalize, ((struct sNode*)__dec_obj153)->_protocol_obj, 0,0,0); }
                            if(right_value358 && right_value358 != __result_obj__) { right_value358 = come_decrement_ref_count(right_value358, ((struct sNode*)right_value358)->finalize, ((struct sNode*)right_value358)->_protocol_obj, 1, 0, 0); } 
                        }
                        if(_if_conditional365=self!=((void*)0)&&self->mArrayNum!=((void*)0),                        _if_conditional365) {
                            __dec_obj154=result_281->mArrayNum;
                            result_281->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value359=list$1sNodephp_clone(self->mArrayNum))));
                            if(__dec_obj154) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj154, (void*)0, (void*)0, 0, 0, 0, 0); }
                            if(right_value359 && right_value359 != __result_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value359, (void*)0, (void*)0, 0, 1, 0, 0); }
                        }
                        if(_if_conditional366=self!=((void*)0),                        _if_conditional366) {
                            result_281->mQuote=self->mQuote;
                        }
                        if(_if_conditional367=self!=((void*)0),                        _if_conditional367) {
                            result_281->sline=self->sline;
                        }
                        if(_if_conditional368=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional368) {
                            __dec_obj155=result_281->sname;
                            result_281->sname=(char*)come_increment_ref_count(((char*)(right_value360=string_clone(self->sname))));
                            if(__dec_obj155) { __dec_obj155 = come_decrement_ref_count(__dec_obj155, (void*)0, (void*)0, 0,0,0); }
                            if(right_value360 && right_value360 != __result_obj__) { right_value360 = come_decrement_ref_count(right_value360, (void*)0, (void*)0, 1, 0, 0); }
                        }
                        __result193__ = __result_obj__ = result_281;
                        if(result_281) { come_call_finalizer(sLoadArrayNode_finalize,result_281, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result193__;
                        if(result_281) { come_call_finalizer(sLoadArrayNode_finalize,result_281, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sRangeCheckNode_finalize(struct sRangeCheckNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional370;
_Bool _if_conditional371;
_Bool _if_conditional372;
_Bool _if_conditional373;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional370=self!=((void*)0)&&self->mLeft!=((void*)0),                        _if_conditional370) {
                            if(self->mLeft) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0); } 
                        }
                        if(_if_conditional371=self!=((void*)0)&&self->mBegin!=((void*)0),                        _if_conditional371) {
                            if(self->mBegin) { self->mBegin = come_decrement_ref_count(self->mBegin, ((struct sNode*)self->mBegin)->finalize, ((struct sNode*)self->mBegin)->_protocol_obj, 0, 0, 0); } 
                        }
                        if(_if_conditional372=self!=((void*)0)&&self->mEnd!=((void*)0),                        _if_conditional372) {
                            if(self->mEnd) { self->mEnd = come_decrement_ref_count(self->mEnd, ((struct sNode*)self->mEnd)->finalize, ((struct sNode*)self->mEnd)->_protocol_obj, 0, 0, 0); } 
                        }
                        if(_if_conditional373=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional373) {
                            if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                        }
}

static struct sRangeCheckNode* sRangeCheckNode_clone(struct sRangeCheckNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional374;
struct sRangeCheckNode* __result194__;
void* right_value369;
struct sRangeCheckNode* result_285;
_Bool _if_conditional375;
void* right_value370;
struct sNode* __dec_obj158;
_Bool _if_conditional376;
void* right_value371;
struct sNode* __dec_obj159;
_Bool _if_conditional377;
void* right_value372;
struct sNode* __dec_obj160;
_Bool _if_conditional378;
_Bool _if_conditional379;
void* right_value373;
char* __dec_obj161;
struct sRangeCheckNode* __result195__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_285, 0, sizeof(struct sRangeCheckNode*));
                        if(_if_conditional374=self==(void*)0,                        _if_conditional374) {
                            __result194__ = __result_obj__ = (void*)0;
                            return __result194__;
                        }
                        result_285=(struct sRangeCheckNode*)come_increment_ref_count(((struct sRangeCheckNode*)(right_value369=(struct sRangeCheckNode*)come_calloc(1, sizeof(struct sRangeCheckNode)*(1), "sRangeCheckNode_clone", 3))));
                        if(right_value369 && right_value369 != __result_obj__) { come_call_finalizer(sRangeCheckNode_finalize,right_value369, (void*)0, (void*)0, 0, 1, 0, 0); }
                        if(_if_conditional375=self!=((void*)0)&&self->mLeft!=((void*)0),                        _if_conditional375) {
                            __dec_obj158=result_285->mLeft;
                            result_285->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value370=sNode_clone(self->mLeft))));
                            if(__dec_obj158) { __dec_obj158 = come_decrement_ref_count(__dec_obj158, ((struct sNode*)__dec_obj158)->finalize, ((struct sNode*)__dec_obj158)->_protocol_obj, 0,0,0); }
                            if(right_value370 && right_value370 != __result_obj__) { right_value370 = come_decrement_ref_count(right_value370, ((struct sNode*)right_value370)->finalize, ((struct sNode*)right_value370)->_protocol_obj, 1, 0, 0); } 
                        }
                        if(_if_conditional376=self!=((void*)0)&&self->mBegin!=((void*)0),                        _if_conditional376) {
                            __dec_obj159=result_285->mBegin;
                            result_285->mBegin=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value371=sNode_clone(self->mBegin))));
                            if(__dec_obj159) { __dec_obj159 = come_decrement_ref_count(__dec_obj159, ((struct sNode*)__dec_obj159)->finalize, ((struct sNode*)__dec_obj159)->_protocol_obj, 0,0,0); }
                            if(right_value371 && right_value371 != __result_obj__) { right_value371 = come_decrement_ref_count(right_value371, ((struct sNode*)right_value371)->finalize, ((struct sNode*)right_value371)->_protocol_obj, 1, 0, 0); } 
                        }
                        if(_if_conditional377=self!=((void*)0)&&self->mEnd!=((void*)0),                        _if_conditional377) {
                            __dec_obj160=result_285->mEnd;
                            result_285->mEnd=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value372=sNode_clone(self->mEnd))));
                            if(__dec_obj160) { __dec_obj160 = come_decrement_ref_count(__dec_obj160, ((struct sNode*)__dec_obj160)->finalize, ((struct sNode*)__dec_obj160)->_protocol_obj, 0,0,0); }
                            if(right_value372 && right_value372 != __result_obj__) { right_value372 = come_decrement_ref_count(right_value372, ((struct sNode*)right_value372)->finalize, ((struct sNode*)right_value372)->_protocol_obj, 1, 0, 0); } 
                        }
                        if(_if_conditional378=self!=((void*)0),                        _if_conditional378) {
                            result_285->sline=self->sline;
                        }
                        if(_if_conditional379=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional379) {
                            __dec_obj161=result_285->sname;
                            result_285->sname=(char*)come_increment_ref_count(((char*)(right_value373=string_clone(self->sname))));
                            if(__dec_obj161) { __dec_obj161 = come_decrement_ref_count(__dec_obj161, (void*)0, (void*)0, 0,0,0); }
                            if(right_value373 && right_value373 != __result_obj__) { right_value373 = come_decrement_ref_count(right_value373, (void*)0, (void*)0, 1, 0, 0); }
                        }
                        __result195__ = __result_obj__ = result_285;
                        if(result_285) { come_call_finalizer(sRangeCheckNode_finalize,result_285, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result195__;
                        if(result_285) { come_call_finalizer(sRangeCheckNode_finalize,result_285, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sNullCheckNode_finalize(struct sNullCheckNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional390;
_Bool _if_conditional391;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional390=self!=((void*)0)&&self->mLeft!=((void*)0),                                _if_conditional390) {
                                    if(self->mLeft) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0); } 
                                }
                                if(_if_conditional391=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional391) {
                                    if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                                }
}

static struct sNullCheckNode* sNullCheckNode_clone(struct sNullCheckNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional392;
struct sNullCheckNode* __result198__;
void* right_value384;
struct sNullCheckNode* result_287;
_Bool _if_conditional393;
void* right_value385;
struct sNode* __dec_obj166;
_Bool _if_conditional394;
_Bool _if_conditional395;
_Bool _if_conditional396;
void* right_value386;
char* __dec_obj167;
struct sNullCheckNode* __result199__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_287, 0, sizeof(struct sNullCheckNode*));
                                if(_if_conditional392=self==(void*)0,                                _if_conditional392) {
                                    __result198__ = __result_obj__ = (void*)0;
                                    return __result198__;
                                }
                                result_287=(struct sNullCheckNode*)come_increment_ref_count(((struct sNullCheckNode*)(right_value384=(struct sNullCheckNode*)come_calloc(1, sizeof(struct sNullCheckNode)*(1), "sNullCheckNode_clone", 3))));
                                if(right_value384 && right_value384 != __result_obj__) { come_call_finalizer(sNullCheckNode_finalize,right_value384, (void*)0, (void*)0, 0, 1, 0, 0); }
                                if(_if_conditional393=self!=((void*)0)&&self->mLeft!=((void*)0),                                _if_conditional393) {
                                    __dec_obj166=result_287->mLeft;
                                    result_287->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value385=sNode_clone(self->mLeft))));
                                    if(__dec_obj166) { __dec_obj166 = come_decrement_ref_count(__dec_obj166, ((struct sNode*)__dec_obj166)->finalize, ((struct sNode*)__dec_obj166)->_protocol_obj, 0,0,0); }
                                    if(right_value385 && right_value385 != __result_obj__) { right_value385 = come_decrement_ref_count(right_value385, ((struct sNode*)right_value385)->finalize, ((struct sNode*)right_value385)->_protocol_obj, 1, 0, 0); } 
                                }
                                if(_if_conditional394=self!=((void*)0),                                _if_conditional394) {
                                    result_287->mOnlyNullCecker=self->mOnlyNullCecker;
                                }
                                if(_if_conditional395=self!=((void*)0),                                _if_conditional395) {
                                    result_287->sline=self->sline;
                                }
                                if(_if_conditional396=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional396) {
                                    __dec_obj167=result_287->sname;
                                    result_287->sname=(char*)come_increment_ref_count(((char*)(right_value386=string_clone(self->sname))));
                                    if(__dec_obj167) { __dec_obj167 = come_decrement_ref_count(__dec_obj167, (void*)0, (void*)0, 0,0,0); }
                                    if(right_value386 && right_value386 != __result_obj__) { right_value386 = come_decrement_ref_count(right_value386, (void*)0, (void*)0, 1, 0, 0); }
                                }
                                __result199__ = __result_obj__ = result_287;
                                if(result_287) { come_call_finalizer(sNullCheckNode_finalize,result_287, (void*)0, (void*)0, 0, 0, 1, 0); }
                                return __result199__;
                                if(result_287) { come_call_finalizer(sNullCheckNode_finalize,result_287, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sStoreFieldNode_finalize(struct sStoreFieldNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional398;
_Bool _if_conditional399;
_Bool _if_conditional400;
_Bool _if_conditional401;
memset(&__result_obj__, 0, sizeof(void*));
                                    if(_if_conditional398=self!=((void*)0)&&self->mLeft!=((void*)0),                                    _if_conditional398) {
                                        if(self->mLeft) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0); } 
                                    }
                                    if(_if_conditional399=self!=((void*)0)&&self->mRight!=((void*)0),                                    _if_conditional399) {
                                        if(self->mRight) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0); } 
                                    }
                                    if(_if_conditional400=self!=((void*)0)&&self->mName!=((void*)0),                                    _if_conditional400) {
                                        if(self->mName) { self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, 0); }
                                    }
                                    if(_if_conditional401=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional401) {
                                        if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                                    }
}

static struct sStoreFieldNode* sStoreFieldNode_clone(struct sStoreFieldNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional402;
struct sStoreFieldNode* __result200__;
void* right_value392;
struct sStoreFieldNode* result_290;
_Bool _if_conditional403;
void* right_value393;
struct sNode* __dec_obj169;
_Bool _if_conditional404;
void* right_value394;
struct sNode* __dec_obj170;
_Bool _if_conditional405;
void* right_value395;
char* __dec_obj171;
_Bool _if_conditional406;
_Bool _if_conditional407;
void* right_value396;
char* __dec_obj172;
struct sStoreFieldNode* __result201__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_290, 0, sizeof(struct sStoreFieldNode*));
                                    if(_if_conditional402=self==(void*)0,                                    _if_conditional402) {
                                        __result200__ = __result_obj__ = (void*)0;
                                        return __result200__;
                                    }
                                    result_290=(struct sStoreFieldNode*)come_increment_ref_count(((struct sStoreFieldNode*)(right_value392=(struct sStoreFieldNode*)come_calloc(1, sizeof(struct sStoreFieldNode)*(1), "sStoreFieldNode_clone", 3))));
                                    if(right_value392 && right_value392 != __result_obj__) { come_call_finalizer(sStoreFieldNode_finalize,right_value392, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    if(_if_conditional403=self!=((void*)0)&&self->mLeft!=((void*)0),                                    _if_conditional403) {
                                        __dec_obj169=result_290->mLeft;
                                        result_290->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value393=sNode_clone(self->mLeft))));
                                        if(__dec_obj169) { __dec_obj169 = come_decrement_ref_count(__dec_obj169, ((struct sNode*)__dec_obj169)->finalize, ((struct sNode*)__dec_obj169)->_protocol_obj, 0,0,0); }
                                        if(right_value393 && right_value393 != __result_obj__) { right_value393 = come_decrement_ref_count(right_value393, ((struct sNode*)right_value393)->finalize, ((struct sNode*)right_value393)->_protocol_obj, 1, 0, 0); } 
                                    }
                                    if(_if_conditional404=self!=((void*)0)&&self->mRight!=((void*)0),                                    _if_conditional404) {
                                        __dec_obj170=result_290->mRight;
                                        result_290->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value394=sNode_clone(self->mRight))));
                                        if(__dec_obj170) { __dec_obj170 = come_decrement_ref_count(__dec_obj170, ((struct sNode*)__dec_obj170)->finalize, ((struct sNode*)__dec_obj170)->_protocol_obj, 0,0,0); }
                                        if(right_value394 && right_value394 != __result_obj__) { right_value394 = come_decrement_ref_count(right_value394, ((struct sNode*)right_value394)->finalize, ((struct sNode*)right_value394)->_protocol_obj, 1, 0, 0); } 
                                    }
                                    if(_if_conditional405=self!=((void*)0)&&self->mName!=((void*)0),                                    _if_conditional405) {
                                        __dec_obj171=result_290->mName;
                                        result_290->mName=(char*)come_increment_ref_count(((char*)(right_value395=string_clone(self->mName))));
                                        if(__dec_obj171) { __dec_obj171 = come_decrement_ref_count(__dec_obj171, (void*)0, (void*)0, 0,0,0); }
                                        if(right_value395 && right_value395 != __result_obj__) { right_value395 = come_decrement_ref_count(right_value395, (void*)0, (void*)0, 1, 0, 0); }
                                    }
                                    if(_if_conditional406=self!=((void*)0),                                    _if_conditional406) {
                                        result_290->sline=self->sline;
                                    }
                                    if(_if_conditional407=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional407) {
                                        __dec_obj172=result_290->sname;
                                        result_290->sname=(char*)come_increment_ref_count(((char*)(right_value396=string_clone(self->sname))));
                                        if(__dec_obj172) { __dec_obj172 = come_decrement_ref_count(__dec_obj172, (void*)0, (void*)0, 0,0,0); }
                                        if(right_value396 && right_value396 != __result_obj__) { right_value396 = come_decrement_ref_count(right_value396, (void*)0, (void*)0, 1, 0, 0); }
                                    }
                                    __result201__ = __result_obj__ = result_290;
                                    if(result_290) { come_call_finalizer(sStoreFieldNode_finalize,result_290, (void*)0, (void*)0, 0, 0, 1, 0); }
                                    return __result201__;
                                    if(result_290) { come_call_finalizer(sStoreFieldNode_finalize,result_290, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sLoadFieldNode_finalize(struct sLoadFieldNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional411;
_Bool _if_conditional412;
_Bool _if_conditional413;
memset(&__result_obj__, 0, sizeof(void*));
                                        if(_if_conditional411=self!=((void*)0)&&self->mLeft!=((void*)0),                                        _if_conditional411) {
                                            if(self->mLeft) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0); } 
                                        }
                                        if(_if_conditional412=self!=((void*)0)&&self->mName!=((void*)0),                                        _if_conditional412) {
                                            if(self->mName) { self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, 0); }
                                        }
                                        if(_if_conditional413=self!=((void*)0)&&self->sname!=((void*)0),                                        _if_conditional413) {
                                            if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                                        }
}

static struct sLoadFieldNode* sLoadFieldNode_clone(struct sLoadFieldNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool _if_conditional414;
struct sLoadFieldNode* __result202__;
void* right_value406;
struct sLoadFieldNode* result_291;
_Bool _if_conditional415;
void* right_value407;
struct sNode* __dec_obj177;
_Bool _if_conditional416;
void* right_value408;
char* __dec_obj178;
_Bool _if_conditional417;
_Bool _if_conditional418;
void* right_value409;
char* __dec_obj179;
struct sLoadFieldNode* __result203__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_291, 0, sizeof(struct sLoadFieldNode*));
                                        if(_if_conditional414=self==(void*)0,                                        _if_conditional414) {
                                            __result202__ = __result_obj__ = (void*)0;
                                            return __result202__;
                                        }
                                        result_291=(struct sLoadFieldNode*)come_increment_ref_count(((struct sLoadFieldNode*)(right_value406=(struct sLoadFieldNode*)come_calloc(1, sizeof(struct sLoadFieldNode)*(1), "sLoadFieldNode_clone", 3))));
                                        if(right_value406 && right_value406 != __result_obj__) { come_call_finalizer(sLoadFieldNode_finalize,right_value406, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        if(_if_conditional415=self!=((void*)0)&&self->mLeft!=((void*)0),                                        _if_conditional415) {
                                            __dec_obj177=result_291->mLeft;
                                            result_291->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value407=sNode_clone(self->mLeft))));
                                            if(__dec_obj177) { __dec_obj177 = come_decrement_ref_count(__dec_obj177, ((struct sNode*)__dec_obj177)->finalize, ((struct sNode*)__dec_obj177)->_protocol_obj, 0,0,0); }
                                            if(right_value407 && right_value407 != __result_obj__) { right_value407 = come_decrement_ref_count(right_value407, ((struct sNode*)right_value407)->finalize, ((struct sNode*)right_value407)->_protocol_obj, 1, 0, 0); } 
                                        }
                                        if(_if_conditional416=self!=((void*)0)&&self->mName!=((void*)0),                                        _if_conditional416) {
                                            __dec_obj178=result_291->mName;
                                            result_291->mName=(char*)come_increment_ref_count(((char*)(right_value408=string_clone(self->mName))));
                                            if(__dec_obj178) { __dec_obj178 = come_decrement_ref_count(__dec_obj178, (void*)0, (void*)0, 0,0,0); }
                                            if(right_value408 && right_value408 != __result_obj__) { right_value408 = come_decrement_ref_count(right_value408, (void*)0, (void*)0, 1, 0, 0); }
                                        }
                                        if(_if_conditional417=self!=((void*)0),                                        _if_conditional417) {
                                            result_291->sline=self->sline;
                                        }
                                        if(_if_conditional418=self!=((void*)0)&&self->sname!=((void*)0),                                        _if_conditional418) {
                                            __dec_obj179=result_291->sname;
                                            result_291->sname=(char*)come_increment_ref_count(((char*)(right_value409=string_clone(self->sname))));
                                            if(__dec_obj179) { __dec_obj179 = come_decrement_ref_count(__dec_obj179, (void*)0, (void*)0, 0,0,0); }
                                            if(right_value409 && right_value409 != __result_obj__) { right_value409 = come_decrement_ref_count(right_value409, (void*)0, (void*)0, 1, 0, 0); }
                                        }
                                        __result203__ = __result_obj__ = result_291;
                                        if(result_291) { come_call_finalizer(sLoadFieldNode_finalize,result_291, (void*)0, (void*)0, 0, 0, 1, 0); }
                                        return __result203__;
                                        if(result_291) { come_call_finalizer(sLoadFieldNode_finalize,result_291, (void*)0, (void*)0, 0, 0, 0, 0); }
}

