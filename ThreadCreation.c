#include<stdio.h>
#include<pthread.h>//POSIX
int ctr;

void* clock_update(void* arg)
{
ctr =0;
while(1)
{
 ctr++;
 usleep(10);
}
}



int main()
{
pthread_t tid;
pthread_create(&tid,NULL,clock_update,NULL);
while(1)
{
sleep(1);
printf("Current time=%d\n",ctr);
}
}




