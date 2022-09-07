#include "main.h"

/**
 * main - entry point
 * return - Alway 0 success.
 */

int main(void)
{
while (true)
{
printf(">  ");
kash_read_line(char *line);
kash_split_line(line, char **tokens);
if (tokens[0] != NULL)
{
kash_exec(tokens);
}
free tokens;
free line;
}
}

/**
 * main - Entry point
 *
 * retune - return line
 */

kash_read_line(char *line)
{
char *line = NULL;
sizeof(buflen) = 0;
getline(&line, &buflen, stdin);
return (line);
}
