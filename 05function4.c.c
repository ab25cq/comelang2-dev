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
struct tuple4$4voidpvoidpvoidpbool
{
    void* v1;
    void* v2;
    void* v3;
    _Bool v4;
};
struct optional$2tuple4$4voidpvoidpvoidpboolphbool
{
    struct tuple4$4voidpvoidpvoidpbool* v1;
    _Bool v2;
};
struct optional$2sTypephbool
{
    struct sType* v1;
    _Bool v2;
};
struct optional$2sTypepbool
{
    struct sType* v1;
    _Bool v2;
};
struct tuple3$3voidpvoidpbool
{
    void* v1;
    void* v2;
    _Bool v3;
};
struct optional$2tuple3$3voidpvoidpboolphbool
{
    struct tuple3$3voidpvoidpbool* v1;
    _Bool v2;
};
struct optional$2sClasspbool
{
    struct sClass* v1;
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

struct sNode* parse_normal_block(struct sInfo* info);

char* parse_attribute(struct sInfo* info);

void come_init_v5();

void come_final_v5();

struct sNode* parse_global_variable(struct sInfo* info);

struct sNode* get_number(_Bool minus, struct sInfo* info);

struct sNode* get_oct_number(struct sInfo* info);

struct sNode* get_hex_number(_Bool minus, struct sInfo* info);

struct sNode* create_int_node(int value, struct sInfo* info);

struct sNode* post_position_operator3_v5(struct sNode* node, struct sInfo* info);

struct tuple2$2sFunpcharph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info);

struct tuple2$2sFunpcharph* create_force_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info);

struct tuple2$2sFunpcharph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info);

struct tuple2$2sFunpcharph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);

struct tuple2$2sFunpcharph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);

struct tuple2$2sFunpcharph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);

char* skip_block(struct sInfo* info);

_Bool is_type_name(char* buf, struct sInfo* info);

struct optional$2intbool* expected_next_character(char c, struct sInfo* info);

struct sBlock* sBlock_initialize(struct sBlock* self, struct sInfo* info);

_Bool create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info);

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

void skip_paren(struct sInfo* info);

void parse_sharp_v5(struct sInfo* info);

_Bool parsecmp(char* str, struct sInfo* info);

struct optional$2charphbool* parse_word(struct sInfo* info);

static struct optional$2charphbool* optional$2charphbool_initialize(struct optional$2charphbool* self, char* v1, _Bool v2);
static void optional$2charphboolp_finalize(struct optional$2charphbool* self);
void skip_spaces_and_lf(struct sInfo* info);

_Bool is_contained_generics_class(struct sType* type, struct sInfo* info);

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self);
static _Bool list$1sTypeph_end(struct list$1sTypeph* self);
static struct sType* list$1sTypeph_next(struct list$1sTypeph* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void sType_finalize(struct sType* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool* parse_params(struct sInfo* info);

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self);
static struct list$1charph* list$1charph_initialize(struct list$1charph* self);
static int optional$2intbool_value(struct optional$2intbool* self);
static void optional$2intboolp_finalize(struct optional$2intbool* self);
static struct tuple3$3sTypephcharphbool* optional$2tuple3$3sTypephcharphboolphbool_value(struct optional$2tuple3$3sTypephcharphboolphbool* self);
static void optional$2tuple3$3sTypephcharphboolphboolp_finalize(struct optional$2tuple3$3sTypephcharphboolphbool* self);
static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static struct tuple4$4voidpvoidpvoidpbool* tuple4$4voidpvoidpvoidpbool_initialize(struct tuple4$4voidpvoidpvoidpbool* self, void* v1, void* v2, void* v3, _Bool v4);
static void tuple4$4voidpvoidpvoidpboolp_finalize(struct tuple4$4voidpvoidpvoidpbool* self);
static struct optional$2tuple4$4voidpvoidpvoidpboolphbool* optional$2tuple4$4voidpvoidpvoidpboolphbool_initialize(struct optional$2tuple4$4voidpvoidpvoidpboolphbool* self, struct tuple4$4voidpvoidpvoidpbool* v1, _Bool v2);
static void tuple4$4voidpvoidpvoidpbool_finalize(struct tuple4$4voidpvoidpvoidpbool* self);
static void optional$2tuple4$4voidpvoidpvoidpboolphboolp_finalize(struct optional$2tuple4$4voidpvoidpvoidpboolphbool* self);
static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item);
static struct sType* sType_clone(struct sType* self);
static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self);
static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self);
static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item);
static void list$1sTypeph_finalize(struct list$1sTypeph* self);
static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item);
static struct sNode* sNode_clone(struct sNode* self);
static void list$1sNodeph_finalize(struct list$1sNodeph* self);
static struct list$1charph* list$1charphp_clone(struct list$1charph* self);
static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item);
static void list$1charph_finalize(struct list$1charph* self);
static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item);
static struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool_initialize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self, struct list$1sTypeph* v1, struct list$1charph* v2, struct list$1charph* v3, _Bool v4);
static struct list$1sTypeph* list$1sTypeph_clone(struct list$1sTypeph* self);
static struct list$1charph* list$1charph_clone(struct list$1charph* self);
static void tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self);
static struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool* optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool_initialize(struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool* self, struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* v1, _Bool v2);
static void tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool_finalize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self);
static void optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphboolp_finalize(struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool* self);
void check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, struct sInfo* info);

static int list$1sTypeph_length(struct list$1sTypeph* self);
static struct optional$2sTypephbool* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
static struct optional$2sTypephbool* optional$2sTypephbool_initialize(struct optional$2sTypephbool* self, struct sType* v1, _Bool v2);
static void optional$2sTypephboolp_finalize(struct optional$2sTypephbool* self);
static struct sType* optional$2sTypephbool_value(struct optional$2sTypephbool* self);
static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value);
static _Bool optional$2boolbool_value(struct optional$2boolbool* self);
static void optional$2boolboolp_finalize(struct optional$2boolbool* self);
static int list$1sNodeph_length(struct list$1sNodeph* self);
struct tuple2$2sTypephcharph* parse_variable_name(struct sType* base_type_name, _Bool first, struct sInfo* info);

static char* optional$2charphbool_value(struct optional$2charphbool* self);
static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item);
static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_initialize(struct tuple2$2sTypephcharph* self, struct sType* v1, char* v2);
static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self);
void skip_pointer_attribute(struct sInfo* info);

struct optional$2tuple3$3sTypephcharphboolphbool* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type);

static struct tuple3$3sTypephcharphbool* tuple3$3sTypephcharphbool_initialize(struct tuple3$3sTypephcharphbool* self, struct sType* v1, char* v2, _Bool v3);
static struct optional$2tuple3$3sTypephcharphboolphbool* optional$2tuple3$3sTypephcharphboolphbool_initialize(struct optional$2tuple3$3sTypephcharphboolphbool* self, struct tuple3$3sTypephcharphbool* v1, _Bool v2);
static void tuple3$3sTypephcharphbool_finalize(struct tuple3$3sTypephcharphbool* self);
static struct optional$2sTypepbool* map$2charphsTypephp_operator_load_element(struct map$2charphsTypeph* self, char* key);
static struct optional$2sTypepbool* optional$2sTypepbool_initialize(struct optional$2sTypepbool* self, struct sType* v1, _Bool v2);
static void optional$2sTypepboolp_finalize(struct optional$2sTypepbool* self);
static struct sType* optional$2sTypepbool_value(struct optional$2sTypepbool* self);
static _Bool list$1charph_contained(struct list$1charph* self, char* item);
static char* list$1charph_begin(struct list$1charph* self);
static _Bool list$1charph_end(struct list$1charph* self);
static char* list$1charph_next(struct list$1charph* self);
static int list$1charph_length(struct list$1charph* self);
static struct optional$2charphbool* list$1charphp_operator_load_element(struct list$1charph* self, int position);
static struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool_value(struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool* self);
static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1);
static struct tuple3$3voidpvoidpbool* tuple3$3voidpvoidpbool_initialize(struct tuple3$3voidpvoidpbool* self, void* v1, void* v2, _Bool v3);
static void tuple3$3voidpvoidpboolp_finalize(struct tuple3$3voidpvoidpbool* self);
static struct optional$2tuple3$3voidpvoidpboolphbool* optional$2tuple3$3voidpvoidpboolphbool_initialize(struct optional$2tuple3$3voidpvoidpboolphbool* self, struct tuple3$3voidpvoidpbool* v1, _Bool v2);
static void tuple3$3voidpvoidpbool_finalize(struct tuple3$3voidpvoidpbool* self);
static void optional$2tuple3$3voidpvoidpboolphboolp_finalize(struct optional$2tuple3$3voidpvoidpboolphbool* self);
static void CVALUE_finalize(struct CVALUE* self);
static struct optional$2sClasspbool* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key);
static struct optional$2sClasspbool* optional$2sClasspbool_initialize(struct optional$2sClasspbool* self, struct sClass* v1, _Bool v2);
static void optional$2sClasspboolp_finalize(struct optional$2sClasspbool* self);
static struct sClass* optional$2sClasspbool_value(struct optional$2sClasspbool* self);
static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item);
static void map$2charphsClassph_rehash(struct map$2charphsClassph* self);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
static char* map$2charphsClassph_begin(struct map$2charphsClassph* self);
static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self);
static char* map$2charphsClassph_next(struct map$2charphsClassph* self);
static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value);
static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item);
static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail);
static struct list$1charp* list$1charp_reset(struct list$1charp* self);
static void list_item$1charpp_finalize(struct list_item$1charp* self);
static char* list$1charp_begin(struct list$1charp* self);
static _Bool list$1charp_end(struct list$1charp* self);
static char* list$1charp_next(struct list$1charp* self);
static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item);
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

void skip_paren(struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int nest_5;
_Bool _while_condtional1;
_Bool _if_conditional5;
_Bool _if_conditional6;
_Bool _if_conditional7;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&nest_5, 0, sizeof(int));
    nest_5=0;
    while(_while_condtional1=(_Bool)1,    _while_condtional1) {
        if(_if_conditional5=*info->p==40,        _if_conditional5) {
            info->p++;
            skip_spaces_and_lf(info);
            nest_5++;
        }
        else {
            if(_if_conditional6=*info->p==41,            _if_conditional6) {
                info->p++;
                skip_spaces_and_lf(info);
                nest_5--;
                if(_if_conditional7=nest_5==0,                _if_conditional7) {
                    break;
                }
            }
            else {
                info->p++;
            }
        }
    }
}

void parse_sharp_v5(struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _while_condtional2;
_Bool _while_condtional3;
_Bool _while_condtional4;
_Bool _if_conditional8;
_Bool _while_condtional5;
_Bool _if_conditional9;
_Bool _if_conditional10;
int line_6;
void* right_value10;
void* right_value11;
struct buffer* fname_7;
_Bool _while_condtional6;
_Bool _if_conditional11;
_Bool _while_condtional7;
_Bool _while_condtional8;
void* right_value12;
char* __dec_obj6;
_Bool _if_conditional12;
_Bool _while_condtional9;
_Bool _while_condtional10;
_Bool _while_condtional11;
_Bool _while_condtional12;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&line_6, 0, sizeof(int));
memset(&right_value10, 0, sizeof(void*));
memset(&right_value11, 0, sizeof(void*));
memset(&fname_7, 0, sizeof(struct buffer*));
memset(&right_value12, 0, sizeof(void*));
    while(_while_condtional2=memcmp(info->p,"__attribute__",strlen("__attribute__"))==0,    _while_condtional2) {
        info->p+=strlen("__attribute__");
        skip_spaces_and_lf(info);
        skip_paren(info);
    }
    while(_while_condtional3=memcmp(info->p,"__extension__",strlen("__extension__"))==0,    _while_condtional3) {
        info->p+=strlen("__extension__");
        skip_spaces_and_lf(info);
    }
    while(_while_condtional4=*info->p==35,    _while_condtional4) {
        skip_spaces_and_lf(info);
        info->p++;
        skip_spaces_and_lf(info);
        if(_if_conditional8=memcmp(info->p,"pragma",strlen("pragma"))==0,        _if_conditional8) {
            while(_while_condtional5=*info->p,            _while_condtional5) {
                if(_if_conditional9=*info->p==10,                _if_conditional9) {
                    skip_spaces_and_lf(info);
                    break;
                }
                else {
                    info->p++;
                }
            }
        }
        else {
            if(_if_conditional10=xisdigit(*info->p),            _if_conditional10) {
                line_6=0;
                fname_7=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value11=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value10=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function4.c", 71))))))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value10);
                if(right_value10 && right_value10 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value10, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value10;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value11);
                if(right_value11 && right_value11 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value11, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value11;
                __freed_obj__ = 0;
                while(_while_condtional6=xisdigit(*info->p),                _while_condtional6) {
                    line_6=line_6*10+(*info->p-48);
                    info->p++;
                }
                skip_spaces_and_lf(info);
                if(_if_conditional11=*info->p==34,                _if_conditional11) {
                    info->p++;
                    while(_while_condtional7=*info->p!=34,                    _while_condtional7) {
                        buffer_append_char(fname_7,*info->p);
                        info->p++;
                    }
                    while(_while_condtional8=*info->p!=10,                    _while_condtional8) {
                        info->p++;
                    }
                    info->p++;
                }
                info->sline=line_6;
                __dec_obj6=info->sname;
                info->sname=(char*)come_increment_ref_count(((char*)(right_value12=buffer_to_string(fname_7))));
                if(__dec_obj6) { __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value12);
                if(right_value12 && right_value12 != __result_obj__ && !__freed_obj__) { right_value12 = come_decrement_ref_count(right_value12, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value12;
                __freed_obj__ = 0;
                skip_spaces_and_lf(info);
                if(fname_7 && !__freed_obj__) { come_call_finalizer(buffer_finalize,fname_7, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            else {
                if(_if_conditional12=*info->p==34,                _if_conditional12) {
                    info->p++;
                    while(_while_condtional9=*info->p!=34,                    _while_condtional9) {
                        info->p++;
                    }
                    while(_while_condtional10=*info->p!=10,                    _while_condtional10) {
                        info->p++;
                    }
                    info->p++;
                }
            }
        }
        skip_spaces_and_lf(info);
    }
    while(_while_condtional11=memcmp(info->p,"__attribute__",strlen("__attribute__"))==0,    _while_condtional11) {
        info->p+=strlen("__attribute__");
        skip_spaces_and_lf(info);
        skip_paren(info);
    }
    while(_while_condtional12=memcmp(info->p,"__extension__",strlen("__extension__"))==0,    _while_condtional12) {
        info->p+=strlen("__extension__");
        skip_spaces_and_lf(info);
    }
}

_Bool parsecmp(char* str, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char c_8;
_Bool __result13__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&c_8, 0, sizeof(char));
    c_8=*(info->p+strlen(str));
    __result13__ = memcmp(info->p,str,strlen(str))==0&&(c_8==59||c_8==32||c_8==9||c_8==10||c_8==10);
    return __result13__;
}

struct optional$2charphbool* parse_word(struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value13;
void* right_value14;
struct buffer* buf_9;
_Bool _while_condtional13;
void* right_value15;
_Bool _if_conditional13;
void* right_value16;
void* right_value17;
void* right_value18;
struct optional$2charphbool* __result15__;
void* right_value19;
void* right_value20;
void* right_value21;
struct optional$2charphbool* __result16__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value13, 0, sizeof(void*));
memset(&right_value14, 0, sizeof(void*));
memset(&buf_9, 0, sizeof(struct buffer*));
memset(&right_value15, 0, sizeof(void*));
memset(&right_value16, 0, sizeof(void*));
memset(&right_value17, 0, sizeof(void*));
memset(&right_value18, 0, sizeof(void*));
memset(&right_value19, 0, sizeof(void*));
memset(&right_value20, 0, sizeof(void*));
memset(&right_value21, 0, sizeof(void*));
    buf_9=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value14=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value13=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function4.c", 145))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value13);
    if(right_value13 && right_value13 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value13, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value13;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value14);
    if(right_value14 && right_value14 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value14, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value14;
    __freed_obj__ = 0;
    parse_sharp_v5(info);
    while(_while_condtional13=(*info->p>=97&&*info->p<=122)||(*info->p>=65&&*info->p<=90)||*info->p==95||(*info->p>=48&&*info->p<=57)||(*info->p==36),    _while_condtional13) {
        buffer_append_char(buf_9,*info->p);
        info->p++;
    }
    skip_spaces_and_lf(info);
    if(_if_conditional13=string_length(((char*)(right_value15=buffer_to_string(buf_9))))==0,    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value15),
    (right_value15 && right_value15 != __result_obj__ && !__freed_obj__) ? right_value15 = come_decrement_ref_count(right_value15, (void*)0, (void*)0, 1, 0, 0):0,
    __right_value_freed_obj[2] = right_value15, 
    __freed_obj__ = 0, 
    _if_conditional13) {
        err_msg(info,"unexpected character(%c). expected word character",*info->p);
        __result15__ = __result_obj__ = ((struct optional$2charphbool*)(right_value18=optional$2charphbool_initialize((struct optional$2charphbool*)come_increment_ref_count(((struct optional$2charphbool*)(right_value17=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "05function4.c", 157)))),(char*)come_increment_ref_count(((char*)(right_value16=__builtin_string("")))),(_Bool)1)));
        if(buf_9 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_9, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value16);
        if(right_value16 && right_value16 != __result_obj__ && !__freed_obj__) { right_value16 = come_decrement_ref_count(right_value16, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value16;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value17);
        if(right_value17 && right_value17 != __result_obj__ && !__freed_obj__) { right_value17 = come_decrement_ref_count(right_value17, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value17;
        __freed_obj__ = 0;
        return __result15__;
    }
    __result16__ = __result_obj__ = ((struct optional$2charphbool*)(right_value21=optional$2charphbool_initialize((struct optional$2charphbool*)come_increment_ref_count(((struct optional$2charphbool*)(right_value20=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "05function4.c", 160)))),(char*)come_increment_ref_count(((char*)(right_value19=buffer_to_string(buf_9)))),(_Bool)1)));
    if(buf_9 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_9, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value19);
    if(right_value19 && right_value19 != __result_obj__ && !__freed_obj__) { right_value19 = come_decrement_ref_count(right_value19, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value19;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value20);
    if(right_value20 && right_value20 != __result_obj__ && !__freed_obj__) { right_value20 = come_decrement_ref_count(right_value20, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value20;
    __freed_obj__ = 0;
    return __result16__;
    if(buf_9 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_9, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct optional$2charphbool* optional$2charphbool_initialize(struct optional$2charphbool* self, char* v1, _Bool v2){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* __dec_obj7;
struct optional$2charphbool* __result14__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            __dec_obj7=self->v1;
            self->v1=(char*)come_increment_ref_count(v1);
            if(__dec_obj7) { __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0,0,0); }
            self->v2=v2;
            __result14__ = __result_obj__ = self;
            if(self && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            if(v1 && !__freed_obj__) { v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 1, 0); }
            return __result14__;
            if(self && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            if(v1 && !__freed_obj__) { v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 1, 0); }
}

static void optional$2charphboolp_finalize(struct optional$2charphbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional14;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional14=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional14) {
                    if(self->v1 && !__freed_obj__) { self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, 0); }
                }
}

void skip_spaces_and_lf(struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _while_condtional14;
_Bool _if_conditional15;
_Bool _if_conditional16;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    while(_while_condtional14=(_Bool)1,    _while_condtional14) {
        if(_if_conditional15=*info->p==32||*info->p==9,        _if_conditional15) {
            info->p++;
        }
        else {
            if(_if_conditional16=*info->p==10,            _if_conditional16) {
                info->p++;
                info->sline++;
            }
            else {
                break;
            }
        }
    }
}

_Bool is_contained_generics_class(struct sType* type, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1sTypeph* o2_saved_10;
struct sType* it_13;
_Bool _for_condtionalA1;
_Bool _if_conditional21;
_Bool __result24__;
_Bool _if_conditional38;
_Bool __result25__;
_Bool __result26__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&o2_saved_10, 0, sizeof(struct list$1sTypeph*));
memset(&it_13, 0, sizeof(struct sType*));
    for(
    o2_saved_10=(struct list$1sTypeph*)come_increment_ref_count((type->mGenericsTypes)),it_13=list$1sTypeph_begin((o2_saved_10)) ,    0;    _for_condtionalA1=    !list$1sTypeph_end((o2_saved_10)) ,    _for_condtionalA1;    it_13=list$1sTypeph_next((o2_saved_10)) ,    0    ){
        if(_if_conditional21=is_contained_generics_class(it_13,info),        _if_conditional21) {
            __result24__ = (_Bool)1;
            if(o2_saved_10 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_10, (void*)0, (void*)0, 0, 0, 0, 0); }
            return __result24__;
        }
    }
    if(o2_saved_10 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_10, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(_if_conditional38=type->mClass->mGenerics,    _if_conditional38) {
        __result25__ = (_Bool)1;
        return __result25__;
    }
    __result26__ = (_Bool)0;
    return __result26__;
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional17;
struct sType* result_11;
struct sType* __result17__;
_Bool _if_conditional18;
struct sType* __result18__;
struct sType* result_12;
struct sType* __result19__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_11, 0, sizeof(struct sType*));
memset(&result_12, 0, sizeof(struct sType*));
        if(_if_conditional17=self==((void*)0),        _if_conditional17) {
            memset(&result_11,0,sizeof(struct sType*));
            __result17__ = __result_obj__ = result_11;
            return __result17__;
        }
        self->it=self->head;
        if(_if_conditional18=self->it,        _if_conditional18) {
            __result18__ = __result_obj__ = self->it->item;
            return __result18__;
        }
        memset(&result_12,0,sizeof(struct sType*));
        __result19__ = __result_obj__ = result_12;
        return __result19__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result20__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __result20__ = self==((void*)0)||self->it==((void*)0);
        return __result20__;
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional19;
struct sType* result_14;
struct sType* __result21__;
_Bool _if_conditional20;
struct sType* __result22__;
struct sType* result_15;
struct sType* __result23__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_14, 0, sizeof(struct sType*));
memset(&result_15, 0, sizeof(struct sType*));
        if(_if_conditional19=self==((void*)0)||self->it==((void*)0),        _if_conditional19) {
            memset(&result_14,0,sizeof(struct sType*));
            __result21__ = __result_obj__ = result_14;
            return __result21__;
        }
        self->it=self->it->next;
        if(_if_conditional20=self->it,        _if_conditional20) {
            __result22__ = __result_obj__ = self->it->item;
            return __result22__;
        }
        memset(&result_15,0,sizeof(struct sType*));
        __result23__ = __result_obj__ = result_15;
        return __result23__;
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1sTypeph* it_16;
_Bool _while_condtional15;
struct list_item$1sTypeph* prev_it_17;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_16, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_17, 0, sizeof(struct list_item$1sTypeph*));
                it_16=self->head;
                while(_while_condtional15=it_16!=((void*)0),                _while_condtional15) {
                    prev_it_17=it_16;
                    it_16=it_16->next;
                    if(prev_it_17 && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,prev_it_17, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional22;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional22=self!=((void*)0)&&self->item!=((void*)0),                        _if_conditional22) {
                            if(self->item && !__freed_obj__) { come_call_finalizer(sType_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
}

static void sType_finalize(struct sType* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional23;
_Bool _if_conditional25;
_Bool _if_conditional26;
_Bool _if_conditional27;
_Bool _if_conditional28;
_Bool _if_conditional30;
_Bool _if_conditional31;
_Bool _if_conditional33;
_Bool _if_conditional34;
_Bool _if_conditional35;
_Bool _if_conditional36;
_Bool _if_conditional37;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional23=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                                _if_conditional23) {
                                    if(self->mNoSolvedGenericsType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0); }
                                }
                                if(_if_conditional25=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                                _if_conditional25) {
                                    if(self->mOriginalLoadVarType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0); }
                                }
                                if(_if_conditional26=self!=((void*)0)&&self->mGenericsName!=((void*)0),                                _if_conditional26) {
                                    if(self->mGenericsName && !__freed_obj__) { self->mGenericsName = come_decrement_ref_count(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0); }
                                }
                                if(_if_conditional27=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                                _if_conditional27) {
                                    if(self->mGenericsTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                                }
                                if(_if_conditional28=self!=((void*)0)&&self->mArrayNum!=((void*)0),                                _if_conditional28) {
                                    if(self->mArrayNum && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0); }
                                }
                                if(_if_conditional30=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                _if_conditional30) {
                                    if(self->mParamTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                                }
                                if(_if_conditional31=self!=((void*)0)&&self->mParamNames!=((void*)0),                                _if_conditional31) {
                                    if(self->mParamNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0); }
                                }
                                if(_if_conditional33=self!=((void*)0)&&self->mResultType!=((void*)0),                                _if_conditional33) {
                                    if(self->mResultType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0); }
                                }
                                if(_if_conditional34=self!=((void*)0)&&self->mAlignas!=((void*)0),                                _if_conditional34) {
                                    if(self->mAlignas && !__freed_obj__) { self->mAlignas = come_decrement_ref_count(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0); } 
                                }
                                if(_if_conditional35=self!=((void*)0)&&self->mSizeNum!=((void*)0),                                _if_conditional35) {
                                    if(self->mSizeNum && !__freed_obj__) { self->mSizeNum = come_decrement_ref_count(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0); } 
                                }
                                if(_if_conditional36=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                                _if_conditional36) {
                                    if(self->mOriginalTypeName && !__freed_obj__) { self->mOriginalTypeName = come_decrement_ref_count(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0); }
                                }
                                if(_if_conditional37=self!=((void*)0)&&self->mAsmName!=((void*)0),                                _if_conditional37) {
                                    if(self->mAsmName && !__freed_obj__) { self->mAsmName = come_decrement_ref_count(self->mAsmName, (void*)0, (void*)0, 0, 0, 0); }
                                }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional24;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                        if(_if_conditional24=self!=((void*)0)&&self->v1!=((void*)0),                                        _if_conditional24) {
                                            if(self->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1sNodeph* it_18;
_Bool _while_condtional16;
struct list_item$1sNodeph* prev_it_19;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_18, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_19, 0, sizeof(struct list_item$1sNodeph*));
                                        it_18=self->head;
                                        while(_while_condtional16=it_18!=((void*)0),                                        _while_condtional16) {
                                            prev_it_19=it_18;
                                            it_18=it_18->next;
                                            if(prev_it_19 && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,prev_it_19, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional29;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                if(_if_conditional29=self!=((void*)0)&&self->item!=((void*)0),                                                _if_conditional29) {
                                                    if(self->item && !__freed_obj__) { self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0); } 
                                                }
}

static void list$1charphp_finalize(struct list$1charph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1charph* it_20;
_Bool _while_condtional17;
struct list_item$1charph* prev_it_21;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_20, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_21, 0, sizeof(struct list_item$1charph*));
                                        it_20=self->head;
                                        while(_while_condtional17=it_20!=((void*)0),                                        _while_condtional17) {
                                            prev_it_21=it_20;
                                            it_20=it_20->next;
                                            if(prev_it_21 && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,prev_it_21, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional32;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                if(_if_conditional32=self!=((void*)0)&&self->item!=((void*)0),                                                _if_conditional32) {
                                                    if(self->item && !__freed_obj__) { self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0, 0, 0); }
                                                }
}

struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool* parse_params(struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value22;
void* right_value23;
struct list$1sTypeph* param_types_22;
void* right_value24;
void* right_value25;
struct list$1charph* param_names_23;
void* right_value26;
void* right_value27;
struct list$1charph* param_default_parametors_24;
_Bool var_args_25;
void* right_value28;
_Bool void_param_27;
char* p_28;
int sline_29;
_Bool _if_conditional40;
_Bool _if_conditional41;
_Bool _if_conditional42;
_Bool _if_conditional43;
_Bool _if_conditional44;
_Bool _while_condtional18;
_Bool _if_conditional45;
void* right_value29;
struct tuple3$3sTypephcharphbool* multiple_assgin_var1;
struct sType* param_type_31;
char* param_name_32;
_Bool err_33;
_Bool _if_conditional50;
void* right_value30;
void* right_value31;
void* right_value32;
void* right_value33;
struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool* __result35__;
void* right_value34;
struct sType* param_type2_34;
void* right_value72;
void* right_value76;
_Bool _if_conditional126;
char* p_59;
_Bool no_comma_60;
void* right_value77;
struct sNode* node_61;
char* p2_62;
void* right_value78;
_Bool _if_conditional127;
_Bool _if_conditional128;
void* right_value79;
_Bool _if_conditional129;
void* right_value80;
void* right_value90;
void* right_value91;
void* right_value92;
struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value22, 0, sizeof(void*));
memset(&right_value23, 0, sizeof(void*));
memset(&param_types_22, 0, sizeof(struct list$1sTypeph*));
memset(&right_value24, 0, sizeof(void*));
memset(&right_value25, 0, sizeof(void*));
memset(&param_names_23, 0, sizeof(struct list$1charph*));
memset(&right_value26, 0, sizeof(void*));
memset(&right_value27, 0, sizeof(void*));
memset(&param_default_parametors_24, 0, sizeof(struct list$1charph*));
memset(&var_args_25, 0, sizeof(_Bool));
memset(&right_value28, 0, sizeof(void*));
memset(&void_param_27, 0, sizeof(_Bool));
memset(&p_28, 0, sizeof(char*));
memset(&sline_29, 0, sizeof(int));
memset(&right_value29, 0, sizeof(void*));
memset(&param_type_31, 0, sizeof(struct sType*));
memset(&param_name_32, 0, sizeof(char*));
memset(&err_33, 0, sizeof(_Bool));
memset(&param_type_31, 0, sizeof(struct sType*));
memset(&param_name_32, 0, sizeof(char*));
memset(&err_33, 0, sizeof(_Bool));
memset(&right_value30, 0, sizeof(void*));
memset(&right_value31, 0, sizeof(void*));
memset(&right_value32, 0, sizeof(void*));
memset(&right_value33, 0, sizeof(void*));
memset(&right_value34, 0, sizeof(void*));
memset(&param_type2_34, 0, sizeof(struct sType*));
memset(&right_value72, 0, sizeof(void*));
memset(&right_value76, 0, sizeof(void*));
memset(&p_59, 0, sizeof(char*));
memset(&no_comma_60, 0, sizeof(_Bool));
memset(&right_value77, 0, sizeof(void*));
memset(&node_61, 0, sizeof(struct sNode*));
memset(&p2_62, 0, sizeof(char*));
memset(&right_value78, 0, sizeof(void*));
memset(&right_value79, 0, sizeof(void*));
memset(&right_value80, 0, sizeof(void*));
memset(&right_value90, 0, sizeof(void*));
memset(&right_value91, 0, sizeof(void*));
memset(&right_value92, 0, sizeof(void*));
    param_types_22=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value23=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value22=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function4.c", 196))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value22);
    if(right_value22 && right_value22 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value22, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value22;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value23);
    if(right_value23 && right_value23 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value23, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value23;
    __freed_obj__ = 0;
    param_names_23=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value25=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value24=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function4.c", 197))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value24);
    if(right_value24 && right_value24 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value24, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value24;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value25);
    if(right_value25 && right_value25 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value25, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value25;
    __freed_obj__ = 0;
    param_default_parametors_24=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value27=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value26=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function4.c", 198))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value26);
    if(right_value26 && right_value26 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value26, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value26;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value27);
    if(right_value27 && right_value27 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value27, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[5] = right_value27;
    __freed_obj__ = 0;
    var_args_25=(_Bool)0;
    optional$2intbool_value(((struct optional$2intbool*)(right_value28=expected_next_character(40,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value28);
    if(right_value28 && right_value28 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value28, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[6] = right_value28;
    __freed_obj__ = 0;
    void_param_27=(_Bool)0;
    {
        p_28=info->p;
        sline_29=info->sline;
        if(_if_conditional40=memcmp(info->p,"void",strlen("void"))==0,        _if_conditional40) {
            info->p+=strlen("void");
            skip_spaces_and_lf(info);
            if(_if_conditional41=*info->p==41,            _if_conditional41) {
                void_param_27=(_Bool)1;
            }
        }
        info->p=p_28;
        info->sline=sline_29;
    }
    if(_if_conditional42=void_param_27,    _if_conditional42) {
        if(_if_conditional43=memcmp(info->p,"void",strlen("void"))==0,        _if_conditional43) {
            info->p+=strlen("void");
            skip_spaces_and_lf(info);
            if(_if_conditional44=*info->p==41,            _if_conditional44) {
                info->p++;
                skip_spaces_and_lf(info);
            }
        }
    }
    else {
        while(_while_condtional18=(_Bool)1,        _while_condtional18) {
            if(_if_conditional45=*info->p==41,            _if_conditional45) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            parse_sharp_v5(info);
            multiple_assgin_var1=optional$2tuple3$3sTypephcharphboolphbool_value(((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value29=parse_type(info,(_Bool)1,(_Bool)0))));
            param_type_31=(struct sType*)come_increment_ref_count(multiple_assgin_var1->v1);
            param_name_32=(char*)come_increment_ref_count(multiple_assgin_var1->v2);
            err_33=multiple_assgin_var1->v3;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value29);
            if(right_value29 && right_value29 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2tuple3$3sTypephcharphboolphboolp_finalize,right_value29, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value29;
            __freed_obj__ = 0;
            if(_if_conditional50=!err_33,            _if_conditional50) {
                printf("%s %d: failed to function parametor\n",info->sname,info->sline);
                __result35__ = __result_obj__ = ((struct optional$2tuple4$4voidpvoidpvoidpboolphbool*)(right_value33=optional$2tuple4$4voidpvoidpvoidpboolphbool_initialize(((struct optional$2tuple4$4voidpvoidpvoidpboolphbool*)(right_value32=(struct optional$2tuple4$4voidpvoidpvoidpboolphbool*)come_calloc(1, sizeof(struct optional$2tuple4$4voidpvoidpvoidpboolphbool)*(1), "05function4.c", 247))),(struct tuple4$4voidpvoidpvoidpbool*)come_increment_ref_count(((struct tuple4$4voidpvoidpvoidpbool*)(right_value31=tuple4$4voidpvoidpvoidpbool_initialize((struct tuple4$4voidpvoidpvoidpbool*)come_increment_ref_count(((struct tuple4$4voidpvoidpvoidpbool*)(right_value30=(struct tuple4$4voidpvoidpvoidpbool*)come_calloc(1, sizeof(struct tuple4$4voidpvoidpvoidpbool)*(1), "05function4.c", 247)))),((void*)0),((void*)0),((void*)0),(_Bool)0)))),(_Bool)0)));
                if(param_type_31 && !__freed_obj__) { come_call_finalizer(sType_finalize,param_type_31, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(param_name_32 && !__freed_obj__) { param_name_32 = come_decrement_ref_count(param_name_32, (void*)0, (void*)0, 0, 0, 0); }
                if(param_types_22 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,param_types_22, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(param_names_23 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_names_23, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(param_default_parametors_24 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_24, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value30);
                if(right_value30 && right_value30 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple4$4voidpvoidpvoidpbool_finalize,right_value30, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value30;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value31);
                if(right_value31 && right_value31 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple4$4voidpvoidpvoidpboolp_finalize,right_value31, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value31;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value32);
                if(right_value32 && right_value32 != __result_obj__ && !__freed_obj__) { right_value32 = come_decrement_ref_count(right_value32, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value32;
                __freed_obj__ = 0;
                return __result35__;
            }
            param_type2_34=(struct sType*)come_increment_ref_count(((struct sType*)(right_value34=solve_generics(param_type_31,info->generics_type,info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value34);
            if(right_value34 && right_value34 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value34, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value34;
            __freed_obj__ = 0;
            param_type2_34->mFunctionParam=(_Bool)1;
            list$1sTypeph_push_back(param_types_22,(struct sType*)come_increment_ref_count(((struct sType*)(right_value72=sType_clone(param_type2_34)))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value72);
            if(right_value72 && right_value72 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value72, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value72;
            __freed_obj__ = 0;
            list$1charph_push_back(param_names_23,(char*)come_increment_ref_count(((char*)(right_value76=string_clone(param_name_32)))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value76);
            if(right_value76 && right_value76 != __result_obj__ && !__freed_obj__) { right_value76 = come_decrement_ref_count(right_value76, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[3] = right_value76;
            __freed_obj__ = 0;
            if(_if_conditional126=*info->p==61,            _if_conditional126) {
                info->p++;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                p_59=info->p;
                no_comma_60=info->no_comma;
                info->no_comma=(_Bool)1;
                node_61=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value77=expression_v13(info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value77);
                if(right_value77 && right_value77 != __result_obj__ && !__freed_obj__) { right_value77 = come_decrement_ref_count(right_value77, ((struct sNode*)right_value77)->finalize, ((struct sNode*)right_value77)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[0] = right_value77;
                __freed_obj__ = 0;
                info->no_comma=no_comma_60;
                p2_62=info->p;
                char buf_63[p2_62-p_59+1];
                memset(&buf_63, 0, sizeof(char)                *(p2_62-p_59+1)                );
                memcpy(buf_63,p_59,p2_62-p_59);
                buf_63[p2_62-p_59]=0;
                list$1charph_push_back(param_default_parametors_24,(char*)come_increment_ref_count(((char*)(right_value78=__builtin_string(buf_63)))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value78);
                if(right_value78 && right_value78 != __result_obj__ && !__freed_obj__) { right_value78 = come_decrement_ref_count(right_value78, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value78;
                __freed_obj__ = 0;
                if(node_61 && !__freed_obj__) { node_61 = come_decrement_ref_count(node_61, ((struct sNode*)node_61)->finalize, ((struct sNode*)node_61)->_protocol_obj, 0, 0, 0); } 
            }
            else {
                list$1charph_push_back(param_default_parametors_24,((void*)0));
            }
            parse_sharp_v5(info);
            if(_if_conditional127=*info->p==44,            _if_conditional127) {
                info->p++;
                skip_spaces_and_lf(info);
                if(_if_conditional128=memcmp(info->p,"...",strlen("..."))==0,                _if_conditional128) {
                    info->p+=strlen("...");
                    skip_spaces_and_lf(info);
                    var_args_25=(_Bool)1;
                    optional$2intbool_value(((struct optional$2intbool*)(right_value79=expected_next_character(41,info))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value79);
                    if(right_value79 && right_value79 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value79, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value79;
                    __freed_obj__ = 0;
                    if(param_type_31 && !__freed_obj__) { come_call_finalizer(sType_finalize,param_type_31, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(param_name_32 && !__freed_obj__) { param_name_32 = come_decrement_ref_count(param_name_32, (void*)0, (void*)0, 0, 0, 0); }
                    if(param_type2_34 && !__freed_obj__) { come_call_finalizer(sType_finalize,param_type2_34, (void*)0, (void*)0, 0, 0, 0, 0); }
                    break;
                }
            }
            else {
                if(_if_conditional129=*info->p==41,                _if_conditional129) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(param_type_31 && !__freed_obj__) { come_call_finalizer(sType_finalize,param_type_31, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(param_name_32 && !__freed_obj__) { param_name_32 = come_decrement_ref_count(param_name_32, (void*)0, (void*)0, 0, 0, 0); }
                    if(param_type2_34 && !__freed_obj__) { come_call_finalizer(sType_finalize,param_type2_34, (void*)0, (void*)0, 0, 0, 0, 0); }
                    break;
                }
            }
            if(param_type_31 && !__freed_obj__) { come_call_finalizer(sType_finalize,param_type_31, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(param_name_32 && !__freed_obj__) { param_name_32 = come_decrement_ref_count(param_name_32, (void*)0, (void*)0, 0, 0, 0); }
            if(param_type2_34 && !__freed_obj__) { come_call_finalizer(sType_finalize,param_type2_34, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
    }
    __result60__ = __result_obj__ = ((struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool*)(right_value92=optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool_initialize((struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool*)come_increment_ref_count(((struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool*)(right_value91=(struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool*)come_calloc(1, sizeof(struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool)*(1), "05function4.c", 307)))),(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_increment_ref_count(((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(right_value90=tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool_initialize((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_increment_ref_count(((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(right_value80=(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_calloc(1, sizeof(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool)*(1), "05function4.c", 307)))),(struct list$1sTypeph*)come_increment_ref_count(param_types_22),(struct list$1charph*)come_increment_ref_count(param_names_23),(struct list$1charph*)come_increment_ref_count(param_default_parametors_24),var_args_25)))),(_Bool)1)));
    if(param_types_22 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,param_types_22, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(param_names_23 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_names_23, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(param_default_parametors_24 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_24, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value80);
    if(right_value80 && right_value80 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool_finalize,right_value80, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[7] = right_value80;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value90);
    if(right_value90 && right_value90 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize,right_value90, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[8] = right_value90;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 9, right_value91);
    if(right_value91 && right_value91 != __result_obj__ && !__freed_obj__) { right_value91 = come_decrement_ref_count(right_value91, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[9] = right_value91;
    __freed_obj__ = 0;
    return __result60__;
    if(param_types_22 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,param_types_22, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(param_names_23 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_names_23, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(param_default_parametors_24 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_24, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1sTypeph* __result27__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        __result27__ = __result_obj__ = self;
        if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result27__;
        if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1charph* __result28__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        __result28__ = __result_obj__ = self;
        if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result28__;
        if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static int optional$2intbool_value(struct optional$2intbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional39;
int default_value_26;
int __result29__;
int __result30__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_26, 0, sizeof(int));
        if(_if_conditional39=self==((void*)0),        _if_conditional39) {
            memset(&default_value_26,0,sizeof(int));
            __result29__ = default_value_26;
            return __result29__;
        }
        else {
            __result30__ = self->v1;
            return __result30__;
        }
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

static struct tuple3$3sTypephcharphbool* optional$2tuple3$3sTypephcharphboolphbool_value(struct optional$2tuple3$3sTypephcharphboolphbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional46;
struct tuple3$3sTypephcharphbool* default_value_30;
struct tuple3$3sTypephcharphbool* __result31__;
struct tuple3$3sTypephcharphbool* __result32__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_30, 0, sizeof(struct tuple3$3sTypephcharphbool*));
                if(_if_conditional46=self==((void*)0),                _if_conditional46) {
                    memset(&default_value_30,0,sizeof(struct tuple3$3sTypephcharphbool*));
                    __result31__ = __result_obj__ = default_value_30;
                    return __result31__;
                }
                else {
                    __result32__ = __result_obj__ = self->v1;
                    return __result32__;
                }
}

static void optional$2tuple3$3sTypephcharphboolphboolp_finalize(struct optional$2tuple3$3sTypephcharphboolphbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional47;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional47=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional47) {
                    if(self->v1 && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional48;
_Bool _if_conditional49;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional48=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional48) {
                            if(self->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
                        if(_if_conditional49=self!=((void*)0)&&self->v2!=((void*)0),                        _if_conditional49) {
                            if(self->v2 && !__freed_obj__) { self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, 0); }
                        }
}

static struct tuple4$4voidpvoidpvoidpbool* tuple4$4voidpvoidpvoidpbool_initialize(struct tuple4$4voidpvoidpvoidpbool* self, void* v1, void* v2, void* v3, _Bool v4){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct tuple4$4voidpvoidpvoidpbool* __result33__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    self->v1=v1;
                    self->v2=v2;
                    self->v3=v3;
                    self->v4=v4;
                    __result33__ = __result_obj__ = self;
                    if(self && !__freed_obj__) { come_call_finalizer(tuple4$4voidpvoidpvoidpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result33__;
                    if(self && !__freed_obj__) { come_call_finalizer(tuple4$4voidpvoidpvoidpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void tuple4$4voidpvoidpvoidpboolp_finalize(struct tuple4$4voidpvoidpvoidpbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct optional$2tuple4$4voidpvoidpvoidpboolphbool* optional$2tuple4$4voidpvoidpvoidpboolphbool_initialize(struct optional$2tuple4$4voidpvoidpvoidpboolphbool* self, struct tuple4$4voidpvoidpvoidpbool* v1, _Bool v2){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct tuple4$4voidpvoidpvoidpbool* __dec_obj8;
struct optional$2tuple4$4voidpvoidpvoidpboolphbool* __result34__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    __dec_obj8=self->v1;
                    self->v1=(struct tuple4$4voidpvoidpvoidpbool*)come_increment_ref_count(v1);
                    if(__dec_obj8) { come_call_finalizer(tuple4$4voidpvoidpvoidpbool_finalize,__dec_obj8, (void*)0, (void*)0, 0, 0, 0, 0); }
                    self->v2=v2;
                    __result34__ = __result_obj__ = self;
                    if(self && !__freed_obj__) { come_call_finalizer(optional$2tuple4$4voidpvoidpvoidpboolphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    if(v1 && !__freed_obj__) { come_call_finalizer(tuple4$4voidpvoidpvoidpboolp_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result34__;
                    if(self && !__freed_obj__) { come_call_finalizer(optional$2tuple4$4voidpvoidpvoidpboolphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    if(v1 && !__freed_obj__) { come_call_finalizer(tuple4$4voidpvoidpvoidpboolp_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void tuple4$4voidpvoidpvoidpbool_finalize(struct tuple4$4voidpvoidpvoidpbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static void optional$2tuple4$4voidpvoidpvoidpboolphboolp_finalize(struct optional$2tuple4$4voidpvoidpvoidpboolphbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional51;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional51=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional51) {
                            if(self->v1 && !__freed_obj__) { come_call_finalizer(tuple4$4voidpvoidpvoidpboolp_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional52;
void* right_value35;
struct list_item$1sTypeph* litem_35;
struct sType* __dec_obj9;
_Bool _if_conditional53;
void* right_value36;
struct list_item$1sTypeph* litem_36;
struct sType* __dec_obj10;
void* right_value37;
struct list_item$1sTypeph* litem_37;
struct sType* __dec_obj11;
struct list$1sTypeph* __result36__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value35, 0, sizeof(void*));
memset(&litem_35, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value36, 0, sizeof(void*));
memset(&litem_36, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value37, 0, sizeof(void*));
memset(&litem_37, 0, sizeof(struct list_item$1sTypeph*));
                if(_if_conditional52=self->len==0,                _if_conditional52) {
                    litem_35=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value35=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 283))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value35);
                    if(right_value35 && right_value35 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value35, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value35;
                    __freed_obj__ = 0;
                    litem_35->prev=((void*)0);
                    litem_35->next=((void*)0);
                    __dec_obj9=litem_35->item;
                    litem_35->item=(struct sType*)come_increment_ref_count(item);
                    if(__dec_obj9) { come_call_finalizer(sType_finalize,__dec_obj9, (void*)0, (void*)0, 0, 0, 0, 0); }
                    self->tail=litem_35;
                    self->head=litem_35;
                }
                else {
                    if(_if_conditional53=self->len==1,                    _if_conditional53) {
                        litem_36=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value36=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 293))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value36);
                        if(right_value36 && right_value36 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value36, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value36;
                        __freed_obj__ = 0;
                        litem_36->prev=self->head;
                        litem_36->next=((void*)0);
                        __dec_obj10=litem_36->item;
                        litem_36->item=(struct sType*)come_increment_ref_count(item);
                        if(__dec_obj10) { come_call_finalizer(sType_finalize,__dec_obj10, (void*)0, (void*)0, 0, 0, 0, 0); }
                        self->tail=litem_36;
                        self->head->next=litem_36;
                    }
                    else {
                        litem_37=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value37=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 303))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value37);
                        if(right_value37 && right_value37 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value37, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value37;
                        __freed_obj__ = 0;
                        litem_37->prev=self->tail;
                        litem_37->next=((void*)0);
                        __dec_obj11=litem_37->item;
                        litem_37->item=(struct sType*)come_increment_ref_count(item);
                        if(__dec_obj11) { come_call_finalizer(sType_finalize,__dec_obj11, (void*)0, (void*)0, 0, 0, 0, 0); }
                        self->tail->next=litem_37;
                        self->tail=litem_37;
                    }
                }
                self->len++;
                __result36__ = __result_obj__ = self;
                if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result36__;
                if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct sType* sType_clone(struct sType* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional54;
struct sType* __result37__;
void* right_value38;
struct sType* result_38;
_Bool _if_conditional55;
_Bool _if_conditional56;
void* right_value41;
struct tuple1$1sTypeph* __dec_obj13;
_Bool _if_conditional60;
void* right_value42;
struct tuple1$1sTypeph* __dec_obj14;
_Bool _if_conditional61;
void* right_value43;
char* __dec_obj15;
_Bool _if_conditional62;
void* right_value50;
struct list$1sTypeph* __dec_obj19;
_Bool _if_conditional66;
void* right_value58;
struct list$1sNodeph* __dec_obj23;
_Bool _if_conditional79;
_Bool _if_conditional80;
void* right_value59;
struct list$1sTypeph* __dec_obj24;
_Bool _if_conditional81;
void* right_value66;
struct list$1charph* __dec_obj28;
_Bool _if_conditional85;
void* right_value67;
struct tuple1$1sTypeph* __dec_obj29;
_Bool _if_conditional86;
_Bool _if_conditional87;
void* right_value68;
struct sNode* __dec_obj30;
_Bool _if_conditional88;
_Bool _if_conditional89;
_Bool _if_conditional90;
_Bool _if_conditional91;
_Bool _if_conditional92;
_Bool _if_conditional93;
_Bool _if_conditional94;
_Bool _if_conditional95;
_Bool _if_conditional96;
_Bool _if_conditional97;
_Bool _if_conditional98;
_Bool _if_conditional99;
_Bool _if_conditional100;
_Bool _if_conditional101;
_Bool _if_conditional102;
_Bool _if_conditional103;
_Bool _if_conditional104;
_Bool _if_conditional105;
_Bool _if_conditional106;
_Bool _if_conditional107;
_Bool _if_conditional108;
_Bool _if_conditional109;
_Bool _if_conditional110;
_Bool _if_conditional111;
void* right_value69;
struct sNode* __dec_obj31;
_Bool _if_conditional112;
_Bool _if_conditional113;
_Bool _if_conditional114;
void* right_value70;
char* __dec_obj32;
_Bool _if_conditional115;
_Bool _if_conditional116;
_Bool _if_conditional117;
_Bool _if_conditional118;
_Bool _if_conditional119;
_Bool _if_conditional120;
_Bool _if_conditional121;
_Bool _if_conditional122;
_Bool _if_conditional123;
void* right_value71;
char* __dec_obj33;
struct sType* __result52__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value38, 0, sizeof(void*));
memset(&result_38, 0, sizeof(struct sType*));
memset(&right_value41, 0, sizeof(void*));
memset(&right_value42, 0, sizeof(void*));
memset(&right_value43, 0, sizeof(void*));
memset(&right_value50, 0, sizeof(void*));
memset(&right_value58, 0, sizeof(void*));
memset(&right_value59, 0, sizeof(void*));
memset(&right_value66, 0, sizeof(void*));
memset(&right_value67, 0, sizeof(void*));
memset(&right_value68, 0, sizeof(void*));
memset(&right_value69, 0, sizeof(void*));
memset(&right_value70, 0, sizeof(void*));
memset(&right_value71, 0, sizeof(void*));
                if(_if_conditional54=self==(void*)0,                _if_conditional54) {
                    __result37__ = __result_obj__ = (void*)0;
                    return __result37__;
                }
                result_38=(struct sType*)come_increment_ref_count(((struct sType*)(right_value38=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value38);
                if(right_value38 && right_value38 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value38, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value38;
                __freed_obj__ = 0;
                if(_if_conditional55=self!=((void*)0),                _if_conditional55) {
                    result_38->mClass=self->mClass;
                }
                if(_if_conditional56=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                _if_conditional56) {
                    __dec_obj13=result_38->mNoSolvedGenericsType;
                    result_38->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value41=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
                    if(__dec_obj13) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj13, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value41);
                    if(right_value41 && right_value41 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value41, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value41;
                    __freed_obj__ = 0;
                }
                if(_if_conditional60=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                _if_conditional60) {
                    __dec_obj14=result_38->mOriginalLoadVarType;
                    result_38->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value42=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
                    if(__dec_obj14) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj14, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value42);
                    if(right_value42 && right_value42 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value42, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value42;
                    __freed_obj__ = 0;
                }
                if(_if_conditional61=self!=((void*)0)&&self->mGenericsName!=((void*)0),                _if_conditional61) {
                    __dec_obj15=result_38->mGenericsName;
                    result_38->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value43=string_clone(self->mGenericsName))));
                    if(__dec_obj15) { __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value43);
                    if(right_value43 && right_value43 != __result_obj__ && !__freed_obj__) { right_value43 = come_decrement_ref_count(right_value43, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value43;
                    __freed_obj__ = 0;
                }
                if(_if_conditional62=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                _if_conditional62) {
                    __dec_obj19=result_38->mGenericsTypes;
                    result_38->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value50=list$1sTypephp_clone(self->mGenericsTypes))));
                    if(__dec_obj19) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj19, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value50);
                    if(right_value50 && right_value50 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value50, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value50;
                    __freed_obj__ = 0;
                }
                if(_if_conditional66=self!=((void*)0)&&self->mArrayNum!=((void*)0),                _if_conditional66) {
                    __dec_obj23=result_38->mArrayNum;
                    result_38->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value58=list$1sNodephp_clone(self->mArrayNum))));
                    if(__dec_obj23) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj23, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value58);
                    if(right_value58 && right_value58 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value58, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value58;
                    __freed_obj__ = 0;
                }
                if(_if_conditional79=self!=((void*)0),                _if_conditional79) {
                    result_38->mOmitArrayNum=self->mOmitArrayNum;
                }
                if(_if_conditional80=self!=((void*)0)&&self->mParamTypes!=((void*)0),                _if_conditional80) {
                    __dec_obj24=result_38->mParamTypes;
                    result_38->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value59=list$1sTypephp_clone(self->mParamTypes))));
                    if(__dec_obj24) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj24, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value59);
                    if(right_value59 && right_value59 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value59, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value59;
                    __freed_obj__ = 0;
                }
                if(_if_conditional81=self!=((void*)0)&&self->mParamNames!=((void*)0),                _if_conditional81) {
                    __dec_obj28=result_38->mParamNames;
                    result_38->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value66=list$1charphp_clone(self->mParamNames))));
                    if(__dec_obj28) { come_call_finalizer(list$1charph_finalize,__dec_obj28, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value66);
                    if(right_value66 && right_value66 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value66, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value66;
                    __freed_obj__ = 0;
                }
                if(_if_conditional85=self!=((void*)0)&&self->mResultType!=((void*)0),                _if_conditional85) {
                    __dec_obj29=result_38->mResultType;
                    result_38->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value67=tuple1$1sTypephp_clone(self->mResultType))));
                    if(__dec_obj29) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj29, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value67);
                    if(right_value67 && right_value67 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value67, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value67;
                    __freed_obj__ = 0;
                }
                if(_if_conditional86=self!=((void*)0),                _if_conditional86) {
                    result_38->mVarArgs=self->mVarArgs;
                }
                if(_if_conditional87=self!=((void*)0)&&self->mAlignas!=((void*)0),                _if_conditional87) {
                    __dec_obj30=result_38->mAlignas;
                    result_38->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value68=sNode_clone(self->mAlignas))));
                    if(__dec_obj30) { __dec_obj30 = come_decrement_ref_count(__dec_obj30, ((struct sNode*)__dec_obj30)->finalize, ((struct sNode*)__dec_obj30)->_protocol_obj, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value68);
                    if(right_value68 && right_value68 != __result_obj__ && !__freed_obj__) { right_value68 = come_decrement_ref_count(right_value68, ((struct sNode*)right_value68)->finalize, ((struct sNode*)right_value68)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value68;
                    __freed_obj__ = 0;
                }
                if(_if_conditional88=self!=((void*)0),                _if_conditional88) {
                    result_38->mUnsigned=self->mUnsigned;
                }
                if(_if_conditional89=self!=((void*)0),                _if_conditional89) {
                    result_38->mShort=self->mShort;
                }
                if(_if_conditional90=self!=((void*)0),                _if_conditional90) {
                    result_38->mLong=self->mLong;
                }
                if(_if_conditional91=self!=((void*)0),                _if_conditional91) {
                    result_38->mLongLong=self->mLongLong;
                }
                if(_if_conditional92=self!=((void*)0),                _if_conditional92) {
                    result_38->mConstant=self->mConstant;
                }
                if(_if_conditional93=self!=((void*)0),                _if_conditional93) {
                    result_38->mRegister=self->mRegister;
                }
                if(_if_conditional94=self!=((void*)0),                _if_conditional94) {
                    result_38->mVolatile=self->mVolatile;
                }
                if(_if_conditional95=self!=((void*)0),                _if_conditional95) {
                    result_38->mStatic=self->mStatic;
                }
                if(_if_conditional96=self!=((void*)0),                _if_conditional96) {
                    result_38->mExtern=self->mExtern;
                }
                if(_if_conditional97=self!=((void*)0),                _if_conditional97) {
                    result_38->mRestrict=self->mRestrict;
                }
                if(_if_conditional98=self!=((void*)0),                _if_conditional98) {
                    result_38->mImmutable=self->mImmutable;
                }
                if(_if_conditional99=self!=((void*)0),                _if_conditional99) {
                    result_38->mHeap=self->mHeap;
                }
                if(_if_conditional100=self!=((void*)0),                _if_conditional100) {
                    result_38->mDummyHeap=self->mDummyHeap;
                }
                if(_if_conditional101=self!=((void*)0),                _if_conditional101) {
                    result_38->mDelegate=self->mDelegate;
                }
                if(_if_conditional102=self!=((void*)0),                _if_conditional102) {
                    result_38->mShare=self->mShare;
                }
                if(_if_conditional103=self!=((void*)0),                _if_conditional103) {
                    result_38->mClone=self->mClone;
                }
                if(_if_conditional104=self!=((void*)0),                _if_conditional104) {
                    result_38->mNoHeap=self->mNoHeap;
                }
                if(_if_conditional105=self!=((void*)0),                _if_conditional105) {
                    result_38->mNoCallingDestructor=self->mNoCallingDestructor;
                }
                if(_if_conditional106=self!=((void*)0),                _if_conditional106) {
                    result_38->mRefference=self->mRefference;
                }
                if(_if_conditional107=self!=((void*)0),                _if_conditional107) {
                    result_38->mException=self->mException;
                }
                if(_if_conditional108=self!=((void*)0),                _if_conditional108) {
                    result_38->mPointerNum=self->mPointerNum;
                }
                if(_if_conditional109=self!=((void*)0),                _if_conditional109) {
                    result_38->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
                }
                if(_if_conditional110=self!=((void*)0),                _if_conditional110) {
                    result_38->mNoArrayPointerNum=self->mNoArrayPointerNum;
                }
                if(_if_conditional111=self!=((void*)0)&&self->mSizeNum!=((void*)0),                _if_conditional111) {
                    __dec_obj31=result_38->mSizeNum;
                    result_38->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value69=sNode_clone(self->mSizeNum))));
                    if(__dec_obj31) { __dec_obj31 = come_decrement_ref_count(__dec_obj31, ((struct sNode*)__dec_obj31)->finalize, ((struct sNode*)__dec_obj31)->_protocol_obj, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value69);
                    if(right_value69 && right_value69 != __result_obj__ && !__freed_obj__) { right_value69 = come_decrement_ref_count(right_value69, ((struct sNode*)right_value69)->finalize, ((struct sNode*)right_value69)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value69;
                    __freed_obj__ = 0;
                }
                if(_if_conditional112=self!=((void*)0),                _if_conditional112) {
                    result_38->mDynamicArrayNum=self->mDynamicArrayNum;
                }
                if(_if_conditional113=self!=((void*)0),                _if_conditional113) {
                    result_38->mTypeOfExpression=self->mTypeOfExpression;
                }
                if(_if_conditional114=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                _if_conditional114) {
                    __dec_obj32=result_38->mOriginalTypeName;
                    result_38->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value70=string_clone(self->mOriginalTypeName))));
                    if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count(__dec_obj32, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value70);
                    if(right_value70 && right_value70 != __result_obj__ && !__freed_obj__) { right_value70 = come_decrement_ref_count(right_value70, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value70;
                    __freed_obj__ = 0;
                }
                if(_if_conditional115=self!=((void*)0),                _if_conditional115) {
                    result_38->mOriginalPointerNum=self->mOriginalPointerNum;
                }
                if(_if_conditional116=self!=((void*)0),                _if_conditional116) {
                    result_38->mFunctionParam=self->mFunctionParam;
                }
                if(_if_conditional117=self!=((void*)0),                _if_conditional117) {
                    result_38->mAllocaValue=self->mAllocaValue;
                }
                if(_if_conditional118=self!=((void*)0),                _if_conditional118) {
                    result_38->mGenericsStruct=self->mGenericsStruct;
                }
                if(_if_conditional119=self!=((void*)0),                _if_conditional119) {
                    result_38->mSolvedGenericsName=self->mSolvedGenericsName;
                }
                if(_if_conditional120=self!=((void*)0),                _if_conditional120) {
                    result_38->mComeMemCore=self->mComeMemCore;
                }
                if(_if_conditional121=self!=((void*)0),                _if_conditional121) {
                    result_38->mInline=self->mInline;
                }
                if(_if_conditional122=self!=((void*)0),                _if_conditional122) {
                    result_38->mNullValue=self->mNullValue;
                }
                if(_if_conditional123=self!=((void*)0)&&self->mAsmName!=((void*)0),                _if_conditional123) {
                    __dec_obj33=result_38->mAsmName;
                    result_38->mAsmName=(char*)come_increment_ref_count(((char*)(right_value71=string_clone(self->mAsmName))));
                    if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count(__dec_obj33, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value71);
                    if(right_value71 && right_value71 != __result_obj__ && !__freed_obj__) { right_value71 = come_decrement_ref_count(right_value71, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value71;
                    __freed_obj__ = 0;
                }
                __result52__ = __result_obj__ = result_38;
                if(result_38 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_38, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result52__;
                if(result_38 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_38, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional57;
struct tuple1$1sTypeph* __result38__;
void* right_value39;
struct tuple1$1sTypeph* result_39;
_Bool _if_conditional59;
void* right_value40;
struct sType* __dec_obj12;
struct tuple1$1sTypeph* __result39__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value39, 0, sizeof(void*));
memset(&result_39, 0, sizeof(struct tuple1$1sTypeph*));
memset(&right_value40, 0, sizeof(void*));
                        if(_if_conditional57=self==(void*)0,                        _if_conditional57) {
                            __result38__ = __result_obj__ = (void*)0;
                            return __result38__;
                        }
                        result_39=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value39=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value39);
                        if(right_value39 && right_value39 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,right_value39, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value39;
                        __freed_obj__ = 0;
                        if(_if_conditional59=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional59) {
                            __dec_obj12=result_39->v1;
                            result_39->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value40=sType_clone(self->v1))));
                            if(__dec_obj12) { come_call_finalizer(sType_finalize,__dec_obj12, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value40);
                            if(right_value40 && right_value40 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value40, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value40;
                            __freed_obj__ = 0;
                        }
                        __result39__ = __result_obj__ = result_39;
                        if(result_39 && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,result_39, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result39__;
                        if(result_39 && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,result_39, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional58;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional58=self!=((void*)0)&&self->v1!=((void*)0),                            _if_conditional58) {
                                if(self->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional63;
struct list$1sTypeph* __result40__;
void* right_value44;
void* right_value45;
struct list$1sTypeph* result_40;
struct list_item$1sTypeph* it_41;
_Bool _while_condtional19;
void* right_value49;
struct list$1sTypeph* __result42__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value44, 0, sizeof(void*));
memset(&right_value45, 0, sizeof(void*));
memset(&result_40, 0, sizeof(struct list$1sTypeph*));
memset(&it_41, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value49, 0, sizeof(void*));
                        if(_if_conditional63=self==((void*)0),                        _if_conditional63) {
                            __result40__ = __result_obj__ = ((void*)0);
                            return __result40__;
                        }
                        result_40=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value45=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value44=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 199))))))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value44);
                        if(right_value44 && right_value44 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value44, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value44;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value45);
                        if(right_value45 && right_value45 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value45, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value45;
                        __freed_obj__ = 0;
                        it_41=self->head;
                        while(_while_condtional19=it_41!=((void*)0),                        _while_condtional19) {
                            list$1sTypeph_add(result_40,(struct sType*)come_increment_ref_count(((struct sType*)(right_value49=sType_clone(it_41->item)))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value49);
                            if(right_value49 && right_value49 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value49, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value49;
                            __freed_obj__ = 0;
                            it_41=it_41->next;
                        }
                        __result42__ = __result_obj__ = result_40;
                        if(result_40 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,result_40, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result42__;
                        if(result_40 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,result_40, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional64;
void* right_value46;
struct list_item$1sTypeph* litem_42;
struct sType* __dec_obj16;
_Bool _if_conditional65;
void* right_value47;
struct list_item$1sTypeph* litem_43;
struct sType* __dec_obj17;
void* right_value48;
struct list_item$1sTypeph* litem_44;
struct sType* __dec_obj18;
struct list$1sTypeph* __result41__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value46, 0, sizeof(void*));
memset(&litem_42, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value47, 0, sizeof(void*));
memset(&litem_43, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value48, 0, sizeof(void*));
memset(&litem_44, 0, sizeof(struct list_item$1sTypeph*));
                                if(_if_conditional64=self->len==0,                                _if_conditional64) {
                                    litem_42=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value46=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 213))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value46);
                                    if(right_value46 && right_value46 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value46, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value46;
                                    __freed_obj__ = 0;
                                    litem_42->prev=((void*)0);
                                    litem_42->next=((void*)0);
                                    __dec_obj16=litem_42->item;
                                    litem_42->item=(struct sType*)come_increment_ref_count(item);
                                    if(__dec_obj16) { come_call_finalizer(sType_finalize,__dec_obj16, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    self->tail=litem_42;
                                    self->head=litem_42;
                                }
                                else {
                                    if(_if_conditional65=self->len==1,                                    _if_conditional65) {
                                        litem_43=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value47=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 223))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value47);
                                        if(right_value47 && right_value47 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value47, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value47;
                                        __freed_obj__ = 0;
                                        litem_43->prev=self->head;
                                        litem_43->next=((void*)0);
                                        __dec_obj17=litem_43->item;
                                        litem_43->item=(struct sType*)come_increment_ref_count(item);
                                        if(__dec_obj17) { come_call_finalizer(sType_finalize,__dec_obj17, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        self->tail=litem_43;
                                        self->head->next=litem_43;
                                    }
                                    else {
                                        litem_44=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value48=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 233))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value48);
                                        if(right_value48 && right_value48 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value48, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value48;
                                        __freed_obj__ = 0;
                                        litem_44->prev=self->tail;
                                        litem_44->next=((void*)0);
                                        __dec_obj18=litem_44->item;
                                        litem_44->item=(struct sType*)come_increment_ref_count(item);
                                        if(__dec_obj18) { come_call_finalizer(sType_finalize,__dec_obj18, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        self->tail->next=litem_44;
                                        self->tail=litem_44;
                                    }
                                }
                                self->len++;
                                __result41__ = __result_obj__ = self;
                                if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                                return __result41__;
                                if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional67;
struct list$1sNodeph* __result43__;
void* right_value51;
void* right_value52;
struct list$1sNodeph* result_45;
struct list_item$1sNodeph* it_46;
_Bool _while_condtional20;
void* right_value57;
struct list$1sNodeph* __result48__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value51, 0, sizeof(void*));
memset(&right_value52, 0, sizeof(void*));
memset(&result_45, 0, sizeof(struct list$1sNodeph*));
memset(&it_46, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value57, 0, sizeof(void*));
                        if(_if_conditional67=self==((void*)0),                        _if_conditional67) {
                            __result43__ = __result_obj__ = ((void*)0);
                            return __result43__;
                        }
                        result_45=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value52=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value51=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 199))))))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value51);
                        if(right_value51 && right_value51 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value51, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value51;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value52);
                        if(right_value52 && right_value52 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value52, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value52;
                        __freed_obj__ = 0;
                        it_46=self->head;
                        while(_while_condtional20=it_46!=((void*)0),                        _while_condtional20) {
                            list$1sNodeph_add(result_45,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value57=sNode_clone(it_46->item)))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value57);
                            if(right_value57 && right_value57 != __result_obj__ && !__freed_obj__) { right_value57 = come_decrement_ref_count(right_value57, ((struct sNode*)right_value57)->finalize, ((struct sNode*)right_value57)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[0] = right_value57;
                            __freed_obj__ = 0;
                            it_46=it_46->next;
                        }
                        __result48__ = __result_obj__ = result_45;
                        if(result_45 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,result_45, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result48__;
                        if(result_45 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,result_45, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1sNodeph* __result44__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            self->head=((void*)0);
                            self->tail=((void*)0);
                            self->len=0;
                            __result44__ = __result_obj__ = self;
                            if(self && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                            return __result44__;
                            if(self && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional68;
void* right_value53;
struct list_item$1sNodeph* litem_47;
struct sNode* __dec_obj20;
_Bool _if_conditional69;
void* right_value54;
struct list_item$1sNodeph* litem_48;
struct sNode* __dec_obj21;
void* right_value55;
struct list_item$1sNodeph* litem_49;
struct sNode* __dec_obj22;
struct list$1sNodeph* __result45__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value53, 0, sizeof(void*));
memset(&litem_47, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value54, 0, sizeof(void*));
memset(&litem_48, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value55, 0, sizeof(void*));
memset(&litem_49, 0, sizeof(struct list_item$1sNodeph*));
                                if(_if_conditional68=self->len==0,                                _if_conditional68) {
                                    litem_47=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value53=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 213))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value53);
                                    if(right_value53 && right_value53 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value53, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value53;
                                    __freed_obj__ = 0;
                                    litem_47->prev=((void*)0);
                                    litem_47->next=((void*)0);
                                    __dec_obj20=litem_47->item;
                                    litem_47->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj20) { __dec_obj20 = come_decrement_ref_count(__dec_obj20, ((struct sNode*)__dec_obj20)->finalize, ((struct sNode*)__dec_obj20)->_protocol_obj, 0,0,0); }
                                    self->tail=litem_47;
                                    self->head=litem_47;
                                }
                                else {
                                    if(_if_conditional69=self->len==1,                                    _if_conditional69) {
                                        litem_48=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value54=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 223))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value54);
                                        if(right_value54 && right_value54 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value54, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value54;
                                        __freed_obj__ = 0;
                                        litem_48->prev=self->head;
                                        litem_48->next=((void*)0);
                                        __dec_obj21=litem_48->item;
                                        litem_48->item=(struct sNode*)come_increment_ref_count(item);
                                        if(__dec_obj21) { __dec_obj21 = come_decrement_ref_count(__dec_obj21, ((struct sNode*)__dec_obj21)->finalize, ((struct sNode*)__dec_obj21)->_protocol_obj, 0,0,0); }
                                        self->tail=litem_48;
                                        self->head->next=litem_48;
                                    }
                                    else {
                                        litem_49=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value55=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 233))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value55);
                                        if(right_value55 && right_value55 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value55, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value55;
                                        __freed_obj__ = 0;
                                        litem_49->prev=self->tail;
                                        litem_49->next=((void*)0);
                                        __dec_obj22=litem_49->item;
                                        litem_49->item=(struct sNode*)come_increment_ref_count(item);
                                        if(__dec_obj22) { __dec_obj22 = come_decrement_ref_count(__dec_obj22, ((struct sNode*)__dec_obj22)->finalize, ((struct sNode*)__dec_obj22)->_protocol_obj, 0,0,0); }
                                        self->tail->next=litem_49;
                                        self->tail=litem_49;
                                    }
                                }
                                self->len++;
                                __result45__ = __result_obj__ = self;
                                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
                                return __result45__;
                                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional70;
struct sNode* __result46__;
void* right_value56;
struct sNode* result_50;
_Bool _if_conditional71;
_Bool _if_conditional72;
_Bool _if_conditional73;
_Bool _if_conditional74;
_Bool _if_conditional75;
_Bool _if_conditional76;
_Bool _if_conditional77;
_Bool _if_conditional78;
struct sNode* __result47__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value56, 0, sizeof(void*));
memset(&result_50, 0, sizeof(struct sNode*));
                                if(_if_conditional70=self==(void*)0,                                _if_conditional70) {
                                    __result46__ = __result_obj__ = (void*)0;
                                    return __result46__;
                                }
                                result_50=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value56=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value56);
                                if(right_value56 && right_value56 != __result_obj__ && !__freed_obj__) { right_value56 = come_decrement_ref_count(right_value56, ((struct sNode*)right_value56)->finalize, ((struct sNode*)right_value56)->_protocol_obj, 1, 0, 0); } 
                                __right_value_freed_obj[0] = right_value56;
                                __freed_obj__ = 0;
                                if(_if_conditional71=self!=((void*)0)&&self->clone!=((void*)0),                                _if_conditional71) {
                                    result_50->_protocol_obj=self->clone(self->_protocol_obj);
                                }
                                if(_if_conditional72=self!=((void*)0),                                _if_conditional72) {
                                    result_50->finalize=self->finalize;
                                }
                                if(_if_conditional73=self!=((void*)0),                                _if_conditional73) {
                                    result_50->clone=self->clone;
                                }
                                if(_if_conditional74=self!=((void*)0),                                _if_conditional74) {
                                    result_50->compile=self->compile;
                                }
                                if(_if_conditional75=self!=((void*)0),                                _if_conditional75) {
                                    result_50->sline=self->sline;
                                }
                                if(_if_conditional76=self!=((void*)0),                                _if_conditional76) {
                                    result_50->sname=self->sname;
                                }
                                if(_if_conditional77=self!=((void*)0),                                _if_conditional77) {
                                    result_50->terminated=self->terminated;
                                }
                                if(_if_conditional78=self!=((void*)0),                                _if_conditional78) {
                                    result_50->kind=self->kind;
                                }
                                __result47__ = __result_obj__ = result_50;
                                if(result_50 && !__freed_obj__) { result_50 = come_decrement_ref_count(result_50, ((struct sNode*)result_50)->finalize, ((struct sNode*)result_50)->_protocol_obj, 0, 1, 0); } 
                                return __result47__;
                                if(result_50 && !__freed_obj__) { result_50 = come_decrement_ref_count(result_50, ((struct sNode*)result_50)->finalize, ((struct sNode*)result_50)->_protocol_obj, 0, 0, 0); } 
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional82;
struct list$1charph* __result49__;
void* right_value60;
void* right_value61;
struct list$1charph* result_51;
struct list_item$1charph* it_52;
_Bool _while_condtional21;
void* right_value65;
struct list$1charph* __result51__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value60, 0, sizeof(void*));
memset(&right_value61, 0, sizeof(void*));
memset(&result_51, 0, sizeof(struct list$1charph*));
memset(&it_52, 0, sizeof(struct list_item$1charph*));
memset(&right_value65, 0, sizeof(void*));
                        if(_if_conditional82=self==((void*)0),                        _if_conditional82) {
                            __result49__ = __result_obj__ = ((void*)0);
                            return __result49__;
                        }
                        result_51=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value61=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value60=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 199))))))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value60);
                        if(right_value60 && right_value60 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value60, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value60;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value61);
                        if(right_value61 && right_value61 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value61, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value61;
                        __freed_obj__ = 0;
                        it_52=self->head;
                        while(_while_condtional21=it_52!=((void*)0),                        _while_condtional21) {
                            list$1charph_add(result_51,(char*)come_increment_ref_count(((char*)(right_value65=string_clone(it_52->item)))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value65);
                            if(right_value65 && right_value65 != __result_obj__ && !__freed_obj__) { right_value65 = come_decrement_ref_count(right_value65, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value65;
                            __freed_obj__ = 0;
                            it_52=it_52->next;
                        }
                        __result51__ = __result_obj__ = result_51;
                        if(result_51 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_51, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result51__;
                        if(result_51 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_51, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional83;
void* right_value62;
struct list_item$1charph* litem_53;
char* __dec_obj25;
_Bool _if_conditional84;
void* right_value63;
struct list_item$1charph* litem_54;
char* __dec_obj26;
void* right_value64;
struct list_item$1charph* litem_55;
char* __dec_obj27;
struct list$1charph* __result50__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value62, 0, sizeof(void*));
memset(&litem_53, 0, sizeof(struct list_item$1charph*));
memset(&right_value63, 0, sizeof(void*));
memset(&litem_54, 0, sizeof(struct list_item$1charph*));
memset(&right_value64, 0, sizeof(void*));
memset(&litem_55, 0, sizeof(struct list_item$1charph*));
                                if(_if_conditional83=self->len==0,                                _if_conditional83) {
                                    litem_53=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value62=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 213))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value62);
                                    if(right_value62 && right_value62 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value62, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value62;
                                    __freed_obj__ = 0;
                                    litem_53->prev=((void*)0);
                                    litem_53->next=((void*)0);
                                    __dec_obj25=litem_53->item;
                                    litem_53->item=(char*)come_increment_ref_count(item);
                                    if(__dec_obj25) { __dec_obj25 = come_decrement_ref_count(__dec_obj25, (void*)0, (void*)0, 0,0,0); }
                                    self->tail=litem_53;
                                    self->head=litem_53;
                                }
                                else {
                                    if(_if_conditional84=self->len==1,                                    _if_conditional84) {
                                        litem_54=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value63=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 223))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value63);
                                        if(right_value63 && right_value63 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value63, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value63;
                                        __freed_obj__ = 0;
                                        litem_54->prev=self->head;
                                        litem_54->next=((void*)0);
                                        __dec_obj26=litem_54->item;
                                        litem_54->item=(char*)come_increment_ref_count(item);
                                        if(__dec_obj26) { __dec_obj26 = come_decrement_ref_count(__dec_obj26, (void*)0, (void*)0, 0,0,0); }
                                        self->tail=litem_54;
                                        self->head->next=litem_54;
                                    }
                                    else {
                                        litem_55=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value64=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 233))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value64);
                                        if(right_value64 && right_value64 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value64, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value64;
                                        __freed_obj__ = 0;
                                        litem_55->prev=self->tail;
                                        litem_55->next=((void*)0);
                                        __dec_obj27=litem_55->item;
                                        litem_55->item=(char*)come_increment_ref_count(item);
                                        if(__dec_obj27) { __dec_obj27 = come_decrement_ref_count(__dec_obj27, (void*)0, (void*)0, 0,0,0); }
                                        self->tail->next=litem_55;
                                        self->tail=litem_55;
                                    }
                                }
                                self->len++;
                                __result50__ = __result_obj__ = self;
                                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
                                return __result50__;
                                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
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

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional124;
void* right_value73;
struct list_item$1charph* litem_56;
char* __dec_obj34;
_Bool _if_conditional125;
void* right_value74;
struct list_item$1charph* litem_57;
char* __dec_obj35;
void* right_value75;
struct list_item$1charph* litem_58;
char* __dec_obj36;
struct list$1charph* __result53__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value73, 0, sizeof(void*));
memset(&litem_56, 0, sizeof(struct list_item$1charph*));
memset(&right_value74, 0, sizeof(void*));
memset(&litem_57, 0, sizeof(struct list_item$1charph*));
memset(&right_value75, 0, sizeof(void*));
memset(&litem_58, 0, sizeof(struct list_item$1charph*));
                if(_if_conditional124=self->len==0,                _if_conditional124) {
                    litem_56=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value73=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 283))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value73);
                    if(right_value73 && right_value73 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value73, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value73;
                    __freed_obj__ = 0;
                    litem_56->prev=((void*)0);
                    litem_56->next=((void*)0);
                    __dec_obj34=litem_56->item;
                    litem_56->item=(char*)come_increment_ref_count(item);
                    if(__dec_obj34) { __dec_obj34 = come_decrement_ref_count(__dec_obj34, (void*)0, (void*)0, 0,0,0); }
                    self->tail=litem_56;
                    self->head=litem_56;
                }
                else {
                    if(_if_conditional125=self->len==1,                    _if_conditional125) {
                        litem_57=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value74=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 293))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value74);
                        if(right_value74 && right_value74 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value74, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value74;
                        __freed_obj__ = 0;
                        litem_57->prev=self->head;
                        litem_57->next=((void*)0);
                        __dec_obj35=litem_57->item;
                        litem_57->item=(char*)come_increment_ref_count(item);
                        if(__dec_obj35) { __dec_obj35 = come_decrement_ref_count(__dec_obj35, (void*)0, (void*)0, 0,0,0); }
                        self->tail=litem_57;
                        self->head->next=litem_57;
                    }
                    else {
                        litem_58=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value75=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 303))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value75);
                        if(right_value75 && right_value75 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value75;
                        __freed_obj__ = 0;
                        litem_58->prev=self->tail;
                        litem_58->next=((void*)0);
                        __dec_obj36=litem_58->item;
                        litem_58->item=(char*)come_increment_ref_count(item);
                        if(__dec_obj36) { __dec_obj36 = come_decrement_ref_count(__dec_obj36, (void*)0, (void*)0, 0,0,0); }
                        self->tail->next=litem_58;
                        self->tail=litem_58;
                    }
                }
                self->len++;
                __result53__ = __result_obj__ = self;
                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
                return __result53__;
                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
}

static struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool_initialize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self, struct list$1sTypeph* v1, struct list$1charph* v2, struct list$1charph* v3, _Bool v4){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value84;
struct list$1sTypeph* __dec_obj37;
void* right_value88;
struct list$1charph* __dec_obj38;
void* right_value89;
struct list$1charph* __dec_obj39;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value84, 0, sizeof(void*));
memset(&right_value88, 0, sizeof(void*));
memset(&right_value89, 0, sizeof(void*));
        __dec_obj37=self->v1;
        self->v1=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value84=list$1sTypeph_clone(v1))));
        if(__dec_obj37) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj37, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value84);
        if(right_value84 && right_value84 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value84, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value84;
        __freed_obj__ = 0;
        __dec_obj38=self->v2;
        self->v2=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value88=list$1charph_clone(v2))));
        if(__dec_obj38) { come_call_finalizer(list$1charph_finalize,__dec_obj38, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value88);
        if(right_value88 && right_value88 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value88, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value88;
        __freed_obj__ = 0;
        __dec_obj39=self->v3;
        self->v3=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value89=list$1charph_clone(v3))));
        if(__dec_obj39) { come_call_finalizer(list$1charph_finalize,__dec_obj39, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value89);
        if(right_value89 && right_value89 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value89, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value89;
        __freed_obj__ = 0;
        self->v4=v4;
        __result58__ = __result_obj__ = self;
        if(self && !__freed_obj__) { come_call_finalizer(tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        if(v1 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
        if(v2 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,v2, (void*)0, (void*)0, 0, 0, 1, 0); }
        if(v3 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,v3, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result58__;
        if(self && !__freed_obj__) { come_call_finalizer(tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        if(v1 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
        if(v2 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,v2, (void*)0, (void*)0, 0, 0, 1, 0); }
        if(v3 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,v3, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sTypeph* list$1sTypeph_clone(struct list$1sTypeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional130;
struct list$1sTypeph* __result54__;
void* right_value81;
void* right_value82;
struct list$1sTypeph* result_64;
struct list_item$1sTypeph* it_65;
_Bool _while_condtional22;
void* right_value83;
struct list$1sTypeph* __result55__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value81, 0, sizeof(void*));
memset(&right_value82, 0, sizeof(void*));
memset(&result_64, 0, sizeof(struct list$1sTypeph*));
memset(&it_65, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value83, 0, sizeof(void*));
            if(_if_conditional130=self==((void*)0),            _if_conditional130) {
                __result54__ = __result_obj__ = ((void*)0);
                return __result54__;
            }
            result_64=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value82=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value81=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 199))))))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value81);
            if(right_value81 && right_value81 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value81, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value81;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value82);
            if(right_value82 && right_value82 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value82, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value82;
            __freed_obj__ = 0;
            it_65=self->head;
            while(_while_condtional22=it_65!=((void*)0),            _while_condtional22) {
                list$1sTypeph_add(result_64,(struct sType*)come_increment_ref_count(((struct sType*)(right_value83=sType_clone(it_65->item)))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value83);
                if(right_value83 && right_value83 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value83, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value83;
                __freed_obj__ = 0;
                it_65=it_65->next;
            }
            __result55__ = __result_obj__ = result_64;
            if(result_64 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,result_64, (void*)0, (void*)0, 0, 0, 1, 0); }
            return __result55__;
            if(result_64 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,result_64, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1charph* list$1charph_clone(struct list$1charph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional131;
struct list$1charph* __result56__;
void* right_value85;
void* right_value86;
struct list$1charph* result_66;
struct list_item$1charph* it_67;
_Bool _while_condtional23;
void* right_value87;
struct list$1charph* __result57__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value85, 0, sizeof(void*));
memset(&right_value86, 0, sizeof(void*));
memset(&result_66, 0, sizeof(struct list$1charph*));
memset(&it_67, 0, sizeof(struct list_item$1charph*));
memset(&right_value87, 0, sizeof(void*));
            if(_if_conditional131=self==((void*)0),            _if_conditional131) {
                __result56__ = __result_obj__ = ((void*)0);
                return __result56__;
            }
            result_66=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value86=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value85=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 199))))))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value85);
            if(right_value85 && right_value85 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value85, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value85;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value86);
            if(right_value86 && right_value86 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value86, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value86;
            __freed_obj__ = 0;
            it_67=self->head;
            while(_while_condtional23=it_67!=((void*)0),            _while_condtional23) {
                list$1charph_add(result_66,(char*)come_increment_ref_count(((char*)(right_value87=string_clone(it_67->item)))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value87);
                if(right_value87 && right_value87 != __result_obj__ && !__freed_obj__) { right_value87 = come_decrement_ref_count(right_value87, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value87;
                __freed_obj__ = 0;
                it_67=it_67->next;
            }
            __result57__ = __result_obj__ = result_66;
            if(result_66 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_66, (void*)0, (void*)0, 0, 0, 1, 0); }
            return __result57__;
            if(result_66 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_66, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional132;
_Bool _if_conditional133;
_Bool _if_conditional134;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            if(_if_conditional132=self!=((void*)0)&&self->v1!=((void*)0),            _if_conditional132) {
                if(self->v1 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            if(_if_conditional133=self!=((void*)0)&&self->v2!=((void*)0),            _if_conditional133) {
                if(self->v2 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self->v2, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            if(_if_conditional134=self!=((void*)0)&&self->v3!=((void*)0),            _if_conditional134) {
                if(self->v3 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self->v3, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
}

static struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool* optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool_initialize(struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool* self, struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* v1, _Bool v2){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* __dec_obj40;
struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool* __result59__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __dec_obj40=self->v1;
        self->v1=(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_increment_ref_count(v1);
        if(__dec_obj40) { come_call_finalizer(tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool_finalize,__dec_obj40, (void*)0, (void*)0, 0, 0, 0, 0); }
        self->v2=v2;
        __result59__ = __result_obj__ = self;
        if(self && !__freed_obj__) { come_call_finalizer(optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        if(v1 && !__freed_obj__) { come_call_finalizer(tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result59__;
        if(self && !__freed_obj__) { come_call_finalizer(optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        if(v1 && !__freed_obj__) { come_call_finalizer(tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool_finalize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional135;
_Bool _if_conditional136;
_Bool _if_conditional137;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            if(_if_conditional135=self!=((void*)0)&&self->v1!=((void*)0),            _if_conditional135) {
                if(self->v1 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            if(_if_conditional136=self!=((void*)0)&&self->v2!=((void*)0),            _if_conditional136) {
                if(self->v2 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self->v2, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            if(_if_conditional137=self!=((void*)0)&&self->v3!=((void*)0),            _if_conditional137) {
                if(self->v3 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self->v3, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
}

static void optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphboolp_finalize(struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional138;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            if(_if_conditional138=self!=((void*)0)&&self->v1!=((void*)0),            _if_conditional138) {
                if(self->v1 && !__freed_obj__) { come_call_finalizer(tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
}

void check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value93;
struct sType* right_type2_68;
struct sType* left_no_solved_generics_type_69;
struct sType* right_no_solved_generics_type_70;
_Bool _if_conditional139;
_Bool _if_conditional140;
_Bool _if_conditional141;
int i_71;
_Bool _for_condtionalA2;
void* right_value98;
void* right_value99;
_Bool _if_conditional146;
_Bool _if_conditional147;
_Bool _if_conditional148;
_Bool _if_conditional149;
_Bool _if_conditional150;
_Bool _if_conditional151;
_Bool _if_conditional152;
_Bool _if_conditional153;
_Bool _if_conditional154;
_Bool _if_conditional155;
_Bool _if_conditional156;
_Bool _if_conditional157;
void* right_value100;
void* right_value101;
struct buffer* buf2_76;
void* right_value102;
void* right_value103;
void* right_value104;
void* right_value105;
void* right_value106;
char* __dec_obj42;
void* right_value107;
struct sType* __dec_obj43;
void* right_value108;
struct sType* __dec_obj44;
_Bool _if_conditional158;
_Bool _if_conditional159;
_Bool _if_conditional160;
_Bool _if_conditional161;
_Bool _if_conditional162;
_Bool _if_conditional163;
_Bool _if_conditional164;
void* right_value109;
char* method_name_77;
_Bool _if_conditional170;
struct sType* obj_type_81;
_Bool _if_conditional171;
struct sType* obj_type2_82;
void* right_value111;
void* right_value112;
char* __dec_obj45;
void* right_value113;
void* right_value114;
struct buffer* buf2_83;
void* right_value115;
void* right_value116;
struct sType* type_84;
void* right_value117;
void* right_value118;
char* __dec_obj46;
void* right_value119;
struct sType* __dec_obj47;
void* right_value120;
struct sType* __dec_obj48;
_Bool _if_conditional172;
_Bool _if_conditional173;
_Bool _if_conditional174;
_Bool _if_conditional175;
_Bool _if_conditional176;
_Bool _if_conditional177;
_Bool _if_conditional178;
_Bool _if_conditional179;
_Bool _if_conditional180;
_Bool _if_conditional181;
_Bool _if_conditional182;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value93, 0, sizeof(void*));
memset(&right_type2_68, 0, sizeof(struct sType*));
memset(&left_no_solved_generics_type_69, 0, sizeof(struct sType*));
memset(&right_no_solved_generics_type_70, 0, sizeof(struct sType*));
memset(&i_71, 0, sizeof(int));
memset(&right_value98, 0, sizeof(void*));
memset(&right_value99, 0, sizeof(void*));
memset(&right_value100, 0, sizeof(void*));
memset(&right_value101, 0, sizeof(void*));
memset(&buf2_76, 0, sizeof(struct buffer*));
memset(&right_value102, 0, sizeof(void*));
memset(&right_value103, 0, sizeof(void*));
memset(&right_value104, 0, sizeof(void*));
memset(&right_value105, 0, sizeof(void*));
memset(&right_value106, 0, sizeof(void*));
memset(&right_value107, 0, sizeof(void*));
memset(&right_value108, 0, sizeof(void*));
memset(&right_value109, 0, sizeof(void*));
memset(&method_name_77, 0, sizeof(char*));
memset(&obj_type_81, 0, sizeof(struct sType*));
memset(&obj_type2_82, 0, sizeof(struct sType*));
memset(&right_value111, 0, sizeof(void*));
memset(&right_value112, 0, sizeof(void*));
memset(&right_value113, 0, sizeof(void*));
memset(&right_value114, 0, sizeof(void*));
memset(&buf2_83, 0, sizeof(struct buffer*));
memset(&right_value115, 0, sizeof(void*));
memset(&right_value116, 0, sizeof(void*));
memset(&type_84, 0, sizeof(struct sType*));
memset(&right_value117, 0, sizeof(void*));
memset(&right_value118, 0, sizeof(void*));
memset(&right_value119, 0, sizeof(void*));
memset(&right_value120, 0, sizeof(void*));
    right_type2_68=(struct sType*)come_increment_ref_count(((struct sType*)(right_value93=sType_clone(right_type))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value93);
    if(right_value93 && right_value93 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value93, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value93;
    __freed_obj__ = 0;
    left_no_solved_generics_type_69=left_type->mNoSolvedGenericsType->v1;
    right_no_solved_generics_type_70=right_type2_68->mNoSolvedGenericsType->v1;
    if(_if_conditional139=left_no_solved_generics_type_69&&right_no_solved_generics_type_70,    _if_conditional139) {
        if(_if_conditional140=list$1sTypeph_length(left_no_solved_generics_type_69->mGenericsTypes)>0,        _if_conditional140) {
            if(_if_conditional141=list$1sTypeph_length(left_no_solved_generics_type_69->mGenericsTypes)!=list$1sTypeph_length(right_no_solved_generics_type_70->mGenericsTypes),            _if_conditional141) {
                err_msg(info,"generics type parametor number error");
                printf("left type generics type parametor number is %d\n",list$1sTypeph_length(left_no_solved_generics_type_69->mGenericsTypes));
                printf("right type generics type parametor number is %d\n",list$1sTypeph_length(right_no_solved_generics_type_70->mGenericsTypes));
                exit(2);
            }
            for(
            i_71=0 ,            0;            _for_condtionalA2=            i_71<list$1sTypeph_length(left_no_solved_generics_type_69->mGenericsTypes) ,            _for_condtionalA2;            i_71++ ,            0            ){
                check_assign_type(msg,optional$2sTypephbool_value(((struct optional$2sTypephbool*)(right_value98=list$1sTypephp_operator_load_element(left_no_solved_generics_type_69->mGenericsTypes,i_71)))),optional$2sTypephbool_value(((struct optional$2sTypephbool*)(right_value99=list$1sTypephp_operator_load_element(right_no_solved_generics_type_70->mGenericsTypes,i_71)))),come_value,(_Bool)1,info);
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value98);
                if(right_value98 && right_value98 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,right_value98, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value98;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value99);
                if(right_value99 && right_value99 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,right_value99, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value99;
                __freed_obj__ = 0;
            }
            check_assign_type(msg,left_no_solved_generics_type_69,right_no_solved_generics_type_70,come_value,(_Bool)0,info);
        }
    }
    else {
        if(_if_conditional146=check_no_pointer,        _if_conditional146) {
            if(_if_conditional147=left_type->mPointerNum>0,            _if_conditional147) {
                if(_if_conditional148=right_type2_68->mPointerNum>0,                _if_conditional148) {
                    if(_if_conditional149=string_operator_equals(left_type->mClass->mName,"void")||string_operator_equals(right_type2_68->mClass->mName,"void"),                    _if_conditional149) {
                    }
                    else {
                        if(_if_conditional150=string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_68->mClass->mName,"va_list"),                        _if_conditional150) {
                        }
                        else {
                            if(_if_conditional151=string_operator_not_equals(left_type->mClass->mName,right_type2_68->mClass->mName),                            _if_conditional151) {
                                err_msg(info,"type error1");
                                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                printf("right type is %s pointer num %d\n",right_type2_68->mClass->mName,right_type2_68->mPointerNum);
                                exit(2);
                            }
                        }
                    }
                }
                else {
                    err_msg(info,"type error2");
                    printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                    printf("right type is %s pointer num %d\n",right_type2_68->mClass->mName,right_type2_68->mPointerNum);
                    exit(2);
                }
            }
            else {
                if(_if_conditional152=left_type->mPointerNum==0&&right_type2_68->mPointerNum>0,                _if_conditional152) {
                    err_msg(info,"type error3");
                    printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                    printf("right type is %s pointer num %d\n",right_type2_68->mClass->mName,right_type2_68->mPointerNum);
                    exit(2);
                }
                else {
                    if(_if_conditional153=string_operator_not_equals(left_type->mClass->mName,right_type2_68->mClass->mName),                    _if_conditional153) {
                        err_msg(info,"type error4");
                        printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                        printf("right type is %s pointer num %d\n",right_type2_68->mClass->mName,right_type2_68->mPointerNum);
                        exit(2);
                    }
                }
            }
        }
        else {
            if(_if_conditional154=!left_type->mNullValue&&right_type2_68->mNullValue,            _if_conditional154) {
                if(_if_conditional155=string_operator_equals(left_type->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_68->mClass->mName,"__builtin_va_list"),                _if_conditional155) {
                }
                else {
                    if(_if_conditional156=string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_68->mClass->mName,"va_list"),                    _if_conditional156) {
                    }
                    else {
                        if(_if_conditional157=string_operator_equals(right_type2_68->mClass->mName,"void")&&right_type2_68->mPointerNum==0,                        _if_conditional157) {
                            err_msg(info,"type error6");
                            printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                            printf("right type is %s pointer num %d\n",right_type2_68->mClass->mName,right_type2_68->mPointerNum);
                            exit(2);
                        }
                        else {
                            buf2_76=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value101=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value100=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function4.c", 387))))))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value100);
                            if(right_value100 && right_value100 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value100, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value100;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value101);
                            if(right_value101 && right_value101 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value101, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value101;
                            __freed_obj__ = 0;
                            buffer_append_str(buf2_76,((char*)(right_value105=xsprintf("come_null_check(\%s, \"\%s\", \%s)",((char*)(right_value102=string_to_string(come_value->c_value))),((char*)(right_value103=string_to_string(info->sname))),((char*)(right_value104=int_to_string(info->sline)))))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value102);
                            if(right_value102 && right_value102 != __result_obj__ && !__freed_obj__) { right_value102 = come_decrement_ref_count(right_value102, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[2] = right_value102;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value103);
                            if(right_value103 && right_value103 != __result_obj__ && !__freed_obj__) { right_value103 = come_decrement_ref_count(right_value103, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[3] = right_value103;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value104);
                            if(right_value104 && right_value104 != __result_obj__ && !__freed_obj__) { right_value104 = come_decrement_ref_count(right_value104, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[4] = right_value104;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value105);
                            if(right_value105 && right_value105 != __result_obj__ && !__freed_obj__) { right_value105 = come_decrement_ref_count(right_value105, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[5] = right_value105;
                            __freed_obj__ = 0;
                            __dec_obj42=come_value->c_value;
                            come_value->c_value=(char*)come_increment_ref_count(((char*)(right_value106=buffer_to_string(buf2_76))));
                            if(__dec_obj42) { __dec_obj42 = come_decrement_ref_count(__dec_obj42, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value106);
                            if(right_value106 && right_value106 != __result_obj__ && !__freed_obj__) { right_value106 = come_decrement_ref_count(right_value106, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[6] = right_value106;
                            __freed_obj__ = 0;
                            __dec_obj43=come_value->type;
                            come_value->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value107=sType_clone(left_type))));
                            if(__dec_obj43) { come_call_finalizer(sType_finalize,__dec_obj43, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value107);
                            if(right_value107 && right_value107 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value107, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[7] = right_value107;
                            __freed_obj__ = 0;
                            come_value->var=((void*)0);
                            __dec_obj44=right_type2_68;
                            right_type2_68=(struct sType*)come_increment_ref_count(((struct sType*)(right_value108=sType_clone(left_type))));
                            if(__dec_obj44) { come_call_finalizer(sType_finalize,__dec_obj44, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value108);
                            if(right_value108 && right_value108 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value108, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[8] = right_value108;
                            __freed_obj__ = 0;
                            if(buf2_76 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf2_76, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
                    }
                }
            }
            else {
                if(_if_conditional158=string_operator_equals(left_type->mClass->mName,"char")&&left_type->mPointerNum==1,                _if_conditional158) {
                    if(_if_conditional159=string_operator_equals(right_type2_68->mClass->mName,"char")&&right_type2_68->mPointerNum==1,                    _if_conditional159) {
                    }
                    else {
                        if(_if_conditional160=string_operator_equals(left_type->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_68->mClass->mName,"__builtin_va_list"),                        _if_conditional160) {
                        }
                        else {
                            if(_if_conditional161=string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_68->mClass->mName,"va_list"),                            _if_conditional161) {
                            }
                            else {
                                if(_if_conditional162=string_operator_equals(right_type2_68->mClass->mName,"lambda"),                                _if_conditional162) {
                                    err_msg(info,"type error6");
                                    printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                    printf("right type is %s pointer num %d\n",right_type2_68->mClass->mName,right_type2_68->mPointerNum);
                                    exit(2);
                                }
                                else {
                                    if(_if_conditional163=string_operator_equals(right_type2_68->mClass->mName,"void")&&right_type2_68->mPointerNum>0,                                    _if_conditional163) {
                                    }
                                    else {
                                        if(_if_conditional164=string_operator_equals(right_type2_68->mClass->mName,"void"),                                        _if_conditional164) {
                                            err_msg(info,"type error6");
                                            printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                            printf("right type is %s pointer num %d\n",right_type2_68->mClass->mName,right_type2_68->mPointerNum);
                                            exit(2);
                                        }
                                        else {
                                            method_name_77=(char*)come_increment_ref_count(((char*)(right_value109=create_method_name(right_type2_68,(_Bool)0,"to_string",info))));
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value109);
                                            if(right_value109 && right_value109 != __result_obj__ && !__freed_obj__) { right_value109 = come_decrement_ref_count(right_value109, (void*)0, (void*)0, 1, 0, 0); }
                                            __right_value_freed_obj[0] = right_value109;
                                            __freed_obj__ = 0;
                                            if(_if_conditional170=map$2charphsFunph_at(info->funcs,method_name_77,((void*)0))==((void*)0),                                            _if_conditional170) {
                                                obj_type_81=right_type2_68->mNoSolvedGenericsType->v1;
                                                if(_if_conditional171=obj_type_81&&list$1sTypeph_length(obj_type_81->mGenericsTypes)>0,                                                _if_conditional171) {
                                                    obj_type2_82=right_type2_68;
                                                    __dec_obj45=method_name_77;
                                                    method_name_77=(char*)come_increment_ref_count(((char*)(right_value112=make_generics_function(obj_type2_82,(char*)come_increment_ref_count(((char*)(right_value111=__builtin_string("to_string")))),info))));
                                                    if(__dec_obj45) { __dec_obj45 = come_decrement_ref_count(__dec_obj45, (void*)0, (void*)0, 0,0,0); }
                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value111);
                                                    if(right_value111 && right_value111 != __result_obj__ && !__freed_obj__) { right_value111 = come_decrement_ref_count(right_value111, (void*)0, (void*)0, 1, 0, 0); }
                                                    __right_value_freed_obj[0] = right_value111;
                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value112);
                                                    if(right_value112 && right_value112 != __result_obj__ && !__freed_obj__) { right_value112 = come_decrement_ref_count(right_value112, (void*)0, (void*)0, 1, 0, 0); }
                                                    __right_value_freed_obj[1] = right_value112;
                                                    __freed_obj__ = 0;
                                                }
                                                else {
                                                    err_msg(info,"require to_string implementation(%s)",right_type2_68->mClass->mName);
                                                    exit(1);
                                                }
                                            }
                                            buf2_83=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value114=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value113=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function4.c", 434))))))));
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value113);
                                            if(right_value113 && right_value113 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value113, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[1] = right_value113;
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value114);
                                            if(right_value114 && right_value114 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value114, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[2] = right_value114;
                                            __freed_obj__ = 0;
                                            buffer_append_str(buf2_83,method_name_77);
                                            buffer_append_str(buf2_83,"(");
                                            buffer_append_str(buf2_83,come_value->c_value);
                                            buffer_append_str(buf2_83,")");
                                            type_84=(struct sType*)come_increment_ref_count(((struct sType*)(right_value116=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value115=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 441)))),"char*",(_Bool)0,info))));
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value115);
                                            if(right_value115 && right_value115 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value115, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[3] = right_value115;
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value116);
                                            if(right_value116 && right_value116 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value116, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[4] = right_value116;
                                            __freed_obj__ = 0;
                                            type_84->mHeap=(_Bool)1;
                                            __dec_obj46=come_value->c_value;
                                            come_value->c_value=(char*)come_increment_ref_count(((char*)(right_value118=append_object_to_right_values(((char*)(right_value117=buffer_to_string(buf2_83))),(struct sType*)come_increment_ref_count(type_84),info))));
                                            if(__dec_obj46) { __dec_obj46 = come_decrement_ref_count(__dec_obj46, (void*)0, (void*)0, 0,0,0); }
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value117);
                                            if(right_value117 && right_value117 != __result_obj__ && !__freed_obj__) { right_value117 = come_decrement_ref_count(right_value117, (void*)0, (void*)0, 1, 0, 0); }
                                            __right_value_freed_obj[5] = right_value117;
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value118);
                                            if(right_value118 && right_value118 != __result_obj__ && !__freed_obj__) { right_value118 = come_decrement_ref_count(right_value118, (void*)0, (void*)0, 1, 0, 0); }
                                            __right_value_freed_obj[6] = right_value118;
                                            __freed_obj__ = 0;
                                            __dec_obj47=come_value->type;
                                            come_value->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value119=sType_clone(type_84))));
                                            if(__dec_obj47) { come_call_finalizer(sType_finalize,__dec_obj47, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value119);
                                            if(right_value119 && right_value119 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value119, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[7] = right_value119;
                                            __freed_obj__ = 0;
                                            come_value->var=((void*)0);
                                            __dec_obj48=right_type2_68;
                                            right_type2_68=(struct sType*)come_increment_ref_count(((struct sType*)(right_value120=sType_clone(type_84))));
                                            if(__dec_obj48) { come_call_finalizer(sType_finalize,__dec_obj48, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value120);
                                            if(right_value120 && right_value120 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value120, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[8] = right_value120;
                                            __freed_obj__ = 0;
                                            if(method_name_77 && !__freed_obj__) { method_name_77 = come_decrement_ref_count(method_name_77, (void*)0, (void*)0, 0, 0, 0); }
                                            if(buf2_83 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf2_83, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            if(type_84 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_84, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                else {
                    if(_if_conditional172=left_type->mPointerNum>0,                    _if_conditional172) {
                        if(_if_conditional173=right_type2_68->mPointerNum>0,                        _if_conditional173) {
                            if(_if_conditional174=string_operator_equals(left_type->mClass->mName,"void")||string_operator_equals(right_type2_68->mClass->mName,"void"),                            _if_conditional174) {
                            }
                            else {
                                if(_if_conditional175=string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_68->mClass->mName,"va_list"),                                _if_conditional175) {
                                }
                                else {
                                    if(_if_conditional176=string_operator_not_equals(left_type->mClass->mName,right_type2_68->mClass->mName),                                    _if_conditional176) {
                                        err_msg(info,"type error5");
                                        printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                        printf("right type is %s pointer num %d\n",right_type2_68->mClass->mName,right_type2_68->mPointerNum);
                                        exit(2);
                                    }
                                    else {
                                        if(_if_conditional177=left_type->mPointerNum!=right_type2_68->mPointerNum,                                        _if_conditional177) {
                                            printf("%s %d: warning invalid pointer number\n",info->sname,info->sline);
                                            printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                            printf("right type is %s pointer num %d\n",right_type2_68->mClass->mName,right_type2_68->mPointerNum);
                                        }
                                        else {
                                            if(_if_conditional178=list$1sNodeph_length(right_type2_68->mArrayNum)>0,                                            _if_conditional178) {
                                                printf("%s %d: warning invalid pointer number\n",info->sname,info->sline);
                                                printf("left type is %s pointer num %d array dimetion num %d\n",left_type->mClass->mName,left_type->mPointerNum,list$1sNodeph_length(left_type->mArrayNum));
                                                printf("right type is %s pointer num %d array dimetion num %d\n",right_type2_68->mClass->mName,right_type2_68->mPointerNum,list$1sNodeph_length(right_type2_68->mArrayNum));
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        else {
                            if(_if_conditional179=string_operator_equals(left_type->mClass->mName,"void")||string_operator_equals(right_type2_68->mClass->mName,"void"),                            _if_conditional179) {
                            }
                            else {
                                if(_if_conditional180=string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_68->mClass->mName,"va_list"),                                _if_conditional180) {
                                }
                                else {
                                    if(_if_conditional181=string_operator_equals(left_type->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_68->mClass->mName,"__builtin_va_list"),                                    _if_conditional181) {
                                    }
                                    else {
                                        if(_if_conditional182=!(string_operator_equals(right_type2_68->mClass->mName,"lambda")&&string_operator_equals(left_type->mClass->mName,"lambda"))&&right_type2_68->mPointerNum==0,                                        _if_conditional182) {
                                            err_msg(info,"type error6");
                                            printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                            printf("right type is %s pointer num %d\n",right_type2_68->mClass->mName,right_type2_68->mPointerNum);
                                            exit(2);
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
    if(right_type2_68 && !__freed_obj__) { come_call_finalizer(sType_finalize,right_type2_68, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result61__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            __result61__ = self->len;
            return __result61__;
}

static struct optional$2sTypephbool* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional142;
struct list_item$1sTypeph* it_72;
int i_73;
_Bool _while_condtional24;
_Bool _if_conditional143;
void* right_value94;
void* right_value95;
struct optional$2sTypephbool* __result63__;
struct sType* default_value_74;
void* right_value96;
void* right_value97;
struct optional$2sTypephbool* __result64__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_72, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_73, 0, sizeof(int));
memset(&right_value94, 0, sizeof(void*));
memset(&right_value95, 0, sizeof(void*));
memset(&default_value_74, 0, sizeof(struct sType*));
memset(&right_value96, 0, sizeof(void*));
memset(&right_value97, 0, sizeof(void*));
                    if(_if_conditional142=position<0,                    _if_conditional142) {
                        position+=self->len;
                    }
                    it_72=self->head;
                    i_73=0;
                    while(_while_condtional24=it_72!=((void*)0),                    _while_condtional24) {
                        if(_if_conditional143=position==i_73,                        _if_conditional143) {
                            __result63__ = __result_obj__ = ((struct optional$2sTypephbool*)(right_value95=optional$2sTypephbool_initialize((struct optional$2sTypephbool*)come_increment_ref_count(((struct optional$2sTypephbool*)(right_value94=(struct optional$2sTypephbool*)come_calloc(1, sizeof(struct optional$2sTypephbool)*(1), "./comelang2.h", 753)))),(struct sType*)come_increment_ref_count(it_72->item),(_Bool)1)));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value94);
                            if(right_value94 && right_value94 != __result_obj__ && !__freed_obj__) { right_value94 = come_decrement_ref_count(right_value94, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value94;
                            __freed_obj__ = 0;
                            return __result63__;
                        }
                        it_72=it_72->next;
                        i_73++;
                    }
                    memset(&default_value_74,0,sizeof(struct sType*));
                    __result64__ = __result_obj__ = ((struct optional$2sTypephbool*)(right_value97=optional$2sTypephbool_initialize(((struct optional$2sTypephbool*)(right_value96=(struct optional$2sTypephbool*)come_calloc(1, sizeof(struct optional$2sTypephbool)*(1), "./comelang2.h", 761))),(struct sType*)come_increment_ref_count(default_value_74),(_Bool)0)));
                    if(default_value_74 && !__freed_obj__) { come_call_finalizer(sType_finalize,default_value_74, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value96);
                    if(right_value96 && right_value96 != __result_obj__ && !__freed_obj__) { right_value96 = come_decrement_ref_count(right_value96, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value96;
                    __freed_obj__ = 0;
                    return __result64__;
                    if(default_value_74 && !__freed_obj__) { come_call_finalizer(sType_finalize,default_value_74, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct optional$2sTypephbool* optional$2sTypephbool_initialize(struct optional$2sTypephbool* self, struct sType* v1, _Bool v2){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sType* __dec_obj41;
struct optional$2sTypephbool* __result62__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                __dec_obj41=self->v1;
                                self->v1=(struct sType*)come_increment_ref_count(v1);
                                if(__dec_obj41) { come_call_finalizer(sType_finalize,__dec_obj41, (void*)0, (void*)0, 0, 0, 0, 0); }
                                self->v2=v2;
                                __result62__ = __result_obj__ = self;
                                if(self && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                                if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                                return __result62__;
                                if(self && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                                if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2sTypephboolp_finalize(struct optional$2sTypephbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional144;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                    if(_if_conditional144=self!=((void*)0)&&self->v1!=((void*)0),                                    _if_conditional144) {
                                        if(self->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    }
}

static struct sType* optional$2sTypephbool_value(struct optional$2sTypephbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional145;
struct sType* default_value_75;
struct sType* __result65__;
struct sType* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_75, 0, sizeof(struct sType*));
                    if(_if_conditional145=self==((void*)0),                    _if_conditional145) {
                        memset(&default_value_75,0,sizeof(struct sType*));
                        __result65__ = __result_obj__ = default_value_75;
                        return __result65__;
                    }
                    else {
                        __result66__ = __result_obj__ = self->v1;
                        return __result66__;
                    }
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int hash_78;
unsigned int it_79;
_Bool _while_condtional25;
_Bool _if_conditional165;
void* right_value110;
_Bool _if_conditional167;
struct sFun* __result69__;
_Bool _if_conditional168;
_Bool _if_conditional169;
struct sFun* __result70__;
struct sFun* __result71__;
struct sFun* __result72__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_78, 0, sizeof(unsigned int));
memset(&it_79, 0, sizeof(unsigned int));
memset(&right_value110, 0, sizeof(void*));
                                                hash_78=string_get_hash_key(((char*)key))%self->size;
                                                it_79=hash_78;
                                                while(_while_condtional25=(_Bool)1,                                                _while_condtional25) {
                                                    if(_if_conditional165=self->item_existance[it_79],                                                    _if_conditional165) {
                                                        if(_if_conditional167=optional$2boolbool_value(((struct optional$2boolbool*)(right_value110=string_equals(self->keys[it_79],key)))),                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value110),
                                                        (right_value110 && right_value110 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value110, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                                        __right_value_freed_obj[0] = right_value110, 
                                                        __freed_obj__ = 0, 
                                                        _if_conditional167) {
                                                            __result69__ = __result_obj__ = self->items[it_79];
                                                            return __result69__;
                                                        }
                                                        it_79++;
                                                        if(_if_conditional168=it_79>=self->size,                                                        _if_conditional168) {
                                                            it_79=0;
                                                        }
                                                        else {
                                                            if(_if_conditional169=it_79==hash_78,                                                            _if_conditional169) {
                                                                __result70__ = __result_obj__ = default_value;
                                                                return __result70__;
                                                            }
                                                        }
                                                    }
                                                    else {
                                                        __result71__ = __result_obj__ = default_value;
                                                        return __result71__;
                                                    }
                                                }
                                                __result72__ = __result_obj__ = default_value;
                                                return __result72__;
}

static _Bool optional$2boolbool_value(struct optional$2boolbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional166;
_Bool default_value_80;
_Bool __result67__;
_Bool __result68__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_80, 0, sizeof(_Bool));
                                                            if(_if_conditional166=self==((void*)0),                                                            _if_conditional166) {
                                                                memset(&default_value_80,0,sizeof(_Bool));
                                                                __result67__ = default_value_80;
                                                                return __result67__;
                                                            }
                                                            else {
                                                                __result68__ = self->v1;
                                                                return __result68__;
                                                            }
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

static int list$1sNodeph_length(struct list$1sNodeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result73__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                __result73__ = self->len;
                                                return __result73__;
}

struct tuple2$2sTypephcharph* parse_variable_name(struct sType* base_type_name, _Bool first, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value121;
struct sType* result_type_85;
_Bool _if_conditional183;
char* var_name_86;
char* p_87;
int sline_88;
_Bool _if_conditional184;
void* right_value122;
char* word_90;
_Bool _if_conditional186;
_Bool between_brace_91;
char* p_92;
int sline_93;
_Bool _if_conditional187;
_Bool _if_conditional188;
void* right_value123;
char* word_94;
_Bool _if_conditional189;
_Bool _if_conditional190;
_Bool _if_conditional191;
_Bool _while_condtional26;
char* p_95;
int sline_96;
_Bool _if_conditional192;
void* right_value124;
char* word_97;
_Bool _if_conditional193;
_Bool _if_conditional194;
_Bool _if_conditional195;
void* right_value125;
char* __dec_obj49;
static int num_anonymous_var_name_98=0;
void* right_value126;
char* __dec_obj50;
_Bool _if_conditional196;
_Bool _if_conditional197;
_Bool no_comma_99;
void* right_value127;
struct sNode* node_100;
struct sNode* __dec_obj51;
_Bool _while_condtional27;
char* p_101;
int sline_102;
_Bool _if_conditional198;
void* right_value128;
char* word_103;
_Bool _if_conditional199;
_Bool _if_conditional200;
void* right_value129;
struct sNode* node_104;
void* right_value133;
void* right_value134;
void* right_value137;
struct tuple2$2sTypephcharph* __result78__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value121, 0, sizeof(void*));
memset(&result_type_85, 0, sizeof(struct sType*));
memset(&var_name_86, 0, sizeof(char*));
memset(&p_87, 0, sizeof(char*));
memset(&sline_88, 0, sizeof(int));
memset(&right_value122, 0, sizeof(void*));
memset(&word_90, 0, sizeof(char*));
memset(&between_brace_91, 0, sizeof(_Bool));
memset(&p_92, 0, sizeof(char*));
memset(&sline_93, 0, sizeof(int));
memset(&right_value123, 0, sizeof(void*));
memset(&word_94, 0, sizeof(char*));
memset(&p_95, 0, sizeof(char*));
memset(&sline_96, 0, sizeof(int));
memset(&right_value124, 0, sizeof(void*));
memset(&word_97, 0, sizeof(char*));
memset(&right_value125, 0, sizeof(void*));
memset(&right_value126, 0, sizeof(void*));
memset(&no_comma_99, 0, sizeof(_Bool));
memset(&right_value127, 0, sizeof(void*));
memset(&node_100, 0, sizeof(struct sNode*));
memset(&p_101, 0, sizeof(char*));
memset(&sline_102, 0, sizeof(int));
memset(&right_value128, 0, sizeof(void*));
memset(&word_103, 0, sizeof(char*));
memset(&right_value129, 0, sizeof(void*));
memset(&node_104, 0, sizeof(struct sNode*));
memset(&right_value133, 0, sizeof(void*));
memset(&right_value134, 0, sizeof(void*));
memset(&right_value137, 0, sizeof(void*));
    result_type_85=(struct sType*)come_increment_ref_count(((struct sType*)(right_value121=sType_clone(base_type_name))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value121);
    if(right_value121 && right_value121 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value121, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value121;
    __freed_obj__ = 0;
    if(_if_conditional183=!first,    _if_conditional183) {
        result_type_85->mPointerNum=0;
    }
    var_name_86=((void*)0);
    {
        p_87=info->p;
        sline_88=info->sline;
        if(_if_conditional184=xisalpha(*info->p)||*info->p==95,        _if_conditional184) {
            word_90=(char*)come_increment_ref_count(optional$2charphbool_value(((struct optional$2charphbool*)(right_value122=parse_word(info)))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value122);
            if(right_value122 && right_value122 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value122, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value122;
            __freed_obj__ = 0;
            if(_if_conditional186=string_operator_equals(word_90,"const")||string_operator_equals(word_90,"__restrict")||string_operator_equals(word_90,"restrict")||string_operator_equals(word_90,"__user")||string_operator_equals(word_90,"volatile")||string_operator_equals(word_90,"_Nonnull")||string_operator_equals(word_90,"_Nullable")||string_operator_equals(word_90,"_Null_unspecified")||string_operator_equals(word_90,"__user"),            _if_conditional186) {
            }
            else {
                info->p=p_87;
                info->sline=sline_88;
            }
            if(word_90 && !__freed_obj__) { word_90 = come_decrement_ref_count(word_90, (void*)0, (void*)0, 0, 0, 0); }
        }
        else {
            info->p=p_87;
            info->sline=sline_88;
        }
    }
    between_brace_91=(_Bool)0;
    {
        p_92=info->p;
        sline_93=info->sline;
        if(_if_conditional187=*info->p==40,        _if_conditional187) {
            info->p++;
            skip_spaces_and_lf(info);
            if(_if_conditional188=xisalpha(*info->p)||*info->p==95,            _if_conditional188) {
                word_94=(char*)come_increment_ref_count(optional$2charphbool_value(((struct optional$2charphbool*)(right_value123=parse_word(info)))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value123);
                if(right_value123 && right_value123 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value123, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value123;
                __freed_obj__ = 0;
                if(_if_conditional189=is_type_name(word_94,info),                _if_conditional189) {
                }
                else {
                    if(_if_conditional190=*info->p==41,                    _if_conditional190) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        if(_if_conditional191=*info->p!=40,                        _if_conditional191) {
                            between_brace_91=(_Bool)1;
                        }
                    }
                }
                if(word_94 && !__freed_obj__) { word_94 = come_decrement_ref_count(word_94, (void*)0, (void*)0, 0, 0, 0); }
            }
        }
        info->p=p_92;
        info->sline=sline_93;
    }
    parse_sharp_v5(info);
    while(_while_condtional26=*info->p==42,    _while_condtional26) {
        info->p++;
        skip_spaces_and_lf(info);
        {
            p_95=info->p;
            sline_96=info->sline;
            if(_if_conditional192=xisalpha(*info->p)||*info->p==95,            _if_conditional192) {
                word_97=(char*)come_increment_ref_count(optional$2charphbool_value(((struct optional$2charphbool*)(right_value124=parse_word(info)))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value124);
                if(right_value124 && right_value124 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value124, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value124;
                __freed_obj__ = 0;
                if(_if_conditional193=string_operator_equals(word_97,"const")||string_operator_equals(word_97,"__restrict")||string_operator_equals(word_97,"restrict")||string_operator_equals(word_97,"__user")||string_operator_equals(word_97,"volatile")||string_operator_equals(word_97,"_Nonnull")||string_operator_equals(word_97,"_Nullable")||string_operator_equals(word_97,"_Null_unspecified")||string_operator_equals(word_97,"__user"),                _if_conditional193) {
                }
                else {
                    info->p=p_95;
                    info->sline=sline_96;
                }
                if(word_97 && !__freed_obj__) { word_97 = come_decrement_ref_count(word_97, (void*)0, (void*)0, 0, 0, 0); }
            }
            else {
                info->p=p_95;
                info->sline=sline_96;
            }
        }
        result_type_85->mPointerNum++;
    }
    parse_sharp_v5(info);
    if(_if_conditional194=between_brace_91&&*info->p==40,    _if_conditional194) {
        info->p++;
        skip_spaces_and_lf(info);
    }
    if(_if_conditional195=xisalnum(*info->p)||*info->p==95,    _if_conditional195) {
        __dec_obj49=var_name_86;
        var_name_86=(char*)come_increment_ref_count(optional$2charphbool_value(((struct optional$2charphbool*)(right_value125=parse_word(info)))));
        if(__dec_obj49) { __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value125);
        if(right_value125 && right_value125 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value125, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value125;
        __freed_obj__ = 0;
    }
    else {
        num_anonymous_var_name_98++;
        __dec_obj50=var_name_86;
        var_name_86=(char*)come_increment_ref_count(((char*)(right_value126=xsprintf("anonymous_var_nameYYY%d",num_anonymous_var_name_98))));
        if(__dec_obj50) { __dec_obj50 = come_decrement_ref_count(__dec_obj50, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value126);
        if(right_value126 && right_value126 != __result_obj__ && !__freed_obj__) { right_value126 = come_decrement_ref_count(right_value126, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value126;
        __freed_obj__ = 0;
    }
    if(_if_conditional196=between_brace_91&&*info->p==41,    _if_conditional196) {
        info->p++;
        skip_spaces_and_lf(info);
    }
    if(_if_conditional197=*info->p==58,    _if_conditional197) {
        info->p++;
        skip_spaces_and_lf(info);
        no_comma_99=info->no_comma;
        info->no_comma=(_Bool)1;
        node_100=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value127=expression_v13(info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value127);
        if(right_value127 && right_value127 != __result_obj__ && !__freed_obj__) { right_value127 = come_decrement_ref_count(right_value127, ((struct sNode*)right_value127)->finalize, ((struct sNode*)right_value127)->_protocol_obj, 1, 0, 0); } 
        __right_value_freed_obj[0] = right_value127;
        __freed_obj__ = 0;
        info->no_comma=no_comma_99;
        __dec_obj51=result_type_85->mSizeNum;
        result_type_85->mSizeNum=(struct sNode*)come_increment_ref_count(node_100);
        if(__dec_obj51) { __dec_obj51 = come_decrement_ref_count(__dec_obj51, ((struct sNode*)__dec_obj51)->finalize, ((struct sNode*)__dec_obj51)->_protocol_obj, 0,0,0); }
        if(node_100 && !__freed_obj__) { node_100 = come_decrement_ref_count(node_100, ((struct sNode*)node_100)->finalize, ((struct sNode*)node_100)->_protocol_obj, 0, 0, 0); } 
    }
    while(_while_condtional27=*info->p==91,    _while_condtional27) {
        info->p++;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        {
            p_101=info->p;
            sline_102=info->sline;
            if(_if_conditional198=xisalpha(*info->p)||*info->p==95,            _if_conditional198) {
                word_103=(char*)come_increment_ref_count(optional$2charphbool_value(((struct optional$2charphbool*)(right_value128=parse_word(info)))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value128);
                if(right_value128 && right_value128 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value128, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value128;
                __freed_obj__ = 0;
                if(_if_conditional199=string_operator_equals(word_103,"const")||string_operator_equals(word_103,"__restrict")||string_operator_equals(word_103,"restrict")||string_operator_equals(word_103,"__user")||string_operator_equals(word_103,"volatile")||string_operator_equals(word_103,"_Nonnull")||string_operator_equals(word_103,"_Nullable")||string_operator_equals(word_103,"_Null_unspecified")||string_operator_equals(word_103,"__user"),                _if_conditional199) {
                }
                else {
                    info->p=p_101;
                    info->sline=sline_102;
                }
                if(word_103 && !__freed_obj__) { word_103 = come_decrement_ref_count(word_103, (void*)0, (void*)0, 0, 0, 0); }
            }
            else {
                info->p=p_101;
                info->sline=sline_102;
            }
        }
        if(_if_conditional200=*info->p==93,        _if_conditional200) {
            info->p++;
            skip_spaces_and_lf(info);
            result_type_85->mPointerNum++;
            break;
        }
        parse_sharp_v5(info);
        node_104=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value129=expression_v13(info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value129);
        if(right_value129 && right_value129 != __result_obj__ && !__freed_obj__) { right_value129 = come_decrement_ref_count(right_value129, ((struct sNode*)right_value129)->finalize, ((struct sNode*)right_value129)->_protocol_obj, 1, 0, 0); } 
        __right_value_freed_obj[0] = right_value129;
        __freed_obj__ = 0;
        list$1sNodeph_push_back(result_type_85->mArrayNum,(struct sNode*)come_increment_ref_count(node_104));
        parse_sharp_v5(info);
        optional$2intbool_value(((struct optional$2intbool*)(right_value133=expected_next_character(93,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value133);
        if(right_value133 && right_value133 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value133, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value133;
        __freed_obj__ = 0;
        if(node_104 && !__freed_obj__) { node_104 = come_decrement_ref_count(node_104, ((struct sNode*)node_104)->finalize, ((struct sNode*)node_104)->_protocol_obj, 0, 0, 0); } 
    }
    __result78__ = __result_obj__ = ((struct tuple2$2sTypephcharph*)(right_value137=tuple2$2sTypephcharph_initialize((struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value134=(struct tuple2$2sTypephcharph*)come_calloc(1, sizeof(struct tuple2$2sTypephcharph)*(1), "05function4.c", 647)))),(struct sType*)come_increment_ref_count(result_type_85),(char*)come_increment_ref_count(var_name_86))));
    if(base_type_name && !__freed_obj__) { come_call_finalizer(sType_finalize,base_type_name, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(result_type_85 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_85, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(var_name_86 && !__freed_obj__) { var_name_86 = come_decrement_ref_count(var_name_86, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value134);
    if(right_value134 && right_value134 != __result_obj__ && !__freed_obj__) { right_value134 = come_decrement_ref_count(right_value134, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value134;
    __freed_obj__ = 0;
    return __result78__;
    if(base_type_name && !__freed_obj__) { come_call_finalizer(sType_finalize,base_type_name, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(result_type_85 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_85, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(var_name_86 && !__freed_obj__) { var_name_86 = come_decrement_ref_count(var_name_86, (void*)0, (void*)0, 0, 0, 0); }
}

static char* optional$2charphbool_value(struct optional$2charphbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional185;
char* default_value_89;
char* __result74__;
char* __result75__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_89, 0, sizeof(char*));
                if(_if_conditional185=self==((void*)0),                _if_conditional185) {
                    memset(&default_value_89,0,sizeof(char*));
                    __result74__ = __result_obj__ = default_value_89;
                    return __result74__;
                }
                else {
                    __result75__ = __result_obj__ = self->v1;
                    return __result75__;
                }
}

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional201;
void* right_value130;
struct list_item$1sNodeph* litem_105;
struct sNode* __dec_obj52;
_Bool _if_conditional202;
void* right_value131;
struct list_item$1sNodeph* litem_106;
struct sNode* __dec_obj53;
void* right_value132;
struct list_item$1sNodeph* litem_107;
struct sNode* __dec_obj54;
struct list$1sNodeph* __result76__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value130, 0, sizeof(void*));
memset(&litem_105, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value131, 0, sizeof(void*));
memset(&litem_106, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value132, 0, sizeof(void*));
memset(&litem_107, 0, sizeof(struct list_item$1sNodeph*));
            if(_if_conditional201=self->len==0,            _if_conditional201) {
                litem_105=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value130=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 283))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value130);
                if(right_value130 && right_value130 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value130, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value130;
                __freed_obj__ = 0;
                litem_105->prev=((void*)0);
                litem_105->next=((void*)0);
                __dec_obj52=litem_105->item;
                litem_105->item=(struct sNode*)come_increment_ref_count(item);
                if(__dec_obj52) { __dec_obj52 = come_decrement_ref_count(__dec_obj52, ((struct sNode*)__dec_obj52)->finalize, ((struct sNode*)__dec_obj52)->_protocol_obj, 0,0,0); }
                self->tail=litem_105;
                self->head=litem_105;
            }
            else {
                if(_if_conditional202=self->len==1,                _if_conditional202) {
                    litem_106=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value131=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 293))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value131);
                    if(right_value131 && right_value131 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value131, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value131;
                    __freed_obj__ = 0;
                    litem_106->prev=self->head;
                    litem_106->next=((void*)0);
                    __dec_obj53=litem_106->item;
                    litem_106->item=(struct sNode*)come_increment_ref_count(item);
                    if(__dec_obj53) { __dec_obj53 = come_decrement_ref_count(__dec_obj53, ((struct sNode*)__dec_obj53)->finalize, ((struct sNode*)__dec_obj53)->_protocol_obj, 0,0,0); }
                    self->tail=litem_106;
                    self->head->next=litem_106;
                }
                else {
                    litem_107=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value132=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 303))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value132);
                    if(right_value132 && right_value132 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value132, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value132;
                    __freed_obj__ = 0;
                    litem_107->prev=self->tail;
                    litem_107->next=((void*)0);
                    __dec_obj54=litem_107->item;
                    litem_107->item=(struct sNode*)come_increment_ref_count(item);
                    if(__dec_obj54) { __dec_obj54 = come_decrement_ref_count(__dec_obj54, ((struct sNode*)__dec_obj54)->finalize, ((struct sNode*)__dec_obj54)->_protocol_obj, 0,0,0); }
                    self->tail->next=litem_107;
                    self->tail=litem_107;
                }
            }
            self->len++;
            __result76__ = __result_obj__ = self;
            if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
            return __result76__;
            if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
}

static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_initialize(struct tuple2$2sTypephcharph* self, struct sType* v1, char* v2){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value135;
struct sType* __dec_obj55;
void* right_value136;
char* __dec_obj56;
struct tuple2$2sTypephcharph* __result77__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value135, 0, sizeof(void*));
memset(&right_value136, 0, sizeof(void*));
        __dec_obj55=self->v1;
        self->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value135=sType_clone(v1))));
        if(__dec_obj55) { come_call_finalizer(sType_finalize,__dec_obj55, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value135);
        if(right_value135 && right_value135 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value135, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value135;
        __freed_obj__ = 0;
        __dec_obj56=self->v2;
        self->v2=(char*)come_increment_ref_count(((char*)(right_value136=string_clone(v2))));
        if(__dec_obj56) { __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value136);
        if(right_value136 && right_value136 != __result_obj__ && !__freed_obj__) { right_value136 = come_decrement_ref_count(right_value136, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value136;
        __freed_obj__ = 0;
        __result77__ = __result_obj__ = self;
        if(self && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
        if(v2 && !__freed_obj__) { v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0, 1, 0); }
        return __result77__;
        if(self && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
        if(v2 && !__freed_obj__) { v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0, 1, 0); }
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional203;
_Bool _if_conditional204;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            if(_if_conditional203=self!=((void*)0)&&self->v1!=((void*)0),            _if_conditional203) {
                if(self->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            if(_if_conditional204=self!=((void*)0)&&self->v2!=((void*)0),            _if_conditional204) {
                if(self->v2 && !__freed_obj__) { self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, 0); }
            }
}

void skip_pointer_attribute(struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* p_108;
int sline_109;
_Bool _if_conditional205;
void* right_value138;
char* word_110;
_Bool _if_conditional206;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&p_108, 0, sizeof(char*));
memset(&sline_109, 0, sizeof(int));
memset(&right_value138, 0, sizeof(void*));
memset(&word_110, 0, sizeof(char*));
    p_108=info->p;
    sline_109=info->sline;
    if(_if_conditional205=xisalpha(*info->p)||*info->p==95,    _if_conditional205) {
        word_110=(char*)come_increment_ref_count(optional$2charphbool_value(((struct optional$2charphbool*)(right_value138=parse_word(info)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value138);
        if(right_value138 && right_value138 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value138, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value138;
        __freed_obj__ = 0;
        if(_if_conditional206=string_operator_equals(word_110,"const")||string_operator_equals(word_110,"__restrict")||string_operator_equals(word_110,"restrict")||string_operator_equals(word_110,"__user")||string_operator_equals(word_110,"volatile")||string_operator_equals(word_110,"_Nonnull")||string_operator_equals(word_110,"_Nullable")||string_operator_equals(word_110,"_Null_unspecified")||string_operator_equals(word_110,"__user"),        _if_conditional206) {
        }
        else {
            info->p=p_108;
            info->sline=sline_109;
        }
        if(word_110 && !__freed_obj__) { word_110 = come_decrement_ref_count(word_110, (void*)0, (void*)0, 0, 0, 0); }
    }
    else {
        info->p=p_108;
        info->sline=sline_109;
    }
}

struct optional$2tuple3$3sTypephcharphboolphbool* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* head_111;
int head_sline_112;
void* right_value139;
char* type_name_113;
_Bool _while_condtional28;
void* right_value140;
char* __dec_obj57;
_Bool constant_114;
_Bool static__115;
_Bool exception__116;
_Bool volatile__117;
_Bool register__118;
_Bool unsigned__119;
_Bool long__120;
_Bool long_long_121;
_Bool short__122;
_Bool restrict__123;
_Bool struct__124;
_Bool union__125;
_Bool enum__126;
_Bool no_heap_127;
_Bool extern__128;
_Bool inline__129;
_Bool come_mem_core__130;
struct sNode* alignas__131;
_Bool anonymous_type_132;
_Bool anonymous_name_133;
_Bool _while_condtional29;
_Bool _if_conditional207;
_Bool _if_conditional208;
char* p_134;
int sline_135;
void* right_value141;
_Bool _if_conditional209;
void* right_value142;
char* __dec_obj58;
void* right_value143;
char* __dec_obj59;
void* right_value144;
char* __dec_obj60;
_Bool _if_conditional210;
char* p_136;
int sline_137;
_Bool _while_condtional30;
_Bool _if_conditional211;
_Bool _if_conditional212;
_Bool _if_conditional213;
void* right_value145;
void* right_value148;
void* right_value149;
void* right_value150;
struct optional$2tuple3$3sTypephcharphboolphbool* __result81__;
_Bool _if_conditional216;
char* p_138;
int sline_139;
void* right_value151;
_Bool _if_conditional217;
void* right_value152;
void* right_value153;
void* right_value154;
void* right_value155;
struct optional$2tuple3$3sTypephcharphboolphbool* __result82__;
_Bool _if_conditional218;
_Bool _if_conditional219;
char* p_140;
int sline_141;
void* right_value156;
_Bool _if_conditional220;
void* right_value157;
char* __dec_obj64;
void* right_value158;
char* __dec_obj65;
void* right_value159;
char* __dec_obj66;
_Bool _if_conditional221;
char* p_142;
int sline_143;
void* right_value160;
_Bool _if_conditional222;
void* right_value161;
void* right_value162;
void* right_value163;
void* right_value164;
struct optional$2tuple3$3sTypephcharphboolphbool* __result83__;
_Bool _if_conditional223;
_Bool _if_conditional224;
char* p_144;
int sline_145;
void* right_value165;
_Bool _if_conditional225;
void* right_value166;
void* right_value167;
void* right_value168;
void* right_value169;
struct optional$2tuple3$3sTypephcharphboolphbool* __result84__;
void* right_value170;
char* __dec_obj67;
void* right_value171;
char* __dec_obj68;
_Bool _if_conditional226;
char* p_146;
int sline_147;
void* right_value172;
_Bool _if_conditional227;
void* right_value173;
void* right_value174;
void* right_value175;
void* right_value176;
struct optional$2tuple3$3sTypephcharphboolphbool* __result85__;
_Bool _if_conditional228;
void* right_value177;
void* right_value178;
struct sNode* exp_148;
struct sNode* __dec_obj69;
void* right_value179;
void* right_value180;
char* __dec_obj70;
_Bool _if_conditional229;
void* right_value181;
char* __dec_obj71;
_Bool _if_conditional230;
void* right_value182;
char* __dec_obj72;
_Bool _if_conditional231;
void* right_value183;
char* __dec_obj73;
_Bool _if_conditional232;
void* right_value184;
char* __dec_obj74;
_Bool _if_conditional233;
void* right_value185;
char* __dec_obj75;
_Bool _if_conditional234;
void* right_value186;
char* __dec_obj76;
_Bool _if_conditional235;
void* right_value187;
char* __dec_obj77;
_Bool _if_conditional236;
void* right_value188;
char* __dec_obj78;
_Bool _if_conditional237;
char* p_149;
int sline_150;
_Bool _if_conditional238;
void* right_value189;
char* __dec_obj79;
void* right_value190;
char* __dec_obj80;
_Bool _if_conditional239;
void* right_value191;
char* __dec_obj81;
_Bool _if_conditional240;
_Bool _if_conditional241;
_Bool _if_conditional242;
void* right_value192;
char* __dec_obj82;
_Bool _if_conditional243;
_Bool _if_conditional244;
void* right_value193;
char* __dec_obj83;
_Bool _if_conditional245;
_Bool _if_conditional246;
void* right_value194;
char* __dec_obj84;
_Bool _if_conditional247;
_Bool _if_conditional248;
char* p_151;
int sline_152;
void* right_value195;
char* __dec_obj85;
_Bool _if_conditional249;
_Bool _if_conditional250;
char* p_153;
int sline_154;
void* right_value196;
char* __dec_obj86;
_Bool _if_conditional251;
void* right_value197;
char* __dec_obj87;
void* right_value198;
char* __dec_obj88;
_Bool _if_conditional252;
_Bool _if_conditional253;
char* p_155;
int sline_156;
void* right_value199;
char* __dec_obj89;
_Bool _if_conditional254;
void* right_value200;
char* __dec_obj90;
void* right_value201;
char* __dec_obj91;
_Bool _if_conditional255;
void* right_value202;
char* __dec_obj92;
void* right_value203;
char* __dec_obj93;
_Bool _if_conditional256;
void* right_value204;
char* __dec_obj94;
_Bool _if_conditional257;
void* right_value205;
char* __dec_obj95;
_Bool _if_conditional258;
void* right_value206;
char* __dec_obj96;
_Bool _if_conditional259;
void* right_value207;
char* __dec_obj97;
_Bool _if_conditional260;
_Bool _if_conditional261;
_Bool _if_conditional262;
char* p_157;
int sline_158;
void* right_value208;
char* __dec_obj98;
_Bool _if_conditional263;
_Bool _if_conditional264;
_Bool _if_conditional265;
void* right_value209;
char* __dec_obj99;
int pointer_num_159;
_Bool _while_condtional31;
_Bool lambda_flag_160;
char* pX_161;
int slineX_162;
_Bool _if_conditional266;
void* right_value210;
_Bool _if_conditional267;
struct sType* type_163;
char* var_name_164;
_Bool function_pointer_flag_165;
char* p_166;
int sline_167;
_Bool _if_conditional268;
_Bool _if_conditional269;
_Bool _if_conditional270;
void* right_value211;
char* word_168;
_Bool _if_conditional271;
_Bool _if_conditional272;
_Bool var_name_between_brace_169;
char* p_170;
int sline_171;
_Bool _if_conditional273;
_Bool _if_conditional274;
void* right_value212;
char* word_172;
_Bool _if_conditional275;
_Bool _if_conditional276;
_Bool _if_conditional277;
_Bool _if_conditional278;
static int anonymous_num_173=0;
_Bool _if_conditional279;
_Bool _if_conditional280;
void* right_value213;
char* __dec_obj100;
void* right_value214;
struct sNode* node_174;
_Bool _if_conditional281;
void* right_value215;
void* right_value216;
void* right_value217;
void* right_value218;
struct optional$2tuple3$3sTypephcharphboolphbool* __result86__;
int pointer_num_175;
_Bool _while_condtional32;
void* right_value219;
void* right_value220;
struct sType* __dec_obj101;
_Bool _if_conditional282;
_Bool _if_conditional283;
void* right_value221;
char* __dec_obj102;
void* right_value222;
struct sNode* node_176;
_Bool _if_conditional284;
_Bool _if_conditional285;
void* right_value223;
void* right_value224;
void* right_value225;
void* right_value226;
struct optional$2tuple3$3sTypephcharphboolphbool* __result87__;
void* right_value227;
void* right_value228;
struct sType* __dec_obj103;
_Bool _if_conditional286;
_Bool _if_conditional287;
void* right_value229;
char* __dec_obj104;
void* right_value230;
struct sNode* node_177;
_Bool _if_conditional288;
void* right_value231;
void* right_value232;
void* right_value233;
void* right_value234;
struct optional$2tuple3$3sTypephcharphboolphbool* __result88__;
int pointer_num_178;
_Bool _while_condtional33;
void* right_value235;
void* right_value236;
struct sType* __dec_obj105;
void* right_value237;
void* right_value238;
void* right_value239;
void* right_value240;
struct optional$2tuple3$3sTypephcharphboolphbool* __result89__;
_Bool _if_conditional289;
_Bool _if_conditional290;
_Bool _if_conditional291;
void* right_value241;
char* __dec_obj106;
_Bool _if_conditional292;
static int num_anonymous_var_name_179=0;
void* right_value242;
char* __dec_obj107;
_Bool _if_conditional293;
void* right_value243;
char* __dec_obj108;
static int num_anonymous_var_name_180=0;
void* right_value244;
char* __dec_obj109;
_Bool _if_conditional294;
_Bool _if_conditional295;
_Bool no_comma_181;
void* right_value245;
struct sNode* node_182;
struct sNode* __dec_obj110;
_Bool _if_conditional296;
struct sType* result_type_183;
void* right_value255;
_Bool _if_conditional302;
void* right_value256;
void* right_value257;
struct sType* __dec_obj111;
_Bool _if_conditional308;
int i_193;
_Bool _for_condtionalA4;
void* right_value262;
_Bool _if_conditional311;
void* right_value263;
void* right_value264;
void* right_value265;
struct sType* __dec_obj112;
void* right_value266;
void* right_value267;
struct sType* __dec_obj113;
struct sNode* __dec_obj114;
void* right_value268;
char* __dec_obj115;
void* right_value269;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* multiple_assgin_var2;
struct list$1sTypeph* param_types_198;
struct list$1charph* param_names_199;
struct list$1charph* param_default_parametors_200;
_Bool var_args_201;
void* right_value270;
void* right_value271;
struct sType* __dec_obj116;
void* right_value272;
void* right_value274;
struct tuple1$1sTypeph* __dec_obj118;
struct list$1sTypeph* __dec_obj119;
struct list$1charph* __dec_obj120;
_Bool _if_conditional313;
_Bool _if_conditional314;
struct sType* result_type_202;
void* right_value275;
_Bool _if_conditional315;
void* right_value276;
void* right_value277;
struct sType* __dec_obj121;
_Bool _if_conditional316;
int i_203;
_Bool _for_condtionalA5;
void* right_value278;
_Bool _if_conditional317;
void* right_value279;
void* right_value280;
void* right_value281;
struct sType* __dec_obj122;
void* right_value282;
void* right_value283;
struct sType* __dec_obj123;
struct sNode* __dec_obj124;
_Bool _if_conditional318;
void* right_value284;
char* __dec_obj125;
_Bool _if_conditional319;
void* right_value285;
void* right_value286;
void* right_value287;
void* right_value288;
struct optional$2tuple3$3sTypephcharphboolphbool* __result112__;
static int num_anonymous_var_name_204=0;
void* right_value289;
char* __dec_obj126;
void* right_value290;
void* right_value291;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* multiple_assgin_var3;
struct list$1sTypeph* param_types_205;
struct list$1charph* param_names_206;
struct list$1charph* param_default_parametors_207;
_Bool var_args_208;
void* right_value292;
void* right_value293;
struct sType* __dec_obj127;
void* right_value294;
void* right_value295;
struct tuple1$1sTypeph* __dec_obj128;
struct list$1sTypeph* __dec_obj129;
struct list$1charph* __dec_obj130;
_Bool _if_conditional320;
void* right_value296;
struct sNode* exp_209;
void* right_value297;
_Bool _if_conditional321;
void* right_value298;
void* right_value299;
void* right_value300;
void* right_value301;
struct optional$2tuple3$3sTypephcharphboolphbool* __result115__;
void* right_value302;
struct CVALUE* come_value_210;
void* right_value303;
struct sType* __dec_obj132;
_Bool _if_conditional325;
_Bool _if_conditional326;
_Bool _if_conditional327;
void* right_value304;
char* __dec_obj133;
_Bool _if_conditional328;
static int num_anonymous_var_name_211=0;
void* right_value305;
char* __dec_obj134;
_Bool _if_conditional329;
void* right_value306;
char* __dec_obj135;
static int num_anonymous_var_name_212=0;
void* right_value307;
char* __dec_obj136;
_Bool _if_conditional330;
_Bool _if_conditional331;
_Bool no_comma_213;
void* right_value308;
struct sNode* node_214;
struct sNode* __dec_obj137;
void* right_value309;
_Bool _if_conditional332;
void* right_value310;
void* right_value311;
struct sType* __dec_obj138;
void* right_value312;
char* __dec_obj139;
struct sNode* __dec_obj140;
_Bool _if_conditional333;
int i_215;
_Bool _for_condtionalA6;
void* right_value313;
_Bool _if_conditional334;
void* right_value314;
void* right_value315;
void* right_value316;
struct sType* __dec_obj141;
struct sNode* __dec_obj142;
_Bool _if_conditional335;
void* right_value326;
_Bool _if_conditional341;
void* right_value327;
void* right_value328;
void* right_value329;
void* right_value330;
struct optional$2tuple3$3sTypephcharphboolphbool* __result123__;
void* right_value331;
void* right_value332;
struct sType* __dec_obj143;
_Bool _while_condtional37;
void* right_value333;
struct tuple3$3sTypephcharphbool* multiple_assgin_var4;
struct sType* generics_type_220;
char* var_name_221;
_Bool err_222;
_Bool _if_conditional342;
void* right_value334;
void* right_value335;
void* right_value336;
void* right_value337;
struct optional$2tuple3$3sTypephcharphboolphbool* __result124__;
_Bool _if_conditional343;
_Bool _if_conditional344;
void* right_value338;
void* right_value339;
void* right_value340;
void* right_value341;
struct optional$2tuple3$3sTypephcharphboolphbool* __result125__;
_Bool _if_conditional345;
void* right_value342;
struct sType* __dec_obj144;
_Bool _if_conditional346;
void* right_value343;
char* new_name_223;
struct sNode* __dec_obj145;
_Bool _if_conditional347;
void* right_value344;
struct sClass* klass_224;
_Bool _if_conditional348;
void* right_value355;
void* right_value356;
void* right_value357;
void* right_value358;
struct sType* __dec_obj146;
struct sNode* __dec_obj147;
_Bool _while_condtional47;
_Bool _if_conditional402;
_Bool _if_conditional403;
_Bool _if_conditional404;
_Bool _if_conditional405;
_Bool _if_conditional406;
_Bool _if_conditional407;
_Bool _if_conditional408;
_Bool _while_condtional48;
_Bool _if_conditional409;
_Bool _if_conditional410;
void* right_value359;
void* right_value360;
struct list$1sTypeph* types_271;
void* right_value361;
_Bool _while_condtional49;
void* right_value362;
struct tuple3$3sTypephcharphbool* multiple_assgin_var5;
struct sType* type2_272;
char* name_273;
_Bool err_274;
_Bool _if_conditional411;
void* right_value363;
void* right_value364;
void* right_value365;
void* right_value366;
struct optional$2tuple3$3sTypephcharphboolphbool* __result150__;
void* right_value367;
int num_tuples_275;
void* right_value368;
void* right_value369;
void* right_value370;
struct sType* __dec_obj148;
struct list$1sTypeph* o2_saved_276;
struct sType* it_277;
_Bool _for_condtionalA9;
void* right_value371;
_Bool _if_conditional412;
void* right_value372;
struct sType* __dec_obj149;
_Bool _if_conditional413;
void* right_value373;
char* new_name_278;
_Bool _if_conditional414;
_Bool _if_conditional415;
_Bool _if_conditional416;
void* right_value374;
char* __dec_obj150;
_Bool _if_conditional417;
static int num_anonymous_var_name_279=0;
void* right_value375;
char* __dec_obj151;
_Bool _if_conditional418;
void* right_value376;
char* __dec_obj152;
static int num_anonymous_var_name_280=0;
void* right_value377;
char* __dec_obj153;
_Bool _if_conditional419;
_Bool _if_conditional420;
_Bool no_comma_281;
void* right_value378;
struct sNode* node_282;
struct sNode* __dec_obj154;
_Bool _while_condtional50;
_Bool _if_conditional421;
void* right_value379;
struct sNode* node_283;
void* right_value380;
void* right_value381;
char* asm_name_284;
char* __dec_obj155;
_Bool _if_conditional422;
void* right_value382;
void* right_value383;
struct sType* type2_285;
void* right_value384;
void* right_value385;
_Bool _if_conditional423;
_Bool _if_conditional424;
void* right_value386;
void* right_value387;
void* right_value388;
void* right_value389;
struct optional$2tuple3$3sTypephcharphboolphbool* __result151__;
void* right_value390;
void* right_value391;
void* right_value392;
void* right_value393;
struct optional$2tuple3$3sTypephcharphboolphbool* __result152__;
void* right_value394;
void* right_value395;
void* right_value396;
void* right_value397;
struct optional$2tuple3$3sTypephcharphboolphbool* __result153__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&head_111, 0, sizeof(char*));
memset(&head_sline_112, 0, sizeof(int));
memset(&right_value139, 0, sizeof(void*));
memset(&type_name_113, 0, sizeof(char*));
memset(&right_value140, 0, sizeof(void*));
memset(&constant_114, 0, sizeof(_Bool));
memset(&static__115, 0, sizeof(_Bool));
memset(&exception__116, 0, sizeof(_Bool));
memset(&volatile__117, 0, sizeof(_Bool));
memset(&register__118, 0, sizeof(_Bool));
memset(&unsigned__119, 0, sizeof(_Bool));
memset(&long__120, 0, sizeof(_Bool));
memset(&long_long_121, 0, sizeof(_Bool));
memset(&short__122, 0, sizeof(_Bool));
memset(&restrict__123, 0, sizeof(_Bool));
memset(&struct__124, 0, sizeof(_Bool));
memset(&union__125, 0, sizeof(_Bool));
memset(&enum__126, 0, sizeof(_Bool));
memset(&no_heap_127, 0, sizeof(_Bool));
memset(&extern__128, 0, sizeof(_Bool));
memset(&inline__129, 0, sizeof(_Bool));
memset(&come_mem_core__130, 0, sizeof(_Bool));
memset(&alignas__131, 0, sizeof(struct sNode*));
memset(&anonymous_type_132, 0, sizeof(_Bool));
memset(&anonymous_name_133, 0, sizeof(_Bool));
memset(&p_134, 0, sizeof(char*));
memset(&sline_135, 0, sizeof(int));
memset(&right_value141, 0, sizeof(void*));
memset(&right_value142, 0, sizeof(void*));
memset(&right_value143, 0, sizeof(void*));
memset(&right_value144, 0, sizeof(void*));
memset(&p_136, 0, sizeof(char*));
memset(&sline_137, 0, sizeof(int));
memset(&right_value145, 0, sizeof(void*));
memset(&right_value148, 0, sizeof(void*));
memset(&right_value149, 0, sizeof(void*));
memset(&right_value150, 0, sizeof(void*));
memset(&p_138, 0, sizeof(char*));
memset(&sline_139, 0, sizeof(int));
memset(&right_value151, 0, sizeof(void*));
memset(&right_value152, 0, sizeof(void*));
memset(&right_value153, 0, sizeof(void*));
memset(&right_value154, 0, sizeof(void*));
memset(&right_value155, 0, sizeof(void*));
memset(&p_140, 0, sizeof(char*));
memset(&sline_141, 0, sizeof(int));
memset(&right_value156, 0, sizeof(void*));
memset(&right_value157, 0, sizeof(void*));
memset(&right_value158, 0, sizeof(void*));
memset(&right_value159, 0, sizeof(void*));
memset(&p_142, 0, sizeof(char*));
memset(&sline_143, 0, sizeof(int));
memset(&right_value160, 0, sizeof(void*));
memset(&right_value161, 0, sizeof(void*));
memset(&right_value162, 0, sizeof(void*));
memset(&right_value163, 0, sizeof(void*));
memset(&right_value164, 0, sizeof(void*));
memset(&p_144, 0, sizeof(char*));
memset(&sline_145, 0, sizeof(int));
memset(&right_value165, 0, sizeof(void*));
memset(&right_value166, 0, sizeof(void*));
memset(&right_value167, 0, sizeof(void*));
memset(&right_value168, 0, sizeof(void*));
memset(&right_value169, 0, sizeof(void*));
memset(&right_value170, 0, sizeof(void*));
memset(&right_value171, 0, sizeof(void*));
memset(&p_146, 0, sizeof(char*));
memset(&sline_147, 0, sizeof(int));
memset(&right_value172, 0, sizeof(void*));
memset(&right_value173, 0, sizeof(void*));
memset(&right_value174, 0, sizeof(void*));
memset(&right_value175, 0, sizeof(void*));
memset(&right_value176, 0, sizeof(void*));
memset(&right_value177, 0, sizeof(void*));
memset(&right_value178, 0, sizeof(void*));
memset(&exp_148, 0, sizeof(struct sNode*));
memset(&right_value179, 0, sizeof(void*));
memset(&right_value180, 0, sizeof(void*));
memset(&right_value181, 0, sizeof(void*));
memset(&right_value182, 0, sizeof(void*));
memset(&right_value183, 0, sizeof(void*));
memset(&right_value184, 0, sizeof(void*));
memset(&right_value185, 0, sizeof(void*));
memset(&right_value186, 0, sizeof(void*));
memset(&right_value187, 0, sizeof(void*));
memset(&right_value188, 0, sizeof(void*));
memset(&p_149, 0, sizeof(char*));
memset(&sline_150, 0, sizeof(int));
memset(&right_value189, 0, sizeof(void*));
memset(&right_value190, 0, sizeof(void*));
memset(&right_value191, 0, sizeof(void*));
memset(&right_value192, 0, sizeof(void*));
memset(&right_value193, 0, sizeof(void*));
memset(&right_value194, 0, sizeof(void*));
memset(&p_151, 0, sizeof(char*));
memset(&sline_152, 0, sizeof(int));
memset(&right_value195, 0, sizeof(void*));
memset(&p_153, 0, sizeof(char*));
memset(&sline_154, 0, sizeof(int));
memset(&right_value196, 0, sizeof(void*));
memset(&right_value197, 0, sizeof(void*));
memset(&right_value198, 0, sizeof(void*));
memset(&p_155, 0, sizeof(char*));
memset(&sline_156, 0, sizeof(int));
memset(&right_value199, 0, sizeof(void*));
memset(&right_value200, 0, sizeof(void*));
memset(&right_value201, 0, sizeof(void*));
memset(&right_value202, 0, sizeof(void*));
memset(&right_value203, 0, sizeof(void*));
memset(&right_value204, 0, sizeof(void*));
memset(&right_value205, 0, sizeof(void*));
memset(&right_value206, 0, sizeof(void*));
memset(&right_value207, 0, sizeof(void*));
memset(&p_157, 0, sizeof(char*));
memset(&sline_158, 0, sizeof(int));
memset(&right_value208, 0, sizeof(void*));
memset(&right_value209, 0, sizeof(void*));
memset(&pointer_num_159, 0, sizeof(int));
memset(&lambda_flag_160, 0, sizeof(_Bool));
memset(&pX_161, 0, sizeof(char*));
memset(&slineX_162, 0, sizeof(int));
memset(&right_value210, 0, sizeof(void*));
memset(&type_163, 0, sizeof(struct sType*));
memset(&var_name_164, 0, sizeof(char*));
memset(&function_pointer_flag_165, 0, sizeof(_Bool));
memset(&p_166, 0, sizeof(char*));
memset(&sline_167, 0, sizeof(int));
memset(&right_value211, 0, sizeof(void*));
memset(&word_168, 0, sizeof(char*));
memset(&var_name_between_brace_169, 0, sizeof(_Bool));
memset(&p_170, 0, sizeof(char*));
memset(&sline_171, 0, sizeof(int));
memset(&right_value212, 0, sizeof(void*));
memset(&word_172, 0, sizeof(char*));
memset(&right_value213, 0, sizeof(void*));
memset(&right_value214, 0, sizeof(void*));
memset(&node_174, 0, sizeof(struct sNode*));
memset(&right_value215, 0, sizeof(void*));
memset(&right_value216, 0, sizeof(void*));
memset(&right_value217, 0, sizeof(void*));
memset(&right_value218, 0, sizeof(void*));
memset(&pointer_num_175, 0, sizeof(int));
memset(&right_value219, 0, sizeof(void*));
memset(&right_value220, 0, sizeof(void*));
memset(&right_value221, 0, sizeof(void*));
memset(&right_value222, 0, sizeof(void*));
memset(&node_176, 0, sizeof(struct sNode*));
memset(&right_value223, 0, sizeof(void*));
memset(&right_value224, 0, sizeof(void*));
memset(&right_value225, 0, sizeof(void*));
memset(&right_value226, 0, sizeof(void*));
memset(&right_value227, 0, sizeof(void*));
memset(&right_value228, 0, sizeof(void*));
memset(&right_value229, 0, sizeof(void*));
memset(&right_value230, 0, sizeof(void*));
memset(&node_177, 0, sizeof(struct sNode*));
memset(&right_value231, 0, sizeof(void*));
memset(&right_value232, 0, sizeof(void*));
memset(&right_value233, 0, sizeof(void*));
memset(&right_value234, 0, sizeof(void*));
memset(&pointer_num_178, 0, sizeof(int));
memset(&right_value235, 0, sizeof(void*));
memset(&right_value236, 0, sizeof(void*));
memset(&right_value237, 0, sizeof(void*));
memset(&right_value238, 0, sizeof(void*));
memset(&right_value239, 0, sizeof(void*));
memset(&right_value240, 0, sizeof(void*));
memset(&right_value241, 0, sizeof(void*));
memset(&right_value242, 0, sizeof(void*));
memset(&right_value243, 0, sizeof(void*));
memset(&right_value244, 0, sizeof(void*));
memset(&no_comma_181, 0, sizeof(_Bool));
memset(&right_value245, 0, sizeof(void*));
memset(&node_182, 0, sizeof(struct sNode*));
memset(&result_type_183, 0, sizeof(struct sType*));
memset(&right_value255, 0, sizeof(void*));
memset(&right_value256, 0, sizeof(void*));
memset(&right_value257, 0, sizeof(void*));
memset(&i_193, 0, sizeof(int));
memset(&right_value262, 0, sizeof(void*));
memset(&right_value263, 0, sizeof(void*));
memset(&right_value264, 0, sizeof(void*));
memset(&right_value265, 0, sizeof(void*));
memset(&right_value266, 0, sizeof(void*));
memset(&right_value267, 0, sizeof(void*));
memset(&right_value268, 0, sizeof(void*));
memset(&right_value269, 0, sizeof(void*));
memset(&param_types_198, 0, sizeof(struct list$1sTypeph*));
memset(&param_names_199, 0, sizeof(struct list$1charph*));
memset(&param_default_parametors_200, 0, sizeof(struct list$1charph*));
memset(&var_args_201, 0, sizeof(_Bool));
memset(&param_types_198, 0, sizeof(struct list$1sTypeph*));
memset(&param_names_199, 0, sizeof(struct list$1charph*));
memset(&param_default_parametors_200, 0, sizeof(struct list$1charph*));
memset(&var_args_201, 0, sizeof(_Bool));
memset(&right_value270, 0, sizeof(void*));
memset(&right_value271, 0, sizeof(void*));
memset(&right_value272, 0, sizeof(void*));
memset(&right_value274, 0, sizeof(void*));
memset(&result_type_202, 0, sizeof(struct sType*));
memset(&right_value275, 0, sizeof(void*));
memset(&right_value276, 0, sizeof(void*));
memset(&right_value277, 0, sizeof(void*));
memset(&i_203, 0, sizeof(int));
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
memset(&right_value290, 0, sizeof(void*));
memset(&right_value291, 0, sizeof(void*));
memset(&param_types_205, 0, sizeof(struct list$1sTypeph*));
memset(&param_names_206, 0, sizeof(struct list$1charph*));
memset(&param_default_parametors_207, 0, sizeof(struct list$1charph*));
memset(&var_args_208, 0, sizeof(_Bool));
memset(&param_types_205, 0, sizeof(struct list$1sTypeph*));
memset(&param_names_206, 0, sizeof(struct list$1charph*));
memset(&param_default_parametors_207, 0, sizeof(struct list$1charph*));
memset(&var_args_208, 0, sizeof(_Bool));
memset(&right_value292, 0, sizeof(void*));
memset(&right_value293, 0, sizeof(void*));
memset(&right_value294, 0, sizeof(void*));
memset(&right_value295, 0, sizeof(void*));
memset(&right_value296, 0, sizeof(void*));
memset(&exp_209, 0, sizeof(struct sNode*));
memset(&right_value297, 0, sizeof(void*));
memset(&right_value298, 0, sizeof(void*));
memset(&right_value299, 0, sizeof(void*));
memset(&right_value300, 0, sizeof(void*));
memset(&right_value301, 0, sizeof(void*));
memset(&right_value302, 0, sizeof(void*));
memset(&come_value_210, 0, sizeof(struct CVALUE*));
memset(&right_value303, 0, sizeof(void*));
memset(&right_value304, 0, sizeof(void*));
memset(&right_value305, 0, sizeof(void*));
memset(&right_value306, 0, sizeof(void*));
memset(&right_value307, 0, sizeof(void*));
memset(&no_comma_213, 0, sizeof(_Bool));
memset(&right_value308, 0, sizeof(void*));
memset(&node_214, 0, sizeof(struct sNode*));
memset(&right_value309, 0, sizeof(void*));
memset(&right_value310, 0, sizeof(void*));
memset(&right_value311, 0, sizeof(void*));
memset(&right_value312, 0, sizeof(void*));
memset(&i_215, 0, sizeof(int));
memset(&right_value313, 0, sizeof(void*));
memset(&right_value314, 0, sizeof(void*));
memset(&right_value315, 0, sizeof(void*));
memset(&right_value316, 0, sizeof(void*));
memset(&right_value326, 0, sizeof(void*));
memset(&right_value327, 0, sizeof(void*));
memset(&right_value328, 0, sizeof(void*));
memset(&right_value329, 0, sizeof(void*));
memset(&right_value330, 0, sizeof(void*));
memset(&right_value331, 0, sizeof(void*));
memset(&right_value332, 0, sizeof(void*));
memset(&right_value333, 0, sizeof(void*));
memset(&generics_type_220, 0, sizeof(struct sType*));
memset(&var_name_221, 0, sizeof(char*));
memset(&err_222, 0, sizeof(_Bool));
memset(&generics_type_220, 0, sizeof(struct sType*));
memset(&var_name_221, 0, sizeof(char*));
memset(&err_222, 0, sizeof(_Bool));
memset(&right_value334, 0, sizeof(void*));
memset(&right_value335, 0, sizeof(void*));
memset(&right_value336, 0, sizeof(void*));
memset(&right_value337, 0, sizeof(void*));
memset(&right_value338, 0, sizeof(void*));
memset(&right_value339, 0, sizeof(void*));
memset(&right_value340, 0, sizeof(void*));
memset(&right_value341, 0, sizeof(void*));
memset(&right_value342, 0, sizeof(void*));
memset(&right_value343, 0, sizeof(void*));
memset(&new_name_223, 0, sizeof(char*));
memset(&right_value344, 0, sizeof(void*));
memset(&klass_224, 0, sizeof(struct sClass*));
memset(&right_value355, 0, sizeof(void*));
memset(&right_value356, 0, sizeof(void*));
memset(&right_value357, 0, sizeof(void*));
memset(&right_value358, 0, sizeof(void*));
memset(&right_value359, 0, sizeof(void*));
memset(&right_value360, 0, sizeof(void*));
memset(&types_271, 0, sizeof(struct list$1sTypeph*));
memset(&right_value361, 0, sizeof(void*));
memset(&right_value362, 0, sizeof(void*));
memset(&type2_272, 0, sizeof(struct sType*));
memset(&name_273, 0, sizeof(char*));
memset(&err_274, 0, sizeof(_Bool));
memset(&type2_272, 0, sizeof(struct sType*));
memset(&name_273, 0, sizeof(char*));
memset(&err_274, 0, sizeof(_Bool));
memset(&right_value363, 0, sizeof(void*));
memset(&right_value364, 0, sizeof(void*));
memset(&right_value365, 0, sizeof(void*));
memset(&right_value366, 0, sizeof(void*));
memset(&right_value367, 0, sizeof(void*));
memset(&num_tuples_275, 0, sizeof(int));
memset(&right_value368, 0, sizeof(void*));
memset(&right_value369, 0, sizeof(void*));
memset(&right_value370, 0, sizeof(void*));
memset(&o2_saved_276, 0, sizeof(struct list$1sTypeph*));
memset(&it_277, 0, sizeof(struct sType*));
memset(&right_value371, 0, sizeof(void*));
memset(&right_value372, 0, sizeof(void*));
memset(&right_value373, 0, sizeof(void*));
memset(&new_name_278, 0, sizeof(char*));
memset(&right_value374, 0, sizeof(void*));
memset(&right_value375, 0, sizeof(void*));
memset(&right_value376, 0, sizeof(void*));
memset(&right_value377, 0, sizeof(void*));
memset(&no_comma_281, 0, sizeof(_Bool));
memset(&right_value378, 0, sizeof(void*));
memset(&node_282, 0, sizeof(struct sNode*));
memset(&right_value379, 0, sizeof(void*));
memset(&node_283, 0, sizeof(struct sNode*));
memset(&right_value380, 0, sizeof(void*));
memset(&right_value381, 0, sizeof(void*));
memset(&asm_name_284, 0, sizeof(char*));
memset(&right_value382, 0, sizeof(void*));
memset(&right_value383, 0, sizeof(void*));
memset(&type2_285, 0, sizeof(struct sType*));
memset(&right_value384, 0, sizeof(void*));
memset(&right_value385, 0, sizeof(void*));
memset(&right_value386, 0, sizeof(void*));
memset(&right_value387, 0, sizeof(void*));
memset(&right_value388, 0, sizeof(void*));
memset(&right_value389, 0, sizeof(void*));
memset(&right_value390, 0, sizeof(void*));
memset(&right_value391, 0, sizeof(void*));
memset(&right_value392, 0, sizeof(void*));
memset(&right_value393, 0, sizeof(void*));
memset(&right_value394, 0, sizeof(void*));
memset(&right_value395, 0, sizeof(void*));
memset(&right_value396, 0, sizeof(void*));
memset(&right_value397, 0, sizeof(void*));
    head_111=info->p;
    head_sline_112=info->sline;
    info->define_struct=(_Bool)0;
    type_name_113=(char*)come_increment_ref_count(optional$2charphbool_value(((struct optional$2charphbool*)(right_value139=parse_word(info)))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value139);
    if(right_value139 && right_value139 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value139, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value139;
    __freed_obj__ = 0;
    while(_while_condtional28=string_operator_equals(type_name_113,"__extension__"),    _while_condtional28) {
        __dec_obj57=type_name_113;
        type_name_113=(char*)come_increment_ref_count(optional$2charphbool_value(((struct optional$2charphbool*)(right_value140=parse_word(info)))));
        if(__dec_obj57) { __dec_obj57 = come_decrement_ref_count(__dec_obj57, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value140);
        if(right_value140 && right_value140 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value140, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value140;
        __freed_obj__ = 0;
    }
    constant_114=(_Bool)0;
    static__115=(_Bool)0;
    exception__116=(_Bool)0;
    volatile__117=(_Bool)0;
    register__118=(_Bool)0;
    unsigned__119=(_Bool)0;
    long__120=(_Bool)0;
    long_long_121=(_Bool)0;
    short__122=(_Bool)0;
    restrict__123=(_Bool)0;
    struct__124=(_Bool)0;
    union__125=(_Bool)0;
    enum__126=(_Bool)0;
    no_heap_127=(_Bool)0;
    extern__128=(_Bool)0;
    inline__129=(_Bool)0;
    come_mem_core__130=(_Bool)0;
    alignas__131=((void*)0);
    anonymous_type_132=(_Bool)0;
    anonymous_name_133=(_Bool)0;
    while(_while_condtional29=(_Bool)1,    _while_condtional29) {
        if(_if_conditional207=string_operator_equals(type_name_113,"struct"),        _if_conditional207) {
            struct__124=(_Bool)1;
            if(_if_conditional208=*info->p==123,            _if_conditional208) {
                p_134=info->p;
                sline_135=info->sline;
                ((char*)(right_value141=skip_block(info)));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value141);
                if(right_value141 && right_value141 != __result_obj__ && !__freed_obj__) { right_value141 = come_decrement_ref_count(right_value141, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value141;
                __freed_obj__ = 0;
                if(_if_conditional209=*info->p==59,                _if_conditional209) {
                    anonymous_name_133=(_Bool)1;
                    anonymous_type_132=(_Bool)1;
                    __dec_obj58=type_name_113;
                    type_name_113=(char*)come_increment_ref_count(((char*)(right_value142=__builtin_string(""))));
                    if(__dec_obj58) { __dec_obj58 = come_decrement_ref_count(__dec_obj58, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value142);
                    if(right_value142 && right_value142 != __result_obj__ && !__freed_obj__) { right_value142 = come_decrement_ref_count(right_value142, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value142;
                    __freed_obj__ = 0;
                    info->p=p_134;
                    info->sline=sline_135;
                    break;
                }
                else {
                    anonymous_type_132=(_Bool)1;
                    __dec_obj59=type_name_113;
                    type_name_113=(char*)come_increment_ref_count(((char*)(right_value143=__builtin_string(""))));
                    if(__dec_obj59) { __dec_obj59 = come_decrement_ref_count(__dec_obj59, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value143);
                    if(right_value143 && right_value143 != __result_obj__ && !__freed_obj__) { right_value143 = come_decrement_ref_count(right_value143, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value143;
                    __freed_obj__ = 0;
                    info->p=p_134;
                    info->sline=sline_135;
                    break;
                }
            }
            parse_sharp_v5(info);
            __dec_obj60=type_name_113;
            type_name_113=(char*)come_increment_ref_count(optional$2charphbool_value(((struct optional$2charphbool*)(right_value144=parse_word(info)))));
            if(__dec_obj60) { __dec_obj60 = come_decrement_ref_count(__dec_obj60, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value144);
            if(right_value144 && right_value144 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value144, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value144;
            __freed_obj__ = 0;
            parse_sharp_v5(info);
            if(_if_conditional210=*info->p==60,            _if_conditional210) {
                p_136=info->p;
                sline_137=info->sline;
                info->p++;
                skip_spaces_and_lf(info);
                while(_while_condtional30=(_Bool)1,                _while_condtional30) {
                    if(_if_conditional211=*info->p==62,                    _if_conditional211) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        if(_if_conditional212=*info->p==123,                        _if_conditional212) {
                        }
                        else {
                            info->p=p_136;
                            info->sline=sline_137;
                        }
                        break;
                    }
                    else {
                        if(_if_conditional213=*info->p==0,                        _if_conditional213) {
                            err_msg(info,"invalid struct definition");
                            __result81__ = __result_obj__ = ((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value150=optional$2tuple3$3sTypephcharphboolphbool_initialize(((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value149=(struct optional$2tuple3$3sTypephcharphboolphbool*)come_calloc(1, sizeof(struct optional$2tuple3$3sTypephcharphboolphbool)*(1), "05function4.c", 760))),(struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value148=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value145=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 760)))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)))),(_Bool)0)));
                            if(type_name_113 && !__freed_obj__) { type_name_113 = come_decrement_ref_count(type_name_113, (void*)0, (void*)0, 0, 0, 0); }
                            if(alignas__131 && !__freed_obj__) { alignas__131 = come_decrement_ref_count(alignas__131, ((struct sNode*)alignas__131)->finalize, ((struct sNode*)alignas__131)->_protocol_obj, 0, 0, 0); } 
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value145);
                            if(right_value145 && right_value145 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value145, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value145;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value148);
                            if(right_value148 && right_value148 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value148, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value148;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value149);
                            if(right_value149 && right_value149 != __result_obj__ && !__freed_obj__) { right_value149 = come_decrement_ref_count(right_value149, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[2] = right_value149;
                            __freed_obj__ = 0;
                            return __result81__;
                        }
                        else {
                            info->p++;
                        }
                    }
                }
            }
            if(_if_conditional216=*info->p==123,            _if_conditional216) {
                p_138=info->p;
                sline_139=info->sline;
                ((char*)(right_value151=skip_block(info)));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value151);
                if(right_value151 && right_value151 != __result_obj__ && !__freed_obj__) { right_value151 = come_decrement_ref_count(right_value151, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value151;
                __freed_obj__ = 0;
                if(_if_conditional217=*info->p==59,                _if_conditional217) {
                    info->p=head_111;
                    info->sline=head_sline_112;
                    info->define_struct=(_Bool)1;
                    __result82__ = __result_obj__ = ((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value155=optional$2tuple3$3sTypephcharphboolphbool_initialize(((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value154=(struct optional$2tuple3$3sTypephcharphboolphbool*)come_calloc(1, sizeof(struct optional$2tuple3$3sTypephcharphboolphbool)*(1), "05function4.c", 778))),(struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value153=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value152=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 778)))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)))),(_Bool)0)));
                    if(type_name_113 && !__freed_obj__) { type_name_113 = come_decrement_ref_count(type_name_113, (void*)0, (void*)0, 0, 0, 0); }
                    if(alignas__131 && !__freed_obj__) { alignas__131 = come_decrement_ref_count(alignas__131, ((struct sNode*)alignas__131)->finalize, ((struct sNode*)alignas__131)->_protocol_obj, 0, 0, 0); } 
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value152);
                    if(right_value152 && right_value152 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value152, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value152;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value153);
                    if(right_value153 && right_value153 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value153, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value153;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value154);
                    if(right_value154 && right_value154 != __result_obj__ && !__freed_obj__) { right_value154 = come_decrement_ref_count(right_value154, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[2] = right_value154;
                    __freed_obj__ = 0;
                    return __result82__;
                }
                else {
                    anonymous_type_132=(_Bool)1;
                    info->p=p_138;
                    info->sline=sline_139;
                    break;
                }
            }
        }
        else {
            if(_if_conditional218=string_operator_equals(type_name_113,"union"),            _if_conditional218) {
                union__125=(_Bool)1;
                if(_if_conditional219=*info->p==123,                _if_conditional219) {
                    p_140=info->p;
                    sline_141=info->sline;
                    ((char*)(right_value156=skip_block(info)));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value156);
                    if(right_value156 && right_value156 != __result_obj__ && !__freed_obj__) { right_value156 = come_decrement_ref_count(right_value156, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value156;
                    __freed_obj__ = 0;
                    if(_if_conditional220=*info->p==59,                    _if_conditional220) {
                        info->p=head_111;
                        info->sline=head_sline_112;
                        info->define_struct=(_Bool)0;
                        anonymous_type_132=(_Bool)1;
                        __dec_obj64=type_name_113;
                        type_name_113=(char*)come_increment_ref_count(((char*)(right_value157=__builtin_string(""))));
                        if(__dec_obj64) { __dec_obj64 = come_decrement_ref_count(__dec_obj64, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value157);
                        if(right_value157 && right_value157 != __result_obj__ && !__freed_obj__) { right_value157 = come_decrement_ref_count(right_value157, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value157;
                        __freed_obj__ = 0;
                        info->p=p_140;
                        info->sline=sline_141;
                        break;
                    }
                    else {
                        anonymous_type_132=(_Bool)1;
                        __dec_obj65=type_name_113;
                        type_name_113=(char*)come_increment_ref_count(((char*)(right_value158=__builtin_string(""))));
                        if(__dec_obj65) { __dec_obj65 = come_decrement_ref_count(__dec_obj65, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value158);
                        if(right_value158 && right_value158 != __result_obj__ && !__freed_obj__) { right_value158 = come_decrement_ref_count(right_value158, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value158;
                        __freed_obj__ = 0;
                        info->p=p_140;
                        info->sline=sline_141;
                        break;
                    }
                }
                parse_sharp_v5(info);
                __dec_obj66=type_name_113;
                type_name_113=(char*)come_increment_ref_count(optional$2charphbool_value(((struct optional$2charphbool*)(right_value159=parse_word(info)))));
                if(__dec_obj66) { __dec_obj66 = come_decrement_ref_count(__dec_obj66, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value159);
                if(right_value159 && right_value159 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value159, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value159;
                __freed_obj__ = 0;
                parse_sharp_v5(info);
                if(_if_conditional221=*info->p==123,                _if_conditional221) {
                    p_142=info->p;
                    sline_143=info->sline;
                    ((char*)(right_value160=skip_block(info)));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value160);
                    if(right_value160 && right_value160 != __result_obj__ && !__freed_obj__) { right_value160 = come_decrement_ref_count(right_value160, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value160;
                    __freed_obj__ = 0;
                    if(_if_conditional222=*info->p==59,                    _if_conditional222) {
                        info->p=head_111;
                        info->sline=head_sline_112;
                        info->define_struct=(_Bool)1;
                        __result83__ = __result_obj__ = ((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value164=optional$2tuple3$3sTypephcharphboolphbool_initialize(((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value163=(struct optional$2tuple3$3sTypephcharphboolphbool*)come_calloc(1, sizeof(struct optional$2tuple3$3sTypephcharphboolphbool)*(1), "05function4.c", 833))),(struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value162=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value161=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 833)))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)))),(_Bool)0)));
                        if(type_name_113 && !__freed_obj__) { type_name_113 = come_decrement_ref_count(type_name_113, (void*)0, (void*)0, 0, 0, 0); }
                        if(alignas__131 && !__freed_obj__) { alignas__131 = come_decrement_ref_count(alignas__131, ((struct sNode*)alignas__131)->finalize, ((struct sNode*)alignas__131)->_protocol_obj, 0, 0, 0); } 
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value161);
                        if(right_value161 && right_value161 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value161, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value161;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value162);
                        if(right_value162 && right_value162 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value162, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value162;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value163);
                        if(right_value163 && right_value163 != __result_obj__ && !__freed_obj__) { right_value163 = come_decrement_ref_count(right_value163, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[2] = right_value163;
                        __freed_obj__ = 0;
                        return __result83__;
                    }
                    else {
                        anonymous_type_132=(_Bool)1;
                        info->p=p_142;
                        info->sline=sline_143;
                        break;
                    }
                }
            }
            else {
                if(_if_conditional223=string_operator_equals(type_name_113,"enum"),                _if_conditional223) {
                    enum__126=(_Bool)1;
                    parse_sharp_v5(info);
                    if(_if_conditional224=*info->p==123,                    _if_conditional224) {
                        p_144=info->p;
                        sline_145=info->sline;
                        ((char*)(right_value165=skip_block(info)));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value165);
                        if(right_value165 && right_value165 != __result_obj__ && !__freed_obj__) { right_value165 = come_decrement_ref_count(right_value165, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value165;
                        __freed_obj__ = 0;
                        if(_if_conditional225=*info->p==59,                        _if_conditional225) {
                            info->p=head_111;
                            info->sline=head_sline_112;
                            info->define_struct=(_Bool)1;
                            __result84__ = __result_obj__ = ((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value169=optional$2tuple3$3sTypephcharphboolphbool_initialize(((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value168=(struct optional$2tuple3$3sTypephcharphboolphbool*)come_calloc(1, sizeof(struct optional$2tuple3$3sTypephcharphboolphbool)*(1), "05function4.c", 858))),(struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value167=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value166=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 858)))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)))),(_Bool)0)));
                            if(type_name_113 && !__freed_obj__) { type_name_113 = come_decrement_ref_count(type_name_113, (void*)0, (void*)0, 0, 0, 0); }
                            if(alignas__131 && !__freed_obj__) { alignas__131 = come_decrement_ref_count(alignas__131, ((struct sNode*)alignas__131)->finalize, ((struct sNode*)alignas__131)->_protocol_obj, 0, 0, 0); } 
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value166);
                            if(right_value166 && right_value166 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value166, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value166;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value167);
                            if(right_value167 && right_value167 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value167, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value167;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value168);
                            if(right_value168 && right_value168 != __result_obj__ && !__freed_obj__) { right_value168 = come_decrement_ref_count(right_value168, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[2] = right_value168;
                            __freed_obj__ = 0;
                            return __result84__;
                        }
                        else {
                            anonymous_type_132=(_Bool)1;
                            __dec_obj67=type_name_113;
                            type_name_113=(char*)come_increment_ref_count(((char*)(right_value170=__builtin_string(""))));
                            if(__dec_obj67) { __dec_obj67 = come_decrement_ref_count(__dec_obj67, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value170);
                            if(right_value170 && right_value170 != __result_obj__ && !__freed_obj__) { right_value170 = come_decrement_ref_count(right_value170, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value170;
                            __freed_obj__ = 0;
                            info->p=p_144;
                            info->sline=sline_145;
                            break;
                        }
                    }
                    parse_sharp_v5(info);
                    __dec_obj68=type_name_113;
                    type_name_113=(char*)come_increment_ref_count(optional$2charphbool_value(((struct optional$2charphbool*)(right_value171=parse_word(info)))));
                    if(__dec_obj68) { __dec_obj68 = come_decrement_ref_count(__dec_obj68, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value171);
                    if(right_value171 && right_value171 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value171, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value171;
                    __freed_obj__ = 0;
                    parse_sharp_v5(info);
                    if(_if_conditional226=*info->p==123,                    _if_conditional226) {
                        p_146=info->p;
                        sline_147=info->sline;
                        ((char*)(right_value172=skip_block(info)));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value172);
                        if(right_value172 && right_value172 != __result_obj__ && !__freed_obj__) { right_value172 = come_decrement_ref_count(right_value172, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value172;
                        __freed_obj__ = 0;
                        if(_if_conditional227=*info->p==59,                        _if_conditional227) {
                            info->p=head_111;
                            info->sline=head_sline_112;
                            info->define_struct=(_Bool)1;
                            __result85__ = __result_obj__ = ((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value176=optional$2tuple3$3sTypephcharphboolphbool_initialize(((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value175=(struct optional$2tuple3$3sTypephcharphboolphbool*)come_calloc(1, sizeof(struct optional$2tuple3$3sTypephcharphboolphbool)*(1), "05function4.c", 885))),(struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value174=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value173=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 885)))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)))),(_Bool)0)));
                            if(type_name_113 && !__freed_obj__) { type_name_113 = come_decrement_ref_count(type_name_113, (void*)0, (void*)0, 0, 0, 0); }
                            if(alignas__131 && !__freed_obj__) { alignas__131 = come_decrement_ref_count(alignas__131, ((struct sNode*)alignas__131)->finalize, ((struct sNode*)alignas__131)->_protocol_obj, 0, 0, 0); } 
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value173);
                            if(right_value173 && right_value173 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value173, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value173;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value174);
                            if(right_value174 && right_value174 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value174, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value174;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value175);
                            if(right_value175 && right_value175 != __result_obj__ && !__freed_obj__) { right_value175 = come_decrement_ref_count(right_value175, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[2] = right_value175;
                            __freed_obj__ = 0;
                            return __result85__;
                        }
                        else {
                            anonymous_type_132=(_Bool)1;
                            info->p=p_146;
                            info->sline=sline_147;
                            break;
                        }
                    }
                }
                else {
                    if(_if_conditional228=string_operator_equals(type_name_113,"_Alignas"),                    _if_conditional228) {
                        optional$2intbool_value(((struct optional$2intbool*)(right_value177=expected_next_character(40,info))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value177);
                        if(right_value177 && right_value177 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value177, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value177;
                        __freed_obj__ = 0;
                        exp_148=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value178=expression_v13(info))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value178);
                        if(right_value178 && right_value178 != __result_obj__ && !__freed_obj__) { right_value178 = come_decrement_ref_count(right_value178, ((struct sNode*)right_value178)->finalize, ((struct sNode*)right_value178)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[1] = right_value178;
                        __freed_obj__ = 0;
                        __dec_obj69=alignas__131;
                        alignas__131=(struct sNode*)come_increment_ref_count(exp_148);
                        if(__dec_obj69) { __dec_obj69 = come_decrement_ref_count(__dec_obj69, ((struct sNode*)__dec_obj69)->finalize, ((struct sNode*)__dec_obj69)->_protocol_obj, 0,0,0); }
                        optional$2intbool_value(((struct optional$2intbool*)(right_value179=expected_next_character(41,info))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value179);
                        if(right_value179 && right_value179 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value179, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[2] = right_value179;
                        __freed_obj__ = 0;
                        __dec_obj70=type_name_113;
                        type_name_113=(char*)come_increment_ref_count(optional$2charphbool_value(((struct optional$2charphbool*)(right_value180=parse_word(info)))));
                        if(__dec_obj70) { __dec_obj70 = come_decrement_ref_count(__dec_obj70, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value180);
                        if(right_value180 && right_value180 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value180, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[3] = right_value180;
                        __freed_obj__ = 0;
                        if(exp_148 && !__freed_obj__) { exp_148 = come_decrement_ref_count(exp_148, ((struct sNode*)exp_148)->finalize, ((struct sNode*)exp_148)->_protocol_obj, 0, 0, 0); } 
                    }
                    else {
                        if(_if_conditional229=string_operator_equals(type_name_113,"const"),                        _if_conditional229) {
                            constant_114=(_Bool)1;
                            __dec_obj71=type_name_113;
                            type_name_113=(char*)come_increment_ref_count(optional$2charphbool_value(((struct optional$2charphbool*)(right_value181=parse_word(info)))));
                            if(__dec_obj71) { __dec_obj71 = come_decrement_ref_count(__dec_obj71, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value181);
                            if(right_value181 && right_value181 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value181, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value181;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional230=string_operator_equals(type_name_113,"exception"),                            _if_conditional230) {
                                exception__116=(_Bool)1;
                                __dec_obj72=type_name_113;
                                type_name_113=(char*)come_increment_ref_count(optional$2charphbool_value(((struct optional$2charphbool*)(right_value182=parse_word(info)))));
                                if(__dec_obj72) { __dec_obj72 = come_decrement_ref_count(__dec_obj72, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value182);
                                if(right_value182 && right_value182 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value182, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value182;
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional231=string_operator_equals(type_name_113,"static"),                                _if_conditional231) {
                                    static__115=(_Bool)1;
                                    __dec_obj73=type_name_113;
                                    type_name_113=(char*)come_increment_ref_count(optional$2charphbool_value(((struct optional$2charphbool*)(right_value183=parse_word(info)))));
                                    if(__dec_obj73) { __dec_obj73 = come_decrement_ref_count(__dec_obj73, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value183);
                                    if(right_value183 && right_value183 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value183, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value183;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    if(_if_conditional232=string_operator_equals(type_name_113,"come_mem_core"),                                    _if_conditional232) {
                                        come_mem_core__130=(_Bool)1;
                                        __dec_obj74=type_name_113;
                                        type_name_113=(char*)come_increment_ref_count(optional$2charphbool_value(((struct optional$2charphbool*)(right_value184=parse_word(info)))));
                                        if(__dec_obj74) { __dec_obj74 = come_decrement_ref_count(__dec_obj74, (void*)0, (void*)0, 0,0,0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value184);
                                        if(right_value184 && right_value184 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value184, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value184;
                                        __freed_obj__ = 0;
                                    }
                                    else {
                                        if(_if_conditional233=string_operator_equals(type_name_113,"extern"),                                        _if_conditional233) {
                                            extern__128=(_Bool)1;
                                            __dec_obj75=type_name_113;
                                            type_name_113=(char*)come_increment_ref_count(optional$2charphbool_value(((struct optional$2charphbool*)(right_value185=parse_word(info)))));
                                            if(__dec_obj75) { __dec_obj75 = come_decrement_ref_count(__dec_obj75, (void*)0, (void*)0, 0,0,0); }
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value185);
                                            if(right_value185 && right_value185 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value185, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[0] = right_value185;
                                            __freed_obj__ = 0;
                                        }
                                        else {
                                            if(_if_conditional234=string_operator_equals(type_name_113,"_Noreturn"),                                            _if_conditional234) {
                                                __dec_obj76=type_name_113;
                                                type_name_113=(char*)come_increment_ref_count(optional$2charphbool_value(((struct optional$2charphbool*)(right_value186=parse_word(info)))));
                                                if(__dec_obj76) { __dec_obj76 = come_decrement_ref_count(__dec_obj76, (void*)0, (void*)0, 0,0,0); }
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value186);
                                                if(right_value186 && right_value186 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value186, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                __right_value_freed_obj[0] = right_value186;
                                                __freed_obj__ = 0;
                                            }
                                            else {
                                                if(_if_conditional235=string_operator_equals(type_name_113,"inline")||string_operator_equals(type_name_113,"__inline")||string_operator_equals(type_name_113,"__inline__")||string_operator_equals(type_name_113,"__always_inline"),                                                _if_conditional235) {
                                                    inline__129=(_Bool)1;
                                                    __dec_obj77=type_name_113;
                                                    type_name_113=(char*)come_increment_ref_count(optional$2charphbool_value(((struct optional$2charphbool*)(right_value187=parse_word(info)))));
                                                    if(__dec_obj77) { __dec_obj77 = come_decrement_ref_count(__dec_obj77, (void*)0, (void*)0, 0,0,0); }
                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value187);
                                                    if(right_value187 && right_value187 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value187, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                    __right_value_freed_obj[0] = right_value187;
                                                    __freed_obj__ = 0;
                                                }
                                                else {
                                                    if(_if_conditional236=string_operator_equals(type_name_113,"volatile"),                                                    _if_conditional236) {
                                                        volatile__117=(_Bool)1;
                                                        __dec_obj78=type_name_113;
                                                        type_name_113=(char*)come_increment_ref_count(optional$2charphbool_value(((struct optional$2charphbool*)(right_value188=parse_word(info)))));
                                                        if(__dec_obj78) { __dec_obj78 = come_decrement_ref_count(__dec_obj78, (void*)0, (void*)0, 0,0,0); }
                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value188);
                                                        if(right_value188 && right_value188 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value188, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                        __right_value_freed_obj[0] = right_value188;
                                                        __freed_obj__ = 0;
                                                    }
                                                    else {
                                                        if(_if_conditional237=string_operator_equals(type_name_113,"long"),                                                        _if_conditional237) {
                                                            {
                                                                p_149=info->p;
                                                                sline_150=info->sline;
                                                                if(_if_conditional238=!xisalpha(*info->p),                                                                _if_conditional238) {
                                                                    info->p=p_149;
                                                                    info->sline=sline_150;
                                                                    __dec_obj79=type_name_113;
                                                                    type_name_113=(char*)come_increment_ref_count(((char*)(right_value189=__builtin_string("long"))));
                                                                    if(__dec_obj79) { __dec_obj79 = come_decrement_ref_count(__dec_obj79, (void*)0, (void*)0, 0,0,0); }
                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value189);
                                                                    if(right_value189 && right_value189 != __result_obj__ && !__freed_obj__) { right_value189 = come_decrement_ref_count(right_value189, (void*)0, (void*)0, 1, 0, 0); }
                                                                    __right_value_freed_obj[0] = right_value189;
                                                                    __freed_obj__ = 0;
                                                                    break;
                                                                }
                                                                else {
                                                                    __dec_obj80=type_name_113;
                                                                    type_name_113=(char*)come_increment_ref_count(optional$2charphbool_value(((struct optional$2charphbool*)(right_value190=parse_word(info)))));
                                                                    if(__dec_obj80) { __dec_obj80 = come_decrement_ref_count(__dec_obj80, (void*)0, (void*)0, 0,0,0); }
                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value190);
                                                                    if(right_value190 && right_value190 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value190, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                    __right_value_freed_obj[0] = right_value190;
                                                                    __freed_obj__ = 0;
                                                                    if(_if_conditional239=string_operator_equals(type_name_113,"unsigned"),                                                                    _if_conditional239) {
                                                                        __dec_obj81=type_name_113;
                                                                        type_name_113=(char*)come_increment_ref_count(optional$2charphbool_value(((struct optional$2charphbool*)(right_value191=parse_word(info)))));
                                                                        if(__dec_obj81) { __dec_obj81 = come_decrement_ref_count(__dec_obj81, (void*)0, (void*)0, 0,0,0); }
                                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value191);
                                                                        if(right_value191 && right_value191 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value191, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                        __right_value_freed_obj[0] = right_value191;
                                                                        __freed_obj__ = 0;
                                                                        if(_if_conditional240=string_operator_equals(type_name_113,"int"),                                                                        _if_conditional240) {
                                                                            long__120=(_Bool)1;
                                                                            break;
                                                                        }
                                                                    }
                                                                    else {
                                                                        if(_if_conditional241=string_operator_equals(type_name_113,"long"),                                                                        _if_conditional241) {
                                                                            p_149=info->p;
                                                                            sline_150=info->sline;
                                                                            if(_if_conditional242=xisalpha(*info->p),                                                                            _if_conditional242) {
                                                                                long_long_121=(_Bool)1;
                                                                                __dec_obj82=type_name_113;
                                                                                type_name_113=(char*)come_increment_ref_count(optional$2charphbool_value(((struct optional$2charphbool*)(right_value192=parse_word(info)))));
                                                                                if(__dec_obj82) { __dec_obj82 = come_decrement_ref_count(__dec_obj82, (void*)0, (void*)0, 0,0,0); }
                                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value192);
                                                                                if(right_value192 && right_value192 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value192, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                                __right_value_freed_obj[0] = right_value192;
                                                                                __freed_obj__ = 0;
                                                                            }
                                                                            else {
                                                                                long__120=(_Bool)1;
                                                                                break;
                                                                            }
                                                                            if(_if_conditional243=string_operator_equals(type_name_113,"int"),                                                                            _if_conditional243) {
                                                                                long_long_121=(_Bool)1;
                                                                                break;
                                                                            }
                                                                            else {
                                                                                if(_if_conditional244=!is_type_name(type_name_113,info),                                                                                _if_conditional244) {
                                                                                    __dec_obj83=type_name_113;
                                                                                    type_name_113=(char*)come_increment_ref_count(((char*)(right_value193=__builtin_string("long"))));
                                                                                    if(__dec_obj83) { __dec_obj83 = come_decrement_ref_count(__dec_obj83, (void*)0, (void*)0, 0,0,0); }
                                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value193);
                                                                                    if(right_value193 && right_value193 != __result_obj__ && !__freed_obj__) { right_value193 = come_decrement_ref_count(right_value193, (void*)0, (void*)0, 1, 0, 0); }
                                                                                    __right_value_freed_obj[0] = right_value193;
                                                                                    __freed_obj__ = 0;
                                                                                    long_long_121=(_Bool)1;
                                                                                    info->p=p_149;
                                                                                    info->sline=sline_150;
                                                                                    break;
                                                                                }
                                                                            }
                                                                        }
                                                                        else {
                                                                            if(_if_conditional245=is_type_name(type_name_113,info),                                                                            _if_conditional245) {
                                                                                if(_if_conditional246=long__120,                                                                                _if_conditional246) {
                                                                                    long_long_121=(_Bool)1;
                                                                                    long__120=(_Bool)0;
                                                                                }
                                                                                else {
                                                                                    long__120=(_Bool)1;
                                                                                }
                                                                                break;
                                                                            }
                                                                            else {
                                                                                info->p=p_149;
                                                                                info->sline=sline_150;
                                                                                __dec_obj84=type_name_113;
                                                                                type_name_113=(char*)come_increment_ref_count(((char*)(right_value194=__builtin_string("long"))));
                                                                                if(__dec_obj84) { __dec_obj84 = come_decrement_ref_count(__dec_obj84, (void*)0, (void*)0, 0,0,0); }
                                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value194);
                                                                                if(right_value194 && right_value194 != __result_obj__ && !__freed_obj__) { right_value194 = come_decrement_ref_count(right_value194, (void*)0, (void*)0, 1, 0, 0); }
                                                                                __right_value_freed_obj[0] = right_value194;
                                                                                __freed_obj__ = 0;
                                                                                break;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                        else {
                                                            if(_if_conditional247=string_operator_equals(type_name_113,"unsigned"),                                                            _if_conditional247) {
                                                                unsigned__119=(_Bool)1;
                                                                if(_if_conditional248=xisalpha(*info->p)||*info->p==95,                                                                _if_conditional248) {
                                                                    p_151=info->p;
                                                                    sline_152=info->sline;
                                                                    __dec_obj85=type_name_113;
                                                                    type_name_113=(char*)come_increment_ref_count(optional$2charphbool_value(((struct optional$2charphbool*)(right_value195=parse_word(info)))));
                                                                    if(__dec_obj85) { __dec_obj85 = come_decrement_ref_count(__dec_obj85, (void*)0, (void*)0, 0,0,0); }
                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value195);
                                                                    if(right_value195 && right_value195 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value195, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                    __right_value_freed_obj[0] = right_value195;
                                                                    __freed_obj__ = 0;
                                                                    if(_if_conditional249=string_operator_equals(type_name_113,"short"),                                                                    _if_conditional249) {
                                                                        if(_if_conditional250=xisalpha(*info->p)||*info->p==95,                                                                        _if_conditional250) {
                                                                            p_153=info->p;
                                                                            sline_154=info->sline;
                                                                            __dec_obj86=type_name_113;
                                                                            type_name_113=(char*)come_increment_ref_count(optional$2charphbool_value(((struct optional$2charphbool*)(right_value196=parse_word(info)))));
                                                                            if(__dec_obj86) { __dec_obj86 = come_decrement_ref_count(__dec_obj86, (void*)0, (void*)0, 0,0,0); }
                                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value196);
                                                                            if(right_value196 && right_value196 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value196, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                            __right_value_freed_obj[0] = right_value196;
                                                                            __freed_obj__ = 0;
                                                                            if(_if_conditional251=is_type_name(type_name_113,info),                                                                            _if_conditional251) {
                                                                                short__122=(_Bool)1;
                                                                            }
                                                                            else {
                                                                                short__122=(_Bool)1;
                                                                                __dec_obj87=type_name_113;
                                                                                type_name_113=(char*)come_increment_ref_count(((char*)(right_value197=__builtin_string("int"))));
                                                                                if(__dec_obj87) { __dec_obj87 = come_decrement_ref_count(__dec_obj87, (void*)0, (void*)0, 0,0,0); }
                                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value197);
                                                                                if(right_value197 && right_value197 != __result_obj__ && !__freed_obj__) { right_value197 = come_decrement_ref_count(right_value197, (void*)0, (void*)0, 1, 0, 0); }
                                                                                __right_value_freed_obj[0] = right_value197;
                                                                                __freed_obj__ = 0;
                                                                                info->p=p_153;
                                                                                info->sline=sline_154;
                                                                            }
                                                                        }
                                                                        else {
                                                                            short__122=(_Bool)1;
                                                                            __dec_obj88=type_name_113;
                                                                            type_name_113=(char*)come_increment_ref_count(((char*)(right_value198=__builtin_string("int"))));
                                                                            if(__dec_obj88) { __dec_obj88 = come_decrement_ref_count(__dec_obj88, (void*)0, (void*)0, 0,0,0); }
                                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value198);
                                                                            if(right_value198 && right_value198 != __result_obj__ && !__freed_obj__) { right_value198 = come_decrement_ref_count(right_value198, (void*)0, (void*)0, 1, 0, 0); }
                                                                            __right_value_freed_obj[0] = right_value198;
                                                                            __freed_obj__ = 0;
                                                                            break;
                                                                        }
                                                                    }
                                                                    else {
                                                                        if(_if_conditional252=string_operator_equals(type_name_113,"long"),                                                                        _if_conditional252) {
                                                                            if(_if_conditional253=xisalpha(*info->p)||*info->p==95,                                                                            _if_conditional253) {
                                                                                p_155=info->p;
                                                                                sline_156=info->sline;
                                                                                __dec_obj89=type_name_113;
                                                                                type_name_113=(char*)come_increment_ref_count(optional$2charphbool_value(((struct optional$2charphbool*)(right_value199=parse_word(info)))));
                                                                                if(__dec_obj89) { __dec_obj89 = come_decrement_ref_count(__dec_obj89, (void*)0, (void*)0, 0,0,0); }
                                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value199);
                                                                                if(right_value199 && right_value199 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value199, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                                __right_value_freed_obj[0] = right_value199;
                                                                                __freed_obj__ = 0;
                                                                                if(_if_conditional254=is_type_name(type_name_113,info),                                                                                _if_conditional254) {
                                                                                    long__120=(_Bool)1;
                                                                                }
                                                                                else {
                                                                                    long__120=(_Bool)1;
                                                                                    __dec_obj90=type_name_113;
                                                                                    type_name_113=(char*)come_increment_ref_count(((char*)(right_value200=__builtin_string("int"))));
                                                                                    if(__dec_obj90) { __dec_obj90 = come_decrement_ref_count(__dec_obj90, (void*)0, (void*)0, 0,0,0); }
                                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value200);
                                                                                    if(right_value200 && right_value200 != __result_obj__ && !__freed_obj__) { right_value200 = come_decrement_ref_count(right_value200, (void*)0, (void*)0, 1, 0, 0); }
                                                                                    __right_value_freed_obj[0] = right_value200;
                                                                                    __freed_obj__ = 0;
                                                                                    info->p=p_155;
                                                                                    info->sline=sline_156;
                                                                                }
                                                                            }
                                                                            else {
                                                                                long__120=(_Bool)1;
                                                                                __dec_obj91=type_name_113;
                                                                                type_name_113=(char*)come_increment_ref_count(((char*)(right_value201=__builtin_string("int"))));
                                                                                if(__dec_obj91) { __dec_obj91 = come_decrement_ref_count(__dec_obj91, (void*)0, (void*)0, 0,0,0); }
                                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value201);
                                                                                if(right_value201 && right_value201 != __result_obj__ && !__freed_obj__) { right_value201 = come_decrement_ref_count(right_value201, (void*)0, (void*)0, 1, 0, 0); }
                                                                                __right_value_freed_obj[0] = right_value201;
                                                                                __freed_obj__ = 0;
                                                                                break;
                                                                            }
                                                                        }
                                                                        else {
                                                                            if(_if_conditional255=!is_type_name(type_name_113,info),                                                                            _if_conditional255) {
                                                                                __dec_obj92=type_name_113;
                                                                                type_name_113=(char*)come_increment_ref_count(((char*)(right_value202=__builtin_string("int"))));
                                                                                if(__dec_obj92) { __dec_obj92 = come_decrement_ref_count(__dec_obj92, (void*)0, (void*)0, 0,0,0); }
                                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value202);
                                                                                if(right_value202 && right_value202 != __result_obj__ && !__freed_obj__) { right_value202 = come_decrement_ref_count(right_value202, (void*)0, (void*)0, 1, 0, 0); }
                                                                                __right_value_freed_obj[0] = right_value202;
                                                                                __freed_obj__ = 0;
                                                                                info->p=p_151;
                                                                                info->sline=sline_152;
                                                                                break;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                                else {
                                                                    __dec_obj93=type_name_113;
                                                                    type_name_113=(char*)come_increment_ref_count(((char*)(right_value203=__builtin_string("int"))));
                                                                    if(__dec_obj93) { __dec_obj93 = come_decrement_ref_count(__dec_obj93, (void*)0, (void*)0, 0,0,0); }
                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value203);
                                                                    if(right_value203 && right_value203 != __result_obj__ && !__freed_obj__) { right_value203 = come_decrement_ref_count(right_value203, (void*)0, (void*)0, 1, 0, 0); }
                                                                    __right_value_freed_obj[0] = right_value203;
                                                                    __freed_obj__ = 0;
                                                                    break;
                                                                }
                                                            }
                                                            else {
                                                                if(_if_conditional256=string_operator_equals(type_name_113,"signed")||string_operator_equals(type_name_113,"__signed__"),                                                                _if_conditional256) {
                                                                    unsigned__119=(_Bool)0;
                                                                    __dec_obj94=type_name_113;
                                                                    type_name_113=(char*)come_increment_ref_count(optional$2charphbool_value(((struct optional$2charphbool*)(right_value204=parse_word(info)))));
                                                                    if(__dec_obj94) { __dec_obj94 = come_decrement_ref_count(__dec_obj94, (void*)0, (void*)0, 0,0,0); }
                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value204);
                                                                    if(right_value204 && right_value204 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value204, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                    __right_value_freed_obj[0] = right_value204;
                                                                    __freed_obj__ = 0;
                                                                }
                                                                else {
                                                                    if(_if_conditional257=string_operator_equals(type_name_113,"register"),                                                                    _if_conditional257) {
                                                                        register__118=(_Bool)1;
                                                                        __dec_obj95=type_name_113;
                                                                        type_name_113=(char*)come_increment_ref_count(optional$2charphbool_value(((struct optional$2charphbool*)(right_value205=parse_word(info)))));
                                                                        if(__dec_obj95) { __dec_obj95 = come_decrement_ref_count(__dec_obj95, (void*)0, (void*)0, 0,0,0); }
                                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value205);
                                                                        if(right_value205 && right_value205 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value205, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                        __right_value_freed_obj[0] = right_value205;
                                                                        __freed_obj__ = 0;
                                                                    }
                                                                    else {
                                                                        if(_if_conditional258=string_operator_equals(type_name_113,"restrict"),                                                                        _if_conditional258) {
                                                                            restrict__123=(_Bool)1;
                                                                            __dec_obj96=type_name_113;
                                                                            type_name_113=(char*)come_increment_ref_count(optional$2charphbool_value(((struct optional$2charphbool*)(right_value206=parse_word(info)))));
                                                                            if(__dec_obj96) { __dec_obj96 = come_decrement_ref_count(__dec_obj96, (void*)0, (void*)0, 0,0,0); }
                                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value206);
                                                                            if(right_value206 && right_value206 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value206, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                            __right_value_freed_obj[0] = right_value206;
                                                                            __freed_obj__ = 0;
                                                                        }
                                                                        else {
                                                                            if(_if_conditional259=string_operator_equals(type_name_113,"__restrict"),                                                                            _if_conditional259) {
                                                                                restrict__123=(_Bool)1;
                                                                                __dec_obj97=type_name_113;
                                                                                type_name_113=(char*)come_increment_ref_count(optional$2charphbool_value(((struct optional$2charphbool*)(right_value207=parse_word(info)))));
                                                                                if(__dec_obj97) { __dec_obj97 = come_decrement_ref_count(__dec_obj97, (void*)0, (void*)0, 0,0,0); }
                                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value207);
                                                                                if(right_value207 && right_value207 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value207, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                                __right_value_freed_obj[0] = right_value207;
                                                                                __freed_obj__ = 0;
                                                                            }
                                                                            else {
                                                                                if(_if_conditional260=string_operator_equals(type_name_113,"short"),                                                                                _if_conditional260) {
                                                                                    short__122=(_Bool)1;
                                                                                    if(_if_conditional261=*info->p==58,                                                                                    _if_conditional261) {
                                                                                        break;
                                                                                    }
                                                                                    else {
                                                                                        if(_if_conditional262=xisalnum(*info->p),                                                                                        _if_conditional262) {
                                                                                            p_157=info->p;
                                                                                            sline_158=info->sline;
                                                                                            __dec_obj98=type_name_113;
                                                                                            type_name_113=(char*)come_increment_ref_count(optional$2charphbool_value(((struct optional$2charphbool*)(right_value208=parse_word(info)))));
                                                                                            if(__dec_obj98) { __dec_obj98 = come_decrement_ref_count(__dec_obj98, (void*)0, (void*)0, 0,0,0); }
                                                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value208);
                                                                                            if(right_value208 && right_value208 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value208, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                                            __right_value_freed_obj[0] = right_value208;
                                                                                            __freed_obj__ = 0;
                                                                                            if(_if_conditional263=string_operator_equals(type_name_113,"int"),                                                                                            _if_conditional263) {
                                                                                                break;
                                                                                            }
                                                                                            else {
                                                                                                if(_if_conditional264=string_operator_equals(type_name_113,"short"),                                                                                                _if_conditional264) {
                                                                                                    short__122=(_Bool)0;
                                                                                                    break;
                                                                                                }
                                                                                                else {
                                                                                                    if(_if_conditional265=is_type_name(type_name_113,info),                                                                                                    _if_conditional265) {
                                                                                                        info->p=p_157;
                                                                                                        info->sline=sline_158;
                                                                                                    }
                                                                                                    else {
                                                                                                        __dec_obj99=type_name_113;
                                                                                                        type_name_113=(char*)come_increment_ref_count(((char*)(right_value209=__builtin_string("short"))));
                                                                                                        if(__dec_obj99) { __dec_obj99 = come_decrement_ref_count(__dec_obj99, (void*)0, (void*)0, 0,0,0); }
                                                                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value209);
                                                                                                        if(right_value209 && right_value209 != __result_obj__ && !__freed_obj__) { right_value209 = come_decrement_ref_count(right_value209, (void*)0, (void*)0, 1, 0, 0); }
                                                                                                        __right_value_freed_obj[0] = right_value209;
                                                                                                        __freed_obj__ = 0;
                                                                                                        info->p=p_157;
                                                                                                        info->sline=sline_158;
                                                                                                        break;
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                        else {
                                                                                            break;
                                                                                        }
                                                                                    }
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
    skip_pointer_attribute(info);
    pointer_num_159=0;
    while(_while_condtional31=*info->p==42,    _while_condtional31) {
        info->p++;
        skip_spaces_and_lf(info);
        skip_pointer_attribute(info);
        pointer_num_159++;
    }
    lambda_flag_160=(_Bool)0;
    {
        pX_161=info->p;
        slineX_162=info->sline;
        if(_if_conditional266=xisalpha(*info->p)||*info->p==95,        _if_conditional266) {
            (void)optional$2charphbool_value(((struct optional$2charphbool*)(right_value210=parse_word(info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value210);
            if(right_value210 && right_value210 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value210, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value210;
            __freed_obj__ = 0;
            if(_if_conditional267=*info->p==40&&info->in_typedef,            _if_conditional267) {
                lambda_flag_160=(_Bool)1;
            }
        }
        info->p=pX_161;
        info->sline=slineX_162;
    }
    function_pointer_flag_165=(_Bool)0;
    {
        p_166=info->p;
        sline_167=info->sline;
        if(_if_conditional268=*info->p==40,        _if_conditional268) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            if(_if_conditional269=*info->p==42||*info->p==94,            _if_conditional269) {
                function_pointer_flag_165=(_Bool)1;
            }
            else {
                if(_if_conditional270=xisalpha(*info->p)||*info->p==95,                _if_conditional270) {
                    word_168=(char*)come_increment_ref_count(optional$2charphbool_value(((struct optional$2charphbool*)(right_value211=parse_word(info)))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value211);
                    if(right_value211 && right_value211 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value211, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value211;
                    __freed_obj__ = 0;
                    if(_if_conditional271=*info->p==41,                    _if_conditional271) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        if(_if_conditional272=*info->p==40,                        _if_conditional272) {
                            function_pointer_flag_165=(_Bool)1;
                        }
                    }
                    if(word_168 && !__freed_obj__) { word_168 = come_decrement_ref_count(word_168, (void*)0, (void*)0, 0, 0, 0); }
                }
            }
        }
        info->p=p_166;
        info->sline=sline_167;
    }
    var_name_between_brace_169=(_Bool)0;
    {
        p_170=info->p;
        sline_171=info->sline;
        if(_if_conditional273=*info->p==40,        _if_conditional273) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            if(_if_conditional274=xisalpha(*info->p)||*info->p==95,            _if_conditional274) {
                word_172=(char*)come_increment_ref_count(optional$2charphbool_value(((struct optional$2charphbool*)(right_value212=parse_word(info)))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value212);
                if(right_value212 && right_value212 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value212, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value212;
                __freed_obj__ = 0;
                if(_if_conditional275=is_type_name(word_172,info),                _if_conditional275) {
                }
                else {
                    if(_if_conditional276=*info->p==41,                    _if_conditional276) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        if(_if_conditional277=*info->p!=40,                        _if_conditional277) {
                            var_name_between_brace_169=(_Bool)1;
                        }
                    }
                }
                if(word_172 && !__freed_obj__) { word_172 = come_decrement_ref_count(word_172, (void*)0, (void*)0, 0, 0, 0); }
            }
        }
        info->p=p_170;
        info->sline=sline_171;
    }
    if(_if_conditional278=anonymous_type_132&&*info->p==123,    _if_conditional278) {
        if(_if_conditional279=struct__124,        _if_conditional279) {
            if(_if_conditional280=string_operator_equals(type_name_113,""),            _if_conditional280) {
                __dec_obj100=type_name_113;
                type_name_113=(char*)come_increment_ref_count(((char*)(right_value213=xsprintf("anonymous_typeX%d",++anonymous_num_173))));
                if(__dec_obj100) { __dec_obj100 = come_decrement_ref_count(__dec_obj100, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value213);
                if(right_value213 && right_value213 != __result_obj__ && !__freed_obj__) { right_value213 = come_decrement_ref_count(right_value213, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value213;
                __freed_obj__ = 0;
            }
            node_174=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value214=parse_struct((char*)come_increment_ref_count(type_name_113),info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value214);
            if(right_value214 && right_value214 != __result_obj__ && !__freed_obj__) { right_value214 = come_decrement_ref_count(right_value214, ((struct sNode*)right_value214)->finalize, ((struct sNode*)right_value214)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[0] = right_value214;
            __freed_obj__ = 0;
            if(_if_conditional281=!node_compile(node_174,info),            _if_conditional281) {
                err_msg(info,"parse_struct is failed");
                __result86__ = __result_obj__ = ((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value218=optional$2tuple3$3sTypephcharphboolphbool_initialize(((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value217=(struct optional$2tuple3$3sTypephcharphboolphbool*)come_calloc(1, sizeof(struct optional$2tuple3$3sTypephcharphboolphbool)*(1), "05function4.c", 1245))),(struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value216=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value215=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1245)))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)))),(_Bool)0)));
                if(node_174 && !__freed_obj__) { node_174 = come_decrement_ref_count(node_174, ((struct sNode*)node_174)->finalize, ((struct sNode*)node_174)->_protocol_obj, 0, 0, 0); } 
                if(type_name_113 && !__freed_obj__) { type_name_113 = come_decrement_ref_count(type_name_113, (void*)0, (void*)0, 0, 0, 0); }
                if(alignas__131 && !__freed_obj__) { alignas__131 = come_decrement_ref_count(alignas__131, ((struct sNode*)alignas__131)->finalize, ((struct sNode*)alignas__131)->_protocol_obj, 0, 0, 0); } 
                if(type_163 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_163, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(var_name_164 && !__freed_obj__) { var_name_164 = come_decrement_ref_count(var_name_164, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value215);
                if(right_value215 && right_value215 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value215, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value215;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value216);
                if(right_value216 && right_value216 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value216, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value216;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value217);
                if(right_value217 && right_value217 != __result_obj__ && !__freed_obj__) { right_value217 = come_decrement_ref_count(right_value217, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value217;
                __freed_obj__ = 0;
                return __result86__;
            }
            pointer_num_175=0;
            while(_while_condtional32=*info->p==42,            _while_condtional32) {
                info->p++;
                skip_spaces_and_lf(info);
                pointer_num_175++;
            }
            __dec_obj101=type_163;
            type_163=(struct sType*)come_increment_ref_count(((struct sType*)(right_value220=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value219=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1255)))),type_name_113,(_Bool)0,info))));
            if(__dec_obj101) { come_call_finalizer(sType_finalize,__dec_obj101, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value219);
            if(right_value219 && right_value219 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value219, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value219;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value220);
            if(right_value220 && right_value220 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value220, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value220;
            __freed_obj__ = 0;
            type_163->mPointerNum=pointer_num_175;
            if(node_174 && !__freed_obj__) { node_174 = come_decrement_ref_count(node_174, ((struct sNode*)node_174)->finalize, ((struct sNode*)node_174)->_protocol_obj, 0, 0, 0); } 
        }
        else {
            if(_if_conditional282=enum__126,            _if_conditional282) {
                if(_if_conditional283=string_operator_equals(type_name_113,""),                _if_conditional283) {
                    __dec_obj102=type_name_113;
                    type_name_113=(char*)come_increment_ref_count(((char*)(right_value221=xsprintf("anonymous_typeY%d",++anonymous_num_173))));
                    if(__dec_obj102) { __dec_obj102 = come_decrement_ref_count(__dec_obj102, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value221);
                    if(right_value221 && right_value221 != __result_obj__ && !__freed_obj__) { right_value221 = come_decrement_ref_count(right_value221, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value221;
                    __freed_obj__ = 0;
                }
                node_176=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value222=parse_enum((char*)come_increment_ref_count(type_name_113),info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value222);
                if(right_value222 && right_value222 != __result_obj__ && !__freed_obj__) { right_value222 = come_decrement_ref_count(right_value222, ((struct sNode*)right_value222)->finalize, ((struct sNode*)right_value222)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[0] = right_value222;
                __freed_obj__ = 0;
                if(_if_conditional284=!info->no_output_err,                _if_conditional284) {
                    if(_if_conditional285=!node_compile(node_176,info),                    _if_conditional285) {
                        printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                        __result87__ = __result_obj__ = ((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value226=optional$2tuple3$3sTypephcharphboolphbool_initialize(((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value225=(struct optional$2tuple3$3sTypephcharphboolphbool*)come_calloc(1, sizeof(struct optional$2tuple3$3sTypephcharphboolphbool)*(1), "05function4.c", 1269))),(struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value224=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value223=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1269)))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)))),(_Bool)0)));
                        if(node_176 && !__freed_obj__) { node_176 = come_decrement_ref_count(node_176, ((struct sNode*)node_176)->finalize, ((struct sNode*)node_176)->_protocol_obj, 0, 0, 0); } 
                        if(type_name_113 && !__freed_obj__) { type_name_113 = come_decrement_ref_count(type_name_113, (void*)0, (void*)0, 0, 0, 0); }
                        if(alignas__131 && !__freed_obj__) { alignas__131 = come_decrement_ref_count(alignas__131, ((struct sNode*)alignas__131)->finalize, ((struct sNode*)alignas__131)->_protocol_obj, 0, 0, 0); } 
                        if(type_163 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_163, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(var_name_164 && !__freed_obj__) { var_name_164 = come_decrement_ref_count(var_name_164, (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value223);
                        if(right_value223 && right_value223 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value223, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value223;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value224);
                        if(right_value224 && right_value224 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value224, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value224;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value225);
                        if(right_value225 && right_value225 != __result_obj__ && !__freed_obj__) { right_value225 = come_decrement_ref_count(right_value225, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[2] = right_value225;
                        __freed_obj__ = 0;
                        return __result87__;
                    }
                }
                __dec_obj103=type_163;
                type_163=(struct sType*)come_increment_ref_count(((struct sType*)(right_value228=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value227=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1273)))),type_name_113,(_Bool)0,info))));
                if(__dec_obj103) { come_call_finalizer(sType_finalize,__dec_obj103, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value227);
                if(right_value227 && right_value227 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value227, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value227;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value228);
                if(right_value228 && right_value228 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value228, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value228;
                __freed_obj__ = 0;
                if(node_176 && !__freed_obj__) { node_176 = come_decrement_ref_count(node_176, ((struct sNode*)node_176)->finalize, ((struct sNode*)node_176)->_protocol_obj, 0, 0, 0); } 
            }
            else {
                if(_if_conditional286=union__125,                _if_conditional286) {
                    if(_if_conditional287=string_operator_equals(type_name_113,""),                    _if_conditional287) {
                        __dec_obj104=type_name_113;
                        type_name_113=(char*)come_increment_ref_count(((char*)(right_value229=xsprintf("anonymous_typeZ%d",++anonymous_num_173))));
                        if(__dec_obj104) { __dec_obj104 = come_decrement_ref_count(__dec_obj104, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value229);
                        if(right_value229 && right_value229 != __result_obj__ && !__freed_obj__) { right_value229 = come_decrement_ref_count(right_value229, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value229;
                        __freed_obj__ = 0;
                    }
                    node_177=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value230=parse_union((char*)come_increment_ref_count(type_name_113),info))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value230);
                    if(right_value230 && right_value230 != __result_obj__ && !__freed_obj__) { right_value230 = come_decrement_ref_count(right_value230, ((struct sNode*)right_value230)->finalize, ((struct sNode*)right_value230)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value230;
                    __freed_obj__ = 0;
                    if(_if_conditional288=!node_compile(node_177,info),                    _if_conditional288) {
                        printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                        __result88__ = __result_obj__ = ((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value234=optional$2tuple3$3sTypephcharphboolphbool_initialize(((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value233=(struct optional$2tuple3$3sTypephcharphboolphbool*)come_calloc(1, sizeof(struct optional$2tuple3$3sTypephcharphboolphbool)*(1), "05function4.c", 1285))),(struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value232=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value231=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1285)))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)))),(_Bool)0)));
                        if(node_177 && !__freed_obj__) { node_177 = come_decrement_ref_count(node_177, ((struct sNode*)node_177)->finalize, ((struct sNode*)node_177)->_protocol_obj, 0, 0, 0); } 
                        if(type_name_113 && !__freed_obj__) { type_name_113 = come_decrement_ref_count(type_name_113, (void*)0, (void*)0, 0, 0, 0); }
                        if(alignas__131 && !__freed_obj__) { alignas__131 = come_decrement_ref_count(alignas__131, ((struct sNode*)alignas__131)->finalize, ((struct sNode*)alignas__131)->_protocol_obj, 0, 0, 0); } 
                        if(type_163 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_163, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(var_name_164 && !__freed_obj__) { var_name_164 = come_decrement_ref_count(var_name_164, (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value231);
                        if(right_value231 && right_value231 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value231, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value231;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value232);
                        if(right_value232 && right_value232 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value232, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value232;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value233);
                        if(right_value233 && right_value233 != __result_obj__ && !__freed_obj__) { right_value233 = come_decrement_ref_count(right_value233, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[2] = right_value233;
                        __freed_obj__ = 0;
                        return __result88__;
                    }
                    pointer_num_178=0;
                    while(_while_condtional33=*info->p==42,                    _while_condtional33) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        pointer_num_178++;
                    }
                    __dec_obj105=type_163;
                    type_163=(struct sType*)come_increment_ref_count(((struct sType*)(right_value236=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value235=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1296)))),type_name_113,(_Bool)0,info))));
                    if(__dec_obj105) { come_call_finalizer(sType_finalize,__dec_obj105, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value235);
                    if(right_value235 && right_value235 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value235, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value235;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value236);
                    if(right_value236 && right_value236 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value236, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[2] = right_value236;
                    __freed_obj__ = 0;
                    type_163->mPointerNum=pointer_num_178;
                    if(node_177 && !__freed_obj__) { node_177 = come_decrement_ref_count(node_177, ((struct sNode*)node_177)->finalize, ((struct sNode*)node_177)->_protocol_obj, 0, 0, 0); } 
                }
                else {
                    err_msg(info,"unexpected { character");
                    __result89__ = __result_obj__ = ((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value240=optional$2tuple3$3sTypephcharphboolphbool_initialize(((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value239=(struct optional$2tuple3$3sTypephcharphboolphbool*)come_calloc(1, sizeof(struct optional$2tuple3$3sTypephcharphboolphbool)*(1), "05function4.c", 1302))),(struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value238=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value237=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1302)))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)))),(_Bool)0)));
                    if(type_name_113 && !__freed_obj__) { type_name_113 = come_decrement_ref_count(type_name_113, (void*)0, (void*)0, 0, 0, 0); }
                    if(alignas__131 && !__freed_obj__) { alignas__131 = come_decrement_ref_count(alignas__131, ((struct sNode*)alignas__131)->finalize, ((struct sNode*)alignas__131)->_protocol_obj, 0, 0, 0); } 
                    if(type_163 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_163, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(var_name_164 && !__freed_obj__) { var_name_164 = come_decrement_ref_count(var_name_164, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value237);
                    if(right_value237 && right_value237 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value237, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value237;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value238);
                    if(right_value238 && right_value238 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value238, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value238;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value239);
                    if(right_value239 && right_value239 != __result_obj__ && !__freed_obj__) { right_value239 = come_decrement_ref_count(right_value239, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[2] = right_value239;
                    __freed_obj__ = 0;
                    return __result89__;
                }
            }
        }
        if(_if_conditional289=parse_variable_name,        _if_conditional289) {
            parse_sharp_v5(info);
            if(_if_conditional290=var_name_between_brace_169&&*info->p==40,            _if_conditional290) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(_if_conditional291=*info->p==58,            _if_conditional291) {
                __dec_obj106=var_name_164;
                var_name_164=(char*)come_increment_ref_count(((char*)(right_value241=__builtin_string(""))));
                if(__dec_obj106) { __dec_obj106 = come_decrement_ref_count(__dec_obj106, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value241);
                if(right_value241 && right_value241 != __result_obj__ && !__freed_obj__) { right_value241 = come_decrement_ref_count(right_value241, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value241;
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional292=anonymous_name_133,                _if_conditional292) {
                    num_anonymous_var_name_179++;
                    __dec_obj107=var_name_164;
                    var_name_164=(char*)come_increment_ref_count(((char*)(right_value242=xsprintf("anonymous_var_nameXYZ%d",num_anonymous_var_name_179))));
                    if(__dec_obj107) { __dec_obj107 = come_decrement_ref_count(__dec_obj107, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value242);
                    if(right_value242 && right_value242 != __result_obj__ && !__freed_obj__) { right_value242 = come_decrement_ref_count(right_value242, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value242;
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional293=xisalnum(*info->p)||*info->p==95,                    _if_conditional293) {
                        __dec_obj108=var_name_164;
                        var_name_164=(char*)come_increment_ref_count(optional$2charphbool_value(((struct optional$2charphbool*)(right_value243=parse_word(info)))));
                        if(__dec_obj108) { __dec_obj108 = come_decrement_ref_count(__dec_obj108, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value243);
                        if(right_value243 && right_value243 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value243, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value243;
                        __freed_obj__ = 0;
                    }
                    else {
                        num_anonymous_var_name_180++;
                        __dec_obj109=var_name_164;
                        var_name_164=(char*)come_increment_ref_count(((char*)(right_value244=xsprintf("anonymous_var_nameY%d",num_anonymous_var_name_180))));
                        if(__dec_obj109) { __dec_obj109 = come_decrement_ref_count(__dec_obj109, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value244);
                        if(right_value244 && right_value244 != __result_obj__ && !__freed_obj__) { right_value244 = come_decrement_ref_count(right_value244, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value244;
                        __freed_obj__ = 0;
                    }
                }
            }
            if(_if_conditional294=var_name_between_brace_169&&*info->p==41,            _if_conditional294) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(_if_conditional295=*info->p==58,            _if_conditional295) {
                info->p++;
                skip_spaces_and_lf(info);
                no_comma_181=info->no_comma;
                info->no_comma=(_Bool)1;
                node_182=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value245=expression_v13(info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value245);
                if(right_value245 && right_value245 != __result_obj__ && !__freed_obj__) { right_value245 = come_decrement_ref_count(right_value245, ((struct sNode*)right_value245)->finalize, ((struct sNode*)right_value245)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[0] = right_value245;
                __freed_obj__ = 0;
                info->no_comma=no_comma_181;
                __dec_obj110=type_163->mSizeNum;
                type_163->mSizeNum=(struct sNode*)come_increment_ref_count(node_182);
                if(__dec_obj110) { __dec_obj110 = come_decrement_ref_count(__dec_obj110, ((struct sNode*)__dec_obj110)->finalize, ((struct sNode*)__dec_obj110)->_protocol_obj, 0,0,0); }
                if(node_182 && !__freed_obj__) { node_182 = come_decrement_ref_count(node_182, ((struct sNode*)node_182)->finalize, ((struct sNode*)node_182)->_protocol_obj, 0, 0, 0); } 
            }
        }
    }
    else {
        if(_if_conditional296=lambda_flag_160,        _if_conditional296) {
            if(_if_conditional302=optional$2sTypepbool_value(((struct optional$2sTypepbool*)(right_value255=map$2charphsTypephp_operator_load_element(info->types,type_name_113)))),            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value255),
            (right_value255 && right_value255 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2sTypepboolp_finalize,right_value255, (void*)0, (void*)0, 0, 1, 0, 0):0,
            __right_value_freed_obj[0] = right_value255, 
            __freed_obj__ = 0, 
            _if_conditional302) {
                __dec_obj111=result_type_183;
                result_type_183=(struct sType*)come_increment_ref_count(((struct sType*)(right_value257=sType_clone(optional$2sTypepbool_value(((struct optional$2sTypepbool*)(right_value256=map$2charphsTypephp_operator_load_element(info->types,type_name_113))))))));
                if(__dec_obj111) { come_call_finalizer(sType_finalize,__dec_obj111, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value256);
                if(right_value256 && right_value256 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sTypepboolp_finalize,right_value256, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value256;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value257);
                if(right_value257 && right_value257 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value257, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value257;
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional308=list$1charph_contained(info->generics_type_names,(char*)come_increment_ref_count(type_name_113)),                _if_conditional308) {
                    for(
                    i_193=0 ,                    0;                    _for_condtionalA4=                    i_193<list$1charph_length(info->generics_type_names) ,                    _for_condtionalA4;                    i_193++ ,                    0                    ){
                        if(_if_conditional311=string_operator_equals(optional$2charphbool_value(((struct optional$2charphbool*)(right_value262=list$1charphp_operator_load_element(info->generics_type_names,i_193)))),type_name_113),                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value262),
                        (right_value262 && right_value262 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2charphboolp_finalize,right_value262, (void*)0, (void*)0, 0, 1, 0, 0):0,
                        __right_value_freed_obj[0] = right_value262, 
                        __freed_obj__ = 0, 
                        _if_conditional311) {
                            __dec_obj112=result_type_183;
                            result_type_183=(struct sType*)come_increment_ref_count(((struct sType*)(right_value265=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value263=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1355)))),((char*)(right_value264=xsprintf("generics_type%d",i_193))),(_Bool)0,info))));
                            if(__dec_obj112) { come_call_finalizer(sType_finalize,__dec_obj112, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value263);
                            if(right_value263 && right_value263 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value263, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value263;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value264);
                            if(right_value264 && right_value264 != __result_obj__ && !__freed_obj__) { right_value264 = come_decrement_ref_count(right_value264, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value264;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value265);
                            if(right_value265 && right_value265 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value265, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[2] = right_value265;
                            __freed_obj__ = 0;
                        }
                    }
                }
                else {
                    __dec_obj113=result_type_183;
                    result_type_183=(struct sType*)come_increment_ref_count(((struct sType*)(right_value267=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value266=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1360)))),type_name_113,(_Bool)0,info))));
                    if(__dec_obj113) { come_call_finalizer(sType_finalize,__dec_obj113, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value266);
                    if(right_value266 && right_value266 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value266, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value266;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value267);
                    if(right_value267 && right_value267 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value267, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value267;
                    __freed_obj__ = 0;
                }
            }
            result_type_183->mConstant=result_type_183->mConstant||constant_114;
            __dec_obj114=result_type_183->mAlignas;
            result_type_183->mAlignas=(struct sNode*)come_increment_ref_count(alignas__131);
            if(__dec_obj114) { __dec_obj114 = come_decrement_ref_count(__dec_obj114, ((struct sNode*)__dec_obj114)->finalize, ((struct sNode*)__dec_obj114)->_protocol_obj, 0,0,0); }
            result_type_183->mComeMemCore=result_type_183->mComeMemCore||come_mem_core__130;
            result_type_183->mRegister=register__118;
            result_type_183->mUnsigned=result_type_183->mUnsigned||unsigned__119;
            result_type_183->mVolatile=volatile__117;
            result_type_183->mStatic=result_type_183->mStatic||static__115;
            result_type_183->mExtern=result_type_183->mExtern||extern__128;
            result_type_183->mInline=result_type_183->mInline||inline__129;
            result_type_183->mRestrict=result_type_183->mRestrict||restrict__123;
            result_type_183->mLongLong=result_type_183->mLongLong||long_long_121;
            result_type_183->mLong=result_type_183->mLong||long__120;
            result_type_183->mShort=result_type_183->mShort||short__122;
            result_type_183->mPointerNum=pointer_num_159;
            __dec_obj115=var_name_164;
            var_name_164=(char*)come_increment_ref_count(optional$2charphbool_value(((struct optional$2charphbool*)(right_value268=parse_word(info)))));
            if(__dec_obj115) { __dec_obj115 = come_decrement_ref_count(__dec_obj115, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value268);
            if(right_value268 && right_value268 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value268, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value268;
            __freed_obj__ = 0;
            multiple_assgin_var2=optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool_value(((struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool*)(right_value269=parse_params(info))));
            param_types_198=(struct list$1sTypeph*)come_increment_ref_count(multiple_assgin_var2->v1);
            param_names_199=(struct list$1charph*)come_increment_ref_count(multiple_assgin_var2->v2);
            param_default_parametors_200=(struct list$1charph*)come_increment_ref_count(multiple_assgin_var2->v3);
            var_args_201=multiple_assgin_var2->v4;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value269);
            if(right_value269 && right_value269 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphboolp_finalize,right_value269, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value269;
            __freed_obj__ = 0;
            __dec_obj116=type_163;
            type_163=(struct sType*)come_increment_ref_count(((struct sType*)(right_value271=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value270=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1382)))),"lambda",(_Bool)0,info))));
            if(__dec_obj116) { come_call_finalizer(sType_finalize,__dec_obj116, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value270);
            if(right_value270 && right_value270 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value270, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[3] = right_value270;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value271);
            if(right_value271 && right_value271 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value271, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[4] = right_value271;
            __freed_obj__ = 0;
            __dec_obj118=type_163->mResultType;
            type_163->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value274=tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value272=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "05function4.c", 1384)))),(struct sType*)come_increment_ref_count(result_type_183)))));
            if(__dec_obj118) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj118, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value272);
            if(right_value272 && right_value272 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value272, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[5] = right_value272;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value274);
            if(right_value274 && right_value274 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value274, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[6] = right_value274;
            __freed_obj__ = 0;
            __dec_obj119=type_163->mParamTypes;
            type_163->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(param_types_198);
            if(__dec_obj119) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj119, (void*)0, (void*)0, 0, 0, 0, 0); }
            __dec_obj120=type_163->mParamNames;
            type_163->mParamNames=(struct list$1charph*)come_increment_ref_count(param_names_199);
            if(__dec_obj120) { come_call_finalizer(list$1charph_finalize,__dec_obj120, (void*)0, (void*)0, 0, 0, 0, 0); }
            type_163->mVarArgs=var_args_201;
            type_163->mExtern=extern__128;
            if(result_type_183 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_183, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(param_types_198 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,param_types_198, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(param_names_199 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_names_199, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(param_default_parametors_200 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_200, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        else {
            if(_if_conditional313=function_pointer_flag_165,            _if_conditional313) {
                info->p++;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                if(_if_conditional314=*info->p==42||*info->p==94,                _if_conditional314) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                skip_pointer_attribute(info);
                if(_if_conditional315=optional$2sTypepbool_value(((struct optional$2sTypepbool*)(right_value275=map$2charphsTypephp_operator_load_element(info->types,type_name_113)))),                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value275),
                (right_value275 && right_value275 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2sTypepboolp_finalize,right_value275, (void*)0, (void*)0, 0, 1, 0, 0):0,
                __right_value_freed_obj[0] = right_value275, 
                __freed_obj__ = 0, 
                _if_conditional315) {
                    __dec_obj121=result_type_202;
                    result_type_202=(struct sType*)come_increment_ref_count(((struct sType*)(right_value277=sType_clone(optional$2sTypepbool_value(((struct optional$2sTypepbool*)(right_value276=map$2charphsTypephp_operator_load_element(info->types,type_name_113))))))));
                    if(__dec_obj121) { come_call_finalizer(sType_finalize,__dec_obj121, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value276);
                    if(right_value276 && right_value276 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sTypepboolp_finalize,right_value276, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value276;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value277);
                    if(right_value277 && right_value277 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value277, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value277;
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional316=list$1charph_contained(info->generics_type_names,(char*)come_increment_ref_count(type_name_113)),                    _if_conditional316) {
                        for(
                        i_203=0 ,                        0;                        _for_condtionalA5=                        i_203<list$1charph_length(info->generics_type_names) ,                        _for_condtionalA5;                        i_203++ ,                        0                        ){
                            if(_if_conditional317=string_operator_equals(optional$2charphbool_value(((struct optional$2charphbool*)(right_value278=list$1charphp_operator_load_element(info->generics_type_names,i_203)))),type_name_113),                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value278),
                            (right_value278 && right_value278 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2charphboolp_finalize,right_value278, (void*)0, (void*)0, 0, 1, 0, 0):0,
                            __right_value_freed_obj[0] = right_value278, 
                            __freed_obj__ = 0, 
                            _if_conditional317) {
                                __dec_obj122=result_type_202;
                                result_type_202=(struct sType*)come_increment_ref_count(((struct sType*)(right_value281=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value279=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1411)))),((char*)(right_value280=xsprintf("generics_type%d",i_203))),(_Bool)0,info))));
                                if(__dec_obj122) { come_call_finalizer(sType_finalize,__dec_obj122, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value279);
                                if(right_value279 && right_value279 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value279, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value279;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value280);
                                if(right_value280 && right_value280 != __result_obj__ && !__freed_obj__) { right_value280 = come_decrement_ref_count(right_value280, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[1] = right_value280;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value281);
                                if(right_value281 && right_value281 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value281, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[2] = right_value281;
                                __freed_obj__ = 0;
                            }
                        }
                    }
                    else {
                        __dec_obj123=result_type_202;
                        result_type_202=(struct sType*)come_increment_ref_count(((struct sType*)(right_value283=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value282=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1416)))),type_name_113,(_Bool)0,info))));
                        if(__dec_obj123) { come_call_finalizer(sType_finalize,__dec_obj123, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value282);
                        if(right_value282 && right_value282 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value282, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value282;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value283);
                        if(right_value283 && right_value283 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value283, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value283;
                        __freed_obj__ = 0;
                    }
                }
                result_type_202->mConstant=result_type_202->mConstant||constant_114;
                __dec_obj124=result_type_202->mAlignas;
                result_type_202->mAlignas=(struct sNode*)come_increment_ref_count(alignas__131);
                if(__dec_obj124) { __dec_obj124 = come_decrement_ref_count(__dec_obj124, ((struct sNode*)__dec_obj124)->finalize, ((struct sNode*)__dec_obj124)->_protocol_obj, 0,0,0); }
                result_type_202->mComeMemCore=result_type_202->mComeMemCore||come_mem_core__130;
                result_type_202->mRegister=register__118;
                result_type_202->mUnsigned=result_type_202->mUnsigned||unsigned__119;
                result_type_202->mVolatile=volatile__117;
                result_type_202->mStatic=result_type_202->mStatic||static__115;
                result_type_202->mExtern=result_type_202->mExtern||extern__128;
                result_type_202->mInline=result_type_202->mInline||inline__129;
                result_type_202->mRestrict=result_type_202->mRestrict||restrict__123;
                result_type_202->mLongLong=result_type_202->mLongLong||long_long_121;
                result_type_202->mLong=result_type_202->mLong||long__120;
                result_type_202->mShort=result_type_202->mShort||short__122;
                result_type_202->mPointerNum+=pointer_num_159;
                if(_if_conditional318=xisalnum(*info->p)||*info->p==95,                _if_conditional318) {
                    __dec_obj125=var_name_164;
                    var_name_164=(char*)come_increment_ref_count(optional$2charphbool_value(((struct optional$2charphbool*)(right_value284=parse_word(info)))));
                    if(__dec_obj125) { __dec_obj125 = come_decrement_ref_count(__dec_obj125, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value284);
                    if(right_value284 && right_value284 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value284, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value284;
                    __freed_obj__ = 0;
                    if(_if_conditional319=*info->p==40,                    _if_conditional319) {
                        __result112__ = __result_obj__ = ((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value288=optional$2tuple3$3sTypephcharphboolphbool_initialize(((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value287=(struct optional$2tuple3$3sTypephcharphboolphbool*)come_calloc(1, sizeof(struct optional$2tuple3$3sTypephcharphboolphbool)*(1), "05function4.c", 1437))),(struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value286=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value285=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1437)))),(struct sType*)come_increment_ref_count(result_type_202),(char*)come_increment_ref_count(var_name_164),(_Bool)0)))),(_Bool)0)));
                        if(result_type_202 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_202, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(type_name_113 && !__freed_obj__) { type_name_113 = come_decrement_ref_count(type_name_113, (void*)0, (void*)0, 0, 0, 0); }
                        if(alignas__131 && !__freed_obj__) { alignas__131 = come_decrement_ref_count(alignas__131, ((struct sNode*)alignas__131)->finalize, ((struct sNode*)alignas__131)->_protocol_obj, 0, 0, 0); } 
                        if(type_163 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_163, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(var_name_164 && !__freed_obj__) { var_name_164 = come_decrement_ref_count(var_name_164, (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value285);
                        if(right_value285 && right_value285 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value285, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value285;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value286);
                        if(right_value286 && right_value286 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value286, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value286;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value287);
                        if(right_value287 && right_value287 != __result_obj__ && !__freed_obj__) { right_value287 = come_decrement_ref_count(right_value287, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[2] = right_value287;
                        __freed_obj__ = 0;
                        return __result112__;
                    }
                }
                else {
                    num_anonymous_var_name_204++;
                    __dec_obj126=var_name_164;
                    var_name_164=(char*)come_increment_ref_count(((char*)(right_value289=xsprintf("anonymous_lambda_var_nameZ%d",num_anonymous_var_name_204))));
                    if(__dec_obj126) { __dec_obj126 = come_decrement_ref_count(__dec_obj126, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value289);
                    if(right_value289 && right_value289 != __result_obj__ && !__freed_obj__) { right_value289 = come_decrement_ref_count(right_value289, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value289;
                    __freed_obj__ = 0;
                }
                optional$2intbool_value(((struct optional$2intbool*)(right_value290=expected_next_character(41,info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value290);
                if(right_value290 && right_value290 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value290, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value290;
                __freed_obj__ = 0;
                multiple_assgin_var3=optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool_value(((struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool*)(right_value291=parse_params(info))));
                param_types_205=(struct list$1sTypeph*)come_increment_ref_count(multiple_assgin_var3->v1);
                param_names_206=(struct list$1charph*)come_increment_ref_count(multiple_assgin_var3->v2);
                param_default_parametors_207=(struct list$1charph*)come_increment_ref_count(multiple_assgin_var3->v3);
                var_args_208=multiple_assgin_var3->v4;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value291);
                if(right_value291 && right_value291 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphboolp_finalize,right_value291, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value291;
                __freed_obj__ = 0;
                __dec_obj127=type_163;
                type_163=(struct sType*)come_increment_ref_count(((struct sType*)(right_value293=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value292=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1449)))),"lambda",(_Bool)0,info))));
                if(__dec_obj127) { come_call_finalizer(sType_finalize,__dec_obj127, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value292);
                if(right_value292 && right_value292 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value292, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[3] = right_value292;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value293);
                if(right_value293 && right_value293 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value293, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[4] = right_value293;
                __freed_obj__ = 0;
                __dec_obj128=type_163->mResultType;
                type_163->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value295=tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value294=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "05function4.c", 1451)))),(struct sType*)come_increment_ref_count(result_type_202)))));
                if(__dec_obj128) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj128, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value294);
                if(right_value294 && right_value294 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value294, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[5] = right_value294;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value295);
                if(right_value295 && right_value295 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value295, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[6] = right_value295;
                __freed_obj__ = 0;
                __dec_obj129=type_163->mParamTypes;
                type_163->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(param_types_205);
                if(__dec_obj129) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj129, (void*)0, (void*)0, 0, 0, 0, 0); }
                __dec_obj130=type_163->mParamNames;
                type_163->mParamNames=(struct list$1charph*)come_increment_ref_count(param_names_206);
                if(__dec_obj130) { come_call_finalizer(list$1charph_finalize,__dec_obj130, (void*)0, (void*)0, 0, 0, 0, 0); }
                type_163->mVarArgs=var_args_208;
                type_163->mExtern=extern__128;
                if(result_type_202 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_202, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(param_types_205 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,param_types_205, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(param_names_206 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_names_206, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(param_default_parametors_207 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_207, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            else {
                if(_if_conditional320=string_operator_equals(type_name_113,"__typeof__")&&*info->p==40,                _if_conditional320) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    exp_209=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value296=expression_v13(info))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value296);
                    if(right_value296 && right_value296 != __result_obj__ && !__freed_obj__) { right_value296 = come_decrement_ref_count(right_value296, ((struct sNode*)right_value296)->finalize, ((struct sNode*)right_value296)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value296;
                    __freed_obj__ = 0;
                    optional$2intbool_value(((struct optional$2intbool*)(right_value297=expected_next_character(41,info))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value297);
                    if(right_value297 && right_value297 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value297, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value297;
                    __freed_obj__ = 0;
                    if(_if_conditional321=!node_compile(exp_209,info),                    _if_conditional321) {
                        err_msg(info,"invalid __typeof__ expression");
                        __result115__ = __result_obj__ = ((struct optional$2tuple3$3voidpvoidpboolphbool*)(right_value301=optional$2tuple3$3voidpvoidpboolphbool_initialize(((struct optional$2tuple3$3voidpvoidpboolphbool*)(right_value300=(struct optional$2tuple3$3voidpvoidpboolphbool*)come_calloc(1, sizeof(struct optional$2tuple3$3voidpvoidpboolphbool)*(1), "05function4.c", 1467))),(struct tuple3$3voidpvoidpbool*)come_increment_ref_count(((struct tuple3$3voidpvoidpbool*)(right_value299=tuple3$3voidpvoidpbool_initialize((struct tuple3$3voidpvoidpbool*)come_increment_ref_count(((struct tuple3$3voidpvoidpbool*)(right_value298=(struct tuple3$3voidpvoidpbool*)come_calloc(1, sizeof(struct tuple3$3voidpvoidpbool)*(1), "05function4.c", 1467)))),((void*)0),((void*)0),(_Bool)0)))),(_Bool)0)));
                        if(exp_209 && !__freed_obj__) { exp_209 = come_decrement_ref_count(exp_209, ((struct sNode*)exp_209)->finalize, ((struct sNode*)exp_209)->_protocol_obj, 0, 0, 0); } 
                        if(type_name_113 && !__freed_obj__) { type_name_113 = come_decrement_ref_count(type_name_113, (void*)0, (void*)0, 0, 0, 0); }
                        if(alignas__131 && !__freed_obj__) { alignas__131 = come_decrement_ref_count(alignas__131, ((struct sNode*)alignas__131)->finalize, ((struct sNode*)alignas__131)->_protocol_obj, 0, 0, 0); } 
                        if(type_163 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_163, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(var_name_164 && !__freed_obj__) { var_name_164 = come_decrement_ref_count(var_name_164, (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value298);
                        if(right_value298 && right_value298 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3voidpvoidpbool_finalize,right_value298, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value298;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value299);
                        if(right_value299 && right_value299 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3voidpvoidpboolp_finalize,right_value299, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value299;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value300);
                        if(right_value300 && right_value300 != __result_obj__ && !__freed_obj__) { right_value300 = come_decrement_ref_count(right_value300, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[2] = right_value300;
                        __freed_obj__ = 0;
                        return __result115__;
                    }
                    come_value_210=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value302=get_value_from_stack(-1,info))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value302);
                    if(right_value302 && right_value302 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value302, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[2] = right_value302;
                    __freed_obj__ = 0;
                    dec_stack_ptr(1,info);
                    __dec_obj132=type_163;
                    type_163=(struct sType*)come_increment_ref_count(((struct sType*)(right_value303=sType_clone(come_value_210->type))));
                    if(__dec_obj132) { come_call_finalizer(sType_finalize,__dec_obj132, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value303);
                    if(right_value303 && right_value303 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value303, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[3] = right_value303;
                    __freed_obj__ = 0;
                    if(_if_conditional325=parse_variable_name,                    _if_conditional325) {
                        parse_sharp_v5(info);
                        if(_if_conditional326=var_name_between_brace_169&&*info->p==40,                        _if_conditional326) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        if(_if_conditional327=*info->p==58,                        _if_conditional327) {
                            __dec_obj133=var_name_164;
                            var_name_164=(char*)come_increment_ref_count(((char*)(right_value304=__builtin_string(""))));
                            if(__dec_obj133) { __dec_obj133 = come_decrement_ref_count(__dec_obj133, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value304);
                            if(right_value304 && right_value304 != __result_obj__ && !__freed_obj__) { right_value304 = come_decrement_ref_count(right_value304, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value304;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional328=anonymous_name_133,                            _if_conditional328) {
                                num_anonymous_var_name_211++;
                                __dec_obj134=var_name_164;
                                var_name_164=(char*)come_increment_ref_count(((char*)(right_value305=xsprintf("anonymous_var_nameXYZL%d",num_anonymous_var_name_211))));
                                if(__dec_obj134) { __dec_obj134 = come_decrement_ref_count(__dec_obj134, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value305);
                                if(right_value305 && right_value305 != __result_obj__ && !__freed_obj__) { right_value305 = come_decrement_ref_count(right_value305, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value305;
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional329=xisalnum(*info->p)||*info->p==95,                                _if_conditional329) {
                                    __dec_obj135=var_name_164;
                                    var_name_164=(char*)come_increment_ref_count(optional$2charphbool_value(((struct optional$2charphbool*)(right_value306=parse_word(info)))));
                                    if(__dec_obj135) { __dec_obj135 = come_decrement_ref_count(__dec_obj135, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value306);
                                    if(right_value306 && right_value306 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value306, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value306;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    num_anonymous_var_name_212++;
                                    __dec_obj136=var_name_164;
                                    var_name_164=(char*)come_increment_ref_count(((char*)(right_value307=xsprintf("anonymous_var_nameX%d",num_anonymous_var_name_212))));
                                    if(__dec_obj136) { __dec_obj136 = come_decrement_ref_count(__dec_obj136, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value307);
                                    if(right_value307 && right_value307 != __result_obj__ && !__freed_obj__) { right_value307 = come_decrement_ref_count(right_value307, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value307;
                                    __freed_obj__ = 0;
                                }
                            }
                        }
                        if(_if_conditional330=var_name_between_brace_169&&*info->p==41,                        _if_conditional330) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        if(_if_conditional331=*info->p==58,                        _if_conditional331) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            no_comma_213=info->no_comma;
                            info->no_comma=(_Bool)1;
                            node_214=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value308=expression_v13(info))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value308);
                            if(right_value308 && right_value308 != __result_obj__ && !__freed_obj__) { right_value308 = come_decrement_ref_count(right_value308, ((struct sNode*)right_value308)->finalize, ((struct sNode*)right_value308)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[0] = right_value308;
                            __freed_obj__ = 0;
                            info->no_comma=no_comma_213;
                            __dec_obj137=type_163->mSizeNum;
                            type_163->mSizeNum=(struct sNode*)come_increment_ref_count(node_214);
                            if(__dec_obj137) { __dec_obj137 = come_decrement_ref_count(__dec_obj137, ((struct sNode*)__dec_obj137)->finalize, ((struct sNode*)__dec_obj137)->_protocol_obj, 0,0,0); }
                            if(node_214 && !__freed_obj__) { node_214 = come_decrement_ref_count(node_214, ((struct sNode*)node_214)->finalize, ((struct sNode*)node_214)->_protocol_obj, 0, 0, 0); } 
                        }
                    }
                    if(exp_209 && !__freed_obj__) { exp_209 = come_decrement_ref_count(exp_209, ((struct sNode*)exp_209)->finalize, ((struct sNode*)exp_209)->_protocol_obj, 0, 0, 0); } 
                    if(come_value_210 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_210, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                else {
                    if(_if_conditional332=optional$2sTypepbool_value(((struct optional$2sTypepbool*)(right_value309=map$2charphsTypephp_operator_load_element(info->types,type_name_113)))),                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value309),
                    (right_value309 && right_value309 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2sTypepboolp_finalize,right_value309, (void*)0, (void*)0, 0, 1, 0, 0):0,
                    __right_value_freed_obj[0] = right_value309, 
                    __freed_obj__ = 0, 
                    _if_conditional332) {
                        __dec_obj138=type_163;
                        type_163=(struct sType*)come_increment_ref_count(((struct sType*)(right_value311=sType_clone(optional$2sTypepbool_value(((struct optional$2sTypepbool*)(right_value310=map$2charphsTypephp_operator_load_element(info->types,type_name_113))))))));
                        if(__dec_obj138) { come_call_finalizer(sType_finalize,__dec_obj138, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value310);
                        if(right_value310 && right_value310 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sTypepboolp_finalize,right_value310, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value310;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value311);
                        if(right_value311 && right_value311 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value311, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value311;
                        __freed_obj__ = 0;
                        __dec_obj139=type_163->mOriginalTypeName;
                        type_163->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value312=__builtin_string(type_name_113))));
                        if(__dec_obj139) { __dec_obj139 = come_decrement_ref_count(__dec_obj139, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value312);
                        if(right_value312 && right_value312 != __result_obj__ && !__freed_obj__) { right_value312 = come_decrement_ref_count(right_value312, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[2] = right_value312;
                        __freed_obj__ = 0;
                        type_163->mOriginalTypeNamePointerNum=pointer_num_159;
                        type_163->mConstant=type_163->mConstant||constant_114;
                        __dec_obj140=type_163->mAlignas;
                        type_163->mAlignas=(struct sNode*)come_increment_ref_count(alignas__131);
                        if(__dec_obj140) { __dec_obj140 = come_decrement_ref_count(__dec_obj140, ((struct sNode*)__dec_obj140)->finalize, ((struct sNode*)__dec_obj140)->_protocol_obj, 0,0,0); }
                        type_163->mComeMemCore=type_163->mComeMemCore||come_mem_core__130;
                        type_163->mRegister=register__118;
                        type_163->mUnsigned=type_163->mUnsigned||unsigned__119;
                        type_163->mVolatile=volatile__117;
                        type_163->mStatic=type_163->mStatic||static__115;
                        type_163->mExtern=type_163->mExtern||extern__128;
                        type_163->mInline=type_163->mInline||inline__129;
                        type_163->mRestrict=type_163->mRestrict||restrict__123;
                        type_163->mLongLong=type_163->mLongLong||long_long_121;
                        type_163->mLong=type_163->mLong||long__120;
                        type_163->mShort=type_163->mShort||short__122;
                        type_163->mPointerNum+=pointer_num_159;
                    }
                    else {
                        if(_if_conditional333=list$1charph_contained(info->generics_type_names,(char*)come_increment_ref_count(type_name_113)),                        _if_conditional333) {
                            for(
                            i_215=0 ,                            0;                            _for_condtionalA6=                            i_215<list$1charph_length(info->generics_type_names) ,                            _for_condtionalA6;                            i_215++ ,                            0                            ){
                                if(_if_conditional334=string_operator_equals(optional$2charphbool_value(((struct optional$2charphbool*)(right_value313=list$1charphp_operator_load_element(info->generics_type_names,i_215)))),type_name_113),                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value313),
                                (right_value313 && right_value313 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2charphboolp_finalize,right_value313, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                __right_value_freed_obj[0] = right_value313, 
                                __freed_obj__ = 0, 
                                _if_conditional334) {
                                    __dec_obj141=type_163;
                                    type_163=(struct sType*)come_increment_ref_count(((struct sType*)(right_value316=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value314=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1543)))),((char*)(right_value315=xsprintf("generics_type%d",i_215))),(_Bool)0,info))));
                                    if(__dec_obj141) { come_call_finalizer(sType_finalize,__dec_obj141, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value314);
                                    if(right_value314 && right_value314 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value314, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value314;
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value315);
                                    if(right_value315 && right_value315 != __result_obj__ && !__freed_obj__) { right_value315 = come_decrement_ref_count(right_value315, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[1] = right_value315;
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value316);
                                    if(right_value316 && right_value316 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value316, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[2] = right_value316;
                                    __freed_obj__ = 0;
                                }
                            }
                            type_163->mConstant=type_163->mConstant||constant_114;
                            __dec_obj142=type_163->mAlignas;
                            type_163->mAlignas=(struct sNode*)come_increment_ref_count(alignas__131);
                            if(__dec_obj142) { __dec_obj142 = come_decrement_ref_count(__dec_obj142, ((struct sNode*)__dec_obj142)->finalize, ((struct sNode*)__dec_obj142)->_protocol_obj, 0,0,0); }
                            type_163->mComeMemCore=type_163->mComeMemCore||come_mem_core__130;
                            type_163->mRegister=register__118;
                            type_163->mUnsigned=type_163->mUnsigned||unsigned__119;
                            type_163->mVolatile=volatile__117;
                            type_163->mStatic=type_163->mStatic||static__115;
                            type_163->mExtern=type_163->mExtern||extern__128;
                            type_163->mInline=type_163->mInline||inline__129;
                            type_163->mRestrict=type_163->mRestrict||restrict__123;
                            type_163->mLongLong=type_163->mLongLong||long_long_121;
                            type_163->mLong=type_163->mLong||long__120;
                            type_163->mShort=type_163->mShort||short__122;
                            type_163->mPointerNum+=pointer_num_159;
                        }
                        else {
                            if(_if_conditional335=*info->p==60,                            _if_conditional335) {
                                info->p++;
                                skip_spaces_and_lf(info);
                                if(_if_conditional341=optional$2sClasspbool_value(((struct optional$2sClasspbool*)(right_value326=map$2charphsClassphp_operator_load_element(info->generics_classes,type_name_113))))==((void*)0),                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value326),
                                (right_value326 && right_value326 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2sClasspboolp_finalize,right_value326, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                __right_value_freed_obj[0] = right_value326, 
                                __freed_obj__ = 0, 
                                _if_conditional341) {
                                    __result123__ = __result_obj__ = ((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value330=optional$2tuple3$3sTypephcharphboolphbool_initialize(((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value329=(struct optional$2tuple3$3sTypephcharphboolphbool*)come_calloc(1, sizeof(struct optional$2tuple3$3sTypephcharphboolphbool)*(1), "05function4.c", 1568))),(struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value328=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value327=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1568)))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)))),(_Bool)0)));
                                    if(type_name_113 && !__freed_obj__) { type_name_113 = come_decrement_ref_count(type_name_113, (void*)0, (void*)0, 0, 0, 0); }
                                    if(alignas__131 && !__freed_obj__) { alignas__131 = come_decrement_ref_count(alignas__131, ((struct sNode*)alignas__131)->finalize, ((struct sNode*)alignas__131)->_protocol_obj, 0, 0, 0); } 
                                    if(type_163 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_163, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    if(var_name_164 && !__freed_obj__) { var_name_164 = come_decrement_ref_count(var_name_164, (void*)0, (void*)0, 0, 0, 0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value327);
                                    if(right_value327 && right_value327 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value327, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value327;
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value328);
                                    if(right_value328 && right_value328 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value328, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[1] = right_value328;
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value329);
                                    if(right_value329 && right_value329 != __result_obj__ && !__freed_obj__) { right_value329 = come_decrement_ref_count(right_value329, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[2] = right_value329;
                                    __freed_obj__ = 0;
                                    return __result123__;
                                }
                                __dec_obj143=type_163;
                                type_163=(struct sType*)come_increment_ref_count(((struct sType*)(right_value332=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value331=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1571)))),type_name_113,(_Bool)0,info))));
                                if(__dec_obj143) { come_call_finalizer(sType_finalize,__dec_obj143, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value331);
                                if(right_value331 && right_value331 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value331, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[1] = right_value331;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value332);
                                if(right_value332 && right_value332 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value332, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[2] = right_value332;
                                __freed_obj__ = 0;
                                while(_while_condtional37=(_Bool)1,                                _while_condtional37) {
                                    multiple_assgin_var4=optional$2tuple3$3sTypephcharphboolphbool_value(((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value333=parse_type(info,(_Bool)0,(_Bool)0))));
                                    generics_type_220=(struct sType*)come_increment_ref_count(multiple_assgin_var4->v1);
                                    var_name_221=(char*)come_increment_ref_count(multiple_assgin_var4->v2);
                                    err_222=multiple_assgin_var4->v3;
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value333);
                                    if(right_value333 && right_value333 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2tuple3$3sTypephcharphboolphboolp_finalize,right_value333, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value333;
                                    __freed_obj__ = 0;
                                    if(_if_conditional342=!err_222,                                    _if_conditional342) {
                                        __result124__ = __result_obj__ = ((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value337=optional$2tuple3$3sTypephcharphboolphbool_initialize(((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value336=(struct optional$2tuple3$3sTypephcharphboolphbool*)come_calloc(1, sizeof(struct optional$2tuple3$3sTypephcharphboolphbool)*(1), "05function4.c", 1577))),(struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value335=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value334=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1577)))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)))),(_Bool)0)));
                                        if(generics_type_220 && !__freed_obj__) { come_call_finalizer(sType_finalize,generics_type_220, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        if(var_name_221 && !__freed_obj__) { var_name_221 = come_decrement_ref_count(var_name_221, (void*)0, (void*)0, 0, 0, 0); }
                                        if(type_name_113 && !__freed_obj__) { type_name_113 = come_decrement_ref_count(type_name_113, (void*)0, (void*)0, 0, 0, 0); }
                                        if(alignas__131 && !__freed_obj__) { alignas__131 = come_decrement_ref_count(alignas__131, ((struct sNode*)alignas__131)->finalize, ((struct sNode*)alignas__131)->_protocol_obj, 0, 0, 0); } 
                                        if(type_163 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_163, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        if(var_name_164 && !__freed_obj__) { var_name_164 = come_decrement_ref_count(var_name_164, (void*)0, (void*)0, 0, 0, 0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value334);
                                        if(right_value334 && right_value334 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value334, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value334;
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value335);
                                        if(right_value335 && right_value335 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value335, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[1] = right_value335;
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value336);
                                        if(right_value336 && right_value336 != __result_obj__ && !__freed_obj__) { right_value336 = come_decrement_ref_count(right_value336, (void*)0, (void*)0, 1, 0, 0); }
                                        __right_value_freed_obj[2] = right_value336;
                                        __freed_obj__ = 0;
                                        return __result124__;
                                    }
                                    list$1sTypeph_push_back(type_163->mGenericsTypes,(struct sType*)come_increment_ref_count(generics_type_220));
                                    if(_if_conditional343=*info->p==44,                                    _if_conditional343) {
                                        info->p++;
                                        skip_spaces_and_lf(info);
                                    }
                                    else {
                                        if(_if_conditional344=*info->p==62,                                        _if_conditional344) {
                                            info->p++;
                                            skip_spaces_and_lf(info);
                                            if(generics_type_220 && !__freed_obj__) { come_call_finalizer(sType_finalize,generics_type_220, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            if(var_name_221 && !__freed_obj__) { var_name_221 = come_decrement_ref_count(var_name_221, (void*)0, (void*)0, 0, 0, 0); }
                                            break;
                                        }
                                        else {
                                            err_msg(info,"invalid generics type\n");
                                            __result125__ = __result_obj__ = ((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value341=optional$2tuple3$3sTypephcharphboolphbool_initialize(((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value340=(struct optional$2tuple3$3sTypephcharphboolphbool*)come_calloc(1, sizeof(struct optional$2tuple3$3sTypephcharphboolphbool)*(1), "05function4.c", 1594))),(struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value339=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value338=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1594)))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)))),(_Bool)0)));
                                            if(generics_type_220 && !__freed_obj__) { come_call_finalizer(sType_finalize,generics_type_220, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            if(var_name_221 && !__freed_obj__) { var_name_221 = come_decrement_ref_count(var_name_221, (void*)0, (void*)0, 0, 0, 0); }
                                            if(type_name_113 && !__freed_obj__) { type_name_113 = come_decrement_ref_count(type_name_113, (void*)0, (void*)0, 0, 0, 0); }
                                            if(alignas__131 && !__freed_obj__) { alignas__131 = come_decrement_ref_count(alignas__131, ((struct sNode*)alignas__131)->finalize, ((struct sNode*)alignas__131)->_protocol_obj, 0, 0, 0); } 
                                            if(type_163 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_163, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            if(var_name_164 && !__freed_obj__) { var_name_164 = come_decrement_ref_count(var_name_164, (void*)0, (void*)0, 0, 0, 0); }
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value338);
                                            if(right_value338 && right_value338 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value338, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[0] = right_value338;
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value339);
                                            if(right_value339 && right_value339 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value339, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[1] = right_value339;
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value340);
                                            if(right_value340 && right_value340 != __result_obj__ && !__freed_obj__) { right_value340 = come_decrement_ref_count(right_value340, (void*)0, (void*)0, 1, 0, 0); }
                                            __right_value_freed_obj[2] = right_value340;
                                            __freed_obj__ = 0;
                                            return __result125__;
                                        }
                                    }
                                    if(generics_type_220 && !__freed_obj__) { come_call_finalizer(sType_finalize,generics_type_220, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    if(var_name_221 && !__freed_obj__) { var_name_221 = come_decrement_ref_count(var_name_221, (void*)0, (void*)0, 0, 0, 0); }
                                }
                                if(_if_conditional345=is_contained_generics_class(type_163,info),                                _if_conditional345) {
                                    __dec_obj144=type_163;
                                    type_163=(struct sType*)come_increment_ref_count(((struct sType*)(right_value342=solve_generics(type_163,info->generics_type,info))));
                                    if(__dec_obj144) { come_call_finalizer(sType_finalize,__dec_obj144, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value342);
                                    if(right_value342 && right_value342 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value342, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value342;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    if(_if_conditional346=!output_generics_struct(type_163,type_163,info),                                    _if_conditional346) {
                                        new_name_223=(char*)come_increment_ref_count(((char*)(right_value343=create_generics_name(type_163,info))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value343);
                                        if(right_value343 && right_value343 != __result_obj__ && !__freed_obj__) { right_value343 = come_decrement_ref_count(right_value343, (void*)0, (void*)0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value343;
                                        __freed_obj__ = 0;
                                        printf("%s %d: output generics is failed(%s)\n",info->sname,info->sline,new_name_223);
                                        exit(7);
                                        if(new_name_223 && !__freed_obj__) { new_name_223 = come_decrement_ref_count(new_name_223, (void*)0, (void*)0, 0, 0, 0); }
                                    }
                                }
                                type_163->mConstant=type_163->mConstant||constant_114;
                                __dec_obj145=type_163->mAlignas;
                                type_163->mAlignas=(struct sNode*)come_increment_ref_count(alignas__131);
                                if(__dec_obj145) { __dec_obj145 = come_decrement_ref_count(__dec_obj145, ((struct sNode*)__dec_obj145)->finalize, ((struct sNode*)__dec_obj145)->_protocol_obj, 0,0,0); }
                                type_163->mComeMemCore=type_163->mComeMemCore||come_mem_core__130;
                                type_163->mRegister=register__118;
                                type_163->mUnsigned=type_163->mUnsigned||unsigned__119;
                                type_163->mVolatile=volatile__117;
                                type_163->mStatic=type_163->mStatic||static__115;
                                type_163->mExtern=type_163->mExtern||extern__128;
                                type_163->mInline=type_163->mInline||inline__129;
                                type_163->mRestrict=type_163->mRestrict||restrict__123;
                                type_163->mLongLong=type_163->mLongLong||long_long_121;
                                type_163->mLong=type_163->mLong||long__120;
                                type_163->mShort=type_163->mShort||short__122;
                                type_163->mPointerNum+=pointer_num_159;
                            }
                            else {
                                if(_if_conditional347=struct__124,                                _if_conditional347) {
                                    klass_224=optional$2sClasspbool_value(((struct optional$2sClasspbool*)(right_value344=map$2charphsClassphp_operator_load_element(info->classes,type_name_113))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value344);
                                    if(right_value344 && right_value344 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,right_value344, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value344;
                                    __freed_obj__ = 0;
                                    if(_if_conditional348=klass_224==((void*)0)&&*info->p!=60,                                    _if_conditional348) {
                                        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(type_name_113),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value356=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value355=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "05function4.c", 1630)))),type_name_113,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info)))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value355);
                                        if(right_value355 && right_value355 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value355, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value355;
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value356);
                                        if(right_value356 && right_value356 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value356, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[1] = right_value356;
                                        __freed_obj__ = 0;
                                    }
                                }
                                __dec_obj146=type_163;
                                type_163=(struct sType*)come_increment_ref_count(((struct sType*)(right_value358=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value357=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1634)))),type_name_113,(_Bool)0,info))));
                                if(__dec_obj146) { come_call_finalizer(sType_finalize,__dec_obj146, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value357);
                                if(right_value357 && right_value357 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value357, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value357;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value358);
                                if(right_value358 && right_value358 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value358, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[1] = right_value358;
                                __freed_obj__ = 0;
                                type_163->mConstant=type_163->mConstant||constant_114;
                                __dec_obj147=type_163->mAlignas;
                                type_163->mAlignas=(struct sNode*)come_increment_ref_count(alignas__131);
                                if(__dec_obj147) { __dec_obj147 = come_decrement_ref_count(__dec_obj147, ((struct sNode*)__dec_obj147)->finalize, ((struct sNode*)__dec_obj147)->_protocol_obj, 0,0,0); }
                                type_163->mComeMemCore=type_163->mComeMemCore||come_mem_core__130;
                                type_163->mRegister=register__118;
                                type_163->mUnsigned=type_163->mUnsigned||unsigned__119;
                                type_163->mVolatile=volatile__117;
                                type_163->mStatic=type_163->mStatic||static__115;
                                type_163->mExtern=type_163->mExtern||extern__128;
                                type_163->mInline=type_163->mInline||inline__129;
                                type_163->mRestrict=type_163->mRestrict||restrict__123;
                                type_163->mLongLong=type_163->mLongLong||long_long_121;
                                type_163->mLong=type_163->mLong||long__120;
                                type_163->mShort=type_163->mShort||short__122;
                                type_163->mPointerNum+=pointer_num_159;
                            }
                        }
                    }
                    skip_pointer_attribute(info);
                    while(_while_condtional47=*info->p==42,                    _while_condtional47) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        skip_pointer_attribute(info);
                        type_163->mPointerNum++;
                        if(_if_conditional402=type_163->mNoSolvedGenericsType->v1,                        _if_conditional402) {
                            type_163->mNoSolvedGenericsType->v1->mPointerNum++;
                        }
                    }
                    if(_if_conditional403=*info->p==37,                    _if_conditional403) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        type_163->mHeap=(_Bool)1;
                        if(_if_conditional404=type_163->mNoSolvedGenericsType->v1,                        _if_conditional404) {
                            type_163->mNoSolvedGenericsType->v1->mHeap=(_Bool)1;
                        }
                    }
                    if(_if_conditional405=*info->p==38,                    _if_conditional405) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        type_163->mNoHeap=(_Bool)1;
                        if(_if_conditional406=type_163->mNoSolvedGenericsType->v1,                        _if_conditional406) {
                            type_163->mNoSolvedGenericsType->v1->mHeap=(_Bool)0;
                        }
                    }
                    if(_if_conditional407=*info->p==63,                    _if_conditional407) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        type_163->mNullValue=(_Bool)1;
                    }
                    if(_if_conditional408=*info->p==124,                    _if_conditional408) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        type_163->mNoCallingDestructor=(_Bool)1;
                    }
                    skip_pointer_attribute(info);
                    while(_while_condtional48=*info->p==42,                    _while_condtional48) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        skip_pointer_attribute(info);
                        type_163->mPointerNum++;
                        if(_if_conditional409=type_163->mNoSolvedGenericsType->v1,                        _if_conditional409) {
                            type_163->mNoSolvedGenericsType->v1->mPointerNum++;
                        }
                    }
                    if(_if_conditional410=parse_multiple_type&&*info->p==44,                    _if_conditional410) {
                        types_271=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value360=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value359=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function4.c", 1716))))))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value359);
                        if(right_value359 && right_value359 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value359, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value359;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value360);
                        if(right_value360 && right_value360 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value360, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value360;
                        __freed_obj__ = 0;
                        list$1sTypeph_push_back(types_271,(struct sType*)come_increment_ref_count(((struct sType*)(right_value361=sType_clone(type_163)))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value361);
                        if(right_value361 && right_value361 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value361, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[2] = right_value361;
                        __freed_obj__ = 0;
                        while(_while_condtional49=*info->p==44,                        _while_condtional49) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            multiple_assgin_var5=optional$2tuple3$3sTypephcharphboolphbool_value(((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value362=parse_type(info,(_Bool)0,(_Bool)0))));
                            type2_272=(struct sType*)come_increment_ref_count(multiple_assgin_var5->v1);
                            name_273=(char*)come_increment_ref_count(multiple_assgin_var5->v2);
                            err_274=multiple_assgin_var5->v3;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value362);
                            if(right_value362 && right_value362 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2tuple3$3sTypephcharphboolphboolp_finalize,right_value362, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value362;
                            __freed_obj__ = 0;
                            if(_if_conditional411=!err_274,                            _if_conditional411) {
                                __result150__ = __result_obj__ = ((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value366=optional$2tuple3$3sTypephcharphboolphbool_initialize(((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value365=(struct optional$2tuple3$3sTypephcharphboolphbool*)come_calloc(1, sizeof(struct optional$2tuple3$3sTypephcharphboolphbool)*(1), "05function4.c", 1727))),(struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value364=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value363=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1727)))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)))),(_Bool)0)));
                                if(type2_272 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_272, (void*)0, (void*)0, 0, 0, 0, 0); }
                                if(name_273 && !__freed_obj__) { name_273 = come_decrement_ref_count(name_273, (void*)0, (void*)0, 0, 0, 0); }
                                if(types_271 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,types_271, (void*)0, (void*)0, 0, 0, 0, 0); }
                                if(type_name_113 && !__freed_obj__) { type_name_113 = come_decrement_ref_count(type_name_113, (void*)0, (void*)0, 0, 0, 0); }
                                if(alignas__131 && !__freed_obj__) { alignas__131 = come_decrement_ref_count(alignas__131, ((struct sNode*)alignas__131)->finalize, ((struct sNode*)alignas__131)->_protocol_obj, 0, 0, 0); } 
                                if(type_163 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_163, (void*)0, (void*)0, 0, 0, 0, 0); }
                                if(var_name_164 && !__freed_obj__) { var_name_164 = come_decrement_ref_count(var_name_164, (void*)0, (void*)0, 0, 0, 0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value363);
                                if(right_value363 && right_value363 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value363, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value363;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value364);
                                if(right_value364 && right_value364 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value364, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[1] = right_value364;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value365);
                                if(right_value365 && right_value365 != __result_obj__ && !__freed_obj__) { right_value365 = come_decrement_ref_count(right_value365, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[2] = right_value365;
                                __freed_obj__ = 0;
                                return __result150__;
                            }
                            list$1sTypeph_push_back(types_271,(struct sType*)come_increment_ref_count(((struct sType*)(right_value367=sType_clone(type2_272)))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value367);
                            if(right_value367 && right_value367 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value367, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value367;
                            __freed_obj__ = 0;
                            if(type2_272 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_272, (void*)0, (void*)0, 0, 0, 0, 0); }
                            if(name_273 && !__freed_obj__) { name_273 = come_decrement_ref_count(name_273, (void*)0, (void*)0, 0, 0, 0); }
                        }
                        num_tuples_275=list$1sTypeph_length(types_271);
                        __dec_obj148=type_163;
                        type_163=(struct sType*)come_increment_ref_count(((struct sType*)(right_value370=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value368=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1735)))),((char*)(right_value369=xsprintf("tuple%d",num_tuples_275))),(_Bool)0,info))));
                        if(__dec_obj148) { come_call_finalizer(sType_finalize,__dec_obj148, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value368);
                        if(right_value368 && right_value368 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value368, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[3] = right_value368;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value369);
                        if(right_value369 && right_value369 != __result_obj__ && !__freed_obj__) { right_value369 = come_decrement_ref_count(right_value369, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[4] = right_value369;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value370);
                        if(right_value370 && right_value370 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value370, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[5] = right_value370;
                        __freed_obj__ = 0;
                        type_163->mPointerNum++;
                        type_163->mHeap=(_Bool)1;
                        for(
                        o2_saved_276=(struct list$1sTypeph*)come_increment_ref_count((types_271)),it_277=list$1sTypeph_begin((o2_saved_276)) ,                        0;                        _for_condtionalA9=                        !list$1sTypeph_end((o2_saved_276)) ,                        _for_condtionalA9;                        it_277=list$1sTypeph_next((o2_saved_276)) ,                        0                        ){
                            list$1sTypeph_push_back(type_163->mGenericsTypes,(struct sType*)come_increment_ref_count(((struct sType*)(right_value371=sType_clone(it_277)))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value371);
                            if(right_value371 && right_value371 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value371, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value371;
                            __freed_obj__ = 0;
                        }
                        if(o2_saved_276 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_276, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(_if_conditional412=is_contained_generics_class(type_163,info),                        _if_conditional412) {
                            __dec_obj149=type_163;
                            type_163=(struct sType*)come_increment_ref_count(((struct sType*)(right_value372=solve_generics(type_163,info->generics_type,info))));
                            if(__dec_obj149) { come_call_finalizer(sType_finalize,__dec_obj149, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value372);
                            if(right_value372 && right_value372 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value372, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value372;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional413=!output_generics_struct(type_163,type_163,info),                            _if_conditional413) {
                                new_name_278=(char*)come_increment_ref_count(((char*)(right_value373=create_generics_name(type_163,info))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value373);
                                if(right_value373 && right_value373 != __result_obj__ && !__freed_obj__) { right_value373 = come_decrement_ref_count(right_value373, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value373;
                                __freed_obj__ = 0;
                                printf("output generics is failed(%s)\n",new_name_278);
                                exit(9);
                                if(new_name_278 && !__freed_obj__) { new_name_278 = come_decrement_ref_count(new_name_278, (void*)0, (void*)0, 0, 0, 0); }
                            }
                        }
                        if(types_271 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,types_271, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    if(_if_conditional414=parse_variable_name,                    _if_conditional414) {
                        parse_sharp_v5(info);
                        if(_if_conditional415=var_name_between_brace_169&&*info->p==40,                        _if_conditional415) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        if(_if_conditional416=*info->p==58,                        _if_conditional416) {
                            __dec_obj150=var_name_164;
                            var_name_164=(char*)come_increment_ref_count(((char*)(right_value374=__builtin_string(""))));
                            if(__dec_obj150) { __dec_obj150 = come_decrement_ref_count(__dec_obj150, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value374);
                            if(right_value374 && right_value374 != __result_obj__ && !__freed_obj__) { right_value374 = come_decrement_ref_count(right_value374, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value374;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional417=anonymous_name_133,                            _if_conditional417) {
                                num_anonymous_var_name_279++;
                                __dec_obj151=var_name_164;
                                var_name_164=(char*)come_increment_ref_count(((char*)(right_value375=xsprintf("anonymous_var_nameXYZLO%d",num_anonymous_var_name_279))));
                                if(__dec_obj151) { __dec_obj151 = come_decrement_ref_count(__dec_obj151, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value375);
                                if(right_value375 && right_value375 != __result_obj__ && !__freed_obj__) { right_value375 = come_decrement_ref_count(right_value375, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value375;
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional418=xisalnum(*info->p)||*info->p==95,                                _if_conditional418) {
                                    __dec_obj152=var_name_164;
                                    var_name_164=(char*)come_increment_ref_count(optional$2charphbool_value(((struct optional$2charphbool*)(right_value376=parse_word(info)))));
                                    if(__dec_obj152) { __dec_obj152 = come_decrement_ref_count(__dec_obj152, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value376);
                                    if(right_value376 && right_value376 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value376, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value376;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    num_anonymous_var_name_280++;
                                    __dec_obj153=var_name_164;
                                    var_name_164=(char*)come_increment_ref_count(((char*)(right_value377=xsprintf("anonymous_var_nameX%d",num_anonymous_var_name_280))));
                                    if(__dec_obj153) { __dec_obj153 = come_decrement_ref_count(__dec_obj153, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value377);
                                    if(right_value377 && right_value377 != __result_obj__ && !__freed_obj__) { right_value377 = come_decrement_ref_count(right_value377, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value377;
                                    __freed_obj__ = 0;
                                }
                            }
                        }
                        if(_if_conditional419=var_name_between_brace_169&&*info->p==41,                        _if_conditional419) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        if(_if_conditional420=*info->p==58,                        _if_conditional420) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            no_comma_281=info->no_comma;
                            info->no_comma=(_Bool)1;
                            node_282=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value378=expression_v13(info))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value378);
                            if(right_value378 && right_value378 != __result_obj__ && !__freed_obj__) { right_value378 = come_decrement_ref_count(right_value378, ((struct sNode*)right_value378)->finalize, ((struct sNode*)right_value378)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[0] = right_value378;
                            __freed_obj__ = 0;
                            info->no_comma=no_comma_281;
                            __dec_obj154=type_163->mSizeNum;
                            type_163->mSizeNum=(struct sNode*)come_increment_ref_count(node_282);
                            if(__dec_obj154) { __dec_obj154 = come_decrement_ref_count(__dec_obj154, ((struct sNode*)__dec_obj154)->finalize, ((struct sNode*)__dec_obj154)->_protocol_obj, 0,0,0); }
                            if(node_282 && !__freed_obj__) { node_282 = come_decrement_ref_count(node_282, ((struct sNode*)node_282)->finalize, ((struct sNode*)node_282)->_protocol_obj, 0, 0, 0); } 
                        }
                    }
                }
            }
        }
    }
    parse_sharp_v5(info);
    while(_while_condtional50=*info->p==91,    _while_condtional50) {
        info->p++;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        skip_pointer_attribute(info);
        if(_if_conditional421=*info->p==93,        _if_conditional421) {
            info->p++;
            skip_spaces_and_lf(info);
            type_163->mPointerNum++;
            break;
        }
        parse_sharp_v5(info);
        node_283=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value379=expression_v13(info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value379);
        if(right_value379 && right_value379 != __result_obj__ && !__freed_obj__) { right_value379 = come_decrement_ref_count(right_value379, ((struct sNode*)right_value379)->finalize, ((struct sNode*)right_value379)->_protocol_obj, 1, 0, 0); } 
        __right_value_freed_obj[0] = right_value379;
        __freed_obj__ = 0;
        list$1sNodeph_push_back(type_163->mArrayNum,(struct sNode*)come_increment_ref_count(node_283));
        parse_sharp_v5(info);
        optional$2intbool_value(((struct optional$2intbool*)(right_value380=expected_next_character(93,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value380);
        if(right_value380 && right_value380 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value380, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value380;
        __freed_obj__ = 0;
        if(node_283 && !__freed_obj__) { node_283 = come_decrement_ref_count(node_283, ((struct sNode*)node_283)->finalize, ((struct sNode*)node_283)->_protocol_obj, 0, 0, 0); } 
    }
    asm_name_284=(char*)come_increment_ref_count(((char*)(right_value381=parse_attribute(info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value381);
    if(right_value381 && right_value381 != __result_obj__ && !__freed_obj__) { right_value381 = come_decrement_ref_count(right_value381, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value381;
    __freed_obj__ = 0;
    __dec_obj155=type_163->mAsmName;
    type_163->mAsmName=(char*)come_increment_ref_count(asm_name_284);
    if(__dec_obj155) { __dec_obj155 = come_decrement_ref_count(__dec_obj155, (void*)0, (void*)0, 0,0,0); }
    parse_sharp_v5(info);
    if(_if_conditional422=exception__116,    _if_conditional422) {
        type2_285=(struct sType*)come_increment_ref_count(((struct sType*)(right_value383=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value382=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1830)))),"optional",(_Bool)0,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value382);
        if(right_value382 && right_value382 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value382, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value382;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value383);
        if(right_value383 && right_value383 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value383, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value383;
        __freed_obj__ = 0;
        list$1sTypeph_add(type2_285->mGenericsTypes,(struct sType*)come_increment_ref_count(type_163));
        list$1sTypeph_add(type2_285->mGenericsTypes,(struct sType*)come_increment_ref_count(((struct sType*)(right_value385=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value384=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1832)))),"bool",(_Bool)0,info)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value384);
        if(right_value384 && right_value384 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value384, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value384;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value385);
        if(right_value385 && right_value385 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value385, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value385;
        __freed_obj__ = 0;
        type2_285->mPointerNum++;
        type2_285->mHeap=(_Bool)1;
        type2_285->mException=(_Bool)1;
        if(_if_conditional423=!is_contained_generics_class(type2_285,info),        _if_conditional423) {
            if(_if_conditional424=!output_generics_struct(type2_285,type2_285,info),            _if_conditional424) {
                err_msg(info,"invalid exception definition");
                __result151__ = __result_obj__ = ((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value389=optional$2tuple3$3sTypephcharphboolphbool_initialize(((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value388=(struct optional$2tuple3$3sTypephcharphboolphbool*)come_calloc(1, sizeof(struct optional$2tuple3$3sTypephcharphboolphbool)*(1), "05function4.c", 1842))),(struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value387=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value386=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1842)))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)))),(_Bool)0)));
                if(type2_285 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_285, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(type_name_113 && !__freed_obj__) { type_name_113 = come_decrement_ref_count(type_name_113, (void*)0, (void*)0, 0, 0, 0); }
                if(alignas__131 && !__freed_obj__) { alignas__131 = come_decrement_ref_count(alignas__131, ((struct sNode*)alignas__131)->finalize, ((struct sNode*)alignas__131)->_protocol_obj, 0, 0, 0); } 
                if(type_163 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_163, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(var_name_164 && !__freed_obj__) { var_name_164 = come_decrement_ref_count(var_name_164, (void*)0, (void*)0, 0, 0, 0); }
                if(asm_name_284 && !__freed_obj__) { asm_name_284 = come_decrement_ref_count(asm_name_284, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value386);
                if(right_value386 && right_value386 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value386, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value386;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value387);
                if(right_value387 && right_value387 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value387, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value387;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value388);
                if(right_value388 && right_value388 != __result_obj__ && !__freed_obj__) { right_value388 = come_decrement_ref_count(right_value388, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value388;
                __freed_obj__ = 0;
                return __result151__;
            }
        }
        __result152__ = __result_obj__ = ((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value393=optional$2tuple3$3sTypephcharphboolphbool_initialize((struct optional$2tuple3$3sTypephcharphboolphbool*)come_increment_ref_count(((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value392=(struct optional$2tuple3$3sTypephcharphboolphbool*)come_calloc(1, sizeof(struct optional$2tuple3$3sTypephcharphboolphbool)*(1), "05function4.c", 1846)))),(struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value391=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value390=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1846)))),(struct sType*)come_increment_ref_count(type2_285),(char*)come_increment_ref_count(var_name_164),(_Bool)1)))),(_Bool)1)));
        if(type2_285 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_285, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(type_name_113 && !__freed_obj__) { type_name_113 = come_decrement_ref_count(type_name_113, (void*)0, (void*)0, 0, 0, 0); }
        if(alignas__131 && !__freed_obj__) { alignas__131 = come_decrement_ref_count(alignas__131, ((struct sNode*)alignas__131)->finalize, ((struct sNode*)alignas__131)->_protocol_obj, 0, 0, 0); } 
        if(type_163 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_163, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(var_name_164 && !__freed_obj__) { var_name_164 = come_decrement_ref_count(var_name_164, (void*)0, (void*)0, 0, 0, 0); }
        if(asm_name_284 && !__freed_obj__) { asm_name_284 = come_decrement_ref_count(asm_name_284, (void*)0, (void*)0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value390);
        if(right_value390 && right_value390 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value390, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[4] = right_value390;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value391);
        if(right_value391 && right_value391 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value391, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[5] = right_value391;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value392);
        if(right_value392 && right_value392 != __result_obj__ && !__freed_obj__) { right_value392 = come_decrement_ref_count(right_value392, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[6] = right_value392;
        __freed_obj__ = 0;
        return __result152__;
        if(type2_285 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_285, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __result153__ = __result_obj__ = ((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value397=optional$2tuple3$3sTypephcharphboolphbool_initialize((struct optional$2tuple3$3sTypephcharphboolphbool*)come_increment_ref_count(((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value396=(struct optional$2tuple3$3sTypephcharphboolphbool*)come_calloc(1, sizeof(struct optional$2tuple3$3sTypephcharphboolphbool)*(1), "05function4.c", 1849)))),(struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value395=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value394=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1849)))),(struct sType*)come_increment_ref_count(type_163),(char*)come_increment_ref_count(var_name_164),(_Bool)1)))),(_Bool)1)));
    if(type_name_113 && !__freed_obj__) { type_name_113 = come_decrement_ref_count(type_name_113, (void*)0, (void*)0, 0, 0, 0); }
    if(alignas__131 && !__freed_obj__) { alignas__131 = come_decrement_ref_count(alignas__131, ((struct sNode*)alignas__131)->finalize, ((struct sNode*)alignas__131)->_protocol_obj, 0, 0, 0); } 
    if(type_163 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_163, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(var_name_164 && !__freed_obj__) { var_name_164 = come_decrement_ref_count(var_name_164, (void*)0, (void*)0, 0, 0, 0); }
    if(asm_name_284 && !__freed_obj__) { asm_name_284 = come_decrement_ref_count(asm_name_284, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value394);
    if(right_value394 && right_value394 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value394, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value394;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value395);
    if(right_value395 && right_value395 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value395, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value395;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value396);
    if(right_value396 && right_value396 != __result_obj__ && !__freed_obj__) { right_value396 = come_decrement_ref_count(right_value396, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value396;
    __freed_obj__ = 0;
    return __result153__;
    if(type_name_113 && !__freed_obj__) { type_name_113 = come_decrement_ref_count(type_name_113, (void*)0, (void*)0, 0, 0, 0); }
    if(alignas__131 && !__freed_obj__) { alignas__131 = come_decrement_ref_count(alignas__131, ((struct sNode*)alignas__131)->finalize, ((struct sNode*)alignas__131)->_protocol_obj, 0, 0, 0); } 
    if(type_163 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_163, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(var_name_164 && !__freed_obj__) { var_name_164 = come_decrement_ref_count(var_name_164, (void*)0, (void*)0, 0, 0, 0); }
    if(asm_name_284 && !__freed_obj__) { asm_name_284 = come_decrement_ref_count(asm_name_284, (void*)0, (void*)0, 0, 0, 0); }
}

static struct tuple3$3sTypephcharphbool* tuple3$3sTypephcharphbool_initialize(struct tuple3$3sTypephcharphbool* self, struct sType* v1, char* v2, _Bool v3){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value146;
struct sType* __dec_obj61;
void* right_value147;
char* __dec_obj62;
struct tuple3$3sTypephcharphbool* __result79__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value146, 0, sizeof(void*));
memset(&right_value147, 0, sizeof(void*));
                                __dec_obj61=self->v1;
                                self->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value146=sType_clone(v1))));
                                if(__dec_obj61) { come_call_finalizer(sType_finalize,__dec_obj61, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value146);
                                if(right_value146 && right_value146 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value146, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value146;
                                __freed_obj__ = 0;
                                __dec_obj62=self->v2;
                                self->v2=(char*)come_increment_ref_count(((char*)(right_value147=string_clone(v2))));
                                if(__dec_obj62) { __dec_obj62 = come_decrement_ref_count(__dec_obj62, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value147);
                                if(right_value147 && right_value147 != __result_obj__ && !__freed_obj__) { right_value147 = come_decrement_ref_count(right_value147, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[1] = right_value147;
                                __freed_obj__ = 0;
                                self->v3=v3;
                                __result79__ = __result_obj__ = self;
                                if(self && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                                if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                                if(v2 && !__freed_obj__) { v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0, 1, 0); }
                                return __result79__;
                                if(self && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                                if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                                if(v2 && !__freed_obj__) { v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0, 1, 0); }
}

static struct optional$2tuple3$3sTypephcharphboolphbool* optional$2tuple3$3sTypephcharphboolphbool_initialize(struct optional$2tuple3$3sTypephcharphboolphbool* self, struct tuple3$3sTypephcharphbool* v1, _Bool v2){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct tuple3$3sTypephcharphbool* __dec_obj63;
struct optional$2tuple3$3sTypephcharphboolphbool* __result80__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                __dec_obj63=self->v1;
                                self->v1=(struct tuple3$3sTypephcharphbool*)come_increment_ref_count(v1);
                                if(__dec_obj63) { come_call_finalizer(tuple3$3sTypephcharphbool_finalize,__dec_obj63, (void*)0, (void*)0, 0, 0, 0, 0); }
                                self->v2=v2;
                                __result80__ = __result_obj__ = self;
                                if(self && !__freed_obj__) { come_call_finalizer(optional$2tuple3$3sTypephcharphboolphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                                if(v1 && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                                return __result80__;
                                if(self && !__freed_obj__) { come_call_finalizer(optional$2tuple3$3sTypephcharphboolphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                                if(v1 && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void tuple3$3sTypephcharphbool_finalize(struct tuple3$3sTypephcharphbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional214;
_Bool _if_conditional215;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                    if(_if_conditional214=self!=((void*)0)&&self->v1!=((void*)0),                                    _if_conditional214) {
                                        if(self->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    }
                                    if(_if_conditional215=self!=((void*)0)&&self->v2!=((void*)0),                                    _if_conditional215) {
                                        if(self->v2 && !__freed_obj__) { self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, 0); }
                                    }
}

static struct optional$2sTypepbool* map$2charphsTypephp_operator_load_element(struct map$2charphsTypeph* self, char* key){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sType* default_value_184;
unsigned int hash_185;
unsigned int it_186;
_Bool _while_condtional34;
_Bool _if_conditional297;
void* right_value246;
_Bool _if_conditional298;
void* right_value247;
void* right_value248;
struct optional$2sTypepbool* __result91__;
_Bool _if_conditional299;
_Bool _if_conditional300;
void* right_value249;
void* right_value250;
struct optional$2sTypepbool* __result92__;
void* right_value251;
void* right_value252;
struct optional$2sTypepbool* __result93__;
void* right_value253;
void* right_value254;
struct optional$2sTypepbool* __result94__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_184, 0, sizeof(struct sType*));
memset(&hash_185, 0, sizeof(unsigned int));
memset(&it_186, 0, sizeof(unsigned int));
memset(&right_value246, 0, sizeof(void*));
memset(&right_value247, 0, sizeof(void*));
memset(&right_value248, 0, sizeof(void*));
memset(&right_value249, 0, sizeof(void*));
memset(&right_value250, 0, sizeof(void*));
memset(&right_value251, 0, sizeof(void*));
memset(&right_value252, 0, sizeof(void*));
memset(&right_value253, 0, sizeof(void*));
memset(&right_value254, 0, sizeof(void*));
                memset(&default_value_184,0,sizeof(struct sType*));
                hash_185=string_get_hash_key(((char*)key))%self->size;
                it_186=hash_185;
                while(_while_condtional34=(_Bool)1,                _while_condtional34) {
                    if(_if_conditional297=self->item_existance[it_186],                    _if_conditional297) {
                        if(_if_conditional298=optional$2boolbool_value(((struct optional$2boolbool*)(right_value246=string_equals(self->keys[it_186],key)))),                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value246),
                        (right_value246 && right_value246 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value246, (void*)0, (void*)0, 0, 1, 0, 0):0,
                        __right_value_freed_obj[0] = right_value246, 
                        __freed_obj__ = 0, 
                        _if_conditional298) {
                            __result91__ = __result_obj__ = ((struct optional$2sTypepbool*)(right_value248=optional$2sTypepbool_initialize((struct optional$2sTypepbool*)come_increment_ref_count(((struct optional$2sTypepbool*)(right_value247=(struct optional$2sTypepbool*)come_calloc(1, sizeof(struct optional$2sTypepbool)*(1), "./comelang2.h", 1606)))),self->items[it_186],(_Bool)1)));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value247);
                            if(right_value247 && right_value247 != __result_obj__ && !__freed_obj__) { right_value247 = come_decrement_ref_count(right_value247, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value247;
                            __freed_obj__ = 0;
                            return __result91__;
                        }
                        it_186++;
                        if(_if_conditional299=it_186>=self->size,                        _if_conditional299) {
                            it_186=0;
                        }
                        else {
                            if(_if_conditional300=it_186==hash_185,                            _if_conditional300) {
                                __result92__ = __result_obj__ = ((struct optional$2sTypepbool*)(right_value250=optional$2sTypepbool_initialize(((struct optional$2sTypepbool*)(right_value249=(struct optional$2sTypepbool*)come_calloc(1, sizeof(struct optional$2sTypepbool)*(1), "./comelang2.h", 1615))),default_value_184,(_Bool)0)));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value249);
                                if(right_value249 && right_value249 != __result_obj__ && !__freed_obj__) { right_value249 = come_decrement_ref_count(right_value249, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value249;
                                __freed_obj__ = 0;
                                return __result92__;
                            }
                        }
                    }
                    else {
                        __result93__ = __result_obj__ = ((struct optional$2sTypepbool*)(right_value252=optional$2sTypepbool_initialize(((struct optional$2sTypepbool*)(right_value251=(struct optional$2sTypepbool*)come_calloc(1, sizeof(struct optional$2sTypepbool)*(1), "./comelang2.h", 1619))),default_value_184,(_Bool)0)));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value251);
                        if(right_value251 && right_value251 != __result_obj__ && !__freed_obj__) { right_value251 = come_decrement_ref_count(right_value251, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value251;
                        __freed_obj__ = 0;
                        return __result93__;
                    }
                }
                __result94__ = __result_obj__ = ((struct optional$2sTypepbool*)(right_value254=optional$2sTypepbool_initialize(((struct optional$2sTypepbool*)(right_value253=(struct optional$2sTypepbool*)come_calloc(1, sizeof(struct optional$2sTypepbool)*(1), "./comelang2.h", 1623))),default_value_184,(_Bool)0)));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value253);
                if(right_value253 && right_value253 != __result_obj__ && !__freed_obj__) { right_value253 = come_decrement_ref_count(right_value253, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value253;
                __freed_obj__ = 0;
                return __result94__;
}

static struct optional$2sTypepbool* optional$2sTypepbool_initialize(struct optional$2sTypepbool* self, struct sType* v1, _Bool v2){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct optional$2sTypepbool* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                self->v1=v1;
                                self->v2=v2;
                                __result90__ = __result_obj__ = self;
                                if(self && !__freed_obj__) { come_call_finalizer(optional$2sTypepboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                                return __result90__;
                                if(self && !__freed_obj__) { come_call_finalizer(optional$2sTypepboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2sTypepboolp_finalize(struct optional$2sTypepbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct sType* optional$2sTypepbool_value(struct optional$2sTypepbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional301;
struct sType* default_value_187;
struct sType* __result95__;
struct sType* __result96__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_187, 0, sizeof(struct sType*));
                if(_if_conditional301=self==((void*)0),                _if_conditional301) {
                    memset(&default_value_187,0,sizeof(struct sType*));
                    __result95__ = __result_obj__ = default_value_187;
                    return __result95__;
                }
                else {
                    __result96__ = __result_obj__ = self->v1;
                    return __result96__;
                }
}

static _Bool list$1charph_contained(struct list$1charph* self, char* item){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* it_190;
_Bool _for_condtionalA3;
_Bool _if_conditional307;
_Bool __result104__;
_Bool __result105__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_190, 0, sizeof(char*));
                    for(
                    it_190=list$1charph_begin(self) ,                    0;                    _for_condtionalA3=                    !list$1charph_end(self) ,                    _for_condtionalA3;                    it_190=list$1charph_next(self) ,                    0                    ){
                        if(_if_conditional307=string_operator_equals(it_190,item),                        _if_conditional307) {
                            __result104__ = (_Bool)1;
                            if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
                            return __result104__;
                        }
                    }
                    __result105__ = (_Bool)0;
                    if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
                    return __result105__;
                    if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
}

static char* list$1charph_begin(struct list$1charph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional303;
char* result_188;
char* __result97__;
_Bool _if_conditional304;
char* __result98__;
char* result_189;
char* __result99__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_188, 0, sizeof(char*));
memset(&result_189, 0, sizeof(char*));
                        if(_if_conditional303=self==((void*)0),                        _if_conditional303) {
                            memset(&result_188,0,sizeof(char*));
                            __result97__ = __result_obj__ = result_188;
                            return __result97__;
                        }
                        self->it=self->head;
                        if(_if_conditional304=self->it,                        _if_conditional304) {
                            __result98__ = __result_obj__ = self->it->item;
                            return __result98__;
                        }
                        memset(&result_189,0,sizeof(char*));
                        __result99__ = __result_obj__ = result_189;
                        return __result99__;
}

static _Bool list$1charph_end(struct list$1charph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result100__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        __result100__ = self==((void*)0)||self->it==((void*)0);
                        return __result100__;
}

static char* list$1charph_next(struct list$1charph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional305;
char* result_191;
char* __result101__;
_Bool _if_conditional306;
char* __result102__;
char* result_192;
char* __result103__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_191, 0, sizeof(char*));
memset(&result_192, 0, sizeof(char*));
                        if(_if_conditional305=self==((void*)0)||self->it==((void*)0),                        _if_conditional305) {
                            memset(&result_191,0,sizeof(char*));
                            __result101__ = __result_obj__ = result_191;
                            return __result101__;
                        }
                        self->it=self->it->next;
                        if(_if_conditional306=self->it,                        _if_conditional306) {
                            __result102__ = __result_obj__ = self->it->item;
                            return __result102__;
                        }
                        memset(&result_192,0,sizeof(char*));
                        __result103__ = __result_obj__ = result_192;
                        return __result103__;
}

static int list$1charph_length(struct list$1charph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result106__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        __result106__ = self->len;
                        return __result106__;
}

static struct optional$2charphbool* list$1charphp_operator_load_element(struct list$1charph* self, int position){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional309;
struct list_item$1charph* it_194;
int i_195;
_Bool _while_condtional35;
_Bool _if_conditional310;
void* right_value258;
void* right_value259;
struct optional$2charphbool* __result107__;
char* default_value_196;
void* right_value260;
void* right_value261;
struct optional$2charphbool* __result108__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_194, 0, sizeof(struct list_item$1charph*));
memset(&i_195, 0, sizeof(int));
memset(&right_value258, 0, sizeof(void*));
memset(&right_value259, 0, sizeof(void*));
memset(&default_value_196, 0, sizeof(char*));
memset(&right_value260, 0, sizeof(void*));
memset(&right_value261, 0, sizeof(void*));
                            if(_if_conditional309=position<0,                            _if_conditional309) {
                                position+=self->len;
                            }
                            it_194=self->head;
                            i_195=0;
                            while(_while_condtional35=it_194!=((void*)0),                            _while_condtional35) {
                                if(_if_conditional310=position==i_195,                                _if_conditional310) {
                                    __result107__ = __result_obj__ = ((struct optional$2charphbool*)(right_value259=optional$2charphbool_initialize((struct optional$2charphbool*)come_increment_ref_count(((struct optional$2charphbool*)(right_value258=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "./comelang2.h", 753)))),(char*)come_increment_ref_count(it_194->item),(_Bool)1)));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value258);
                                    if(right_value258 && right_value258 != __result_obj__ && !__freed_obj__) { right_value258 = come_decrement_ref_count(right_value258, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value258;
                                    __freed_obj__ = 0;
                                    return __result107__;
                                }
                                it_194=it_194->next;
                                i_195++;
                            }
                            memset(&default_value_196,0,sizeof(char*));
                            __result108__ = __result_obj__ = ((struct optional$2charphbool*)(right_value261=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value260=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "./comelang2.h", 761))),(char*)come_increment_ref_count(default_value_196),(_Bool)0)));
                            if(default_value_196 && !__freed_obj__) { default_value_196 = come_decrement_ref_count(default_value_196, (void*)0, (void*)0, 0, 0, 0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value260);
                            if(right_value260 && right_value260 != __result_obj__ && !__freed_obj__) { right_value260 = come_decrement_ref_count(right_value260, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value260;
                            __freed_obj__ = 0;
                            return __result108__;
                            if(default_value_196 && !__freed_obj__) { default_value_196 = come_decrement_ref_count(default_value_196, (void*)0, (void*)0, 0, 0, 0); }
}

static struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool_value(struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional312;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* default_value_197;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* __result109__;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* __result110__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_197, 0, sizeof(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*));
                if(_if_conditional312=self==((void*)0),                _if_conditional312) {
                    memset(&default_value_197,0,sizeof(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*));
                    __result109__ = __result_obj__ = default_value_197;
                    return __result109__;
                }
                else {
                    __result110__ = __result_obj__ = self->v1;
                    return __result110__;
                }
}

static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value273;
struct sType* __dec_obj117;
struct tuple1$1sTypeph* __result111__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value273, 0, sizeof(void*));
                __dec_obj117=self->v1;
                self->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value273=sType_clone(v1))));
                if(__dec_obj117) { come_call_finalizer(sType_finalize,__dec_obj117, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value273);
                if(right_value273 && right_value273 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value273, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value273;
                __freed_obj__ = 0;
                __result111__ = __result_obj__ = self;
                if(self && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result111__;
                if(self && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct tuple3$3voidpvoidpbool* tuple3$3voidpvoidpbool_initialize(struct tuple3$3voidpvoidpbool* self, void* v1, void* v2, _Bool v3){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct tuple3$3voidpvoidpbool* __result113__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            self->v1=v1;
                            self->v2=v2;
                            self->v3=v3;
                            __result113__ = __result_obj__ = self;
                            if(self && !__freed_obj__) { come_call_finalizer(tuple3$3voidpvoidpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                            return __result113__;
                            if(self && !__freed_obj__) { come_call_finalizer(tuple3$3voidpvoidpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void tuple3$3voidpvoidpboolp_finalize(struct tuple3$3voidpvoidpbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct optional$2tuple3$3voidpvoidpboolphbool* optional$2tuple3$3voidpvoidpboolphbool_initialize(struct optional$2tuple3$3voidpvoidpboolphbool* self, struct tuple3$3voidpvoidpbool* v1, _Bool v2){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct tuple3$3voidpvoidpbool* __dec_obj131;
struct optional$2tuple3$3voidpvoidpboolphbool* __result114__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            __dec_obj131=self->v1;
                            self->v1=(struct tuple3$3voidpvoidpbool*)come_increment_ref_count(v1);
                            if(__dec_obj131) { come_call_finalizer(tuple3$3voidpvoidpbool_finalize,__dec_obj131, (void*)0, (void*)0, 0, 0, 0, 0); }
                            self->v2=v2;
                            __result114__ = __result_obj__ = self;
                            if(self && !__freed_obj__) { come_call_finalizer(optional$2tuple3$3voidpvoidpboolphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                            if(v1 && !__freed_obj__) { come_call_finalizer(tuple3$3voidpvoidpboolp_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                            return __result114__;
                            if(self && !__freed_obj__) { come_call_finalizer(optional$2tuple3$3voidpvoidpboolphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                            if(v1 && !__freed_obj__) { come_call_finalizer(tuple3$3voidpvoidpboolp_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void tuple3$3voidpvoidpbool_finalize(struct tuple3$3voidpvoidpbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static void optional$2tuple3$3voidpvoidpboolphboolp_finalize(struct optional$2tuple3$3voidpvoidpboolphbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional322;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional322=self!=((void*)0)&&self->v1!=((void*)0),                                _if_conditional322) {
                                    if(self->v1 && !__freed_obj__) { come_call_finalizer(tuple3$3voidpvoidpboolp_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                                }
}

static void CVALUE_finalize(struct CVALUE* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional323;
_Bool _if_conditional324;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional323=self!=((void*)0)&&self->c_value!=((void*)0),                        _if_conditional323) {
                            if(self->c_value && !__freed_obj__) { self->c_value = come_decrement_ref_count(self->c_value, (void*)0, (void*)0, 0, 0, 0); }
                        }
                        if(_if_conditional324=self!=((void*)0)&&self->type!=((void*)0),                        _if_conditional324) {
                            if(self->type && !__freed_obj__) { come_call_finalizer(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
}

static struct optional$2sClasspbool* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sClass* default_value_216;
unsigned int hash_217;
unsigned int it_218;
_Bool _while_condtional36;
_Bool _if_conditional336;
void* right_value317;
_Bool _if_conditional337;
void* right_value318;
void* right_value319;
struct optional$2sClasspbool* __result117__;
_Bool _if_conditional338;
_Bool _if_conditional339;
void* right_value320;
void* right_value321;
struct optional$2sClasspbool* __result118__;
void* right_value322;
void* right_value323;
struct optional$2sClasspbool* __result119__;
void* right_value324;
void* right_value325;
struct optional$2sClasspbool* __result120__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_216, 0, sizeof(struct sClass*));
memset(&hash_217, 0, sizeof(unsigned int));
memset(&it_218, 0, sizeof(unsigned int));
memset(&right_value317, 0, sizeof(void*));
memset(&right_value318, 0, sizeof(void*));
memset(&right_value319, 0, sizeof(void*));
memset(&right_value320, 0, sizeof(void*));
memset(&right_value321, 0, sizeof(void*));
memset(&right_value322, 0, sizeof(void*));
memset(&right_value323, 0, sizeof(void*));
memset(&right_value324, 0, sizeof(void*));
memset(&right_value325, 0, sizeof(void*));
                                    memset(&default_value_216,0,sizeof(struct sClass*));
                                    hash_217=string_get_hash_key(((char*)key))%self->size;
                                    it_218=hash_217;
                                    while(_while_condtional36=(_Bool)1,                                    _while_condtional36) {
                                        if(_if_conditional336=self->item_existance[it_218],                                        _if_conditional336) {
                                            if(_if_conditional337=optional$2boolbool_value(((struct optional$2boolbool*)(right_value317=string_equals(self->keys[it_218],key)))),                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value317),
                                            (right_value317 && right_value317 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value317, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                            __right_value_freed_obj[0] = right_value317, 
                                            __freed_obj__ = 0, 
                                            _if_conditional337) {
                                                __result117__ = __result_obj__ = ((struct optional$2sClasspbool*)(right_value319=optional$2sClasspbool_initialize((struct optional$2sClasspbool*)come_increment_ref_count(((struct optional$2sClasspbool*)(right_value318=(struct optional$2sClasspbool*)come_calloc(1, sizeof(struct optional$2sClasspbool)*(1), "./comelang2.h", 1606)))),self->items[it_218],(_Bool)1)));
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value318);
                                                if(right_value318 && right_value318 != __result_obj__ && !__freed_obj__) { right_value318 = come_decrement_ref_count(right_value318, (void*)0, (void*)0, 1, 0, 0); }
                                                __right_value_freed_obj[0] = right_value318;
                                                __freed_obj__ = 0;
                                                return __result117__;
                                            }
                                            it_218++;
                                            if(_if_conditional338=it_218>=self->size,                                            _if_conditional338) {
                                                it_218=0;
                                            }
                                            else {
                                                if(_if_conditional339=it_218==hash_217,                                                _if_conditional339) {
                                                    __result118__ = __result_obj__ = ((struct optional$2sClasspbool*)(right_value321=optional$2sClasspbool_initialize(((struct optional$2sClasspbool*)(right_value320=(struct optional$2sClasspbool*)come_calloc(1, sizeof(struct optional$2sClasspbool)*(1), "./comelang2.h", 1615))),default_value_216,(_Bool)0)));
                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value320);
                                                    if(right_value320 && right_value320 != __result_obj__ && !__freed_obj__) { right_value320 = come_decrement_ref_count(right_value320, (void*)0, (void*)0, 1, 0, 0); }
                                                    __right_value_freed_obj[0] = right_value320;
                                                    __freed_obj__ = 0;
                                                    return __result118__;
                                                }
                                            }
                                        }
                                        else {
                                            __result119__ = __result_obj__ = ((struct optional$2sClasspbool*)(right_value323=optional$2sClasspbool_initialize(((struct optional$2sClasspbool*)(right_value322=(struct optional$2sClasspbool*)come_calloc(1, sizeof(struct optional$2sClasspbool)*(1), "./comelang2.h", 1619))),default_value_216,(_Bool)0)));
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value322);
                                            if(right_value322 && right_value322 != __result_obj__ && !__freed_obj__) { right_value322 = come_decrement_ref_count(right_value322, (void*)0, (void*)0, 1, 0, 0); }
                                            __right_value_freed_obj[0] = right_value322;
                                            __freed_obj__ = 0;
                                            return __result119__;
                                        }
                                    }
                                    __result120__ = __result_obj__ = ((struct optional$2sClasspbool*)(right_value325=optional$2sClasspbool_initialize(((struct optional$2sClasspbool*)(right_value324=(struct optional$2sClasspbool*)come_calloc(1, sizeof(struct optional$2sClasspbool)*(1), "./comelang2.h", 1623))),default_value_216,(_Bool)0)));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value324);
                                    if(right_value324 && right_value324 != __result_obj__ && !__freed_obj__) { right_value324 = come_decrement_ref_count(right_value324, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value324;
                                    __freed_obj__ = 0;
                                    return __result120__;
}

static struct optional$2sClasspbool* optional$2sClasspbool_initialize(struct optional$2sClasspbool* self, struct sClass* v1, _Bool v2){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct optional$2sClasspbool* __result116__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                    self->v1=v1;
                                                    self->v2=v2;
                                                    __result116__ = __result_obj__ = self;
                                                    if(self && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                                                    return __result116__;
                                                    if(self && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2sClasspboolp_finalize(struct optional$2sClasspbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct sClass* optional$2sClasspbool_value(struct optional$2sClasspbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional340;
struct sClass* default_value_219;
struct sClass* __result121__;
struct sClass* __result122__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_219, 0, sizeof(struct sClass*));
                                    if(_if_conditional340=self==((void*)0),                                    _if_conditional340) {
                                        memset(&default_value_219,0,sizeof(struct sClass*));
                                        __result121__ = __result_obj__ = default_value_219;
                                        return __result121__;
                                    }
                                    else {
                                        __result122__ = __result_obj__ = self->v1;
                                        return __result122__;
                                    }
}

static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional349;
unsigned int hash_244;
unsigned int it_245;
_Bool _while_condtional41;
_Bool _if_conditional367;
void* right_value349;
_Bool _if_conditional368;
_Bool _if_conditional369;
_Bool _if_conditional389;
_Bool _if_conditional390;
_Bool _if_conditional391;
_Bool _if_conditional392;
_Bool _if_conditional393;
_Bool same_key_exist_262;
char* it2_265;
_Bool _for_condtionalA8;
void* right_value351;
_Bool _if_conditional398;
_Bool _if_conditional399;
struct map$2charphsClassph* __result149__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_244, 0, sizeof(unsigned int));
memset(&it_245, 0, sizeof(unsigned int));
memset(&right_value349, 0, sizeof(void*));
memset(&same_key_exist_262, 0, sizeof(_Bool));
memset(&it2_265, 0, sizeof(char*));
memset(&right_value351, 0, sizeof(void*));
                                            if(_if_conditional349=self->len*10>=self->size,                                            _if_conditional349) {
                                                map$2charphsClassph_rehash(self);
                                            }
                                            hash_244=string_get_hash_key(key)%self->size;
                                            it_245=hash_244;
                                            while(_while_condtional41=(_Bool)1,                                            _while_condtional41) {
                                                if(_if_conditional367=self->item_existance[it_245],                                                _if_conditional367) {
                                                    if(_if_conditional368=optional$2boolbool_value(((struct optional$2boolbool*)(right_value349=string_equals(self->keys[it_245],key)))),                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value349),
                                                    (right_value349 && right_value349 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value349, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                                    __right_value_freed_obj[0] = right_value349, 
                                                    __freed_obj__ = 0, 
                                                    _if_conditional368) {
                                                        if(_if_conditional369=1,                                                        _if_conditional369) {
                                                            list$1charp_remove(self->key_list,self->keys[it_245]);
                                                            if(self->keys[it_245] && !__freed_obj__) { self->keys[it_245] = come_decrement_ref_count(self->keys[it_245], (void*)0, (void*)0, 0, 0, 0); }
                                                            self->keys[it_245]=(char*)come_increment_ref_count(key);
                                                        }
                                                        else {
                                                            list$1charp_remove(self->key_list,self->keys[it_245]);
                                                            self->keys[it_245]=key;
                                                        }
                                                        if(_if_conditional389=1,                                                        _if_conditional389) {
                                                            if(self->items[it_245] && !__freed_obj__) { come_call_finalizer(sClass_finalize,self->items[it_245], (void*)0, (void*)0, 0, 0, 0, 0); }
                                                            self->items[it_245]=(struct sClass*)come_increment_ref_count(item);
                                                        }
                                                        else {
                                                            self->items[it_245]=item;
                                                        }
                                                        break;
                                                    }
                                                    it_245++;
                                                    if(_if_conditional390=it_245>=self->size,                                                    _if_conditional390) {
                                                        it_245=0;
                                                    }
                                                    else {
                                                        if(_if_conditional391=it_245==hash_244,                                                        _if_conditional391) {
                                                            printf("unexpected error in map.insert\n");
                                                            stackframe();
                                                            exit(2);
                                                        }
                                                    }
                                                }
                                                else {
                                                    self->item_existance[it_245]=(_Bool)1;
                                                    if(_if_conditional392=1,                                                    _if_conditional392) {
                                                        self->keys[it_245]=(char*)come_increment_ref_count(key);
                                                    }
                                                    else {
                                                        self->keys[it_245]=key;
                                                    }
                                                    if(_if_conditional393=1,                                                    _if_conditional393) {
                                                        self->items[it_245]=(struct sClass*)come_increment_ref_count(item);
                                                    }
                                                    else {
                                                        self->items[it_245]=item;
                                                    }
                                                    self->len++;
                                                    break;
                                                }
                                            }
                                            same_key_exist_262=(_Bool)0;
                                            for(
                                            it2_265=list$1charp_begin(self->key_list) ,                                            0;                                            _for_condtionalA8=                                            !list$1charp_end(self->key_list) ,                                            _for_condtionalA8;                                            it2_265=list$1charp_next(self->key_list) ,                                            0                                            ){
                                                if(_if_conditional398=optional$2boolbool_value(((struct optional$2boolbool*)(right_value351=string_equals(it2_265,key)))),                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value351),
                                                (right_value351 && right_value351 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value351, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                                __right_value_freed_obj[0] = right_value351, 
                                                __freed_obj__ = 0, 
                                                _if_conditional398) {
                                                    same_key_exist_262=(_Bool)1;
                                                }
                                            }
                                            if(_if_conditional399=!same_key_exist_262,                                            _if_conditional399) {
                                                list$1charp_push_back(self->key_list,key);
                                            }
                                            __result149__ = __result_obj__ = self;
                                            if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
                                            if(item && !__freed_obj__) { come_call_finalizer(sClass_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                                            return __result149__;
                                            if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
                                            if(item && !__freed_obj__) { come_call_finalizer(sClass_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void map$2charphsClassph_rehash(struct map$2charphsClassph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int size_225;
void* right_value345;
char** keys_226;
void* right_value346;
struct sClass** items_227;
void* right_value347;
_Bool* item_existance_230;
int len_231;
char* it_234;
_Bool _for_condtionalA7;
struct sClass* default_value_237;
struct sClass* it2_240;
unsigned int hash_241;
int n_242;
_Bool _while_condtional40;
_Bool _if_conditional364;
_Bool _if_conditional365;
_Bool _if_conditional366;
struct sClass* default_value_243;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&size_225, 0, sizeof(int));
memset(&right_value345, 0, sizeof(void*));
memset(&keys_226, 0, sizeof(char**));
memset(&right_value346, 0, sizeof(void*));
memset(&items_227, 0, sizeof(struct sClass**));
memset(&right_value347, 0, sizeof(void*));
memset(&item_existance_230, 0, sizeof(_Bool*));
memset(&len_231, 0, sizeof(int));
memset(&it_234, 0, sizeof(char*));
memset(&default_value_237, 0, sizeof(struct sClass*));
memset(&it2_240, 0, sizeof(struct sClass*));
memset(&hash_241, 0, sizeof(unsigned int));
memset(&n_242, 0, sizeof(int));
memset(&default_value_243, 0, sizeof(struct sClass*));
                                                    size_225=self->size*10;
                                                    keys_226=(char**)come_increment_ref_count(((char**)(right_value345=(char**)come_calloc(1, sizeof(char*)*(1*(size_225)), "./comelang2.h", 1381))));
                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value345);
                                                    if(right_value345 && right_value345 != __result_obj__ && !__freed_obj__) { right_value345 = come_decrement_ref_count(right_value345, (void*)0, (void*)0, 1, 0, 0); }
                                                    __right_value_freed_obj[0] = right_value345;
                                                    __freed_obj__ = 0;
                                                    items_227=(struct sClass**)come_increment_ref_count(((struct sClass**)(right_value346=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_225)), "./comelang2.h", 1382))));
                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value346);
                                                    if(right_value346 && right_value346 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value346, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                    __right_value_freed_obj[1] = right_value346;
                                                    __freed_obj__ = 0;
                                                    item_existance_230=(_Bool*)come_increment_ref_count(((_Bool*)(right_value347=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_225)), "./comelang2.h", 1383))));
                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value347);
                                                    if(right_value347 && right_value347 != __result_obj__ && !__freed_obj__) { right_value347 = come_decrement_ref_count(right_value347, (void*)0, (void*)0, 1, 0, 0); }
                                                    __right_value_freed_obj[2] = right_value347;
                                                    __freed_obj__ = 0;
                                                    len_231=0;
                                                    for(
                                                    it_234=map$2charphsClassph_begin(self) ,                                                    0;                                                    _for_condtionalA7=                                                    !map$2charphsClassph_end(self) ,                                                    _for_condtionalA7;                                                    it_234=map$2charphsClassph_next(self) ,                                                    0                                                    ){
                                                        memset(&default_value_237,0,sizeof(struct sClass*));
                                                        it2_240=map$2charphsClassph_at(self,it_234,default_value_237);
                                                        hash_241=string_get_hash_key(it_234)%size_225;
                                                        n_242=hash_241;
                                                        while(_while_condtional40=(_Bool)1,                                                        _while_condtional40) {
                                                            if(_if_conditional364=item_existance_230[n_242],                                                            _if_conditional364) {
                                                                n_242++;
                                                                if(_if_conditional365=n_242>=size_225,                                                                _if_conditional365) {
                                                                    n_242=0;
                                                                }
                                                                else {
                                                                    if(_if_conditional366=n_242==hash_241,                                                                    _if_conditional366) {
                                                                        printf("unexpected error in map.rehash(1)\n");
                                                                        stackframe();
                                                                        exit(2);
                                                                    }
                                                                }
                                                            }
                                                            else {
                                                                item_existance_230[n_242]=(_Bool)1;
                                                                keys_226[n_242]=it_234;
                                                                items_227[n_242]=map$2charphsClassph_at(self,it_234,default_value_243);
                                                                len_231++;
                                                                break;
                                                            }
                                                        }
                                                    }
                                                    come_free_object((char*)self->items);
                                                    if(self->item_existance && !__freed_obj__) { self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, 0); }
                                                    come_free_object((char*)self->keys);
                                                    self->keys=keys_226;
                                                    self->items=items_227;
                                                    self->item_existance=item_existance_230;
                                                    self->size=size_225;
                                                    self->len=len_231;
}

static void sClass_finalize(struct sClass* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional350;
_Bool _if_conditional351;
_Bool _if_conditional355;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                        if(_if_conditional350=self!=((void*)0)&&self->mName!=((void*)0),                                                        _if_conditional350) {
                                                            if(self->mName && !__freed_obj__) { self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, 0); }
                                                        }
                                                        if(_if_conditional351=self!=((void*)0)&&self->mFields!=((void*)0),                                                        _if_conditional351) {
                                                            if(self->mFields && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,self->mFields, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                        }
                                                        if(_if_conditional355=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                                                        _if_conditional355) {
                                                            if(self->mDeclareSName && !__freed_obj__) { self->mDeclareSName = come_decrement_ref_count(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0); }
                                                        }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1tuple2$2charphsTypephph* it_228;
_Bool _while_condtional38;
struct list_item$1tuple2$2charphsTypephph* prev_it_229;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_228, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_229, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                                                                it_228=self->head;
                                                                while(_while_condtional38=it_228!=((void*)0),                                                                _while_condtional38) {
                                                                    prev_it_229=it_228;
                                                                    it_228=it_228->next;
                                                                    if(prev_it_229 && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,prev_it_229, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional352;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                                        if(_if_conditional352=self!=((void*)0)&&self->item!=((void*)0),                                                                        _if_conditional352) {
                                                                            if(self->item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                        }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional353;
_Bool _if_conditional354;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                                                if(_if_conditional353=self!=((void*)0)&&self->v1!=((void*)0),                                                                                _if_conditional353) {
                                                                                    if(self->v1 && !__freed_obj__) { self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, 0); }
                                                                                }
                                                                                if(_if_conditional354=self!=((void*)0)&&self->v2!=((void*)0),                                                                                _if_conditional354) {
                                                                                    if(self->v2 && !__freed_obj__) { come_call_finalizer(sType_finalize,self->v2, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                                }
}

static char* map$2charphsClassph_begin(struct map$2charphsClassph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional356;
char* result_232;
char* __result126__;
_Bool _if_conditional357;
char* __result127__;
char* result_233;
char* __result128__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_232, 0, sizeof(char*));
memset(&result_233, 0, sizeof(char*));
                                                        if(_if_conditional356=self==((void*)0),                                                        _if_conditional356) {
                                                            memset(&result_232,0,sizeof(char*));
                                                            __result126__ = __result_obj__ = result_232;
                                                            return __result126__;
                                                        }
                                                        self->key_list->it=self->key_list->head;
                                                        if(_if_conditional357=self->key_list->it,                                                        _if_conditional357) {
                                                            __result127__ = __result_obj__ = self->key_list->it->item;
                                                            return __result127__;
                                                        }
                                                        memset(&result_233,0,sizeof(char*));
                                                        __result128__ = __result_obj__ = result_233;
                                                        return __result128__;
}

static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result129__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                        __result129__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                                                        return __result129__;
}

static char* map$2charphsClassph_next(struct map$2charphsClassph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional358;
char* result_235;
char* __result130__;
_Bool _if_conditional359;
char* __result131__;
char* result_236;
char* __result132__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_235, 0, sizeof(char*));
memset(&result_236, 0, sizeof(char*));
                                                        if(_if_conditional358=self==((void*)0)||self->key_list->it==((void*)0),                                                        _if_conditional358) {
                                                            memset(&result_235,0,sizeof(char*));
                                                            __result130__ = __result_obj__ = result_235;
                                                            return __result130__;
                                                        }
                                                        self->key_list->it=self->key_list->it->next;
                                                        if(_if_conditional359=self->key_list->it,                                                        _if_conditional359) {
                                                            __result131__ = __result_obj__ = self->key_list->it->item;
                                                            return __result131__;
                                                        }
                                                        memset(&result_236,0,sizeof(char*));
                                                        __result132__ = __result_obj__ = result_236;
                                                        return __result132__;
}

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int hash_238;
unsigned int it_239;
_Bool _while_condtional39;
_Bool _if_conditional360;
void* right_value348;
_Bool _if_conditional361;
struct sClass* __result133__;
_Bool _if_conditional362;
_Bool _if_conditional363;
struct sClass* __result134__;
struct sClass* __result135__;
struct sClass* __result136__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_238, 0, sizeof(unsigned int));
memset(&it_239, 0, sizeof(unsigned int));
memset(&right_value348, 0, sizeof(void*));
                                                            hash_238=string_get_hash_key(((char*)key))%self->size;
                                                            it_239=hash_238;
                                                            while(_while_condtional39=(_Bool)1,                                                            _while_condtional39) {
                                                                if(_if_conditional360=self->item_existance[it_239],                                                                _if_conditional360) {
                                                                    if(_if_conditional361=optional$2boolbool_value(((struct optional$2boolbool*)(right_value348=string_equals(self->keys[it_239],key)))),                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value348),
                                                                    (right_value348 && right_value348 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value348, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                                                    __right_value_freed_obj[0] = right_value348, 
                                                                    __freed_obj__ = 0, 
                                                                    _if_conditional361) {
                                                                        __result133__ = __result_obj__ = self->items[it_239];
                                                                        return __result133__;
                                                                    }
                                                                    it_239++;
                                                                    if(_if_conditional362=it_239>=self->size,                                                                    _if_conditional362) {
                                                                        it_239=0;
                                                                    }
                                                                    else {
                                                                        if(_if_conditional363=it_239==hash_238,                                                                        _if_conditional363) {
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
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int it2_246;
struct list_item$1charp* it_247;
_Bool _while_condtional42;
void* right_value350;
_Bool _if_conditional370;
struct list$1charp* __result140__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it2_246, 0, sizeof(int));
memset(&it_247, 0, sizeof(struct list_item$1charp*));
memset(&right_value350, 0, sizeof(void*));
                                                                it2_246=0;
                                                                it_247=self->head;
                                                                while(_while_condtional42=it_247!=((void*)0),                                                                _while_condtional42) {
                                                                    if(_if_conditional370=optional$2boolbool_value(((struct optional$2boolbool*)(right_value350=string_equals(it_247->item,item)))),                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value350),
                                                                    (right_value350 && right_value350 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value350, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                                                    __right_value_freed_obj[0] = right_value350, 
                                                                    __freed_obj__ = 0, 
                                                                    _if_conditional370) {
                                                                        list$1charp_delete(self,it2_246,it2_246+1);
                                                                        break;
                                                                    }
                                                                    it2_246++;
                                                                    it_247=it_247->next;
                                                                }
                                                                __result140__ = __result_obj__ = self;
                                                                return __result140__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional371;
_Bool _if_conditional372;
_Bool _if_conditional373;
int tmp_248;
_Bool _if_conditional374;
_Bool _if_conditional375;
_Bool _if_conditional376;
struct list$1charp* __result137__;
_Bool _if_conditional377;
_Bool _if_conditional378;
struct list_item$1charp* it_251;
int i_252;
_Bool _while_condtional44;
_Bool _if_conditional379;
struct list_item$1charp* prev_it_253;
_Bool _if_conditional380;
_Bool _if_conditional381;
struct list_item$1charp* it_254;
int i_255;
_Bool _while_condtional45;
_Bool _if_conditional382;
_Bool _if_conditional383;
struct list_item$1charp* prev_it_256;
struct list_item$1charp* it_257;
struct list_item$1charp* head_prev_it_258;
struct list_item$1charp* tail_it_259;
int i_260;
_Bool _while_condtional46;
_Bool _if_conditional384;
_Bool _if_conditional385;
_Bool _if_conditional386;
struct list_item$1charp* prev_it_261;
_Bool _if_conditional387;
_Bool _if_conditional388;
struct list$1charp* __result139__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&tmp_248, 0, sizeof(int));
memset(&it_251, 0, sizeof(struct list_item$1charp*));
memset(&i_252, 0, sizeof(int));
memset(&prev_it_253, 0, sizeof(struct list_item$1charp*));
memset(&it_254, 0, sizeof(struct list_item$1charp*));
memset(&i_255, 0, sizeof(int));
memset(&prev_it_256, 0, sizeof(struct list_item$1charp*));
memset(&it_257, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_258, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_259, 0, sizeof(struct list_item$1charp*));
memset(&i_260, 0, sizeof(int));
memset(&prev_it_261, 0, sizeof(struct list_item$1charp*));
                                                                            if(_if_conditional371=head<0,                                                                            _if_conditional371) {
                                                                                head+=self->len;
                                                                            }
                                                                            if(_if_conditional372=tail<0,                                                                            _if_conditional372) {
                                                                                tail+=self->len+1;
                                                                            }
                                                                            if(_if_conditional373=head>tail,                                                                            _if_conditional373) {
                                                                                tmp_248=tail;
                                                                                tail=head;
                                                                                head=tmp_248;
                                                                            }
                                                                            if(_if_conditional374=head<0,                                                                            _if_conditional374) {
                                                                                head=0;
                                                                            }
                                                                            if(_if_conditional375=tail>self->len,                                                                            _if_conditional375) {
                                                                                tail=self->len;
                                                                            }
                                                                            if(_if_conditional376=head==tail,                                                                            _if_conditional376) {
                                                                                __result137__ = __result_obj__ = self;
                                                                                return __result137__;
                                                                            }
                                                                            if(_if_conditional377=head==0&&tail==self->len,                                                                            _if_conditional377) {
                                                                                list$1charp_reset(self);
                                                                            }
                                                                            else {
                                                                                if(_if_conditional378=head==0,                                                                                _if_conditional378) {
                                                                                    it_251=self->head;
                                                                                    i_252=0;
                                                                                    while(_while_condtional44=it_251!=((void*)0),                                                                                    _while_condtional44) {
                                                                                        if(_if_conditional379=i_252<tail,                                                                                        _if_conditional379) {
                                                                                            prev_it_253=it_251;
                                                                                            it_251=it_251->next;
                                                                                            i_252++;
                                                                                            if(prev_it_253 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_253, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                                            self->len--;
                                                                                        }
                                                                                        else {
                                                                                            if(_if_conditional380=i_252==tail,                                                                                            _if_conditional380) {
                                                                                                self->head=it_251;
                                                                                                self->head->prev=((void*)0);
                                                                                                break;
                                                                                            }
                                                                                            else {
                                                                                                it_251=it_251->next;
                                                                                                i_252++;
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                                else {
                                                                                    if(_if_conditional381=tail==self->len,                                                                                    _if_conditional381) {
                                                                                        it_254=self->head;
                                                                                        i_255=0;
                                                                                        while(_while_condtional45=it_254!=((void*)0),                                                                                        _while_condtional45) {
                                                                                            if(_if_conditional382=i_255==head,                                                                                            _if_conditional382) {
                                                                                                self->tail=it_254->prev;
                                                                                                self->tail->next=((void*)0);
                                                                                            }
                                                                                            if(_if_conditional383=i_255>=head,                                                                                            _if_conditional383) {
                                                                                                prev_it_256=it_254;
                                                                                                it_254=it_254->next;
                                                                                                i_255++;
                                                                                                if(prev_it_256 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_256, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                                                self->len--;
                                                                                            }
                                                                                            else {
                                                                                                it_254=it_254->next;
                                                                                                i_255++;
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                    else {
                                                                                        it_257=self->head;
                                                                                        head_prev_it_258=((void*)0);
                                                                                        tail_it_259=((void*)0);
                                                                                        i_260=0;
                                                                                        while(_while_condtional46=it_257!=((void*)0),                                                                                        _while_condtional46) {
                                                                                            if(_if_conditional384=i_260==head,                                                                                            _if_conditional384) {
                                                                                                head_prev_it_258=it_257->prev;
                                                                                            }
                                                                                            if(_if_conditional385=i_260==tail,                                                                                            _if_conditional385) {
                                                                                                tail_it_259=it_257;
                                                                                            }
                                                                                            if(_if_conditional386=i_260>=head&&i_260<tail,                                                                                            _if_conditional386) {
                                                                                                prev_it_261=it_257;
                                                                                                it_257=it_257->next;
                                                                                                i_260++;
                                                                                                if(prev_it_261 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_261, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                                                self->len--;
                                                                                            }
                                                                                            else {
                                                                                                it_257=it_257->next;
                                                                                                i_260++;
                                                                                            }
                                                                                        }
                                                                                        if(_if_conditional387=head_prev_it_258!=((void*)0),                                                                                        _if_conditional387) {
                                                                                            head_prev_it_258->next=tail_it_259;
                                                                                        }
                                                                                        if(_if_conditional388=tail_it_259!=((void*)0),                                                                                        _if_conditional388) {
                                                                                            tail_it_259->prev=head_prev_it_258;
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
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1charp* it_249;
_Bool _while_condtional43;
struct list_item$1charp* prev_it_250;
struct list$1charp* __result138__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_249, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_250, 0, sizeof(struct list_item$1charp*));
                                                                                    it_249=self->head;
                                                                                    while(_while_condtional43=it_249!=((void*)0),                                                                                    _while_condtional43) {
                                                                                        prev_it_250=it_249;
                                                                                        it_249=it_249->next;
                                                                                        if(prev_it_250 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_250, (void*)0, (void*)0, 0, 0, 0, 0); }
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
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static char* list$1charp_begin(struct list$1charp* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional394;
char* result_263;
char* __result141__;
_Bool _if_conditional395;
char* __result142__;
char* result_264;
char* __result143__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_263, 0, sizeof(char*));
memset(&result_264, 0, sizeof(char*));
                                                if(_if_conditional394=self==((void*)0),                                                _if_conditional394) {
                                                    memset(&result_263,0,sizeof(char*));
                                                    __result141__ = __result_obj__ = result_263;
                                                    return __result141__;
                                                }
                                                self->it=self->head;
                                                if(_if_conditional395=self->it,                                                _if_conditional395) {
                                                    __result142__ = __result_obj__ = self->it->item;
                                                    return __result142__;
                                                }
                                                memset(&result_264,0,sizeof(char*));
                                                __result143__ = __result_obj__ = result_264;
                                                return __result143__;
}

static _Bool list$1charp_end(struct list$1charp* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result144__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                __result144__ = self==((void*)0)||self->it==((void*)0);
                                                return __result144__;
}

static char* list$1charp_next(struct list$1charp* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional396;
char* result_266;
char* __result145__;
_Bool _if_conditional397;
char* __result146__;
char* result_267;
char* __result147__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_266, 0, sizeof(char*));
memset(&result_267, 0, sizeof(char*));
                                                if(_if_conditional396=self==((void*)0)||self->it==((void*)0),                                                _if_conditional396) {
                                                    memset(&result_266,0,sizeof(char*));
                                                    __result145__ = __result_obj__ = result_266;
                                                    return __result145__;
                                                }
                                                self->it=self->it->next;
                                                if(_if_conditional397=self->it,                                                _if_conditional397) {
                                                    __result146__ = __result_obj__ = self->it->item;
                                                    return __result146__;
                                                }
                                                memset(&result_267,0,sizeof(char*));
                                                __result147__ = __result_obj__ = result_267;
                                                return __result147__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional400;
void* right_value352;
struct list_item$1charp* litem_268;
_Bool _if_conditional401;
void* right_value353;
struct list_item$1charp* litem_269;
void* right_value354;
struct list_item$1charp* litem_270;
struct list$1charp* __result148__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value352, 0, sizeof(void*));
memset(&litem_268, 0, sizeof(struct list_item$1charp*));
memset(&right_value353, 0, sizeof(void*));
memset(&litem_269, 0, sizeof(struct list_item$1charp*));
memset(&right_value354, 0, sizeof(void*));
memset(&litem_270, 0, sizeof(struct list_item$1charp*));
                                                    if(_if_conditional400=self->len==0,                                                    _if_conditional400) {
                                                        litem_268=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value352=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 283))));
                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value352);
                                                        if(right_value352 && right_value352 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value352, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                        __right_value_freed_obj[0] = right_value352;
                                                        __freed_obj__ = 0;
                                                        litem_268->prev=((void*)0);
                                                        litem_268->next=((void*)0);
                                                        litem_268->item=item;
                                                        self->tail=litem_268;
                                                        self->head=litem_268;
                                                    }
                                                    else {
                                                        if(_if_conditional401=self->len==1,                                                        _if_conditional401) {
                                                            litem_269=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value353=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 293))));
                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value353);
                                                            if(right_value353 && right_value353 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value353, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                            __right_value_freed_obj[0] = right_value353;
                                                            __freed_obj__ = 0;
                                                            litem_269->prev=self->head;
                                                            litem_269->next=((void*)0);
                                                            litem_269->item=item;
                                                            self->tail=litem_269;
                                                            self->head->next=litem_269;
                                                        }
                                                        else {
                                                            litem_270=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value354=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 303))));
                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value354);
                                                            if(right_value354 && right_value354 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value354, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                            __right_value_freed_obj[0] = right_value354;
                                                            __freed_obj__ = 0;
                                                            litem_270->prev=self->tail;
                                                            litem_270->next=((void*)0);
                                                            litem_270->item=item;
                                                            self->tail->next=litem_270;
                                                            self->tail=litem_270;
                                                        }
                                                    }
                                                    self->len++;
                                                    __result148__ = __result_obj__ = self;
                                                    return __result148__;
}

