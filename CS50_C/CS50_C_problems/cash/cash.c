#include <cs50.h>
#include <stdio.h>

int get_cents(void);
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);

int main(void)
{
    // Ask how many cents the customer is owed
    int cents = get_cents();

    // Calculate the number of quarters to give the customer
    int quarters = calculate_quarters(cents);
    cents = cents - quarters * 25;

    // Calculate the number of dimes to give the customer
    int dimes = calculate_dimes(cents);
    cents = cents - dimes * 10;

    // Calculate the number of nickels to give the customer
    int nickels = calculate_nickels(cents);
    cents = cents - nickels * 5;

    // Calculate the number of pennies to give the customer
    int pennies = calculate_pennies(cents);
    cents = cents - pennies * 1;

    // Sum coins
    int coins = quarters + dimes + nickels + pennies;

    // Print total number of coins to give the customer
    printf("%i\n", coins);
}

int get_cents(void)
{
    int user_coins;
    do
    {
        user_coins = get_int("Please enter the number of cents ");
    }
    // if user_coins is less than 0 or negative repeat loop
    while (user_coins < 0);
    return user_coins;
}

int calculate_quarters(int cents)
{
    if (cents >= 25 && cents <= 49)
    {
        return 1;
    }
    else if (cents >= 50 && cents <= 74)
    {
        return 2;
    }
    else if (cents > 74)
    {
        return cents / 25;
    }
    else
    {
        return 0;
    }
}

int calculate_dimes(int cents)
{
    if (cents >= 20 && cents <= 24)
    {
        return 2;
    }
    else if (cents >= 10 && cents <= 19)
    {
        return 1;
    }
    else if (cents > 25)
    {
        return cents / 10;
    }
    else
    {
        return 0;
    }
}

int calculate_nickels(int cents)
{
    if (cents >= 5 && cents <= 9)
    {
        return 1;
    }
    else if (cents > 9)
    {
        return cents / 5;
    }
    else
    {
        return 0;
    }
}

int calculate_pennies(int cents)
{
    if (cents <= 4)
    {
        return cents;
    }
    else
    {
        return 0;
    }
}
