#include <stdio.h>
#include <pthread.h>

void *print_hello(void *arg)
{
    printf("Hello World\n");
    return NULL;
}

int main()
{
    pthread_t thread;

    pthread_create(&thread, NULL, print_hello, NULL);
    pthread_join(thread, NULL);

    return 0;
}
