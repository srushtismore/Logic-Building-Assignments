#include<stdio.h>

void StrCatX(char *src, char *dest)
{

    while(*src != '\0')
    {   
        src++;
    }
    *src = ' ';
    src++;

    while(*dest != '\0')
    {
        *src = *dest;
        src++;
        dest++;
    }

    *src = '\0';

}

int main()
{
    char arr[50] = "Marvellous Infosystems";
    char brr[30] = "Logic Buliding";

    StrCatX(arr,brr);

    printf("%s\n",arr);

    return 0;

}