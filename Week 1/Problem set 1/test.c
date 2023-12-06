#include <stdio.h>

int main(void)
{
    char name[20];

    printf("What's your name?: ");
    scanf("%s", name);

    printf("Welcome to the program, %s. \n", name);
    return 0;
}

//I'll write all code that i learned by myself, and some code of the CS50, but my code is the principal.

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string first = get_string("What's your first name? ");
    string last = get_string("What's your last name? ");
    printf("hello, %s %s \n", first, last);
}