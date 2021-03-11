#include<stdio.h>

void arms(int x, int y)
{
    int tmp1=0,tmp2=0;
    printf("Enter the Interval=");
    scanf("%d %d", &x,&y);
    for(int i=x;i<=y;i++)
    {
        while(i!=0)
        {
            tmp1=i%10;
            tmp1=tmp1*tmp1*tmp1;
            tmp2=tmp2+tmp1;
            i=i/10;
            printf("%d %d %d",i,tmp2,tmp1);
        }
        if(i==tmp2)
        printf("%d\n", &i);
    }
}

int main()
{
    int a,b;
    arms(a,b);
    //printf("%d", out);
    return 0;
}