#include "holberton.h"


/**
  *_printenv - prints variables in current
  * working environment
  * Return: void
  */
void _printenv(void)
{
	int i = 0;

	while (environ[i])
	{
		_puts(environ[i]);
		i++;
	}
}

/**
 * _isBuiltIn - checks if token is a built in
 * @str: Pointer to string to check
 * Return: 0 if true else 1
 */
int _isBuiltIn(char *str)
{
	/* check if strings are equal */
	if ((_strcmp(str, "env")) == 0)
	{
		return (0);
	}
	if ((_strcmp(str, "exit")) == 0)
		return (0);
	return (1);

}
/**
 * _executeBuiltIn - executes a builtin function
 * @tokens: Double pointer to tokens
 * Return: 0 if success
 */
int _executeBuiltIn(char **tokens)
{
	/* check if first token is equal to string */
	if ((_strcmp(*tokens, "env")) == 0)
	{
		_printenv();
		return (0);
	}
	/* will never reach here */
	/* because of _isBuiltin() if check in _execute() */
	return (1);
}
/**
 * _exitSimpleShell - exits the shell
 * and frees memory
 * @tokens: Double pointer to words split from line
 * @line: Pointer to string got using getLine()
 * Return: void
 */
void _exitSimpleShell(char **tokens, char *line)
{
	int status;

	if (tokens[1] != NULL)
	{
		status = c_atoi(tokens[1]);
		if (status >= 0)
		{
			free(line);
			free(tokens);
			exit(status);
		}
		write(STDERR_FILENO, "Exit: illegal exit status: ", 28);
		write(STDERR_FILENO, tokens[1], 1);
		write(STDERR_FILENO, "\n", 1);
	}
	else
	{
		free(line);
		free(tokens);
		exit(0);
	}
}


