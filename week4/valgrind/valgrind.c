#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *x = malloc(3 * sizeof(int)); //3 X o tamanho de um int ou seja 12 bytes
    x[0] = 72;
    x[1] = 73;
    x[2] = 33;
    free(x);

    /*
    Para verificar erros usar o seguinte comando:
    valgrind ./valgrind
    */
}

