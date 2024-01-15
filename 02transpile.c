#include "common.h"
using c
{
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <errno.h>
}

bool gComeGC = false;
bool gComeC = false;
char* gProgramName = NULL;
bool gCommonHeader = false;
bool gComeMalloc = false;
bool gComeDebug = false;
bool gComeOriginalSourcePosition = true;

void come_init() version 2
{
}

void come_final() version 2
{
}

static void write_source_file_position_to_source(sInfo* info=info)
{
    if(gComeOriginalSourcePosition) {
        if(info.writing_source_file_position) {
            add_come_code(info, s"# \{info->sline} \"\{info->sname}\"\n");
            info.writing_source_file_position = false;
        }
    }
}

bool node_compile(sNode* node, sInfo* info=info)
{
    string sname = string(info->sname);
    int sline = info->sline;
    
    info->sname = string(node->sname());
    info->sline = node->sline();
    
    write_source_file_position_to_source();
    
    bool result = node->compile(info);
    
    info->sname = string(sname);
    info->sline = sline;
    
    return result;
}

void err_msg(sInfo* info, char* msg, ...)
{
    if(!info.no_output_err) {
        char* msg2;
    
        va_list args;
        va_start(args, msg);
        vasprintf(&msg2,msg,args);
        va_end(args);
        
        printf("%s %d: %s\n", info.sname, info.sline, msg2);
        info.err_num++;
        stackframe();
        
        if(info.come_fun) {
            int n = info->sline-5;
            info.original_source.to_string().split_char('\n').sublist(n, n+10).map { return xsprintf("%d %s", ++n, it); }.join("\n").puts();
        }

        free(msg2);
    }
}

int transpile(sInfo* info) version 2
{
    return 0;
}

bool output_source_file(sInfo* info) version 2
{
    string output_file_name = xsprintf("%s.c", info.sname);
    
    /// dummy output ///
    string("int main(int argc, char** argv) { return 0; }\n")
        .write(output_file_name);
    
    return true;
}

static void clear_tmp_file(sInfo* info)
{
    string input_file_name = info.sname;
    
    system(s"rm -f \{input_file_name}.*");
}

static bool cpp(sInfo* info)
{
    string input_file_name = info.sname;
    
    string output_file_name;
    if(!info.output_header_file && info.output_file_name) {
        output_file_name = info.output_file_name + ".i";
    }
    else {
        output_file_name = info.sname + ".i";
    }
    
    string cmd = xsprintf("which /opt/homebrew/opt/llvm/bin/clang-cpp 1> /dev/null 2>/dev/null"); // Mac?
    
    bool exist_common_h = false;
    {
        FILE* f = fopen("common.h", "r");
        if(f) {
            exist_common_h = true;
        }
        if(info.output_file_name === "common.h") {
            exist_common_h = false;
        }
        if(f) {
            fclose(f);
        }
    }
    
    if(!gCommonHeader) {
        exist_common_h = false;
    }

    /// Mac ///
    int rc = system(cmd);
    if(rc == 0) {
        string cmd2 = xsprintf("/opt/homebrew/opt/llvm/bin/clang-cpp -lang-c %s -I. -I/usr/local/include -DPREFIX=\"\\\"%s\\\"\" -I%s/include -DCOMELANG2 -D__DARWIN_ARM__ -I/opt/homebrew/opt/pcre/include -U__GNUC__ %s %s > %s 2> %s.cpp.out", info.cpp_option, PREFIX, PREFIX, exist_common_h ? string(" -include common.h "):"", input_file_name, output_file_name, output_file_name);
        if(info.verbose) puts(cmd2);
        
        int rc = system(cmd2);
        
        if(rc != 0) {
            printf("failed to cpp(2) (%s)\n", cmd2);
            exit(5);
        }
        
        var command2 = xsprintf("grep error\\: %s.cpp.out", output_file_name);
        
        if(info.verbose) puts(command2);
        (void)system(command2);
    }
    /// Other ///
    else {
        string cmd3 = xsprintf("cpp -lang-c %s -I. -I%s/include -DPREFIX=\"\\\"%s\\\"\" -I%s/include -DCOMELANG2 -U__GNUC__ %s %s > %s 2> %s.cpp.out", info.cpp_option, getenv("HOME"), PREFIX, PREFIX, exist_common_h ? string(" -include common.h "):"", input_file_name, output_file_name, output_file_name);
        
        if(info.verbose) puts(cmd3);
        rc = system(cmd3);
        
        var command2 = xsprintf("grep error\\: %s.cpp.out", output_file_name);
        
        if(info.verbose) puts(command2);
        (void)system(command2);
        
        if(rc != 0) {
            string cmd4 = xsprintf("cpp -I. %s -DPREFIX=%s -I%s/include -C %s %s > %s 2> %s.cpp.out", info.cpp_option, PREFIX, PREFIX, exist_common_h ? string(" -include common.h "):"", input_file_name, output_file_name, output_file_name);
    var command = xsprintf("clang -o %s -c %s %s >> %s.out 2>&1", output_file_name, input_file_name, info.clang_option, input_file_name);
    
            if(info.verbose) puts(cmd4);
            rc = system(cmd4);
            
            var command2 = xsprintf("grep error\\: %s.cpp.out", output_file_name);
            
            if(info.verbose) puts(command2);
            (void)system(command2);
    
            if(rc != 0) {
                printf("failed to cpp(2) (%s)\n", cmd4);
                exit(5);
            }
        }
    }
    
    return true;
}

