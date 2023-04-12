#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long X = get_long("X: ");
    long Y = get_long("Y: ");
    double Z = (double) X / (double) Y;
    printf("%.20f\n", Z);
}