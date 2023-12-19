#include "lib.h"

/**
 * tokenize_line - Tokenize a string into an array of tokens.
 * @line: The input string to be tokenized.
 * @delim: The delimiter used to split the string into tokens.
 * Description :
 * This function takes an input string 'line' and a delimiter 'delim' and
 * tokenizes the input string into an array of tokens. It first counts the
 * number of tokens in the input string, then allocates memory for an array of
 * strings to store the tokens. It tokenizes the input string and stores each
 * token in the array. The last element of the array is set to NULL to indicate
 * the end of the token list.
 *
 * Return: An array of strings containing the tokens.
 */

char **tokenize_line(const char *line, const char *delim)
{
	int num_tokens = 0, i = 0;
	char *token, **tokens;
	char *line_copy = strdup(line);

	if (!line_copy)
	{
		return (NULL);
	}

	token = strtok(line_copy, delim);
	while (token)
	{
		num_tokens++;
		token = strtok(NULL, delim);
	}

	tokens = malloc(sizeof(char *) * (num_tokens + 1));
	if (!tokens)
	{
		free(line_copy);
		return (NULL);
	}

	strcpy(line_copy, line);

	token = strtok(line_copy, delim);

	while (token)
	{
		tokens[i++] = strdup(token);
		token = strtok(NULL, delim);
	}
	tokens[num_tokens] = NULL;

	free(line_copy);
	return (tokens);
}
