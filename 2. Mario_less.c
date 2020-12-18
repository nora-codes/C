#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n;

    // user to enter input 'Size' as positive integer
    do
    {
        n = get_int("Height: ");
    }
    while (n < 1 || n >= 9);

    // create row
    for (int i = 0; i < n; i++)
    {
        //create required number spaces before hashes
        for (int j = 0; j < (n - 1) - i; j++)
        {
            printf(" ");
        }

        // create required number of hashes of first staircase
        for (int k = 0; k < i + 1; k++)
        {
            printf("#");
        }

        // start next row
        printf("\n");
    }
}
