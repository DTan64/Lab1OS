#include <stdio.h>
#include <sys/syscall.h>
#include <unistd.h>

int main()
{
	syscall(332);
	return 0;
}
