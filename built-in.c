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


