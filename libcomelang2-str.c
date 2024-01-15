#include <comelang2.h>
#include <comelang2-str.h>
#include <limits.h>
//#include <gc.h>

/*
void regex_finalizer(GC_PTR obj, GC_PTR client_data)
{
    come_regex* self = obj;
    
    if(self && self.re) {
        free(self.re);
    }
}
*/

come_regex*% come_regex*::initialize(come_regex*% self, char* str, bool ignore_case=false, bool multiline=false, bool global=false, bool extended=false, bool dotall=false, bool anchored=false, bool dollar_endonly=false, bool ungreedy=false)
{
    const char* err;
    int erro_ofs;

    int options = PCRE_UTF8 | (ignore_case ? PCRE_CASELESS:0) | (multiline ? PCRE_MULTILINE : 0) | (extended ? PCRE_EXTENDED :0) | (dotall ? PCRE_DOTALL :0) | (dollar_endonly ? PCRE_DOLLAR_ENDONLY:0) | (ungreedy ? PCRE_UNGREEDY:0);

    self.str = string(str);

    self.ignore_case = ignore_case;
    self.multiline = multiline;
    self.global = global;
    self.extended = extended;
    self.dotall = dotall;
    self.anchored = anchored;
    self.dollar_endonly = dollar_endonly;
    self.ungreedy;
    self.options = options;

    self.re = pcre_compile(str, options, &err, &erro_ofs, NULL);

    if(self.re == null) {
        printf("regex error (%s)\n", str);
        stackframe();
        exit(1);
    }
    
/*
    if(gComeGC) {
        GC_register_finalizer(self@obj, regex_finalizer@fn, null@cd, null@ofn, null@ocd);
    }
*/

    return self;
}

void come_regex*::finalize(come_regex* reg)
{
    if(reg && reg.str) {
        delete borrow reg.str;
    }
    if(reg && reg.re) {
        free(reg.re);
    }
}

come_regex*% char*::to_regex(char* self, bool ignore_case=false, bool multiline=false, bool global=false, bool extended=false, bool dotall=false, bool anchored=false, bool dollar_endonly=false, bool ungreedy=false)
{
    return new come_regex(self, ignore_case, multiline, global, extended, dotall, anchored, dollar_endonly, ungreedy);
}

come_regex*% string::to_regex(char* self, bool ignore_case=false, bool multiline=false, bool global=false, bool extended=false, bool dotall=false, bool anchored=false, bool dollar_endonly=false, bool ungreedy=false)
{
    return new come_regex(self, ignore_case, multiline, global, extended, dotall, anchored, dollar_endonly, ungreedy);
}


come_regex*% come_regex*::clone(come_regex* reg)
{
    if(reg == null) {
        return null;
    }
    
    come_regex*% result = new come_regex;
    
    result.str = clone reg.str;

    result.ignore_case = reg.ignore_case;
    result.multiline = reg.multiline;
    result.global = reg.global;
    result.extended = reg.extended;
    result.dotall = reg.dotall;
    result.anchored = reg.anchored;
    result.dollar_endonly = reg.dollar_endonly;
    result.ungreedy = reg.ungreedy;

    result.options = reg.options;

    const char* err;
    int erro_ofs;

    result.re = pcre_compile(result.str, result.options, &err, &erro_ofs, NULL);

    if(result.re == null) {
        printf("regex compile error(%s)\n", result.str);
        stackframe();
        exit(1);
    }

    return result;
}

string come_regex*::to_string(come_regex* regex)
{
    return string(regex.str);
}

string string::lower_case(char* str)
{
    string result = string(str);
    for(int i=0; i<strlen(str); i++) {
        if(str[i] >= 'A' && str[i] <= 'Z') {
            result[i] = str[i] - 'A' + 'a';
        }
    }
    
    return result;
}

string string::upper_case(char* str)
{
    string result = string(str);
    for(int i=0; i<strlen(str); i++) {
        if(str[i] >= 'a' && str[i] <= 'z') {
            result[i] = str[i] - 'a' + 'A';
        }
    }
    
    return result;
}

wstring wchar_t*::substring(wchar_t* str, int head, int tail)
{
    using unsafe;
    
    if(str == null) {
        return wstring("");
    }

    int len = wcslen(str);

    if(head < 0) {
        head += len;
    }
    if(tail < 0) {
        tail += len + 1;
    }

    if(head > tail) {
        return wstring("");
    }

    if(head < 0) {
        head = 0;
    }

    if(tail >= len) {
        tail = len;
    }

    if(head == tail) {
        return wstring("");
    }

    if(tail-head+1 < 1) {
        return wstring("");
    }

    wstring result = new wchar_t[tail-head+1];

    memcpy(result, str + head, sizeof(wchar_t)*(tail-head));
    result[tail-head] = '\0';

    return result;
}

wstring __builtin_wstring(char* str)
{
    if(str == null) {
        return null;
    }
    int len = strlen(str);

    wstring wstr = new wchar_t[len+1];

    int ret = mbstowcs(wstr, str, len+1);
    wstr[ret] = '\0';

    if(ret < 0) {
        wstr[0] = 0;
    }

    return wstr;
}

int char*::index_count(char* str, char* search_str, int count, int default_value)
{
    int n = 0;
    int len = strlen(str);
    for(int i=0; i<len; i++) {
        int len2 = strlen(search_str);
        int j;
        for(j=0; j<len2; j++) {
            if(str[i+j] != search_str[j]) {
                break;
            }
        }
        
        if(j == len2) {
            n++;
            
            if(n == count) {
                return i;
            }
        }
    }
    
    return default_value;
}

