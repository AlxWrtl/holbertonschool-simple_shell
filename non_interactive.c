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

void non_interactive_mode(int argc, char *argv[])
{
	if (argc > 2 && strcmp(argv[1], "-c") == 0)
	{
		char *cmd_argv[256];
		char *token = strtok(argv[2], " ");
		int i = 0;

		while (token != NULL && i < 255)
		{
			cmd_argv[i++] = token;
			token = strtok(NULL, " ");
		}
		cmd_argv[i] = NULL;

		execmd(cmd_argv);
	}
}
