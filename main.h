#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <sys/wait.h>
#include <unistd.h>

kash_read_line(char *line);
kash_split_line(line, char **tokens);
void kash exec(char **args);

#endif
