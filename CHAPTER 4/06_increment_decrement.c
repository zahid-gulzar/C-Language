#include <stdio.h>

int main()
{
    int i = 5;
    printf("The value of i is %d\n", i); // 5

    i = i + 5;
    printf("The value of i is %d\n", i); // 10

    printf("The value of i is %d\n", i++); // 10;
    printf("The value of i is %d\n", i);   // 11

    i += 2;                              // means => i = i + 2
    printf("The value of i is %d\n", i); // 13

    // i++ prints first and then increments (Post increment Operator)
    // ++i increments first and then prints (Pre increment operator)

    return 0;
}