#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Prompt user to type input height.
    // Check input is within range of 1-8.
    // If input is invalid, re-prompt user
    // for another input.

    int x;

    do
    {
        x = get_int("Height:");
    }
    while (x < 1 || x > 8);


    for (int i = 0; i < x; i++)
    {
        // Print spaces

        for (int j = 0; j < (x - (i + 1)); j++)
        {
            printf(" ");
        }

        // Print left hashes

        for (int j = 0; j < (i + 1); j++)
        {
            printf("#");
        }

        // Print gap

        printf("  ");

        // Print right hashes

        for (int j = 0; j < (i + 1); j++)
        {
            printf("#");
        }

        // Print new line

        printf("\n");
    }
}