int char*::index_regex_count(char* self, come_regex* reg, int count, int default_value)
{
    int ovec_max = 16;
    int start[ovec_max];
    int end[ovec_max];
    int ovec_value[ovec_max * 3];

    int result = default_value;
    
    int offset = 0;

    const char* err;
    int erro_ofs;

    int options = reg.options;
    char* str = reg.str;

    pcre* re = reg.re;
    
    int n = 0;

    while(true) {
        int options = PCRE_NEWLINE_LF;
        int len = strlen(self);
        int regex_result = pcre_exec(re, (pcre_extra*)0, self, len, offset, options, ovec_value, ovec_max*3);

        for(int i=0; i<ovec_max; i++) {
            start[i] = ovec_value[i*2];
        }
        for(int i=0; i<ovec_max; i++) {
            end[i] = ovec_value[i*2+1];
        }
        
        /// match and no group strings ///
        if(regex_result > 0) {
            n++;

            if(offset == end[0]) {
                offset++;
            }
            else {
                offset = end[0];
            }
            
            if(n == count) {
                result = start[0];
                break;
            }
        }
        /// no match ///
        else {
            break;
        }
    }

    return result;
}

int char*::rindex(char* str, char* search_str, int default_value)
{
    using unsafe;
    
    int len = strlen(search_str);
    char* p = str + strlen(str) - len;

    while(p >= str) {
        if(strncmp(p, search_str, len) == 0) {
            return p - str;
        }

        p--;
    }

    return default_value;
}

int char*::rindex_regex(char* self, come_regex* reg, int default_value)
{
    const char* err;
    int erro_ofs;

    int options = reg.options;
    char* str = reg.str;

    pcre* re = reg.re;

    string self2 = self.reverse();
    
    int ovec_max = 16;
    int start[ovec_max];
    int end[ovec_max];
    int ovec_value[ovec_max * 3];

    int result = default_value;
    
    int offset = 0;

    while(true) {
        int options = PCRE_NEWLINE_LF;
        int len = strlen(self2);
        int regex_result = pcre_exec(re, (pcre_extra*)0, self2, len, offset, options, ovec_value, ovec_max*3);

        for(int i=0; i<ovec_max; i++) {
            start[i] = ovec_value[i*2];
        }
        for(int i=0; i<ovec_max; i++) {
            end[i] = ovec_value[i*2+1];
        }

        /// match and no group strings ///
        if(regex_result == 1 || regex_result > 0) 
        {
            result = strlen(self) -1 - start[0];
            break;
        }
        /// no match ///
        {
            break;
        }
    }

    return result;
}

int char*::rindex_count(char* str, char* search_str, int count, int default_value)
{
    using unsafe;
    
    int len = strlen(search_str);
    char* p = str + strlen(str) - len;
    
    int n = 0;

    while(p >= str) {
        if(strncmp(p, search_str, len) == 0) {
            n++;
            if(n == count) {
                return p - str;
            }
        }

        p--;
    }

    return default_value;
}

list<string>*% char*::scan_block(char* self, come_regex* reg, void* parent, string (*block)(void* parent, char* match_string, list<string>* group_strings))
{
    auto result = new list<string>.initialize();

    int offset = 0;

    int ovec_max = 16;
    int start[ovec_max];
    int end[ovec_max];
    int ovec_value[ovec_max * 3];

    const char* err;
    int erro_ofs;

    int options = reg.options;
    char* str = reg.str;

    pcre* re = reg.re;

    while(true) {
        int options = PCRE_NEWLINE_LF;
        int len = strlen(self);
        int regex_result = pcre_exec(re, (pcre_extra*)0, self, len, offset, options, ovec_value, ovec_max*3);

        for(int i=0; i<ovec_max; i++) {
            start[i] = ovec_value[i*2];
        }
        for(int i=0; i<ovec_max; i++) {
            end[i] = ovec_value[i*2+1];
        }

        /// match and no group strings ///
        if(regex_result == 1)
        {
            auto str = self.substring(start[0], end[0]);
            
            list<string>*% group_strings = new list<string>.initialize();
            
            string str2 = block(parent, str, group_strings);
            
            if(((sDummyCurrentStack*)parent)->__method_block_result_kind__ != 0) {
                return result;
            }
            
            result.push_back(str2);

            if(offset == end[0]) {
                offset++;
            }
            else {
                offset = end[0];
            }
        }
        /// group strings ///
        else if(regex_result > 1) {
            auto str = self.substring(start[0], end[0]);

            list<string>*% group_strings = new list<string>.initialize();
            for(int i= 1; i<regex_result; i++) {
                auto match_string = self.substring(start[i], end[i]);
                group_strings.push_back(match_string);
            }
            
            string str2 = block(parent, str, group_strings);
            
            if(((sDummyCurrentStack*)parent)->__method_block_result_kind__ != 0) {
                return result;
            }
            
            result.push_back(str2);

            if(offset == end[0]) {
                offset++;
            }
            else {
                offset = end[0];
            }
        }
        /// no match ///
        else
        {
            break;
        }
    }

    return result;
}


list<string>*% char*::scan_block_count(char* self, come_regex* reg, int count, void* parent, string (*block)(void* parent, char* match_string, list<string>* group_strings))
{
    auto result = new list<string>.initialize();

    int offset = 0;

    int ovec_max = 16;
    int start[ovec_max];
    int end[ovec_max];
    int ovec_value[ovec_max * 3];

    const char* err;
    int erro_ofs;

    int options = reg.options;
    char* str = reg.str;

    pcre* re = reg.re;
    
    int n = 0;

    while(true) {
        int options = PCRE_NEWLINE_LF;
        int len = strlen(self);
        int regex_result = pcre_exec(re, (pcre_extra*)0, self, len, offset, options, ovec_value, ovec_max*3);

        for(int i=0; i<ovec_max; i++) {
            start[i] = ovec_value[i*2];
        }
        for(int i=0; i<ovec_max; i++) {
            end[i] = ovec_value[i*2+1];
        }

        /// match and no group strings ///
        if(regex_result == 1)
        {
            auto str = self.substring(start[0], end[0]);
            
            list<string>*% group_strings = new list<string>.initialize();
            
            string str2 = block(parent, str, group_strings);
            
            if(((sDummyCurrentStack*)parent)->__method_block_result_kind__ != 0) {
                return result;
            }
            
            result.push_back(str2);

            if(offset == end[0]) {
                offset++;
            }
            else {
                offset = end[0];
            }
            
            n++;
            if(n == count) {
                break;
            }
        }
        /// group strings ///
        else if(regex_result > 1) {
            auto str = self.substring(start[0], end[0]);

            list<string>*% group_strings = new list<string>.initialize();
            for(int i= 1; i<regex_result; i++) {
                auto match_string = self.substring(start[i], end[i]);
                group_strings.push_back(match_string);
            }
            
            string str2 = block(parent, str, group_strings);
            
            if(((sDummyCurrentStack*)parent)->__method_block_result_kind__ != 0) {
                return result;
            }
            
            result.push_back(str2);

            if(offset == end[0]) {
                offset++;
            }
            else {
                offset = end[0];
            }
            
            n++;
            if(n == count) {
                break;
            }
        }
        /// no match ///
        else
        {
            break;
        }
    }

    return result;
}

