#include<stdio.h>

int main()
    {
        int i,j,rec[10][3],stats;
        printf("Enter the Roll no and marks in quiz out of 100=");
        for(i=0;i<5;i++)
        {
            for(j=0;j<3;j++)
                scanf("%d",&rec[i][j]);
        }    
        for(i=0;i<5;i++)
        {
            stats=0;
            for(j=0;j<3;j++)
            printf("%d\n", rec[i][j]);
        }
        return 0;
    }