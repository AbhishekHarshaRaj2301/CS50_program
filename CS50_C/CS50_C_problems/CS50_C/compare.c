#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int X = get_int("What's X? ");
    int Y = get_int("What's Y? ");

    if (X < Y)
    {
        printf("X is less than Y\n");
    }
    else if (X > Y)
    {
        printf("X is greater than Y\n");
    }
    else
    {
        printf("X is equal to Y\n");
    }
}