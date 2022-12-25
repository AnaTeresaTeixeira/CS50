#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int counter = 0;
    while (counter < 3)
    {
        printf("Meow\n");
        counter++;
    }

    //ou
    printf("\n");

    for (int i = 0; i < 3; i++)
    {
        printf("Meow\n");
    }
}