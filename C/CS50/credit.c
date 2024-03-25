#include <cs50.h>
#include <math.h>
#include <stdio.h>

int count_digits(long card_num);
bool checksum(long card_num, int card_num_length);
void card_type(long card_num);

int main(void)
{
    long card_num;
    do
    {
        card_num = get_long("Number: ");
    }
    while (card_num < 0);

    card_type(card_num);
}

// ============================================================================================================================

void card_type(long card_num)
{
    int card_num_length = (card_num == 0) ? 1 : count_digits(card_num);

    if (card_num_length == 13 || card_num_length == 15 || card_num_length == 16)
    {
        if (checksum(card_num, card_num_length))
        {
            int first_digits = card_num / pow(10, card_num_length - 2);

            if (card_num_length == 15 && (first_digits == 34 || first_digits == 37))
            {
                printf("AMEX\n");
            }

            else if (card_num_length == 16 && (first_digits >= 51 && first_digits <= 55))
            {
                printf("MASTERCARD\n");
            }

            else if ((card_num_length == 13 || card_num_length == 16) && first_digits / 10 == 4)
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
    else
    {
        printf("INVALID\n");
    }
}

// ============================================================================================================================

int count_digits(long card_num)
{
    int counter = 0;
    while (card_num >= 1)
    {
        counter++;
        card_num /= 10;
    }
    return counter;
}

// ============================================================================================================================

bool checksum(long card_num, int card_num_length)
{
    int sum = 0;

    while (card_num >= 1)
    {
        int first_to_last = card_num % 10;
        int second_to_last = (card_num / 10) % 10;
        int multiplied_digit = second_to_last * 2;
        sum += first_to_last + ((multiplied_digit > 9)
                                    ? (multiplied_digit / 10 + multiplied_digit % 10)
                                    : multiplied_digit);
        card_num /= 100;
    }

    return (sum % 10 == 0) ? true : false;
}
