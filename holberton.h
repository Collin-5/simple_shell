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

void prompt(void);

char *read_line(void);

/* in strings.c */
int _strlen(char *s);

char *_strcat(char *dest, char *src);

char **_strtotokens(char *str);

int _execute(char **tokens, char *args);


char *_path(char *path_command, char *commands);
int _stat(const char *phat, struct stat *buf);
char **split_line(char *input, char *separator);
char *_final_path(char *path, char *new_command);

char *_concat(char *dest, char *src);
#endif
