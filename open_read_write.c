#include <stdio.h>
#include <stdlib.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include <unistd.h>

int main(int argc, char argv[])
{   
    int fd;
    char buf[17];
    
    /*write part*/

    fd = open("myfile.txt", O_CREAT | O_WRONLY, 0600);

    if(fd == -1)
    {
        printf("Failed to create and open the file.\n");
	exit(1);
    }
    
    write(fd, "This file is Open!\n", 16);

    close(fd);

    /*read part*/

    fd = open("myfile.txt", O_RDONLY);
    
    if(fd == -1)
    {
        printf("Failed to open and read the file.\n");
	exit(1);
    }

    read(fd, buf, 16);

    buf[17] = '\0';

    close(fd);

    printf("buf: %s\n", buf);

    return 0;
}
