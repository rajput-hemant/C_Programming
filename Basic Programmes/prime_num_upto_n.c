#include<stdio.h>

int main()
{
	int n,flag;
	printf("Enter the value of N=");
	scanf("%d", &n);
	
	for(int i=2;i<=n;i++)
	{
		flag=0;
		
		for(int j=2;j<i;j++)
		{
			if(i%j==0)
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			printf("%d\n", i);
		}
	}
	return 0;
}
