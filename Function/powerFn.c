#include<stdio.h>

int power(int x,int y)
{
    int p=1;
    printf("Enter the number : ");
    scanf("%d",&x);
    printf("Enter the power=");
    scanf("%d", &y);
    for(int i=1;i<y;i++)
    p*=x;
    return p;
}

void main()
{
    int a,b,s;
    s = power(a,b);

    printf("The result is %d",s); 
}
