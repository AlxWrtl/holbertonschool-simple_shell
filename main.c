#include "lib.h"

/**
 * main - Entry point for the shell program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings representing the command-line arguments.
 *
 * This function serves as the entry point for the shell program. It checks the
 * number of command-line arguments to determine whether the program should run
 * in non-interactive mode or interactive mode. If there are command-line
 * arguments, it assumes non-interactive mode and calls
 * the non_interactive_mode function with the provided arguments.
 * Otherwise, it runs in interactive mode by calling the
 * interactive_mode function.
 *
 * Return: 0 on successful execution.
 */

int main(int argc, char *argv[])
{
	(void)argc;
	(void)argv;

	if (isatty(STDIN_FILENO))
	{
		interactive_mode();
	}
	else
	{
		non_interactive_mode();
	}

	return (0);
}
