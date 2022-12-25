#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string names[] = {"Carter", "David"};
    string numbers[] = {"16174951000", "22374951000"};

    for (int i = 0; i < 2; i++)
    {
         if (strcmp(names[i], "David") == 0)           //Procurar o número do David
        {
            printf("Found! %s\n", numbers[i]);
            return 0;
        }
    }
    printf("Not found!\n");
    return 1;



}