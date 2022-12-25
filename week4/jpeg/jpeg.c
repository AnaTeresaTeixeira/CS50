// Detects if a file is a JPEG

#include <stdint.h>
#include <stdio.h>

// First, we define a BYTE as 8 bits, so we can refer to a byte as a type more easily in C.

typedef uint8_t BYTE;

int main(int argc, char *argv[])
{
    // Check usage
    if (argc != 2)
    {
        return 1;
    }

    // Open file
    FILE *file = fopen(argv[1], "r");
    if (!file)
    {
        return 1;
    }

    // Read first three bytes
    BYTE bytes[3];
    fread(bytes, sizeof(BYTE), 3, file);

    /*
    We can compare the first three bytes (in hexadecimal) to the three bytes required
    to begin a JPEG file. If they’re the same, then our file is likely to be a JPEG file
    (though, other types of files may still begin with those bytes). But if they’re not the
    same, we know it’s definitely not a JPEG file.
    */

    // Check first three bytes
    if (bytes[0] == 0xff && bytes[1] == 0xd8 && bytes[2] == 0xff)
    {
        printf("Yes, possibly\n");
    }
    else
    {
        printf("No\n");
    }

    // Close file
    fclose(file);
}