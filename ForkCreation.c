#include<stdio.h>
int ctr;
void parent(){
ctr =0;
while(1){
sleep(1);
printf("Time parent is %d \n",ctr);
ctr++;
}
}

void child(){
ctr =0;
while(1){
sleep(1);
printf("Time child is %d \n",ctr);
ctr++;
}
}

int main(){
 int ret=fork();
 if(ret==0) child();
 else parent();
return 0;
}
