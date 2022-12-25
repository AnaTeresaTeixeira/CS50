#include <stdio.h>

void swap(int a, int b);

int main(void)
{
    int x = 1;
    int y = 2;

    printf("x is %i, y is %i\n", x, y);
    swap(x, y);
    printf("x is %i, y is %i\n", x, y);
}

void swap(int a, int b)
{
    printf("a is %i, b is %i\n", a, b);
    int tmp = a;
    a = b;
    b = tmp;
    printf("a is %i, b is %i\n", a, b);

    /*
    It turns out that the swap function gets passed in copies of variables, a and b,
    which are local variables that only the surrounding function can access.
    Changing those values won’t change x and y in the main function:
    Our swap function works while we’re inside it.
    */
}
