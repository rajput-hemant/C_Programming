#include<stdio.h>

int main()
{
	 float r,area,circum;
     printf("Enter the Radius of the Circle=");
     scanf("%f", &r);
     area=3.14*r*r;
     circum=2*3.14*r;
     printf("The Circumference of the Circle is=%f \n", circum);
     printf("The Area of the gien Circle is=%f", area);
     return 0;
}
