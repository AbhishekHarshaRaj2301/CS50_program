#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string answer = get_string("What greeting do you want to use? ");
    string first = get_string("What's your first name? ");
    string last = get_string("What's your last name? ");
    printf("%s %s %s\n", answer, first, last);
    printf("I got 100 %%\n");
}