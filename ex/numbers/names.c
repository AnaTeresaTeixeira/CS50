#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //strcmp retorna valor negativo se a 1string vier antes da 2string
    //retorna 0 (true) se as duas strings são iguais
    //retorna valor positivo se a 1string vem depois da 2string
    //este programa não funciona porque não podemos comparar duas strings, a menos que usemos a função strcmp da biblioteca <string.h>

    string names[] = {"Bill", "Charlie", "Fred", "George"};

    for (int i = 0; i < 3; i++)
    {
        if (names[i] == "George")
        {
            printf("Found!\n");
            return 0;
        }
    }
    printf("Not found!\n");
    return 1;
}