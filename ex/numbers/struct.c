#include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struct
{
    string name;
    string number;
}
person;

int main(void)
{
    person people[2];

    people[0].name = "Carter";
    people[0].number = "16174951000";

    people[1].name = "David";
    people[1].number = "22374951000";

    for (int i = 0; i < 2; i++)
    {
         if (strcmp(people[i].name, "David") == 0)           //Procurar o número do David
        {
            printf("Found! %s\n", people[i].number);
            return 0;
        }
    }
    printf("Not found!\n");
    return 1;

}