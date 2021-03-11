#include<stdio.h>
int main(){
	int n,i,max=0,a[100];
	printf("Enter the length of the Array=");
	scanf("%d", &n);
	printf("Enter the elements in the Array=");
	for(i=0;i<n;i++)
	scanf("%d", &a[i]);
	for(i=0;i<n;i++){
		if(a[i]>max)
		max=a[i];
	}
	printf("The largest element in the Array is=%d", max);
	return 0;
}
