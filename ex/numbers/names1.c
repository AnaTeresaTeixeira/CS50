#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    //strcmp retorna valor negativo se a 1string vier antes da 2string
    //retorna 0 (true) se as duas strings são iguais
    //retorna valor positivo se a 1string vem depois da 2string

    string names[] = {"Bill", "Charlie", "Fred", "George"};
    /*
    for (int i = 0; i < 3; i++)
    {
        if (strcmp(names[3], "George") == 0)           //Verificar se o index3 do array names contém a string "George"
        {
            printf("Found!\n");
            return 0;
        }
    }
    printf("Not found!\n");
    return 1;
    */


    for (int i = 0; i < 3; i++)
    {
        if (strcmp(names[2], "George") == 0)           //Verificar se dentro do array names contém a string "George"
        {                                              //se mudarmos 2 para 3 o output será Found!
            printf("Found!\n");                        //dentro do int main(void) não podem estar dois return 0 e dois return 1
            return 0;
        }
    }
    printf("Not found!\n");
    return 1;
}