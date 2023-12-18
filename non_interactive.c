#include "lib.h"

/**
 * non_interactive_mode - Execute a command in non-interactive mode.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings representing the command-line arguments.
 *
 * This function checks if the command-line arguments indicate that the program
 * is running in non-interactive mode with a specific command to execute.
 * If so, it tokenizes the command-line argument,
 * prepares an array for execution, and calls the execmd function
 * to execute the specified command.
 */

void non_interactive_mode(void)
{
	char *line = NULL, **cmd_argv;
	size_t len = 0;
	ssize_t read;

	while ((read = getline(&line, &len, stdin)) != -1)
	{
		if (line[read - 1] == '\n')
		{
			line[read - 1] = '\0';
		}

		cmd_argv = tokenize_line(line, " ");
		if (cmd_argv)
		{
			execmd(cmd_argv);
			free_tokens(cmd_argv);
		}
	}

	free(line);
}
