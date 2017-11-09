#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>

int main() {

	fork();
	printf("Line 1\n");
	printf("Line 1 pid and ppid: %u and %u\n", getpid(), getppid());
	fork();
	printf("Line 2\n");
	printf("Line 2 pid and ppid: %u and %u\n", getpid(), getppid());
	if(fork() == 0) {
		printf("Line 3\n");
		printf("Line 3 pid and ppid: %u and %u\n", getpid(), getppid());
	}
	else {
		printf("Line 4\n");
		printf("Line 4 pid and ppid: %u and %u\n", getpid(), getppid());
	}

	return 0;

}
