#include<stdio.h>
int main()
{
int num,c=0,c1=0;
scanf("%d",&num);
for(int i=7;i>=0;i--)
{
    if(num&0x1<<i)
    {
        c++;
        printf("index-%d\n",i);
    }
    else
        c1++;
}
printf("set bits-%d\n",c);
printf("clearbits-%d",c1);
    return 0;
}
