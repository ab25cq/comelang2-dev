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

struct sStrNode* sStrNode_initialize(struct sStrNode* self, char* value, int sline, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value10;
char* __dec_obj6;
void* right_value11;
char* __dec_obj7;
struct sStrNode* __result13__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value10, 0, sizeof(void*));
memset(&right_value11, 0, sizeof(void*));
    __dec_obj6=self->value;
    self->value=(char*)come_increment_ref_count(((char*)(right_value10=__builtin_string(value))));
    if(__dec_obj6) { __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value10);
    if(right_value10 && right_value10 != __result_obj__ && !__freed_obj__) { right_value10 = come_decrement_ref_count(right_value10, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value10;
    __freed_obj__ = 0;
    self->sline=sline;
    __dec_obj7=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value11=__builtin_string(info->sname))));
    if(__dec_obj7) { __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value11);
    if(right_value11 && right_value11 != __result_obj__ && !__freed_obj__) { right_value11 = come_decrement_ref_count(right_value11, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value11;
    __freed_obj__ = 0;
    __result13__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sStrNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(value && !__freed_obj__) { value = come_decrement_ref_count(value, (void*)0, (void*)0, 0, 1, 0); }
    return __result13__;
    if(self && !__freed_obj__) { come_call_finalizer(sStrNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(value && !__freed_obj__) { value = come_decrement_ref_count(value, (void*)0, (void*)0, 0, 1, 0); }
}

_Bool sStrNode_terminated(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result14__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result14__ = (_Bool)0;
    return __result14__;
}

static char* double_quoted_string(char* str){
char* __caller_sname_stack__;
int __caller_sline_stack__;
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
char* __result15__;
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
    while(_while_condtional1=*p_6,    _while_condtional1) {
        if(_if_conditional7=*p_6==34,        _if_conditional7) {
            p_6++;
            buffer_append_char(buf_5,92);
            buffer_append_char(buf_5,34);
        }
        else {
            buffer_append_char(buf_5,*p_6);
            p_6++;
        }
    }
    __result15__ = __result_obj__ = ((char*)(right_value14=buffer_to_string(buf_5)));
    if(buf_5 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_5, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result15__;
    if(buf_5 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_5, (void*)0, (void*)0, 0, 0, 0, 0); }
}

char* sStrNode_kind(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value15;
char* __result16__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value15, 0, sizeof(void*));
    __result16__ = __result_obj__ = ((char*)(right_value15=__builtin_string("sStrNode")));
    return __result16__;
}

_Bool sStrNode_compile(struct sStrNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
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
_Bool __result18__;
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
    __dec_obj8=come_value_7->c_value;
    come_value_7->c_value=(char*)come_increment_ref_count(((char*)(right_value17=xsprintf("\"%s\"",self->value))));
    if(__dec_obj8) { __dec_obj8 = come_decrement_ref_count(__dec_obj8, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value17);
    if(right_value17 && right_value17 != __result_obj__ && !__freed_obj__) { right_value17 = come_decrement_ref_count(right_value17, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value17;
    __freed_obj__ = 0;
    __dec_obj9=come_value_7->type;
    come_value_7->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value19=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value18=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 56)))),"char*",(_Bool)0,info))));
    if(__dec_obj9) { come_call_finalizer(sType_finalize,__dec_obj9, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value18);
    if(right_value18 && right_value18 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value18, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value18;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value19);
    if(right_value19 && right_value19 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value19, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value19;
    __freed_obj__ = 0;
    come_value_7->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_7));
    add_come_last_code(info,"%s;\n",come_value_7->c_value);
    __result18__ = (_Bool)1;
    if(come_value_7 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_7, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result18__;
    if(come_value_7 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_7, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void CVALUE_finalize(struct CVALUE* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional8;
_Bool _if_conditional9;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional8=self!=((void*)0)&&self->c_value!=((void*)0),        _if_conditional8) {
            if(self->c_value && !__freed_obj__) { self->c_value = come_decrement_ref_count(self->c_value, (void*)0, (void*)0, 0, 0, 0); }
        }
        if(_if_conditional9=self!=((void*)0)&&self->type!=((void*)0),        _if_conditional9) {
            if(self->type && !__freed_obj__) { come_call_finalizer(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
}

static void sType_finalize(struct sType* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
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
                if(_if_conditional10=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                _if_conditional10) {
                    if(self->mNoSolvedGenericsType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                if(_if_conditional12=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                _if_conditional12) {
                    if(self->mOriginalLoadVarType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                if(_if_conditional13=self!=((void*)0)&&self->mGenericsName!=((void*)0),                _if_conditional13) {
                    if(self->mGenericsName && !__freed_obj__) { self->mGenericsName = come_decrement_ref_count(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0); }
                }
                if(_if_conditional14=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                _if_conditional14) {
                    if(self->mGenericsTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                if(_if_conditional16=self!=((void*)0)&&self->mArrayNum!=((void*)0),                _if_conditional16) {
                    if(self->mArrayNum && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                if(_if_conditional18=self!=((void*)0)&&self->mParamTypes!=((void*)0),                _if_conditional18) {
                    if(self->mParamTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                if(_if_conditional19=self!=((void*)0)&&self->mParamNames!=((void*)0),                _if_conditional19) {
                    if(self->mParamNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                if(_if_conditional21=self!=((void*)0)&&self->mResultType!=((void*)0),                _if_conditional21) {
                    if(self->mResultType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                if(_if_conditional22=self!=((void*)0)&&self->mAlignas!=((void*)0),                _if_conditional22) {
                    if(self->mAlignas && !__freed_obj__) { self->mAlignas = come_decrement_ref_count(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0); } 
                }
                if(_if_conditional23=self!=((void*)0)&&self->mSizeNum!=((void*)0),                _if_conditional23) {
                    if(self->mSizeNum && !__freed_obj__) { self->mSizeNum = come_decrement_ref_count(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0); } 
                }
                if(_if_conditional24=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                _if_conditional24) {
                    if(self->mOriginalTypeName && !__freed_obj__) { self->mOriginalTypeName = come_decrement_ref_count(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0); }
                }
                if(_if_conditional25=self!=((void*)0)&&self->mAsmName!=((void*)0),                _if_conditional25) {
                    if(self->mAsmName && !__freed_obj__) { self->mAsmName = come_decrement_ref_count(self->mAsmName, (void*)0, (void*)0, 0, 0, 0); }
                }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional11;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional11=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional11) {
                            if(self->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
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
                        it_8=self->head;
                        while(_while_condtional2=it_8!=((void*)0),                        _while_condtional2) {
                            prev_it_9=it_8;
                            it_8=it_8->next;
                            if(prev_it_9 && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,prev_it_9, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional15;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional15=self!=((void*)0)&&self->item!=((void*)0),                                _if_conditional15) {
                                    if(self->item && !__freed_obj__) { come_call_finalizer(sType_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                                }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
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
                        it_10=self->head;
                        while(_while_condtional3=it_10!=((void*)0),                        _while_condtional3) {
                            prev_it_11=it_10;
                            it_10=it_10->next;
                            if(prev_it_11 && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,prev_it_11, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional17;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional17=self!=((void*)0)&&self->item!=((void*)0),                                _if_conditional17) {
                                    if(self->item && !__freed_obj__) { self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0); } 
                                }
}

static void list$1charphp_finalize(struct list$1charph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
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
                        it_12=self->head;
                        while(_while_condtional4=it_12!=((void*)0),                        _while_condtional4) {
                            prev_it_13=it_12;
                            it_12=it_12->next;
                            if(prev_it_13 && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,prev_it_13, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional20;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional20=self!=((void*)0)&&self->item!=((void*)0),                                _if_conditional20) {
                                    if(self->item && !__freed_obj__) { self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0, 0, 0); }
                                }
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
char* __caller_sname_stack__;
int __caller_sline_stack__;
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
struct list$1CVALUEph* __result17__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value20, 0, sizeof(void*));
memset(&litem_14, 0, sizeof(struct list_item$1CVALUEph*));
memset(&right_value21, 0, sizeof(void*));
memset(&litem_15, 0, sizeof(struct list_item$1CVALUEph*));
memset(&right_value22, 0, sizeof(void*));
memset(&litem_16, 0, sizeof(struct list_item$1CVALUEph*));
        if(_if_conditional26=self->len==0,        _if_conditional26) {
            litem_14=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value20=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 283))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value20);
            if(right_value20 && right_value20 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value20, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value20;
            __freed_obj__ = 0;
            litem_14->prev=((void*)0);
            litem_14->next=((void*)0);
            __dec_obj10=litem_14->item;
            litem_14->item=(struct CVALUE*)come_increment_ref_count(item);
            if(__dec_obj10) { come_call_finalizer(CVALUE_finalize,__dec_obj10, (void*)0, (void*)0, 0, 0, 0, 0); }
            self->tail=litem_14;
            self->head=litem_14;
        }
        else {
            if(_if_conditional28=self->len==1,            _if_conditional28) {
                litem_15=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value21=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 293))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value21);
                if(right_value21 && right_value21 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value21, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value21;
                __freed_obj__ = 0;
                litem_15->prev=self->head;
                litem_15->next=((void*)0);
                __dec_obj11=litem_15->item;
                litem_15->item=(struct CVALUE*)come_increment_ref_count(item);
                if(__dec_obj11) { come_call_finalizer(CVALUE_finalize,__dec_obj11, (void*)0, (void*)0, 0, 0, 0, 0); }
                self->tail=litem_15;
                self->head->next=litem_15;
            }
            else {
                litem_16=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value22=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 303))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value22);
                if(right_value22 && right_value22 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value22, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value22;
                __freed_obj__ = 0;
                litem_16->prev=self->tail;
                litem_16->next=((void*)0);
                __dec_obj12=litem_16->item;
                litem_16->item=(struct CVALUE*)come_increment_ref_count(item);
                if(__dec_obj12) { come_call_finalizer(CVALUE_finalize,__dec_obj12, (void*)0, (void*)0, 0, 0, 0, 0); }
                self->tail->next=litem_16;
                self->tail=litem_16;
            }
        }
        self->len++;
        __result17__ = __result_obj__ = self;
        if(item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result17__;
        if(item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional27;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional27=self!=((void*)0)&&self->item!=((void*)0),                _if_conditional27) {
                    if(self->item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
}

int sStrNode_sline(struct sStrNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result19__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result19__ = self->sline;
    return __result19__;
}

char* sStrNode_sname(struct sStrNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value23;
char* __result20__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value23, 0, sizeof(void*));
    __result20__ = __result_obj__ = ((char*)(right_value23=__builtin_string(self->sname)));
    return __result20__;
}

struct sSStringNode* sSStringNode_initialize(struct sSStringNode* self, char* value, struct list$1sNodeph* exps, int sline, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value24;
char* __dec_obj13;
void* right_value32;
struct list$1sNodeph* __dec_obj17;
void* right_value33;
char* __dec_obj18;
struct sSStringNode* __result27__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value24, 0, sizeof(void*));
memset(&right_value32, 0, sizeof(void*));
memset(&right_value33, 0, sizeof(void*));
    __dec_obj13=self->value;
    self->value=(char*)come_increment_ref_count(((char*)(right_value24=__builtin_string(value))));
    if(__dec_obj13) { __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value24);
    if(right_value24 && right_value24 != __result_obj__ && !__freed_obj__) { right_value24 = come_decrement_ref_count(right_value24, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value24;
    __freed_obj__ = 0;
    __dec_obj17=self->exps;
    self->exps=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value32=list$1sNodephp_clone(exps))));
    if(__dec_obj17) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj17, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value32);
    if(right_value32 && right_value32 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value32, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value32;
    __freed_obj__ = 0;
    self->sline=sline;
    __dec_obj18=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value33=__builtin_string(info->sname))));
    if(__dec_obj18) { __dec_obj18 = come_decrement_ref_count(__dec_obj18, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value33);
    if(right_value33 && right_value33 != __result_obj__ && !__freed_obj__) { right_value33 = come_decrement_ref_count(right_value33, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value33;
    __freed_obj__ = 0;
    __result27__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sSStringNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(value && !__freed_obj__) { value = come_decrement_ref_count(value, (void*)0, (void*)0, 0, 1, 0); }
    if(exps && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,exps, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result27__;
    if(self && !__freed_obj__) { come_call_finalizer(sSStringNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(value && !__freed_obj__) { value = come_decrement_ref_count(value, (void*)0, (void*)0, 0, 1, 0); }
    if(exps && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,exps, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional29;
struct list$1sNodeph* __result21__;
void* right_value25;
void* right_value26;
struct list$1sNodeph* result_17;
struct list_item$1sNodeph* it_18;
_Bool _while_condtional5;
void* right_value31;
struct list$1sNodeph* __result26__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value25, 0, sizeof(void*));
memset(&right_value26, 0, sizeof(void*));
memset(&result_17, 0, sizeof(struct list$1sNodeph*));
memset(&it_18, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value31, 0, sizeof(void*));
        if(_if_conditional29=self==((void*)0),        _if_conditional29) {
            __result21__ = __result_obj__ = ((void*)0);
            return __result21__;
        }
        result_17=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value26=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value25=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 199))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value25);
        if(right_value25 && right_value25 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value25, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value25;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value26);
        if(right_value26 && right_value26 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value26, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value26;
        __freed_obj__ = 0;
        it_18=self->head;
        while(_while_condtional5=it_18!=((void*)0),        _while_condtional5) {
            list$1sNodeph_add(result_17,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value31=sNode_clone(it_18->item)))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value31);
            if(right_value31 && right_value31 != __result_obj__ && !__freed_obj__) { right_value31 = come_decrement_ref_count(right_value31, ((struct sNode*)right_value31)->finalize, ((struct sNode*)right_value31)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[0] = right_value31;
            __freed_obj__ = 0;
            it_18=it_18->next;
        }
        __result26__ = __result_obj__ = result_17;
        if(result_17 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,result_17, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result26__;
        if(result_17 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,result_17, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1sNodeph* __result22__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            __result22__ = __result_obj__ = self;
            if(self && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            return __result22__;
            if(self && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
char* __caller_sname_stack__;
int __caller_sline_stack__;
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
struct list$1sNodeph* __result23__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value27, 0, sizeof(void*));
memset(&litem_19, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value28, 0, sizeof(void*));
memset(&litem_20, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value29, 0, sizeof(void*));
memset(&litem_21, 0, sizeof(struct list_item$1sNodeph*));
                if(_if_conditional30=self->len==0,                _if_conditional30) {
                    litem_19=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value27=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 213))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value27);
                    if(right_value27 && right_value27 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value27, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value27;
                    __freed_obj__ = 0;
                    litem_19->prev=((void*)0);
                    litem_19->next=((void*)0);
                    __dec_obj14=litem_19->item;
                    litem_19->item=(struct sNode*)come_increment_ref_count(item);
                    if(__dec_obj14) { __dec_obj14 = come_decrement_ref_count(__dec_obj14, ((struct sNode*)__dec_obj14)->finalize, ((struct sNode*)__dec_obj14)->_protocol_obj, 0,0,0); }
                    self->tail=litem_19;
                    self->head=litem_19;
                }
                else {
                    if(_if_conditional31=self->len==1,                    _if_conditional31) {
                        litem_20=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value28=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 223))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value28);
                        if(right_value28 && right_value28 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value28, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value28;
                        __freed_obj__ = 0;
                        litem_20->prev=self->head;
                        litem_20->next=((void*)0);
                        __dec_obj15=litem_20->item;
                        litem_20->item=(struct sNode*)come_increment_ref_count(item);
                        if(__dec_obj15) { __dec_obj15 = come_decrement_ref_count(__dec_obj15, ((struct sNode*)__dec_obj15)->finalize, ((struct sNode*)__dec_obj15)->_protocol_obj, 0,0,0); }
                        self->tail=litem_20;
                        self->head->next=litem_20;
                    }
                    else {
                        litem_21=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value29=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 233))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value29);
                        if(right_value29 && right_value29 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value29, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value29;
                        __freed_obj__ = 0;
                        litem_21->prev=self->tail;
                        litem_21->next=((void*)0);
                        __dec_obj16=litem_21->item;
                        litem_21->item=(struct sNode*)come_increment_ref_count(item);
                        if(__dec_obj16) { __dec_obj16 = come_decrement_ref_count(__dec_obj16, ((struct sNode*)__dec_obj16)->finalize, ((struct sNode*)__dec_obj16)->_protocol_obj, 0,0,0); }
                        self->tail->next=litem_21;
                        self->tail=litem_21;
                    }
                }
                self->len++;
                __result23__ = __result_obj__ = self;
                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
                return __result23__;
                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional32;
struct sNode* __result24__;
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
struct sNode* __result25__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value30, 0, sizeof(void*));
memset(&result_22, 0, sizeof(struct sNode*));
                if(_if_conditional32=self==(void*)0,                _if_conditional32) {
                    __result24__ = __result_obj__ = (void*)0;
                    return __result24__;
                }
                result_22=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value30=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value30);
                if(right_value30 && right_value30 != __result_obj__ && !__freed_obj__) { right_value30 = come_decrement_ref_count(right_value30, ((struct sNode*)right_value30)->finalize, ((struct sNode*)right_value30)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[0] = right_value30;
                __freed_obj__ = 0;
                if(_if_conditional33=self!=((void*)0)&&self->clone!=((void*)0),                _if_conditional33) {
                    result_22->_protocol_obj=self->clone(self->_protocol_obj);
                }
                if(_if_conditional34=self!=((void*)0),                _if_conditional34) {
                    result_22->finalize=self->finalize;
                }
                if(_if_conditional35=self!=((void*)0),                _if_conditional35) {
                    result_22->clone=self->clone;
                }
                if(_if_conditional36=self!=((void*)0),                _if_conditional36) {
                    result_22->compile=self->compile;
                }
                if(_if_conditional37=self!=((void*)0),                _if_conditional37) {
                    result_22->sline=self->sline;
                }
                if(_if_conditional38=self!=((void*)0),                _if_conditional38) {
                    result_22->sname=self->sname;
                }
                if(_if_conditional39=self!=((void*)0),                _if_conditional39) {
                    result_22->terminated=self->terminated;
                }
                if(_if_conditional40=self!=((void*)0),                _if_conditional40) {
                    result_22->kind=self->kind;
                }
                __result25__ = __result_obj__ = result_22;
                if(result_22 && !__freed_obj__) { result_22 = come_decrement_ref_count(result_22, ((struct sNode*)result_22)->finalize, ((struct sNode*)result_22)->_protocol_obj, 0, 1, 0); } 
                return __result25__;
                if(result_22 && !__freed_obj__) { result_22 = come_decrement_ref_count(result_22, ((struct sNode*)result_22)->finalize, ((struct sNode*)result_22)->_protocol_obj, 0, 0, 0); } 
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

_Bool sSStringNode_terminated(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result28__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result28__ = (_Bool)0;
    return __result28__;
}

char* sSStringNode_kind(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value34;
char* __result29__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value34, 0, sizeof(void*));
    __result29__ = __result_obj__ = ((char*)(right_value34=__builtin_string("sSStringNode")));
    return __result29__;
}

_Bool sSStringNode_compile(struct sSStringNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
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
_Bool __result38__;
void* right_value38;
struct CVALUE* come_value_31;
void* right_value39;
char* method_name_32;
_Bool _if_conditional55;
struct sType* obj_type_36;
_Bool _if_conditional56;
struct sType* obj_type2_37;
void* right_value41;
void* right_value42;
char* __dec_obj19;
void* right_value43;
void* right_value44;
struct buffer* buf2_38;
void* right_value45;
void* right_value46;
struct sType* type_39;
void* right_value47;
void* right_value48;
char* c_value_40;
void* right_value49;
void* right_value50;
struct sType* type2_41;
void* right_value51;
char* __dec_obj20;
void* right_value52;
char* __dec_obj21;
void* right_value80;
struct sType* __dec_obj41;
_Bool __result58__;
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
memset(&obj_type_36, 0, sizeof(struct sType*));
memset(&obj_type2_37, 0, sizeof(struct sType*));
memset(&right_value41, 0, sizeof(void*));
memset(&right_value42, 0, sizeof(void*));
memset(&right_value43, 0, sizeof(void*));
memset(&right_value44, 0, sizeof(void*));
memset(&buf2_38, 0, sizeof(struct buffer*));
memset(&right_value45, 0, sizeof(void*));
memset(&right_value46, 0, sizeof(void*));
memset(&type_39, 0, sizeof(struct sType*));
memset(&right_value47, 0, sizeof(void*));
memset(&right_value48, 0, sizeof(void*));
memset(&c_value_40, 0, sizeof(char*));
memset(&right_value49, 0, sizeof(void*));
memset(&right_value50, 0, sizeof(void*));
memset(&type2_41, 0, sizeof(struct sType*));
memset(&right_value51, 0, sizeof(void*));
memset(&right_value52, 0, sizeof(void*));
memset(&right_value80, 0, sizeof(void*));
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
    buffer_append_str(buf_24,"xsprintf(\"");
    buffer_append_str(buf_24,self->value);
    buffer_append_str(buf_24,"\"");
    if(_if_conditional44=list$1sNodeph_length(self->exps)>0,    _if_conditional44) {
        for(
        o2_saved_25=(struct list$1sNodeph*)come_increment_ref_count((self->exps)),it_28=list$1sNodeph_begin((o2_saved_25)) ,        0;        _for_condtionalA1=        !list$1sNodeph_end((o2_saved_25)) ,        _for_condtionalA1;        it_28=list$1sNodeph_next((o2_saved_25)) ,        0        ){
            if(_if_conditional49=!node_compile(it_28,info),            _if_conditional49) {
                __result38__ = (_Bool)0;
                if(o2_saved_25 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,o2_saved_25, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(come_value_23 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_23, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(buf_24 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_24, (void*)0, (void*)0, 0, 0, 0, 0); }
                return __result38__;
            }
            come_value_31=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value38=get_value_from_stack(-1,info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value38);
            if(right_value38 && right_value38 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value38, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value38;
            __freed_obj__ = 0;
            dec_stack_ptr(1,info);
            method_name_32=(char*)come_increment_ref_count(((char*)(right_value39=create_method_name(come_value_31->type,(_Bool)0,"to_string",info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value39);
            if(right_value39 && right_value39 != __result_obj__ && !__freed_obj__) { right_value39 = come_decrement_ref_count(right_value39, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value39;
            __freed_obj__ = 0;
            if(_if_conditional55=map$2charphsFunph_at(info->funcs,method_name_32,((void*)0))==((void*)0),            _if_conditional55) {
                obj_type_36=come_value_31->type->mNoSolvedGenericsType->v1;
                if(_if_conditional56=obj_type_36&&list$1sTypeph_length(obj_type_36->mGenericsTypes)>0,                _if_conditional56) {
                    obj_type2_37=come_value_31->type;
                    __dec_obj19=method_name_32;
                    method_name_32=(char*)come_increment_ref_count(((char*)(right_value42=make_generics_function(obj_type2_37,(char*)come_increment_ref_count(((char*)(right_value41=__builtin_string("to_string")))),info))));
                    if(__dec_obj19) { __dec_obj19 = come_decrement_ref_count(__dec_obj19, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value41);
                    if(right_value41 && right_value41 != __result_obj__ && !__freed_obj__) { right_value41 = come_decrement_ref_count(right_value41, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value41;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value42);
                    if(right_value42 && right_value42 != __result_obj__ && !__freed_obj__) { right_value42 = come_decrement_ref_count(right_value42, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value42;
                    __freed_obj__ = 0;
                }
                else {
                    err_msg(info,"require to_string implementation(%s)",come_value_31->type->mClass->mName);
                    exit(1);
                }
            }
            buf2_38=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value44=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value43=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 140))))))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value43);
            if(right_value43 && right_value43 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value43, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value43;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value44);
            if(right_value44 && right_value44 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value44, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[3] = right_value44;
            __freed_obj__ = 0;
            buffer_append_str(buf2_38,method_name_32);
            buffer_append_str(buf2_38,"(");
            buffer_append_str(buf2_38,come_value_31->c_value);
            buffer_append_str(buf2_38,")");
            type_39=(struct sType*)come_increment_ref_count(((struct sType*)(right_value46=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value45=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 147)))),"char*",(_Bool)0,info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value45);
            if(right_value45 && right_value45 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value45, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[4] = right_value45;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value46);
            if(right_value46 && right_value46 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value46, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[5] = right_value46;
            __freed_obj__ = 0;
            type_39->mHeap=(_Bool)1;
            c_value_40=(char*)come_increment_ref_count(((char*)(right_value48=append_object_to_right_values(((char*)(right_value47=buffer_to_string(buf2_38))),(struct sType*)come_increment_ref_count(type_39),info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value47);
            if(right_value47 && right_value47 != __result_obj__ && !__freed_obj__) { right_value47 = come_decrement_ref_count(right_value47, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[6] = right_value47;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value48);
            if(right_value48 && right_value48 != __result_obj__ && !__freed_obj__) { right_value48 = come_decrement_ref_count(right_value48, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[7] = right_value48;
            __freed_obj__ = 0;
            buffer_append_str(buf_24,",");
            buffer_append_str(buf_24,c_value_40);
            if(come_value_31 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_31, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(method_name_32 && !__freed_obj__) { method_name_32 = come_decrement_ref_count(method_name_32, (void*)0, (void*)0, 0, 0, 0); }
            if(buf2_38 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf2_38, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(type_39 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_39, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(c_value_40 && !__freed_obj__) { c_value_40 = come_decrement_ref_count(c_value_40, (void*)0, (void*)0, 0, 0, 0); }
        }
        if(o2_saved_25 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,o2_saved_25, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    buffer_append_str(buf_24,")");
    type2_41=(struct sType*)come_increment_ref_count(((struct sType*)(right_value50=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value49=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 159)))),"char*",(_Bool)0,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value49);
    if(right_value49 && right_value49 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value49, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value49;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value50);
    if(right_value50 && right_value50 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value50, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value50;
    __freed_obj__ = 0;
    type2_41->mHeap=(_Bool)1;
    __dec_obj20=come_value_23->c_value;
    come_value_23->c_value=(char*)come_increment_ref_count(((char*)(right_value51=buffer_to_string(buf_24))));
    if(__dec_obj20) { __dec_obj20 = come_decrement_ref_count(__dec_obj20, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value51);
    if(right_value51 && right_value51 != __result_obj__ && !__freed_obj__) { right_value51 = come_decrement_ref_count(right_value51, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[5] = right_value51;
    __freed_obj__ = 0;
    __dec_obj21=come_value_23->c_value;
    come_value_23->c_value=(char*)come_increment_ref_count(((char*)(right_value52=append_object_to_right_values(come_value_23->c_value,(struct sType*)come_increment_ref_count(type2_41),info))));
    if(__dec_obj21) { __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value52);
    if(right_value52 && right_value52 != __result_obj__ && !__freed_obj__) { right_value52 = come_decrement_ref_count(right_value52, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[6] = right_value52;
    __freed_obj__ = 0;
    __dec_obj41=come_value_23->type;
    come_value_23->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value80=sType_clone(type2_41))));
    if(__dec_obj41) { come_call_finalizer(sType_finalize,__dec_obj41, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value80);
    if(right_value80 && right_value80 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value80, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[7] = right_value80;
    __freed_obj__ = 0;
    come_value_23->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_23));
    add_come_last_code(info,"%s;\n",come_value_23->c_value);
    __result58__ = (_Bool)1;
    if(come_value_23 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_23, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(buf_24 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_24, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type2_41 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_41, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result58__;
    if(come_value_23 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_23, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(buf_24 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_24, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type2_41 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_41, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result30__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __result30__ = self->len;
        return __result30__;
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional45;
struct sNode* result_26;
struct sNode* __result31__;
_Bool _if_conditional46;
struct sNode* __result32__;
struct sNode* result_27;
struct sNode* __result33__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_26, 0, sizeof(struct sNode*));
memset(&result_27, 0, sizeof(struct sNode*));
            if(_if_conditional45=self==((void*)0),            _if_conditional45) {
                memset(&result_26,0,sizeof(struct sNode*));
                __result31__ = __result_obj__ = result_26;
                return __result31__;
            }
            self->it=self->head;
            if(_if_conditional46=self->it,            _if_conditional46) {
                __result32__ = __result_obj__ = self->it->item;
                return __result32__;
            }
            memset(&result_27,0,sizeof(struct sNode*));
            __result33__ = __result_obj__ = result_27;
            return __result33__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result34__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            __result34__ = self==((void*)0)||self->it==((void*)0);
            return __result34__;
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional47;
struct sNode* result_29;
struct sNode* __result35__;
_Bool _if_conditional48;
struct sNode* __result36__;
struct sNode* result_30;
struct sNode* __result37__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_29, 0, sizeof(struct sNode*));
memset(&result_30, 0, sizeof(struct sNode*));
            if(_if_conditional47=self==((void*)0)||self->it==((void*)0),            _if_conditional47) {
                memset(&result_29,0,sizeof(struct sNode*));
                __result35__ = __result_obj__ = result_29;
                return __result35__;
            }
            self->it=self->it->next;
            if(_if_conditional48=self->it,            _if_conditional48) {
                __result36__ = __result_obj__ = self->it->item;
                return __result36__;
            }
            memset(&result_30,0,sizeof(struct sNode*));
            __result37__ = __result_obj__ = result_30;
            return __result37__;
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int hash_33;
unsigned int it_34;
_Bool _while_condtional6;
_Bool _if_conditional50;
void* right_value40;
_Bool _if_conditional52;
struct sFun* __result41__;
_Bool _if_conditional53;
_Bool _if_conditional54;
struct sFun* __result42__;
struct sFun* __result43__;
struct sFun* __result44__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_33, 0, sizeof(unsigned int));
memset(&it_34, 0, sizeof(unsigned int));
memset(&right_value40, 0, sizeof(void*));
                hash_33=string_get_hash_key(((char*)key))%self->size;
                it_34=hash_33;
                while(_while_condtional6=(_Bool)1,                _while_condtional6) {
                    if(_if_conditional50=self->item_existance[it_34],                    _if_conditional50) {
                        if(_if_conditional52=optional$2boolbool_value(((struct optional$2boolbool*)(right_value40=string_equals(self->keys[it_34],key)))),                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value40),
                        (right_value40 && right_value40 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value40, (void*)0, (void*)0, 0, 1, 0, 0):0,
                        __right_value_freed_obj[0] = right_value40, 
                        __freed_obj__ = 0, 
                        _if_conditional52) {
                            __result41__ = __result_obj__ = self->items[it_34];
                            return __result41__;
                        }
                        it_34++;
                        if(_if_conditional53=it_34>=self->size,                        _if_conditional53) {
                            it_34=0;
                        }
                        else {
                            if(_if_conditional54=it_34==hash_33,                            _if_conditional54) {
                                __result42__ = __result_obj__ = default_value;
                                return __result42__;
                            }
                        }
                    }
                    else {
                        __result43__ = __result_obj__ = default_value;
                        return __result43__;
                    }
                }
                __result44__ = __result_obj__ = default_value;
                return __result44__;
}

static _Bool optional$2boolbool_value(struct optional$2boolbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional51;
_Bool default_value_35;
_Bool __result39__;
_Bool __result40__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_35, 0, sizeof(_Bool));
                            if(_if_conditional51=self==((void*)0),                            _if_conditional51) {
                                memset(&default_value_35,0,sizeof(_Bool));
                                __result39__ = default_value_35;
                                return __result39__;
                            }
                            else {
                                __result40__ = self->v1;
                                return __result40__;
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

static int list$1sTypeph_length(struct list$1sTypeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result45__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    __result45__ = self->len;
                    return __result45__;
}

static struct sType* sType_clone(struct sType* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional57;
struct sType* __result46__;
void* right_value53;
struct sType* result_42;
_Bool _if_conditional58;
_Bool _if_conditional59;
void* right_value56;
struct tuple1$1sTypeph* __dec_obj23;
_Bool _if_conditional63;
void* right_value57;
struct tuple1$1sTypeph* __dec_obj24;
_Bool _if_conditional64;
void* right_value58;
char* __dec_obj25;
_Bool _if_conditional65;
void* right_value65;
struct list$1sTypeph* __dec_obj29;
_Bool _if_conditional69;
void* right_value66;
struct list$1sNodeph* __dec_obj30;
_Bool _if_conditional70;
_Bool _if_conditional71;
void* right_value67;
struct list$1sTypeph* __dec_obj31;
_Bool _if_conditional72;
void* right_value74;
struct list$1charph* __dec_obj35;
_Bool _if_conditional76;
void* right_value75;
struct tuple1$1sTypeph* __dec_obj36;
_Bool _if_conditional77;
_Bool _if_conditional78;
void* right_value76;
struct sNode* __dec_obj37;
_Bool _if_conditional79;
_Bool _if_conditional80;
_Bool _if_conditional81;
_Bool _if_conditional82;
_Bool _if_conditional83;
_Bool _if_conditional84;
_Bool _if_conditional85;
_Bool _if_conditional86;
_Bool _if_conditional87;
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
void* right_value77;
struct sNode* __dec_obj38;
_Bool _if_conditional103;
_Bool _if_conditional104;
_Bool _if_conditional105;
void* right_value78;
char* __dec_obj39;
_Bool _if_conditional106;
_Bool _if_conditional107;
_Bool _if_conditional108;
_Bool _if_conditional109;
_Bool _if_conditional110;
_Bool _if_conditional111;
_Bool _if_conditional112;
_Bool _if_conditional113;
_Bool _if_conditional114;
void* right_value79;
char* __dec_obj40;
struct sType* __result57__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value53, 0, sizeof(void*));
memset(&result_42, 0, sizeof(struct sType*));
memset(&right_value56, 0, sizeof(void*));
memset(&right_value57, 0, sizeof(void*));
memset(&right_value58, 0, sizeof(void*));
memset(&right_value65, 0, sizeof(void*));
memset(&right_value66, 0, sizeof(void*));
memset(&right_value67, 0, sizeof(void*));
memset(&right_value74, 0, sizeof(void*));
memset(&right_value75, 0, sizeof(void*));
memset(&right_value76, 0, sizeof(void*));
memset(&right_value77, 0, sizeof(void*));
memset(&right_value78, 0, sizeof(void*));
memset(&right_value79, 0, sizeof(void*));
        if(_if_conditional57=self==(void*)0,        _if_conditional57) {
            __result46__ = __result_obj__ = (void*)0;
            return __result46__;
        }
        result_42=(struct sType*)come_increment_ref_count(((struct sType*)(right_value53=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value53);
        if(right_value53 && right_value53 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value53, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value53;
        __freed_obj__ = 0;
        if(_if_conditional58=self!=((void*)0),        _if_conditional58) {
            result_42->mClass=self->mClass;
        }
        if(_if_conditional59=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),        _if_conditional59) {
            __dec_obj23=result_42->mNoSolvedGenericsType;
            result_42->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value56=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
            if(__dec_obj23) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj23, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value56);
            if(right_value56 && right_value56 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value56, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value56;
            __freed_obj__ = 0;
        }
        if(_if_conditional63=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),        _if_conditional63) {
            __dec_obj24=result_42->mOriginalLoadVarType;
            result_42->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value57=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
            if(__dec_obj24) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj24, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value57);
            if(right_value57 && right_value57 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value57, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value57;
            __freed_obj__ = 0;
        }
        if(_if_conditional64=self!=((void*)0)&&self->mGenericsName!=((void*)0),        _if_conditional64) {
            __dec_obj25=result_42->mGenericsName;
            result_42->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value58=string_clone(self->mGenericsName))));
            if(__dec_obj25) { __dec_obj25 = come_decrement_ref_count(__dec_obj25, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value58);
            if(right_value58 && right_value58 != __result_obj__ && !__freed_obj__) { right_value58 = come_decrement_ref_count(right_value58, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value58;
            __freed_obj__ = 0;
        }
        if(_if_conditional65=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),        _if_conditional65) {
            __dec_obj29=result_42->mGenericsTypes;
            result_42->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value65=list$1sTypephp_clone(self->mGenericsTypes))));
            if(__dec_obj29) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj29, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value65);
            if(right_value65 && right_value65 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value65, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value65;
            __freed_obj__ = 0;
        }
        if(_if_conditional69=self!=((void*)0)&&self->mArrayNum!=((void*)0),        _if_conditional69) {
            __dec_obj30=result_42->mArrayNum;
            result_42->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value66=list$1sNodephp_clone(self->mArrayNum))));
            if(__dec_obj30) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj30, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value66);
            if(right_value66 && right_value66 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value66, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value66;
            __freed_obj__ = 0;
        }
        if(_if_conditional70=self!=((void*)0),        _if_conditional70) {
            result_42->mOmitArrayNum=self->mOmitArrayNum;
        }
        if(_if_conditional71=self!=((void*)0)&&self->mParamTypes!=((void*)0),        _if_conditional71) {
            __dec_obj31=result_42->mParamTypes;
            result_42->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value67=list$1sTypephp_clone(self->mParamTypes))));
            if(__dec_obj31) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj31, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value67);
            if(right_value67 && right_value67 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value67, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value67;
            __freed_obj__ = 0;
        }
        if(_if_conditional72=self!=((void*)0)&&self->mParamNames!=((void*)0),        _if_conditional72) {
            __dec_obj35=result_42->mParamNames;
            result_42->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value74=list$1charphp_clone(self->mParamNames))));
            if(__dec_obj35) { come_call_finalizer(list$1charph_finalize,__dec_obj35, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value74);
            if(right_value74 && right_value74 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value74, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value74;
            __freed_obj__ = 0;
        }
        if(_if_conditional76=self!=((void*)0)&&self->mResultType!=((void*)0),        _if_conditional76) {
            __dec_obj36=result_42->mResultType;
            result_42->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value75=tuple1$1sTypephp_clone(self->mResultType))));
            if(__dec_obj36) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj36, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value75);
            if(right_value75 && right_value75 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value75;
            __freed_obj__ = 0;
        }
        if(_if_conditional77=self!=((void*)0),        _if_conditional77) {
            result_42->mVarArgs=self->mVarArgs;
        }
        if(_if_conditional78=self!=((void*)0)&&self->mAlignas!=((void*)0),        _if_conditional78) {
            __dec_obj37=result_42->mAlignas;
            result_42->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value76=sNode_clone(self->mAlignas))));
            if(__dec_obj37) { __dec_obj37 = come_decrement_ref_count(__dec_obj37, ((struct sNode*)__dec_obj37)->finalize, ((struct sNode*)__dec_obj37)->_protocol_obj, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value76);
            if(right_value76 && right_value76 != __result_obj__ && !__freed_obj__) { right_value76 = come_decrement_ref_count(right_value76, ((struct sNode*)right_value76)->finalize, ((struct sNode*)right_value76)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[0] = right_value76;
            __freed_obj__ = 0;
        }
        if(_if_conditional79=self!=((void*)0),        _if_conditional79) {
            result_42->mUnsigned=self->mUnsigned;
        }
        if(_if_conditional80=self!=((void*)0),        _if_conditional80) {
            result_42->mShort=self->mShort;
        }
        if(_if_conditional81=self!=((void*)0),        _if_conditional81) {
            result_42->mLong=self->mLong;
        }
        if(_if_conditional82=self!=((void*)0),        _if_conditional82) {
            result_42->mLongLong=self->mLongLong;
        }
        if(_if_conditional83=self!=((void*)0),        _if_conditional83) {
            result_42->mConstant=self->mConstant;
        }
        if(_if_conditional84=self!=((void*)0),        _if_conditional84) {
            result_42->mRegister=self->mRegister;
        }
        if(_if_conditional85=self!=((void*)0),        _if_conditional85) {
            result_42->mVolatile=self->mVolatile;
        }
        if(_if_conditional86=self!=((void*)0),        _if_conditional86) {
            result_42->mStatic=self->mStatic;
        }
        if(_if_conditional87=self!=((void*)0),        _if_conditional87) {
            result_42->mExtern=self->mExtern;
        }
        if(_if_conditional88=self!=((void*)0),        _if_conditional88) {
            result_42->mRestrict=self->mRestrict;
        }
        if(_if_conditional89=self!=((void*)0),        _if_conditional89) {
            result_42->mImmutable=self->mImmutable;
        }
        if(_if_conditional90=self!=((void*)0),        _if_conditional90) {
            result_42->mHeap=self->mHeap;
        }
        if(_if_conditional91=self!=((void*)0),        _if_conditional91) {
            result_42->mDummyHeap=self->mDummyHeap;
        }
        if(_if_conditional92=self!=((void*)0),        _if_conditional92) {
            result_42->mDelegate=self->mDelegate;
        }
        if(_if_conditional93=self!=((void*)0),        _if_conditional93) {
            result_42->mShare=self->mShare;
        }
        if(_if_conditional94=self!=((void*)0),        _if_conditional94) {
            result_42->mClone=self->mClone;
        }
        if(_if_conditional95=self!=((void*)0),        _if_conditional95) {
            result_42->mNoHeap=self->mNoHeap;
        }
        if(_if_conditional96=self!=((void*)0),        _if_conditional96) {
            result_42->mNoCallingDestructor=self->mNoCallingDestructor;
        }
        if(_if_conditional97=self!=((void*)0),        _if_conditional97) {
            result_42->mRefference=self->mRefference;
        }
        if(_if_conditional98=self!=((void*)0),        _if_conditional98) {
            result_42->mException=self->mException;
        }
        if(_if_conditional99=self!=((void*)0),        _if_conditional99) {
            result_42->mPointerNum=self->mPointerNum;
        }
        if(_if_conditional100=self!=((void*)0),        _if_conditional100) {
            result_42->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
        }
        if(_if_conditional101=self!=((void*)0),        _if_conditional101) {
            result_42->mNoArrayPointerNum=self->mNoArrayPointerNum;
        }
        if(_if_conditional102=self!=((void*)0)&&self->mSizeNum!=((void*)0),        _if_conditional102) {
            __dec_obj38=result_42->mSizeNum;
            result_42->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value77=sNode_clone(self->mSizeNum))));
            if(__dec_obj38) { __dec_obj38 = come_decrement_ref_count(__dec_obj38, ((struct sNode*)__dec_obj38)->finalize, ((struct sNode*)__dec_obj38)->_protocol_obj, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value77);
            if(right_value77 && right_value77 != __result_obj__ && !__freed_obj__) { right_value77 = come_decrement_ref_count(right_value77, ((struct sNode*)right_value77)->finalize, ((struct sNode*)right_value77)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[0] = right_value77;
            __freed_obj__ = 0;
        }
        if(_if_conditional103=self!=((void*)0),        _if_conditional103) {
            result_42->mDynamicArrayNum=self->mDynamicArrayNum;
        }
        if(_if_conditional104=self!=((void*)0),        _if_conditional104) {
            result_42->mTypeOfExpression=self->mTypeOfExpression;
        }
        if(_if_conditional105=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),        _if_conditional105) {
            __dec_obj39=result_42->mOriginalTypeName;
            result_42->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value78=string_clone(self->mOriginalTypeName))));
            if(__dec_obj39) { __dec_obj39 = come_decrement_ref_count(__dec_obj39, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value78);
            if(right_value78 && right_value78 != __result_obj__ && !__freed_obj__) { right_value78 = come_decrement_ref_count(right_value78, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value78;
            __freed_obj__ = 0;
        }
        if(_if_conditional106=self!=((void*)0),        _if_conditional106) {
            result_42->mOriginalPointerNum=self->mOriginalPointerNum;
        }
        if(_if_conditional107=self!=((void*)0),        _if_conditional107) {
            result_42->mFunctionParam=self->mFunctionParam;
        }
        if(_if_conditional108=self!=((void*)0),        _if_conditional108) {
            result_42->mAllocaValue=self->mAllocaValue;
        }
        if(_if_conditional109=self!=((void*)0),        _if_conditional109) {
            result_42->mGenericsStruct=self->mGenericsStruct;
        }
        if(_if_conditional110=self!=((void*)0),        _if_conditional110) {
            result_42->mSolvedGenericsName=self->mSolvedGenericsName;
        }
        if(_if_conditional111=self!=((void*)0),        _if_conditional111) {
            result_42->mComeMemCore=self->mComeMemCore;
        }
        if(_if_conditional112=self!=((void*)0),        _if_conditional112) {
            result_42->mInline=self->mInline;
        }
        if(_if_conditional113=self!=((void*)0),        _if_conditional113) {
            result_42->mNullValue=self->mNullValue;
        }
        if(_if_conditional114=self!=((void*)0)&&self->mAsmName!=((void*)0),        _if_conditional114) {
            __dec_obj40=result_42->mAsmName;
            result_42->mAsmName=(char*)come_increment_ref_count(((char*)(right_value79=string_clone(self->mAsmName))));
            if(__dec_obj40) { __dec_obj40 = come_decrement_ref_count(__dec_obj40, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value79);
            if(right_value79 && right_value79 != __result_obj__ && !__freed_obj__) { right_value79 = come_decrement_ref_count(right_value79, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value79;
            __freed_obj__ = 0;
        }
        __result57__ = __result_obj__ = result_42;
        if(result_42 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_42, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result57__;
        if(result_42 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_42, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional60;
struct tuple1$1sTypeph* __result47__;
void* right_value54;
struct tuple1$1sTypeph* result_43;
_Bool _if_conditional62;
void* right_value55;
struct sType* __dec_obj22;
struct tuple1$1sTypeph* __result48__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value54, 0, sizeof(void*));
memset(&result_43, 0, sizeof(struct tuple1$1sTypeph*));
memset(&right_value55, 0, sizeof(void*));
                if(_if_conditional60=self==(void*)0,                _if_conditional60) {
                    __result47__ = __result_obj__ = (void*)0;
                    return __result47__;
                }
                result_43=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value54=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value54);
                if(right_value54 && right_value54 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,right_value54, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value54;
                __freed_obj__ = 0;
                if(_if_conditional62=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional62) {
                    __dec_obj22=result_43->v1;
                    result_43->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value55=sType_clone(self->v1))));
                    if(__dec_obj22) { come_call_finalizer(sType_finalize,__dec_obj22, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value55);
                    if(right_value55 && right_value55 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value55, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value55;
                    __freed_obj__ = 0;
                }
                __result48__ = __result_obj__ = result_43;
                if(result_43 && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,result_43, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result48__;
                if(result_43 && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,result_43, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional61;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional61=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional61) {
                        if(self->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional66;
struct list$1sTypeph* __result49__;
void* right_value59;
void* right_value60;
struct list$1sTypeph* result_44;
struct list_item$1sTypeph* it_45;
_Bool _while_condtional7;
void* right_value64;
struct list$1sTypeph* __result52__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value59, 0, sizeof(void*));
memset(&right_value60, 0, sizeof(void*));
memset(&result_44, 0, sizeof(struct list$1sTypeph*));
memset(&it_45, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value64, 0, sizeof(void*));
                if(_if_conditional66=self==((void*)0),                _if_conditional66) {
                    __result49__ = __result_obj__ = ((void*)0);
                    return __result49__;
                }
                result_44=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value60=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value59=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 199))))))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value59);
                if(right_value59 && right_value59 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value59, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value59;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value60);
                if(right_value60 && right_value60 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value60, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value60;
                __freed_obj__ = 0;
                it_45=self->head;
                while(_while_condtional7=it_45!=((void*)0),                _while_condtional7) {
                    list$1sTypeph_add(result_44,(struct sType*)come_increment_ref_count(((struct sType*)(right_value64=sType_clone(it_45->item)))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value64);
                    if(right_value64 && right_value64 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value64, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value64;
                    __freed_obj__ = 0;
                    it_45=it_45->next;
                }
                __result52__ = __result_obj__ = result_44;
                if(result_44 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,result_44, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result52__;
                if(result_44 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,result_44, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1sTypeph* __result50__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    __result50__ = __result_obj__ = self;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result50__;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional67;
void* right_value61;
struct list_item$1sTypeph* litem_46;
struct sType* __dec_obj26;
_Bool _if_conditional68;
void* right_value62;
struct list_item$1sTypeph* litem_47;
struct sType* __dec_obj27;
void* right_value63;
struct list_item$1sTypeph* litem_48;
struct sType* __dec_obj28;
struct list$1sTypeph* __result51__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value61, 0, sizeof(void*));
memset(&litem_46, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value62, 0, sizeof(void*));
memset(&litem_47, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value63, 0, sizeof(void*));
memset(&litem_48, 0, sizeof(struct list_item$1sTypeph*));
                        if(_if_conditional67=self->len==0,                        _if_conditional67) {
                            litem_46=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value61=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 213))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value61);
                            if(right_value61 && right_value61 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value61, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value61;
                            __freed_obj__ = 0;
                            litem_46->prev=((void*)0);
                            litem_46->next=((void*)0);
                            __dec_obj26=litem_46->item;
                            litem_46->item=(struct sType*)come_increment_ref_count(item);
                            if(__dec_obj26) { come_call_finalizer(sType_finalize,__dec_obj26, (void*)0, (void*)0, 0, 0, 0, 0); }
                            self->tail=litem_46;
                            self->head=litem_46;
                        }
                        else {
                            if(_if_conditional68=self->len==1,                            _if_conditional68) {
                                litem_47=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value62=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 223))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value62);
                                if(right_value62 && right_value62 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value62, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value62;
                                __freed_obj__ = 0;
                                litem_47->prev=self->head;
                                litem_47->next=((void*)0);
                                __dec_obj27=litem_47->item;
                                litem_47->item=(struct sType*)come_increment_ref_count(item);
                                if(__dec_obj27) { come_call_finalizer(sType_finalize,__dec_obj27, (void*)0, (void*)0, 0, 0, 0, 0); }
                                self->tail=litem_47;
                                self->head->next=litem_47;
                            }
                            else {
                                litem_48=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value63=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 233))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value63);
                                if(right_value63 && right_value63 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value63, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value63;
                                __freed_obj__ = 0;
                                litem_48->prev=self->tail;
                                litem_48->next=((void*)0);
                                __dec_obj28=litem_48->item;
                                litem_48->item=(struct sType*)come_increment_ref_count(item);
                                if(__dec_obj28) { come_call_finalizer(sType_finalize,__dec_obj28, (void*)0, (void*)0, 0, 0, 0, 0); }
                                self->tail->next=litem_48;
                                self->tail=litem_48;
                            }
                        }
                        self->len++;
                        __result51__ = __result_obj__ = self;
                        if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result51__;
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

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional73;
struct list$1charph* __result53__;
void* right_value68;
void* right_value69;
struct list$1charph* result_49;
struct list_item$1charph* it_50;
_Bool _while_condtional8;
void* right_value73;
struct list$1charph* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value68, 0, sizeof(void*));
memset(&right_value69, 0, sizeof(void*));
memset(&result_49, 0, sizeof(struct list$1charph*));
memset(&it_50, 0, sizeof(struct list_item$1charph*));
memset(&right_value73, 0, sizeof(void*));
                if(_if_conditional73=self==((void*)0),                _if_conditional73) {
                    __result53__ = __result_obj__ = ((void*)0);
                    return __result53__;
                }
                result_49=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value69=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value68=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 199))))))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value68);
                if(right_value68 && right_value68 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value68, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value68;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value69);
                if(right_value69 && right_value69 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value69, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value69;
                __freed_obj__ = 0;
                it_50=self->head;
                while(_while_condtional8=it_50!=((void*)0),                _while_condtional8) {
                    list$1charph_add(result_49,(char*)come_increment_ref_count(((char*)(right_value73=string_clone(it_50->item)))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value73);
                    if(right_value73 && right_value73 != __result_obj__ && !__freed_obj__) { right_value73 = come_decrement_ref_count(right_value73, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value73;
                    __freed_obj__ = 0;
                    it_50=it_50->next;
                }
                __result56__ = __result_obj__ = result_49;
                if(result_49 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_49, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result56__;
                if(result_49 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_49, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1charph* __result54__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    __result54__ = __result_obj__ = self;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result54__;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional74;
void* right_value70;
struct list_item$1charph* litem_51;
char* __dec_obj32;
_Bool _if_conditional75;
void* right_value71;
struct list_item$1charph* litem_52;
char* __dec_obj33;
void* right_value72;
struct list_item$1charph* litem_53;
char* __dec_obj34;
struct list$1charph* __result55__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value70, 0, sizeof(void*));
memset(&litem_51, 0, sizeof(struct list_item$1charph*));
memset(&right_value71, 0, sizeof(void*));
memset(&litem_52, 0, sizeof(struct list_item$1charph*));
memset(&right_value72, 0, sizeof(void*));
memset(&litem_53, 0, sizeof(struct list_item$1charph*));
                        if(_if_conditional74=self->len==0,                        _if_conditional74) {
                            litem_51=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value70=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 213))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value70);
                            if(right_value70 && right_value70 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value70, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value70;
                            __freed_obj__ = 0;
                            litem_51->prev=((void*)0);
                            litem_51->next=((void*)0);
                            __dec_obj32=litem_51->item;
                            litem_51->item=(char*)come_increment_ref_count(item);
                            if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count(__dec_obj32, (void*)0, (void*)0, 0,0,0); }
                            self->tail=litem_51;
                            self->head=litem_51;
                        }
                        else {
                            if(_if_conditional75=self->len==1,                            _if_conditional75) {
                                litem_52=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value71=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 223))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value71);
                                if(right_value71 && right_value71 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value71, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value71;
                                __freed_obj__ = 0;
                                litem_52->prev=self->head;
                                litem_52->next=((void*)0);
                                __dec_obj33=litem_52->item;
                                litem_52->item=(char*)come_increment_ref_count(item);
                                if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count(__dec_obj33, (void*)0, (void*)0, 0,0,0); }
                                self->tail=litem_52;
                                self->head->next=litem_52;
                            }
                            else {
                                litem_53=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value72=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 233))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value72);
                                if(right_value72 && right_value72 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value72, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value72;
                                __freed_obj__ = 0;
                                litem_53->prev=self->tail;
                                litem_53->next=((void*)0);
                                __dec_obj34=litem_53->item;
                                litem_53->item=(char*)come_increment_ref_count(item);
                                if(__dec_obj34) { __dec_obj34 = come_decrement_ref_count(__dec_obj34, (void*)0, (void*)0, 0,0,0); }
                                self->tail->next=litem_53;
                                self->tail=litem_53;
                            }
                        }
                        self->len++;
                        __result55__ = __result_obj__ = self;
                        if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
                        return __result55__;
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

int sSStringNode_sline(struct sSStringNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result59__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result59__ = self->sline;
    return __result59__;
}

char* sSStringNode_sname(struct sSStringNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value81;
char* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value81, 0, sizeof(void*));
    __result60__ = __result_obj__ = ((char*)(right_value81=__builtin_string(self->sname)));
    return __result60__;
}

struct sCharNode* sCharNode_initialize(struct sCharNode* self, int value, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value82;
char* __dec_obj42;
struct sCharNode* __result61__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value82, 0, sizeof(void*));
    self->value=value;
    self->sline=info->sline;
    __dec_obj42=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value82=__builtin_string(info->sname))));
    if(__dec_obj42) { __dec_obj42 = come_decrement_ref_count(__dec_obj42, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value82);
    if(right_value82 && right_value82 != __result_obj__ && !__freed_obj__) { right_value82 = come_decrement_ref_count(right_value82, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value82;
    __freed_obj__ = 0;
    __result61__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sCharNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result61__;
    if(self && !__freed_obj__) { come_call_finalizer(sCharNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

_Bool sCharNode_terminated(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result62__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result62__ = (_Bool)0;
    return __result62__;
}

char* sCharNode_kind(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value83;
char* __result63__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value83, 0, sizeof(void*));
    __result63__ = __result_obj__ = ((char*)(right_value83=__builtin_string("sCharNode")));
    return __result63__;
}

_Bool sCharNode_compile(struct sCharNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value84;
struct CVALUE* come_value_54;
void* right_value85;
char* __dec_obj43;
void* right_value86;
void* right_value87;
struct sType* __dec_obj44;
_Bool __result64__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value84, 0, sizeof(void*));
memset(&come_value_54, 0, sizeof(struct CVALUE*));
memset(&right_value85, 0, sizeof(void*));
memset(&right_value86, 0, sizeof(void*));
memset(&right_value87, 0, sizeof(void*));
    come_value_54=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value84=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 213))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value84);
    if(right_value84 && right_value84 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value84, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value84;
    __freed_obj__ = 0;
    __dec_obj43=come_value_54->c_value;
    come_value_54->c_value=(char*)come_increment_ref_count(((char*)(right_value85=xsprintf("%d",self->value))));
    if(__dec_obj43) { __dec_obj43 = come_decrement_ref_count(__dec_obj43, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value85);
    if(right_value85 && right_value85 != __result_obj__ && !__freed_obj__) { right_value85 = come_decrement_ref_count(right_value85, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value85;
    __freed_obj__ = 0;
    __dec_obj44=come_value_54->type;
    come_value_54->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value87=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value86=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 216)))),"char",(_Bool)0,info))));
    if(__dec_obj44) { come_call_finalizer(sType_finalize,__dec_obj44, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value86);
    if(right_value86 && right_value86 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value86, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value86;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value87);
    if(right_value87 && right_value87 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value87, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value87;
    __freed_obj__ = 0;
    come_value_54->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_54));
    add_come_last_code(info,"%s;\n",come_value_54->c_value);
    __result64__ = (_Bool)1;
    if(come_value_54 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_54, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result64__;
    if(come_value_54 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_54, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sCharNode_sline(struct sCharNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result65__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result65__ = self->sline;
    return __result65__;
}

char* sCharNode_sname(struct sCharNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value88;
char* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value88, 0, sizeof(void*));
    __result66__ = __result_obj__ = ((char*)(right_value88=__builtin_string(self->sname)));
    return __result66__;
}

struct sWCharNode* sWCharNode_initialize(struct sWCharNode* self, unsigned int value, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value89;
char* __dec_obj45;
struct sWCharNode* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value89, 0, sizeof(void*));
    self->value=value;
    self->sline=info->sline;
    __dec_obj45=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value89=__builtin_string(info->sname))));
    if(__dec_obj45) { __dec_obj45 = come_decrement_ref_count(__dec_obj45, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value89);
    if(right_value89 && right_value89 != __result_obj__ && !__freed_obj__) { right_value89 = come_decrement_ref_count(right_value89, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value89;
    __freed_obj__ = 0;
    __result67__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sWCharNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result67__;
    if(self && !__freed_obj__) { come_call_finalizer(sWCharNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

_Bool sWCharNode_terminated(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result68__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result68__ = (_Bool)0;
    return __result68__;
}

char* sWCharNode_kind(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value90;
char* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value90, 0, sizeof(void*));
    __result69__ = __result_obj__ = ((char*)(right_value90=__builtin_string("sWCharNode")));
    return __result69__;
}

_Bool sWCharNode_compile(struct sWCharNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value91;
struct CVALUE* come_value_55;
void* right_value92;
char* __dec_obj46;
void* right_value93;
void* right_value94;
struct sType* __dec_obj47;
_Bool __result70__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value91, 0, sizeof(void*));
memset(&come_value_55, 0, sizeof(struct CVALUE*));
memset(&right_value92, 0, sizeof(void*));
memset(&right_value93, 0, sizeof(void*));
memset(&right_value94, 0, sizeof(void*));
    come_value_55=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value91=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 265))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value91);
    if(right_value91 && right_value91 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value91;
    __freed_obj__ = 0;
    __dec_obj46=come_value_55->c_value;
    come_value_55->c_value=(char*)come_increment_ref_count(((char*)(right_value92=xsprintf("L'%lc'",self->value))));
    if(__dec_obj46) { __dec_obj46 = come_decrement_ref_count(__dec_obj46, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value92);
    if(right_value92 && right_value92 != __result_obj__ && !__freed_obj__) { right_value92 = come_decrement_ref_count(right_value92, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value92;
    __freed_obj__ = 0;
    __dec_obj47=come_value_55->type;
    come_value_55->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value94=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value93=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 268)))),"wchar_t",(_Bool)0,info))));
    if(__dec_obj47) { come_call_finalizer(sType_finalize,__dec_obj47, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value93);
    if(right_value93 && right_value93 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value93, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value93;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value94);
    if(right_value94 && right_value94 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value94, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value94;
    __freed_obj__ = 0;
    come_value_55->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_55));
    add_come_last_code(info,"%s;\n",come_value_55->c_value);
    __result70__ = (_Bool)1;
    if(come_value_55 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_55, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result70__;
    if(come_value_55 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_55, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sWCharNode_sline(struct sWCharNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result71__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result71__ = self->sline;
    return __result71__;
}

char* sWCharNode_sname(struct sWCharNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value95;
char* __result72__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value95, 0, sizeof(void*));
    __result72__ = __result_obj__ = ((char*)(right_value95=__builtin_string(self->sname)));
    return __result72__;
}

struct sWStringNode* sWStringNode_initialize(struct sWStringNode* self, unsigned int* value, int sline, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int* __dec_obj48;
void* right_value96;
char* __dec_obj49;
struct sWStringNode* __result73__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value96, 0, sizeof(void*));
    __dec_obj48=self->value;
    self->value=(unsigned int*)come_increment_ref_count(value);
    if(__dec_obj48) { __dec_obj48 = come_decrement_ref_count(__dec_obj48, (void*)0, (void*)0, 0,0,0); }
    self->sline=sline;
    __dec_obj49=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value96=__builtin_string(info->sname))));
    if(__dec_obj49) { __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value96);
    if(right_value96 && right_value96 != __result_obj__ && !__freed_obj__) { right_value96 = come_decrement_ref_count(right_value96, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value96;
    __freed_obj__ = 0;
    __result73__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sWStringNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(value && !__freed_obj__) { value = come_decrement_ref_count(value, (void*)0, (void*)0, 0, 1, 0); }
    return __result73__;
    if(self && !__freed_obj__) { come_call_finalizer(sWStringNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(value && !__freed_obj__) { value = come_decrement_ref_count(value, (void*)0, (void*)0, 0, 1, 0); }
}

_Bool sWStringNode_terminated(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result74__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result74__ = (_Bool)0;
    return __result74__;
}

char* sWStringNode_kind(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value97;
char* __result75__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value97, 0, sizeof(void*));
    __result75__ = __result_obj__ = ((char*)(right_value97=__builtin_string("sWStringNode")));
    return __result75__;
}

_Bool sWStringNode_compile(struct sWStringNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value98;
struct CVALUE* come_value_56;
void* right_value99;
char* __dec_obj50;
void* right_value100;
void* right_value101;
struct sType* __dec_obj51;
_Bool __result76__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value98, 0, sizeof(void*));
memset(&come_value_56, 0, sizeof(struct CVALUE*));
memset(&right_value99, 0, sizeof(void*));
memset(&right_value100, 0, sizeof(void*));
memset(&right_value101, 0, sizeof(void*));
    come_value_56=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value98=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 317))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value98);
    if(right_value98 && right_value98 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value98, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value98;
    __freed_obj__ = 0;
    __dec_obj50=come_value_56->c_value;
    come_value_56->c_value=(char*)come_increment_ref_count(((char*)(right_value99=xsprintf("L'%ls'",self->value))));
    if(__dec_obj50) { __dec_obj50 = come_decrement_ref_count(__dec_obj50, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value99);
    if(right_value99 && right_value99 != __result_obj__ && !__freed_obj__) { right_value99 = come_decrement_ref_count(right_value99, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value99;
    __freed_obj__ = 0;
    __dec_obj51=come_value_56->type;
    come_value_56->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value101=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value100=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 320)))),"wchar_t*",(_Bool)0,info))));
    if(__dec_obj51) { come_call_finalizer(sType_finalize,__dec_obj51, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value100);
    if(right_value100 && right_value100 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value100, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value100;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value101);
    if(right_value101 && right_value101 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value101, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value101;
    __freed_obj__ = 0;
    come_value_56->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_56));
    add_come_last_code(info,"%s;\n",come_value_56->c_value);
    __result76__ = (_Bool)1;
    if(come_value_56 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_56, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result76__;
    if(come_value_56 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_56, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sWStringNode_sline(struct sWStringNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result77__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result77__ = self->sline;
    return __result77__;
}

char* sWStringNode_sname(struct sWStringNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value102;
char* __result78__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value102, 0, sizeof(void*));
    __result78__ = __result_obj__ = ((char*)(right_value102=__builtin_string(self->sname)));
    return __result78__;
}

struct sRegexNode* sRegexNode_initialize(struct sRegexNode* self, char* str, _Bool global, _Bool ignore_case, int sline, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value103;
char* __dec_obj52;
void* right_value104;
char* __dec_obj53;
struct sRegexNode* __result79__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value103, 0, sizeof(void*));
memset(&right_value104, 0, sizeof(void*));
    __dec_obj52=self->str;
    self->str=(char*)come_increment_ref_count(((char*)(right_value103=__builtin_string(str))));
    if(__dec_obj52) { __dec_obj52 = come_decrement_ref_count(__dec_obj52, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value103);
    if(right_value103 && right_value103 != __result_obj__ && !__freed_obj__) { right_value103 = come_decrement_ref_count(right_value103, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value103;
    __freed_obj__ = 0;
    self->global=global;
    self->ignore_case=ignore_case;
    self->sline=sline;
    __dec_obj53=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value104=__builtin_string(info->sname))));
    if(__dec_obj53) { __dec_obj53 = come_decrement_ref_count(__dec_obj53, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value104);
    if(right_value104 && right_value104 != __result_obj__ && !__freed_obj__) { right_value104 = come_decrement_ref_count(right_value104, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value104;
    __freed_obj__ = 0;
    __result79__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sRegexNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(str && !__freed_obj__) { str = come_decrement_ref_count(str, (void*)0, (void*)0, 0, 1, 0); }
    return __result79__;
    if(self && !__freed_obj__) { come_call_finalizer(sRegexNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(str && !__freed_obj__) { str = come_decrement_ref_count(str, (void*)0, (void*)0, 0, 1, 0); }
}

_Bool sRegexNode_terminated(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result80__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result80__ = (_Bool)0;
    return __result80__;
}

char* sRegexNode_kind(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value105;
char* __result81__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value105, 0, sizeof(void*));
    __result81__ = __result_obj__ = ((char*)(right_value105=__builtin_string("sRegexNode")));
    return __result81__;
}

_Bool sRegexNode_compile(struct sRegexNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value106;
struct CVALUE* come_value_57;
void* right_value107;
void* right_value108;
void* right_value109;
void* right_value110;
void* right_value111;
char* __dec_obj54;
void* right_value112;
void* right_value113;
struct sType* __dec_obj55;
void* right_value114;
char* __dec_obj56;
_Bool __result82__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value106, 0, sizeof(void*));
memset(&come_value_57, 0, sizeof(struct CVALUE*));
memset(&right_value107, 0, sizeof(void*));
memset(&right_value108, 0, sizeof(void*));
memset(&right_value109, 0, sizeof(void*));
memset(&right_value110, 0, sizeof(void*));
memset(&right_value111, 0, sizeof(void*));
memset(&right_value112, 0, sizeof(void*));
memset(&right_value113, 0, sizeof(void*));
memset(&right_value114, 0, sizeof(void*));
    come_value_57=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value106=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 374))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value106);
    if(right_value106 && right_value106 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value106, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value106;
    __freed_obj__ = 0;
    __dec_obj54=come_value_57->c_value;
    come_value_57->c_value=(char*)come_increment_ref_count(((char*)(right_value111=xsprintf("charp_to_regex(\"%s\", %s, 0, %s, 0, 0, 0, 0, 0)",self->str,self->ignore_case?((char*)(right_value107=__builtin_string("1"))):((char*)(right_value108=__builtin_string("0"))),self->global?((char*)(right_value109=__builtin_string("1"))):((char*)(right_value110=__builtin_string("0")))))));
    if(__dec_obj54) { __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value107);
    if(right_value107 && right_value107 != __result_obj__ && !__freed_obj__) { right_value107 = come_decrement_ref_count(right_value107, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value107;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value108);
    if(right_value108 && right_value108 != __result_obj__ && !__freed_obj__) { right_value108 = come_decrement_ref_count(right_value108, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value108;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value109);
    if(right_value109 && right_value109 != __result_obj__ && !__freed_obj__) { right_value109 = come_decrement_ref_count(right_value109, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value109;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value110);
    if(right_value110 && right_value110 != __result_obj__ && !__freed_obj__) { right_value110 = come_decrement_ref_count(right_value110, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value110;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value111);
    if(right_value111 && right_value111 != __result_obj__ && !__freed_obj__) { right_value111 = come_decrement_ref_count(right_value111, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[5] = right_value111;
    __freed_obj__ = 0;
    __dec_obj55=come_value_57->type;
    come_value_57->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value113=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value112=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 377)))),"come_regex",(_Bool)0,info))));
    if(__dec_obj55) { come_call_finalizer(sType_finalize,__dec_obj55, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value112);
    if(right_value112 && right_value112 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value112, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[6] = right_value112;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value113);
    if(right_value113 && right_value113 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value113, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[7] = right_value113;
    __freed_obj__ = 0;
    come_value_57->type->mPointerNum=1;
    come_value_57->type->mHeap=(_Bool)1;
    come_value_57->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_57));
    add_come_last_code(info,"%s;\n",come_value_57->c_value);
    __dec_obj56=come_value_57->c_value;
    come_value_57->c_value=(char*)come_increment_ref_count(((char*)(right_value114=append_object_to_right_values(come_value_57->c_value,(struct sType*)come_increment_ref_count(come_value_57->type),info))));
    if(__dec_obj56) { __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value114);
    if(right_value114 && right_value114 != __result_obj__ && !__freed_obj__) { right_value114 = come_decrement_ref_count(right_value114, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[8] = right_value114;
    __freed_obj__ = 0;
    __result82__ = (_Bool)1;
    if(come_value_57 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_57, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result82__;
    if(come_value_57 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_57, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sRegexNode_sline(struct sRegexNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result83__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result83__ = self->sline;
    return __result83__;
}

char* sRegexNode_sname(struct sRegexNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value115;
char* __result84__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value115, 0, sizeof(void*));
    __result84__ = __result_obj__ = ((char*)(right_value115=__builtin_string(self->sname)));
    return __result84__;
}

struct sListNode* sListNode_initialize(struct sListNode* self, struct list$1sNodeph* list_elements, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1sNodeph* __dec_obj57;
void* right_value116;
char* __dec_obj58;
struct sListNode* __result85__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value116, 0, sizeof(void*));
    __dec_obj57=self->list_elements;
    self->list_elements=(struct list$1sNodeph*)come_increment_ref_count(list_elements);
    if(__dec_obj57) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj57, (void*)0, (void*)0, 0, 0, 0, 0); }
    self->sline=info->sline;
    __dec_obj58=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value116=__builtin_string(info->sname))));
    if(__dec_obj58) { __dec_obj58 = come_decrement_ref_count(__dec_obj58, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value116);
    if(right_value116 && right_value116 != __result_obj__ && !__freed_obj__) { right_value116 = come_decrement_ref_count(right_value116, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value116;
    __freed_obj__ = 0;
    __result85__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sListNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(list_elements && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,list_elements, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result85__;
    if(self && !__freed_obj__) { come_call_finalizer(sListNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(list_elements && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,list_elements, (void*)0, (void*)0, 0, 0, 1, 0); }
}

_Bool sListNode_terminated(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result86__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result86__ = (_Bool)0;
    return __result86__;
}

char* sListNode_kind(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value117;
char* __result87__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value117, 0, sizeof(void*));
    __result87__ = __result_obj__ = ((char*)(right_value117=__builtin_string("sListNode")));
    return __result87__;
}

_Bool sListNode_compile(struct sListNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1sNodeph* list_elements_58;
void* right_value118;
void* right_value119;
struct list$1CVALUEph* params_61;
struct sType* list_element_type_62;
struct list$1sNodeph* o2_saved_63;
struct sNode* it_64;
_Bool _for_condtionalA2;
_Bool _if_conditional123;
_Bool __result89__;
void* right_value120;
struct CVALUE* come_value_65;
void* right_value121;
struct sType* __dec_obj59;
void* right_value122;
struct sType* type_values_66;
void* right_value126;
static int list_value_num_70=0;
void* right_value127;
char* var_name_71;
void* right_value128;
struct sVar* var__72;
void* right_value129;
void* right_value130;
void* right_value131;
struct buffer* source_74;
int i_75;
struct list$1CVALUEph* o2_saved_76;
struct CVALUE* it_79;
_Bool _for_condtionalA3;
_Bool _if_conditional132;
void* right_value136;
void* right_value137;
void* right_value138;
void* right_value139;
void* right_value140;
void* right_value141;
void* right_value142;
struct sType* list_type_86;
void* right_value146;
void* right_value147;
struct sType* obj_type_90;
char* fun_name_91;
void* right_value148;
void* right_value149;
void* right_value150;
char* generics_fun_name_92;
struct sFun* fun_93;
_Bool _if_conditional139;
void* right_value151;
void* right_value152;
char* __dec_obj67;
_Bool _if_conditional140;
_Bool __result107__;
void* right_value153;
struct sType* result_type_94;
struct sType* type_95;
void* right_value154;
struct CVALUE* obj_value_96;
void* right_value155;
void* right_value156;
struct buffer* num_string_97;
void* right_value157;
struct sType* type2_98;
void* right_value158;
char* type_name_99;
void* right_value159;
void* right_value160;
char* __dec_obj68;
void* right_value161;
struct sType* type3_100;
void* right_value162;
struct sType* __dec_obj69;
void* right_value163;
char* __dec_obj70;
void* right_value164;
void* right_value165;
struct list$1CVALUEph* come_params_101;
void* right_value170;
_Bool _if_conditional146;
void* right_value171;
void* right_value172;
struct CVALUE* come_value2_106;
void* right_value173;
char* __dec_obj72;
struct sType* __dec_obj73;
void* right_value174;
struct CVALUE* come_value3_107;
void* right_value175;
char* __dec_obj74;
struct sType* __dec_obj75;
void* right_value176;
void* right_value177;
struct buffer* buf_108;
int j_109;
struct list$1CVALUEph* o2_saved_110;
struct CVALUE* it_111;
_Bool _for_condtionalA4;
_Bool _if_conditional147;
void* right_value178;
struct CVALUE* come_value4_112;
void* right_value179;
char* __dec_obj76;
_Bool _if_conditional148;
void* right_value180;
void* right_value181;
char* __dec_obj77;
void* right_value182;
struct sType* __dec_obj78;
void* right_value183;
_Bool __result114__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&list_elements_58, 0, sizeof(struct list$1sNodeph*));
memset(&right_value118, 0, sizeof(void*));
memset(&right_value119, 0, sizeof(void*));
memset(&params_61, 0, sizeof(struct list$1CVALUEph*));
memset(&list_element_type_62, 0, sizeof(struct sType*));
memset(&o2_saved_63, 0, sizeof(struct list$1sNodeph*));
memset(&it_64, 0, sizeof(struct sNode*));
memset(&right_value120, 0, sizeof(void*));
memset(&come_value_65, 0, sizeof(struct CVALUE*));
memset(&right_value121, 0, sizeof(void*));
memset(&right_value122, 0, sizeof(void*));
memset(&type_values_66, 0, sizeof(struct sType*));
memset(&right_value126, 0, sizeof(void*));
memset(&right_value127, 0, sizeof(void*));
memset(&var_name_71, 0, sizeof(char*));
memset(&right_value128, 0, sizeof(void*));
memset(&var__72, 0, sizeof(struct sVar*));
memset(&right_value129, 0, sizeof(void*));
memset(&right_value130, 0, sizeof(void*));
memset(&right_value131, 0, sizeof(void*));
memset(&source_74, 0, sizeof(struct buffer*));
memset(&i_75, 0, sizeof(int));
memset(&o2_saved_76, 0, sizeof(struct list$1CVALUEph*));
memset(&it_79, 0, sizeof(struct CVALUE*));
memset(&right_value136, 0, sizeof(void*));
memset(&right_value137, 0, sizeof(void*));
memset(&right_value138, 0, sizeof(void*));
memset(&right_value139, 0, sizeof(void*));
memset(&right_value140, 0, sizeof(void*));
memset(&right_value141, 0, sizeof(void*));
memset(&right_value142, 0, sizeof(void*));
memset(&list_type_86, 0, sizeof(struct sType*));
memset(&right_value146, 0, sizeof(void*));
memset(&right_value147, 0, sizeof(void*));
memset(&obj_type_90, 0, sizeof(struct sType*));
memset(&fun_name_91, 0, sizeof(char*));
memset(&right_value148, 0, sizeof(void*));
memset(&right_value149, 0, sizeof(void*));
memset(&right_value150, 0, sizeof(void*));
memset(&generics_fun_name_92, 0, sizeof(char*));
memset(&fun_93, 0, sizeof(struct sFun*));
memset(&right_value151, 0, sizeof(void*));
memset(&right_value152, 0, sizeof(void*));
memset(&right_value153, 0, sizeof(void*));
memset(&result_type_94, 0, sizeof(struct sType*));
memset(&type_95, 0, sizeof(struct sType*));
memset(&right_value154, 0, sizeof(void*));
memset(&obj_value_96, 0, sizeof(struct CVALUE*));
memset(&right_value155, 0, sizeof(void*));
memset(&right_value156, 0, sizeof(void*));
memset(&num_string_97, 0, sizeof(struct buffer*));
memset(&right_value157, 0, sizeof(void*));
memset(&type2_98, 0, sizeof(struct sType*));
memset(&right_value158, 0, sizeof(void*));
memset(&type_name_99, 0, sizeof(char*));
memset(&right_value159, 0, sizeof(void*));
memset(&right_value160, 0, sizeof(void*));
memset(&right_value161, 0, sizeof(void*));
memset(&type3_100, 0, sizeof(struct sType*));
memset(&right_value162, 0, sizeof(void*));
memset(&right_value163, 0, sizeof(void*));
memset(&right_value164, 0, sizeof(void*));
memset(&right_value165, 0, sizeof(void*));
memset(&come_params_101, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value170, 0, sizeof(void*));
memset(&right_value171, 0, sizeof(void*));
memset(&right_value172, 0, sizeof(void*));
memset(&come_value2_106, 0, sizeof(struct CVALUE*));
memset(&right_value173, 0, sizeof(void*));
memset(&right_value174, 0, sizeof(void*));
memset(&come_value3_107, 0, sizeof(struct CVALUE*));
memset(&right_value175, 0, sizeof(void*));
memset(&right_value176, 0, sizeof(void*));
memset(&right_value177, 0, sizeof(void*));
memset(&buf_108, 0, sizeof(struct buffer*));
memset(&j_109, 0, sizeof(int));
memset(&o2_saved_110, 0, sizeof(struct list$1CVALUEph*));
memset(&it_111, 0, sizeof(struct CVALUE*));
memset(&right_value178, 0, sizeof(void*));
memset(&come_value4_112, 0, sizeof(struct CVALUE*));
memset(&right_value179, 0, sizeof(void*));
memset(&right_value180, 0, sizeof(void*));
memset(&right_value181, 0, sizeof(void*));
memset(&right_value182, 0, sizeof(void*));
memset(&right_value183, 0, sizeof(void*));
    list_elements_58=self->list_elements;
    params_61=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value119=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value118=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 432))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value118);
    if(right_value118 && right_value118 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value118, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value118;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value119);
    if(right_value119 && right_value119 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value119, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value119;
    __freed_obj__ = 0;
    for(
    o2_saved_63=(list_elements_58),it_64=list$1sNodeph_begin((o2_saved_63)) ,    0;    _for_condtionalA2=    !list$1sNodeph_end((o2_saved_63)) ,    _for_condtionalA2;    it_64=list$1sNodeph_next((o2_saved_63)) ,    0    ){
        if(_if_conditional123=!node_compile(it_64,info),        _if_conditional123) {
            __result89__ = (_Bool)0;
            if(params_61 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,params_61, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(list_element_type_62 && !__freed_obj__) { come_call_finalizer(sType_finalize,list_element_type_62, (void*)0, (void*)0, 0, 0, 0, 0); }
            return __result89__;
        }
        come_value_65=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value120=get_value_from_stack(-1,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value120);
        if(right_value120 && right_value120 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value120, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value120;
        __freed_obj__ = 0;
        dec_stack_ptr(1,info);
        list$1CVALUEph_push_back(params_61,(struct CVALUE*)come_increment_ref_count(come_value_65));
        __dec_obj59=list_element_type_62;
        list_element_type_62=(struct sType*)come_increment_ref_count(((struct sType*)(right_value121=sType_clone(come_value_65->type))));
        if(__dec_obj59) { come_call_finalizer(sType_finalize,__dec_obj59, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value121);
        if(right_value121 && right_value121 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value121, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value121;
        __freed_obj__ = 0;
        if(come_value_65 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_65, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    type_values_66=(struct sType*)come_increment_ref_count(((struct sType*)(right_value122=sType_clone(list_element_type_62))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value122);
    if(right_value122 && right_value122 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value122, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value122;
    __freed_obj__ = 0;
    list$1sNodeph_push_back(type_values_66->mArrayNum,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value126=create_int_node(list$1CVALUEph_length(params_61),info)))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value126);
    if(right_value126 && right_value126 != __result_obj__ && !__freed_obj__) { right_value126 = come_decrement_ref_count(right_value126, ((struct sNode*)right_value126)->finalize, ((struct sNode*)right_value126)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[3] = right_value126;
    __freed_obj__ = 0;
    type_values_66->mHeap=(_Bool)0;
    var_name_71=(char*)come_increment_ref_count(((char*)(right_value127=xsprintf("__list_values%d__",++list_value_num_70))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value127);
    if(right_value127 && right_value127 != __result_obj__ && !__freed_obj__) { right_value127 = come_decrement_ref_count(right_value127, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value127;
    __freed_obj__ = 0;
    add_variable_to_table(var_name_71,(struct sType*)come_increment_ref_count(((struct sType*)(right_value128=sType_clone(type_values_66)))),info);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value128);
    if(right_value128 && right_value128 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value128, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[5] = right_value128;
    __freed_obj__ = 0;
    var__72=get_variable_from_table(info->lv_table,var_name_71);
    add_come_code_at_function_head(info,"%s;\n",optional$2charphbool_value(((struct optional$2charphbool*)(right_value129=make_define_var(type_values_66,var__72->mCValueName,(_Bool)0,info)))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value129);
    if(right_value129 && right_value129 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value129, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[6] = right_value129;
    __freed_obj__ = 0;
    source_74=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value131=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value130=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 461))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value130);
    if(right_value130 && right_value130 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value130, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[7] = right_value130;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value131);
    if(right_value131 && right_value131 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value131, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[8] = right_value131;
    __freed_obj__ = 0;
    buffer_append_str(source_74,"{");
    i_75=0;
    for(
    o2_saved_76=(struct list$1CVALUEph*)come_increment_ref_count((params_61)),it_79=list$1CVALUEph_begin((o2_saved_76)) ,    0;    _for_condtionalA3=    !list$1CVALUEph_end((o2_saved_76)) ,    _for_condtionalA3;    it_79=list$1CVALUEph_next((o2_saved_76)) ,    0    ){
        if(_if_conditional132=list_element_type_62->mHeap,        _if_conditional132) {
            buffer_append_str(source_74,((char*)(right_value137=xsprintf("%s[%d]=come_increment_ref_count(%s);\n",var__72->mCValueName,i_75,optional$2CVALUEphbool_value(((struct optional$2CVALUEphbool*)(right_value136=list$1CVALUEphp_operator_load_element(params_61,i_75))))->c_value))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value136);
            if(right_value136 && right_value136 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2CVALUEphboolp_finalize,right_value136, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value136;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value137);
            if(right_value137 && right_value137 != __result_obj__ && !__freed_obj__) { right_value137 = come_decrement_ref_count(right_value137, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value137;
            __freed_obj__ = 0;
        }
        else {
            buffer_append_str(source_74,((char*)(right_value139=xsprintf("%s[%d]=%s;\n",var__72->mCValueName,i_75,optional$2CVALUEphbool_value(((struct optional$2CVALUEphbool*)(right_value138=list$1CVALUEphp_operator_load_element(params_61,i_75))))->c_value))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value138);
            if(right_value138 && right_value138 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2CVALUEphboolp_finalize,right_value138, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value138;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value139);
            if(right_value139 && right_value139 != __result_obj__ && !__freed_obj__) { right_value139 = come_decrement_ref_count(right_value139, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value139;
            __freed_obj__ = 0;
        }
        i_75++;
    }
    if(o2_saved_76 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,o2_saved_76, (void*)0, (void*)0, 0, 0, 0, 0); }
    buffer_append_str(source_74,"}");
    add_come_code(info,"%s",((char*)(right_value140=buffer_to_string(source_74))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 9, right_value140);
    if(right_value140 && right_value140 != __result_obj__ && !__freed_obj__) { right_value140 = come_decrement_ref_count(right_value140, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[9] = right_value140;
    __freed_obj__ = 0;
    list_type_86=(struct sType*)come_increment_ref_count(((struct sType*)(right_value142=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value141=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 480)))),"list",(_Bool)0,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 10, right_value141);
    if(right_value141 && right_value141 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value141, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[10] = right_value141;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 11, right_value142);
    if(right_value142 && right_value142 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value142, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[11] = right_value142;
    __freed_obj__ = 0;
    list$1sTypeph_push_back(list_type_86->mGenericsTypes,(struct sType*)come_increment_ref_count(((struct sType*)(right_value146=sType_clone(list_element_type_62)))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 12, right_value146);
    if(right_value146 && right_value146 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value146, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[12] = right_value146;
    __freed_obj__ = 0;
    obj_type_90=(struct sType*)come_increment_ref_count(((struct sType*)(right_value147=sType_clone(list_type_86))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 13, right_value147);
    if(right_value147 && right_value147 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value147, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[13] = right_value147;
    __freed_obj__ = 0;
    fun_name_91="initialize_with_values";
    generics_fun_name_92=(char*)come_increment_ref_count(((char*)(right_value150=string_to_string(((char*)(right_value149=make_generics_function(obj_type_90,(char*)come_increment_ref_count(((char*)(right_value148=__builtin_string(fun_name_91)))),info)))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 14, right_value148);
    if(right_value148 && right_value148 != __result_obj__ && !__freed_obj__) { right_value148 = come_decrement_ref_count(right_value148, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[14] = right_value148;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 15, right_value149);
    if(right_value149 && right_value149 != __result_obj__ && !__freed_obj__) { right_value149 = come_decrement_ref_count(right_value149, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[15] = right_value149;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 16, right_value150);
    if(right_value150 && right_value150 != __result_obj__ && !__freed_obj__) { right_value150 = come_decrement_ref_count(right_value150, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[16] = right_value150;
    __freed_obj__ = 0;
    fun_93=map$2charphsFunph_at(info->funcs,generics_fun_name_92,((void*)0));
    if(_if_conditional139=fun_93==((void*)0),    _if_conditional139) {
        __dec_obj67=generics_fun_name_92;
        generics_fun_name_92=(char*)come_increment_ref_count(((char*)(right_value152=create_method_name(obj_type_90,(_Bool)0,((char*)(right_value151=__builtin_string(fun_name_91))),info))));
        if(__dec_obj67) { __dec_obj67 = come_decrement_ref_count(__dec_obj67, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value151);
        if(right_value151 && right_value151 != __result_obj__ && !__freed_obj__) { right_value151 = come_decrement_ref_count(right_value151, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value151;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value152);
        if(right_value152 && right_value152 != __result_obj__ && !__freed_obj__) { right_value152 = come_decrement_ref_count(right_value152, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value152;
        __freed_obj__ = 0;
        fun_93=map$2charphsFunph_at(info->funcs,generics_fun_name_92,((void*)0));
        if(_if_conditional140=fun_93==((void*)0),        _if_conditional140) {
            err_msg(info,"function not found(%s) at method(%s)(1)\n",generics_fun_name_92,info->come_fun->mName);
            __result107__ = (_Bool)1;
            if(params_61 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,params_61, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(list_element_type_62 && !__freed_obj__) { come_call_finalizer(sType_finalize,list_element_type_62, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(type_values_66 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_values_66, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(var_name_71 && !__freed_obj__) { var_name_71 = come_decrement_ref_count(var_name_71, (void*)0, (void*)0, 0, 0, 0); }
            if(source_74 && !__freed_obj__) { come_call_finalizer(buffer_finalize,source_74, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(list_type_86 && !__freed_obj__) { come_call_finalizer(sType_finalize,list_type_86, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(obj_type_90 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_90, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(generics_fun_name_92 && !__freed_obj__) { generics_fun_name_92 = come_decrement_ref_count(generics_fun_name_92, (void*)0, (void*)0, 0, 0, 0); }
            return __result107__;
        }
    }
    result_type_94=(struct sType*)come_increment_ref_count(((struct sType*)(right_value153=sType_clone(fun_93->mResultType))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 17, right_value153);
    if(right_value153 && right_value153 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value153, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[17] = right_value153;
    __freed_obj__ = 0;
    result_type_94->mStatic=(_Bool)0;
    type_95=list_type_86;
    obj_value_96=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value154=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 506))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 18, right_value154);
    if(right_value154 && right_value154 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value154, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[18] = right_value154;
    __freed_obj__ = 0;
    num_string_97=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value156=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value155=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 508))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 19, right_value155);
    if(right_value155 && right_value155 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value155, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[19] = right_value155;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 20, right_value156);
    if(right_value156 && right_value156 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value156, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[20] = right_value156;
    __freed_obj__ = 0;
    buffer_append_str(num_string_97,"1");
    type2_98=(struct sType*)come_increment_ref_count(((struct sType*)(right_value157=solve_generics(type_95,type_95,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 21, right_value157);
    if(right_value157 && right_value157 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value157, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[21] = right_value157;
    __freed_obj__ = 0;
    type_name_99=(char*)come_increment_ref_count(optional$2charphbool_expect(((struct optional$2charphbool*)(right_value158=make_type_name_string(type2_98,(_Bool)0,(_Bool)1,(_Bool)0,info)))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 22, right_value158);
    if(right_value158 && right_value158 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value158, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[22] = right_value158;
    __freed_obj__ = 0;
    __dec_obj68=obj_value_96->c_value;
    obj_value_96->c_value=(char*)come_increment_ref_count(((char*)(right_value160=xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d)",type_name_99,type_name_99,((char*)(right_value159=buffer_to_string(num_string_97))),info->sname,info->sline))));
    if(__dec_obj68) { __dec_obj68 = come_decrement_ref_count(__dec_obj68, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 23, right_value159);
    if(right_value159 && right_value159 != __result_obj__ && !__freed_obj__) { right_value159 = come_decrement_ref_count(right_value159, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[23] = right_value159;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 24, right_value160);
    if(right_value160 && right_value160 != __result_obj__ && !__freed_obj__) { right_value160 = come_decrement_ref_count(right_value160, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[24] = right_value160;
    __freed_obj__ = 0;
    type3_100=(struct sType*)come_increment_ref_count(((struct sType*)(right_value161=sType_clone(type2_98))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 25, right_value161);
    if(right_value161 && right_value161 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value161, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[25] = right_value161;
    __freed_obj__ = 0;
    type3_100->mPointerNum++;
    type3_100->mHeap=(_Bool)1;
    type2_98->mHeap=(_Bool)1;
    __dec_obj69=obj_value_96->type;
    obj_value_96->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value162=sType_clone(type2_98))));
    if(__dec_obj69) { come_call_finalizer(sType_finalize,__dec_obj69, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 26, right_value162);
    if(right_value162 && right_value162 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value162, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[26] = right_value162;
    __freed_obj__ = 0;
    __dec_obj70=obj_value_96->c_value;
    obj_value_96->c_value=(char*)come_increment_ref_count(((char*)(right_value163=append_object_to_right_values(obj_value_96->c_value,(struct sType*)come_increment_ref_count(type3_100),info))));
    if(__dec_obj70) { __dec_obj70 = come_decrement_ref_count(__dec_obj70, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 27, right_value163);
    if(right_value163 && right_value163 != __result_obj__ && !__freed_obj__) { right_value163 = come_decrement_ref_count(right_value163, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[27] = right_value163;
    __freed_obj__ = 0;
    obj_value_96->type->mPointerNum++;
    obj_value_96->var=((void*)0);
    come_params_101=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value165=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value164=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 527))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 28, right_value164);
    if(right_value164 && right_value164 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value164, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[28] = right_value164;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 29, right_value165);
    if(right_value165 && right_value165 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value165, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[29] = right_value165;
    __freed_obj__ = 0;
    if(_if_conditional146=optional$2sTypephbool_value(((struct optional$2sTypephbool*)(right_value170=list$1sTypephp_operator_load_element(fun_93->mParamTypes,0))))->mHeap&&obj_value_96->type->mHeap,    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 30, right_value170),
    (right_value170 && right_value170 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2sTypephboolp_finalize,right_value170, (void*)0, (void*)0, 0, 1, 0, 0):0,
    __right_value_freed_obj[30] = right_value170, 
    __freed_obj__ = 0, 
    _if_conditional146) {
        std_move(optional$2sTypephbool_value(((struct optional$2sTypephbool*)(right_value171=list$1sTypephp_operator_load_element(fun_93->mParamTypes,0)))),obj_value_96->type,obj_value_96,info);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value171);
        if(right_value171 && right_value171 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,right_value171, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value171;
        __freed_obj__ = 0;
    }
    list$1CVALUEph_push_back(come_params_101,(struct CVALUE*)come_increment_ref_count(obj_value_96));
    come_value2_106=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value172=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 534))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 31, right_value172);
    if(right_value172 && right_value172 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value172, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[31] = right_value172;
    __freed_obj__ = 0;
    __dec_obj72=come_value2_106->c_value;
    come_value2_106->c_value=(char*)come_increment_ref_count(((char*)(right_value173=xsprintf("%d",list$1CVALUEph_length(params_61)))));
    if(__dec_obj72) { __dec_obj72 = come_decrement_ref_count(__dec_obj72, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 32, right_value173);
    if(right_value173 && right_value173 != __result_obj__ && !__freed_obj__) { right_value173 = come_decrement_ref_count(right_value173, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[32] = right_value173;
    __freed_obj__ = 0;
    __dec_obj73=come_value2_106->type;
    come_value2_106->type=((void*)0);
    if(__dec_obj73) { come_call_finalizer(sType_finalize,__dec_obj73, (void*)0, (void*)0, 0, 0, 0, 0); }
    come_value2_106->var=((void*)0);
    list$1CVALUEph_push_back(come_params_101,(struct CVALUE*)come_increment_ref_count(come_value2_106));
    come_value3_107=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value174=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 542))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 33, right_value174);
    if(right_value174 && right_value174 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value174, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[33] = right_value174;
    __freed_obj__ = 0;
    __dec_obj74=come_value3_107->c_value;
    come_value3_107->c_value=(char*)come_increment_ref_count(((char*)(right_value175=xsprintf("%s",var__72->mCValueName))));
    if(__dec_obj74) { __dec_obj74 = come_decrement_ref_count(__dec_obj74, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 34, right_value175);
    if(right_value175 && right_value175 != __result_obj__ && !__freed_obj__) { right_value175 = come_decrement_ref_count(right_value175, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[34] = right_value175;
    __freed_obj__ = 0;
    __dec_obj75=come_value3_107->type;
    come_value3_107->type=((void*)0);
    if(__dec_obj75) { come_call_finalizer(sType_finalize,__dec_obj75, (void*)0, (void*)0, 0, 0, 0, 0); }
    come_value3_107->var=((void*)0);
    list$1CVALUEph_push_back(come_params_101,(struct CVALUE*)come_increment_ref_count(come_value3_107));
    buf_108=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value177=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value176=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 550))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 35, right_value176);
    if(right_value176 && right_value176 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value176, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[35] = right_value176;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 36, right_value177);
    if(right_value177 && right_value177 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value177, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[36] = right_value177;
    __freed_obj__ = 0;
    buffer_append_str(buf_108,generics_fun_name_92);
    buffer_append_str(buf_108,"(");
    j_109=0;
    for(
    o2_saved_110=(struct list$1CVALUEph*)come_increment_ref_count((come_params_101)),it_111=list$1CVALUEph_begin((o2_saved_110)) ,    0;    _for_condtionalA4=    !list$1CVALUEph_end((o2_saved_110)) ,    _for_condtionalA4;    it_111=list$1CVALUEph_next((o2_saved_110)) ,    0    ){
        buffer_append_str(buf_108,it_111->c_value);
        if(_if_conditional147=j_109!=list$1CVALUEph_length(come_params_101)-1,        _if_conditional147) {
            buffer_append_str(buf_108,",");
        }
        j_109++;
    }
    if(o2_saved_110 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,o2_saved_110, (void*)0, (void*)0, 0, 0, 0, 0); }
    buffer_append_str(buf_108,")");
    come_value4_112=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value178=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 567))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 37, right_value178);
    if(right_value178 && right_value178 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value178, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[37] = right_value178;
    __freed_obj__ = 0;
    __dec_obj76=come_value4_112->c_value;
    come_value4_112->c_value=(char*)come_increment_ref_count(((char*)(right_value179=buffer_to_string(buf_108))));
    if(__dec_obj76) { __dec_obj76 = come_decrement_ref_count(__dec_obj76, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 38, right_value179);
    if(right_value179 && right_value179 != __result_obj__ && !__freed_obj__) { right_value179 = come_decrement_ref_count(right_value179, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[38] = right_value179;
    __freed_obj__ = 0;
    if(_if_conditional148=result_type_94->mHeap,    _if_conditional148) {
        __dec_obj77=come_value4_112->c_value;
        come_value4_112->c_value=(char*)come_increment_ref_count(((char*)(right_value181=append_object_to_right_values(((char*)(right_value180=buffer_to_string(buf_108))),(struct sType*)come_increment_ref_count(result_type_94),info))));
        if(__dec_obj77) { __dec_obj77 = come_decrement_ref_count(__dec_obj77, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value180);
        if(right_value180 && right_value180 != __result_obj__ && !__freed_obj__) { right_value180 = come_decrement_ref_count(right_value180, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value180;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value181);
        if(right_value181 && right_value181 != __result_obj__ && !__freed_obj__) { right_value181 = come_decrement_ref_count(right_value181, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value181;
        __freed_obj__ = 0;
    }
    __dec_obj78=come_value4_112->type;
    come_value4_112->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value182=sType_clone(result_type_94))));
    if(__dec_obj78) { come_call_finalizer(sType_finalize,__dec_obj78, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 39, right_value182);
    if(right_value182 && right_value182 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value182, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[39] = right_value182;
    __freed_obj__ = 0;
    come_value4_112->type->mStatic=(_Bool)0;
    come_value4_112->var=((void*)0);
    add_come_last_code(info,"%s;\n",((char*)(right_value183=buffer_to_string(buf_108))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 40, right_value183);
    if(right_value183 && right_value183 != __result_obj__ && !__freed_obj__) { right_value183 = come_decrement_ref_count(right_value183, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[40] = right_value183;
    __freed_obj__ = 0;
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value4_112));
    __result114__ = (_Bool)1;
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
    return __result114__;
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
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1CVALUEph* __result88__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        __result88__ = __result_obj__ = self;
        if(self && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result88__;
        if(self && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
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
            it_59=self->head;
            while(_while_condtional9=it_59!=((void*)0),            _while_condtional9) {
                prev_it_60=it_59;
                it_59=it_59->next;
                if(prev_it_60 && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,prev_it_60, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
}

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional124;
void* right_value123;
struct list_item$1sNodeph* litem_67;
struct sNode* __dec_obj60;
_Bool _if_conditional125;
void* right_value124;
struct list_item$1sNodeph* litem_68;
struct sNode* __dec_obj61;
void* right_value125;
struct list_item$1sNodeph* litem_69;
struct sNode* __dec_obj62;
struct list$1sNodeph* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value123, 0, sizeof(void*));
memset(&litem_67, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value124, 0, sizeof(void*));
memset(&litem_68, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value125, 0, sizeof(void*));
memset(&litem_69, 0, sizeof(struct list_item$1sNodeph*));
        if(_if_conditional124=self->len==0,        _if_conditional124) {
            litem_67=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value123=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 283))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value123);
            if(right_value123 && right_value123 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value123, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value123;
            __freed_obj__ = 0;
            litem_67->prev=((void*)0);
            litem_67->next=((void*)0);
            __dec_obj60=litem_67->item;
            litem_67->item=(struct sNode*)come_increment_ref_count(item);
            if(__dec_obj60) { __dec_obj60 = come_decrement_ref_count(__dec_obj60, ((struct sNode*)__dec_obj60)->finalize, ((struct sNode*)__dec_obj60)->_protocol_obj, 0,0,0); }
            self->tail=litem_67;
            self->head=litem_67;
        }
        else {
            if(_if_conditional125=self->len==1,            _if_conditional125) {
                litem_68=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value124=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 293))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value124);
                if(right_value124 && right_value124 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value124, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value124;
                __freed_obj__ = 0;
                litem_68->prev=self->head;
                litem_68->next=((void*)0);
                __dec_obj61=litem_68->item;
                litem_68->item=(struct sNode*)come_increment_ref_count(item);
                if(__dec_obj61) { __dec_obj61 = come_decrement_ref_count(__dec_obj61, ((struct sNode*)__dec_obj61)->finalize, ((struct sNode*)__dec_obj61)->_protocol_obj, 0,0,0); }
                self->tail=litem_68;
                self->head->next=litem_68;
            }
            else {
                litem_69=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value125=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 303))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value125);
                if(right_value125 && right_value125 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value125, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value125;
                __freed_obj__ = 0;
                litem_69->prev=self->tail;
                litem_69->next=((void*)0);
                __dec_obj62=litem_69->item;
                litem_69->item=(struct sNode*)come_increment_ref_count(item);
                if(__dec_obj62) { __dec_obj62 = come_decrement_ref_count(__dec_obj62, ((struct sNode*)__dec_obj62)->finalize, ((struct sNode*)__dec_obj62)->_protocol_obj, 0,0,0); }
                self->tail->next=litem_69;
                self->tail=litem_69;
            }
        }
        self->len++;
        __result90__ = __result_obj__ = self;
        if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
        return __result90__;
        if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
}

static int list$1CVALUEph_length(struct list$1CVALUEph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result91__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __result91__ = self->len;
        return __result91__;
}

static char* optional$2charphbool_value(struct optional$2charphbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional126;
char* default_value_73;
char* __result92__;
char* __result93__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_73, 0, sizeof(char*));
        if(_if_conditional126=self==((void*)0),        _if_conditional126) {
            memset(&default_value_73,0,sizeof(char*));
            __result92__ = __result_obj__ = default_value_73;
            return __result92__;
        }
        else {
            __result93__ = __result_obj__ = self->v1;
            return __result93__;
        }
}

static void optional$2charphboolp_finalize(struct optional$2charphbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional127;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional127=self!=((void*)0)&&self->v1!=((void*)0),        _if_conditional127) {
            if(self->v1 && !__freed_obj__) { self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, 0); }
        }
}

static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional128;
struct CVALUE* result_77;
struct CVALUE* __result94__;
_Bool _if_conditional129;
struct CVALUE* __result95__;
struct CVALUE* result_78;
struct CVALUE* __result96__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_77, 0, sizeof(struct CVALUE*));
memset(&result_78, 0, sizeof(struct CVALUE*));
        if(_if_conditional128=self==((void*)0),        _if_conditional128) {
            memset(&result_77,0,sizeof(struct CVALUE*));
            __result94__ = __result_obj__ = result_77;
            return __result94__;
        }
        self->it=self->head;
        if(_if_conditional129=self->it,        _if_conditional129) {
            __result95__ = __result_obj__ = self->it->item;
            return __result95__;
        }
        memset(&result_78,0,sizeof(struct CVALUE*));
        __result96__ = __result_obj__ = result_78;
        return __result96__;
}

static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result97__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __result97__ = self==((void*)0)||self->it==((void*)0);
        return __result97__;
}

static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional130;
struct CVALUE* result_80;
struct CVALUE* __result98__;
_Bool _if_conditional131;
struct CVALUE* __result99__;
struct CVALUE* result_81;
struct CVALUE* __result100__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_80, 0, sizeof(struct CVALUE*));
memset(&result_81, 0, sizeof(struct CVALUE*));
        if(_if_conditional130=self==((void*)0)||self->it==((void*)0),        _if_conditional130) {
            memset(&result_80,0,sizeof(struct CVALUE*));
            __result98__ = __result_obj__ = result_80;
            return __result98__;
        }
        self->it=self->it->next;
        if(_if_conditional131=self->it,        _if_conditional131) {
            __result99__ = __result_obj__ = self->it->item;
            return __result99__;
        }
        memset(&result_81,0,sizeof(struct CVALUE*));
        __result100__ = __result_obj__ = result_81;
        return __result100__;
}

static struct optional$2CVALUEphbool* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional133;
struct list_item$1CVALUEph* it_82;
int i_83;
_Bool _while_condtional10;
_Bool _if_conditional134;
void* right_value132;
void* right_value133;
struct optional$2CVALUEphbool* __result102__;
struct CVALUE* default_value_84;
void* right_value134;
void* right_value135;
struct optional$2CVALUEphbool* __result103__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_82, 0, sizeof(struct list_item$1CVALUEph*));
memset(&i_83, 0, sizeof(int));
memset(&right_value132, 0, sizeof(void*));
memset(&right_value133, 0, sizeof(void*));
memset(&default_value_84, 0, sizeof(struct CVALUE*));
memset(&right_value134, 0, sizeof(void*));
memset(&right_value135, 0, sizeof(void*));
                if(_if_conditional133=position<0,                _if_conditional133) {
                    position+=self->len;
                }
                it_82=self->head;
                i_83=0;
                while(_while_condtional10=it_82!=((void*)0),                _while_condtional10) {
                    if(_if_conditional134=position==i_83,                    _if_conditional134) {
                        __result102__ = __result_obj__ = ((struct optional$2CVALUEphbool*)(right_value133=optional$2CVALUEphbool_initialize((struct optional$2CVALUEphbool*)come_increment_ref_count(((struct optional$2CVALUEphbool*)(right_value132=(struct optional$2CVALUEphbool*)come_calloc(1, sizeof(struct optional$2CVALUEphbool)*(1), "./comelang2.h", 753)))),(struct CVALUE*)come_increment_ref_count(it_82->item),(_Bool)1)));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value132);
                        if(right_value132 && right_value132 != __result_obj__ && !__freed_obj__) { right_value132 = come_decrement_ref_count(right_value132, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value132;
                        __freed_obj__ = 0;
                        return __result102__;
                    }
                    it_82=it_82->next;
                    i_83++;
                }
                memset(&default_value_84,0,sizeof(struct CVALUE*));
                __result103__ = __result_obj__ = ((struct optional$2CVALUEphbool*)(right_value135=optional$2CVALUEphbool_initialize(((struct optional$2CVALUEphbool*)(right_value134=(struct optional$2CVALUEphbool*)come_calloc(1, sizeof(struct optional$2CVALUEphbool)*(1), "./comelang2.h", 761))),(struct CVALUE*)come_increment_ref_count(default_value_84),(_Bool)0)));
                if(default_value_84 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,default_value_84, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value134);
                if(right_value134 && right_value134 != __result_obj__ && !__freed_obj__) { right_value134 = come_decrement_ref_count(right_value134, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value134;
                __freed_obj__ = 0;
                return __result103__;
                if(default_value_84 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,default_value_84, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct optional$2CVALUEphbool* optional$2CVALUEphbool_initialize(struct optional$2CVALUEphbool* self, struct CVALUE* v1, _Bool v2){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct CVALUE* __dec_obj63;
struct optional$2CVALUEphbool* __result101__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            __dec_obj63=self->v1;
                            self->v1=(struct CVALUE*)come_increment_ref_count(v1);
                            if(__dec_obj63) { come_call_finalizer(CVALUE_finalize,__dec_obj63, (void*)0, (void*)0, 0, 0, 0, 0); }
                            self->v2=v2;
                            __result101__ = __result_obj__ = self;
                            if(self && !__freed_obj__) { come_call_finalizer(optional$2CVALUEphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                            if(v1 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                            return __result101__;
                            if(self && !__freed_obj__) { come_call_finalizer(optional$2CVALUEphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                            if(v1 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2CVALUEphboolp_finalize(struct optional$2CVALUEphbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional135;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional135=self!=((void*)0)&&self->v1!=((void*)0),                                _if_conditional135) {
                                    if(self->v1 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                                }
}

static struct CVALUE* optional$2CVALUEphbool_value(struct optional$2CVALUEphbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional136;
struct CVALUE* default_value_85;
struct CVALUE* __result104__;
struct CVALUE* __result105__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_85, 0, sizeof(struct CVALUE*));
                if(_if_conditional136=self==((void*)0),                _if_conditional136) {
                    memset(&default_value_85,0,sizeof(struct CVALUE*));
                    __result104__ = __result_obj__ = default_value_85;
                    return __result104__;
                }
                else {
                    __result105__ = __result_obj__ = self->v1;
                    return __result105__;
                }
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional137;
void* right_value143;
struct list_item$1sTypeph* litem_87;
struct sType* __dec_obj64;
_Bool _if_conditional138;
void* right_value144;
struct list_item$1sTypeph* litem_88;
struct sType* __dec_obj65;
void* right_value145;
struct list_item$1sTypeph* litem_89;
struct sType* __dec_obj66;
struct list$1sTypeph* __result106__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value143, 0, sizeof(void*));
memset(&litem_87, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value144, 0, sizeof(void*));
memset(&litem_88, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value145, 0, sizeof(void*));
memset(&litem_89, 0, sizeof(struct list_item$1sTypeph*));
        if(_if_conditional137=self->len==0,        _if_conditional137) {
            litem_87=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value143=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 283))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value143);
            if(right_value143 && right_value143 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value143, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value143;
            __freed_obj__ = 0;
            litem_87->prev=((void*)0);
            litem_87->next=((void*)0);
            __dec_obj64=litem_87->item;
            litem_87->item=(struct sType*)come_increment_ref_count(item);
            if(__dec_obj64) { come_call_finalizer(sType_finalize,__dec_obj64, (void*)0, (void*)0, 0, 0, 0, 0); }
            self->tail=litem_87;
            self->head=litem_87;
        }
        else {
            if(_if_conditional138=self->len==1,            _if_conditional138) {
                litem_88=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value144=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 293))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value144);
                if(right_value144 && right_value144 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value144, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value144;
                __freed_obj__ = 0;
                litem_88->prev=self->head;
                litem_88->next=((void*)0);
                __dec_obj65=litem_88->item;
                litem_88->item=(struct sType*)come_increment_ref_count(item);
                if(__dec_obj65) { come_call_finalizer(sType_finalize,__dec_obj65, (void*)0, (void*)0, 0, 0, 0, 0); }
                self->tail=litem_88;
                self->head->next=litem_88;
            }
            else {
                litem_89=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value145=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 303))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value145);
                if(right_value145 && right_value145 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value145, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value145;
                __freed_obj__ = 0;
                litem_89->prev=self->tail;
                litem_89->next=((void*)0);
                __dec_obj66=litem_89->item;
                litem_89->item=(struct sType*)come_increment_ref_count(item);
                if(__dec_obj66) { come_call_finalizer(sType_finalize,__dec_obj66, (void*)0, (void*)0, 0, 0, 0, 0); }
                self->tail->next=litem_89;
                self->tail=litem_89;
            }
        }
        self->len++;
        __result106__ = __result_obj__ = self;
        if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result106__;
        if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static char* optional$2charphbool_expect(struct optional$2charphbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional141;
char* __result108__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional141=!self->v2,        _if_conditional141) {
            puts("Exception: at");
            exception_stackframe();
            puts("abort.");
            exit(2);
        }
        __result108__ = __result_obj__ = self->v1;
        return __result108__;
}

static struct optional$2sTypephbool* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional142;
struct list_item$1sTypeph* it_102;
int i_103;
_Bool _while_condtional11;
_Bool _if_conditional143;
void* right_value166;
void* right_value167;
struct optional$2sTypephbool* __result110__;
struct sType* default_value_104;
void* right_value168;
void* right_value169;
struct optional$2sTypephbool* __result111__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_102, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_103, 0, sizeof(int));
memset(&right_value166, 0, sizeof(void*));
memset(&right_value167, 0, sizeof(void*));
memset(&default_value_104, 0, sizeof(struct sType*));
memset(&right_value168, 0, sizeof(void*));
memset(&right_value169, 0, sizeof(void*));
        if(_if_conditional142=position<0,        _if_conditional142) {
            position+=self->len;
        }
        it_102=self->head;
        i_103=0;
        while(_while_condtional11=it_102!=((void*)0),        _while_condtional11) {
            if(_if_conditional143=position==i_103,            _if_conditional143) {
                __result110__ = __result_obj__ = ((struct optional$2sTypephbool*)(right_value167=optional$2sTypephbool_initialize((struct optional$2sTypephbool*)come_increment_ref_count(((struct optional$2sTypephbool*)(right_value166=(struct optional$2sTypephbool*)come_calloc(1, sizeof(struct optional$2sTypephbool)*(1), "./comelang2.h", 753)))),(struct sType*)come_increment_ref_count(it_102->item),(_Bool)1)));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value166);
                if(right_value166 && right_value166 != __result_obj__ && !__freed_obj__) { right_value166 = come_decrement_ref_count(right_value166, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value166;
                __freed_obj__ = 0;
                return __result110__;
            }
            it_102=it_102->next;
            i_103++;
        }
        memset(&default_value_104,0,sizeof(struct sType*));
        __result111__ = __result_obj__ = ((struct optional$2sTypephbool*)(right_value169=optional$2sTypephbool_initialize(((struct optional$2sTypephbool*)(right_value168=(struct optional$2sTypephbool*)come_calloc(1, sizeof(struct optional$2sTypephbool)*(1), "./comelang2.h", 761))),(struct sType*)come_increment_ref_count(default_value_104),(_Bool)0)));
        if(default_value_104 && !__freed_obj__) { come_call_finalizer(sType_finalize,default_value_104, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value168);
        if(right_value168 && right_value168 != __result_obj__ && !__freed_obj__) { right_value168 = come_decrement_ref_count(right_value168, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value168;
        __freed_obj__ = 0;
        return __result111__;
        if(default_value_104 && !__freed_obj__) { come_call_finalizer(sType_finalize,default_value_104, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct optional$2sTypephbool* optional$2sTypephbool_initialize(struct optional$2sTypephbool* self, struct sType* v1, _Bool v2){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sType* __dec_obj71;
struct optional$2sTypephbool* __result109__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    __dec_obj71=self->v1;
                    self->v1=(struct sType*)come_increment_ref_count(v1);
                    if(__dec_obj71) { come_call_finalizer(sType_finalize,__dec_obj71, (void*)0, (void*)0, 0, 0, 0, 0); }
                    self->v2=v2;
                    __result109__ = __result_obj__ = self;
                    if(self && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result109__;
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
                        if(_if_conditional144=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional144) {
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
struct sType* default_value_105;
struct sType* __result112__;
struct sType* __result113__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_105, 0, sizeof(struct sType*));
        if(_if_conditional145=self==((void*)0),        _if_conditional145) {
            memset(&default_value_105,0,sizeof(struct sType*));
            __result112__ = __result_obj__ = default_value_105;
            return __result112__;
        }
        else {
            __result113__ = __result_obj__ = self->v1;
            return __result113__;
        }
}

int sListNode_sline(struct sListNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result115__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result115__ = self->sline;
    return __result115__;
}

char* sListNode_sname(struct sListNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value184;
char* __result116__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value184, 0, sizeof(void*));
    __result116__ = __result_obj__ = ((char*)(right_value184=__builtin_string(self->sname)));
    return __result116__;
}

struct sTupleNode* sTupleNode_initialize(struct sTupleNode* self, struct list$1sNodeph* tuple_elements, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1sNodeph* __dec_obj79;
void* right_value185;
char* __dec_obj80;
struct sTupleNode* __result117__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value185, 0, sizeof(void*));
    __dec_obj79=self->tuple_elements;
    self->tuple_elements=(struct list$1sNodeph*)come_increment_ref_count(tuple_elements);
    if(__dec_obj79) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj79, (void*)0, (void*)0, 0, 0, 0, 0); }
    self->sline=info->sline;
    __dec_obj80=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value185=__builtin_string(info->sname))));
    if(__dec_obj80) { __dec_obj80 = come_decrement_ref_count(__dec_obj80, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value185);
    if(right_value185 && right_value185 != __result_obj__ && !__freed_obj__) { right_value185 = come_decrement_ref_count(right_value185, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value185;
    __freed_obj__ = 0;
    __result117__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sTupleNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(tuple_elements && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,tuple_elements, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result117__;
    if(self && !__freed_obj__) { come_call_finalizer(sTupleNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(tuple_elements && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,tuple_elements, (void*)0, (void*)0, 0, 0, 1, 0); }
}

_Bool sTupleNode_terminated(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result118__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result118__ = (_Bool)0;
    return __result118__;
}

char* sTupleNode_kind(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value186;
char* __result119__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value186, 0, sizeof(void*));
    __result119__ = __result_obj__ = ((char*)(right_value186=__builtin_string("sTupleNode")));
    return __result119__;
}

_Bool sTupleNode_compile(struct sTupleNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1sNodeph* tuple_elements_113;
void* right_value187;
void* right_value188;
struct list$1sTypeph* tuple_types_114;
void* right_value189;
void* right_value190;
struct list$1CVALUEph* tuple_values_115;
struct list$1sNodeph* o2_saved_116;
struct sNode* it_117;
_Bool _for_condtionalA5;
_Bool _if_conditional151;
_Bool __result120__;
void* right_value191;
struct CVALUE* come_value_118;
void* right_value195;
void* right_value196;
void* right_value197;
void* right_value198;
void* right_value199;
struct sType* type_120;
struct list$1sTypeph* o2_saved_121;
struct sType* it_124;
_Bool _for_condtionalA6;
void* right_value200;
void* right_value201;
struct CVALUE* obj_value_127;
void* right_value202;
void* right_value203;
struct buffer* num_string_128;
void* right_value204;
struct sType* type2_129;
void* right_value205;
char* type_name_130;
void* right_value206;
void* right_value207;
char* __dec_obj83;
void* right_value208;
struct sType* type3_131;
void* right_value209;
struct sType* __dec_obj84;
void* right_value210;
char* __dec_obj85;
void* right_value211;
struct sType* obj_type_132;
char* fun_name_133;
void* right_value212;
void* right_value213;
void* right_value214;
char* generics_fun_name_134;
struct sFun* fun_135;
_Bool _if_conditional160;
void* right_value215;
void* right_value216;
char* __dec_obj86;
_Bool _if_conditional161;
_Bool __result130__;
void* right_value217;
struct sType* result_type_136;
void* right_value218;
void* right_value219;
struct list$1CVALUEph* come_params_137;
void* right_value220;
_Bool _if_conditional162;
void* right_value221;
int i_138;
struct list$1CVALUEph* o2_saved_139;
struct CVALUE* it_140;
_Bool _for_condtionalA7;
void* right_value222;
struct CVALUE* come_value_141;
void* right_value223;
void* right_value224;
_Bool _if_conditional163;
void* right_value225;
void* right_value226;
void* right_value227;
struct buffer* buf_142;
int j_143;
struct list$1CVALUEph* o2_saved_144;
struct CVALUE* it_145;
_Bool _for_condtionalA8;
_Bool _if_conditional164;
void* right_value228;
struct CVALUE* come_value2_146;
void* right_value229;
char* __dec_obj87;
_Bool _if_conditional165;
void* right_value230;
void* right_value231;
char* __dec_obj88;
void* right_value232;
struct sType* __dec_obj89;
void* right_value233;
_Bool __result131__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&tuple_elements_113, 0, sizeof(struct list$1sNodeph*));
memset(&right_value187, 0, sizeof(void*));
memset(&right_value188, 0, sizeof(void*));
memset(&tuple_types_114, 0, sizeof(struct list$1sTypeph*));
memset(&right_value189, 0, sizeof(void*));
memset(&right_value190, 0, sizeof(void*));
memset(&tuple_values_115, 0, sizeof(struct list$1CVALUEph*));
memset(&o2_saved_116, 0, sizeof(struct list$1sNodeph*));
memset(&it_117, 0, sizeof(struct sNode*));
memset(&right_value191, 0, sizeof(void*));
memset(&come_value_118, 0, sizeof(struct CVALUE*));
memset(&right_value195, 0, sizeof(void*));
memset(&right_value196, 0, sizeof(void*));
memset(&right_value197, 0, sizeof(void*));
memset(&right_value198, 0, sizeof(void*));
memset(&right_value199, 0, sizeof(void*));
memset(&type_120, 0, sizeof(struct sType*));
memset(&o2_saved_121, 0, sizeof(struct list$1sTypeph*));
memset(&it_124, 0, sizeof(struct sType*));
memset(&right_value200, 0, sizeof(void*));
memset(&right_value201, 0, sizeof(void*));
memset(&obj_value_127, 0, sizeof(struct CVALUE*));
memset(&right_value202, 0, sizeof(void*));
memset(&right_value203, 0, sizeof(void*));
memset(&num_string_128, 0, sizeof(struct buffer*));
memset(&right_value204, 0, sizeof(void*));
memset(&type2_129, 0, sizeof(struct sType*));
memset(&right_value205, 0, sizeof(void*));
memset(&type_name_130, 0, sizeof(char*));
memset(&right_value206, 0, sizeof(void*));
memset(&right_value207, 0, sizeof(void*));
memset(&right_value208, 0, sizeof(void*));
memset(&type3_131, 0, sizeof(struct sType*));
memset(&right_value209, 0, sizeof(void*));
memset(&right_value210, 0, sizeof(void*));
memset(&right_value211, 0, sizeof(void*));
memset(&obj_type_132, 0, sizeof(struct sType*));
memset(&fun_name_133, 0, sizeof(char*));
memset(&right_value212, 0, sizeof(void*));
memset(&right_value213, 0, sizeof(void*));
memset(&right_value214, 0, sizeof(void*));
memset(&generics_fun_name_134, 0, sizeof(char*));
memset(&fun_135, 0, sizeof(struct sFun*));
memset(&right_value215, 0, sizeof(void*));
memset(&right_value216, 0, sizeof(void*));
memset(&right_value217, 0, sizeof(void*));
memset(&result_type_136, 0, sizeof(struct sType*));
memset(&right_value218, 0, sizeof(void*));
memset(&right_value219, 0, sizeof(void*));
memset(&come_params_137, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value220, 0, sizeof(void*));
memset(&right_value221, 0, sizeof(void*));
memset(&i_138, 0, sizeof(int));
memset(&o2_saved_139, 0, sizeof(struct list$1CVALUEph*));
memset(&it_140, 0, sizeof(struct CVALUE*));
memset(&right_value222, 0, sizeof(void*));
memset(&come_value_141, 0, sizeof(struct CVALUE*));
memset(&right_value223, 0, sizeof(void*));
memset(&right_value224, 0, sizeof(void*));
memset(&right_value225, 0, sizeof(void*));
memset(&right_value226, 0, sizeof(void*));
memset(&right_value227, 0, sizeof(void*));
memset(&buf_142, 0, sizeof(struct buffer*));
memset(&j_143, 0, sizeof(int));
memset(&o2_saved_144, 0, sizeof(struct list$1CVALUEph*));
memset(&it_145, 0, sizeof(struct CVALUE*));
memset(&right_value228, 0, sizeof(void*));
memset(&come_value2_146, 0, sizeof(struct CVALUE*));
memset(&right_value229, 0, sizeof(void*));
memset(&right_value230, 0, sizeof(void*));
memset(&right_value231, 0, sizeof(void*));
memset(&right_value232, 0, sizeof(void*));
memset(&right_value233, 0, sizeof(void*));
    tuple_elements_113=self->tuple_elements;
    tuple_types_114=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value188=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value187=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "06str.c", 626))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value187);
    if(right_value187 && right_value187 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value187, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value187;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value188);
    if(right_value188 && right_value188 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value188, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value188;
    __freed_obj__ = 0;
    tuple_values_115=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value190=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value189=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 627))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value189);
    if(right_value189 && right_value189 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value189, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value189;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value190);
    if(right_value190 && right_value190 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value190, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value190;
    __freed_obj__ = 0;
    for(
    o2_saved_116=(tuple_elements_113),it_117=list$1sNodeph_begin((o2_saved_116)) ,    0;    _for_condtionalA5=    !list$1sNodeph_end((o2_saved_116)) ,    _for_condtionalA5;    it_117=list$1sNodeph_next((o2_saved_116)) ,    0    ){
        if(_if_conditional151=!node_compile(it_117,info),        _if_conditional151) {
            __result120__ = (_Bool)0;
            if(tuple_types_114 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,tuple_types_114, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(tuple_values_115 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,tuple_values_115, (void*)0, (void*)0, 0, 0, 0, 0); }
            return __result120__;
        }
        come_value_118=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value191=get_value_from_stack(-1,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value191);
        if(right_value191 && right_value191 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value191, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value191;
        __freed_obj__ = 0;
        dec_stack_ptr(1,info);
        list$1CVALUEph_push_back(tuple_values_115,(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value195=CVALUE_clone(come_value_118)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value195);
        if(right_value195 && right_value195 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value195, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value195;
        __freed_obj__ = 0;
        list$1sTypeph_push_back(tuple_types_114,(struct sType*)come_increment_ref_count(((struct sType*)(right_value196=sType_clone(come_value_118->type)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value196);
        if(right_value196 && right_value196 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value196, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value196;
        __freed_obj__ = 0;
        if(come_value_118 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_118, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    type_120=(struct sType*)come_increment_ref_count(((struct sType*)(right_value199=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value197=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 641)))),((char*)(right_value198=xsprintf("tuple%d",list$1sTypeph_length(tuple_types_114)))),(_Bool)0,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value197);
    if(right_value197 && right_value197 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value197, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value197;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value198);
    if(right_value198 && right_value198 != __result_obj__ && !__freed_obj__) { right_value198 = come_decrement_ref_count(right_value198, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[5] = right_value198;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value199);
    if(right_value199 && right_value199 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value199, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[6] = right_value199;
    __freed_obj__ = 0;
    for(
    o2_saved_121=(struct list$1sTypeph*)come_increment_ref_count((tuple_types_114)),it_124=list$1sTypeph_begin((o2_saved_121)) ,    0;    _for_condtionalA6=    !list$1sTypeph_end((o2_saved_121)) ,    _for_condtionalA6;    it_124=list$1sTypeph_next((o2_saved_121)) ,    0    ){
        list$1sTypeph_push_back(type_120->mGenericsTypes,(struct sType*)come_increment_ref_count(((struct sType*)(right_value200=sType_clone(it_124)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value200);
        if(right_value200 && right_value200 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value200, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value200;
        __freed_obj__ = 0;
    }
    if(o2_saved_121 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_121, (void*)0, (void*)0, 0, 0, 0, 0); }
    obj_value_127=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value201=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 647))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value201);
    if(right_value201 && right_value201 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value201, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[7] = right_value201;
    __freed_obj__ = 0;
    num_string_128=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value203=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value202=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 649))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value202);
    if(right_value202 && right_value202 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value202, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[8] = right_value202;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 9, right_value203);
    if(right_value203 && right_value203 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value203, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[9] = right_value203;
    __freed_obj__ = 0;
    buffer_append_str(num_string_128,"1");
    type2_129=(struct sType*)come_increment_ref_count(((struct sType*)(right_value204=solve_generics(type_120,type_120,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 10, right_value204);
    if(right_value204 && right_value204 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value204, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[10] = right_value204;
    __freed_obj__ = 0;
    type_name_130=(char*)come_increment_ref_count(optional$2charphbool_expect(((struct optional$2charphbool*)(right_value205=make_type_name_string(type2_129,(_Bool)0,(_Bool)1,(_Bool)0,info)))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 11, right_value205);
    if(right_value205 && right_value205 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value205, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[11] = right_value205;
    __freed_obj__ = 0;
    __dec_obj83=obj_value_127->c_value;
    obj_value_127->c_value=(char*)come_increment_ref_count(((char*)(right_value207=xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d)",type_name_130,type_name_130,((char*)(right_value206=buffer_to_string(num_string_128))),info->sname,info->sline))));
    if(__dec_obj83) { __dec_obj83 = come_decrement_ref_count(__dec_obj83, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 12, right_value206);
    if(right_value206 && right_value206 != __result_obj__ && !__freed_obj__) { right_value206 = come_decrement_ref_count(right_value206, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[12] = right_value206;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 13, right_value207);
    if(right_value207 && right_value207 != __result_obj__ && !__freed_obj__) { right_value207 = come_decrement_ref_count(right_value207, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[13] = right_value207;
    __freed_obj__ = 0;
    type3_131=(struct sType*)come_increment_ref_count(((struct sType*)(right_value208=sType_clone(type2_129))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 14, right_value208);
    if(right_value208 && right_value208 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value208, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[14] = right_value208;
    __freed_obj__ = 0;
    type3_131->mPointerNum++;
    type3_131->mHeap=(_Bool)1;
    type2_129->mHeap=(_Bool)1;
    __dec_obj84=obj_value_127->type;
    obj_value_127->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value209=sType_clone(type2_129))));
    if(__dec_obj84) { come_call_finalizer(sType_finalize,__dec_obj84, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 15, right_value209);
    if(right_value209 && right_value209 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value209, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[15] = right_value209;
    __freed_obj__ = 0;
    __dec_obj85=obj_value_127->c_value;
    obj_value_127->c_value=(char*)come_increment_ref_count(((char*)(right_value210=append_object_to_right_values(obj_value_127->c_value,(struct sType*)come_increment_ref_count(type3_131),info))));
    if(__dec_obj85) { __dec_obj85 = come_decrement_ref_count(__dec_obj85, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 16, right_value210);
    if(right_value210 && right_value210 != __result_obj__ && !__freed_obj__) { right_value210 = come_decrement_ref_count(right_value210, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[16] = right_value210;
    __freed_obj__ = 0;
    obj_value_127->type->mPointerNum++;
    obj_value_127->var=((void*)0);
    obj_type_132=(struct sType*)come_increment_ref_count(((struct sType*)(right_value211=sType_clone(type2_129))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 17, right_value211);
    if(right_value211 && right_value211 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value211, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[17] = right_value211;
    __freed_obj__ = 0;
    fun_name_133="initialize";
    generics_fun_name_134=(char*)come_increment_ref_count(((char*)(right_value214=string_to_string(((char*)(right_value213=make_generics_function(obj_type_132,(char*)come_increment_ref_count(((char*)(right_value212=__builtin_string(fun_name_133)))),info)))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 18, right_value212);
    if(right_value212 && right_value212 != __result_obj__ && !__freed_obj__) { right_value212 = come_decrement_ref_count(right_value212, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[18] = right_value212;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 19, right_value213);
    if(right_value213 && right_value213 != __result_obj__ && !__freed_obj__) { right_value213 = come_decrement_ref_count(right_value213, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[19] = right_value213;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 20, right_value214);
    if(right_value214 && right_value214 != __result_obj__ && !__freed_obj__) { right_value214 = come_decrement_ref_count(right_value214, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[20] = right_value214;
    __freed_obj__ = 0;
    fun_135=map$2charphsFunph_at(info->funcs,generics_fun_name_134,((void*)0));
    if(_if_conditional160=fun_135==((void*)0),    _if_conditional160) {
        __dec_obj86=generics_fun_name_134;
        generics_fun_name_134=(char*)come_increment_ref_count(((char*)(right_value216=create_method_name(obj_type_132,(_Bool)0,((char*)(right_value215=__builtin_string(fun_name_133))),info))));
        if(__dec_obj86) { __dec_obj86 = come_decrement_ref_count(__dec_obj86, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value215);
        if(right_value215 && right_value215 != __result_obj__ && !__freed_obj__) { right_value215 = come_decrement_ref_count(right_value215, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value215;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value216);
        if(right_value216 && right_value216 != __result_obj__ && !__freed_obj__) { right_value216 = come_decrement_ref_count(right_value216, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value216;
        __freed_obj__ = 0;
        fun_135=map$2charphsFunph_at(info->funcs,generics_fun_name_134,((void*)0));
        if(_if_conditional161=fun_135==((void*)0),        _if_conditional161) {
            err_msg(info,"function not found(%s) at method(%s)(2)\n",generics_fun_name_134,info->come_fun->mName);
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
            return __result130__;
        }
    }
    result_type_136=(struct sType*)come_increment_ref_count(((struct sType*)(right_value217=sType_clone(fun_135->mResultType))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 21, right_value217);
    if(right_value217 && right_value217 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value217, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[21] = right_value217;
    __freed_obj__ = 0;
    result_type_136->mStatic=(_Bool)0;
    come_params_137=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value219=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value218=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 689))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 22, right_value218);
    if(right_value218 && right_value218 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value218, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[22] = right_value218;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 23, right_value219);
    if(right_value219 && right_value219 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value219, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[23] = right_value219;
    __freed_obj__ = 0;
    if(_if_conditional162=optional$2sTypephbool_value(((struct optional$2sTypephbool*)(right_value220=list$1sTypephp_operator_load_element(fun_135->mParamTypes,0))))->mHeap&&obj_value_127->type->mHeap,    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 24, right_value220),
    (right_value220 && right_value220 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2sTypephboolp_finalize,right_value220, (void*)0, (void*)0, 0, 1, 0, 0):0,
    __right_value_freed_obj[24] = right_value220, 
    __freed_obj__ = 0, 
    _if_conditional162) {
        std_move(optional$2sTypephbool_value(((struct optional$2sTypephbool*)(right_value221=list$1sTypephp_operator_load_element(fun_135->mParamTypes,0)))),obj_value_127->type,obj_value_127,info);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value221);
        if(right_value221 && right_value221 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,right_value221, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value221;
        __freed_obj__ = 0;
    }
    list$1CVALUEph_push_back(come_params_137,(struct CVALUE*)come_increment_ref_count(obj_value_127));
    i_138=1;
    for(
    o2_saved_139=(struct list$1CVALUEph*)come_increment_ref_count((tuple_values_115)),it_140=list$1CVALUEph_begin((o2_saved_139)) ,    0;    _for_condtionalA7=    !list$1CVALUEph_end((o2_saved_139)) ,    _for_condtionalA7;    it_140=list$1CVALUEph_next((o2_saved_139)) ,    0    ){
        come_value_141=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value222=CVALUE_clone(it_140))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value222);
        if(right_value222 && right_value222 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value222, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value222;
        __freed_obj__ = 0;
        if(_if_conditional163=optional$2sTypephbool_value(((struct optional$2sTypephbool*)(right_value223=list$1sTypephp_operator_load_element(fun_135->mParamTypes,i_138))))&&optional$2sTypephbool_value(((struct optional$2sTypephbool*)(right_value224=list$1sTypephp_operator_load_element(fun_135->mParamTypes,i_138))))->mHeap&&come_value_141->type->mHeap,        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value223),
        (right_value223 && right_value223 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2sTypephboolp_finalize,right_value223, (void*)0, (void*)0, 0, 1, 0, 0):0,
        __right_value_freed_obj[1] = right_value223, 
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value224),
        (right_value224 && right_value224 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2sTypephboolp_finalize,right_value224, (void*)0, (void*)0, 0, 1, 0, 0):0,
        __right_value_freed_obj[2] = right_value224, 
        __freed_obj__ = 0, 
        _if_conditional163) {
            std_move(optional$2sTypephbool_value(((struct optional$2sTypephbool*)(right_value225=list$1sTypephp_operator_load_element(fun_135->mParamTypes,i_138)))),come_value_141->type,come_value_141,info);
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value225);
            if(right_value225 && right_value225 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,right_value225, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value225;
            __freed_obj__ = 0;
        }
        list$1CVALUEph_push_back(come_params_137,(struct CVALUE*)come_increment_ref_count(come_value_141));
        i_138++;
        if(come_value_141 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_141, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    if(o2_saved_139 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,o2_saved_139, (void*)0, (void*)0, 0, 0, 0, 0); }
    buf_142=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value227=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value226=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 708))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 25, right_value226);
    if(right_value226 && right_value226 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value226, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[25] = right_value226;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 26, right_value227);
    if(right_value227 && right_value227 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value227, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[26] = right_value227;
    __freed_obj__ = 0;
    buffer_append_str(buf_142,generics_fun_name_134);
    buffer_append_str(buf_142,"(");
    j_143=0;
    for(
    o2_saved_144=(struct list$1CVALUEph*)come_increment_ref_count((come_params_137)),it_145=list$1CVALUEph_begin((o2_saved_144)) ,    0;    _for_condtionalA8=    !list$1CVALUEph_end((o2_saved_144)) ,    _for_condtionalA8;    it_145=list$1CVALUEph_next((o2_saved_144)) ,    0    ){
        buffer_append_str(buf_142,it_145->c_value);
        if(_if_conditional164=j_143!=list$1CVALUEph_length(come_params_137)-1,        _if_conditional164) {
            buffer_append_str(buf_142,",");
        }
        j_143++;
    }
    if(o2_saved_144 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,o2_saved_144, (void*)0, (void*)0, 0, 0, 0, 0); }
    buffer_append_str(buf_142,")");
    come_value2_146=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value228=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 725))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 27, right_value228);
    if(right_value228 && right_value228 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value228, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[27] = right_value228;
    __freed_obj__ = 0;
    __dec_obj87=come_value2_146->c_value;
    come_value2_146->c_value=(char*)come_increment_ref_count(((char*)(right_value229=buffer_to_string(buf_142))));
    if(__dec_obj87) { __dec_obj87 = come_decrement_ref_count(__dec_obj87, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 28, right_value229);
    if(right_value229 && right_value229 != __result_obj__ && !__freed_obj__) { right_value229 = come_decrement_ref_count(right_value229, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[28] = right_value229;
    __freed_obj__ = 0;
    if(_if_conditional165=result_type_136->mHeap,    _if_conditional165) {
        __dec_obj88=come_value2_146->c_value;
        come_value2_146->c_value=(char*)come_increment_ref_count(((char*)(right_value231=append_object_to_right_values(((char*)(right_value230=buffer_to_string(buf_142))),(struct sType*)come_increment_ref_count(result_type_136),info))));
        if(__dec_obj88) { __dec_obj88 = come_decrement_ref_count(__dec_obj88, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value230);
        if(right_value230 && right_value230 != __result_obj__ && !__freed_obj__) { right_value230 = come_decrement_ref_count(right_value230, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value230;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value231);
        if(right_value231 && right_value231 != __result_obj__ && !__freed_obj__) { right_value231 = come_decrement_ref_count(right_value231, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value231;
        __freed_obj__ = 0;
    }
    __dec_obj89=come_value2_146->type;
    come_value2_146->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value232=sType_clone(result_type_136))));
    if(__dec_obj89) { come_call_finalizer(sType_finalize,__dec_obj89, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 29, right_value232);
    if(right_value232 && right_value232 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value232, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[29] = right_value232;
    __freed_obj__ = 0;
    come_value2_146->type->mStatic=(_Bool)0;
    come_value2_146->var=((void*)0);
    add_come_last_code(info,"%s;\n",((char*)(right_value233=buffer_to_string(buf_142))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 30, right_value233);
    if(right_value233 && right_value233 != __result_obj__ && !__freed_obj__) { right_value233 = come_decrement_ref_count(right_value233, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[30] = right_value233;
    __freed_obj__ = 0;
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_146));
    __result131__ = (_Bool)1;
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
    return __result131__;
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
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional152;
struct CVALUE* __result121__;
void* right_value192;
struct CVALUE* result_119;
_Bool _if_conditional153;
void* right_value193;
char* __dec_obj81;
_Bool _if_conditional154;
void* right_value194;
struct sType* __dec_obj82;
_Bool _if_conditional155;
struct CVALUE* __result122__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value192, 0, sizeof(void*));
memset(&result_119, 0, sizeof(struct CVALUE*));
memset(&right_value193, 0, sizeof(void*));
memset(&right_value194, 0, sizeof(void*));
            if(_if_conditional152=self==(void*)0,            _if_conditional152) {
                __result121__ = __result_obj__ = (void*)0;
                return __result121__;
            }
            result_119=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value192=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value192);
            if(right_value192 && right_value192 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value192, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value192;
            __freed_obj__ = 0;
            if(_if_conditional153=self!=((void*)0)&&self->c_value!=((void*)0),            _if_conditional153) {
                __dec_obj81=result_119->c_value;
                result_119->c_value=(char*)come_increment_ref_count(((char*)(right_value193=string_clone(self->c_value))));
                if(__dec_obj81) { __dec_obj81 = come_decrement_ref_count(__dec_obj81, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value193);
                if(right_value193 && right_value193 != __result_obj__ && !__freed_obj__) { right_value193 = come_decrement_ref_count(right_value193, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value193;
                __freed_obj__ = 0;
            }
            if(_if_conditional154=self!=((void*)0)&&self->type!=((void*)0),            _if_conditional154) {
                __dec_obj82=result_119->type;
                result_119->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value194=sType_clone(self->type))));
                if(__dec_obj82) { come_call_finalizer(sType_finalize,__dec_obj82, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value194);
                if(right_value194 && right_value194 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value194, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value194;
                __freed_obj__ = 0;
            }
            if(_if_conditional155=self!=((void*)0),            _if_conditional155) {
                result_119->var=self->var;
            }
            __result122__ = __result_obj__ = result_119;
            if(result_119 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,result_119, (void*)0, (void*)0, 0, 0, 1, 0); }
            return __result122__;
            if(result_119 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,result_119, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional156;
struct sType* result_122;
struct sType* __result123__;
_Bool _if_conditional157;
struct sType* __result124__;
struct sType* result_123;
struct sType* __result125__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_122, 0, sizeof(struct sType*));
memset(&result_123, 0, sizeof(struct sType*));
        if(_if_conditional156=self==((void*)0),        _if_conditional156) {
            memset(&result_122,0,sizeof(struct sType*));
            __result123__ = __result_obj__ = result_122;
            return __result123__;
        }
        self->it=self->head;
        if(_if_conditional157=self->it,        _if_conditional157) {
            __result124__ = __result_obj__ = self->it->item;
            return __result124__;
        }
        memset(&result_123,0,sizeof(struct sType*));
        __result125__ = __result_obj__ = result_123;
        return __result125__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result126__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __result126__ = self==((void*)0)||self->it==((void*)0);
        return __result126__;
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional158;
struct sType* result_125;
struct sType* __result127__;
_Bool _if_conditional159;
struct sType* __result128__;
struct sType* result_126;
struct sType* __result129__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_125, 0, sizeof(struct sType*));
memset(&result_126, 0, sizeof(struct sType*));
        if(_if_conditional158=self==((void*)0)||self->it==((void*)0),        _if_conditional158) {
            memset(&result_125,0,sizeof(struct sType*));
            __result127__ = __result_obj__ = result_125;
            return __result127__;
        }
        self->it=self->it->next;
        if(_if_conditional159=self->it,        _if_conditional159) {
            __result128__ = __result_obj__ = self->it->item;
            return __result128__;
        }
        memset(&result_126,0,sizeof(struct sType*));
        __result129__ = __result_obj__ = result_126;
        return __result129__;
}

int sTupleNode_sline(struct sTupleNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result132__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result132__ = self->sline;
    return __result132__;
}

char* sTupleNode_sname(struct sTupleNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value234;
char* __result133__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value234, 0, sizeof(void*));
    __result133__ = __result_obj__ = ((char*)(right_value234=__builtin_string(self->sname)));
    return __result133__;
}

struct sNoneNode* sNoneNode_initialize(struct sNoneNode* self, struct sNode* value, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value235;
struct sNode* __dec_obj90;
void* right_value236;
char* __dec_obj91;
struct sNoneNode* __result134__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value235, 0, sizeof(void*));
memset(&right_value236, 0, sizeof(void*));
    __dec_obj90=self->value;
    self->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value235=sNode_clone(value))));
    if(__dec_obj90) { __dec_obj90 = come_decrement_ref_count(__dec_obj90, ((struct sNode*)__dec_obj90)->finalize, ((struct sNode*)__dec_obj90)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value235);
    if(right_value235 && right_value235 != __result_obj__ && !__freed_obj__) { right_value235 = come_decrement_ref_count(right_value235, ((struct sNode*)right_value235)->finalize, ((struct sNode*)right_value235)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value235;
    __freed_obj__ = 0;
    self->sline=info->sline;
    __dec_obj91=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value236=__builtin_string(info->sname))));
    if(__dec_obj91) { __dec_obj91 = come_decrement_ref_count(__dec_obj91, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value236);
    if(right_value236 && right_value236 != __result_obj__ && !__freed_obj__) { right_value236 = come_decrement_ref_count(right_value236, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value236;
    __freed_obj__ = 0;
    __result134__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sNoneNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(value && !__freed_obj__) { value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0); } 
    return __result134__;
    if(self && !__freed_obj__) { come_call_finalizer(sNoneNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(value && !__freed_obj__) { value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0); } 
}

struct sNode* create_none_object(struct sNode* exp, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value237;
void* right_value238;
struct sNode* _inf_value1;
struct sNoneNode* _inf_obj_value1;
void* right_value242;
struct sNode* __result137__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value237, 0, sizeof(void*));
memset(&right_value238, 0, sizeof(void*));
memset(&right_value242, 0, sizeof(void*));
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 773);
    _inf_obj_value1=come_increment_ref_count(((struct sNoneNode*)(right_value238=sNoneNode_initialize((struct sNoneNode*)come_increment_ref_count(((struct sNoneNode*)(right_value237=(struct sNoneNode*)come_calloc(1, sizeof(struct sNoneNode)*(1), "06str.c", 773)))),(struct sNode*)come_increment_ref_count(exp),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sNoneNode_finalize;
    _inf_value1->clone=(void*)sNoneNode_clone;
    _inf_value1->compile=(void*)sNoneNode_compile;
    _inf_value1->sline=(void*)sNoneNode_sline;
    _inf_value1->sname=(void*)sNoneNode_sname;
    _inf_value1->terminated=(void*)sNoneNode_terminated;
    _inf_value1->kind=(void*)sNoneNode_kind;
    __result137__ = __result_obj__ = ((struct sNode*)(right_value242=_inf_value1));
    if(exp && !__freed_obj__) { exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value237);
    if(right_value237 && right_value237 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNoneNode_finalize,right_value237, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value237;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value238);
    if(right_value238 && right_value238 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNoneNode_finalize,right_value238, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value238;
    __freed_obj__ = 0;
    return __result137__;
    if(exp && !__freed_obj__) { exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0); } 
}

static void sNoneNode_finalize(struct sNoneNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional168;
_Bool _if_conditional169;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional168=self!=((void*)0)&&self->value!=((void*)0),        _if_conditional168) {
            if(self->value && !__freed_obj__) { self->value = come_decrement_ref_count(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0); } 
        }
        if(_if_conditional169=self!=((void*)0)&&self->sname!=((void*)0),        _if_conditional169) {
            if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
        }
}

static struct sNoneNode* sNoneNode_clone(struct sNoneNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional170;
struct sNoneNode* __result135__;
void* right_value239;
struct sNoneNode* result_147;
_Bool _if_conditional171;
void* right_value240;
struct sNode* __dec_obj92;
_Bool _if_conditional172;
_Bool _if_conditional173;
void* right_value241;
char* __dec_obj93;
struct sNoneNode* __result136__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value239, 0, sizeof(void*));
memset(&result_147, 0, sizeof(struct sNoneNode*));
memset(&right_value240, 0, sizeof(void*));
memset(&right_value241, 0, sizeof(void*));
        if(_if_conditional170=self==(void*)0,        _if_conditional170) {
            __result135__ = __result_obj__ = (void*)0;
            return __result135__;
        }
        result_147=(struct sNoneNode*)come_increment_ref_count(((struct sNoneNode*)(right_value239=(struct sNoneNode*)come_calloc(1, sizeof(struct sNoneNode)*(1), "sNoneNode_clone", 3))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value239);
        if(right_value239 && right_value239 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNoneNode_finalize,right_value239, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value239;
        __freed_obj__ = 0;
        if(_if_conditional171=self!=((void*)0)&&self->value!=((void*)0),        _if_conditional171) {
            __dec_obj92=result_147->value;
            result_147->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value240=sNode_clone(self->value))));
            if(__dec_obj92) { __dec_obj92 = come_decrement_ref_count(__dec_obj92, ((struct sNode*)__dec_obj92)->finalize, ((struct sNode*)__dec_obj92)->_protocol_obj, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value240);
            if(right_value240 && right_value240 != __result_obj__ && !__freed_obj__) { right_value240 = come_decrement_ref_count(right_value240, ((struct sNode*)right_value240)->finalize, ((struct sNode*)right_value240)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[0] = right_value240;
            __freed_obj__ = 0;
        }
        if(_if_conditional172=self!=((void*)0),        _if_conditional172) {
            result_147->sline=self->sline;
        }
        if(_if_conditional173=self!=((void*)0)&&self->sname!=((void*)0),        _if_conditional173) {
            __dec_obj93=result_147->sname;
            result_147->sname=(char*)come_increment_ref_count(((char*)(right_value241=string_clone(self->sname))));
            if(__dec_obj93) { __dec_obj93 = come_decrement_ref_count(__dec_obj93, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value241);
            if(right_value241 && right_value241 != __result_obj__ && !__freed_obj__) { right_value241 = come_decrement_ref_count(right_value241, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value241;
            __freed_obj__ = 0;
        }
        __result136__ = __result_obj__ = result_147;
        if(result_147 && !__freed_obj__) { come_call_finalizer(sNoneNode_finalize,result_147, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result136__;
        if(result_147 && !__freed_obj__) { come_call_finalizer(sNoneNode_finalize,result_147, (void*)0, (void*)0, 0, 0, 0, 0); }
}

_Bool sNoneNode_terminated(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result138__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result138__ = (_Bool)0;
    return __result138__;
}

char* sNoneNode_kind(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value243;
char* __result139__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value243, 0, sizeof(void*));
    __result139__ = __result_obj__ = ((char*)(right_value243=__builtin_string("sNoneNode")));
    return __result139__;
}

_Bool sNoneNode_compile(struct sNoneNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value244;
void* right_value245;
struct list$1sTypeph* tuple_types_148;
void* right_value246;
void* right_value247;
struct list$1CVALUEph* tuple_values_149;
_Bool _if_conditional174;
_Bool __result140__;
void* right_value248;
struct CVALUE* come_value_150;
_Bool _if_conditional175;
void* right_value252;
void* right_value253;
void* right_value254;
struct sNode* false_node_154;
_Bool _if_conditional178;
_Bool __result142__;
void* right_value255;
struct CVALUE* come_value2_155;
void* right_value256;
void* right_value257;
void* right_value258;
void* right_value259;
struct sType* type_156;
struct list$1sTypeph* o2_saved_157;
struct sType* it_158;
_Bool _for_condtionalA9;
void* right_value260;
void* right_value261;
struct CVALUE* obj_value_159;
void* right_value262;
void* right_value263;
struct buffer* num_string_160;
void* right_value264;
struct sType* type2_161;
void* right_value265;
char* type_name_162;
void* right_value266;
void* right_value267;
char* __dec_obj97;
void* right_value268;
struct sType* type3_163;
void* right_value269;
struct sType* __dec_obj98;
void* right_value270;
char* __dec_obj99;
void* right_value271;
struct sType* obj_type_164;
char* fun_name_165;
void* right_value272;
void* right_value273;
void* right_value274;
char* generics_fun_name_166;
struct sFun* fun_167;
_Bool _if_conditional179;
void* right_value275;
void* right_value276;
char* __dec_obj100;
_Bool _if_conditional180;
_Bool __result143__;
void* right_value277;
struct sType* result_type_168;
void* right_value278;
void* right_value279;
struct list$1CVALUEph* come_params_169;
void* right_value280;
_Bool _if_conditional181;
void* right_value281;
int i_170;
struct list$1CVALUEph* o2_saved_171;
struct CVALUE* it_172;
_Bool _for_condtionalA10;
void* right_value282;
struct CVALUE* come_value_173;
void* right_value283;
void* right_value284;
_Bool _if_conditional182;
void* right_value285;
void* right_value286;
void* right_value287;
struct buffer* buf_174;
int j_175;
struct list$1CVALUEph* o2_saved_176;
struct CVALUE* it_177;
_Bool _for_condtionalA11;
_Bool _if_conditional183;
void* right_value288;
struct CVALUE* come_value3_178;
void* right_value289;
char* __dec_obj101;
_Bool _if_conditional184;
void* right_value290;
void* right_value291;
char* __dec_obj102;
_Bool _if_conditional185;
void* right_value292;
void* right_value293;
void* right_value294;
void* right_value295;
char* __dec_obj103;
void* right_value296;
struct sType* __dec_obj104;
_Bool __result144__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value244, 0, sizeof(void*));
memset(&right_value245, 0, sizeof(void*));
memset(&tuple_types_148, 0, sizeof(struct list$1sTypeph*));
memset(&right_value246, 0, sizeof(void*));
memset(&right_value247, 0, sizeof(void*));
memset(&tuple_values_149, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value248, 0, sizeof(void*));
memset(&come_value_150, 0, sizeof(struct CVALUE*));
memset(&right_value252, 0, sizeof(void*));
memset(&right_value253, 0, sizeof(void*));
memset(&right_value254, 0, sizeof(void*));
memset(&false_node_154, 0, sizeof(struct sNode*));
memset(&right_value255, 0, sizeof(void*));
memset(&come_value2_155, 0, sizeof(struct CVALUE*));
memset(&right_value256, 0, sizeof(void*));
memset(&right_value257, 0, sizeof(void*));
memset(&right_value258, 0, sizeof(void*));
memset(&right_value259, 0, sizeof(void*));
memset(&type_156, 0, sizeof(struct sType*));
memset(&o2_saved_157, 0, sizeof(struct list$1sTypeph*));
memset(&it_158, 0, sizeof(struct sType*));
memset(&right_value260, 0, sizeof(void*));
memset(&right_value261, 0, sizeof(void*));
memset(&obj_value_159, 0, sizeof(struct CVALUE*));
memset(&right_value262, 0, sizeof(void*));
memset(&right_value263, 0, sizeof(void*));
memset(&num_string_160, 0, sizeof(struct buffer*));
memset(&right_value264, 0, sizeof(void*));
memset(&type2_161, 0, sizeof(struct sType*));
memset(&right_value265, 0, sizeof(void*));
memset(&type_name_162, 0, sizeof(char*));
memset(&right_value266, 0, sizeof(void*));
memset(&right_value267, 0, sizeof(void*));
memset(&right_value268, 0, sizeof(void*));
memset(&type3_163, 0, sizeof(struct sType*));
memset(&right_value269, 0, sizeof(void*));
memset(&right_value270, 0, sizeof(void*));
memset(&right_value271, 0, sizeof(void*));
memset(&obj_type_164, 0, sizeof(struct sType*));
memset(&fun_name_165, 0, sizeof(char*));
memset(&right_value272, 0, sizeof(void*));
memset(&right_value273, 0, sizeof(void*));
memset(&right_value274, 0, sizeof(void*));
memset(&generics_fun_name_166, 0, sizeof(char*));
memset(&fun_167, 0, sizeof(struct sFun*));
memset(&right_value275, 0, sizeof(void*));
memset(&right_value276, 0, sizeof(void*));
memset(&right_value277, 0, sizeof(void*));
memset(&result_type_168, 0, sizeof(struct sType*));
memset(&right_value278, 0, sizeof(void*));
memset(&right_value279, 0, sizeof(void*));
memset(&come_params_169, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value280, 0, sizeof(void*));
memset(&right_value281, 0, sizeof(void*));
memset(&i_170, 0, sizeof(int));
memset(&o2_saved_171, 0, sizeof(struct list$1CVALUEph*));
memset(&it_172, 0, sizeof(struct CVALUE*));
memset(&right_value282, 0, sizeof(void*));
memset(&come_value_173, 0, sizeof(struct CVALUE*));
memset(&right_value283, 0, sizeof(void*));
memset(&right_value284, 0, sizeof(void*));
memset(&right_value285, 0, sizeof(void*));
memset(&right_value286, 0, sizeof(void*));
memset(&right_value287, 0, sizeof(void*));
memset(&buf_174, 0, sizeof(struct buffer*));
memset(&j_175, 0, sizeof(int));
memset(&o2_saved_176, 0, sizeof(struct list$1CVALUEph*));
memset(&it_177, 0, sizeof(struct CVALUE*));
memset(&right_value288, 0, sizeof(void*));
memset(&come_value3_178, 0, sizeof(struct CVALUE*));
memset(&right_value289, 0, sizeof(void*));
memset(&right_value290, 0, sizeof(void*));
memset(&right_value291, 0, sizeof(void*));
memset(&right_value292, 0, sizeof(void*));
memset(&right_value293, 0, sizeof(void*));
memset(&right_value294, 0, sizeof(void*));
memset(&right_value295, 0, sizeof(void*));
memset(&right_value296, 0, sizeof(void*));
    tuple_types_148=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value245=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value244=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "06str.c", 788))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value244);
    if(right_value244 && right_value244 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value244, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value244;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value245);
    if(right_value245 && right_value245 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value245, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value245;
    __freed_obj__ = 0;
    tuple_values_149=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value247=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value246=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 789))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value246);
    if(right_value246 && right_value246 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value246, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value246;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value247);
    if(right_value247 && right_value247 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value247, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value247;
    __freed_obj__ = 0;
    if(_if_conditional174=!node_compile(self->value,info),    _if_conditional174) {
        __result140__ = (_Bool)0;
        if(tuple_types_148 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,tuple_types_148, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(tuple_values_149 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,tuple_values_149, (void*)0, (void*)0, 0, 0, 0, 0); }
        return __result140__;
    }
    come_value_150=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value248=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value248);
    if(right_value248 && right_value248 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value248, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value248;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    if(_if_conditional175=come_value_150->type->mNoSolvedGenericsType&&come_value_150->type->mNoSolvedGenericsType->v1&&string_operator_equals(come_value_150->type->mNoSolvedGenericsType->v1->mClass->mName,"optional"),    _if_conditional175) {
        list$1CVALUEph_add(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_150));
    }
    else {
        list$1CVALUEph_push_back(tuple_values_149,(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value252=CVALUE_clone(come_value_150)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value252);
        if(right_value252 && right_value252 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value252, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value252;
        __freed_obj__ = 0;
        list$1sTypeph_push_back(tuple_types_148,(struct sType*)come_increment_ref_count(((struct sType*)(right_value253=sType_clone(come_value_150->type)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value253);
        if(right_value253 && right_value253 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value253, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value253;
        __freed_obj__ = 0;
        false_node_154=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value254=create_false_object(info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value254);
        if(right_value254 && right_value254 != __result_obj__ && !__freed_obj__) { right_value254 = come_decrement_ref_count(right_value254, ((struct sNode*)right_value254)->finalize, ((struct sNode*)right_value254)->_protocol_obj, 1, 0, 0); } 
        __right_value_freed_obj[2] = right_value254;
        __freed_obj__ = 0;
        if(_if_conditional178=!node_compile(false_node_154,info),        _if_conditional178) {
            __result142__ = (_Bool)0;
            if(false_node_154 && !__freed_obj__) { false_node_154 = come_decrement_ref_count(false_node_154, ((struct sNode*)false_node_154)->finalize, ((struct sNode*)false_node_154)->_protocol_obj, 0, 0, 0); } 
            if(tuple_types_148 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,tuple_types_148, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(tuple_values_149 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,tuple_values_149, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(come_value_150 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_150, (void*)0, (void*)0, 0, 0, 0, 0); }
            return __result142__;
        }
        come_value2_155=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value255=get_value_from_stack(-1,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value255);
        if(right_value255 && right_value255 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value255, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value255;
        __freed_obj__ = 0;
        dec_stack_ptr(1,info);
        list$1CVALUEph_push_back(tuple_values_149,(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value256=CVALUE_clone(come_value2_155)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value256);
        if(right_value256 && right_value256 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value256, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[4] = right_value256;
        __freed_obj__ = 0;
        list$1sTypeph_push_back(tuple_types_148,(struct sType*)come_increment_ref_count(((struct sType*)(right_value257=sType_clone(come_value2_155->type)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value257);
        if(right_value257 && right_value257 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value257, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[5] = right_value257;
        __freed_obj__ = 0;
        type_156=(struct sType*)come_increment_ref_count(((struct sType*)(right_value259=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value258=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 817)))),"optional",(_Bool)0,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value258);
        if(right_value258 && right_value258 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value258, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[6] = right_value258;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value259);
        if(right_value259 && right_value259 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value259, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[7] = right_value259;
        __freed_obj__ = 0;
        for(
        o2_saved_157=(struct list$1sTypeph*)come_increment_ref_count((tuple_types_148)),it_158=list$1sTypeph_begin((o2_saved_157)) ,        0;        _for_condtionalA9=        !list$1sTypeph_end((o2_saved_157)) ,        _for_condtionalA9;        it_158=list$1sTypeph_next((o2_saved_157)) ,        0        ){
            list$1sTypeph_push_back(type_156->mGenericsTypes,(struct sType*)come_increment_ref_count(((struct sType*)(right_value260=sType_clone(it_158)))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value260);
            if(right_value260 && right_value260 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value260, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value260;
            __freed_obj__ = 0;
        }
        if(o2_saved_157 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_157, (void*)0, (void*)0, 0, 0, 0, 0); }
        obj_value_159=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value261=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 823))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value261);
        if(right_value261 && right_value261 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value261, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[8] = right_value261;
        __freed_obj__ = 0;
        num_string_160=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value263=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value262=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 825))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 9, right_value262);
        if(right_value262 && right_value262 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value262, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[9] = right_value262;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 10, right_value263);
        if(right_value263 && right_value263 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value263, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[10] = right_value263;
        __freed_obj__ = 0;
        buffer_append_str(num_string_160,"1");
        type2_161=(struct sType*)come_increment_ref_count(((struct sType*)(right_value264=solve_generics(type_156,type_156,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 11, right_value264);
        if(right_value264 && right_value264 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value264, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[11] = right_value264;
        __freed_obj__ = 0;
        type_name_162=(char*)come_increment_ref_count(optional$2charphbool_expect(((struct optional$2charphbool*)(right_value265=make_type_name_string(type2_161,(_Bool)0,(_Bool)1,(_Bool)0,info)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 12, right_value265);
        if(right_value265 && right_value265 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value265, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[12] = right_value265;
        __freed_obj__ = 0;
        __dec_obj97=obj_value_159->c_value;
        obj_value_159->c_value=(char*)come_increment_ref_count(((char*)(right_value267=xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d)",type_name_162,type_name_162,((char*)(right_value266=buffer_to_string(num_string_160))),info->sname,info->sline))));
        if(__dec_obj97) { __dec_obj97 = come_decrement_ref_count(__dec_obj97, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 13, right_value266);
        if(right_value266 && right_value266 != __result_obj__ && !__freed_obj__) { right_value266 = come_decrement_ref_count(right_value266, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[13] = right_value266;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 14, right_value267);
        if(right_value267 && right_value267 != __result_obj__ && !__freed_obj__) { right_value267 = come_decrement_ref_count(right_value267, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[14] = right_value267;
        __freed_obj__ = 0;
        type3_163=(struct sType*)come_increment_ref_count(((struct sType*)(right_value268=sType_clone(type2_161))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 15, right_value268);
        if(right_value268 && right_value268 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value268, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[15] = right_value268;
        __freed_obj__ = 0;
        type3_163->mPointerNum++;
        type3_163->mHeap=(_Bool)1;
        type2_161->mHeap=(_Bool)1;
        __dec_obj98=obj_value_159->type;
        obj_value_159->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value269=sType_clone(type_156))));
        if(__dec_obj98) { come_call_finalizer(sType_finalize,__dec_obj98, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 16, right_value269);
        if(right_value269 && right_value269 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value269, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[16] = right_value269;
        __freed_obj__ = 0;
        __dec_obj99=obj_value_159->c_value;
        obj_value_159->c_value=(char*)come_increment_ref_count(((char*)(right_value270=append_object_to_right_values(obj_value_159->c_value,(struct sType*)come_increment_ref_count(type3_163),info))));
        if(__dec_obj99) { __dec_obj99 = come_decrement_ref_count(__dec_obj99, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 17, right_value270);
        if(right_value270 && right_value270 != __result_obj__ && !__freed_obj__) { right_value270 = come_decrement_ref_count(right_value270, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[17] = right_value270;
        __freed_obj__ = 0;
        obj_value_159->type->mPointerNum++;
        obj_value_159->var=((void*)0);
        obj_type_164=(struct sType*)come_increment_ref_count(((struct sType*)(right_value271=sType_clone(type2_161))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 18, right_value271);
        if(right_value271 && right_value271 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value271, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[18] = right_value271;
        __freed_obj__ = 0;
        fun_name_165="initialize";
        generics_fun_name_166=(char*)come_increment_ref_count(((char*)(right_value274=string_to_string(((char*)(right_value273=make_generics_function(obj_type_164,(char*)come_increment_ref_count(((char*)(right_value272=__builtin_string(fun_name_165)))),info)))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 19, right_value272);
        if(right_value272 && right_value272 != __result_obj__ && !__freed_obj__) { right_value272 = come_decrement_ref_count(right_value272, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[19] = right_value272;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 20, right_value273);
        if(right_value273 && right_value273 != __result_obj__ && !__freed_obj__) { right_value273 = come_decrement_ref_count(right_value273, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[20] = right_value273;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 21, right_value274);
        if(right_value274 && right_value274 != __result_obj__ && !__freed_obj__) { right_value274 = come_decrement_ref_count(right_value274, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[21] = right_value274;
        __freed_obj__ = 0;
        fun_167=map$2charphsFunph_at(info->funcs,generics_fun_name_166,((void*)0));
        if(_if_conditional179=fun_167==((void*)0),        _if_conditional179) {
            __dec_obj100=generics_fun_name_166;
            generics_fun_name_166=(char*)come_increment_ref_count(((char*)(right_value276=create_method_name(obj_type_164,(_Bool)0,((char*)(right_value275=__builtin_string(fun_name_165))),info))));
            if(__dec_obj100) { __dec_obj100 = come_decrement_ref_count(__dec_obj100, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value275);
            if(right_value275 && right_value275 != __result_obj__ && !__freed_obj__) { right_value275 = come_decrement_ref_count(right_value275, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value275;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value276);
            if(right_value276 && right_value276 != __result_obj__ && !__freed_obj__) { right_value276 = come_decrement_ref_count(right_value276, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value276;
            __freed_obj__ = 0;
            fun_167=map$2charphsFunph_at(info->funcs,generics_fun_name_166,((void*)0));
            if(_if_conditional180=fun_167==((void*)0),            _if_conditional180) {
                err_msg(info,"function not found(%s) at method(%s)(2)\n",generics_fun_name_166,info->come_fun->mName);
                __result143__ = (_Bool)1;
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
                return __result143__;
            }
        }
        result_type_168=(struct sType*)come_increment_ref_count(((struct sType*)(right_value277=sType_clone(fun_167->mResultType))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 22, right_value277);
        if(right_value277 && right_value277 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value277, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[22] = right_value277;
        __freed_obj__ = 0;
        result_type_168->mStatic=(_Bool)0;
        come_params_169=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value279=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value278=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 865))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 23, right_value278);
        if(right_value278 && right_value278 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value278, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[23] = right_value278;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 24, right_value279);
        if(right_value279 && right_value279 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value279, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[24] = right_value279;
        __freed_obj__ = 0;
        if(_if_conditional181=optional$2sTypephbool_value(((struct optional$2sTypephbool*)(right_value280=list$1sTypephp_operator_load_element(fun_167->mParamTypes,0))))->mHeap&&obj_value_159->type->mHeap,        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 25, right_value280),
        (right_value280 && right_value280 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2sTypephboolp_finalize,right_value280, (void*)0, (void*)0, 0, 1, 0, 0):0,
        __right_value_freed_obj[25] = right_value280, 
        __freed_obj__ = 0, 
        _if_conditional181) {
            std_move(optional$2sTypephbool_value(((struct optional$2sTypephbool*)(right_value281=list$1sTypephp_operator_load_element(fun_167->mParamTypes,0)))),obj_value_159->type,obj_value_159,info);
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value281);
            if(right_value281 && right_value281 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,right_value281, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value281;
            __freed_obj__ = 0;
        }
        list$1CVALUEph_push_back(come_params_169,(struct CVALUE*)come_increment_ref_count(obj_value_159));
        i_170=1;
        for(
        o2_saved_171=(struct list$1CVALUEph*)come_increment_ref_count((tuple_values_149)),it_172=list$1CVALUEph_begin((o2_saved_171)) ,        0;        _for_condtionalA10=        !list$1CVALUEph_end((o2_saved_171)) ,        _for_condtionalA10;        it_172=list$1CVALUEph_next((o2_saved_171)) ,        0        ){
            come_value_173=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value282=CVALUE_clone(it_172))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value282);
            if(right_value282 && right_value282 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value282, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value282;
            __freed_obj__ = 0;
            if(_if_conditional182=optional$2sTypephbool_value(((struct optional$2sTypephbool*)(right_value283=list$1sTypephp_operator_load_element(fun_167->mParamTypes,i_170))))&&optional$2sTypephbool_value(((struct optional$2sTypephbool*)(right_value284=list$1sTypephp_operator_load_element(fun_167->mParamTypes,i_170))))->mHeap&&come_value_173->type->mHeap,            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value283),
            (right_value283 && right_value283 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2sTypephboolp_finalize,right_value283, (void*)0, (void*)0, 0, 1, 0, 0):0,
            __right_value_freed_obj[1] = right_value283, 
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value284),
            (right_value284 && right_value284 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2sTypephboolp_finalize,right_value284, (void*)0, (void*)0, 0, 1, 0, 0):0,
            __right_value_freed_obj[2] = right_value284, 
            __freed_obj__ = 0, 
            _if_conditional182) {
                std_move(optional$2sTypephbool_value(((struct optional$2sTypephbool*)(right_value285=list$1sTypephp_operator_load_element(fun_167->mParamTypes,i_170)))),come_value_173->type,come_value_173,info);
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value285);
                if(right_value285 && right_value285 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,right_value285, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value285;
                __freed_obj__ = 0;
            }
            list$1CVALUEph_push_back(come_params_169,(struct CVALUE*)come_increment_ref_count(come_value_173));
            i_170++;
            if(come_value_173 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_173, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(o2_saved_171 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,o2_saved_171, (void*)0, (void*)0, 0, 0, 0, 0); }
        buf_174=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value287=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value286=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 884))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 26, right_value286);
        if(right_value286 && right_value286 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value286, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[26] = right_value286;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 27, right_value287);
        if(right_value287 && right_value287 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value287, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[27] = right_value287;
        __freed_obj__ = 0;
        buffer_append_str(buf_174,generics_fun_name_166);
        buffer_append_str(buf_174,"(");
        j_175=0;
        for(
        o2_saved_176=(struct list$1CVALUEph*)come_increment_ref_count((come_params_169)),it_177=list$1CVALUEph_begin((o2_saved_176)) ,        0;        _for_condtionalA11=        !list$1CVALUEph_end((o2_saved_176)) ,        _for_condtionalA11;        it_177=list$1CVALUEph_next((o2_saved_176)) ,        0        ){
            buffer_append_str(buf_174,it_177->c_value);
            if(_if_conditional183=j_175!=list$1CVALUEph_length(come_params_169)-1,            _if_conditional183) {
                buffer_append_str(buf_174,",");
            }
            j_175++;
        }
        if(o2_saved_176 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,o2_saved_176, (void*)0, (void*)0, 0, 0, 0, 0); }
        buffer_append_str(buf_174,")");
        come_value3_178=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value288=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 901))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 28, right_value288);
        if(right_value288 && right_value288 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value288, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[28] = right_value288;
        __freed_obj__ = 0;
        __dec_obj101=come_value3_178->c_value;
        come_value3_178->c_value=(char*)come_increment_ref_count(((char*)(right_value289=buffer_to_string(buf_174))));
        if(__dec_obj101) { __dec_obj101 = come_decrement_ref_count(__dec_obj101, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 29, right_value289);
        if(right_value289 && right_value289 != __result_obj__ && !__freed_obj__) { right_value289 = come_decrement_ref_count(right_value289, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[29] = right_value289;
        __freed_obj__ = 0;
        if(_if_conditional184=result_type_168->mHeap,        _if_conditional184) {
            __dec_obj102=come_value3_178->c_value;
            come_value3_178->c_value=(char*)come_increment_ref_count(((char*)(right_value291=append_object_to_right_values(((char*)(right_value290=buffer_to_string(buf_174))),(struct sType*)come_increment_ref_count(result_type_168),info))));
            if(__dec_obj102) { __dec_obj102 = come_decrement_ref_count(__dec_obj102, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value290);
            if(right_value290 && right_value290 != __result_obj__ && !__freed_obj__) { right_value290 = come_decrement_ref_count(right_value290, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value290;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value291);
            if(right_value291 && right_value291 != __result_obj__ && !__freed_obj__) { right_value291 = come_decrement_ref_count(right_value291, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value291;
            __freed_obj__ = 0;
        }
        if(_if_conditional185=gComeDebug,        _if_conditional185) {
            __dec_obj103=come_value3_178->c_value;
            come_value3_178->c_value=(char*)come_increment_ref_count(((char*)(right_value295=xsprintf("(come_save_stackframe(\"\%s\", \%s), \%s)",((char*)(right_value292=string_to_string(info->sname))),((char*)(right_value293=int_to_string(info->sline))),((char*)(right_value294=string_to_string(come_value3_178->c_value)))))));
            if(__dec_obj103) { __dec_obj103 = come_decrement_ref_count(__dec_obj103, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value292);
            if(right_value292 && right_value292 != __result_obj__ && !__freed_obj__) { right_value292 = come_decrement_ref_count(right_value292, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value292;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value293);
            if(right_value293 && right_value293 != __result_obj__ && !__freed_obj__) { right_value293 = come_decrement_ref_count(right_value293, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value293;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value294);
            if(right_value294 && right_value294 != __result_obj__ && !__freed_obj__) { right_value294 = come_decrement_ref_count(right_value294, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value294;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value295);
            if(right_value295 && right_value295 != __result_obj__ && !__freed_obj__) { right_value295 = come_decrement_ref_count(right_value295, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[3] = right_value295;
            __freed_obj__ = 0;
        }
        __dec_obj104=come_value3_178->type;
        come_value3_178->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value296=sType_clone(result_type_168))));
        if(__dec_obj104) { come_call_finalizer(sType_finalize,__dec_obj104, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 30, right_value296);
        if(right_value296 && right_value296 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value296, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[30] = right_value296;
        __freed_obj__ = 0;
        come_value3_178->type->mStatic=(_Bool)0;
        come_value3_178->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value3_178->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value3_178));
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
    __result144__ = (_Bool)1;
    if(tuple_types_148 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,tuple_types_148, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(tuple_values_149 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,tuple_values_149, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value_150 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_150, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result144__;
    if(tuple_types_148 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,tuple_types_148, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(tuple_values_149 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,tuple_values_149, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value_150 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_150, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1CVALUEph* list$1CVALUEph_add(struct list$1CVALUEph* self, struct CVALUE* item){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional176;
void* right_value249;
struct list_item$1CVALUEph* litem_151;
struct CVALUE* __dec_obj94;
_Bool _if_conditional177;
void* right_value250;
struct list_item$1CVALUEph* litem_152;
struct CVALUE* __dec_obj95;
void* right_value251;
struct list_item$1CVALUEph* litem_153;
struct CVALUE* __dec_obj96;
struct list$1CVALUEph* __result141__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value249, 0, sizeof(void*));
memset(&litem_151, 0, sizeof(struct list_item$1CVALUEph*));
memset(&right_value250, 0, sizeof(void*));
memset(&litem_152, 0, sizeof(struct list_item$1CVALUEph*));
memset(&right_value251, 0, sizeof(void*));
memset(&litem_153, 0, sizeof(struct list_item$1CVALUEph*));
            if(_if_conditional176=self->len==0,            _if_conditional176) {
                litem_151=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value249=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 213))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value249);
                if(right_value249 && right_value249 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value249, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value249;
                __freed_obj__ = 0;
                litem_151->prev=((void*)0);
                litem_151->next=((void*)0);
                __dec_obj94=litem_151->item;
                litem_151->item=(struct CVALUE*)come_increment_ref_count(item);
                if(__dec_obj94) { come_call_finalizer(CVALUE_finalize,__dec_obj94, (void*)0, (void*)0, 0, 0, 0, 0); }
                self->tail=litem_151;
                self->head=litem_151;
            }
            else {
                if(_if_conditional177=self->len==1,                _if_conditional177) {
                    litem_152=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value250=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 223))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value250);
                    if(right_value250 && right_value250 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value250, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value250;
                    __freed_obj__ = 0;
                    litem_152->prev=self->head;
                    litem_152->next=((void*)0);
                    __dec_obj95=litem_152->item;
                    litem_152->item=(struct CVALUE*)come_increment_ref_count(item);
                    if(__dec_obj95) { come_call_finalizer(CVALUE_finalize,__dec_obj95, (void*)0, (void*)0, 0, 0, 0, 0); }
                    self->tail=litem_152;
                    self->head->next=litem_152;
                }
                else {
                    litem_153=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value251=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 233))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value251);
                    if(right_value251 && right_value251 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value251, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value251;
                    __freed_obj__ = 0;
                    litem_153->prev=self->tail;
                    litem_153->next=((void*)0);
                    __dec_obj96=litem_153->item;
                    litem_153->item=(struct CVALUE*)come_increment_ref_count(item);
                    if(__dec_obj96) { come_call_finalizer(CVALUE_finalize,__dec_obj96, (void*)0, (void*)0, 0, 0, 0, 0); }
                    self->tail->next=litem_153;
                    self->tail=litem_153;
                }
            }
            self->len++;
            __result141__ = __result_obj__ = self;
            if(item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
            return __result141__;
            if(item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

int sNoneNode_sline(struct sNoneNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result145__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result145__ = self->sline;
    return __result145__;
}

char* sNoneNode_sname(struct sNoneNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value297;
char* __result146__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value297, 0, sizeof(void*));
    __result146__ = __result_obj__ = ((char*)(right_value297=__builtin_string(self->sname)));
    return __result146__;
}

struct sSomeNode* sSomeNode_initialize(struct sSomeNode* self, struct sNode* value, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* __dec_obj105;
void* right_value298;
char* __dec_obj106;
struct sSomeNode* __result147__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value298, 0, sizeof(void*));
    __dec_obj105=self->value;
    self->value=(struct sNode*)come_increment_ref_count(value);
    if(__dec_obj105) { __dec_obj105 = come_decrement_ref_count(__dec_obj105, ((struct sNode*)__dec_obj105)->finalize, ((struct sNode*)__dec_obj105)->_protocol_obj, 0,0,0); }
    self->sline=info->sline;
    __dec_obj106=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value298=__builtin_string(info->sname))));
    if(__dec_obj106) { __dec_obj106 = come_decrement_ref_count(__dec_obj106, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value298);
    if(right_value298 && right_value298 != __result_obj__ && !__freed_obj__) { right_value298 = come_decrement_ref_count(right_value298, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value298;
    __freed_obj__ = 0;
    __result147__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sSomeNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(value && !__freed_obj__) { value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0); } 
    return __result147__;
    if(self && !__freed_obj__) { come_call_finalizer(sSomeNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(value && !__freed_obj__) { value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0); } 
}

struct sNode* create_some_object(struct sNode* exp, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value299;
void* right_value300;
struct sNode* _inf_value2;
struct sSomeNode* _inf_obj_value2;
void* right_value304;
struct sNode* __result150__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value299, 0, sizeof(void*));
memset(&right_value300, 0, sizeof(void*));
memset(&right_value304, 0, sizeof(void*));
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 955);
    _inf_obj_value2=come_increment_ref_count(((struct sSomeNode*)(right_value300=sSomeNode_initialize((struct sSomeNode*)come_increment_ref_count(((struct sSomeNode*)(right_value299=(struct sSomeNode*)come_calloc(1, sizeof(struct sSomeNode)*(1), "06str.c", 955)))),(struct sNode*)come_increment_ref_count(exp),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sSomeNode_finalize;
    _inf_value2->clone=(void*)sSomeNode_clone;
    _inf_value2->compile=(void*)sSomeNode_compile;
    _inf_value2->sline=(void*)sSomeNode_sline;
    _inf_value2->sname=(void*)sSomeNode_sname;
    _inf_value2->terminated=(void*)sSomeNode_terminated;
    _inf_value2->kind=(void*)sSomeNode_kind;
    __result150__ = __result_obj__ = ((struct sNode*)(right_value304=_inf_value2));
    if(exp && !__freed_obj__) { exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value299);
    if(right_value299 && right_value299 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sSomeNode_finalize,right_value299, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value299;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value300);
    if(right_value300 && right_value300 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sSomeNode_finalize,right_value300, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value300;
    __freed_obj__ = 0;
    return __result150__;
    if(exp && !__freed_obj__) { exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0); } 
}

static void sSomeNode_finalize(struct sSomeNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional188;
_Bool _if_conditional189;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional188=self!=((void*)0)&&self->value!=((void*)0),        _if_conditional188) {
            if(self->value && !__freed_obj__) { self->value = come_decrement_ref_count(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0); } 
        }
        if(_if_conditional189=self!=((void*)0)&&self->sname!=((void*)0),        _if_conditional189) {
            if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
        }
}

static struct sSomeNode* sSomeNode_clone(struct sSomeNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional190;
struct sSomeNode* __result148__;
void* right_value301;
struct sSomeNode* result_179;
_Bool _if_conditional191;
void* right_value302;
struct sNode* __dec_obj107;
_Bool _if_conditional192;
_Bool _if_conditional193;
void* right_value303;
char* __dec_obj108;
struct sSomeNode* __result149__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value301, 0, sizeof(void*));
memset(&result_179, 0, sizeof(struct sSomeNode*));
memset(&right_value302, 0, sizeof(void*));
memset(&right_value303, 0, sizeof(void*));
        if(_if_conditional190=self==(void*)0,        _if_conditional190) {
            __result148__ = __result_obj__ = (void*)0;
            return __result148__;
        }
        result_179=(struct sSomeNode*)come_increment_ref_count(((struct sSomeNode*)(right_value301=(struct sSomeNode*)come_calloc(1, sizeof(struct sSomeNode)*(1), "sSomeNode_clone", 3))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value301);
        if(right_value301 && right_value301 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sSomeNode_finalize,right_value301, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value301;
        __freed_obj__ = 0;
        if(_if_conditional191=self!=((void*)0)&&self->value!=((void*)0),        _if_conditional191) {
            __dec_obj107=result_179->value;
            result_179->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value302=sNode_clone(self->value))));
            if(__dec_obj107) { __dec_obj107 = come_decrement_ref_count(__dec_obj107, ((struct sNode*)__dec_obj107)->finalize, ((struct sNode*)__dec_obj107)->_protocol_obj, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value302);
            if(right_value302 && right_value302 != __result_obj__ && !__freed_obj__) { right_value302 = come_decrement_ref_count(right_value302, ((struct sNode*)right_value302)->finalize, ((struct sNode*)right_value302)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[0] = right_value302;
            __freed_obj__ = 0;
        }
        if(_if_conditional192=self!=((void*)0),        _if_conditional192) {
            result_179->sline=self->sline;
        }
        if(_if_conditional193=self!=((void*)0)&&self->sname!=((void*)0),        _if_conditional193) {
            __dec_obj108=result_179->sname;
            result_179->sname=(char*)come_increment_ref_count(((char*)(right_value303=string_clone(self->sname))));
            if(__dec_obj108) { __dec_obj108 = come_decrement_ref_count(__dec_obj108, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value303);
            if(right_value303 && right_value303 != __result_obj__ && !__freed_obj__) { right_value303 = come_decrement_ref_count(right_value303, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value303;
            __freed_obj__ = 0;
        }
        __result149__ = __result_obj__ = result_179;
        if(result_179 && !__freed_obj__) { come_call_finalizer(sSomeNode_finalize,result_179, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result149__;
        if(result_179 && !__freed_obj__) { come_call_finalizer(sSomeNode_finalize,result_179, (void*)0, (void*)0, 0, 0, 0, 0); }
}

_Bool sSomeNode_terminated(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result151__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result151__ = (_Bool)0;
    return __result151__;
}

char* sSomeNode_kind(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value305;
char* __result152__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value305, 0, sizeof(void*));
    __result152__ = __result_obj__ = ((char*)(right_value305=__builtin_string("sSomeNode")));
    return __result152__;
}

_Bool sSomeNode_compile(struct sSomeNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value306;
void* right_value307;
struct list$1sTypeph* tuple_types_180;
void* right_value308;
void* right_value309;
struct list$1CVALUEph* tuple_values_181;
_Bool _if_conditional194;
_Bool __result153__;
void* right_value310;
struct CVALUE* come_value_182;
_Bool _if_conditional195;
struct tuple1$1sTypeph* mNoSolvedGenericsType_183;
void* right_value311;
void* right_value312;
void* right_value313;
struct sNode* true_node_184;
_Bool _if_conditional196;
_Bool __result154__;
void* right_value314;
struct CVALUE* come_value2_185;
void* right_value315;
void* right_value316;
void* right_value317;
void* right_value318;
struct sType* type_186;
struct list$1sTypeph* o2_saved_187;
struct sType* it_188;
_Bool _for_condtionalA12;
void* right_value319;
void* right_value320;
struct CVALUE* obj_value_189;
void* right_value321;
void* right_value322;
struct buffer* num_string_190;
void* right_value323;
struct sType* type2_191;
void* right_value324;
char* type_name_192;
void* right_value325;
void* right_value326;
char* __dec_obj109;
void* right_value327;
struct sType* type3_193;
void* right_value328;
struct sType* __dec_obj110;
void* right_value329;
char* __dec_obj111;
void* right_value330;
struct sType* obj_type_194;
char* fun_name_195;
void* right_value331;
void* right_value332;
void* right_value333;
char* generics_fun_name_196;
struct sFun* fun_197;
_Bool _if_conditional197;
void* right_value334;
void* right_value335;
char* __dec_obj112;
_Bool _if_conditional198;
_Bool __result155__;
void* right_value336;
struct sType* result_type_198;
void* right_value337;
void* right_value338;
struct list$1CVALUEph* come_params_199;
void* right_value339;
_Bool _if_conditional199;
void* right_value340;
int i_200;
struct list$1CVALUEph* o2_saved_201;
struct CVALUE* it_202;
_Bool _for_condtionalA13;
void* right_value341;
struct CVALUE* come_value_203;
void* right_value342;
void* right_value343;
_Bool _if_conditional200;
void* right_value344;
void* right_value345;
void* right_value346;
struct buffer* buf_204;
int j_205;
struct list$1CVALUEph* o2_saved_206;
struct CVALUE* it_207;
_Bool _for_condtionalA14;
_Bool _if_conditional201;
void* right_value347;
struct CVALUE* come_value3_208;
void* right_value348;
char* __dec_obj113;
_Bool _if_conditional202;
void* right_value349;
void* right_value350;
char* __dec_obj114;
void* right_value351;
struct sType* __dec_obj115;
void* right_value352;
_Bool __result156__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value306, 0, sizeof(void*));
memset(&right_value307, 0, sizeof(void*));
memset(&tuple_types_180, 0, sizeof(struct list$1sTypeph*));
memset(&right_value308, 0, sizeof(void*));
memset(&right_value309, 0, sizeof(void*));
memset(&tuple_values_181, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value310, 0, sizeof(void*));
memset(&come_value_182, 0, sizeof(struct CVALUE*));
memset(&mNoSolvedGenericsType_183, 0, sizeof(struct tuple1$1sTypeph*));
memset(&right_value311, 0, sizeof(void*));
memset(&right_value312, 0, sizeof(void*));
memset(&right_value313, 0, sizeof(void*));
memset(&true_node_184, 0, sizeof(struct sNode*));
memset(&right_value314, 0, sizeof(void*));
memset(&come_value2_185, 0, sizeof(struct CVALUE*));
memset(&right_value315, 0, sizeof(void*));
memset(&right_value316, 0, sizeof(void*));
memset(&right_value317, 0, sizeof(void*));
memset(&right_value318, 0, sizeof(void*));
memset(&type_186, 0, sizeof(struct sType*));
memset(&o2_saved_187, 0, sizeof(struct list$1sTypeph*));
memset(&it_188, 0, sizeof(struct sType*));
memset(&right_value319, 0, sizeof(void*));
memset(&right_value320, 0, sizeof(void*));
memset(&obj_value_189, 0, sizeof(struct CVALUE*));
memset(&right_value321, 0, sizeof(void*));
memset(&right_value322, 0, sizeof(void*));
memset(&num_string_190, 0, sizeof(struct buffer*));
memset(&right_value323, 0, sizeof(void*));
memset(&type2_191, 0, sizeof(struct sType*));
memset(&right_value324, 0, sizeof(void*));
memset(&type_name_192, 0, sizeof(char*));
memset(&right_value325, 0, sizeof(void*));
memset(&right_value326, 0, sizeof(void*));
memset(&right_value327, 0, sizeof(void*));
memset(&type3_193, 0, sizeof(struct sType*));
memset(&right_value328, 0, sizeof(void*));
memset(&right_value329, 0, sizeof(void*));
memset(&right_value330, 0, sizeof(void*));
memset(&obj_type_194, 0, sizeof(struct sType*));
memset(&fun_name_195, 0, sizeof(char*));
memset(&right_value331, 0, sizeof(void*));
memset(&right_value332, 0, sizeof(void*));
memset(&right_value333, 0, sizeof(void*));
memset(&generics_fun_name_196, 0, sizeof(char*));
memset(&fun_197, 0, sizeof(struct sFun*));
memset(&right_value334, 0, sizeof(void*));
memset(&right_value335, 0, sizeof(void*));
memset(&right_value336, 0, sizeof(void*));
memset(&result_type_198, 0, sizeof(struct sType*));
memset(&right_value337, 0, sizeof(void*));
memset(&right_value338, 0, sizeof(void*));
memset(&come_params_199, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value339, 0, sizeof(void*));
memset(&right_value340, 0, sizeof(void*));
memset(&i_200, 0, sizeof(int));
memset(&o2_saved_201, 0, sizeof(struct list$1CVALUEph*));
memset(&it_202, 0, sizeof(struct CVALUE*));
memset(&right_value341, 0, sizeof(void*));
memset(&come_value_203, 0, sizeof(struct CVALUE*));
memset(&right_value342, 0, sizeof(void*));
memset(&right_value343, 0, sizeof(void*));
memset(&right_value344, 0, sizeof(void*));
memset(&right_value345, 0, sizeof(void*));
memset(&right_value346, 0, sizeof(void*));
memset(&buf_204, 0, sizeof(struct buffer*));
memset(&j_205, 0, sizeof(int));
memset(&o2_saved_206, 0, sizeof(struct list$1CVALUEph*));
memset(&it_207, 0, sizeof(struct CVALUE*));
memset(&right_value347, 0, sizeof(void*));
memset(&come_value3_208, 0, sizeof(struct CVALUE*));
memset(&right_value348, 0, sizeof(void*));
memset(&right_value349, 0, sizeof(void*));
memset(&right_value350, 0, sizeof(void*));
memset(&right_value351, 0, sizeof(void*));
memset(&right_value352, 0, sizeof(void*));
    tuple_types_180=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value307=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value306=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "06str.c", 970))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value306);
    if(right_value306 && right_value306 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value306, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value306;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value307);
    if(right_value307 && right_value307 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value307, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value307;
    __freed_obj__ = 0;
    tuple_values_181=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value309=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value308=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 971))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value308);
    if(right_value308 && right_value308 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value308, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value308;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value309);
    if(right_value309 && right_value309 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value309, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value309;
    __freed_obj__ = 0;
    if(_if_conditional194=!node_compile(self->value,info),    _if_conditional194) {
        __result153__ = (_Bool)0;
        if(tuple_types_180 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,tuple_types_180, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(tuple_values_181 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,tuple_values_181, (void*)0, (void*)0, 0, 0, 0, 0); }
        return __result153__;
    }
    come_value_182=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value310=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value310);
    if(right_value310 && right_value310 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value310, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value310;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    if(_if_conditional195=come_value_182->type->mNoSolvedGenericsType&&come_value_182->type->mNoSolvedGenericsType->v1&&string_operator_equals(come_value_182->type->mNoSolvedGenericsType->v1->mClass->mName,"optional"),    _if_conditional195) {
        list$1CVALUEph_add(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_182));
    }
    else {
        list$1CVALUEph_push_back(tuple_values_181,(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value311=CVALUE_clone(come_value_182)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value311);
        if(right_value311 && right_value311 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value311, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value311;
        __freed_obj__ = 0;
        list$1sTypeph_push_back(tuple_types_180,(struct sType*)come_increment_ref_count(((struct sType*)(right_value312=sType_clone(come_value_182->type)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value312);
        if(right_value312 && right_value312 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value312, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value312;
        __freed_obj__ = 0;
        true_node_184=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value313=create_true_object(info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value313);
        if(right_value313 && right_value313 != __result_obj__ && !__freed_obj__) { right_value313 = come_decrement_ref_count(right_value313, ((struct sNode*)right_value313)->finalize, ((struct sNode*)right_value313)->_protocol_obj, 1, 0, 0); } 
        __right_value_freed_obj[2] = right_value313;
        __freed_obj__ = 0;
        if(_if_conditional196=!node_compile(true_node_184,info),        _if_conditional196) {
            __result154__ = (_Bool)0;
            if(mNoSolvedGenericsType_183 && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,mNoSolvedGenericsType_183, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(true_node_184 && !__freed_obj__) { true_node_184 = come_decrement_ref_count(true_node_184, ((struct sNode*)true_node_184)->finalize, ((struct sNode*)true_node_184)->_protocol_obj, 0, 0, 0); } 
            if(tuple_types_180 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,tuple_types_180, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(tuple_values_181 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,tuple_values_181, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(come_value_182 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_182, (void*)0, (void*)0, 0, 0, 0, 0); }
            return __result154__;
        }
        come_value2_185=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value314=get_value_from_stack(-1,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value314);
        if(right_value314 && right_value314 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value314, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value314;
        __freed_obj__ = 0;
        dec_stack_ptr(1,info);
        list$1CVALUEph_push_back(tuple_values_181,(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value315=CVALUE_clone(come_value2_185)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value315);
        if(right_value315 && right_value315 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value315, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[4] = right_value315;
        __freed_obj__ = 0;
        list$1sTypeph_push_back(tuple_types_180,(struct sType*)come_increment_ref_count(((struct sType*)(right_value316=sType_clone(come_value2_185->type)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value316);
        if(right_value316 && right_value316 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value316, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[5] = right_value316;
        __freed_obj__ = 0;
        type_186=(struct sType*)come_increment_ref_count(((struct sType*)(right_value318=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value317=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 1001)))),"optional",(_Bool)0,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value317);
        if(right_value317 && right_value317 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value317, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[6] = right_value317;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value318);
        if(right_value318 && right_value318 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value318, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[7] = right_value318;
        __freed_obj__ = 0;
        for(
        o2_saved_187=(struct list$1sTypeph*)come_increment_ref_count((tuple_types_180)),it_188=list$1sTypeph_begin((o2_saved_187)) ,        0;        _for_condtionalA12=        !list$1sTypeph_end((o2_saved_187)) ,        _for_condtionalA12;        it_188=list$1sTypeph_next((o2_saved_187)) ,        0        ){
            list$1sTypeph_push_back(type_186->mGenericsTypes,(struct sType*)come_increment_ref_count(((struct sType*)(right_value319=sType_clone(it_188)))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value319);
            if(right_value319 && right_value319 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value319, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value319;
            __freed_obj__ = 0;
        }
        if(o2_saved_187 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_187, (void*)0, (void*)0, 0, 0, 0, 0); }
        obj_value_189=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value320=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1007))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value320);
        if(right_value320 && right_value320 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value320, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[8] = right_value320;
        __freed_obj__ = 0;
        num_string_190=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value322=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value321=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1009))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 9, right_value321);
        if(right_value321 && right_value321 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value321, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[9] = right_value321;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 10, right_value322);
        if(right_value322 && right_value322 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value322, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[10] = right_value322;
        __freed_obj__ = 0;
        buffer_append_str(num_string_190,"1");
        type2_191=(struct sType*)come_increment_ref_count(((struct sType*)(right_value323=solve_generics(type_186,type_186,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 11, right_value323);
        if(right_value323 && right_value323 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value323, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[11] = right_value323;
        __freed_obj__ = 0;
        type_name_192=(char*)come_increment_ref_count(optional$2charphbool_expect(((struct optional$2charphbool*)(right_value324=make_type_name_string(type2_191,(_Bool)0,(_Bool)1,(_Bool)0,info)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 12, right_value324);
        if(right_value324 && right_value324 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value324, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[12] = right_value324;
        __freed_obj__ = 0;
        __dec_obj109=obj_value_189->c_value;
        obj_value_189->c_value=(char*)come_increment_ref_count(((char*)(right_value326=xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d)",type_name_192,type_name_192,((char*)(right_value325=buffer_to_string(num_string_190))),info->sname,info->sline))));
        if(__dec_obj109) { __dec_obj109 = come_decrement_ref_count(__dec_obj109, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 13, right_value325);
        if(right_value325 && right_value325 != __result_obj__ && !__freed_obj__) { right_value325 = come_decrement_ref_count(right_value325, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[13] = right_value325;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 14, right_value326);
        if(right_value326 && right_value326 != __result_obj__ && !__freed_obj__) { right_value326 = come_decrement_ref_count(right_value326, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[14] = right_value326;
        __freed_obj__ = 0;
        type3_193=(struct sType*)come_increment_ref_count(((struct sType*)(right_value327=sType_clone(type2_191))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 15, right_value327);
        if(right_value327 && right_value327 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value327, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[15] = right_value327;
        __freed_obj__ = 0;
        type3_193->mPointerNum++;
        type3_193->mHeap=(_Bool)1;
        type2_191->mHeap=(_Bool)1;
        __dec_obj110=obj_value_189->type;
        obj_value_189->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value328=sType_clone(type2_191))));
        if(__dec_obj110) { come_call_finalizer(sType_finalize,__dec_obj110, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 16, right_value328);
        if(right_value328 && right_value328 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value328, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[16] = right_value328;
        __freed_obj__ = 0;
        __dec_obj111=obj_value_189->c_value;
        obj_value_189->c_value=(char*)come_increment_ref_count(((char*)(right_value329=append_object_to_right_values(obj_value_189->c_value,(struct sType*)come_increment_ref_count(type3_193),info))));
        if(__dec_obj111) { __dec_obj111 = come_decrement_ref_count(__dec_obj111, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 17, right_value329);
        if(right_value329 && right_value329 != __result_obj__ && !__freed_obj__) { right_value329 = come_decrement_ref_count(right_value329, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[17] = right_value329;
        __freed_obj__ = 0;
        obj_value_189->type->mPointerNum++;
        obj_value_189->var=((void*)0);
        obj_type_194=(struct sType*)come_increment_ref_count(((struct sType*)(right_value330=sType_clone(type2_191))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 18, right_value330);
        if(right_value330 && right_value330 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value330, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[18] = right_value330;
        __freed_obj__ = 0;
        fun_name_195="initialize";
        generics_fun_name_196=(char*)come_increment_ref_count(((char*)(right_value333=string_to_string(((char*)(right_value332=make_generics_function(obj_type_194,(char*)come_increment_ref_count(((char*)(right_value331=__builtin_string(fun_name_195)))),info)))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 19, right_value331);
        if(right_value331 && right_value331 != __result_obj__ && !__freed_obj__) { right_value331 = come_decrement_ref_count(right_value331, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[19] = right_value331;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 20, right_value332);
        if(right_value332 && right_value332 != __result_obj__ && !__freed_obj__) { right_value332 = come_decrement_ref_count(right_value332, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[20] = right_value332;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 21, right_value333);
        if(right_value333 && right_value333 != __result_obj__ && !__freed_obj__) { right_value333 = come_decrement_ref_count(right_value333, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[21] = right_value333;
        __freed_obj__ = 0;
        fun_197=map$2charphsFunph_at(info->funcs,generics_fun_name_196,((void*)0));
        if(_if_conditional197=fun_197==((void*)0),        _if_conditional197) {
            __dec_obj112=generics_fun_name_196;
            generics_fun_name_196=(char*)come_increment_ref_count(((char*)(right_value335=create_method_name(obj_type_194,(_Bool)0,((char*)(right_value334=__builtin_string(fun_name_195))),info))));
            if(__dec_obj112) { __dec_obj112 = come_decrement_ref_count(__dec_obj112, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value334);
            if(right_value334 && right_value334 != __result_obj__ && !__freed_obj__) { right_value334 = come_decrement_ref_count(right_value334, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value334;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value335);
            if(right_value335 && right_value335 != __result_obj__ && !__freed_obj__) { right_value335 = come_decrement_ref_count(right_value335, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value335;
            __freed_obj__ = 0;
            fun_197=map$2charphsFunph_at(info->funcs,generics_fun_name_196,((void*)0));
            if(_if_conditional198=fun_197==((void*)0),            _if_conditional198) {
                err_msg(info,"function not found(%s) at method(%s)(2)\n",generics_fun_name_196,info->come_fun->mName);
                __result155__ = (_Bool)1;
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
                return __result155__;
            }
        }
        result_type_198=(struct sType*)come_increment_ref_count(((struct sType*)(right_value336=sType_clone(fun_197->mResultType))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 22, right_value336);
        if(right_value336 && right_value336 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value336, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[22] = right_value336;
        __freed_obj__ = 0;
        result_type_198->mStatic=(_Bool)0;
        come_params_199=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value338=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value337=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 1049))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 23, right_value337);
        if(right_value337 && right_value337 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value337, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[23] = right_value337;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 24, right_value338);
        if(right_value338 && right_value338 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value338, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[24] = right_value338;
        __freed_obj__ = 0;
        if(_if_conditional199=optional$2sTypephbool_value(((struct optional$2sTypephbool*)(right_value339=list$1sTypephp_operator_load_element(fun_197->mParamTypes,0))))->mHeap&&obj_value_189->type->mHeap,        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 25, right_value339),
        (right_value339 && right_value339 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2sTypephboolp_finalize,right_value339, (void*)0, (void*)0, 0, 1, 0, 0):0,
        __right_value_freed_obj[25] = right_value339, 
        __freed_obj__ = 0, 
        _if_conditional199) {
            std_move(optional$2sTypephbool_value(((struct optional$2sTypephbool*)(right_value340=list$1sTypephp_operator_load_element(fun_197->mParamTypes,0)))),obj_value_189->type,obj_value_189,info);
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value340);
            if(right_value340 && right_value340 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,right_value340, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value340;
            __freed_obj__ = 0;
        }
        list$1CVALUEph_push_back(come_params_199,(struct CVALUE*)come_increment_ref_count(obj_value_189));
        i_200=1;
        for(
        o2_saved_201=(struct list$1CVALUEph*)come_increment_ref_count((tuple_values_181)),it_202=list$1CVALUEph_begin((o2_saved_201)) ,        0;        _for_condtionalA13=        !list$1CVALUEph_end((o2_saved_201)) ,        _for_condtionalA13;        it_202=list$1CVALUEph_next((o2_saved_201)) ,        0        ){
            come_value_203=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value341=CVALUE_clone(it_202))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value341);
            if(right_value341 && right_value341 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value341, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value341;
            __freed_obj__ = 0;
            if(_if_conditional200=optional$2sTypephbool_value(((struct optional$2sTypephbool*)(right_value342=list$1sTypephp_operator_load_element(fun_197->mParamTypes,i_200))))&&optional$2sTypephbool_value(((struct optional$2sTypephbool*)(right_value343=list$1sTypephp_operator_load_element(fun_197->mParamTypes,i_200))))->mHeap&&come_value_203->type->mHeap,            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value342),
            (right_value342 && right_value342 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2sTypephboolp_finalize,right_value342, (void*)0, (void*)0, 0, 1, 0, 0):0,
            __right_value_freed_obj[1] = right_value342, 
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value343),
            (right_value343 && right_value343 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2sTypephboolp_finalize,right_value343, (void*)0, (void*)0, 0, 1, 0, 0):0,
            __right_value_freed_obj[2] = right_value343, 
            __freed_obj__ = 0, 
            _if_conditional200) {
                std_move(optional$2sTypephbool_value(((struct optional$2sTypephbool*)(right_value344=list$1sTypephp_operator_load_element(fun_197->mParamTypes,i_200)))),come_value_203->type,come_value_203,info);
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value344);
                if(right_value344 && right_value344 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,right_value344, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value344;
                __freed_obj__ = 0;
            }
            list$1CVALUEph_push_back(come_params_199,(struct CVALUE*)come_increment_ref_count(come_value_203));
            i_200++;
            if(come_value_203 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_203, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(o2_saved_201 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,o2_saved_201, (void*)0, (void*)0, 0, 0, 0, 0); }
        buf_204=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value346=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value345=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1068))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 26, right_value345);
        if(right_value345 && right_value345 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value345, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[26] = right_value345;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 27, right_value346);
        if(right_value346 && right_value346 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value346, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[27] = right_value346;
        __freed_obj__ = 0;
        buffer_append_str(buf_204,generics_fun_name_196);
        buffer_append_str(buf_204,"(");
        j_205=0;
        for(
        o2_saved_206=(struct list$1CVALUEph*)come_increment_ref_count((come_params_199)),it_207=list$1CVALUEph_begin((o2_saved_206)) ,        0;        _for_condtionalA14=        !list$1CVALUEph_end((o2_saved_206)) ,        _for_condtionalA14;        it_207=list$1CVALUEph_next((o2_saved_206)) ,        0        ){
            buffer_append_str(buf_204,it_207->c_value);
            if(_if_conditional201=j_205!=list$1CVALUEph_length(come_params_199)-1,            _if_conditional201) {
                buffer_append_str(buf_204,",");
            }
            j_205++;
        }
        if(o2_saved_206 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,o2_saved_206, (void*)0, (void*)0, 0, 0, 0, 0); }
        buffer_append_str(buf_204,")");
        come_value3_208=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value347=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1085))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 28, right_value347);
        if(right_value347 && right_value347 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value347, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[28] = right_value347;
        __freed_obj__ = 0;
        __dec_obj113=come_value3_208->c_value;
        come_value3_208->c_value=(char*)come_increment_ref_count(((char*)(right_value348=buffer_to_string(buf_204))));
        if(__dec_obj113) { __dec_obj113 = come_decrement_ref_count(__dec_obj113, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 29, right_value348);
        if(right_value348 && right_value348 != __result_obj__ && !__freed_obj__) { right_value348 = come_decrement_ref_count(right_value348, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[29] = right_value348;
        __freed_obj__ = 0;
        if(_if_conditional202=result_type_198->mHeap,        _if_conditional202) {
            __dec_obj114=come_value3_208->c_value;
            come_value3_208->c_value=(char*)come_increment_ref_count(((char*)(right_value350=append_object_to_right_values(((char*)(right_value349=buffer_to_string(buf_204))),(struct sType*)come_increment_ref_count(result_type_198),info))));
            if(__dec_obj114) { __dec_obj114 = come_decrement_ref_count(__dec_obj114, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value349);
            if(right_value349 && right_value349 != __result_obj__ && !__freed_obj__) { right_value349 = come_decrement_ref_count(right_value349, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value349;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value350);
            if(right_value350 && right_value350 != __result_obj__ && !__freed_obj__) { right_value350 = come_decrement_ref_count(right_value350, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value350;
            __freed_obj__ = 0;
        }
        __dec_obj115=come_value3_208->type;
        come_value3_208->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value351=sType_clone(result_type_198))));
        if(__dec_obj115) { come_call_finalizer(sType_finalize,__dec_obj115, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 30, right_value351);
        if(right_value351 && right_value351 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value351, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[30] = right_value351;
        __freed_obj__ = 0;
        come_value3_208->type->mStatic=(_Bool)0;
        come_value3_208->var=((void*)0);
        add_come_last_code(info,"%s;\n",((char*)(right_value352=buffer_to_string(buf_204))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 31, right_value352);
        if(right_value352 && right_value352 != __result_obj__ && !__freed_obj__) { right_value352 = come_decrement_ref_count(right_value352, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[31] = right_value352;
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value3_208));
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
    __result156__ = (_Bool)1;
    if(tuple_types_180 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,tuple_types_180, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(tuple_values_181 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,tuple_values_181, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value_182 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_182, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result156__;
    if(tuple_types_180 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,tuple_types_180, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(tuple_values_181 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,tuple_values_181, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value_182 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_182, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sSomeNode_sline(struct sSomeNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result157__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result157__ = self->sline;
    return __result157__;
}

char* sSomeNode_sname(struct sSomeNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value353;
char* __result158__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value353, 0, sizeof(void*));
    __result158__ = __result_obj__ = ((char*)(right_value353=__builtin_string(self->sname)));
    return __result158__;
}

struct sMapNode* sMapNode_initialize(struct sMapNode* self, struct list$1sNodeph* map_key_elements, struct list$1sNodeph* map_elements, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1sNodeph* __dec_obj116;
struct list$1sNodeph* __dec_obj117;
void* right_value354;
char* __dec_obj118;
struct sMapNode* __result159__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value354, 0, sizeof(void*));
    __dec_obj116=self->map_key_elements;
    self->map_key_elements=(struct list$1sNodeph*)come_increment_ref_count(map_key_elements);
    if(__dec_obj116) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj116, (void*)0, (void*)0, 0, 0, 0, 0); }
    __dec_obj117=self->map_elements;
    self->map_elements=(struct list$1sNodeph*)come_increment_ref_count(map_elements);
    if(__dec_obj117) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj117, (void*)0, (void*)0, 0, 0, 0, 0); }
    self->sline=info->sline;
    __dec_obj118=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value354=__builtin_string(info->sname))));
    if(__dec_obj118) { __dec_obj118 = come_decrement_ref_count(__dec_obj118, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value354);
    if(right_value354 && right_value354 != __result_obj__ && !__freed_obj__) { right_value354 = come_decrement_ref_count(right_value354, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value354;
    __freed_obj__ = 0;
    __result159__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sMapNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(map_key_elements && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,map_key_elements, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(map_elements && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,map_elements, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result159__;
    if(self && !__freed_obj__) { come_call_finalizer(sMapNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(map_key_elements && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,map_key_elements, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(map_elements && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,map_elements, (void*)0, (void*)0, 0, 0, 1, 0); }
}

_Bool sMapNode_terminated(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result160__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result160__ = (_Bool)0;
    return __result160__;
}

char* sMapNode_kind(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value355;
char* __result161__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value355, 0, sizeof(void*));
    __result161__ = __result_obj__ = ((char*)(right_value355=__builtin_string("sMapNode")));
    return __result161__;
}

_Bool sMapNode_compile(struct sMapNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1sNodeph* map_key_elements_209;
struct list$1sNodeph* map_elements_210;
void* right_value356;
void* right_value357;
struct list$1CVALUEph* key_params_211;
void* right_value358;
void* right_value359;
struct list$1CVALUEph* element_params_212;
struct sType* map_key_type_213;
struct sType* map_element_type_214;
int i_215;
_Bool _for_condtionalA15;
void* right_value364;
struct sNode* key_elements_220;
void* right_value365;
struct sNode* elements_221;
_Bool _if_conditional210;
_Bool __result167__;
void* right_value366;
struct CVALUE* come_value_222;
_Bool _if_conditional211;
_Bool __result168__;
void* right_value367;
struct CVALUE* come_value2_223;
void* right_value368;
struct sType* __dec_obj120;
void* right_value369;
struct sType* __dec_obj121;
static int map_value_num_224=0;
void* right_value370;
struct sType* key_type_values_225;
void* right_value371;
void* right_value372;
char* var_name_226;
void* right_value373;
struct sVar* var__227;
void* right_value374;
void* right_value375;
struct sType* element_type_values_228;
void* right_value376;
void* right_value377;
char* var_name2_229;
void* right_value378;
struct sVar* var2__230;
void* right_value379;
void* right_value380;
void* right_value381;
struct buffer* source_231;
int i_232;
_Bool _for_condtionalA16;
void* right_value382;
struct CVALUE* key_param_233;
void* right_value383;
struct CVALUE* element_param_234;
_Bool _if_conditional212;
void* right_value384;
void* right_value385;
_Bool _if_conditional213;
void* right_value386;
void* right_value387;
void* right_value388;
void* right_value389;
void* right_value390;
struct sType* map_type_235;
void* right_value391;
void* right_value392;
void* right_value393;
struct sType* obj_type_236;
char* fun_name_237;
void* right_value394;
void* right_value395;
void* right_value396;
char* generics_fun_name_238;
struct sFun* fun_239;
_Bool _if_conditional214;
void* right_value397;
void* right_value398;
char* __dec_obj122;
_Bool _if_conditional215;
_Bool __result169__;
void* right_value399;
struct sType* result_type_240;
struct sType* type_241;
void* right_value400;
struct CVALUE* obj_value_242;
void* right_value401;
void* right_value402;
struct buffer* num_string_243;
void* right_value403;
struct sType* type2_244;
void* right_value404;
char* type_name_245;
void* right_value405;
void* right_value406;
char* __dec_obj123;
void* right_value407;
struct sType* type3_246;
void* right_value408;
struct sType* __dec_obj124;
void* right_value409;
char* __dec_obj125;
void* right_value410;
void* right_value411;
struct list$1CVALUEph* come_params_247;
void* right_value412;
_Bool _if_conditional216;
void* right_value413;
void* right_value414;
struct CVALUE* come_value2_248;
void* right_value415;
char* __dec_obj126;
struct sType* __dec_obj127;
void* right_value416;
struct CVALUE* come_value3_249;
void* right_value417;
char* __dec_obj128;
struct sType* __dec_obj129;
void* right_value418;
struct CVALUE* come_value4_250;
void* right_value419;
char* __dec_obj130;
struct sType* __dec_obj131;
void* right_value420;
void* right_value421;
struct buffer* buf_251;
int j_252;
struct list$1CVALUEph* o2_saved_253;
struct CVALUE* it_254;
_Bool _for_condtionalA17;
_Bool _if_conditional217;
void* right_value422;
struct CVALUE* come_value5_255;
void* right_value423;
char* __dec_obj132;
_Bool _if_conditional218;
void* right_value424;
void* right_value425;
char* __dec_obj133;
void* right_value426;
struct sType* __dec_obj134;
void* right_value427;
_Bool __result170__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&map_key_elements_209, 0, sizeof(struct list$1sNodeph*));
memset(&map_elements_210, 0, sizeof(struct list$1sNodeph*));
memset(&right_value356, 0, sizeof(void*));
memset(&right_value357, 0, sizeof(void*));
memset(&key_params_211, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value358, 0, sizeof(void*));
memset(&right_value359, 0, sizeof(void*));
memset(&element_params_212, 0, sizeof(struct list$1CVALUEph*));
memset(&map_key_type_213, 0, sizeof(struct sType*));
memset(&map_element_type_214, 0, sizeof(struct sType*));
memset(&i_215, 0, sizeof(int));
memset(&right_value364, 0, sizeof(void*));
memset(&key_elements_220, 0, sizeof(struct sNode*));
memset(&right_value365, 0, sizeof(void*));
memset(&elements_221, 0, sizeof(struct sNode*));
memset(&right_value366, 0, sizeof(void*));
memset(&come_value_222, 0, sizeof(struct CVALUE*));
memset(&right_value367, 0, sizeof(void*));
memset(&come_value2_223, 0, sizeof(struct CVALUE*));
memset(&right_value368, 0, sizeof(void*));
memset(&right_value369, 0, sizeof(void*));
memset(&right_value370, 0, sizeof(void*));
memset(&key_type_values_225, 0, sizeof(struct sType*));
memset(&right_value371, 0, sizeof(void*));
memset(&right_value372, 0, sizeof(void*));
memset(&var_name_226, 0, sizeof(char*));
memset(&right_value373, 0, sizeof(void*));
memset(&var__227, 0, sizeof(struct sVar*));
memset(&right_value374, 0, sizeof(void*));
memset(&right_value375, 0, sizeof(void*));
memset(&element_type_values_228, 0, sizeof(struct sType*));
memset(&right_value376, 0, sizeof(void*));
memset(&right_value377, 0, sizeof(void*));
memset(&var_name2_229, 0, sizeof(char*));
memset(&right_value378, 0, sizeof(void*));
memset(&var2__230, 0, sizeof(struct sVar*));
memset(&right_value379, 0, sizeof(void*));
memset(&right_value380, 0, sizeof(void*));
memset(&right_value381, 0, sizeof(void*));
memset(&source_231, 0, sizeof(struct buffer*));
memset(&i_232, 0, sizeof(int));
memset(&right_value382, 0, sizeof(void*));
memset(&key_param_233, 0, sizeof(struct CVALUE*));
memset(&right_value383, 0, sizeof(void*));
memset(&element_param_234, 0, sizeof(struct CVALUE*));
memset(&right_value384, 0, sizeof(void*));
memset(&right_value385, 0, sizeof(void*));
memset(&right_value386, 0, sizeof(void*));
memset(&right_value387, 0, sizeof(void*));
memset(&right_value388, 0, sizeof(void*));
memset(&right_value389, 0, sizeof(void*));
memset(&right_value390, 0, sizeof(void*));
memset(&map_type_235, 0, sizeof(struct sType*));
memset(&right_value391, 0, sizeof(void*));
memset(&right_value392, 0, sizeof(void*));
memset(&right_value393, 0, sizeof(void*));
memset(&obj_type_236, 0, sizeof(struct sType*));
memset(&fun_name_237, 0, sizeof(char*));
memset(&right_value394, 0, sizeof(void*));
memset(&right_value395, 0, sizeof(void*));
memset(&right_value396, 0, sizeof(void*));
memset(&generics_fun_name_238, 0, sizeof(char*));
memset(&fun_239, 0, sizeof(struct sFun*));
memset(&right_value397, 0, sizeof(void*));
memset(&right_value398, 0, sizeof(void*));
memset(&right_value399, 0, sizeof(void*));
memset(&result_type_240, 0, sizeof(struct sType*));
memset(&type_241, 0, sizeof(struct sType*));
memset(&right_value400, 0, sizeof(void*));
memset(&obj_value_242, 0, sizeof(struct CVALUE*));
memset(&right_value401, 0, sizeof(void*));
memset(&right_value402, 0, sizeof(void*));
memset(&num_string_243, 0, sizeof(struct buffer*));
memset(&right_value403, 0, sizeof(void*));
memset(&type2_244, 0, sizeof(struct sType*));
memset(&right_value404, 0, sizeof(void*));
memset(&type_name_245, 0, sizeof(char*));
memset(&right_value405, 0, sizeof(void*));
memset(&right_value406, 0, sizeof(void*));
memset(&right_value407, 0, sizeof(void*));
memset(&type3_246, 0, sizeof(struct sType*));
memset(&right_value408, 0, sizeof(void*));
memset(&right_value409, 0, sizeof(void*));
memset(&right_value410, 0, sizeof(void*));
memset(&right_value411, 0, sizeof(void*));
memset(&come_params_247, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value412, 0, sizeof(void*));
memset(&right_value413, 0, sizeof(void*));
memset(&right_value414, 0, sizeof(void*));
memset(&come_value2_248, 0, sizeof(struct CVALUE*));
memset(&right_value415, 0, sizeof(void*));
memset(&right_value416, 0, sizeof(void*));
memset(&come_value3_249, 0, sizeof(struct CVALUE*));
memset(&right_value417, 0, sizeof(void*));
memset(&right_value418, 0, sizeof(void*));
memset(&come_value4_250, 0, sizeof(struct CVALUE*));
memset(&right_value419, 0, sizeof(void*));
memset(&right_value420, 0, sizeof(void*));
memset(&right_value421, 0, sizeof(void*));
memset(&buf_251, 0, sizeof(struct buffer*));
memset(&j_252, 0, sizeof(int));
memset(&o2_saved_253, 0, sizeof(struct list$1CVALUEph*));
memset(&it_254, 0, sizeof(struct CVALUE*));
memset(&right_value422, 0, sizeof(void*));
memset(&come_value5_255, 0, sizeof(struct CVALUE*));
memset(&right_value423, 0, sizeof(void*));
memset(&right_value424, 0, sizeof(void*));
memset(&right_value425, 0, sizeof(void*));
memset(&right_value426, 0, sizeof(void*));
memset(&right_value427, 0, sizeof(void*));
    map_key_elements_209=self->map_key_elements;
    map_elements_210=self->map_elements;
    key_params_211=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value357=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value356=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 1149))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value356);
    if(right_value356 && right_value356 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value356, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value356;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value357);
    if(right_value357 && right_value357 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value357, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value357;
    __freed_obj__ = 0;
    element_params_212=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value359=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value358=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 1150))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value358);
    if(right_value358 && right_value358 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value358, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value358;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value359);
    if(right_value359 && right_value359 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value359, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value359;
    __freed_obj__ = 0;
    for(
    i_215=0 ,    0;    _for_condtionalA15=    i_215<list$1sNodeph_length(map_key_elements_209) ,    _for_condtionalA15;    i_215++ ,    0    ){
        key_elements_220=optional$2sNodephbool_value(((struct optional$2sNodephbool*)(right_value364=list$1sNodephp_operator_load_element(map_key_elements_209,i_215))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value364);
        if(right_value364 && right_value364 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sNodephboolp_finalize,right_value364, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value364;
        __freed_obj__ = 0;
        elements_221=optional$2sNodephbool_value(((struct optional$2sNodephbool*)(right_value365=list$1sNodephp_operator_load_element(map_elements_210,i_215))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value365);
        if(right_value365 && right_value365 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sNodephboolp_finalize,right_value365, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value365;
        __freed_obj__ = 0;
        if(_if_conditional210=!node_compile(key_elements_220,info),        _if_conditional210) {
            __result167__ = (_Bool)0;
            if(key_params_211 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,key_params_211, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(element_params_212 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,element_params_212, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(map_key_type_213 && !__freed_obj__) { come_call_finalizer(sType_finalize,map_key_type_213, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(map_element_type_214 && !__freed_obj__) { come_call_finalizer(sType_finalize,map_element_type_214, (void*)0, (void*)0, 0, 0, 0, 0); }
            return __result167__;
        }
        come_value_222=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value366=get_value_from_stack(-1,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value366);
        if(right_value366 && right_value366 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value366, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value366;
        __freed_obj__ = 0;
        dec_stack_ptr(1,info);
        list$1CVALUEph_push_back(key_params_211,(struct CVALUE*)come_increment_ref_count(come_value_222));
        if(_if_conditional211=!node_compile(elements_221,info),        _if_conditional211) {
            __result168__ = (_Bool)0;
            if(come_value_222 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_222, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(key_params_211 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,key_params_211, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(element_params_212 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,element_params_212, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(map_key_type_213 && !__freed_obj__) { come_call_finalizer(sType_finalize,map_key_type_213, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(map_element_type_214 && !__freed_obj__) { come_call_finalizer(sType_finalize,map_element_type_214, (void*)0, (void*)0, 0, 0, 0, 0); }
            return __result168__;
        }
        come_value2_223=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value367=get_value_from_stack(-1,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value367);
        if(right_value367 && right_value367 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value367, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value367;
        __freed_obj__ = 0;
        dec_stack_ptr(1,info);
        list$1CVALUEph_push_back(element_params_212,(struct CVALUE*)come_increment_ref_count(come_value2_223));
        __dec_obj120=map_key_type_213;
        map_key_type_213=(struct sType*)come_increment_ref_count(((struct sType*)(right_value368=sType_clone(come_value_222->type))));
        if(__dec_obj120) { come_call_finalizer(sType_finalize,__dec_obj120, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value368);
        if(right_value368 && right_value368 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value368, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[4] = right_value368;
        __freed_obj__ = 0;
        __dec_obj121=map_element_type_214;
        map_element_type_214=(struct sType*)come_increment_ref_count(((struct sType*)(right_value369=sType_clone(come_value2_223->type))));
        if(__dec_obj121) { come_call_finalizer(sType_finalize,__dec_obj121, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value369);
        if(right_value369 && right_value369 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value369, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[5] = right_value369;
        __freed_obj__ = 0;
        if(come_value_222 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_222, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(come_value2_223 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value2_223, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    key_type_values_225=(struct sType*)come_increment_ref_count(((struct sType*)(right_value370=sType_clone(map_key_type_213))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value370);
    if(right_value370 && right_value370 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value370, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value370;
    __freed_obj__ = 0;
    list$1sNodeph_push_back(key_type_values_225->mArrayNum,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value371=create_int_node(list$1CVALUEph_length(key_params_211),info)))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value371);
    if(right_value371 && right_value371 != __result_obj__ && !__freed_obj__) { right_value371 = come_decrement_ref_count(right_value371, ((struct sNode*)right_value371)->finalize, ((struct sNode*)right_value371)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[5] = right_value371;
    __freed_obj__ = 0;
    key_type_values_225->mHeap=(_Bool)0;
    var_name_226=(char*)come_increment_ref_count(((char*)(right_value372=xsprintf("__map_keys%d__",++map_value_num_224))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value372);
    if(right_value372 && right_value372 != __result_obj__ && !__freed_obj__) { right_value372 = come_decrement_ref_count(right_value372, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[6] = right_value372;
    __freed_obj__ = 0;
    add_variable_to_table(var_name_226,(struct sType*)come_increment_ref_count(((struct sType*)(right_value373=sType_clone(key_type_values_225)))),info);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value373);
    if(right_value373 && right_value373 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value373, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[7] = right_value373;
    __freed_obj__ = 0;
    var__227=get_variable_from_table(info->lv_table,var_name_226);
    add_come_code_at_function_head(info,"%s;\n",optional$2charphbool_expect(((struct optional$2charphbool*)(right_value374=make_define_var(key_type_values_225,var__227->mCValueName,(_Bool)0,info)))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value374);
    if(right_value374 && right_value374 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value374, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[8] = right_value374;
    __freed_obj__ = 0;
    element_type_values_228=(struct sType*)come_increment_ref_count(((struct sType*)(right_value375=sType_clone(map_element_type_214))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 9, right_value375);
    if(right_value375 && right_value375 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value375, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[9] = right_value375;
    __freed_obj__ = 0;
    list$1sNodeph_push_back(element_type_values_228->mArrayNum,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value376=create_int_node(list$1CVALUEph_length(element_params_212),info)))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 10, right_value376);
    if(right_value376 && right_value376 != __result_obj__ && !__freed_obj__) { right_value376 = come_decrement_ref_count(right_value376, ((struct sNode*)right_value376)->finalize, ((struct sNode*)right_value376)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[10] = right_value376;
    __freed_obj__ = 0;
    element_type_values_228->mHeap=(_Bool)0;
    var_name2_229=(char*)come_increment_ref_count(((char*)(right_value377=xsprintf("__map_element%d__",map_value_num_224))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 11, right_value377);
    if(right_value377 && right_value377 != __result_obj__ && !__freed_obj__) { right_value377 = come_decrement_ref_count(right_value377, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[11] = right_value377;
    __freed_obj__ = 0;
    add_variable_to_table(var_name2_229,(struct sType*)come_increment_ref_count(((struct sType*)(right_value378=sType_clone(element_type_values_228)))),info);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 12, right_value378);
    if(right_value378 && right_value378 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value378, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[12] = right_value378;
    __freed_obj__ = 0;
    var2__230=get_variable_from_table(info->lv_table,var_name2_229);
    add_come_code_at_function_head(info,"%s;\n",optional$2charphbool_expect(((struct optional$2charphbool*)(right_value379=make_define_var(element_type_values_228,var2__230->mCValueName,(_Bool)0,info)))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 13, right_value379);
    if(right_value379 && right_value379 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value379, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[13] = right_value379;
    __freed_obj__ = 0;
    source_231=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value381=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value380=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1206))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 14, right_value380);
    if(right_value380 && right_value380 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value380, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[14] = right_value380;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 15, right_value381);
    if(right_value381 && right_value381 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value381, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[15] = right_value381;
    __freed_obj__ = 0;
    buffer_append_str(source_231,"{");
    for(
    i_232=0 ,    0;    _for_condtionalA16=    i_232<list$1CVALUEph_length(key_params_211) ,    _for_condtionalA16;    i_232++ ,    0    ){
        key_param_233=optional$2CVALUEphbool_value(((struct optional$2CVALUEphbool*)(right_value382=list$1CVALUEphp_operator_load_element(key_params_211,i_232))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value382);
        if(right_value382 && right_value382 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2CVALUEphboolp_finalize,right_value382, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value382;
        __freed_obj__ = 0;
        element_param_234=optional$2CVALUEphbool_value(((struct optional$2CVALUEphbool*)(right_value383=list$1CVALUEphp_operator_load_element(element_params_212,i_232))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value383);
        if(right_value383 && right_value383 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2CVALUEphboolp_finalize,right_value383, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value383;
        __freed_obj__ = 0;
        if(_if_conditional212=map_key_type_213->mHeap,        _if_conditional212) {
            buffer_append_str(source_231,((char*)(right_value384=xsprintf("%s[%d]=come_increment_ref_count(%s);\n",var__227->mCValueName,i_232,key_param_233->c_value))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value384);
            if(right_value384 && right_value384 != __result_obj__ && !__freed_obj__) { right_value384 = come_decrement_ref_count(right_value384, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value384;
            __freed_obj__ = 0;
        }
        else {
            buffer_append_str(source_231,((char*)(right_value385=xsprintf("%s[%d]=%s;\n",var__227->mCValueName,i_232,key_param_233->c_value))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value385);
            if(right_value385 && right_value385 != __result_obj__ && !__freed_obj__) { right_value385 = come_decrement_ref_count(right_value385, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value385;
            __freed_obj__ = 0;
        }
        if(_if_conditional213=map_element_type_214->mHeap,        _if_conditional213) {
            buffer_append_str(source_231,((char*)(right_value386=xsprintf("%s[%d]=come_increment_ref_count(%s);\n",var2__230->mCValueName,i_232,element_param_234->c_value))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value386);
            if(right_value386 && right_value386 != __result_obj__ && !__freed_obj__) { right_value386 = come_decrement_ref_count(right_value386, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value386;
            __freed_obj__ = 0;
        }
        else {
            buffer_append_str(source_231,((char*)(right_value387=xsprintf("%s[%d]=%s;\n",var2__230->mCValueName,i_232,element_param_234->c_value))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value387);
            if(right_value387 && right_value387 != __result_obj__ && !__freed_obj__) { right_value387 = come_decrement_ref_count(right_value387, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value387;
            __freed_obj__ = 0;
        }
    }
    buffer_append_str(source_231,"}");
    add_come_code(info,"%s",((char*)(right_value388=buffer_to_string(source_231))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 16, right_value388);
    if(right_value388 && right_value388 != __result_obj__ && !__freed_obj__) { right_value388 = come_decrement_ref_count(right_value388, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[16] = right_value388;
    __freed_obj__ = 0;
    map_type_235=(struct sType*)come_increment_ref_count(((struct sType*)(right_value390=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value389=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 1233)))),"map",(_Bool)0,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 17, right_value389);
    if(right_value389 && right_value389 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value389, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[17] = right_value389;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 18, right_value390);
    if(right_value390 && right_value390 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value390, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[18] = right_value390;
    __freed_obj__ = 0;
    list$1sTypeph_push_back(map_type_235->mGenericsTypes,(struct sType*)come_increment_ref_count(((struct sType*)(right_value391=sType_clone(map_key_type_213)))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 19, right_value391);
    if(right_value391 && right_value391 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value391, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[19] = right_value391;
    __freed_obj__ = 0;
    list$1sTypeph_push_back(map_type_235->mGenericsTypes,(struct sType*)come_increment_ref_count(((struct sType*)(right_value392=sType_clone(map_element_type_214)))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 20, right_value392);
    if(right_value392 && right_value392 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value392, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[20] = right_value392;
    __freed_obj__ = 0;
    obj_type_236=(struct sType*)come_increment_ref_count(((struct sType*)(right_value393=sType_clone(map_type_235))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 21, right_value393);
    if(right_value393 && right_value393 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value393, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[21] = right_value393;
    __freed_obj__ = 0;
    fun_name_237="initialize_with_values";
    generics_fun_name_238=(char*)come_increment_ref_count(((char*)(right_value396=string_to_string(((char*)(right_value395=make_generics_function(obj_type_236,(char*)come_increment_ref_count(((char*)(right_value394=__builtin_string(fun_name_237)))),info)))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 22, right_value394);
    if(right_value394 && right_value394 != __result_obj__ && !__freed_obj__) { right_value394 = come_decrement_ref_count(right_value394, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[22] = right_value394;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 23, right_value395);
    if(right_value395 && right_value395 != __result_obj__ && !__freed_obj__) { right_value395 = come_decrement_ref_count(right_value395, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[23] = right_value395;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 24, right_value396);
    if(right_value396 && right_value396 != __result_obj__ && !__freed_obj__) { right_value396 = come_decrement_ref_count(right_value396, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[24] = right_value396;
    __freed_obj__ = 0;
    fun_239=map$2charphsFunph_at(info->funcs,generics_fun_name_238,((void*)0));
    if(_if_conditional214=fun_239==((void*)0),    _if_conditional214) {
        __dec_obj122=generics_fun_name_238;
        generics_fun_name_238=(char*)come_increment_ref_count(((char*)(right_value398=create_method_name(obj_type_236,(_Bool)0,((char*)(right_value397=__builtin_string(fun_name_237))),info))));
        if(__dec_obj122) { __dec_obj122 = come_decrement_ref_count(__dec_obj122, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value397);
        if(right_value397 && right_value397 != __result_obj__ && !__freed_obj__) { right_value397 = come_decrement_ref_count(right_value397, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value397;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value398);
        if(right_value398 && right_value398 != __result_obj__ && !__freed_obj__) { right_value398 = come_decrement_ref_count(right_value398, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value398;
        __freed_obj__ = 0;
        fun_239=map$2charphsFunph_at(info->funcs,generics_fun_name_238,((void*)0));
        if(_if_conditional215=fun_239==((void*)0),        _if_conditional215) {
            err_msg(info,"function not found(%s) at method(%s)(3)\n",generics_fun_name_238,info->come_fun->mName);
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
            return __result169__;
        }
    }
    result_type_240=(struct sType*)come_increment_ref_count(((struct sType*)(right_value399=sType_clone(fun_239->mResultType))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 25, right_value399);
    if(right_value399 && right_value399 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value399, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[25] = right_value399;
    __freed_obj__ = 0;
    result_type_240->mStatic=(_Bool)0;
    type_241=map_type_235;
    obj_value_242=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value400=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1260))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 26, right_value400);
    if(right_value400 && right_value400 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value400, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[26] = right_value400;
    __freed_obj__ = 0;
    num_string_243=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value402=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value401=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1262))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 27, right_value401);
    if(right_value401 && right_value401 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value401, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[27] = right_value401;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 28, right_value402);
    if(right_value402 && right_value402 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value402, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[28] = right_value402;
    __freed_obj__ = 0;
    buffer_append_str(num_string_243,"1");
    type2_244=(struct sType*)come_increment_ref_count(((struct sType*)(right_value403=solve_generics(type_241,type_241,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 29, right_value403);
    if(right_value403 && right_value403 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value403, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[29] = right_value403;
    __freed_obj__ = 0;
    type_name_245=(char*)come_increment_ref_count(optional$2charphbool_expect(((struct optional$2charphbool*)(right_value404=make_type_name_string(type2_244,(_Bool)0,(_Bool)1,(_Bool)0,info)))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 30, right_value404);
    if(right_value404 && right_value404 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value404, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[30] = right_value404;
    __freed_obj__ = 0;
    __dec_obj123=obj_value_242->c_value;
    obj_value_242->c_value=(char*)come_increment_ref_count(((char*)(right_value406=xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d)",type_name_245,type_name_245,((char*)(right_value405=buffer_to_string(num_string_243))),info->sname,info->sline))));
    if(__dec_obj123) { __dec_obj123 = come_decrement_ref_count(__dec_obj123, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 31, right_value405);
    if(right_value405 && right_value405 != __result_obj__ && !__freed_obj__) { right_value405 = come_decrement_ref_count(right_value405, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[31] = right_value405;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 32, right_value406);
    if(right_value406 && right_value406 != __result_obj__ && !__freed_obj__) { right_value406 = come_decrement_ref_count(right_value406, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[32] = right_value406;
    __freed_obj__ = 0;
    type3_246=(struct sType*)come_increment_ref_count(((struct sType*)(right_value407=sType_clone(type2_244))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 33, right_value407);
    if(right_value407 && right_value407 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value407, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[33] = right_value407;
    __freed_obj__ = 0;
    type3_246->mPointerNum++;
    type3_246->mHeap=(_Bool)1;
    type2_244->mHeap=(_Bool)1;
    __dec_obj124=obj_value_242->type;
    obj_value_242->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value408=sType_clone(type2_244))));
    if(__dec_obj124) { come_call_finalizer(sType_finalize,__dec_obj124, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 34, right_value408);
    if(right_value408 && right_value408 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value408, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[34] = right_value408;
    __freed_obj__ = 0;
    __dec_obj125=obj_value_242->c_value;
    obj_value_242->c_value=(char*)come_increment_ref_count(((char*)(right_value409=append_object_to_right_values(obj_value_242->c_value,(struct sType*)come_increment_ref_count(type3_246),info))));
    if(__dec_obj125) { __dec_obj125 = come_decrement_ref_count(__dec_obj125, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 35, right_value409);
    if(right_value409 && right_value409 != __result_obj__ && !__freed_obj__) { right_value409 = come_decrement_ref_count(right_value409, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[35] = right_value409;
    __freed_obj__ = 0;
    obj_value_242->type->mPointerNum++;
    obj_value_242->var=((void*)0);
    come_params_247=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value411=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value410=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 1281))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 36, right_value410);
    if(right_value410 && right_value410 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value410, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[36] = right_value410;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 37, right_value411);
    if(right_value411 && right_value411 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value411, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[37] = right_value411;
    __freed_obj__ = 0;
    if(_if_conditional216=optional$2sTypephbool_value(((struct optional$2sTypephbool*)(right_value412=list$1sTypephp_operator_load_element(fun_239->mParamTypes,0))))->mHeap&&obj_value_242->type->mHeap,    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 38, right_value412),
    (right_value412 && right_value412 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2sTypephboolp_finalize,right_value412, (void*)0, (void*)0, 0, 1, 0, 0):0,
    __right_value_freed_obj[38] = right_value412, 
    __freed_obj__ = 0, 
    _if_conditional216) {
        std_move(optional$2sTypephbool_value(((struct optional$2sTypephbool*)(right_value413=list$1sTypephp_operator_load_element(fun_239->mParamTypes,0)))),obj_value_242->type,obj_value_242,info);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value413);
        if(right_value413 && right_value413 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,right_value413, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value413;
        __freed_obj__ = 0;
    }
    list$1CVALUEph_push_back(come_params_247,(struct CVALUE*)come_increment_ref_count(obj_value_242));
    come_value2_248=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value414=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1288))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 39, right_value414);
    if(right_value414 && right_value414 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value414, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[39] = right_value414;
    __freed_obj__ = 0;
    __dec_obj126=come_value2_248->c_value;
    come_value2_248->c_value=(char*)come_increment_ref_count(((char*)(right_value415=xsprintf("%d",list$1CVALUEph_length(key_params_211)))));
    if(__dec_obj126) { __dec_obj126 = come_decrement_ref_count(__dec_obj126, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 40, right_value415);
    if(right_value415 && right_value415 != __result_obj__ && !__freed_obj__) { right_value415 = come_decrement_ref_count(right_value415, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[40] = right_value415;
    __freed_obj__ = 0;
    __dec_obj127=come_value2_248->type;
    come_value2_248->type=((void*)0);
    if(__dec_obj127) { come_call_finalizer(sType_finalize,__dec_obj127, (void*)0, (void*)0, 0, 0, 0, 0); }
    come_value2_248->var=((void*)0);
    list$1CVALUEph_push_back(come_params_247,(struct CVALUE*)come_increment_ref_count(come_value2_248));
    come_value3_249=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value416=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1296))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 41, right_value416);
    if(right_value416 && right_value416 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value416, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[41] = right_value416;
    __freed_obj__ = 0;
    __dec_obj128=come_value3_249->c_value;
    come_value3_249->c_value=(char*)come_increment_ref_count(((char*)(right_value417=xsprintf("%s",var__227->mCValueName))));
    if(__dec_obj128) { __dec_obj128 = come_decrement_ref_count(__dec_obj128, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 42, right_value417);
    if(right_value417 && right_value417 != __result_obj__ && !__freed_obj__) { right_value417 = come_decrement_ref_count(right_value417, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[42] = right_value417;
    __freed_obj__ = 0;
    __dec_obj129=come_value3_249->type;
    come_value3_249->type=((void*)0);
    if(__dec_obj129) { come_call_finalizer(sType_finalize,__dec_obj129, (void*)0, (void*)0, 0, 0, 0, 0); }
    come_value3_249->var=((void*)0);
    list$1CVALUEph_push_back(come_params_247,(struct CVALUE*)come_increment_ref_count(come_value3_249));
    come_value4_250=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value418=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1304))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 43, right_value418);
    if(right_value418 && right_value418 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value418, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[43] = right_value418;
    __freed_obj__ = 0;
    __dec_obj130=come_value4_250->c_value;
    come_value4_250->c_value=(char*)come_increment_ref_count(((char*)(right_value419=xsprintf("%s",var2__230->mCValueName))));
    if(__dec_obj130) { __dec_obj130 = come_decrement_ref_count(__dec_obj130, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 44, right_value419);
    if(right_value419 && right_value419 != __result_obj__ && !__freed_obj__) { right_value419 = come_decrement_ref_count(right_value419, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[44] = right_value419;
    __freed_obj__ = 0;
    __dec_obj131=come_value4_250->type;
    come_value4_250->type=((void*)0);
    if(__dec_obj131) { come_call_finalizer(sType_finalize,__dec_obj131, (void*)0, (void*)0, 0, 0, 0, 0); }
    come_value4_250->var=((void*)0);
    list$1CVALUEph_push_back(come_params_247,(struct CVALUE*)come_increment_ref_count(come_value4_250));
    buf_251=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value421=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value420=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1312))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 45, right_value420);
    if(right_value420 && right_value420 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value420, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[45] = right_value420;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 46, right_value421);
    if(right_value421 && right_value421 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value421, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[46] = right_value421;
    __freed_obj__ = 0;
    buffer_append_str(buf_251,generics_fun_name_238);
    buffer_append_str(buf_251,"(");
    j_252=0;
    for(
    o2_saved_253=(struct list$1CVALUEph*)come_increment_ref_count((come_params_247)),it_254=list$1CVALUEph_begin((o2_saved_253)) ,    0;    _for_condtionalA17=    !list$1CVALUEph_end((o2_saved_253)) ,    _for_condtionalA17;    it_254=list$1CVALUEph_next((o2_saved_253)) ,    0    ){
        buffer_append_str(buf_251,it_254->c_value);
        if(_if_conditional217=j_252!=list$1CVALUEph_length(come_params_247)-1,        _if_conditional217) {
            buffer_append_str(buf_251,",");
        }
        j_252++;
    }
    if(o2_saved_253 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,o2_saved_253, (void*)0, (void*)0, 0, 0, 0, 0); }
    buffer_append_str(buf_251,")");
    come_value5_255=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value422=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1329))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 47, right_value422);
    if(right_value422 && right_value422 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value422, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[47] = right_value422;
    __freed_obj__ = 0;
    __dec_obj132=come_value5_255->c_value;
    come_value5_255->c_value=(char*)come_increment_ref_count(((char*)(right_value423=buffer_to_string(buf_251))));
    if(__dec_obj132) { __dec_obj132 = come_decrement_ref_count(__dec_obj132, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 48, right_value423);
    if(right_value423 && right_value423 != __result_obj__ && !__freed_obj__) { right_value423 = come_decrement_ref_count(right_value423, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[48] = right_value423;
    __freed_obj__ = 0;
    if(_if_conditional218=result_type_240->mHeap,    _if_conditional218) {
        __dec_obj133=come_value5_255->c_value;
        come_value5_255->c_value=(char*)come_increment_ref_count(((char*)(right_value425=append_object_to_right_values(((char*)(right_value424=buffer_to_string(buf_251))),(struct sType*)come_increment_ref_count(result_type_240),info))));
        if(__dec_obj133) { __dec_obj133 = come_decrement_ref_count(__dec_obj133, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value424);
        if(right_value424 && right_value424 != __result_obj__ && !__freed_obj__) { right_value424 = come_decrement_ref_count(right_value424, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value424;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value425);
        if(right_value425 && right_value425 != __result_obj__ && !__freed_obj__) { right_value425 = come_decrement_ref_count(right_value425, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value425;
        __freed_obj__ = 0;
    }
    __dec_obj134=come_value5_255->type;
    come_value5_255->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value426=sType_clone(result_type_240))));
    if(__dec_obj134) { come_call_finalizer(sType_finalize,__dec_obj134, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 49, right_value426);
    if(right_value426 && right_value426 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value426, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[49] = right_value426;
    __freed_obj__ = 0;
    come_value5_255->type->mStatic=(_Bool)0;
    come_value5_255->var=((void*)0);
    add_come_last_code(info,"%s;\n",((char*)(right_value427=buffer_to_string(buf_251))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 50, right_value427);
    if(right_value427 && right_value427 != __result_obj__ && !__freed_obj__) { right_value427 = come_decrement_ref_count(right_value427, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[50] = right_value427;
    __freed_obj__ = 0;
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value5_255));
    __result170__ = (_Bool)1;
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
    return __result170__;
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
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional206;
struct list_item$1sNodeph* it_216;
int i_217;
_Bool _while_condtional12;
_Bool _if_conditional207;
void* right_value360;
void* right_value361;
struct optional$2sNodephbool* __result163__;
struct sNode* default_value_218;
void* right_value362;
void* right_value363;
struct optional$2sNodephbool* __result164__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_216, 0, sizeof(struct list_item$1sNodeph*));
memset(&i_217, 0, sizeof(int));
memset(&right_value360, 0, sizeof(void*));
memset(&right_value361, 0, sizeof(void*));
memset(&default_value_218, 0, sizeof(struct sNode*));
memset(&right_value362, 0, sizeof(void*));
memset(&right_value363, 0, sizeof(void*));
            if(_if_conditional206=position<0,            _if_conditional206) {
                position+=self->len;
            }
            it_216=self->head;
            i_217=0;
            while(_while_condtional12=it_216!=((void*)0),            _while_condtional12) {
                if(_if_conditional207=position==i_217,                _if_conditional207) {
                    __result163__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value361=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value360=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "./comelang2.h", 753)))),(struct sNode*)come_increment_ref_count(it_216->item),(_Bool)1)));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value360);
                    if(right_value360 && right_value360 != __result_obj__ && !__freed_obj__) { right_value360 = come_decrement_ref_count(right_value360, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value360;
                    __freed_obj__ = 0;
                    return __result163__;
                }
                it_216=it_216->next;
                i_217++;
            }
            memset(&default_value_218,0,sizeof(struct sNode*));
            __result164__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value363=optional$2sNodephbool_initialize(((struct optional$2sNodephbool*)(right_value362=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "./comelang2.h", 761))),(struct sNode*)come_increment_ref_count(default_value_218),(_Bool)0)));
            if(default_value_218 && !__freed_obj__) { default_value_218 = come_decrement_ref_count(default_value_218, ((struct sNode*)default_value_218)->finalize, ((struct sNode*)default_value_218)->_protocol_obj, 0, 0, 0); } 
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value362);
            if(right_value362 && right_value362 != __result_obj__ && !__freed_obj__) { right_value362 = come_decrement_ref_count(right_value362, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value362;
            __freed_obj__ = 0;
            return __result164__;
            if(default_value_218 && !__freed_obj__) { default_value_218 = come_decrement_ref_count(default_value_218, ((struct sNode*)default_value_218)->finalize, ((struct sNode*)default_value_218)->_protocol_obj, 0, 0, 0); } 
}

static struct optional$2sNodephbool* optional$2sNodephbool_initialize(struct optional$2sNodephbool* self, struct sNode* v1, _Bool v2){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* __dec_obj119;
struct optional$2sNodephbool* __result162__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        __dec_obj119=self->v1;
                        self->v1=(struct sNode*)come_increment_ref_count(v1);
                        if(__dec_obj119) { __dec_obj119 = come_decrement_ref_count(__dec_obj119, ((struct sNode*)__dec_obj119)->finalize, ((struct sNode*)__dec_obj119)->_protocol_obj, 0,0,0); }
                        self->v2=v2;
                        __result162__ = __result_obj__ = self;
                        if(self && !__freed_obj__) { come_call_finalizer(optional$2sNodephboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                        if(v1 && !__freed_obj__) { v1 = come_decrement_ref_count(v1, ((struct sNode*)v1)->finalize, ((struct sNode*)v1)->_protocol_obj, 0, 1, 0); } 
                        return __result162__;
                        if(self && !__freed_obj__) { come_call_finalizer(optional$2sNodephboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                        if(v1 && !__freed_obj__) { v1 = come_decrement_ref_count(v1, ((struct sNode*)v1)->finalize, ((struct sNode*)v1)->_protocol_obj, 0, 1, 0); } 
}

static void optional$2sNodephboolp_finalize(struct optional$2sNodephbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional208;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional208=self!=((void*)0)&&self->v1!=((void*)0),                            _if_conditional208) {
                                if(self->v1 && !__freed_obj__) { self->v1 = come_decrement_ref_count(self->v1, ((struct sNode*)self->v1)->finalize, ((struct sNode*)self->v1)->_protocol_obj, 0, 0, 0); } 
                            }
}

static struct sNode* optional$2sNodephbool_value(struct optional$2sNodephbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional209;
struct sNode* default_value_219;
struct sNode* __result165__;
struct sNode* __result166__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_219, 0, sizeof(struct sNode*));
            if(_if_conditional209=self==((void*)0),            _if_conditional209) {
                memset(&default_value_219,0,sizeof(struct sNode*));
                __result165__ = __result_obj__ = default_value_219;
                return __result165__;
            }
            else {
                __result166__ = __result_obj__ = self->v1;
                return __result166__;
            }
}

int sMapNode_sline(struct sMapNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result171__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result171__ = self->sline;
    return __result171__;
}

char* sMapNode_sname(struct sMapNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value428;
char* __result172__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value428, 0, sizeof(void*));
    __result172__ = __result_obj__ = ((char*)(right_value428=__builtin_string(self->sname)));
    return __result172__;
}

struct sNode* expression_node_v98(struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional219;
int sline_256;
void* right_value429;
void* right_value430;
struct list$1sNodeph* exps_257;
void* right_value431;
void* right_value432;
struct buffer* value_258;
char* head_of_last_line_259;
_Bool _while_condtional13;
_Bool _if_conditional220;
_Bool _if_conditional221;
_Bool _if_conditional222;
_Bool _if_conditional223;
_Bool _if_conditional224;
_Bool _if_conditional225;
int len_260;
_Bool _while_condtional14;
_Bool _if_conditional226;
_Bool _while_condtional15;
_Bool _if_conditional227;
void* right_value433;
struct sNode* exp_261;
_Bool _if_conditional228;
_Bool _if_conditional229;
int sline2_262;
_Bool _if_conditional230;
void* right_value434;
void* right_value435;
void* right_value436;
struct sNode* _inf_value3;
struct sSStringNode* _inf_obj_value3;
void* right_value441;
struct sNode* __result175__;
_Bool _if_conditional239;
int sline_264;
void* right_value442;
void* right_value443;
struct buffer* value_265;
_Bool _while_condtional16;
_Bool _if_conditional240;
char* p_266;
int sline_267;
_Bool _if_conditional241;
_Bool _if_conditional242;
_Bool _if_conditional243;
_Bool _if_conditional244;
int sline2_268;
_Bool _if_conditional245;
void* right_value444;
void* right_value445;
void* right_value446;
struct sNode* _inf_value4;
struct sStrNode* _inf_obj_value4;
void* right_value450;
struct sNode* __result178__;
_Bool _if_conditional252;
int sline_270;
void* right_value451;
void* right_value452;
struct buffer* buf_271;
_Bool _while_condtional17;
_Bool _if_conditional253;
_Bool _if_conditional254;
_Bool _if_conditional255;
_Bool global_272;
_Bool ignore_case_273;
_Bool _while_condtional18;
_Bool _if_conditional256;
_Bool _if_conditional257;
void* right_value453;
void* right_value454;
void* right_value455;
struct sNode* _inf_value5;
struct sRegexNode* _inf_obj_value5;
void* right_value459;
struct sNode* __result181__;
_Bool _if_conditional266;
int c_275;
_Bool _if_conditional267;
_Bool _if_conditional268;
int n_276;
_Bool _while_condtional19;
_Bool _if_conditional269;
int n_277;
_Bool _while_condtional20;
_Bool _while_condtional21;
unsigned long long int n_280;
_Bool _if_conditional270;
void* right_value460;
void* right_value461;
struct sNode* _inf_value6;
struct sCharNode* _inf_obj_value6;
void* right_value464;
struct sNode* __result184__;
_Bool _if_conditional276;
unsigned int c_282;
_Bool _if_conditional277;
_Bool _if_conditional278;
int n_283;
_Bool _while_condtional22;
_Bool _if_conditional279;
int n_284;
_Bool _while_condtional23;
_Bool _while_condtional24;
unsigned long long int n_287;
unsigned char p2_288;
_Bool _if_conditional280;
int size_289;
_Bool _if_conditional281;
_Bool _if_conditional282;
_Bool _if_conditional283;
void* right_value465;
void* right_value466;
struct sNode* _inf_value7;
struct sWCharNode* _inf_obj_value7;
void* right_value469;
struct sNode* __result187__;
_Bool _if_conditional289;
int sline_292;
void* right_value470;
void* right_value471;
struct buffer* value_293;
_Bool _while_condtional25;
_Bool _if_conditional290;
char* p_294;
int sline_295;
_Bool _if_conditional291;
_Bool _if_conditional292;
_Bool _if_conditional293;
int len_296;
int n_297;
_Bool _while_condtional26;
_Bool _if_conditional294;
_Bool _while_condtional27;
unsigned long int lont_300;
int n_301;
_Bool _if_conditional295;
int sline2_302;
_Bool _if_conditional296;
int len_303;
void* right_value472;
unsigned int* wstr_304;
char* str_305;
_Bool _if_conditional297;
void* right_value473;
void* right_value474;
struct sNode* _inf_value8;
struct sWStringNode* _inf_obj_value8;
void* right_value478;
struct sNode* __result190__;
_Bool _if_conditional304;
int sline_307;
void* right_value479;
void* right_value480;
struct list$1sNodeph* exps_308;
void* right_value481;
void* right_value482;
struct buffer* value_309;
_Bool _while_condtional28;
_Bool _if_conditional305;
char* p_310;
int sline_311;
_Bool _if_conditional306;
_Bool _if_conditional307;
_Bool _if_conditional308;
void* right_value483;
struct sNode* exp_312;
char* p_313;
_Bool _while_condtional29;
_Bool _if_conditional309;
_Bool _if_conditional310;
int len_314;
_Bool _while_condtional30;
_Bool _if_conditional311;
_Bool _while_condtional31;
_Bool _if_conditional312;
void* right_value484;
struct sNode* exp_315;
_Bool _if_conditional313;
_Bool _if_conditional314;
int sline2_316;
_Bool _if_conditional315;
void* right_value485;
void* right_value486;
void* right_value487;
struct sNode* _inf_value9;
struct sSStringNode* _inf_obj_value9;
void* right_value492;
struct sNode* __result193__;
_Bool _if_conditional324;
char* p_318;
_Bool no_comma_319;
void* right_value493;
struct sNode* node_320;
char* p2_321;
void* right_value494;
void* right_value495;
struct buffer* first_element_source_322;
void* right_value496;
void* right_value497;
struct list$1sNodeph* list_elements_323;
void* right_value498;
void* right_value499;
struct list$1sNodeph* map_keys_324;
void* right_value500;
void* right_value501;
struct list$1sNodeph* map_elements_325;
_Bool _if_conditional325;
_Bool no_comma_326;
void* right_value502;
struct sNode* node2_327;
_Bool _if_conditional326;
void* right_value503;
void* right_value504;
struct sNode* _inf_value10;
struct sMapNode* _inf_obj_value10;
void* right_value509;
struct sNode* __result196__;
void* right_value510;
_Bool _while_condtional32;
_Bool no_comma_330;
void* right_value511;
struct sNode* node2_331;
void* right_value512;
void* right_value513;
struct sNode* node3_332;
_Bool _if_conditional336;
_Bool _if_conditional337;
_Bool _if_conditional338;
void* right_value514;
void* right_value515;
struct sNode* _inf_value11;
struct sMapNode* _inf_obj_value11;
void* right_value520;
struct sNode* __result201__;
_Bool _if_conditional347;
_Bool _if_conditional348;
_Bool _while_condtional33;
_Bool no_comma_334;
void* right_value521;
struct sNode* node2_335;
_Bool _if_conditional349;
_Bool _if_conditional350;
_Bool _if_conditional351;
_Bool _if_conditional352;
void* right_value522;
void* right_value523;
struct sNode* _inf_value12;
struct sListNode* _inf_obj_value12;
void* right_value527;
struct sNode* __result204__;
void* right_value528;
struct sNode* __result205__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&sline_256, 0, sizeof(int));
memset(&right_value429, 0, sizeof(void*));
memset(&right_value430, 0, sizeof(void*));
memset(&exps_257, 0, sizeof(struct list$1sNodeph*));
memset(&right_value431, 0, sizeof(void*));
memset(&right_value432, 0, sizeof(void*));
memset(&value_258, 0, sizeof(struct buffer*));
memset(&head_of_last_line_259, 0, sizeof(char*));
memset(&len_260, 0, sizeof(int));
memset(&right_value433, 0, sizeof(void*));
memset(&exp_261, 0, sizeof(struct sNode*));
memset(&sline2_262, 0, sizeof(int));
memset(&right_value434, 0, sizeof(void*));
memset(&right_value435, 0, sizeof(void*));
memset(&right_value436, 0, sizeof(void*));
memset(&right_value441, 0, sizeof(void*));
memset(&sline_264, 0, sizeof(int));
memset(&right_value442, 0, sizeof(void*));
memset(&right_value443, 0, sizeof(void*));
memset(&value_265, 0, sizeof(struct buffer*));
memset(&p_266, 0, sizeof(char*));
memset(&sline_267, 0, sizeof(int));
memset(&sline2_268, 0, sizeof(int));
memset(&right_value444, 0, sizeof(void*));
memset(&right_value445, 0, sizeof(void*));
memset(&right_value446, 0, sizeof(void*));
memset(&right_value450, 0, sizeof(void*));
memset(&sline_270, 0, sizeof(int));
memset(&right_value451, 0, sizeof(void*));
memset(&right_value452, 0, sizeof(void*));
memset(&buf_271, 0, sizeof(struct buffer*));
memset(&global_272, 0, sizeof(_Bool));
memset(&ignore_case_273, 0, sizeof(_Bool));
memset(&right_value453, 0, sizeof(void*));
memset(&right_value454, 0, sizeof(void*));
memset(&right_value455, 0, sizeof(void*));
memset(&right_value459, 0, sizeof(void*));
memset(&c_275, 0, sizeof(int));
memset(&n_276, 0, sizeof(int));
memset(&n_277, 0, sizeof(int));
memset(&n_280, 0, sizeof(unsigned long long int));
memset(&right_value460, 0, sizeof(void*));
memset(&right_value461, 0, sizeof(void*));
memset(&right_value464, 0, sizeof(void*));
memset(&c_282, 0, sizeof(unsigned int));
memset(&n_283, 0, sizeof(int));
memset(&n_284, 0, sizeof(int));
memset(&n_287, 0, sizeof(unsigned long long int));
memset(&p2_288, 0, sizeof(unsigned char));
memset(&size_289, 0, sizeof(int));
memset(&right_value465, 0, sizeof(void*));
memset(&right_value466, 0, sizeof(void*));
memset(&right_value469, 0, sizeof(void*));
memset(&sline_292, 0, sizeof(int));
memset(&right_value470, 0, sizeof(void*));
memset(&right_value471, 0, sizeof(void*));
memset(&value_293, 0, sizeof(struct buffer*));
memset(&p_294, 0, sizeof(char*));
memset(&sline_295, 0, sizeof(int));
memset(&len_296, 0, sizeof(int));
memset(&n_297, 0, sizeof(int));
memset(&lont_300, 0, sizeof(unsigned long int));
memset(&n_301, 0, sizeof(int));
memset(&sline2_302, 0, sizeof(int));
memset(&len_303, 0, sizeof(int));
memset(&right_value472, 0, sizeof(void*));
memset(&wstr_304, 0, sizeof(unsigned int*));
memset(&str_305, 0, sizeof(char*));
memset(&right_value473, 0, sizeof(void*));
memset(&right_value474, 0, sizeof(void*));
memset(&right_value478, 0, sizeof(void*));
memset(&sline_307, 0, sizeof(int));
memset(&right_value479, 0, sizeof(void*));
memset(&right_value480, 0, sizeof(void*));
memset(&exps_308, 0, sizeof(struct list$1sNodeph*));
memset(&right_value481, 0, sizeof(void*));
memset(&right_value482, 0, sizeof(void*));
memset(&value_309, 0, sizeof(struct buffer*));
memset(&p_310, 0, sizeof(char*));
memset(&sline_311, 0, sizeof(int));
memset(&right_value483, 0, sizeof(void*));
memset(&exp_312, 0, sizeof(struct sNode*));
memset(&p_313, 0, sizeof(char*));
memset(&len_314, 0, sizeof(int));
memset(&right_value484, 0, sizeof(void*));
memset(&exp_315, 0, sizeof(struct sNode*));
memset(&sline2_316, 0, sizeof(int));
memset(&right_value485, 0, sizeof(void*));
memset(&right_value486, 0, sizeof(void*));
memset(&right_value487, 0, sizeof(void*));
memset(&right_value492, 0, sizeof(void*));
memset(&p_318, 0, sizeof(char*));
memset(&no_comma_319, 0, sizeof(_Bool));
memset(&right_value493, 0, sizeof(void*));
memset(&node_320, 0, sizeof(struct sNode*));
memset(&p2_321, 0, sizeof(char*));
memset(&right_value494, 0, sizeof(void*));
memset(&right_value495, 0, sizeof(void*));
memset(&first_element_source_322, 0, sizeof(struct buffer*));
memset(&right_value496, 0, sizeof(void*));
memset(&right_value497, 0, sizeof(void*));
memset(&list_elements_323, 0, sizeof(struct list$1sNodeph*));
memset(&right_value498, 0, sizeof(void*));
memset(&right_value499, 0, sizeof(void*));
memset(&map_keys_324, 0, sizeof(struct list$1sNodeph*));
memset(&right_value500, 0, sizeof(void*));
memset(&right_value501, 0, sizeof(void*));
memset(&map_elements_325, 0, sizeof(struct list$1sNodeph*));
memset(&no_comma_326, 0, sizeof(_Bool));
memset(&right_value502, 0, sizeof(void*));
memset(&node2_327, 0, sizeof(struct sNode*));
memset(&right_value503, 0, sizeof(void*));
memset(&right_value504, 0, sizeof(void*));
memset(&right_value509, 0, sizeof(void*));
memset(&right_value510, 0, sizeof(void*));
memset(&no_comma_330, 0, sizeof(_Bool));
memset(&right_value511, 0, sizeof(void*));
memset(&node2_331, 0, sizeof(struct sNode*));
memset(&right_value512, 0, sizeof(void*));
memset(&right_value513, 0, sizeof(void*));
memset(&node3_332, 0, sizeof(struct sNode*));
memset(&right_value514, 0, sizeof(void*));
memset(&right_value515, 0, sizeof(void*));
memset(&right_value520, 0, sizeof(void*));
memset(&no_comma_334, 0, sizeof(_Bool));
memset(&right_value521, 0, sizeof(void*));
memset(&node2_335, 0, sizeof(struct sNode*));
memset(&right_value522, 0, sizeof(void*));
memset(&right_value523, 0, sizeof(void*));
memset(&right_value527, 0, sizeof(void*));
memset(&right_value528, 0, sizeof(void*));
    if(_if_conditional219=*info->p==34&&*(info->p+1)==34&&*(info->p+2)==34&&*(info->p+3)==10,    _if_conditional219) {
        info->p+=4;
        info->sline++;
        sline_256=info->sline;
        exps_257=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value430=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value429=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 1367))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value429);
        if(right_value429 && right_value429 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value429, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value429;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value430);
        if(right_value430 && right_value430 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value430, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value430;
        __freed_obj__ = 0;
        value_258=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value432=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value431=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1368))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value431);
        if(right_value431 && right_value431 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value431, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value431;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value432);
        if(right_value432 && right_value432 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value432, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value432;
        __freed_obj__ = 0;
        head_of_last_line_259=((void*)0);
        while(_while_condtional13=1,        _while_condtional13) {
            if(_if_conditional220=*info->p==34&&*(info->p+1)==34&&*(info->p+2)==34,            _if_conditional220) {
                if(_if_conditional221=head_of_last_line_259,                _if_conditional221) {
                    buffer_trim(value_258,info->p-head_of_last_line_259);
                }
                info->p+=3;
                skip_spaces_and_lf(info);
                break;
            }
            else {
                if(_if_conditional222=*info->p==37,                _if_conditional222) {
                    buffer_append_char(value_258,37);
                    buffer_append_char(value_258,37);
                    info->p++;
                }
                else {
                    if(_if_conditional223=*info->p==34,                    _if_conditional223) {
                        buffer_append_char(value_258,92);
                        buffer_append_char(value_258,34);
                        info->p++;
                    }
                    else {
                        if(_if_conditional224=*info->p==92,                        _if_conditional224) {
                            buffer_append_char(value_258,92);
                            info->p++;
                            if(_if_conditional225=xisdigit(*info->p),                            _if_conditional225) {
                                len_260=0;
                                while(_while_condtional14=xisdigit(*info->p)&&len_260<3,                                _while_condtional14) {
                                    buffer_append_char(value_258,*info->p);
                                    info->p++;
                                    len_260++;
                                }
                            }
                            else {
                                if(_if_conditional226=*info->p==120||*info->p==88,                                _if_conditional226) {
                                    buffer_append_char(value_258,*info->p);
                                    info->p++;
                                    while(_while_condtional15=*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70,                                    _while_condtional15) {
                                        buffer_append_char(value_258,*info->p);
                                        info->p++;
                                    }
                                }
                                else {
                                    if(_if_conditional227=*info->p==123,                                    _if_conditional227) {
                                        info->p++;
                                        exp_261=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value433=expression_v13(info))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value433);
                                        if(right_value433 && right_value433 != __result_obj__ && !__freed_obj__) { right_value433 = come_decrement_ref_count(right_value433, ((struct sNode*)right_value433)->finalize, ((struct sNode*)right_value433)->_protocol_obj, 1, 0, 0); } 
                                        __right_value_freed_obj[0] = right_value433;
                                        __freed_obj__ = 0;
                                        list$1sNodeph_add(exps_257,(struct sNode*)come_increment_ref_count(exp_261));
                                        if(_if_conditional228=*info->p==125,                                        _if_conditional228) {
                                            info->p++;
                                        }
                                        buffer_append_str(value_258,"%s");
                                        if(exp_261 && !__freed_obj__) { exp_261 = come_decrement_ref_count(exp_261, ((struct sNode*)exp_261)->finalize, ((struct sNode*)exp_261)->_protocol_obj, 0, 0, 0); } 
                                    }
                                    else {
                                        switch (*info->p) {
                                            case 48:
                                            buffer_append_char(value_258,*info->p);
                                            info->p++;
                                            break;
                                            case 110:
                                            buffer_append_char(value_258,*info->p);
                                            info->p++;
                                            break;
                                            case 116:
                                            buffer_append_char(value_258,*info->p);
                                            info->p++;
                                            break;
                                            case 114:
                                            buffer_append_char(value_258,*info->p);
                                            info->p++;
                                            break;
                                            case 118:
                                            buffer_append_char(value_258,*info->p);
                                            info->p++;
                                            break;
                                            case 102:
                                            buffer_append_char(value_258,*info->p);
                                            info->p++;
                                            break;
                                            case 97:
                                            buffer_append_char(value_258,*info->p);
                                            info->p++;
                                            break;
                                            case 98:
                                            buffer_append_char(value_258,*info->p);
                                            info->p++;
                                            break;
                                            case 92:
                                            buffer_append_char(value_258,*info->p);
                                            info->p++;
                                            break;
                                            default:
                                            buffer_append_char(value_258,*info->p);
                                            info->p++;
                                            break;
                                        }
                                    }
                                }
                            }
                        }
                        else {
                            if(_if_conditional229=*info->p==0,                            _if_conditional229) {
                                sline2_262=info->sline;
                                info->sline=sline_256;
                                err_msg(info,"close \" to make embbeded string value");
                                exit(2);
                            }
                            else {
                                if(_if_conditional230=*info->p==10,                                _if_conditional230) {
                                    buffer_append_char(value_258,92);
                                    buffer_append_char(value_258,110);
                                    info->p++;
                                    info->sline++;
                                    head_of_last_line_259=info->p;
                                }
                                else {
                                    buffer_append_char(value_258,*info->p);
                                    info->p++;
                                }
                            }
                        }
                    }
                }
            }
        }
        skip_spaces_and_lf(info);
        _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1516);
        _inf_obj_value3=come_increment_ref_count(((struct sSStringNode*)(right_value436=sSStringNode_initialize((struct sSStringNode*)come_increment_ref_count(((struct sSStringNode*)(right_value434=(struct sSStringNode*)come_calloc(1, sizeof(struct sSStringNode)*(1), "06str.c", 1516)))),(char*)come_increment_ref_count(((char*)(right_value435=buffer_to_string(value_258)))),(struct list$1sNodeph*)come_increment_ref_count(exps_257),sline_256,info))));
        _inf_value3->_protocol_obj=_inf_obj_value3;
        _inf_value3->finalize=(void*)sSStringNode_finalize;
        _inf_value3->clone=(void*)sSStringNode_clone;
        _inf_value3->compile=(void*)sSStringNode_compile;
        _inf_value3->sline=(void*)sSStringNode_sline;
        _inf_value3->sname=(void*)sSStringNode_sname;
        _inf_value3->terminated=(void*)sSStringNode_terminated;
        _inf_value3->kind=(void*)sSStringNode_kind;
        __result175__ = __result_obj__ = ((struct sNode*)(right_value441=_inf_value3));
        if(exps_257 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,exps_257, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(value_258 && !__freed_obj__) { come_call_finalizer(buffer_finalize,value_258, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value434);
        if(right_value434 && right_value434 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sSStringNode_finalize,right_value434, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[4] = right_value434;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value435);
        if(right_value435 && right_value435 != __result_obj__ && !__freed_obj__) { right_value435 = come_decrement_ref_count(right_value435, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[5] = right_value435;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value436);
        if(right_value436 && right_value436 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sSStringNode_finalize,right_value436, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[6] = right_value436;
        __freed_obj__ = 0;
        return __result175__;
        if(exps_257 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,exps_257, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(value_258 && !__freed_obj__) { come_call_finalizer(buffer_finalize,value_258, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    else {
        if(_if_conditional239=*info->p==34,        _if_conditional239) {
            info->p++;
            sline_264=info->sline;
            value_265=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value443=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value442=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1524))))))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value442);
            if(right_value442 && right_value442 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value442, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value442;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value443);
            if(right_value443 && right_value443 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value443, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value443;
            __freed_obj__ = 0;
            while(_while_condtional16=1,            _while_condtional16) {
                if(_if_conditional240=*info->p==34,                _if_conditional240) {
                    info->p++;
                    p_266=info->p;
                    sline_267=info->sline;
                    skip_spaces_and_lf(info);
                    parse_sharp_v5(info);
                    if(_if_conditional241=*info->p==34,                    _if_conditional241) {
                        info->p++;
                    }
                    else {
                        info->p=p_266;
                        info->sline=sline_267;
                        break;
                    }
                }
                else {
                    if(_if_conditional242=*info->p==92,                    _if_conditional242) {
                        buffer_append_char(value_265,92);
                        info->p++;
                        if(_if_conditional243=*info->p==34,                        _if_conditional243) {
                            buffer_append_char(value_265,34);
                            info->p++;
                        }
                        else {
                            buffer_append_char(value_265,*info->p);
                            info->p++;
                        }
                    }
                    else {
                        if(_if_conditional244=*info->p==0,                        _if_conditional244) {
                            sline2_268=info->sline;
                            info->sline=sline_264;
                            err_msg(info,"close \" to make c string value");
                            info->sline=sline2_268;
                            exit(2);
                        }
                        else {
                            if(_if_conditional245=*info->p==10,                            _if_conditional245) {
                                info->sline++;
                            }
                            buffer_append_char(value_265,*info->p);
                            info->p++;
                        }
                    }
                }
            }
            skip_spaces_and_lf(info);
            _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1576);
            _inf_obj_value4=come_increment_ref_count(((struct sStrNode*)(right_value446=sStrNode_initialize((struct sStrNode*)come_increment_ref_count(((struct sStrNode*)(right_value444=(struct sStrNode*)come_calloc(1, sizeof(struct sStrNode)*(1), "06str.c", 1576)))),(char*)come_increment_ref_count(((char*)(right_value445=buffer_to_string(value_265)))),sline_264,info))));
            _inf_value4->_protocol_obj=_inf_obj_value4;
            _inf_value4->finalize=(void*)sStrNode_finalize;
            _inf_value4->clone=(void*)sStrNode_clone;
            _inf_value4->compile=(void*)sStrNode_compile;
            _inf_value4->sline=(void*)sStrNode_sline;
            _inf_value4->sname=(void*)sStrNode_sname;
            _inf_value4->terminated=(void*)sStrNode_terminated;
            _inf_value4->kind=(void*)sStrNode_kind;
            __result178__ = __result_obj__ = ((struct sNode*)(right_value450=_inf_value4));
            if(value_265 && !__freed_obj__) { come_call_finalizer(buffer_finalize,value_265, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value444);
            if(right_value444 && right_value444 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStrNode_finalize,right_value444, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value444;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value445);
            if(right_value445 && right_value445 != __result_obj__ && !__freed_obj__) { right_value445 = come_decrement_ref_count(right_value445, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[3] = right_value445;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value446);
            if(right_value446 && right_value446 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStrNode_finalize,right_value446, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[4] = right_value446;
            __freed_obj__ = 0;
            return __result178__;
            if(value_265 && !__freed_obj__) { come_call_finalizer(buffer_finalize,value_265, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        else {
            if(_if_conditional252=*info->p==47,            _if_conditional252) {
                info->p++;
                sline_270=info->sline;
                buf_271=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value452=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value451=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1583))))))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value451);
                if(right_value451 && right_value451 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value451, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value451;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value452);
                if(right_value452 && right_value452 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value452, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value452;
                __freed_obj__ = 0;
                while(_while_condtional17=(_Bool)1,                _while_condtional17) {
                    if(_if_conditional253=*info->p==92&&*(info->p+1)==47,                    _if_conditional253) {
                        info->p++;
                        buffer_append_char(buf_271,*info->p);
                        info->p++;
                    }
                    else {
                        if(_if_conditional254=*info->p==47,                        _if_conditional254) {
                            info->p++;
                            break;
                        }
                        else {
                            if(_if_conditional255=*info->p==0,                            _if_conditional255) {
                                err_msg(info,"require closing / for regex");
                                exit(5);
                            }
                            else {
                                buffer_append_char(buf_271,*info->p);
                                info->p++;
                            }
                        }
                    }
                }
                global_272=(_Bool)0;
                ignore_case_273=(_Bool)0;
                while(_while_condtional18=*info->p==103||*info->p==105,                _while_condtional18) {
                    if(_if_conditional256=*info->p==103,                    _if_conditional256) {
                        info->p++;
                        global_272=(_Bool)1;
                    }
                    else {
                        if(_if_conditional257=*info->p==105,                        _if_conditional257) {
                            info->p++;
                            ignore_case_273=(_Bool)1;
                        }
                        else {
                            break;
                        }
                    }
                }
                skip_spaces_and_lf(info);
                _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1622);
                _inf_obj_value5=come_increment_ref_count(((struct sRegexNode*)(right_value455=sRegexNode_initialize((struct sRegexNode*)come_increment_ref_count(((struct sRegexNode*)(right_value453=(struct sRegexNode*)come_calloc(1, sizeof(struct sRegexNode)*(1), "06str.c", 1622)))),(char*)come_increment_ref_count(((char*)(right_value454=buffer_to_string(buf_271)))),global_272,ignore_case_273,sline_270,info))));
                _inf_value5->_protocol_obj=_inf_obj_value5;
                _inf_value5->finalize=(void*)sRegexNode_finalize;
                _inf_value5->clone=(void*)sRegexNode_clone;
                _inf_value5->compile=(void*)sRegexNode_compile;
                _inf_value5->sline=(void*)sRegexNode_sline;
                _inf_value5->sname=(void*)sRegexNode_sname;
                _inf_value5->terminated=(void*)sRegexNode_terminated;
                _inf_value5->kind=(void*)sRegexNode_kind;
                __result181__ = __result_obj__ = ((struct sNode*)(right_value459=_inf_value5));
                if(buf_271 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_271, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value453);
                if(right_value453 && right_value453 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sRegexNode_finalize,right_value453, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value453;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value454);
                if(right_value454 && right_value454 != __result_obj__ && !__freed_obj__) { right_value454 = come_decrement_ref_count(right_value454, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[3] = right_value454;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value455);
                if(right_value455 && right_value455 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sRegexNode_finalize,right_value455, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[4] = right_value455;
                __freed_obj__ = 0;
                return __result181__;
                if(buf_271 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_271, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            else {
                if(_if_conditional266=*info->p==39,                _if_conditional266) {
                    info->p++;
                    if(_if_conditional267=*info->p==92,                    _if_conditional267) {
                        info->p++;
                        if(_if_conditional268=xisdigit(*info->p),                        _if_conditional268) {
                            n_276=0;
                            while(_while_condtional19=xisdigit(*info->p),                            _while_condtional19) {
                                n_276=n_276*8+*info->p-48;
                                info->p++;
                            }
                            c_275=n_276;
                        }
                        else {
                            switch (*info->p) {
                                case 110:
                                c_275=10;
                                info->p++;
                                break;
                                case 116:
                                c_275=9;
                                info->p++;
                                break;
                                case 114:
                                c_275=13;
                                info->p++;
                                break;
                                case 97:
                                c_275=7;
                                info->p++;
                                break;
                                case 102:
                                c_275=12;
                                info->p++;
                                break;
                                case 118:
                                c_275=11;
                                info->p++;
                                break;
                                case 98:
                                c_275=8;
                                info->p++;
                                break;
                                case 92:
                                c_275=92;
                                info->p++;
                                break;
                                case 48:
                                c_275=0;
                                info->p++;
                                if(_if_conditional269=xisdigit(*info->p),                                _if_conditional269) {
                                    n_277=0;
                                    while(_while_condtional20=xisdigit(*info->p),                                    _while_condtional20) {
                                        n_277=n_277*8+*info->p-48;
                                        info->p++;
                                        skip_spaces_and_lf(info);
                                    }
                                    c_275=n_277;
                                }
                                break;
                                case 120:
                                case 88:
                                {
                                    info->p++;
                                    char buf_278[128];
                                    memset(&buf_278, 0, sizeof(char)                                    *(128)                                    );
                                    strncpy(buf_278,"0x",128);
                                    while(_while_condtional21=*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70,                                    _while_condtional21) {
                                        char buf2_279[2];
                                        memset(&buf2_279, 0, sizeof(char)                                        *(2)                                        );
                                        buf2_279[0]=*info->p;
                                        buf2_279[1]=0;
                                        info->p++;
                                        strncat(buf_278,buf2_279,128);
                                    }
                                    n_280=strtoll(buf_278,((void*)0),0);
                                    c_275=n_280;
                                }
                                break;
                                default:
                                c_275=*info->p;
                                info->p++;
                                break;
                            }
                        }
                    }
                    else {
                        c_275=*info->p;
                        info->p++;
                    }
                    if(_if_conditional270=*info->p!=39,                    _if_conditional270) {
                        err_msg(info,"close \' to make character value");
                    }
                    else {
                        info->p++;
                        skip_spaces_and_lf(info);
                        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1739);
                        _inf_obj_value6=come_increment_ref_count(((struct sCharNode*)(right_value461=sCharNode_initialize((struct sCharNode*)come_increment_ref_count(((struct sCharNode*)(right_value460=(struct sCharNode*)come_calloc(1, sizeof(struct sCharNode)*(1), "06str.c", 1739)))),c_275,info))));
                        _inf_value6->_protocol_obj=_inf_obj_value6;
                        _inf_value6->finalize=(void*)sCharNode_finalize;
                        _inf_value6->clone=(void*)sCharNode_clone;
                        _inf_value6->compile=(void*)sCharNode_compile;
                        _inf_value6->sline=(void*)sCharNode_sline;
                        _inf_value6->sname=(void*)sCharNode_sname;
                        _inf_value6->terminated=(void*)sCharNode_terminated;
                        _inf_value6->kind=(void*)sCharNode_kind;
                        __result184__ = __result_obj__ = ((struct sNode*)(right_value464=_inf_value6));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value460);
                        if(right_value460 && right_value460 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sCharNode_finalize,right_value460, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value460;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value461);
                        if(right_value461 && right_value461 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sCharNode_finalize,right_value461, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value461;
                        __freed_obj__ = 0;
                        return __result184__;
                    }
                }
                else {
                    if(_if_conditional276=*info->p==76&&*(info->p+1)==39,                    _if_conditional276) {
                        info->p+=2;
                        if(_if_conditional277=*info->p==92,                        _if_conditional277) {
                            info->p++;
                            if(_if_conditional278=xisdigit(*info->p),                            _if_conditional278) {
                                n_283=0;
                                while(_while_condtional22=xisdigit(*info->p),                                _while_condtional22) {
                                    n_283=n_283*8+*info->p-48;
                                    info->p++;
                                }
                                c_282=n_283;
                            }
                            else {
                                switch (*info->p) {
                                    case 110:
                                    c_282=10;
                                    info->p++;
                                    break;
                                    case 116:
                                    c_282=9;
                                    info->p++;
                                    break;
                                    case 114:
                                    c_282=13;
                                    info->p++;
                                    break;
                                    case 97:
                                    c_282=7;
                                    info->p++;
                                    break;
                                    case 92:
                                    c_282=92;
                                    info->p++;
                                    break;
                                    case 48:
                                    c_282=0;
                                    info->p++;
                                    if(_if_conditional279=xisdigit(*info->p),                                    _if_conditional279) {
                                        n_284=0;
                                        while(_while_condtional23=xisdigit(*info->p),                                        _while_condtional23) {
                                            n_284=n_284*8+*info->p-48;
                                            info->p++;
                                            skip_spaces_and_lf(info);
                                        }
                                        c_282=n_284;
                                    }
                                    break;
                                    case 120:
                                    case 88:
                                    {
                                        info->p++;
                                        char buf_285[128];
                                        memset(&buf_285, 0, sizeof(char)                                        *(128)                                        );
                                        strncpy(buf_285,"0x",128);
                                        while(_while_condtional24=*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70,                                        _while_condtional24) {
                                            char buf2_286[2];
                                            memset(&buf2_286, 0, sizeof(char)                                            *(2)                                            );
                                            buf2_286[0]=*info->p;
                                            buf2_286[1]=0;
                                            info->p++;
                                            strncat(buf_285,buf2_286,128);
                                        }
                                        n_287=strtoll(buf_285,((void*)0),0);
                                        c_282=n_287;
                                    }
                                    break;
                                    default:
                                    c_282=*info->p;
                                    info->p++;
                                    break;
                                }
                            }
                        }
                        else {
                            p2_288=*(unsigned char*)info->p;
                            if(_if_conditional280=p2_288>127,                            _if_conditional280) {
                                char str_290[16+1];
                                memset(&str_290, 0, sizeof(char)                                *(16+1)                                );
                                size_289=((p2_288&128)>>7)+((p2_288&64)>>6)+((p2_288&32)>>5)+((p2_288&16)>>4);
                                if(_if_conditional281=size_289>16,                                _if_conditional281) {
                                    err_msg(info,"invalid utf-8 character. MB_LEN_MAX");
                                    info->err_num++;
                                }
                                else {
                                    memcpy(str_290,info->p,size_289);
                                    str_290[size_289]=0;
                                    if(_if_conditional282=mbtowc(&c_282,str_290,size_289)<0,                                    _if_conditional282) {
                                        perror("mbtowc");
                                        err_msg(info,"invalid utf-8 character. mbtowc");
                                        info->err_num++;
                                        c_282=0;
                                    }
                                    info->p+=size_289;
                                }
                            }
                            else {
                                c_282=*info->p;
                                info->p++;
                            }
                        }
                        if(_if_conditional283=*info->p!=39,                        _if_conditional283) {
                            err_msg(info,"close \' to make character value");
                            info->err_num++;
                        }
                        else {
                            info->p++;
                            skip_spaces_and_lf(info);
                            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1875);
                            _inf_obj_value7=come_increment_ref_count(((struct sWCharNode*)(right_value466=sWCharNode_initialize((struct sWCharNode*)come_increment_ref_count(((struct sWCharNode*)(right_value465=(struct sWCharNode*)come_calloc(1, sizeof(struct sWCharNode)*(1), "06str.c", 1875)))),c_282,info))));
                            _inf_value7->_protocol_obj=_inf_obj_value7;
                            _inf_value7->finalize=(void*)sWCharNode_finalize;
                            _inf_value7->clone=(void*)sWCharNode_clone;
                            _inf_value7->compile=(void*)sWCharNode_compile;
                            _inf_value7->sline=(void*)sWCharNode_sline;
                            _inf_value7->sname=(void*)sWCharNode_sname;
                            _inf_value7->terminated=(void*)sWCharNode_terminated;
                            _inf_value7->kind=(void*)sWCharNode_kind;
                            __result187__ = __result_obj__ = ((struct sNode*)(right_value469=_inf_value7));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value465);
                            if(right_value465 && right_value465 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sWCharNode_finalize,right_value465, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value465;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value466);
                            if(right_value466 && right_value466 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sWCharNode_finalize,right_value466, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value466;
                            __freed_obj__ = 0;
                            return __result187__;
                        }
                    }
                    else {
                        if(_if_conditional289=*info->p==76&&*(info->p+1)==34,                        _if_conditional289) {
                            info->p+=2;
                            sline_292=info->sline;
                            value_293=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value471=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value470=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1884))))))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value470);
                            if(right_value470 && right_value470 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value470, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value470;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value471);
                            if(right_value471 && right_value471 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value471, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value471;
                            __freed_obj__ = 0;
                            while(_while_condtional25=1,                            _while_condtional25) {
                                if(_if_conditional290=*info->p==34,                                _if_conditional290) {
                                    info->p++;
                                    p_294=info->p;
                                    sline_295=info->sline;
                                    skip_spaces_and_lf(info);
                                    if(_if_conditional291=*info->p==34,                                    _if_conditional291) {
                                        info->p++;
                                    }
                                    else {
                                        info->p=p_294;
                                        info->sline=sline_295;
                                        break;
                                    }
                                }
                                else {
                                    if(_if_conditional292=*info->p==92,                                    _if_conditional292) {
                                        info->p++;
                                        if(_if_conditional293=xisdigit(*info->p),                                        _if_conditional293) {
                                            len_296=0;
                                            n_297=0;
                                            while(_while_condtional26=xisdigit(*info->p)&&len_296<3,                                            _while_condtional26) {
                                                n_297=n_297*8+*info->p-48;
                                                info->p++;
                                                len_296++;
                                            }
                                            buffer_append_char(value_293,n_297);
                                        }
                                        else {
                                            if(_if_conditional294=*info->p==120||*info->p==88,                                            _if_conditional294) {
                                                info->p++;
                                                char buf_298[128];
                                                memset(&buf_298, 0, sizeof(char)                                                *(128)                                                );
                                                strncpy(buf_298,"0x",128);
                                                while(_while_condtional27=*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70,                                                _while_condtional27) {
                                                    char buf2_299[2];
                                                    memset(&buf2_299, 0, sizeof(char)                                                    *(2)                                                    );
                                                    buf2_299[0]=*info->p;
                                                    buf2_299[1]=0;
                                                    info->p++;
                                                    strncat(buf_298,buf2_299,128);
                                                }
                                                n_301=strtoll(buf_298,((void*)0),0);
                                                buffer_append_char(value_293,(char)n_301);
                                            }
                                            else {
                                                switch (*info->p) {
                                                    case 48:
                                                    buffer_append_char(value_293,0);
                                                    info->p++;
                                                    break;
                                                    case 110:
                                                    buffer_append_char(value_293,10);
                                                    info->p++;
                                                    break;
                                                    case 116:
                                                    buffer_append_char(value_293,9);
                                                    info->p++;
                                                    break;
                                                    case 114:
                                                    buffer_append_char(value_293,13);
                                                    info->p++;
                                                    break;
                                                    case 118:
                                                    buffer_append_char(value_293,11);
                                                    info->p++;
                                                    break;
                                                    case 102:
                                                    buffer_append_char(value_293,12);
                                                    info->p++;
                                                    break;
                                                    case 97:
                                                    buffer_append_char(value_293,7);
                                                    info->p++;
                                                    break;
                                                    case 98:
                                                    buffer_append_char(value_293,8);
                                                    info->p++;
                                                    break;
                                                    case 92:
                                                    buffer_append_char(value_293,92);
                                                    info->p++;
                                                    break;
                                                    default:
                                                    buffer_append_char(value_293,*info->p);
                                                    info->p++;
                                                    break;
                                                }
                                            }
                                        }
                                    }
                                    else {
                                        if(_if_conditional295=*info->p==0,                                        _if_conditional295) {
                                            sline2_302=info->sline;
                                            info->sline=sline_292;
                                            err_msg(info,"close \" to make c string value");
                                            exit(2);
                                        }
                                        else {
                                            if(_if_conditional296=*info->p==10,                                            _if_conditional296) {
                                                info->sline++;
                                            }
                                            buffer_append_char(value_293,*info->p);
                                            info->p++;
                                        }
                                    }
                                }
                            }
                            skip_spaces_and_lf(info);
                            len_303=value_293->len;
                            wstr_304=(unsigned int*)come_increment_ref_count(((unsigned int*)(right_value472=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(len_303+1)), "06str.c", 2007))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value472);
                            if(right_value472 && right_value472 != __result_obj__ && !__freed_obj__) { right_value472 = come_decrement_ref_count(right_value472, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[2] = right_value472;
                            __freed_obj__ = 0;
                            str_305=value_293->buf;
                            if(_if_conditional297=mbstowcs(wstr_304,str_305,len_303+1)<0,                            _if_conditional297) {
                                perror("mbstowcs");
                                exit(1);
                            }
                            wstr_304[len_303]=0;
                            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2018);
                            _inf_obj_value8=come_increment_ref_count(((struct sWStringNode*)(right_value474=sWStringNode_initialize((struct sWStringNode*)come_increment_ref_count(((struct sWStringNode*)(right_value473=(struct sWStringNode*)come_calloc(1, sizeof(struct sWStringNode)*(1), "06str.c", 2018)))),(unsigned int*)come_increment_ref_count(wstr_304),sline_292,info))));
                            _inf_value8->_protocol_obj=_inf_obj_value8;
                            _inf_value8->finalize=(void*)sWStringNode_finalize;
                            _inf_value8->clone=(void*)sWStringNode_clone;
                            _inf_value8->compile=(void*)sWStringNode_compile;
                            _inf_value8->sline=(void*)sWStringNode_sline;
                            _inf_value8->sname=(void*)sWStringNode_sname;
                            _inf_value8->terminated=(void*)sWStringNode_terminated;
                            _inf_value8->kind=(void*)sWStringNode_kind;
                            __result190__ = __result_obj__ = ((struct sNode*)(right_value478=_inf_value8));
                            if(value_293 && !__freed_obj__) { come_call_finalizer(buffer_finalize,value_293, (void*)0, (void*)0, 0, 0, 0, 0); }
                            if(wstr_304 && !__freed_obj__) { wstr_304 = come_decrement_ref_count(wstr_304, (void*)0, (void*)0, 0, 0, 0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value473);
                            if(right_value473 && right_value473 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sWStringNode_finalize,right_value473, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[3] = right_value473;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value474);
                            if(right_value474 && right_value474 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sWStringNode_finalize,right_value474, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[4] = right_value474;
                            __freed_obj__ = 0;
                            return __result190__;
                            if(value_293 && !__freed_obj__) { come_call_finalizer(buffer_finalize,value_293, (void*)0, (void*)0, 0, 0, 0, 0); }
                            if(wstr_304 && !__freed_obj__) { wstr_304 = come_decrement_ref_count(wstr_304, (void*)0, (void*)0, 0, 0, 0); }
                        }
                        else {
                            if(_if_conditional304=(*info->p==115||*info->p==83)&&*(info->p+1)==34,                            _if_conditional304) {
                                info->p+=2;
                                sline_307=info->sline;
                                exps_308=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value480=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value479=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 2026))))))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value479);
                                if(right_value479 && right_value479 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value479, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value479;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value480);
                                if(right_value480 && right_value480 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value480, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[1] = right_value480;
                                __freed_obj__ = 0;
                                value_309=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value482=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value481=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 2027))))))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value481);
                                if(right_value481 && right_value481 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value481, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[2] = right_value481;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value482);
                                if(right_value482 && right_value482 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value482, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[3] = right_value482;
                                __freed_obj__ = 0;
                                while(_while_condtional28=1,                                _while_condtional28) {
                                    if(_if_conditional305=*info->p==34,                                    _if_conditional305) {
                                        info->p++;
                                        p_310=info->p;
                                        sline_311=info->sline;
                                        skip_spaces_and_lf(info);
                                        if(_if_conditional306=*info->p==34,                                        _if_conditional306) {
                                            info->p++;
                                        }
                                        else {
                                            info->p=p_310;
                                            info->sline=sline_311;
                                            break;
                                        }
                                    }
                                    else {
                                        if(_if_conditional307=*info->p==37,                                        _if_conditional307) {
                                            buffer_append_char(value_309,37);
                                            buffer_append_char(value_309,37);
                                            info->p++;
                                        }
                                        else {
                                            if(_if_conditional308=*info->p==36,                                            _if_conditional308) {
                                                info->p++;
                                                exp_312=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value483=expression_v13(info))));
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value483);
                                                if(right_value483 && right_value483 != __result_obj__ && !__freed_obj__) { right_value483 = come_decrement_ref_count(right_value483, ((struct sNode*)right_value483)->finalize, ((struct sNode*)right_value483)->_protocol_obj, 1, 0, 0); } 
                                                __right_value_freed_obj[0] = right_value483;
                                                __freed_obj__ = 0;
                                                list$1sNodeph_add(exps_308,(struct sNode*)come_increment_ref_count(exp_312));
                                                buffer_append_str(value_309,"%s");
                                                p_313=info->p-1;
                                                while(_while_condtional29=*p_313==32||*p_313==9,                                                _while_condtional29) {
                                                    p_313--;
                                                }
                                                info->p=p_313+1;
                                                if(exp_312 && !__freed_obj__) { exp_312 = come_decrement_ref_count(exp_312, ((struct sNode*)exp_312)->finalize, ((struct sNode*)exp_312)->_protocol_obj, 0, 0, 0); } 
                                            }
                                            else {
                                                if(_if_conditional309=*info->p==92,                                                _if_conditional309) {
                                                    buffer_append_char(value_309,92);
                                                    info->p++;
                                                    if(_if_conditional310=xisdigit(*info->p),                                                    _if_conditional310) {
                                                        len_314=0;
                                                        while(_while_condtional30=xisdigit(*info->p)&&len_314<3,                                                        _while_condtional30) {
                                                            buffer_append_char(value_309,*info->p);
                                                            info->p++;
                                                            len_314++;
                                                        }
                                                    }
                                                    else {
                                                        if(_if_conditional311=*info->p==120||*info->p==88,                                                        _if_conditional311) {
                                                            buffer_append_char(value_309,*info->p);
                                                            info->p++;
                                                            while(_while_condtional31=*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70,                                                            _while_condtional31) {
                                                                buffer_append_char(value_309,*info->p);
                                                                info->p++;
                                                            }
                                                        }
                                                        else {
                                                            if(_if_conditional312=*info->p==123,                                                            _if_conditional312) {
                                                                info->p++;
                                                                exp_315=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value484=expression_v13(info))));
                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value484);
                                                                if(right_value484 && right_value484 != __result_obj__ && !__freed_obj__) { right_value484 = come_decrement_ref_count(right_value484, ((struct sNode*)right_value484)->finalize, ((struct sNode*)right_value484)->_protocol_obj, 1, 0, 0); } 
                                                                __right_value_freed_obj[0] = right_value484;
                                                                __freed_obj__ = 0;
                                                                list$1sNodeph_add(exps_308,(struct sNode*)come_increment_ref_count(exp_315));
                                                                if(_if_conditional313=*info->p==125,                                                                _if_conditional313) {
                                                                    info->p++;
                                                                }
                                                                buffer_append_str(value_309,"%s");
                                                                if(exp_315 && !__freed_obj__) { exp_315 = come_decrement_ref_count(exp_315, ((struct sNode*)exp_315)->finalize, ((struct sNode*)exp_315)->_protocol_obj, 0, 0, 0); } 
                                                            }
                                                            else {
                                                                switch (*info->p) {
                                                                    case 48:
                                                                    buffer_append_char(value_309,*info->p);
                                                                    info->p++;
                                                                    break;
                                                                    case 110:
                                                                    buffer_append_char(value_309,*info->p);
                                                                    info->p++;
                                                                    break;
                                                                    case 116:
                                                                    buffer_append_char(value_309,*info->p);
                                                                    info->p++;
                                                                    break;
                                                                    case 114:
                                                                    buffer_append_char(value_309,*info->p);
                                                                    info->p++;
                                                                    break;
                                                                    case 118:
                                                                    buffer_append_char(value_309,*info->p);
                                                                    info->p++;
                                                                    break;
                                                                    case 102:
                                                                    buffer_append_char(value_309,*info->p);
                                                                    info->p++;
                                                                    break;
                                                                    case 97:
                                                                    buffer_append_char(value_309,*info->p);
                                                                    info->p++;
                                                                    break;
                                                                    case 98:
                                                                    buffer_append_char(value_309,*info->p);
                                                                    info->p++;
                                                                    break;
                                                                    case 92:
                                                                    buffer_append_char(value_309,*info->p);
                                                                    info->p++;
                                                                    break;
                                                                    default:
                                                                    buffer_append_char(value_309,*info->p);
                                                                    info->p++;
                                                                    break;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                                else {
                                                    if(_if_conditional314=*info->p==0,                                                    _if_conditional314) {
                                                        sline2_316=info->sline;
                                                        info->sline=sline_307;
                                                        err_msg(info,"close \" to make embbeded string value");
                                                        exit(2);
                                                    }
                                                    else {
                                                        if(_if_conditional315=*info->p==10,                                                        _if_conditional315) {
                                                            info->sline++;
                                                        }
                                                        buffer_append_char(value_309,*info->p);
                                                        info->p++;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                                skip_spaces_and_lf(info);
                                _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2172);
                                _inf_obj_value9=come_increment_ref_count(((struct sSStringNode*)(right_value487=sSStringNode_initialize((struct sSStringNode*)come_increment_ref_count(((struct sSStringNode*)(right_value485=(struct sSStringNode*)come_calloc(1, sizeof(struct sSStringNode)*(1), "06str.c", 2172)))),(char*)come_increment_ref_count(((char*)(right_value486=buffer_to_string(value_309)))),(struct list$1sNodeph*)come_increment_ref_count(exps_308),sline_307,info))));
                                _inf_value9->_protocol_obj=_inf_obj_value9;
                                _inf_value9->finalize=(void*)sSStringNode_finalize;
                                _inf_value9->clone=(void*)sSStringNode_clone;
                                _inf_value9->compile=(void*)sSStringNode_compile;
                                _inf_value9->sline=(void*)sSStringNode_sline;
                                _inf_value9->sname=(void*)sSStringNode_sname;
                                _inf_value9->terminated=(void*)sSStringNode_terminated;
                                _inf_value9->kind=(void*)sSStringNode_kind;
                                __result193__ = __result_obj__ = ((struct sNode*)(right_value492=_inf_value9));
                                if(exps_308 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,exps_308, (void*)0, (void*)0, 0, 0, 0, 0); }
                                if(value_309 && !__freed_obj__) { come_call_finalizer(buffer_finalize,value_309, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value485);
                                if(right_value485 && right_value485 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sSStringNode_finalize,right_value485, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[4] = right_value485;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value486);
                                if(right_value486 && right_value486 != __result_obj__ && !__freed_obj__) { right_value486 = come_decrement_ref_count(right_value486, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[5] = right_value486;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value487);
                                if(right_value487 && right_value487 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sSStringNode_finalize,right_value487, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[6] = right_value487;
                                __freed_obj__ = 0;
                                return __result193__;
                                if(exps_308 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,exps_308, (void*)0, (void*)0, 0, 0, 0, 0); }
                                if(value_309 && !__freed_obj__) { come_call_finalizer(buffer_finalize,value_309, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
                            else {
                                if(_if_conditional324=*info->p==91,                                _if_conditional324) {
                                    info->p++;
                                    skip_spaces_and_lf(info);
                                    p_318=info->p;
                                    no_comma_319=info->no_comma;
                                    info->no_comma=(_Bool)1;
                                    node_320=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value493=expression_v13(info))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value493);
                                    if(right_value493 && right_value493 != __result_obj__ && !__freed_obj__) { right_value493 = come_decrement_ref_count(right_value493, ((struct sNode*)right_value493)->finalize, ((struct sNode*)right_value493)->_protocol_obj, 1, 0, 0); } 
                                    __right_value_freed_obj[0] = right_value493;
                                    __freed_obj__ = 0;
                                    info->no_comma=no_comma_319;
                                    p2_321=info->p;
                                    first_element_source_322=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value495=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value494=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 2189))))))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value494);
                                    if(right_value494 && right_value494 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value494, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[1] = right_value494;
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value495);
                                    if(right_value495 && right_value495 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value495, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[2] = right_value495;
                                    __freed_obj__ = 0;
                                    buffer_append(first_element_source_322,p_318,p2_321-p_318);
                                    buffer_append_char(first_element_source_322,0);
                                    list_elements_323=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value497=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value496=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 2194))))))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value496);
                                    if(right_value496 && right_value496 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value496, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[3] = right_value496;
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value497);
                                    if(right_value497 && right_value497 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value497, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[4] = right_value497;
                                    __freed_obj__ = 0;
                                    map_keys_324=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value499=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value498=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 2196))))))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value498);
                                    if(right_value498 && right_value498 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value498, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[5] = right_value498;
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value499);
                                    if(right_value499 && right_value499 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value499, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[6] = right_value499;
                                    __freed_obj__ = 0;
                                    map_elements_325=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value501=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value500=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 2197))))))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value500);
                                    if(right_value500 && right_value500 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value500, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[7] = right_value500;
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value501);
                                    if(right_value501 && right_value501 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value501, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[8] = right_value501;
                                    __freed_obj__ = 0;
                                    if(_if_conditional325=*info->p==58,                                    _if_conditional325) {
                                        info->p++;
                                        skip_spaces_and_lf(info);
                                        list$1sNodeph_push_back(map_keys_324,(struct sNode*)come_increment_ref_count(node_320));
                                        no_comma_326=info->no_comma;
                                        info->no_comma=(_Bool)1;
                                        node2_327=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value502=expression_v13(info))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value502);
                                        if(right_value502 && right_value502 != __result_obj__ && !__freed_obj__) { right_value502 = come_decrement_ref_count(right_value502, ((struct sNode*)right_value502)->finalize, ((struct sNode*)right_value502)->_protocol_obj, 1, 0, 0); } 
                                        __right_value_freed_obj[0] = right_value502;
                                        __freed_obj__ = 0;
                                        info->no_comma=no_comma_326;
                                        list$1sNodeph_push_back(map_elements_325,(struct sNode*)come_increment_ref_count(node2_327));
                                        if(_if_conditional326=*info->p==93,                                        _if_conditional326) {
                                            info->p++;
                                            skip_spaces_and_lf(info);
                                            _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2219);
                                            _inf_obj_value10=come_increment_ref_count(((struct sMapNode*)(right_value504=sMapNode_initialize((struct sMapNode*)come_increment_ref_count(((struct sMapNode*)(right_value503=(struct sMapNode*)come_calloc(1, sizeof(struct sMapNode)*(1), "06str.c", 2219)))),(struct list$1sNodeph*)come_increment_ref_count(map_keys_324),(struct list$1sNodeph*)come_increment_ref_count(map_elements_325),info))));
                                            _inf_value10->_protocol_obj=_inf_obj_value10;
                                            _inf_value10->finalize=(void*)sMapNode_finalize;
                                            _inf_value10->clone=(void*)sMapNode_clone;
                                            _inf_value10->compile=(void*)sMapNode_compile;
                                            _inf_value10->sline=(void*)sMapNode_sline;
                                            _inf_value10->sname=(void*)sMapNode_sname;
                                            _inf_value10->terminated=(void*)sMapNode_terminated;
                                            _inf_value10->kind=(void*)sMapNode_kind;
                                            __result196__ = __result_obj__ = ((struct sNode*)(right_value509=_inf_value10));
                                            if(node2_327 && !__freed_obj__) { node2_327 = come_decrement_ref_count(node2_327, ((struct sNode*)node2_327)->finalize, ((struct sNode*)node2_327)->_protocol_obj, 0, 0, 0); } 
                                            if(node_320 && !__freed_obj__) { node_320 = come_decrement_ref_count(node_320, ((struct sNode*)node_320)->finalize, ((struct sNode*)node_320)->_protocol_obj, 0, 0, 0); } 
                                            if(first_element_source_322 && !__freed_obj__) { come_call_finalizer(buffer_finalize,first_element_source_322, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            if(list_elements_323 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,list_elements_323, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            if(map_keys_324 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,map_keys_324, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            if(map_elements_325 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,map_elements_325, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value503);
                                            if(right_value503 && right_value503 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sMapNode_finalize,right_value503, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[0] = right_value503;
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value504);
                                            if(right_value504 && right_value504 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sMapNode_finalize,right_value504, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[1] = right_value504;
                                            __freed_obj__ = 0;
                                            return __result196__;
                                        }
                                        else {
                                            optional$2intbool_value(((struct optional$2intbool*)(right_value510=expected_next_character(44,info))));
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value510);
                                            if(right_value510 && right_value510 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value510, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[0] = right_value510;
                                            __freed_obj__ = 0;
                                            while(_while_condtional32=(_Bool)1,                                            _while_condtional32) {
                                                no_comma_330=info->no_comma;
                                                info->no_comma=(_Bool)1;
                                                node2_331=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value511=expression_v13(info))));
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value511);
                                                if(right_value511 && right_value511 != __result_obj__ && !__freed_obj__) { right_value511 = come_decrement_ref_count(right_value511, ((struct sNode*)right_value511)->finalize, ((struct sNode*)right_value511)->_protocol_obj, 1, 0, 0); } 
                                                __right_value_freed_obj[0] = right_value511;
                                                __freed_obj__ = 0;
                                                info->no_comma=no_comma_330;
                                                list$1sNodeph_push_back(map_keys_324,(struct sNode*)come_increment_ref_count(node2_331));
                                                optional$2intbool_value(((struct optional$2intbool*)(right_value512=expected_next_character(58,info))));
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value512);
                                                if(right_value512 && right_value512 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value512, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                __right_value_freed_obj[1] = right_value512;
                                                __freed_obj__ = 0;
                                                no_comma_330=info->no_comma;
                                                info->no_comma=(_Bool)1;
                                                node3_332=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value513=expression_v13(info))));
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value513);
                                                if(right_value513 && right_value513 != __result_obj__ && !__freed_obj__) { right_value513 = come_decrement_ref_count(right_value513, ((struct sNode*)right_value513)->finalize, ((struct sNode*)right_value513)->_protocol_obj, 1, 0, 0); } 
                                                __right_value_freed_obj[2] = right_value513;
                                                __freed_obj__ = 0;
                                                info->no_comma=no_comma_330;
                                                list$1sNodeph_push_back(map_elements_325,(struct sNode*)come_increment_ref_count(node3_332));
                                                if(_if_conditional336=*info->p==0,                                                _if_conditional336) {
                                                    err_msg(info,"invalid source end");
                                                    exit(2);
                                                }
                                                else {
                                                    if(_if_conditional337=*info->p==44,                                                    _if_conditional337) {
                                                        info->p++;
                                                        skip_spaces_and_lf(info);
                                                    }
                                                    else {
                                                        if(_if_conditional338=*info->p==93,                                                        _if_conditional338) {
                                                            info->p++;
                                                            skip_spaces_and_lf(info);
                                                            if(node2_331 && !__freed_obj__) { node2_331 = come_decrement_ref_count(node2_331, ((struct sNode*)node2_331)->finalize, ((struct sNode*)node2_331)->_protocol_obj, 0, 0, 0); } 
                                                            if(node3_332 && !__freed_obj__) { node3_332 = come_decrement_ref_count(node3_332, ((struct sNode*)node3_332)->finalize, ((struct sNode*)node3_332)->_protocol_obj, 0, 0, 0); } 
                                                            break;
                                                        }
                                                        else {
                                                            err_msg(info,"invalid character(%c)(3)",*info->p);
                                                            exit(2);
                                                        }
                                                    }
                                                }
                                                if(node2_331 && !__freed_obj__) { node2_331 = come_decrement_ref_count(node2_331, ((struct sNode*)node2_331)->finalize, ((struct sNode*)node2_331)->_protocol_obj, 0, 0, 0); } 
                                                if(node3_332 && !__freed_obj__) { node3_332 = come_decrement_ref_count(node3_332, ((struct sNode*)node3_332)->finalize, ((struct sNode*)node3_332)->_protocol_obj, 0, 0, 0); } 
                                            }
                                            _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2264);
                                            _inf_obj_value11=come_increment_ref_count(((struct sMapNode*)(right_value515=sMapNode_initialize((struct sMapNode*)come_increment_ref_count(((struct sMapNode*)(right_value514=(struct sMapNode*)come_calloc(1, sizeof(struct sMapNode)*(1), "06str.c", 2264)))),(struct list$1sNodeph*)come_increment_ref_count(map_keys_324),(struct list$1sNodeph*)come_increment_ref_count(map_elements_325),info))));
                                            _inf_value11->_protocol_obj=_inf_obj_value11;
                                            _inf_value11->finalize=(void*)sMapNode_finalize;
                                            _inf_value11->clone=(void*)sMapNode_clone;
                                            _inf_value11->compile=(void*)sMapNode_compile;
                                            _inf_value11->sline=(void*)sMapNode_sline;
                                            _inf_value11->sname=(void*)sMapNode_sname;
                                            _inf_value11->terminated=(void*)sMapNode_terminated;
                                            _inf_value11->kind=(void*)sMapNode_kind;
                                            __result201__ = __result_obj__ = ((struct sNode*)(right_value520=_inf_value11));
                                            if(node2_327 && !__freed_obj__) { node2_327 = come_decrement_ref_count(node2_327, ((struct sNode*)node2_327)->finalize, ((struct sNode*)node2_327)->_protocol_obj, 0, 0, 0); } 
                                            if(node_320 && !__freed_obj__) { node_320 = come_decrement_ref_count(node_320, ((struct sNode*)node_320)->finalize, ((struct sNode*)node_320)->_protocol_obj, 0, 0, 0); } 
                                            if(first_element_source_322 && !__freed_obj__) { come_call_finalizer(buffer_finalize,first_element_source_322, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            if(list_elements_323 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,list_elements_323, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            if(map_keys_324 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,map_keys_324, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            if(map_elements_325 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,map_elements_325, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value514);
                                            if(right_value514 && right_value514 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sMapNode_finalize,right_value514, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[1] = right_value514;
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value515);
                                            if(right_value515 && right_value515 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sMapNode_finalize,right_value515, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[2] = right_value515;
                                            __freed_obj__ = 0;
                                            return __result201__;
                                        }
                                        if(node2_327 && !__freed_obj__) { node2_327 = come_decrement_ref_count(node2_327, ((struct sNode*)node2_327)->finalize, ((struct sNode*)node2_327)->_protocol_obj, 0, 0, 0); } 
                                    }
                                    else {
                                        if(_if_conditional347=*info->p==93,                                        _if_conditional347) {
                                            info->p++;
                                            skip_spaces_and_lf(info);
                                            list$1sNodeph_push_back(list_elements_323,(struct sNode*)come_increment_ref_count(node_320));
                                        }
                                        else {
                                            if(_if_conditional348=*info->p==44,                                            _if_conditional348) {
                                                info->p++;
                                                skip_spaces_and_lf(info);
                                                list$1sNodeph_push_back(list_elements_323,(struct sNode*)come_increment_ref_count(node_320));
                                                while(_while_condtional33=(_Bool)1,                                                _while_condtional33) {
                                                    no_comma_334=info->no_comma;
                                                    info->no_comma=(_Bool)1;
                                                    node2_335=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value521=expression_v13(info))));
                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value521);
                                                    if(right_value521 && right_value521 != __result_obj__ && !__freed_obj__) { right_value521 = come_decrement_ref_count(right_value521, ((struct sNode*)right_value521)->finalize, ((struct sNode*)right_value521)->_protocol_obj, 1, 0, 0); } 
                                                    __right_value_freed_obj[0] = right_value521;
                                                    __freed_obj__ = 0;
                                                    info->no_comma=no_comma_334;
                                                    list$1sNodeph_push_back(list_elements_323,(struct sNode*)come_increment_ref_count(node2_335));
                                                    if(_if_conditional349=*info->p==0,                                                    _if_conditional349) {
                                                        err_msg(info,"invalid source end");
                                                        exit(2);
                                                    }
                                                    else {
                                                        if(_if_conditional350=*info->p==44,                                                        _if_conditional350) {
                                                            info->p++;
                                                            skip_spaces_and_lf(info);
                                                        }
                                                        else {
                                                            if(_if_conditional351=*info->p==93,                                                            _if_conditional351) {
                                                                info->p++;
                                                                skip_spaces_and_lf(info);
                                                                if(node2_335 && !__freed_obj__) { node2_335 = come_decrement_ref_count(node2_335, ((struct sNode*)node2_335)->finalize, ((struct sNode*)node2_335)->_protocol_obj, 0, 0, 0); } 
                                                                break;
                                                            }
                                                            else {
                                                                err_msg(info,"invalid character(%c)(4)",*info->p);
                                                                exit(2);
                                                            }
                                                        }
                                                    }
                                                    if(node2_335 && !__freed_obj__) { node2_335 = come_decrement_ref_count(node2_335, ((struct sNode*)node2_335)->finalize, ((struct sNode*)node2_335)->_protocol_obj, 0, 0, 0); } 
                                                }
                                            }
                                            else {
                                                err_msg(info,"invalid character(%c)(5)",*info->p);
                                                exit(2);
                                            }
                                        }
                                    }
                                    if(_if_conditional352=list$1sNodeph_length(list_elements_323)>0,                                    _if_conditional352) {
                                        _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2315);
                                        _inf_obj_value12=come_increment_ref_count(((struct sListNode*)(right_value523=sListNode_initialize((struct sListNode*)come_increment_ref_count(((struct sListNode*)(right_value522=(struct sListNode*)come_calloc(1, sizeof(struct sListNode)*(1), "06str.c", 2315)))),(struct list$1sNodeph*)come_increment_ref_count(list_elements_323),info))));
                                        _inf_value12->_protocol_obj=_inf_obj_value12;
                                        _inf_value12->finalize=(void*)sListNode_finalize;
                                        _inf_value12->clone=(void*)sListNode_clone;
                                        _inf_value12->compile=(void*)sListNode_compile;
                                        _inf_value12->sline=(void*)sListNode_sline;
                                        _inf_value12->sname=(void*)sListNode_sname;
                                        _inf_value12->terminated=(void*)sListNode_terminated;
                                        _inf_value12->kind=(void*)sListNode_kind;
                                        __result204__ = __result_obj__ = ((struct sNode*)(right_value527=_inf_value12));
                                        if(node_320 && !__freed_obj__) { node_320 = come_decrement_ref_count(node_320, ((struct sNode*)node_320)->finalize, ((struct sNode*)node_320)->_protocol_obj, 0, 0, 0); } 
                                        if(first_element_source_322 && !__freed_obj__) { come_call_finalizer(buffer_finalize,first_element_source_322, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        if(list_elements_323 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,list_elements_323, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        if(map_keys_324 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,map_keys_324, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        if(map_elements_325 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,map_elements_325, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value522);
                                        if(right_value522 && right_value522 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sListNode_finalize,right_value522, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value522;
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value523);
                                        if(right_value523 && right_value523 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sListNode_finalize,right_value523, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[1] = right_value523;
                                        __freed_obj__ = 0;
                                        return __result204__;
                                    }
                                    else {
                                    }
                                    if(node_320 && !__freed_obj__) { node_320 = come_decrement_ref_count(node_320, ((struct sNode*)node_320)->finalize, ((struct sNode*)node_320)->_protocol_obj, 0, 0, 0); } 
                                    if(first_element_source_322 && !__freed_obj__) { come_call_finalizer(buffer_finalize,first_element_source_322, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    if(list_elements_323 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,list_elements_323, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    if(map_keys_324 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,map_keys_324, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    if(map_elements_325 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,map_elements_325, (void*)0, (void*)0, 0, 0, 0, 0); }
                                }
                                else {
                                    ((struct sNode*)(right_value528=expression_node_v1(info)));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value528);
                                    if(right_value528 && right_value528 != __result_obj__ && !__freed_obj__) { right_value528 = come_decrement_ref_count(right_value528, ((struct sNode*)right_value528)->finalize, ((struct sNode*)right_value528)->_protocol_obj, 1, 0, 0); } 
                                    __right_value_freed_obj[0] = right_value528;
                                    __freed_obj__ = 0;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    __result205__ = __result_obj__ = (struct sNode*)((void*)0);
    return __result205__;
}

static void sStrNode_finalize(struct sStrNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional246;
_Bool _if_conditional247;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional246=self!=((void*)0)&&self->value!=((void*)0),                _if_conditional246) {
                    if(self->value && !__freed_obj__) { self->value = come_decrement_ref_count(self->value, (void*)0, (void*)0, 0, 0, 0); }
                }
                if(_if_conditional247=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional247) {
                    if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                }
}

static struct sStrNode* sStrNode_clone(struct sStrNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional248;
struct sStrNode* __result176__;
void* right_value447;
struct sStrNode* result_269;
_Bool _if_conditional249;
void* right_value448;
char* __dec_obj138;
_Bool _if_conditional250;
_Bool _if_conditional251;
void* right_value449;
char* __dec_obj139;
struct sStrNode* __result177__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value447, 0, sizeof(void*));
memset(&result_269, 0, sizeof(struct sStrNode*));
memset(&right_value448, 0, sizeof(void*));
memset(&right_value449, 0, sizeof(void*));
                if(_if_conditional248=self==(void*)0,                _if_conditional248) {
                    __result176__ = __result_obj__ = (void*)0;
                    return __result176__;
                }
                result_269=(struct sStrNode*)come_increment_ref_count(((struct sStrNode*)(right_value447=(struct sStrNode*)come_calloc(1, sizeof(struct sStrNode)*(1), "sStrNode_clone", 3))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value447);
                if(right_value447 && right_value447 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStrNode_finalize,right_value447, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value447;
                __freed_obj__ = 0;
                if(_if_conditional249=self!=((void*)0)&&self->value!=((void*)0),                _if_conditional249) {
                    __dec_obj138=result_269->value;
                    result_269->value=(char*)come_increment_ref_count(((char*)(right_value448=string_clone(self->value))));
                    if(__dec_obj138) { __dec_obj138 = come_decrement_ref_count(__dec_obj138, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value448);
                    if(right_value448 && right_value448 != __result_obj__ && !__freed_obj__) { right_value448 = come_decrement_ref_count(right_value448, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value448;
                    __freed_obj__ = 0;
                }
                if(_if_conditional250=self!=((void*)0),                _if_conditional250) {
                    result_269->sline=self->sline;
                }
                if(_if_conditional251=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional251) {
                    __dec_obj139=result_269->sname;
                    result_269->sname=(char*)come_increment_ref_count(((char*)(right_value449=string_clone(self->sname))));
                    if(__dec_obj139) { __dec_obj139 = come_decrement_ref_count(__dec_obj139, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value449);
                    if(right_value449 && right_value449 != __result_obj__ && !__freed_obj__) { right_value449 = come_decrement_ref_count(right_value449, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value449;
                    __freed_obj__ = 0;
                }
                __result177__ = __result_obj__ = result_269;
                if(result_269 && !__freed_obj__) { come_call_finalizer(sStrNode_finalize,result_269, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result177__;
                if(result_269 && !__freed_obj__) { come_call_finalizer(sStrNode_finalize,result_269, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sRegexNode_finalize(struct sRegexNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional258;
_Bool _if_conditional259;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional258=self!=((void*)0)&&self->str!=((void*)0),                    _if_conditional258) {
                        if(self->str && !__freed_obj__) { self->str = come_decrement_ref_count(self->str, (void*)0, (void*)0, 0, 0, 0); }
                    }
                    if(_if_conditional259=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional259) {
                        if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                    }
}

static struct sRegexNode* sRegexNode_clone(struct sRegexNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional260;
struct sRegexNode* __result179__;
void* right_value456;
struct sRegexNode* result_274;
_Bool _if_conditional261;
void* right_value457;
char* __dec_obj140;
_Bool _if_conditional262;
_Bool _if_conditional263;
_Bool _if_conditional264;
_Bool _if_conditional265;
void* right_value458;
char* __dec_obj141;
struct sRegexNode* __result180__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value456, 0, sizeof(void*));
memset(&result_274, 0, sizeof(struct sRegexNode*));
memset(&right_value457, 0, sizeof(void*));
memset(&right_value458, 0, sizeof(void*));
                    if(_if_conditional260=self==(void*)0,                    _if_conditional260) {
                        __result179__ = __result_obj__ = (void*)0;
                        return __result179__;
                    }
                    result_274=(struct sRegexNode*)come_increment_ref_count(((struct sRegexNode*)(right_value456=(struct sRegexNode*)come_calloc(1, sizeof(struct sRegexNode)*(1), "sRegexNode_clone", 3))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value456);
                    if(right_value456 && right_value456 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sRegexNode_finalize,right_value456, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value456;
                    __freed_obj__ = 0;
                    if(_if_conditional261=self!=((void*)0)&&self->str!=((void*)0),                    _if_conditional261) {
                        __dec_obj140=result_274->str;
                        result_274->str=(char*)come_increment_ref_count(((char*)(right_value457=string_clone(self->str))));
                        if(__dec_obj140) { __dec_obj140 = come_decrement_ref_count(__dec_obj140, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value457);
                        if(right_value457 && right_value457 != __result_obj__ && !__freed_obj__) { right_value457 = come_decrement_ref_count(right_value457, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value457;
                        __freed_obj__ = 0;
                    }
                    if(_if_conditional262=self!=((void*)0),                    _if_conditional262) {
                        result_274->global=self->global;
                    }
                    if(_if_conditional263=self!=((void*)0),                    _if_conditional263) {
                        result_274->ignore_case=self->ignore_case;
                    }
                    if(_if_conditional264=self!=((void*)0),                    _if_conditional264) {
                        result_274->sline=self->sline;
                    }
                    if(_if_conditional265=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional265) {
                        __dec_obj141=result_274->sname;
                        result_274->sname=(char*)come_increment_ref_count(((char*)(right_value458=string_clone(self->sname))));
                        if(__dec_obj141) { __dec_obj141 = come_decrement_ref_count(__dec_obj141, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value458);
                        if(right_value458 && right_value458 != __result_obj__ && !__freed_obj__) { right_value458 = come_decrement_ref_count(right_value458, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value458;
                        __freed_obj__ = 0;
                    }
                    __result180__ = __result_obj__ = result_274;
                    if(result_274 && !__freed_obj__) { come_call_finalizer(sRegexNode_finalize,result_274, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result180__;
                    if(result_274 && !__freed_obj__) { come_call_finalizer(sRegexNode_finalize,result_274, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sCharNode_finalize(struct sCharNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional271;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional271=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional271) {
                                if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                            }
}

static struct sCharNode* sCharNode_clone(struct sCharNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional272;
struct sCharNode* __result182__;
void* right_value462;
struct sCharNode* result_281;
_Bool _if_conditional273;
_Bool _if_conditional274;
_Bool _if_conditional275;
void* right_value463;
char* __dec_obj142;
struct sCharNode* __result183__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value462, 0, sizeof(void*));
memset(&result_281, 0, sizeof(struct sCharNode*));
memset(&right_value463, 0, sizeof(void*));
                            if(_if_conditional272=self==(void*)0,                            _if_conditional272) {
                                __result182__ = __result_obj__ = (void*)0;
                                return __result182__;
                            }
                            result_281=(struct sCharNode*)come_increment_ref_count(((struct sCharNode*)(right_value462=(struct sCharNode*)come_calloc(1, sizeof(struct sCharNode)*(1), "sCharNode_clone", 3))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value462);
                            if(right_value462 && right_value462 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sCharNode_finalize,right_value462, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value462;
                            __freed_obj__ = 0;
                            if(_if_conditional273=self!=((void*)0),                            _if_conditional273) {
                                result_281->value=self->value;
                            }
                            if(_if_conditional274=self!=((void*)0),                            _if_conditional274) {
                                result_281->sline=self->sline;
                            }
                            if(_if_conditional275=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional275) {
                                __dec_obj142=result_281->sname;
                                result_281->sname=(char*)come_increment_ref_count(((char*)(right_value463=string_clone(self->sname))));
                                if(__dec_obj142) { __dec_obj142 = come_decrement_ref_count(__dec_obj142, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value463);
                                if(right_value463 && right_value463 != __result_obj__ && !__freed_obj__) { right_value463 = come_decrement_ref_count(right_value463, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value463;
                                __freed_obj__ = 0;
                            }
                            __result183__ = __result_obj__ = result_281;
                            if(result_281 && !__freed_obj__) { come_call_finalizer(sCharNode_finalize,result_281, (void*)0, (void*)0, 0, 0, 1, 0); }
                            return __result183__;
                            if(result_281 && !__freed_obj__) { come_call_finalizer(sCharNode_finalize,result_281, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sWCharNode_finalize(struct sWCharNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional284;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional284=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional284) {
                                    if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                                }
}

static struct sWCharNode* sWCharNode_clone(struct sWCharNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional285;
struct sWCharNode* __result185__;
void* right_value467;
struct sWCharNode* result_291;
_Bool _if_conditional286;
_Bool _if_conditional287;
_Bool _if_conditional288;
void* right_value468;
char* __dec_obj143;
struct sWCharNode* __result186__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value467, 0, sizeof(void*));
memset(&result_291, 0, sizeof(struct sWCharNode*));
memset(&right_value468, 0, sizeof(void*));
                                if(_if_conditional285=self==(void*)0,                                _if_conditional285) {
                                    __result185__ = __result_obj__ = (void*)0;
                                    return __result185__;
                                }
                                result_291=(struct sWCharNode*)come_increment_ref_count(((struct sWCharNode*)(right_value467=(struct sWCharNode*)come_calloc(1, sizeof(struct sWCharNode)*(1), "sWCharNode_clone", 3))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value467);
                                if(right_value467 && right_value467 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sWCharNode_finalize,right_value467, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value467;
                                __freed_obj__ = 0;
                                if(_if_conditional286=self!=((void*)0),                                _if_conditional286) {
                                    result_291->value=self->value;
                                }
                                if(_if_conditional287=self!=((void*)0),                                _if_conditional287) {
                                    result_291->sline=self->sline;
                                }
                                if(_if_conditional288=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional288) {
                                    __dec_obj143=result_291->sname;
                                    result_291->sname=(char*)come_increment_ref_count(((char*)(right_value468=string_clone(self->sname))));
                                    if(__dec_obj143) { __dec_obj143 = come_decrement_ref_count(__dec_obj143, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value468);
                                    if(right_value468 && right_value468 != __result_obj__ && !__freed_obj__) { right_value468 = come_decrement_ref_count(right_value468, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value468;
                                    __freed_obj__ = 0;
                                }
                                __result186__ = __result_obj__ = result_291;
                                if(result_291 && !__freed_obj__) { come_call_finalizer(sWCharNode_finalize,result_291, (void*)0, (void*)0, 0, 0, 1, 0); }
                                return __result186__;
                                if(result_291 && !__freed_obj__) { come_call_finalizer(sWCharNode_finalize,result_291, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sWStringNode_finalize(struct sWStringNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional298;
_Bool _if_conditional299;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional298=self!=((void*)0)&&self->value!=((void*)0),                                _if_conditional298) {
                                    if(self->value && !__freed_obj__) { self->value = come_decrement_ref_count(self->value, (void*)0, (void*)0, 0, 0, 0); }
                                }
                                if(_if_conditional299=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional299) {
                                    if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                                }
}

static struct sWStringNode* sWStringNode_clone(struct sWStringNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional300;
struct sWStringNode* __result188__;
void* right_value475;
struct sWStringNode* result_306;
_Bool _if_conditional301;
void* right_value476;
unsigned int* __dec_obj144;
_Bool _if_conditional302;
_Bool _if_conditional303;
void* right_value477;
char* __dec_obj145;
struct sWStringNode* __result189__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value475, 0, sizeof(void*));
memset(&result_306, 0, sizeof(struct sWStringNode*));
memset(&right_value476, 0, sizeof(void*));
memset(&right_value477, 0, sizeof(void*));
                                if(_if_conditional300=self==(void*)0,                                _if_conditional300) {
                                    __result188__ = __result_obj__ = (void*)0;
                                    return __result188__;
                                }
                                result_306=(struct sWStringNode*)come_increment_ref_count(((struct sWStringNode*)(right_value475=(struct sWStringNode*)come_calloc(1, sizeof(struct sWStringNode)*(1), "sWStringNode_clone", 3))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value475);
                                if(right_value475 && right_value475 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sWStringNode_finalize,right_value475, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value475;
                                __freed_obj__ = 0;
                                if(_if_conditional301=self!=((void*)0)&&self->value!=((void*)0),                                _if_conditional301) {
                                    __dec_obj144=result_306->value;
                                    result_306->value=(unsigned int*)come_increment_ref_count(((unsigned int*)(right_value476=(unsigned int*)come_memdup(self->value, "sWStringNode_clone", 4))));
                                    if(__dec_obj144) { __dec_obj144 = come_decrement_ref_count(__dec_obj144, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value476);
                                    if(right_value476 && right_value476 != __result_obj__ && !__freed_obj__) { right_value476 = come_decrement_ref_count(right_value476, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value476;
                                    __freed_obj__ = 0;
                                }
                                if(_if_conditional302=self!=((void*)0),                                _if_conditional302) {
                                    result_306->sline=self->sline;
                                }
                                if(_if_conditional303=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional303) {
                                    __dec_obj145=result_306->sname;
                                    result_306->sname=(char*)come_increment_ref_count(((char*)(right_value477=string_clone(self->sname))));
                                    if(__dec_obj145) { __dec_obj145 = come_decrement_ref_count(__dec_obj145, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value477);
                                    if(right_value477 && right_value477 != __result_obj__ && !__freed_obj__) { right_value477 = come_decrement_ref_count(right_value477, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value477;
                                    __freed_obj__ = 0;
                                }
                                __result189__ = __result_obj__ = result_306;
                                if(result_306 && !__freed_obj__) { come_call_finalizer(sWStringNode_finalize,result_306, (void*)0, (void*)0, 0, 0, 1, 0); }
                                return __result189__;
                                if(result_306 && !__freed_obj__) { come_call_finalizer(sWStringNode_finalize,result_306, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sSStringNode_finalize(struct sSStringNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional316;
_Bool _if_conditional317;
_Bool _if_conditional318;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                    if(_if_conditional316=self!=((void*)0)&&self->value!=((void*)0),                                    _if_conditional316) {
                                        if(self->value && !__freed_obj__) { self->value = come_decrement_ref_count(self->value, (void*)0, (void*)0, 0, 0, 0); }
                                    }
                                    if(_if_conditional317=self!=((void*)0)&&self->exps!=((void*)0),                                    _if_conditional317) {
                                        if(self->exps && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self->exps, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    }
                                    if(_if_conditional318=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional318) {
                                        if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                                    }
}

static struct sSStringNode* sSStringNode_clone(struct sSStringNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional319;
struct sSStringNode* __result191__;
void* right_value488;
struct sSStringNode* result_317;
_Bool _if_conditional320;
void* right_value489;
char* __dec_obj146;
_Bool _if_conditional321;
void* right_value490;
struct list$1sNodeph* __dec_obj147;
_Bool _if_conditional322;
_Bool _if_conditional323;
void* right_value491;
char* __dec_obj148;
struct sSStringNode* __result192__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value488, 0, sizeof(void*));
memset(&result_317, 0, sizeof(struct sSStringNode*));
memset(&right_value489, 0, sizeof(void*));
memset(&right_value490, 0, sizeof(void*));
memset(&right_value491, 0, sizeof(void*));
                                    if(_if_conditional319=self==(void*)0,                                    _if_conditional319) {
                                        __result191__ = __result_obj__ = (void*)0;
                                        return __result191__;
                                    }
                                    result_317=(struct sSStringNode*)come_increment_ref_count(((struct sSStringNode*)(right_value488=(struct sSStringNode*)come_calloc(1, sizeof(struct sSStringNode)*(1), "sSStringNode_clone", 3))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value488);
                                    if(right_value488 && right_value488 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sSStringNode_finalize,right_value488, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value488;
                                    __freed_obj__ = 0;
                                    if(_if_conditional320=self!=((void*)0)&&self->value!=((void*)0),                                    _if_conditional320) {
                                        __dec_obj146=result_317->value;
                                        result_317->value=(char*)come_increment_ref_count(((char*)(right_value489=string_clone(self->value))));
                                        if(__dec_obj146) { __dec_obj146 = come_decrement_ref_count(__dec_obj146, (void*)0, (void*)0, 0,0,0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value489);
                                        if(right_value489 && right_value489 != __result_obj__ && !__freed_obj__) { right_value489 = come_decrement_ref_count(right_value489, (void*)0, (void*)0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value489;
                                        __freed_obj__ = 0;
                                    }
                                    if(_if_conditional321=self!=((void*)0)&&self->exps!=((void*)0),                                    _if_conditional321) {
                                        __dec_obj147=result_317->exps;
                                        result_317->exps=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value490=list$1sNodephp_clone(self->exps))));
                                        if(__dec_obj147) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj147, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value490);
                                        if(right_value490 && right_value490 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value490, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value490;
                                        __freed_obj__ = 0;
                                    }
                                    if(_if_conditional322=self!=((void*)0),                                    _if_conditional322) {
                                        result_317->sline=self->sline;
                                    }
                                    if(_if_conditional323=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional323) {
                                        __dec_obj148=result_317->sname;
                                        result_317->sname=(char*)come_increment_ref_count(((char*)(right_value491=string_clone(self->sname))));
                                        if(__dec_obj148) { __dec_obj148 = come_decrement_ref_count(__dec_obj148, (void*)0, (void*)0, 0,0,0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value491);
                                        if(right_value491 && right_value491 != __result_obj__ && !__freed_obj__) { right_value491 = come_decrement_ref_count(right_value491, (void*)0, (void*)0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value491;
                                        __freed_obj__ = 0;
                                    }
                                    __result192__ = __result_obj__ = result_317;
                                    if(result_317 && !__freed_obj__) { come_call_finalizer(sSStringNode_finalize,result_317, (void*)0, (void*)0, 0, 0, 1, 0); }
                                    return __result192__;
                                    if(result_317 && !__freed_obj__) { come_call_finalizer(sSStringNode_finalize,result_317, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static int optional$2intbool_value(struct optional$2intbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional335;
int default_value_329;
int __result197__;
int __result198__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_329, 0, sizeof(int));
                                                if(_if_conditional335=self==((void*)0),                                                _if_conditional335) {
                                                    memset(&default_value_329,0,sizeof(int));
                                                    __result197__ = default_value_329;
                                                    return __result197__;
                                                }
                                                else {
                                                    __result198__ = self->v1;
                                                    return __result198__;
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

static void sMapNode_finalize(struct sMapNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional339;
_Bool _if_conditional340;
_Bool _if_conditional341;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                if(_if_conditional339=self!=((void*)0)&&self->map_key_elements!=((void*)0),                                                _if_conditional339) {
                                                    if(self->map_key_elements && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self->map_key_elements, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                }
                                                if(_if_conditional340=self!=((void*)0)&&self->map_elements!=((void*)0),                                                _if_conditional340) {
                                                    if(self->map_elements && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self->map_elements, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                }
                                                if(_if_conditional341=self!=((void*)0)&&self->sname!=((void*)0),                                                _if_conditional341) {
                                                    if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                                                }
}

static struct sMapNode* sMapNode_clone(struct sMapNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional342;
struct sMapNode* __result199__;
void* right_value516;
struct sMapNode* result_333;
_Bool _if_conditional343;
void* right_value517;
struct list$1sNodeph* __dec_obj152;
_Bool _if_conditional344;
void* right_value518;
struct list$1sNodeph* __dec_obj153;
_Bool _if_conditional345;
_Bool _if_conditional346;
void* right_value519;
char* __dec_obj154;
struct sMapNode* __result200__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value516, 0, sizeof(void*));
memset(&result_333, 0, sizeof(struct sMapNode*));
memset(&right_value517, 0, sizeof(void*));
memset(&right_value518, 0, sizeof(void*));
memset(&right_value519, 0, sizeof(void*));
                                                if(_if_conditional342=self==(void*)0,                                                _if_conditional342) {
                                                    __result199__ = __result_obj__ = (void*)0;
                                                    return __result199__;
                                                }
                                                result_333=(struct sMapNode*)come_increment_ref_count(((struct sMapNode*)(right_value516=(struct sMapNode*)come_calloc(1, sizeof(struct sMapNode)*(1), "sMapNode_clone", 3))));
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value516);
                                                if(right_value516 && right_value516 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sMapNode_finalize,right_value516, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                __right_value_freed_obj[0] = right_value516;
                                                __freed_obj__ = 0;
                                                if(_if_conditional343=self!=((void*)0)&&self->map_key_elements!=((void*)0),                                                _if_conditional343) {
                                                    __dec_obj152=result_333->map_key_elements;
                                                    result_333->map_key_elements=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value517=list$1sNodephp_clone(self->map_key_elements))));
                                                    if(__dec_obj152) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj152, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value517);
                                                    if(right_value517 && right_value517 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value517, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                    __right_value_freed_obj[0] = right_value517;
                                                    __freed_obj__ = 0;
                                                }
                                                if(_if_conditional344=self!=((void*)0)&&self->map_elements!=((void*)0),                                                _if_conditional344) {
                                                    __dec_obj153=result_333->map_elements;
                                                    result_333->map_elements=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value518=list$1sNodephp_clone(self->map_elements))));
                                                    if(__dec_obj153) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj153, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value518);
                                                    if(right_value518 && right_value518 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value518, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                    __right_value_freed_obj[0] = right_value518;
                                                    __freed_obj__ = 0;
                                                }
                                                if(_if_conditional345=self!=((void*)0),                                                _if_conditional345) {
                                                    result_333->sline=self->sline;
                                                }
                                                if(_if_conditional346=self!=((void*)0)&&self->sname!=((void*)0),                                                _if_conditional346) {
                                                    __dec_obj154=result_333->sname;
                                                    result_333->sname=(char*)come_increment_ref_count(((char*)(right_value519=string_clone(self->sname))));
                                                    if(__dec_obj154) { __dec_obj154 = come_decrement_ref_count(__dec_obj154, (void*)0, (void*)0, 0,0,0); }
                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value519);
                                                    if(right_value519 && right_value519 != __result_obj__ && !__freed_obj__) { right_value519 = come_decrement_ref_count(right_value519, (void*)0, (void*)0, 1, 0, 0); }
                                                    __right_value_freed_obj[0] = right_value519;
                                                    __freed_obj__ = 0;
                                                }
                                                __result200__ = __result_obj__ = result_333;
                                                if(result_333 && !__freed_obj__) { come_call_finalizer(sMapNode_finalize,result_333, (void*)0, (void*)0, 0, 0, 1, 0); }
                                                return __result200__;
                                                if(result_333 && !__freed_obj__) { come_call_finalizer(sMapNode_finalize,result_333, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sListNode_finalize(struct sListNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional353;
_Bool _if_conditional354;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                            if(_if_conditional353=self!=((void*)0)&&self->list_elements!=((void*)0),                                            _if_conditional353) {
                                                if(self->list_elements && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self->list_elements, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            }
                                            if(_if_conditional354=self!=((void*)0)&&self->sname!=((void*)0),                                            _if_conditional354) {
                                                if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                                            }
}

static struct sListNode* sListNode_clone(struct sListNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional355;
struct sListNode* __result202__;
void* right_value524;
struct sListNode* result_336;
_Bool _if_conditional356;
void* right_value525;
struct list$1sNodeph* __dec_obj155;
_Bool _if_conditional357;
_Bool _if_conditional358;
void* right_value526;
char* __dec_obj156;
struct sListNode* __result203__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value524, 0, sizeof(void*));
memset(&result_336, 0, sizeof(struct sListNode*));
memset(&right_value525, 0, sizeof(void*));
memset(&right_value526, 0, sizeof(void*));
                                            if(_if_conditional355=self==(void*)0,                                            _if_conditional355) {
                                                __result202__ = __result_obj__ = (void*)0;
                                                return __result202__;
                                            }
                                            result_336=(struct sListNode*)come_increment_ref_count(((struct sListNode*)(right_value524=(struct sListNode*)come_calloc(1, sizeof(struct sListNode)*(1), "sListNode_clone", 3))));
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value524);
                                            if(right_value524 && right_value524 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sListNode_finalize,right_value524, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[0] = right_value524;
                                            __freed_obj__ = 0;
                                            if(_if_conditional356=self!=((void*)0)&&self->list_elements!=((void*)0),                                            _if_conditional356) {
                                                __dec_obj155=result_336->list_elements;
                                                result_336->list_elements=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value525=list$1sNodephp_clone(self->list_elements))));
                                                if(__dec_obj155) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj155, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value525);
                                                if(right_value525 && right_value525 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value525, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                __right_value_freed_obj[0] = right_value525;
                                                __freed_obj__ = 0;
                                            }
                                            if(_if_conditional357=self!=((void*)0),                                            _if_conditional357) {
                                                result_336->sline=self->sline;
                                            }
                                            if(_if_conditional358=self!=((void*)0)&&self->sname!=((void*)0),                                            _if_conditional358) {
                                                __dec_obj156=result_336->sname;
                                                result_336->sname=(char*)come_increment_ref_count(((char*)(right_value526=string_clone(self->sname))));
                                                if(__dec_obj156) { __dec_obj156 = come_decrement_ref_count(__dec_obj156, (void*)0, (void*)0, 0,0,0); }
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value526);
                                                if(right_value526 && right_value526 != __result_obj__ && !__freed_obj__) { right_value526 = come_decrement_ref_count(right_value526, (void*)0, (void*)0, 1, 0, 0); }
                                                __right_value_freed_obj[0] = right_value526;
                                                __freed_obj__ = 0;
                                            }
                                            __result203__ = __result_obj__ = result_336;
                                            if(result_336 && !__freed_obj__) { come_call_finalizer(sListNode_finalize,result_336, (void*)0, (void*)0, 0, 0, 1, 0); }
                                            return __result203__;
                                            if(result_336 && !__freed_obj__) { come_call_finalizer(sListNode_finalize,result_336, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sNode* parse_tuple(struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value529;
void* right_value530;
struct list$1sNodeph* tuple_elements_337;
_Bool _while_condtional34;
char* p_338;
_Bool no_comma_339;
void* right_value531;
struct sNode* node_340;
_Bool _if_conditional359;
_Bool _if_conditional360;
void* right_value532;
void* right_value533;
struct sNode* _inf_value13;
struct sTupleNode* _inf_obj_value13;
void* right_value537;
struct sNode* __result208__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value529, 0, sizeof(void*));
memset(&right_value530, 0, sizeof(void*));
memset(&tuple_elements_337, 0, sizeof(struct list$1sNodeph*));
memset(&p_338, 0, sizeof(char*));
memset(&no_comma_339, 0, sizeof(_Bool));
memset(&right_value531, 0, sizeof(void*));
memset(&node_340, 0, sizeof(struct sNode*));
memset(&right_value532, 0, sizeof(void*));
memset(&right_value533, 0, sizeof(void*));
memset(&right_value537, 0, sizeof(void*));
    tuple_elements_337=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value530=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value529=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 2329))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value529);
    if(right_value529 && right_value529 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value529, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value529;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value530);
    if(right_value530 && right_value530 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value530, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value530;
    __freed_obj__ = 0;
    while(_while_condtional34=(_Bool)1,    _while_condtional34) {
        p_338=info->p;
        no_comma_339=info->no_comma;
        info->no_comma=(_Bool)1;
        node_340=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value531=expression_v13(info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value531);
        if(right_value531 && right_value531 != __result_obj__ && !__freed_obj__) { right_value531 = come_decrement_ref_count(right_value531, ((struct sNode*)right_value531)->finalize, ((struct sNode*)right_value531)->_protocol_obj, 1, 0, 0); } 
        __right_value_freed_obj[0] = right_value531;
        __freed_obj__ = 0;
        info->no_comma=no_comma_339;
        list$1sNodeph_push_back(tuple_elements_337,(struct sNode*)come_increment_ref_count(node_340));
        if(_if_conditional359=*info->p==44,        _if_conditional359) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else {
            if(_if_conditional360=*info->p==41,            _if_conditional360) {
                info->p++;
                skip_spaces_and_lf(info);
                if(node_340 && !__freed_obj__) { node_340 = come_decrement_ref_count(node_340, ((struct sNode*)node_340)->finalize, ((struct sNode*)node_340)->_protocol_obj, 0, 0, 0); } 
                break;
            }
            else {
                err_msg(info,"invalid character(%c) in tuple expression",*info->p);
                exit(2);
            }
        }
        if(node_340 && !__freed_obj__) { node_340 = come_decrement_ref_count(node_340, ((struct sNode*)node_340)->finalize, ((struct sNode*)node_340)->_protocol_obj, 0, 0, 0); } 
    }
    _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2357);
    _inf_obj_value13=come_increment_ref_count(((struct sTupleNode*)(right_value533=sTupleNode_initialize((struct sTupleNode*)come_increment_ref_count(((struct sTupleNode*)(right_value532=(struct sTupleNode*)come_calloc(1, sizeof(struct sTupleNode)*(1), "06str.c", 2357)))),(struct list$1sNodeph*)come_increment_ref_count(tuple_elements_337),info))));
    _inf_value13->_protocol_obj=_inf_obj_value13;
    _inf_value13->finalize=(void*)sTupleNode_finalize;
    _inf_value13->clone=(void*)sTupleNode_clone;
    _inf_value13->compile=(void*)sTupleNode_compile;
    _inf_value13->sline=(void*)sTupleNode_sline;
    _inf_value13->sname=(void*)sTupleNode_sname;
    _inf_value13->terminated=(void*)sTupleNode_terminated;
    _inf_value13->kind=(void*)sTupleNode_kind;
    __result208__ = __result_obj__ = ((struct sNode*)(right_value537=_inf_value13));
    if(tuple_elements_337 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,tuple_elements_337, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value532);
    if(right_value532 && right_value532 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sTupleNode_finalize,right_value532, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value532;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value533);
    if(right_value533 && right_value533 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sTupleNode_finalize,right_value533, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value533;
    __freed_obj__ = 0;
    return __result208__;
    if(tuple_elements_337 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,tuple_elements_337, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sTupleNode_finalize(struct sTupleNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional361;
_Bool _if_conditional362;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional361=self!=((void*)0)&&self->tuple_elements!=((void*)0),        _if_conditional361) {
            if(self->tuple_elements && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self->tuple_elements, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(_if_conditional362=self!=((void*)0)&&self->sname!=((void*)0),        _if_conditional362) {
            if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
        }
}

static struct sTupleNode* sTupleNode_clone(struct sTupleNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional363;
struct sTupleNode* __result206__;
void* right_value534;
struct sTupleNode* result_341;
_Bool _if_conditional364;
void* right_value535;
struct list$1sNodeph* __dec_obj157;
_Bool _if_conditional365;
_Bool _if_conditional366;
void* right_value536;
char* __dec_obj158;
struct sTupleNode* __result207__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value534, 0, sizeof(void*));
memset(&result_341, 0, sizeof(struct sTupleNode*));
memset(&right_value535, 0, sizeof(void*));
memset(&right_value536, 0, sizeof(void*));
        if(_if_conditional363=self==(void*)0,        _if_conditional363) {
            __result206__ = __result_obj__ = (void*)0;
            return __result206__;
        }
        result_341=(struct sTupleNode*)come_increment_ref_count(((struct sTupleNode*)(right_value534=(struct sTupleNode*)come_calloc(1, sizeof(struct sTupleNode)*(1), "sTupleNode_clone", 3))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value534);
        if(right_value534 && right_value534 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sTupleNode_finalize,right_value534, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value534;
        __freed_obj__ = 0;
        if(_if_conditional364=self!=((void*)0)&&self->tuple_elements!=((void*)0),        _if_conditional364) {
            __dec_obj157=result_341->tuple_elements;
            result_341->tuple_elements=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value535=list$1sNodephp_clone(self->tuple_elements))));
            if(__dec_obj157) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj157, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value535);
            if(right_value535 && right_value535 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value535, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value535;
            __freed_obj__ = 0;
        }
        if(_if_conditional365=self!=((void*)0),        _if_conditional365) {
            result_341->sline=self->sline;
        }
        if(_if_conditional366=self!=((void*)0)&&self->sname!=((void*)0),        _if_conditional366) {
            __dec_obj158=result_341->sname;
            result_341->sname=(char*)come_increment_ref_count(((char*)(right_value536=string_clone(self->sname))));
            if(__dec_obj158) { __dec_obj158 = come_decrement_ref_count(__dec_obj158, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value536);
            if(right_value536 && right_value536 != __result_obj__ && !__freed_obj__) { right_value536 = come_decrement_ref_count(right_value536, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value536;
            __freed_obj__ = 0;
        }
        __result207__ = __result_obj__ = result_341;
        if(result_341 && !__freed_obj__) { come_call_finalizer(sTupleNode_finalize,result_341, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result207__;
        if(result_341 && !__freed_obj__) { come_call_finalizer(sTupleNode_finalize,result_341, (void*)0, (void*)0, 0, 0, 0, 0); }
}

