#ifndef MAIN_H
#define MAIN_H

#define PROMPT "#cisfun$ "
#define MAX_LENGTH 1024
#define MAX_ARGUMENTS 256
#define EXIT_COMMAND "exit"
#define ENV_COMMAND "env"

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <sys/stat.h>


/* Globals */
extern char **environ;

/* Helpers */
char *_strchr(const char *str, int c);
size_t _strlen(const char *str);
char *_fgets(char *str, int num, FILE *stream);
char *_strdup(const char *s);
void *_memcpy(void *dest, const void *src, size_t n);
char *_strcpy(char *dest, const char *src);
char *_strcat(char *dest, const char *src);
int _strcmp(const char *str1, const char *str2);

/* Function declaration */
void execute_command(char *command);

#endif /* MAIN_H */