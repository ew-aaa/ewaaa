#include <stdio.h>

int calculate(int a, int b)
{
    int c = 0;
    a = 100;
    c = a + b;
    return c;
}

int main()
{
    int a;
    int b = 0;
    int c = calculate( a, b);
    printf("The value of a = %d\n", a);
    printf("The value of b = %d\n", b);
    printf("The answer of c = a + b = %d\n", c);
    return 0;
}