#include<stdio.h>

void StrCpy(char *src, char *dest,int iCnt)
{

    while(*src != '\0' && iCnt != 0)
    {
        *dest = *src;
        src++;
        dest++;
         iCnt--;
    }

    *dest = '\0';
}

int main()
{
    char arr[30] = "Marvellous Multi OS";
    char brr[30];

    StrCpy(arr,brr,10);

    printf("%s\n",brr);

    return 0;

}