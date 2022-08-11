#include "shell.h"

/**
 * getInput - function to allow user to enter command
 * Return: user input as a string
 */

char *getInput(void)
{
	char *str = NULL;
	ssize_t num_read;
	size_t n;

	n = 0;
	num_read = getline(&str, &n, stdin);
	if (num_read == -1)
		return ("-1");
	(void) num_read;
	return (str);
}
