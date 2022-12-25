#include <stdio.h>
#include <cs50.h>

int main(void)
{

    const int MINE = 2;

    int points = get_int("How many points did you lose?\n");

    if (points < MINE)
        printf("Oooooh\n");

    if (points > MINE)
        printf("Good\n");

    else
        printf("You lost the same points as me.\n");

    printf("\n");

    

    // Se usarmos else if em vez de if

    const int MINEA = 2;

    int pointsa = get_int("How many points did you lose?\n");

    if (pointsa < MINEA)
        printf("Oooooh\n");

    else if (pointsa > MINEA)
        printf("Good\n");

    else
        printf("You lost the same points as me.\n");

}