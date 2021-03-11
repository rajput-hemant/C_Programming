#include<stdio.h>
int main() {
        int a[50][50],row[10],col[10],i,j,n,r,c;
        printf("Enter the length of the row=");
        scanf("%d", &r);
        printf("Enter the length of the columb=");
        scanf("%d", &c);
        printf("Enter the elements in the Array=");
        for(i=0;i<r;i++){
            for(j=0;j<c;j++)
                scanf("%d",&a[i][j]);
        }
        for(i=0;i<10;i++){
            row[i]=0;
            col[i]=0;
        }
        for(i=0;i<r;i++){
            for(j=0;j<c;j++)
            {
                row[i]+=a[i][j];
            }
        }
        for(i=0;i<c;i++){
            for(j=0;j<r;j++)
            {
                col[i]+=a[j][i];
            }
        }
        printf("The row-wise sum is=");
        for(i=0;i<r;i++)
            printf("%d, ", row[i]);
        printf("\b\b \nThe columb-wise sum is=");
        for(i=0;i<c;i++)
            printf("%d, ", col[i]);
        printf("\b\b ");
        return 0;
        }