#include "holberton.h"

/**
 * read_line - gets a typed line from the command line as a string
 * Return: Pointer to the line(string)
 */

char *read_line(void)
{
	char *line =  NULL;
	size_t len = 0;
	int chars = 0;

	chars = getline(&line, &len, stdin);

	if (chars == EOF)
	{
		free(line);
		exit(0);
	}
	if (line == NULL)
	{
		write(STDOUT_FILENO, "\n", 1);
		free(line);
		exit(-1);
	}

	return (line);
}