list<string>*% char*::split_block(char* self, come_regex* reg, void* parent, string (*block)(void* parent, char* match_string, list<string>* group_strings))
{
    const char* err;
    int erro_ofs;

    int options = reg.options;
    char* str = reg.str;

    pcre* re = reg.re;

    auto result = new list<string>.initialize();

    int offset = 0;

    int ovec_max = 16;
    int start[ovec_max];
    int end[ovec_max];
    int ovec_value[ovec_max * 3];

    while(true) {
        int options = PCRE_NEWLINE_LF;
        int len = strlen(self);

        int regex_result = pcre_exec(re, (pcre_extra*)0, self, len, offset, options, ovec_value, ovec_max*3);

        for(int i=0; i<ovec_max; i++) {
            start[i] = ovec_value[i*2];
        }
        for(int i=0; i<ovec_max; i++) {
            end[i] = ovec_value[i*2+1];
        }

        /// match and no group strings ///
        if(regex_result == 1)
        {
            string str = self.substring(offset, start[0]);
            
            list<string>*% match_strings = new list<string>.initialize();
            string str2 = block(parent, str, match_strings);
            
            if(((sDummyCurrentStack*)parent)->__method_block_result_kind__ != 0) {
                return result;
            }
            
            result.push_back(str2);

            if(offset == end[0]) {
                offset++;
            }
            else {
                offset = end[0];
            }
        }
        /// group strings ///
        else if(regex_result > 1) {
            string str = self.substring(offset, start[0]);

            if(offset == end[0]) {
                offset++;
            }
            else {
                offset = end[0];
            }

            list<string>*% match_strings = new list<string>.initialize();
            for(int i=1; i<regex_result; i++) {
                string match_str = self.substring(start[i], end[i]);
                match_strings.push_back(match_str);
            }
            
            string str2 = block(parent, str, match_strings);
            
            if(((sDummyCurrentStack*)parent)->__method_block_result_kind__ != 0) {
                return result;
            }
            result.push_back(str2);
        }
        /// no match ///
        else
        {
            break;
        }
    }

    if(offset < self.length()) {
        string str = self.substring(offset, -1);
        list<string>*% match_strings = new list<string>.initialize();
        string str2 = block(parent, str, match_strings);
        
        if(((sDummyCurrentStack*)parent)->__method_block_result_kind__ != 0) {
            return result;
        }
        result.push_back(str2);
    }

    return result;
}

list<string>*% char*::split_block_count(char* self, come_regex* reg, int count, void* parent, string (*block)(void* parent, char* match_string, list<string>* group_strings))
{
    const char* err;
    int erro_ofs;

    int options = reg.options;
    char* str = reg.str;

    pcre* re = reg.re;

    auto result = new list<string>.initialize();

    int offset = 0;

    int ovec_max = 16;
    int start[ovec_max];
    int end[ovec_max];
    int ovec_value[ovec_max * 3];
    
    int n = 0;

    while(true) {
        int options = PCRE_NEWLINE_LF;
        int len = strlen(self);

        int regex_result = pcre_exec(re, (pcre_extra*)0, self, len, offset, options, ovec_value, ovec_max*3);

        for(int i=0; i<ovec_max; i++) {
            start[i] = ovec_value[i*2];
        }
        for(int i=0; i<ovec_max; i++) {
            end[i] = ovec_value[i*2+1];
        }

        /// match and no group strings ///
        if(regex_result == 1)
        {
            string str = self.substring(offset, start[0]);
            
            list<string>*% match_strings = new list<string>.initialize();
            string str2 = block(parent, str, match_strings);
            
            if(((sDummyCurrentStack*)parent)->__method_block_result_kind__ != 0) {
                return result;
            }
            result.push_back(str2);

            if(offset == end[0]) {
                offset++;
            }
            else {
                offset = end[0];
            }
        }
        /// group strings ///
        else if(regex_result > 1) {
            string str = self.substring(offset, start[0]);

            if(offset == end[0]) {
                offset++;
            }
            else {
                offset = end[0];
            }

            list<string>*% match_strings = new list<string>.initialize();
            for(int i=1; i<regex_result; i++) {
                string match_str = self.substring(start[i], end[i]);
                match_strings.push_back(match_str);
            }
            
            string str2 = block(parent, str, match_strings);
            
            if(((sDummyCurrentStack*)parent)->__method_block_result_kind__ != 0) {
                return result;
            }
            
            result.push_back(str2);
        }
        /// no match ///
        else
        {
            break;
        }
        
        n++;
        if(n == count) {
            break;
        }
    }

    return result;
}

