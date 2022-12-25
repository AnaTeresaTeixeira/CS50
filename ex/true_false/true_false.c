#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //Triangulo: Se um dos valores for zero e se a soma de
    // dois lados for inferior ou igual ao terceiro lado a resposta deve ser false

    int a = get_int("Insira a: ");
    int b = get_int("Insira b: ");
    int c = get_int("Insira c: ");


    bool triangule (int a, int b, int c);

    if (a <= 0 || b <= 0 || c <= 0)
    {
        printf("False!\n");
    }

    else if (a + b <= c || b + c <= a || c + a <= b)
    {
        printf("False!\n");
    }

    else
    {
        printf("True!\n");
    }



}