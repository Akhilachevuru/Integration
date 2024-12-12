#include<stdio.h>
#include<string.h>

void rotate(char *num,int p)
{
	int len=strlen(num);
	p=p%len;
	if(p==0)
		return;
	char temp[len+1];
	for(int i=0;i<len;i++)
	{
		temp[(i+p)%len]=num[i];
	}
	temp[len]='\0';
	printf("original number:%s\n",num);
	strcpy(num, temp);
	printf("rotated number:%s\n",num);
}
int main()
{
	int p=0;
	char num[]="12345";
	//printf("Enter a number\n");
	//scanf(" %s",num);
	printf("Enter No of times you want to rotate:");
	scanf("%d",&p);
	rotate(num,p);
	return 0;
}

