#include <unistd.h> // header files for read and write system calls

#define BUFFER_SIZE 15

int main() {

    int readBytes;

    char buffer[BUFFER_SIZE];
    readBytes = read(0, buffer, BUFFER_SIZE);

    write(1, buffer, readBytes);
}
