#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int main() {
    char str[100];
    printf("Enter the string:\n");
    scanf("%[^\n]s",str);
    int i=0;
    while(str[i])
    {
        if(str[0]>='a' && str[0]<='z')
            str[0]=str[0]-32;
            
        if(str[i]==' '&&str[i]>='a' &&str[i]<='z')
        {
            i++;
            str[i]=str[i]-32;
        }
        i++;
    }
    printf("%s\n",str);
    return 0;
    
}
