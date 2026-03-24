#include<stdio.h>

int assign(int);

int assign (int x)
{
	printf("value %d\n",x);
	printf("adress %p\n",&x);
}

int  main()
{
    int a = 10;

    assign(a);

}