static bool compile(sInfo* info, bool output_object_file, list<string>* object_files)
{
    string input_file_name = info.sname + ".c";
    
    string output_file_name = null;
    if(info.output_file_name) {
        output_file_name = string(info.output_file_name);
    }
    else {
        output_file_name = info.sname + ".o";
    }
    
    var command = xsprintf("clang -o %s -c %s %s >> %s.out 2>&1", output_file_name, input_file_name, info.clang_option, input_file_name);
    
    if(info.verbose) puts(command);
    int rc = system(command);
    
    var command2 = xsprintf("grep error\\: %s.out", input_file_name);
    
    if(info.verbose) puts(command2);
    (void)system(command2);
    
    if(rc != 0) {
        printf("%s %d: clang is faild\n", info->sname, info->sline);
        return false;
    }
    
    if(!output_object_file) {
        object_files.push_back(string(output_file_name));
    }
    
    return true;
}

static bool linker(sInfo* info, list<string>* object_files)
{
    string output_file_name = null;
    if(info.output_file_name) {
        output_file_name = string(info.output_file_name);
    }
    else {
        output_file_name = xnoextname(info.sname);
    }
    
    var command = new buffer();
    
    command.append_str(xsprintf("clang -o %s -L%s/lib -L%s/lib ", output_file_name, getenv("HOME"), PREFIX));
    
    foreach(it, object_files) {
        command.append_str(xsprintf("%s ", it));
    }
    
#ifndef COMPILING_LIBRARY
    command.append_str("-L/usr/local/lib -lcomelang2 ");
#endif
    string cmd = xsprintf("which /opt/homebrew/opt/llvm/bin/clang-cpp 1> /dev/null 2>/dev/null"); // Is Mac?

    int rc = system(cmd);
    if(rc == 0) {
        command.append_str(" -L/opt/homebrew/opt/pcre/lib ");
    }
    command.append_str(xsprintf(" %s ", info.clang_option));
    
    if(gComeGC) {
        command.append_str(xsprintf(" -lgc "));
    }
    
    if(info.verbose) puts(command.to_string());
    rc = system(command.to_string());
    
    if(rc != 0) {
        printf("%s %d: clang is faild\n", info->sname, info->sline);
        return false;
    }
    
    return true;
}

sModule*% sModule*::initialize(sModule*% self)
{
    self.mSourceHead = new buffer();
    self.mSource = new buffer();
    self.mLastCode = null;
    self.mLastCode2 = null;
    
    return self;
}

sVarTable*% sVarTable*::initialize(sVarTable*% self, bool global, sVarTable* parent)
{
    self.mVars = new map<string, sVar*%>();
    self.mGlobal = global;
    self.mParent = parent;
    static int id = 0;
    self.mID = ++id;
    
    return self;
}

void sVarTable*::finalize(sVarTable* self)
{
    delete self.mVars;
}

