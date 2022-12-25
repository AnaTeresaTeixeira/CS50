#include <stdio.h>

void swap(int *a, int *b);

int main(void)
{
    int x = 1;
    int y = 2;

    printf("x is %i, y is %i\n", x, y);
    swap(&x, &y);                              //x e y vira moradas
    printf("x is %i, y is %i\n", x, y);
}

void swap(int *a, int *b)                     //a e b vira ponteiros
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}