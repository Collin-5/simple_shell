#include "holberton.h"

/**
 * main - Entry to simple shell program
 * @argc: Number of arguments
 * @argv: Pointer to array of arguments
 * Return: Always 0 if success else 1
 */

int main(int argc, char *argv[])
{
	char *line;
	int status;
	char **tokens;

	(void)argc;

	status = 0;
	while (status == 0)
	{
		prompt();

		line = read_line();
		tokens = _strtotokens(line);
		if (tokens[0] == NULL)
		{
			free(tokens);
			free(line);
			continue;
		}

		if (_strcmp(tokens[0], "exit") == 0)
		{
			_exitSimpleShell(tokens, line);
		}
		else
		{
		status =  _execute(tokens, argv[0]);
		}

		free(line);
		free(tokens);
	}

	return (status);

}
