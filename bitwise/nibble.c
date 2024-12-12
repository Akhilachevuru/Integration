#include<stdio.h>

int main()
{
    int n;
    printf("Enter num 0x");
    scanf("%x",&n);
    n =((n & 0xF0)>>4)|((n & 0x0F)<<4);
    printf("0x%x\n",n);
    return 0;
}
