#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

#ifdef __DARWIN_ARM__
#include <malloc/malloc.h>
#else
#include <malloc.h>
#endif

int main(int argc, char** argv)
{
    int c; 
    int* a = &c;
    
    size_t b = malloc_usable_size(a);
    
    printf("%ld\n", b);
    
    return 0;
}

