#include<stdio.h>
#include<math.h>
int main()
{
	 float a,b,hypo,temp;
     printf("Enter the base of the triangle=");
     scanf("%f", &a);
     printf("Enter the perpendicular of the triangle=");
     scanf("%f", &b);
     temp=(a*a)+(b*b);
     hypo=pow(temp,0.5);
     printf("The hypotenuse of the given triangle is=%f", hypo);
     return 0;
}
