#include <stdio.h>

int larger(int, int);

int larger (int x, int y)
{
if (x > y)
{
return x;
}

else
{
return y;
}
}
int main()
{
int  a =100 , b=50;
int result = larger(a,b);
printf("%d\n", result);
}
