#include <cs50.h>
#include <math.h>
#include <stdio.h>

int Digit_Counter(long card);
int Number_Checker(long card, int digits);

int main(void)
{
    long card = get_long("Number: ");

    // Get long of credit card
    int digits;
    digits = Digit_Counter(card);
    // printf("The number of digits is: %d\n",digits);

    // CheckSum from Hans Peter Luhn of IBM

    // int checksumm = checksum(card, digits);

    // Check VISA

    // Check first 2 numbers
    int card_type = Number_Checker(card, digits);
}

int Digit_Counter(long card)
{
    int r, digits = 0;
    while (card > 0)
    {
        r = card % 10;
        digits++;
        card = card / 10;
    }
    return digits;
}

int Number_Checker(long card, int digits)
{

    int number = card / pow(10, digits - 1);
    if (number == 4 && (digits == 13 || digits == 16))
    {
        if (digits == 16 || digits == 13)
        {
            int sum = 0;
            for (int j = 2; j <= digits; j = j + 2)
            {
                long digit_target = pow(10, j);
                long digit = card % digit_target;
                long digit_target2 = pow(10, j - 1);
                digit = digit / digit_target2;
                if ((digit * 2) > 10)
                {
                    sum = sum + ((digit * 2) % 10) + ((digit * 2) / 10);
                }
                else
                {
                    sum = sum + (digit * 2);
                }
            }

            for (int s = 1; s <= digits; s = s + 2)
            {
                long digit_target = pow(10, s);
                long digit = card % digit_target;
                long digit_target2 = pow(10, s - 1);
                digit = digit / digit_target2;
                sum = sum + digit;
            }

            if ((sum % 10) == 0)
            {
                printf("VISA\n");
                return 0;
            }
            else
            {
                printf("INVALID\n");
                return 0;
            }
        }

        return number;
    }
    else
    {
        number = card / pow(10, digits - 2);
        if ((number == 51 || number == 52 || number == 53 || number == 54 || number == 55) && digits == 16)
        {
            int sum = 0;
            for (int j = 2; j <= digits; j = j + 2)
            {
                long digit_target = pow(10, j);
                long digit = card % digit_target;
                long digit_target2 = pow(10, j - 1);
                digit = digit / digit_target2;
                if ((digit * 2) >= 10)
                {
                    sum = sum + ((digit * 2) % 10) + ((digit * 2) / 10);
                }
                else
                {
                    sum = sum + (digit * 2);
                }
            }

            for (int s = 1; s <= digits; s = s + 2)
            {
                long digit_target = pow(10, s);
                long digit = card % digit_target;
                long digit_target2 = pow(10, s - 1);
                digit = digit / digit_target2;
                sum = sum + digit;
            }

            printf("The sumatory is: %i\n", sum);

            if ((sum % 10) == 0)
            {
                printf("MASTERCARD\n");
                return 0;
            }
            else
            {
                printf("INVALID\n");
                return 0;
            }

            return number;
        }
        else if ((number == 34 || number == 37) && digits == 15)
        {
            int sum = 0;
            for (int j = 2; j <= digits; j = j + 2)
            {
                long digit_target = pow(10, j);
                long digit = card % digit_target;
                long digit_target2 = pow(10, j - 1);
                digit = digit / digit_target2;
                if ((digit * 2) > 10)
                {
                    sum = sum + ((digit * 2) % 10) + ((digit * 2) / 10);
                }
                else
                {
                    sum = sum + (digit * 2);
                }
            }

            for (int s = 1; s <= digits; s = s + 2)
            {
                long digit_target = pow(10, s);
                long digit = card % digit_target;
                long digit_target2 = pow(10, s - 1);
                digit = digit / digit_target2;
                sum = sum + digit;
            }

            if ((sum % 10) == 0)
            {
                printf("AMEX\n");
                return 0;
            }
            else
            {
                printf("INVALID\n");
                return 0;
            }

            return number;
        }
        else
        {
            printf("INVALID\n");
        }
    }

    return 0;
}