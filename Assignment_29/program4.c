#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

#define BUFFER_SIZE 1024


int CountChar(char Fname[],char ch)
{
    int fd = 0,iResult = 0,iCnt = 0,iCount = 0;
    char Buffer[BUFFER_SIZE] = {'\0'};

    fd = open(Fname,O_RDONLY);

    while((iResult = read(fd,Buffer,BUFFER_SIZE)) != 0)
    {
        for(iCnt = 0;iCnt < iResult;iCnt++)
        {
            if(ch >= 'A' && ch <= 'Z')
            {
                if(Buffer[iCnt] == ch || Buffer[iCnt] == ch + 32)
                {
                    iCount++;
                }
            }
            else if (ch >= 'a' && ch <= 'z')
            {
                if(Buffer[iCnt] == ch || Buffer[iCnt] == ch - 32)
                {
                    iCount++;
                }
            }
            
        }
        memset(Buffer, '\0' ,BUFFER_SIZE);
    }

    close(fd);
    
    return iCount;

}

int main()
{
    char FileName[30] = {'\0'};
    char cValue = '\0';
    int iRet = 0;

    printf("Enter file name :\n");
    scanf("%s",FileName);

    printf("Enter character :\n");
    scanf(" %c",&cValue);
   
    iRet = CountChar(FileName,cValue);

    printf("Frequency is : %d",iRet);

    return 0;
}