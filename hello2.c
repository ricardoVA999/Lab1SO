#include <stdio.h>
#include <unistd.h>
int main(){
	int f = fork();
	if(f==0){
		execl("hello", (char*)NULL);
	}else{
		printf("%d\n", (int)getpid());
		execl("hello", (char*)NULL);
	}
	return(0);
}
