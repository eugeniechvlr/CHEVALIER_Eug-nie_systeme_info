#include <stdio.h>

int loop(int, int);

int loop(int x, int y)
{
    int i;

    for (i = x; i <= y; i++)
    {
        printf("%d\n", i);
    }

}

int main()
{
    int a = 1, b =100;
    int result = loop(a, b);
}
