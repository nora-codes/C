#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{

//_____________________________________

    float d;
    
    do
    {
        d = get_float("Change owed: ");
    }
    while (d < 0 || d == 0);

    int c = round(d * 100);
    int total = 0;

//_____________________________________

    while (c > 25 || c == 25)
    {

        c = c - 25;
        total++;
    }

//_____________________________________

    while (c > 10 || c == 10)
    {

        c = c - 10;
        total++;
    }

//_____________________________________

    while (c > 5 || c == 5)
    {

        c = c - 5;
        total++;
    }

//_____________________________________

    while (c > 1 || c == 1)
    {

        c = c - 1;
        total++;
    }

//_____________________________________

    printf("%i\n", total);
}
