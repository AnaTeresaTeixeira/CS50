#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int scores[3];

    for (int i = 0; i < 3; i++)
    {
        scores[i]= get_int("Score: ");
    }

    printf("Average %f\n", (scores[0] + scores[1] + scores[2]) / 3.0);


    // ou
    printf("\n");


    int scores1[3];

    for (int a = 0; a < 3; a++)
    {
        scores1[a]= get_int("Score: ");
    }

    printf("Average %d\n", (scores1[0] + scores1[1] + scores1[2]) / 3);

}

