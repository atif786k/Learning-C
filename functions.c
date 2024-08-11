#include <stdio.h>
#include <stdlib.h>
// int sum(int a, int b)
// {
//     return a + b;
// }

void print(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            printf("FizzBuzz \n");
        }
        if (i % 3 == 0)
        {
            printf("Fizz \n");
        }
        if (i % 5 == 0)
        {
            printf("Buzz \n");
        }
        else
        {
            printf("%d \n" , i);
        }
    }
    
}
int main()
{
    print(15);
    // int a, b;
    // printf("\nEnter a: ");
    // scanf("%d", &a);
    // printf("\nEnter b: ");
    // scanf("%d", &b);
    // printf("The value of a+b is %d", sum(a, b));
    // return 0;
}
