// Calculate your half of a restaurant bill
// Data types, operations, type casting, return value

#include <cs50.h>
#include <stdio.h>

float half(float bill, float tax, int tip);

int main(void)
{
    float bill_amount = get_float("Bill before tax and tip: ");
    float tax_percent = get_float("Sale Tax Percent: ");
    int tip_percent = get_int("Tip percent: ");

    printf("You will owe $%.2f each!\n", half(bill_amount, tax_percent, tip_percent));
}

// TODO: Complete the function
float half(float bill, float tax, int tip)
{
    float bill_tax = bill*(tax/100);
    float total_no_tip = bill + bill_tax;
    float tip_amount = total_no_tip * (float)tip/100;
    float final_amount = (total_no_tip + tip_amount)/2;
    return final_amount;
}
