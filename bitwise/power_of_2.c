#include<stdio.h>


int main()
{
    int num,c=0;
    printf("Enter  a integer:");
    scanf("%d",&num);
/*    for(int i=7;i>=0;i--)
    {
        if((0x1<<i) & num)
        {
            printf("i-%d\t",i);
            printf("1 ");
            c++;
        }
            else
            printf("0 ");
    }
    if(c==1)
    {
        printf("%d is a power of 2\n",num);
    }
    else
    printf("%d is not a power of 2",num);
  */

    if(num & (num-1)==0)
        printf("not a power of 2");
      else
          printf("power of 2");
    return 0;
}
