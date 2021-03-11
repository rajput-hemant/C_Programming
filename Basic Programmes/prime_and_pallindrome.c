#include<stdio.h>

int main()
{
	int n,rev=0;
	printf("Enter the value of N=");
	scanf("%d, &n");
	for(int i=2;i<=n;i++)
	{
		int flag=0;
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
			printf("%d", i);
			//rev=i%10;
			//rev=rev+rev*10;
			//rev/10;
		    //if(i==rev)
			//printf("The next Pallindrome no. from the prime no. %d is=%d\n",i,i);
		}
	}
	return 0;
}
