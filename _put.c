#include <unistd.h>
#include "shell.h"

/**
 * _put - write a string to the stdout
 * @str: String of char array
 * Return: void
 */

void _put(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		_putchar(str[i]);
	}
}
