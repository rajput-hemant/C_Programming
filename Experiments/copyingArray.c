#include<stdio.h>
 
int main()
{
    int i,n,a[100],b[100];
    printf("Enter the length of the array=");
    scanf("%d", &n);
    printf("Enter the elements in the Array=");
    for(i=0;i<n;i++)
        scanf("%d", &a[i]);
    for(i=0;i<n;i++)
        b[i]=a[i];
    printf("The copied array is=\n[");
    for(i=0;i<n;i++)
        printf(" %d,", b[i]);
    printf("\b ]");
    return 0;
}