bool come_regex*::equals(come_regex* left, come_regex* right)
{
    if(strcmp(left.str, right.str) != 0) {
        return false;
    }

    if(left.ignore_case != right.ignore_case) {
        return false;
    }
    if(left.multiline != right.multiline) {
        return false;
    }
    if(left.global != right.global) {
        return false;
    }
    if(left.extended != right.extended) {
        return false;
    }
    if(left.dotall != right.dotall) {
        return false;
    }
    if(left.anchored != right.anchored) {
        return false;
    }
    if(left.dollar_endonly != right.dollar_endonly) {
        return false;
    }
    if(left.ungreedy != right.ungreedy) {
        return false;
    }
    if(left.options != right.options) {
        return false;
    }

    return true;
}

list<string>*% char*::scan_group_strings(char* self, come_regex* reg, list<string>* group_strings, int* num_group_string_in_regex)
{
    auto result = new list<string>.initialize();

    int offset = 0;

    int ovec_max = 16;
    int start[ovec_max];
    int end[ovec_max];
    int ovec_value[ovec_max * 3];

    const char* err;
    int erro_ofs;

    int options = reg.options;
    char* str = reg.str;

    pcre* re = reg.re;
    
    //assert(group_strings != null);

    while(true) {
        int options = PCRE_NEWLINE_LF;
        int len = strlen(self);
        int regex_result = pcre_exec(re, (pcre_extra*)0, self, len, offset, options, ovec_value, ovec_max*3);

        for(int i=0; i<ovec_max; i++) {
            start[i] = ovec_value[i*2];
        }
        for(int i=0; i<ovec_max; i++) {
            end[i] = ovec_value[i*2+1];
        }

        /// match and no group strings ///
        if(regex_result == 1)
        {
            auto str = self.substring(start[0], end[0]);
            result.push_back(str);

            if(offset == end[0]) {
                offset++;
            }
            else {
                offset = end[0];
            }
        }
        /// group strings ///
        else if(regex_result > 1) {
            auto str = self.substring(start[0], end[0]);
            result.push_back(str);

            if(offset == end[0]) {
                offset++;
            }
            else {
                offset = end[0];
            }

            *num_group_string_in_regex = regex_result-1;
            for(int i= 1; i<regex_result; i++) {
                auto match_string = self.substring(start[i], end[i]);
                group_strings.push_back(match_string);
            }
        }
        /// no match ///
        else
        {
            break;
        }
    }

    return result;
}

string char*::strip(char* self)
{
    string result = string(self);
    
    int len = strlen(self);
    
    if(self[len-1] == '\n') {
        result[len-1] = '\0';
    }
    else if(self[len-1] == '\r') {
        result[len-1] = '\0';
    }
    else if(len > 2 && self[len-2] == '\r' && self[len-1] == '\n') {
        result[len-2] = '\0';
    }
    
    return result;
}

string char*::printable(char* str)
{
    int len = str.length();
    string result = new char[len*2+1];

    int n = 0;
    for(int i=0; i<len; i++) {
        char c = str[i];

        if((c >= 0 && c < ' ') 
            || c == 127)
        {
            result[n++] = '^';
            result[n++] = c + 'A' - 1;
        }
        else {
            result[n++] = c;
        }
    }

    result[n] = '\0'

    return result;
}

string wchar_t*::to_string(wchar_t* wstr)
{
    int len = MB_LEN_MAX*(wcslen(wstr)+1);

    string result = new char[len];

    if(wcstombs(result, wstr, len) < 0) 
    {
        strncpy(result, "", len);
    }

    return result;
}

wstring char*::to_wstring(char* str)
{
    return wstring(str);
}

int wchar_t*::length(wchar_t* str)
{
    return wcslen(str);
}

wstring wchar_t*::delete(wchar_t* str, int head, int tail) 
{
    using unsafe;
    
    int len = wcslen(str);

    if(len == 0) {
        return str.to_string().to_wstring();
    }
    
    if(head < 0) {
       head += len;
    }
    
    if(tail < 0) {
       tail += len + 1;
    }

    if(head < 0) {
        head = 0;
    }

    if(tail < 0) {
        return str.to_string().to_wstring();
    }

    if(tail >= len) {
        tail = len;
    }
    
    wstring sub_str = str.substring(tail, -1);

    memcpy(str + head, sub_str, sizeof(wchar_t)*(sub_str.length()+1));

    return str.to_string().to_wstring();
}

int wchar_t*::index(wchar_t* str, wchar_t* search_str, int default_value)
{
    using unsafe;
    
    wchar_t* head = wcsstr(str, search_str);

    if(head == null) {
        return default_value;
    }

    return head - str;
}

int wchar_t*::rindex(wchar_t* str, wchar_t* search_str, int default_value)
{
    using unsafe;
    
    int len = wcslen(search_str);

    wchar_t* p = str + wcslen(str) - len;

    while(p >= str) {
        int len2 = wcslen(p);
        bool result = true;
        int i;
        for(i=0; i<len && i < len2; i++) {
            if(p[i] != search_str[i]) {
                result = false;
            }
        }
        if(result) {
            return (p - str);
        }

        p--;
    }

    return default_value;
}

wstring wchar_t*::reverse(wchar_t* str) 
{
    int len = wcslen(str);
    wstring result = new wchar_t[len + 1];

    for(int i=0; i<len; i++) {
        result[i] = str[len-i-1];
    }

    result[len] = '\0';

    return result;
}

wstring wchar_t*::multiply(wchar_t* str, int n)
{
    int len = wcslen(str) * n + 1;

    wstring result = new wchar_t[len];

    result[0] = '\0';

    for(int i=0; i<n; i++) {
        wcscat(result, str);
    }

    return result;
}

wstring wchar_t*::printable(wchar_t* str)
{
    int len = str.length();
    wstring result = new wchar_t[len*2+1];

    int n = 0;
    for(int i=0; i<len; i++) {
        wchar_t c = str[i];

        if((c >= 0 && c < ' ') 
            || c == 127)
        {
            result[n++] = '^';
            result[n++] = c + 'A' - 1;
        }
        else {
            result[n++] = c;
        }
    }

    result[n] = '\0'

    return result;
}

