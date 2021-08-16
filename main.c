#include "holberton.h"

/**
 * main - Entry to simple shell program
 * Return: Always 0 if success else 1
 */

int main(void)
{
	char *line;
	int status;

	status = 1;

	while (status == 1)
	{
		prompt();

		line = read_line();
		(void)line; /* temporary to avoid unused variable error */
	}

	return (status);

}
