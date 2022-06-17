#include "main.h"
/**
* main - Short description, single line
* @ac: number of args
* @av: args
* @env: current enviroment
* Return: Description of the returned value
*/

int main(int ac, char *av[], char *env[])
{
int bytesRead, x = 0, t = 0, z = -1;
size_t buffsize;
char *buffer = NULL, **tokens = NULL, **commands = NULL;
h_t *head = NULL;

if (ac != 1)
{ filecommands(av, env, t);
return (0);
} signal(SIGINT, siggy);
	while (1)
	{ t = 0;
	if (isatty(STDIN_FILENO))
	_puts("#cisfun$ ");
	bytesRead = getline(&buffer, &buffsize, stdin);
	if (bytesRead == -1)
	break;
	x = berautix() - 1;
	make_history(buffer, &head, x);
	buffer[bytesRead - 1] = '\0';
	if (*buffer == '\0')
	continue;
	z = isbuiltin(buffer, env, &head);
	if (z == 1 || z == 4 || z == 3)
	continue;
	if (z == 2)
	free(buffer), free_nodes(head), _exit(0);
	if (spacecheck(buffer) == 0)
	continue;
	tokenizing(tokens, commands, av, env, buffer, t);
	}
	writehistory(head);
	free_nodes(head);
	free(buffer);
return (0);
}
