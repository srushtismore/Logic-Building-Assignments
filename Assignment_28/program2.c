#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    char Fname[20] = {'\0'};
    int fd = 0;

    printf("Enter name of the file that you want to open : \n");
    scanf("%s",Fname);

    fd = open(Fname,O_RDONLY);
    if(fd == -1)
    {
        printf("Unable to open file\n");
        return -1;
    }

    printf("File opened successfully with FD : %d",fd);

    close(fd);

    return 0;
}