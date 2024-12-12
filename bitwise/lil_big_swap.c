#include<stdio.h>

int main()
{
    int n=0x1234;
    n = ( (n&0x00ff)<<8 )| ( (n&0xff00)>>8);
    printf("0x%x\n",n);
    return 0;
}
