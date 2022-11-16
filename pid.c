#include "shell.h"

/**
 * main - PID
 *
 * Return: Always 0.
 */
int _getpid(void)
{
	pid_t my_pid;

	my_pid = getpid();
	printf("PID = %u\n", my_pid);
	my_pid = getppid();
	printf("Parent PID = %u\n", my_pid);
	return (0);
}
