#include <cs50.h>
#include <stdio.h>

int user_input(void);
void print_grid(int size);

int main(void)
{
    // Get size of grid
    int n = user_input();
    // Print grid
    print_grid(n);

}
// function to take user_input
int user_input(void)
{
    int number;
    do
    {
        number = get_int("Size: ");
    }
    // if number is less than 1 and more than 8 then repeat the statement
    while (number < 1 || number > 8);
    return number;
}
// function that takes user_input to create a grid
void print_grid(int size)
{
    // loop for rows
    for (int i = 0; i < size; i++)
    {
        // loop to print spaces
        for (int j = size - 2; j >= i; j--)
        {
            printf(" ");
        }
        // loop to print hashes
        for (int k = 0; k <= i; k++)
        {
            printf("#");
        }
        printf("\n");
    }
}
