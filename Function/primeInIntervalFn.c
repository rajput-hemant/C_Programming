#include<stdio.h>

int prime(int m, int n)
{
    int flag;
    for(int i=m;i<=n;i++)
    {
        flag=0;
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            {
                flag=1;
                break;
            }

        }
        if(flag==0)
        printf("\n%d",i);
    }
}

int main()
{
    int m,n;
    printf("Enter the Interval=");
    scanf("%d %d", &m,&n);
    prime(m,n);
    return 0;
}