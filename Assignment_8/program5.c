#include<stdio.h>

double SquareMeter(int iNo)
{
    double iMeter = iNo * 0.0929;
    
    return iMeter;
}

int main()
{
    int iValue = 0;
    double iRet = 0.0;

    printf("Enter area in square feet : ");
    scanf("%d",&iValue);

    iRet = SquareMeter(iValue);

    printf("The are in square meter is %f",iRet);

    return 0;

}