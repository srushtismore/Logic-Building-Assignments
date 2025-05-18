#include<stdio.h>

int CountRange(int iNo)
{
    int iMul = 0;
    int iDigit = 0;


    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if((iDigit > 3) && (iDigit < 7))
        {
            iMul = iMul * iDigit ; 
        }
        iNo = iNo/10;
    }
    return iMul;
}

int main()
{
    int iValue =  0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = CountRange(iValue);

    printf("%d",iRet);
}