#include<stdio.h>

int main()
{
    int a[100],pos[50],neg[50],p=0,n=0,l,i;
    printf("Enter the length of the Array=");
    scanf("%d", &l);
    printf("Enter the elements=");
    for(i=0;i<l;i++)
        scanf("%d", &a[i]);
    for(i=0;i<l;i++)
    {
        if(a[i]>=0)
        {
            pos[p]=a[i];
            p++;
        }
        else if(a[i]<0)
        {
            neg[n]=a[i];
            n++;
        }
    }
    printf("The updated array with positive numbers is= [");
    for(i=0;i<p;i++)
        printf(" %d,", pos[i]);
    printf("\b ]");
    printf("The updated array with negative numbers is= [");
    for(i=0;i<n;i++)
        printf(" %d,", neg[i]);
    printf("\b ]");
    return 0;
}