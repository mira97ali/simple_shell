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
#include <signal.h>


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
int _strncmp(const char *s1, const char *s2, size_t n);
char *_getenv(const char *name);

/* Function declaration */
void execute_command(char *shell_name, char *command);
void execute_command_with_args(
	char *shell_name,
	char *command,
	char **arguments
);
void parse_input(char *input, char **command, char **arguments);
void handle_command(
	char *shell_name,
	char *command,
	char *arguments[MAX_ARGUMENTS]
);
char *resolve_command_path(char *command);
void environment_variables(void);
void interrupt_control_c(int _signal);

#endif /* MAIN_H */
