#include<stdio.h>
int main(){
	int n,i,even=0,odd=0,a[100],e[100],o[100];
	printf("Enter the length of the Array=");
	scanf("%d", &n);
	printf("Enter the elements in the Array=");
	for(i=0;i<n;i++)
	scanf("%d", &a[i]);
	for(i=0;i<n;i++)
	{
		if((a[i]%2)==0)
		{
			e[even]=a[i];
			even++;
		}
		else
		{
			o[odd]=a[i];
			odd++;
		}
	}
	printf("The filtered array with even elements is=[ ");
	for(i=0;i<even;i++)
	printf("%d, ", e[i]);
	printf("\b\b ]");
	printf("\nThe filtered array with odd elements is=[ ");
	for(i=0;i<odd;i++)
	printf("%d, ", o[i]);
	printf("\b\b ]");
	return 0;}
