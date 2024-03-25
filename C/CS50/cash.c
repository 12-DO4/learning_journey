#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int change;
    do
    {
        change = get_int("Change: ");
    }
    while (change < 0);

    int quarters = change / 25;
    change %= 25;
    int dimes = change / 10;
    change %= 10;
    int nickels = change / 5;
    change %= 5;
    int pennies = change;

    printf("%i\n", quarters + dimes + nickels + pennies);
}