bool char*::match_group_strings(char* self, come_regex* reg, int count, list<string>* group_strings)
{
    int offset = 0;

    int ovec_max = 16;
    int start[ovec_max];
    int end[ovec_max];
    int ovec_value[ovec_max * 3];

    const char* err;
    int erro_ofs;

    int options = reg.options;
    char* str = reg.str;

    pcre* re = reg.re;
    
    int n = 0;

    while(true) {
        int options = PCRE_NEWLINE_LF;
        int len = strlen(self);

        int regex_result = pcre_exec(re, (pcre_extra*)0, self, len, offset, options, ovec_value, ovec_max*3);

        for(int i=0; i<ovec_max; i++) {
            start[i] = ovec_value[i*2];
        }
        for(int i=0; i<ovec_max; i++) {
            end[i] = ovec_value[i*2+1];
        }

        /// match and no group strings ///
        if(regex_result == 1 || (group_strings == null && regex_result > 0)) 
        {
            n++;
            
            if(n == count) {
                return true;
            }

            if(offset == end[0]) {
                offset++;
            }
            else {
                offset = end[0];
            }
        }
        /// group strings ///
        else if(regex_result > 1) {
            n++;
            
            group_strings.reset();
            for(int i = 1; i<regex_result; i++) {
                auto match_string = self.substring(start[i], end[i]);
                group_strings.push_back(match_string);
            }
            
            if(n == count) {
                return true;
            }

            if(offset == end[0]) {
                offset++;
            }
            else {
                offset = end[0];
            }
        }
        /// no match ///
        else
        {
            return false;
        }
    }

    return false;
}

int wchar_t*::compare(wchar_t* left, wchar_t* right)
{
    return wcscmp(left, right);
}

int wstring::compare(wchar_t* left, wchar_t* right)
{
    return wcscmp(left, right);
}

unsigned int come_regex*::get_hash_key(come_regex* reg)
{
    return reg->str.get_hash_key();
}

bool wchar_t*::equals(wchar_t left, wchar_t right)
{
    return left == right;
}


wstring wchar_t*::operator_mult(wchar_t* str, int n)
{
    return wchar_t*::multiply(str, n);
}

wstring wstring::operator_mult(wchar_t* str, int n)
{
    return wchar_t*::multiply(str, n);
}

bool wchar_t*::operator_equals(wchar_t* left, wchar_t* right)
{
    return wcscmp(left, right) == 0;
}

bool wstring::operator_equals(wchar_t* left, wchar_t* right)
{
    return wcscmp(left, right) == 0;
}

bool wchar_t*::operator_not_equals(wchar_t* left, wchar_t* right)
{
    return wcscmp(left, right) != 0;
}

bool wstring::operator_not_equals(wchar_t* left, wchar_t* right)
{
    return wcscmp(left, right) != 0;
}

bool come_regex*::operator_equals(come_regex* left, come_regex* right)
{
    return left.equals(right);
}

bool come_regex*::operator_not_equals(come_regex* left, come_regex* right)
{
    return !left.equals(right);
}

wstring wchar_t*::operator_add(wchar_t* left, wchar_t* right)
{
    wchar_t*% result = new wchar_t[wcslen(left) + wcslen(right) + 1];
    
    wcscpy(result, left);
    wcscat(result, right);
    
    return result;
}

wstring wstring::operator_add(wchar_t* left, wchar_t* right)
{
    wchar_t*% result = new wchar_t[wcslen(left) + wcslen(right) + 1];
    
    wcscpy(result, left);
    wcscat(result, right);
    
    return result;
}

int char*::index(char* str, char* search_str, int default_value)
{
    using unsafe;
    
    char* head = strstr(str, search_str);

    if(head == null) {
        return default_value;
    }

    return head - str;
}


int char*::index_regex(char* self, come_regex* reg, int default_value)
{
    int ovec_max = 16;
    int start[ovec_max];
    int end[ovec_max];
    int ovec_value[ovec_max * 3];

    int result = default_value;
    
    int offset = 0;

    const char* err;
    int erro_ofs;

    int options = reg.options;
    char* str = reg.str;

    pcre* re = reg.re;

    while(true) {
        int options = PCRE_NEWLINE_LF;
        int len = strlen(self);
        int regex_result = pcre_exec(re, (pcre_extra*)0, self, len, offset, options, ovec_value, ovec_max*3);

        for(int i=0; i<ovec_max; i++) {
            start[i] = ovec_value[i*2];
        }
        for(int i=0; i<ovec_max; i++) {
            end[i] = ovec_value[i*2+1];
        }

        /// match and no group strings ///
        if(regex_result == 1 || regex_result > 0) 
        {
            result = start[0];
            break;
        }
        /// no match ///
        {
            break;
        }
    }

    return result;
}


string char*::replace(char* self, int index, char c)
{
    int len = strlen(self);

    if(strcmp(self, "") == 0) {
        return string(self);
    }
    
    if(index < 0) {
       index += len;
    }

    if(index >= len) {
        index = len-1;
    }

    if(index < 0) {
        index = 0;
    }
    
    self[index] = c;
    
    return string(self);
}

string char*::multiply(char* str, int n)
{
    int len = strlen(str) * n + 1;

    char*% result = new char[len];

    result[0] = '\0';

    for(int i=0; i<n; i++) {
        strcat(result, str);
    }

    return result;
}

