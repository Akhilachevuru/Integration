#include<stdio.h>
#include<string.h>
void rev(char s[],int s, int e);
void rev_letter(char s[],int s,int e);
int main()
{
    int i;
    printf("Enter the size :");
    scanf("%d",i);
    char s[i];
    printf("enter the string\n");
    scanf(" %[^\n]s",s);
    rev_letter(s,0,strlen(s)-1);
    return 0;
}

void rev_letter(char s[],int s,int e)
{
    int i,j;
    for(i=j=s;j<=e;j++)
    {
        if(s[j]==' ')
            continue;
        i=j;
        while
    }
}
