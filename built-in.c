#include "holberton.h"


/**
  *_printenv - Gets enviroment variable
  *Return: Enviromental varible
  */

void _printenv(void)
{
    int i = 0;
    while(environ[i]) {
        _puts("%s\n", environ[i++]);
    }
}