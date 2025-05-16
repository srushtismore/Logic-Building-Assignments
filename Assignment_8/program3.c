#include<stdio.h>

double KMToMeter(int iNo)
{
    int iMeter = iNo * 1000;
    
    return iMeter;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter distance : ");
    scanf("%d",&iValue);

    iRet = KMToMeter(iValue);

    printf("The Distance in meter is %d",iRet);

    return 0;

}