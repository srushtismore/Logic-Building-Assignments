#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int bool;

bool CheckEven(int iNo)
{
    if(iNo % 2 == 0)
    {
        return TRUE;
    }
    else 
    {
        return FALSE;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = FALSE;

    printf("Enter Number ");
    scanf("%d",&iValue);

    bRet = CheckEven(iValue);

    if(bRet == TRUE)
    {
        printf("Number is Even");
    }
    else
    {
        printf("Number is odd");
    }
}
