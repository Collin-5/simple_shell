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

/**
 * c_atoi - custom atoi converts string to int
 * @s: string
 * Return: number if success, -1 if string contains non-numbers
 */
int c_atoi(char *s)
{
	int i = 0;
	unsigned int num = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= '0' && s[i] <= '9') /* calculate num */
			num = num * 10 + (s[i] - '0');
		if (s[i] > '9' || s[i] < '0') /* account for non-numbers */
			return (-1);
		i++;
	}
	return (num);
}
