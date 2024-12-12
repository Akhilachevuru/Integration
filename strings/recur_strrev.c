#include<stdio.h>
#include<string.h>
void mystrrev(char *str,int start,int end)
{
    
    if(start>=end)
    return ;
    char temp=str[start];
    str[start]=str[end];
    str[end]=temp;
    mystrrev(str,start+1,end-1);
    
    
}

int main()
{
    char str[10]="hello";
    int len =strlen(str);
    printf("%d\n",len);
    int start=0,end =len;
    printf("str : %s\n",str);
    mystrrev(str,start,end-1);
    printf("rev : %s\n",str);
    return 0;
}
