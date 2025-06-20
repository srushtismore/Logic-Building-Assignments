#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

#define BUFFER_SIZE 1024


int CountSize(char *Fname)
{
    int fd = 0,iResult = 0,iCnt = 0,iCount = 0,iFileSize = 0;
    char Buffer[BUFFER_SIZE] = {'\0'};

    fd = open(Fname,O_RDONLY);

    while((iResult = read(fd,Buffer,BUFFER_SIZE)) != 0)
    {
        iFileSize = iFileSize + iResult;
    }

    close(fd);
    
    return iFileSize;

}

int main()
{
    char FileName[30] = {'\0'};
    int iRet = 0;

    printf("Enter file name :\n");
    scanf("%s",FileName);
   
    iRet = CountSize(FileName);

    printf("Size of file is %d bytes",iRet);

    return 0;
}