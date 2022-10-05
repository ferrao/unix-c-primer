#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#define FILE_IN "input.txt"
#define FILE_OUT "output.txt"
#define BUFFER_SIZE 25

int main() {

    int fdIn, fdOut, readBytes;
    char buffer[BUFFER_SIZE];

    fdIn = open(FILE_IN, O_RDONLY);
    fdOut = open(FILE_OUT, O_WRONLY | O_CREAT, 0644);

    if (fdIn < 0) {
        puts("input file not found");
    }

    if (fdOut < 0) {
        puts("output file not found");
    }

    readBytes = read(fdIn, buffer, BUFFER_SIZE);

    write(fdOut, buffer, readBytes);

    close(fdIn);
    close(fdOut);

}

