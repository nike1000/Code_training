#include<pthread.h>
#include<stdio.h>
#include<unistd.h>

int sharedResource = 50;
pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;

void* addAPI(void* param)
{
    int count = 0;
    while(count < 5)
    {
        //pthread_mutex_lock(&mutex);
        sharedResource++;
        printf("[Thread1] Changing the shared resource to %d.\n", sharedResource);
        //pthread_mutex_unlock(&mutex);
        count++;
    }
    return 0;
}

int main()
{
    pthread_t thread1;

    // Really not locking for any reason other than to make the point.
    pthread_mutex_lock(&mutex);
    pthread_create(&thread1, NULL, addAPI, NULL);
    pthread_mutex_unlock(&mutex);

    // Now we need to lock to use the shared resource.
    int count = 0;
    while(count < 5)
    {
        //pthread_mutex_lock(&mutex);
        printf("[Main thread] Reading shardes resource now.\n");
        printf("[Main thread] It's %d\n", sharedResource);
        //pthread_mutex_unlock(&mutex);
        count++;
    }
    sleep(5);
}
