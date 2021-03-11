#include<stdio.h>
int main()
{
	int n,i,s,pos,flag=0,a[100];
	printf("Enter the length of the Array=");
	scanf("%d", &n);
	printf("Enter the elements=");
	for(i=0;i<n;i++)
	scanf("%d", &a[i]);
	printf("Enter the element for Search=");
	scanf("%d",&s);
	for(i=0;i<n;i++)
	{
		if(a[i]==s)
		{
			pos=i;
			flag=1;
		}
	}
	if(flag==1)
	printf("The element found at the position=%d\n", pos+1);
	else
	printf("Not Found");
	return 0;
}
