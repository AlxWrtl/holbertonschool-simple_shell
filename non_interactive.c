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
	char *input = NULL;
	size_t n = 0;
	ssize_t read;

	while ((read = getline(&input, &n, stdin)) != -1)
	{
		handle_input(input);
		free(input);
		input = NULL;
		n = 0;
	}

	if (input)
	{
		free(input);
	}
}
