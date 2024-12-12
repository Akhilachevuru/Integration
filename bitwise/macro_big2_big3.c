#include<stdio.h>
#define BIG2(a,b) a>b ?  a : b 
#define BIG3(a,b,c) (a>b)? ((a>c)?a:c) : b>c ?b:c

int main()
{
    int a,b,c;
    printf("Enter Three integers:");
    scanf("%d%d%d",&a,&b,&c);
    printf("%d is big \n",BIG2(a,b));
    printf("%d is big ",BIG3(a,b,c));
    return 0;
}
