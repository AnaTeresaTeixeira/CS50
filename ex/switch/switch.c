#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int x = get_int("Number: ");

    switch(x)
    {
        case 1:
        printf("One\n");
        break;
        case 2:
        printf("Two\n");
        break;
        case 3:
        printf("Three\n");
        break;
        default:
        printf("Done\n");

    }

    int y = get_int("Other number: ");

    switch(y)
    {
        case 1:
        printf("One\n");
        case 2:
        printf("Two\n");
        case 3:
        printf("Three\n");
        default:
        printf("Done\n");

    }


}