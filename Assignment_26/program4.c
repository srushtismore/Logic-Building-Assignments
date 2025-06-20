#include<stdio.h>

int FirstChar(char *str, char ch)
{
    int iCnt = 0,iCount = 0;

    while(*str != '\0')
    {
        iCount++;
        str++;
    }
    str--;
    iCount--;
    
    for(iCnt = iCount; iCnt >= 0; iCnt--,str--)
    {
        if(*str == ch)
        {
            iCnt;
            break;
        }
    }

    if(iCnt < 0)
    {
        return -1;
    }
    else
    {
        return iCnt;
    }
}

int main()
{
    char arr[20];
    char cValue = 0;
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s",arr);

    printf("Enter the character : \n");
    scanf(" %c",&cValue);

    iRet = FirstChar(arr,cValue);

    if(iRet == -1)
    {
        printf("Charater is not present");
    }
    else
    {
        printf("Charater location is : %d",iRet);
    }

    return 0;

}