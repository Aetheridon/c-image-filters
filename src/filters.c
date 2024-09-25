#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

typedef uint8_t BYTE;

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        printf("no path supplied!\n");
        return 1;
    }

    char *path = argv[1];
    return 0;

}