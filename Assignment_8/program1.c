#include<stdio.h>

double CircleArea(float Radius)
{
    double dArea = 0.0;
    float PI = 3.14;    
    
    dArea = PI * Radius * Radius;

    return dArea;
}

int main()
{
    float fValue = 0;
    double dRet = 0;

    printf("Enter radius : ");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area of Ciecle is %.4f",dRet);

    return 0;

}