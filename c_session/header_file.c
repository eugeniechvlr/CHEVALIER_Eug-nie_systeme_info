#include <stdio.h>

int sum(int, int);

int sum(int x, int y)
{
return x+y;
}


int main ()
{
int a= 100, b=50;
int result = sum(a,b);
printf("%d\n",result);
}
