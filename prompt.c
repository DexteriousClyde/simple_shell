#include "shell.h"

/**
 * prompt -  function to show prompt to user to enter input
 * Return: void
 */

void prompt(void)
{
	char *p = "#cisfun$ ";

	_put(p);
}

/**
 * prompt2 - Function to show prompt to user to enter input
 * @str: Specific input to show user as prompt
 * Return: void
 */

void prompt2(char *str)
{
	_put(str);
}
