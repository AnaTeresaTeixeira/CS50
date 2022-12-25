#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    string s = get_string("Imput: ");
    printf("Output: \n");
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        printf("%c\n", s[i]);
    }



    //ou

    string a = get_string("Imput: ");
    printf("Output: \n");
    for (int i = 0, b = strlen(a); i < b; i++)
    {
        printf("%i\n", a[i]);
    }
}

