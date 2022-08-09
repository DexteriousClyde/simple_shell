#include "shell.h"
#include <unistd.h>

/**
 * _putchar - writes char c to the stdout
 * @c: char to be written
 * Return: 0 or 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
