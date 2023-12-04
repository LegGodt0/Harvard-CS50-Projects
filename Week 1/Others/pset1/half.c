// Calculate your half of a restaurant bill
// Data types, operations, type casting, return value

#include <cs50.h>
#include <stdio.h>

float half(float bill, float tax, int tip);

int main(void)
{
    float bill_amoun = get_bill();
    float tax_percent = get_tax();
    int tip_percent = get_tip();

    //printf("You will owe $%.2f each!\n", half (bill_amoun, tax_percent, tip_percent));
}

float get_bill(void
{
    float b;
    do
    {
        b = get_float("Bill before tax and tip: ");
    } 
    while (b < 1);
    return b;
})

float get_tax(void)
{
    float t;
    do
    {
        t = get_float("Sale Tax Percent: ");
    } 
    while (t < 0);
    return t;
}

int get_tip(void)
{
    float ti;
    do
    {
        ti = get_int("Tip percent: ");
    } 
    while (ti < 0);
    return ti;
}