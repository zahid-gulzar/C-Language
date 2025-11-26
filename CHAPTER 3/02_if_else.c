#include<stdio.h>

int main()
{
    int age = 5;

    if (age > 10) // Not executed..!
    {
        printf("We are inside if\n");
        printf("Your age is greater than 10");
    }
    else // Executed...
    {
        printf("We are inside else\n");
        printf("Your age is not greater than 10");
    }

    return 0;
}