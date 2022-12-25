#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // trabalhar com restos

    int n = get_int("n: ");

    if (n % 2 == 0)
    {
        printf("Even\n");
    }
    else
    {
        printf("Odd\n");
    }


}