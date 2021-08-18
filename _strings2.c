#include "holberton.h"



/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _strcmp - compares two strings
 * @s1: Pointer to first string
 * @s2: Pointer to second string
 * Second string
 * Return: 0 if they are equal, positive value
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] == s2[i] && s1[i])
		i++;
	if (s2[i])
		return (s1[i] - s2[i]);
	else
		return (0);
}
