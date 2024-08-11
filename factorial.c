#include <stdio.h>
int factorial(int x)
{
    if (x == 1 || x == 0)
    {
        return 1;
    }
    else
    {
        int y;
        y = x * factorial(x - 1);
        return y;
    }
}
int main()
{
    int a;
    printf("Enter the value of factorial:\n");
    scanf("%d", &a);
    printf("The factorial of %d is %d", a, factorial(a));
    return 0;
}