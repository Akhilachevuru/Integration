#include<stdio.h>

int main()
{
    int x;
    scanf("%d",&x);
  //  for(int i=31;i>=0;i--)
   // {
     if(!( x&0x1<<31))
         printf("positive");
     else
         printf("negative");
   // }



    return 0;
}
