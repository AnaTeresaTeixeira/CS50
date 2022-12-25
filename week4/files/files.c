#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    //With the ability to use pointers, we can also open files, like a digital phone book
    
    // Open CSV file
    FILE *file = fopen("phonebook.csv", "a");
    if (!file)
    {
        return 1;
    }

    // Get name and number
    string name = get_string("Name: ");
    string number = get_string("Number: ");

    // Print to file
    fprintf(file, "%s,%s\n", name, number);

    // Close file
    fclose(file);
}