#include <stdio.h>
int main()
{
    int marks;
    printf("Enter your marks\n");
    scanf("%d", &marks);
    if (marks >= 90 && marks <= 100)
    {
        printf("You grade is A\n");
    }
    else if (marks >= 80 && marks <= 90)
    {
        printf("Your grade is B\n");
    }
    else if (marks >= 70 && marks <= 80)
    {
        printf("Your grade is C\n");
    }
    else
    {
        printf("Invalid marks\n");
    }
    return 0;
}