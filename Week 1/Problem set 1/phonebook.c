#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string name = get_string("What's your name?: ");
    int age = get_int("What's your age?: ");
    string phone = get_string("What's your phone number? (Exclude the + symbol): ");

    printf("Your name is %s, your age is %i and your phone number is %s. It's that correct? \n",name,age,phone);
}