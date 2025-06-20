#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int bool;

bool ChkChar(char *str,char ch)
{
    bool bFlag = FALSE;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            bFlag = TRUE;
            break;
        }
        str++;
    }
    return bFlag;
}
    

int main()
{
    char arr[20];
    char cValue = 0;
    bool bRet = FALSE;

    printf("Enter string : \n");
    scanf("%[^'\n']s",arr);

    printf("Enter the character : \n");
    scanf(" %c",&cValue);

    bRet = ChkChar(arr,cValue);

    if(bRet == TRUE)
    {
        printf("Character Found");
    }
    else
    {
        printf("Character not found");
    }

    return 0;
}