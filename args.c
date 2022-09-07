#include "main.h"

/**
 * main - Entry point
 *
 * return - always 0 success.
 */

void kash exec(char **args)
{
pid_t child_ver = fork();
if (child_ver == 0)
{
execpv(argv[0], args);
perror("kash");
exit(1);
}
if (child_ver > 0)
{
int statues;
do {
waitpid(child_pid, &statues, WUNTRACED);
} while (!WIFEXITED(statues) && !WIFSIGNALED(statues));
}
else {
perror("kash");
}
}