sType*% sType*::initialize(sType*% self, char* name, bool heap=false, sInfo* info=info)
{
    int pointer_num = 0;
    char* p = name;
    while(*p) {
        if(xisalpha(*p)) {
            p++;
        }
        else {
            break;
        }
    }
    while(*p == '*') {
        pointer_num++;
        p++;
    }
    
    string name2 = string(name).substring(0, -pointer_num-1);
    
    sClass* klass = info.classes[name2];
    sClass* generics_class = info.generics_classes[name2];
    
    if(klass == null && generics_class == null) {
        printf("%s %d: class not found(%s)(1)\n", info->sname, info->sline, name2);
    }
    if(klass) {
        self.mClass = klass;
    }
    else {
        sClass*% klass2 = new sClass;
        klass2->mName = string(name);
        klass2->mDeclareSName = string(info->sname);
        
        info.classes.insert(string(name), klass2);
        
        self.mClass = info.classes[string(name)];
    }
    
    self.mNoSolvedGenericsType = new tuple1<sType*%>(null);
    self.mOriginalLoadVarType = new tuple1<sType*%>(null);
    self.mGenericsTypes = new list<sType*%>();
    self.mArrayNum = new list<sNode*%>();
    self.mOmitArrayNum = false;
    self.mParamTypes = new list<sType*%>();
    self.mParamNames = new list<string>();
    self.mVarArgs = false;
    self.mResultType = null;
    self.mUnsigned = false;
    self.mConstant = false;
    self.mRegister = false;
    self.mVolatile = false;
    self.mStatic = false;
    self.mRestrict = false;
    self.mImmutable = false;
    self.mLongLong = false;
    self.mHeap = heap;
    self.mDummyHeap = false;
    self.mNoHeap = false;
    self.mRefference = false;
    
    self.mPointerNum = pointer_num;
    self.mNoArrayPointerNum = 0;
    self.mSizeNum = null;
    
    self.mDynamicArrayNum = 0;
    self.mTypeOfExpression = 0;

    self.mOriginalTypeName = string("");
    self.mOriginalPointerNum = 0;
    
    self.mFunctionParam = false;
    
    return self;
}

sClass*% sClass*::initialize(sClass*% self, char* name, bool number=false, bool union_=false, bool generics=false, bool method_generics=false, bool protocol_=false, bool struct_=false, bool float_=false, int generics_num=-1, int method_generics_num=-1, bool enum_=false, sInfo* info=info)
{
    self.mNumber = number;
    self.mStruct = struct_;
    self.mUnion = union_;
    self.mGenerics = generics;
    self.mMethodGenerics = method_generics;
    self.mEnum = false;
    self.mProtocol = protocol_;
    self.mFloat = float_;
    self.mEnum = enum_;
    
    self.mName = string(name);
    
    self.mGenericsNum = generics_num;
    self.mMethodGenericsNum = method_generics_num;
    
    self.mFields = new list<tuple2<string, sType*%>*%>();
    
    self.mDeclareSName = string(info->sname);
    
    return self;
};

sFun*% sFun*::initialize(sFun*% self, string name, sType*% result_type, list<sType*%>*% param_types, list<string>*% param_names, list<string>%* param_default_parametors, bool external, bool var_args, sBlock*% block, bool static_, string come_header, string declare_sname, sInfo* info)
{
    self.mName = name;
    self.mResultType = result_type;
    self.mParamTypes = param_types;
    self.mParamNames = param_names;
    self.mParamDefaultParametors = param_default_parametors;
    self.mExternal = external;
    self.mVarArgs = var_args;
    self.mStatic = static_;
    
    self.mLambdaType = new sType("lambda");
    
    foreach(it, param_types) {
        self.mLambdaType.mParamTypes.push_back(clone it);
    }
    
    foreach(it, param_names) {
        self.mLambdaType.mParamNames.push_back(clone it);
    }
    
    self.mLambdaType.mResultType = new tuple1<sType*%>(result_type);
    self.mLambdaType.mVarArgs = var_args;
    
    self.mSource = new buffer();
    self.mSourceHead = new buffer();
    self.mSourceHead2 = new buffer();
    self.mSourceDefer = new buffer();
    
    self.mBlock = clone block;
    
    self.mComeHeader = come_header;
    
    self.mDeclareSName = string(declare_sname);
    
    return self;
}

