/*
    Write a program to determine whether a student has passed or failed. To pass, a 
    student requires a total of 40% and at least 33% in each subject. Assume there 
    are three subjects and take the marks as input from the user.
*/ 

#include<stdio.h>

int main()
{
    int math, science, computer;
    
    printf("Enter marks of math:");
    scanf("%d", &math);

    printf("Enter marks of science:");
    scanf("%d", &science);

    printf("Enter marks of computer:");
    scanf("%d", &computer);

    printf("The marks are: \nMath: %d\nScience: %d\nComputer: %d\n", math, science, computer);

    if(math < 33 || science < 33 || computer < 33) // Cheking marks...
    {
        printf("You are failed due to less marks in individual subject(s)");
    }
    else if((math + science + computer) / 3 < 40)  // Checking percentage....
    {
        printf("You are failed due to percentage");
    }
    else
    {
        printf("You are passed!");  
    }

    return 0;
}