#include<stdio.h>

int main()
{
int x=0x1;
if((char)x & 1)
{
    printf("Little Endian\n");

}
else
printf("Big Endian");
    return 0;
}