void init_classes(sInfo* info)
{
    info.classes.insert(string("int"), new sClass("int", number:true));
    info.classes.insert(string("short"), new sClass("short", number:true));
    info.classes.insert(string("long"), new sClass("long", number:true));
    info.classes.insert(string("char"), new sClass("char", number:true));
    info.classes.insert(string("bool"), new sClass("bool", number:true));
    info.classes.insert(string("_Bool"), new sClass("_Bool", number:true));
    info.classes.insert(string("void"), new sClass("void"));
    info.classes.insert(string("float"), new sClass("float", float_:true));
    info.classes.insert(string("double"), new sClass("double", float_:true));
    info.classes.insert(string("lambda"), new sClass("lambda"));
    info.classes.insert(string("__uint128_t"), new sClass("__uint128_t", number:true));
    for(int i=0; i<GENERICS_TYPE_MAX; i++) {
        string generics_type = xsprintf("generics_type%d", i);
        info.classes.insert(generics_type, new sClass(generics_type, generics:true, generics_num:i));
    }
    
    char cmd[1024];
    snprintf(cmd, 1024, "which /opt/homebrew/opt/llvm/bin/clang-cpp 1> /dev/null 2>/dev/null");

    int rc = system(cmd);
    if(rc == 0) {
        info.classes.insert(string("__builtin_va_list"), new sClass("__builtin_va_list", number:true));
        
        string type_name = string("__builtin_va_list");
        
        sType*% type = new sType("__builtin_va_list");
        type->mOriginalTypeName = string("__builtin_va_list");
        
        info.types.insert(string(type_name), type);
        
//        add_come_code_at_source_head(info, "typedef %s;\n", make_define_var(type, type_name, in_header:true));
    }
    else {
        sClass*% klass = new sClass("__builtin_va_list", struct_:true);
        
        klass.mFields.push_back(new tuple2<string, sType*%>(string("v1"), new sType("char*")));
        klass.mFields.push_back(new tuple2<string, sType*%>(string("v2"), new sType("char*")));
        klass.mFields.push_back(new tuple2<string, sType*%>(string("v3"), new sType("char*")));
        klass.mFields.push_back(new tuple2<string, sType*%>(string("v4"), new sType("int")));
        klass.mFields.push_back(new tuple2<string, sType*%>(string("v5"), new sType("int")));
        
        info.classes.insert(string("__builtin_va_list"), klass);
    }
}

void init_module(sInfo* info)
{
}

