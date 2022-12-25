#include <stdio.h>
#include <cs50.h>

int main(void)
{
    /*
    A pointer is a variable that stores an address in memory, where some other variable might be stored.
    The & operator can be used to get the address of some variable, as with &n.
    And the * operator declares a variable as a pointer, as with int *p,
    indicating that we have a variable called p that points to an int. So,
    to store the address of a variable n into a pointer p, we would write: int *p = &n;
    */

    //Exercises with pointers

    //n
    printf("\n");
    printf("Ex1\n");
    int n = get_int("Variable n: ");
    int *p = &n;
    printf("Variable n adress: %p\n", p);
    printf("Pointer p adress: %i\n", *p);


    //a
    printf("\n");
    printf("Ex2\n");
    int a;
    do
    {
        a = get_int("Variable a: ");
    }
    while (a < 0 || a > 20);

    if (a >= 0 && a <= 20)
    {
        int *b = &a;
        printf("Adress: %p\n", b);
    }


}