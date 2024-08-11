#include <stdio.h>
int multi(int a, int b)
{
    int c = a * b;
    return c;
}
int main()
{
    int a, b;
    while (1)
    {
        printf("Enter the value of a\n");
        scanf("%d", &a);
        printf("Enter the value of b\n");
        scanf("%d", &b);
        printf("The Multiplication of %d and %d is %d\n", a, b, multi(a, b));
    }
    return 0;
}