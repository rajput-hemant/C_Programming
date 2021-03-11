#include<stdio.h>

int dia(int x)
{
    return(2*x);
}

float circum(float y)
{
    return(2*3.14*y);
}

float area(float z)
{
    return(3.14*z*z);
}

int main()
{
    int r;
    float di,cir,ar;
    printf("Enter the radius=");
    scanf("%d", &r);
    di=dia(r);
    cir=circum(r);
    ar=area(r);
    printf("The Diameter is=%f\n", di);
    printf("The Circumference is=%f\n", cir);
    printf("The Area is=%f\n", ar);
    return 0;
}
