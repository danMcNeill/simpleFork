#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>

int main() {

	printf("My pid is %u, parent pid is %u.\n", getpid(), getppid());

	return 0;

}