bool new_project(int argc, char** argv)
{
    string project_name = string(argv[2]);
    string project_name_debug = string(argv[2]) + string("-debug");
    string cc = string("comelang2");
    string install = string("install");
    string libs = string("-lpcre");
    string os = string("linux");
    string prefix = string("/usr/local/");
    string cflags = string(" -common-header -O2 ");
    string cflags_debug = string(" -common-header -gdwarf-4 -cg ");
    
    mkdir(project_name, S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH) or die("mkdir error");
    
    """
\#########################################
\# istalled directories
\#########################################
prefix=\{prefix}
exec_prefix=${prefix}
bindir=${exec_prefix}/bin
datadir=${datarootdir}
mandir=${datarootdir}/man
sharedstatedir=${prefix}/\{project_name}
sysconfdir=${prefix}/etc/\{project_name}
includedir=${prefix}/include/\{project_name}
datarootdir=${prefix}/share/\{project_name}
docdir=${datarootdir}/doc
libdir=${exec_prefix}/lib

\#########################################
\# environmnet variables
\#########################################
CC=\{cc}
INSTALL=\{install}
CFLAGS=\{cflags}
CFLAGS_DEBUG=\{cflags_debug}
LIBS=\{libs}
OS=\{os}
DESTDIR=\{prefix}
SRCS=$(wildcard *.c)
SINGLE_SRCS=$(filter-out %.c.c, $(SRCS))
OBJS=$(SINGLE_SRCS:.c=.o)
TARGET=\{project_name}
TARGET_DEBUG=\{project_name_debug}

\#########################################
\# main
\#########################################
all: common.h \{project_name}

$(TARGET): $(OBJS)
\t$(CC) $(CFLAGS) $^ -o $@

$(TARGET_DEBUG): $(OBJS)
\t$(CC) $(CFLAGS_DEBUG) $^ -o $@

%.o: %.c header
\t$(CC) $(CFLAGS) -c $< -o $@

\#########################################
\# header
\#########################################

header: 
\tcomelang2 header $(SINGLE_SRCS)

common.h: *.c
\tbash -c 'shopt -s extglob; comelang2 header !(*.c).c'

\#########################################
\# install
\#########################################
install:
\tmkdir -p "$(DESTDIR)/bin"
\t$(INSTALL) -m 755 ./\{project_name} "$(DESTDIR)/bin"
\tmkdir -p "$(DESTDIR)/include"
\tmkdir -p "$(DESTDIR)/lib"
\tmkdir -p "$(DESTDIR)/share/doc/\{project_name}"
\t$(INSTALL) -m 644 README.md "$(DESTDIR)/share/doc/\{project_name}/README.md"

\#########################################
\# clean
\#########################################
clean:
\trm -fR *.o *.c.i *.c.out *.c.c \{project_name} *.log *.out

\#########################################
\# uninstall
\#########################################
uninstall:
\trm -f "$(DESTDIR)"/bin/\{project_name}
\trm -f "$(DESTDIR)/share/doc/\{project_name}/README.md"

run: \{project_name}
\trm *.log
\t./\{project_name}

debug: \{project_name_debug}
\trm *.log
\t./\{project_name_debug}
    """.write(s"\{project_name}/Makefile", append:false);
    
    return true;
}

bool run_project(int argc, char** argv)
{
    system("make run") or die("system");
    
    return true;
}

bool debug_run_project(int argc, char** argv)
{
    system("make debug") or die("system");
    
    return true;
}

bool clean_project(int argc, char** argv)
{
    system("make clean") or die("system");
    
    return true;
}

bool install_project(int argc, char** argv, char* prefix="/usr/local")
{
    system(s"make install DESTDIR=\{prefix}") or die("system");
    
    return true;
}
                
