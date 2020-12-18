#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // prompt user for credit card number
    // assume entirley numberic input
    // use get_long from CS50 library
    // repeat prompt if invalid input is given

    long input = get_long("Number:");

    // calculate checksum

    // take credit cardnumber and divid by 10
    // remainder is last digit of number
    // use % 10

    long number = input;
    int last_digit;
    int luhns_total = 0;
    int counter = 0;

    // create while counter < length of card number
    for (counter = 0; number > 0; counter++)
    {
        // read last_digit
        last_digit = (number % 10);
        // code checks: printf("\nLast Digit: %i\n", last_digit);

        // if counter = even
        // add to luhns_total

        if (counter % 2 == 0)
        {
            // code checks: printf("Counter is even.\n");
            // code checks: printf("Luhns Previous Total: %i\n", luhns_total);
            luhns_total = (luhns_total + last_digit);
            // code checks: printf("Luhns New Total: %i\n", luhns_total);
        }

        // if counter is odd
        else
        {
            int last_digit_double;

            // code checks: printf("Counter is odd.\n");
            last_digit_double = (last_digit * 2);
            // code checks: printf("Last Digit x2: %i\n", last_digit_double);

            // AND if last_digit x2 > 9 (two numbers)
            if (last_digit_double > 9)
            {

                // extract the first and second numbers of the
                // value for the last digit
                int first_number;
                int second_number;

                second_number = (last_digit_double % 10);
                first_number = ((last_digit_double - second_number) / 10);

                // code checks: printf("First Number: %i\n", first_number);
                // code checks: printf("Second Number: %i\n", second_number);

                // add the two numbers together
                // add sum to luhns_total
                // code checks: printf("Luhns Previous Total: %i\n", luhns_total);
                luhns_total = (luhns_total + first_number + second_number);
                // code checks: printf("Luhns New Total: %i\n", luhns_total);
            }

            // else when the last_digit x2 < 10 (single number)
            // add to luhns_total
            else
            {
                // code checks: printf("Luhns Previous Total: %i\n", luhns_total);
                luhns_total = (luhns_total + last_digit_double);
                // code checks: printf("Luhns New Total: %i\n", luhns_total);
            }
        }

        // take last digit off card number for next loop
        number = ((number - last_digit) / 10);
        // code checks: printf("Next Number: %li\n", number);
    }

    // final step of checksum to validate card
    int luhns_final_value = (luhns_total % 10);
    // code checks: printf("\nLuhns Total Last Digit: %i\n", luhns_final_value);

    if (luhns_final_value == 0)
    {
        // check credit card length
        int card_length = (counter);

        // define new variables
        int type_counter;
        long type_number = input;
        int type_last_digit;

        // code checks: printf("\nCard Length: %i\n", card_length);

        // create counter to reduce down to first two digits
        for (type_counter = 0; type_number > 99; type_counter++)
        {
            type_last_digit = (type_number % 10);
            type_number = ((type_number - type_last_digit) / 10);
        }

        // code checks: printf("First two digits: %li\n", type_number);

        // check if american express
        if (card_length == 15)
        {
            // check first two digits are valid
            if (type_number == 34 || type_number == 37)
            {
                printf("AMEX\n");
            }
            else
            {
                printf("INVALID\n");
            }
        }

        // check if mastercard
        else if (card_length == 16)
        {
            // check first two digits are valid
            if (type_number == 51 || type_number == 52 || type_number == 53 || type_number == 54 || type_number == 55)
            {
                printf("MASTERCARD\n");
            }

            // check if visa (same length card)
            else if (card_length == 13 || card_length == 16)
            {
                // code checks: printf("\nCard Length: %i\n", card_length);

                // reduce to first digit only
                int second_type_number = (type_number % 10);
                int first_type_number = ((type_number - second_type_number) / 10);
                // code checks: printf("First number on card: %i\n", first_type_number);

                // check first digit is valid
                if (first_type_number == 4)
                {
                    printf("VISA\n");
                }
                else
                {
                    printf("INVALID\n");
                }
            }
        }

        // check if visa
        else if (card_length == 13)
        {
            // code checks: printf("\nCard Length: %i\n", card_length);

            // reduce to first digit only
            int second_type_number = (type_number % 10);
            int first_type_number = ((type_number - second_type_number) / 10);
            // code checks: printf("First number on card: %i\n", first_type_number);

            // check first digit is valid
            if (first_type_number == 4)
            {
                printf("VISA\n");
            }
            else
            {
                printf("INVALID\n");
            }
        }
        else
        {
            printf("INVALID\n");
        }
    }

    // report invalid card number
    else
    {
        printf("INVALID\n");
    }
}
