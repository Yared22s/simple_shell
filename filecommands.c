#include "main.h"

/**
 * filecommands - Short description, single line
 * @av: string
 * @env: Description of parameter xe
 * @t: int
* Return: Description of the returned value
*/
void filecommands(char **av, char **env, int t)
{
	int fd = 0, rb = 0, i = 0;
	char **commands = NULL;
	char buffer[1024] = "\0";
	char **tokens = NULL;

fd = open(av[1], O_RDONLY);
if (fd == -1)
{
write(2, av[0], _strlen(av[0]));
write(2, ": 0:Can't open ", 15);
write(2, av[1], _strlen(av[1]));
write(2, "\n", 1);
exit(127);
}
do {

	rb = read(fd, buffer, 1024);
	if (rb == -1)
	perror("cant read");

} while (rb == 1024);

buffer[rb] = '\0';

commands = make_command(buffer, "\n");

for (i = 0 ; commands[i] ; i++)
	{
	tokens = make_command(commands[i], " ");
	exec_command(av, tokens, buffer, env, commands, t);
	if (tokens)
	free(tokens);
	}
	free(commands);
if (close(fd) == -1)
perror("cant close");
}
