#include <stdio.h>

int main(void)
{
    int foo[5]={1, 2, 3, 4, 5};
    int bar[5];

    for (int j = 0; j < 5; j++)
    {
        foo[j]=bar[j];
    }


}