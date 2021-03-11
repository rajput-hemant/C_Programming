#include<stdio.h>

int main()
{
	int n;
	int a[100];
	printf("Enter the size of the Array=");
	scanf("%d", &n);
	printf("Enter the values in the Array=");
	for(int i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
		printf("\n");
	}
	for(int j=0;j<n;j++)
	{
		for(int k=j+1;k<n;k++)
		{
			if(a[j]==a[k])
			{
			printf("The duplicate elements in Array are= %d\n", a[k]);
		    }
		}
	}
	return 0;
}
