#ifndef BUILTINS_H
#define BUILTINS_H

#include "memory.h"
#include "commands.h"
#include "general.h"
#include "text.h"

/* builtins.c */
int check_builtin(general_t *info, char **arguments);
int builtins(general_t *info, char **arguments);

/* env.c */
void bin_env(general_t *info, char **arguments);

/* echo.c */
void echo_printer(int index, char *text, char **arguments);
void bin_echo(general_t *info, char **arguments);

/* exit.c */
void bin_exit(general_t *info, char **arguments);
int number_controller(general_t *info, char *number);

#endif /* BUILTINS_H */
