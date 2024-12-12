#include<stdio.h>

int main()
{
    int num;
    scanf("%d",&num);
    if(num&0x1<<31)
        printf("Negative");
    else
        printf("Positive");
    return 0;
}
