#include<stdio.h>

int main()
{
int n;
scanf("%d",&n);
if(!(n & 0x1<<31 ))
    printf("Postive");
else
    printf("Negative");
    return 0;
}