string char*::sub(char* self, come_regex* reg, char* replace)
{
    int offset = 0;

    int ovec_max = 16;
    int start[ovec_max];
    int end[ovec_max];
    int ovec_value[ovec_max * 3];

    const char* err;
    int erro_ofs;

    int options = reg.options;
    char* str = reg.str;

    pcre* re = reg.re;

    auto result = new buffer.initialize();

    while(true) {
        int options = PCRE_NEWLINE_LF;
        int len = strlen(self);
        int regex_result = pcre_exec(re, (pcre_extra*)0, self, len, offset, options, ovec_value, ovec_max*3);

        for(int i=0; i<ovec_max; i++) {
            start[i] = ovec_value[i*2];
        }
        for(int i=0; i<ovec_max; i++) {
            end[i] = ovec_value[i*2+1];
        }

        /// match and no group strings ///
        if(regex_result == 1)
        {
            string str = self.substring(offset, start[0]);

            result.append_str(str);
            result.append_str(replace);

            if(offset == end[0]) {
                offset++;
            }
            else {
                offset = end[0];
            }

            if(!reg.global) {
                string str = self.substring(offset, -1);
                result.append_str(str);
                break;
            }
        }
        /// no match ///
        else {
            string str = self.substring(offset, -1);
            result.append_str(str);
            break;
        }
    }

    return result.to_string();
}

string char*::sub_count(char* self, come_regex* reg, char* replace, int count)
{
    int offset = 0;

    int ovec_max = 16;
    int start[ovec_max];
    int end[ovec_max];
    int ovec_value[ovec_max * 3];

    const char* err;
    int erro_ofs;

    int options = reg.options;
    char* str = reg.str;

    pcre* re = reg.re;

    auto result = new buffer.initialize();
    
    int n = 0;

    while(true) {
        int options = PCRE_NEWLINE_LF;
        int len = strlen(self);
        int regex_result = pcre_exec(re, (pcre_extra*)0, self, len, offset, options, ovec_value, ovec_max*3);

        for(int i=0; i<ovec_max; i++) {
            start[i] = ovec_value[i*2];
        }
        for(int i=0; i<ovec_max; i++) {
            end[i] = ovec_value[i*2+1];
        }

        /// match and no group strings ///
        if(regex_result == 1)
        {
            n++;
            string str = self.substring(offset, start[0]);

            result.append_str(str);
            result.append_str(replace);

            if(offset == end[0]) {
                offset++;
            }
            else {
                offset = end[0];
            }

            if(!reg.global) {
                string str = self.substring(offset, -1);
                result.append_str(str);
                break;
            }
            if(n == count) {
                string str = self.substring(offset, -1);
                result.append_str(str);
                break;
            }
        }
        /// no match ///
        else {
            string str = self.substring(offset, -1);
            result.append_str(str);
            break;
        }
    }

    return result.to_string();
}


list<string>*% char*::split_str(char* self, char* str) 
{
    using unsafe;
    
    auto result = new list<string>.initialize();

    auto buf = new buffer.initialize();

    for(int i=0; i<self.length(); i++) {
        if(strstr(self + i, str) == self + i) {
            result.push_back(string(buf.buf));
            buf.reset();
            i += strlen(str)-1;
        }
        else {
            buf.append_char(self[i]);
        }
    }
    if(buf.length() != 0) {
        result.push_back(string(buf.buf));
    }

    return result;
}

list<string>*% char*::scan(char* self, come_regex* reg)
{
    auto result = new list<string>.initialize();
    
    int offset = 0;

    int ovec_max = 16;
    int start[ovec_max];
    int end[ovec_max];
    int ovec_value[ovec_max * 3];

    const char* err;
    int erro_ofs;

    int options = reg.options;
    char* str = reg.str;

    pcre* re = reg.re;
    

    while(true) {
        int options = PCRE_NEWLINE_LF;
        int len = strlen(self);
        int regex_result = pcre_exec(re, (pcre_extra*)0, self, len, offset, options, ovec_value, ovec_max*3);

        for(int i=0; i<ovec_max; i++) {
            start[i] = ovec_value[i*2];
        }
        for(int i=0; i<ovec_max; i++) {
            end[i] = ovec_value[i*2+1];
        }

        /// match and no group strings ///
        if(regex_result == 1)
        {
            auto str = self.substring(start[0], end[0]);

            result.push_back(str);

            if(offset == end[0]) {
                offset++;
            }
            else {
                offset = end[0];
            }
        }
        /// group strings ///
        else if(regex_result > 1) {
            auto str = self.substring(start[0], end[0]);
            result.push_back(str);

            if(offset == end[0]) {
                offset++;
            }
            else {
                offset = end[0];
            }

            for(int i= 1; i<regex_result; i++) {
                auto match_string = self.substring(start[i], end[i]);
                result.push_back(match_string);
            }
        }
        /// no match ///
        else
        {
            break;
        }
    }

    return result;
}

list<string>*% char*::split(char* self, come_regex* reg)
{
    const char* err;
    int erro_ofs;

    int options = reg.options;
    char* str = reg.str;

    pcre* re = reg.re;

    auto result = new list<string>.initialize();

    int offset = 0;

    int ovec_max = 16;
    int start[ovec_max];
    int end[ovec_max];
    int ovec_value[ovec_max * 3];

    while(true) {
        int options = PCRE_NEWLINE_LF;
        int len = strlen(self);

        int regex_result = pcre_exec(re, (pcre_extra*)0, self, len, offset, options, ovec_value, ovec_max*3);

        for(int i=0; i<ovec_max; i++) {
            start[i] = ovec_value[i*2];
        }
        for(int i=0; i<ovec_max; i++) {
            end[i] = ovec_value[i*2+1];
        }

        /// match and no group strings ///
        if(regex_result == 1)
        {
            string str = self.substring(offset, start[0]);
            result.push_back(str);

            if(offset == end[0]) {
                offset++;
            }
            else {
                offset = end[0];
            }
        }
        /// group strings ///
        else if(regex_result > 1) {
            string str = self.substring(offset, start[0]);
            result.push_back(str);

            if(offset == end[0]) {
                offset++;
            }
            else {
                offset = end[0];
            }

            for(int i=1; i<regex_result; i++) {
                string match_str = self.substring(start[i], end[i]);
                result.push_back(match_str);
            }
        }
        /// no match ///
        else
        {
            break;
        }
    }

    if(offset < self.length()) {
        string str = self.substring(offset, -1);
        result.push_back(str);
    }

    return result;
}

