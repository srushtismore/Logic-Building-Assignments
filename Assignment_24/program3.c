#include<stdio.h>

int Difference(char *str)
{
    int iCountCap = 0;
    int iCountSmall = 0;

    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            iCountCap++;
        }
        else if(*str >= 'a' && *str <= 'z')
        {
            iCountSmall++;
        }
        str++;
    }
    return iCountSmall - iCountCap;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string:");
    scanf("%[^'\n']s",arr);

    iRet = Difference(arr);

    printf("The difference between frequency of Small characters and capital characters in string is %d",iRet);

    return 0;
}