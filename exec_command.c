#include "main.h"


/**
 * exec_command - Short description, single line
 * @av: Description of parameter xe
(* @tokens: Desription
 * @buffer: des
 * @env: des
 * @commands: table of commands
 * @t: int
* Return: Description of the returned value
*/
int exec_command(char **av, char **tokens,
char *buffer, char *env[], char **commands, int t)
{
pid_t pid = 0;
int statu = 0;
struct stat sta;
char cmdpath[1024];

(void)commands;

	pid = fork();

	if (pid == -1)
	perror(av[0]);

	if (pid == 0)
	{
		if (t == 1)
		{
		semicolonproblem(av);
		free(commands);
		free(buffer);
		exit(2);
		}
		_strcpy(cmdpath, tokens[0]);
		if (stat(tokens[0], &sta) != 0)
		{
		pathfinder(tokens[0], env, cmdpath);
			if  (cmdpath[0] == '\0')
			{
			perror(av[0]);
			free(buffer);
			free(tokens);
			free(commands);
			exit(127);
			}
		}
	execve(cmdpath, tokens, env);
	}
	else
	wait(&statu);
return (0);
}
