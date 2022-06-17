#include "main.h"




/**
 * spacecheck - Short description, single line
 * @buffer: Description of parameter xe
 * Return: Description of the returned value
 */
int spacecheck(char *buffer)
{
	int i = 0;

	while (buffer[i])
	{
		if (buffer[i] == ' ')
			i++;
		else
			return (1);
	}

	return (0);
}
