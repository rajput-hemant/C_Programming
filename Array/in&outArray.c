#include<stdio.h>
int n;
int a[100];
int scanarray()
{
	printf("Enter the lenth of the Array=");
	scanf("%d", &n);
	printf("Enter the elements in the Array=");
	for(int i=0;i<n;i++)
	scanf("%d", &a[i]);
	return 0;
}

int printarray()
{
	for(int i=0;i<n;i++)
	printf("%d\n", a[i]);
	return 0;
}

int main()
{
	scanarray();
	printarray();
	return 0;
}
