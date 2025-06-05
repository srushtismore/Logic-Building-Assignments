#include <stdio.h>

#define true 1
#define false 0

typedef int bool;

bool ChkCapital(char ch)
{
    if(ch >= 'A' && ch <= 'Z' )
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

    printf("Enter the character\n");
    scanf("%c",&cValue);

    bRet = ChkCapital(cValue);

    if(bRet == true)
    {
        printf("It is capital character");
    }
    else 
    {
        printf("It is not capital character");
    }

    return 0;
}