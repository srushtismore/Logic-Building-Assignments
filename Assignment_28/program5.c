#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int main()
{
    char Fname[20] = {'\0'};
    char Buffer[50] = {'\0'};
    int fd = 0,iRet = 0 ;

    printf("Enter name of the file that you want to open : \n");
    scanf("%s",Fname);

    fd = open(Fname,O_RDWR | O_APPEND);
    if(fd == -1)
    {
        printf("Unable to open file\n");
        return -1;
    }
    else
    {
        printf("File opened successfully with FD : %d\n",fd);
        printf("Write content you want to add in file : \n");
        scanf(" %[^'\n']s",Buffer);
        iRet = write(fd,Buffer,strlen(Buffer));

        printf("%d bytes get written successfully\n ",iRet);


        close(fd);
    }

    return 0;
}