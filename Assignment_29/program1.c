#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

#define BUFFER_SIZE 1024


int CountCapital(char *Fname)
{
    int fd = 0,iResult = 0,iCnt = 0,iCount = 0;
    char Buffer[BUFFER_SIZE] = {'\0'};

    fd = open(Fname,O_RDONLY);

    while((iResult = read(fd,Buffer,BUFFER_SIZE)) != 0)
    {
        for(iCnt = 0;iCnt < iResult;iCnt++)
        {
            if(Buffer[iCnt] >= 'A' && Buffer[iCnt] <= 'Z')
            {
                iCount++;
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
    int iRet = 0;

    printf("Enter file name :\n");
    scanf("%s",FileName);
   
    iRet = CountCapital(FileName);

    printf("Number of capital characters are : %d",iRet);

    return 0;
}