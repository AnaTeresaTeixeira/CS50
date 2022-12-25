#include <stdio.h>

int main(void)
{
    int x;
    printf("x: ");
    scanf("%i", &x);
    printf("x: %i\n", x);

    /*
    scanf takes a format, %i, so the input is “scanned” for that format.
    We also pass in the address in memory where we want that input to go with &x.
    */
}