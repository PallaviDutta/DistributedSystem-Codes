#include<stdio.h>
void main(){
int pid;
int pipe1to2[2];
int pipe2to1[2];
pipe(pipe1to2);
pipe(pipe2to1);
 pid=fork();
 if(pid==0) process2();//child
 else process1();
}
void process1()
{
 close(pipe1to2[0]);
 close(pipe2to1[1]);
}

void process2()
{
 close(pipe2to1[0]);
 close(pipe1to2[1]);
}
