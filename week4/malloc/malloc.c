#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char *s = get_string("s: ");

    char *t = malloc(strlen(s) + 1);

    //malloc is the number of bytes we’d like to use.
    //We already know the length (strlen) of s, but we need to add 1 for the terminating null character.


    for (int i = 0, n = strlen(s) + 1; i < n; i++)
    {
        t[i] = s[i];
    }

    t[0] = toupper(t[0]);    //maiuscula

    printf("s: %s\n", s);
    printf("t: %s\n", t);

    free(t);

    //#include <stdlib.h> para malloc e free
}