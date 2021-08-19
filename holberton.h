#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <wait.h>
#include <fcntl.h>
#include <dirent.h>
#include <signal.h>


extern char **environ;
void _puts(char *str);
void prompt(void);
char *read_line(void);
int _strlen(char *s);
char *_strcat(char *dest, char *src);
char **_strtotokens(char *str);
int _execute(char **tokens, char *args);
void _printenv(void);
int _putchar(char c);
int _strcmp(char *s1, char *s2);
int _executeBuiltIn(char **tokens);
int _isBuiltIn(char *str);
int c_atoi(char *s);
void _kill(char *lineptr, char *tmp, char **tok);


#endif
