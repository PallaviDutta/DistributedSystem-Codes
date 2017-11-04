#include<stdio.h>
int main(){
int ret;
int pipectop[2];
char str[50];
pipe(pipectop);
ret=fork();
if(ret==0){
close(pipectop[0]);
write(pipectop[1],"hey",50);
}
else
{
close(pipectop[1]);
sleep(1);
read(pipectop[0],str,50);
printf("%s \n",str);
}
return 0;
}
