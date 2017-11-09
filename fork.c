#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main() {

	int x = 1;
	pid_t pid;
	pid = fork();

	if(pid == 0) {
		x++;
		printf("%u\n", x);
		printf("In child\n");
		printf("pid: %u\n", getpid());
		printf("ppid: %u\n", getppid());
	}
	else {
		x--;
		sleep(1);
		printf("%u\n", x);
		printf("In parent\n");
		printf("pid: %u\n", getpid());
		printf("ppid: %u\n", getppid());
	}

	return 0;

}
