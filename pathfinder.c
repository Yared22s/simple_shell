#include "main.h"

/**
 * pathfinder - Short description, single line
 * @s1: Description of parameter xe
(* @env: Desription
 * @cmdpath: Des
* Return: Description of the returned value
*/
void pathfinder(char *s1, char **env, char *cmdpath)
{
int i = 0;
char *buf = NULL;
char *s = NULL;
struct stat sta;

	while (env[i])
	{
		if (_strncmp(env[i], "PATH=", 5) == 0)
		buf = env[i];
	i++;
	}

	while (*(++buf) != '/')
	;

	s = strtok(buf, ":");
	while (s)
	{
	_strcpy(cmdpath, s);
	_strcat(strcat(cmdpath, "/"), s1);
		if (stat(cmdpath, &sta) == 0)
		break;
	s = strtok(NULL, ":");
	}

	if (s == NULL)
	*cmdpath = '\0';

}