bool char*::match(char* self, come_regex* reg)
{
    int offset = 0;

    int ovec_max = 16;
    int start[ovec_max];
    int end[ovec_max];
    int ovec_value[ovec_max * 3];

    const char* err;
    int erro_ofs;

    int options = reg.options;
    char* str = reg.str;

    pcre* re = reg.re;

    while(true) {
        int options = PCRE_NEWLINE_LF;
        int len = strlen(self);

        int regex_result = pcre_exec(re, (pcre_extra*)0, self, len, offset, options, ovec_value, ovec_max*3);

        for(int i=0; i<ovec_max; i++) {
            start[i] = ovec_value[i*2];
        }
        for(int i=0; i<ovec_max; i++) {
            end[i] = ovec_value[i*2+1];
        }

        /// match and no group strings ///
        if(regex_result > 0)
        {
            return true;
        }
        /// no match ///
        else
        {
            return false;
        }
    }

    return false;
}

list<string>*% char*::split_maxsplit(char* self, come_regex* reg, int maxsplit)
{
    const char* err;
    int erro_ofs;

    int options = reg.options;
    char* str = reg.str;

    pcre* re = reg.re;

    auto result = new list<string>.initialize();

    int offset = 0;

    int ovec_max = 16;
    int start[ovec_max];
    int end[ovec_max];
    int ovec_value[ovec_max * 3];
    
    int n = 0;

    while(true) {
        int options = PCRE_NEWLINE_LF;
        int len = strlen(self);

        int regex_result = pcre_exec(re, (pcre_extra*)0, self, len, offset, options, ovec_value, ovec_max*3);

        for(int i=0; i<ovec_max; i++) {
            start[i] = ovec_value[i*2];
        }
        for(int i=0; i<ovec_max; i++) {
            end[i] = ovec_value[i*2+1];
        }

        /// match and no group strings ///
        if(regex_result == 1)
        {
            string str = self.substring(offset, start[0]);
            result.push_back(str);

            if(offset == end[0]) {
                offset++;
            }
            else {
                offset = end[0];
            }
        }
        /// group strings ///
        else if(regex_result > 1) {
            string str = self.substring(offset, start[0]);
            result.push_back(str);

            if(offset == end[0]) {
                offset++;
            }
            else {
                offset = end[0];
            }

            for(int i=1; i<regex_result; i++) {
                string match_str = self.substring(start[i], end[i]);
                result.push_back(match_str);
            }
        }
        /// no match ///
        else
        {
            break;
        }
        
        n++;
        
        if(maxsplit == n) {
            break;
        }
    }

    if(offset < self.length()) {
        string str = self.substring(offset, -1);
        result.push_back(str);
    }

    return result;
}

int char*::rindex_regex_count(char* self, come_regex* reg, int count, int default_value)
{
    const char* err;
    int erro_ofs;

    int options = reg.options;
    char* str = reg.str;

    pcre* re = reg.re;

    string self2 = self.reverse();
    
    int ovec_max = 16;
    int start[ovec_max];
    int end[ovec_max];
    int ovec_value[ovec_max * 3];

    int result = default_value;
    
    int offset = 0;
    
    int n = 0;

    while(true) {
        int options = PCRE_NEWLINE_LF;
        int len = strlen(self2);
        int regex_result = pcre_exec(re, (pcre_extra*)0, self2, len, offset, options, ovec_value, ovec_max*3);

        for(int i=0; i<ovec_max; i++) {
            start[i] = ovec_value[i*2];
        }
        for(int i=0; i<ovec_max; i++) {
            end[i] = ovec_value[i*2+1];
        }
        
        /// match and no group strings ///
        if(regex_result > 0)
        {
            n++;

            if(offset == end[0]) {
                offset++;
            }
            else {
                offset = end[0];
            }
            
            if(n == count) {
                result = strlen(self) - end[0];
                break;
            }
        }
        /// no match ///
        else 
        {
            break;
        }
    }

    return result;
}

bool char*::match_count(char* self, come_regex* reg, int count)
{
    int offset = 0;

    int ovec_max = 16;
    int start[ovec_max];
    int end[ovec_max];
    int ovec_value[ovec_max * 3];

    const char* err;
    int erro_ofs;

    int options = reg.options;
    char* str = reg.str;

    pcre* re = reg.re;
    
    int n = 0;

    while(true) {
        int options = PCRE_NEWLINE_LF;
        int len = strlen(self);

        int regex_result = pcre_exec(re, (pcre_extra*)0, self, len, offset, options, ovec_value, ovec_max*3);

        for(int i=0; i<ovec_max; i++) {
            start[i] = ovec_value[i*2];
        }
        for(int i=0; i<ovec_max; i++) {
            end[i] = ovec_value[i*2+1];
        }

        /// match and no group strings ///
        if(regex_result > 0)
        {
            n++;
            
            if(count == n) {
                return true;
            }

            if(offset == end[0]) {
                offset++;
            }
            else {
                offset = end[0];
            }
        }
        /// no match ///
        else
        {
            return false;
        }
    }

    return false;
}

