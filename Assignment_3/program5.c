#include<stdio.h>
#include <ctype.h>
#include <stdbool.h>

bool CheckVowel(char cValue)
{
    if(isupper(cValue))
    {
        cValue = tolower(cValue);
    }

    if((cValue == 'a'|| cValue == 'e' || cValue == 'i' || cValue == 'o' || cValue == 'u'))
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
    bool iRet = true;

    printf("Enter character\n");
    scanf("%c",&cValue);

    iRet = CheckVowel(cValue);

    if(iRet == true)
    {
        printf("TRUE");
    }
    else
    {
        printf("FALSE");
    }

    return 0;
}