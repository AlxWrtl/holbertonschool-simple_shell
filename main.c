#include "lib.h"

/**
 * main - Entry point of the program.
 *
 * Calls 'interactive_mode' function to handle interactive shell operations.
 *
 * In braces (potentially for conditional or future use), calls 
 * 'non_interactive_mode' function to handle non-interactive shell operations.
 *
 * Returns 0 to indicate successful execution.
 */

int main(void)
{
		interactive_mode();
	{
		non_interactive_mode();
	}

	return (0);
}
