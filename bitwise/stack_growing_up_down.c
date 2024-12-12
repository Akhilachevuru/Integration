#include<stdio.h>

int main()
{
int p1,p2;
printf("%p\t%p",&p1,&p2);
if((&p2-&p1))
{
    printf("stack is growing downwards ");
}
else
printf("stack is growing up");
    return 0;
}
