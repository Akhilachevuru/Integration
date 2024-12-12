#include<stdio.h>

int main()
{
    int ar=15;
    if((char)ar & 1)
    {
        printf("Little Endian\n");
        printf("ar-%d\n",ar);
        printf("ar-%x\n",(char)ar);
    }
    else
        printf("Big ENDIAN");
    return 0;
}
