#include<stdio.h>

int main()
{
    int a[100],even[50],odd[50],e=0,o=0,i,n;
    printf("Enter the length of the Array=");
    scanf("%d", &n);
    printf("Enter the element in the array=");
    for(i=0;i<n;i++)
        scanf("%d", &a[i]);
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            even[e]=a[i];
            e++;
        }
        else 
        {
            odd[o]=a[i];
            o++;
        }
    }
    printf("Unfiltered Array= [");
    for(i=0;i<n;i++)
        printf(" %d,", a[i]);
    printf("\b ]");
    printf("\nFiltered Array with even elements= [");
    for(i=0;i<e;i++)
        printf(" %d,", even[i]);
    printf("\b ]");
    printf("\nFiltered Array with odd elements= [");
    for(i=0;i<o;i++)
        printf(" %d,", odd[i]);
    printf("\b ]");    
    return 0;
}