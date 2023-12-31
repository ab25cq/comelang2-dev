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
struct sStrNode
{
    char* value;
    int sline;
    char* sname;
};
struct sSStringNode
{
    char* value;
    struct list$1sNodeph* exps;
    int sline;
    char* sname;
};
struct sCharNode
{
    int value;
    int sline;
    char* sname;
};
struct sWCharNode
{
    unsigned int value;
    int sline;
    char* sname;
};
struct sWStringNode
{
    unsigned int* value;
    int sline;
    char* sname;
};
struct sRegexNode
{
    char* str;
    _Bool global;
    _Bool ignore_case;
    int sline;
    char* sname;
};
struct sListNode
{
    struct list$1sNodeph* list_elements;
    int sline;
    char* sname;
};
struct optional$2CVALUEphbool
{
    struct CVALUE* v1;
    _Bool v2;
};
struct optional$2sTypephbool
{
    struct sType* v1;
    _Bool v2;
};
struct sTupleNode
{
    struct list$1sNodeph* tuple_elements;
    int sline;
    char* sname;
};
struct sNoneNode
{
    struct sNode* value;
    int sline;
    char* sname;
};
struct sSomeNode
{
    struct sNode* value;
    int sline;
    char* sname;
};
struct sMapNode
{
    struct list$1sNodeph* map_key_elements;
    struct list$1sNodeph* map_elements;
    int sline;
    char* sname;
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

long int __sysconf(int __name);

struct sStrNode* sStrNode_initialize(struct sStrNode* self, char* value, int sline, struct sInfo* info);

_Bool sStrNode_terminated();

static char* double_quoted_string(char* str);
char* sStrNode_kind();

_Bool sStrNode_compile(struct sStrNode* self, struct sInfo* info);

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
int sStrNode_sline(struct sStrNode* self, struct sInfo* info);

char* sStrNode_sname(struct sStrNode* self, struct sInfo* info);

struct sSStringNode* sSStringNode_initialize(struct sSStringNode* self, char* value, struct list$1sNodeph* exps, int sline, struct sInfo* info);

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item);
static struct sNode* sNode_clone(struct sNode* self);
static void list$1sNodeph_finalize(struct list$1sNodeph* self);
_Bool sSStringNode_terminated();

char* sSStringNode_kind();

_Bool sSStringNode_compile(struct sSStringNode* self, struct sInfo* info);

static int list$1sNodeph_length(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self);
static _Bool list$1sNodeph_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self);
static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value);
static _Bool optional$2boolbool_value(struct optional$2boolbool* self);
static void optional$2boolboolp_finalize(struct optional$2boolbool* self);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static int list$1sTypeph_length(struct list$1sTypeph* self);
static struct sType* sType_clone(struct sType* self);
static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self);
static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self);
static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item);
static void list$1sTypeph_finalize(struct list$1sTypeph* self);
static struct list$1charph* list$1charphp_clone(struct list$1charph* self);
static struct list$1charph* list$1charph_initialize(struct list$1charph* self);
static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item);
static void list$1charph_finalize(struct list$1charph* self);
int sSStringNode_sline(struct sSStringNode* self, struct sInfo* info);

char* sSStringNode_sname(struct sSStringNode* self, struct sInfo* info);

struct sCharNode* sCharNode_initialize(struct sCharNode* self, int value, struct sInfo* info);

_Bool sCharNode_terminated();

char* sCharNode_kind();

_Bool sCharNode_compile(struct sCharNode* self, struct sInfo* info);

int sCharNode_sline(struct sCharNode* self, struct sInfo* info);

char* sCharNode_sname(struct sCharNode* self, struct sInfo* info);

struct sWCharNode* sWCharNode_initialize(struct sWCharNode* self, unsigned int value, struct sInfo* info);

_Bool sWCharNode_terminated();

char* sWCharNode_kind();

_Bool sWCharNode_compile(struct sWCharNode* self, struct sInfo* info);

int sWCharNode_sline(struct sWCharNode* self, struct sInfo* info);

char* sWCharNode_sname(struct sWCharNode* self, struct sInfo* info);

struct sWStringNode* sWStringNode_initialize(struct sWStringNode* self, unsigned int* value, int sline, struct sInfo* info);

_Bool sWStringNode_terminated();

char* sWStringNode_kind();

_Bool sWStringNode_compile(struct sWStringNode* self, struct sInfo* info);

int sWStringNode_sline(struct sWStringNode* self, struct sInfo* info);

char* sWStringNode_sname(struct sWStringNode* self, struct sInfo* info);

struct sRegexNode* sRegexNode_initialize(struct sRegexNode* self, char* str, _Bool global, _Bool ignore_case, int sline, struct sInfo* info);

_Bool sRegexNode_terminated();

char* sRegexNode_kind();

_Bool sRegexNode_compile(struct sRegexNode* self, struct sInfo* info);

int sRegexNode_sline(struct sRegexNode* self, struct sInfo* info);

char* sRegexNode_sname(struct sRegexNode* self, struct sInfo* info);

struct sListNode* sListNode_initialize(struct sListNode* self, struct list$1sNodeph* list_elements, struct sInfo* info);

_Bool sListNode_terminated();

char* sListNode_kind();

_Bool sListNode_compile(struct sListNode* self, struct sInfo* info);

static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self);
static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self);
static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item);
static int list$1CVALUEph_length(struct list$1CVALUEph* self);
static char* optional$2charphbool_value(struct optional$2charphbool* self);
static void optional$2charphboolp_finalize(struct optional$2charphbool* self);
static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self);
static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self);
static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self);
static struct optional$2CVALUEphbool* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position);
static struct optional$2CVALUEphbool* optional$2CVALUEphbool_initialize(struct optional$2CVALUEphbool* self, struct CVALUE* v1, _Bool v2);
static void optional$2CVALUEphboolp_finalize(struct optional$2CVALUEphbool* self);
static struct CVALUE* optional$2CVALUEphbool_value(struct optional$2CVALUEphbool* self);
static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item);
static char* optional$2charphbool_expect(struct optional$2charphbool* self);
static struct optional$2sTypephbool* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
static struct optional$2sTypephbool* optional$2sTypephbool_initialize(struct optional$2sTypephbool* self, struct sType* v1, _Bool v2);
static void optional$2sTypephboolp_finalize(struct optional$2sTypephbool* self);
static struct sType* optional$2sTypephbool_value(struct optional$2sTypephbool* self);
int sListNode_sline(struct sListNode* self, struct sInfo* info);

char* sListNode_sname(struct sListNode* self, struct sInfo* info);

struct sTupleNode* sTupleNode_initialize(struct sTupleNode* self, struct list$1sNodeph* tuple_elements, struct sInfo* info);

_Bool sTupleNode_terminated();

char* sTupleNode_kind();

_Bool sTupleNode_compile(struct sTupleNode* self, struct sInfo* info);

static struct CVALUE* CVALUE_clone(struct CVALUE* self);
static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self);
static _Bool list$1sTypeph_end(struct list$1sTypeph* self);
static struct sType* list$1sTypeph_next(struct list$1sTypeph* self);
int sTupleNode_sline(struct sTupleNode* self, struct sInfo* info);

char* sTupleNode_sname(struct sTupleNode* self, struct sInfo* info);

struct sNoneNode* sNoneNode_initialize(struct sNoneNode* self, struct sNode* value, struct sInfo* info);

struct sNode* create_none_object(struct sNode* exp, struct sInfo* info);

static void sNoneNode_finalize(struct sNoneNode* self);
static struct sNoneNode* sNoneNode_clone(struct sNoneNode* self);
_Bool sNoneNode_terminated();

char* sNoneNode_kind();

_Bool sNoneNode_compile(struct sNoneNode* self, struct sInfo* info);

static struct list$1CVALUEph* list$1CVALUEph_add(struct list$1CVALUEph* self, struct CVALUE* item);
int sNoneNode_sline(struct sNoneNode* self, struct sInfo* info);

char* sNoneNode_sname(struct sNoneNode* self, struct sInfo* info);

struct sSomeNode* sSomeNode_initialize(struct sSomeNode* self, struct sNode* value, struct sInfo* info);

struct sNode* create_some_object(struct sNode* exp, struct sInfo* info);

static void sSomeNode_finalize(struct sSomeNode* self);
static struct sSomeNode* sSomeNode_clone(struct sSomeNode* self);
_Bool sSomeNode_terminated();

char* sSomeNode_kind();

_Bool sSomeNode_compile(struct sSomeNode* self, struct sInfo* info);

int sSomeNode_sline(struct sSomeNode* self, struct sInfo* info);

char* sSomeNode_sname(struct sSomeNode* self, struct sInfo* info);

struct sMapNode* sMapNode_initialize(struct sMapNode* self, struct list$1sNodeph* map_key_elements, struct list$1sNodeph* map_elements, struct sInfo* info);

_Bool sMapNode_terminated();

char* sMapNode_kind();

_Bool sMapNode_compile(struct sMapNode* self, struct sInfo* info);

static struct optional$2sNodephbool* list$1sNodephp_operator_load_element(struct list$1sNodeph* self, int position);
static struct optional$2sNodephbool* optional$2sNodephbool_initialize(struct optional$2sNodephbool* self, struct sNode* v1, _Bool v2);
static void optional$2sNodephboolp_finalize(struct optional$2sNodephbool* self);
static struct sNode* optional$2sNodephbool_value(struct optional$2sNodephbool* self);
int sMapNode_sline(struct sMapNode* self, struct sInfo* info);

char* sMapNode_sname(struct sMapNode* self, struct sInfo* info);

struct sNode* expression_node_v98(struct sInfo* info);

static void sStrNode_finalize(struct sStrNode* self);
static struct sStrNode* sStrNode_clone(struct sStrNode* self);
static void sRegexNode_finalize(struct sRegexNode* self);
static struct sRegexNode* sRegexNode_clone(struct sRegexNode* self);
static void sCharNode_finalize(struct sCharNode* self);
static struct sCharNode* sCharNode_clone(struct sCharNode* self);
static void sWCharNode_finalize(struct sWCharNode* self);
static struct sWCharNode* sWCharNode_clone(struct sWCharNode* self);
static void sWStringNode_finalize(struct sWStringNode* self);
static struct sWStringNode* sWStringNode_clone(struct sWStringNode* self);
static void sSStringNode_finalize(struct sSStringNode* self);
static struct sSStringNode* sSStringNode_clone(struct sSStringNode* self);
static int optional$2intbool_value(struct optional$2intbool* self);
static void optional$2intboolp_finalize(struct optional$2intbool* self);
static void sMapNode_finalize(struct sMapNode* self);
static struct sMapNode* sMapNode_clone(struct sMapNode* self);
static void sListNode_finalize(struct sListNode* self);
static struct sListNode* sListNode_clone(struct sListNode* self);
struct sNode* parse_tuple(struct sInfo* info);

static void sTupleNode_finalize(struct sTupleNode* self);
static struct sTupleNode* sTupleNode_clone(struct sTupleNode* self);
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

struct sStrNode* sStrNode_initialize(struct sStrNode* self, char* value, int sline, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value10;
char* __dec_obj6;
void* right_value11;
char* __dec_obj7;
struct sStrNode* __result12__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value10, 0, sizeof(void*));
memset(&right_value11, 0, sizeof(void*));
    __dec_obj6=((struct sStrNode*)come_null_check(self, "06str.c", 13))->value;
    ((struct sStrNode*)come_null_check(self, "06str.c", 13))->value=(char*)come_increment_ref_count(((char*)(right_value10=__builtin_string(value))));
    if(__dec_obj6) { __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value10);
    if(right_value10 && right_value10 != __result_obj__ && !__freed_obj__) { right_value10 = come_decrement_ref_count(right_value10, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value10;
    __freed_obj__ = 0;
    ((struct sStrNode*)come_null_check(self, "06str.c", 15))->sline=sline;
    __freed_obj__ = 0;
    __dec_obj7=((struct sStrNode*)come_null_check(self, "06str.c", 16))->sname;
    ((struct sStrNode*)come_null_check(self, "06str.c", 16))->sname=(char*)come_increment_ref_count(((char*)(right_value11=__builtin_string(((struct sInfo*)come_null_check(info, "06str.c", 16))->sname))));
    if(__dec_obj7) { __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value11);
    if(right_value11 && right_value11 != __result_obj__ && !__freed_obj__) { right_value11 = come_decrement_ref_count(right_value11, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value11;
    __freed_obj__ = 0;
    __result12__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sStrNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(value && !__freed_obj__) { value = come_decrement_ref_count(value, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result12__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sStrNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(value && !__freed_obj__) { value = come_decrement_ref_count(value, (void*)0, (void*)0, 0, 1, 0); }
}

_Bool sStrNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result13__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result13__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result13__;
    __freed_obj__ = 0;
}

static char* double_quoted_string(char* str){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value12;
void* right_value13;
struct buffer* buf_5;
char* p_6;
_Bool _while_condtional1;
_Bool _if_conditional7;
void* right_value14;
char* __result14__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value12, 0, sizeof(void*));
memset(&right_value13, 0, sizeof(void*));
memset(&buf_5, 0, sizeof(struct buffer*));
memset(&p_6, 0, sizeof(char*));
memset(&right_value14, 0, sizeof(void*));
    buf_5=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value13=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value12=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 28))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value12);
    if(right_value12 && right_value12 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value12, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value12;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value13);
    if(right_value13 && right_value13 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value13, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value13;
    __freed_obj__ = 0;
    p_6=str;
    __freed_obj__ = 0;
    while(_while_condtional1=*p_6,    __freed_obj__ = 0, 
    _while_condtional1) {
        if(_if_conditional7=*p_6==34,        __freed_obj__ = 0, 
        _if_conditional7) {
            p_6++;
            __freed_obj__ = 0;
            buffer_append_char(((struct buffer*)come_null_check(buf_5, "06str.c", 34)),92);
            __freed_obj__ = 0;
            buffer_append_char(((struct buffer*)come_null_check(buf_5, "06str.c", 35)),34);
            __freed_obj__ = 0;
        }
        else {
            buffer_append_char(((struct buffer*)come_null_check(buf_5, "06str.c", 38)),*p_6);
            __freed_obj__ = 0;
            p_6++;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result14__ = __result_obj__ = ((char*)(right_value14=buffer_to_string(((struct buffer*)come_null_check(buf_5, "06str.c", 43)))));
    if(buf_5 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_5, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result14__;
    __freed_obj__ = 0;
    if(buf_5 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_5, (void*)0, (void*)0, 0, 0, 0, 0); }
}

char* sStrNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value15;
char* __result15__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value15, 0, sizeof(void*));
    __result15__ = __result_obj__ = ((char*)(right_value15=__builtin_string("sStrNode")));
    __freed_obj__ = 0;
    return __result15__;
    __freed_obj__ = 0;
}

_Bool sStrNode_compile(struct sStrNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value16;
struct CVALUE* come_value_7;
void* right_value17;
char* __dec_obj8;
void* right_value18;
void* right_value19;
struct sType* __dec_obj9;
_Bool __result17__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value16, 0, sizeof(void*));
memset(&come_value_7, 0, sizeof(struct CVALUE*));
memset(&right_value17, 0, sizeof(void*));
memset(&right_value18, 0, sizeof(void*));
memset(&right_value19, 0, sizeof(void*));
    come_value_7=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value16=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 53))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value16);
    if(right_value16 && right_value16 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value16, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value16;
    __freed_obj__ = 0;
    __dec_obj8=((struct CVALUE*)come_null_check(come_value_7, "06str.c", 55))->c_value;
    ((struct CVALUE*)come_null_check(come_value_7, "06str.c", 55))->c_value=(char*)come_increment_ref_count(((char*)(right_value17=xsprintf("\"%s\"",((struct sStrNode*)come_null_check(self, "06str.c", 55))->value))));
    if(__dec_obj8) { __dec_obj8 = come_decrement_ref_count(__dec_obj8, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value17);
    if(right_value17 && right_value17 != __result_obj__ && !__freed_obj__) { right_value17 = come_decrement_ref_count(right_value17, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value17;
    __freed_obj__ = 0;
    __dec_obj9=((struct CVALUE*)come_null_check(come_value_7, "06str.c", 56))->type;
    ((struct CVALUE*)come_null_check(come_value_7, "06str.c", 56))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value19=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value18=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 56)))),"char*",(_Bool)0,info))));
    if(__dec_obj9) { come_call_finalizer(sType_finalize,__dec_obj9, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value18);
    if(right_value18 && right_value18 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value18, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value18;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value19);
    if(right_value19 && right_value19 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value19, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value19;
    __freed_obj__ = 0;
    ((struct CVALUE*)come_null_check(come_value_7, "06str.c", 58))->var=((void*)0);
    __freed_obj__ = 0;
    list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 60))->stack, "06str.c", 60)),(struct CVALUE*)come_increment_ref_count(come_value_7));
    __freed_obj__ = 0;
    add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_7, "06str.c", 62))->c_value);
    __freed_obj__ = 0;
    __result17__ = (_Bool)1;
    if(come_value_7 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_7, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result17__;
    __freed_obj__ = 0;
    if(come_value_7 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_7, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional8;
_Bool _if_conditional9;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional8=self!=((void*)0)&&((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1))->c_value!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional8) {
            if(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value && !__freed_obj__) { ((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value = come_decrement_ref_count(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional9=self!=((void*)0)&&((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 2))->type!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional9) {
            if(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1))->type && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1))->type, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional10;
_Bool _if_conditional12;
_Bool _if_conditional13;
_Bool _if_conditional14;
_Bool _if_conditional16;
_Bool _if_conditional18;
_Bool _if_conditional19;
_Bool _if_conditional21;
_Bool _if_conditional22;
_Bool _if_conditional23;
_Bool _if_conditional24;
_Bool _if_conditional25;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional10=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 1))->mNoSolvedGenericsType!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional10) {
                    if(((struct sType*)come_null_check(self, "sType_finalize", 0))->mNoSolvedGenericsType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 0))->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional12=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 2))->mOriginalLoadVarType!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional12) {
                    if(((struct sType*)come_null_check(self, "sType_finalize", 1))->mOriginalLoadVarType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 1))->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional13=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 3))->mGenericsName!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional13) {
                    if(((struct sType*)come_null_check(self, "sType_finalize", 2))->mGenericsName && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 2))->mGenericsName = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 2))->mGenericsName, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional14=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 4))->mGenericsTypes!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional14) {
                    if(((struct sType*)come_null_check(self, "sType_finalize", 3))->mGenericsTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 3))->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional16=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 5))->mArrayNum!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional16) {
                    if(((struct sType*)come_null_check(self, "sType_finalize", 4))->mArrayNum && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 4))->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional18=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 6))->mParamTypes!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional18) {
                    if(((struct sType*)come_null_check(self, "sType_finalize", 5))->mParamTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 5))->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional19=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 7))->mParamNames!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional19) {
                    if(((struct sType*)come_null_check(self, "sType_finalize", 6))->mParamNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 6))->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional21=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 8))->mResultType!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional21) {
                    if(((struct sType*)come_null_check(self, "sType_finalize", 7))->mResultType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 7))->mResultType, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional22=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 9))->mAlignas!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional22) {
                    if(((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas)->finalize, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas)->_protocol_obj, 0, 0, 0); } 
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional23=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 10))->mSizeNum!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional23) {
                    if(((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum)->finalize, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum)->_protocol_obj, 0, 0, 0); } 
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional24=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 11))->mOriginalTypeName!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional24) {
                    if(((struct sType*)come_null_check(self, "sType_finalize", 10))->mOriginalTypeName && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 10))->mOriginalTypeName = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 10))->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional25=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 12))->mAsmName!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional25) {
                    if(((struct sType*)come_null_check(self, "sType_finalize", 11))->mAsmName && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 11))->mAsmName = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 11))->mAsmName, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional11;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional11=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 1))->v1!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional11) {
                            if(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1sTypeph* it_8;
_Bool _while_condtional2;
struct list_item$1sTypeph* prev_it_9;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_8, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_9, 0, sizeof(struct list_item$1sTypeph*));
                        it_8=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 169))->head;
                        __freed_obj__ = 0;
                        while(_while_condtional2=it_8!=((void*)0),                        __freed_obj__ = 0, 
                        _while_condtional2) {
                            prev_it_9=it_8;
                            __freed_obj__ = 0;
                            it_8=((struct list_item$1sTypeph*)come_null_check(it_8, "./comelang2.h", 172))->next;
                            __freed_obj__ = 0;
                            if(prev_it_9 && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,prev_it_9, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional15;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional15=self!=((void*)0)&&((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 1))->item!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional15) {
                                    if(((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 0))->item && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1sNodeph* it_10;
_Bool _while_condtional3;
struct list_item$1sNodeph* prev_it_11;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_10, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_11, 0, sizeof(struct list_item$1sNodeph*));
                        it_10=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 169))->head;
                        __freed_obj__ = 0;
                        while(_while_condtional3=it_10!=((void*)0),                        __freed_obj__ = 0, 
                        _while_condtional3) {
                            prev_it_11=it_10;
                            __freed_obj__ = 0;
                            it_10=((struct list_item$1sNodeph*)come_null_check(it_10, "./comelang2.h", 172))->next;
                            __freed_obj__ = 0;
                            if(prev_it_11 && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,prev_it_11, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional17;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional17=self!=((void*)0)&&((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 1))->item!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional17) {
                                    if(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item && !__freed_obj__) { ((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item = come_decrement_ref_count(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item, ((struct sNode*)((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item)->finalize, ((struct sNode*)((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item)->_protocol_obj, 0, 0, 0); } 
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1charph* it_12;
_Bool _while_condtional4;
struct list_item$1charph* prev_it_13;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_12, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_13, 0, sizeof(struct list_item$1charph*));
                        it_12=((struct list$1charph*)come_null_check(self, "./comelang2.h", 169))->head;
                        __freed_obj__ = 0;
                        while(_while_condtional4=it_12!=((void*)0),                        __freed_obj__ = 0, 
                        _while_condtional4) {
                            prev_it_13=it_12;
                            __freed_obj__ = 0;
                            it_12=((struct list_item$1charph*)come_null_check(it_12, "./comelang2.h", 172))->next;
                            __freed_obj__ = 0;
                            if(prev_it_13 && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,prev_it_13, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional20;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional20=self!=((void*)0)&&((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 1))->item!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional20) {
                                    if(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item && !__freed_obj__) { ((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item = come_decrement_ref_count(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional26;
void* right_value20;
struct list_item$1CVALUEph* litem_14;
struct CVALUE* __dec_obj10;
_Bool _if_conditional28;
void* right_value21;
struct list_item$1CVALUEph* litem_15;
struct CVALUE* __dec_obj11;
void* right_value22;
struct list_item$1CVALUEph* litem_16;
struct CVALUE* __dec_obj12;
struct list$1CVALUEph* __result16__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value20, 0, sizeof(void*));
memset(&litem_14, 0, sizeof(struct list_item$1CVALUEph*));
memset(&right_value21, 0, sizeof(void*));
memset(&litem_15, 0, sizeof(struct list_item$1CVALUEph*));
memset(&right_value22, 0, sizeof(void*));
memset(&litem_16, 0, sizeof(struct list_item$1CVALUEph*));
        if(_if_conditional26=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 302))->len==0,        __freed_obj__ = 0, 
        _if_conditional26) {
            litem_14=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value20=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 272))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value20);
            if(right_value20 && right_value20 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value20, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value20;
            __freed_obj__ = 0;
            ((struct list_item$1CVALUEph*)come_null_check(litem_14, "./comelang2.h", 274))->prev=((void*)0);
            __freed_obj__ = 0;
            ((struct list_item$1CVALUEph*)come_null_check(litem_14, "./comelang2.h", 275))->next=((void*)0);
            __freed_obj__ = 0;
            __dec_obj10=((struct list_item$1CVALUEph*)come_null_check(litem_14, "./comelang2.h", 276))->item;
            ((struct list_item$1CVALUEph*)come_null_check(litem_14, "./comelang2.h", 276))->item=(struct CVALUE*)come_increment_ref_count(item);
            if(__dec_obj10) { come_call_finalizer(CVALUE_finalize,__dec_obj10, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
            ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 278))->tail=litem_14;
            __freed_obj__ = 0;
            ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 279))->head=litem_14;
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional28=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 302))->len==1,            __freed_obj__ = 0, 
            _if_conditional28) {
                litem_15=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value21=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 282))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value21);
                if(right_value21 && right_value21 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value21, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value21;
                __freed_obj__ = 0;
                ((struct list_item$1CVALUEph*)come_null_check(litem_15, "./comelang2.h", 284))->prev=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 284))->head;
                __freed_obj__ = 0;
                ((struct list_item$1CVALUEph*)come_null_check(litem_15, "./comelang2.h", 285))->next=((void*)0);
                __freed_obj__ = 0;
                __dec_obj11=((struct list_item$1CVALUEph*)come_null_check(litem_15, "./comelang2.h", 286))->item;
                ((struct list_item$1CVALUEph*)come_null_check(litem_15, "./comelang2.h", 286))->item=(struct CVALUE*)come_increment_ref_count(item);
                if(__dec_obj11) { come_call_finalizer(CVALUE_finalize,__dec_obj11, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 288))->tail=litem_15;
                __freed_obj__ = 0;
                ((struct list_item$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 289))->head, "./comelang2.h", 289))->next=litem_15;
                __freed_obj__ = 0;
            }
            else {
                litem_16=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value22=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 292))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value22);
                if(right_value22 && right_value22 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value22, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value22;
                __freed_obj__ = 0;
                ((struct list_item$1CVALUEph*)come_null_check(litem_16, "./comelang2.h", 294))->prev=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 294))->tail;
                __freed_obj__ = 0;
                ((struct list_item$1CVALUEph*)come_null_check(litem_16, "./comelang2.h", 295))->next=((void*)0);
                __freed_obj__ = 0;
                __dec_obj12=((struct list_item$1CVALUEph*)come_null_check(litem_16, "./comelang2.h", 296))->item;
                ((struct list_item$1CVALUEph*)come_null_check(litem_16, "./comelang2.h", 296))->item=(struct CVALUE*)come_increment_ref_count(item);
                if(__dec_obj12) { come_call_finalizer(CVALUE_finalize,__dec_obj12, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                ((struct list_item$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 298))->tail, "./comelang2.h", 298))->next=litem_16;
                __freed_obj__ = 0;
                ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 299))->tail=litem_16;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 302))->len++;
        __freed_obj__ = 0;
        __result16__ = __result_obj__ = self;
        if(item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result16__;
        __freed_obj__ = 0;
        if(item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional27;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional27=self!=((void*)0)&&((struct list_item$1CVALUEph*)come_null_check(self, "list_item$1CVALUEphp_finalize", 1))->item!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional27) {
                    if(((struct list_item$1CVALUEph*)come_null_check(self, "list_item$1CVALUEphp_finalize", 0))->item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,((struct list_item$1CVALUEph*)come_null_check(self, "list_item$1CVALUEphp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

int sStrNode_sline(struct sStrNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result18__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result18__ = ((struct sStrNode*)come_null_check(self, "06str.c", 69))->sline;
    __freed_obj__ = 0;
    return __result18__;
    __freed_obj__ = 0;
}

char* sStrNode_sname(struct sStrNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value23;
char* __result19__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value23, 0, sizeof(void*));
    __result19__ = __result_obj__ = ((char*)(right_value23=__builtin_string(((struct sStrNode*)come_null_check(self, "06str.c", 74))->sname)));
    __freed_obj__ = 0;
    return __result19__;
    __freed_obj__ = 0;
}

struct sSStringNode* sSStringNode_initialize(struct sSStringNode* self, char* value, struct list$1sNodeph* exps, int sline, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value24;
char* __dec_obj13;
void* right_value32;
struct list$1sNodeph* __dec_obj17;
void* right_value33;
char* __dec_obj18;
struct sSStringNode* __result26__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value24, 0, sizeof(void*));
memset(&right_value32, 0, sizeof(void*));
memset(&right_value33, 0, sizeof(void*));
    __dec_obj13=((struct sSStringNode*)come_null_check(self, "06str.c", 88))->value;
    ((struct sSStringNode*)come_null_check(self, "06str.c", 88))->value=(char*)come_increment_ref_count(((char*)(right_value24=__builtin_string(value))));
    if(__dec_obj13) { __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value24);
    if(right_value24 && right_value24 != __result_obj__ && !__freed_obj__) { right_value24 = come_decrement_ref_count(right_value24, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value24;
    __freed_obj__ = 0;
    __dec_obj17=((struct sSStringNode*)come_null_check(self, "06str.c", 89))->exps;
    ((struct sSStringNode*)come_null_check(self, "06str.c", 89))->exps=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value32=list$1sNodephp_clone(exps))));
    if(__dec_obj17) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj17, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value32);
    if(right_value32 && right_value32 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value32, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value32;
    __freed_obj__ = 0;
    ((struct sSStringNode*)come_null_check(self, "06str.c", 91))->sline=sline;
    __freed_obj__ = 0;
    __dec_obj18=((struct sSStringNode*)come_null_check(self, "06str.c", 92))->sname;
    ((struct sSStringNode*)come_null_check(self, "06str.c", 92))->sname=(char*)come_increment_ref_count(((char*)(right_value33=__builtin_string(((struct sInfo*)come_null_check(info, "06str.c", 92))->sname))));
    if(__dec_obj18) { __dec_obj18 = come_decrement_ref_count(__dec_obj18, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value33);
    if(right_value33 && right_value33 != __result_obj__ && !__freed_obj__) { right_value33 = come_decrement_ref_count(right_value33, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value33;
    __freed_obj__ = 0;
    __result26__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sSStringNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(value && !__freed_obj__) { value = come_decrement_ref_count(value, (void*)0, (void*)0, 0, 1, 0); }
    if(exps && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,exps, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result26__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sSStringNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(value && !__freed_obj__) { value = come_decrement_ref_count(value, (void*)0, (void*)0, 0, 1, 0); }
    if(exps && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,exps, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional29;
struct list$1sNodeph* __result20__;
void* right_value25;
void* right_value26;
struct list$1sNodeph* result_17;
struct list_item$1sNodeph* it_18;
_Bool _while_condtional5;
void* right_value31;
struct list$1sNodeph* __result25__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value25, 0, sizeof(void*));
memset(&right_value26, 0, sizeof(void*));
memset(&result_17, 0, sizeof(struct list$1sNodeph*));
memset(&it_18, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value31, 0, sizeof(void*));
        if(_if_conditional29=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional29) {
            __result20__ = __result_obj__ = ((void*)0);
            __freed_obj__ = 0;
            return __result20__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        result_17=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value26=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)(right_value25=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 188))), "./comelang2.h", 188)))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value25);
        if(right_value25 && right_value25 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value25, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value25;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value26);
        if(right_value26 && right_value26 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value26, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value26;
        __freed_obj__ = 0;
        it_18=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 190))->head;
        __freed_obj__ = 0;
        while(_while_condtional5=it_18!=((void*)0),        __freed_obj__ = 0, 
        _while_condtional5) {
            list$1sNodeph_add(((struct list$1sNodeph*)come_null_check(result_17, "./comelang2.h", 192)),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value31=sNode_clone(((struct list_item$1sNodeph*)come_null_check(it_18, "./comelang2.h", 192))->item)))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value31);
            if(right_value31 && right_value31 != __result_obj__ && !__freed_obj__) { right_value31 = come_decrement_ref_count(right_value31, ((struct sNode*)right_value31)->finalize, ((struct sNode*)right_value31)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[0] = right_value31;
            __freed_obj__ = 0;
            it_18=((struct list_item$1sNodeph*)come_null_check(it_18, "./comelang2.h", 194))->next;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __result25__ = __result_obj__ = result_17;
        if(result_17 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,result_17, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result25__;
        __freed_obj__ = 0;
        if(result_17 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,result_17, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1sNodeph* __result21__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 150))->head=((void*)0);
            __freed_obj__ = 0;
            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 151))->tail=((void*)0);
            __freed_obj__ = 0;
            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 152))->len=0;
            __freed_obj__ = 0;
            __result21__ = __result_obj__ = self;
            if(self && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result21__;
            __freed_obj__ = 0;
            if(self && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional30;
void* right_value27;
struct list_item$1sNodeph* litem_19;
struct sNode* __dec_obj14;
_Bool _if_conditional31;
void* right_value28;
struct list_item$1sNodeph* litem_20;
struct sNode* __dec_obj15;
void* right_value29;
struct list_item$1sNodeph* litem_21;
struct sNode* __dec_obj16;
struct list$1sNodeph* __result22__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value27, 0, sizeof(void*));
memset(&litem_19, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value28, 0, sizeof(void*));
memset(&litem_20, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value29, 0, sizeof(void*));
memset(&litem_21, 0, sizeof(struct list_item$1sNodeph*));
                if(_if_conditional30=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 232))->len==0,                __freed_obj__ = 0, 
                _if_conditional30) {
                    litem_19=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value27=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 202))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value27);
                    if(right_value27 && right_value27 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value27, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value27;
                    __freed_obj__ = 0;
                    ((struct list_item$1sNodeph*)come_null_check(litem_19, "./comelang2.h", 204))->prev=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list_item$1sNodeph*)come_null_check(litem_19, "./comelang2.h", 205))->next=((void*)0);
                    __freed_obj__ = 0;
                    __dec_obj14=((struct list_item$1sNodeph*)come_null_check(litem_19, "./comelang2.h", 206))->item;
                    ((struct list_item$1sNodeph*)come_null_check(litem_19, "./comelang2.h", 206))->item=(struct sNode*)come_increment_ref_count(item);
                    if(__dec_obj14) { __dec_obj14 = come_decrement_ref_count(__dec_obj14, ((struct sNode*)__dec_obj14)->finalize, ((struct sNode*)__dec_obj14)->_protocol_obj, 0,0,0); }
                    __freed_obj__ = 0;
                    ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 208))->tail=litem_19;
                    __freed_obj__ = 0;
                    ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 209))->head=litem_19;
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional31=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 232))->len==1,                    __freed_obj__ = 0, 
                    _if_conditional31) {
                        litem_20=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value28=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 212))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value28);
                        if(right_value28 && right_value28 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value28, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value28;
                        __freed_obj__ = 0;
                        ((struct list_item$1sNodeph*)come_null_check(litem_20, "./comelang2.h", 214))->prev=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 214))->head;
                        __freed_obj__ = 0;
                        ((struct list_item$1sNodeph*)come_null_check(litem_20, "./comelang2.h", 215))->next=((void*)0);
                        __freed_obj__ = 0;
                        __dec_obj15=((struct list_item$1sNodeph*)come_null_check(litem_20, "./comelang2.h", 216))->item;
                        ((struct list_item$1sNodeph*)come_null_check(litem_20, "./comelang2.h", 216))->item=(struct sNode*)come_increment_ref_count(item);
                        if(__dec_obj15) { __dec_obj15 = come_decrement_ref_count(__dec_obj15, ((struct sNode*)__dec_obj15)->finalize, ((struct sNode*)__dec_obj15)->_protocol_obj, 0,0,0); }
                        __freed_obj__ = 0;
                        ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 218))->tail=litem_20;
                        __freed_obj__ = 0;
                        ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 219))->head, "./comelang2.h", 219))->next=litem_20;
                        __freed_obj__ = 0;
                    }
                    else {
                        litem_21=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value29=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 222))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value29);
                        if(right_value29 && right_value29 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value29, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value29;
                        __freed_obj__ = 0;
                        ((struct list_item$1sNodeph*)come_null_check(litem_21, "./comelang2.h", 224))->prev=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 224))->tail;
                        __freed_obj__ = 0;
                        ((struct list_item$1sNodeph*)come_null_check(litem_21, "./comelang2.h", 225))->next=((void*)0);
                        __freed_obj__ = 0;
                        __dec_obj16=((struct list_item$1sNodeph*)come_null_check(litem_21, "./comelang2.h", 226))->item;
                        ((struct list_item$1sNodeph*)come_null_check(litem_21, "./comelang2.h", 226))->item=(struct sNode*)come_increment_ref_count(item);
                        if(__dec_obj16) { __dec_obj16 = come_decrement_ref_count(__dec_obj16, ((struct sNode*)__dec_obj16)->finalize, ((struct sNode*)__dec_obj16)->_protocol_obj, 0,0,0); }
                        __freed_obj__ = 0;
                        ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 228))->tail, "./comelang2.h", 228))->next=litem_21;
                        __freed_obj__ = 0;
                        ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 229))->tail=litem_21;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 232))->len++;
                __freed_obj__ = 0;
                __result22__ = __result_obj__ = self;
                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
                __freed_obj__ = 0;
                return __result22__;
                __freed_obj__ = 0;
                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional32;
struct sNode* __result23__;
void* right_value30;
struct sNode* result_22;
_Bool _if_conditional33;
_Bool _if_conditional34;
_Bool _if_conditional35;
_Bool _if_conditional36;
_Bool _if_conditional37;
_Bool _if_conditional38;
_Bool _if_conditional39;
_Bool _if_conditional40;
struct sNode* __result24__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value30, 0, sizeof(void*));
memset(&result_22, 0, sizeof(struct sNode*));
                if(_if_conditional32=self==(void*)0,                __freed_obj__ = 0, 
                _if_conditional32) {
                    __result23__ = __result_obj__ = (void*)0;
                    __freed_obj__ = 0;
                    return __result23__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                result_22=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value30=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value30);
                if(right_value30 && right_value30 != __result_obj__ && !__freed_obj__) { right_value30 = come_decrement_ref_count(right_value30, ((struct sNode*)right_value30)->finalize, ((struct sNode*)right_value30)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[0] = right_value30;
                __freed_obj__ = 0;
                if(_if_conditional33=self!=((void*)0)&&((struct sNode*)come_null_check(self, "sNode_clone", 5))->clone!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional33) {
                    ((struct sNode*)come_null_check(result_22, "sNode_clone", 4))->_protocol_obj=((struct sNode*)come_null_check(self, "sNode_clone", 4))->clone(((struct sNode*)come_null_check(self, "sNode_clone", 4))->_protocol_obj);
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional34=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional34) {
                    ((struct sNode*)come_null_check(result_22, "sNode_clone", 5))->finalize=((struct sNode*)come_null_check(self, "sNode_clone", 5))->finalize;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional35=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional35) {
                    ((struct sNode*)come_null_check(result_22, "sNode_clone", 6))->clone=((struct sNode*)come_null_check(self, "sNode_clone", 6))->clone;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional36=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional36) {
                    ((struct sNode*)come_null_check(result_22, "sNode_clone", 7))->compile=((struct sNode*)come_null_check(self, "sNode_clone", 7))->compile;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional37=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional37) {
                    ((struct sNode*)come_null_check(result_22, "sNode_clone", 8))->sline=((struct sNode*)come_null_check(self, "sNode_clone", 8))->sline;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional38=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional38) {
                    ((struct sNode*)come_null_check(result_22, "sNode_clone", 9))->sname=((struct sNode*)come_null_check(self, "sNode_clone", 9))->sname;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional39=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional39) {
                    ((struct sNode*)come_null_check(result_22, "sNode_clone", 10))->terminated=((struct sNode*)come_null_check(self, "sNode_clone", 10))->terminated;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional40=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional40) {
                    ((struct sNode*)come_null_check(result_22, "sNode_clone", 11))->kind=((struct sNode*)come_null_check(self, "sNode_clone", 11))->kind;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __result24__ = __result_obj__ = result_22;
                if(result_22 && !__freed_obj__) { result_22 = come_decrement_ref_count(result_22, ((struct sNode*)result_22)->finalize, ((struct sNode*)result_22)->_protocol_obj, 0, 1, 0); } 
                __freed_obj__ = 0;
                return __result24__;
                __freed_obj__ = 0;
                if(result_22 && !__freed_obj__) { result_22 = come_decrement_ref_count(result_22, ((struct sNode*)result_22)->finalize, ((struct sNode*)result_22)->_protocol_obj, 0, 0, 0); } 
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

_Bool sSStringNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result27__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result27__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result27__;
    __freed_obj__ = 0;
}

char* sSStringNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value34;
char* __result28__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value34, 0, sizeof(void*));
    __result28__ = __result_obj__ = ((char*)(right_value34=__builtin_string("sSStringNode")));
    __freed_obj__ = 0;
    return __result28__;
    __freed_obj__ = 0;
}

_Bool sSStringNode_compile(struct sSStringNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value35;
struct CVALUE* come_value_23;
void* right_value36;
void* right_value37;
struct buffer* buf_24;
_Bool _if_conditional44;
struct list$1sNodeph* o2_saved_25;
struct sNode* it_28;
_Bool _for_condtionalA1;
_Bool _if_conditional49;
_Bool __result37__;
void* right_value38;
struct CVALUE* come_value_31;
void* right_value39;
char* method_name_32;
void* right_value41;
_Bool _if_conditional55;
struct sType* obj_type_36;
_Bool _if_conditional71;
struct sType* obj_type2_37;
void* right_value42;
void* right_value43;
char* __dec_obj19;
void* right_value44;
void* right_value45;
struct buffer* buf2_38;
void* right_value46;
void* right_value47;
struct sType* type_39;
void* right_value48;
void* right_value49;
char* c_value_40;
void* right_value50;
void* right_value51;
struct sType* type2_41;
void* right_value52;
char* __dec_obj20;
void* right_value53;
char* __dec_obj21;
void* right_value81;
struct sType* __dec_obj41;
_Bool __result57__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value35, 0, sizeof(void*));
memset(&come_value_23, 0, sizeof(struct CVALUE*));
memset(&right_value36, 0, sizeof(void*));
memset(&right_value37, 0, sizeof(void*));
memset(&buf_24, 0, sizeof(struct buffer*));
memset(&o2_saved_25, 0, sizeof(struct list$1sNodeph*));
memset(&it_28, 0, sizeof(struct sNode*));
memset(&right_value38, 0, sizeof(void*));
memset(&come_value_31, 0, sizeof(struct CVALUE*));
memset(&right_value39, 0, sizeof(void*));
memset(&method_name_32, 0, sizeof(char*));
memset(&right_value41, 0, sizeof(void*));
memset(&obj_type_36, 0, sizeof(struct sType*));
memset(&obj_type2_37, 0, sizeof(struct sType*));
memset(&right_value42, 0, sizeof(void*));
memset(&right_value43, 0, sizeof(void*));
memset(&right_value44, 0, sizeof(void*));
memset(&right_value45, 0, sizeof(void*));
memset(&buf2_38, 0, sizeof(struct buffer*));
memset(&right_value46, 0, sizeof(void*));
memset(&right_value47, 0, sizeof(void*));
memset(&type_39, 0, sizeof(struct sType*));
memset(&right_value48, 0, sizeof(void*));
memset(&right_value49, 0, sizeof(void*));
memset(&c_value_40, 0, sizeof(char*));
memset(&right_value50, 0, sizeof(void*));
memset(&right_value51, 0, sizeof(void*));
memset(&type2_41, 0, sizeof(struct sType*));
memset(&right_value52, 0, sizeof(void*));
memset(&right_value53, 0, sizeof(void*));
memset(&right_value81, 0, sizeof(void*));
    come_value_23=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value35=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 109))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value35);
    if(right_value35 && right_value35 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value35, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value35;
    __freed_obj__ = 0;
    buf_24=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value37=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value36=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 111))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value36);
    if(right_value36 && right_value36 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value36, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value36;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value37);
    if(right_value37 && right_value37 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value37, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value37;
    __freed_obj__ = 0;
    buffer_append_str(((struct buffer*)come_null_check(buf_24, "06str.c", 113)),"xsprintf(\"");
    __freed_obj__ = 0;
    buffer_append_str(((struct buffer*)come_null_check(buf_24, "06str.c", 114)),((struct sSStringNode*)come_null_check(self, "06str.c", 114))->value);
    __freed_obj__ = 0;
    buffer_append_str(((struct buffer*)come_null_check(buf_24, "06str.c", 115)),"\"");
    __freed_obj__ = 0;
    if(_if_conditional44=list$1sNodeph_length(((struct list$1sNodeph*)come_null_check(((struct sSStringNode*)come_null_check(self, "06str.c", 157))->exps, "06str.c", 157)))>0,    __freed_obj__ = 0, 
    _if_conditional44) {
        for(
        o2_saved_25=(struct list$1sNodeph*)come_increment_ref_count((((struct sSStringNode*)come_null_check(self, "06str.c", 155))->exps)),it_28=list$1sNodeph_begin(((struct list$1sNodeph*)come_null_check((o2_saved_25), "06str.c", 155))) ,        __freed_obj__ = 0, 
        0;        _for_condtionalA1=        !list$1sNodeph_end(((struct list$1sNodeph*)come_null_check((o2_saved_25), "06str.c", 155))) ,        __freed_obj__ = 0, 
        _for_condtionalA1;        it_28=list$1sNodeph_next(((struct list$1sNodeph*)come_null_check((o2_saved_25), "06str.c", 155))) ,        __freed_obj__ = 0, 
        0        ){
            if(_if_conditional49=!((struct sNode*)come_null_check(it_28, "06str.c", 123))->compile(((struct sNode*)come_null_check(it_28, "06str.c", 123))->_protocol_obj,info),            __freed_obj__ = 0, 
            _if_conditional49) {
                __result37__ = (_Bool)0;
                if(o2_saved_25 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,o2_saved_25, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(come_value_23 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_23, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(buf_24 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_24, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                return __result37__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            come_value_31=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value38=get_value_from_stack(-1,info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value38);
            if(right_value38 && right_value38 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value38, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value38;
            __freed_obj__ = 0;
            dec_stack_ptr(1,info);
            __freed_obj__ = 0;
            method_name_32=(char*)come_increment_ref_count(((char*)(right_value39=create_method_name(((struct CVALUE*)come_null_check(come_value_31, "06str.c", 126))->type,(_Bool)0,"to_string",info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value39);
            if(right_value39 && right_value39 != __result_obj__ && !__freed_obj__) { right_value39 = come_decrement_ref_count(right_value39, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value39;
            __freed_obj__ = 0;
            if(_if_conditional55=((struct sFun*)(right_value41=map$2charphsFunph_at(((struct map$2charphsFunph*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 140))->funcs, "06str.c", 140)),method_name_32,((void*)0))))==((void*)0),            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value41),
            (right_value41 && right_value41 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(sFun_finalize,right_value41, (void*)0, (void*)0, 0, 1, 0, 0):0,
            __right_value_freed_obj[2] = right_value41, 
            __freed_obj__ = 0, 
            _if_conditional55) {
                obj_type_36=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_31, "06str.c", 129))->type, "06str.c", 129))->mNoSolvedGenericsType, "06str.c", 129))->v1;
                __freed_obj__ = 0;
                if(_if_conditional71=obj_type_36&&list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(obj_type_36, "06str.c", 138))->mGenericsTypes, "06str.c", 138)))>0,                __freed_obj__ = 0, 
                _if_conditional71) {
                    obj_type2_37=((struct CVALUE*)come_null_check(come_value_31, "06str.c", 131))->type;
                    __freed_obj__ = 0;
                    __dec_obj19=method_name_32;
                    method_name_32=(char*)come_increment_ref_count(((char*)(right_value43=make_generics_function(obj_type2_37,(char*)come_increment_ref_count(((char*)(right_value42=__builtin_string("to_string")))),info))));
                    if(__dec_obj19) { __dec_obj19 = come_decrement_ref_count(__dec_obj19, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value42);
                    if(right_value42 && right_value42 != __result_obj__ && !__freed_obj__) { right_value42 = come_decrement_ref_count(right_value42, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value42;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value43);
                    if(right_value43 && right_value43 != __result_obj__ && !__freed_obj__) { right_value43 = come_decrement_ref_count(right_value43, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value43;
                    __freed_obj__ = 0;
                }
                else {
                    err_msg(info,"require to_string implementation(%s)",((struct sClass*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_31, "06str.c", 135))->type, "06str.c", 135))->mClass, "06str.c", 135))->mName);
                    __freed_obj__ = 0;
                    exit(1);
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            buf2_38=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value45=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value44=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 140))))))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value44);
            if(right_value44 && right_value44 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value44, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[3] = right_value44;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value45);
            if(right_value45 && right_value45 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value45, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[4] = right_value45;
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(buf2_38, "06str.c", 142)),method_name_32);
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(buf2_38, "06str.c", 143)),"(");
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(buf2_38, "06str.c", 144)),((struct CVALUE*)come_null_check(come_value_31, "06str.c", 144))->c_value);
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(buf2_38, "06str.c", 145)),")");
            __freed_obj__ = 0;
            type_39=(struct sType*)come_increment_ref_count(((struct sType*)(right_value47=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value46=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 147)))),"char*",(_Bool)0,info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value46);
            if(right_value46 && right_value46 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value46, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[5] = right_value46;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value47);
            if(right_value47 && right_value47 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value47, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[6] = right_value47;
            __freed_obj__ = 0;
            ((struct sType*)come_null_check(type_39, "06str.c", 148))->mHeap=(_Bool)1;
            __freed_obj__ = 0;
            c_value_40=(char*)come_increment_ref_count(((char*)(right_value49=append_object_to_right_values(((char*)(right_value48=buffer_to_string(((struct buffer*)come_null_check(buf2_38, "06str.c", 150))))),(struct sType*)come_increment_ref_count(type_39),info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value48);
            if(right_value48 && right_value48 != __result_obj__ && !__freed_obj__) { right_value48 = come_decrement_ref_count(right_value48, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[7] = right_value48;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value49);
            if(right_value49 && right_value49 != __result_obj__ && !__freed_obj__) { right_value49 = come_decrement_ref_count(right_value49, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[8] = right_value49;
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(buf_24, "06str.c", 152)),",");
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(buf_24, "06str.c", 153)),c_value_40);
            __freed_obj__ = 0;
            if(come_value_31 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_31, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(method_name_32 && !__freed_obj__) { method_name_32 = come_decrement_ref_count(method_name_32, (void*)0, (void*)0, 0, 0, 0); }
            if(buf2_38 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf2_38, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(type_39 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_39, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(c_value_40 && !__freed_obj__) { c_value_40 = come_decrement_ref_count(c_value_40, (void*)0, (void*)0, 0, 0, 0); }
        }
        if(o2_saved_25 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,o2_saved_25, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    buffer_append_str(((struct buffer*)come_null_check(buf_24, "06str.c", 157)),")");
    __freed_obj__ = 0;
    type2_41=(struct sType*)come_increment_ref_count(((struct sType*)(right_value51=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value50=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 159)))),"char*",(_Bool)0,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value50);
    if(right_value50 && right_value50 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value50, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value50;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value51);
    if(right_value51 && right_value51 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value51, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value51;
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(type2_41, "06str.c", 160))->mHeap=(_Bool)1;
    __freed_obj__ = 0;
    __dec_obj20=((struct CVALUE*)come_null_check(come_value_23, "06str.c", 162))->c_value;
    ((struct CVALUE*)come_null_check(come_value_23, "06str.c", 162))->c_value=(char*)come_increment_ref_count(((char*)(right_value52=buffer_to_string(((struct buffer*)come_null_check(buf_24, "06str.c", 162))))));
    if(__dec_obj20) { __dec_obj20 = come_decrement_ref_count(__dec_obj20, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value52);
    if(right_value52 && right_value52 != __result_obj__ && !__freed_obj__) { right_value52 = come_decrement_ref_count(right_value52, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[5] = right_value52;
    __freed_obj__ = 0;
    __dec_obj21=((struct CVALUE*)come_null_check(come_value_23, "06str.c", 163))->c_value;
    ((struct CVALUE*)come_null_check(come_value_23, "06str.c", 163))->c_value=(char*)come_increment_ref_count(((char*)(right_value53=append_object_to_right_values(((struct CVALUE*)come_null_check(come_value_23, "06str.c", 163))->c_value,(struct sType*)come_increment_ref_count(type2_41),info))));
    if(__dec_obj21) { __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value53);
    if(right_value53 && right_value53 != __result_obj__ && !__freed_obj__) { right_value53 = come_decrement_ref_count(right_value53, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[6] = right_value53;
    __freed_obj__ = 0;
    __dec_obj41=((struct CVALUE*)come_null_check(come_value_23, "06str.c", 164))->type;
    ((struct CVALUE*)come_null_check(come_value_23, "06str.c", 164))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value81=sType_clone(type2_41))));
    if(__dec_obj41) { come_call_finalizer(sType_finalize,__dec_obj41, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value81);
    if(right_value81 && right_value81 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value81, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[7] = right_value81;
    __freed_obj__ = 0;
    ((struct CVALUE*)come_null_check(come_value_23, "06str.c", 165))->var=((void*)0);
    __freed_obj__ = 0;
    list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 167))->stack, "06str.c", 167)),(struct CVALUE*)come_increment_ref_count(come_value_23));
    __freed_obj__ = 0;
    add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_23, "06str.c", 169))->c_value);
    __freed_obj__ = 0;
    __result57__ = (_Bool)1;
    if(come_value_23 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_23, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(buf_24 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_24, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type2_41 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_41, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result57__;
    __freed_obj__ = 0;
    if(come_value_23 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_23, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(buf_24 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_24, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type2_41 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_41, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result29__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __result29__ = ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 410))->len;
        __freed_obj__ = 0;
        return __result29__;
        __freed_obj__ = 0;
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional45;
struct sNode* result_26;
struct sNode* __result30__;
_Bool _if_conditional46;
struct sNode* __result31__;
struct sNode* result_27;
struct sNode* __result32__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_26, 0, sizeof(struct sNode*));
memset(&result_27, 0, sizeof(struct sNode*));
            if(_if_conditional45=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional45) {
                __freed_obj__ = 0;
                memset(&result_26,0,sizeof(struct sNode*));
                __freed_obj__ = 0;
                __result30__ = __result_obj__ = result_26;
                __freed_obj__ = 0;
                return __result30__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 336))->it=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 336))->head;
            __freed_obj__ = 0;
            if(_if_conditional46=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 342))->it,            __freed_obj__ = 0, 
            _if_conditional46) {
                __result31__ = __result_obj__ = ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 339))->it, "./comelang2.h", 339))->item;
                __freed_obj__ = 0;
                return __result31__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __freed_obj__ = 0;
            memset(&result_27,0,sizeof(struct sNode*));
            __freed_obj__ = 0;
            __result32__ = __result_obj__ = result_27;
            __freed_obj__ = 0;
            return __result32__;
            __freed_obj__ = 0;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result33__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            __result33__ = self==((void*)0)||((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 366))->it==((void*)0);
            __freed_obj__ = 0;
            return __result33__;
            __freed_obj__ = 0;
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional47;
struct sNode* result_29;
struct sNode* __result34__;
_Bool _if_conditional48;
struct sNode* __result35__;
struct sNode* result_30;
struct sNode* __result36__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_29, 0, sizeof(struct sNode*));
memset(&result_30, 0, sizeof(struct sNode*));
            if(_if_conditional47=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional47) {
                __freed_obj__ = 0;
                memset(&result_29,0,sizeof(struct sNode*));
                __freed_obj__ = 0;
                __result34__ = __result_obj__ = result_29;
                __freed_obj__ = 0;
                return __result34__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 354))->it=((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 354))->it, "./comelang2.h", 354))->next;
            __freed_obj__ = 0;
            if(_if_conditional48=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 360))->it,            __freed_obj__ = 0, 
            _if_conditional48) {
                __result35__ = __result_obj__ = ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 357))->it, "./comelang2.h", 357))->item;
                __freed_obj__ = 0;
                return __result35__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __freed_obj__ = 0;
            memset(&result_30,0,sizeof(struct sNode*));
            __freed_obj__ = 0;
            __result36__ = __result_obj__ = result_30;
            __freed_obj__ = 0;
            return __result36__;
            __freed_obj__ = 0;
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int hash_33;
unsigned int it_34;
_Bool _while_condtional6;
_Bool _if_conditional50;
void* right_value40;
struct optional$2boolbool* __exception_result_var_a1;
_Bool _if_conditional52;
struct sFun* __result40__;
_Bool _if_conditional53;
_Bool _if_conditional54;
struct sFun* __result41__;
struct sFun* __result42__;
struct sFun* __result43__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_33, 0, sizeof(unsigned int));
memset(&it_34, 0, sizeof(unsigned int));
memset(&right_value40, 0, sizeof(void*));
                hash_33=string_get_hash_key(((char*)come_null_check(((char*)key), "./comelang2.h", 1258)))%((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1258))->size;
                __freed_obj__ = 0;
                it_34=hash_33;
                __freed_obj__ = 0;
                while(_while_condtional6=(_Bool)1,                __freed_obj__ = 0, 
                _while_condtional6) {
                    if(_if_conditional50=((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1281))->item_existance[it_34],                    __freed_obj__ = 0, 
                    _if_conditional50) {
                        if(_if_conditional52=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 1269),__exception_result_var_a1=((struct optional$2boolbool*)(right_value40=string_equals(((char*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1269))->keys[it_34], "./comelang2.h", 1269)),key))), come_pop_stackframe(), __exception_result_var_a1)),                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value40),
                        (right_value40 && right_value40 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value40, (void*)0, (void*)0, 0, 1, 0, 0):0,
                        __right_value_freed_obj[0] = right_value40, 
                        __freed_obj__ = 0, 
                        _if_conditional52) {
                            __result40__ = __result_obj__ = ((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1266))->items[it_34];
                            __freed_obj__ = 0;
                            return __result40__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        it_34++;
                        __freed_obj__ = 0;
                        if(_if_conditional53=it_34>=((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1277))->size,                        __freed_obj__ = 0, 
                        _if_conditional53) {
                            it_34=0;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional54=it_34==hash_33,                            __freed_obj__ = 0, 
                            _if_conditional54) {
                                __result41__ = __result_obj__ = default_value;
                                __freed_obj__ = 0;
                                return __result41__;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    else {
                        __result42__ = __result_obj__ = default_value;
                        __freed_obj__ = 0;
                        return __result42__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __result43__ = __result_obj__ = default_value;
                __freed_obj__ = 0;
                return __result43__;
                __freed_obj__ = 0;
}

static _Bool optional$2boolbool_value(struct optional$2boolbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional51;
_Bool default_value_35;
_Bool __result38__;
_Bool __result39__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_35, 0, sizeof(_Bool));
                            if(_if_conditional51=self==((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional51) {
                                __freed_obj__ = 0;
                                memset(&default_value_35,0,sizeof(_Bool));
                                __freed_obj__ = 0;
                                __result38__ = default_value_35;
                                __freed_obj__ = 0;
                                return __result38__;
                                __freed_obj__ = 0;
                            }
                            else {
                                __result39__ = ((struct optional$2boolbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                                __freed_obj__ = 0;
                                return __result39__;
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

static void sFun_finalize(struct sFun* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional56;
_Bool _if_conditional57;
_Bool _if_conditional58;
_Bool _if_conditional59;
_Bool _if_conditional60;
_Bool _if_conditional61;
_Bool _if_conditional62;
_Bool _if_conditional65;
_Bool _if_conditional66;
_Bool _if_conditional67;
_Bool _if_conditional68;
_Bool _if_conditional69;
_Bool _if_conditional70;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional56=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 1))->mName!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional56) {
                    if(((struct sFun*)come_null_check(self, "sFun_finalize", 0))->mName && !__freed_obj__) { ((struct sFun*)come_null_check(self, "sFun_finalize", 0))->mName = come_decrement_ref_count(((struct sFun*)come_null_check(self, "sFun_finalize", 0))->mName, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional57=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 2))->mResultType!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional57) {
                    if(((struct sFun*)come_null_check(self, "sFun_finalize", 1))->mResultType && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 1))->mResultType, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional58=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 3))->mParamTypes!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional58) {
                    if(((struct sFun*)come_null_check(self, "sFun_finalize", 2))->mParamTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 2))->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional59=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 4))->mParamNames!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional59) {
                    if(((struct sFun*)come_null_check(self, "sFun_finalize", 3))->mParamNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 3))->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional60=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 5))->mParamDefaultParametors!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional60) {
                    if(((struct sFun*)come_null_check(self, "sFun_finalize", 4))->mParamDefaultParametors && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 4))->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional61=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 6))->mLambdaType!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional61) {
                    if(((struct sFun*)come_null_check(self, "sFun_finalize", 5))->mLambdaType && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 5))->mLambdaType, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional62=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 7))->mBlock!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional62) {
                    if(((struct sFun*)come_null_check(self, "sFun_finalize", 6))->mBlock && !__freed_obj__) { come_call_finalizer(sBlock_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 6))->mBlock, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional65=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 8))->mSource!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional65) {
                    if(((struct sFun*)come_null_check(self, "sFun_finalize", 7))->mSource && !__freed_obj__) { come_call_finalizer(buffer_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 7))->mSource, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional66=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 9))->mSourceHead!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional66) {
                    if(((struct sFun*)come_null_check(self, "sFun_finalize", 8))->mSourceHead && !__freed_obj__) { come_call_finalizer(buffer_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 8))->mSourceHead, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional67=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 10))->mSourceHead2!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional67) {
                    if(((struct sFun*)come_null_check(self, "sFun_finalize", 9))->mSourceHead2 && !__freed_obj__) { come_call_finalizer(buffer_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 9))->mSourceHead2, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional68=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 11))->mSourceDefer!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional68) {
                    if(((struct sFun*)come_null_check(self, "sFun_finalize", 10))->mSourceDefer && !__freed_obj__) { come_call_finalizer(buffer_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 10))->mSourceDefer, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional69=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 12))->mComeHeader!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional69) {
                    if(((struct sFun*)come_null_check(self, "sFun_finalize", 11))->mComeHeader && !__freed_obj__) { ((struct sFun*)come_null_check(self, "sFun_finalize", 11))->mComeHeader = come_decrement_ref_count(((struct sFun*)come_null_check(self, "sFun_finalize", 11))->mComeHeader, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional70=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 13))->mDeclareSName!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional70) {
                    if(((struct sFun*)come_null_check(self, "sFun_finalize", 12))->mDeclareSName && !__freed_obj__) { ((struct sFun*)come_null_check(self, "sFun_finalize", 12))->mDeclareSName = come_decrement_ref_count(((struct sFun*)come_null_check(self, "sFun_finalize", 12))->mDeclareSName, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional63;
_Bool _if_conditional64;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional63=self!=((void*)0)&&((struct sBlock*)come_null_check(self, "sBlock_finalize", 1))->mNodes!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional63) {
                            if(((struct sBlock*)come_null_check(self, "sBlock_finalize", 0))->mNodes && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,((struct sBlock*)come_null_check(self, "sBlock_finalize", 0))->mNodes, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional64=self!=((void*)0)&&((struct sBlock*)come_null_check(self, "sBlock_finalize", 2))->mVarTable!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional64) {
                            if(((struct sBlock*)come_null_check(self, "sBlock_finalize", 1))->mVarTable && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,((struct sBlock*)come_null_check(self, "sBlock_finalize", 1))->mVarTable, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result44__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    __result44__ = ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 410))->len;
                    __freed_obj__ = 0;
                    return __result44__;
                    __freed_obj__ = 0;
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional72;
struct sType* __result45__;
void* right_value54;
struct sType* result_42;
_Bool _if_conditional73;
_Bool _if_conditional74;
void* right_value57;
struct tuple1$1sTypeph* __dec_obj23;
_Bool _if_conditional78;
void* right_value58;
struct tuple1$1sTypeph* __dec_obj24;
_Bool _if_conditional79;
void* right_value59;
char* __dec_obj25;
_Bool _if_conditional80;
void* right_value66;
struct list$1sTypeph* __dec_obj29;
_Bool _if_conditional84;
void* right_value67;
struct list$1sNodeph* __dec_obj30;
_Bool _if_conditional85;
_Bool _if_conditional86;
void* right_value68;
struct list$1sTypeph* __dec_obj31;
_Bool _if_conditional87;
void* right_value75;
struct list$1charph* __dec_obj35;
_Bool _if_conditional91;
void* right_value76;
struct tuple1$1sTypeph* __dec_obj36;
_Bool _if_conditional92;
_Bool _if_conditional93;
void* right_value77;
struct sNode* __dec_obj37;
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
_Bool _if_conditional112;
_Bool _if_conditional113;
_Bool _if_conditional114;
_Bool _if_conditional115;
_Bool _if_conditional116;
_Bool _if_conditional117;
void* right_value78;
struct sNode* __dec_obj38;
_Bool _if_conditional118;
_Bool _if_conditional119;
_Bool _if_conditional120;
void* right_value79;
char* __dec_obj39;
_Bool _if_conditional121;
_Bool _if_conditional122;
_Bool _if_conditional123;
_Bool _if_conditional124;
_Bool _if_conditional125;
_Bool _if_conditional126;
_Bool _if_conditional127;
_Bool _if_conditional128;
_Bool _if_conditional129;
void* right_value80;
char* __dec_obj40;
struct sType* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value54, 0, sizeof(void*));
memset(&result_42, 0, sizeof(struct sType*));
memset(&right_value57, 0, sizeof(void*));
memset(&right_value58, 0, sizeof(void*));
memset(&right_value59, 0, sizeof(void*));
memset(&right_value66, 0, sizeof(void*));
memset(&right_value67, 0, sizeof(void*));
memset(&right_value68, 0, sizeof(void*));
memset(&right_value75, 0, sizeof(void*));
memset(&right_value76, 0, sizeof(void*));
memset(&right_value77, 0, sizeof(void*));
memset(&right_value78, 0, sizeof(void*));
memset(&right_value79, 0, sizeof(void*));
memset(&right_value80, 0, sizeof(void*));
        if(_if_conditional72=self==(void*)0,        __freed_obj__ = 0, 
        _if_conditional72) {
            __result45__ = __result_obj__ = (void*)0;
            __freed_obj__ = 0;
            return __result45__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        result_42=(struct sType*)come_increment_ref_count(((struct sType*)(right_value54=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value54);
        if(right_value54 && right_value54 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value54, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value54;
        __freed_obj__ = 0;
        if(_if_conditional73=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional73) {
            ((struct sType*)come_null_check(result_42, "sType_clone", 4))->mClass=((struct sType*)come_null_check(self, "sType_clone", 4))->mClass;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional74=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 6))->mNoSolvedGenericsType!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional74) {
            __dec_obj23=((struct sType*)come_null_check(result_42, "sType_clone", 5))->mNoSolvedGenericsType;
            ((struct sType*)come_null_check(result_42, "sType_clone", 5))->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value57=tuple1$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 5))->mNoSolvedGenericsType))));
            if(__dec_obj23) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj23, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value57);
            if(right_value57 && right_value57 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value57, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value57;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional78=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 7))->mOriginalLoadVarType!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional78) {
            __dec_obj24=((struct sType*)come_null_check(result_42, "sType_clone", 6))->mOriginalLoadVarType;
            ((struct sType*)come_null_check(result_42, "sType_clone", 6))->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value58=tuple1$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 6))->mOriginalLoadVarType))));
            if(__dec_obj24) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj24, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value58);
            if(right_value58 && right_value58 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value58, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value58;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional79=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 8))->mGenericsName!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional79) {
            __dec_obj25=((struct sType*)come_null_check(result_42, "sType_clone", 7))->mGenericsName;
            ((struct sType*)come_null_check(result_42, "sType_clone", 7))->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value59=string_clone(((struct sType*)come_null_check(self, "sType_clone", 7))->mGenericsName))));
            if(__dec_obj25) { __dec_obj25 = come_decrement_ref_count(__dec_obj25, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value59);
            if(right_value59 && right_value59 != __result_obj__ && !__freed_obj__) { right_value59 = come_decrement_ref_count(right_value59, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value59;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional80=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 9))->mGenericsTypes!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional80) {
            __dec_obj29=((struct sType*)come_null_check(result_42, "sType_clone", 8))->mGenericsTypes;
            ((struct sType*)come_null_check(result_42, "sType_clone", 8))->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value66=list$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 8))->mGenericsTypes))));
            if(__dec_obj29) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj29, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value66);
            if(right_value66 && right_value66 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value66, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value66;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional84=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 10))->mArrayNum!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional84) {
            __dec_obj30=((struct sType*)come_null_check(result_42, "sType_clone", 9))->mArrayNum;
            ((struct sType*)come_null_check(result_42, "sType_clone", 9))->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value67=list$1sNodephp_clone(((struct sType*)come_null_check(self, "sType_clone", 9))->mArrayNum))));
            if(__dec_obj30) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj30, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value67);
            if(right_value67 && right_value67 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value67, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value67;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional85=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional85) {
            ((struct sType*)come_null_check(result_42, "sType_clone", 10))->mOmitArrayNum=((struct sType*)come_null_check(self, "sType_clone", 10))->mOmitArrayNum;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional86=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 12))->mParamTypes!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional86) {
            __dec_obj31=((struct sType*)come_null_check(result_42, "sType_clone", 11))->mParamTypes;
            ((struct sType*)come_null_check(result_42, "sType_clone", 11))->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value68=list$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 11))->mParamTypes))));
            if(__dec_obj31) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj31, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value68);
            if(right_value68 && right_value68 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value68, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value68;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional87=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 13))->mParamNames!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional87) {
            __dec_obj35=((struct sType*)come_null_check(result_42, "sType_clone", 12))->mParamNames;
            ((struct sType*)come_null_check(result_42, "sType_clone", 12))->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value75=list$1charphp_clone(((struct sType*)come_null_check(self, "sType_clone", 12))->mParamNames))));
            if(__dec_obj35) { come_call_finalizer(list$1charph_finalize,__dec_obj35, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value75);
            if(right_value75 && right_value75 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value75;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional91=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 14))->mResultType!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional91) {
            __dec_obj36=((struct sType*)come_null_check(result_42, "sType_clone", 13))->mResultType;
            ((struct sType*)come_null_check(result_42, "sType_clone", 13))->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value76=tuple1$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 13))->mResultType))));
            if(__dec_obj36) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj36, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value76);
            if(right_value76 && right_value76 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value76, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value76;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional92=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional92) {
            ((struct sType*)come_null_check(result_42, "sType_clone", 14))->mVarArgs=((struct sType*)come_null_check(self, "sType_clone", 14))->mVarArgs;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional93=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 16))->mAlignas!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional93) {
            __dec_obj37=((struct sType*)come_null_check(result_42, "sType_clone", 15))->mAlignas;
            ((struct sType*)come_null_check(result_42, "sType_clone", 15))->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value77=sNode_clone(((struct sType*)come_null_check(self, "sType_clone", 15))->mAlignas))));
            if(__dec_obj37) { __dec_obj37 = come_decrement_ref_count(__dec_obj37, ((struct sNode*)__dec_obj37)->finalize, ((struct sNode*)__dec_obj37)->_protocol_obj, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value77);
            if(right_value77 && right_value77 != __result_obj__ && !__freed_obj__) { right_value77 = come_decrement_ref_count(right_value77, ((struct sNode*)right_value77)->finalize, ((struct sNode*)right_value77)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[0] = right_value77;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional94=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional94) {
            ((struct sType*)come_null_check(result_42, "sType_clone", 16))->mUnsigned=((struct sType*)come_null_check(self, "sType_clone", 16))->mUnsigned;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional95=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional95) {
            ((struct sType*)come_null_check(result_42, "sType_clone", 17))->mShort=((struct sType*)come_null_check(self, "sType_clone", 17))->mShort;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional96=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional96) {
            ((struct sType*)come_null_check(result_42, "sType_clone", 18))->mLong=((struct sType*)come_null_check(self, "sType_clone", 18))->mLong;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional97=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional97) {
            ((struct sType*)come_null_check(result_42, "sType_clone", 19))->mLongLong=((struct sType*)come_null_check(self, "sType_clone", 19))->mLongLong;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional98=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional98) {
            ((struct sType*)come_null_check(result_42, "sType_clone", 20))->mConstant=((struct sType*)come_null_check(self, "sType_clone", 20))->mConstant;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional99=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional99) {
            ((struct sType*)come_null_check(result_42, "sType_clone", 21))->mRegister=((struct sType*)come_null_check(self, "sType_clone", 21))->mRegister;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional100=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional100) {
            ((struct sType*)come_null_check(result_42, "sType_clone", 22))->mVolatile=((struct sType*)come_null_check(self, "sType_clone", 22))->mVolatile;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional101=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional101) {
            ((struct sType*)come_null_check(result_42, "sType_clone", 23))->mStatic=((struct sType*)come_null_check(self, "sType_clone", 23))->mStatic;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional102=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional102) {
            ((struct sType*)come_null_check(result_42, "sType_clone", 24))->mExtern=((struct sType*)come_null_check(self, "sType_clone", 24))->mExtern;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional103=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional103) {
            ((struct sType*)come_null_check(result_42, "sType_clone", 25))->mRestrict=((struct sType*)come_null_check(self, "sType_clone", 25))->mRestrict;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional104=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional104) {
            ((struct sType*)come_null_check(result_42, "sType_clone", 26))->mImmutable=((struct sType*)come_null_check(self, "sType_clone", 26))->mImmutable;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional105=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional105) {
            ((struct sType*)come_null_check(result_42, "sType_clone", 27))->mHeap=((struct sType*)come_null_check(self, "sType_clone", 27))->mHeap;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional106=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional106) {
            ((struct sType*)come_null_check(result_42, "sType_clone", 28))->mDummyHeap=((struct sType*)come_null_check(self, "sType_clone", 28))->mDummyHeap;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional107=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional107) {
            ((struct sType*)come_null_check(result_42, "sType_clone", 29))->mDelegate=((struct sType*)come_null_check(self, "sType_clone", 29))->mDelegate;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional108=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional108) {
            ((struct sType*)come_null_check(result_42, "sType_clone", 30))->mShare=((struct sType*)come_null_check(self, "sType_clone", 30))->mShare;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional109=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional109) {
            ((struct sType*)come_null_check(result_42, "sType_clone", 31))->mClone=((struct sType*)come_null_check(self, "sType_clone", 31))->mClone;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional110=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional110) {
            ((struct sType*)come_null_check(result_42, "sType_clone", 32))->mNoHeap=((struct sType*)come_null_check(self, "sType_clone", 32))->mNoHeap;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional111=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional111) {
            ((struct sType*)come_null_check(result_42, "sType_clone", 33))->mNoCallingDestructor=((struct sType*)come_null_check(self, "sType_clone", 33))->mNoCallingDestructor;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional112=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional112) {
            ((struct sType*)come_null_check(result_42, "sType_clone", 34))->mRefference=((struct sType*)come_null_check(self, "sType_clone", 34))->mRefference;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional113=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional113) {
            ((struct sType*)come_null_check(result_42, "sType_clone", 35))->mException=((struct sType*)come_null_check(self, "sType_clone", 35))->mException;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional114=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional114) {
            ((struct sType*)come_null_check(result_42, "sType_clone", 36))->mPointerNum=((struct sType*)come_null_check(self, "sType_clone", 36))->mPointerNum;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional115=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional115) {
            ((struct sType*)come_null_check(result_42, "sType_clone", 37))->mOriginalTypeNamePointerNum=((struct sType*)come_null_check(self, "sType_clone", 37))->mOriginalTypeNamePointerNum;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional116=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional116) {
            ((struct sType*)come_null_check(result_42, "sType_clone", 38))->mNoArrayPointerNum=((struct sType*)come_null_check(self, "sType_clone", 38))->mNoArrayPointerNum;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional117=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 40))->mSizeNum!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional117) {
            __dec_obj38=((struct sType*)come_null_check(result_42, "sType_clone", 39))->mSizeNum;
            ((struct sType*)come_null_check(result_42, "sType_clone", 39))->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value78=sNode_clone(((struct sType*)come_null_check(self, "sType_clone", 39))->mSizeNum))));
            if(__dec_obj38) { __dec_obj38 = come_decrement_ref_count(__dec_obj38, ((struct sNode*)__dec_obj38)->finalize, ((struct sNode*)__dec_obj38)->_protocol_obj, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value78);
            if(right_value78 && right_value78 != __result_obj__ && !__freed_obj__) { right_value78 = come_decrement_ref_count(right_value78, ((struct sNode*)right_value78)->finalize, ((struct sNode*)right_value78)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[0] = right_value78;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional118=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional118) {
            ((struct sType*)come_null_check(result_42, "sType_clone", 40))->mDynamicArrayNum=((struct sType*)come_null_check(self, "sType_clone", 40))->mDynamicArrayNum;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional119=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional119) {
            ((struct sType*)come_null_check(result_42, "sType_clone", 41))->mTypeOfExpression=((struct sType*)come_null_check(self, "sType_clone", 41))->mTypeOfExpression;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional120=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 43))->mOriginalTypeName!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional120) {
            __dec_obj39=((struct sType*)come_null_check(result_42, "sType_clone", 42))->mOriginalTypeName;
            ((struct sType*)come_null_check(result_42, "sType_clone", 42))->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value79=string_clone(((struct sType*)come_null_check(self, "sType_clone", 42))->mOriginalTypeName))));
            if(__dec_obj39) { __dec_obj39 = come_decrement_ref_count(__dec_obj39, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value79);
            if(right_value79 && right_value79 != __result_obj__ && !__freed_obj__) { right_value79 = come_decrement_ref_count(right_value79, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value79;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional121=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional121) {
            ((struct sType*)come_null_check(result_42, "sType_clone", 43))->mOriginalPointerNum=((struct sType*)come_null_check(self, "sType_clone", 43))->mOriginalPointerNum;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional122=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional122) {
            ((struct sType*)come_null_check(result_42, "sType_clone", 44))->mFunctionParam=((struct sType*)come_null_check(self, "sType_clone", 44))->mFunctionParam;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional123=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional123) {
            ((struct sType*)come_null_check(result_42, "sType_clone", 45))->mAllocaValue=((struct sType*)come_null_check(self, "sType_clone", 45))->mAllocaValue;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional124=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional124) {
            ((struct sType*)come_null_check(result_42, "sType_clone", 46))->mGenericsStruct=((struct sType*)come_null_check(self, "sType_clone", 46))->mGenericsStruct;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional125=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional125) {
            ((struct sType*)come_null_check(result_42, "sType_clone", 47))->mSolvedGenericsName=((struct sType*)come_null_check(self, "sType_clone", 47))->mSolvedGenericsName;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional126=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional126) {
            ((struct sType*)come_null_check(result_42, "sType_clone", 48))->mComeMemCore=((struct sType*)come_null_check(self, "sType_clone", 48))->mComeMemCore;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional127=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional127) {
            ((struct sType*)come_null_check(result_42, "sType_clone", 49))->mInline=((struct sType*)come_null_check(self, "sType_clone", 49))->mInline;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional128=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional128) {
            ((struct sType*)come_null_check(result_42, "sType_clone", 50))->mNullValue=((struct sType*)come_null_check(self, "sType_clone", 50))->mNullValue;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional129=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 52))->mAsmName!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional129) {
            __dec_obj40=((struct sType*)come_null_check(result_42, "sType_clone", 51))->mAsmName;
            ((struct sType*)come_null_check(result_42, "sType_clone", 51))->mAsmName=(char*)come_increment_ref_count(((char*)(right_value80=string_clone(((struct sType*)come_null_check(self, "sType_clone", 51))->mAsmName))));
            if(__dec_obj40) { __dec_obj40 = come_decrement_ref_count(__dec_obj40, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value80);
            if(right_value80 && right_value80 != __result_obj__ && !__freed_obj__) { right_value80 = come_decrement_ref_count(right_value80, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value80;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __result56__ = __result_obj__ = result_42;
        if(result_42 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_42, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result56__;
        __freed_obj__ = 0;
        if(result_42 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_42, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional75;
struct tuple1$1sTypeph* __result46__;
void* right_value55;
struct tuple1$1sTypeph* result_43;
_Bool _if_conditional77;
void* right_value56;
struct sType* __dec_obj22;
struct tuple1$1sTypeph* __result47__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value55, 0, sizeof(void*));
memset(&result_43, 0, sizeof(struct tuple1$1sTypeph*));
memset(&right_value56, 0, sizeof(void*));
                if(_if_conditional75=self==(void*)0,                __freed_obj__ = 0, 
                _if_conditional75) {
                    __result46__ = __result_obj__ = (void*)0;
                    __freed_obj__ = 0;
                    return __result46__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                result_43=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value55=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value55);
                if(right_value55 && right_value55 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,right_value55, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value55;
                __freed_obj__ = 0;
                if(_if_conditional77=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_clone", 5))->v1!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional77) {
                    __dec_obj22=((struct tuple1$1sTypeph*)come_null_check(result_43, "tuple1$1sTypephp_clone", 4))->v1;
                    ((struct tuple1$1sTypeph*)come_null_check(result_43, "tuple1$1sTypephp_clone", 4))->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value56=sType_clone(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_clone", 4))->v1))));
                    if(__dec_obj22) { come_call_finalizer(sType_finalize,__dec_obj22, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value56);
                    if(right_value56 && right_value56 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value56, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value56;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __result47__ = __result_obj__ = result_43;
                if(result_43 && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,result_43, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result47__;
                __freed_obj__ = 0;
                if(result_43 && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,result_43, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional76;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional76=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 1))->v1!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional76) {
                        if(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional81;
struct list$1sTypeph* __result48__;
void* right_value60;
void* right_value61;
struct list$1sTypeph* result_44;
struct list_item$1sTypeph* it_45;
_Bool _while_condtional7;
void* right_value65;
struct list$1sTypeph* __result51__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value60, 0, sizeof(void*));
memset(&right_value61, 0, sizeof(void*));
memset(&result_44, 0, sizeof(struct list$1sTypeph*));
memset(&it_45, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value65, 0, sizeof(void*));
                if(_if_conditional81=self==((void*)0),                __freed_obj__ = 0, 
                _if_conditional81) {
                    __result48__ = __result_obj__ = ((void*)0);
                    __freed_obj__ = 0;
                    return __result48__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                result_44=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value61=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)(right_value60=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 188))), "./comelang2.h", 188)))))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value60);
                if(right_value60 && right_value60 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value60, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value60;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value61);
                if(right_value61 && right_value61 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value61, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value61;
                __freed_obj__ = 0;
                it_45=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 190))->head;
                __freed_obj__ = 0;
                while(_while_condtional7=it_45!=((void*)0),                __freed_obj__ = 0, 
                _while_condtional7) {
                    list$1sTypeph_add(((struct list$1sTypeph*)come_null_check(result_44, "./comelang2.h", 192)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value65=sType_clone(((struct list_item$1sTypeph*)come_null_check(it_45, "./comelang2.h", 192))->item)))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value65);
                    if(right_value65 && right_value65 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value65, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value65;
                    __freed_obj__ = 0;
                    it_45=((struct list_item$1sTypeph*)come_null_check(it_45, "./comelang2.h", 194))->next;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __result51__ = __result_obj__ = result_44;
                if(result_44 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,result_44, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result51__;
                __freed_obj__ = 0;
                if(result_44 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,result_44, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1sTypeph* __result49__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 150))->head=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 151))->tail=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 152))->len=0;
                    __freed_obj__ = 0;
                    __result49__ = __result_obj__ = self;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result49__;
                    __freed_obj__ = 0;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional82;
void* right_value62;
struct list_item$1sTypeph* litem_46;
struct sType* __dec_obj26;
_Bool _if_conditional83;
void* right_value63;
struct list_item$1sTypeph* litem_47;
struct sType* __dec_obj27;
void* right_value64;
struct list_item$1sTypeph* litem_48;
struct sType* __dec_obj28;
struct list$1sTypeph* __result50__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value62, 0, sizeof(void*));
memset(&litem_46, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value63, 0, sizeof(void*));
memset(&litem_47, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value64, 0, sizeof(void*));
memset(&litem_48, 0, sizeof(struct list_item$1sTypeph*));
                        if(_if_conditional82=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 232))->len==0,                        __freed_obj__ = 0, 
                        _if_conditional82) {
                            litem_46=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value62=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 202))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value62);
                            if(right_value62 && right_value62 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value62, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value62;
                            __freed_obj__ = 0;
                            ((struct list_item$1sTypeph*)come_null_check(litem_46, "./comelang2.h", 204))->prev=((void*)0);
                            __freed_obj__ = 0;
                            ((struct list_item$1sTypeph*)come_null_check(litem_46, "./comelang2.h", 205))->next=((void*)0);
                            __freed_obj__ = 0;
                            __dec_obj26=((struct list_item$1sTypeph*)come_null_check(litem_46, "./comelang2.h", 206))->item;
                            ((struct list_item$1sTypeph*)come_null_check(litem_46, "./comelang2.h", 206))->item=(struct sType*)come_increment_ref_count(item);
                            if(__dec_obj26) { come_call_finalizer(sType_finalize,__dec_obj26, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 208))->tail=litem_46;
                            __freed_obj__ = 0;
                            ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 209))->head=litem_46;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional83=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 232))->len==1,                            __freed_obj__ = 0, 
                            _if_conditional83) {
                                litem_47=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value63=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 212))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value63);
                                if(right_value63 && right_value63 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value63, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value63;
                                __freed_obj__ = 0;
                                ((struct list_item$1sTypeph*)come_null_check(litem_47, "./comelang2.h", 214))->prev=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 214))->head;
                                __freed_obj__ = 0;
                                ((struct list_item$1sTypeph*)come_null_check(litem_47, "./comelang2.h", 215))->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj27=((struct list_item$1sTypeph*)come_null_check(litem_47, "./comelang2.h", 216))->item;
                                ((struct list_item$1sTypeph*)come_null_check(litem_47, "./comelang2.h", 216))->item=(struct sType*)come_increment_ref_count(item);
                                if(__dec_obj27) { come_call_finalizer(sType_finalize,__dec_obj27, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = 0;
                                ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 218))->tail=litem_47;
                                __freed_obj__ = 0;
                                ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 219))->head, "./comelang2.h", 219))->next=litem_47;
                                __freed_obj__ = 0;
                            }
                            else {
                                litem_48=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value64=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 222))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value64);
                                if(right_value64 && right_value64 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value64, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value64;
                                __freed_obj__ = 0;
                                ((struct list_item$1sTypeph*)come_null_check(litem_48, "./comelang2.h", 224))->prev=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 224))->tail;
                                __freed_obj__ = 0;
                                ((struct list_item$1sTypeph*)come_null_check(litem_48, "./comelang2.h", 225))->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj28=((struct list_item$1sTypeph*)come_null_check(litem_48, "./comelang2.h", 226))->item;
                                ((struct list_item$1sTypeph*)come_null_check(litem_48, "./comelang2.h", 226))->item=(struct sType*)come_increment_ref_count(item);
                                if(__dec_obj28) { come_call_finalizer(sType_finalize,__dec_obj28, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = 0;
                                ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 228))->tail, "./comelang2.h", 228))->next=litem_48;
                                __freed_obj__ = 0;
                                ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 229))->tail=litem_48;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 232))->len++;
                        __freed_obj__ = 0;
                        __result50__ = __result_obj__ = self;
                        if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result50__;
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

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional88;
struct list$1charph* __result52__;
void* right_value69;
void* right_value70;
struct list$1charph* result_49;
struct list_item$1charph* it_50;
_Bool _while_condtional8;
void* right_value74;
struct list$1charph* __result55__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value69, 0, sizeof(void*));
memset(&right_value70, 0, sizeof(void*));
memset(&result_49, 0, sizeof(struct list$1charph*));
memset(&it_50, 0, sizeof(struct list_item$1charph*));
memset(&right_value74, 0, sizeof(void*));
                if(_if_conditional88=self==((void*)0),                __freed_obj__ = 0, 
                _if_conditional88) {
                    __result52__ = __result_obj__ = ((void*)0);
                    __freed_obj__ = 0;
                    return __result52__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                result_49=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value70=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value69=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 188))), "./comelang2.h", 188)))))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value69);
                if(right_value69 && right_value69 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value69, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value69;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value70);
                if(right_value70 && right_value70 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value70, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value70;
                __freed_obj__ = 0;
                it_50=((struct list$1charph*)come_null_check(self, "./comelang2.h", 190))->head;
                __freed_obj__ = 0;
                while(_while_condtional8=it_50!=((void*)0),                __freed_obj__ = 0, 
                _while_condtional8) {
                    list$1charph_add(((struct list$1charph*)come_null_check(result_49, "./comelang2.h", 192)),(char*)come_increment_ref_count(((char*)(right_value74=string_clone(((struct list_item$1charph*)come_null_check(it_50, "./comelang2.h", 192))->item)))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value74);
                    if(right_value74 && right_value74 != __result_obj__ && !__freed_obj__) { right_value74 = come_decrement_ref_count(right_value74, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value74;
                    __freed_obj__ = 0;
                    it_50=((struct list_item$1charph*)come_null_check(it_50, "./comelang2.h", 194))->next;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __result55__ = __result_obj__ = result_49;
                if(result_49 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_49, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result55__;
                __freed_obj__ = 0;
                if(result_49 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_49, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1charph* __result53__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 150))->head=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 151))->tail=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 152))->len=0;
                    __freed_obj__ = 0;
                    __result53__ = __result_obj__ = self;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result53__;
                    __freed_obj__ = 0;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional89;
void* right_value71;
struct list_item$1charph* litem_51;
char* __dec_obj32;
_Bool _if_conditional90;
void* right_value72;
struct list_item$1charph* litem_52;
char* __dec_obj33;
void* right_value73;
struct list_item$1charph* litem_53;
char* __dec_obj34;
struct list$1charph* __result54__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value71, 0, sizeof(void*));
memset(&litem_51, 0, sizeof(struct list_item$1charph*));
memset(&right_value72, 0, sizeof(void*));
memset(&litem_52, 0, sizeof(struct list_item$1charph*));
memset(&right_value73, 0, sizeof(void*));
memset(&litem_53, 0, sizeof(struct list_item$1charph*));
                        if(_if_conditional89=((struct list$1charph*)come_null_check(self, "./comelang2.h", 232))->len==0,                        __freed_obj__ = 0, 
                        _if_conditional89) {
                            litem_51=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value71=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 202))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value71);
                            if(right_value71 && right_value71 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value71, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value71;
                            __freed_obj__ = 0;
                            ((struct list_item$1charph*)come_null_check(litem_51, "./comelang2.h", 204))->prev=((void*)0);
                            __freed_obj__ = 0;
                            ((struct list_item$1charph*)come_null_check(litem_51, "./comelang2.h", 205))->next=((void*)0);
                            __freed_obj__ = 0;
                            __dec_obj32=((struct list_item$1charph*)come_null_check(litem_51, "./comelang2.h", 206))->item;
                            ((struct list_item$1charph*)come_null_check(litem_51, "./comelang2.h", 206))->item=(char*)come_increment_ref_count(item);
                            if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count(__dec_obj32, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = 0;
                            ((struct list$1charph*)come_null_check(self, "./comelang2.h", 208))->tail=litem_51;
                            __freed_obj__ = 0;
                            ((struct list$1charph*)come_null_check(self, "./comelang2.h", 209))->head=litem_51;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional90=((struct list$1charph*)come_null_check(self, "./comelang2.h", 232))->len==1,                            __freed_obj__ = 0, 
                            _if_conditional90) {
                                litem_52=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value72=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 212))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value72);
                                if(right_value72 && right_value72 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value72, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value72;
                                __freed_obj__ = 0;
                                ((struct list_item$1charph*)come_null_check(litem_52, "./comelang2.h", 214))->prev=((struct list$1charph*)come_null_check(self, "./comelang2.h", 214))->head;
                                __freed_obj__ = 0;
                                ((struct list_item$1charph*)come_null_check(litem_52, "./comelang2.h", 215))->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj33=((struct list_item$1charph*)come_null_check(litem_52, "./comelang2.h", 216))->item;
                                ((struct list_item$1charph*)come_null_check(litem_52, "./comelang2.h", 216))->item=(char*)come_increment_ref_count(item);
                                if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count(__dec_obj33, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = 0;
                                ((struct list$1charph*)come_null_check(self, "./comelang2.h", 218))->tail=litem_52;
                                __freed_obj__ = 0;
                                ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 219))->head, "./comelang2.h", 219))->next=litem_52;
                                __freed_obj__ = 0;
                            }
                            else {
                                litem_53=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value73=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 222))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value73);
                                if(right_value73 && right_value73 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value73, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value73;
                                __freed_obj__ = 0;
                                ((struct list_item$1charph*)come_null_check(litem_53, "./comelang2.h", 224))->prev=((struct list$1charph*)come_null_check(self, "./comelang2.h", 224))->tail;
                                __freed_obj__ = 0;
                                ((struct list_item$1charph*)come_null_check(litem_53, "./comelang2.h", 225))->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj34=((struct list_item$1charph*)come_null_check(litem_53, "./comelang2.h", 226))->item;
                                ((struct list_item$1charph*)come_null_check(litem_53, "./comelang2.h", 226))->item=(char*)come_increment_ref_count(item);
                                if(__dec_obj34) { __dec_obj34 = come_decrement_ref_count(__dec_obj34, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = 0;
                                ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 228))->tail, "./comelang2.h", 228))->next=litem_53;
                                __freed_obj__ = 0;
                                ((struct list$1charph*)come_null_check(self, "./comelang2.h", 229))->tail=litem_53;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 232))->len++;
                        __freed_obj__ = 0;
                        __result54__ = __result_obj__ = self;
                        if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result54__;
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

int sSStringNode_sline(struct sSStringNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result58__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result58__ = ((struct sSStringNode*)come_null_check(self, "06str.c", 176))->sline;
    __freed_obj__ = 0;
    return __result58__;
    __freed_obj__ = 0;
}

char* sSStringNode_sname(struct sSStringNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value82;
char* __result59__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value82, 0, sizeof(void*));
    __result59__ = __result_obj__ = ((char*)(right_value82=__builtin_string(((struct sSStringNode*)come_null_check(self, "06str.c", 181))->sname)));
    __freed_obj__ = 0;
    return __result59__;
    __freed_obj__ = 0;
}

struct sCharNode* sCharNode_initialize(struct sCharNode* self, int value, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value83;
char* __dec_obj42;
struct sCharNode* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value83, 0, sizeof(void*));
    ((struct sCharNode*)come_null_check(self, "06str.c", 193))->value=value;
    __freed_obj__ = 0;
    ((struct sCharNode*)come_null_check(self, "06str.c", 195))->sline=((struct sInfo*)come_null_check(info, "06str.c", 195))->sline;
    __freed_obj__ = 0;
    __dec_obj42=((struct sCharNode*)come_null_check(self, "06str.c", 196))->sname;
    ((struct sCharNode*)come_null_check(self, "06str.c", 196))->sname=(char*)come_increment_ref_count(((char*)(right_value83=__builtin_string(((struct sInfo*)come_null_check(info, "06str.c", 196))->sname))));
    if(__dec_obj42) { __dec_obj42 = come_decrement_ref_count(__dec_obj42, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value83);
    if(right_value83 && right_value83 != __result_obj__ && !__freed_obj__) { right_value83 = come_decrement_ref_count(right_value83, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value83;
    __freed_obj__ = 0;
    __result60__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sCharNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result60__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sCharNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

_Bool sCharNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result61__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result61__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result61__;
    __freed_obj__ = 0;
}

char* sCharNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value84;
char* __result62__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value84, 0, sizeof(void*));
    __result62__ = __result_obj__ = ((char*)(right_value84=__builtin_string("sCharNode")));
    __freed_obj__ = 0;
    return __result62__;
    __freed_obj__ = 0;
}

_Bool sCharNode_compile(struct sCharNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value85;
struct CVALUE* come_value_54;
void* right_value86;
char* __dec_obj43;
void* right_value87;
void* right_value88;
struct sType* __dec_obj44;
_Bool __result63__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value85, 0, sizeof(void*));
memset(&come_value_54, 0, sizeof(struct CVALUE*));
memset(&right_value86, 0, sizeof(void*));
memset(&right_value87, 0, sizeof(void*));
memset(&right_value88, 0, sizeof(void*));
    come_value_54=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value85=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 213))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value85);
    if(right_value85 && right_value85 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value85, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value85;
    __freed_obj__ = 0;
    __dec_obj43=((struct CVALUE*)come_null_check(come_value_54, "06str.c", 215))->c_value;
    ((struct CVALUE*)come_null_check(come_value_54, "06str.c", 215))->c_value=(char*)come_increment_ref_count(((char*)(right_value86=xsprintf("%d",((struct sCharNode*)come_null_check(self, "06str.c", 215))->value))));
    if(__dec_obj43) { __dec_obj43 = come_decrement_ref_count(__dec_obj43, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value86);
    if(right_value86 && right_value86 != __result_obj__ && !__freed_obj__) { right_value86 = come_decrement_ref_count(right_value86, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value86;
    __freed_obj__ = 0;
    __dec_obj44=((struct CVALUE*)come_null_check(come_value_54, "06str.c", 216))->type;
    ((struct CVALUE*)come_null_check(come_value_54, "06str.c", 216))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value88=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value87=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 216)))),"char",(_Bool)0,info))));
    if(__dec_obj44) { come_call_finalizer(sType_finalize,__dec_obj44, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value87);
    if(right_value87 && right_value87 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value87, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value87;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value88);
    if(right_value88 && right_value88 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value88, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value88;
    __freed_obj__ = 0;
    ((struct CVALUE*)come_null_check(come_value_54, "06str.c", 217))->var=((void*)0);
    __freed_obj__ = 0;
    list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 219))->stack, "06str.c", 219)),(struct CVALUE*)come_increment_ref_count(come_value_54));
    __freed_obj__ = 0;
    add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_54, "06str.c", 221))->c_value);
    __freed_obj__ = 0;
    __result63__ = (_Bool)1;
    if(come_value_54 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_54, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result63__;
    __freed_obj__ = 0;
    if(come_value_54 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_54, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sCharNode_sline(struct sCharNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result64__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result64__ = ((struct sCharNode*)come_null_check(self, "06str.c", 228))->sline;
    __freed_obj__ = 0;
    return __result64__;
    __freed_obj__ = 0;
}

char* sCharNode_sname(struct sCharNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value89;
char* __result65__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value89, 0, sizeof(void*));
    __result65__ = __result_obj__ = ((char*)(right_value89=__builtin_string(((struct sCharNode*)come_null_check(self, "06str.c", 233))->sname)));
    __freed_obj__ = 0;
    return __result65__;
    __freed_obj__ = 0;
}

struct sWCharNode* sWCharNode_initialize(struct sWCharNode* self, unsigned int value, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value90;
char* __dec_obj45;
struct sWCharNode* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value90, 0, sizeof(void*));
    ((struct sWCharNode*)come_null_check(self, "06str.c", 245))->value=value;
    __freed_obj__ = 0;
    ((struct sWCharNode*)come_null_check(self, "06str.c", 247))->sline=((struct sInfo*)come_null_check(info, "06str.c", 247))->sline;
    __freed_obj__ = 0;
    __dec_obj45=((struct sWCharNode*)come_null_check(self, "06str.c", 248))->sname;
    ((struct sWCharNode*)come_null_check(self, "06str.c", 248))->sname=(char*)come_increment_ref_count(((char*)(right_value90=__builtin_string(((struct sInfo*)come_null_check(info, "06str.c", 248))->sname))));
    if(__dec_obj45) { __dec_obj45 = come_decrement_ref_count(__dec_obj45, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value90);
    if(right_value90 && right_value90 != __result_obj__ && !__freed_obj__) { right_value90 = come_decrement_ref_count(right_value90, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value90;
    __freed_obj__ = 0;
    __result66__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sWCharNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result66__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sWCharNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

_Bool sWCharNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result67__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result67__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result67__;
    __freed_obj__ = 0;
}

char* sWCharNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value91;
char* __result68__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value91, 0, sizeof(void*));
    __result68__ = __result_obj__ = ((char*)(right_value91=__builtin_string("sWCharNode")));
    __freed_obj__ = 0;
    return __result68__;
    __freed_obj__ = 0;
}

_Bool sWCharNode_compile(struct sWCharNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value92;
struct CVALUE* come_value_55;
void* right_value93;
char* __dec_obj46;
void* right_value94;
void* right_value95;
struct sType* __dec_obj47;
_Bool __result69__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value92, 0, sizeof(void*));
memset(&come_value_55, 0, sizeof(struct CVALUE*));
memset(&right_value93, 0, sizeof(void*));
memset(&right_value94, 0, sizeof(void*));
memset(&right_value95, 0, sizeof(void*));
    come_value_55=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value92=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 265))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value92);
    if(right_value92 && right_value92 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value92, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value92;
    __freed_obj__ = 0;
    __dec_obj46=((struct CVALUE*)come_null_check(come_value_55, "06str.c", 267))->c_value;
    ((struct CVALUE*)come_null_check(come_value_55, "06str.c", 267))->c_value=(char*)come_increment_ref_count(((char*)(right_value93=xsprintf("L'%lc'",((struct sWCharNode*)come_null_check(self, "06str.c", 267))->value))));
    if(__dec_obj46) { __dec_obj46 = come_decrement_ref_count(__dec_obj46, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value93);
    if(right_value93 && right_value93 != __result_obj__ && !__freed_obj__) { right_value93 = come_decrement_ref_count(right_value93, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value93;
    __freed_obj__ = 0;
    __dec_obj47=((struct CVALUE*)come_null_check(come_value_55, "06str.c", 268))->type;
    ((struct CVALUE*)come_null_check(come_value_55, "06str.c", 268))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value95=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value94=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 268)))),"wchar_t",(_Bool)0,info))));
    if(__dec_obj47) { come_call_finalizer(sType_finalize,__dec_obj47, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value94);
    if(right_value94 && right_value94 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value94, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value94;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value95);
    if(right_value95 && right_value95 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value95, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value95;
    __freed_obj__ = 0;
    ((struct CVALUE*)come_null_check(come_value_55, "06str.c", 269))->var=((void*)0);
    __freed_obj__ = 0;
    list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 271))->stack, "06str.c", 271)),(struct CVALUE*)come_increment_ref_count(come_value_55));
    __freed_obj__ = 0;
    add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_55, "06str.c", 273))->c_value);
    __freed_obj__ = 0;
    __result69__ = (_Bool)1;
    if(come_value_55 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_55, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result69__;
    __freed_obj__ = 0;
    if(come_value_55 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_55, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sWCharNode_sline(struct sWCharNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result70__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result70__ = ((struct sWCharNode*)come_null_check(self, "06str.c", 280))->sline;
    __freed_obj__ = 0;
    return __result70__;
    __freed_obj__ = 0;
}

char* sWCharNode_sname(struct sWCharNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value96;
char* __result71__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value96, 0, sizeof(void*));
    __result71__ = __result_obj__ = ((char*)(right_value96=__builtin_string(((struct sWCharNode*)come_null_check(self, "06str.c", 285))->sname)));
    __freed_obj__ = 0;
    return __result71__;
    __freed_obj__ = 0;
}

struct sWStringNode* sWStringNode_initialize(struct sWStringNode* self, unsigned int* value, int sline, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int* __dec_obj48;
void* right_value97;
char* __dec_obj49;
struct sWStringNode* __result72__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value97, 0, sizeof(void*));
    __dec_obj48=((struct sWStringNode*)come_null_check(self, "06str.c", 297))->value;
    ((struct sWStringNode*)come_null_check(self, "06str.c", 297))->value=(unsigned int*)come_increment_ref_count(value);
    if(__dec_obj48) { __dec_obj48 = come_decrement_ref_count(__dec_obj48, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = 0;
    ((struct sWStringNode*)come_null_check(self, "06str.c", 299))->sline=sline;
    __freed_obj__ = 0;
    __dec_obj49=((struct sWStringNode*)come_null_check(self, "06str.c", 300))->sname;
    ((struct sWStringNode*)come_null_check(self, "06str.c", 300))->sname=(char*)come_increment_ref_count(((char*)(right_value97=__builtin_string(((struct sInfo*)come_null_check(info, "06str.c", 300))->sname))));
    if(__dec_obj49) { __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value97);
    if(right_value97 && right_value97 != __result_obj__ && !__freed_obj__) { right_value97 = come_decrement_ref_count(right_value97, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value97;
    __freed_obj__ = 0;
    __result72__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sWStringNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(value && !__freed_obj__) { value = come_decrement_ref_count(value, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result72__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sWStringNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(value && !__freed_obj__) { value = come_decrement_ref_count(value, (void*)0, (void*)0, 0, 1, 0); }
}

_Bool sWStringNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result73__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result73__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result73__;
    __freed_obj__ = 0;
}

char* sWStringNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value98;
char* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value98, 0, sizeof(void*));
    __result74__ = __result_obj__ = ((char*)(right_value98=__builtin_string("sWStringNode")));
    __freed_obj__ = 0;
    return __result74__;
    __freed_obj__ = 0;
}

_Bool sWStringNode_compile(struct sWStringNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value99;
struct CVALUE* come_value_56;
void* right_value100;
char* __dec_obj50;
void* right_value101;
void* right_value102;
struct sType* __dec_obj51;
_Bool __result75__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value99, 0, sizeof(void*));
memset(&come_value_56, 0, sizeof(struct CVALUE*));
memset(&right_value100, 0, sizeof(void*));
memset(&right_value101, 0, sizeof(void*));
memset(&right_value102, 0, sizeof(void*));
    come_value_56=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value99=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 317))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value99);
    if(right_value99 && right_value99 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value99, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value99;
    __freed_obj__ = 0;
    __dec_obj50=((struct CVALUE*)come_null_check(come_value_56, "06str.c", 319))->c_value;
    ((struct CVALUE*)come_null_check(come_value_56, "06str.c", 319))->c_value=(char*)come_increment_ref_count(((char*)(right_value100=xsprintf("L'%ls'",((struct sWStringNode*)come_null_check(self, "06str.c", 319))->value))));
    if(__dec_obj50) { __dec_obj50 = come_decrement_ref_count(__dec_obj50, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value100);
    if(right_value100 && right_value100 != __result_obj__ && !__freed_obj__) { right_value100 = come_decrement_ref_count(right_value100, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value100;
    __freed_obj__ = 0;
    __dec_obj51=((struct CVALUE*)come_null_check(come_value_56, "06str.c", 320))->type;
    ((struct CVALUE*)come_null_check(come_value_56, "06str.c", 320))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value102=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value101=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 320)))),"wchar_t*",(_Bool)0,info))));
    if(__dec_obj51) { come_call_finalizer(sType_finalize,__dec_obj51, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value101);
    if(right_value101 && right_value101 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value101, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value101;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value102);
    if(right_value102 && right_value102 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value102, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value102;
    __freed_obj__ = 0;
    ((struct CVALUE*)come_null_check(come_value_56, "06str.c", 321))->var=((void*)0);
    __freed_obj__ = 0;
    list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 323))->stack, "06str.c", 323)),(struct CVALUE*)come_increment_ref_count(come_value_56));
    __freed_obj__ = 0;
    add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_56, "06str.c", 325))->c_value);
    __freed_obj__ = 0;
    __result75__ = (_Bool)1;
    if(come_value_56 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_56, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result75__;
    __freed_obj__ = 0;
    if(come_value_56 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_56, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sWStringNode_sline(struct sWStringNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result76__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result76__ = ((struct sWStringNode*)come_null_check(self, "06str.c", 332))->sline;
    __freed_obj__ = 0;
    return __result76__;
    __freed_obj__ = 0;
}

char* sWStringNode_sname(struct sWStringNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value103;
char* __result77__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value103, 0, sizeof(void*));
    __result77__ = __result_obj__ = ((char*)(right_value103=__builtin_string(((struct sWStringNode*)come_null_check(self, "06str.c", 337))->sname)));
    __freed_obj__ = 0;
    return __result77__;
    __freed_obj__ = 0;
}

struct sRegexNode* sRegexNode_initialize(struct sRegexNode* self, char* str, _Bool global, _Bool ignore_case, int sline, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value104;
char* __dec_obj52;
void* right_value105;
char* __dec_obj53;
struct sRegexNode* __result78__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value104, 0, sizeof(void*));
memset(&right_value105, 0, sizeof(void*));
    __dec_obj52=((struct sRegexNode*)come_null_check(self, "06str.c", 352))->str;
    ((struct sRegexNode*)come_null_check(self, "06str.c", 352))->str=(char*)come_increment_ref_count(((char*)(right_value104=__builtin_string(str))));
    if(__dec_obj52) { __dec_obj52 = come_decrement_ref_count(__dec_obj52, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value104);
    if(right_value104 && right_value104 != __result_obj__ && !__freed_obj__) { right_value104 = come_decrement_ref_count(right_value104, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value104;
    __freed_obj__ = 0;
    ((struct sRegexNode*)come_null_check(self, "06str.c", 353))->global=global;
    __freed_obj__ = 0;
    ((struct sRegexNode*)come_null_check(self, "06str.c", 354))->ignore_case=ignore_case;
    __freed_obj__ = 0;
    ((struct sRegexNode*)come_null_check(self, "06str.c", 356))->sline=sline;
    __freed_obj__ = 0;
    __dec_obj53=((struct sRegexNode*)come_null_check(self, "06str.c", 357))->sname;
    ((struct sRegexNode*)come_null_check(self, "06str.c", 357))->sname=(char*)come_increment_ref_count(((char*)(right_value105=__builtin_string(((struct sInfo*)come_null_check(info, "06str.c", 357))->sname))));
    if(__dec_obj53) { __dec_obj53 = come_decrement_ref_count(__dec_obj53, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value105);
    if(right_value105 && right_value105 != __result_obj__ && !__freed_obj__) { right_value105 = come_decrement_ref_count(right_value105, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value105;
    __freed_obj__ = 0;
    __result78__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sRegexNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(str && !__freed_obj__) { str = come_decrement_ref_count(str, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result78__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sRegexNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(str && !__freed_obj__) { str = come_decrement_ref_count(str, (void*)0, (void*)0, 0, 1, 0); }
}

_Bool sRegexNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result79__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result79__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result79__;
    __freed_obj__ = 0;
}

char* sRegexNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value106;
char* __result80__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value106, 0, sizeof(void*));
    __result80__ = __result_obj__ = ((char*)(right_value106=__builtin_string("sRegexNode")));
    __freed_obj__ = 0;
    return __result80__;
    __freed_obj__ = 0;
}

_Bool sRegexNode_compile(struct sRegexNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value107;
struct CVALUE* come_value_57;
void* right_value108;
void* right_value109;
void* right_value110;
void* right_value111;
void* right_value112;
char* __dec_obj54;
void* right_value113;
void* right_value114;
struct sType* __dec_obj55;
void* right_value115;
char* __dec_obj56;
_Bool __result81__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value107, 0, sizeof(void*));
memset(&come_value_57, 0, sizeof(struct CVALUE*));
memset(&right_value108, 0, sizeof(void*));
memset(&right_value109, 0, sizeof(void*));
memset(&right_value110, 0, sizeof(void*));
memset(&right_value111, 0, sizeof(void*));
memset(&right_value112, 0, sizeof(void*));
memset(&right_value113, 0, sizeof(void*));
memset(&right_value114, 0, sizeof(void*));
memset(&right_value115, 0, sizeof(void*));
    come_value_57=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value107=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 374))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value107);
    if(right_value107 && right_value107 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value107, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value107;
    __freed_obj__ = 0;
    __dec_obj54=((struct CVALUE*)come_null_check(come_value_57, "06str.c", 376))->c_value;
    ((struct CVALUE*)come_null_check(come_value_57, "06str.c", 376))->c_value=(char*)come_increment_ref_count(((char*)(right_value112=xsprintf("charp_to_regex(\"%s\", %s, 0, %s, 0, 0, 0, 0, 0)",((struct sRegexNode*)come_null_check(self, "06str.c", 376))->str,((struct sRegexNode*)come_null_check(self, "06str.c", 376))->ignore_case?((char*)(right_value108=__builtin_string("1"))):((char*)(right_value109=__builtin_string("0"))),((struct sRegexNode*)come_null_check(self, "06str.c", 376))->global?((char*)(right_value110=__builtin_string("1"))):((char*)(right_value111=__builtin_string("0")))))));
    if(__dec_obj54) { __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value108);
    if(right_value108 && right_value108 != __result_obj__ && !__freed_obj__) { right_value108 = come_decrement_ref_count(right_value108, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value108;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value109);
    if(right_value109 && right_value109 != __result_obj__ && !__freed_obj__) { right_value109 = come_decrement_ref_count(right_value109, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value109;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value110);
    if(right_value110 && right_value110 != __result_obj__ && !__freed_obj__) { right_value110 = come_decrement_ref_count(right_value110, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value110;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value111);
    if(right_value111 && right_value111 != __result_obj__ && !__freed_obj__) { right_value111 = come_decrement_ref_count(right_value111, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value111;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value112);
    if(right_value112 && right_value112 != __result_obj__ && !__freed_obj__) { right_value112 = come_decrement_ref_count(right_value112, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[5] = right_value112;
    __freed_obj__ = 0;
    __dec_obj55=((struct CVALUE*)come_null_check(come_value_57, "06str.c", 377))->type;
    ((struct CVALUE*)come_null_check(come_value_57, "06str.c", 377))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value114=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value113=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 377)))),"come_regex",(_Bool)0,info))));
    if(__dec_obj55) { come_call_finalizer(sType_finalize,__dec_obj55, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value113);
    if(right_value113 && right_value113 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value113, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[6] = right_value113;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value114);
    if(right_value114 && right_value114 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value114, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[7] = right_value114;
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_57, "06str.c", 378))->type, "06str.c", 378))->mPointerNum=1;
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_57, "06str.c", 379))->type, "06str.c", 379))->mHeap=(_Bool)1;
    __freed_obj__ = 0;
    ((struct CVALUE*)come_null_check(come_value_57, "06str.c", 380))->var=((void*)0);
    __freed_obj__ = 0;
    list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 382))->stack, "06str.c", 382)),(struct CVALUE*)come_increment_ref_count(come_value_57));
    __freed_obj__ = 0;
    add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_57, "06str.c", 384))->c_value);
    __freed_obj__ = 0;
    __dec_obj56=((struct CVALUE*)come_null_check(come_value_57, "06str.c", 386))->c_value;
    ((struct CVALUE*)come_null_check(come_value_57, "06str.c", 386))->c_value=(char*)come_increment_ref_count(((char*)(right_value115=append_object_to_right_values(((struct CVALUE*)come_null_check(come_value_57, "06str.c", 386))->c_value,(struct sType*)come_increment_ref_count(((struct CVALUE*)come_null_check(come_value_57, "06str.c", 386))->type),info))));
    if(__dec_obj56) { __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value115);
    if(right_value115 && right_value115 != __result_obj__ && !__freed_obj__) { right_value115 = come_decrement_ref_count(right_value115, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[8] = right_value115;
    __freed_obj__ = 0;
    __result81__ = (_Bool)1;
    if(come_value_57 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_57, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result81__;
    __freed_obj__ = 0;
    if(come_value_57 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_57, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sRegexNode_sline(struct sRegexNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result82__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result82__ = ((struct sRegexNode*)come_null_check(self, "06str.c", 393))->sline;
    __freed_obj__ = 0;
    return __result82__;
    __freed_obj__ = 0;
}

char* sRegexNode_sname(struct sRegexNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value116;
char* __result83__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value116, 0, sizeof(void*));
    __result83__ = __result_obj__ = ((char*)(right_value116=__builtin_string(((struct sRegexNode*)come_null_check(self, "06str.c", 398))->sname)));
    __freed_obj__ = 0;
    return __result83__;
    __freed_obj__ = 0;
}

struct sListNode* sListNode_initialize(struct sListNode* self, struct list$1sNodeph* list_elements, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1sNodeph* __dec_obj57;
void* right_value117;
char* __dec_obj58;
struct sListNode* __result84__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value117, 0, sizeof(void*));
    __dec_obj57=((struct sListNode*)come_null_check(self, "06str.c", 410))->list_elements;
    ((struct sListNode*)come_null_check(self, "06str.c", 410))->list_elements=(struct list$1sNodeph*)come_increment_ref_count(list_elements);
    if(__dec_obj57) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj57, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    ((struct sListNode*)come_null_check(self, "06str.c", 412))->sline=((struct sInfo*)come_null_check(info, "06str.c", 412))->sline;
    __freed_obj__ = 0;
    __dec_obj58=((struct sListNode*)come_null_check(self, "06str.c", 413))->sname;
    ((struct sListNode*)come_null_check(self, "06str.c", 413))->sname=(char*)come_increment_ref_count(((char*)(right_value117=__builtin_string(((struct sInfo*)come_null_check(info, "06str.c", 413))->sname))));
    if(__dec_obj58) { __dec_obj58 = come_decrement_ref_count(__dec_obj58, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value117);
    if(right_value117 && right_value117 != __result_obj__ && !__freed_obj__) { right_value117 = come_decrement_ref_count(right_value117, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value117;
    __freed_obj__ = 0;
    __result84__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sListNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(list_elements && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,list_elements, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result84__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sListNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(list_elements && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,list_elements, (void*)0, (void*)0, 0, 0, 1, 0); }
}

_Bool sListNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result85__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result85__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result85__;
    __freed_obj__ = 0;
}

char* sListNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value118;
char* __result86__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value118, 0, sizeof(void*));
    __result86__ = __result_obj__ = ((char*)(right_value118=__builtin_string("sListNode")));
    __freed_obj__ = 0;
    return __result86__;
    __freed_obj__ = 0;
}

_Bool sListNode_compile(struct sListNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1sNodeph* list_elements_58;
void* right_value119;
void* right_value120;
struct list$1CVALUEph* params_61;
struct sType* list_element_type_62;
struct list$1sNodeph* o2_saved_63;
struct sNode* it_64;
_Bool _for_condtionalA2;
_Bool _if_conditional138;
_Bool __result88__;
void* right_value121;
struct CVALUE* come_value_65;
void* right_value122;
struct sType* __dec_obj59;
void* right_value123;
struct sType* type_values_66;
void* right_value127;
static int list_value_num_70=0;
void* right_value128;
char* var_name_71;
void* right_value129;
struct sVar* var__72;
void* right_value130;
void* right_value131;
void* right_value132;
struct buffer* source_74;
int i_75;
struct list$1CVALUEph* o2_saved_76;
struct CVALUE* it_79;
_Bool _for_condtionalA3;
_Bool _if_conditional147;
void* right_value137;
void* right_value138;
void* right_value139;
void* right_value140;
void* right_value141;
void* right_value142;
void* right_value143;
struct sType* list_type_86;
void* right_value147;
void* right_value148;
struct sType* obj_type_90;
char* fun_name_91;
void* right_value149;
void* right_value150;
void* right_value151;
char* generics_fun_name_92;
void* right_value152;
struct sFun* fun_93;
_Bool _if_conditional154;
void* right_value153;
void* right_value154;
char* __dec_obj67;
void* right_value155;
_Bool _if_conditional155;
_Bool __result106__;
void* right_value156;
struct sType* result_type_94;
struct sType* type_95;
void* right_value157;
struct CVALUE* obj_value_96;
void* right_value158;
void* right_value159;
struct buffer* num_string_97;
void* right_value160;
struct sType* type2_98;
void* right_value161;
char* type_name_99;
void* right_value162;
void* right_value163;
char* __dec_obj68;
void* right_value164;
struct sType* type3_100;
void* right_value165;
struct sType* __dec_obj69;
void* right_value166;
char* __dec_obj70;
void* right_value167;
void* right_value168;
struct list$1CVALUEph* come_params_101;
void* right_value173;
_Bool _if_conditional161;
_Bool _if_conditional162;
_Bool _if_conditional163;
char* __dec_obj72;
_Bool _if_conditional164;
void* right_value174;
char* __dec_obj73;
_Bool _if_conditional165;
void* right_value175;
char* __dec_obj74;
void* right_value176;
char* __dec_obj75;
_Bool _if_conditional166;
void* right_value177;
char* __dec_obj76;
void* right_value178;
struct CVALUE* come_value2_106;
void* right_value179;
char* __dec_obj77;
struct sType* __dec_obj78;
void* right_value180;
struct CVALUE* come_value3_107;
void* right_value181;
char* __dec_obj79;
struct sType* __dec_obj80;
void* right_value182;
void* right_value183;
struct buffer* buf_108;
int j_109;
struct list$1CVALUEph* o2_saved_110;
struct CVALUE* it_111;
_Bool _for_condtionalA4;
_Bool _if_conditional167;
void* right_value184;
struct CVALUE* come_value4_112;
void* right_value185;
char* __dec_obj81;
_Bool _if_conditional168;
void* right_value186;
void* right_value187;
char* __dec_obj82;
void* right_value188;
struct sType* __dec_obj83;
void* right_value189;
_Bool __result113__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&list_elements_58, 0, sizeof(struct list$1sNodeph*));
memset(&right_value119, 0, sizeof(void*));
memset(&right_value120, 0, sizeof(void*));
memset(&params_61, 0, sizeof(struct list$1CVALUEph*));
memset(&list_element_type_62, 0, sizeof(struct sType*));
memset(&o2_saved_63, 0, sizeof(struct list$1sNodeph*));
memset(&it_64, 0, sizeof(struct sNode*));
memset(&right_value121, 0, sizeof(void*));
memset(&come_value_65, 0, sizeof(struct CVALUE*));
memset(&right_value122, 0, sizeof(void*));
memset(&right_value123, 0, sizeof(void*));
memset(&type_values_66, 0, sizeof(struct sType*));
memset(&right_value127, 0, sizeof(void*));
memset(&right_value128, 0, sizeof(void*));
memset(&var_name_71, 0, sizeof(char*));
memset(&right_value129, 0, sizeof(void*));
memset(&var__72, 0, sizeof(struct sVar*));
memset(&right_value130, 0, sizeof(void*));
memset(&right_value131, 0, sizeof(void*));
memset(&right_value132, 0, sizeof(void*));
memset(&source_74, 0, sizeof(struct buffer*));
memset(&i_75, 0, sizeof(int));
memset(&o2_saved_76, 0, sizeof(struct list$1CVALUEph*));
memset(&it_79, 0, sizeof(struct CVALUE*));
memset(&right_value137, 0, sizeof(void*));
memset(&right_value138, 0, sizeof(void*));
memset(&right_value139, 0, sizeof(void*));
memset(&right_value140, 0, sizeof(void*));
memset(&right_value141, 0, sizeof(void*));
memset(&right_value142, 0, sizeof(void*));
memset(&right_value143, 0, sizeof(void*));
memset(&list_type_86, 0, sizeof(struct sType*));
memset(&right_value147, 0, sizeof(void*));
memset(&right_value148, 0, sizeof(void*));
memset(&obj_type_90, 0, sizeof(struct sType*));
memset(&fun_name_91, 0, sizeof(char*));
memset(&right_value149, 0, sizeof(void*));
memset(&right_value150, 0, sizeof(void*));
memset(&right_value151, 0, sizeof(void*));
memset(&generics_fun_name_92, 0, sizeof(char*));
memset(&right_value152, 0, sizeof(void*));
memset(&fun_93, 0, sizeof(struct sFun*));
memset(&right_value153, 0, sizeof(void*));
memset(&right_value154, 0, sizeof(void*));
memset(&right_value155, 0, sizeof(void*));
memset(&right_value156, 0, sizeof(void*));
memset(&result_type_94, 0, sizeof(struct sType*));
memset(&type_95, 0, sizeof(struct sType*));
memset(&right_value157, 0, sizeof(void*));
memset(&obj_value_96, 0, sizeof(struct CVALUE*));
memset(&right_value158, 0, sizeof(void*));
memset(&right_value159, 0, sizeof(void*));
memset(&num_string_97, 0, sizeof(struct buffer*));
memset(&right_value160, 0, sizeof(void*));
memset(&type2_98, 0, sizeof(struct sType*));
memset(&right_value161, 0, sizeof(void*));
memset(&type_name_99, 0, sizeof(char*));
memset(&right_value162, 0, sizeof(void*));
memset(&right_value163, 0, sizeof(void*));
memset(&right_value164, 0, sizeof(void*));
memset(&type3_100, 0, sizeof(struct sType*));
memset(&right_value165, 0, sizeof(void*));
memset(&right_value166, 0, sizeof(void*));
memset(&right_value167, 0, sizeof(void*));
memset(&right_value168, 0, sizeof(void*));
memset(&come_params_101, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value173, 0, sizeof(void*));
memset(&right_value174, 0, sizeof(void*));
memset(&right_value175, 0, sizeof(void*));
memset(&right_value176, 0, sizeof(void*));
memset(&right_value177, 0, sizeof(void*));
memset(&right_value178, 0, sizeof(void*));
memset(&come_value2_106, 0, sizeof(struct CVALUE*));
memset(&right_value179, 0, sizeof(void*));
memset(&right_value180, 0, sizeof(void*));
memset(&come_value3_107, 0, sizeof(struct CVALUE*));
memset(&right_value181, 0, sizeof(void*));
memset(&right_value182, 0, sizeof(void*));
memset(&right_value183, 0, sizeof(void*));
memset(&buf_108, 0, sizeof(struct buffer*));
memset(&j_109, 0, sizeof(int));
memset(&o2_saved_110, 0, sizeof(struct list$1CVALUEph*));
memset(&it_111, 0, sizeof(struct CVALUE*));
memset(&right_value184, 0, sizeof(void*));
memset(&come_value4_112, 0, sizeof(struct CVALUE*));
memset(&right_value185, 0, sizeof(void*));
memset(&right_value186, 0, sizeof(void*));
memset(&right_value187, 0, sizeof(void*));
memset(&right_value188, 0, sizeof(void*));
memset(&right_value189, 0, sizeof(void*));
    list_elements_58=((struct sListNode*)come_null_check(self, "06str.c", 430))->list_elements;
    __freed_obj__ = 0;
    params_61=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value120=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value119=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 432))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value119);
    if(right_value119 && right_value119 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value119, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value119;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value120);
    if(right_value120 && right_value120 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value120, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value120;
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    for(
    o2_saved_63=(list_elements_58),it_64=list$1sNodeph_begin(((struct list$1sNodeph*)come_null_check((o2_saved_63), "06str.c", 448))) ,    __freed_obj__ = 0, 
    0;    _for_condtionalA2=    !list$1sNodeph_end(((struct list$1sNodeph*)come_null_check((o2_saved_63), "06str.c", 448))) ,    __freed_obj__ = 0, 
    _for_condtionalA2;    it_64=list$1sNodeph_next(((struct list$1sNodeph*)come_null_check((o2_saved_63), "06str.c", 448))) ,    __freed_obj__ = 0, 
    0    ){
        if(_if_conditional138=!((struct sNode*)come_null_check(it_64, "06str.c", 440))->compile(((struct sNode*)come_null_check(it_64, "06str.c", 440))->_protocol_obj,info),        __freed_obj__ = 0, 
        _if_conditional138) {
            __result88__ = (_Bool)0;
            if(params_61 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,params_61, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(list_element_type_62 && !__freed_obj__) { come_call_finalizer(sType_finalize,list_element_type_62, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
            return __result88__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        come_value_65=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value121=get_value_from_stack(-1,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value121);
        if(right_value121 && right_value121 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value121, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value121;
        __freed_obj__ = 0;
        dec_stack_ptr(1,info);
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(params_61, "06str.c", 443)),(struct CVALUE*)come_increment_ref_count(come_value_65));
        __freed_obj__ = 0;
        __dec_obj59=list_element_type_62;
        list_element_type_62=(struct sType*)come_increment_ref_count(((struct sType*)(right_value122=sType_clone(((struct CVALUE*)come_null_check(come_value_65, "06str.c", 445))->type))));
        if(__dec_obj59) { come_call_finalizer(sType_finalize,__dec_obj59, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value122);
        if(right_value122 && right_value122 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value122, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value122;
        __freed_obj__ = 0;
        if(come_value_65 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_65, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    type_values_66=(struct sType*)come_increment_ref_count(((struct sType*)(right_value123=sType_clone(list_element_type_62))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value123);
    if(right_value123 && right_value123 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value123, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value123;
    __freed_obj__ = 0;
    list$1sNodeph_push_back(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(type_values_66, "06str.c", 449))->mArrayNum, "06str.c", 449)),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value127=create_int_node(list$1CVALUEph_length(((struct list$1CVALUEph*)come_null_check(params_61, "06str.c", 449))),info)))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value127);
    if(right_value127 && right_value127 != __result_obj__ && !__freed_obj__) { right_value127 = come_decrement_ref_count(right_value127, ((struct sNode*)right_value127)->finalize, ((struct sNode*)right_value127)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[3] = right_value127;
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(type_values_66, "06str.c", 450))->mHeap=(_Bool)0;
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    var_name_71=(char*)come_increment_ref_count(((char*)(right_value128=xsprintf("__list_values%d__",++list_value_num_70))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value128);
    if(right_value128 && right_value128 != __result_obj__ && !__freed_obj__) { right_value128 = come_decrement_ref_count(right_value128, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value128;
    __freed_obj__ = 0;
    add_variable_to_table(var_name_71,(struct sType*)come_increment_ref_count(((struct sType*)(right_value129=sType_clone(type_values_66)))),info);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value129);
    if(right_value129 && right_value129 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value129, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[5] = right_value129;
    __freed_obj__ = 0;
    var__72=get_variable_from_table(((struct sInfo*)come_null_check(info, "06str.c", 457))->lv_table,var_name_71);
    __freed_obj__ = 0;
    come_clear_stackframe();
    add_come_code_at_function_head(info,"%s;\n",optional$2charphbool_value((come_push_stackframe("06str.c", 459),((struct optional$2charphbool*)(right_value130=make_define_var(type_values_66,((struct sVar*)come_null_check(var__72, "06str.c", 459))->mCValueName,(_Bool)0,info))))));
    come_pop_stackframe();
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value130);
    if(right_value130 && right_value130 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value130, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[6] = right_value130;
    __freed_obj__ = 0;
    source_74=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value132=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value131=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 461))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value131);
    if(right_value131 && right_value131 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value131, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[7] = right_value131;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value132);
    if(right_value132 && right_value132 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value132, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[8] = right_value132;
    __freed_obj__ = 0;
    buffer_append_str(((struct buffer*)come_null_check(source_74, "06str.c", 463)),"{");
    __freed_obj__ = 0;
    i_75=0;
    __freed_obj__ = 0;
    for(
    o2_saved_76=(struct list$1CVALUEph*)come_increment_ref_count((params_61)),it_79=list$1CVALUEph_begin(((struct list$1CVALUEph*)come_null_check((o2_saved_76), "06str.c", 476))) ,    __freed_obj__ = 0, 
    0;    _for_condtionalA3=    !list$1CVALUEph_end(((struct list$1CVALUEph*)come_null_check((o2_saved_76), "06str.c", 476))) ,    __freed_obj__ = 0, 
    _for_condtionalA3;    it_79=list$1CVALUEph_next(((struct list$1CVALUEph*)come_null_check((o2_saved_76), "06str.c", 476))) ,    __freed_obj__ = 0, 
    0    ){
        if(_if_conditional147=((struct sType*)come_null_check(list_element_type_62, "06str.c", 473))->mHeap,        __freed_obj__ = 0, 
        _if_conditional147) {
            come_clear_stackframe();
            buffer_append_str(((struct buffer*)come_null_check(source_74, "06str.c", 468)),((char*)(right_value138=xsprintf("%s[%d]=come_increment_ref_count(%s);\n",((struct sVar*)come_null_check(var__72, "06str.c", 468))->mCValueName,i_75,((struct CVALUE*)come_null_check(optional$2CVALUEphbool_value((come_push_stackframe("06str.c", 468),((struct optional$2CVALUEphbool*)(right_value137=list$1CVALUEphp_operator_load_element(params_61,i_75))))), "06str.c", 468))->c_value))));
            come_pop_stackframe();
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value137);
            if(right_value137 && right_value137 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2CVALUEphboolp_finalize,right_value137, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value137;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value138);
            if(right_value138 && right_value138 != __result_obj__ && !__freed_obj__) { right_value138 = come_decrement_ref_count(right_value138, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value138;
            __freed_obj__ = 0;
        }
        else {
            come_clear_stackframe();
            buffer_append_str(((struct buffer*)come_null_check(source_74, "06str.c", 471)),((char*)(right_value140=xsprintf("%s[%d]=%s;\n",((struct sVar*)come_null_check(var__72, "06str.c", 471))->mCValueName,i_75,((struct CVALUE*)come_null_check(optional$2CVALUEphbool_value((come_push_stackframe("06str.c", 471),((struct optional$2CVALUEphbool*)(right_value139=list$1CVALUEphp_operator_load_element(params_61,i_75))))), "06str.c", 471))->c_value))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value139);
            if(right_value139 && right_value139 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2CVALUEphboolp_finalize,right_value139, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value139;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value140);
            if(right_value140 && right_value140 != __result_obj__ && !__freed_obj__) { right_value140 = come_decrement_ref_count(right_value140, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value140;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        i_75++;
        __freed_obj__ = 0;
    }
    if(o2_saved_76 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,o2_saved_76, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    buffer_append_str(((struct buffer*)come_null_check(source_74, "06str.c", 476)),"}");
    __freed_obj__ = 0;
    add_come_code(info,"%s",((char*)(right_value141=buffer_to_string(((struct buffer*)come_null_check(source_74, "06str.c", 478))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 9, right_value141);
    if(right_value141 && right_value141 != __result_obj__ && !__freed_obj__) { right_value141 = come_decrement_ref_count(right_value141, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[9] = right_value141;
    __freed_obj__ = 0;
    list_type_86=(struct sType*)come_increment_ref_count(((struct sType*)(right_value143=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value142=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 480)))),"list",(_Bool)0,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 10, right_value142);
    if(right_value142 && right_value142 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value142, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[10] = right_value142;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 11, right_value143);
    if(right_value143 && right_value143 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value143, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[11] = right_value143;
    __freed_obj__ = 0;
    list$1sTypeph_push_back(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(list_type_86, "06str.c", 481))->mGenericsTypes, "06str.c", 481)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value147=sType_clone(list_element_type_62)))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 12, right_value147);
    if(right_value147 && right_value147 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value147, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[12] = right_value147;
    __freed_obj__ = 0;
    obj_type_90=(struct sType*)come_increment_ref_count(((struct sType*)(right_value148=sType_clone(list_type_86))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 13, right_value148);
    if(right_value148 && right_value148 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value148, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[13] = right_value148;
    __freed_obj__ = 0;
    fun_name_91="initialize_with_values";
    __freed_obj__ = 0;
    generics_fun_name_92=(char*)come_increment_ref_count(((char*)(right_value151=string_to_string(((char*)come_null_check(((char*)(right_value150=make_generics_function(obj_type_90,(char*)come_increment_ref_count(((char*)(right_value149=__builtin_string(fun_name_91)))),info))), "06str.c", 486))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 14, right_value149);
    if(right_value149 && right_value149 != __result_obj__ && !__freed_obj__) { right_value149 = come_decrement_ref_count(right_value149, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[14] = right_value149;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 15, right_value150);
    if(right_value150 && right_value150 != __result_obj__ && !__freed_obj__) { right_value150 = come_decrement_ref_count(right_value150, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[15] = right_value150;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 16, right_value151);
    if(right_value151 && right_value151 != __result_obj__ && !__freed_obj__) { right_value151 = come_decrement_ref_count(right_value151, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[16] = right_value151;
    __freed_obj__ = 0;
    fun_93=((struct sFun*)(right_value152=map$2charphsFunph_at(((struct map$2charphsFunph*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 488))->funcs, "06str.c", 488)),generics_fun_name_92,((void*)0))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 17, right_value152);
    if(right_value152 && right_value152 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value152, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[17] = right_value152;
    __freed_obj__ = 0;
    if(_if_conditional154=fun_93==((void*)0),    __freed_obj__ = 0, 
    _if_conditional154) {
        __dec_obj67=generics_fun_name_92;
        generics_fun_name_92=(char*)come_increment_ref_count(((char*)(right_value154=create_method_name(obj_type_90,(_Bool)0,((char*)(right_value153=__builtin_string(fun_name_91))),info))));
        if(__dec_obj67) { __dec_obj67 = come_decrement_ref_count(__dec_obj67, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value153);
        if(right_value153 && right_value153 != __result_obj__ && !__freed_obj__) { right_value153 = come_decrement_ref_count(right_value153, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value153;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value154);
        if(right_value154 && right_value154 != __result_obj__ && !__freed_obj__) { right_value154 = come_decrement_ref_count(right_value154, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value154;
        __freed_obj__ = 0;
        fun_93=((struct sFun*)(right_value155=map$2charphsFunph_at(((struct map$2charphsFunph*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 493))->funcs, "06str.c", 493)),generics_fun_name_92,((void*)0))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value155);
        if(right_value155 && right_value155 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value155, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value155;
        __freed_obj__ = 0;
        if(_if_conditional155=fun_93==((void*)0),        __freed_obj__ = 0, 
        _if_conditional155) {
            err_msg(info,"function not found(%s) at method(%s)(1)\n",generics_fun_name_92,((struct sFun*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 496))->come_fun, "06str.c", 496))->mName);
            __freed_obj__ = 0;
            __result106__ = (_Bool)1;
            if(params_61 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,params_61, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(list_element_type_62 && !__freed_obj__) { come_call_finalizer(sType_finalize,list_element_type_62, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(type_values_66 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_values_66, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(var_name_71 && !__freed_obj__) { var_name_71 = come_decrement_ref_count(var_name_71, (void*)0, (void*)0, 0, 0, 0); }
            if(source_74 && !__freed_obj__) { come_call_finalizer(buffer_finalize,source_74, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(list_type_86 && !__freed_obj__) { come_call_finalizer(sType_finalize,list_type_86, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(obj_type_90 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_90, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(generics_fun_name_92 && !__freed_obj__) { generics_fun_name_92 = come_decrement_ref_count(generics_fun_name_92, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
            return __result106__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    result_type_94=(struct sType*)come_increment_ref_count(((struct sType*)(right_value156=sType_clone(((struct sFun*)come_null_check(fun_93, "06str.c", 501))->mResultType))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 18, right_value156);
    if(right_value156 && right_value156 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value156, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[18] = right_value156;
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(result_type_94, "06str.c", 502))->mStatic=(_Bool)0;
    __freed_obj__ = 0;
    type_95=list_type_86;
    __freed_obj__ = 0;
    obj_value_96=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value157=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 506))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 19, right_value157);
    if(right_value157 && right_value157 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value157, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[19] = right_value157;
    __freed_obj__ = 0;
    num_string_97=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value159=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value158=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 508))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 20, right_value158);
    if(right_value158 && right_value158 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value158, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[20] = right_value158;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 21, right_value159);
    if(right_value159 && right_value159 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value159, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[21] = right_value159;
    __freed_obj__ = 0;
    buffer_append_str(((struct buffer*)come_null_check(num_string_97, "06str.c", 510)),"1");
    __freed_obj__ = 0;
    type2_98=(struct sType*)come_increment_ref_count(((struct sType*)(right_value160=solve_generics(type_95,type_95,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 22, right_value160);
    if(right_value160 && right_value160 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value160, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[22] = right_value160;
    __freed_obj__ = 0;
    come_clear_stackframe();
    type_name_99=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("06str.c", 514),((struct optional$2charphbool*)(right_value161=make_type_name_string(type2_98,(_Bool)0,(_Bool)1,(_Bool)0,info))))));
    come_pop_stackframe();
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 23, right_value161);
    if(right_value161 && right_value161 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value161, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[23] = right_value161;
    __freed_obj__ = 0;
    __dec_obj68=((struct CVALUE*)come_null_check(obj_value_96, "06str.c", 516))->c_value;
    ((struct CVALUE*)come_null_check(obj_value_96, "06str.c", 516))->c_value=(char*)come_increment_ref_count(((char*)(right_value163=xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d)",type_name_99,type_name_99,((char*)(right_value162=buffer_to_string(((struct buffer*)come_null_check(num_string_97, "06str.c", 516))))),((struct sInfo*)come_null_check(info, "06str.c", 516))->sname,((struct sInfo*)come_null_check(info, "06str.c", 516))->sline))));
    if(__dec_obj68) { __dec_obj68 = come_decrement_ref_count(__dec_obj68, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 24, right_value162);
    if(right_value162 && right_value162 != __result_obj__ && !__freed_obj__) { right_value162 = come_decrement_ref_count(right_value162, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[24] = right_value162;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 25, right_value163);
    if(right_value163 && right_value163 != __result_obj__ && !__freed_obj__) { right_value163 = come_decrement_ref_count(right_value163, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[25] = right_value163;
    __freed_obj__ = 0;
    type3_100=(struct sType*)come_increment_ref_count(((struct sType*)(right_value164=sType_clone(type2_98))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 26, right_value164);
    if(right_value164 && right_value164 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value164, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[26] = right_value164;
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(type3_100, "06str.c", 519))->mPointerNum++;
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(type3_100, "06str.c", 520))->mHeap=(_Bool)1;
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(type2_98, "06str.c", 521))->mHeap=(_Bool)1;
    __freed_obj__ = 0;
    __dec_obj69=((struct CVALUE*)come_null_check(obj_value_96, "06str.c", 522))->type;
    ((struct CVALUE*)come_null_check(obj_value_96, "06str.c", 522))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value165=sType_clone(type2_98))));
    if(__dec_obj69) { come_call_finalizer(sType_finalize,__dec_obj69, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 27, right_value165);
    if(right_value165 && right_value165 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value165, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[27] = right_value165;
    __freed_obj__ = 0;
    __dec_obj70=((struct CVALUE*)come_null_check(obj_value_96, "06str.c", 523))->c_value;
    ((struct CVALUE*)come_null_check(obj_value_96, "06str.c", 523))->c_value=(char*)come_increment_ref_count(((char*)(right_value166=append_object_to_right_values(((struct CVALUE*)come_null_check(obj_value_96, "06str.c", 523))->c_value,(struct sType*)come_increment_ref_count(type3_100),info))));
    if(__dec_obj70) { __dec_obj70 = come_decrement_ref_count(__dec_obj70, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 28, right_value166);
    if(right_value166 && right_value166 != __result_obj__ && !__freed_obj__) { right_value166 = come_decrement_ref_count(right_value166, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[28] = right_value166;
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(obj_value_96, "06str.c", 524))->type, "06str.c", 524))->mPointerNum++;
    __freed_obj__ = 0;
    ((struct CVALUE*)come_null_check(obj_value_96, "06str.c", 525))->var=((void*)0);
    __freed_obj__ = 0;
    come_params_101=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value168=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value167=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 527))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 29, right_value167);
    if(right_value167 && right_value167 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value167, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[29] = right_value167;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 30, right_value168);
    if(right_value168 && right_value168 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value168, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[30] = right_value168;
    __freed_obj__ = 0;
    come_clear_stackframe();
    if(_if_conditional161=((struct sType*)come_null_check(optional$2sTypephbool_value((come_push_stackframe("06str.c", 556),((struct optional$2sTypephbool*)(right_value173=list$1sTypephp_operator_load_element(((struct sFun*)come_null_check(fun_93, "06str.c", 556))->mParamTypes,0))))), "06str.c", 556))->mHeap&&((struct sType*)come_null_check(((struct CVALUE*)come_null_check(obj_value_96, "06str.c", 556))->type, "06str.c", 556))->mHeap,    come_pop_stackframe() ,    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 31, right_value173),
    (right_value173 && right_value173 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2sTypephboolp_finalize,right_value173, (void*)0, (void*)0, 0, 1, 0, 0):0,
    __right_value_freed_obj[31] = right_value173, 
    __freed_obj__ = 0, 
    _if_conditional161) {
        if(_if_conditional162=((struct CVALUE*)come_null_check(obj_value_96, "06str.c", 555))->var,        __freed_obj__ = 0, 
        _if_conditional162) {
            if(_if_conditional163=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(obj_value_96, "06str.c", 547))->var, "06str.c", 547))->mType, "06str.c", 547))->mDelegate,            __freed_obj__ = 0, 
            _if_conditional163) {
                __dec_obj72=((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(obj_value_96, "06str.c", 532))->var, "06str.c", 532))->mCValueName;
                ((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(obj_value_96, "06str.c", 532))->var, "06str.c", 532))->mCValueName=((void*)0);
                if(__dec_obj72) { __dec_obj72 = come_decrement_ref_count(__dec_obj72, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional164=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(obj_value_96, "06str.c", 547))->var, "06str.c", 547))->mType, "06str.c", 547))->mShare,                __freed_obj__ = 0, 
                _if_conditional164) {
                    __dec_obj73=((struct CVALUE*)come_null_check(obj_value_96, "06str.c", 535))->c_value;
                    ((struct CVALUE*)come_null_check(obj_value_96, "06str.c", 535))->c_value=(char*)come_increment_ref_count(((char*)(right_value174=increment_ref_count_object(((struct CVALUE*)come_null_check(obj_value_96, "06str.c", 535))->type,((struct CVALUE*)come_null_check(obj_value_96, "06str.c", 535))->c_value,info))));
                    if(__dec_obj73) { __dec_obj73 = come_decrement_ref_count(__dec_obj73, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value174);
                    if(right_value174 && right_value174 != __result_obj__ && !__freed_obj__) { right_value174 = come_decrement_ref_count(right_value174, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value174;
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional165=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(obj_value_96, "06str.c", 547))->var, "06str.c", 547))->mType, "06str.c", 547))->mClone,                    __freed_obj__ = 0, 
                    _if_conditional165) {
                        __dec_obj74=((struct CVALUE*)come_null_check(obj_value_96, "06str.c", 538))->c_value;
                        ((struct CVALUE*)come_null_check(obj_value_96, "06str.c", 538))->c_value=(char*)come_increment_ref_count(((char*)(right_value175=increment_ref_count_object(((struct CVALUE*)come_null_check(obj_value_96, "06str.c", 538))->type,((struct CVALUE*)come_null_check(obj_value_96, "06str.c", 538))->c_value,info))));
                        if(__dec_obj74) { __dec_obj74 = come_decrement_ref_count(__dec_obj74, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value175);
                        if(right_value175 && right_value175 != __result_obj__ && !__freed_obj__) { right_value175 = come_decrement_ref_count(right_value175, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value175;
                        __freed_obj__ = 0;
                    }
                    else {
                        __dec_obj75=((struct CVALUE*)come_null_check(obj_value_96, "06str.c", 541))->c_value;
                        ((struct CVALUE*)come_null_check(obj_value_96, "06str.c", 541))->c_value=(char*)come_increment_ref_count(((char*)(right_value176=increment_ref_count_object(((struct CVALUE*)come_null_check(obj_value_96, "06str.c", 541))->type,((struct CVALUE*)come_null_check(obj_value_96, "06str.c", 541))->c_value,info))));
                        if(__dec_obj75) { __dec_obj75 = come_decrement_ref_count(__dec_obj75, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value176);
                        if(right_value176 && right_value176 != __result_obj__ && !__freed_obj__) { right_value176 = come_decrement_ref_count(right_value176, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value176;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional166=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(obj_value_96, "06str.c", 554))->type, "06str.c", 554))->mDelegate,            __freed_obj__ = 0, 
            _if_conditional166) {
            }
            else {
                __dec_obj76=((struct CVALUE*)come_null_check(obj_value_96, "06str.c", 552))->c_value;
                ((struct CVALUE*)come_null_check(obj_value_96, "06str.c", 552))->c_value=(char*)come_increment_ref_count(((char*)(right_value177=increment_ref_count_object(((struct CVALUE*)come_null_check(obj_value_96, "06str.c", 552))->type,((struct CVALUE*)come_null_check(obj_value_96, "06str.c", 552))->c_value,info))));
                if(__dec_obj76) { __dec_obj76 = come_decrement_ref_count(__dec_obj76, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value177);
                if(right_value177 && right_value177 != __result_obj__ && !__freed_obj__) { right_value177 = come_decrement_ref_count(right_value177, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value177;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(come_params_101, "06str.c", 556)),(struct CVALUE*)come_increment_ref_count(obj_value_96));
    __freed_obj__ = 0;
    come_value2_106=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value178=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 558))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 32, right_value178);
    if(right_value178 && right_value178 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value178, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[32] = right_value178;
    __freed_obj__ = 0;
    __dec_obj77=((struct CVALUE*)come_null_check(come_value2_106, "06str.c", 560))->c_value;
    ((struct CVALUE*)come_null_check(come_value2_106, "06str.c", 560))->c_value=(char*)come_increment_ref_count(((char*)(right_value179=xsprintf("%d",list$1CVALUEph_length(((struct list$1CVALUEph*)come_null_check(params_61, "06str.c", 560)))))));
    if(__dec_obj77) { __dec_obj77 = come_decrement_ref_count(__dec_obj77, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 33, right_value179);
    if(right_value179 && right_value179 != __result_obj__ && !__freed_obj__) { right_value179 = come_decrement_ref_count(right_value179, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[33] = right_value179;
    __freed_obj__ = 0;
    __dec_obj78=((struct CVALUE*)come_null_check(come_value2_106, "06str.c", 561))->type;
    ((struct CVALUE*)come_null_check(come_value2_106, "06str.c", 561))->type=((void*)0);
    if(__dec_obj78) { come_call_finalizer(sType_finalize,__dec_obj78, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    ((struct CVALUE*)come_null_check(come_value2_106, "06str.c", 562))->var=((void*)0);
    __freed_obj__ = 0;
    list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(come_params_101, "06str.c", 564)),(struct CVALUE*)come_increment_ref_count(come_value2_106));
    __freed_obj__ = 0;
    come_value3_107=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value180=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 566))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 34, right_value180);
    if(right_value180 && right_value180 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value180, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[34] = right_value180;
    __freed_obj__ = 0;
    __dec_obj79=((struct CVALUE*)come_null_check(come_value3_107, "06str.c", 568))->c_value;
    ((struct CVALUE*)come_null_check(come_value3_107, "06str.c", 568))->c_value=(char*)come_increment_ref_count(((char*)(right_value181=xsprintf("%s",((struct sVar*)come_null_check(var__72, "06str.c", 568))->mCValueName))));
    if(__dec_obj79) { __dec_obj79 = come_decrement_ref_count(__dec_obj79, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 35, right_value181);
    if(right_value181 && right_value181 != __result_obj__ && !__freed_obj__) { right_value181 = come_decrement_ref_count(right_value181, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[35] = right_value181;
    __freed_obj__ = 0;
    __dec_obj80=((struct CVALUE*)come_null_check(come_value3_107, "06str.c", 569))->type;
    ((struct CVALUE*)come_null_check(come_value3_107, "06str.c", 569))->type=((void*)0);
    if(__dec_obj80) { come_call_finalizer(sType_finalize,__dec_obj80, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    ((struct CVALUE*)come_null_check(come_value3_107, "06str.c", 570))->var=((void*)0);
    __freed_obj__ = 0;
    list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(come_params_101, "06str.c", 572)),(struct CVALUE*)come_increment_ref_count(come_value3_107));
    __freed_obj__ = 0;
    buf_108=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value183=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value182=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 574))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 36, right_value182);
    if(right_value182 && right_value182 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value182, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[36] = right_value182;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 37, right_value183);
    if(right_value183 && right_value183 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value183, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[37] = right_value183;
    __freed_obj__ = 0;
    buffer_append_str(((struct buffer*)come_null_check(buf_108, "06str.c", 576)),generics_fun_name_92);
    __freed_obj__ = 0;
    buffer_append_str(((struct buffer*)come_null_check(buf_108, "06str.c", 577)),"(");
    __freed_obj__ = 0;
    j_109=0;
    __freed_obj__ = 0;
    for(
    o2_saved_110=(struct list$1CVALUEph*)come_increment_ref_count((come_params_101)),it_111=list$1CVALUEph_begin(((struct list$1CVALUEph*)come_null_check((o2_saved_110), "06str.c", 589))) ,    __freed_obj__ = 0, 
    0;    _for_condtionalA4=    !list$1CVALUEph_end(((struct list$1CVALUEph*)come_null_check((o2_saved_110), "06str.c", 589))) ,    __freed_obj__ = 0, 
    _for_condtionalA4;    it_111=list$1CVALUEph_next(((struct list$1CVALUEph*)come_null_check((o2_saved_110), "06str.c", 589))) ,    __freed_obj__ = 0, 
    0    ){
        buffer_append_str(((struct buffer*)come_null_check(buf_108, "06str.c", 581)),((struct CVALUE*)come_null_check(it_111, "06str.c", 581))->c_value);
        __freed_obj__ = 0;
        if(_if_conditional167=j_109!=list$1CVALUEph_length(((struct list$1CVALUEph*)come_null_check(come_params_101, "06str.c", 587)))-1,        __freed_obj__ = 0, 
        _if_conditional167) {
            buffer_append_str(((struct buffer*)come_null_check(buf_108, "06str.c", 584)),",");
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        j_109++;
        __freed_obj__ = 0;
    }
    if(o2_saved_110 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,o2_saved_110, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    buffer_append_str(((struct buffer*)come_null_check(buf_108, "06str.c", 589)),")");
    __freed_obj__ = 0;
    come_value4_112=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value184=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 591))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 38, right_value184);
    if(right_value184 && right_value184 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value184, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[38] = right_value184;
    __freed_obj__ = 0;
    __dec_obj81=((struct CVALUE*)come_null_check(come_value4_112, "06str.c", 593))->c_value;
    ((struct CVALUE*)come_null_check(come_value4_112, "06str.c", 593))->c_value=(char*)come_increment_ref_count(((char*)(right_value185=buffer_to_string(((struct buffer*)come_null_check(buf_108, "06str.c", 593))))));
    if(__dec_obj81) { __dec_obj81 = come_decrement_ref_count(__dec_obj81, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 39, right_value185);
    if(right_value185 && right_value185 != __result_obj__ && !__freed_obj__) { right_value185 = come_decrement_ref_count(right_value185, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[39] = right_value185;
    __freed_obj__ = 0;
    if(_if_conditional168=((struct sType*)come_null_check(result_type_94, "06str.c", 599))->mHeap,    __freed_obj__ = 0, 
    _if_conditional168) {
        __dec_obj82=((struct CVALUE*)come_null_check(come_value4_112, "06str.c", 596))->c_value;
        ((struct CVALUE*)come_null_check(come_value4_112, "06str.c", 596))->c_value=(char*)come_increment_ref_count(((char*)(right_value187=append_object_to_right_values(((char*)(right_value186=buffer_to_string(((struct buffer*)come_null_check(buf_108, "06str.c", 596))))),(struct sType*)come_increment_ref_count(result_type_94),info))));
        if(__dec_obj82) { __dec_obj82 = come_decrement_ref_count(__dec_obj82, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value186);
        if(right_value186 && right_value186 != __result_obj__ && !__freed_obj__) { right_value186 = come_decrement_ref_count(right_value186, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value186;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value187);
        if(right_value187 && right_value187 != __result_obj__ && !__freed_obj__) { right_value187 = come_decrement_ref_count(right_value187, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value187;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __dec_obj83=((struct CVALUE*)come_null_check(come_value4_112, "06str.c", 599))->type;
    ((struct CVALUE*)come_null_check(come_value4_112, "06str.c", 599))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value188=sType_clone(result_type_94))));
    if(__dec_obj83) { come_call_finalizer(sType_finalize,__dec_obj83, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 40, right_value188);
    if(right_value188 && right_value188 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value188, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[40] = right_value188;
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value4_112, "06str.c", 600))->type, "06str.c", 600))->mStatic=(_Bool)0;
    __freed_obj__ = 0;
    ((struct CVALUE*)come_null_check(come_value4_112, "06str.c", 601))->var=((void*)0);
    __freed_obj__ = 0;
    add_come_last_code(info,"%s;\n",((char*)(right_value189=buffer_to_string(((struct buffer*)come_null_check(buf_108, "06str.c", 603))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 41, right_value189);
    if(right_value189 && right_value189 != __result_obj__ && !__freed_obj__) { right_value189 = come_decrement_ref_count(right_value189, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[41] = right_value189;
    __freed_obj__ = 0;
    list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 605))->stack, "06str.c", 605)),(struct CVALUE*)come_increment_ref_count(come_value4_112));
    __freed_obj__ = 0;
    __result113__ = (_Bool)1;
    if(params_61 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,params_61, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(list_element_type_62 && !__freed_obj__) { come_call_finalizer(sType_finalize,list_element_type_62, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_values_66 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_values_66, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(var_name_71 && !__freed_obj__) { var_name_71 = come_decrement_ref_count(var_name_71, (void*)0, (void*)0, 0, 0, 0); }
    if(source_74 && !__freed_obj__) { come_call_finalizer(buffer_finalize,source_74, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(list_type_86 && !__freed_obj__) { come_call_finalizer(sType_finalize,list_type_86, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(obj_type_90 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_90, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(generics_fun_name_92 && !__freed_obj__) { generics_fun_name_92 = come_decrement_ref_count(generics_fun_name_92, (void*)0, (void*)0, 0, 0, 0); }
    if(result_type_94 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_94, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(obj_value_96 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,obj_value_96, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(num_string_97 && !__freed_obj__) { come_call_finalizer(buffer_finalize,num_string_97, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type2_98 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_98, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_name_99 && !__freed_obj__) { type_name_99 = come_decrement_ref_count(type_name_99, (void*)0, (void*)0, 0, 0, 0); }
    if(type3_100 && !__freed_obj__) { come_call_finalizer(sType_finalize,type3_100, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_params_101 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,come_params_101, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value2_106 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value2_106, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value3_107 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value3_107, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(buf_108 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_108, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value4_112 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value4_112, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result113__;
    __freed_obj__ = 0;
    if(params_61 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,params_61, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(list_element_type_62 && !__freed_obj__) { come_call_finalizer(sType_finalize,list_element_type_62, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_values_66 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_values_66, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(var_name_71 && !__freed_obj__) { var_name_71 = come_decrement_ref_count(var_name_71, (void*)0, (void*)0, 0, 0, 0); }
    if(source_74 && !__freed_obj__) { come_call_finalizer(buffer_finalize,source_74, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(list_type_86 && !__freed_obj__) { come_call_finalizer(sType_finalize,list_type_86, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(obj_type_90 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_90, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(generics_fun_name_92 && !__freed_obj__) { generics_fun_name_92 = come_decrement_ref_count(generics_fun_name_92, (void*)0, (void*)0, 0, 0, 0); }
    if(result_type_94 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_94, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(obj_value_96 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,obj_value_96, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(num_string_97 && !__freed_obj__) { come_call_finalizer(buffer_finalize,num_string_97, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type2_98 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_98, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_name_99 && !__freed_obj__) { type_name_99 = come_decrement_ref_count(type_name_99, (void*)0, (void*)0, 0, 0, 0); }
    if(type3_100 && !__freed_obj__) { come_call_finalizer(sType_finalize,type3_100, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_params_101 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,come_params_101, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value2_106 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value2_106, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value3_107 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value3_107, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(buf_108 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_108, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value4_112 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value4_112, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1CVALUEph* __result87__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 150))->head=((void*)0);
        __freed_obj__ = 0;
        ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 151))->tail=((void*)0);
        __freed_obj__ = 0;
        ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 152))->len=0;
        __freed_obj__ = 0;
        __result87__ = __result_obj__ = self;
        if(self && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result87__;
        __freed_obj__ = 0;
        if(self && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1CVALUEph* it_59;
_Bool _while_condtional9;
struct list_item$1CVALUEph* prev_it_60;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_59, 0, sizeof(struct list_item$1CVALUEph*));
memset(&prev_it_60, 0, sizeof(struct list_item$1CVALUEph*));
            it_59=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 169))->head;
            __freed_obj__ = 0;
            while(_while_condtional9=it_59!=((void*)0),            __freed_obj__ = 0, 
            _while_condtional9) {
                prev_it_60=it_59;
                __freed_obj__ = 0;
                it_59=((struct list_item$1CVALUEph*)come_null_check(it_59, "./comelang2.h", 172))->next;
                __freed_obj__ = 0;
                if(prev_it_60 && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,prev_it_60, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
}

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional139;
void* right_value124;
struct list_item$1sNodeph* litem_67;
struct sNode* __dec_obj60;
_Bool _if_conditional140;
void* right_value125;
struct list_item$1sNodeph* litem_68;
struct sNode* __dec_obj61;
void* right_value126;
struct list_item$1sNodeph* litem_69;
struct sNode* __dec_obj62;
struct list$1sNodeph* __result89__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value124, 0, sizeof(void*));
memset(&litem_67, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value125, 0, sizeof(void*));
memset(&litem_68, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value126, 0, sizeof(void*));
memset(&litem_69, 0, sizeof(struct list_item$1sNodeph*));
        if(_if_conditional139=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 302))->len==0,        __freed_obj__ = 0, 
        _if_conditional139) {
            litem_67=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value124=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 272))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value124);
            if(right_value124 && right_value124 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value124, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value124;
            __freed_obj__ = 0;
            ((struct list_item$1sNodeph*)come_null_check(litem_67, "./comelang2.h", 274))->prev=((void*)0);
            __freed_obj__ = 0;
            ((struct list_item$1sNodeph*)come_null_check(litem_67, "./comelang2.h", 275))->next=((void*)0);
            __freed_obj__ = 0;
            __dec_obj60=((struct list_item$1sNodeph*)come_null_check(litem_67, "./comelang2.h", 276))->item;
            ((struct list_item$1sNodeph*)come_null_check(litem_67, "./comelang2.h", 276))->item=(struct sNode*)come_increment_ref_count(item);
            if(__dec_obj60) { __dec_obj60 = come_decrement_ref_count(__dec_obj60, ((struct sNode*)__dec_obj60)->finalize, ((struct sNode*)__dec_obj60)->_protocol_obj, 0,0,0); }
            __freed_obj__ = 0;
            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 278))->tail=litem_67;
            __freed_obj__ = 0;
            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 279))->head=litem_67;
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional140=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 302))->len==1,            __freed_obj__ = 0, 
            _if_conditional140) {
                litem_68=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value125=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 282))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value125);
                if(right_value125 && right_value125 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value125, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value125;
                __freed_obj__ = 0;
                ((struct list_item$1sNodeph*)come_null_check(litem_68, "./comelang2.h", 284))->prev=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 284))->head;
                __freed_obj__ = 0;
                ((struct list_item$1sNodeph*)come_null_check(litem_68, "./comelang2.h", 285))->next=((void*)0);
                __freed_obj__ = 0;
                __dec_obj61=((struct list_item$1sNodeph*)come_null_check(litem_68, "./comelang2.h", 286))->item;
                ((struct list_item$1sNodeph*)come_null_check(litem_68, "./comelang2.h", 286))->item=(struct sNode*)come_increment_ref_count(item);
                if(__dec_obj61) { __dec_obj61 = come_decrement_ref_count(__dec_obj61, ((struct sNode*)__dec_obj61)->finalize, ((struct sNode*)__dec_obj61)->_protocol_obj, 0,0,0); }
                __freed_obj__ = 0;
                ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 288))->tail=litem_68;
                __freed_obj__ = 0;
                ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 289))->head, "./comelang2.h", 289))->next=litem_68;
                __freed_obj__ = 0;
            }
            else {
                litem_69=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value126=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 292))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value126);
                if(right_value126 && right_value126 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value126, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value126;
                __freed_obj__ = 0;
                ((struct list_item$1sNodeph*)come_null_check(litem_69, "./comelang2.h", 294))->prev=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 294))->tail;
                __freed_obj__ = 0;
                ((struct list_item$1sNodeph*)come_null_check(litem_69, "./comelang2.h", 295))->next=((void*)0);
                __freed_obj__ = 0;
                __dec_obj62=((struct list_item$1sNodeph*)come_null_check(litem_69, "./comelang2.h", 296))->item;
                ((struct list_item$1sNodeph*)come_null_check(litem_69, "./comelang2.h", 296))->item=(struct sNode*)come_increment_ref_count(item);
                if(__dec_obj62) { __dec_obj62 = come_decrement_ref_count(__dec_obj62, ((struct sNode*)__dec_obj62)->finalize, ((struct sNode*)__dec_obj62)->_protocol_obj, 0,0,0); }
                __freed_obj__ = 0;
                ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 298))->tail, "./comelang2.h", 298))->next=litem_69;
                __freed_obj__ = 0;
                ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 299))->tail=litem_69;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 302))->len++;
        __freed_obj__ = 0;
        __result89__ = __result_obj__ = self;
        if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
        __freed_obj__ = 0;
        return __result89__;
        __freed_obj__ = 0;
        if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
}

static int list$1CVALUEph_length(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result90__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __result90__ = ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 410))->len;
        __freed_obj__ = 0;
        return __result90__;
        __freed_obj__ = 0;
}

static char* optional$2charphbool_value(struct optional$2charphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional141;
char* default_value_73;
char* __result91__;
char* __result92__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_73, 0, sizeof(char*));
        if(_if_conditional141=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional141) {
            __freed_obj__ = 0;
            memset(&default_value_73,0,sizeof(char*));
            __freed_obj__ = 0;
            __result91__ = __result_obj__ = default_value_73;
            __freed_obj__ = 0;
            return __result91__;
            __freed_obj__ = 0;
        }
        else {
            __result92__ = __result_obj__ = ((struct optional$2charphbool*)come_null_check(self, "./comelang2.h", 65))->v1;
            __freed_obj__ = 0;
            return __result92__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
}

static void optional$2charphboolp_finalize(struct optional$2charphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional142;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional142=self!=((void*)0)&&((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 1))->v1!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional142) {
            if(((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 0))->v1 && !__freed_obj__) { ((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 0))->v1 = come_decrement_ref_count(((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
}

static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional143;
struct CVALUE* result_77;
struct CVALUE* __result93__;
_Bool _if_conditional144;
struct CVALUE* __result94__;
struct CVALUE* result_78;
struct CVALUE* __result95__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_77, 0, sizeof(struct CVALUE*));
memset(&result_78, 0, sizeof(struct CVALUE*));
        if(_if_conditional143=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional143) {
            __freed_obj__ = 0;
            memset(&result_77,0,sizeof(struct CVALUE*));
            __freed_obj__ = 0;
            __result93__ = __result_obj__ = result_77;
            __freed_obj__ = 0;
            return __result93__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 336))->it=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 336))->head;
        __freed_obj__ = 0;
        if(_if_conditional144=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 342))->it,        __freed_obj__ = 0, 
        _if_conditional144) {
            __result94__ = __result_obj__ = ((struct list_item$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 339))->it, "./comelang2.h", 339))->item;
            __freed_obj__ = 0;
            return __result94__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        memset(&result_78,0,sizeof(struct CVALUE*));
        __freed_obj__ = 0;
        __result95__ = __result_obj__ = result_78;
        __freed_obj__ = 0;
        return __result95__;
        __freed_obj__ = 0;
}

static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result96__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __result96__ = self==((void*)0)||((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 366))->it==((void*)0);
        __freed_obj__ = 0;
        return __result96__;
        __freed_obj__ = 0;
}

static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional145;
struct CVALUE* result_80;
struct CVALUE* __result97__;
_Bool _if_conditional146;
struct CVALUE* __result98__;
struct CVALUE* result_81;
struct CVALUE* __result99__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_80, 0, sizeof(struct CVALUE*));
memset(&result_81, 0, sizeof(struct CVALUE*));
        if(_if_conditional145=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional145) {
            __freed_obj__ = 0;
            memset(&result_80,0,sizeof(struct CVALUE*));
            __freed_obj__ = 0;
            __result97__ = __result_obj__ = result_80;
            __freed_obj__ = 0;
            return __result97__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 354))->it=((struct list_item$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 354))->it, "./comelang2.h", 354))->next;
        __freed_obj__ = 0;
        if(_if_conditional146=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 360))->it,        __freed_obj__ = 0, 
        _if_conditional146) {
            __result98__ = __result_obj__ = ((struct list_item$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 357))->it, "./comelang2.h", 357))->item;
            __freed_obj__ = 0;
            return __result98__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        memset(&result_81,0,sizeof(struct CVALUE*));
        __freed_obj__ = 0;
        __result99__ = __result_obj__ = result_81;
        __freed_obj__ = 0;
        return __result99__;
        __freed_obj__ = 0;
}

static struct optional$2CVALUEphbool* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional148;
struct list_item$1CVALUEph* it_82;
int i_83;
_Bool _while_condtional10;
_Bool _if_conditional149;
void* right_value133;
void* right_value134;
struct optional$2CVALUEphbool* __result101__;
struct CVALUE* default_value_84;
void* right_value135;
void* right_value136;
struct optional$2CVALUEphbool* __result102__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_82, 0, sizeof(struct list_item$1CVALUEph*));
memset(&i_83, 0, sizeof(int));
memset(&right_value133, 0, sizeof(void*));
memset(&right_value134, 0, sizeof(void*));
memset(&default_value_84, 0, sizeof(struct CVALUE*));
memset(&right_value135, 0, sizeof(void*));
memset(&right_value136, 0, sizeof(void*));
                if(_if_conditional148=position<0,                __freed_obj__ = 0, 
                _if_conditional148) {
                    position+=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 735))->len;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                it_82=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 738))->head;
                __freed_obj__ = 0;
                i_83=0;
                __freed_obj__ = 0;
                while(_while_condtional10=it_82!=((void*)0),                __freed_obj__ = 0, 
                _while_condtional10) {
                    if(_if_conditional149=position==i_83,                    __freed_obj__ = 0, 
                    _if_conditional149) {
                        __result101__ = __result_obj__ = ((struct optional$2CVALUEphbool*)(right_value134=optional$2CVALUEphbool_initialize((struct optional$2CVALUEphbool*)come_increment_ref_count(((struct optional$2CVALUEphbool*)(right_value133=(struct optional$2CVALUEphbool*)come_calloc(1, sizeof(struct optional$2CVALUEphbool)*(1), "./comelang2.h", 742)))),(struct CVALUE*)come_increment_ref_count(((struct list_item$1CVALUEph*)come_null_check(it_82, "./comelang2.h", 742))->item),(_Bool)1)));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value133);
                        if(right_value133 && right_value133 != __result_obj__ && !__freed_obj__) { right_value133 = come_decrement_ref_count(right_value133, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value133;
                        __freed_obj__ = 0;
                        return __result101__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    it_82=((struct list_item$1CVALUEph*)come_null_check(it_82, "./comelang2.h", 744))->next;
                    __freed_obj__ = 0;
                    i_83++;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __freed_obj__ = 0;
                memset(&default_value_84,0,sizeof(struct CVALUE*));
                __freed_obj__ = 0;
                __result102__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 750), ((struct optional$2CVALUEphbool*)(right_value136=optional$2CVALUEphbool_initialize(((struct optional$2CVALUEphbool*)(right_value135=(struct optional$2CVALUEphbool*)come_calloc(1, sizeof(struct optional$2CVALUEphbool)*(1), "./comelang2.h", 750))),(struct CVALUE*)come_increment_ref_count(default_value_84),(_Bool)0))));
                if(default_value_84 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,default_value_84, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value135);
                if(right_value135 && right_value135 != __result_obj__ && !__freed_obj__) { right_value135 = come_decrement_ref_count(right_value135, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value135;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value136);
                if(right_value136 && right_value136 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2CVALUEphboolp_finalize,right_value136, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value136;
                __freed_obj__ = 0;
                return __result102__;
                __freed_obj__ = 0;
                if(default_value_84 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,default_value_84, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct optional$2CVALUEphbool* optional$2CVALUEphbool_initialize(struct optional$2CVALUEphbool* self, struct CVALUE* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct CVALUE* __dec_obj63;
struct optional$2CVALUEphbool* __result100__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            __dec_obj63=((struct optional$2CVALUEphbool*)come_null_check(self, "./comelang2.h", 38))->v1;
                            ((struct optional$2CVALUEphbool*)come_null_check(self, "./comelang2.h", 38))->v1=(struct CVALUE*)come_increment_ref_count(v1);
                            if(__dec_obj63) { come_call_finalizer(CVALUE_finalize,__dec_obj63, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct optional$2CVALUEphbool*)come_null_check(self, "./comelang2.h", 39))->v2=v2;
                            __freed_obj__ = 0;
                            __result100__ = __result_obj__ = self;
                            if(self && !__freed_obj__) { come_call_finalizer(optional$2CVALUEphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                            if(v1 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                            __freed_obj__ = 0;
                            return __result100__;
                            __freed_obj__ = 0;
                            if(self && !__freed_obj__) { come_call_finalizer(optional$2CVALUEphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                            if(v1 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2CVALUEphboolp_finalize(struct optional$2CVALUEphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional150;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional150=self!=((void*)0)&&((struct optional$2CVALUEphbool*)come_null_check(self, "optional$2CVALUEphboolp_finalize", 1))->v1!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional150) {
                                    if(((struct optional$2CVALUEphbool*)come_null_check(self, "optional$2CVALUEphboolp_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,((struct optional$2CVALUEphbool*)come_null_check(self, "optional$2CVALUEphboolp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
}

static struct CVALUE* optional$2CVALUEphbool_value(struct optional$2CVALUEphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional151;
struct CVALUE* default_value_85;
struct CVALUE* __result103__;
struct CVALUE* __result104__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_85, 0, sizeof(struct CVALUE*));
                if(_if_conditional151=self==((void*)0),                __freed_obj__ = 0, 
                _if_conditional151) {
                    __freed_obj__ = 0;
                    memset(&default_value_85,0,sizeof(struct CVALUE*));
                    __freed_obj__ = 0;
                    __result103__ = __result_obj__ = default_value_85;
                    __freed_obj__ = 0;
                    return __result103__;
                    __freed_obj__ = 0;
                }
                else {
                    __result104__ = __result_obj__ = ((struct optional$2CVALUEphbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                    __freed_obj__ = 0;
                    return __result104__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional152;
void* right_value144;
struct list_item$1sTypeph* litem_87;
struct sType* __dec_obj64;
_Bool _if_conditional153;
void* right_value145;
struct list_item$1sTypeph* litem_88;
struct sType* __dec_obj65;
void* right_value146;
struct list_item$1sTypeph* litem_89;
struct sType* __dec_obj66;
struct list$1sTypeph* __result105__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value144, 0, sizeof(void*));
memset(&litem_87, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value145, 0, sizeof(void*));
memset(&litem_88, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value146, 0, sizeof(void*));
memset(&litem_89, 0, sizeof(struct list_item$1sTypeph*));
        if(_if_conditional152=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 302))->len==0,        __freed_obj__ = 0, 
        _if_conditional152) {
            litem_87=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value144=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 272))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value144);
            if(right_value144 && right_value144 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value144, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value144;
            __freed_obj__ = 0;
            ((struct list_item$1sTypeph*)come_null_check(litem_87, "./comelang2.h", 274))->prev=((void*)0);
            __freed_obj__ = 0;
            ((struct list_item$1sTypeph*)come_null_check(litem_87, "./comelang2.h", 275))->next=((void*)0);
            __freed_obj__ = 0;
            __dec_obj64=((struct list_item$1sTypeph*)come_null_check(litem_87, "./comelang2.h", 276))->item;
            ((struct list_item$1sTypeph*)come_null_check(litem_87, "./comelang2.h", 276))->item=(struct sType*)come_increment_ref_count(item);
            if(__dec_obj64) { come_call_finalizer(sType_finalize,__dec_obj64, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
            ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 278))->tail=litem_87;
            __freed_obj__ = 0;
            ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 279))->head=litem_87;
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional153=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 302))->len==1,            __freed_obj__ = 0, 
            _if_conditional153) {
                litem_88=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value145=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 282))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value145);
                if(right_value145 && right_value145 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value145, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value145;
                __freed_obj__ = 0;
                ((struct list_item$1sTypeph*)come_null_check(litem_88, "./comelang2.h", 284))->prev=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 284))->head;
                __freed_obj__ = 0;
                ((struct list_item$1sTypeph*)come_null_check(litem_88, "./comelang2.h", 285))->next=((void*)0);
                __freed_obj__ = 0;
                __dec_obj65=((struct list_item$1sTypeph*)come_null_check(litem_88, "./comelang2.h", 286))->item;
                ((struct list_item$1sTypeph*)come_null_check(litem_88, "./comelang2.h", 286))->item=(struct sType*)come_increment_ref_count(item);
                if(__dec_obj65) { come_call_finalizer(sType_finalize,__dec_obj65, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 288))->tail=litem_88;
                __freed_obj__ = 0;
                ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 289))->head, "./comelang2.h", 289))->next=litem_88;
                __freed_obj__ = 0;
            }
            else {
                litem_89=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value146=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 292))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value146);
                if(right_value146 && right_value146 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value146, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value146;
                __freed_obj__ = 0;
                ((struct list_item$1sTypeph*)come_null_check(litem_89, "./comelang2.h", 294))->prev=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 294))->tail;
                __freed_obj__ = 0;
                ((struct list_item$1sTypeph*)come_null_check(litem_89, "./comelang2.h", 295))->next=((void*)0);
                __freed_obj__ = 0;
                __dec_obj66=((struct list_item$1sTypeph*)come_null_check(litem_89, "./comelang2.h", 296))->item;
                ((struct list_item$1sTypeph*)come_null_check(litem_89, "./comelang2.h", 296))->item=(struct sType*)come_increment_ref_count(item);
                if(__dec_obj66) { come_call_finalizer(sType_finalize,__dec_obj66, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 298))->tail, "./comelang2.h", 298))->next=litem_89;
                __freed_obj__ = 0;
                ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 299))->tail=litem_89;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 302))->len++;
        __freed_obj__ = 0;
        __result105__ = __result_obj__ = self;
        if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result105__;
        __freed_obj__ = 0;
        if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static char* optional$2charphbool_expect(struct optional$2charphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional156;
char* __result107__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional156=!((struct optional$2charphbool*)come_null_check(self, "./comelang2.h", 76))->v2,        __freed_obj__ = 0, 
        _if_conditional156) {
            puts("Exception: at");
            __freed_obj__ = 0;
            come_show_stackframe();
            __freed_obj__ = 0;
            puts("abort.");
            __freed_obj__ = 0;
            exit(2);
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __result107__ = __result_obj__ = ((struct optional$2charphbool*)come_null_check(self, "./comelang2.h", 76))->v1;
        __freed_obj__ = 0;
        return __result107__;
        __freed_obj__ = 0;
}

static struct optional$2sTypephbool* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional157;
struct list_item$1sTypeph* it_102;
int i_103;
_Bool _while_condtional11;
_Bool _if_conditional158;
void* right_value169;
void* right_value170;
struct optional$2sTypephbool* __result109__;
struct sType* default_value_104;
void* right_value171;
void* right_value172;
struct optional$2sTypephbool* __result110__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_102, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_103, 0, sizeof(int));
memset(&right_value169, 0, sizeof(void*));
memset(&right_value170, 0, sizeof(void*));
memset(&default_value_104, 0, sizeof(struct sType*));
memset(&right_value171, 0, sizeof(void*));
memset(&right_value172, 0, sizeof(void*));
        if(_if_conditional157=position<0,        __freed_obj__ = 0, 
        _if_conditional157) {
            position+=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 735))->len;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        it_102=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 738))->head;
        __freed_obj__ = 0;
        i_103=0;
        __freed_obj__ = 0;
        while(_while_condtional11=it_102!=((void*)0),        __freed_obj__ = 0, 
        _while_condtional11) {
            if(_if_conditional158=position==i_103,            __freed_obj__ = 0, 
            _if_conditional158) {
                __result109__ = __result_obj__ = ((struct optional$2sTypephbool*)(right_value170=optional$2sTypephbool_initialize((struct optional$2sTypephbool*)come_increment_ref_count(((struct optional$2sTypephbool*)(right_value169=(struct optional$2sTypephbool*)come_calloc(1, sizeof(struct optional$2sTypephbool)*(1), "./comelang2.h", 742)))),(struct sType*)come_increment_ref_count(((struct list_item$1sTypeph*)come_null_check(it_102, "./comelang2.h", 742))->item),(_Bool)1)));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value169);
                if(right_value169 && right_value169 != __result_obj__ && !__freed_obj__) { right_value169 = come_decrement_ref_count(right_value169, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value169;
                __freed_obj__ = 0;
                return __result109__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            it_102=((struct list_item$1sTypeph*)come_null_check(it_102, "./comelang2.h", 744))->next;
            __freed_obj__ = 0;
            i_103++;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        memset(&default_value_104,0,sizeof(struct sType*));
        __freed_obj__ = 0;
        __result110__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 750), ((struct optional$2sTypephbool*)(right_value172=optional$2sTypephbool_initialize(((struct optional$2sTypephbool*)(right_value171=(struct optional$2sTypephbool*)come_calloc(1, sizeof(struct optional$2sTypephbool)*(1), "./comelang2.h", 750))),(struct sType*)come_increment_ref_count(default_value_104),(_Bool)0))));
        if(default_value_104 && !__freed_obj__) { come_call_finalizer(sType_finalize,default_value_104, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value171);
        if(right_value171 && right_value171 != __result_obj__ && !__freed_obj__) { right_value171 = come_decrement_ref_count(right_value171, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value171;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value172);
        if(right_value172 && right_value172 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,right_value172, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value172;
        __freed_obj__ = 0;
        return __result110__;
        __freed_obj__ = 0;
        if(default_value_104 && !__freed_obj__) { come_call_finalizer(sType_finalize,default_value_104, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct optional$2sTypephbool* optional$2sTypephbool_initialize(struct optional$2sTypephbool* self, struct sType* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sType* __dec_obj71;
struct optional$2sTypephbool* __result108__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    __dec_obj71=((struct optional$2sTypephbool*)come_null_check(self, "./comelang2.h", 38))->v1;
                    ((struct optional$2sTypephbool*)come_null_check(self, "./comelang2.h", 38))->v1=(struct sType*)come_increment_ref_count(v1);
                    if(__dec_obj71) { come_call_finalizer(sType_finalize,__dec_obj71, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct optional$2sTypephbool*)come_null_check(self, "./comelang2.h", 39))->v2=v2;
                    __freed_obj__ = 0;
                    __result108__ = __result_obj__ = self;
                    if(self && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result108__;
                    __freed_obj__ = 0;
                    if(self && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2sTypephboolp_finalize(struct optional$2sTypephbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional159;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional159=self!=((void*)0)&&((struct optional$2sTypephbool*)come_null_check(self, "optional$2sTypephboolp_finalize", 1))->v1!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional159) {
                            if(((struct optional$2sTypephbool*)come_null_check(self, "optional$2sTypephboolp_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct optional$2sTypephbool*)come_null_check(self, "optional$2sTypephboolp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

static struct sType* optional$2sTypephbool_value(struct optional$2sTypephbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional160;
struct sType* default_value_105;
struct sType* __result111__;
struct sType* __result112__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_105, 0, sizeof(struct sType*));
        if(_if_conditional160=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional160) {
            __freed_obj__ = 0;
            memset(&default_value_105,0,sizeof(struct sType*));
            __freed_obj__ = 0;
            __result111__ = __result_obj__ = default_value_105;
            __freed_obj__ = 0;
            return __result111__;
            __freed_obj__ = 0;
        }
        else {
            __result112__ = __result_obj__ = ((struct optional$2sTypephbool*)come_null_check(self, "./comelang2.h", 65))->v1;
            __freed_obj__ = 0;
            return __result112__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
}

int sListNode_sline(struct sListNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result114__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result114__ = ((struct sListNode*)come_null_check(self, "06str.c", 612))->sline;
    __freed_obj__ = 0;
    return __result114__;
    __freed_obj__ = 0;
}

char* sListNode_sname(struct sListNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value190;
char* __result115__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value190, 0, sizeof(void*));
    __result115__ = __result_obj__ = ((char*)(right_value190=__builtin_string(((struct sListNode*)come_null_check(self, "06str.c", 617))->sname)));
    __freed_obj__ = 0;
    return __result115__;
    __freed_obj__ = 0;
}

struct sTupleNode* sTupleNode_initialize(struct sTupleNode* self, struct list$1sNodeph* tuple_elements, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1sNodeph* __dec_obj84;
void* right_value191;
char* __dec_obj85;
struct sTupleNode* __result116__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value191, 0, sizeof(void*));
    __dec_obj84=((struct sTupleNode*)come_null_check(self, "06str.c", 629))->tuple_elements;
    ((struct sTupleNode*)come_null_check(self, "06str.c", 629))->tuple_elements=(struct list$1sNodeph*)come_increment_ref_count(tuple_elements);
    if(__dec_obj84) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj84, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    ((struct sTupleNode*)come_null_check(self, "06str.c", 631))->sline=((struct sInfo*)come_null_check(info, "06str.c", 631))->sline;
    __freed_obj__ = 0;
    __dec_obj85=((struct sTupleNode*)come_null_check(self, "06str.c", 632))->sname;
    ((struct sTupleNode*)come_null_check(self, "06str.c", 632))->sname=(char*)come_increment_ref_count(((char*)(right_value191=__builtin_string(((struct sInfo*)come_null_check(info, "06str.c", 632))->sname))));
    if(__dec_obj85) { __dec_obj85 = come_decrement_ref_count(__dec_obj85, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value191);
    if(right_value191 && right_value191 != __result_obj__ && !__freed_obj__) { right_value191 = come_decrement_ref_count(right_value191, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value191;
    __freed_obj__ = 0;
    __result116__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sTupleNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(tuple_elements && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,tuple_elements, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result116__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sTupleNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(tuple_elements && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,tuple_elements, (void*)0, (void*)0, 0, 0, 1, 0); }
}

_Bool sTupleNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result117__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result117__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result117__;
    __freed_obj__ = 0;
}

char* sTupleNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value192;
char* __result118__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value192, 0, sizeof(void*));
    __result118__ = __result_obj__ = ((char*)(right_value192=__builtin_string("sTupleNode")));
    __freed_obj__ = 0;
    return __result118__;
    __freed_obj__ = 0;
}

_Bool sTupleNode_compile(struct sTupleNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1sNodeph* tuple_elements_113;
void* right_value193;
void* right_value194;
struct list$1sTypeph* tuple_types_114;
void* right_value195;
void* right_value196;
struct list$1CVALUEph* tuple_values_115;
struct list$1sNodeph* o2_saved_116;
struct sNode* it_117;
_Bool _for_condtionalA5;
_Bool _if_conditional171;
_Bool __result119__;
void* right_value197;
struct CVALUE* come_value_118;
void* right_value201;
void* right_value202;
void* right_value203;
void* right_value204;
void* right_value205;
struct sType* type_120;
struct list$1sTypeph* o2_saved_121;
struct sType* it_124;
_Bool _for_condtionalA6;
void* right_value206;
void* right_value207;
struct CVALUE* obj_value_127;
void* right_value208;
void* right_value209;
struct buffer* num_string_128;
void* right_value210;
struct sType* type2_129;
void* right_value211;
char* type_name_130;
void* right_value212;
void* right_value213;
char* __dec_obj88;
void* right_value214;
struct sType* type3_131;
void* right_value215;
struct sType* __dec_obj89;
void* right_value216;
char* __dec_obj90;
void* right_value217;
struct sType* obj_type_132;
char* fun_name_133;
void* right_value218;
void* right_value219;
void* right_value220;
char* generics_fun_name_134;
void* right_value221;
struct sFun* fun_135;
_Bool _if_conditional180;
void* right_value222;
void* right_value223;
char* __dec_obj91;
void* right_value224;
_Bool _if_conditional181;
_Bool __result129__;
void* right_value225;
struct sType* result_type_136;
void* right_value226;
void* right_value227;
struct list$1CVALUEph* come_params_137;
void* right_value228;
struct optional$2sTypephbool* __exception_result_var_a2;
_Bool _if_conditional182;
_Bool _if_conditional183;
_Bool _if_conditional184;
char* __dec_obj92;
_Bool _if_conditional185;
void* right_value229;
char* __dec_obj93;
_Bool _if_conditional186;
void* right_value230;
char* __dec_obj94;
void* right_value231;
char* __dec_obj95;
_Bool _if_conditional187;
void* right_value232;
char* __dec_obj96;
int i_138;
struct list$1CVALUEph* o2_saved_139;
struct CVALUE* it_140;
_Bool _for_condtionalA7;
void* right_value233;
struct CVALUE* come_value_141;
void* right_value234;
struct optional$2sTypephbool* __exception_result_var_a3;
void* right_value235;
struct optional$2sTypephbool* __exception_result_var_a4;
_Bool _if_conditional188;
_Bool _if_conditional189;
_Bool _if_conditional190;
char* __dec_obj97;
_Bool _if_conditional191;
void* right_value236;
char* __dec_obj98;
_Bool _if_conditional192;
void* right_value237;
char* __dec_obj99;
void* right_value238;
char* __dec_obj100;
_Bool _if_conditional193;
void* right_value239;
char* __dec_obj101;
void* right_value240;
void* right_value241;
struct buffer* buf_142;
int j_143;
struct list$1CVALUEph* o2_saved_144;
struct CVALUE* it_145;
_Bool _for_condtionalA8;
_Bool _if_conditional194;
void* right_value242;
struct CVALUE* come_value2_146;
void* right_value243;
char* __dec_obj102;
_Bool _if_conditional195;
void* right_value244;
void* right_value245;
char* __dec_obj103;
void* right_value246;
struct sType* __dec_obj104;
void* right_value247;
_Bool __result130__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&tuple_elements_113, 0, sizeof(struct list$1sNodeph*));
memset(&right_value193, 0, sizeof(void*));
memset(&right_value194, 0, sizeof(void*));
memset(&tuple_types_114, 0, sizeof(struct list$1sTypeph*));
memset(&right_value195, 0, sizeof(void*));
memset(&right_value196, 0, sizeof(void*));
memset(&tuple_values_115, 0, sizeof(struct list$1CVALUEph*));
memset(&o2_saved_116, 0, sizeof(struct list$1sNodeph*));
memset(&it_117, 0, sizeof(struct sNode*));
memset(&right_value197, 0, sizeof(void*));
memset(&come_value_118, 0, sizeof(struct CVALUE*));
memset(&right_value201, 0, sizeof(void*));
memset(&right_value202, 0, sizeof(void*));
memset(&right_value203, 0, sizeof(void*));
memset(&right_value204, 0, sizeof(void*));
memset(&right_value205, 0, sizeof(void*));
memset(&type_120, 0, sizeof(struct sType*));
memset(&o2_saved_121, 0, sizeof(struct list$1sTypeph*));
memset(&it_124, 0, sizeof(struct sType*));
memset(&right_value206, 0, sizeof(void*));
memset(&right_value207, 0, sizeof(void*));
memset(&obj_value_127, 0, sizeof(struct CVALUE*));
memset(&right_value208, 0, sizeof(void*));
memset(&right_value209, 0, sizeof(void*));
memset(&num_string_128, 0, sizeof(struct buffer*));
memset(&right_value210, 0, sizeof(void*));
memset(&type2_129, 0, sizeof(struct sType*));
memset(&right_value211, 0, sizeof(void*));
memset(&type_name_130, 0, sizeof(char*));
memset(&right_value212, 0, sizeof(void*));
memset(&right_value213, 0, sizeof(void*));
memset(&right_value214, 0, sizeof(void*));
memset(&type3_131, 0, sizeof(struct sType*));
memset(&right_value215, 0, sizeof(void*));
memset(&right_value216, 0, sizeof(void*));
memset(&right_value217, 0, sizeof(void*));
memset(&obj_type_132, 0, sizeof(struct sType*));
memset(&fun_name_133, 0, sizeof(char*));
memset(&right_value218, 0, sizeof(void*));
memset(&right_value219, 0, sizeof(void*));
memset(&right_value220, 0, sizeof(void*));
memset(&generics_fun_name_134, 0, sizeof(char*));
memset(&right_value221, 0, sizeof(void*));
memset(&fun_135, 0, sizeof(struct sFun*));
memset(&right_value222, 0, sizeof(void*));
memset(&right_value223, 0, sizeof(void*));
memset(&right_value224, 0, sizeof(void*));
memset(&right_value225, 0, sizeof(void*));
memset(&result_type_136, 0, sizeof(struct sType*));
memset(&right_value226, 0, sizeof(void*));
memset(&right_value227, 0, sizeof(void*));
memset(&come_params_137, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value228, 0, sizeof(void*));
memset(&right_value229, 0, sizeof(void*));
memset(&right_value230, 0, sizeof(void*));
memset(&right_value231, 0, sizeof(void*));
memset(&right_value232, 0, sizeof(void*));
memset(&i_138, 0, sizeof(int));
memset(&o2_saved_139, 0, sizeof(struct list$1CVALUEph*));
memset(&it_140, 0, sizeof(struct CVALUE*));
memset(&right_value233, 0, sizeof(void*));
memset(&come_value_141, 0, sizeof(struct CVALUE*));
memset(&right_value234, 0, sizeof(void*));
memset(&right_value235, 0, sizeof(void*));
memset(&right_value236, 0, sizeof(void*));
memset(&right_value237, 0, sizeof(void*));
memset(&right_value238, 0, sizeof(void*));
memset(&right_value239, 0, sizeof(void*));
memset(&right_value240, 0, sizeof(void*));
memset(&right_value241, 0, sizeof(void*));
memset(&buf_142, 0, sizeof(struct buffer*));
memset(&j_143, 0, sizeof(int));
memset(&o2_saved_144, 0, sizeof(struct list$1CVALUEph*));
memset(&it_145, 0, sizeof(struct CVALUE*));
memset(&right_value242, 0, sizeof(void*));
memset(&come_value2_146, 0, sizeof(struct CVALUE*));
memset(&right_value243, 0, sizeof(void*));
memset(&right_value244, 0, sizeof(void*));
memset(&right_value245, 0, sizeof(void*));
memset(&right_value246, 0, sizeof(void*));
memset(&right_value247, 0, sizeof(void*));
    tuple_elements_113=((struct sTupleNode*)come_null_check(self, "06str.c", 649))->tuple_elements;
    __freed_obj__ = 0;
    tuple_types_114=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value194=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value193=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "06str.c", 650))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value193);
    if(right_value193 && right_value193 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value193, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value193;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value194);
    if(right_value194 && right_value194 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value194, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value194;
    __freed_obj__ = 0;
    tuple_values_115=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value196=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value195=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 651))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value195);
    if(right_value195 && right_value195 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value195, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value195;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value196);
    if(right_value196 && right_value196 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value196, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value196;
    __freed_obj__ = 0;
    for(
    o2_saved_116=(tuple_elements_113),it_117=list$1sNodeph_begin(((struct list$1sNodeph*)come_null_check((o2_saved_116), "06str.c", 665))) ,    __freed_obj__ = 0, 
    0;    _for_condtionalA5=    !list$1sNodeph_end(((struct list$1sNodeph*)come_null_check((o2_saved_116), "06str.c", 665))) ,    __freed_obj__ = 0, 
    _for_condtionalA5;    it_117=list$1sNodeph_next(((struct list$1sNodeph*)come_null_check((o2_saved_116), "06str.c", 665))) ,    __freed_obj__ = 0, 
    0    ){
        if(_if_conditional171=!((struct sNode*)come_null_check(it_117, "06str.c", 658))->compile(((struct sNode*)come_null_check(it_117, "06str.c", 658))->_protocol_obj,info),        __freed_obj__ = 0, 
        _if_conditional171) {
            __result119__ = (_Bool)0;
            if(tuple_types_114 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,tuple_types_114, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(tuple_values_115 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,tuple_values_115, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
            return __result119__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        come_value_118=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value197=get_value_from_stack(-1,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value197);
        if(right_value197 && right_value197 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value197, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value197;
        __freed_obj__ = 0;
        dec_stack_ptr(1,info);
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(tuple_values_115, "06str.c", 661)),(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value201=CVALUE_clone(come_value_118)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value201);
        if(right_value201 && right_value201 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value201, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value201;
        __freed_obj__ = 0;
        list$1sTypeph_push_back(((struct list$1sTypeph*)come_null_check(tuple_types_114, "06str.c", 662)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value202=sType_clone(((struct CVALUE*)come_null_check(come_value_118, "06str.c", 662))->type)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value202);
        if(right_value202 && right_value202 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value202, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value202;
        __freed_obj__ = 0;
        if(come_value_118 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_118, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    type_120=(struct sType*)come_increment_ref_count(((struct sType*)(right_value205=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value203=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 665)))),((char*)(right_value204=xsprintf("tuple%d",list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(tuple_types_114, "06str.c", 665)))))),(_Bool)0,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value203);
    if(right_value203 && right_value203 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value203, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value203;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value204);
    if(right_value204 && right_value204 != __result_obj__ && !__freed_obj__) { right_value204 = come_decrement_ref_count(right_value204, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[5] = right_value204;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value205);
    if(right_value205 && right_value205 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value205, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[6] = right_value205;
    __freed_obj__ = 0;
    for(
    o2_saved_121=(struct list$1sTypeph*)come_increment_ref_count((tuple_types_114)),it_124=list$1sTypeph_begin(((struct list$1sTypeph*)come_null_check((o2_saved_121), "06str.c", 671))) ,    __freed_obj__ = 0, 
    0;    _for_condtionalA6=    !list$1sTypeph_end(((struct list$1sTypeph*)come_null_check((o2_saved_121), "06str.c", 671))) ,    __freed_obj__ = 0, 
    _for_condtionalA6;    it_124=list$1sTypeph_next(((struct list$1sTypeph*)come_null_check((o2_saved_121), "06str.c", 671))) ,    __freed_obj__ = 0, 
    0    ){
        list$1sTypeph_push_back(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(type_120, "06str.c", 668))->mGenericsTypes, "06str.c", 668)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value206=sType_clone(it_124)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value206);
        if(right_value206 && right_value206 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value206, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value206;
        __freed_obj__ = 0;
    }
    if(o2_saved_121 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_121, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    obj_value_127=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value207=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 671))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value207);
    if(right_value207 && right_value207 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value207, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[7] = right_value207;
    __freed_obj__ = 0;
    num_string_128=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value209=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value208=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 673))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value208);
    if(right_value208 && right_value208 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value208, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[8] = right_value208;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 9, right_value209);
    if(right_value209 && right_value209 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value209, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[9] = right_value209;
    __freed_obj__ = 0;
    buffer_append_str(((struct buffer*)come_null_check(num_string_128, "06str.c", 675)),"1");
    __freed_obj__ = 0;
    type2_129=(struct sType*)come_increment_ref_count(((struct sType*)(right_value210=solve_generics(type_120,type_120,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 10, right_value210);
    if(right_value210 && right_value210 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value210, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[10] = right_value210;
    __freed_obj__ = 0;
    come_clear_stackframe();
    type_name_130=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("06str.c", 679),((struct optional$2charphbool*)(right_value211=make_type_name_string(type2_129,(_Bool)0,(_Bool)1,(_Bool)0,info))))));
    come_pop_stackframe();
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 11, right_value211);
    if(right_value211 && right_value211 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value211, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[11] = right_value211;
    __freed_obj__ = 0;
    __dec_obj88=((struct CVALUE*)come_null_check(obj_value_127, "06str.c", 681))->c_value;
    ((struct CVALUE*)come_null_check(obj_value_127, "06str.c", 681))->c_value=(char*)come_increment_ref_count(((char*)(right_value213=xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d)",type_name_130,type_name_130,((char*)(right_value212=buffer_to_string(((struct buffer*)come_null_check(num_string_128, "06str.c", 681))))),((struct sInfo*)come_null_check(info, "06str.c", 681))->sname,((struct sInfo*)come_null_check(info, "06str.c", 681))->sline))));
    if(__dec_obj88) { __dec_obj88 = come_decrement_ref_count(__dec_obj88, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 12, right_value212);
    if(right_value212 && right_value212 != __result_obj__ && !__freed_obj__) { right_value212 = come_decrement_ref_count(right_value212, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[12] = right_value212;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 13, right_value213);
    if(right_value213 && right_value213 != __result_obj__ && !__freed_obj__) { right_value213 = come_decrement_ref_count(right_value213, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[13] = right_value213;
    __freed_obj__ = 0;
    type3_131=(struct sType*)come_increment_ref_count(((struct sType*)(right_value214=sType_clone(type2_129))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 14, right_value214);
    if(right_value214 && right_value214 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value214, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[14] = right_value214;
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(type3_131, "06str.c", 684))->mPointerNum++;
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(type3_131, "06str.c", 685))->mHeap=(_Bool)1;
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(type2_129, "06str.c", 686))->mHeap=(_Bool)1;
    __freed_obj__ = 0;
    __dec_obj89=((struct CVALUE*)come_null_check(obj_value_127, "06str.c", 687))->type;
    ((struct CVALUE*)come_null_check(obj_value_127, "06str.c", 687))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value215=sType_clone(type2_129))));
    if(__dec_obj89) { come_call_finalizer(sType_finalize,__dec_obj89, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 15, right_value215);
    if(right_value215 && right_value215 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value215, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[15] = right_value215;
    __freed_obj__ = 0;
    __dec_obj90=((struct CVALUE*)come_null_check(obj_value_127, "06str.c", 688))->c_value;
    ((struct CVALUE*)come_null_check(obj_value_127, "06str.c", 688))->c_value=(char*)come_increment_ref_count(((char*)(right_value216=append_object_to_right_values(((struct CVALUE*)come_null_check(obj_value_127, "06str.c", 688))->c_value,(struct sType*)come_increment_ref_count(type3_131),info))));
    if(__dec_obj90) { __dec_obj90 = come_decrement_ref_count(__dec_obj90, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 16, right_value216);
    if(right_value216 && right_value216 != __result_obj__ && !__freed_obj__) { right_value216 = come_decrement_ref_count(right_value216, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[16] = right_value216;
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(obj_value_127, "06str.c", 689))->type, "06str.c", 689))->mPointerNum++;
    __freed_obj__ = 0;
    ((struct CVALUE*)come_null_check(obj_value_127, "06str.c", 690))->var=((void*)0);
    __freed_obj__ = 0;
    obj_type_132=(struct sType*)come_increment_ref_count(((struct sType*)(right_value217=sType_clone(type2_129))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 17, right_value217);
    if(right_value217 && right_value217 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value217, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[17] = right_value217;
    __freed_obj__ = 0;
    fun_name_133="initialize";
    __freed_obj__ = 0;
    generics_fun_name_134=(char*)come_increment_ref_count(((char*)(right_value220=string_to_string(((char*)come_null_check(((char*)(right_value219=make_generics_function(obj_type_132,(char*)come_increment_ref_count(((char*)(right_value218=__builtin_string(fun_name_133)))),info))), "06str.c", 695))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 18, right_value218);
    if(right_value218 && right_value218 != __result_obj__ && !__freed_obj__) { right_value218 = come_decrement_ref_count(right_value218, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[18] = right_value218;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 19, right_value219);
    if(right_value219 && right_value219 != __result_obj__ && !__freed_obj__) { right_value219 = come_decrement_ref_count(right_value219, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[19] = right_value219;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 20, right_value220);
    if(right_value220 && right_value220 != __result_obj__ && !__freed_obj__) { right_value220 = come_decrement_ref_count(right_value220, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[20] = right_value220;
    __freed_obj__ = 0;
    fun_135=((struct sFun*)(right_value221=map$2charphsFunph_at(((struct map$2charphsFunph*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 697))->funcs, "06str.c", 697)),generics_fun_name_134,((void*)0))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 21, right_value221);
    if(right_value221 && right_value221 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value221, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[21] = right_value221;
    __freed_obj__ = 0;
    if(_if_conditional180=fun_135==((void*)0),    __freed_obj__ = 0, 
    _if_conditional180) {
        __dec_obj91=generics_fun_name_134;
        generics_fun_name_134=(char*)come_increment_ref_count(((char*)(right_value223=create_method_name(obj_type_132,(_Bool)0,((char*)(right_value222=__builtin_string(fun_name_133))),info))));
        if(__dec_obj91) { __dec_obj91 = come_decrement_ref_count(__dec_obj91, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value222);
        if(right_value222 && right_value222 != __result_obj__ && !__freed_obj__) { right_value222 = come_decrement_ref_count(right_value222, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value222;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value223);
        if(right_value223 && right_value223 != __result_obj__ && !__freed_obj__) { right_value223 = come_decrement_ref_count(right_value223, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value223;
        __freed_obj__ = 0;
        fun_135=((struct sFun*)(right_value224=map$2charphsFunph_at(((struct map$2charphsFunph*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 702))->funcs, "06str.c", 702)),generics_fun_name_134,((void*)0))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value224);
        if(right_value224 && right_value224 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value224, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value224;
        __freed_obj__ = 0;
        if(_if_conditional181=fun_135==((void*)0),        __freed_obj__ = 0, 
        _if_conditional181) {
            err_msg(info,"function not found(%s) at method(%s)(2)\n",generics_fun_name_134,((struct sFun*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 705))->come_fun, "06str.c", 705))->mName);
            __freed_obj__ = 0;
            __result129__ = (_Bool)1;
            if(tuple_types_114 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,tuple_types_114, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(tuple_values_115 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,tuple_values_115, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(type_120 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_120, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(obj_value_127 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,obj_value_127, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(num_string_128 && !__freed_obj__) { come_call_finalizer(buffer_finalize,num_string_128, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(type2_129 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_129, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(type_name_130 && !__freed_obj__) { type_name_130 = come_decrement_ref_count(type_name_130, (void*)0, (void*)0, 0, 0, 0); }
            if(type3_131 && !__freed_obj__) { come_call_finalizer(sType_finalize,type3_131, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(obj_type_132 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_132, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(generics_fun_name_134 && !__freed_obj__) { generics_fun_name_134 = come_decrement_ref_count(generics_fun_name_134, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
            return __result129__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    result_type_136=(struct sType*)come_increment_ref_count(((struct sType*)(right_value225=sType_clone(((struct sFun*)come_null_check(fun_135, "06str.c", 710))->mResultType))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 22, right_value225);
    if(right_value225 && right_value225 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value225, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[22] = right_value225;
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(result_type_136, "06str.c", 711))->mStatic=(_Bool)0;
    __freed_obj__ = 0;
    come_params_137=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value227=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value226=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 713))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 23, right_value226);
    if(right_value226 && right_value226 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value226, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[23] = right_value226;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 24, right_value227);
    if(right_value227 && right_value227 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value227, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[24] = right_value227;
    __freed_obj__ = 0;
    if(_if_conditional182=((struct sType*)come_null_check(optional$2sTypephbool_value((come_clear_stackframe(), come_push_stackframe("06str.c", 742),__exception_result_var_a2=((struct optional$2sTypephbool*)(right_value228=list$1sTypephp_operator_load_element(((struct sFun*)come_null_check(fun_135, "06str.c", 742))->mParamTypes,0))), come_pop_stackframe(), __exception_result_var_a2)), "06str.c", 742))->mHeap&&((struct sType*)come_null_check(((struct CVALUE*)come_null_check(obj_value_127, "06str.c", 742))->type, "06str.c", 742))->mHeap,    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 25, right_value228),
    (right_value228 && right_value228 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2sTypephboolp_finalize,right_value228, (void*)0, (void*)0, 0, 1, 0, 0):0,
    __right_value_freed_obj[25] = right_value228, 
    __freed_obj__ = 0, 
    _if_conditional182) {
        if(_if_conditional183=((struct CVALUE*)come_null_check(obj_value_127, "06str.c", 741))->var,        __freed_obj__ = 0, 
        _if_conditional183) {
            if(_if_conditional184=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(obj_value_127, "06str.c", 733))->var, "06str.c", 733))->mType, "06str.c", 733))->mDelegate,            __freed_obj__ = 0, 
            _if_conditional184) {
                __dec_obj92=((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(obj_value_127, "06str.c", 718))->var, "06str.c", 718))->mCValueName;
                ((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(obj_value_127, "06str.c", 718))->var, "06str.c", 718))->mCValueName=((void*)0);
                if(__dec_obj92) { __dec_obj92 = come_decrement_ref_count(__dec_obj92, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional185=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(obj_value_127, "06str.c", 733))->var, "06str.c", 733))->mType, "06str.c", 733))->mShare,                __freed_obj__ = 0, 
                _if_conditional185) {
                    __dec_obj93=((struct CVALUE*)come_null_check(obj_value_127, "06str.c", 721))->c_value;
                    ((struct CVALUE*)come_null_check(obj_value_127, "06str.c", 721))->c_value=(char*)come_increment_ref_count(((char*)(right_value229=increment_ref_count_object(((struct CVALUE*)come_null_check(obj_value_127, "06str.c", 721))->type,((struct CVALUE*)come_null_check(obj_value_127, "06str.c", 721))->c_value,info))));
                    if(__dec_obj93) { __dec_obj93 = come_decrement_ref_count(__dec_obj93, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value229);
                    if(right_value229 && right_value229 != __result_obj__ && !__freed_obj__) { right_value229 = come_decrement_ref_count(right_value229, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value229;
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional186=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(obj_value_127, "06str.c", 733))->var, "06str.c", 733))->mType, "06str.c", 733))->mClone,                    __freed_obj__ = 0, 
                    _if_conditional186) {
                        __dec_obj94=((struct CVALUE*)come_null_check(obj_value_127, "06str.c", 724))->c_value;
                        ((struct CVALUE*)come_null_check(obj_value_127, "06str.c", 724))->c_value=(char*)come_increment_ref_count(((char*)(right_value230=increment_ref_count_object(((struct CVALUE*)come_null_check(obj_value_127, "06str.c", 724))->type,((struct CVALUE*)come_null_check(obj_value_127, "06str.c", 724))->c_value,info))));
                        if(__dec_obj94) { __dec_obj94 = come_decrement_ref_count(__dec_obj94, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value230);
                        if(right_value230 && right_value230 != __result_obj__ && !__freed_obj__) { right_value230 = come_decrement_ref_count(right_value230, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value230;
                        __freed_obj__ = 0;
                    }
                    else {
                        __dec_obj95=((struct CVALUE*)come_null_check(obj_value_127, "06str.c", 727))->c_value;
                        ((struct CVALUE*)come_null_check(obj_value_127, "06str.c", 727))->c_value=(char*)come_increment_ref_count(((char*)(right_value231=increment_ref_count_object(((struct CVALUE*)come_null_check(obj_value_127, "06str.c", 727))->type,((struct CVALUE*)come_null_check(obj_value_127, "06str.c", 727))->c_value,info))));
                        if(__dec_obj95) { __dec_obj95 = come_decrement_ref_count(__dec_obj95, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value231);
                        if(right_value231 && right_value231 != __result_obj__ && !__freed_obj__) { right_value231 = come_decrement_ref_count(right_value231, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value231;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional187=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(obj_value_127, "06str.c", 740))->type, "06str.c", 740))->mDelegate,            __freed_obj__ = 0, 
            _if_conditional187) {
            }
            else {
                __dec_obj96=((struct CVALUE*)come_null_check(obj_value_127, "06str.c", 738))->c_value;
                ((struct CVALUE*)come_null_check(obj_value_127, "06str.c", 738))->c_value=(char*)come_increment_ref_count(((char*)(right_value232=increment_ref_count_object(((struct CVALUE*)come_null_check(obj_value_127, "06str.c", 738))->type,((struct CVALUE*)come_null_check(obj_value_127, "06str.c", 738))->c_value,info))));
                if(__dec_obj96) { __dec_obj96 = come_decrement_ref_count(__dec_obj96, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value232);
                if(right_value232 && right_value232 != __result_obj__ && !__freed_obj__) { right_value232 = come_decrement_ref_count(right_value232, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value232;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(come_params_137, "06str.c", 742)),(struct CVALUE*)come_increment_ref_count(obj_value_127));
    __freed_obj__ = 0;
    i_138=1;
    __freed_obj__ = 0;
    for(
    o2_saved_139=(struct list$1CVALUEph*)come_increment_ref_count((tuple_values_115)),it_140=list$1CVALUEph_begin(((struct list$1CVALUEph*)come_null_check((o2_saved_139), "06str.c", 780))) ,    __freed_obj__ = 0, 
    0;    _for_condtionalA7=    !list$1CVALUEph_end(((struct list$1CVALUEph*)come_null_check((o2_saved_139), "06str.c", 780))) ,    __freed_obj__ = 0, 
    _for_condtionalA7;    it_140=list$1CVALUEph_next(((struct list$1CVALUEph*)come_null_check((o2_saved_139), "06str.c", 780))) ,    __freed_obj__ = 0, 
    0    ){
        come_value_141=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value233=CVALUE_clone(it_140))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value233);
        if(right_value233 && right_value233 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value233, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value233;
        __freed_obj__ = 0;
        if(_if_conditional188=optional$2sTypephbool_value((come_clear_stackframe(), come_push_stackframe("06str.c", 775),__exception_result_var_a3=((struct optional$2sTypephbool*)(right_value234=list$1sTypephp_operator_load_element(((struct sFun*)come_null_check(fun_135, "06str.c", 775))->mParamTypes,i_138))), come_pop_stackframe(), __exception_result_var_a3))&&((struct sType*)come_null_check(optional$2sTypephbool_value((come_clear_stackframe(), come_push_stackframe("06str.c", 775),__exception_result_var_a4=((struct optional$2sTypephbool*)(right_value235=list$1sTypephp_operator_load_element(((struct sFun*)come_null_check(fun_135, "06str.c", 775))->mParamTypes,i_138))), come_pop_stackframe(), __exception_result_var_a4)), "06str.c", 775))->mHeap&&((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_141, "06str.c", 775))->type, "06str.c", 775))->mHeap,        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value234),
        (right_value234 && right_value234 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2sTypephboolp_finalize,right_value234, (void*)0, (void*)0, 0, 1, 0, 0):0,
        __right_value_freed_obj[1] = right_value234, 
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value235),
        (right_value235 && right_value235 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2sTypephboolp_finalize,right_value235, (void*)0, (void*)0, 0, 1, 0, 0):0,
        __right_value_freed_obj[2] = right_value235, 
        __freed_obj__ = 0, 
        _if_conditional188) {
            if(_if_conditional189=((struct CVALUE*)come_null_check(come_value_141, "06str.c", 774))->var,            __freed_obj__ = 0, 
            _if_conditional189) {
                if(_if_conditional190=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(come_value_141, "06str.c", 766))->var, "06str.c", 766))->mType, "06str.c", 766))->mDelegate,                __freed_obj__ = 0, 
                _if_conditional190) {
                    __dec_obj97=((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(come_value_141, "06str.c", 751))->var, "06str.c", 751))->mCValueName;
                    ((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(come_value_141, "06str.c", 751))->var, "06str.c", 751))->mCValueName=((void*)0);
                    if(__dec_obj97) { __dec_obj97 = come_decrement_ref_count(__dec_obj97, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional191=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(come_value_141, "06str.c", 766))->var, "06str.c", 766))->mType, "06str.c", 766))->mShare,                    __freed_obj__ = 0, 
                    _if_conditional191) {
                        __dec_obj98=((struct CVALUE*)come_null_check(come_value_141, "06str.c", 754))->c_value;
                        ((struct CVALUE*)come_null_check(come_value_141, "06str.c", 754))->c_value=(char*)come_increment_ref_count(((char*)(right_value236=increment_ref_count_object(((struct CVALUE*)come_null_check(come_value_141, "06str.c", 754))->type,((struct CVALUE*)come_null_check(come_value_141, "06str.c", 754))->c_value,info))));
                        if(__dec_obj98) { __dec_obj98 = come_decrement_ref_count(__dec_obj98, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value236);
                        if(right_value236 && right_value236 != __result_obj__ && !__freed_obj__) { right_value236 = come_decrement_ref_count(right_value236, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value236;
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional192=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(come_value_141, "06str.c", 766))->var, "06str.c", 766))->mType, "06str.c", 766))->mClone,                        __freed_obj__ = 0, 
                        _if_conditional192) {
                            __dec_obj99=((struct CVALUE*)come_null_check(come_value_141, "06str.c", 757))->c_value;
                            ((struct CVALUE*)come_null_check(come_value_141, "06str.c", 757))->c_value=(char*)come_increment_ref_count(((char*)(right_value237=increment_ref_count_object(((struct CVALUE*)come_null_check(come_value_141, "06str.c", 757))->type,((struct CVALUE*)come_null_check(come_value_141, "06str.c", 757))->c_value,info))));
                            if(__dec_obj99) { __dec_obj99 = come_decrement_ref_count(__dec_obj99, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value237);
                            if(right_value237 && right_value237 != __result_obj__ && !__freed_obj__) { right_value237 = come_decrement_ref_count(right_value237, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value237;
                            __freed_obj__ = 0;
                        }
                        else {
                            __dec_obj100=((struct CVALUE*)come_null_check(come_value_141, "06str.c", 760))->c_value;
                            ((struct CVALUE*)come_null_check(come_value_141, "06str.c", 760))->c_value=(char*)come_increment_ref_count(((char*)(right_value238=increment_ref_count_object(((struct CVALUE*)come_null_check(come_value_141, "06str.c", 760))->type,((struct CVALUE*)come_null_check(come_value_141, "06str.c", 760))->c_value,info))));
                            if(__dec_obj100) { __dec_obj100 = come_decrement_ref_count(__dec_obj100, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value238);
                            if(right_value238 && right_value238 != __result_obj__ && !__freed_obj__) { right_value238 = come_decrement_ref_count(right_value238, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value238;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional193=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_141, "06str.c", 773))->type, "06str.c", 773))->mDelegate,                __freed_obj__ = 0, 
                _if_conditional193) {
                }
                else {
                    __dec_obj101=((struct CVALUE*)come_null_check(come_value_141, "06str.c", 771))->c_value;
                    ((struct CVALUE*)come_null_check(come_value_141, "06str.c", 771))->c_value=(char*)come_increment_ref_count(((char*)(right_value239=increment_ref_count_object(((struct CVALUE*)come_null_check(come_value_141, "06str.c", 771))->type,((struct CVALUE*)come_null_check(come_value_141, "06str.c", 771))->c_value,info))));
                    if(__dec_obj101) { __dec_obj101 = come_decrement_ref_count(__dec_obj101, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value239);
                    if(right_value239 && right_value239 != __result_obj__ && !__freed_obj__) { right_value239 = come_decrement_ref_count(right_value239, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value239;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(come_params_137, "06str.c", 775)),(struct CVALUE*)come_increment_ref_count(come_value_141));
        __freed_obj__ = 0;
        i_138++;
        __freed_obj__ = 0;
        if(come_value_141 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_141, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    if(o2_saved_139 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,o2_saved_139, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    buf_142=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value241=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value240=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 780))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 26, right_value240);
    if(right_value240 && right_value240 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value240, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[26] = right_value240;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 27, right_value241);
    if(right_value241 && right_value241 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value241, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[27] = right_value241;
    __freed_obj__ = 0;
    buffer_append_str(((struct buffer*)come_null_check(buf_142, "06str.c", 782)),generics_fun_name_134);
    __freed_obj__ = 0;
    buffer_append_str(((struct buffer*)come_null_check(buf_142, "06str.c", 783)),"(");
    __freed_obj__ = 0;
    j_143=0;
    __freed_obj__ = 0;
    for(
    o2_saved_144=(struct list$1CVALUEph*)come_increment_ref_count((come_params_137)),it_145=list$1CVALUEph_begin(((struct list$1CVALUEph*)come_null_check((o2_saved_144), "06str.c", 795))) ,    __freed_obj__ = 0, 
    0;    _for_condtionalA8=    !list$1CVALUEph_end(((struct list$1CVALUEph*)come_null_check((o2_saved_144), "06str.c", 795))) ,    __freed_obj__ = 0, 
    _for_condtionalA8;    it_145=list$1CVALUEph_next(((struct list$1CVALUEph*)come_null_check((o2_saved_144), "06str.c", 795))) ,    __freed_obj__ = 0, 
    0    ){
        buffer_append_str(((struct buffer*)come_null_check(buf_142, "06str.c", 787)),((struct CVALUE*)come_null_check(it_145, "06str.c", 787))->c_value);
        __freed_obj__ = 0;
        if(_if_conditional194=j_143!=list$1CVALUEph_length(((struct list$1CVALUEph*)come_null_check(come_params_137, "06str.c", 793)))-1,        __freed_obj__ = 0, 
        _if_conditional194) {
            buffer_append_str(((struct buffer*)come_null_check(buf_142, "06str.c", 790)),",");
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        j_143++;
        __freed_obj__ = 0;
    }
    if(o2_saved_144 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,o2_saved_144, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    buffer_append_str(((struct buffer*)come_null_check(buf_142, "06str.c", 795)),")");
    __freed_obj__ = 0;
    come_value2_146=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value242=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 797))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 28, right_value242);
    if(right_value242 && right_value242 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value242, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[28] = right_value242;
    __freed_obj__ = 0;
    __dec_obj102=((struct CVALUE*)come_null_check(come_value2_146, "06str.c", 799))->c_value;
    ((struct CVALUE*)come_null_check(come_value2_146, "06str.c", 799))->c_value=(char*)come_increment_ref_count(((char*)(right_value243=buffer_to_string(((struct buffer*)come_null_check(buf_142, "06str.c", 799))))));
    if(__dec_obj102) { __dec_obj102 = come_decrement_ref_count(__dec_obj102, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 29, right_value243);
    if(right_value243 && right_value243 != __result_obj__ && !__freed_obj__) { right_value243 = come_decrement_ref_count(right_value243, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[29] = right_value243;
    __freed_obj__ = 0;
    if(_if_conditional195=((struct sType*)come_null_check(result_type_136, "06str.c", 805))->mHeap,    __freed_obj__ = 0, 
    _if_conditional195) {
        __dec_obj103=((struct CVALUE*)come_null_check(come_value2_146, "06str.c", 802))->c_value;
        ((struct CVALUE*)come_null_check(come_value2_146, "06str.c", 802))->c_value=(char*)come_increment_ref_count(((char*)(right_value245=append_object_to_right_values(((char*)(right_value244=buffer_to_string(((struct buffer*)come_null_check(buf_142, "06str.c", 802))))),(struct sType*)come_increment_ref_count(result_type_136),info))));
        if(__dec_obj103) { __dec_obj103 = come_decrement_ref_count(__dec_obj103, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value244);
        if(right_value244 && right_value244 != __result_obj__ && !__freed_obj__) { right_value244 = come_decrement_ref_count(right_value244, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value244;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value245);
        if(right_value245 && right_value245 != __result_obj__ && !__freed_obj__) { right_value245 = come_decrement_ref_count(right_value245, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value245;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __dec_obj104=((struct CVALUE*)come_null_check(come_value2_146, "06str.c", 805))->type;
    ((struct CVALUE*)come_null_check(come_value2_146, "06str.c", 805))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value246=sType_clone(result_type_136))));
    if(__dec_obj104) { come_call_finalizer(sType_finalize,__dec_obj104, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 30, right_value246);
    if(right_value246 && right_value246 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value246, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[30] = right_value246;
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value2_146, "06str.c", 806))->type, "06str.c", 806))->mStatic=(_Bool)0;
    __freed_obj__ = 0;
    ((struct CVALUE*)come_null_check(come_value2_146, "06str.c", 807))->var=((void*)0);
    __freed_obj__ = 0;
    add_come_last_code(info,"%s;\n",((char*)(right_value247=buffer_to_string(((struct buffer*)come_null_check(buf_142, "06str.c", 809))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 31, right_value247);
    if(right_value247 && right_value247 != __result_obj__ && !__freed_obj__) { right_value247 = come_decrement_ref_count(right_value247, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[31] = right_value247;
    __freed_obj__ = 0;
    list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 811))->stack, "06str.c", 811)),(struct CVALUE*)come_increment_ref_count(come_value2_146));
    __freed_obj__ = 0;
    __result130__ = (_Bool)1;
    if(tuple_types_114 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,tuple_types_114, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(tuple_values_115 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,tuple_values_115, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_120 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_120, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(obj_value_127 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,obj_value_127, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(num_string_128 && !__freed_obj__) { come_call_finalizer(buffer_finalize,num_string_128, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type2_129 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_129, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_name_130 && !__freed_obj__) { type_name_130 = come_decrement_ref_count(type_name_130, (void*)0, (void*)0, 0, 0, 0); }
    if(type3_131 && !__freed_obj__) { come_call_finalizer(sType_finalize,type3_131, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(obj_type_132 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_132, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(generics_fun_name_134 && !__freed_obj__) { generics_fun_name_134 = come_decrement_ref_count(generics_fun_name_134, (void*)0, (void*)0, 0, 0, 0); }
    if(result_type_136 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_136, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_params_137 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,come_params_137, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(buf_142 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_142, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value2_146 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value2_146, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result130__;
    __freed_obj__ = 0;
    if(tuple_types_114 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,tuple_types_114, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(tuple_values_115 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,tuple_values_115, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_120 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_120, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(obj_value_127 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,obj_value_127, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(num_string_128 && !__freed_obj__) { come_call_finalizer(buffer_finalize,num_string_128, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type2_129 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_129, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_name_130 && !__freed_obj__) { type_name_130 = come_decrement_ref_count(type_name_130, (void*)0, (void*)0, 0, 0, 0); }
    if(type3_131 && !__freed_obj__) { come_call_finalizer(sType_finalize,type3_131, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(obj_type_132 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_132, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(generics_fun_name_134 && !__freed_obj__) { generics_fun_name_134 = come_decrement_ref_count(generics_fun_name_134, (void*)0, (void*)0, 0, 0, 0); }
    if(result_type_136 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_136, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_params_137 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,come_params_137, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(buf_142 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_142, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value2_146 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value2_146, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct CVALUE* CVALUE_clone(struct CVALUE* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional172;
struct CVALUE* __result120__;
void* right_value198;
struct CVALUE* result_119;
_Bool _if_conditional173;
void* right_value199;
char* __dec_obj86;
_Bool _if_conditional174;
void* right_value200;
struct sType* __dec_obj87;
_Bool _if_conditional175;
struct CVALUE* __result121__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value198, 0, sizeof(void*));
memset(&result_119, 0, sizeof(struct CVALUE*));
memset(&right_value199, 0, sizeof(void*));
memset(&right_value200, 0, sizeof(void*));
            if(_if_conditional172=self==(void*)0,            __freed_obj__ = 0, 
            _if_conditional172) {
                __result120__ = __result_obj__ = (void*)0;
                __freed_obj__ = 0;
                return __result120__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            result_119=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value198=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value198);
            if(right_value198 && right_value198 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value198, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value198;
            __freed_obj__ = 0;
            if(_if_conditional173=self!=((void*)0)&&((struct CVALUE*)come_null_check(self, "CVALUE_clone", 5))->c_value!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional173) {
                __dec_obj86=((struct CVALUE*)come_null_check(result_119, "CVALUE_clone", 4))->c_value;
                ((struct CVALUE*)come_null_check(result_119, "CVALUE_clone", 4))->c_value=(char*)come_increment_ref_count(((char*)(right_value199=string_clone(((struct CVALUE*)come_null_check(self, "CVALUE_clone", 4))->c_value))));
                if(__dec_obj86) { __dec_obj86 = come_decrement_ref_count(__dec_obj86, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value199);
                if(right_value199 && right_value199 != __result_obj__ && !__freed_obj__) { right_value199 = come_decrement_ref_count(right_value199, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value199;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional174=self!=((void*)0)&&((struct CVALUE*)come_null_check(self, "CVALUE_clone", 6))->type!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional174) {
                __dec_obj87=((struct CVALUE*)come_null_check(result_119, "CVALUE_clone", 5))->type;
                ((struct CVALUE*)come_null_check(result_119, "CVALUE_clone", 5))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value200=sType_clone(((struct CVALUE*)come_null_check(self, "CVALUE_clone", 5))->type))));
                if(__dec_obj87) { come_call_finalizer(sType_finalize,__dec_obj87, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value200);
                if(right_value200 && right_value200 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value200, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value200;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional175=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional175) {
                ((struct CVALUE*)come_null_check(result_119, "CVALUE_clone", 6))->var=((struct CVALUE*)come_null_check(self, "CVALUE_clone", 6))->var;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __result121__ = __result_obj__ = result_119;
            if(result_119 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,result_119, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result121__;
            __freed_obj__ = 0;
            if(result_119 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,result_119, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional176;
struct sType* result_122;
struct sType* __result122__;
_Bool _if_conditional177;
struct sType* __result123__;
struct sType* result_123;
struct sType* __result124__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_122, 0, sizeof(struct sType*));
memset(&result_123, 0, sizeof(struct sType*));
        if(_if_conditional176=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional176) {
            __freed_obj__ = 0;
            memset(&result_122,0,sizeof(struct sType*));
            __freed_obj__ = 0;
            __result122__ = __result_obj__ = result_122;
            __freed_obj__ = 0;
            return __result122__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 336))->it=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 336))->head;
        __freed_obj__ = 0;
        if(_if_conditional177=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 342))->it,        __freed_obj__ = 0, 
        _if_conditional177) {
            __result123__ = __result_obj__ = ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 339))->it, "./comelang2.h", 339))->item;
            __freed_obj__ = 0;
            return __result123__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        memset(&result_123,0,sizeof(struct sType*));
        __freed_obj__ = 0;
        __result124__ = __result_obj__ = result_123;
        __freed_obj__ = 0;
        return __result124__;
        __freed_obj__ = 0;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result125__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __result125__ = self==((void*)0)||((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 366))->it==((void*)0);
        __freed_obj__ = 0;
        return __result125__;
        __freed_obj__ = 0;
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional178;
struct sType* result_125;
struct sType* __result126__;
_Bool _if_conditional179;
struct sType* __result127__;
struct sType* result_126;
struct sType* __result128__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_125, 0, sizeof(struct sType*));
memset(&result_126, 0, sizeof(struct sType*));
        if(_if_conditional178=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional178) {
            __freed_obj__ = 0;
            memset(&result_125,0,sizeof(struct sType*));
            __freed_obj__ = 0;
            __result126__ = __result_obj__ = result_125;
            __freed_obj__ = 0;
            return __result126__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 354))->it=((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 354))->it, "./comelang2.h", 354))->next;
        __freed_obj__ = 0;
        if(_if_conditional179=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 360))->it,        __freed_obj__ = 0, 
        _if_conditional179) {
            __result127__ = __result_obj__ = ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 357))->it, "./comelang2.h", 357))->item;
            __freed_obj__ = 0;
            return __result127__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        memset(&result_126,0,sizeof(struct sType*));
        __freed_obj__ = 0;
        __result128__ = __result_obj__ = result_126;
        __freed_obj__ = 0;
        return __result128__;
        __freed_obj__ = 0;
}

int sTupleNode_sline(struct sTupleNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result131__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result131__ = ((struct sTupleNode*)come_null_check(self, "06str.c", 818))->sline;
    __freed_obj__ = 0;
    return __result131__;
    __freed_obj__ = 0;
}

char* sTupleNode_sname(struct sTupleNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value248;
char* __result132__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value248, 0, sizeof(void*));
    __result132__ = __result_obj__ = ((char*)(right_value248=__builtin_string(((struct sTupleNode*)come_null_check(self, "06str.c", 823))->sname)));
    __freed_obj__ = 0;
    return __result132__;
    __freed_obj__ = 0;
}

struct sNoneNode* sNoneNode_initialize(struct sNoneNode* self, struct sNode* value, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value249;
struct sNode* __dec_obj105;
void* right_value250;
char* __dec_obj106;
struct sNoneNode* __result133__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value249, 0, sizeof(void*));
memset(&right_value250, 0, sizeof(void*));
    __dec_obj105=((struct sNoneNode*)come_null_check(self, "06str.c", 835))->value;
    ((struct sNoneNode*)come_null_check(self, "06str.c", 835))->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value249=sNode_clone(value))));
    if(__dec_obj105) { __dec_obj105 = come_decrement_ref_count(__dec_obj105, ((struct sNode*)__dec_obj105)->finalize, ((struct sNode*)__dec_obj105)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value249);
    if(right_value249 && right_value249 != __result_obj__ && !__freed_obj__) { right_value249 = come_decrement_ref_count(right_value249, ((struct sNode*)right_value249)->finalize, ((struct sNode*)right_value249)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value249;
    __freed_obj__ = 0;
    ((struct sNoneNode*)come_null_check(self, "06str.c", 837))->sline=((struct sInfo*)come_null_check(info, "06str.c", 837))->sline;
    __freed_obj__ = 0;
    __dec_obj106=((struct sNoneNode*)come_null_check(self, "06str.c", 838))->sname;
    ((struct sNoneNode*)come_null_check(self, "06str.c", 838))->sname=(char*)come_increment_ref_count(((char*)(right_value250=__builtin_string(((struct sInfo*)come_null_check(info, "06str.c", 838))->sname))));
    if(__dec_obj106) { __dec_obj106 = come_decrement_ref_count(__dec_obj106, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value250);
    if(right_value250 && right_value250 != __result_obj__ && !__freed_obj__) { right_value250 = come_decrement_ref_count(right_value250, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value250;
    __freed_obj__ = 0;
    __result133__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sNoneNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(value && !__freed_obj__) { value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result133__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sNoneNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(value && !__freed_obj__) { value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0); } 
}

struct sNode* create_none_object(struct sNode* exp, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value251;
void* right_value252;
struct sNode* _inf_value1;
struct sNoneNode* _inf_obj_value1;
void* right_value256;
struct sNode* __result136__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value251, 0, sizeof(void*));
memset(&right_value252, 0, sizeof(void*));
memset(&right_value256, 0, sizeof(void*));
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 845);
    _inf_obj_value1=come_increment_ref_count(((struct sNoneNode*)(right_value252=sNoneNode_initialize((struct sNoneNode*)come_increment_ref_count(((struct sNoneNode*)(right_value251=(struct sNoneNode*)come_calloc(1, sizeof(struct sNoneNode)*(1), "06str.c", 845)))),(struct sNode*)come_increment_ref_count(exp),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sNoneNode_finalize;
    _inf_value1->clone=(void*)sNoneNode_clone;
    _inf_value1->compile=(void*)sNoneNode_compile;
    _inf_value1->sline=(void*)sNoneNode_sline;
    _inf_value1->sname=(void*)sNoneNode_sname;
    _inf_value1->terminated=(void*)sNoneNode_terminated;
    _inf_value1->kind=(void*)sNoneNode_kind;
    __result136__ = __result_obj__ = ((struct sNode*)(right_value256=_inf_value1));
    if(exp && !__freed_obj__) { exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value251);
    if(right_value251 && right_value251 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNoneNode_finalize,right_value251, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value251;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value252);
    if(right_value252 && right_value252 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNoneNode_finalize,right_value252, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value252;
    __freed_obj__ = 0;
    return __result136__;
    __freed_obj__ = 0;
    if(exp && !__freed_obj__) { exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0); } 
}

static void sNoneNode_finalize(struct sNoneNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional198;
_Bool _if_conditional199;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional198=self!=((void*)0)&&((struct sNoneNode*)come_null_check(self, "sNoneNode_finalize", 1))->value!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional198) {
            if(((struct sNoneNode*)come_null_check(self, "sNoneNode_finalize", 0))->value && !__freed_obj__) { ((struct sNoneNode*)come_null_check(self, "sNoneNode_finalize", 0))->value = come_decrement_ref_count(((struct sNoneNode*)come_null_check(self, "sNoneNode_finalize", 0))->value, ((struct sNode*)((struct sNoneNode*)come_null_check(self, "sNoneNode_finalize", 0))->value)->finalize, ((struct sNode*)((struct sNoneNode*)come_null_check(self, "sNoneNode_finalize", 0))->value)->_protocol_obj, 0, 0, 0); } 
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional199=self!=((void*)0)&&((struct sNoneNode*)come_null_check(self, "sNoneNode_finalize", 2))->sname!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional199) {
            if(((struct sNoneNode*)come_null_check(self, "sNoneNode_finalize", 1))->sname && !__freed_obj__) { ((struct sNoneNode*)come_null_check(self, "sNoneNode_finalize", 1))->sname = come_decrement_ref_count(((struct sNoneNode*)come_null_check(self, "sNoneNode_finalize", 1))->sname, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
}

static struct sNoneNode* sNoneNode_clone(struct sNoneNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional200;
struct sNoneNode* __result134__;
void* right_value253;
struct sNoneNode* result_147;
_Bool _if_conditional201;
void* right_value254;
struct sNode* __dec_obj107;
_Bool _if_conditional202;
_Bool _if_conditional203;
void* right_value255;
char* __dec_obj108;
struct sNoneNode* __result135__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value253, 0, sizeof(void*));
memset(&result_147, 0, sizeof(struct sNoneNode*));
memset(&right_value254, 0, sizeof(void*));
memset(&right_value255, 0, sizeof(void*));
        if(_if_conditional200=self==(void*)0,        __freed_obj__ = 0, 
        _if_conditional200) {
            __result134__ = __result_obj__ = (void*)0;
            __freed_obj__ = 0;
            return __result134__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        result_147=(struct sNoneNode*)come_increment_ref_count(((struct sNoneNode*)(right_value253=(struct sNoneNode*)come_calloc(1, sizeof(struct sNoneNode)*(1), "sNoneNode_clone", 3))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value253);
        if(right_value253 && right_value253 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNoneNode_finalize,right_value253, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value253;
        __freed_obj__ = 0;
        if(_if_conditional201=self!=((void*)0)&&((struct sNoneNode*)come_null_check(self, "sNoneNode_clone", 5))->value!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional201) {
            __dec_obj107=((struct sNoneNode*)come_null_check(result_147, "sNoneNode_clone", 4))->value;
            ((struct sNoneNode*)come_null_check(result_147, "sNoneNode_clone", 4))->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value254=sNode_clone(((struct sNoneNode*)come_null_check(self, "sNoneNode_clone", 4))->value))));
            if(__dec_obj107) { __dec_obj107 = come_decrement_ref_count(__dec_obj107, ((struct sNode*)__dec_obj107)->finalize, ((struct sNode*)__dec_obj107)->_protocol_obj, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value254);
            if(right_value254 && right_value254 != __result_obj__ && !__freed_obj__) { right_value254 = come_decrement_ref_count(right_value254, ((struct sNode*)right_value254)->finalize, ((struct sNode*)right_value254)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[0] = right_value254;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional202=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional202) {
            ((struct sNoneNode*)come_null_check(result_147, "sNoneNode_clone", 5))->sline=((struct sNoneNode*)come_null_check(self, "sNoneNode_clone", 5))->sline;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional203=self!=((void*)0)&&((struct sNoneNode*)come_null_check(self, "sNoneNode_clone", 7))->sname!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional203) {
            __dec_obj108=((struct sNoneNode*)come_null_check(result_147, "sNoneNode_clone", 6))->sname;
            ((struct sNoneNode*)come_null_check(result_147, "sNoneNode_clone", 6))->sname=(char*)come_increment_ref_count(((char*)(right_value255=string_clone(((struct sNoneNode*)come_null_check(self, "sNoneNode_clone", 6))->sname))));
            if(__dec_obj108) { __dec_obj108 = come_decrement_ref_count(__dec_obj108, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value255);
            if(right_value255 && right_value255 != __result_obj__ && !__freed_obj__) { right_value255 = come_decrement_ref_count(right_value255, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value255;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __result135__ = __result_obj__ = result_147;
        if(result_147 && !__freed_obj__) { come_call_finalizer(sNoneNode_finalize,result_147, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result135__;
        __freed_obj__ = 0;
        if(result_147 && !__freed_obj__) { come_call_finalizer(sNoneNode_finalize,result_147, (void*)0, (void*)0, 0, 0, 0, 0); }
}

_Bool sNoneNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result137__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result137__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result137__;
    __freed_obj__ = 0;
}

char* sNoneNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value257;
char* __result138__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value257, 0, sizeof(void*));
    __result138__ = __result_obj__ = ((char*)(right_value257=__builtin_string("sNoneNode")));
    __freed_obj__ = 0;
    return __result138__;
    __freed_obj__ = 0;
}

_Bool sNoneNode_compile(struct sNoneNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value258;
void* right_value259;
struct list$1sTypeph* tuple_types_148;
void* right_value260;
void* right_value261;
struct list$1CVALUEph* tuple_values_149;
_Bool _if_conditional204;
_Bool __result139__;
void* right_value262;
struct CVALUE* come_value_150;
_Bool _if_conditional205;
void* right_value266;
void* right_value267;
void* right_value268;
struct sNode* false_node_154;
_Bool _if_conditional208;
_Bool __result141__;
void* right_value269;
struct CVALUE* come_value2_155;
void* right_value270;
void* right_value271;
void* right_value272;
void* right_value273;
struct sType* type_156;
struct list$1sTypeph* o2_saved_157;
struct sType* it_158;
_Bool _for_condtionalA9;
void* right_value274;
void* right_value275;
struct CVALUE* obj_value_159;
void* right_value276;
void* right_value277;
struct buffer* num_string_160;
void* right_value278;
struct sType* type2_161;
void* right_value279;
char* type_name_162;
void* right_value280;
void* right_value281;
char* __dec_obj112;
void* right_value282;
struct sType* type3_163;
void* right_value283;
struct sType* __dec_obj113;
void* right_value284;
char* __dec_obj114;
void* right_value285;
struct sType* obj_type_164;
char* fun_name_165;
void* right_value286;
void* right_value287;
void* right_value288;
char* generics_fun_name_166;
void* right_value289;
struct sFun* fun_167;
_Bool _if_conditional209;
void* right_value290;
void* right_value291;
char* __dec_obj115;
void* right_value292;
_Bool _if_conditional210;
_Bool __result142__;
void* right_value293;
struct sType* result_type_168;
void* right_value294;
void* right_value295;
struct list$1CVALUEph* come_params_169;
void* right_value296;
struct optional$2sTypephbool* __exception_result_var_a5;
_Bool _if_conditional211;
_Bool _if_conditional212;
_Bool _if_conditional213;
char* __dec_obj116;
_Bool _if_conditional214;
void* right_value297;
char* __dec_obj117;
_Bool _if_conditional215;
void* right_value298;
char* __dec_obj118;
void* right_value299;
char* __dec_obj119;
_Bool _if_conditional216;
void* right_value300;
char* __dec_obj120;
int i_170;
struct list$1CVALUEph* o2_saved_171;
struct CVALUE* it_172;
_Bool _for_condtionalA10;
void* right_value301;
struct CVALUE* come_value_173;
void* right_value302;
struct optional$2sTypephbool* __exception_result_var_a6;
void* right_value303;
struct optional$2sTypephbool* __exception_result_var_a7;
_Bool _if_conditional217;
_Bool _if_conditional218;
_Bool _if_conditional219;
char* __dec_obj121;
_Bool _if_conditional220;
void* right_value304;
char* __dec_obj122;
_Bool _if_conditional221;
void* right_value305;
char* __dec_obj123;
void* right_value306;
char* __dec_obj124;
_Bool _if_conditional222;
void* right_value307;
char* __dec_obj125;
void* right_value308;
void* right_value309;
struct buffer* buf_174;
int j_175;
struct list$1CVALUEph* o2_saved_176;
struct CVALUE* it_177;
_Bool _for_condtionalA11;
_Bool _if_conditional223;
void* right_value310;
struct CVALUE* come_value3_178;
void* right_value311;
char* __dec_obj126;
_Bool _if_conditional224;
void* right_value312;
void* right_value313;
char* __dec_obj127;
void* right_value314;
void* right_value315;
void* right_value316;
void* right_value317;
char* __dec_obj128;
void* right_value318;
struct sType* __dec_obj129;
_Bool __result143__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value258, 0, sizeof(void*));
memset(&right_value259, 0, sizeof(void*));
memset(&tuple_types_148, 0, sizeof(struct list$1sTypeph*));
memset(&right_value260, 0, sizeof(void*));
memset(&right_value261, 0, sizeof(void*));
memset(&tuple_values_149, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value262, 0, sizeof(void*));
memset(&come_value_150, 0, sizeof(struct CVALUE*));
memset(&right_value266, 0, sizeof(void*));
memset(&right_value267, 0, sizeof(void*));
memset(&right_value268, 0, sizeof(void*));
memset(&false_node_154, 0, sizeof(struct sNode*));
memset(&right_value269, 0, sizeof(void*));
memset(&come_value2_155, 0, sizeof(struct CVALUE*));
memset(&right_value270, 0, sizeof(void*));
memset(&right_value271, 0, sizeof(void*));
memset(&right_value272, 0, sizeof(void*));
memset(&right_value273, 0, sizeof(void*));
memset(&type_156, 0, sizeof(struct sType*));
memset(&o2_saved_157, 0, sizeof(struct list$1sTypeph*));
memset(&it_158, 0, sizeof(struct sType*));
memset(&right_value274, 0, sizeof(void*));
memset(&right_value275, 0, sizeof(void*));
memset(&obj_value_159, 0, sizeof(struct CVALUE*));
memset(&right_value276, 0, sizeof(void*));
memset(&right_value277, 0, sizeof(void*));
memset(&num_string_160, 0, sizeof(struct buffer*));
memset(&right_value278, 0, sizeof(void*));
memset(&type2_161, 0, sizeof(struct sType*));
memset(&right_value279, 0, sizeof(void*));
memset(&type_name_162, 0, sizeof(char*));
memset(&right_value280, 0, sizeof(void*));
memset(&right_value281, 0, sizeof(void*));
memset(&right_value282, 0, sizeof(void*));
memset(&type3_163, 0, sizeof(struct sType*));
memset(&right_value283, 0, sizeof(void*));
memset(&right_value284, 0, sizeof(void*));
memset(&right_value285, 0, sizeof(void*));
memset(&obj_type_164, 0, sizeof(struct sType*));
memset(&fun_name_165, 0, sizeof(char*));
memset(&right_value286, 0, sizeof(void*));
memset(&right_value287, 0, sizeof(void*));
memset(&right_value288, 0, sizeof(void*));
memset(&generics_fun_name_166, 0, sizeof(char*));
memset(&right_value289, 0, sizeof(void*));
memset(&fun_167, 0, sizeof(struct sFun*));
memset(&right_value290, 0, sizeof(void*));
memset(&right_value291, 0, sizeof(void*));
memset(&right_value292, 0, sizeof(void*));
memset(&right_value293, 0, sizeof(void*));
memset(&result_type_168, 0, sizeof(struct sType*));
memset(&right_value294, 0, sizeof(void*));
memset(&right_value295, 0, sizeof(void*));
memset(&come_params_169, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value296, 0, sizeof(void*));
memset(&right_value297, 0, sizeof(void*));
memset(&right_value298, 0, sizeof(void*));
memset(&right_value299, 0, sizeof(void*));
memset(&right_value300, 0, sizeof(void*));
memset(&i_170, 0, sizeof(int));
memset(&o2_saved_171, 0, sizeof(struct list$1CVALUEph*));
memset(&it_172, 0, sizeof(struct CVALUE*));
memset(&right_value301, 0, sizeof(void*));
memset(&come_value_173, 0, sizeof(struct CVALUE*));
memset(&right_value302, 0, sizeof(void*));
memset(&right_value303, 0, sizeof(void*));
memset(&right_value304, 0, sizeof(void*));
memset(&right_value305, 0, sizeof(void*));
memset(&right_value306, 0, sizeof(void*));
memset(&right_value307, 0, sizeof(void*));
memset(&right_value308, 0, sizeof(void*));
memset(&right_value309, 0, sizeof(void*));
memset(&buf_174, 0, sizeof(struct buffer*));
memset(&j_175, 0, sizeof(int));
memset(&o2_saved_176, 0, sizeof(struct list$1CVALUEph*));
memset(&it_177, 0, sizeof(struct CVALUE*));
memset(&right_value310, 0, sizeof(void*));
memset(&come_value3_178, 0, sizeof(struct CVALUE*));
memset(&right_value311, 0, sizeof(void*));
memset(&right_value312, 0, sizeof(void*));
memset(&right_value313, 0, sizeof(void*));
memset(&right_value314, 0, sizeof(void*));
memset(&right_value315, 0, sizeof(void*));
memset(&right_value316, 0, sizeof(void*));
memset(&right_value317, 0, sizeof(void*));
memset(&right_value318, 0, sizeof(void*));
    tuple_types_148=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value259=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value258=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "06str.c", 860))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value258);
    if(right_value258 && right_value258 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value258, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value258;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value259);
    if(right_value259 && right_value259 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value259, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value259;
    __freed_obj__ = 0;
    tuple_values_149=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value261=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value260=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 861))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value260);
    if(right_value260 && right_value260 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value260, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value260;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value261);
    if(right_value261 && right_value261 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value261, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value261;
    __freed_obj__ = 0;
    if(_if_conditional204=!((struct sNode*)come_null_check(((struct sNoneNode*)come_null_check(self, "06str.c", 867))->value, "06str.c", 867))->compile(((struct sNode*)come_null_check(((struct sNoneNode*)come_null_check(self, "06str.c", 867))->value, "06str.c", 867))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional204) {
        __result139__ = (_Bool)0;
        if(tuple_types_148 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,tuple_types_148, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(tuple_values_149 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,tuple_values_149, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        return __result139__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    come_value_150=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value262=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value262);
    if(right_value262 && right_value262 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value262, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value262;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    if(_if_conditional205=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_150, "06str.c", 1041))->type, "06str.c", 1041))->mNoSolvedGenericsType&&((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_150, "06str.c", 1041))->type, "06str.c", 1041))->mNoSolvedGenericsType, "06str.c", 1041))->v1&&string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_150, "06str.c", 1041))->type, "06str.c", 1041))->mNoSolvedGenericsType, "06str.c", 1041))->v1, "06str.c", 1041))->mClass, "06str.c", 1041))->mName,"optional"),    __freed_obj__ = 0, 
    _if_conditional205) {
        list$1CVALUEph_add(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 871))->stack, "06str.c", 871)),(struct CVALUE*)come_increment_ref_count(come_value_150));
        __freed_obj__ = 0;
    }
    else {
        list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(tuple_values_149, "06str.c", 874)),(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value266=CVALUE_clone(come_value_150)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value266);
        if(right_value266 && right_value266 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value266, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value266;
        __freed_obj__ = 0;
        list$1sTypeph_push_back(((struct list$1sTypeph*)come_null_check(tuple_types_148, "06str.c", 875)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value267=sType_clone(((struct CVALUE*)come_null_check(come_value_150, "06str.c", 875))->type)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value267);
        if(right_value267 && right_value267 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value267, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value267;
        __freed_obj__ = 0;
        false_node_154=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value268=create_false_object(info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value268);
        if(right_value268 && right_value268 != __result_obj__ && !__freed_obj__) { right_value268 = come_decrement_ref_count(right_value268, ((struct sNode*)right_value268)->finalize, ((struct sNode*)right_value268)->_protocol_obj, 1, 0, 0); } 
        __right_value_freed_obj[2] = right_value268;
        __freed_obj__ = 0;
        if(_if_conditional208=!((struct sNode*)come_null_check(false_node_154, "06str.c", 883))->compile(((struct sNode*)come_null_check(false_node_154, "06str.c", 883))->_protocol_obj,info),        __freed_obj__ = 0, 
        _if_conditional208) {
            __result141__ = (_Bool)0;
            if(false_node_154 && !__freed_obj__) { false_node_154 = come_decrement_ref_count(false_node_154, ((struct sNode*)false_node_154)->finalize, ((struct sNode*)false_node_154)->_protocol_obj, 0, 0, 0); } 
            if(tuple_types_148 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,tuple_types_148, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(tuple_values_149 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,tuple_values_149, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(come_value_150 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_150, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
            return __result141__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        come_value2_155=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value269=get_value_from_stack(-1,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value269);
        if(right_value269 && right_value269 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value269, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value269;
        __freed_obj__ = 0;
        dec_stack_ptr(1,info);
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(tuple_values_149, "06str.c", 886)),(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value270=CVALUE_clone(come_value2_155)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value270);
        if(right_value270 && right_value270 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value270, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[4] = right_value270;
        __freed_obj__ = 0;
        list$1sTypeph_push_back(((struct list$1sTypeph*)come_null_check(tuple_types_148, "06str.c", 887)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value271=sType_clone(((struct CVALUE*)come_null_check(come_value2_155, "06str.c", 887))->type)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value271);
        if(right_value271 && right_value271 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value271, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[5] = right_value271;
        __freed_obj__ = 0;
        type_156=(struct sType*)come_increment_ref_count(((struct sType*)(right_value273=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value272=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 889)))),"optional",(_Bool)0,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value272);
        if(right_value272 && right_value272 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value272, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[6] = right_value272;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value273);
        if(right_value273 && right_value273 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value273, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[7] = right_value273;
        __freed_obj__ = 0;
        for(
        o2_saved_157=(struct list$1sTypeph*)come_increment_ref_count((tuple_types_148)),it_158=list$1sTypeph_begin(((struct list$1sTypeph*)come_null_check((o2_saved_157), "06str.c", 895))) ,        __freed_obj__ = 0, 
        0;        _for_condtionalA9=        !list$1sTypeph_end(((struct list$1sTypeph*)come_null_check((o2_saved_157), "06str.c", 895))) ,        __freed_obj__ = 0, 
        _for_condtionalA9;        it_158=list$1sTypeph_next(((struct list$1sTypeph*)come_null_check((o2_saved_157), "06str.c", 895))) ,        __freed_obj__ = 0, 
        0        ){
            list$1sTypeph_push_back(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(type_156, "06str.c", 892))->mGenericsTypes, "06str.c", 892)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value274=sType_clone(it_158)))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value274);
            if(right_value274 && right_value274 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value274, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value274;
            __freed_obj__ = 0;
        }
        if(o2_saved_157 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_157, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        obj_value_159=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value275=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 895))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value275);
        if(right_value275 && right_value275 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value275, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[8] = right_value275;
        __freed_obj__ = 0;
        num_string_160=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value277=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value276=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 897))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 9, right_value276);
        if(right_value276 && right_value276 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value276, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[9] = right_value276;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 10, right_value277);
        if(right_value277 && right_value277 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value277, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[10] = right_value277;
        __freed_obj__ = 0;
        buffer_append_str(((struct buffer*)come_null_check(num_string_160, "06str.c", 899)),"1");
        __freed_obj__ = 0;
        type2_161=(struct sType*)come_increment_ref_count(((struct sType*)(right_value278=solve_generics(type_156,type_156,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 11, right_value278);
        if(right_value278 && right_value278 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value278, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[11] = right_value278;
        __freed_obj__ = 0;
        come_clear_stackframe();
        type_name_162=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("06str.c", 903),((struct optional$2charphbool*)(right_value279=make_type_name_string(type2_161,(_Bool)0,(_Bool)1,(_Bool)0,info))))));
        come_pop_stackframe();
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 12, right_value279);
        if(right_value279 && right_value279 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value279, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[12] = right_value279;
        __freed_obj__ = 0;
        __dec_obj112=((struct CVALUE*)come_null_check(obj_value_159, "06str.c", 905))->c_value;
        ((struct CVALUE*)come_null_check(obj_value_159, "06str.c", 905))->c_value=(char*)come_increment_ref_count(((char*)(right_value281=xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d)",type_name_162,type_name_162,((char*)(right_value280=buffer_to_string(((struct buffer*)come_null_check(num_string_160, "06str.c", 905))))),((struct sInfo*)come_null_check(info, "06str.c", 905))->sname,((struct sInfo*)come_null_check(info, "06str.c", 905))->sline))));
        if(__dec_obj112) { __dec_obj112 = come_decrement_ref_count(__dec_obj112, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 13, right_value280);
        if(right_value280 && right_value280 != __result_obj__ && !__freed_obj__) { right_value280 = come_decrement_ref_count(right_value280, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[13] = right_value280;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 14, right_value281);
        if(right_value281 && right_value281 != __result_obj__ && !__freed_obj__) { right_value281 = come_decrement_ref_count(right_value281, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[14] = right_value281;
        __freed_obj__ = 0;
        type3_163=(struct sType*)come_increment_ref_count(((struct sType*)(right_value282=sType_clone(type2_161))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 15, right_value282);
        if(right_value282 && right_value282 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value282, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[15] = right_value282;
        __freed_obj__ = 0;
        ((struct sType*)come_null_check(type3_163, "06str.c", 908))->mPointerNum++;
        __freed_obj__ = 0;
        ((struct sType*)come_null_check(type3_163, "06str.c", 909))->mHeap=(_Bool)1;
        __freed_obj__ = 0;
        ((struct sType*)come_null_check(type2_161, "06str.c", 910))->mHeap=(_Bool)1;
        __freed_obj__ = 0;
        __dec_obj113=((struct CVALUE*)come_null_check(obj_value_159, "06str.c", 911))->type;
        ((struct CVALUE*)come_null_check(obj_value_159, "06str.c", 911))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value283=sType_clone(type_156))));
        if(__dec_obj113) { come_call_finalizer(sType_finalize,__dec_obj113, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 16, right_value283);
        if(right_value283 && right_value283 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value283, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[16] = right_value283;
        __freed_obj__ = 0;
        __dec_obj114=((struct CVALUE*)come_null_check(obj_value_159, "06str.c", 912))->c_value;
        ((struct CVALUE*)come_null_check(obj_value_159, "06str.c", 912))->c_value=(char*)come_increment_ref_count(((char*)(right_value284=append_object_to_right_values(((struct CVALUE*)come_null_check(obj_value_159, "06str.c", 912))->c_value,(struct sType*)come_increment_ref_count(type3_163),info))));
        if(__dec_obj114) { __dec_obj114 = come_decrement_ref_count(__dec_obj114, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 17, right_value284);
        if(right_value284 && right_value284 != __result_obj__ && !__freed_obj__) { right_value284 = come_decrement_ref_count(right_value284, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[17] = right_value284;
        __freed_obj__ = 0;
        ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(obj_value_159, "06str.c", 913))->type, "06str.c", 913))->mPointerNum++;
        __freed_obj__ = 0;
        ((struct CVALUE*)come_null_check(obj_value_159, "06str.c", 914))->var=((void*)0);
        __freed_obj__ = 0;
        obj_type_164=(struct sType*)come_increment_ref_count(((struct sType*)(right_value285=sType_clone(type2_161))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 18, right_value285);
        if(right_value285 && right_value285 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value285, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[18] = right_value285;
        __freed_obj__ = 0;
        fun_name_165="initialize";
        __freed_obj__ = 0;
        generics_fun_name_166=(char*)come_increment_ref_count(((char*)(right_value288=string_to_string(((char*)come_null_check(((char*)(right_value287=make_generics_function(obj_type_164,(char*)come_increment_ref_count(((char*)(right_value286=__builtin_string(fun_name_165)))),info))), "06str.c", 919))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 19, right_value286);
        if(right_value286 && right_value286 != __result_obj__ && !__freed_obj__) { right_value286 = come_decrement_ref_count(right_value286, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[19] = right_value286;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 20, right_value287);
        if(right_value287 && right_value287 != __result_obj__ && !__freed_obj__) { right_value287 = come_decrement_ref_count(right_value287, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[20] = right_value287;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 21, right_value288);
        if(right_value288 && right_value288 != __result_obj__ && !__freed_obj__) { right_value288 = come_decrement_ref_count(right_value288, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[21] = right_value288;
        __freed_obj__ = 0;
        fun_167=((struct sFun*)(right_value289=map$2charphsFunph_at(((struct map$2charphsFunph*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 921))->funcs, "06str.c", 921)),generics_fun_name_166,((void*)0))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 22, right_value289);
        if(right_value289 && right_value289 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value289, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[22] = right_value289;
        __freed_obj__ = 0;
        if(_if_conditional209=fun_167==((void*)0),        __freed_obj__ = 0, 
        _if_conditional209) {
            __dec_obj115=generics_fun_name_166;
            generics_fun_name_166=(char*)come_increment_ref_count(((char*)(right_value291=create_method_name(obj_type_164,(_Bool)0,((char*)(right_value290=__builtin_string(fun_name_165))),info))));
            if(__dec_obj115) { __dec_obj115 = come_decrement_ref_count(__dec_obj115, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value290);
            if(right_value290 && right_value290 != __result_obj__ && !__freed_obj__) { right_value290 = come_decrement_ref_count(right_value290, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value290;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value291);
            if(right_value291 && right_value291 != __result_obj__ && !__freed_obj__) { right_value291 = come_decrement_ref_count(right_value291, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value291;
            __freed_obj__ = 0;
            fun_167=((struct sFun*)(right_value292=map$2charphsFunph_at(((struct map$2charphsFunph*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 926))->funcs, "06str.c", 926)),generics_fun_name_166,((void*)0))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value292);
            if(right_value292 && right_value292 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value292, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value292;
            __freed_obj__ = 0;
            if(_if_conditional210=fun_167==((void*)0),            __freed_obj__ = 0, 
            _if_conditional210) {
                err_msg(info,"function not found(%s) at method(%s)(2)\n",generics_fun_name_166,((struct sFun*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 929))->come_fun, "06str.c", 929))->mName);
                __freed_obj__ = 0;
                __result142__ = (_Bool)1;
                if(false_node_154 && !__freed_obj__) { false_node_154 = come_decrement_ref_count(false_node_154, ((struct sNode*)false_node_154)->finalize, ((struct sNode*)false_node_154)->_protocol_obj, 0, 0, 0); } 
                if(come_value2_155 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value2_155, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(type_156 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_156, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(obj_value_159 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,obj_value_159, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(num_string_160 && !__freed_obj__) { come_call_finalizer(buffer_finalize,num_string_160, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(type2_161 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_161, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(type_name_162 && !__freed_obj__) { type_name_162 = come_decrement_ref_count(type_name_162, (void*)0, (void*)0, 0, 0, 0); }
                if(type3_163 && !__freed_obj__) { come_call_finalizer(sType_finalize,type3_163, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(obj_type_164 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_164, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(generics_fun_name_166 && !__freed_obj__) { generics_fun_name_166 = come_decrement_ref_count(generics_fun_name_166, (void*)0, (void*)0, 0, 0, 0); }
                if(tuple_types_148 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,tuple_types_148, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(tuple_values_149 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,tuple_values_149, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(come_value_150 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_150, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                return __result142__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        result_type_168=(struct sType*)come_increment_ref_count(((struct sType*)(right_value293=sType_clone(((struct sFun*)come_null_check(fun_167, "06str.c", 934))->mResultType))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 23, right_value293);
        if(right_value293 && right_value293 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value293, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[23] = right_value293;
        __freed_obj__ = 0;
        ((struct sType*)come_null_check(result_type_168, "06str.c", 935))->mStatic=(_Bool)0;
        __freed_obj__ = 0;
        come_params_169=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value295=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value294=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 937))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 24, right_value294);
        if(right_value294 && right_value294 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value294, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[24] = right_value294;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 25, right_value295);
        if(right_value295 && right_value295 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value295, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[25] = right_value295;
        __freed_obj__ = 0;
        if(_if_conditional211=((struct sType*)come_null_check(optional$2sTypephbool_value((come_clear_stackframe(), come_push_stackframe("06str.c", 966),__exception_result_var_a5=((struct optional$2sTypephbool*)(right_value296=list$1sTypephp_operator_load_element(((struct sFun*)come_null_check(fun_167, "06str.c", 966))->mParamTypes,0))), come_pop_stackframe(), __exception_result_var_a5)), "06str.c", 966))->mHeap&&((struct sType*)come_null_check(((struct CVALUE*)come_null_check(obj_value_159, "06str.c", 966))->type, "06str.c", 966))->mHeap,        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 26, right_value296),
        (right_value296 && right_value296 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2sTypephboolp_finalize,right_value296, (void*)0, (void*)0, 0, 1, 0, 0):0,
        __right_value_freed_obj[26] = right_value296, 
        __freed_obj__ = 0, 
        _if_conditional211) {
            if(_if_conditional212=((struct CVALUE*)come_null_check(obj_value_159, "06str.c", 965))->var,            __freed_obj__ = 0, 
            _if_conditional212) {
                if(_if_conditional213=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(obj_value_159, "06str.c", 957))->var, "06str.c", 957))->mType, "06str.c", 957))->mDelegate,                __freed_obj__ = 0, 
                _if_conditional213) {
                    __dec_obj116=((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(obj_value_159, "06str.c", 942))->var, "06str.c", 942))->mCValueName;
                    ((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(obj_value_159, "06str.c", 942))->var, "06str.c", 942))->mCValueName=((void*)0);
                    if(__dec_obj116) { __dec_obj116 = come_decrement_ref_count(__dec_obj116, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional214=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(obj_value_159, "06str.c", 957))->var, "06str.c", 957))->mType, "06str.c", 957))->mShare,                    __freed_obj__ = 0, 
                    _if_conditional214) {
                        __dec_obj117=((struct CVALUE*)come_null_check(obj_value_159, "06str.c", 945))->c_value;
                        ((struct CVALUE*)come_null_check(obj_value_159, "06str.c", 945))->c_value=(char*)come_increment_ref_count(((char*)(right_value297=increment_ref_count_object(((struct CVALUE*)come_null_check(obj_value_159, "06str.c", 945))->type,((struct CVALUE*)come_null_check(obj_value_159, "06str.c", 945))->c_value,info))));
                        if(__dec_obj117) { __dec_obj117 = come_decrement_ref_count(__dec_obj117, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value297);
                        if(right_value297 && right_value297 != __result_obj__ && !__freed_obj__) { right_value297 = come_decrement_ref_count(right_value297, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value297;
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional215=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(obj_value_159, "06str.c", 957))->var, "06str.c", 957))->mType, "06str.c", 957))->mClone,                        __freed_obj__ = 0, 
                        _if_conditional215) {
                            __dec_obj118=((struct CVALUE*)come_null_check(obj_value_159, "06str.c", 948))->c_value;
                            ((struct CVALUE*)come_null_check(obj_value_159, "06str.c", 948))->c_value=(char*)come_increment_ref_count(((char*)(right_value298=increment_ref_count_object(((struct CVALUE*)come_null_check(obj_value_159, "06str.c", 948))->type,((struct CVALUE*)come_null_check(obj_value_159, "06str.c", 948))->c_value,info))));
                            if(__dec_obj118) { __dec_obj118 = come_decrement_ref_count(__dec_obj118, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value298);
                            if(right_value298 && right_value298 != __result_obj__ && !__freed_obj__) { right_value298 = come_decrement_ref_count(right_value298, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value298;
                            __freed_obj__ = 0;
                        }
                        else {
                            __dec_obj119=((struct CVALUE*)come_null_check(obj_value_159, "06str.c", 951))->c_value;
                            ((struct CVALUE*)come_null_check(obj_value_159, "06str.c", 951))->c_value=(char*)come_increment_ref_count(((char*)(right_value299=increment_ref_count_object(((struct CVALUE*)come_null_check(obj_value_159, "06str.c", 951))->type,((struct CVALUE*)come_null_check(obj_value_159, "06str.c", 951))->c_value,info))));
                            if(__dec_obj119) { __dec_obj119 = come_decrement_ref_count(__dec_obj119, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value299);
                            if(right_value299 && right_value299 != __result_obj__ && !__freed_obj__) { right_value299 = come_decrement_ref_count(right_value299, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value299;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional216=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(obj_value_159, "06str.c", 964))->type, "06str.c", 964))->mDelegate,                __freed_obj__ = 0, 
                _if_conditional216) {
                }
                else {
                    __dec_obj120=((struct CVALUE*)come_null_check(obj_value_159, "06str.c", 962))->c_value;
                    ((struct CVALUE*)come_null_check(obj_value_159, "06str.c", 962))->c_value=(char*)come_increment_ref_count(((char*)(right_value300=increment_ref_count_object(((struct CVALUE*)come_null_check(obj_value_159, "06str.c", 962))->type,((struct CVALUE*)come_null_check(obj_value_159, "06str.c", 962))->c_value,info))));
                    if(__dec_obj120) { __dec_obj120 = come_decrement_ref_count(__dec_obj120, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value300);
                    if(right_value300 && right_value300 != __result_obj__ && !__freed_obj__) { right_value300 = come_decrement_ref_count(right_value300, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value300;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(come_params_169, "06str.c", 966)),(struct CVALUE*)come_increment_ref_count(obj_value_159));
        __freed_obj__ = 0;
        i_170=1;
        __freed_obj__ = 0;
        for(
        o2_saved_171=(struct list$1CVALUEph*)come_increment_ref_count((tuple_values_149)),it_172=list$1CVALUEph_begin(((struct list$1CVALUEph*)come_null_check((o2_saved_171), "06str.c", 1004))) ,        __freed_obj__ = 0, 
        0;        _for_condtionalA10=        !list$1CVALUEph_end(((struct list$1CVALUEph*)come_null_check((o2_saved_171), "06str.c", 1004))) ,        __freed_obj__ = 0, 
        _for_condtionalA10;        it_172=list$1CVALUEph_next(((struct list$1CVALUEph*)come_null_check((o2_saved_171), "06str.c", 1004))) ,        __freed_obj__ = 0, 
        0        ){
            come_value_173=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value301=CVALUE_clone(it_172))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value301);
            if(right_value301 && right_value301 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value301, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value301;
            __freed_obj__ = 0;
            if(_if_conditional217=optional$2sTypephbool_value((come_clear_stackframe(), come_push_stackframe("06str.c", 999),__exception_result_var_a6=((struct optional$2sTypephbool*)(right_value302=list$1sTypephp_operator_load_element(((struct sFun*)come_null_check(fun_167, "06str.c", 999))->mParamTypes,i_170))), come_pop_stackframe(), __exception_result_var_a6))&&((struct sType*)come_null_check(optional$2sTypephbool_value((come_clear_stackframe(), come_push_stackframe("06str.c", 999),__exception_result_var_a7=((struct optional$2sTypephbool*)(right_value303=list$1sTypephp_operator_load_element(((struct sFun*)come_null_check(fun_167, "06str.c", 999))->mParamTypes,i_170))), come_pop_stackframe(), __exception_result_var_a7)), "06str.c", 999))->mHeap&&((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_173, "06str.c", 999))->type, "06str.c", 999))->mHeap,            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value302),
            (right_value302 && right_value302 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2sTypephboolp_finalize,right_value302, (void*)0, (void*)0, 0, 1, 0, 0):0,
            __right_value_freed_obj[1] = right_value302, 
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value303),
            (right_value303 && right_value303 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2sTypephboolp_finalize,right_value303, (void*)0, (void*)0, 0, 1, 0, 0):0,
            __right_value_freed_obj[2] = right_value303, 
            __freed_obj__ = 0, 
            _if_conditional217) {
                if(_if_conditional218=((struct CVALUE*)come_null_check(come_value_173, "06str.c", 998))->var,                __freed_obj__ = 0, 
                _if_conditional218) {
                    if(_if_conditional219=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(come_value_173, "06str.c", 990))->var, "06str.c", 990))->mType, "06str.c", 990))->mDelegate,                    __freed_obj__ = 0, 
                    _if_conditional219) {
                        __dec_obj121=((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(come_value_173, "06str.c", 975))->var, "06str.c", 975))->mCValueName;
                        ((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(come_value_173, "06str.c", 975))->var, "06str.c", 975))->mCValueName=((void*)0);
                        if(__dec_obj121) { __dec_obj121 = come_decrement_ref_count(__dec_obj121, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional220=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(come_value_173, "06str.c", 990))->var, "06str.c", 990))->mType, "06str.c", 990))->mShare,                        __freed_obj__ = 0, 
                        _if_conditional220) {
                            __dec_obj122=((struct CVALUE*)come_null_check(come_value_173, "06str.c", 978))->c_value;
                            ((struct CVALUE*)come_null_check(come_value_173, "06str.c", 978))->c_value=(char*)come_increment_ref_count(((char*)(right_value304=increment_ref_count_object(((struct CVALUE*)come_null_check(come_value_173, "06str.c", 978))->type,((struct CVALUE*)come_null_check(come_value_173, "06str.c", 978))->c_value,info))));
                            if(__dec_obj122) { __dec_obj122 = come_decrement_ref_count(__dec_obj122, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value304);
                            if(right_value304 && right_value304 != __result_obj__ && !__freed_obj__) { right_value304 = come_decrement_ref_count(right_value304, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value304;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional221=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(come_value_173, "06str.c", 990))->var, "06str.c", 990))->mType, "06str.c", 990))->mClone,                            __freed_obj__ = 0, 
                            _if_conditional221) {
                                __dec_obj123=((struct CVALUE*)come_null_check(come_value_173, "06str.c", 981))->c_value;
                                ((struct CVALUE*)come_null_check(come_value_173, "06str.c", 981))->c_value=(char*)come_increment_ref_count(((char*)(right_value305=increment_ref_count_object(((struct CVALUE*)come_null_check(come_value_173, "06str.c", 981))->type,((struct CVALUE*)come_null_check(come_value_173, "06str.c", 981))->c_value,info))));
                                if(__dec_obj123) { __dec_obj123 = come_decrement_ref_count(__dec_obj123, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value305);
                                if(right_value305 && right_value305 != __result_obj__ && !__freed_obj__) { right_value305 = come_decrement_ref_count(right_value305, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value305;
                                __freed_obj__ = 0;
                            }
                            else {
                                __dec_obj124=((struct CVALUE*)come_null_check(come_value_173, "06str.c", 984))->c_value;
                                ((struct CVALUE*)come_null_check(come_value_173, "06str.c", 984))->c_value=(char*)come_increment_ref_count(((char*)(right_value306=increment_ref_count_object(((struct CVALUE*)come_null_check(come_value_173, "06str.c", 984))->type,((struct CVALUE*)come_null_check(come_value_173, "06str.c", 984))->c_value,info))));
                                if(__dec_obj124) { __dec_obj124 = come_decrement_ref_count(__dec_obj124, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value306);
                                if(right_value306 && right_value306 != __result_obj__ && !__freed_obj__) { right_value306 = come_decrement_ref_count(right_value306, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value306;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional222=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_173, "06str.c", 997))->type, "06str.c", 997))->mDelegate,                    __freed_obj__ = 0, 
                    _if_conditional222) {
                    }
                    else {
                        __dec_obj125=((struct CVALUE*)come_null_check(come_value_173, "06str.c", 995))->c_value;
                        ((struct CVALUE*)come_null_check(come_value_173, "06str.c", 995))->c_value=(char*)come_increment_ref_count(((char*)(right_value307=increment_ref_count_object(((struct CVALUE*)come_null_check(come_value_173, "06str.c", 995))->type,((struct CVALUE*)come_null_check(come_value_173, "06str.c", 995))->c_value,info))));
                        if(__dec_obj125) { __dec_obj125 = come_decrement_ref_count(__dec_obj125, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value307);
                        if(right_value307 && right_value307 != __result_obj__ && !__freed_obj__) { right_value307 = come_decrement_ref_count(right_value307, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value307;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(come_params_169, "06str.c", 999)),(struct CVALUE*)come_increment_ref_count(come_value_173));
            __freed_obj__ = 0;
            i_170++;
            __freed_obj__ = 0;
            if(come_value_173 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_173, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(o2_saved_171 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,o2_saved_171, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        buf_174=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value309=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value308=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1004))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 27, right_value308);
        if(right_value308 && right_value308 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value308, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[27] = right_value308;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 28, right_value309);
        if(right_value309 && right_value309 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value309, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[28] = right_value309;
        __freed_obj__ = 0;
        buffer_append_str(((struct buffer*)come_null_check(buf_174, "06str.c", 1006)),generics_fun_name_166);
        __freed_obj__ = 0;
        buffer_append_str(((struct buffer*)come_null_check(buf_174, "06str.c", 1007)),"(");
        __freed_obj__ = 0;
        j_175=0;
        __freed_obj__ = 0;
        for(
        o2_saved_176=(struct list$1CVALUEph*)come_increment_ref_count((come_params_169)),it_177=list$1CVALUEph_begin(((struct list$1CVALUEph*)come_null_check((o2_saved_176), "06str.c", 1019))) ,        __freed_obj__ = 0, 
        0;        _for_condtionalA11=        !list$1CVALUEph_end(((struct list$1CVALUEph*)come_null_check((o2_saved_176), "06str.c", 1019))) ,        __freed_obj__ = 0, 
        _for_condtionalA11;        it_177=list$1CVALUEph_next(((struct list$1CVALUEph*)come_null_check((o2_saved_176), "06str.c", 1019))) ,        __freed_obj__ = 0, 
        0        ){
            buffer_append_str(((struct buffer*)come_null_check(buf_174, "06str.c", 1011)),((struct CVALUE*)come_null_check(it_177, "06str.c", 1011))->c_value);
            __freed_obj__ = 0;
            if(_if_conditional223=j_175!=list$1CVALUEph_length(((struct list$1CVALUEph*)come_null_check(come_params_169, "06str.c", 1017)))-1,            __freed_obj__ = 0, 
            _if_conditional223) {
                buffer_append_str(((struct buffer*)come_null_check(buf_174, "06str.c", 1014)),",");
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            j_175++;
            __freed_obj__ = 0;
        }
        if(o2_saved_176 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,o2_saved_176, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        buffer_append_str(((struct buffer*)come_null_check(buf_174, "06str.c", 1019)),")");
        __freed_obj__ = 0;
        come_value3_178=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value310=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1021))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 29, right_value310);
        if(right_value310 && right_value310 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value310, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[29] = right_value310;
        __freed_obj__ = 0;
        __dec_obj126=((struct CVALUE*)come_null_check(come_value3_178, "06str.c", 1023))->c_value;
        ((struct CVALUE*)come_null_check(come_value3_178, "06str.c", 1023))->c_value=(char*)come_increment_ref_count(((char*)(right_value311=buffer_to_string(((struct buffer*)come_null_check(buf_174, "06str.c", 1023))))));
        if(__dec_obj126) { __dec_obj126 = come_decrement_ref_count(__dec_obj126, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 30, right_value311);
        if(right_value311 && right_value311 != __result_obj__ && !__freed_obj__) { right_value311 = come_decrement_ref_count(right_value311, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[30] = right_value311;
        __freed_obj__ = 0;
        if(_if_conditional224=((struct sType*)come_null_check(result_type_168, "06str.c", 1029))->mHeap,        __freed_obj__ = 0, 
        _if_conditional224) {
            __dec_obj127=((struct CVALUE*)come_null_check(come_value3_178, "06str.c", 1026))->c_value;
            ((struct CVALUE*)come_null_check(come_value3_178, "06str.c", 1026))->c_value=(char*)come_increment_ref_count(((char*)(right_value313=append_object_to_right_values(((char*)(right_value312=buffer_to_string(((struct buffer*)come_null_check(buf_174, "06str.c", 1026))))),(struct sType*)come_increment_ref_count(result_type_168),info))));
            if(__dec_obj127) { __dec_obj127 = come_decrement_ref_count(__dec_obj127, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value312);
            if(right_value312 && right_value312 != __result_obj__ && !__freed_obj__) { right_value312 = come_decrement_ref_count(right_value312, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value312;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value313);
            if(right_value313 && right_value313 != __result_obj__ && !__freed_obj__) { right_value313 = come_decrement_ref_count(right_value313, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value313;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __dec_obj128=((struct CVALUE*)come_null_check(come_value3_178, "06str.c", 1031))->c_value;
        ((struct CVALUE*)come_null_check(come_value3_178, "06str.c", 1031))->c_value=(char*)come_increment_ref_count(((char*)(right_value317=xsprintf("(come_save_stackframe(\"\%s\", \%s), \%s)",((char*)(right_value314=string_to_string(((struct sInfo*)come_null_check(info, "06str.c", 1031))->sname))),((char*)(right_value315=int_to_string(((struct sInfo*)come_null_check(info, "06str.c", 1031))->sline))),((char*)(right_value316=string_to_string(((struct CVALUE*)come_null_check(come_value3_178, "06str.c", 1031))->c_value)))))));
        if(__dec_obj128) { __dec_obj128 = come_decrement_ref_count(__dec_obj128, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 31, right_value314);
        if(right_value314 && right_value314 != __result_obj__ && !__freed_obj__) { right_value314 = come_decrement_ref_count(right_value314, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[31] = right_value314;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 32, right_value315);
        if(right_value315 && right_value315 != __result_obj__ && !__freed_obj__) { right_value315 = come_decrement_ref_count(right_value315, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[32] = right_value315;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 33, right_value316);
        if(right_value316 && right_value316 != __result_obj__ && !__freed_obj__) { right_value316 = come_decrement_ref_count(right_value316, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[33] = right_value316;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 34, right_value317);
        if(right_value317 && right_value317 != __result_obj__ && !__freed_obj__) { right_value317 = come_decrement_ref_count(right_value317, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[34] = right_value317;
        __freed_obj__ = 0;
        __dec_obj129=((struct CVALUE*)come_null_check(come_value3_178, "06str.c", 1031))->type;
        ((struct CVALUE*)come_null_check(come_value3_178, "06str.c", 1031))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value318=sType_clone(result_type_168))));
        if(__dec_obj129) { come_call_finalizer(sType_finalize,__dec_obj129, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 35, right_value318);
        if(right_value318 && right_value318 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value318, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[35] = right_value318;
        __freed_obj__ = 0;
        ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value3_178, "06str.c", 1032))->type, "06str.c", 1032))->mStatic=(_Bool)0;
        __freed_obj__ = 0;
        ((struct CVALUE*)come_null_check(come_value3_178, "06str.c", 1033))->var=((void*)0);
        __freed_obj__ = 0;
        add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value3_178, "06str.c", 1035))->c_value);
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1038))->stack, "06str.c", 1038)),(struct CVALUE*)come_increment_ref_count(come_value3_178));
        __freed_obj__ = 0;
        if(false_node_154 && !__freed_obj__) { false_node_154 = come_decrement_ref_count(false_node_154, ((struct sNode*)false_node_154)->finalize, ((struct sNode*)false_node_154)->_protocol_obj, 0, 0, 0); } 
        if(come_value2_155 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value2_155, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(type_156 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_156, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(obj_value_159 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,obj_value_159, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(num_string_160 && !__freed_obj__) { come_call_finalizer(buffer_finalize,num_string_160, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(type2_161 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_161, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(type_name_162 && !__freed_obj__) { type_name_162 = come_decrement_ref_count(type_name_162, (void*)0, (void*)0, 0, 0, 0); }
        if(type3_163 && !__freed_obj__) { come_call_finalizer(sType_finalize,type3_163, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(obj_type_164 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_164, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(generics_fun_name_166 && !__freed_obj__) { generics_fun_name_166 = come_decrement_ref_count(generics_fun_name_166, (void*)0, (void*)0, 0, 0, 0); }
        if(result_type_168 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_168, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(come_params_169 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,come_params_169, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(buf_174 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_174, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(come_value3_178 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value3_178, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __result143__ = (_Bool)1;
    if(tuple_types_148 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,tuple_types_148, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(tuple_values_149 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,tuple_values_149, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value_150 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_150, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result143__;
    __freed_obj__ = 0;
    if(tuple_types_148 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,tuple_types_148, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(tuple_values_149 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,tuple_values_149, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value_150 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_150, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1CVALUEph* list$1CVALUEph_add(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional206;
void* right_value263;
struct list_item$1CVALUEph* litem_151;
struct CVALUE* __dec_obj109;
_Bool _if_conditional207;
void* right_value264;
struct list_item$1CVALUEph* litem_152;
struct CVALUE* __dec_obj110;
void* right_value265;
struct list_item$1CVALUEph* litem_153;
struct CVALUE* __dec_obj111;
struct list$1CVALUEph* __result140__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value263, 0, sizeof(void*));
memset(&litem_151, 0, sizeof(struct list_item$1CVALUEph*));
memset(&right_value264, 0, sizeof(void*));
memset(&litem_152, 0, sizeof(struct list_item$1CVALUEph*));
memset(&right_value265, 0, sizeof(void*));
memset(&litem_153, 0, sizeof(struct list_item$1CVALUEph*));
            if(_if_conditional206=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 232))->len==0,            __freed_obj__ = 0, 
            _if_conditional206) {
                litem_151=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value263=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 202))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value263);
                if(right_value263 && right_value263 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value263, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value263;
                __freed_obj__ = 0;
                ((struct list_item$1CVALUEph*)come_null_check(litem_151, "./comelang2.h", 204))->prev=((void*)0);
                __freed_obj__ = 0;
                ((struct list_item$1CVALUEph*)come_null_check(litem_151, "./comelang2.h", 205))->next=((void*)0);
                __freed_obj__ = 0;
                __dec_obj109=((struct list_item$1CVALUEph*)come_null_check(litem_151, "./comelang2.h", 206))->item;
                ((struct list_item$1CVALUEph*)come_null_check(litem_151, "./comelang2.h", 206))->item=(struct CVALUE*)come_increment_ref_count(item);
                if(__dec_obj109) { come_call_finalizer(CVALUE_finalize,__dec_obj109, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 208))->tail=litem_151;
                __freed_obj__ = 0;
                ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 209))->head=litem_151;
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional207=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 232))->len==1,                __freed_obj__ = 0, 
                _if_conditional207) {
                    litem_152=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value264=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 212))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value264);
                    if(right_value264 && right_value264 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value264, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value264;
                    __freed_obj__ = 0;
                    ((struct list_item$1CVALUEph*)come_null_check(litem_152, "./comelang2.h", 214))->prev=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 214))->head;
                    __freed_obj__ = 0;
                    ((struct list_item$1CVALUEph*)come_null_check(litem_152, "./comelang2.h", 215))->next=((void*)0);
                    __freed_obj__ = 0;
                    __dec_obj110=((struct list_item$1CVALUEph*)come_null_check(litem_152, "./comelang2.h", 216))->item;
                    ((struct list_item$1CVALUEph*)come_null_check(litem_152, "./comelang2.h", 216))->item=(struct CVALUE*)come_increment_ref_count(item);
                    if(__dec_obj110) { come_call_finalizer(CVALUE_finalize,__dec_obj110, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 218))->tail=litem_152;
                    __freed_obj__ = 0;
                    ((struct list_item$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 219))->head, "./comelang2.h", 219))->next=litem_152;
                    __freed_obj__ = 0;
                }
                else {
                    litem_153=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value265=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 222))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value265);
                    if(right_value265 && right_value265 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value265, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value265;
                    __freed_obj__ = 0;
                    ((struct list_item$1CVALUEph*)come_null_check(litem_153, "./comelang2.h", 224))->prev=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 224))->tail;
                    __freed_obj__ = 0;
                    ((struct list_item$1CVALUEph*)come_null_check(litem_153, "./comelang2.h", 225))->next=((void*)0);
                    __freed_obj__ = 0;
                    __dec_obj111=((struct list_item$1CVALUEph*)come_null_check(litem_153, "./comelang2.h", 226))->item;
                    ((struct list_item$1CVALUEph*)come_null_check(litem_153, "./comelang2.h", 226))->item=(struct CVALUE*)come_increment_ref_count(item);
                    if(__dec_obj111) { come_call_finalizer(CVALUE_finalize,__dec_obj111, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct list_item$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 228))->tail, "./comelang2.h", 228))->next=litem_153;
                    __freed_obj__ = 0;
                    ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 229))->tail=litem_153;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 232))->len++;
            __freed_obj__ = 0;
            __result140__ = __result_obj__ = self;
            if(item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result140__;
            __freed_obj__ = 0;
            if(item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

int sNoneNode_sline(struct sNoneNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result144__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result144__ = ((struct sNoneNode*)come_null_check(self, "06str.c", 1046))->sline;
    __freed_obj__ = 0;
    return __result144__;
    __freed_obj__ = 0;
}

char* sNoneNode_sname(struct sNoneNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value319;
char* __result145__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value319, 0, sizeof(void*));
    __result145__ = __result_obj__ = ((char*)(right_value319=__builtin_string(((struct sNoneNode*)come_null_check(self, "06str.c", 1051))->sname)));
    __freed_obj__ = 0;
    return __result145__;
    __freed_obj__ = 0;
}

struct sSomeNode* sSomeNode_initialize(struct sSomeNode* self, struct sNode* value, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* __dec_obj130;
void* right_value320;
char* __dec_obj131;
struct sSomeNode* __result146__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value320, 0, sizeof(void*));
    __dec_obj130=((struct sSomeNode*)come_null_check(self, "06str.c", 1063))->value;
    ((struct sSomeNode*)come_null_check(self, "06str.c", 1063))->value=(struct sNode*)come_increment_ref_count(value);
    if(__dec_obj130) { __dec_obj130 = come_decrement_ref_count(__dec_obj130, ((struct sNode*)__dec_obj130)->finalize, ((struct sNode*)__dec_obj130)->_protocol_obj, 0,0,0); }
    __freed_obj__ = 0;
    ((struct sSomeNode*)come_null_check(self, "06str.c", 1065))->sline=((struct sInfo*)come_null_check(info, "06str.c", 1065))->sline;
    __freed_obj__ = 0;
    __dec_obj131=((struct sSomeNode*)come_null_check(self, "06str.c", 1066))->sname;
    ((struct sSomeNode*)come_null_check(self, "06str.c", 1066))->sname=(char*)come_increment_ref_count(((char*)(right_value320=__builtin_string(((struct sInfo*)come_null_check(info, "06str.c", 1066))->sname))));
    if(__dec_obj131) { __dec_obj131 = come_decrement_ref_count(__dec_obj131, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value320);
    if(right_value320 && right_value320 != __result_obj__ && !__freed_obj__) { right_value320 = come_decrement_ref_count(right_value320, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value320;
    __freed_obj__ = 0;
    __result146__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sSomeNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(value && !__freed_obj__) { value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result146__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sSomeNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(value && !__freed_obj__) { value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0); } 
}

struct sNode* create_some_object(struct sNode* exp, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value321;
void* right_value322;
struct sNode* _inf_value2;
struct sSomeNode* _inf_obj_value2;
void* right_value326;
struct sNode* __result149__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value321, 0, sizeof(void*));
memset(&right_value322, 0, sizeof(void*));
memset(&right_value326, 0, sizeof(void*));
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1073);
    _inf_obj_value2=come_increment_ref_count(((struct sSomeNode*)(right_value322=sSomeNode_initialize((struct sSomeNode*)come_increment_ref_count(((struct sSomeNode*)(right_value321=(struct sSomeNode*)come_calloc(1, sizeof(struct sSomeNode)*(1), "06str.c", 1073)))),(struct sNode*)come_increment_ref_count(exp),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sSomeNode_finalize;
    _inf_value2->clone=(void*)sSomeNode_clone;
    _inf_value2->compile=(void*)sSomeNode_compile;
    _inf_value2->sline=(void*)sSomeNode_sline;
    _inf_value2->sname=(void*)sSomeNode_sname;
    _inf_value2->terminated=(void*)sSomeNode_terminated;
    _inf_value2->kind=(void*)sSomeNode_kind;
    __result149__ = __result_obj__ = ((struct sNode*)(right_value326=_inf_value2));
    if(exp && !__freed_obj__) { exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value321);
    if(right_value321 && right_value321 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sSomeNode_finalize,right_value321, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value321;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value322);
    if(right_value322 && right_value322 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sSomeNode_finalize,right_value322, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value322;
    __freed_obj__ = 0;
    return __result149__;
    __freed_obj__ = 0;
    if(exp && !__freed_obj__) { exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0); } 
}

static void sSomeNode_finalize(struct sSomeNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional227;
_Bool _if_conditional228;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional227=self!=((void*)0)&&((struct sSomeNode*)come_null_check(self, "sSomeNode_finalize", 1))->value!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional227) {
            if(((struct sSomeNode*)come_null_check(self, "sSomeNode_finalize", 0))->value && !__freed_obj__) { ((struct sSomeNode*)come_null_check(self, "sSomeNode_finalize", 0))->value = come_decrement_ref_count(((struct sSomeNode*)come_null_check(self, "sSomeNode_finalize", 0))->value, ((struct sNode*)((struct sSomeNode*)come_null_check(self, "sSomeNode_finalize", 0))->value)->finalize, ((struct sNode*)((struct sSomeNode*)come_null_check(self, "sSomeNode_finalize", 0))->value)->_protocol_obj, 0, 0, 0); } 
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional228=self!=((void*)0)&&((struct sSomeNode*)come_null_check(self, "sSomeNode_finalize", 2))->sname!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional228) {
            if(((struct sSomeNode*)come_null_check(self, "sSomeNode_finalize", 1))->sname && !__freed_obj__) { ((struct sSomeNode*)come_null_check(self, "sSomeNode_finalize", 1))->sname = come_decrement_ref_count(((struct sSomeNode*)come_null_check(self, "sSomeNode_finalize", 1))->sname, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
}

static struct sSomeNode* sSomeNode_clone(struct sSomeNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional229;
struct sSomeNode* __result147__;
void* right_value323;
struct sSomeNode* result_179;
_Bool _if_conditional230;
void* right_value324;
struct sNode* __dec_obj132;
_Bool _if_conditional231;
_Bool _if_conditional232;
void* right_value325;
char* __dec_obj133;
struct sSomeNode* __result148__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value323, 0, sizeof(void*));
memset(&result_179, 0, sizeof(struct sSomeNode*));
memset(&right_value324, 0, sizeof(void*));
memset(&right_value325, 0, sizeof(void*));
        if(_if_conditional229=self==(void*)0,        __freed_obj__ = 0, 
        _if_conditional229) {
            __result147__ = __result_obj__ = (void*)0;
            __freed_obj__ = 0;
            return __result147__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        result_179=(struct sSomeNode*)come_increment_ref_count(((struct sSomeNode*)(right_value323=(struct sSomeNode*)come_calloc(1, sizeof(struct sSomeNode)*(1), "sSomeNode_clone", 3))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value323);
        if(right_value323 && right_value323 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sSomeNode_finalize,right_value323, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value323;
        __freed_obj__ = 0;
        if(_if_conditional230=self!=((void*)0)&&((struct sSomeNode*)come_null_check(self, "sSomeNode_clone", 5))->value!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional230) {
            __dec_obj132=((struct sSomeNode*)come_null_check(result_179, "sSomeNode_clone", 4))->value;
            ((struct sSomeNode*)come_null_check(result_179, "sSomeNode_clone", 4))->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value324=sNode_clone(((struct sSomeNode*)come_null_check(self, "sSomeNode_clone", 4))->value))));
            if(__dec_obj132) { __dec_obj132 = come_decrement_ref_count(__dec_obj132, ((struct sNode*)__dec_obj132)->finalize, ((struct sNode*)__dec_obj132)->_protocol_obj, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value324);
            if(right_value324 && right_value324 != __result_obj__ && !__freed_obj__) { right_value324 = come_decrement_ref_count(right_value324, ((struct sNode*)right_value324)->finalize, ((struct sNode*)right_value324)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[0] = right_value324;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional231=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional231) {
            ((struct sSomeNode*)come_null_check(result_179, "sSomeNode_clone", 5))->sline=((struct sSomeNode*)come_null_check(self, "sSomeNode_clone", 5))->sline;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional232=self!=((void*)0)&&((struct sSomeNode*)come_null_check(self, "sSomeNode_clone", 7))->sname!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional232) {
            __dec_obj133=((struct sSomeNode*)come_null_check(result_179, "sSomeNode_clone", 6))->sname;
            ((struct sSomeNode*)come_null_check(result_179, "sSomeNode_clone", 6))->sname=(char*)come_increment_ref_count(((char*)(right_value325=string_clone(((struct sSomeNode*)come_null_check(self, "sSomeNode_clone", 6))->sname))));
            if(__dec_obj133) { __dec_obj133 = come_decrement_ref_count(__dec_obj133, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value325);
            if(right_value325 && right_value325 != __result_obj__ && !__freed_obj__) { right_value325 = come_decrement_ref_count(right_value325, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value325;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __result148__ = __result_obj__ = result_179;
        if(result_179 && !__freed_obj__) { come_call_finalizer(sSomeNode_finalize,result_179, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result148__;
        __freed_obj__ = 0;
        if(result_179 && !__freed_obj__) { come_call_finalizer(sSomeNode_finalize,result_179, (void*)0, (void*)0, 0, 0, 0, 0); }
}

_Bool sSomeNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result150__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result150__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result150__;
    __freed_obj__ = 0;
}

char* sSomeNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value327;
char* __result151__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value327, 0, sizeof(void*));
    __result151__ = __result_obj__ = ((char*)(right_value327=__builtin_string("sSomeNode")));
    __freed_obj__ = 0;
    return __result151__;
    __freed_obj__ = 0;
}

_Bool sSomeNode_compile(struct sSomeNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value328;
void* right_value329;
struct list$1sTypeph* tuple_types_180;
void* right_value330;
void* right_value331;
struct list$1CVALUEph* tuple_values_181;
_Bool _if_conditional233;
_Bool __result152__;
void* right_value332;
struct CVALUE* come_value_182;
_Bool _if_conditional234;
struct tuple1$1sTypeph* mNoSolvedGenericsType_183;
void* right_value333;
void* right_value334;
void* right_value335;
struct sNode* true_node_184;
_Bool _if_conditional235;
_Bool __result153__;
void* right_value336;
struct CVALUE* come_value2_185;
void* right_value337;
void* right_value338;
void* right_value339;
void* right_value340;
struct sType* type_186;
struct list$1sTypeph* o2_saved_187;
struct sType* it_188;
_Bool _for_condtionalA12;
void* right_value341;
void* right_value342;
struct CVALUE* obj_value_189;
void* right_value343;
void* right_value344;
struct buffer* num_string_190;
void* right_value345;
struct sType* type2_191;
void* right_value346;
char* type_name_192;
void* right_value347;
void* right_value348;
char* __dec_obj134;
void* right_value349;
struct sType* type3_193;
void* right_value350;
struct sType* __dec_obj135;
void* right_value351;
char* __dec_obj136;
void* right_value352;
struct sType* obj_type_194;
char* fun_name_195;
void* right_value353;
void* right_value354;
void* right_value355;
char* generics_fun_name_196;
void* right_value356;
struct sFun* fun_197;
_Bool _if_conditional236;
void* right_value357;
void* right_value358;
char* __dec_obj137;
void* right_value359;
_Bool _if_conditional237;
_Bool __result154__;
void* right_value360;
struct sType* result_type_198;
void* right_value361;
void* right_value362;
struct list$1CVALUEph* come_params_199;
void* right_value363;
struct optional$2sTypephbool* __exception_result_var_a8;
_Bool _if_conditional238;
_Bool _if_conditional239;
_Bool _if_conditional240;
_Bool _if_conditional241;
char* __dec_obj138;
_Bool _if_conditional242;
void* right_value364;
char* __dec_obj139;
_Bool _if_conditional243;
void* right_value365;
char* __dec_obj140;
void* right_value366;
char* __dec_obj141;
_Bool _if_conditional244;
void* right_value367;
char* __dec_obj142;
int i_200;
struct list$1CVALUEph* o2_saved_201;
struct CVALUE* it_202;
_Bool _for_condtionalA13;
void* right_value368;
struct CVALUE* come_value_203;
void* right_value369;
struct optional$2sTypephbool* __exception_result_var_a9;
void* right_value370;
struct optional$2sTypephbool* __exception_result_var_a10;
_Bool _if_conditional245;
_Bool _if_conditional246;
_Bool _if_conditional247;
char* __dec_obj143;
_Bool _if_conditional248;
void* right_value371;
char* __dec_obj144;
_Bool _if_conditional249;
void* right_value372;
char* __dec_obj145;
void* right_value373;
char* __dec_obj146;
_Bool _if_conditional250;
void* right_value374;
char* __dec_obj147;
void* right_value375;
void* right_value376;
struct buffer* buf_204;
int j_205;
struct list$1CVALUEph* o2_saved_206;
struct CVALUE* it_207;
_Bool _for_condtionalA14;
_Bool _if_conditional251;
void* right_value377;
struct CVALUE* come_value3_208;
void* right_value378;
char* __dec_obj148;
_Bool _if_conditional252;
void* right_value379;
void* right_value380;
char* __dec_obj149;
void* right_value381;
struct sType* __dec_obj150;
void* right_value382;
_Bool __result155__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value328, 0, sizeof(void*));
memset(&right_value329, 0, sizeof(void*));
memset(&tuple_types_180, 0, sizeof(struct list$1sTypeph*));
memset(&right_value330, 0, sizeof(void*));
memset(&right_value331, 0, sizeof(void*));
memset(&tuple_values_181, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value332, 0, sizeof(void*));
memset(&come_value_182, 0, sizeof(struct CVALUE*));
memset(&mNoSolvedGenericsType_183, 0, sizeof(struct tuple1$1sTypeph*));
memset(&right_value333, 0, sizeof(void*));
memset(&right_value334, 0, sizeof(void*));
memset(&right_value335, 0, sizeof(void*));
memset(&true_node_184, 0, sizeof(struct sNode*));
memset(&right_value336, 0, sizeof(void*));
memset(&come_value2_185, 0, sizeof(struct CVALUE*));
memset(&right_value337, 0, sizeof(void*));
memset(&right_value338, 0, sizeof(void*));
memset(&right_value339, 0, sizeof(void*));
memset(&right_value340, 0, sizeof(void*));
memset(&type_186, 0, sizeof(struct sType*));
memset(&o2_saved_187, 0, sizeof(struct list$1sTypeph*));
memset(&it_188, 0, sizeof(struct sType*));
memset(&right_value341, 0, sizeof(void*));
memset(&right_value342, 0, sizeof(void*));
memset(&obj_value_189, 0, sizeof(struct CVALUE*));
memset(&right_value343, 0, sizeof(void*));
memset(&right_value344, 0, sizeof(void*));
memset(&num_string_190, 0, sizeof(struct buffer*));
memset(&right_value345, 0, sizeof(void*));
memset(&type2_191, 0, sizeof(struct sType*));
memset(&right_value346, 0, sizeof(void*));
memset(&type_name_192, 0, sizeof(char*));
memset(&right_value347, 0, sizeof(void*));
memset(&right_value348, 0, sizeof(void*));
memset(&right_value349, 0, sizeof(void*));
memset(&type3_193, 0, sizeof(struct sType*));
memset(&right_value350, 0, sizeof(void*));
memset(&right_value351, 0, sizeof(void*));
memset(&right_value352, 0, sizeof(void*));
memset(&obj_type_194, 0, sizeof(struct sType*));
memset(&fun_name_195, 0, sizeof(char*));
memset(&right_value353, 0, sizeof(void*));
memset(&right_value354, 0, sizeof(void*));
memset(&right_value355, 0, sizeof(void*));
memset(&generics_fun_name_196, 0, sizeof(char*));
memset(&right_value356, 0, sizeof(void*));
memset(&fun_197, 0, sizeof(struct sFun*));
memset(&right_value357, 0, sizeof(void*));
memset(&right_value358, 0, sizeof(void*));
memset(&right_value359, 0, sizeof(void*));
memset(&right_value360, 0, sizeof(void*));
memset(&result_type_198, 0, sizeof(struct sType*));
memset(&right_value361, 0, sizeof(void*));
memset(&right_value362, 0, sizeof(void*));
memset(&come_params_199, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value363, 0, sizeof(void*));
memset(&right_value364, 0, sizeof(void*));
memset(&right_value365, 0, sizeof(void*));
memset(&right_value366, 0, sizeof(void*));
memset(&right_value367, 0, sizeof(void*));
memset(&i_200, 0, sizeof(int));
memset(&o2_saved_201, 0, sizeof(struct list$1CVALUEph*));
memset(&it_202, 0, sizeof(struct CVALUE*));
memset(&right_value368, 0, sizeof(void*));
memset(&come_value_203, 0, sizeof(struct CVALUE*));
memset(&right_value369, 0, sizeof(void*));
memset(&right_value370, 0, sizeof(void*));
memset(&right_value371, 0, sizeof(void*));
memset(&right_value372, 0, sizeof(void*));
memset(&right_value373, 0, sizeof(void*));
memset(&right_value374, 0, sizeof(void*));
memset(&right_value375, 0, sizeof(void*));
memset(&right_value376, 0, sizeof(void*));
memset(&buf_204, 0, sizeof(struct buffer*));
memset(&j_205, 0, sizeof(int));
memset(&o2_saved_206, 0, sizeof(struct list$1CVALUEph*));
memset(&it_207, 0, sizeof(struct CVALUE*));
memset(&right_value377, 0, sizeof(void*));
memset(&come_value3_208, 0, sizeof(struct CVALUE*));
memset(&right_value378, 0, sizeof(void*));
memset(&right_value379, 0, sizeof(void*));
memset(&right_value380, 0, sizeof(void*));
memset(&right_value381, 0, sizeof(void*));
memset(&right_value382, 0, sizeof(void*));
    tuple_types_180=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value329=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value328=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "06str.c", 1088))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value328);
    if(right_value328 && right_value328 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value328, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value328;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value329);
    if(right_value329 && right_value329 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value329, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value329;
    __freed_obj__ = 0;
    tuple_values_181=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value331=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value330=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 1089))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value330);
    if(right_value330 && right_value330 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value330, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value330;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value331);
    if(right_value331 && right_value331 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value331, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value331;
    __freed_obj__ = 0;
    if(_if_conditional233=!((struct sNode*)come_null_check(((struct sSomeNode*)come_null_check(self, "06str.c", 1095))->value, "06str.c", 1095))->compile(((struct sNode*)come_null_check(((struct sSomeNode*)come_null_check(self, "06str.c", 1095))->value, "06str.c", 1095))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional233) {
        __result152__ = (_Bool)0;
        if(tuple_types_180 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,tuple_types_180, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(tuple_values_181 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,tuple_values_181, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        return __result152__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    come_value_182=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value332=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value332);
    if(right_value332 && right_value332 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value332, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value332;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    if(_if_conditional234=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_182, "06str.c", 1270))->type, "06str.c", 1270))->mNoSolvedGenericsType&&((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_182, "06str.c", 1270))->type, "06str.c", 1270))->mNoSolvedGenericsType, "06str.c", 1270))->v1&&string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_182, "06str.c", 1270))->type, "06str.c", 1270))->mNoSolvedGenericsType, "06str.c", 1270))->v1, "06str.c", 1270))->mClass, "06str.c", 1270))->mName,"optional"),    __freed_obj__ = 0, 
    _if_conditional234) {
        list$1CVALUEph_add(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1099))->stack, "06str.c", 1099)),(struct CVALUE*)come_increment_ref_count(come_value_182));
        __freed_obj__ = 0;
    }
    else {
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(tuple_values_181, "06str.c", 1104)),(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value333=CVALUE_clone(come_value_182)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value333);
        if(right_value333 && right_value333 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value333, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value333;
        __freed_obj__ = 0;
        list$1sTypeph_push_back(((struct list$1sTypeph*)come_null_check(tuple_types_180, "06str.c", 1105)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value334=sType_clone(((struct CVALUE*)come_null_check(come_value_182, "06str.c", 1105))->type)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value334);
        if(right_value334 && right_value334 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value334, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value334;
        __freed_obj__ = 0;
        true_node_184=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value335=create_true_object(info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value335);
        if(right_value335 && right_value335 != __result_obj__ && !__freed_obj__) { right_value335 = come_decrement_ref_count(right_value335, ((struct sNode*)right_value335)->finalize, ((struct sNode*)right_value335)->_protocol_obj, 1, 0, 0); } 
        __right_value_freed_obj[2] = right_value335;
        __freed_obj__ = 0;
        if(_if_conditional235=!((struct sNode*)come_null_check(true_node_184, "06str.c", 1113))->compile(((struct sNode*)come_null_check(true_node_184, "06str.c", 1113))->_protocol_obj,info),        __freed_obj__ = 0, 
        _if_conditional235) {
            __result153__ = (_Bool)0;
            if(mNoSolvedGenericsType_183 && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,mNoSolvedGenericsType_183, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(true_node_184 && !__freed_obj__) { true_node_184 = come_decrement_ref_count(true_node_184, ((struct sNode*)true_node_184)->finalize, ((struct sNode*)true_node_184)->_protocol_obj, 0, 0, 0); } 
            if(tuple_types_180 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,tuple_types_180, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(tuple_values_181 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,tuple_values_181, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(come_value_182 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_182, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
            return __result153__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        come_value2_185=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value336=get_value_from_stack(-1,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value336);
        if(right_value336 && right_value336 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value336, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value336;
        __freed_obj__ = 0;
        dec_stack_ptr(1,info);
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(tuple_values_181, "06str.c", 1116)),(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value337=CVALUE_clone(come_value2_185)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value337);
        if(right_value337 && right_value337 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value337, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[4] = right_value337;
        __freed_obj__ = 0;
        list$1sTypeph_push_back(((struct list$1sTypeph*)come_null_check(tuple_types_180, "06str.c", 1117)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value338=sType_clone(((struct CVALUE*)come_null_check(come_value2_185, "06str.c", 1117))->type)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value338);
        if(right_value338 && right_value338 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value338, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[5] = right_value338;
        __freed_obj__ = 0;
        type_186=(struct sType*)come_increment_ref_count(((struct sType*)(right_value340=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value339=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 1119)))),"optional",(_Bool)0,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value339);
        if(right_value339 && right_value339 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value339, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[6] = right_value339;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value340);
        if(right_value340 && right_value340 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value340, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[7] = right_value340;
        __freed_obj__ = 0;
        for(
        o2_saved_187=(struct list$1sTypeph*)come_increment_ref_count((tuple_types_180)),it_188=list$1sTypeph_begin(((struct list$1sTypeph*)come_null_check((o2_saved_187), "06str.c", 1125))) ,        __freed_obj__ = 0, 
        0;        _for_condtionalA12=        !list$1sTypeph_end(((struct list$1sTypeph*)come_null_check((o2_saved_187), "06str.c", 1125))) ,        __freed_obj__ = 0, 
        _for_condtionalA12;        it_188=list$1sTypeph_next(((struct list$1sTypeph*)come_null_check((o2_saved_187), "06str.c", 1125))) ,        __freed_obj__ = 0, 
        0        ){
            list$1sTypeph_push_back(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(type_186, "06str.c", 1122))->mGenericsTypes, "06str.c", 1122)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value341=sType_clone(it_188)))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value341);
            if(right_value341 && right_value341 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value341, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value341;
            __freed_obj__ = 0;
        }
        if(o2_saved_187 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_187, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        obj_value_189=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value342=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1125))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value342);
        if(right_value342 && right_value342 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value342, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[8] = right_value342;
        __freed_obj__ = 0;
        num_string_190=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value344=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value343=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1127))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 9, right_value343);
        if(right_value343 && right_value343 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value343, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[9] = right_value343;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 10, right_value344);
        if(right_value344 && right_value344 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value344, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[10] = right_value344;
        __freed_obj__ = 0;
        buffer_append_str(((struct buffer*)come_null_check(num_string_190, "06str.c", 1129)),"1");
        __freed_obj__ = 0;
        type2_191=(struct sType*)come_increment_ref_count(((struct sType*)(right_value345=solve_generics(type_186,type_186,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 11, right_value345);
        if(right_value345 && right_value345 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value345, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[11] = right_value345;
        __freed_obj__ = 0;
        come_clear_stackframe();
        type_name_192=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("06str.c", 1133),((struct optional$2charphbool*)(right_value346=make_type_name_string(type2_191,(_Bool)0,(_Bool)1,(_Bool)0,info))))));
        come_pop_stackframe();
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 12, right_value346);
        if(right_value346 && right_value346 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value346, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[12] = right_value346;
        __freed_obj__ = 0;
        __dec_obj134=((struct CVALUE*)come_null_check(obj_value_189, "06str.c", 1135))->c_value;
        ((struct CVALUE*)come_null_check(obj_value_189, "06str.c", 1135))->c_value=(char*)come_increment_ref_count(((char*)(right_value348=xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d)",type_name_192,type_name_192,((char*)(right_value347=buffer_to_string(((struct buffer*)come_null_check(num_string_190, "06str.c", 1135))))),((struct sInfo*)come_null_check(info, "06str.c", 1135))->sname,((struct sInfo*)come_null_check(info, "06str.c", 1135))->sline))));
        if(__dec_obj134) { __dec_obj134 = come_decrement_ref_count(__dec_obj134, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 13, right_value347);
        if(right_value347 && right_value347 != __result_obj__ && !__freed_obj__) { right_value347 = come_decrement_ref_count(right_value347, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[13] = right_value347;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 14, right_value348);
        if(right_value348 && right_value348 != __result_obj__ && !__freed_obj__) { right_value348 = come_decrement_ref_count(right_value348, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[14] = right_value348;
        __freed_obj__ = 0;
        type3_193=(struct sType*)come_increment_ref_count(((struct sType*)(right_value349=sType_clone(type2_191))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 15, right_value349);
        if(right_value349 && right_value349 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value349, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[15] = right_value349;
        __freed_obj__ = 0;
        ((struct sType*)come_null_check(type3_193, "06str.c", 1138))->mPointerNum++;
        __freed_obj__ = 0;
        ((struct sType*)come_null_check(type3_193, "06str.c", 1139))->mHeap=(_Bool)1;
        __freed_obj__ = 0;
        ((struct sType*)come_null_check(type2_191, "06str.c", 1140))->mHeap=(_Bool)1;
        __freed_obj__ = 0;
        __dec_obj135=((struct CVALUE*)come_null_check(obj_value_189, "06str.c", 1141))->type;
        ((struct CVALUE*)come_null_check(obj_value_189, "06str.c", 1141))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value350=sType_clone(type2_191))));
        if(__dec_obj135) { come_call_finalizer(sType_finalize,__dec_obj135, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 16, right_value350);
        if(right_value350 && right_value350 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value350, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[16] = right_value350;
        __freed_obj__ = 0;
        __dec_obj136=((struct CVALUE*)come_null_check(obj_value_189, "06str.c", 1142))->c_value;
        ((struct CVALUE*)come_null_check(obj_value_189, "06str.c", 1142))->c_value=(char*)come_increment_ref_count(((char*)(right_value351=append_object_to_right_values(((struct CVALUE*)come_null_check(obj_value_189, "06str.c", 1142))->c_value,(struct sType*)come_increment_ref_count(type3_193),info))));
        if(__dec_obj136) { __dec_obj136 = come_decrement_ref_count(__dec_obj136, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 17, right_value351);
        if(right_value351 && right_value351 != __result_obj__ && !__freed_obj__) { right_value351 = come_decrement_ref_count(right_value351, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[17] = right_value351;
        __freed_obj__ = 0;
        ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(obj_value_189, "06str.c", 1143))->type, "06str.c", 1143))->mPointerNum++;
        __freed_obj__ = 0;
        ((struct CVALUE*)come_null_check(obj_value_189, "06str.c", 1144))->var=((void*)0);
        __freed_obj__ = 0;
        obj_type_194=(struct sType*)come_increment_ref_count(((struct sType*)(right_value352=sType_clone(type2_191))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 18, right_value352);
        if(right_value352 && right_value352 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value352, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[18] = right_value352;
        __freed_obj__ = 0;
        fun_name_195="initialize";
        __freed_obj__ = 0;
        generics_fun_name_196=(char*)come_increment_ref_count(((char*)(right_value355=string_to_string(((char*)come_null_check(((char*)(right_value354=make_generics_function(obj_type_194,(char*)come_increment_ref_count(((char*)(right_value353=__builtin_string(fun_name_195)))),info))), "06str.c", 1149))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 19, right_value353);
        if(right_value353 && right_value353 != __result_obj__ && !__freed_obj__) { right_value353 = come_decrement_ref_count(right_value353, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[19] = right_value353;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 20, right_value354);
        if(right_value354 && right_value354 != __result_obj__ && !__freed_obj__) { right_value354 = come_decrement_ref_count(right_value354, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[20] = right_value354;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 21, right_value355);
        if(right_value355 && right_value355 != __result_obj__ && !__freed_obj__) { right_value355 = come_decrement_ref_count(right_value355, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[21] = right_value355;
        __freed_obj__ = 0;
        fun_197=((struct sFun*)(right_value356=map$2charphsFunph_at(((struct map$2charphsFunph*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1151))->funcs, "06str.c", 1151)),generics_fun_name_196,((void*)0))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 22, right_value356);
        if(right_value356 && right_value356 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value356, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[22] = right_value356;
        __freed_obj__ = 0;
        if(_if_conditional236=fun_197==((void*)0),        __freed_obj__ = 0, 
        _if_conditional236) {
            __dec_obj137=generics_fun_name_196;
            generics_fun_name_196=(char*)come_increment_ref_count(((char*)(right_value358=create_method_name(obj_type_194,(_Bool)0,((char*)(right_value357=__builtin_string(fun_name_195))),info))));
            if(__dec_obj137) { __dec_obj137 = come_decrement_ref_count(__dec_obj137, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value357);
            if(right_value357 && right_value357 != __result_obj__ && !__freed_obj__) { right_value357 = come_decrement_ref_count(right_value357, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value357;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value358);
            if(right_value358 && right_value358 != __result_obj__ && !__freed_obj__) { right_value358 = come_decrement_ref_count(right_value358, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value358;
            __freed_obj__ = 0;
            fun_197=((struct sFun*)(right_value359=map$2charphsFunph_at(((struct map$2charphsFunph*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1156))->funcs, "06str.c", 1156)),generics_fun_name_196,((void*)0))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value359);
            if(right_value359 && right_value359 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value359, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value359;
            __freed_obj__ = 0;
            if(_if_conditional237=fun_197==((void*)0),            __freed_obj__ = 0, 
            _if_conditional237) {
                err_msg(info,"function not found(%s) at method(%s)(2)\n",generics_fun_name_196,((struct sFun*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1159))->come_fun, "06str.c", 1159))->mName);
                __freed_obj__ = 0;
                __result154__ = (_Bool)1;
                if(mNoSolvedGenericsType_183 && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,mNoSolvedGenericsType_183, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(true_node_184 && !__freed_obj__) { true_node_184 = come_decrement_ref_count(true_node_184, ((struct sNode*)true_node_184)->finalize, ((struct sNode*)true_node_184)->_protocol_obj, 0, 0, 0); } 
                if(come_value2_185 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value2_185, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(type_186 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_186, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(obj_value_189 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,obj_value_189, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(num_string_190 && !__freed_obj__) { come_call_finalizer(buffer_finalize,num_string_190, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(type2_191 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_191, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(type_name_192 && !__freed_obj__) { type_name_192 = come_decrement_ref_count(type_name_192, (void*)0, (void*)0, 0, 0, 0); }
                if(type3_193 && !__freed_obj__) { come_call_finalizer(sType_finalize,type3_193, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(obj_type_194 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_194, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(generics_fun_name_196 && !__freed_obj__) { generics_fun_name_196 = come_decrement_ref_count(generics_fun_name_196, (void*)0, (void*)0, 0, 0, 0); }
                if(tuple_types_180 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,tuple_types_180, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(tuple_values_181 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,tuple_values_181, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(come_value_182 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_182, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                return __result154__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        result_type_198=(struct sType*)come_increment_ref_count(((struct sType*)(right_value360=sType_clone(((struct sFun*)come_null_check(fun_197, "06str.c", 1164))->mResultType))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 23, right_value360);
        if(right_value360 && right_value360 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value360, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[23] = right_value360;
        __freed_obj__ = 0;
        ((struct sType*)come_null_check(result_type_198, "06str.c", 1165))->mStatic=(_Bool)0;
        __freed_obj__ = 0;
        come_params_199=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value362=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value361=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 1167))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 24, right_value361);
        if(right_value361 && right_value361 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value361, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[24] = right_value361;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 25, right_value362);
        if(right_value362 && right_value362 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value362, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[25] = right_value362;
        __freed_obj__ = 0;
        if(_if_conditional238=((struct sType*)come_null_check(optional$2sTypephbool_value((come_clear_stackframe(), come_push_stackframe("06str.c", 1198),__exception_result_var_a8=((struct optional$2sTypephbool*)(right_value363=list$1sTypephp_operator_load_element(((struct sFun*)come_null_check(fun_197, "06str.c", 1198))->mParamTypes,0))), come_pop_stackframe(), __exception_result_var_a8)), "06str.c", 1198))->mHeap&&((struct sType*)come_null_check(((struct CVALUE*)come_null_check(obj_value_189, "06str.c", 1198))->type, "06str.c", 1198))->mHeap,        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 26, right_value363),
        (right_value363 && right_value363 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2sTypephboolp_finalize,right_value363, (void*)0, (void*)0, 0, 1, 0, 0):0,
        __right_value_freed_obj[26] = right_value363, 
        __freed_obj__ = 0, 
        _if_conditional238) {
            if(_if_conditional239=((struct CVALUE*)come_null_check(obj_value_189, "06str.c", 1197))->var,            __freed_obj__ = 0, 
            _if_conditional239) {
                if(_if_conditional240=((struct CVALUE*)come_null_check(obj_value_189, "06str.c", 1189))->var,                __freed_obj__ = 0, 
                _if_conditional240) {
                    if(_if_conditional241=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(obj_value_189, "06str.c", 1188))->var, "06str.c", 1188))->mType, "06str.c", 1188))->mDelegate,                    __freed_obj__ = 0, 
                    _if_conditional241) {
                        __dec_obj138=((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(obj_value_189, "06str.c", 1173))->var, "06str.c", 1173))->mCValueName;
                        ((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(obj_value_189, "06str.c", 1173))->var, "06str.c", 1173))->mCValueName=((void*)0);
                        if(__dec_obj138) { __dec_obj138 = come_decrement_ref_count(__dec_obj138, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional242=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(obj_value_189, "06str.c", 1188))->var, "06str.c", 1188))->mType, "06str.c", 1188))->mShare,                        __freed_obj__ = 0, 
                        _if_conditional242) {
                            __dec_obj139=((struct CVALUE*)come_null_check(obj_value_189, "06str.c", 1176))->c_value;
                            ((struct CVALUE*)come_null_check(obj_value_189, "06str.c", 1176))->c_value=(char*)come_increment_ref_count(((char*)(right_value364=increment_ref_count_object(((struct CVALUE*)come_null_check(obj_value_189, "06str.c", 1176))->type,((struct CVALUE*)come_null_check(obj_value_189, "06str.c", 1176))->c_value,info))));
                            if(__dec_obj139) { __dec_obj139 = come_decrement_ref_count(__dec_obj139, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value364);
                            if(right_value364 && right_value364 != __result_obj__ && !__freed_obj__) { right_value364 = come_decrement_ref_count(right_value364, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value364;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional243=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(obj_value_189, "06str.c", 1188))->var, "06str.c", 1188))->mType, "06str.c", 1188))->mClone,                            __freed_obj__ = 0, 
                            _if_conditional243) {
                                __dec_obj140=((struct CVALUE*)come_null_check(obj_value_189, "06str.c", 1179))->c_value;
                                ((struct CVALUE*)come_null_check(obj_value_189, "06str.c", 1179))->c_value=(char*)come_increment_ref_count(((char*)(right_value365=increment_ref_count_object(((struct CVALUE*)come_null_check(obj_value_189, "06str.c", 1179))->type,((struct CVALUE*)come_null_check(obj_value_189, "06str.c", 1179))->c_value,info))));
                                if(__dec_obj140) { __dec_obj140 = come_decrement_ref_count(__dec_obj140, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value365);
                                if(right_value365 && right_value365 != __result_obj__ && !__freed_obj__) { right_value365 = come_decrement_ref_count(right_value365, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value365;
                                __freed_obj__ = 0;
                            }
                            else {
                                __dec_obj141=((struct CVALUE*)come_null_check(obj_value_189, "06str.c", 1182))->c_value;
                                ((struct CVALUE*)come_null_check(obj_value_189, "06str.c", 1182))->c_value=(char*)come_increment_ref_count(((char*)(right_value366=increment_ref_count_object(((struct CVALUE*)come_null_check(obj_value_189, "06str.c", 1182))->type,((struct CVALUE*)come_null_check(obj_value_189, "06str.c", 1182))->c_value,info))));
                                if(__dec_obj141) { __dec_obj141 = come_decrement_ref_count(__dec_obj141, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value366);
                                if(right_value366 && right_value366 != __result_obj__ && !__freed_obj__) { right_value366 = come_decrement_ref_count(right_value366, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value366;
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
            else {
                if(_if_conditional244=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(obj_value_189, "06str.c", 1196))->type, "06str.c", 1196))->mDelegate,                __freed_obj__ = 0, 
                _if_conditional244) {
                }
                else {
                    __dec_obj142=((struct CVALUE*)come_null_check(obj_value_189, "06str.c", 1194))->c_value;
                    ((struct CVALUE*)come_null_check(obj_value_189, "06str.c", 1194))->c_value=(char*)come_increment_ref_count(((char*)(right_value367=increment_ref_count_object(((struct CVALUE*)come_null_check(obj_value_189, "06str.c", 1194))->type,((struct CVALUE*)come_null_check(obj_value_189, "06str.c", 1194))->c_value,info))));
                    if(__dec_obj142) { __dec_obj142 = come_decrement_ref_count(__dec_obj142, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value367);
                    if(right_value367 && right_value367 != __result_obj__ && !__freed_obj__) { right_value367 = come_decrement_ref_count(right_value367, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value367;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(come_params_199, "06str.c", 1198)),(struct CVALUE*)come_increment_ref_count(obj_value_189));
        __freed_obj__ = 0;
        i_200=1;
        __freed_obj__ = 0;
        for(
        o2_saved_201=(struct list$1CVALUEph*)come_increment_ref_count((tuple_values_181)),it_202=list$1CVALUEph_begin(((struct list$1CVALUEph*)come_null_check((o2_saved_201), "06str.c", 1236))) ,        __freed_obj__ = 0, 
        0;        _for_condtionalA13=        !list$1CVALUEph_end(((struct list$1CVALUEph*)come_null_check((o2_saved_201), "06str.c", 1236))) ,        __freed_obj__ = 0, 
        _for_condtionalA13;        it_202=list$1CVALUEph_next(((struct list$1CVALUEph*)come_null_check((o2_saved_201), "06str.c", 1236))) ,        __freed_obj__ = 0, 
        0        ){
            come_value_203=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value368=CVALUE_clone(it_202))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value368);
            if(right_value368 && right_value368 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value368, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value368;
            __freed_obj__ = 0;
            if(_if_conditional245=optional$2sTypephbool_value((come_clear_stackframe(), come_push_stackframe("06str.c", 1231),__exception_result_var_a9=((struct optional$2sTypephbool*)(right_value369=list$1sTypephp_operator_load_element(((struct sFun*)come_null_check(fun_197, "06str.c", 1231))->mParamTypes,i_200))), come_pop_stackframe(), __exception_result_var_a9))&&((struct sType*)come_null_check(optional$2sTypephbool_value((come_clear_stackframe(), come_push_stackframe("06str.c", 1231),__exception_result_var_a10=((struct optional$2sTypephbool*)(right_value370=list$1sTypephp_operator_load_element(((struct sFun*)come_null_check(fun_197, "06str.c", 1231))->mParamTypes,i_200))), come_pop_stackframe(), __exception_result_var_a10)), "06str.c", 1231))->mHeap&&((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_203, "06str.c", 1231))->type, "06str.c", 1231))->mHeap,            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value369),
            (right_value369 && right_value369 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2sTypephboolp_finalize,right_value369, (void*)0, (void*)0, 0, 1, 0, 0):0,
            __right_value_freed_obj[1] = right_value369, 
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value370),
            (right_value370 && right_value370 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2sTypephboolp_finalize,right_value370, (void*)0, (void*)0, 0, 1, 0, 0):0,
            __right_value_freed_obj[2] = right_value370, 
            __freed_obj__ = 0, 
            _if_conditional245) {
                if(_if_conditional246=((struct CVALUE*)come_null_check(come_value_203, "06str.c", 1230))->var,                __freed_obj__ = 0, 
                _if_conditional246) {
                    if(_if_conditional247=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(come_value_203, "06str.c", 1222))->var, "06str.c", 1222))->mType, "06str.c", 1222))->mDelegate,                    __freed_obj__ = 0, 
                    _if_conditional247) {
                        __dec_obj143=((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(come_value_203, "06str.c", 1207))->var, "06str.c", 1207))->mCValueName;
                        ((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(come_value_203, "06str.c", 1207))->var, "06str.c", 1207))->mCValueName=((void*)0);
                        if(__dec_obj143) { __dec_obj143 = come_decrement_ref_count(__dec_obj143, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional248=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(come_value_203, "06str.c", 1222))->var, "06str.c", 1222))->mType, "06str.c", 1222))->mShare,                        __freed_obj__ = 0, 
                        _if_conditional248) {
                            __dec_obj144=((struct CVALUE*)come_null_check(come_value_203, "06str.c", 1210))->c_value;
                            ((struct CVALUE*)come_null_check(come_value_203, "06str.c", 1210))->c_value=(char*)come_increment_ref_count(((char*)(right_value371=increment_ref_count_object(((struct CVALUE*)come_null_check(come_value_203, "06str.c", 1210))->type,((struct CVALUE*)come_null_check(come_value_203, "06str.c", 1210))->c_value,info))));
                            if(__dec_obj144) { __dec_obj144 = come_decrement_ref_count(__dec_obj144, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value371);
                            if(right_value371 && right_value371 != __result_obj__ && !__freed_obj__) { right_value371 = come_decrement_ref_count(right_value371, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value371;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional249=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(come_value_203, "06str.c", 1222))->var, "06str.c", 1222))->mType, "06str.c", 1222))->mClone,                            __freed_obj__ = 0, 
                            _if_conditional249) {
                                __dec_obj145=((struct CVALUE*)come_null_check(come_value_203, "06str.c", 1213))->c_value;
                                ((struct CVALUE*)come_null_check(come_value_203, "06str.c", 1213))->c_value=(char*)come_increment_ref_count(((char*)(right_value372=increment_ref_count_object(((struct CVALUE*)come_null_check(come_value_203, "06str.c", 1213))->type,((struct CVALUE*)come_null_check(come_value_203, "06str.c", 1213))->c_value,info))));
                                if(__dec_obj145) { __dec_obj145 = come_decrement_ref_count(__dec_obj145, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value372);
                                if(right_value372 && right_value372 != __result_obj__ && !__freed_obj__) { right_value372 = come_decrement_ref_count(right_value372, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value372;
                                __freed_obj__ = 0;
                            }
                            else {
                                __dec_obj146=((struct CVALUE*)come_null_check(come_value_203, "06str.c", 1216))->c_value;
                                ((struct CVALUE*)come_null_check(come_value_203, "06str.c", 1216))->c_value=(char*)come_increment_ref_count(((char*)(right_value373=increment_ref_count_object(((struct CVALUE*)come_null_check(come_value_203, "06str.c", 1216))->type,((struct CVALUE*)come_null_check(come_value_203, "06str.c", 1216))->c_value,info))));
                                if(__dec_obj146) { __dec_obj146 = come_decrement_ref_count(__dec_obj146, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value373);
                                if(right_value373 && right_value373 != __result_obj__ && !__freed_obj__) { right_value373 = come_decrement_ref_count(right_value373, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value373;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional250=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_203, "06str.c", 1229))->type, "06str.c", 1229))->mDelegate,                    __freed_obj__ = 0, 
                    _if_conditional250) {
                    }
                    else {
                        __dec_obj147=((struct CVALUE*)come_null_check(come_value_203, "06str.c", 1227))->c_value;
                        ((struct CVALUE*)come_null_check(come_value_203, "06str.c", 1227))->c_value=(char*)come_increment_ref_count(((char*)(right_value374=increment_ref_count_object(((struct CVALUE*)come_null_check(come_value_203, "06str.c", 1227))->type,((struct CVALUE*)come_null_check(come_value_203, "06str.c", 1227))->c_value,info))));
                        if(__dec_obj147) { __dec_obj147 = come_decrement_ref_count(__dec_obj147, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value374);
                        if(right_value374 && right_value374 != __result_obj__ && !__freed_obj__) { right_value374 = come_decrement_ref_count(right_value374, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value374;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(come_params_199, "06str.c", 1231)),(struct CVALUE*)come_increment_ref_count(come_value_203));
            __freed_obj__ = 0;
            i_200++;
            __freed_obj__ = 0;
            if(come_value_203 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_203, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(o2_saved_201 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,o2_saved_201, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        buf_204=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value376=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value375=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1236))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 27, right_value375);
        if(right_value375 && right_value375 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value375, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[27] = right_value375;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 28, right_value376);
        if(right_value376 && right_value376 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value376, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[28] = right_value376;
        __freed_obj__ = 0;
        buffer_append_str(((struct buffer*)come_null_check(buf_204, "06str.c", 1238)),generics_fun_name_196);
        __freed_obj__ = 0;
        buffer_append_str(((struct buffer*)come_null_check(buf_204, "06str.c", 1239)),"(");
        __freed_obj__ = 0;
        j_205=0;
        __freed_obj__ = 0;
        for(
        o2_saved_206=(struct list$1CVALUEph*)come_increment_ref_count((come_params_199)),it_207=list$1CVALUEph_begin(((struct list$1CVALUEph*)come_null_check((o2_saved_206), "06str.c", 1251))) ,        __freed_obj__ = 0, 
        0;        _for_condtionalA14=        !list$1CVALUEph_end(((struct list$1CVALUEph*)come_null_check((o2_saved_206), "06str.c", 1251))) ,        __freed_obj__ = 0, 
        _for_condtionalA14;        it_207=list$1CVALUEph_next(((struct list$1CVALUEph*)come_null_check((o2_saved_206), "06str.c", 1251))) ,        __freed_obj__ = 0, 
        0        ){
            buffer_append_str(((struct buffer*)come_null_check(buf_204, "06str.c", 1243)),((struct CVALUE*)come_null_check(it_207, "06str.c", 1243))->c_value);
            __freed_obj__ = 0;
            if(_if_conditional251=j_205!=list$1CVALUEph_length(((struct list$1CVALUEph*)come_null_check(come_params_199, "06str.c", 1249)))-1,            __freed_obj__ = 0, 
            _if_conditional251) {
                buffer_append_str(((struct buffer*)come_null_check(buf_204, "06str.c", 1246)),",");
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            j_205++;
            __freed_obj__ = 0;
        }
        if(o2_saved_206 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,o2_saved_206, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        buffer_append_str(((struct buffer*)come_null_check(buf_204, "06str.c", 1251)),")");
        __freed_obj__ = 0;
        come_value3_208=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value377=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1253))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 29, right_value377);
        if(right_value377 && right_value377 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value377, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[29] = right_value377;
        __freed_obj__ = 0;
        __dec_obj148=((struct CVALUE*)come_null_check(come_value3_208, "06str.c", 1255))->c_value;
        ((struct CVALUE*)come_null_check(come_value3_208, "06str.c", 1255))->c_value=(char*)come_increment_ref_count(((char*)(right_value378=buffer_to_string(((struct buffer*)come_null_check(buf_204, "06str.c", 1255))))));
        if(__dec_obj148) { __dec_obj148 = come_decrement_ref_count(__dec_obj148, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 30, right_value378);
        if(right_value378 && right_value378 != __result_obj__ && !__freed_obj__) { right_value378 = come_decrement_ref_count(right_value378, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[30] = right_value378;
        __freed_obj__ = 0;
        if(_if_conditional252=((struct sType*)come_null_check(result_type_198, "06str.c", 1261))->mHeap,        __freed_obj__ = 0, 
        _if_conditional252) {
            __dec_obj149=((struct CVALUE*)come_null_check(come_value3_208, "06str.c", 1258))->c_value;
            ((struct CVALUE*)come_null_check(come_value3_208, "06str.c", 1258))->c_value=(char*)come_increment_ref_count(((char*)(right_value380=append_object_to_right_values(((char*)(right_value379=buffer_to_string(((struct buffer*)come_null_check(buf_204, "06str.c", 1258))))),(struct sType*)come_increment_ref_count(result_type_198),info))));
            if(__dec_obj149) { __dec_obj149 = come_decrement_ref_count(__dec_obj149, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value379);
            if(right_value379 && right_value379 != __result_obj__ && !__freed_obj__) { right_value379 = come_decrement_ref_count(right_value379, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value379;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value380);
            if(right_value380 && right_value380 != __result_obj__ && !__freed_obj__) { right_value380 = come_decrement_ref_count(right_value380, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value380;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __dec_obj150=((struct CVALUE*)come_null_check(come_value3_208, "06str.c", 1261))->type;
        ((struct CVALUE*)come_null_check(come_value3_208, "06str.c", 1261))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value381=sType_clone(result_type_198))));
        if(__dec_obj150) { come_call_finalizer(sType_finalize,__dec_obj150, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 31, right_value381);
        if(right_value381 && right_value381 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value381, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[31] = right_value381;
        __freed_obj__ = 0;
        ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value3_208, "06str.c", 1262))->type, "06str.c", 1262))->mStatic=(_Bool)0;
        __freed_obj__ = 0;
        ((struct CVALUE*)come_null_check(come_value3_208, "06str.c", 1263))->var=((void*)0);
        __freed_obj__ = 0;
        add_come_last_code(info,"%s;\n",((char*)(right_value382=buffer_to_string(((struct buffer*)come_null_check(buf_204, "06str.c", 1265))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 32, right_value382);
        if(right_value382 && right_value382 != __result_obj__ && !__freed_obj__) { right_value382 = come_decrement_ref_count(right_value382, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[32] = right_value382;
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1267))->stack, "06str.c", 1267)),(struct CVALUE*)come_increment_ref_count(come_value3_208));
        __freed_obj__ = 0;
        if(mNoSolvedGenericsType_183 && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,mNoSolvedGenericsType_183, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(true_node_184 && !__freed_obj__) { true_node_184 = come_decrement_ref_count(true_node_184, ((struct sNode*)true_node_184)->finalize, ((struct sNode*)true_node_184)->_protocol_obj, 0, 0, 0); } 
        if(come_value2_185 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value2_185, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(type_186 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_186, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(obj_value_189 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,obj_value_189, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(num_string_190 && !__freed_obj__) { come_call_finalizer(buffer_finalize,num_string_190, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(type2_191 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_191, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(type_name_192 && !__freed_obj__) { type_name_192 = come_decrement_ref_count(type_name_192, (void*)0, (void*)0, 0, 0, 0); }
        if(type3_193 && !__freed_obj__) { come_call_finalizer(sType_finalize,type3_193, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(obj_type_194 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_194, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(generics_fun_name_196 && !__freed_obj__) { generics_fun_name_196 = come_decrement_ref_count(generics_fun_name_196, (void*)0, (void*)0, 0, 0, 0); }
        if(result_type_198 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_198, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(come_params_199 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,come_params_199, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(buf_204 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_204, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(come_value3_208 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value3_208, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __result155__ = (_Bool)1;
    if(tuple_types_180 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,tuple_types_180, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(tuple_values_181 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,tuple_values_181, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value_182 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_182, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result155__;
    __freed_obj__ = 0;
    if(tuple_types_180 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,tuple_types_180, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(tuple_values_181 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,tuple_values_181, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value_182 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_182, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sSomeNode_sline(struct sSomeNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result156__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result156__ = ((struct sSomeNode*)come_null_check(self, "06str.c", 1275))->sline;
    __freed_obj__ = 0;
    return __result156__;
    __freed_obj__ = 0;
}

char* sSomeNode_sname(struct sSomeNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value383;
char* __result157__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value383, 0, sizeof(void*));
    __result157__ = __result_obj__ = ((char*)(right_value383=__builtin_string(((struct sSomeNode*)come_null_check(self, "06str.c", 1280))->sname)));
    __freed_obj__ = 0;
    return __result157__;
    __freed_obj__ = 0;
}

struct sMapNode* sMapNode_initialize(struct sMapNode* self, struct list$1sNodeph* map_key_elements, struct list$1sNodeph* map_elements, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1sNodeph* __dec_obj151;
struct list$1sNodeph* __dec_obj152;
void* right_value384;
char* __dec_obj153;
struct sMapNode* __result158__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value384, 0, sizeof(void*));
    __dec_obj151=((struct sMapNode*)come_null_check(self, "06str.c", 1293))->map_key_elements;
    ((struct sMapNode*)come_null_check(self, "06str.c", 1293))->map_key_elements=(struct list$1sNodeph*)come_increment_ref_count(map_key_elements);
    if(__dec_obj151) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj151, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj152=((struct sMapNode*)come_null_check(self, "06str.c", 1294))->map_elements;
    ((struct sMapNode*)come_null_check(self, "06str.c", 1294))->map_elements=(struct list$1sNodeph*)come_increment_ref_count(map_elements);
    if(__dec_obj152) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj152, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    ((struct sMapNode*)come_null_check(self, "06str.c", 1296))->sline=((struct sInfo*)come_null_check(info, "06str.c", 1296))->sline;
    __freed_obj__ = 0;
    __dec_obj153=((struct sMapNode*)come_null_check(self, "06str.c", 1297))->sname;
    ((struct sMapNode*)come_null_check(self, "06str.c", 1297))->sname=(char*)come_increment_ref_count(((char*)(right_value384=__builtin_string(((struct sInfo*)come_null_check(info, "06str.c", 1297))->sname))));
    if(__dec_obj153) { __dec_obj153 = come_decrement_ref_count(__dec_obj153, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value384);
    if(right_value384 && right_value384 != __result_obj__ && !__freed_obj__) { right_value384 = come_decrement_ref_count(right_value384, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value384;
    __freed_obj__ = 0;
    __result158__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sMapNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(map_key_elements && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,map_key_elements, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(map_elements && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,map_elements, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result158__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sMapNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(map_key_elements && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,map_key_elements, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(map_elements && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,map_elements, (void*)0, (void*)0, 0, 0, 1, 0); }
}

_Bool sMapNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result159__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result159__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result159__;
    __freed_obj__ = 0;
}

char* sMapNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value385;
char* __result160__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value385, 0, sizeof(void*));
    __result160__ = __result_obj__ = ((char*)(right_value385=__builtin_string("sMapNode")));
    __freed_obj__ = 0;
    return __result160__;
    __freed_obj__ = 0;
}

_Bool sMapNode_compile(struct sMapNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1sNodeph* map_key_elements_209;
struct list$1sNodeph* map_elements_210;
void* right_value386;
void* right_value387;
struct list$1CVALUEph* key_params_211;
void* right_value388;
void* right_value389;
struct list$1CVALUEph* element_params_212;
struct sType* map_key_type_213;
struct sType* map_element_type_214;
int i_215;
_Bool _for_condtionalA15;
void* right_value394;
struct sNode* key_elements_220;
void* right_value395;
struct sNode* elements_221;
_Bool _if_conditional260;
_Bool __result166__;
void* right_value396;
struct CVALUE* come_value_222;
_Bool _if_conditional261;
_Bool __result167__;
void* right_value397;
struct CVALUE* come_value2_223;
void* right_value398;
struct sType* __dec_obj155;
void* right_value399;
struct sType* __dec_obj156;
static int map_value_num_224=0;
void* right_value400;
struct sType* key_type_values_225;
void* right_value401;
void* right_value402;
char* var_name_226;
void* right_value403;
struct sVar* var__227;
void* right_value404;
void* right_value405;
struct sType* element_type_values_228;
void* right_value406;
void* right_value407;
char* var_name2_229;
void* right_value408;
struct sVar* var2__230;
void* right_value409;
void* right_value410;
void* right_value411;
struct buffer* source_231;
int i_232;
_Bool _for_condtionalA16;
void* right_value412;
struct CVALUE* key_param_233;
void* right_value413;
struct CVALUE* element_param_234;
_Bool _if_conditional262;
void* right_value414;
void* right_value415;
_Bool _if_conditional263;
void* right_value416;
void* right_value417;
void* right_value418;
void* right_value419;
void* right_value420;
struct sType* map_type_235;
void* right_value421;
void* right_value422;
void* right_value423;
struct sType* obj_type_236;
char* fun_name_237;
void* right_value424;
void* right_value425;
void* right_value426;
char* generics_fun_name_238;
void* right_value427;
struct sFun* fun_239;
_Bool _if_conditional264;
void* right_value428;
void* right_value429;
char* __dec_obj157;
void* right_value430;
_Bool _if_conditional265;
_Bool __result168__;
void* right_value431;
struct sType* result_type_240;
struct sType* type_241;
void* right_value432;
struct CVALUE* obj_value_242;
void* right_value433;
void* right_value434;
struct buffer* num_string_243;
void* right_value435;
struct sType* type2_244;
void* right_value436;
char* type_name_245;
void* right_value437;
void* right_value438;
char* __dec_obj158;
void* right_value439;
struct sType* type3_246;
void* right_value440;
struct sType* __dec_obj159;
void* right_value441;
char* __dec_obj160;
void* right_value442;
void* right_value443;
struct list$1CVALUEph* come_params_247;
void* right_value444;
struct optional$2sTypephbool* __exception_result_var_a11;
_Bool _if_conditional266;
_Bool _if_conditional267;
_Bool _if_conditional268;
char* __dec_obj161;
_Bool _if_conditional269;
void* right_value445;
char* __dec_obj162;
_Bool _if_conditional270;
void* right_value446;
char* __dec_obj163;
void* right_value447;
char* __dec_obj164;
_Bool _if_conditional271;
void* right_value448;
char* __dec_obj165;
void* right_value449;
struct CVALUE* come_value2_248;
void* right_value450;
char* __dec_obj166;
struct sType* __dec_obj167;
void* right_value451;
struct CVALUE* come_value3_249;
void* right_value452;
char* __dec_obj168;
struct sType* __dec_obj169;
void* right_value453;
struct CVALUE* come_value4_250;
void* right_value454;
char* __dec_obj170;
struct sType* __dec_obj171;
void* right_value455;
void* right_value456;
struct buffer* buf_251;
int j_252;
struct list$1CVALUEph* o2_saved_253;
struct CVALUE* it_254;
_Bool _for_condtionalA17;
_Bool _if_conditional272;
void* right_value457;
struct CVALUE* come_value5_255;
void* right_value458;
char* __dec_obj172;
_Bool _if_conditional273;
void* right_value459;
void* right_value460;
char* __dec_obj173;
void* right_value461;
struct sType* __dec_obj174;
void* right_value462;
_Bool __result169__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&map_key_elements_209, 0, sizeof(struct list$1sNodeph*));
memset(&map_elements_210, 0, sizeof(struct list$1sNodeph*));
memset(&right_value386, 0, sizeof(void*));
memset(&right_value387, 0, sizeof(void*));
memset(&key_params_211, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value388, 0, sizeof(void*));
memset(&right_value389, 0, sizeof(void*));
memset(&element_params_212, 0, sizeof(struct list$1CVALUEph*));
memset(&map_key_type_213, 0, sizeof(struct sType*));
memset(&map_element_type_214, 0, sizeof(struct sType*));
memset(&i_215, 0, sizeof(int));
memset(&right_value394, 0, sizeof(void*));
memset(&key_elements_220, 0, sizeof(struct sNode*));
memset(&right_value395, 0, sizeof(void*));
memset(&elements_221, 0, sizeof(struct sNode*));
memset(&right_value396, 0, sizeof(void*));
memset(&come_value_222, 0, sizeof(struct CVALUE*));
memset(&right_value397, 0, sizeof(void*));
memset(&come_value2_223, 0, sizeof(struct CVALUE*));
memset(&right_value398, 0, sizeof(void*));
memset(&right_value399, 0, sizeof(void*));
memset(&right_value400, 0, sizeof(void*));
memset(&key_type_values_225, 0, sizeof(struct sType*));
memset(&right_value401, 0, sizeof(void*));
memset(&right_value402, 0, sizeof(void*));
memset(&var_name_226, 0, sizeof(char*));
memset(&right_value403, 0, sizeof(void*));
memset(&var__227, 0, sizeof(struct sVar*));
memset(&right_value404, 0, sizeof(void*));
memset(&right_value405, 0, sizeof(void*));
memset(&element_type_values_228, 0, sizeof(struct sType*));
memset(&right_value406, 0, sizeof(void*));
memset(&right_value407, 0, sizeof(void*));
memset(&var_name2_229, 0, sizeof(char*));
memset(&right_value408, 0, sizeof(void*));
memset(&var2__230, 0, sizeof(struct sVar*));
memset(&right_value409, 0, sizeof(void*));
memset(&right_value410, 0, sizeof(void*));
memset(&right_value411, 0, sizeof(void*));
memset(&source_231, 0, sizeof(struct buffer*));
memset(&i_232, 0, sizeof(int));
memset(&right_value412, 0, sizeof(void*));
memset(&key_param_233, 0, sizeof(struct CVALUE*));
memset(&right_value413, 0, sizeof(void*));
memset(&element_param_234, 0, sizeof(struct CVALUE*));
memset(&right_value414, 0, sizeof(void*));
memset(&right_value415, 0, sizeof(void*));
memset(&right_value416, 0, sizeof(void*));
memset(&right_value417, 0, sizeof(void*));
memset(&right_value418, 0, sizeof(void*));
memset(&right_value419, 0, sizeof(void*));
memset(&right_value420, 0, sizeof(void*));
memset(&map_type_235, 0, sizeof(struct sType*));
memset(&right_value421, 0, sizeof(void*));
memset(&right_value422, 0, sizeof(void*));
memset(&right_value423, 0, sizeof(void*));
memset(&obj_type_236, 0, sizeof(struct sType*));
memset(&fun_name_237, 0, sizeof(char*));
memset(&right_value424, 0, sizeof(void*));
memset(&right_value425, 0, sizeof(void*));
memset(&right_value426, 0, sizeof(void*));
memset(&generics_fun_name_238, 0, sizeof(char*));
memset(&right_value427, 0, sizeof(void*));
memset(&fun_239, 0, sizeof(struct sFun*));
memset(&right_value428, 0, sizeof(void*));
memset(&right_value429, 0, sizeof(void*));
memset(&right_value430, 0, sizeof(void*));
memset(&right_value431, 0, sizeof(void*));
memset(&result_type_240, 0, sizeof(struct sType*));
memset(&type_241, 0, sizeof(struct sType*));
memset(&right_value432, 0, sizeof(void*));
memset(&obj_value_242, 0, sizeof(struct CVALUE*));
memset(&right_value433, 0, sizeof(void*));
memset(&right_value434, 0, sizeof(void*));
memset(&num_string_243, 0, sizeof(struct buffer*));
memset(&right_value435, 0, sizeof(void*));
memset(&type2_244, 0, sizeof(struct sType*));
memset(&right_value436, 0, sizeof(void*));
memset(&type_name_245, 0, sizeof(char*));
memset(&right_value437, 0, sizeof(void*));
memset(&right_value438, 0, sizeof(void*));
memset(&right_value439, 0, sizeof(void*));
memset(&type3_246, 0, sizeof(struct sType*));
memset(&right_value440, 0, sizeof(void*));
memset(&right_value441, 0, sizeof(void*));
memset(&right_value442, 0, sizeof(void*));
memset(&right_value443, 0, sizeof(void*));
memset(&come_params_247, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value444, 0, sizeof(void*));
memset(&right_value445, 0, sizeof(void*));
memset(&right_value446, 0, sizeof(void*));
memset(&right_value447, 0, sizeof(void*));
memset(&right_value448, 0, sizeof(void*));
memset(&right_value449, 0, sizeof(void*));
memset(&come_value2_248, 0, sizeof(struct CVALUE*));
memset(&right_value450, 0, sizeof(void*));
memset(&right_value451, 0, sizeof(void*));
memset(&come_value3_249, 0, sizeof(struct CVALUE*));
memset(&right_value452, 0, sizeof(void*));
memset(&right_value453, 0, sizeof(void*));
memset(&come_value4_250, 0, sizeof(struct CVALUE*));
memset(&right_value454, 0, sizeof(void*));
memset(&right_value455, 0, sizeof(void*));
memset(&right_value456, 0, sizeof(void*));
memset(&buf_251, 0, sizeof(struct buffer*));
memset(&j_252, 0, sizeof(int));
memset(&o2_saved_253, 0, sizeof(struct list$1CVALUEph*));
memset(&it_254, 0, sizeof(struct CVALUE*));
memset(&right_value457, 0, sizeof(void*));
memset(&come_value5_255, 0, sizeof(struct CVALUE*));
memset(&right_value458, 0, sizeof(void*));
memset(&right_value459, 0, sizeof(void*));
memset(&right_value460, 0, sizeof(void*));
memset(&right_value461, 0, sizeof(void*));
memset(&right_value462, 0, sizeof(void*));
    map_key_elements_209=((struct sMapNode*)come_null_check(self, "06str.c", 1314))->map_key_elements;
    __freed_obj__ = 0;
    map_elements_210=((struct sMapNode*)come_null_check(self, "06str.c", 1315))->map_elements;
    __freed_obj__ = 0;
    key_params_211=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value387=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value386=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 1317))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value386);
    if(right_value386 && right_value386 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value386, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value386;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value387);
    if(right_value387 && right_value387 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value387, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value387;
    __freed_obj__ = 0;
    element_params_212=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value389=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value388=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 1318))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value388);
    if(right_value388 && right_value388 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value388, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value388;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value389);
    if(right_value389 && right_value389 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value389, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value389;
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    for(
    i_215=0 ,    __freed_obj__ = 0, 
    0;    _for_condtionalA15=    i_215<list$1sNodeph_length(((struct list$1sNodeph*)come_null_check(map_key_elements_209, "06str.c", 1348))) ,    __freed_obj__ = 0, 
    _for_condtionalA15;    i_215++ ,    __freed_obj__ = 0, 
    0    ){
        come_clear_stackframe();
        key_elements_220=optional$2sNodephbool_value((come_push_stackframe("06str.c", 1323),((struct optional$2sNodephbool*)(right_value394=list$1sNodephp_operator_load_element(map_key_elements_209,i_215)))));
        come_pop_stackframe();
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value394);
        if(right_value394 && right_value394 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sNodephboolp_finalize,right_value394, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value394;
        __freed_obj__ = 0;
        come_clear_stackframe();
        elements_221=optional$2sNodephbool_value((come_push_stackframe("06str.c", 1324),((struct optional$2sNodephbool*)(right_value395=list$1sNodephp_operator_load_element(map_elements_210,i_215)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value395);
        if(right_value395 && right_value395 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sNodephboolp_finalize,right_value395, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value395;
        __freed_obj__ = 0;
        if(_if_conditional260=!((struct sNode*)come_null_check(key_elements_220, "06str.c", 1330))->compile(((struct sNode*)come_null_check(key_elements_220, "06str.c", 1330))->_protocol_obj,info),        __freed_obj__ = 0, 
        _if_conditional260) {
            __result166__ = (_Bool)0;
            if(key_params_211 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,key_params_211, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(element_params_212 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,element_params_212, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(map_key_type_213 && !__freed_obj__) { come_call_finalizer(sType_finalize,map_key_type_213, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(map_element_type_214 && !__freed_obj__) { come_call_finalizer(sType_finalize,map_element_type_214, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
            return __result166__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        come_value_222=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value396=get_value_from_stack(-1,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value396);
        if(right_value396 && right_value396 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value396, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value396;
        __freed_obj__ = 0;
        dec_stack_ptr(1,info);
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(key_params_211, "06str.c", 1333)),(struct CVALUE*)come_increment_ref_count(come_value_222));
        __freed_obj__ = 0;
        if(_if_conditional261=!((struct sNode*)come_null_check(elements_221, "06str.c", 1339))->compile(((struct sNode*)come_null_check(elements_221, "06str.c", 1339))->_protocol_obj,info),        __freed_obj__ = 0, 
        _if_conditional261) {
            __result167__ = (_Bool)0;
            if(come_value_222 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_222, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(key_params_211 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,key_params_211, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(element_params_212 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,element_params_212, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(map_key_type_213 && !__freed_obj__) { come_call_finalizer(sType_finalize,map_key_type_213, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(map_element_type_214 && !__freed_obj__) { come_call_finalizer(sType_finalize,map_element_type_214, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
            return __result167__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        come_value2_223=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value397=get_value_from_stack(-1,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value397);
        if(right_value397 && right_value397 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value397, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value397;
        __freed_obj__ = 0;
        dec_stack_ptr(1,info);
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(element_params_212, "06str.c", 1342)),(struct CVALUE*)come_increment_ref_count(come_value2_223));
        __freed_obj__ = 0;
        __dec_obj155=map_key_type_213;
        map_key_type_213=(struct sType*)come_increment_ref_count(((struct sType*)(right_value398=sType_clone(((struct CVALUE*)come_null_check(come_value_222, "06str.c", 1344))->type))));
        if(__dec_obj155) { come_call_finalizer(sType_finalize,__dec_obj155, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value398);
        if(right_value398 && right_value398 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value398, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[4] = right_value398;
        __freed_obj__ = 0;
        __dec_obj156=map_element_type_214;
        map_element_type_214=(struct sType*)come_increment_ref_count(((struct sType*)(right_value399=sType_clone(((struct CVALUE*)come_null_check(come_value2_223, "06str.c", 1345))->type))));
        if(__dec_obj156) { come_call_finalizer(sType_finalize,__dec_obj156, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value399);
        if(right_value399 && right_value399 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value399, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[5] = right_value399;
        __freed_obj__ = 0;
        if(come_value_222 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_222, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(come_value2_223 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value2_223, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    key_type_values_225=(struct sType*)come_increment_ref_count(((struct sType*)(right_value400=sType_clone(map_key_type_213))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value400);
    if(right_value400 && right_value400 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value400, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value400;
    __freed_obj__ = 0;
    list$1sNodeph_push_back(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(key_type_values_225, "06str.c", 1351))->mArrayNum, "06str.c", 1351)),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value401=create_int_node(list$1CVALUEph_length(((struct list$1CVALUEph*)come_null_check(key_params_211, "06str.c", 1351))),info)))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value401);
    if(right_value401 && right_value401 != __result_obj__ && !__freed_obj__) { right_value401 = come_decrement_ref_count(right_value401, ((struct sNode*)right_value401)->finalize, ((struct sNode*)right_value401)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[5] = right_value401;
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(key_type_values_225, "06str.c", 1352))->mHeap=(_Bool)0;
    __freed_obj__ = 0;
    var_name_226=(char*)come_increment_ref_count(((char*)(right_value402=xsprintf("__map_keys%d__",++map_value_num_224))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value402);
    if(right_value402 && right_value402 != __result_obj__ && !__freed_obj__) { right_value402 = come_decrement_ref_count(right_value402, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[6] = right_value402;
    __freed_obj__ = 0;
    add_variable_to_table(var_name_226,(struct sType*)come_increment_ref_count(((struct sType*)(right_value403=sType_clone(key_type_values_225)))),info);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value403);
    if(right_value403 && right_value403 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value403, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[7] = right_value403;
    __freed_obj__ = 0;
    var__227=get_variable_from_table(((struct sInfo*)come_null_check(info, "06str.c", 1358))->lv_table,var_name_226);
    __freed_obj__ = 0;
    come_clear_stackframe();
    add_come_code_at_function_head(info,"%s;\n",optional$2charphbool_expect((come_push_stackframe("06str.c", 1360),((struct optional$2charphbool*)(right_value404=make_define_var(key_type_values_225,((struct sVar*)come_null_check(var__227, "06str.c", 1360))->mCValueName,(_Bool)0,info))))));
    come_pop_stackframe();
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value404);
    if(right_value404 && right_value404 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value404, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[8] = right_value404;
    __freed_obj__ = 0;
    element_type_values_228=(struct sType*)come_increment_ref_count(((struct sType*)(right_value405=sType_clone(map_element_type_214))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 9, right_value405);
    if(right_value405 && right_value405 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value405, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[9] = right_value405;
    __freed_obj__ = 0;
    list$1sNodeph_push_back(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(element_type_values_228, "06str.c", 1363))->mArrayNum, "06str.c", 1363)),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value406=create_int_node(list$1CVALUEph_length(((struct list$1CVALUEph*)come_null_check(element_params_212, "06str.c", 1363))),info)))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 10, right_value406);
    if(right_value406 && right_value406 != __result_obj__ && !__freed_obj__) { right_value406 = come_decrement_ref_count(right_value406, ((struct sNode*)right_value406)->finalize, ((struct sNode*)right_value406)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[10] = right_value406;
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(element_type_values_228, "06str.c", 1364))->mHeap=(_Bool)0;
    __freed_obj__ = 0;
    var_name2_229=(char*)come_increment_ref_count(((char*)(right_value407=xsprintf("__map_element%d__",map_value_num_224))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 11, right_value407);
    if(right_value407 && right_value407 != __result_obj__ && !__freed_obj__) { right_value407 = come_decrement_ref_count(right_value407, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[11] = right_value407;
    __freed_obj__ = 0;
    add_variable_to_table(var_name2_229,(struct sType*)come_increment_ref_count(((struct sType*)(right_value408=sType_clone(element_type_values_228)))),info);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 12, right_value408);
    if(right_value408 && right_value408 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value408, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[12] = right_value408;
    __freed_obj__ = 0;
    var2__230=get_variable_from_table(((struct sInfo*)come_null_check(info, "06str.c", 1370))->lv_table,var_name2_229);
    __freed_obj__ = 0;
    come_clear_stackframe();
    add_come_code_at_function_head(info,"%s;\n",optional$2charphbool_expect((come_push_stackframe("06str.c", 1372),((struct optional$2charphbool*)(right_value409=make_define_var(element_type_values_228,((struct sVar*)come_null_check(var2__230, "06str.c", 1372))->mCValueName,(_Bool)0,info))))));
    come_pop_stackframe();
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 13, right_value409);
    if(right_value409 && right_value409 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value409, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[13] = right_value409;
    __freed_obj__ = 0;
    source_231=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value411=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value410=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1374))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 14, right_value410);
    if(right_value410 && right_value410 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value410, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[14] = right_value410;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 15, right_value411);
    if(right_value411 && right_value411 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value411, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[15] = right_value411;
    __freed_obj__ = 0;
    buffer_append_str(((struct buffer*)come_null_check(source_231, "06str.c", 1376)),"{");
    __freed_obj__ = 0;
    for(
    i_232=0 ,    __freed_obj__ = 0, 
    0;    _for_condtionalA16=    i_232<list$1CVALUEph_length(((struct list$1CVALUEph*)come_null_check(key_params_211, "06str.c", 1397))) ,    __freed_obj__ = 0, 
    _for_condtionalA16;    i_232++ ,    __freed_obj__ = 0, 
    0    ){
        come_clear_stackframe();
        key_param_233=optional$2CVALUEphbool_value((come_push_stackframe("06str.c", 1379),((struct optional$2CVALUEphbool*)(right_value412=list$1CVALUEphp_operator_load_element(key_params_211,i_232)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value412);
        if(right_value412 && right_value412 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2CVALUEphboolp_finalize,right_value412, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value412;
        __freed_obj__ = 0;
        come_clear_stackframe();
        element_param_234=optional$2CVALUEphbool_value((come_push_stackframe("06str.c", 1380),((struct optional$2CVALUEphbool*)(right_value413=list$1CVALUEphp_operator_load_element(element_params_212,i_232)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value413);
        if(right_value413 && right_value413 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2CVALUEphboolp_finalize,right_value413, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value413;
        __freed_obj__ = 0;
        if(_if_conditional262=((struct sType*)come_null_check(map_key_type_213, "06str.c", 1389))->mHeap,        __freed_obj__ = 0, 
        _if_conditional262) {
            buffer_append_str(((struct buffer*)come_null_check(source_231, "06str.c", 1383)),((char*)(right_value414=xsprintf("%s[%d]=come_increment_ref_count(%s);\n",((struct sVar*)come_null_check(var__227, "06str.c", 1383))->mCValueName,i_232,((struct CVALUE*)come_null_check(key_param_233, "06str.c", 1383))->c_value))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value414);
            if(right_value414 && right_value414 != __result_obj__ && !__freed_obj__) { right_value414 = come_decrement_ref_count(right_value414, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value414;
            __freed_obj__ = 0;
        }
        else {
            buffer_append_str(((struct buffer*)come_null_check(source_231, "06str.c", 1386)),((char*)(right_value415=xsprintf("%s[%d]=%s;\n",((struct sVar*)come_null_check(var__227, "06str.c", 1386))->mCValueName,i_232,((struct CVALUE*)come_null_check(key_param_233, "06str.c", 1386))->c_value))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value415);
            if(right_value415 && right_value415 != __result_obj__ && !__freed_obj__) { right_value415 = come_decrement_ref_count(right_value415, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value415;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional263=((struct sType*)come_null_check(map_element_type_214, "06str.c", 1395))->mHeap,        __freed_obj__ = 0, 
        _if_conditional263) {
            buffer_append_str(((struct buffer*)come_null_check(source_231, "06str.c", 1390)),((char*)(right_value416=xsprintf("%s[%d]=come_increment_ref_count(%s);\n",((struct sVar*)come_null_check(var2__230, "06str.c", 1390))->mCValueName,i_232,((struct CVALUE*)come_null_check(element_param_234, "06str.c", 1390))->c_value))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value416);
            if(right_value416 && right_value416 != __result_obj__ && !__freed_obj__) { right_value416 = come_decrement_ref_count(right_value416, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value416;
            __freed_obj__ = 0;
        }
        else {
            buffer_append_str(((struct buffer*)come_null_check(source_231, "06str.c", 1393)),((char*)(right_value417=xsprintf("%s[%d]=%s;\n",((struct sVar*)come_null_check(var2__230, "06str.c", 1393))->mCValueName,i_232,((struct CVALUE*)come_null_check(element_param_234, "06str.c", 1393))->c_value))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value417);
            if(right_value417 && right_value417 != __result_obj__ && !__freed_obj__) { right_value417 = come_decrement_ref_count(right_value417, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value417;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    buffer_append_str(((struct buffer*)come_null_check(source_231, "06str.c", 1397)),"}");
    __freed_obj__ = 0;
    add_come_code(info,"%s",((char*)(right_value418=buffer_to_string(((struct buffer*)come_null_check(source_231, "06str.c", 1399))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 16, right_value418);
    if(right_value418 && right_value418 != __result_obj__ && !__freed_obj__) { right_value418 = come_decrement_ref_count(right_value418, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[16] = right_value418;
    __freed_obj__ = 0;
    map_type_235=(struct sType*)come_increment_ref_count(((struct sType*)(right_value420=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value419=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 1401)))),"map",(_Bool)0,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 17, right_value419);
    if(right_value419 && right_value419 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value419, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[17] = right_value419;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 18, right_value420);
    if(right_value420 && right_value420 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value420, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[18] = right_value420;
    __freed_obj__ = 0;
    list$1sTypeph_push_back(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(map_type_235, "06str.c", 1402))->mGenericsTypes, "06str.c", 1402)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value421=sType_clone(map_key_type_213)))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 19, right_value421);
    if(right_value421 && right_value421 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value421, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[19] = right_value421;
    __freed_obj__ = 0;
    list$1sTypeph_push_back(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(map_type_235, "06str.c", 1403))->mGenericsTypes, "06str.c", 1403)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value422=sType_clone(map_element_type_214)))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 20, right_value422);
    if(right_value422 && right_value422 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value422, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[20] = right_value422;
    __freed_obj__ = 0;
    obj_type_236=(struct sType*)come_increment_ref_count(((struct sType*)(right_value423=sType_clone(map_type_235))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 21, right_value423);
    if(right_value423 && right_value423 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value423, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[21] = right_value423;
    __freed_obj__ = 0;
    fun_name_237="initialize_with_values";
    __freed_obj__ = 0;
    generics_fun_name_238=(char*)come_increment_ref_count(((char*)(right_value426=string_to_string(((char*)come_null_check(((char*)(right_value425=make_generics_function(obj_type_236,(char*)come_increment_ref_count(((char*)(right_value424=__builtin_string(fun_name_237)))),info))), "06str.c", 1408))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 22, right_value424);
    if(right_value424 && right_value424 != __result_obj__ && !__freed_obj__) { right_value424 = come_decrement_ref_count(right_value424, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[22] = right_value424;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 23, right_value425);
    if(right_value425 && right_value425 != __result_obj__ && !__freed_obj__) { right_value425 = come_decrement_ref_count(right_value425, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[23] = right_value425;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 24, right_value426);
    if(right_value426 && right_value426 != __result_obj__ && !__freed_obj__) { right_value426 = come_decrement_ref_count(right_value426, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[24] = right_value426;
    __freed_obj__ = 0;
    fun_239=((struct sFun*)(right_value427=map$2charphsFunph_at(((struct map$2charphsFunph*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1410))->funcs, "06str.c", 1410)),generics_fun_name_238,((void*)0))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 25, right_value427);
    if(right_value427 && right_value427 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value427, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[25] = right_value427;
    __freed_obj__ = 0;
    if(_if_conditional264=fun_239==((void*)0),    __freed_obj__ = 0, 
    _if_conditional264) {
        __dec_obj157=generics_fun_name_238;
        generics_fun_name_238=(char*)come_increment_ref_count(((char*)(right_value429=create_method_name(obj_type_236,(_Bool)0,((char*)(right_value428=__builtin_string(fun_name_237))),info))));
        if(__dec_obj157) { __dec_obj157 = come_decrement_ref_count(__dec_obj157, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value428);
        if(right_value428 && right_value428 != __result_obj__ && !__freed_obj__) { right_value428 = come_decrement_ref_count(right_value428, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value428;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value429);
        if(right_value429 && right_value429 != __result_obj__ && !__freed_obj__) { right_value429 = come_decrement_ref_count(right_value429, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value429;
        __freed_obj__ = 0;
        fun_239=((struct sFun*)(right_value430=map$2charphsFunph_at(((struct map$2charphsFunph*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1415))->funcs, "06str.c", 1415)),generics_fun_name_238,((void*)0))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value430);
        if(right_value430 && right_value430 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value430, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value430;
        __freed_obj__ = 0;
        if(_if_conditional265=fun_239==((void*)0),        __freed_obj__ = 0, 
        _if_conditional265) {
            err_msg(info,"function not found(%s) at method(%s)(3)\n",generics_fun_name_238,((struct sFun*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1418))->come_fun, "06str.c", 1418))->mName);
            __freed_obj__ = 0;
            __result168__ = (_Bool)1;
            if(key_params_211 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,key_params_211, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(element_params_212 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,element_params_212, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(map_key_type_213 && !__freed_obj__) { come_call_finalizer(sType_finalize,map_key_type_213, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(map_element_type_214 && !__freed_obj__) { come_call_finalizer(sType_finalize,map_element_type_214, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(key_type_values_225 && !__freed_obj__) { come_call_finalizer(sType_finalize,key_type_values_225, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(var_name_226 && !__freed_obj__) { var_name_226 = come_decrement_ref_count(var_name_226, (void*)0, (void*)0, 0, 0, 0); }
            if(element_type_values_228 && !__freed_obj__) { come_call_finalizer(sType_finalize,element_type_values_228, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(var_name2_229 && !__freed_obj__) { var_name2_229 = come_decrement_ref_count(var_name2_229, (void*)0, (void*)0, 0, 0, 0); }
            if(source_231 && !__freed_obj__) { come_call_finalizer(buffer_finalize,source_231, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(map_type_235 && !__freed_obj__) { come_call_finalizer(sType_finalize,map_type_235, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(obj_type_236 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_236, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(generics_fun_name_238 && !__freed_obj__) { generics_fun_name_238 = come_decrement_ref_count(generics_fun_name_238, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
            return __result168__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    result_type_240=(struct sType*)come_increment_ref_count(((struct sType*)(right_value431=sType_clone(((struct sFun*)come_null_check(fun_239, "06str.c", 1423))->mResultType))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 26, right_value431);
    if(right_value431 && right_value431 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value431, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[26] = right_value431;
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(result_type_240, "06str.c", 1424))->mStatic=(_Bool)0;
    __freed_obj__ = 0;
    type_241=map_type_235;
    __freed_obj__ = 0;
    obj_value_242=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value432=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1428))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 27, right_value432);
    if(right_value432 && right_value432 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value432, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[27] = right_value432;
    __freed_obj__ = 0;
    num_string_243=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value434=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value433=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1430))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 28, right_value433);
    if(right_value433 && right_value433 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value433, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[28] = right_value433;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 29, right_value434);
    if(right_value434 && right_value434 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value434, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[29] = right_value434;
    __freed_obj__ = 0;
    buffer_append_str(((struct buffer*)come_null_check(num_string_243, "06str.c", 1432)),"1");
    __freed_obj__ = 0;
    type2_244=(struct sType*)come_increment_ref_count(((struct sType*)(right_value435=solve_generics(type_241,type_241,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 30, right_value435);
    if(right_value435 && right_value435 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value435, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[30] = right_value435;
    __freed_obj__ = 0;
    come_clear_stackframe();
    type_name_245=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("06str.c", 1436),((struct optional$2charphbool*)(right_value436=make_type_name_string(type2_244,(_Bool)0,(_Bool)1,(_Bool)0,info))))));
    come_pop_stackframe();
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 31, right_value436);
    if(right_value436 && right_value436 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value436, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[31] = right_value436;
    __freed_obj__ = 0;
    __dec_obj158=((struct CVALUE*)come_null_check(obj_value_242, "06str.c", 1438))->c_value;
    ((struct CVALUE*)come_null_check(obj_value_242, "06str.c", 1438))->c_value=(char*)come_increment_ref_count(((char*)(right_value438=xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d)",type_name_245,type_name_245,((char*)(right_value437=buffer_to_string(((struct buffer*)come_null_check(num_string_243, "06str.c", 1438))))),((struct sInfo*)come_null_check(info, "06str.c", 1438))->sname,((struct sInfo*)come_null_check(info, "06str.c", 1438))->sline))));
    if(__dec_obj158) { __dec_obj158 = come_decrement_ref_count(__dec_obj158, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 32, right_value437);
    if(right_value437 && right_value437 != __result_obj__ && !__freed_obj__) { right_value437 = come_decrement_ref_count(right_value437, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[32] = right_value437;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 33, right_value438);
    if(right_value438 && right_value438 != __result_obj__ && !__freed_obj__) { right_value438 = come_decrement_ref_count(right_value438, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[33] = right_value438;
    __freed_obj__ = 0;
    type3_246=(struct sType*)come_increment_ref_count(((struct sType*)(right_value439=sType_clone(type2_244))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 34, right_value439);
    if(right_value439 && right_value439 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value439, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[34] = right_value439;
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(type3_246, "06str.c", 1441))->mPointerNum++;
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(type3_246, "06str.c", 1442))->mHeap=(_Bool)1;
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(type2_244, "06str.c", 1443))->mHeap=(_Bool)1;
    __freed_obj__ = 0;
    __dec_obj159=((struct CVALUE*)come_null_check(obj_value_242, "06str.c", 1444))->type;
    ((struct CVALUE*)come_null_check(obj_value_242, "06str.c", 1444))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value440=sType_clone(type2_244))));
    if(__dec_obj159) { come_call_finalizer(sType_finalize,__dec_obj159, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 35, right_value440);
    if(right_value440 && right_value440 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value440, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[35] = right_value440;
    __freed_obj__ = 0;
    __dec_obj160=((struct CVALUE*)come_null_check(obj_value_242, "06str.c", 1445))->c_value;
    ((struct CVALUE*)come_null_check(obj_value_242, "06str.c", 1445))->c_value=(char*)come_increment_ref_count(((char*)(right_value441=append_object_to_right_values(((struct CVALUE*)come_null_check(obj_value_242, "06str.c", 1445))->c_value,(struct sType*)come_increment_ref_count(type3_246),info))));
    if(__dec_obj160) { __dec_obj160 = come_decrement_ref_count(__dec_obj160, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 36, right_value441);
    if(right_value441 && right_value441 != __result_obj__ && !__freed_obj__) { right_value441 = come_decrement_ref_count(right_value441, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[36] = right_value441;
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(obj_value_242, "06str.c", 1446))->type, "06str.c", 1446))->mPointerNum++;
    __freed_obj__ = 0;
    ((struct CVALUE*)come_null_check(obj_value_242, "06str.c", 1447))->var=((void*)0);
    __freed_obj__ = 0;
    come_params_247=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value443=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value442=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 1449))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 37, right_value442);
    if(right_value442 && right_value442 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value442, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[37] = right_value442;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 38, right_value443);
    if(right_value443 && right_value443 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value443, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[38] = right_value443;
    __freed_obj__ = 0;
    if(_if_conditional266=((struct sType*)come_null_check(optional$2sTypephbool_value((come_clear_stackframe(), come_push_stackframe("06str.c", 1478),__exception_result_var_a11=((struct optional$2sTypephbool*)(right_value444=list$1sTypephp_operator_load_element(((struct sFun*)come_null_check(fun_239, "06str.c", 1478))->mParamTypes,0))), come_pop_stackframe(), __exception_result_var_a11)), "06str.c", 1478))->mHeap&&((struct sType*)come_null_check(((struct CVALUE*)come_null_check(obj_value_242, "06str.c", 1478))->type, "06str.c", 1478))->mHeap,    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 39, right_value444),
    (right_value444 && right_value444 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2sTypephboolp_finalize,right_value444, (void*)0, (void*)0, 0, 1, 0, 0):0,
    __right_value_freed_obj[39] = right_value444, 
    __freed_obj__ = 0, 
    _if_conditional266) {
        if(_if_conditional267=((struct CVALUE*)come_null_check(obj_value_242, "06str.c", 1477))->var,        __freed_obj__ = 0, 
        _if_conditional267) {
            if(_if_conditional268=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(obj_value_242, "06str.c", 1469))->var, "06str.c", 1469))->mType, "06str.c", 1469))->mDelegate,            __freed_obj__ = 0, 
            _if_conditional268) {
                __dec_obj161=((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(obj_value_242, "06str.c", 1454))->var, "06str.c", 1454))->mCValueName;
                ((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(obj_value_242, "06str.c", 1454))->var, "06str.c", 1454))->mCValueName=((void*)0);
                if(__dec_obj161) { __dec_obj161 = come_decrement_ref_count(__dec_obj161, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional269=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(obj_value_242, "06str.c", 1469))->var, "06str.c", 1469))->mType, "06str.c", 1469))->mShare,                __freed_obj__ = 0, 
                _if_conditional269) {
                    __dec_obj162=((struct CVALUE*)come_null_check(obj_value_242, "06str.c", 1457))->c_value;
                    ((struct CVALUE*)come_null_check(obj_value_242, "06str.c", 1457))->c_value=(char*)come_increment_ref_count(((char*)(right_value445=increment_ref_count_object(((struct CVALUE*)come_null_check(obj_value_242, "06str.c", 1457))->type,((struct CVALUE*)come_null_check(obj_value_242, "06str.c", 1457))->c_value,info))));
                    if(__dec_obj162) { __dec_obj162 = come_decrement_ref_count(__dec_obj162, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value445);
                    if(right_value445 && right_value445 != __result_obj__ && !__freed_obj__) { right_value445 = come_decrement_ref_count(right_value445, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value445;
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional270=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(obj_value_242, "06str.c", 1469))->var, "06str.c", 1469))->mType, "06str.c", 1469))->mClone,                    __freed_obj__ = 0, 
                    _if_conditional270) {
                        __dec_obj163=((struct CVALUE*)come_null_check(obj_value_242, "06str.c", 1460))->c_value;
                        ((struct CVALUE*)come_null_check(obj_value_242, "06str.c", 1460))->c_value=(char*)come_increment_ref_count(((char*)(right_value446=increment_ref_count_object(((struct CVALUE*)come_null_check(obj_value_242, "06str.c", 1460))->type,((struct CVALUE*)come_null_check(obj_value_242, "06str.c", 1460))->c_value,info))));
                        if(__dec_obj163) { __dec_obj163 = come_decrement_ref_count(__dec_obj163, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value446);
                        if(right_value446 && right_value446 != __result_obj__ && !__freed_obj__) { right_value446 = come_decrement_ref_count(right_value446, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value446;
                        __freed_obj__ = 0;
                    }
                    else {
                        __dec_obj164=((struct CVALUE*)come_null_check(obj_value_242, "06str.c", 1463))->c_value;
                        ((struct CVALUE*)come_null_check(obj_value_242, "06str.c", 1463))->c_value=(char*)come_increment_ref_count(((char*)(right_value447=increment_ref_count_object(((struct CVALUE*)come_null_check(obj_value_242, "06str.c", 1463))->type,((struct CVALUE*)come_null_check(obj_value_242, "06str.c", 1463))->c_value,info))));
                        if(__dec_obj164) { __dec_obj164 = come_decrement_ref_count(__dec_obj164, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value447);
                        if(right_value447 && right_value447 != __result_obj__ && !__freed_obj__) { right_value447 = come_decrement_ref_count(right_value447, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value447;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional271=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(obj_value_242, "06str.c", 1476))->type, "06str.c", 1476))->mDelegate,            __freed_obj__ = 0, 
            _if_conditional271) {
            }
            else {
                __dec_obj165=((struct CVALUE*)come_null_check(obj_value_242, "06str.c", 1474))->c_value;
                ((struct CVALUE*)come_null_check(obj_value_242, "06str.c", 1474))->c_value=(char*)come_increment_ref_count(((char*)(right_value448=increment_ref_count_object(((struct CVALUE*)come_null_check(obj_value_242, "06str.c", 1474))->type,((struct CVALUE*)come_null_check(obj_value_242, "06str.c", 1474))->c_value,info))));
                if(__dec_obj165) { __dec_obj165 = come_decrement_ref_count(__dec_obj165, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value448);
                if(right_value448 && right_value448 != __result_obj__ && !__freed_obj__) { right_value448 = come_decrement_ref_count(right_value448, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value448;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(come_params_247, "06str.c", 1478)),(struct CVALUE*)come_increment_ref_count(obj_value_242));
    __freed_obj__ = 0;
    come_value2_248=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value449=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1480))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 40, right_value449);
    if(right_value449 && right_value449 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value449, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[40] = right_value449;
    __freed_obj__ = 0;
    __dec_obj166=((struct CVALUE*)come_null_check(come_value2_248, "06str.c", 1482))->c_value;
    ((struct CVALUE*)come_null_check(come_value2_248, "06str.c", 1482))->c_value=(char*)come_increment_ref_count(((char*)(right_value450=xsprintf("%d",list$1CVALUEph_length(((struct list$1CVALUEph*)come_null_check(key_params_211, "06str.c", 1482)))))));
    if(__dec_obj166) { __dec_obj166 = come_decrement_ref_count(__dec_obj166, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 41, right_value450);
    if(right_value450 && right_value450 != __result_obj__ && !__freed_obj__) { right_value450 = come_decrement_ref_count(right_value450, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[41] = right_value450;
    __freed_obj__ = 0;
    __dec_obj167=((struct CVALUE*)come_null_check(come_value2_248, "06str.c", 1483))->type;
    ((struct CVALUE*)come_null_check(come_value2_248, "06str.c", 1483))->type=((void*)0);
    if(__dec_obj167) { come_call_finalizer(sType_finalize,__dec_obj167, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    ((struct CVALUE*)come_null_check(come_value2_248, "06str.c", 1484))->var=((void*)0);
    __freed_obj__ = 0;
    list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(come_params_247, "06str.c", 1486)),(struct CVALUE*)come_increment_ref_count(come_value2_248));
    __freed_obj__ = 0;
    come_value3_249=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value451=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1488))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 42, right_value451);
    if(right_value451 && right_value451 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value451, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[42] = right_value451;
    __freed_obj__ = 0;
    __dec_obj168=((struct CVALUE*)come_null_check(come_value3_249, "06str.c", 1490))->c_value;
    ((struct CVALUE*)come_null_check(come_value3_249, "06str.c", 1490))->c_value=(char*)come_increment_ref_count(((char*)(right_value452=xsprintf("%s",((struct sVar*)come_null_check(var__227, "06str.c", 1490))->mCValueName))));
    if(__dec_obj168) { __dec_obj168 = come_decrement_ref_count(__dec_obj168, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 43, right_value452);
    if(right_value452 && right_value452 != __result_obj__ && !__freed_obj__) { right_value452 = come_decrement_ref_count(right_value452, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[43] = right_value452;
    __freed_obj__ = 0;
    __dec_obj169=((struct CVALUE*)come_null_check(come_value3_249, "06str.c", 1491))->type;
    ((struct CVALUE*)come_null_check(come_value3_249, "06str.c", 1491))->type=((void*)0);
    if(__dec_obj169) { come_call_finalizer(sType_finalize,__dec_obj169, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    ((struct CVALUE*)come_null_check(come_value3_249, "06str.c", 1492))->var=((void*)0);
    __freed_obj__ = 0;
    list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(come_params_247, "06str.c", 1494)),(struct CVALUE*)come_increment_ref_count(come_value3_249));
    __freed_obj__ = 0;
    come_value4_250=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value453=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1496))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 44, right_value453);
    if(right_value453 && right_value453 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value453, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[44] = right_value453;
    __freed_obj__ = 0;
    __dec_obj170=((struct CVALUE*)come_null_check(come_value4_250, "06str.c", 1498))->c_value;
    ((struct CVALUE*)come_null_check(come_value4_250, "06str.c", 1498))->c_value=(char*)come_increment_ref_count(((char*)(right_value454=xsprintf("%s",((struct sVar*)come_null_check(var2__230, "06str.c", 1498))->mCValueName))));
    if(__dec_obj170) { __dec_obj170 = come_decrement_ref_count(__dec_obj170, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 45, right_value454);
    if(right_value454 && right_value454 != __result_obj__ && !__freed_obj__) { right_value454 = come_decrement_ref_count(right_value454, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[45] = right_value454;
    __freed_obj__ = 0;
    __dec_obj171=((struct CVALUE*)come_null_check(come_value4_250, "06str.c", 1499))->type;
    ((struct CVALUE*)come_null_check(come_value4_250, "06str.c", 1499))->type=((void*)0);
    if(__dec_obj171) { come_call_finalizer(sType_finalize,__dec_obj171, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    ((struct CVALUE*)come_null_check(come_value4_250, "06str.c", 1500))->var=((void*)0);
    __freed_obj__ = 0;
    list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(come_params_247, "06str.c", 1502)),(struct CVALUE*)come_increment_ref_count(come_value4_250));
    __freed_obj__ = 0;
    buf_251=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value456=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value455=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1504))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 46, right_value455);
    if(right_value455 && right_value455 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value455, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[46] = right_value455;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 47, right_value456);
    if(right_value456 && right_value456 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value456, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[47] = right_value456;
    __freed_obj__ = 0;
    buffer_append_str(((struct buffer*)come_null_check(buf_251, "06str.c", 1506)),generics_fun_name_238);
    __freed_obj__ = 0;
    buffer_append_str(((struct buffer*)come_null_check(buf_251, "06str.c", 1507)),"(");
    __freed_obj__ = 0;
    j_252=0;
    __freed_obj__ = 0;
    for(
    o2_saved_253=(struct list$1CVALUEph*)come_increment_ref_count((come_params_247)),it_254=list$1CVALUEph_begin(((struct list$1CVALUEph*)come_null_check((o2_saved_253), "06str.c", 1519))) ,    __freed_obj__ = 0, 
    0;    _for_condtionalA17=    !list$1CVALUEph_end(((struct list$1CVALUEph*)come_null_check((o2_saved_253), "06str.c", 1519))) ,    __freed_obj__ = 0, 
    _for_condtionalA17;    it_254=list$1CVALUEph_next(((struct list$1CVALUEph*)come_null_check((o2_saved_253), "06str.c", 1519))) ,    __freed_obj__ = 0, 
    0    ){
        buffer_append_str(((struct buffer*)come_null_check(buf_251, "06str.c", 1511)),((struct CVALUE*)come_null_check(it_254, "06str.c", 1511))->c_value);
        __freed_obj__ = 0;
        if(_if_conditional272=j_252!=list$1CVALUEph_length(((struct list$1CVALUEph*)come_null_check(come_params_247, "06str.c", 1517)))-1,        __freed_obj__ = 0, 
        _if_conditional272) {
            buffer_append_str(((struct buffer*)come_null_check(buf_251, "06str.c", 1514)),",");
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        j_252++;
        __freed_obj__ = 0;
    }
    if(o2_saved_253 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,o2_saved_253, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    buffer_append_str(((struct buffer*)come_null_check(buf_251, "06str.c", 1519)),")");
    __freed_obj__ = 0;
    come_value5_255=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value457=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1521))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 48, right_value457);
    if(right_value457 && right_value457 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value457, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[48] = right_value457;
    __freed_obj__ = 0;
    __dec_obj172=((struct CVALUE*)come_null_check(come_value5_255, "06str.c", 1523))->c_value;
    ((struct CVALUE*)come_null_check(come_value5_255, "06str.c", 1523))->c_value=(char*)come_increment_ref_count(((char*)(right_value458=buffer_to_string(((struct buffer*)come_null_check(buf_251, "06str.c", 1523))))));
    if(__dec_obj172) { __dec_obj172 = come_decrement_ref_count(__dec_obj172, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 49, right_value458);
    if(right_value458 && right_value458 != __result_obj__ && !__freed_obj__) { right_value458 = come_decrement_ref_count(right_value458, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[49] = right_value458;
    __freed_obj__ = 0;
    if(_if_conditional273=((struct sType*)come_null_check(result_type_240, "06str.c", 1529))->mHeap,    __freed_obj__ = 0, 
    _if_conditional273) {
        __dec_obj173=((struct CVALUE*)come_null_check(come_value5_255, "06str.c", 1526))->c_value;
        ((struct CVALUE*)come_null_check(come_value5_255, "06str.c", 1526))->c_value=(char*)come_increment_ref_count(((char*)(right_value460=append_object_to_right_values(((char*)(right_value459=buffer_to_string(((struct buffer*)come_null_check(buf_251, "06str.c", 1526))))),(struct sType*)come_increment_ref_count(result_type_240),info))));
        if(__dec_obj173) { __dec_obj173 = come_decrement_ref_count(__dec_obj173, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value459);
        if(right_value459 && right_value459 != __result_obj__ && !__freed_obj__) { right_value459 = come_decrement_ref_count(right_value459, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value459;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value460);
        if(right_value460 && right_value460 != __result_obj__ && !__freed_obj__) { right_value460 = come_decrement_ref_count(right_value460, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value460;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __dec_obj174=((struct CVALUE*)come_null_check(come_value5_255, "06str.c", 1529))->type;
    ((struct CVALUE*)come_null_check(come_value5_255, "06str.c", 1529))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value461=sType_clone(result_type_240))));
    if(__dec_obj174) { come_call_finalizer(sType_finalize,__dec_obj174, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 50, right_value461);
    if(right_value461 && right_value461 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value461, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[50] = right_value461;
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value5_255, "06str.c", 1530))->type, "06str.c", 1530))->mStatic=(_Bool)0;
    __freed_obj__ = 0;
    ((struct CVALUE*)come_null_check(come_value5_255, "06str.c", 1531))->var=((void*)0);
    __freed_obj__ = 0;
    add_come_last_code(info,"%s;\n",((char*)(right_value462=buffer_to_string(((struct buffer*)come_null_check(buf_251, "06str.c", 1533))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 51, right_value462);
    if(right_value462 && right_value462 != __result_obj__ && !__freed_obj__) { right_value462 = come_decrement_ref_count(right_value462, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[51] = right_value462;
    __freed_obj__ = 0;
    list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1535))->stack, "06str.c", 1535)),(struct CVALUE*)come_increment_ref_count(come_value5_255));
    __freed_obj__ = 0;
    __result169__ = (_Bool)1;
    if(key_params_211 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,key_params_211, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(element_params_212 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,element_params_212, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(map_key_type_213 && !__freed_obj__) { come_call_finalizer(sType_finalize,map_key_type_213, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(map_element_type_214 && !__freed_obj__) { come_call_finalizer(sType_finalize,map_element_type_214, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(key_type_values_225 && !__freed_obj__) { come_call_finalizer(sType_finalize,key_type_values_225, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(var_name_226 && !__freed_obj__) { var_name_226 = come_decrement_ref_count(var_name_226, (void*)0, (void*)0, 0, 0, 0); }
    if(element_type_values_228 && !__freed_obj__) { come_call_finalizer(sType_finalize,element_type_values_228, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(var_name2_229 && !__freed_obj__) { var_name2_229 = come_decrement_ref_count(var_name2_229, (void*)0, (void*)0, 0, 0, 0); }
    if(source_231 && !__freed_obj__) { come_call_finalizer(buffer_finalize,source_231, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(map_type_235 && !__freed_obj__) { come_call_finalizer(sType_finalize,map_type_235, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(obj_type_236 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_236, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(generics_fun_name_238 && !__freed_obj__) { generics_fun_name_238 = come_decrement_ref_count(generics_fun_name_238, (void*)0, (void*)0, 0, 0, 0); }
    if(result_type_240 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_240, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(obj_value_242 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,obj_value_242, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(num_string_243 && !__freed_obj__) { come_call_finalizer(buffer_finalize,num_string_243, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type2_244 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_244, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_name_245 && !__freed_obj__) { type_name_245 = come_decrement_ref_count(type_name_245, (void*)0, (void*)0, 0, 0, 0); }
    if(type3_246 && !__freed_obj__) { come_call_finalizer(sType_finalize,type3_246, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_params_247 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,come_params_247, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value2_248 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value2_248, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value3_249 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value3_249, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value4_250 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value4_250, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(buf_251 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_251, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value5_255 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value5_255, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result169__;
    __freed_obj__ = 0;
    if(key_params_211 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,key_params_211, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(element_params_212 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,element_params_212, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(map_key_type_213 && !__freed_obj__) { come_call_finalizer(sType_finalize,map_key_type_213, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(map_element_type_214 && !__freed_obj__) { come_call_finalizer(sType_finalize,map_element_type_214, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(key_type_values_225 && !__freed_obj__) { come_call_finalizer(sType_finalize,key_type_values_225, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(var_name_226 && !__freed_obj__) { var_name_226 = come_decrement_ref_count(var_name_226, (void*)0, (void*)0, 0, 0, 0); }
    if(element_type_values_228 && !__freed_obj__) { come_call_finalizer(sType_finalize,element_type_values_228, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(var_name2_229 && !__freed_obj__) { var_name2_229 = come_decrement_ref_count(var_name2_229, (void*)0, (void*)0, 0, 0, 0); }
    if(source_231 && !__freed_obj__) { come_call_finalizer(buffer_finalize,source_231, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(map_type_235 && !__freed_obj__) { come_call_finalizer(sType_finalize,map_type_235, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(obj_type_236 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_236, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(generics_fun_name_238 && !__freed_obj__) { generics_fun_name_238 = come_decrement_ref_count(generics_fun_name_238, (void*)0, (void*)0, 0, 0, 0); }
    if(result_type_240 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_240, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(obj_value_242 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,obj_value_242, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(num_string_243 && !__freed_obj__) { come_call_finalizer(buffer_finalize,num_string_243, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type2_244 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_244, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_name_245 && !__freed_obj__) { type_name_245 = come_decrement_ref_count(type_name_245, (void*)0, (void*)0, 0, 0, 0); }
    if(type3_246 && !__freed_obj__) { come_call_finalizer(sType_finalize,type3_246, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_params_247 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,come_params_247, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value2_248 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value2_248, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value3_249 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value3_249, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value4_250 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value4_250, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(buf_251 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_251, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value5_255 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value5_255, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct optional$2sNodephbool* list$1sNodephp_operator_load_element(struct list$1sNodeph* self, int position){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional256;
struct list_item$1sNodeph* it_216;
int i_217;
_Bool _while_condtional12;
_Bool _if_conditional257;
void* right_value390;
void* right_value391;
struct optional$2sNodephbool* __result162__;
struct sNode* default_value_218;
void* right_value392;
void* right_value393;
struct optional$2sNodephbool* __result163__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_216, 0, sizeof(struct list_item$1sNodeph*));
memset(&i_217, 0, sizeof(int));
memset(&right_value390, 0, sizeof(void*));
memset(&right_value391, 0, sizeof(void*));
memset(&default_value_218, 0, sizeof(struct sNode*));
memset(&right_value392, 0, sizeof(void*));
memset(&right_value393, 0, sizeof(void*));
            if(_if_conditional256=position<0,            __freed_obj__ = 0, 
            _if_conditional256) {
                position+=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 735))->len;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            it_216=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 738))->head;
            __freed_obj__ = 0;
            i_217=0;
            __freed_obj__ = 0;
            while(_while_condtional12=it_216!=((void*)0),            __freed_obj__ = 0, 
            _while_condtional12) {
                if(_if_conditional257=position==i_217,                __freed_obj__ = 0, 
                _if_conditional257) {
                    __result162__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value391=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value390=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "./comelang2.h", 742)))),(struct sNode*)come_increment_ref_count(((struct list_item$1sNodeph*)come_null_check(it_216, "./comelang2.h", 742))->item),(_Bool)1)));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value390);
                    if(right_value390 && right_value390 != __result_obj__ && !__freed_obj__) { right_value390 = come_decrement_ref_count(right_value390, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value390;
                    __freed_obj__ = 0;
                    return __result162__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                it_216=((struct list_item$1sNodeph*)come_null_check(it_216, "./comelang2.h", 744))->next;
                __freed_obj__ = 0;
                i_217++;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __freed_obj__ = 0;
            memset(&default_value_218,0,sizeof(struct sNode*));
            __freed_obj__ = 0;
            __result163__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 750), ((struct optional$2sNodephbool*)(right_value393=optional$2sNodephbool_initialize(((struct optional$2sNodephbool*)(right_value392=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "./comelang2.h", 750))),(struct sNode*)come_increment_ref_count(default_value_218),(_Bool)0))));
            if(default_value_218 && !__freed_obj__) { default_value_218 = come_decrement_ref_count(default_value_218, ((struct sNode*)default_value_218)->finalize, ((struct sNode*)default_value_218)->_protocol_obj, 0, 0, 0); } 
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value392);
            if(right_value392 && right_value392 != __result_obj__ && !__freed_obj__) { right_value392 = come_decrement_ref_count(right_value392, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value392;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value393);
            if(right_value393 && right_value393 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sNodephboolp_finalize,right_value393, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value393;
            __freed_obj__ = 0;
            return __result163__;
            __freed_obj__ = 0;
            if(default_value_218 && !__freed_obj__) { default_value_218 = come_decrement_ref_count(default_value_218, ((struct sNode*)default_value_218)->finalize, ((struct sNode*)default_value_218)->_protocol_obj, 0, 0, 0); } 
}

static struct optional$2sNodephbool* optional$2sNodephbool_initialize(struct optional$2sNodephbool* self, struct sNode* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* __dec_obj154;
struct optional$2sNodephbool* __result161__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        __dec_obj154=((struct optional$2sNodephbool*)come_null_check(self, "./comelang2.h", 38))->v1;
                        ((struct optional$2sNodephbool*)come_null_check(self, "./comelang2.h", 38))->v1=(struct sNode*)come_increment_ref_count(v1);
                        if(__dec_obj154) { __dec_obj154 = come_decrement_ref_count(__dec_obj154, ((struct sNode*)__dec_obj154)->finalize, ((struct sNode*)__dec_obj154)->_protocol_obj, 0,0,0); }
                        __freed_obj__ = 0;
                        ((struct optional$2sNodephbool*)come_null_check(self, "./comelang2.h", 39))->v2=v2;
                        __freed_obj__ = 0;
                        __result161__ = __result_obj__ = self;
                        if(self && !__freed_obj__) { come_call_finalizer(optional$2sNodephboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                        if(v1 && !__freed_obj__) { v1 = come_decrement_ref_count(v1, ((struct sNode*)v1)->finalize, ((struct sNode*)v1)->_protocol_obj, 0, 1, 0); } 
                        __freed_obj__ = 0;
                        return __result161__;
                        __freed_obj__ = 0;
                        if(self && !__freed_obj__) { come_call_finalizer(optional$2sNodephboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                        if(v1 && !__freed_obj__) { v1 = come_decrement_ref_count(v1, ((struct sNode*)v1)->finalize, ((struct sNode*)v1)->_protocol_obj, 0, 1, 0); } 
}

static void optional$2sNodephboolp_finalize(struct optional$2sNodephbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional258;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional258=self!=((void*)0)&&((struct optional$2sNodephbool*)come_null_check(self, "optional$2sNodephboolp_finalize", 1))->v1!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional258) {
                                if(((struct optional$2sNodephbool*)come_null_check(self, "optional$2sNodephboolp_finalize", 0))->v1 && !__freed_obj__) { ((struct optional$2sNodephbool*)come_null_check(self, "optional$2sNodephboolp_finalize", 0))->v1 = come_decrement_ref_count(((struct optional$2sNodephbool*)come_null_check(self, "optional$2sNodephboolp_finalize", 0))->v1, ((struct sNode*)((struct optional$2sNodephbool*)come_null_check(self, "optional$2sNodephboolp_finalize", 0))->v1)->finalize, ((struct sNode*)((struct optional$2sNodephbool*)come_null_check(self, "optional$2sNodephboolp_finalize", 0))->v1)->_protocol_obj, 0, 0, 0); } 
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
}

static struct sNode* optional$2sNodephbool_value(struct optional$2sNodephbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional259;
struct sNode* default_value_219;
struct sNode* __result164__;
struct sNode* __result165__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_219, 0, sizeof(struct sNode*));
            if(_if_conditional259=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional259) {
                __freed_obj__ = 0;
                memset(&default_value_219,0,sizeof(struct sNode*));
                __freed_obj__ = 0;
                __result164__ = __result_obj__ = default_value_219;
                __freed_obj__ = 0;
                return __result164__;
                __freed_obj__ = 0;
            }
            else {
                __result165__ = __result_obj__ = ((struct optional$2sNodephbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                __freed_obj__ = 0;
                return __result165__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
}

int sMapNode_sline(struct sMapNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result170__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result170__ = ((struct sMapNode*)come_null_check(self, "06str.c", 1542))->sline;
    __freed_obj__ = 0;
    return __result170__;
    __freed_obj__ = 0;
}

char* sMapNode_sname(struct sMapNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value463;
char* __result171__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value463, 0, sizeof(void*));
    __result171__ = __result_obj__ = ((char*)(right_value463=__builtin_string(((struct sMapNode*)come_null_check(self, "06str.c", 1547))->sname)));
    __freed_obj__ = 0;
    return __result171__;
    __freed_obj__ = 0;
}

struct sNode* expression_node_v98(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional274;
int sline_256;
void* right_value464;
void* right_value465;
struct list$1sNodeph* exps_257;
void* right_value466;
void* right_value467;
struct buffer* value_258;
char* head_of_last_line_259;
_Bool _while_condtional13;
_Bool _if_conditional275;
_Bool _if_conditional276;
_Bool _if_conditional277;
_Bool _if_conditional278;
_Bool _if_conditional279;
_Bool _if_conditional280;
int len_260;
_Bool _while_condtional14;
_Bool _if_conditional281;
_Bool _while_condtional15;
_Bool _if_conditional282;
void* right_value468;
struct sNode* exp_261;
_Bool _if_conditional283;
_Bool _if_conditional284;
int sline2_262;
_Bool _if_conditional285;
void* right_value469;
void* right_value470;
void* right_value471;
struct sNode* _inf_value3;
struct sSStringNode* _inf_obj_value3;
void* right_value476;
struct sNode* __result174__;
_Bool _if_conditional294;
int sline_264;
void* right_value477;
void* right_value478;
struct buffer* value_265;
_Bool _while_condtional16;
_Bool _if_conditional295;
char* p_266;
int sline_267;
_Bool _if_conditional296;
_Bool _if_conditional297;
_Bool _if_conditional298;
_Bool _if_conditional299;
int sline2_268;
_Bool _if_conditional300;
void* right_value479;
void* right_value480;
void* right_value481;
struct sNode* _inf_value4;
struct sStrNode* _inf_obj_value4;
void* right_value485;
struct sNode* __result177__;
_Bool _if_conditional307;
int sline_270;
void* right_value486;
void* right_value487;
struct buffer* buf_271;
_Bool _while_condtional17;
_Bool _if_conditional308;
_Bool _if_conditional309;
_Bool _if_conditional310;
_Bool global_272;
_Bool ignore_case_273;
_Bool _while_condtional18;
_Bool _if_conditional311;
_Bool _if_conditional312;
void* right_value488;
void* right_value489;
void* right_value490;
struct sNode* _inf_value5;
struct sRegexNode* _inf_obj_value5;
void* right_value494;
struct sNode* __result180__;
_Bool _if_conditional321;
int c_275;
_Bool _if_conditional322;
_Bool _if_conditional323;
int n_276;
_Bool _while_condtional19;
_Bool _if_conditional324;
int n_277;
_Bool _while_condtional20;
_Bool _while_condtional21;
unsigned long long int n_280;
_Bool _if_conditional325;
void* right_value495;
void* right_value496;
struct sNode* _inf_value6;
struct sCharNode* _inf_obj_value6;
void* right_value499;
struct sNode* __result183__;
_Bool _if_conditional331;
unsigned int c_282;
_Bool _if_conditional332;
_Bool _if_conditional333;
int n_283;
_Bool _while_condtional22;
_Bool _if_conditional334;
int n_284;
_Bool _while_condtional23;
_Bool _while_condtional24;
unsigned long long int n_287;
unsigned char p2_288;
_Bool _if_conditional335;
int size_289;
_Bool _if_conditional336;
_Bool _if_conditional337;
_Bool _if_conditional338;
void* right_value500;
void* right_value501;
struct sNode* _inf_value7;
struct sWCharNode* _inf_obj_value7;
void* right_value504;
struct sNode* __result186__;
_Bool _if_conditional344;
int sline_292;
void* right_value505;
void* right_value506;
struct buffer* value_293;
_Bool _while_condtional25;
_Bool _if_conditional345;
char* p_294;
int sline_295;
_Bool _if_conditional346;
_Bool _if_conditional347;
_Bool _if_conditional348;
int len_296;
int n_297;
_Bool _while_condtional26;
_Bool _if_conditional349;
_Bool _while_condtional27;
unsigned long int lont_300;
int n_301;
_Bool _if_conditional350;
int sline2_302;
_Bool _if_conditional351;
int len_303;
void* right_value507;
unsigned int* wstr_304;
char* str_305;
_Bool _if_conditional352;
void* right_value508;
void* right_value509;
struct sNode* _inf_value8;
struct sWStringNode* _inf_obj_value8;
void* right_value513;
struct sNode* __result189__;
_Bool _if_conditional359;
int sline_307;
void* right_value514;
void* right_value515;
struct list$1sNodeph* exps_308;
void* right_value516;
void* right_value517;
struct buffer* value_309;
_Bool _while_condtional28;
_Bool _if_conditional360;
char* p_310;
int sline_311;
_Bool _if_conditional361;
_Bool _if_conditional362;
_Bool _if_conditional363;
void* right_value518;
struct sNode* exp_312;
char* p_313;
_Bool _while_condtional29;
_Bool _if_conditional364;
_Bool _if_conditional365;
int len_314;
_Bool _while_condtional30;
_Bool _if_conditional366;
_Bool _while_condtional31;
_Bool _if_conditional367;
void* right_value519;
struct sNode* exp_315;
_Bool _if_conditional368;
_Bool _if_conditional369;
int sline2_316;
_Bool _if_conditional370;
void* right_value520;
void* right_value521;
void* right_value522;
struct sNode* _inf_value9;
struct sSStringNode* _inf_obj_value9;
void* right_value527;
struct sNode* __result192__;
_Bool _if_conditional379;
char* p_318;
_Bool no_comma_319;
void* right_value528;
struct sNode* node_320;
char* p2_321;
void* right_value529;
void* right_value530;
struct buffer* first_element_source_322;
void* right_value531;
void* right_value532;
struct list$1sNodeph* list_elements_323;
void* right_value533;
void* right_value534;
struct list$1sNodeph* map_keys_324;
void* right_value535;
void* right_value536;
struct list$1sNodeph* map_elements_325;
_Bool _if_conditional380;
_Bool no_comma_326;
void* right_value537;
struct sNode* node2_327;
_Bool _if_conditional381;
void* right_value538;
void* right_value539;
struct sNode* _inf_value10;
struct sMapNode* _inf_obj_value10;
void* right_value544;
struct sNode* __result195__;
void* right_value545;
_Bool _while_condtional32;
_Bool no_comma_330;
void* right_value546;
struct sNode* node2_331;
void* right_value547;
void* right_value548;
struct sNode* node3_332;
_Bool _if_conditional391;
_Bool _if_conditional392;
_Bool _if_conditional393;
void* right_value549;
void* right_value550;
struct sNode* _inf_value11;
struct sMapNode* _inf_obj_value11;
void* right_value555;
struct sNode* __result200__;
_Bool _if_conditional402;
_Bool _if_conditional403;
_Bool _while_condtional33;
_Bool no_comma_334;
void* right_value556;
struct sNode* node2_335;
_Bool _if_conditional404;
_Bool _if_conditional405;
_Bool _if_conditional406;
_Bool _if_conditional407;
void* right_value557;
void* right_value558;
struct sNode* _inf_value12;
struct sListNode* _inf_obj_value12;
void* right_value562;
struct sNode* __result203__;
void* right_value563;
struct sNode* __result204__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&sline_256, 0, sizeof(int));
memset(&right_value464, 0, sizeof(void*));
memset(&right_value465, 0, sizeof(void*));
memset(&exps_257, 0, sizeof(struct list$1sNodeph*));
memset(&right_value466, 0, sizeof(void*));
memset(&right_value467, 0, sizeof(void*));
memset(&value_258, 0, sizeof(struct buffer*));
memset(&head_of_last_line_259, 0, sizeof(char*));
memset(&len_260, 0, sizeof(int));
memset(&right_value468, 0, sizeof(void*));
memset(&exp_261, 0, sizeof(struct sNode*));
memset(&sline2_262, 0, sizeof(int));
memset(&right_value469, 0, sizeof(void*));
memset(&right_value470, 0, sizeof(void*));
memset(&right_value471, 0, sizeof(void*));
memset(&right_value476, 0, sizeof(void*));
memset(&sline_264, 0, sizeof(int));
memset(&right_value477, 0, sizeof(void*));
memset(&right_value478, 0, sizeof(void*));
memset(&value_265, 0, sizeof(struct buffer*));
memset(&p_266, 0, sizeof(char*));
memset(&sline_267, 0, sizeof(int));
memset(&sline2_268, 0, sizeof(int));
memset(&right_value479, 0, sizeof(void*));
memset(&right_value480, 0, sizeof(void*));
memset(&right_value481, 0, sizeof(void*));
memset(&right_value485, 0, sizeof(void*));
memset(&sline_270, 0, sizeof(int));
memset(&right_value486, 0, sizeof(void*));
memset(&right_value487, 0, sizeof(void*));
memset(&buf_271, 0, sizeof(struct buffer*));
memset(&global_272, 0, sizeof(_Bool));
memset(&ignore_case_273, 0, sizeof(_Bool));
memset(&right_value488, 0, sizeof(void*));
memset(&right_value489, 0, sizeof(void*));
memset(&right_value490, 0, sizeof(void*));
memset(&right_value494, 0, sizeof(void*));
memset(&c_275, 0, sizeof(int));
memset(&n_276, 0, sizeof(int));
memset(&n_277, 0, sizeof(int));
memset(&n_280, 0, sizeof(unsigned long long int));
memset(&right_value495, 0, sizeof(void*));
memset(&right_value496, 0, sizeof(void*));
memset(&right_value499, 0, sizeof(void*));
memset(&c_282, 0, sizeof(unsigned int));
memset(&n_283, 0, sizeof(int));
memset(&n_284, 0, sizeof(int));
memset(&n_287, 0, sizeof(unsigned long long int));
memset(&p2_288, 0, sizeof(unsigned char));
memset(&size_289, 0, sizeof(int));
memset(&right_value500, 0, sizeof(void*));
memset(&right_value501, 0, sizeof(void*));
memset(&right_value504, 0, sizeof(void*));
memset(&sline_292, 0, sizeof(int));
memset(&right_value505, 0, sizeof(void*));
memset(&right_value506, 0, sizeof(void*));
memset(&value_293, 0, sizeof(struct buffer*));
memset(&p_294, 0, sizeof(char*));
memset(&sline_295, 0, sizeof(int));
memset(&len_296, 0, sizeof(int));
memset(&n_297, 0, sizeof(int));
memset(&lont_300, 0, sizeof(unsigned long int));
memset(&n_301, 0, sizeof(int));
memset(&sline2_302, 0, sizeof(int));
memset(&len_303, 0, sizeof(int));
memset(&right_value507, 0, sizeof(void*));
memset(&wstr_304, 0, sizeof(unsigned int*));
memset(&str_305, 0, sizeof(char*));
memset(&right_value508, 0, sizeof(void*));
memset(&right_value509, 0, sizeof(void*));
memset(&right_value513, 0, sizeof(void*));
memset(&sline_307, 0, sizeof(int));
memset(&right_value514, 0, sizeof(void*));
memset(&right_value515, 0, sizeof(void*));
memset(&exps_308, 0, sizeof(struct list$1sNodeph*));
memset(&right_value516, 0, sizeof(void*));
memset(&right_value517, 0, sizeof(void*));
memset(&value_309, 0, sizeof(struct buffer*));
memset(&p_310, 0, sizeof(char*));
memset(&sline_311, 0, sizeof(int));
memset(&right_value518, 0, sizeof(void*));
memset(&exp_312, 0, sizeof(struct sNode*));
memset(&p_313, 0, sizeof(char*));
memset(&len_314, 0, sizeof(int));
memset(&right_value519, 0, sizeof(void*));
memset(&exp_315, 0, sizeof(struct sNode*));
memset(&sline2_316, 0, sizeof(int));
memset(&right_value520, 0, sizeof(void*));
memset(&right_value521, 0, sizeof(void*));
memset(&right_value522, 0, sizeof(void*));
memset(&right_value527, 0, sizeof(void*));
memset(&p_318, 0, sizeof(char*));
memset(&no_comma_319, 0, sizeof(_Bool));
memset(&right_value528, 0, sizeof(void*));
memset(&node_320, 0, sizeof(struct sNode*));
memset(&p2_321, 0, sizeof(char*));
memset(&right_value529, 0, sizeof(void*));
memset(&right_value530, 0, sizeof(void*));
memset(&first_element_source_322, 0, sizeof(struct buffer*));
memset(&right_value531, 0, sizeof(void*));
memset(&right_value532, 0, sizeof(void*));
memset(&list_elements_323, 0, sizeof(struct list$1sNodeph*));
memset(&right_value533, 0, sizeof(void*));
memset(&right_value534, 0, sizeof(void*));
memset(&map_keys_324, 0, sizeof(struct list$1sNodeph*));
memset(&right_value535, 0, sizeof(void*));
memset(&right_value536, 0, sizeof(void*));
memset(&map_elements_325, 0, sizeof(struct list$1sNodeph*));
memset(&no_comma_326, 0, sizeof(_Bool));
memset(&right_value537, 0, sizeof(void*));
memset(&node2_327, 0, sizeof(struct sNode*));
memset(&right_value538, 0, sizeof(void*));
memset(&right_value539, 0, sizeof(void*));
memset(&right_value544, 0, sizeof(void*));
memset(&right_value545, 0, sizeof(void*));
memset(&no_comma_330, 0, sizeof(_Bool));
memset(&right_value546, 0, sizeof(void*));
memset(&node2_331, 0, sizeof(struct sNode*));
memset(&right_value547, 0, sizeof(void*));
memset(&right_value548, 0, sizeof(void*));
memset(&node3_332, 0, sizeof(struct sNode*));
memset(&right_value549, 0, sizeof(void*));
memset(&right_value550, 0, sizeof(void*));
memset(&right_value555, 0, sizeof(void*));
memset(&no_comma_334, 0, sizeof(_Bool));
memset(&right_value556, 0, sizeof(void*));
memset(&node2_335, 0, sizeof(struct sNode*));
memset(&right_value557, 0, sizeof(void*));
memset(&right_value558, 0, sizeof(void*));
memset(&right_value562, 0, sizeof(void*));
memset(&right_value563, 0, sizeof(void*));
    if(_if_conditional274=*((struct sInfo*)come_null_check(info, "06str.c", 2515))->p==34&&*(((struct sInfo*)come_null_check(info, "06str.c", 2515))->p+1)==34&&*(((struct sInfo*)come_null_check(info, "06str.c", 2515))->p+2)==34&&*(((struct sInfo*)come_null_check(info, "06str.c", 2515))->p+3)==10,    __freed_obj__ = 0, 
    _if_conditional274) {
        ((struct sInfo*)come_null_check(info, "06str.c", 1554))->p+=4;
        __freed_obj__ = 0;
        sline_256=((struct sInfo*)come_null_check(info, "06str.c", 1556))->sline;
        __freed_obj__ = 0;
        exps_257=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value465=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value464=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 1558))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value464);
        if(right_value464 && right_value464 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value464, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value464;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value465);
        if(right_value465 && right_value465 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value465, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value465;
        __freed_obj__ = 0;
        value_258=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value467=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value466=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1559))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value466);
        if(right_value466 && right_value466 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value466, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value466;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value467);
        if(right_value467 && right_value467 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value467, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value467;
        __freed_obj__ = 0;
        head_of_last_line_259=((void*)0);
        __freed_obj__ = 0;
        while(_while_condtional13=1,        __freed_obj__ = 0, 
        _while_condtional13) {
            if(_if_conditional275=*((struct sInfo*)come_null_check(info, "06str.c", 1703))->p==34&&*(((struct sInfo*)come_null_check(info, "06str.c", 1703))->p+1)==34&&*(((struct sInfo*)come_null_check(info, "06str.c", 1703))->p+2)==34,            __freed_obj__ = 0, 
            _if_conditional275) {
                if(_if_conditional276=head_of_last_line_259,                __freed_obj__ = 0, 
                _if_conditional276) {
                    buffer_trim(((struct buffer*)come_null_check(value_258, "06str.c", 1566)),((struct sInfo*)come_null_check(info, "06str.c", 1566))->p-head_of_last_line_259);
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                ((struct sInfo*)come_null_check(info, "06str.c", 1569))->p+=3;
                __freed_obj__ = 0;
                skip_spaces_and_lf(info);
                __freed_obj__ = 0;
                break;
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional277=*((struct sInfo*)come_null_check(info, "06str.c", 1703))->p==37,                __freed_obj__ = 0, 
                _if_conditional277) {
                    buffer_append_char(((struct buffer*)come_null_check(value_258, "06str.c", 1575)),37);
                    __freed_obj__ = 0;
                    buffer_append_char(((struct buffer*)come_null_check(value_258, "06str.c", 1576)),37);
                    __freed_obj__ = 0;
                    ((struct sInfo*)come_null_check(info, "06str.c", 1577))->p++;
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional278=*((struct sInfo*)come_null_check(info, "06str.c", 1703))->p==34,                    __freed_obj__ = 0, 
                    _if_conditional278) {
                        buffer_append_char(((struct buffer*)come_null_check(value_258, "06str.c", 1580)),92);
                        __freed_obj__ = 0;
                        buffer_append_char(((struct buffer*)come_null_check(value_258, "06str.c", 1581)),34);
                        __freed_obj__ = 0;
                        ((struct sInfo*)come_null_check(info, "06str.c", 1582))->p++;
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional279=*((struct sInfo*)come_null_check(info, "06str.c", 1703))->p==92,                        __freed_obj__ = 0, 
                        _if_conditional279) {
                            buffer_append_char(((struct buffer*)come_null_check(value_258, "06str.c", 1596)),92);
                            __freed_obj__ = 0;
                            ((struct sInfo*)come_null_check(info, "06str.c", 1597))->p++;
                            __freed_obj__ = 0;
                            if(_if_conditional280=xisdigit(*((struct sInfo*)come_null_check(info, "06str.c", 1682))->p),                            __freed_obj__ = 0, 
                            _if_conditional280) {
                                len_260=0;
                                __freed_obj__ = 0;
                                while(_while_condtional14=xisdigit(*((struct sInfo*)come_null_check(info, "06str.c", 1606))->p)&&len_260<3,                                __freed_obj__ = 0, 
                                _while_condtional14) {
                                    buffer_append_char(((struct buffer*)come_null_check(value_258, "06str.c", 1602)),*((struct sInfo*)come_null_check(info, "06str.c", 1602))->p);
                                    __freed_obj__ = 0;
                                    ((struct sInfo*)come_null_check(info, "06str.c", 1603))->p++;
                                    __freed_obj__ = 0;
                                    len_260++;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional281=*((struct sInfo*)come_null_check(info, "06str.c", 1682))->p==120||*((struct sInfo*)come_null_check(info, "06str.c", 1682))->p==88,                                __freed_obj__ = 0, 
                                _if_conditional281) {
                                    buffer_append_char(((struct buffer*)come_null_check(value_258, "06str.c", 1608)),*((struct sInfo*)come_null_check(info, "06str.c", 1608))->p);
                                    __freed_obj__ = 0;
                                    ((struct sInfo*)come_null_check(info, "06str.c", 1609))->p++;
                                    __freed_obj__ = 0;
                                    while(_while_condtional15=*((struct sInfo*)come_null_check(info, "06str.c", 1615))->p>=48&&*((struct sInfo*)come_null_check(info, "06str.c", 1615))->p<=57||*((struct sInfo*)come_null_check(info, "06str.c", 1615))->p>=97&&*((struct sInfo*)come_null_check(info, "06str.c", 1615))->p<=102||*((struct sInfo*)come_null_check(info, "06str.c", 1615))->p>=65&&*((struct sInfo*)come_null_check(info, "06str.c", 1615))->p<=70,                                    __freed_obj__ = 0, 
                                    _while_condtional15) {
                                        buffer_append_char(((struct buffer*)come_null_check(value_258, "06str.c", 1612)),*((struct sInfo*)come_null_check(info, "06str.c", 1612))->p);
                                        __freed_obj__ = 0;
                                        ((struct sInfo*)come_null_check(info, "06str.c", 1613))->p++;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                }
                                else {
                                    if(_if_conditional282=*((struct sInfo*)come_null_check(info, "06str.c", 1682))->p==123,                                    __freed_obj__ = 0, 
                                    _if_conditional282) {
                                        ((struct sInfo*)come_null_check(info, "06str.c", 1617))->p++;
                                        __freed_obj__ = 0;
                                        exp_261=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value468=expression_v13(info))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value468);
                                        if(right_value468 && right_value468 != __result_obj__ && !__freed_obj__) { right_value468 = come_decrement_ref_count(right_value468, ((struct sNode*)right_value468)->finalize, ((struct sNode*)right_value468)->_protocol_obj, 1, 0, 0); } 
                                        __right_value_freed_obj[0] = right_value468;
                                        __freed_obj__ = 0;
                                        list$1sNodeph_add(((struct list$1sNodeph*)come_null_check(exps_257, "06str.c", 1621)),(struct sNode*)come_increment_ref_count(exp_261));
                                        __freed_obj__ = 0;
                                        if(_if_conditional283=*((struct sInfo*)come_null_check(info, "06str.c", 1627))->p==125,                                        __freed_obj__ = 0, 
                                        _if_conditional283) {
                                            ((struct sInfo*)come_null_check(info, "06str.c", 1624))->p++;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        buffer_append_str(((struct buffer*)come_null_check(value_258, "06str.c", 1627)),"%s");
                                        __freed_obj__ = 0;
                                        if(exp_261 && !__freed_obj__) { exp_261 = come_decrement_ref_count(exp_261, ((struct sNode*)exp_261)->finalize, ((struct sNode*)exp_261)->_protocol_obj, 0, 0, 0); } 
                                    }
                                    else {
                                        switch (*((struct sInfo*)come_null_check(info, "06str.c", 1681))->p) {
                                            case 48:
                                            __freed_obj__ = 0;
                                            buffer_append_char(((struct buffer*)come_null_check(value_258, "06str.c", 1632)),*((struct sInfo*)come_null_check(info, "06str.c", 1632))->p);
                                            __freed_obj__ = 0;
                                            ((struct sInfo*)come_null_check(info, "06str.c", 1633))->p++;
                                            __freed_obj__ = 0;
                                            break;
                                            __freed_obj__ = 0;
                                            case 110:
                                            __freed_obj__ = 0;
                                            buffer_append_char(((struct buffer*)come_null_check(value_258, "06str.c", 1637)),*((struct sInfo*)come_null_check(info, "06str.c", 1637))->p);
                                            __freed_obj__ = 0;
                                            ((struct sInfo*)come_null_check(info, "06str.c", 1638))->p++;
                                            __freed_obj__ = 0;
                                            break;
                                            __freed_obj__ = 0;
                                            case 116:
                                            __freed_obj__ = 0;
                                            buffer_append_char(((struct buffer*)come_null_check(value_258, "06str.c", 1642)),*((struct sInfo*)come_null_check(info, "06str.c", 1642))->p);
                                            __freed_obj__ = 0;
                                            ((struct sInfo*)come_null_check(info, "06str.c", 1643))->p++;
                                            __freed_obj__ = 0;
                                            break;
                                            __freed_obj__ = 0;
                                            case 114:
                                            __freed_obj__ = 0;
                                            buffer_append_char(((struct buffer*)come_null_check(value_258, "06str.c", 1647)),*((struct sInfo*)come_null_check(info, "06str.c", 1647))->p);
                                            __freed_obj__ = 0;
                                            ((struct sInfo*)come_null_check(info, "06str.c", 1648))->p++;
                                            __freed_obj__ = 0;
                                            break;
                                            __freed_obj__ = 0;
                                            case 118:
                                            __freed_obj__ = 0;
                                            buffer_append_char(((struct buffer*)come_null_check(value_258, "06str.c", 1652)),*((struct sInfo*)come_null_check(info, "06str.c", 1652))->p);
                                            __freed_obj__ = 0;
                                            ((struct sInfo*)come_null_check(info, "06str.c", 1653))->p++;
                                            __freed_obj__ = 0;
                                            break;
                                            __freed_obj__ = 0;
                                            case 102:
                                            __freed_obj__ = 0;
                                            buffer_append_char(((struct buffer*)come_null_check(value_258, "06str.c", 1657)),*((struct sInfo*)come_null_check(info, "06str.c", 1657))->p);
                                            __freed_obj__ = 0;
                                            ((struct sInfo*)come_null_check(info, "06str.c", 1658))->p++;
                                            __freed_obj__ = 0;
                                            break;
                                            __freed_obj__ = 0;
                                            case 97:
                                            __freed_obj__ = 0;
                                            buffer_append_char(((struct buffer*)come_null_check(value_258, "06str.c", 1662)),*((struct sInfo*)come_null_check(info, "06str.c", 1662))->p);
                                            __freed_obj__ = 0;
                                            ((struct sInfo*)come_null_check(info, "06str.c", 1663))->p++;
                                            __freed_obj__ = 0;
                                            break;
                                            __freed_obj__ = 0;
                                            case 98:
                                            __freed_obj__ = 0;
                                            buffer_append_char(((struct buffer*)come_null_check(value_258, "06str.c", 1667)),*((struct sInfo*)come_null_check(info, "06str.c", 1667))->p);
                                            __freed_obj__ = 0;
                                            ((struct sInfo*)come_null_check(info, "06str.c", 1668))->p++;
                                            __freed_obj__ = 0;
                                            break;
                                            __freed_obj__ = 0;
                                            case 92:
                                            __freed_obj__ = 0;
                                            buffer_append_char(((struct buffer*)come_null_check(value_258, "06str.c", 1672)),*((struct sInfo*)come_null_check(info, "06str.c", 1672))->p);
                                            __freed_obj__ = 0;
                                            ((struct sInfo*)come_null_check(info, "06str.c", 1673))->p++;
                                            __freed_obj__ = 0;
                                            break;
                                            __freed_obj__ = 0;
                                            default:
                                            __freed_obj__ = 0;
                                            buffer_append_char(((struct buffer*)come_null_check(value_258, "06str.c", 1677)),*((struct sInfo*)come_null_check(info, "06str.c", 1677))->p);
                                            __freed_obj__ = 0;
                                            ((struct sInfo*)come_null_check(info, "06str.c", 1678))->p++;
                                            __freed_obj__ = 0;
                                            break;
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
                        else {
                            if(_if_conditional284=*((struct sInfo*)come_null_check(info, "06str.c", 1703))->p==0,                            __freed_obj__ = 0, 
                            _if_conditional284) {
                                sline2_262=((struct sInfo*)come_null_check(info, "06str.c", 1684))->sline;
                                __freed_obj__ = 0;
                                ((struct sInfo*)come_null_check(info, "06str.c", 1685))->sline=sline_256;
                                __freed_obj__ = 0;
                                err_msg(info,"close \" to make embbeded string value");
                                __freed_obj__ = 0;
                                exit(2);
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional285=*((struct sInfo*)come_null_check(info, "06str.c", 1702))->p==10,                                __freed_obj__ = 0, 
                                _if_conditional285) {
                                    buffer_append_char(((struct buffer*)come_null_check(value_258, "06str.c", 1691)),92);
                                    __freed_obj__ = 0;
                                    buffer_append_char(((struct buffer*)come_null_check(value_258, "06str.c", 1692)),110);
                                    __freed_obj__ = 0;
                                    ((struct sInfo*)come_null_check(info, "06str.c", 1693))->p++;
                                    __freed_obj__ = 0;
                                    ((struct sInfo*)come_null_check(info, "06str.c", 1694))->sline++;
                                    __freed_obj__ = 0;
                                    head_of_last_line_259=((struct sInfo*)come_null_check(info, "06str.c", 1696))->p;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    buffer_append_char(((struct buffer*)come_null_check(value_258, "06str.c", 1699)),*((struct sInfo*)come_null_check(info, "06str.c", 1699))->p);
                                    __freed_obj__ = 0;
                                    ((struct sInfo*)come_null_check(info, "06str.c", 1700))->p++;
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
        skip_spaces_and_lf(info);
        __freed_obj__ = 0;
        _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1707);
        _inf_obj_value3=come_increment_ref_count(((struct sSStringNode*)(right_value471=sSStringNode_initialize((struct sSStringNode*)come_increment_ref_count(((struct sSStringNode*)(right_value469=(struct sSStringNode*)come_calloc(1, sizeof(struct sSStringNode)*(1), "06str.c", 1707)))),(char*)come_increment_ref_count(((char*)(right_value470=buffer_to_string(((struct buffer*)come_null_check(value_258, "06str.c", 1707)))))),(struct list$1sNodeph*)come_increment_ref_count(exps_257),sline_256,info))));
        _inf_value3->_protocol_obj=_inf_obj_value3;
        _inf_value3->finalize=(void*)sSStringNode_finalize;
        _inf_value3->clone=(void*)sSStringNode_clone;
        _inf_value3->compile=(void*)sSStringNode_compile;
        _inf_value3->sline=(void*)sSStringNode_sline;
        _inf_value3->sname=(void*)sSStringNode_sname;
        _inf_value3->terminated=(void*)sSStringNode_terminated;
        _inf_value3->kind=(void*)sSStringNode_kind;
        __result174__ = __result_obj__ = ((struct sNode*)(right_value476=_inf_value3));
        if(exps_257 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,exps_257, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(value_258 && !__freed_obj__) { come_call_finalizer(buffer_finalize,value_258, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value469);
        if(right_value469 && right_value469 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sSStringNode_finalize,right_value469, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[4] = right_value469;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value470);
        if(right_value470 && right_value470 != __result_obj__ && !__freed_obj__) { right_value470 = come_decrement_ref_count(right_value470, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[5] = right_value470;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value471);
        if(right_value471 && right_value471 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sSStringNode_finalize,right_value471, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[6] = right_value471;
        __freed_obj__ = 0;
        return __result174__;
        __freed_obj__ = 0;
        if(exps_257 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,exps_257, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(value_258 && !__freed_obj__) { come_call_finalizer(buffer_finalize,value_258, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    else {
        if(_if_conditional294=*((struct sInfo*)come_null_check(info, "06str.c", 2515))->p==34,        __freed_obj__ = 0, 
        _if_conditional294) {
            ((struct sInfo*)come_null_check(info, "06str.c", 1711))->p++;
            __freed_obj__ = 0;
            sline_264=((struct sInfo*)come_null_check(info, "06str.c", 1713))->sline;
            __freed_obj__ = 0;
            value_265=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value478=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value477=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1715))))))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value477);
            if(right_value477 && right_value477 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value477, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value477;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value478);
            if(right_value478 && right_value478 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value478, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value478;
            __freed_obj__ = 0;
            while(_while_condtional16=1,            __freed_obj__ = 0, 
            _while_condtional16) {
                if(_if_conditional295=*((struct sInfo*)come_null_check(info, "06str.c", 1763))->p==34,                __freed_obj__ = 0, 
                _if_conditional295) {
                    ((struct sInfo*)come_null_check(info, "06str.c", 1719))->p++;
                    __freed_obj__ = 0;
                    p_266=((struct sInfo*)come_null_check(info, "06str.c", 1721))->p;
                    __freed_obj__ = 0;
                    sline_267=((struct sInfo*)come_null_check(info, "06str.c", 1722))->sline;
                    __freed_obj__ = 0;
                    skip_spaces_and_lf(info);
                    __freed_obj__ = 0;
                    parse_sharp_v5(info);
                    __freed_obj__ = 0;
                    if(_if_conditional296=*((struct sInfo*)come_null_check(info, "06str.c", 1736))->p==34,                    __freed_obj__ = 0, 
                    _if_conditional296) {
                        ((struct sInfo*)come_null_check(info, "06str.c", 1729))->p++;
                        __freed_obj__ = 0;
                    }
                    else {
                        ((struct sInfo*)come_null_check(info, "06str.c", 1732))->p=p_266;
                        __freed_obj__ = 0;
                        ((struct sInfo*)come_null_check(info, "06str.c", 1733))->sline=sline_267;
                        __freed_obj__ = 0;
                        break;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional297=*((struct sInfo*)come_null_check(info, "06str.c", 1763))->p==92,                    __freed_obj__ = 0, 
                    _if_conditional297) {
                        buffer_append_char(((struct buffer*)come_null_check(value_265, "06str.c", 1738)),92);
                        __freed_obj__ = 0;
                        ((struct sInfo*)come_null_check(info, "06str.c", 1739))->p++;
                        __freed_obj__ = 0;
                        if(_if_conditional298=*((struct sInfo*)come_null_check(info, "06str.c", 1749))->p==34,                        __freed_obj__ = 0, 
                        _if_conditional298) {
                            buffer_append_char(((struct buffer*)come_null_check(value_265, "06str.c", 1742)),34);
                            __freed_obj__ = 0;
                            ((struct sInfo*)come_null_check(info, "06str.c", 1743))->p++;
                            __freed_obj__ = 0;
                        }
                        else {
                            buffer_append_char(((struct buffer*)come_null_check(value_265, "06str.c", 1746)),*((struct sInfo*)come_null_check(info, "06str.c", 1746))->p);
                            __freed_obj__ = 0;
                            ((struct sInfo*)come_null_check(info, "06str.c", 1747))->p++;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional299=*((struct sInfo*)come_null_check(info, "06str.c", 1763))->p==0,                        __freed_obj__ = 0, 
                        _if_conditional299) {
                            sline2_268=((struct sInfo*)come_null_check(info, "06str.c", 1751))->sline;
                            __freed_obj__ = 0;
                            ((struct sInfo*)come_null_check(info, "06str.c", 1752))->sline=sline_264;
                            __freed_obj__ = 0;
                            err_msg(info,"close \" to make c string value");
                            __freed_obj__ = 0;
                            ((struct sInfo*)come_null_check(info, "06str.c", 1754))->sline=sline2_268;
                            __freed_obj__ = 0;
                            exit(2);
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional300=*((struct sInfo*)come_null_check(info, "06str.c", 1758))->p==10,                            __freed_obj__ = 0, 
                            _if_conditional300) {
                                ((struct sInfo*)come_null_check(info, "06str.c", 1758))->sline++;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            buffer_append_char(((struct buffer*)come_null_check(value_265, "06str.c", 1760)),*((struct sInfo*)come_null_check(info, "06str.c", 1760))->p);
                            __freed_obj__ = 0;
                            ((struct sInfo*)come_null_check(info, "06str.c", 1761))->p++;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            skip_spaces_and_lf(info);
            __freed_obj__ = 0;
            _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1767);
            _inf_obj_value4=come_increment_ref_count(((struct sStrNode*)(right_value481=sStrNode_initialize((struct sStrNode*)come_increment_ref_count(((struct sStrNode*)(right_value479=(struct sStrNode*)come_calloc(1, sizeof(struct sStrNode)*(1), "06str.c", 1767)))),(char*)come_increment_ref_count(((char*)(right_value480=buffer_to_string(((struct buffer*)come_null_check(value_265, "06str.c", 1767)))))),sline_264,info))));
            _inf_value4->_protocol_obj=_inf_obj_value4;
            _inf_value4->finalize=(void*)sStrNode_finalize;
            _inf_value4->clone=(void*)sStrNode_clone;
            _inf_value4->compile=(void*)sStrNode_compile;
            _inf_value4->sline=(void*)sStrNode_sline;
            _inf_value4->sname=(void*)sStrNode_sname;
            _inf_value4->terminated=(void*)sStrNode_terminated;
            _inf_value4->kind=(void*)sStrNode_kind;
            __result177__ = __result_obj__ = ((struct sNode*)(right_value485=_inf_value4));
            if(value_265 && !__freed_obj__) { come_call_finalizer(buffer_finalize,value_265, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value479);
            if(right_value479 && right_value479 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStrNode_finalize,right_value479, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value479;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value480);
            if(right_value480 && right_value480 != __result_obj__ && !__freed_obj__) { right_value480 = come_decrement_ref_count(right_value480, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[3] = right_value480;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value481);
            if(right_value481 && right_value481 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStrNode_finalize,right_value481, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[4] = right_value481;
            __freed_obj__ = 0;
            return __result177__;
            __freed_obj__ = 0;
            if(value_265 && !__freed_obj__) { come_call_finalizer(buffer_finalize,value_265, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        else {
            if(_if_conditional307=*((struct sInfo*)come_null_check(info, "06str.c", 2515))->p==47,            __freed_obj__ = 0, 
            _if_conditional307) {
                ((struct sInfo*)come_null_check(info, "06str.c", 1770))->p++;
                __freed_obj__ = 0;
                sline_270=((struct sInfo*)come_null_check(info, "06str.c", 1772))->sline;
                __freed_obj__ = 0;
                buf_271=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value487=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value486=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1774))))))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value486);
                if(right_value486 && right_value486 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value486, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value486;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value487);
                if(right_value487 && right_value487 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value487, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value487;
                __freed_obj__ = 0;
                while(_while_condtional17=(_Bool)1,                __freed_obj__ = 0, 
                _while_condtional17) {
                    if(_if_conditional308=*((struct sInfo*)come_null_check(info, "06str.c", 1793))->p==92&&*(((struct sInfo*)come_null_check(info, "06str.c", 1793))->p+1)==47,                    __freed_obj__ = 0, 
                    _if_conditional308) {
                        ((struct sInfo*)come_null_check(info, "06str.c", 1777))->p++;
                        __freed_obj__ = 0;
                        buffer_append_char(((struct buffer*)come_null_check(buf_271, "06str.c", 1778)),*((struct sInfo*)come_null_check(info, "06str.c", 1778))->p);
                        __freed_obj__ = 0;
                        ((struct sInfo*)come_null_check(info, "06str.c", 1779))->p++;
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional309=*((struct sInfo*)come_null_check(info, "06str.c", 1793))->p==47,                        __freed_obj__ = 0, 
                        _if_conditional309) {
                            ((struct sInfo*)come_null_check(info, "06str.c", 1782))->p++;
                            __freed_obj__ = 0;
                            break;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional310=*((struct sInfo*)come_null_check(info, "06str.c", 1793))->p==0,                            __freed_obj__ = 0, 
                            _if_conditional310) {
                                err_msg(info,"require closing / for regex");
                                __freed_obj__ = 0;
                                exit(5);
                                __freed_obj__ = 0;
                            }
                            else {
                                buffer_append_char(((struct buffer*)come_null_check(buf_271, "06str.c", 1790)),*((struct sInfo*)come_null_check(info, "06str.c", 1790))->p);
                                __freed_obj__ = 0;
                                ((struct sInfo*)come_null_check(info, "06str.c", 1791))->p++;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                global_272=(_Bool)0;
                __freed_obj__ = 0;
                ignore_case_273=(_Bool)0;
                __freed_obj__ = 0;
                while(_while_condtional18=*((struct sInfo*)come_null_check(info, "06str.c", 1811))->p==103||*((struct sInfo*)come_null_check(info, "06str.c", 1811))->p==105,                __freed_obj__ = 0, 
                _while_condtional18) {
                    if(_if_conditional311=*((struct sInfo*)come_null_check(info, "06str.c", 1809))->p==103,                    __freed_obj__ = 0, 
                    _if_conditional311) {
                        ((struct sInfo*)come_null_check(info, "06str.c", 1799))->p++;
                        __freed_obj__ = 0;
                        global_272=(_Bool)1;
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional312=*((struct sInfo*)come_null_check(info, "06str.c", 1809))->p==105,                        __freed_obj__ = 0, 
                        _if_conditional312) {
                            ((struct sInfo*)come_null_check(info, "06str.c", 1803))->p++;
                            __freed_obj__ = 0;
                            ignore_case_273=(_Bool)1;
                            __freed_obj__ = 0;
                        }
                        else {
                            break;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                skip_spaces_and_lf(info);
                __freed_obj__ = 0;
                _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1813);
                _inf_obj_value5=come_increment_ref_count(((struct sRegexNode*)(right_value490=sRegexNode_initialize((struct sRegexNode*)come_increment_ref_count(((struct sRegexNode*)(right_value488=(struct sRegexNode*)come_calloc(1, sizeof(struct sRegexNode)*(1), "06str.c", 1813)))),(char*)come_increment_ref_count(((char*)(right_value489=buffer_to_string(((struct buffer*)come_null_check(buf_271, "06str.c", 1813)))))),global_272,ignore_case_273,sline_270,info))));
                _inf_value5->_protocol_obj=_inf_obj_value5;
                _inf_value5->finalize=(void*)sRegexNode_finalize;
                _inf_value5->clone=(void*)sRegexNode_clone;
                _inf_value5->compile=(void*)sRegexNode_compile;
                _inf_value5->sline=(void*)sRegexNode_sline;
                _inf_value5->sname=(void*)sRegexNode_sname;
                _inf_value5->terminated=(void*)sRegexNode_terminated;
                _inf_value5->kind=(void*)sRegexNode_kind;
                __result180__ = __result_obj__ = ((struct sNode*)(right_value494=_inf_value5));
                if(buf_271 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_271, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value488);
                if(right_value488 && right_value488 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sRegexNode_finalize,right_value488, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value488;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value489);
                if(right_value489 && right_value489 != __result_obj__ && !__freed_obj__) { right_value489 = come_decrement_ref_count(right_value489, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[3] = right_value489;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value490);
                if(right_value490 && right_value490 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sRegexNode_finalize,right_value490, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[4] = right_value490;
                __freed_obj__ = 0;
                return __result180__;
                __freed_obj__ = 0;
                if(buf_271 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_271, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            else {
                if(_if_conditional321=*((struct sInfo*)come_null_check(info, "06str.c", 2515))->p==39,                __freed_obj__ = 0, 
                _if_conditional321) {
                    ((struct sInfo*)come_null_check(info, "06str.c", 1816))->p++;
                    __freed_obj__ = 0;
                    __freed_obj__ = 0;
                    if(_if_conditional322=*((struct sInfo*)come_null_check(info, "06str.c", 1922))->p==92,                    __freed_obj__ = 0, 
                    _if_conditional322) {
                        ((struct sInfo*)come_null_check(info, "06str.c", 1821))->p++;
                        __freed_obj__ = 0;
                        if(_if_conditional323=xisdigit(*((struct sInfo*)come_null_check(info, "06str.c", 1916))->p),                        __freed_obj__ = 0, 
                        _if_conditional323) {
                            n_276=0;
                            __freed_obj__ = 0;
                            while(_while_condtional19=xisdigit(*((struct sInfo*)come_null_check(info, "06str.c", 1830))->p),                            __freed_obj__ = 0, 
                            _while_condtional19) {
                                n_276=n_276*8+*((struct sInfo*)come_null_check(info, "06str.c", 1826))->p-48;
                                __freed_obj__ = 0;
                                ((struct sInfo*)come_null_check(info, "06str.c", 1827))->p++;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            c_275=n_276;
                            __freed_obj__ = 0;
                        }
                        else {
                            switch (*((struct sInfo*)come_null_check(info, "06str.c", 1915))->p) {
                                case 110:
                                __freed_obj__ = 0;
                                c_275=10;
                                __freed_obj__ = 0;
                                ((struct sInfo*)come_null_check(info, "06str.c", 1836))->p++;
                                __freed_obj__ = 0;
                                break;
                                __freed_obj__ = 0;
                                case 116:
                                __freed_obj__ = 0;
                                c_275=9;
                                __freed_obj__ = 0;
                                ((struct sInfo*)come_null_check(info, "06str.c", 1841))->p++;
                                __freed_obj__ = 0;
                                break;
                                __freed_obj__ = 0;
                                case 114:
                                __freed_obj__ = 0;
                                c_275=13;
                                __freed_obj__ = 0;
                                ((struct sInfo*)come_null_check(info, "06str.c", 1846))->p++;
                                __freed_obj__ = 0;
                                break;
                                __freed_obj__ = 0;
                                case 97:
                                __freed_obj__ = 0;
                                c_275=7;
                                __freed_obj__ = 0;
                                ((struct sInfo*)come_null_check(info, "06str.c", 1851))->p++;
                                __freed_obj__ = 0;
                                break;
                                __freed_obj__ = 0;
                                case 102:
                                __freed_obj__ = 0;
                                c_275=12;
                                __freed_obj__ = 0;
                                ((struct sInfo*)come_null_check(info, "06str.c", 1856))->p++;
                                __freed_obj__ = 0;
                                break;
                                __freed_obj__ = 0;
                                case 118:
                                __freed_obj__ = 0;
                                c_275=11;
                                __freed_obj__ = 0;
                                ((struct sInfo*)come_null_check(info, "06str.c", 1861))->p++;
                                __freed_obj__ = 0;
                                break;
                                __freed_obj__ = 0;
                                case 98:
                                __freed_obj__ = 0;
                                c_275=8;
                                __freed_obj__ = 0;
                                ((struct sInfo*)come_null_check(info, "06str.c", 1866))->p++;
                                __freed_obj__ = 0;
                                break;
                                __freed_obj__ = 0;
                                case 92:
                                __freed_obj__ = 0;
                                c_275=92;
                                __freed_obj__ = 0;
                                ((struct sInfo*)come_null_check(info, "06str.c", 1871))->p++;
                                __freed_obj__ = 0;
                                break;
                                __freed_obj__ = 0;
                                case 48:
                                __freed_obj__ = 0;
                                c_275=0;
                                __freed_obj__ = 0;
                                ((struct sInfo*)come_null_check(info, "06str.c", 1876))->p++;
                                __freed_obj__ = 0;
                                if(_if_conditional324=xisdigit(*((struct sInfo*)come_null_check(info, "06str.c", 1888))->p),                                __freed_obj__ = 0, 
                                _if_conditional324) {
                                    n_277=0;
                                    __freed_obj__ = 0;
                                    while(_while_condtional20=xisdigit(*((struct sInfo*)come_null_check(info, "06str.c", 1886))->p),                                    __freed_obj__ = 0, 
                                    _while_condtional20) {
                                        n_277=n_277*8+*((struct sInfo*)come_null_check(info, "06str.c", 1881))->p-48;
                                        __freed_obj__ = 0;
                                        ((struct sInfo*)come_null_check(info, "06str.c", 1882))->p++;
                                        __freed_obj__ = 0;
                                        skip_spaces_and_lf(info);
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    c_275=n_277;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                break;
                                __freed_obj__ = 0;
                                case 120:
                                __freed_obj__ = 0;
                                case 88:
                                __freed_obj__ = 0;
                                {
                                    ((struct sInfo*)come_null_check(info, "06str.c", 1892))->p++;
                                    __freed_obj__ = 0;
                                    char buf_278[128];
                                    memset(&buf_278, 0, sizeof(char)                                    *(128)                                    );
                                    __freed_obj__ = 0;
                                    strncpy(buf_278,"0x",128);
                                    __freed_obj__ = 0;
                                    while(_while_condtional21=*((struct sInfo*)come_null_check(info, "06str.c", 1904))->p>=48&&*((struct sInfo*)come_null_check(info, "06str.c", 1904))->p<=57||*((struct sInfo*)come_null_check(info, "06str.c", 1904))->p>=97&&*((struct sInfo*)come_null_check(info, "06str.c", 1904))->p<=102||*((struct sInfo*)come_null_check(info, "06str.c", 1904))->p>=65&&*((struct sInfo*)come_null_check(info, "06str.c", 1904))->p<=70,                                    __freed_obj__ = 0, 
                                    _while_condtional21) {
                                        char buf2_279[2];
                                        memset(&buf2_279, 0, sizeof(char)                                        *(2)                                        );
                                        __freed_obj__ = 0;
                                        buf2_279[0]=*((struct sInfo*)come_null_check(info, "06str.c", 1898))->p;
                                        __freed_obj__ = 0;
                                        buf2_279[1]=0;
                                        __freed_obj__ = 0;
                                        ((struct sInfo*)come_null_check(info, "06str.c", 1900))->p++;
                                        __freed_obj__ = 0;
                                        strncat(buf_278,buf2_279,128);
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    n_280=strtoll(buf_278,((void*)0),0);
                                    __freed_obj__ = 0;
                                    c_275=n_280;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                break;
                                __freed_obj__ = 0;
                                default:
                                __freed_obj__ = 0;
                                c_275=*((struct sInfo*)come_null_check(info, "06str.c", 1911))->p;
                                __freed_obj__ = 0;
                                ((struct sInfo*)come_null_check(info, "06str.c", 1912))->p++;
                                __freed_obj__ = 0;
                                break;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    else {
                        c_275=*((struct sInfo*)come_null_check(info, "06str.c", 1918))->p;
                        __freed_obj__ = 0;
                        ((struct sInfo*)come_null_check(info, "06str.c", 1919))->p++;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional325=*((struct sInfo*)come_null_check(info, "06str.c", 1932))->p!=39,                    __freed_obj__ = 0, 
                    _if_conditional325) {
                        err_msg(info,"close \' to make character value");
                        __freed_obj__ = 0;
                    }
                    else {
                        ((struct sInfo*)come_null_check(info, "06str.c", 1926))->p++;
                        __freed_obj__ = 0;
                        skip_spaces_and_lf(info);
                        __freed_obj__ = 0;
                        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1930);
                        _inf_obj_value6=come_increment_ref_count(((struct sCharNode*)(right_value496=sCharNode_initialize((struct sCharNode*)come_increment_ref_count(((struct sCharNode*)(right_value495=(struct sCharNode*)come_calloc(1, sizeof(struct sCharNode)*(1), "06str.c", 1930)))),c_275,info))));
                        _inf_value6->_protocol_obj=_inf_obj_value6;
                        _inf_value6->finalize=(void*)sCharNode_finalize;
                        _inf_value6->clone=(void*)sCharNode_clone;
                        _inf_value6->compile=(void*)sCharNode_compile;
                        _inf_value6->sline=(void*)sCharNode_sline;
                        _inf_value6->sname=(void*)sCharNode_sname;
                        _inf_value6->terminated=(void*)sCharNode_terminated;
                        _inf_value6->kind=(void*)sCharNode_kind;
                        __result183__ = __result_obj__ = ((struct sNode*)(right_value499=_inf_value6));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value495);
                        if(right_value495 && right_value495 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sCharNode_finalize,right_value495, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value495;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value496);
                        if(right_value496 && right_value496 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sCharNode_finalize,right_value496, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value496;
                        __freed_obj__ = 0;
                        return __result183__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional331=*((struct sInfo*)come_null_check(info, "06str.c", 2515))->p==76&&*(((struct sInfo*)come_null_check(info, "06str.c", 2515))->p+1)==39,                    __freed_obj__ = 0, 
                    _if_conditional331) {
                        ((struct sInfo*)come_null_check(info, "06str.c", 1935))->p+=2;
                        __freed_obj__ = 0;
                        __freed_obj__ = 0;
                        if(_if_conditional332=*((struct sInfo*)come_null_check(info, "06str.c", 2057))->p==92,                        __freed_obj__ = 0, 
                        _if_conditional332) {
                            ((struct sInfo*)come_null_check(info, "06str.c", 1940))->p++;
                            __freed_obj__ = 0;
                            if(_if_conditional333=xisdigit(*((struct sInfo*)come_null_check(info, "06str.c", 2021))->p),                            __freed_obj__ = 0, 
                            _if_conditional333) {
                                n_283=0;
                                __freed_obj__ = 0;
                                while(_while_condtional22=xisdigit(*((struct sInfo*)come_null_check(info, "06str.c", 1949))->p),                                __freed_obj__ = 0, 
                                _while_condtional22) {
                                    n_283=n_283*8+*((struct sInfo*)come_null_check(info, "06str.c", 1945))->p-48;
                                    __freed_obj__ = 0;
                                    ((struct sInfo*)come_null_check(info, "06str.c", 1946))->p++;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                c_282=n_283;
                                __freed_obj__ = 0;
                            }
                            else {
                                switch (*((struct sInfo*)come_null_check(info, "06str.c", 2020))->p) {
                                    case 110:
                                    __freed_obj__ = 0;
                                    c_282=10;
                                    __freed_obj__ = 0;
                                    ((struct sInfo*)come_null_check(info, "06str.c", 1955))->p++;
                                    __freed_obj__ = 0;
                                    break;
                                    __freed_obj__ = 0;
                                    case 116:
                                    __freed_obj__ = 0;
                                    c_282=9;
                                    __freed_obj__ = 0;
                                    ((struct sInfo*)come_null_check(info, "06str.c", 1960))->p++;
                                    __freed_obj__ = 0;
                                    break;
                                    __freed_obj__ = 0;
                                    case 114:
                                    __freed_obj__ = 0;
                                    c_282=13;
                                    __freed_obj__ = 0;
                                    ((struct sInfo*)come_null_check(info, "06str.c", 1965))->p++;
                                    __freed_obj__ = 0;
                                    break;
                                    __freed_obj__ = 0;
                                    case 97:
                                    __freed_obj__ = 0;
                                    c_282=7;
                                    __freed_obj__ = 0;
                                    ((struct sInfo*)come_null_check(info, "06str.c", 1970))->p++;
                                    __freed_obj__ = 0;
                                    break;
                                    __freed_obj__ = 0;
                                    case 92:
                                    __freed_obj__ = 0;
                                    c_282=92;
                                    __freed_obj__ = 0;
                                    ((struct sInfo*)come_null_check(info, "06str.c", 1975))->p++;
                                    __freed_obj__ = 0;
                                    break;
                                    __freed_obj__ = 0;
                                    case 48:
                                    __freed_obj__ = 0;
                                    c_282=0;
                                    __freed_obj__ = 0;
                                    ((struct sInfo*)come_null_check(info, "06str.c", 1981))->p++;
                                    __freed_obj__ = 0;
                                    if(_if_conditional334=xisdigit(*((struct sInfo*)come_null_check(info, "06str.c", 1993))->p),                                    __freed_obj__ = 0, 
                                    _if_conditional334) {
                                        n_284=0;
                                        __freed_obj__ = 0;
                                        while(_while_condtional23=xisdigit(*((struct sInfo*)come_null_check(info, "06str.c", 1991))->p),                                        __freed_obj__ = 0, 
                                        _while_condtional23) {
                                            n_284=n_284*8+*((struct sInfo*)come_null_check(info, "06str.c", 1986))->p-48;
                                            __freed_obj__ = 0;
                                            ((struct sInfo*)come_null_check(info, "06str.c", 1987))->p++;
                                            __freed_obj__ = 0;
                                            skip_spaces_and_lf(info);
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        c_282=n_284;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    break;
                                    __freed_obj__ = 0;
                                    case 120:
                                    __freed_obj__ = 0;
                                    case 88:
                                    __freed_obj__ = 0;
                                    {
                                        ((struct sInfo*)come_null_check(info, "06str.c", 1997))->p++;
                                        __freed_obj__ = 0;
                                        char buf_285[128];
                                        memset(&buf_285, 0, sizeof(char)                                        *(128)                                        );
                                        __freed_obj__ = 0;
                                        strncpy(buf_285,"0x",128);
                                        __freed_obj__ = 0;
                                        while(_while_condtional24=*((struct sInfo*)come_null_check(info, "06str.c", 2009))->p>=48&&*((struct sInfo*)come_null_check(info, "06str.c", 2009))->p<=57||*((struct sInfo*)come_null_check(info, "06str.c", 2009))->p>=97&&*((struct sInfo*)come_null_check(info, "06str.c", 2009))->p<=102||*((struct sInfo*)come_null_check(info, "06str.c", 2009))->p>=65&&*((struct sInfo*)come_null_check(info, "06str.c", 2009))->p<=70,                                        __freed_obj__ = 0, 
                                        _while_condtional24) {
                                            char buf2_286[2];
                                            memset(&buf2_286, 0, sizeof(char)                                            *(2)                                            );
                                            __freed_obj__ = 0;
                                            buf2_286[0]=*((struct sInfo*)come_null_check(info, "06str.c", 2003))->p;
                                            __freed_obj__ = 0;
                                            buf2_286[1]=0;
                                            __freed_obj__ = 0;
                                            ((struct sInfo*)come_null_check(info, "06str.c", 2005))->p++;
                                            __freed_obj__ = 0;
                                            strncat(buf_285,buf2_286,128);
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        n_287=strtoll(buf_285,((void*)0),0);
                                        __freed_obj__ = 0;
                                        c_282=n_287;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    break;
                                    __freed_obj__ = 0;
                                    default:
                                    __freed_obj__ = 0;
                                    c_282=*((struct sInfo*)come_null_check(info, "06str.c", 2016))->p;
                                    __freed_obj__ = 0;
                                    ((struct sInfo*)come_null_check(info, "06str.c", 2017))->p++;
                                    __freed_obj__ = 0;
                                    break;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        else {
                            p2_288=*(unsigned char*)((struct sInfo*)come_null_check(info, "06str.c", 2023))->p;
                            __freed_obj__ = 0;
                            if(_if_conditional335=p2_288>127,                            __freed_obj__ = 0, 
                            _if_conditional335) {
                                __freed_obj__ = 0;
                                char str_290[16+1];
                                memset(&str_290, 0, sizeof(char)                                *(16+1)                                );
                                __freed_obj__ = 0;
                                size_289=((p2_288&128)>>7)+((p2_288&64)>>6)+((p2_288&32)>>5)+((p2_288&16)>>4);
                                __freed_obj__ = 0;
                                if(_if_conditional336=size_289>16,                                __freed_obj__ = 0, 
                                _if_conditional336) {
                                    err_msg(info,"invalid utf-8 character. MB_LEN_MAX");
                                    __freed_obj__ = 0;
                                    ((struct sInfo*)come_null_check(info, "06str.c", 2034))->err_num++;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    memcpy(str_290,((struct sInfo*)come_null_check(info, "06str.c", 2037))->p,size_289);
                                    __freed_obj__ = 0;
                                    str_290[size_289]=0;
                                    __freed_obj__ = 0;
                                    if(_if_conditional337=mbtowc(&c_282,str_290,size_289)<0,                                    __freed_obj__ = 0, 
                                    _if_conditional337) {
                                        perror("mbtowc");
                                        __freed_obj__ = 0;
                                        err_msg(info,"invalid utf-8 character. mbtowc");
                                        __freed_obj__ = 0;
                                        ((struct sInfo*)come_null_check(info, "06str.c", 2043))->err_num++;
                                        __freed_obj__ = 0;
                                        c_282=0;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    ((struct sInfo*)come_null_check(info, "06str.c", 2047))->p+=size_289;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            else {
                                c_282=*((struct sInfo*)come_null_check(info, "06str.c", 2052))->p;
                                __freed_obj__ = 0;
                                ((struct sInfo*)come_null_check(info, "06str.c", 2053))->p++;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional338=*((struct sInfo*)come_null_check(info, "06str.c", 2068))->p!=39,                        __freed_obj__ = 0, 
                        _if_conditional338) {
                            err_msg(info,"close \' to make character value");
                            __freed_obj__ = 0;
                            ((struct sInfo*)come_null_check(info, "06str.c", 2059))->err_num++;
                            __freed_obj__ = 0;
                        }
                        else {
                            ((struct sInfo*)come_null_check(info, "06str.c", 2062))->p++;
                            __freed_obj__ = 0;
                            skip_spaces_and_lf(info);
                            __freed_obj__ = 0;
                            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2066);
                            _inf_obj_value7=come_increment_ref_count(((struct sWCharNode*)(right_value501=sWCharNode_initialize((struct sWCharNode*)come_increment_ref_count(((struct sWCharNode*)(right_value500=(struct sWCharNode*)come_calloc(1, sizeof(struct sWCharNode)*(1), "06str.c", 2066)))),c_282,info))));
                            _inf_value7->_protocol_obj=_inf_obj_value7;
                            _inf_value7->finalize=(void*)sWCharNode_finalize;
                            _inf_value7->clone=(void*)sWCharNode_clone;
                            _inf_value7->compile=(void*)sWCharNode_compile;
                            _inf_value7->sline=(void*)sWCharNode_sline;
                            _inf_value7->sname=(void*)sWCharNode_sname;
                            _inf_value7->terminated=(void*)sWCharNode_terminated;
                            _inf_value7->kind=(void*)sWCharNode_kind;
                            __result186__ = __result_obj__ = ((struct sNode*)(right_value504=_inf_value7));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value500);
                            if(right_value500 && right_value500 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sWCharNode_finalize,right_value500, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value500;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value501);
                            if(right_value501 && right_value501 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sWCharNode_finalize,right_value501, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value501;
                            __freed_obj__ = 0;
                            return __result186__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional344=*((struct sInfo*)come_null_check(info, "06str.c", 2515))->p==76&&*(((struct sInfo*)come_null_check(info, "06str.c", 2515))->p+1)==34,                        __freed_obj__ = 0, 
                        _if_conditional344) {
                            ((struct sInfo*)come_null_check(info, "06str.c", 2071))->p+=2;
                            __freed_obj__ = 0;
                            sline_292=((struct sInfo*)come_null_check(info, "06str.c", 2073))->sline;
                            __freed_obj__ = 0;
                            value_293=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value506=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value505=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 2075))))))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value505);
                            if(right_value505 && right_value505 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value505, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value505;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value506);
                            if(right_value506 && right_value506 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value506, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value506;
                            __freed_obj__ = 0;
                            while(_while_condtional25=1,                            __freed_obj__ = 0, 
                            _while_condtional25) {
                                if(_if_conditional345=*((struct sInfo*)come_null_check(info, "06str.c", 2192))->p==34,                                __freed_obj__ = 0, 
                                _if_conditional345) {
                                    ((struct sInfo*)come_null_check(info, "06str.c", 2079))->p++;
                                    __freed_obj__ = 0;
                                    p_294=((struct sInfo*)come_null_check(info, "06str.c", 2081))->p;
                                    __freed_obj__ = 0;
                                    sline_295=((struct sInfo*)come_null_check(info, "06str.c", 2082))->sline;
                                    __freed_obj__ = 0;
                                    skip_spaces_and_lf(info);
                                    __freed_obj__ = 0;
                                    if(_if_conditional346=*((struct sInfo*)come_null_check(info, "06str.c", 2094))->p==34,                                    __freed_obj__ = 0, 
                                    _if_conditional346) {
                                        ((struct sInfo*)come_null_check(info, "06str.c", 2087))->p++;
                                        __freed_obj__ = 0;
                                    }
                                    else {
                                        ((struct sInfo*)come_null_check(info, "06str.c", 2090))->p=p_294;
                                        __freed_obj__ = 0;
                                        ((struct sInfo*)come_null_check(info, "06str.c", 2091))->sline=sline_295;
                                        __freed_obj__ = 0;
                                        break;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                }
                                else {
                                    if(_if_conditional347=*((struct sInfo*)come_null_check(info, "06str.c", 2192))->p==92,                                    __freed_obj__ = 0, 
                                    _if_conditional347) {
                                        ((struct sInfo*)come_null_check(info, "06str.c", 2096))->p++;
                                        __freed_obj__ = 0;
                                        if(_if_conditional348=xisdigit(*((struct sInfo*)come_null_check(info, "06str.c", 2179))->p),                                        __freed_obj__ = 0, 
                                        _if_conditional348) {
                                            len_296=0;
                                            __freed_obj__ = 0;
                                            n_297=0;
                                            __freed_obj__ = 0;
                                            while(_while_condtional26=xisdigit(*((struct sInfo*)come_null_check(info, "06str.c", 2107))->p)&&len_296<3,                                            __freed_obj__ = 0, 
                                            _while_condtional26) {
                                                n_297=n_297*8+*((struct sInfo*)come_null_check(info, "06str.c", 2102))->p-48;
                                                __freed_obj__ = 0;
                                                ((struct sInfo*)come_null_check(info, "06str.c", 2103))->p++;
                                                __freed_obj__ = 0;
                                                len_296++;
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            buffer_append_char(((struct buffer*)come_null_check(value_293, "06str.c", 2107)),n_297);
                                            __freed_obj__ = 0;
                                        }
                                        else {
                                            if(_if_conditional349=*((struct sInfo*)come_null_check(info, "06str.c", 2179))->p==120||*((struct sInfo*)come_null_check(info, "06str.c", 2179))->p==88,                                            __freed_obj__ = 0, 
                                            _if_conditional349) {
                                                ((struct sInfo*)come_null_check(info, "06str.c", 2110))->p++;
                                                __freed_obj__ = 0;
                                                char buf_298[128];
                                                memset(&buf_298, 0, sizeof(char)                                                *(128)                                                );
                                                __freed_obj__ = 0;
                                                strncpy(buf_298,"0x",128);
                                                __freed_obj__ = 0;
                                                while(_while_condtional27=*((struct sInfo*)come_null_check(info, "06str.c", 2122))->p>=48&&*((struct sInfo*)come_null_check(info, "06str.c", 2122))->p<=57||*((struct sInfo*)come_null_check(info, "06str.c", 2122))->p>=97&&*((struct sInfo*)come_null_check(info, "06str.c", 2122))->p<=102||*((struct sInfo*)come_null_check(info, "06str.c", 2122))->p>=65&&*((struct sInfo*)come_null_check(info, "06str.c", 2122))->p<=70,                                                __freed_obj__ = 0, 
                                                _while_condtional27) {
                                                    char buf2_299[2];
                                                    memset(&buf2_299, 0, sizeof(char)                                                    *(2)                                                    );
                                                    __freed_obj__ = 0;
                                                    buf2_299[0]=*((struct sInfo*)come_null_check(info, "06str.c", 2116))->p;
                                                    __freed_obj__ = 0;
                                                    buf2_299[1]=0;
                                                    __freed_obj__ = 0;
                                                    ((struct sInfo*)come_null_check(info, "06str.c", 2118))->p++;
                                                    __freed_obj__ = 0;
                                                    strncat(buf_298,buf2_299,128);
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                                __freed_obj__ = 0;
                                                n_301=strtoll(buf_298,((void*)0),0);
                                                __freed_obj__ = 0;
                                                buffer_append_char(((struct buffer*)come_null_check(value_293, "06str.c", 2124)),(char)n_301);
                                                __freed_obj__ = 0;
                                            }
                                            else {
                                                switch (*((struct sInfo*)come_null_check(info, "06str.c", 2178))->p) {
                                                    case 48:
                                                    __freed_obj__ = 0;
                                                    buffer_append_char(((struct buffer*)come_null_check(value_293, "06str.c", 2129)),0);
                                                    __freed_obj__ = 0;
                                                    ((struct sInfo*)come_null_check(info, "06str.c", 2130))->p++;
                                                    __freed_obj__ = 0;
                                                    break;
                                                    __freed_obj__ = 0;
                                                    case 110:
                                                    __freed_obj__ = 0;
                                                    buffer_append_char(((struct buffer*)come_null_check(value_293, "06str.c", 2134)),10);
                                                    __freed_obj__ = 0;
                                                    ((struct sInfo*)come_null_check(info, "06str.c", 2135))->p++;
                                                    __freed_obj__ = 0;
                                                    break;
                                                    __freed_obj__ = 0;
                                                    case 116:
                                                    __freed_obj__ = 0;
                                                    buffer_append_char(((struct buffer*)come_null_check(value_293, "06str.c", 2139)),9);
                                                    __freed_obj__ = 0;
                                                    ((struct sInfo*)come_null_check(info, "06str.c", 2140))->p++;
                                                    __freed_obj__ = 0;
                                                    break;
                                                    __freed_obj__ = 0;
                                                    case 114:
                                                    __freed_obj__ = 0;
                                                    buffer_append_char(((struct buffer*)come_null_check(value_293, "06str.c", 2144)),13);
                                                    __freed_obj__ = 0;
                                                    ((struct sInfo*)come_null_check(info, "06str.c", 2145))->p++;
                                                    __freed_obj__ = 0;
                                                    break;
                                                    __freed_obj__ = 0;
                                                    case 118:
                                                    __freed_obj__ = 0;
                                                    buffer_append_char(((struct buffer*)come_null_check(value_293, "06str.c", 2149)),11);
                                                    __freed_obj__ = 0;
                                                    ((struct sInfo*)come_null_check(info, "06str.c", 2150))->p++;
                                                    __freed_obj__ = 0;
                                                    break;
                                                    __freed_obj__ = 0;
                                                    case 102:
                                                    __freed_obj__ = 0;
                                                    buffer_append_char(((struct buffer*)come_null_check(value_293, "06str.c", 2154)),12);
                                                    __freed_obj__ = 0;
                                                    ((struct sInfo*)come_null_check(info, "06str.c", 2155))->p++;
                                                    __freed_obj__ = 0;
                                                    break;
                                                    __freed_obj__ = 0;
                                                    case 97:
                                                    __freed_obj__ = 0;
                                                    buffer_append_char(((struct buffer*)come_null_check(value_293, "06str.c", 2159)),7);
                                                    __freed_obj__ = 0;
                                                    ((struct sInfo*)come_null_check(info, "06str.c", 2160))->p++;
                                                    __freed_obj__ = 0;
                                                    break;
                                                    __freed_obj__ = 0;
                                                    case 98:
                                                    __freed_obj__ = 0;
                                                    buffer_append_char(((struct buffer*)come_null_check(value_293, "06str.c", 2164)),8);
                                                    __freed_obj__ = 0;
                                                    ((struct sInfo*)come_null_check(info, "06str.c", 2165))->p++;
                                                    __freed_obj__ = 0;
                                                    break;
                                                    __freed_obj__ = 0;
                                                    case 92:
                                                    __freed_obj__ = 0;
                                                    buffer_append_char(((struct buffer*)come_null_check(value_293, "06str.c", 2169)),92);
                                                    __freed_obj__ = 0;
                                                    ((struct sInfo*)come_null_check(info, "06str.c", 2170))->p++;
                                                    __freed_obj__ = 0;
                                                    break;
                                                    __freed_obj__ = 0;
                                                    default:
                                                    __freed_obj__ = 0;
                                                    buffer_append_char(((struct buffer*)come_null_check(value_293, "06str.c", 2174)),*((struct sInfo*)come_null_check(info, "06str.c", 2174))->p);
                                                    __freed_obj__ = 0;
                                                    ((struct sInfo*)come_null_check(info, "06str.c", 2175))->p++;
                                                    __freed_obj__ = 0;
                                                    break;
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                    }
                                    else {
                                        if(_if_conditional350=*((struct sInfo*)come_null_check(info, "06str.c", 2192))->p==0,                                        __freed_obj__ = 0, 
                                        _if_conditional350) {
                                            sline2_302=((struct sInfo*)come_null_check(info, "06str.c", 2181))->sline;
                                            __freed_obj__ = 0;
                                            ((struct sInfo*)come_null_check(info, "06str.c", 2182))->sline=sline_292;
                                            __freed_obj__ = 0;
                                            err_msg(info,"close \" to make c string value");
                                            __freed_obj__ = 0;
                                            exit(2);
                                            __freed_obj__ = 0;
                                        }
                                        else {
                                            if(_if_conditional351=*((struct sInfo*)come_null_check(info, "06str.c", 2187))->p==10,                                            __freed_obj__ = 0, 
                                            _if_conditional351) {
                                                ((struct sInfo*)come_null_check(info, "06str.c", 2187))->sline++;
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            buffer_append_char(((struct buffer*)come_null_check(value_293, "06str.c", 2189)),*((struct sInfo*)come_null_check(info, "06str.c", 2189))->p);
                                            __freed_obj__ = 0;
                                            ((struct sInfo*)come_null_check(info, "06str.c", 2190))->p++;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            skip_spaces_and_lf(info);
                            __freed_obj__ = 0;
                            len_303=((struct buffer*)come_null_check(value_293, "06str.c", 2196))->len;
                            __freed_obj__ = 0;
                            wstr_304=(unsigned int*)come_increment_ref_count(((unsigned int*)(right_value507=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(len_303+1)), "06str.c", 2198))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value507);
                            if(right_value507 && right_value507 != __result_obj__ && !__freed_obj__) { right_value507 = come_decrement_ref_count(right_value507, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[2] = right_value507;
                            __freed_obj__ = 0;
                            str_305=((struct buffer*)come_null_check(value_293, "06str.c", 2200))->buf;
                            __freed_obj__ = 0;
                            if(_if_conditional352=mbstowcs(wstr_304,str_305,len_303+1)<0,                            __freed_obj__ = 0, 
                            _if_conditional352) {
                                perror("mbstowcs");
                                __freed_obj__ = 0;
                                exit(1);
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            wstr_304[len_303]=0;
                            __freed_obj__ = 0;
                            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2209);
                            _inf_obj_value8=come_increment_ref_count(((struct sWStringNode*)(right_value509=sWStringNode_initialize((struct sWStringNode*)come_increment_ref_count(((struct sWStringNode*)(right_value508=(struct sWStringNode*)come_calloc(1, sizeof(struct sWStringNode)*(1), "06str.c", 2209)))),(unsigned int*)come_increment_ref_count(wstr_304),sline_292,info))));
                            _inf_value8->_protocol_obj=_inf_obj_value8;
                            _inf_value8->finalize=(void*)sWStringNode_finalize;
                            _inf_value8->clone=(void*)sWStringNode_clone;
                            _inf_value8->compile=(void*)sWStringNode_compile;
                            _inf_value8->sline=(void*)sWStringNode_sline;
                            _inf_value8->sname=(void*)sWStringNode_sname;
                            _inf_value8->terminated=(void*)sWStringNode_terminated;
                            _inf_value8->kind=(void*)sWStringNode_kind;
                            __result189__ = __result_obj__ = ((struct sNode*)(right_value513=_inf_value8));
                            if(value_293 && !__freed_obj__) { come_call_finalizer(buffer_finalize,value_293, (void*)0, (void*)0, 0, 0, 0, 0); }
                            if(wstr_304 && !__freed_obj__) { wstr_304 = come_decrement_ref_count(wstr_304, (void*)0, (void*)0, 0, 0, 0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value508);
                            if(right_value508 && right_value508 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sWStringNode_finalize,right_value508, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[3] = right_value508;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value509);
                            if(right_value509 && right_value509 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sWStringNode_finalize,right_value509, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[4] = right_value509;
                            __freed_obj__ = 0;
                            return __result189__;
                            __freed_obj__ = 0;
                            if(value_293 && !__freed_obj__) { come_call_finalizer(buffer_finalize,value_293, (void*)0, (void*)0, 0, 0, 0, 0); }
                            if(wstr_304 && !__freed_obj__) { wstr_304 = come_decrement_ref_count(wstr_304, (void*)0, (void*)0, 0, 0, 0); }
                        }
                        else {
                            if(_if_conditional359=(*((struct sInfo*)come_null_check(info, "06str.c", 2515))->p==115||*((struct sInfo*)come_null_check(info, "06str.c", 2515))->p==83)&&*(((struct sInfo*)come_null_check(info, "06str.c", 2515))->p+1)==34,                            __freed_obj__ = 0, 
                            _if_conditional359) {
                                ((struct sInfo*)come_null_check(info, "06str.c", 2213))->p+=2;
                                __freed_obj__ = 0;
                                sline_307=((struct sInfo*)come_null_check(info, "06str.c", 2215))->sline;
                                __freed_obj__ = 0;
                                exps_308=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value515=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value514=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 2217))))))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value514);
                                if(right_value514 && right_value514 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value514, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value514;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value515);
                                if(right_value515 && right_value515 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value515, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[1] = right_value515;
                                __freed_obj__ = 0;
                                value_309=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value517=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value516=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 2218))))))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value516);
                                if(right_value516 && right_value516 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value516, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[2] = right_value516;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value517);
                                if(right_value517 && right_value517 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value517, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[3] = right_value517;
                                __freed_obj__ = 0;
                                while(_while_condtional28=1,                                __freed_obj__ = 0, 
                                _while_condtional28) {
                                    if(_if_conditional360=*((struct sInfo*)come_null_check(info, "06str.c", 2359))->p==34,                                    __freed_obj__ = 0, 
                                    _if_conditional360) {
                                        ((struct sInfo*)come_null_check(info, "06str.c", 2222))->p++;
                                        __freed_obj__ = 0;
                                        p_310=((struct sInfo*)come_null_check(info, "06str.c", 2224))->p;
                                        __freed_obj__ = 0;
                                        sline_311=((struct sInfo*)come_null_check(info, "06str.c", 2225))->sline;
                                        __freed_obj__ = 0;
                                        skip_spaces_and_lf(info);
                                        __freed_obj__ = 0;
                                        if(_if_conditional361=*((struct sInfo*)come_null_check(info, "06str.c", 2237))->p==34,                                        __freed_obj__ = 0, 
                                        _if_conditional361) {
                                            ((struct sInfo*)come_null_check(info, "06str.c", 2230))->p++;
                                            __freed_obj__ = 0;
                                        }
                                        else {
                                            ((struct sInfo*)come_null_check(info, "06str.c", 2233))->p=p_310;
                                            __freed_obj__ = 0;
                                            ((struct sInfo*)come_null_check(info, "06str.c", 2234))->sline=sline_311;
                                            __freed_obj__ = 0;
                                            break;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                    }
                                    else {
                                        if(_if_conditional362=*((struct sInfo*)come_null_check(info, "06str.c", 2359))->p==37,                                        __freed_obj__ = 0, 
                                        _if_conditional362) {
                                            buffer_append_char(((struct buffer*)come_null_check(value_309, "06str.c", 2239)),37);
                                            __freed_obj__ = 0;
                                            buffer_append_char(((struct buffer*)come_null_check(value_309, "06str.c", 2240)),37);
                                            __freed_obj__ = 0;
                                            ((struct sInfo*)come_null_check(info, "06str.c", 2241))->p++;
                                            __freed_obj__ = 0;
                                        }
                                        else {
                                            if(_if_conditional363=*((struct sInfo*)come_null_check(info, "06str.c", 2359))->p==36,                                            __freed_obj__ = 0, 
                                            _if_conditional363) {
                                                ((struct sInfo*)come_null_check(info, "06str.c", 2244))->p++;
                                                __freed_obj__ = 0;
                                                exp_312=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value518=expression_v13(info))));
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value518);
                                                if(right_value518 && right_value518 != __result_obj__ && !__freed_obj__) { right_value518 = come_decrement_ref_count(right_value518, ((struct sNode*)right_value518)->finalize, ((struct sNode*)right_value518)->_protocol_obj, 1, 0, 0); } 
                                                __right_value_freed_obj[0] = right_value518;
                                                __freed_obj__ = 0;
                                                list$1sNodeph_add(((struct list$1sNodeph*)come_null_check(exps_308, "06str.c", 2248)),(struct sNode*)come_increment_ref_count(exp_312));
                                                __freed_obj__ = 0;
                                                buffer_append_str(((struct buffer*)come_null_check(value_309, "06str.c", 2250)),"%s");
                                                __freed_obj__ = 0;
                                                p_313=((struct sInfo*)come_null_check(info, "06str.c", 2252))->p-1;
                                                __freed_obj__ = 0;
                                                while(_while_condtional29=*p_313==32||*p_313==9,                                                __freed_obj__ = 0, 
                                                _while_condtional29) {
                                                    p_313--;
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                                ((struct sInfo*)come_null_check(info, "06str.c", 2257))->p=p_313+1;
                                                __freed_obj__ = 0;
                                                if(exp_312 && !__freed_obj__) { exp_312 = come_decrement_ref_count(exp_312, ((struct sNode*)exp_312)->finalize, ((struct sNode*)exp_312)->_protocol_obj, 0, 0, 0); } 
                                            }
                                            else {
                                                if(_if_conditional364=*((struct sInfo*)come_null_check(info, "06str.c", 2359))->p==92,                                                __freed_obj__ = 0, 
                                                _if_conditional364) {
                                                    buffer_append_char(((struct buffer*)come_null_check(value_309, "06str.c", 2260)),92);
                                                    __freed_obj__ = 0;
                                                    ((struct sInfo*)come_null_check(info, "06str.c", 2261))->p++;
                                                    __freed_obj__ = 0;
                                                    if(_if_conditional365=xisdigit(*((struct sInfo*)come_null_check(info, "06str.c", 2346))->p),                                                    __freed_obj__ = 0, 
                                                    _if_conditional365) {
                                                        len_314=0;
                                                        __freed_obj__ = 0;
                                                        while(_while_condtional30=xisdigit(*((struct sInfo*)come_null_check(info, "06str.c", 2270))->p)&&len_314<3,                                                        __freed_obj__ = 0, 
                                                        _while_condtional30) {
                                                            buffer_append_char(((struct buffer*)come_null_check(value_309, "06str.c", 2266)),*((struct sInfo*)come_null_check(info, "06str.c", 2266))->p);
                                                            __freed_obj__ = 0;
                                                            ((struct sInfo*)come_null_check(info, "06str.c", 2267))->p++;
                                                            __freed_obj__ = 0;
                                                            len_314++;
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                    }
                                                    else {
                                                        if(_if_conditional366=*((struct sInfo*)come_null_check(info, "06str.c", 2346))->p==120||*((struct sInfo*)come_null_check(info, "06str.c", 2346))->p==88,                                                        __freed_obj__ = 0, 
                                                        _if_conditional366) {
                                                            buffer_append_char(((struct buffer*)come_null_check(value_309, "06str.c", 2272)),*((struct sInfo*)come_null_check(info, "06str.c", 2272))->p);
                                                            __freed_obj__ = 0;
                                                            ((struct sInfo*)come_null_check(info, "06str.c", 2273))->p++;
                                                            __freed_obj__ = 0;
                                                            while(_while_condtional31=*((struct sInfo*)come_null_check(info, "06str.c", 2279))->p>=48&&*((struct sInfo*)come_null_check(info, "06str.c", 2279))->p<=57||*((struct sInfo*)come_null_check(info, "06str.c", 2279))->p>=97&&*((struct sInfo*)come_null_check(info, "06str.c", 2279))->p<=102||*((struct sInfo*)come_null_check(info, "06str.c", 2279))->p>=65&&*((struct sInfo*)come_null_check(info, "06str.c", 2279))->p<=70,                                                            __freed_obj__ = 0, 
                                                            _while_condtional31) {
                                                                buffer_append_char(((struct buffer*)come_null_check(value_309, "06str.c", 2276)),*((struct sInfo*)come_null_check(info, "06str.c", 2276))->p);
                                                                __freed_obj__ = 0;
                                                                ((struct sInfo*)come_null_check(info, "06str.c", 2277))->p++;
                                                                __freed_obj__ = 0;
                                                            }
                                                            __freed_obj__ = 0;
                                                        }
                                                        else {
                                                            if(_if_conditional367=*((struct sInfo*)come_null_check(info, "06str.c", 2346))->p==123,                                                            __freed_obj__ = 0, 
                                                            _if_conditional367) {
                                                                ((struct sInfo*)come_null_check(info, "06str.c", 2281))->p++;
                                                                __freed_obj__ = 0;
                                                                exp_315=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value519=expression_v13(info))));
                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value519);
                                                                if(right_value519 && right_value519 != __result_obj__ && !__freed_obj__) { right_value519 = come_decrement_ref_count(right_value519, ((struct sNode*)right_value519)->finalize, ((struct sNode*)right_value519)->_protocol_obj, 1, 0, 0); } 
                                                                __right_value_freed_obj[0] = right_value519;
                                                                __freed_obj__ = 0;
                                                                list$1sNodeph_add(((struct list$1sNodeph*)come_null_check(exps_308, "06str.c", 2285)),(struct sNode*)come_increment_ref_count(exp_315));
                                                                __freed_obj__ = 0;
                                                                if(_if_conditional368=*((struct sInfo*)come_null_check(info, "06str.c", 2291))->p==125,                                                                __freed_obj__ = 0, 
                                                                _if_conditional368) {
                                                                    ((struct sInfo*)come_null_check(info, "06str.c", 2288))->p++;
                                                                    __freed_obj__ = 0;
                                                                }
                                                                __freed_obj__ = 0;
                                                                buffer_append_str(((struct buffer*)come_null_check(value_309, "06str.c", 2291)),"%s");
                                                                __freed_obj__ = 0;
                                                                if(exp_315 && !__freed_obj__) { exp_315 = come_decrement_ref_count(exp_315, ((struct sNode*)exp_315)->finalize, ((struct sNode*)exp_315)->_protocol_obj, 0, 0, 0); } 
                                                            }
                                                            else {
                                                                switch (*((struct sInfo*)come_null_check(info, "06str.c", 2345))->p) {
                                                                    case 48:
                                                                    __freed_obj__ = 0;
                                                                    buffer_append_char(((struct buffer*)come_null_check(value_309, "06str.c", 2296)),*((struct sInfo*)come_null_check(info, "06str.c", 2296))->p);
                                                                    __freed_obj__ = 0;
                                                                    ((struct sInfo*)come_null_check(info, "06str.c", 2297))->p++;
                                                                    __freed_obj__ = 0;
                                                                    break;
                                                                    __freed_obj__ = 0;
                                                                    case 110:
                                                                    __freed_obj__ = 0;
                                                                    buffer_append_char(((struct buffer*)come_null_check(value_309, "06str.c", 2301)),*((struct sInfo*)come_null_check(info, "06str.c", 2301))->p);
                                                                    __freed_obj__ = 0;
                                                                    ((struct sInfo*)come_null_check(info, "06str.c", 2302))->p++;
                                                                    __freed_obj__ = 0;
                                                                    break;
                                                                    __freed_obj__ = 0;
                                                                    case 116:
                                                                    __freed_obj__ = 0;
                                                                    buffer_append_char(((struct buffer*)come_null_check(value_309, "06str.c", 2306)),*((struct sInfo*)come_null_check(info, "06str.c", 2306))->p);
                                                                    __freed_obj__ = 0;
                                                                    ((struct sInfo*)come_null_check(info, "06str.c", 2307))->p++;
                                                                    __freed_obj__ = 0;
                                                                    break;
                                                                    __freed_obj__ = 0;
                                                                    case 114:
                                                                    __freed_obj__ = 0;
                                                                    buffer_append_char(((struct buffer*)come_null_check(value_309, "06str.c", 2311)),*((struct sInfo*)come_null_check(info, "06str.c", 2311))->p);
                                                                    __freed_obj__ = 0;
                                                                    ((struct sInfo*)come_null_check(info, "06str.c", 2312))->p++;
                                                                    __freed_obj__ = 0;
                                                                    break;
                                                                    __freed_obj__ = 0;
                                                                    case 118:
                                                                    __freed_obj__ = 0;
                                                                    buffer_append_char(((struct buffer*)come_null_check(value_309, "06str.c", 2316)),*((struct sInfo*)come_null_check(info, "06str.c", 2316))->p);
                                                                    __freed_obj__ = 0;
                                                                    ((struct sInfo*)come_null_check(info, "06str.c", 2317))->p++;
                                                                    __freed_obj__ = 0;
                                                                    break;
                                                                    __freed_obj__ = 0;
                                                                    case 102:
                                                                    __freed_obj__ = 0;
                                                                    buffer_append_char(((struct buffer*)come_null_check(value_309, "06str.c", 2321)),*((struct sInfo*)come_null_check(info, "06str.c", 2321))->p);
                                                                    __freed_obj__ = 0;
                                                                    ((struct sInfo*)come_null_check(info, "06str.c", 2322))->p++;
                                                                    __freed_obj__ = 0;
                                                                    break;
                                                                    __freed_obj__ = 0;
                                                                    case 97:
                                                                    __freed_obj__ = 0;
                                                                    buffer_append_char(((struct buffer*)come_null_check(value_309, "06str.c", 2326)),*((struct sInfo*)come_null_check(info, "06str.c", 2326))->p);
                                                                    __freed_obj__ = 0;
                                                                    ((struct sInfo*)come_null_check(info, "06str.c", 2327))->p++;
                                                                    __freed_obj__ = 0;
                                                                    break;
                                                                    __freed_obj__ = 0;
                                                                    case 98:
                                                                    __freed_obj__ = 0;
                                                                    buffer_append_char(((struct buffer*)come_null_check(value_309, "06str.c", 2331)),*((struct sInfo*)come_null_check(info, "06str.c", 2331))->p);
                                                                    __freed_obj__ = 0;
                                                                    ((struct sInfo*)come_null_check(info, "06str.c", 2332))->p++;
                                                                    __freed_obj__ = 0;
                                                                    break;
                                                                    __freed_obj__ = 0;
                                                                    case 92:
                                                                    __freed_obj__ = 0;
                                                                    buffer_append_char(((struct buffer*)come_null_check(value_309, "06str.c", 2336)),*((struct sInfo*)come_null_check(info, "06str.c", 2336))->p);
                                                                    __freed_obj__ = 0;
                                                                    ((struct sInfo*)come_null_check(info, "06str.c", 2337))->p++;
                                                                    __freed_obj__ = 0;
                                                                    break;
                                                                    __freed_obj__ = 0;
                                                                    default:
                                                                    __freed_obj__ = 0;
                                                                    buffer_append_char(((struct buffer*)come_null_check(value_309, "06str.c", 2341)),*((struct sInfo*)come_null_check(info, "06str.c", 2341))->p);
                                                                    __freed_obj__ = 0;
                                                                    ((struct sInfo*)come_null_check(info, "06str.c", 2342))->p++;
                                                                    __freed_obj__ = 0;
                                                                    break;
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
                                                else {
                                                    if(_if_conditional369=*((struct sInfo*)come_null_check(info, "06str.c", 2359))->p==0,                                                    __freed_obj__ = 0, 
                                                    _if_conditional369) {
                                                        sline2_316=((struct sInfo*)come_null_check(info, "06str.c", 2348))->sline;
                                                        __freed_obj__ = 0;
                                                        ((struct sInfo*)come_null_check(info, "06str.c", 2349))->sline=sline_307;
                                                        __freed_obj__ = 0;
                                                        err_msg(info,"close \" to make embbeded string value");
                                                        __freed_obj__ = 0;
                                                        exit(2);
                                                        __freed_obj__ = 0;
                                                    }
                                                    else {
                                                        if(_if_conditional370=*((struct sInfo*)come_null_check(info, "06str.c", 2354))->p==10,                                                        __freed_obj__ = 0, 
                                                        _if_conditional370) {
                                                            ((struct sInfo*)come_null_check(info, "06str.c", 2354))->sline++;
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                        buffer_append_char(((struct buffer*)come_null_check(value_309, "06str.c", 2356)),*((struct sInfo*)come_null_check(info, "06str.c", 2356))->p);
                                                        __freed_obj__ = 0;
                                                        ((struct sInfo*)come_null_check(info, "06str.c", 2357))->p++;
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
                                skip_spaces_and_lf(info);
                                __freed_obj__ = 0;
                                _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2363);
                                _inf_obj_value9=come_increment_ref_count(((struct sSStringNode*)(right_value522=sSStringNode_initialize((struct sSStringNode*)come_increment_ref_count(((struct sSStringNode*)(right_value520=(struct sSStringNode*)come_calloc(1, sizeof(struct sSStringNode)*(1), "06str.c", 2363)))),(char*)come_increment_ref_count(((char*)(right_value521=buffer_to_string(((struct buffer*)come_null_check(value_309, "06str.c", 2363)))))),(struct list$1sNodeph*)come_increment_ref_count(exps_308),sline_307,info))));
                                _inf_value9->_protocol_obj=_inf_obj_value9;
                                _inf_value9->finalize=(void*)sSStringNode_finalize;
                                _inf_value9->clone=(void*)sSStringNode_clone;
                                _inf_value9->compile=(void*)sSStringNode_compile;
                                _inf_value9->sline=(void*)sSStringNode_sline;
                                _inf_value9->sname=(void*)sSStringNode_sname;
                                _inf_value9->terminated=(void*)sSStringNode_terminated;
                                _inf_value9->kind=(void*)sSStringNode_kind;
                                __result192__ = __result_obj__ = ((struct sNode*)(right_value527=_inf_value9));
                                if(exps_308 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,exps_308, (void*)0, (void*)0, 0, 0, 0, 0); }
                                if(value_309 && !__freed_obj__) { come_call_finalizer(buffer_finalize,value_309, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value520);
                                if(right_value520 && right_value520 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sSStringNode_finalize,right_value520, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[4] = right_value520;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value521);
                                if(right_value521 && right_value521 != __result_obj__ && !__freed_obj__) { right_value521 = come_decrement_ref_count(right_value521, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[5] = right_value521;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value522);
                                if(right_value522 && right_value522 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sSStringNode_finalize,right_value522, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[6] = right_value522;
                                __freed_obj__ = 0;
                                return __result192__;
                                __freed_obj__ = 0;
                                if(exps_308 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,exps_308, (void*)0, (void*)0, 0, 0, 0, 0); }
                                if(value_309 && !__freed_obj__) { come_call_finalizer(buffer_finalize,value_309, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
                            else {
                                if(_if_conditional379=*((struct sInfo*)come_null_check(info, "06str.c", 2515))->p==91,                                __freed_obj__ = 0, 
                                _if_conditional379) {
                                    ((struct sInfo*)come_null_check(info, "06str.c", 2366))->p++;
                                    __freed_obj__ = 0;
                                    skip_spaces_and_lf(info);
                                    __freed_obj__ = 0;
                                    p_318=((struct sInfo*)come_null_check(info, "06str.c", 2369))->p;
                                    __freed_obj__ = 0;
                                    no_comma_319=((struct sInfo*)come_null_check(info, "06str.c", 2371))->no_comma;
                                    __freed_obj__ = 0;
                                    ((struct sInfo*)come_null_check(info, "06str.c", 2372))->no_comma=(_Bool)1;
                                    __freed_obj__ = 0;
                                    node_320=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value528=expression_v13(info))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value528);
                                    if(right_value528 && right_value528 != __result_obj__ && !__freed_obj__) { right_value528 = come_decrement_ref_count(right_value528, ((struct sNode*)right_value528)->finalize, ((struct sNode*)right_value528)->_protocol_obj, 1, 0, 0); } 
                                    __right_value_freed_obj[0] = right_value528;
                                    __freed_obj__ = 0;
                                    ((struct sInfo*)come_null_check(info, "06str.c", 2376))->no_comma=no_comma_319;
                                    __freed_obj__ = 0;
                                    p2_321=((struct sInfo*)come_null_check(info, "06str.c", 2378))->p;
                                    __freed_obj__ = 0;
                                    first_element_source_322=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value530=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value529=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 2380))))))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value529);
                                    if(right_value529 && right_value529 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value529, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[1] = right_value529;
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value530);
                                    if(right_value530 && right_value530 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value530, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[2] = right_value530;
                                    __freed_obj__ = 0;
                                    buffer_append(((struct buffer*)come_null_check(first_element_source_322, "06str.c", 2382)),p_318,p2_321-p_318);
                                    __freed_obj__ = 0;
                                    buffer_append_char(((struct buffer*)come_null_check(first_element_source_322, "06str.c", 2383)),0);
                                    __freed_obj__ = 0;
                                    list_elements_323=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value532=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value531=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 2385))))))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value531);
                                    if(right_value531 && right_value531 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value531, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[3] = right_value531;
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value532);
                                    if(right_value532 && right_value532 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value532, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[4] = right_value532;
                                    __freed_obj__ = 0;
                                    map_keys_324=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value534=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value533=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 2387))))))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value533);
                                    if(right_value533 && right_value533 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value533, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[5] = right_value533;
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value534);
                                    if(right_value534 && right_value534 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value534, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[6] = right_value534;
                                    __freed_obj__ = 0;
                                    map_elements_325=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value536=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value535=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 2388))))))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value535);
                                    if(right_value535 && right_value535 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value535, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[7] = right_value535;
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value536);
                                    if(right_value536 && right_value536 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value536, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[8] = right_value536;
                                    __freed_obj__ = 0;
                                    if(_if_conditional380=*((struct sInfo*)come_null_check(info, "06str.c", 2505))->p==58,                                    __freed_obj__ = 0, 
                                    _if_conditional380) {
                                        ((struct sInfo*)come_null_check(info, "06str.c", 2392))->p++;
                                        __freed_obj__ = 0;
                                        skip_spaces_and_lf(info);
                                        __freed_obj__ = 0;
                                        list$1sNodeph_push_back(((struct list$1sNodeph*)come_null_check(map_keys_324, "06str.c", 2395)),(struct sNode*)come_increment_ref_count(node_320));
                                        __freed_obj__ = 0;
                                        no_comma_326=((struct sInfo*)come_null_check(info, "06str.c", 2397))->no_comma;
                                        __freed_obj__ = 0;
                                        ((struct sInfo*)come_null_check(info, "06str.c", 2398))->no_comma=(_Bool)1;
                                        __freed_obj__ = 0;
                                        node2_327=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value537=expression_v13(info))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value537);
                                        if(right_value537 && right_value537 != __result_obj__ && !__freed_obj__) { right_value537 = come_decrement_ref_count(right_value537, ((struct sNode*)right_value537)->finalize, ((struct sNode*)right_value537)->_protocol_obj, 1, 0, 0); } 
                                        __right_value_freed_obj[0] = right_value537;
                                        __freed_obj__ = 0;
                                        ((struct sInfo*)come_null_check(info, "06str.c", 2402))->no_comma=no_comma_326;
                                        __freed_obj__ = 0;
                                        list$1sNodeph_push_back(((struct list$1sNodeph*)come_null_check(map_elements_325, "06str.c", 2404)),(struct sNode*)come_increment_ref_count(node2_327));
                                        __freed_obj__ = 0;
                                        if(_if_conditional381=*((struct sInfo*)come_null_check(info, "06str.c", 2457))->p==93,                                        __freed_obj__ = 0, 
                                        _if_conditional381) {
                                            ((struct sInfo*)come_null_check(info, "06str.c", 2407))->p++;
                                            __freed_obj__ = 0;
                                            skip_spaces_and_lf(info);
                                            __freed_obj__ = 0;
                                            _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2410);
                                            _inf_obj_value10=come_increment_ref_count(((struct sMapNode*)(right_value539=sMapNode_initialize((struct sMapNode*)come_increment_ref_count(((struct sMapNode*)(right_value538=(struct sMapNode*)come_calloc(1, sizeof(struct sMapNode)*(1), "06str.c", 2410)))),(struct list$1sNodeph*)come_increment_ref_count(map_keys_324),(struct list$1sNodeph*)come_increment_ref_count(map_elements_325),info))));
                                            _inf_value10->_protocol_obj=_inf_obj_value10;
                                            _inf_value10->finalize=(void*)sMapNode_finalize;
                                            _inf_value10->clone=(void*)sMapNode_clone;
                                            _inf_value10->compile=(void*)sMapNode_compile;
                                            _inf_value10->sline=(void*)sMapNode_sline;
                                            _inf_value10->sname=(void*)sMapNode_sname;
                                            _inf_value10->terminated=(void*)sMapNode_terminated;
                                            _inf_value10->kind=(void*)sMapNode_kind;
                                            __result195__ = __result_obj__ = ((struct sNode*)(right_value544=_inf_value10));
                                            if(node2_327 && !__freed_obj__) { node2_327 = come_decrement_ref_count(node2_327, ((struct sNode*)node2_327)->finalize, ((struct sNode*)node2_327)->_protocol_obj, 0, 0, 0); } 
                                            if(node_320 && !__freed_obj__) { node_320 = come_decrement_ref_count(node_320, ((struct sNode*)node_320)->finalize, ((struct sNode*)node_320)->_protocol_obj, 0, 0, 0); } 
                                            if(first_element_source_322 && !__freed_obj__) { come_call_finalizer(buffer_finalize,first_element_source_322, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            if(list_elements_323 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,list_elements_323, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            if(map_keys_324 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,map_keys_324, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            if(map_elements_325 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,map_elements_325, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value538);
                                            if(right_value538 && right_value538 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sMapNode_finalize,right_value538, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[0] = right_value538;
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value539);
                                            if(right_value539 && right_value539 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sMapNode_finalize,right_value539, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[1] = right_value539;
                                            __freed_obj__ = 0;
                                            return __result195__;
                                            __freed_obj__ = 0;
                                        }
                                        else {
                                            come_clear_stackframe();
                                            optional$2intbool_value((come_push_stackframe("06str.c", 2413),((struct optional$2intbool*)(right_value545=expected_next_character(44,info)))));
                                            come_pop_stackframe();
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value545);
                                            if(right_value545 && right_value545 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value545, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[0] = right_value545;
                                            __freed_obj__ = 0;
                                            while(_while_condtional32=(_Bool)1,                                            __freed_obj__ = 0, 
                                            _while_condtional32) {
                                                no_comma_330=((struct sInfo*)come_null_check(info, "06str.c", 2416))->no_comma;
                                                __freed_obj__ = 0;
                                                ((struct sInfo*)come_null_check(info, "06str.c", 2417))->no_comma=(_Bool)1;
                                                __freed_obj__ = 0;
                                                node2_331=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value546=expression_v13(info))));
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value546);
                                                if(right_value546 && right_value546 != __result_obj__ && !__freed_obj__) { right_value546 = come_decrement_ref_count(right_value546, ((struct sNode*)right_value546)->finalize, ((struct sNode*)right_value546)->_protocol_obj, 1, 0, 0); } 
                                                __right_value_freed_obj[0] = right_value546;
                                                __freed_obj__ = 0;
                                                ((struct sInfo*)come_null_check(info, "06str.c", 2421))->no_comma=no_comma_330;
                                                __freed_obj__ = 0;
                                                list$1sNodeph_push_back(((struct list$1sNodeph*)come_null_check(map_keys_324, "06str.c", 2423)),(struct sNode*)come_increment_ref_count(node2_331));
                                                __freed_obj__ = 0;
                                                come_clear_stackframe();
                                                optional$2intbool_value((come_push_stackframe("06str.c", 2425),((struct optional$2intbool*)(right_value547=expected_next_character(58,info)))));
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value547);
                                                if(right_value547 && right_value547 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value547, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                __right_value_freed_obj[1] = right_value547;
                                                __freed_obj__ = 0;
                                                no_comma_330=((struct sInfo*)come_null_check(info, "06str.c", 2427))->no_comma;
                                                __freed_obj__ = 0;
                                                ((struct sInfo*)come_null_check(info, "06str.c", 2428))->no_comma=(_Bool)1;
                                                __freed_obj__ = 0;
                                                node3_332=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value548=expression_v13(info))));
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value548);
                                                if(right_value548 && right_value548 != __result_obj__ && !__freed_obj__) { right_value548 = come_decrement_ref_count(right_value548, ((struct sNode*)right_value548)->finalize, ((struct sNode*)right_value548)->_protocol_obj, 1, 0, 0); } 
                                                __right_value_freed_obj[2] = right_value548;
                                                __freed_obj__ = 0;
                                                ((struct sInfo*)come_null_check(info, "06str.c", 2432))->no_comma=no_comma_330;
                                                __freed_obj__ = 0;
                                                list$1sNodeph_push_back(((struct list$1sNodeph*)come_null_check(map_elements_325, "06str.c", 2434)),(struct sNode*)come_increment_ref_count(node3_332));
                                                __freed_obj__ = 0;
                                                if(_if_conditional391=*((struct sInfo*)come_null_check(info, "06str.c", 2453))->p==0,                                                __freed_obj__ = 0, 
                                                _if_conditional391) {
                                                    err_msg(info,"invalid source end");
                                                    __freed_obj__ = 0;
                                                    exit(2);
                                                    __freed_obj__ = 0;
                                                }
                                                else {
                                                    if(_if_conditional392=*((struct sInfo*)come_null_check(info, "06str.c", 2453))->p==44,                                                    __freed_obj__ = 0, 
                                                    _if_conditional392) {
                                                        ((struct sInfo*)come_null_check(info, "06str.c", 2441))->p++;
                                                        __freed_obj__ = 0;
                                                        skip_spaces_and_lf(info);
                                                        __freed_obj__ = 0;
                                                    }
                                                    else {
                                                        if(_if_conditional393=*((struct sInfo*)come_null_check(info, "06str.c", 2453))->p==93,                                                        __freed_obj__ = 0, 
                                                        _if_conditional393) {
                                                            ((struct sInfo*)come_null_check(info, "06str.c", 2445))->p++;
                                                            __freed_obj__ = 0;
                                                            skip_spaces_and_lf(info);
                                                            __freed_obj__ = 0;
                                                            if(node2_331 && !__freed_obj__) { node2_331 = come_decrement_ref_count(node2_331, ((struct sNode*)node2_331)->finalize, ((struct sNode*)node2_331)->_protocol_obj, 0, 0, 0); } 
                                                            if(node3_332 && !__freed_obj__) { node3_332 = come_decrement_ref_count(node3_332, ((struct sNode*)node3_332)->finalize, ((struct sNode*)node3_332)->_protocol_obj, 0, 0, 0); } 
                                                            break;
                                                            __freed_obj__ = 0;
                                                        }
                                                        else {
                                                            err_msg(info,"invalid character(%c)(3)",*((struct sInfo*)come_null_check(info, "06str.c", 2450))->p);
                                                            __freed_obj__ = 0;
                                                            exit(2);
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                                if(node2_331 && !__freed_obj__) { node2_331 = come_decrement_ref_count(node2_331, ((struct sNode*)node2_331)->finalize, ((struct sNode*)node2_331)->_protocol_obj, 0, 0, 0); } 
                                                if(node3_332 && !__freed_obj__) { node3_332 = come_decrement_ref_count(node3_332, ((struct sNode*)node3_332)->finalize, ((struct sNode*)node3_332)->_protocol_obj, 0, 0, 0); } 
                                            }
                                            __freed_obj__ = 0;
                                            _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2455);
                                            _inf_obj_value11=come_increment_ref_count(((struct sMapNode*)(right_value550=sMapNode_initialize((struct sMapNode*)come_increment_ref_count(((struct sMapNode*)(right_value549=(struct sMapNode*)come_calloc(1, sizeof(struct sMapNode)*(1), "06str.c", 2455)))),(struct list$1sNodeph*)come_increment_ref_count(map_keys_324),(struct list$1sNodeph*)come_increment_ref_count(map_elements_325),info))));
                                            _inf_value11->_protocol_obj=_inf_obj_value11;
                                            _inf_value11->finalize=(void*)sMapNode_finalize;
                                            _inf_value11->clone=(void*)sMapNode_clone;
                                            _inf_value11->compile=(void*)sMapNode_compile;
                                            _inf_value11->sline=(void*)sMapNode_sline;
                                            _inf_value11->sname=(void*)sMapNode_sname;
                                            _inf_value11->terminated=(void*)sMapNode_terminated;
                                            _inf_value11->kind=(void*)sMapNode_kind;
                                            __result200__ = __result_obj__ = ((struct sNode*)(right_value555=_inf_value11));
                                            if(node2_327 && !__freed_obj__) { node2_327 = come_decrement_ref_count(node2_327, ((struct sNode*)node2_327)->finalize, ((struct sNode*)node2_327)->_protocol_obj, 0, 0, 0); } 
                                            if(node_320 && !__freed_obj__) { node_320 = come_decrement_ref_count(node_320, ((struct sNode*)node_320)->finalize, ((struct sNode*)node_320)->_protocol_obj, 0, 0, 0); } 
                                            if(first_element_source_322 && !__freed_obj__) { come_call_finalizer(buffer_finalize,first_element_source_322, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            if(list_elements_323 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,list_elements_323, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            if(map_keys_324 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,map_keys_324, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            if(map_elements_325 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,map_elements_325, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value549);
                                            if(right_value549 && right_value549 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sMapNode_finalize,right_value549, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[1] = right_value549;
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value550);
                                            if(right_value550 && right_value550 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sMapNode_finalize,right_value550, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[2] = right_value550;
                                            __freed_obj__ = 0;
                                            return __result200__;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(node2_327 && !__freed_obj__) { node2_327 = come_decrement_ref_count(node2_327, ((struct sNode*)node2_327)->finalize, ((struct sNode*)node2_327)->_protocol_obj, 0, 0, 0); } 
                                    }
                                    else {
                                        if(_if_conditional402=*((struct sInfo*)come_null_check(info, "06str.c", 2505))->p==93,                                        __freed_obj__ = 0, 
                                        _if_conditional402) {
                                            ((struct sInfo*)come_null_check(info, "06str.c", 2460))->p++;
                                            __freed_obj__ = 0;
                                            skip_spaces_and_lf(info);
                                            __freed_obj__ = 0;
                                            list$1sNodeph_push_back(((struct list$1sNodeph*)come_null_check(list_elements_323, "06str.c", 2463)),(struct sNode*)come_increment_ref_count(node_320));
                                            __freed_obj__ = 0;
                                        }
                                        else {
                                            if(_if_conditional403=*((struct sInfo*)come_null_check(info, "06str.c", 2505))->p==44,                                            __freed_obj__ = 0, 
                                            _if_conditional403) {
                                                ((struct sInfo*)come_null_check(info, "06str.c", 2466))->p++;
                                                __freed_obj__ = 0;
                                                skip_spaces_and_lf(info);
                                                __freed_obj__ = 0;
                                                list$1sNodeph_push_back(((struct list$1sNodeph*)come_null_check(list_elements_323, "06str.c", 2469)),(struct sNode*)come_increment_ref_count(node_320));
                                                __freed_obj__ = 0;
                                                while(_while_condtional33=(_Bool)1,                                                __freed_obj__ = 0, 
                                                _while_condtional33) {
                                                    no_comma_334=((struct sInfo*)come_null_check(info, "06str.c", 2472))->no_comma;
                                                    __freed_obj__ = 0;
                                                    ((struct sInfo*)come_null_check(info, "06str.c", 2473))->no_comma=(_Bool)1;
                                                    __freed_obj__ = 0;
                                                    node2_335=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value556=expression_v13(info))));
                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value556);
                                                    if(right_value556 && right_value556 != __result_obj__ && !__freed_obj__) { right_value556 = come_decrement_ref_count(right_value556, ((struct sNode*)right_value556)->finalize, ((struct sNode*)right_value556)->_protocol_obj, 1, 0, 0); } 
                                                    __right_value_freed_obj[0] = right_value556;
                                                    __freed_obj__ = 0;
                                                    ((struct sInfo*)come_null_check(info, "06str.c", 2477))->no_comma=no_comma_334;
                                                    __freed_obj__ = 0;
                                                    list$1sNodeph_push_back(((struct list$1sNodeph*)come_null_check(list_elements_323, "06str.c", 2479)),(struct sNode*)come_increment_ref_count(node2_335));
                                                    __freed_obj__ = 0;
                                                    if(_if_conditional404=*((struct sInfo*)come_null_check(info, "06str.c", 2498))->p==0,                                                    __freed_obj__ = 0, 
                                                    _if_conditional404) {
                                                        err_msg(info,"invalid source end");
                                                        __freed_obj__ = 0;
                                                        exit(2);
                                                        __freed_obj__ = 0;
                                                    }
                                                    else {
                                                        if(_if_conditional405=*((struct sInfo*)come_null_check(info, "06str.c", 2498))->p==44,                                                        __freed_obj__ = 0, 
                                                        _if_conditional405) {
                                                            ((struct sInfo*)come_null_check(info, "06str.c", 2486))->p++;
                                                            __freed_obj__ = 0;
                                                            skip_spaces_and_lf(info);
                                                            __freed_obj__ = 0;
                                                        }
                                                        else {
                                                            if(_if_conditional406=*((struct sInfo*)come_null_check(info, "06str.c", 2498))->p==93,                                                            __freed_obj__ = 0, 
                                                            _if_conditional406) {
                                                                ((struct sInfo*)come_null_check(info, "06str.c", 2490))->p++;
                                                                __freed_obj__ = 0;
                                                                skip_spaces_and_lf(info);
                                                                __freed_obj__ = 0;
                                                                if(node2_335 && !__freed_obj__) { node2_335 = come_decrement_ref_count(node2_335, ((struct sNode*)node2_335)->finalize, ((struct sNode*)node2_335)->_protocol_obj, 0, 0, 0); } 
                                                                break;
                                                                __freed_obj__ = 0;
                                                            }
                                                            else {
                                                                err_msg(info,"invalid character(%c)(4)",*((struct sInfo*)come_null_check(info, "06str.c", 2495))->p);
                                                                __freed_obj__ = 0;
                                                                exit(2);
                                                                __freed_obj__ = 0;
                                                            }
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                    if(node2_335 && !__freed_obj__) { node2_335 = come_decrement_ref_count(node2_335, ((struct sNode*)node2_335)->finalize, ((struct sNode*)node2_335)->_protocol_obj, 0, 0, 0); } 
                                                }
                                                __freed_obj__ = 0;
                                            }
                                            else {
                                                err_msg(info,"invalid character(%c)(5)",*((struct sInfo*)come_null_check(info, "06str.c", 2501))->p);
                                                __freed_obj__ = 0;
                                                exit(2);
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional407=list$1sNodeph_length(((struct list$1sNodeph*)come_null_check(list_elements_323, "06str.c", 2510)))>0,                                    __freed_obj__ = 0, 
                                    _if_conditional407) {
                                        _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2506);
                                        _inf_obj_value12=come_increment_ref_count(((struct sListNode*)(right_value558=sListNode_initialize((struct sListNode*)come_increment_ref_count(((struct sListNode*)(right_value557=(struct sListNode*)come_calloc(1, sizeof(struct sListNode)*(1), "06str.c", 2506)))),(struct list$1sNodeph*)come_increment_ref_count(list_elements_323),info))));
                                        _inf_value12->_protocol_obj=_inf_obj_value12;
                                        _inf_value12->finalize=(void*)sListNode_finalize;
                                        _inf_value12->clone=(void*)sListNode_clone;
                                        _inf_value12->compile=(void*)sListNode_compile;
                                        _inf_value12->sline=(void*)sListNode_sline;
                                        _inf_value12->sname=(void*)sListNode_sname;
                                        _inf_value12->terminated=(void*)sListNode_terminated;
                                        _inf_value12->kind=(void*)sListNode_kind;
                                        __result203__ = __result_obj__ = ((struct sNode*)(right_value562=_inf_value12));
                                        if(node_320 && !__freed_obj__) { node_320 = come_decrement_ref_count(node_320, ((struct sNode*)node_320)->finalize, ((struct sNode*)node_320)->_protocol_obj, 0, 0, 0); } 
                                        if(first_element_source_322 && !__freed_obj__) { come_call_finalizer(buffer_finalize,first_element_source_322, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        if(list_elements_323 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,list_elements_323, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        if(map_keys_324 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,map_keys_324, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        if(map_elements_325 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,map_elements_325, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value557);
                                        if(right_value557 && right_value557 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sListNode_finalize,right_value557, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value557;
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value558);
                                        if(right_value558 && right_value558 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sListNode_finalize,right_value558, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[1] = right_value558;
                                        __freed_obj__ = 0;
                                        return __result203__;
                                        __freed_obj__ = 0;
                                    }
                                    else {
                                    }
                                    __freed_obj__ = 0;
                                    if(node_320 && !__freed_obj__) { node_320 = come_decrement_ref_count(node_320, ((struct sNode*)node_320)->finalize, ((struct sNode*)node_320)->_protocol_obj, 0, 0, 0); } 
                                    if(first_element_source_322 && !__freed_obj__) { come_call_finalizer(buffer_finalize,first_element_source_322, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    if(list_elements_323 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,list_elements_323, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    if(map_keys_324 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,map_keys_324, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    if(map_elements_325 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,map_elements_325, (void*)0, (void*)0, 0, 0, 0, 0); }
                                }
                                else {
                                    ((struct sNode*)(right_value563=expression_node_v1(info)));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value563);
                                    if(right_value563 && right_value563 != __result_obj__ && !__freed_obj__) { right_value563 = come_decrement_ref_count(right_value563, ((struct sNode*)right_value563)->finalize, ((struct sNode*)right_value563)->_protocol_obj, 1, 0, 0); } 
                                    __right_value_freed_obj[0] = right_value563;
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
    __result204__ = __result_obj__ = (struct sNode*)((void*)0);
    __freed_obj__ = 0;
    return __result204__;
    __freed_obj__ = 0;
}

static void sStrNode_finalize(struct sStrNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional301;
_Bool _if_conditional302;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional301=self!=((void*)0)&&((struct sStrNode*)come_null_check(self, "sStrNode_finalize", 1))->value!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional301) {
                    if(((struct sStrNode*)come_null_check(self, "sStrNode_finalize", 0))->value && !__freed_obj__) { ((struct sStrNode*)come_null_check(self, "sStrNode_finalize", 0))->value = come_decrement_ref_count(((struct sStrNode*)come_null_check(self, "sStrNode_finalize", 0))->value, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional302=self!=((void*)0)&&((struct sStrNode*)come_null_check(self, "sStrNode_finalize", 2))->sname!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional302) {
                    if(((struct sStrNode*)come_null_check(self, "sStrNode_finalize", 1))->sname && !__freed_obj__) { ((struct sStrNode*)come_null_check(self, "sStrNode_finalize", 1))->sname = come_decrement_ref_count(((struct sStrNode*)come_null_check(self, "sStrNode_finalize", 1))->sname, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static struct sStrNode* sStrNode_clone(struct sStrNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional303;
struct sStrNode* __result175__;
void* right_value482;
struct sStrNode* result_269;
_Bool _if_conditional304;
void* right_value483;
char* __dec_obj178;
_Bool _if_conditional305;
_Bool _if_conditional306;
void* right_value484;
char* __dec_obj179;
struct sStrNode* __result176__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value482, 0, sizeof(void*));
memset(&result_269, 0, sizeof(struct sStrNode*));
memset(&right_value483, 0, sizeof(void*));
memset(&right_value484, 0, sizeof(void*));
                if(_if_conditional303=self==(void*)0,                __freed_obj__ = 0, 
                _if_conditional303) {
                    __result175__ = __result_obj__ = (void*)0;
                    __freed_obj__ = 0;
                    return __result175__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                result_269=(struct sStrNode*)come_increment_ref_count(((struct sStrNode*)(right_value482=(struct sStrNode*)come_calloc(1, sizeof(struct sStrNode)*(1), "sStrNode_clone", 3))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value482);
                if(right_value482 && right_value482 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStrNode_finalize,right_value482, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value482;
                __freed_obj__ = 0;
                if(_if_conditional304=self!=((void*)0)&&((struct sStrNode*)come_null_check(self, "sStrNode_clone", 5))->value!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional304) {
                    __dec_obj178=((struct sStrNode*)come_null_check(result_269, "sStrNode_clone", 4))->value;
                    ((struct sStrNode*)come_null_check(result_269, "sStrNode_clone", 4))->value=(char*)come_increment_ref_count(((char*)(right_value483=string_clone(((struct sStrNode*)come_null_check(self, "sStrNode_clone", 4))->value))));
                    if(__dec_obj178) { __dec_obj178 = come_decrement_ref_count(__dec_obj178, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value483);
                    if(right_value483 && right_value483 != __result_obj__ && !__freed_obj__) { right_value483 = come_decrement_ref_count(right_value483, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value483;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional305=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional305) {
                    ((struct sStrNode*)come_null_check(result_269, "sStrNode_clone", 5))->sline=((struct sStrNode*)come_null_check(self, "sStrNode_clone", 5))->sline;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional306=self!=((void*)0)&&((struct sStrNode*)come_null_check(self, "sStrNode_clone", 7))->sname!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional306) {
                    __dec_obj179=((struct sStrNode*)come_null_check(result_269, "sStrNode_clone", 6))->sname;
                    ((struct sStrNode*)come_null_check(result_269, "sStrNode_clone", 6))->sname=(char*)come_increment_ref_count(((char*)(right_value484=string_clone(((struct sStrNode*)come_null_check(self, "sStrNode_clone", 6))->sname))));
                    if(__dec_obj179) { __dec_obj179 = come_decrement_ref_count(__dec_obj179, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value484);
                    if(right_value484 && right_value484 != __result_obj__ && !__freed_obj__) { right_value484 = come_decrement_ref_count(right_value484, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value484;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __result176__ = __result_obj__ = result_269;
                if(result_269 && !__freed_obj__) { come_call_finalizer(sStrNode_finalize,result_269, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result176__;
                __freed_obj__ = 0;
                if(result_269 && !__freed_obj__) { come_call_finalizer(sStrNode_finalize,result_269, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sRegexNode_finalize(struct sRegexNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional313;
_Bool _if_conditional314;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional313=self!=((void*)0)&&((struct sRegexNode*)come_null_check(self, "sRegexNode_finalize", 1))->str!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional313) {
                        if(((struct sRegexNode*)come_null_check(self, "sRegexNode_finalize", 0))->str && !__freed_obj__) { ((struct sRegexNode*)come_null_check(self, "sRegexNode_finalize", 0))->str = come_decrement_ref_count(((struct sRegexNode*)come_null_check(self, "sRegexNode_finalize", 0))->str, (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional314=self!=((void*)0)&&((struct sRegexNode*)come_null_check(self, "sRegexNode_finalize", 2))->sname!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional314) {
                        if(((struct sRegexNode*)come_null_check(self, "sRegexNode_finalize", 1))->sname && !__freed_obj__) { ((struct sRegexNode*)come_null_check(self, "sRegexNode_finalize", 1))->sname = come_decrement_ref_count(((struct sRegexNode*)come_null_check(self, "sRegexNode_finalize", 1))->sname, (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
}

static struct sRegexNode* sRegexNode_clone(struct sRegexNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional315;
struct sRegexNode* __result178__;
void* right_value491;
struct sRegexNode* result_274;
_Bool _if_conditional316;
void* right_value492;
char* __dec_obj180;
_Bool _if_conditional317;
_Bool _if_conditional318;
_Bool _if_conditional319;
_Bool _if_conditional320;
void* right_value493;
char* __dec_obj181;
struct sRegexNode* __result179__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value491, 0, sizeof(void*));
memset(&result_274, 0, sizeof(struct sRegexNode*));
memset(&right_value492, 0, sizeof(void*));
memset(&right_value493, 0, sizeof(void*));
                    if(_if_conditional315=self==(void*)0,                    __freed_obj__ = 0, 
                    _if_conditional315) {
                        __result178__ = __result_obj__ = (void*)0;
                        __freed_obj__ = 0;
                        return __result178__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    result_274=(struct sRegexNode*)come_increment_ref_count(((struct sRegexNode*)(right_value491=(struct sRegexNode*)come_calloc(1, sizeof(struct sRegexNode)*(1), "sRegexNode_clone", 3))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value491);
                    if(right_value491 && right_value491 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sRegexNode_finalize,right_value491, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value491;
                    __freed_obj__ = 0;
                    if(_if_conditional316=self!=((void*)0)&&((struct sRegexNode*)come_null_check(self, "sRegexNode_clone", 5))->str!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional316) {
                        __dec_obj180=((struct sRegexNode*)come_null_check(result_274, "sRegexNode_clone", 4))->str;
                        ((struct sRegexNode*)come_null_check(result_274, "sRegexNode_clone", 4))->str=(char*)come_increment_ref_count(((char*)(right_value492=string_clone(((struct sRegexNode*)come_null_check(self, "sRegexNode_clone", 4))->str))));
                        if(__dec_obj180) { __dec_obj180 = come_decrement_ref_count(__dec_obj180, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value492);
                        if(right_value492 && right_value492 != __result_obj__ && !__freed_obj__) { right_value492 = come_decrement_ref_count(right_value492, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value492;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional317=self!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional317) {
                        ((struct sRegexNode*)come_null_check(result_274, "sRegexNode_clone", 5))->global=((struct sRegexNode*)come_null_check(self, "sRegexNode_clone", 5))->global;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional318=self!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional318) {
                        ((struct sRegexNode*)come_null_check(result_274, "sRegexNode_clone", 6))->ignore_case=((struct sRegexNode*)come_null_check(self, "sRegexNode_clone", 6))->ignore_case;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional319=self!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional319) {
                        ((struct sRegexNode*)come_null_check(result_274, "sRegexNode_clone", 7))->sline=((struct sRegexNode*)come_null_check(self, "sRegexNode_clone", 7))->sline;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional320=self!=((void*)0)&&((struct sRegexNode*)come_null_check(self, "sRegexNode_clone", 9))->sname!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional320) {
                        __dec_obj181=((struct sRegexNode*)come_null_check(result_274, "sRegexNode_clone", 8))->sname;
                        ((struct sRegexNode*)come_null_check(result_274, "sRegexNode_clone", 8))->sname=(char*)come_increment_ref_count(((char*)(right_value493=string_clone(((struct sRegexNode*)come_null_check(self, "sRegexNode_clone", 8))->sname))));
                        if(__dec_obj181) { __dec_obj181 = come_decrement_ref_count(__dec_obj181, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value493);
                        if(right_value493 && right_value493 != __result_obj__ && !__freed_obj__) { right_value493 = come_decrement_ref_count(right_value493, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value493;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __result179__ = __result_obj__ = result_274;
                    if(result_274 && !__freed_obj__) { come_call_finalizer(sRegexNode_finalize,result_274, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result179__;
                    __freed_obj__ = 0;
                    if(result_274 && !__freed_obj__) { come_call_finalizer(sRegexNode_finalize,result_274, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sCharNode_finalize(struct sCharNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional326;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional326=self!=((void*)0)&&((struct sCharNode*)come_null_check(self, "sCharNode_finalize", 1))->sname!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional326) {
                                if(((struct sCharNode*)come_null_check(self, "sCharNode_finalize", 0))->sname && !__freed_obj__) { ((struct sCharNode*)come_null_check(self, "sCharNode_finalize", 0))->sname = come_decrement_ref_count(((struct sCharNode*)come_null_check(self, "sCharNode_finalize", 0))->sname, (void*)0, (void*)0, 0, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
}

static struct sCharNode* sCharNode_clone(struct sCharNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional327;
struct sCharNode* __result181__;
void* right_value497;
struct sCharNode* result_281;
_Bool _if_conditional328;
_Bool _if_conditional329;
_Bool _if_conditional330;
void* right_value498;
char* __dec_obj182;
struct sCharNode* __result182__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value497, 0, sizeof(void*));
memset(&result_281, 0, sizeof(struct sCharNode*));
memset(&right_value498, 0, sizeof(void*));
                            if(_if_conditional327=self==(void*)0,                            __freed_obj__ = 0, 
                            _if_conditional327) {
                                __result181__ = __result_obj__ = (void*)0;
                                __freed_obj__ = 0;
                                return __result181__;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            result_281=(struct sCharNode*)come_increment_ref_count(((struct sCharNode*)(right_value497=(struct sCharNode*)come_calloc(1, sizeof(struct sCharNode)*(1), "sCharNode_clone", 3))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value497);
                            if(right_value497 && right_value497 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sCharNode_finalize,right_value497, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value497;
                            __freed_obj__ = 0;
                            if(_if_conditional328=self!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional328) {
                                ((struct sCharNode*)come_null_check(result_281, "sCharNode_clone", 4))->value=((struct sCharNode*)come_null_check(self, "sCharNode_clone", 4))->value;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional329=self!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional329) {
                                ((struct sCharNode*)come_null_check(result_281, "sCharNode_clone", 5))->sline=((struct sCharNode*)come_null_check(self, "sCharNode_clone", 5))->sline;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional330=self!=((void*)0)&&((struct sCharNode*)come_null_check(self, "sCharNode_clone", 7))->sname!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional330) {
                                __dec_obj182=((struct sCharNode*)come_null_check(result_281, "sCharNode_clone", 6))->sname;
                                ((struct sCharNode*)come_null_check(result_281, "sCharNode_clone", 6))->sname=(char*)come_increment_ref_count(((char*)(right_value498=string_clone(((struct sCharNode*)come_null_check(self, "sCharNode_clone", 6))->sname))));
                                if(__dec_obj182) { __dec_obj182 = come_decrement_ref_count(__dec_obj182, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value498);
                                if(right_value498 && right_value498 != __result_obj__ && !__freed_obj__) { right_value498 = come_decrement_ref_count(right_value498, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value498;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            __result182__ = __result_obj__ = result_281;
                            if(result_281 && !__freed_obj__) { come_call_finalizer(sCharNode_finalize,result_281, (void*)0, (void*)0, 0, 0, 1, 0); }
                            __freed_obj__ = 0;
                            return __result182__;
                            __freed_obj__ = 0;
                            if(result_281 && !__freed_obj__) { come_call_finalizer(sCharNode_finalize,result_281, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sWCharNode_finalize(struct sWCharNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional339;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional339=self!=((void*)0)&&((struct sWCharNode*)come_null_check(self, "sWCharNode_finalize", 1))->sname!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional339) {
                                    if(((struct sWCharNode*)come_null_check(self, "sWCharNode_finalize", 0))->sname && !__freed_obj__) { ((struct sWCharNode*)come_null_check(self, "sWCharNode_finalize", 0))->sname = come_decrement_ref_count(((struct sWCharNode*)come_null_check(self, "sWCharNode_finalize", 0))->sname, (void*)0, (void*)0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
}

static struct sWCharNode* sWCharNode_clone(struct sWCharNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional340;
struct sWCharNode* __result184__;
void* right_value502;
struct sWCharNode* result_291;
_Bool _if_conditional341;
_Bool _if_conditional342;
_Bool _if_conditional343;
void* right_value503;
char* __dec_obj183;
struct sWCharNode* __result185__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value502, 0, sizeof(void*));
memset(&result_291, 0, sizeof(struct sWCharNode*));
memset(&right_value503, 0, sizeof(void*));
                                if(_if_conditional340=self==(void*)0,                                __freed_obj__ = 0, 
                                _if_conditional340) {
                                    __result184__ = __result_obj__ = (void*)0;
                                    __freed_obj__ = 0;
                                    return __result184__;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                result_291=(struct sWCharNode*)come_increment_ref_count(((struct sWCharNode*)(right_value502=(struct sWCharNode*)come_calloc(1, sizeof(struct sWCharNode)*(1), "sWCharNode_clone", 3))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value502);
                                if(right_value502 && right_value502 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sWCharNode_finalize,right_value502, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value502;
                                __freed_obj__ = 0;
                                if(_if_conditional341=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional341) {
                                    ((struct sWCharNode*)come_null_check(result_291, "sWCharNode_clone", 4))->value=((struct sWCharNode*)come_null_check(self, "sWCharNode_clone", 4))->value;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional342=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional342) {
                                    ((struct sWCharNode*)come_null_check(result_291, "sWCharNode_clone", 5))->sline=((struct sWCharNode*)come_null_check(self, "sWCharNode_clone", 5))->sline;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional343=self!=((void*)0)&&((struct sWCharNode*)come_null_check(self, "sWCharNode_clone", 7))->sname!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional343) {
                                    __dec_obj183=((struct sWCharNode*)come_null_check(result_291, "sWCharNode_clone", 6))->sname;
                                    ((struct sWCharNode*)come_null_check(result_291, "sWCharNode_clone", 6))->sname=(char*)come_increment_ref_count(((char*)(right_value503=string_clone(((struct sWCharNode*)come_null_check(self, "sWCharNode_clone", 6))->sname))));
                                    if(__dec_obj183) { __dec_obj183 = come_decrement_ref_count(__dec_obj183, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value503);
                                    if(right_value503 && right_value503 != __result_obj__ && !__freed_obj__) { right_value503 = come_decrement_ref_count(right_value503, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value503;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                __result185__ = __result_obj__ = result_291;
                                if(result_291 && !__freed_obj__) { come_call_finalizer(sWCharNode_finalize,result_291, (void*)0, (void*)0, 0, 0, 1, 0); }
                                __freed_obj__ = 0;
                                return __result185__;
                                __freed_obj__ = 0;
                                if(result_291 && !__freed_obj__) { come_call_finalizer(sWCharNode_finalize,result_291, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sWStringNode_finalize(struct sWStringNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional353;
_Bool _if_conditional354;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional353=self!=((void*)0)&&((struct sWStringNode*)come_null_check(self, "sWStringNode_finalize", 1))->value!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional353) {
                                    if(((struct sWStringNode*)come_null_check(self, "sWStringNode_finalize", 0))->value && !__freed_obj__) { ((struct sWStringNode*)come_null_check(self, "sWStringNode_finalize", 0))->value = come_decrement_ref_count(((struct sWStringNode*)come_null_check(self, "sWStringNode_finalize", 0))->value, (void*)0, (void*)0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional354=self!=((void*)0)&&((struct sWStringNode*)come_null_check(self, "sWStringNode_finalize", 2))->sname!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional354) {
                                    if(((struct sWStringNode*)come_null_check(self, "sWStringNode_finalize", 1))->sname && !__freed_obj__) { ((struct sWStringNode*)come_null_check(self, "sWStringNode_finalize", 1))->sname = come_decrement_ref_count(((struct sWStringNode*)come_null_check(self, "sWStringNode_finalize", 1))->sname, (void*)0, (void*)0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
}

static struct sWStringNode* sWStringNode_clone(struct sWStringNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional355;
struct sWStringNode* __result187__;
void* right_value510;
struct sWStringNode* result_306;
_Bool _if_conditional356;
void* right_value511;
unsigned int* __dec_obj184;
_Bool _if_conditional357;
_Bool _if_conditional358;
void* right_value512;
char* __dec_obj185;
struct sWStringNode* __result188__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value510, 0, sizeof(void*));
memset(&result_306, 0, sizeof(struct sWStringNode*));
memset(&right_value511, 0, sizeof(void*));
memset(&right_value512, 0, sizeof(void*));
                                if(_if_conditional355=self==(void*)0,                                __freed_obj__ = 0, 
                                _if_conditional355) {
                                    __result187__ = __result_obj__ = (void*)0;
                                    __freed_obj__ = 0;
                                    return __result187__;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                result_306=(struct sWStringNode*)come_increment_ref_count(((struct sWStringNode*)(right_value510=(struct sWStringNode*)come_calloc(1, sizeof(struct sWStringNode)*(1), "sWStringNode_clone", 3))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value510);
                                if(right_value510 && right_value510 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sWStringNode_finalize,right_value510, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value510;
                                __freed_obj__ = 0;
                                if(_if_conditional356=self!=((void*)0)&&((struct sWStringNode*)come_null_check(self, "sWStringNode_clone", 5))->value!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional356) {
                                    __dec_obj184=((struct sWStringNode*)come_null_check(result_306, "sWStringNode_clone", 4))->value;
                                    ((struct sWStringNode*)come_null_check(result_306, "sWStringNode_clone", 4))->value=(unsigned int*)come_increment_ref_count(((unsigned int*)(right_value511=(unsigned int*)come_memdup(((struct sWStringNode*)come_null_check(self, "sWStringNode_clone", 4))->value, "sWStringNode_clone", 4))));
                                    if(__dec_obj184) { __dec_obj184 = come_decrement_ref_count(__dec_obj184, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value511);
                                    if(right_value511 && right_value511 != __result_obj__ && !__freed_obj__) { right_value511 = come_decrement_ref_count(right_value511, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value511;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional357=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional357) {
                                    ((struct sWStringNode*)come_null_check(result_306, "sWStringNode_clone", 5))->sline=((struct sWStringNode*)come_null_check(self, "sWStringNode_clone", 5))->sline;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional358=self!=((void*)0)&&((struct sWStringNode*)come_null_check(self, "sWStringNode_clone", 7))->sname!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional358) {
                                    __dec_obj185=((struct sWStringNode*)come_null_check(result_306, "sWStringNode_clone", 6))->sname;
                                    ((struct sWStringNode*)come_null_check(result_306, "sWStringNode_clone", 6))->sname=(char*)come_increment_ref_count(((char*)(right_value512=string_clone(((struct sWStringNode*)come_null_check(self, "sWStringNode_clone", 6))->sname))));
                                    if(__dec_obj185) { __dec_obj185 = come_decrement_ref_count(__dec_obj185, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value512);
                                    if(right_value512 && right_value512 != __result_obj__ && !__freed_obj__) { right_value512 = come_decrement_ref_count(right_value512, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value512;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                __result188__ = __result_obj__ = result_306;
                                if(result_306 && !__freed_obj__) { come_call_finalizer(sWStringNode_finalize,result_306, (void*)0, (void*)0, 0, 0, 1, 0); }
                                __freed_obj__ = 0;
                                return __result188__;
                                __freed_obj__ = 0;
                                if(result_306 && !__freed_obj__) { come_call_finalizer(sWStringNode_finalize,result_306, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sSStringNode_finalize(struct sSStringNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional371;
_Bool _if_conditional372;
_Bool _if_conditional373;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                    if(_if_conditional371=self!=((void*)0)&&((struct sSStringNode*)come_null_check(self, "sSStringNode_finalize", 1))->value!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional371) {
                                        if(((struct sSStringNode*)come_null_check(self, "sSStringNode_finalize", 0))->value && !__freed_obj__) { ((struct sSStringNode*)come_null_check(self, "sSStringNode_finalize", 0))->value = come_decrement_ref_count(((struct sSStringNode*)come_null_check(self, "sSStringNode_finalize", 0))->value, (void*)0, (void*)0, 0, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional372=self!=((void*)0)&&((struct sSStringNode*)come_null_check(self, "sSStringNode_finalize", 2))->exps!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional372) {
                                        if(((struct sSStringNode*)come_null_check(self, "sSStringNode_finalize", 1))->exps && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,((struct sSStringNode*)come_null_check(self, "sSStringNode_finalize", 1))->exps, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional373=self!=((void*)0)&&((struct sSStringNode*)come_null_check(self, "sSStringNode_finalize", 3))->sname!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional373) {
                                        if(((struct sSStringNode*)come_null_check(self, "sSStringNode_finalize", 2))->sname && !__freed_obj__) { ((struct sSStringNode*)come_null_check(self, "sSStringNode_finalize", 2))->sname = come_decrement_ref_count(((struct sSStringNode*)come_null_check(self, "sSStringNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
}

static struct sSStringNode* sSStringNode_clone(struct sSStringNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional374;
struct sSStringNode* __result190__;
void* right_value523;
struct sSStringNode* result_317;
_Bool _if_conditional375;
void* right_value524;
char* __dec_obj186;
_Bool _if_conditional376;
void* right_value525;
struct list$1sNodeph* __dec_obj187;
_Bool _if_conditional377;
_Bool _if_conditional378;
void* right_value526;
char* __dec_obj188;
struct sSStringNode* __result191__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value523, 0, sizeof(void*));
memset(&result_317, 0, sizeof(struct sSStringNode*));
memset(&right_value524, 0, sizeof(void*));
memset(&right_value525, 0, sizeof(void*));
memset(&right_value526, 0, sizeof(void*));
                                    if(_if_conditional374=self==(void*)0,                                    __freed_obj__ = 0, 
                                    _if_conditional374) {
                                        __result190__ = __result_obj__ = (void*)0;
                                        __freed_obj__ = 0;
                                        return __result190__;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    result_317=(struct sSStringNode*)come_increment_ref_count(((struct sSStringNode*)(right_value523=(struct sSStringNode*)come_calloc(1, sizeof(struct sSStringNode)*(1), "sSStringNode_clone", 3))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value523);
                                    if(right_value523 && right_value523 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sSStringNode_finalize,right_value523, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value523;
                                    __freed_obj__ = 0;
                                    if(_if_conditional375=self!=((void*)0)&&((struct sSStringNode*)come_null_check(self, "sSStringNode_clone", 5))->value!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional375) {
                                        __dec_obj186=((struct sSStringNode*)come_null_check(result_317, "sSStringNode_clone", 4))->value;
                                        ((struct sSStringNode*)come_null_check(result_317, "sSStringNode_clone", 4))->value=(char*)come_increment_ref_count(((char*)(right_value524=string_clone(((struct sSStringNode*)come_null_check(self, "sSStringNode_clone", 4))->value))));
                                        if(__dec_obj186) { __dec_obj186 = come_decrement_ref_count(__dec_obj186, (void*)0, (void*)0, 0,0,0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value524);
                                        if(right_value524 && right_value524 != __result_obj__ && !__freed_obj__) { right_value524 = come_decrement_ref_count(right_value524, (void*)0, (void*)0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value524;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional376=self!=((void*)0)&&((struct sSStringNode*)come_null_check(self, "sSStringNode_clone", 6))->exps!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional376) {
                                        __dec_obj187=((struct sSStringNode*)come_null_check(result_317, "sSStringNode_clone", 5))->exps;
                                        ((struct sSStringNode*)come_null_check(result_317, "sSStringNode_clone", 5))->exps=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value525=list$1sNodephp_clone(((struct sSStringNode*)come_null_check(self, "sSStringNode_clone", 5))->exps))));
                                        if(__dec_obj187) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj187, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value525);
                                        if(right_value525 && right_value525 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value525, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value525;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional377=self!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional377) {
                                        ((struct sSStringNode*)come_null_check(result_317, "sSStringNode_clone", 6))->sline=((struct sSStringNode*)come_null_check(self, "sSStringNode_clone", 6))->sline;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional378=self!=((void*)0)&&((struct sSStringNode*)come_null_check(self, "sSStringNode_clone", 8))->sname!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional378) {
                                        __dec_obj188=((struct sSStringNode*)come_null_check(result_317, "sSStringNode_clone", 7))->sname;
                                        ((struct sSStringNode*)come_null_check(result_317, "sSStringNode_clone", 7))->sname=(char*)come_increment_ref_count(((char*)(right_value526=string_clone(((struct sSStringNode*)come_null_check(self, "sSStringNode_clone", 7))->sname))));
                                        if(__dec_obj188) { __dec_obj188 = come_decrement_ref_count(__dec_obj188, (void*)0, (void*)0, 0,0,0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value526);
                                        if(right_value526 && right_value526 != __result_obj__ && !__freed_obj__) { right_value526 = come_decrement_ref_count(right_value526, (void*)0, (void*)0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value526;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    __result191__ = __result_obj__ = result_317;
                                    if(result_317 && !__freed_obj__) { come_call_finalizer(sSStringNode_finalize,result_317, (void*)0, (void*)0, 0, 0, 1, 0); }
                                    __freed_obj__ = 0;
                                    return __result191__;
                                    __freed_obj__ = 0;
                                    if(result_317 && !__freed_obj__) { come_call_finalizer(sSStringNode_finalize,result_317, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static int optional$2intbool_value(struct optional$2intbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional390;
int default_value_329;
int __result196__;
int __result197__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_329, 0, sizeof(int));
                                                if(_if_conditional390=self==((void*)0),                                                __freed_obj__ = 0, 
                                                _if_conditional390) {
                                                    __freed_obj__ = 0;
                                                    memset(&default_value_329,0,sizeof(int));
                                                    __freed_obj__ = 0;
                                                    __result196__ = default_value_329;
                                                    __freed_obj__ = 0;
                                                    return __result196__;
                                                    __freed_obj__ = 0;
                                                }
                                                else {
                                                    __result197__ = ((struct optional$2intbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                                                    __freed_obj__ = 0;
                                                    return __result197__;
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

static void sMapNode_finalize(struct sMapNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional394;
_Bool _if_conditional395;
_Bool _if_conditional396;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                if(_if_conditional394=self!=((void*)0)&&((struct sMapNode*)come_null_check(self, "sMapNode_finalize", 1))->map_key_elements!=((void*)0),                                                __freed_obj__ = 0, 
                                                _if_conditional394) {
                                                    if(((struct sMapNode*)come_null_check(self, "sMapNode_finalize", 0))->map_key_elements && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,((struct sMapNode*)come_null_check(self, "sMapNode_finalize", 0))->map_key_elements, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                                if(_if_conditional395=self!=((void*)0)&&((struct sMapNode*)come_null_check(self, "sMapNode_finalize", 2))->map_elements!=((void*)0),                                                __freed_obj__ = 0, 
                                                _if_conditional395) {
                                                    if(((struct sMapNode*)come_null_check(self, "sMapNode_finalize", 1))->map_elements && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,((struct sMapNode*)come_null_check(self, "sMapNode_finalize", 1))->map_elements, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                                if(_if_conditional396=self!=((void*)0)&&((struct sMapNode*)come_null_check(self, "sMapNode_finalize", 3))->sname!=((void*)0),                                                __freed_obj__ = 0, 
                                                _if_conditional396) {
                                                    if(((struct sMapNode*)come_null_check(self, "sMapNode_finalize", 2))->sname && !__freed_obj__) { ((struct sMapNode*)come_null_check(self, "sMapNode_finalize", 2))->sname = come_decrement_ref_count(((struct sMapNode*)come_null_check(self, "sMapNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, 0); }
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
}

static struct sMapNode* sMapNode_clone(struct sMapNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional397;
struct sMapNode* __result198__;
void* right_value551;
struct sMapNode* result_333;
_Bool _if_conditional398;
void* right_value552;
struct list$1sNodeph* __dec_obj192;
_Bool _if_conditional399;
void* right_value553;
struct list$1sNodeph* __dec_obj193;
_Bool _if_conditional400;
_Bool _if_conditional401;
void* right_value554;
char* __dec_obj194;
struct sMapNode* __result199__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value551, 0, sizeof(void*));
memset(&result_333, 0, sizeof(struct sMapNode*));
memset(&right_value552, 0, sizeof(void*));
memset(&right_value553, 0, sizeof(void*));
memset(&right_value554, 0, sizeof(void*));
                                                if(_if_conditional397=self==(void*)0,                                                __freed_obj__ = 0, 
                                                _if_conditional397) {
                                                    __result198__ = __result_obj__ = (void*)0;
                                                    __freed_obj__ = 0;
                                                    return __result198__;
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                                result_333=(struct sMapNode*)come_increment_ref_count(((struct sMapNode*)(right_value551=(struct sMapNode*)come_calloc(1, sizeof(struct sMapNode)*(1), "sMapNode_clone", 3))));
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value551);
                                                if(right_value551 && right_value551 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sMapNode_finalize,right_value551, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                __right_value_freed_obj[0] = right_value551;
                                                __freed_obj__ = 0;
                                                if(_if_conditional398=self!=((void*)0)&&((struct sMapNode*)come_null_check(self, "sMapNode_clone", 5))->map_key_elements!=((void*)0),                                                __freed_obj__ = 0, 
                                                _if_conditional398) {
                                                    __dec_obj192=((struct sMapNode*)come_null_check(result_333, "sMapNode_clone", 4))->map_key_elements;
                                                    ((struct sMapNode*)come_null_check(result_333, "sMapNode_clone", 4))->map_key_elements=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value552=list$1sNodephp_clone(((struct sMapNode*)come_null_check(self, "sMapNode_clone", 4))->map_key_elements))));
                                                    if(__dec_obj192) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj192, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value552);
                                                    if(right_value552 && right_value552 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value552, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                    __right_value_freed_obj[0] = right_value552;
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                                if(_if_conditional399=self!=((void*)0)&&((struct sMapNode*)come_null_check(self, "sMapNode_clone", 6))->map_elements!=((void*)0),                                                __freed_obj__ = 0, 
                                                _if_conditional399) {
                                                    __dec_obj193=((struct sMapNode*)come_null_check(result_333, "sMapNode_clone", 5))->map_elements;
                                                    ((struct sMapNode*)come_null_check(result_333, "sMapNode_clone", 5))->map_elements=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value553=list$1sNodephp_clone(((struct sMapNode*)come_null_check(self, "sMapNode_clone", 5))->map_elements))));
                                                    if(__dec_obj193) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj193, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value553);
                                                    if(right_value553 && right_value553 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value553, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                    __right_value_freed_obj[0] = right_value553;
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                                if(_if_conditional400=self!=((void*)0),                                                __freed_obj__ = 0, 
                                                _if_conditional400) {
                                                    ((struct sMapNode*)come_null_check(result_333, "sMapNode_clone", 6))->sline=((struct sMapNode*)come_null_check(self, "sMapNode_clone", 6))->sline;
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                                if(_if_conditional401=self!=((void*)0)&&((struct sMapNode*)come_null_check(self, "sMapNode_clone", 8))->sname!=((void*)0),                                                __freed_obj__ = 0, 
                                                _if_conditional401) {
                                                    __dec_obj194=((struct sMapNode*)come_null_check(result_333, "sMapNode_clone", 7))->sname;
                                                    ((struct sMapNode*)come_null_check(result_333, "sMapNode_clone", 7))->sname=(char*)come_increment_ref_count(((char*)(right_value554=string_clone(((struct sMapNode*)come_null_check(self, "sMapNode_clone", 7))->sname))));
                                                    if(__dec_obj194) { __dec_obj194 = come_decrement_ref_count(__dec_obj194, (void*)0, (void*)0, 0,0,0); }
                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value554);
                                                    if(right_value554 && right_value554 != __result_obj__ && !__freed_obj__) { right_value554 = come_decrement_ref_count(right_value554, (void*)0, (void*)0, 1, 0, 0); }
                                                    __right_value_freed_obj[0] = right_value554;
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                                __result199__ = __result_obj__ = result_333;
                                                if(result_333 && !__freed_obj__) { come_call_finalizer(sMapNode_finalize,result_333, (void*)0, (void*)0, 0, 0, 1, 0); }
                                                __freed_obj__ = 0;
                                                return __result199__;
                                                __freed_obj__ = 0;
                                                if(result_333 && !__freed_obj__) { come_call_finalizer(sMapNode_finalize,result_333, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sListNode_finalize(struct sListNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional408;
_Bool _if_conditional409;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                            if(_if_conditional408=self!=((void*)0)&&((struct sListNode*)come_null_check(self, "sListNode_finalize", 1))->list_elements!=((void*)0),                                            __freed_obj__ = 0, 
                                            _if_conditional408) {
                                                if(((struct sListNode*)come_null_check(self, "sListNode_finalize", 0))->list_elements && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,((struct sListNode*)come_null_check(self, "sListNode_finalize", 0))->list_elements, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            if(_if_conditional409=self!=((void*)0)&&((struct sListNode*)come_null_check(self, "sListNode_finalize", 2))->sname!=((void*)0),                                            __freed_obj__ = 0, 
                                            _if_conditional409) {
                                                if(((struct sListNode*)come_null_check(self, "sListNode_finalize", 1))->sname && !__freed_obj__) { ((struct sListNode*)come_null_check(self, "sListNode_finalize", 1))->sname = come_decrement_ref_count(((struct sListNode*)come_null_check(self, "sListNode_finalize", 1))->sname, (void*)0, (void*)0, 0, 0, 0); }
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
}

static struct sListNode* sListNode_clone(struct sListNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional410;
struct sListNode* __result201__;
void* right_value559;
struct sListNode* result_336;
_Bool _if_conditional411;
void* right_value560;
struct list$1sNodeph* __dec_obj195;
_Bool _if_conditional412;
_Bool _if_conditional413;
void* right_value561;
char* __dec_obj196;
struct sListNode* __result202__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value559, 0, sizeof(void*));
memset(&result_336, 0, sizeof(struct sListNode*));
memset(&right_value560, 0, sizeof(void*));
memset(&right_value561, 0, sizeof(void*));
                                            if(_if_conditional410=self==(void*)0,                                            __freed_obj__ = 0, 
                                            _if_conditional410) {
                                                __result201__ = __result_obj__ = (void*)0;
                                                __freed_obj__ = 0;
                                                return __result201__;
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            result_336=(struct sListNode*)come_increment_ref_count(((struct sListNode*)(right_value559=(struct sListNode*)come_calloc(1, sizeof(struct sListNode)*(1), "sListNode_clone", 3))));
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value559);
                                            if(right_value559 && right_value559 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sListNode_finalize,right_value559, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[0] = right_value559;
                                            __freed_obj__ = 0;
                                            if(_if_conditional411=self!=((void*)0)&&((struct sListNode*)come_null_check(self, "sListNode_clone", 5))->list_elements!=((void*)0),                                            __freed_obj__ = 0, 
                                            _if_conditional411) {
                                                __dec_obj195=((struct sListNode*)come_null_check(result_336, "sListNode_clone", 4))->list_elements;
                                                ((struct sListNode*)come_null_check(result_336, "sListNode_clone", 4))->list_elements=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value560=list$1sNodephp_clone(((struct sListNode*)come_null_check(self, "sListNode_clone", 4))->list_elements))));
                                                if(__dec_obj195) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj195, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value560);
                                                if(right_value560 && right_value560 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value560, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                __right_value_freed_obj[0] = right_value560;
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            if(_if_conditional412=self!=((void*)0),                                            __freed_obj__ = 0, 
                                            _if_conditional412) {
                                                ((struct sListNode*)come_null_check(result_336, "sListNode_clone", 5))->sline=((struct sListNode*)come_null_check(self, "sListNode_clone", 5))->sline;
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            if(_if_conditional413=self!=((void*)0)&&((struct sListNode*)come_null_check(self, "sListNode_clone", 7))->sname!=((void*)0),                                            __freed_obj__ = 0, 
                                            _if_conditional413) {
                                                __dec_obj196=((struct sListNode*)come_null_check(result_336, "sListNode_clone", 6))->sname;
                                                ((struct sListNode*)come_null_check(result_336, "sListNode_clone", 6))->sname=(char*)come_increment_ref_count(((char*)(right_value561=string_clone(((struct sListNode*)come_null_check(self, "sListNode_clone", 6))->sname))));
                                                if(__dec_obj196) { __dec_obj196 = come_decrement_ref_count(__dec_obj196, (void*)0, (void*)0, 0,0,0); }
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value561);
                                                if(right_value561 && right_value561 != __result_obj__ && !__freed_obj__) { right_value561 = come_decrement_ref_count(right_value561, (void*)0, (void*)0, 1, 0, 0); }
                                                __right_value_freed_obj[0] = right_value561;
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            __result202__ = __result_obj__ = result_336;
                                            if(result_336 && !__freed_obj__) { come_call_finalizer(sListNode_finalize,result_336, (void*)0, (void*)0, 0, 0, 1, 0); }
                                            __freed_obj__ = 0;
                                            return __result202__;
                                            __freed_obj__ = 0;
                                            if(result_336 && !__freed_obj__) { come_call_finalizer(sListNode_finalize,result_336, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sNode* parse_tuple(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value564;
void* right_value565;
struct list$1sNodeph* tuple_elements_337;
_Bool _while_condtional34;
char* p_338;
_Bool no_comma_339;
void* right_value566;
struct sNode* node_340;
_Bool _if_conditional414;
_Bool _if_conditional415;
void* right_value567;
void* right_value568;
struct sNode* _inf_value13;
struct sTupleNode* _inf_obj_value13;
void* right_value572;
struct sNode* __result207__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value564, 0, sizeof(void*));
memset(&right_value565, 0, sizeof(void*));
memset(&tuple_elements_337, 0, sizeof(struct list$1sNodeph*));
memset(&p_338, 0, sizeof(char*));
memset(&no_comma_339, 0, sizeof(_Bool));
memset(&right_value566, 0, sizeof(void*));
memset(&node_340, 0, sizeof(struct sNode*));
memset(&right_value567, 0, sizeof(void*));
memset(&right_value568, 0, sizeof(void*));
memset(&right_value572, 0, sizeof(void*));
    tuple_elements_337=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value565=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value564=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 2520))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value564);
    if(right_value564 && right_value564 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value564, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value564;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value565);
    if(right_value565 && right_value565 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value565, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value565;
    __freed_obj__ = 0;
    while(_while_condtional34=(_Bool)1,    __freed_obj__ = 0, 
    _while_condtional34) {
        p_338=((struct sInfo*)come_null_check(info, "06str.c", 2522))->p;
        __freed_obj__ = 0;
        no_comma_339=((struct sInfo*)come_null_check(info, "06str.c", 2524))->no_comma;
        __freed_obj__ = 0;
        ((struct sInfo*)come_null_check(info, "06str.c", 2525))->no_comma=(_Bool)1;
        __freed_obj__ = 0;
        node_340=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value566=expression_v13(info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value566);
        if(right_value566 && right_value566 != __result_obj__ && !__freed_obj__) { right_value566 = come_decrement_ref_count(right_value566, ((struct sNode*)right_value566)->finalize, ((struct sNode*)right_value566)->_protocol_obj, 1, 0, 0); } 
        __right_value_freed_obj[0] = right_value566;
        __freed_obj__ = 0;
        ((struct sInfo*)come_null_check(info, "06str.c", 2529))->no_comma=no_comma_339;
        __freed_obj__ = 0;
        list$1sNodeph_push_back(((struct list$1sNodeph*)come_null_check(tuple_elements_337, "06str.c", 2531)),(struct sNode*)come_increment_ref_count(node_340));
        __freed_obj__ = 0;
        if(_if_conditional414=*((struct sInfo*)come_null_check(info, "06str.c", 2546))->p==44,        __freed_obj__ = 0, 
        _if_conditional414) {
            ((struct sInfo*)come_null_check(info, "06str.c", 2534))->p++;
            __freed_obj__ = 0;
            skip_spaces_and_lf(info);
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional415=*((struct sInfo*)come_null_check(info, "06str.c", 2546))->p==41,            __freed_obj__ = 0, 
            _if_conditional415) {
                ((struct sInfo*)come_null_check(info, "06str.c", 2538))->p++;
                __freed_obj__ = 0;
                skip_spaces_and_lf(info);
                __freed_obj__ = 0;
                if(node_340 && !__freed_obj__) { node_340 = come_decrement_ref_count(node_340, ((struct sNode*)node_340)->finalize, ((struct sNode*)node_340)->_protocol_obj, 0, 0, 0); } 
                break;
                __freed_obj__ = 0;
            }
            else {
                err_msg(info,"invalid character(%c) in tuple expression",*((struct sInfo*)come_null_check(info, "06str.c", 2543))->p);
                __freed_obj__ = 0;
                exit(2);
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(node_340 && !__freed_obj__) { node_340 = come_decrement_ref_count(node_340, ((struct sNode*)node_340)->finalize, ((struct sNode*)node_340)->_protocol_obj, 0, 0, 0); } 
    }
    __freed_obj__ = 0;
    _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2548);
    _inf_obj_value13=come_increment_ref_count(((struct sTupleNode*)(right_value568=sTupleNode_initialize((struct sTupleNode*)come_increment_ref_count(((struct sTupleNode*)(right_value567=(struct sTupleNode*)come_calloc(1, sizeof(struct sTupleNode)*(1), "06str.c", 2548)))),(struct list$1sNodeph*)come_increment_ref_count(tuple_elements_337),info))));
    _inf_value13->_protocol_obj=_inf_obj_value13;
    _inf_value13->finalize=(void*)sTupleNode_finalize;
    _inf_value13->clone=(void*)sTupleNode_clone;
    _inf_value13->compile=(void*)sTupleNode_compile;
    _inf_value13->sline=(void*)sTupleNode_sline;
    _inf_value13->sname=(void*)sTupleNode_sname;
    _inf_value13->terminated=(void*)sTupleNode_terminated;
    _inf_value13->kind=(void*)sTupleNode_kind;
    __result207__ = __result_obj__ = ((struct sNode*)(right_value572=_inf_value13));
    if(tuple_elements_337 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,tuple_elements_337, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value567);
    if(right_value567 && right_value567 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sTupleNode_finalize,right_value567, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value567;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value568);
    if(right_value568 && right_value568 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sTupleNode_finalize,right_value568, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value568;
    __freed_obj__ = 0;
    return __result207__;
    __freed_obj__ = 0;
    if(tuple_elements_337 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,tuple_elements_337, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sTupleNode_finalize(struct sTupleNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional416;
_Bool _if_conditional417;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional416=self!=((void*)0)&&((struct sTupleNode*)come_null_check(self, "sTupleNode_finalize", 1))->tuple_elements!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional416) {
            if(((struct sTupleNode*)come_null_check(self, "sTupleNode_finalize", 0))->tuple_elements && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,((struct sTupleNode*)come_null_check(self, "sTupleNode_finalize", 0))->tuple_elements, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional417=self!=((void*)0)&&((struct sTupleNode*)come_null_check(self, "sTupleNode_finalize", 2))->sname!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional417) {
            if(((struct sTupleNode*)come_null_check(self, "sTupleNode_finalize", 1))->sname && !__freed_obj__) { ((struct sTupleNode*)come_null_check(self, "sTupleNode_finalize", 1))->sname = come_decrement_ref_count(((struct sTupleNode*)come_null_check(self, "sTupleNode_finalize", 1))->sname, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
}

static struct sTupleNode* sTupleNode_clone(struct sTupleNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional418;
struct sTupleNode* __result205__;
void* right_value569;
struct sTupleNode* result_341;
_Bool _if_conditional419;
void* right_value570;
struct list$1sNodeph* __dec_obj197;
_Bool _if_conditional420;
_Bool _if_conditional421;
void* right_value571;
char* __dec_obj198;
struct sTupleNode* __result206__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value569, 0, sizeof(void*));
memset(&result_341, 0, sizeof(struct sTupleNode*));
memset(&right_value570, 0, sizeof(void*));
memset(&right_value571, 0, sizeof(void*));
        if(_if_conditional418=self==(void*)0,        __freed_obj__ = 0, 
        _if_conditional418) {
            __result205__ = __result_obj__ = (void*)0;
            __freed_obj__ = 0;
            return __result205__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        result_341=(struct sTupleNode*)come_increment_ref_count(((struct sTupleNode*)(right_value569=(struct sTupleNode*)come_calloc(1, sizeof(struct sTupleNode)*(1), "sTupleNode_clone", 3))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value569);
        if(right_value569 && right_value569 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sTupleNode_finalize,right_value569, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value569;
        __freed_obj__ = 0;
        if(_if_conditional419=self!=((void*)0)&&((struct sTupleNode*)come_null_check(self, "sTupleNode_clone", 5))->tuple_elements!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional419) {
            __dec_obj197=((struct sTupleNode*)come_null_check(result_341, "sTupleNode_clone", 4))->tuple_elements;
            ((struct sTupleNode*)come_null_check(result_341, "sTupleNode_clone", 4))->tuple_elements=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value570=list$1sNodephp_clone(((struct sTupleNode*)come_null_check(self, "sTupleNode_clone", 4))->tuple_elements))));
            if(__dec_obj197) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj197, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value570);
            if(right_value570 && right_value570 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value570, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value570;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional420=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional420) {
            ((struct sTupleNode*)come_null_check(result_341, "sTupleNode_clone", 5))->sline=((struct sTupleNode*)come_null_check(self, "sTupleNode_clone", 5))->sline;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional421=self!=((void*)0)&&((struct sTupleNode*)come_null_check(self, "sTupleNode_clone", 7))->sname!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional421) {
            __dec_obj198=((struct sTupleNode*)come_null_check(result_341, "sTupleNode_clone", 6))->sname;
            ((struct sTupleNode*)come_null_check(result_341, "sTupleNode_clone", 6))->sname=(char*)come_increment_ref_count(((char*)(right_value571=string_clone(((struct sTupleNode*)come_null_check(self, "sTupleNode_clone", 6))->sname))));
            if(__dec_obj198) { __dec_obj198 = come_decrement_ref_count(__dec_obj198, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value571);
            if(right_value571 && right_value571 != __result_obj__ && !__freed_obj__) { right_value571 = come_decrement_ref_count(right_value571, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value571;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __result206__ = __result_obj__ = result_341;
        if(result_341 && !__freed_obj__) { come_call_finalizer(sTupleNode_finalize,result_341, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result206__;
        __freed_obj__ = 0;
        if(result_341 && !__freed_obj__) { come_call_finalizer(sTupleNode_finalize,result_341, (void*)0, (void*)0, 0, 0, 0, 0); }
}

