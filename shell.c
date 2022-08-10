#include "shell.h"

/**
 * main - main functions
 * Return: 0
 */

int main(void)
{
	/* char in[MAXCOM]; */
	char *in;

	while (1)
	{
		/* create the prompt and show it */
		prompt();
		/* Get the user input */
		in = getInput();
		_put(in);
		/* Check if user input is valid */
		break;
		/* If input is an exit command: exit */
	}
	return (0);
}
