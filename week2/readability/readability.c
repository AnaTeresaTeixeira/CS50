#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
#include <stdio.h>

int count_letters(string text);

int main(void)
{
    int letters = 0;
    int words = 1;
    int sentences = 0;

    string text = get_string("Text: ");

    for (int i = 0; i < strlen(text); i++)
    {
        if ((text[i] >= 65 && text[i] <= 90) || (text[i] >= 97 && text[i] <= 122))   // ou if (isalpha(text[i]))
        {
            letters++;
        }
        else if (text[i] == ' ')
        {
            words++;
        }
        else if (text[i] == '!' || text[i] == '?' || text[i] == '.')
        {
            sentences++;
        }
    }

    float L = (float) letters / (float) words * 100;
    float S = (float) sentences / (float) words * 100;

    int index = round(0.0588 * L - 0.296 * S - 15.8);

    if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (index > 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", index);
    }



}

