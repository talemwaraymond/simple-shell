#ifndef COMMANDS_H
#define COMMANDS_H

#include <unistd.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <errno.h>
#include <stdlib.h>
#include <string.h>


#include "error.h"
#include "builtins.h"
#include "memory.h"
#include "general.h"
#include "text.h"


extern char **environ;

/* permissions.c */
int is_executable(char *filename);
int is_file(char *command);

/* commands.c */
void analyze(char **arguments, general_t *info, char *buff);

/* environment.c */
char *which(char *filename, general_t *info);
void is_current_path(char *path, general_t *info);
void get_full_env(void);
char *_getenv(const char *name);

/* execute.c */
void execute(char *commands, char **arguments, general_t *info, char *buff);
int current_directory(char *cmd, char **arguments, char *buff,
		general_t *info);

#endif /* COMMANDS_H */
