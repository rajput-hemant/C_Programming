#include<stdio.h>
int main(){
	int n,i,min,a[100];
	printf("Enter the length of the Array=");
	scanf("%d", &n);
	printf("Enter the elements in the Array=");
	for(i=0;i<n;i++)
	scanf("%d", &a[i]);
	for(i=0;i<n;i++){
		if(a[i]<min)
		min=a[i];
	}
	printf("The smallest element in the Array is=%d", min);
	return 0;
}
