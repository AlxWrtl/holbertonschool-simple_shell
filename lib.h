#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>

char **tokenize_line(const char *line, const char *delim);
void execmd(char **argv);
void interactive_mode(void);
void free_tokens(char **tokens);
void handle_input(char *input);
void non_interactive_mode(int argc, char *argv[]);

#endif
