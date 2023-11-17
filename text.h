#ifndef TEXT_H
#define TEXT_H

#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#include "general.h"

/* utils_text.c */
char *_strcpy(char *dest, char *src);
char *_strdup(char *str);
int _strcmp(char *str1, char *str2);
int _strlen(char *msg);
char *_strcat(char *dest, char *src);

/* text.c */
void start_prompt(general_t *info);
void prompt(general_t *info);
char *read_prompt();
void sigintHandler(int sig_num);

/* printers_out.c */
int _putchar(char c);
int print(char *msg);

/* utils_text2.c */
int is_numerical(unsigned int n);
int _atoi(char *s);
int contains_letter(char *s);
char *to_string(int number);

/* patterns.c */
void analyze_patterns(general_t *info, char **arguments);
char *pattern_handler(general_t *info, char *string);
char *replace_value(general_t *info, int *index, char *string);

/* printers.c */
int _putchar_to_fd(char l, int fd);
int print_to_fd(char *msg, int fd);

/* printers_err.c */
int print_err(char *msg);

/* patterns_replacer.c */
char *replacement(general_t *info, int *index, char *string);
char *replace_env(general_t *info, char *environment);

/* tokenization.c */
char **split_words(char *line, const char *sep);
char *join_words(char *word1, char *word2, char *word3, const char *sep);

#endif /* TEXT_H */
