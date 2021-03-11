#include<stdio.h>

int evenOdd(int a)
{
    if(a%2==0)
    return printf("Even");
    else
    return printf("Odd");
}

int main()
{
    int n,out;
    printf("Enter the number=");
    scanf("%d", &n);
    out=evenOdd(n);
    return 0;
}