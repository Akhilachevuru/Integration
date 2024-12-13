#include<stdio.h>
#include<stdlib.h>

int main()
{
	char str[]="Jayanth Karthik";
	int len=0,i,j;
	len=sizeof(str)/sizeof(str[0]);
	for(i=0;i<len;i++)
	{
		if(str[i]==' ')
		{
			for(j=i;j<len;j++)
			{
				str[j]=str[j+1];
			}
			len--;
		}
	}
	printf("After removing white spaces %s",str);
	return 0;
}
