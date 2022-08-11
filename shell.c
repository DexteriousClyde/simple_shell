#include "shell.h"

/**
 * str_len - main
 * @c: char
 * Return: num
 */

int str_len(char *c)
{
	int i  = 0;

	for (i = 0; c[i]; i++)
		;
	return (i);
}

/**
 * my_strcpy - main
 * @str1: string
 * @str2: string
 * Return: void
 */

void my_strcpy(char *str1, char *str2)
{
	int n = str_len(str2), i;
	for (i = 0; i < n; i++)
		str1[i] = str2[i];
	(void) str1;
}

/**
 * main - main functions
 * Return: 0
 */

char **environ;

int main(void)
{
	/* char in[MAXCOM]; */
	char *in, *token, *bre = "-1", *cpy = NULL, *delim = " \n";
	int i = 0, j = 0, s;
	char **argv;

	while (1)
	{
		/* create the prompt and show it */
		prompt();
		/* Get the user input */
		in = getInput();
		if (in[0] == bre[0])
		{
			_put("^C\n");
			return (-1);
		}
		/* Check if user input is valid */
		/* If input is an exit command:*/
		cpy = malloc(sizeof(char) * str_len(in));
		for (s = 0; s < str_len(in); s++)
			cpy[s] = in[s];
		token = strtok(in, delim);
		while(token != NULL)
		{
			i++;
			token = strtok(NULL, delim);
		}
		i++;
		argv = malloc(sizeof(char *) * i);
		token = strtok(cpy, delim);
		while(token != NULL)
		{
			argv[j] = malloc(sizeof(char) * str_len(token));
			for (s = 0; s < str_len(token); s++)
				argv[j][s] = token[s];
			j++;
			token = strtok(NULL, delim);
		}
		argv[j] = NULL;
		if (execve(argv[0], argv, environ) == -1)
			perror("./shell");
	}
	return (0);
}
