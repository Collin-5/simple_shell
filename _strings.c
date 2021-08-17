#include "holberton.h"

/**
 * _strlen - Returns length of a string
 * @s: Pointer to string
 * Return: Length of s
 */
int _strlen(char *s)
{
	int index;

	index = 0;
	while (s[index] != '\0')
	{
		index++;
	}
	return (index);
}
/**
 * _strcat - Concatenates two strings
 * @dest: Pointer to string to be conatenated upon
 * @src: Pointer to string to append to dest
 * Return: Pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	char *destAddress;
	int destLen;

	destAddress = dest;
	destLen = _strlen(dest);
	destAddress = destAddress + destLen;
	while (*src != '\0')
	{
		*destAddress = *src;
		src++;
		destAddress++;
	}
	*destAddress = '\0';

	return (dest);
}


/**
 * _strtotokens - splits a string into words
 * @str: Pointer to string
 * Return: Pointer to array of words
 */
char **_strtotokens(char *str)
{
	int i = 0;
	const char delimeter[] = " \t\n";
	char **tokens = malloc(sizeof(char *) * (_strlen(str)));
	char *token;

	if (!tokens)
	{
		fprintf(stderr, "sh: allocation error\n");
		exit(1);
	}

	token = strtok(str, delimeter);

	while (token != NULL)
	{
		tokens[i] = token;
		token = strtok(NULL, delimeter);
		i++;
	}
	tokens[i] =  NULL;

	return (tokens);
}