string char*::sub_block(char* self, come_regex* reg, void* parent, string (*block)(void* parent, char* match_string, list<string>* group_strings))
{
    int offset = 0;

    int ovec_max = 16;
    int start[ovec_max];
    int end[ovec_max];
    int ovec_value[ovec_max * 3];

    const char* err;
    int erro_ofs;

    int options = reg.options;
    char* str = reg.str;

    pcre* re = reg.re;

    auto result = new buffer.initialize();

    while(true) {
        int options = PCRE_NEWLINE_LF;
        int len = strlen(self);
        int regex_result = pcre_exec(re, (pcre_extra*)0, self, len, offset, options, ovec_value, ovec_max*3);

        for(int i=0; i<ovec_max; i++) {
            start[i] = ovec_value[i*2];
        }
        for(int i=0; i<ovec_max; i++) {
            end[i] = ovec_value[i*2+1];
        }

        /// match and no group strings ///
        if(regex_result == 1) {
            string str = self.substring(offset, start[0]);

            result.append_str(str);
            
            list<string>*% group_strings = new list<string>.initialize();
            
            string match_string = self.substring(start[0], end[0]);
            
            group_strings.push_back(self.substring(start[0], end[0]));
            
            string block_result = block(parent, match_string, group_strings);
            
            if(((sDummyCurrentStack*)parent)->__method_block_result_kind__ != 0) {
                return result.to_string();
            }
            
            result.append_str(block_result);

            if(offset == end[0]) {
                offset++;
            }
            else {
                offset = end[0];
            }

            if(!reg.global) {
                string str = self.substring(offset, -1);
                result.append_str(str);
                break;
            }
        }
        /// group strings ///
        else if(regex_result > 1) {
            string str = self.substring(offset, start[0]);
            result.append_str(str);

            if(offset == end[0]) {
                offset++;
            }
            else {
                offset = end[0];
            }
            
            list<string>*% group_strings = new list<string>.initialize();

            for(int i = 1; i<regex_result; i++) {
                auto match_string = self.substring(start[i], end[i]);
                group_strings.push_back(match_string);
            }
            
            string match_string = self.substring(start[0], end[0]);
            
            string block_result = block(parent, match_string, group_strings);
            
            if(((sDummyCurrentStack*)parent)->__method_block_result_kind__ != 0) {
                return result.to_string();
            }
            result.append_str(block_result);

            if(!reg.global) {
                string str = self.substring(offset, -1);
                result.append_str(str);
                break;
            }
        }
        /// no match ///
        else {
            string str = self.substring(offset, -1);
            result.append_str(str);
            break;
        }
    }
    return result.to_string();
}

string char*::sub_block_count(char* self, come_regex* reg, int count, void* parent, string (*block)(void* parent, char* match_string, list<string>* group_strings))
{
    int offset = 0;

    int ovec_max = 16;
    int start[ovec_max];
    int end[ovec_max];
    int ovec_value[ovec_max * 3];

    const char* err;
    int erro_ofs;

    int options = reg.options;
    char* str = reg.str;

    pcre* re = reg.re;

    auto result = new buffer.initialize();
    
    int n = 0;

    while(true) {
        int options = PCRE_NEWLINE_LF;
        int len = strlen(self);
        int regex_result = pcre_exec(re, (pcre_extra*)0, self, len, offset, options, ovec_value, ovec_max*3);

        for(int i=0; i<ovec_max; i++) {
            start[i] = ovec_value[i*2];
        }
        for(int i=0; i<ovec_max; i++) {
            end[i] = ovec_value[i*2+1];
        }

        /// match and no group strings ///
        if(regex_result == 1) {
            n++;
            string str = self.substring(offset, start[0]);

            result.append_str(str);
            
            list<string>*% group_strings = new list<string>.initialize();
            
            group_strings.push_back(self.substring(start[0], end[0]));
            
            string match_string = self.substring(start[0], end[0]);
            
            string block_result = block(parent, match_string, group_strings);
            
            if(((sDummyCurrentStack*)parent)->__method_block_result_kind__ != 0) {
                return result.to_string();
            }
            
            result.append_str(block_result);

            if(offset == end[0]) {
                offset++;
            }
            else {
                offset = end[0];
            }

            if(!reg.global) {
                string str = self.substring(offset, -1);
                result.append_str(str);
                break;
            }
            
            if(n == count) {
                string str = self.substring(offset, -1);
                result.append_str(str);
                break;
            }
        }
        /// group strings ///
        else if(regex_result > 1) {
            n ++;
            
            string str = self.substring(offset, start[0]);
            result.append_str(str);

            if(offset == end[0]) {
                offset++;
            }
            else {
                offset = end[0];
            }
            
            list<string>*% group_strings = new list<string>.initialize();

            for(int i = 1; i<regex_result; i++) {
                auto match_string = self.substring(start[i], end[i]);
                group_strings.push_back(match_string);
            }
            
            string match_string = self.substring(start[0], end[0]);
            
            string block_result = block(parent, match_string, group_strings);
            
            if(((sDummyCurrentStack*)parent)->__method_block_result_kind__ != 0) {
                return result.to_string();
            }
            result.append_str(block_result);

            if(!reg.global) {
                string str = self.substring(offset, -1);
                result.append_str(str);
                break;
            }
            
            if(n == count) {
                string str = self.substring(offset, -1);
                result.append_str(str);
                break;
            }
        }
        /// no match ///
        else {
            string str = self.substring(offset, -1);
            result.append_str(str);
            break;
        }
    }

    return result.to_string();
}

unsigned int wchar_t*::get_hash_key(wchar_t* value)
{
    using unsafe;
    
    int result = 0;
    wchar_t* p = value;
    while(*p) {
        result += (*p);
        p++;
    }
    return result;
}


bool wchar_t*::equals(wchar_t* left, wchar_t* right)
{
    return wcscmp(left, right) == 0;
}

bool wstring::equals(wchar_t* left, wchar_t* right)
{
    return wcscmp(left, right) == 0;
}

unsigned int come_regex*::get_hash_key(come_regex* self)
{
    return self.str.get_hash_key();
}

bool wchar_t::operator_equals(wchar_t left, wchar_t right)
{
    return left == right;
}

bool wchar_t::operator_not_equals(wchar_t left, wchar_t right)
{
    return left != right;
}

unsigned int wchar_t::get_hash_key(wchar_t value)
{
    return value;
}

bool wchar_t::equals(wchar_t left, wchar_t right)
{
    return left == right;
}

string wchar_t::to_string(wchar_t wc)
{
    return xsprintf("%ls", wc);
}

string string::chomp(char* str)
{
    string result = string(str);
    
    if(result[result.length()-1] == '\n') {
        return result.substring(0, -2);
    }
    
    return result;
}

