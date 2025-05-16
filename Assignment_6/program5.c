#include <stdio.h>

void Table(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    int iCnt = 0;
    int iSum = 0;
    
    for(iCnt = 10; iCnt >= 1; iCnt--)
    {
        printf("%d ", iCnt * iNo);
    }

}

int main()
{
    int iValue = 0;

    printf("Enter Number: ");
    scanf("%d",&iValue);

    Table(iValue);

    return 0;
}