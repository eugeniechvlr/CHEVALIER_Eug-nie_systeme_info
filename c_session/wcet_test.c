#include <stdio.h>

int main()
{
    volatile int sum = 0;
    int i;

    for (i = 0; i < 1000000; i++)
    {
        sum += i;
    }

    printf("%d\n", sum);
    return 0;
}
