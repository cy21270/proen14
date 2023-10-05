#include<signal.h>
#include<stdio.h>

int main(){
	int a;
	scanf("%d",&a);
	printf("%d\n",a);
 	kill(a,SIGUSR1);
 	printf("sent\n");
 }
