#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int bool;

bool ChkZero(int iNo)
{

    bool HasZero = FALSE;
    int iDigit = 0;

    while(iNo != 0)
    {
        if((iNo % 10) == 0)
        {
            HasZero = TRUE;
        }
       
        iNo = iNo / 10;
    }
    return HasZero;

}

int main()
{
    int iValue = 0;
    bool bRet = FALSE;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    bRet = ChkZero(iValue);

    if(bRet == TRUE)
    {
        printf("Number contains zero");
    }
    else
    {
        printf("There is no zero");
    }

    return 0;
}