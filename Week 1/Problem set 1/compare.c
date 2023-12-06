#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int first = get_int("Write your first number: ");
    int second = get_int("Write your second number: ");

    if (first > second){
        printf("The number %i is greater than %i \n", first, second);
    }
    else if (first < second){
        printf("The number %i is less than %i \n", first, second);
    }
    else{
        printf("The both numbers are equal \n");
    }
}