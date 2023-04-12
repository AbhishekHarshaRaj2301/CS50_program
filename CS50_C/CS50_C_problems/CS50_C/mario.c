#include<stdio.h>
#include<cs50.h>

int get_size(void);
void print_grid(int size);

int main(void)
{
    // Get size of grid
    int n = get_size();
    // Print grid of bricks
    print_grid(n);

}

int get_size(void)
{
    int n;
    do
    {
        n = get_int("Size: ");
    }
    while (n < 1);
    return n;
}

void print_grid(int size)
{
    int i,j,k;
    for (i = 0; i <= size; i++)
    {
        for (j = size; j >= i; j--)
        {
            printf(".");
        }
        for (k = 0; k <= i; k++)
        {
            printf("#");
        }
        printf("\n");
    }
}

        #
       ##
      ###
     ####
    #####
   ######
  #######
 ########