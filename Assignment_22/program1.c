#include <stdio.h>

#define true 1
#define false 0

typedef int bool;

bool ChkAlpha(char ch)
{
    if((ch >= 'A' && ch <= 'Z' )|| (ch >= 'a' && ch <= 'z'))
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

    bRet = ChkAlpha(cValue);

    if(bRet == true)
    {
        printf("It is character");
    }
    else 
    {
        printf("It is not character");
    }

    return 0;
}