int come_main(int argc, char** argv) version 2
{
    if(argv[1] === "header" && argc >= 3) {
        gProgramName = argv[0];
        
        var clang_option = new buffer();
        var cpp_option = new buffer();
        var files = new list<string>();
        var object_files = new list<string>();
        bool output_object_file = false;
        bool output_cpp_file = false;
        bool output_source_file_flag = false;
        string output_file_name = string("common.h");
        bool verbose = false;
        bool prohibit_common_header = false;
        bool come_debug = false;
        bool come_malloc = false;
        for(int i=2; i<argc; i++) {
            if(argv[i] === "-o" && i+1 < argc) {
                output_file_name = string(argv[i+1]);
                i++;
            }
            else if(argv[i] === "-str") {
                clang_option.append_str(" -lcomelang2-str -lpcre ");
            }
            else if(argv[i] === "-g") {
                clang_option.append_str("-g ");
                come_debug = false;
            }
            else if(argv[i] === "-cg") {
                clang_option.append_str("-g ");
                come_debug = true;
            }
            else if(argv[i] === "-common-header") {
                gCommonHeader = true;
            }
            else if(argv[i] === "-original-position") {
                gComeOriginalSourcePosition = false;
            }
            else if(argv[i][0..2] === "-O") {
                clang_option.append_str(s" \{argv[i]} ");
                come_debug = false;
            }
            else if(argv[i] === "-v") {
                clang_option.append_str("-v ");
                verbose = true;
            }
            else if(memcmp(argv[i], "-I", strlen("-I")) == 0) {
                cpp_option.append_str(" " + argv[i] + " ");
            }
            else if(argv[i] === "-gdwarf-4") {
                clang_option.append_str("-gdwarf-4 ");
            }
            else if(argv[i] === "-gc") {
                gComeGC = true;
            }
            else if(argv[i] === "-s" || argv[i] === "-S") {
                output_source_file_flag = true;
            }
            else if(argv[i] === "-c") {
                output_object_file = true;
            }
            else if(argv[i] === "-E") {
                output_cpp_file = true;
            }
            else if(argv[i][0] == '-') {
                clang_option.append_str(argv[i] + " ");
            }
            else if(memcmp(argv[i] + strlen(argv[i]) -2, ".o", 2) == 0) {
                object_files.push_back(string(argv[i]));
            }
            else {
                files.push_back(string(argv[i]));
            }
        }
        
        gComeDebug = come_debug;
        gComeMalloc = come_malloc;
        
        FILE* f = fopen(output_file_name, "w") and die("fopen");
        fclose(f);
        
        truncate(output_file_name, 0) or die("truncate");
        
        come_init();
        
        foreach(it, files) {
            sInfo info;
            
            memset(&info, 0, sizeof(sInfo));
            
            info.base_sname = string(it);
            info.sname = string(it);
            info.sline = 1;
            info.err_num = 0;
            info.clang_option = clang_option.to_string();
            info.cpp_option = cpp_option.to_string();
            info.no_output_err = false;
            info.funcs = new map<string, sFun*%>();
            info.generics_funcs = new map<string, sGenericsFun*%>();
            info.classes = new map<string, sClass*%>();
            info.types = new map<string, sType*%>();
            info.module = new sModule();
            info.right_value_objects = new list<sRightValueObject*%>();
            info.stack = new list<CVALUE*%>();
            info.gv_table = new sVarTable(global:true, parent:null);
            sVarTable*% lv_table = new sVarTable(global:false, parent:null);
            info.lv_table = lv_table;
            info.generics_type_names = new list<string>();
            info.generics_classes = new map<string, sClass*%>();
            info.verbose = verbose;
            info.output_header_file = true;
            
            static int n = 0;
            info.num_source_files = n++;
            info.max_source_files = files.length();
            
            info.output_file_name = string(output_file_name);
            
            init_classes(&info);
            init_module(&info);
            
            clear_tmp_file(&info);
            
            if(!cpp(&info)) {
                printf("%s %d: transpile failed\n", info.sname, info.sline);
                exit(2);
            }
            
            info.original_source = xsprintf("%s", it).read().to_buffer();
            info.source = xsprintf("%s.i", it).read().to_buffer();
            info.p = info.source.buf;
            info.head = info.source.buf;
            
            if(!output_cpp_file) {
                transpile(&info);
                
                if(!output_header_file(&info)) {
                    printf("%s %d: output source file faield\n", info->sname, info->sline);
                    exit(2);
                }
            }
        }
        
        come_final();
    }
    else if(argv[1] === "new" && argc == 3) {
        if(!new_project(argc, argv)) {
            return false;
        }
    }
    else if(argv[1] === "run" && argc == 2) {
        if(!run_project(argc, argv)) {
            return false;
        }
    }
    else if(argv[1] === "debug" && argc == 2) {
        if(!debug_run_project(argc, argv)) {
            return false;
        }
    }
    else if(argv[1] === "clean" && argc == 2) {
        if(!clean_project(argc, argv)) {
            return false;
        }
    }
    else if(argv[1] === "install" && argc >= 2) {
        if(argc == 2) {
            if(!install_project(argc, argv)) {
                return false;
            }
        }
        else if(argc >= 3) {
            if(!install_project(argc, argv, argv[2])) {
                return false;
            }
        }
    }
    else {
        gProgramName = argv[0];
        
        var clang_option = new buffer();
        var cpp_option = new buffer();
        var files = new list<string>();
        var object_files = new list<string>();
        bool output_object_file = false;
        bool output_cpp_file = false;
        bool output_source_file_flag = false;
        string output_file_name = null;
        bool verbose = false;
        bool come_debug = false;
        bool come_malloc = false;
        for(int i=1; i<argc; i++) {
            if(argv[i] === "-o" && i+1 < argc) {
                output_file_name = string(argv[i+1]);
                i++;
            }
            else if(argv[i] === "-str") {
                clang_option.append_str(" -lcomelang2-str -lpcre ");
            }
            else if(argv[i] === "-cg") {
                come_debug = true;
                clang_option.append_str("-g ");
            }
            else if(argv[i] === "-common-header") {
                gCommonHeader = true;
            }
            else if(argv[i] === "-original-position") {
                gComeOriginalSourcePosition = false;
            }
            else if(argv[i][0..2] === "-O") {
                clang_option.append_str(s" \{argv[i]} ");
                come_debug = false;
            }
            else if(argv[i] === "-g") {
                clang_option.append_str("-g ");
            }
            else if(argv[i] === "-v") {
                clang_option.append_str("-v ");
                verbose = true;
            }
            else if(memcmp(argv[i], "-I", strlen("-I")) == 0) {
                cpp_option.append_str(" " + argv[i] + " ");
            }
            else if(argv[i] === "-gdwarf-4") {
                clang_option.append_str("-gdwarf-4 ");
            }
            else if(argv[i] === "-gc") {
                gComeGC = true;
            }
            else if(argv[i] === "-s" || argv[i] === "-S") {
                output_source_file_flag = true;
            }
            else if(argv[i] === "-c") {
                output_object_file = true;
            }
            else if(argv[i] === "-E") {
                output_cpp_file = true;
            }
            else if(argv[i][0] == '-') {
                clang_option.append_str(argv[i] + " ");
            }
            else if(memcmp(argv[i] + strlen(argv[i]) -2, ".o", 2) == 0) {
                object_files.push_back(string(argv[i]));
            }
            else {
                files.push_back(clone string(argv[i]));
            }
        }
        
        gComeDebug = come_debug;
        gComeMalloc = come_malloc;
        
        come_init();
        
        foreach(it, files) {
            sInfo info;
            
            memset(&info, 0, sizeof(sInfo));
            
            info.sname = string(it);
            info.sline = 1;
            info.err_num = 0;
            info.clang_option = clang_option.to_string();
            info.cpp_option = cpp_option.to_string();
            info.no_output_err = false;
            info.funcs = new map<string, sFun*%>();
            info.generics_funcs = new map<string, sGenericsFun*%>();
            info.classes = new map<string, sClass*%>();
            info.types = new map<string, sType*%>();
            info.module = new sModule();
            info.right_value_objects = new list<sRightValueObject*%>();
            info.stack = new list<CVALUE*%>();
            info.gv_table = new sVarTable(global:true, parent:null);
            sVarTable*% lv_table = new sVarTable(global:false, parent:null);
            info.lv_table = lv_table;
            info.generics_type_names = new list<string>();
            info.generics_classes = new map<string, sClass*%>();
            info.verbose = verbose;
            
            init_classes(&info);
            init_module(&info);
            
            clear_tmp_file(&info);
            
            if(!cpp(&info)) {
                printf("%s %d: transpile failed\n", info.sname, info.sline);
                exit(2);
            }
            
            info.original_source = xsprintf("%s", it).read().to_buffer();
            info.source = xsprintf("%s.i", it).read().to_buffer();
            info.p = info.source.buf;
            info.head = info.source.buf;
            
            if(output_file_name) {
                info.output_file_name = string(output_file_name);
            }
            else {
                info.output_file_name = null;
            }
            
            if(!output_cpp_file) {
                transpile(&info);
                
                if(!output_source_file(&info)) {
                    printf("%s %d: output source file faield\n", info->sname, info->sline);
                    exit(2);
                }
                
                if(info.err_num > 0) {
                    printf("transpile error. err num %d\n", info->err_num);
                    
                    exit(2);
                }
                else {
                    if(!compile(&info, output_object_file, object_files)) {
                        printf("%s %d: compile faield\n", info.sname, info.sline);
                        exit(27);
                    }
                    
                }
    
            }
        }
        
        if(!output_object_file && !output_cpp_file && (files.length() > 0 || object_files.length() > 0)) {
            sInfo info;
            
            memset(&info, 0, sizeof(sInfo));
            
            info.sname = clone files[0];
            info.clang_option = clang_option.to_string();
            info.verbose = verbose;
            
            if(output_file_name) {
                info.output_file_name = string(output_file_name);
            }
            else {
                info.output_file_name = null;
            }
            
            linker(&info, object_files).expect {
                printf("%s %d: linker faield\n", info.sname, info.sline);
                exit(13);
            }
        }
        
        come_final();
    }

    
    return 0;
}
