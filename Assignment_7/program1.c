#include <stdio.h>

void Display(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    int iCnt = 0;
    
    for(iCnt = (iNo * 2); iCnt >= 1; iCnt--)
    {
        if(iCnt > iNo)
        {
            printf("* ");
        }
        else
        {
            printf("# ");
        }
    }

}

int main()
{
    int iValue = 0;

    printf("Enter Number: ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}