#include "holberton.h"


/**
 * if_file_exists - checks file status
 * @s: Pointer to file name
 * Return: 0 if success, else non zero
 */
int if_file_exists(char *s)
{
	struct stat st;

	return (stat(s, &st));
}


/**
 * path_builder - constructs a path to binaries
 * @tokens: Double pointer to tokens
 * Return: Return path, else NULL
 */
char *path_builder(char **tokens)
{
	char path1[100] = "/bin/";
	char path2[100] = "/usr/bin/";
	char *finalPath1;
	char *finalPath2;

	finalPath1 = _strcat(path1, tokens[0]);

	if ((if_file_exists(finalPath1) == 0))
		return (finalPath1);

	finalPath2 = _strcat(path2, tokens[0]);
	if ((if_file_exists(finalPath2) == 0))
		return (finalPath2);

	return (NULL);
}

/**
 * execute2 - execut a file
 * @tokens: split string into tokens from stdin
 * @path: path from path_builder function
 * @args: Program arguments
 * Return: 0 on success, else 1
 */
int execute2(char **tokens, char *path, char *args)
{
	char *err1, *err2, *err3;
	pid_t child_pid;
	int status;

	child_pid = fork();
	if (child_pid == -1)
	{
		perror("Error: ");
		return (1);
	}

	if (child_pid == 0)
	{
		tokens[0] = path;

		if (execve(tokens[0], tokens, NULL) == -1)
		{
			err1 = _strcat(*tokens, ": No such file or directory\n");
			err2 = _strcat(args, ":");
			err3 = _strcat(err2, err1);
			write(STDERR_FILENO, err3, _strlen(err3));
			free(tokens);
			exit(EXIT_FAILURE);
		}
	}
	wait(&status);
	return (EXIT_SUCCESS);
}
