#include<stdio.h>
#include<math.h>

int main()
{
	 int a,b;
	 float power;
     printf("Enter the First Number=");
     scanf("%d", &a);
     printf("Enter the Second Number=");
     scanf("%d", &b);
     power=pow(a,b);
     printf("%f", power);
	 return 0;
}
