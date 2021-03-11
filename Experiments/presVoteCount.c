#include<stdio.h>

int main()
{
    int HILLARY[50],TRUMP[50],h=0,t=0,i;
    printf("Enter the votes from each states for HILLARY=");
    for(i=0;i<50;i++)
        scanf("%d", &HILLARY[i]);
    printf("Enter the votes from each states for TRUMP=");
    for(i=0;i<50;i++)
        scanf("%d", &TRUMP[i]);
    for(i=0;i<50;i++)
        h+=HILLARY[i];
    for(i=0;i<50;i++)
        t+=TRUMP[i];
    if(h>t)
    printf("Hillary won the presidential election with %d total votes and %d more votes than Trump", h,h-t);
    else
    printf("Trump won the presidential election with %d total votes and %d more votes than Hillary", t,t-h);
    return 0;
}