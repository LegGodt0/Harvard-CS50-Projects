#include <stdio.h>

int main(void)
{
    int i = 3;
    while(i>0)
    {
        printf("meow\n");
        i--;
    }
    
    printf("----------\n");

    i = 1;
    while(i <= 3)
    {
        printf("meow\n");
        i++;
    }

    printf("----------\n");

    for(i = 0; i < 3; i++)
    {
        printf("meow\n");
    }
}