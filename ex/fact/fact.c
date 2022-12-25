#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n = get_int("Number: ");

    int a = n * (n - 1);

    if (n == 0)
    {
        return 1;
    }
    else
    {
        printf("%i\n", a);
    }
}