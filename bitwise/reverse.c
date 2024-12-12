#include<stdio.h>

int main()
{
    int n,i,j,t;
    scanf("%d",&n);
    for(i=0,j=31;i<j;i++,j--)
    {
        if(!(n&(1<<i)) != !(n&(1<<j)))
        i=i^j;
        j=i^j;
        i=i^j;
    }
    for(int i=0;i<32;i++)
    {
        printf("%x ",n);
    }
    return 0;
}
