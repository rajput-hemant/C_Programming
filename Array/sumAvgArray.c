#include<stdio.h>

int main()
{
	int n,i,sum=0,a[100];
	float avg;
	printf("Enter the Length of the Array=");
	scanf("%d", &n);
	printf("Enter the elements in the Array=");
	for(int i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
		sum+=a[i];
	}
	printf("The sum of the elements in the Array is=%d\n", sum);
	avg=sum/n;
	printf("The average of the elements in the Array is=%f", avg);
	return 0;
}
