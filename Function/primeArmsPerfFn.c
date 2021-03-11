#include<stdio.h>

int pri(int a)
{
    int count=0;
    for(int i=2;i<a;i++)
    {
        if(a%i==0)
        {
        count++;
        break;
        }
    }
    if(count==1)
    return printf("It's Not Prime");
    else
    return printf("It's Prime");
}

int arms(int b)
{
    int org,tmp1=0,tmp2=0;
    org=b;
    while(b!=0)
    {
        tmp1=b%10;
        tmp1=tmp1*tmp1*tmp1;
        tmp2=tmp2+tmp1;
        b=b/10;
    }
    if(org==tmp2)
    return printf("It's Armstrong");
    else
    return printf("It's not Armstrong");
}

int per(int c)
{
    int tmp=0;
    for(int i=1;i<c;i++)
    {
        if(c%i==0)
        tmp=tmp+i;
    }
    if(tmp==c)
    return printf("It's Perfect Number");
    else
    return printf("It's not Perfect Number");
}

int main()
{
    int n;
    printf("Enter the number=");
    scanf("%d", &n);
    pri(n);
    printf("\n");
    arms(n);
    printf("\n");
    per(n);
    return 0;
}