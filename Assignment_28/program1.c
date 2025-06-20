#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    char Fname = {'\0'};
    int fd = 0;

    printf("Enter name of the file : \n");
    scanf("%s",Fname);

    fd = creat(Fname,0777);

    printf("File created successfully with fd : %d",fd);

    return 0;
}