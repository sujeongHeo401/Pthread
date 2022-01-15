///write 와 다른 점 : msync 없음
#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/mman.h>
#include <unistd.h>
#include <string.h>

int main(int argc, const char *argv[]){
    char *filepath = "link.txt";
    char *update = "hello mmap!";
    struct stat fileInfo;
    int fd;
    fd = open(filepath, O_RDWR, (mode_t)0600);
    if(fd < 0) {
        printf("cant open file \n");
        exit(EXIT_FAILURE);
    }

    fstat(fd, &fileInfo);
    printf("File size is %ji\n", (intmax_t)fileInfo.st_size);
    char *map = mmap(0, fileInfo.st_size, PROT_READ | PROT_WRITE, MAP_SHARED, fd, 0);
    if(map == MAP_FAILED) {
        close(fd);
        perror("Error mmapping the file");
        exit(EXIT_FAILURE);
    }

    printf("%ld", strlen(update));
    for (size_t i = 0; i < strlen(update); i++){
        printf("Writing character %c at %zu\n", update[i], i);
        map[i] = update[i];
    }


    close(fd);
    return 0;
}
