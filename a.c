#include <comelang2.h>

/*
int fun(int argc)
{
    list<string>*% l = [s"AAA", s"BBB"];
    
    int aaa = 123;
    int bbb = 243;
    int ccc = 333;
    
    l.each {
        puts("AAA");
    }
    
    return 0;
}

int gArray[3][2] = { 1, 2, 3, 4,5,6 };

void fun2()
{
    printf("%p\n", &gArray[0][0]);
    printf("%p\n", &gArray[1][0]);
    printf("%p\n", &gArray[2][2]);
    
    printf("%d\n", (&gArray[2][2])!{&gArray[0][0], &gArray[2][2]});
}
*/

exception string fun(int a, int b)
{
    return xsprintf("%d", a + b);
}

int main(int argc, char** argv) 
{
    printf("%s\n", fun(1, 2));
    
    return 0;
}
