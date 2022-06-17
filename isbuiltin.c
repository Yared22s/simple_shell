#include "main.h"


/**
 * gohome - Short description, single line
 * @buffer: string
 * @env: Description of parameter xe
* Return: Description of the returned value
*/
void gohome(char *buffer, char **env)
{
	int i = 0;
	char *home;

if (!_strcmp(buffer, "cd"))
{
	while (env[i])
{
	if (!_strncmp(env[i], "HOME", 4))
	{
	home = env[i];
	break;
	}
	i++;
}
while (*(++home) != '/')
;
if (chdir(home) == -1)
perror("No such file or directory");
}

if (!_strcmp(buffer, "cd -"))
{
while (env[i])
{
	if (!_strncmp(env[i], "OLDPWD", 6))
	{
	home = env[i];
	break;
	}
	i++;
}
while (*(++home) != '/')
;
if (chdir(home) == -1)
perror("No such file or directory");
}
}

/**
 * historic_moment - Short description, single line
 * @head: Description of parameter xe
* Return: Description of the returned value
*/
void historic_moment(h_t *head)
{
		h_t *tmp = head;
		char buff[1024];
		int i = 0, fd, rb;

	while (tmp->next)
	tmp = tmp->next;

	/* if (tmp->linenmbr < 4096) */
		fd = open(".simple_shell_history", O_RDWR); /*test if fail */
	do {
		rb = read(fd, buff, 1024); /*test if read also remember to close */
		itoa(i);
		i++;
		write(1, buff, rb);

	} while (rb == 1024);

	tmp = head;
	while (tmp)
	{
	itoa(tmp->linenmbr % 4096);
	write(1, " ", 1);
	write(1, tmp->line, _strlen(tmp->line));
	tmp = tmp->next;
	}

}


/**
 * isbuiltin - Short description, single line
 * @buffer: Description of parameter xe
(* @env: Desription
*  @head: linked list
* Return: Description of the returned value
*/
int isbuiltin(char *buffer, char *env[], h_t **head)
{
int i = 0;


	if (_strcmp(buffer, "exit") == 0)
	return (2);

	if (_strcmp(buffer, "env") == 0)
	{
		while (env[i])
		{
		_puts(env[i++]);
		_puts("\n");
		}
	return (1);
	}

if (_strcmp(buffer, "history") == 0)
{
	historic_moment(*head);
	return (3);
}


if (!_strcmp(buffer, "cd") || !_strcmp(buffer, "cd -"))
{
gohome(buffer, env);
return (4);

}


return (-1);
}









