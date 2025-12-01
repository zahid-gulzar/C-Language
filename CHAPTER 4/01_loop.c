#include <stdio.h>

int main()
{
    // For Loop
    for (int i = 0; i <= 5; i++)
    {
        printf("Hello, I am from for loop!\n");
    }

    // While Loop
    int j = 0;
    while (j <= 5)
    {
        printf("Hello, I am from while loop!\n");
        j++;
    }

    // Do-While Loop
    int k = 0;
    do
    {
        printf("Hello, I am from do-while loop!\n");
        k++;
    } while (k <= 5);

    return 0;
}
