// What will be the output ?

#include <stdio.h>

int main()
{
    int a = 10;
    if (a = 11)
    {
        printf("I am 11"); // Executed... because 11 is non zero
    }

    else
    {
        printf("I am not 11"); // Not executed !
    }
    return 0;
}