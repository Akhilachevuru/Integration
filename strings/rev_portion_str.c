#include<stdio.h>
#include<string.h>
void revstr(char *str);
void rev(char *str, int s, int e );
int main()
{
    int i;
    printf("Enter the size :");
    scanf("%d",&i);
    char str[i];
    printf("Enter the string\n");
    scanf(" %[^\n]",str);
    revstr(str);
    puts(str);
    int s,e;
    printf("Enter the start and end position :\n");
    scanf("%d %d",&s,&e);
    rev(str,s,e);
    puts(str);
    return 0;
}

void revstr(char *str)
{
    int i,j;
    char t;
    for(i=0, j=strlen(str)-1; i<=j; i++, j--)
    {
        t=str[i];
        str[i]=str[j];
        str[j]=t;
    }
}
	
void rev(char *str, int s, int e)
{
    char t;
    while(s<=e)
    {
        t=str[s];
        str[s]=str[e];
        str[e]=t;
        s++;
        e--;
    }
}
