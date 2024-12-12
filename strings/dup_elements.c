#include<stdio.h>
void rem_duplicate(int a[],int len)
{
    int i,j,t=0,l=0,a1[len];
    printf("len : %d\n",len);
    for(i=0;i<len;i++)
    {
        for(j=0;j<l;j++)
        {
            if(a[i]==a[j])
                break;
        }
        if(j==l)
        {
           a1[l]=a[i];
            l++;
        }
    }
    printf("l : %d\n",l);
    for(int i=0;i<l;i++)
    {
        printf("%d ",a1[i]);
    }
    printf("\n");
}
int main()
{
    int i;
    printf("Enter the size :");
    scanf("%d",&i);
    int a[i];
    printf("Enter the elements\n");
    for(int j=0;j<i;j++)
    {
        scanf("%d",&a[j]);    
    }
    rem_duplicate(a,i);
    return 0;
}
