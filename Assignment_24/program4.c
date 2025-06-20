#include<stdio.h>
#include<stdbool.h>

bool ChkVowel(char *str)
{
    bool bFlag = false;


    while(*str != '\0')
    {
        if(*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u' || *str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U')
        {
            bFlag = true;
        }
        str++;
    }
    return bFlag;
}

int main()
{
    char arr[20];
    bool bRet = false;

    printf("Enter String : \n");
    scanf("%[^'\n']s",arr);

    bRet = ChkVowel(arr);
    
    if(bRet == true)
    {
        printf("String contains vowels");
    }
    else
    {
        printf("There is no vowels");       
    }

    return 0;

}