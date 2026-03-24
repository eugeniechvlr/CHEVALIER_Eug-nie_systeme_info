#include <stdio.h>

int sum(int x, int y)
{
    return x + y;
}

int main()
{
    int a = 10;
    int b = 20;
    int result = sum(a, b);

    printf("Sum = %d\n", result);

    return 0;
}
