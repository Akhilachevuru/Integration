#include<stdio.h>

int main()
{
    int num;
    printf("Enter a num:");
    scanf("%d",&num);
    if(0x1&num)
        printf("Odd");
    else
        printf("Even");
    return 0;
}
