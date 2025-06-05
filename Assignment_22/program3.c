#include <stdio.h>

#define true 1
#define false 0

typedef int bool;

bool ChkDigit(char ch)
{
    if(ch >= '0' && ch <= '9' )
    {
        return true;
    }
    else
    {
        return false;
    }

}

int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Enter the Character\n");
    scanf("%c",&cValue);

    bRet = ChkDigit(cValue);

    if(bRet == true)
    {
        printf("It is Digit");
    }
    else 
    {
        printf("It is not Digit");
    }

    return 0;
}