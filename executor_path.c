#include "lib.h"

/**
 * execmd - Execute a command with the given arguments.
 * @argv: An array of strings representing the command and its arguments.
 *
 * This function creates a child process to execute the command specified in
 * the 'argv' array using the execvp function. If the fork or execvp fails,
 * appropriate error messages are printed. The parent process waits for the
 * child process to complete and reports any errors encountered during the
 * execution.
 */

void execmd(char **argv)
{
	pid_t pid;
	int status;

	pid = fork();
	if (pid == -1)
	{
		perror(SHELL_NAME);
		return;
	}
	else if (pid == 0)
	{
		if (execvp(argv[0], argv) == -1)
		{
			perror(SHELL_NAME);
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		if (waitpid(pid, &status, 0) == -1)
		{
			perror("Error: waitpid");
			return;
		}
	}
}
