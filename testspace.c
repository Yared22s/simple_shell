#include "main.h"


/**
 * testspace - Short description, single line
 * @commands: Description of parameter xe
* Return: Description of the returned value
*/
int testspace(char **commands)
{

int j = 0, l, flag;



	while (commands[j])
	{
		l = 0;
		flag = -1;
		if (commands[j][l])
		while (commands[j][l])
		{
			if (commands[j][l] != ' ')
			{
				flag = 0;
				break;
			}

		l++;

		}

		if (flag == -1 && commands[j + 1])
		return (-1);

		j++;
	}

return (0);
}
