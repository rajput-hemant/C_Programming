#include<stdio.h>
int main()
{
	int n,i,max1=0,max2=0,min1,min2,a[100];
	printf("Enter the length of the Array=");
	scanf("%d", &n);
	printf("Enter the Elements=");
	for(i=0;i<n;i++)
	scanf("%d", &a[i]);
	for(i=0;i<n;i++)
	{
		if(a[i]>max1)
		{
			max2=max1;
			max1=a[i];
		}
		else if(a[i]<min1)
		{
			min2=min1;
			min1=a[i];
		}
	}
	printf("The second largest element of the Array is=%d\n", max2);
	printf("The second smallest element of the Array is=%d\n", min2);
	return 0;
}
