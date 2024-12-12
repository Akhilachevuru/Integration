#include<stdio.h>
int main()
{
	int str[10];
	printf("Enter the string\n");
	scanf("%[^\n]s",str);
	int n=sizeof(str)/sizeof(str[0]);
	int x=0;
	for(int i=0;i<n;i++)
	{
		int j=0;
		while(j<i)
		{
			if(str[j]==str[i])
				break;
			j++;
		}
		if(j==i)
			str[x++]=str[i];
	}
	printf("%s\n",str);
	
	return 0;
}
