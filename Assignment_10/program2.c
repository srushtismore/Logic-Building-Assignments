#include<stdio.h>

int CountOdd(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    int iFreq = 0;
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit % 2 != 0)
        {
            iFreq++; 
        }
        iNo = iNo/10;
    }
    return iFreq;
}

int main()
{
    int iValue =  0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = CountOdd(iValue);

    printf("%d",iRet);
}