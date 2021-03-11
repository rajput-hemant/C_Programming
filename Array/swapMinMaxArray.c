#include<stdio.h>
int main(){
	int n,i,temp,max=0,min=0,pos1=0,pos2=0,a[100];
	printf("Enter the length of the Array=");
	scanf("%d", &n);
	printf("Enter the elements in the Array=");
	for(i=0;i<n;i++)
	scanf("%d", &a[i]);
	for(i=0;i<n;i++){
		if(a[i]>max){
		max=a[i];
		pos1=i;
		}
		else if(a[i]<min){
		min=a[i];
		pos2=i;
		}
	}
	temp=a[pos1];
	a[pos1]=a[pos2];
	a[pos2]=temp;
	printf("The updated Array is=[");
	for(i=0;i<n;i++)
	printf("%d, ", a[i]);
	printf("\b\b]");
	return 0;
}
