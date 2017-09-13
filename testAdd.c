#define _GNU_SOURCE

#include <sys/syscall.h>
#include <unistd.h>
#include <stdio.h>

int main()
{
	int tmp;
	int num1 = 3;
	int num2 = 3;
	syscall(333, num1, num2, &tmp);
	printf("%d\n", tmp);
	return 0;
}
