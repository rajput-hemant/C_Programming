#include<stdio.h>

int maxFn(int a, int b)
{
    return((a>b)?a:b);
}

int minFn(int a, int b)
{
    return((a>b)?b:a);
}

int main()
{
    int m,n,min,max;
    printf("Enter the number=");
    scanf("%d %d",&m,&n);
    min=minFn(m,n);
    max=maxFn(m,n);
    printf("The max number is=%d\nThe min number is=%d", max,min);
    return 0;
}