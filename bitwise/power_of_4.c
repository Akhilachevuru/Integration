#include<stdio.h>

int main()
{
    int num;
    printf("Enter a  number:");
    scanf("%d",&num);
/*    if((num > 0) && (num & (num-1) )==0 && (num & 0xAAAAAAAA) ==0 )
    printf("Number is a power of 4-%d\n",num);
    else
        printf("Number is not a power of 4-%d",num);
  */
        int c;
        if(( num > 0) && ( num & (num-1)) == 0 )
        {
            c=0;
            while((num & 1)==0)
            {
                c++;
                printf("0 \n");
                num=num>>1;
            }

        if((c % 2) !=0)
            printf("not power of 4");
        else
            printf(" power of 4");
        }
        else
            printf("Not a power of 4");
    return 0;
}
