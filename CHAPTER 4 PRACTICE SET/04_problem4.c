// Program to implement problem3.c using ‘for’ and ‘do-while’ loop.

#include <stdio.h>

int main()
{
    // Using for loop
    int sum1 = 0;

    for (int i = 1; i <= 10; i++)
    {
        sum1 += i;
    }

    printf("Using for loop\n");
    printf("Sum of first 10 natural numbers is: %d\n", sum1);

    // Using do-while loop
    int sum2 = 0;

    int i = 1;
    do
    {
        sum2 += i;
        i++;
    } while (i <= 10);

    printf("Using do-while loop\n");
    printf("Sum of first 10 natural numbers is: %d\n", sum2);

    return 0;
}