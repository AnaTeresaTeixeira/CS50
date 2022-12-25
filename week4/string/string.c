#include <stdio.h>

int main(void)
{
    char *s = "Hi!";
    char c = s[0];
    char *p = &c;

    printf("%s\n", s);
    printf("%p\n", s);
    printf("%p\n", p);
    printf("%i\n", *p);

    printf("%p\n", &s[0]);
    printf("%p\n", &s[1]);
    printf("%p\n", &s[2]);
    printf("%p\n", &s[3]);

    printf("%c\n", s[0]);
    printf("%c\n", s[1]);
    printf("%c\n", s[2]);
    printf("%c\n", s[3]);

}