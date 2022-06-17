#include "main.h"

/**
* tokenizing - Short description, single line
* @tokens: number of args
* @commands: args
* @av: current enviroment
* @env: current enviroment
* @env: current enviroment
* @buffer: current enviroment
* @t: current enviroment
* Return: Description of the returned value
*/

void tokenizing(char **tokens, char **commands, char **av,
char **env, char *buffer, int t)
{
int i = 0;


	commands = make_command(buffer, ";");
	if (testspace(commands) == 0)
	for (i = 0 ; commands[i] ; i++)
	{
	tokens = make_command(commands[i], " ");
	exec_command(av, tokens, buffer, env, commands, t);
	if (tokens)
	free(tokens);
	}
	else
	{
	t = 1;
	exec_command(av, tokens, buffer, env, commands, t);
	}
	free(commands);
}
