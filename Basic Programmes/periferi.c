#include<stdio.h>

int main()
{
	 int a,b,peri;
     printf("Enter the Length=");
     scanf("%d", &a);
     printf("Enter the Breadth=");
     scanf("%d", &b);
     peri=2*(a+b);
     printf("The Perimeter of the rectangle is=%d", peri);
     return 0;
}
