#include <stdio.h>

int main()
{
    for (int i = 0; i < 5; i++)
    {
        if (i == 5)
        {
            break; // exit the loop when 'i' reachs to 5
            // continue; // skips the itration when 'i' reaches to 5 and move further
        }
        printf("i is %d\n", i);
    }

    printf("We are outside of for loop");

    return 0;
}