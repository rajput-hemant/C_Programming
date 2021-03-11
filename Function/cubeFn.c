#include<stdio.h>

int cube(int a)
{
    return (a*a*a);
}
int main()
{
    int n,out;
    printf("Enter the number=");
    scanf("%d", &n);
    out=cube(n);
    printf("The cube of %d is=%d\n", n,out);
    return 0;
}