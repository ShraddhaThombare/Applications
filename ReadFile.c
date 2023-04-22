#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
    char Fname[20];
    int fd = 0;
    char Data[20];

    printf("Please enter file name that you want to open\n");
    scanf("%s",Fname);

    fd = open(Fname,O_RDWR);    // O_RDONLY     O_WRONLY    O_RDWR 
    if(fd == -1)
    {
        printf("Unable to opn the file\n");
        return -1;
    }
    else
    {
        printf("File is succesfully opened with FD %d\n",fd);
    }

    read(fd,Data,10);
    printf("Data from file is : %s\n",Data);

    close(fd);

    return 0;
}

/*
Function name : creat
Input :    File name & Permissions
Output :    File descriptor as a integer
Error :     -1 if unable to create file

Function name : open
Input : File name, mode
Output : File descriptor
Error : -1


Function name : write
Input :    File Descriptor, Array which contains data, Number of bytes to write 
Output :    Number of bytes succesfully written
Error :     0

Function name : read
Input :    File Descriptor, Array which is empty, Number of bytes to read 
Output :    Number of bytes succesfully read
Error :     0





*/