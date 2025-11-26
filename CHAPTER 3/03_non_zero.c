#include<stdio.h>

int main()
{
    if (1)
    {
        printf("First if is executed!\n"); // Executed...
    }
    if (4321)
    {
        printf("Second if is also executed!\n"); // Executed...
    }
    if (3.14)
    {
        printf("Third if is also executed!\n"); // Executed...
    }
    if (0)
    {
        printf("Forth if is not executed..! Coz I'm Zero!\n"); // Not executed..!
    }
    if ('c')
    {
        printf("Fifth if is also executed!\n"); // Executed...
    }

    return 0;
}