#include <stdio.h>
int multi(int a, int b)
{
    return a * b;
}
int main()
{
    printf("My name is Mohd.atif\n");
    printf("AND he is a good boy\n");
    int x, y;
    printf("Enter the number X : ");
    scanf("%d %d", &x, &y);
    printf("The multiplicaton of X and Y is : %d", multi(x, y));
    return 0;
}