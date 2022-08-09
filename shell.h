#ifndef SHELL_H
#define SHELL_H
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <sys/stat.h>

/* Prototypes for functions created */
int _putchar(char c);
void _put(char *str);
void shell();
void prompt();
char *getInput();

/* Global environment variables */
extern char **environ;

/* Struct for build-in commands */

#endif
