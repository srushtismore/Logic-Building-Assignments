#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

#define BUFFER_SIZE 1024

void DisplayN(char Fname[],int iSize)
{
    int fd = 0; 
    char Buffer[BUFFER_SIZE] = {'\0'};

    fd = open(Fname,O_RDWR);

    read(fd,Buffer,iSize);

    printf("Data read from file is : %s",Buffer);

    close(fd);

}

int main()
{
    char FileName[30] = {'\0'};
    int iValue = '\0';
    int iRet = 0;

    printf("Enter file name :\n");
    scanf("%s",FileName);

    printf("Enter the number ofcharacters :\n");
    scanf(" %d",&iValue);
   
    DisplayN(FileName,iValue);

    return 0;
}