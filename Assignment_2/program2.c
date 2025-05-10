#include<stdio.h>

#define ERR_INVALID_INPUT -1

int Display(int  iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        return ERR_INVALID_INPUT;
    }

    iCnt = 0;

    while(iNo > iCnt)
    {
        printf("*");

        iCnt++;
    }

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number ");
    scanf("%d",&iValue);

    iRet = Display(iValue);

    if(iRet == ERR_INVALID_INPUT)
    {
        printf("Invalid Input");
    }

    return 0;
}