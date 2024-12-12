#include<stdio.h>
//#define SIZEOF(x) (char*)(&x+1)-(char*)(&x)
#define SIZEOF(x) (unsigned int)(&x + 1) - (unsigned int)(&x)
int main()

{
    int a;
    char b;
    double d;
    printf("int-%ld\n",SIZEOF(a));
    printf("char-%ld\n",SIZEOF(b));
    printf("double-%ld\n",SIZEOF(d));

    return 0;
}
