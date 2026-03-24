#include <stdio.h>

int loop(int, int);

int loop(int x, int y)
{
    int i = x;
    while (i <= y)
    {
        printf("%d\n", i);
        i++;
    }

}

int main()
{
    int a = 1, b = 100;
    int result = loop(a, b);
}
