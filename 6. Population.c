#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size

    int start;

    do
    {
        start = get_int("Start size: ");
    }
    while (start < 9);

    // TODO: Prompt for end size

    int end;

    do
    {
        end = get_int("End size: ");
    }
    while (end < start);

    // TODO: Calculate number of years until we reach threshold

    int n = start;
    int x = 0;

    for (x = 0; n < end; x++)
    {
        // test code: printf("Year: %i\n", x);
        // test code: printf("Population: %i\n", n);
        // test code: printf("\n");
        
        n = n + (n / 3) - (n / 4);
    }

    // TODO: Print number of years

    printf("Years: %i\n", x);
}
