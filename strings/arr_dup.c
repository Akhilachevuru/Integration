#include<stdio.h>
int main()
{
	int arr[10],i;
	printf("Enter the array elements\n");
	for(i=0;i<6;i++)
	{
	//	printf("i");
		scanf(" %d",&arr[i]);
	}
	printf("%d",sizeof(arr));
	for(int i=0;i<10;i++)
	{
		for(int j=i+1;j<10;j++)
		{
			if(arr[j]==arr[i])
			{
				for(int k=j;k<10;k++)
				{
					arr[k]=arr[j+1];
				}	
			}
			j--;
		}
	}
	for(int i=0;i<10;i++)
		printf("%d",arr[i]);
	return 0;
}
