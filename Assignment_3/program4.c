#include<stdio.h>
#include <ctype.h>

void DisplayConvert(char cValue)
{
    if(islower(cValue))
    {
        cValue = toupper(cValue);
        printf("%c",cValue);
    }
    else if(isupper(cValue))
    {
        cValue = tolower(cValue);
        printf("%c",cValue);
    }
    
}

int main()
{
    char cValue = '\0';
    printf("Enter character\n");
    scanf("%c",&cValue);

    DisplayConvert(cValue);

    return 0;
}