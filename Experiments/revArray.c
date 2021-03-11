#include<stdio.h>

int main()
{
    int i,a[10];
    printf("Enter the elements in the array=");
    for(i=0;i<10;i++)
        scanf("%d", &a[i]);
    printf("The array in reverse order is=\n[");
    for(i=9;i>=0;i--)
        printf(" %d,", a[i]);
    printf("\b ]");
    return 0;
}