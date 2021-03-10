#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>

int main(){
	pid_t pid = fork();
	int info,einfo;
	if (pid<0){
		printf("Fork hiba lepett fel");
		exit(0);
	}else if (pid == 0){
		execl("./child", "child", (char *)NULL);
	}
	waitpid(pid, &info, 0);

	if (WIFEXITED(info)){
		einfo = WEXITSTATUS(info);
		printf("A gyerek %d ertekkel sikeresen kilepett.\n", einfo);
	}



	return 0;
}
