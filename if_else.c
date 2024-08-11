#include <stdio.h>
int main()
{
    char c;
    printf("Enter the Alphabet\n");
    scanf("%c", &c);
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
    {
        printf("Alphabet %c is vowel\n", c);
    }
    else
    {
        printf("Alphabet %c is consonant\n", c);
    }

    return 0;
}