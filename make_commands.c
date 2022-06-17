#include "main.h"

/**
 * make_command - Short description, single line
 * @buffer: Description of parameter xe
 * @sep: par
* Return: Description of the returned value
*/
char **make_command(char *buffer, char  *sep)
{
char **tokens;
char *str = NULL;
int word = 0, i = 0;
char s = *sep;


	while (buffer[i] != '\0')
	{
		if (buffer[i] != s)
		{
		word++;
			while (buffer[i] != s && buffer[i] != '\0')
			i++;
		}
		else
		i++;
	}

	tokens = malloc(sizeof(char *) * (word + 1));
	if (tokens == NULL)
	return (NULL); /* */
	str = strtok(buffer, sep);

	i = 0;
	while (str)
	{
		if (*str == '#')
		break;

	tokens[i++] = str;
	str = strtok(NULL, sep);
	}

tokens[i] = NULL;

return (tokens);
}
