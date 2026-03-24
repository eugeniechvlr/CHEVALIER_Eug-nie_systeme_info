#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>
#include <unistd.h>

sem_t mutex;

void *thread_function(void *arg)
{
    int id = *(int *)arg;

    sem_wait(&mutex);
    printf("Thread %d entered critical section\n", id);
    sleep(2);
    printf("Thread %d leaving critical section\n", id);
    sem_post(&mutex);

    return NULL;
}

int main()
{
    pthread_t t1, t2, t3;
    int id1 = 1, id2 = 2, id3 = 3;

    sem_init(&mutex, 0, 1);

    pthread_create(&t1, NULL, thread_function, &id1);
    pthread_create(&t2, NULL, thread_function, &id2);
    pthread_create(&t3, NULL, thread_function, &id3);

    pthread_join(t1, NULL);
    pthread_join(t2, NULL);
    pthread_join(t3, NULL);

    sem_destroy(&mutex);

    return 0;
}

