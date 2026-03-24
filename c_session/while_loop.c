#include <stdio.h>

int loop(int, int);

int loop(int x, int y)
{
    int i;
    while (i <= y)
    {
        printf("%d\n", i);
        i++;
    }

}

int main()
{
    int a = 1, b = 50;
    int result = loop(a, b);
}
