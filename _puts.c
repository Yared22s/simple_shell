#include "main.h"



/**
 * _puts - Short description, single line
 * @str: Description of parameter x
* Return: Description of the returned value
*/
void _puts(char *str)
{
int i = 0;

	while (str[i])
	{
		i++;
	}
write(STDOUT_FILENO, str, i);

}

/**
 * siggy - Short description, single line
 * @sig_num: Description of parameter x
* Return: Description of the returned value
*/
void siggy(int sig_num)
{
	if (sig_num == SIGINT)
	write(STDOUT_FILENO, "\n#cisfun$ ", 10);
}

/**
 * itoa - Short description, single line
 * @n: Description of parameter x
* Return: Description of the returned value
*/
void itoa(int n)
{
int i = 0, j, div = 1, x = n;
char tmp;

while (x /= 10)
{
i++;
}
for (j = 0 ; j < i ; j++)
div *= 10;

while (div)
{
	tmp = (n / div) +'0';
	write(1, &tmp, 1);
	n = n % div;
	div /= 10;
}

}



/**
 * _strncmp - Short description, single line
 * @s1: Description of parameter s1
 * @s2: Description of parameter s2
 * @x: int
* Return: Description of the returned value
*/
int _strncmp(char *s1, char *s2, int x)
{
int i = 0, n = 0;
for (i = 0 ; i < x ; i++)
{
n = s1[i] - s2[i];
if (n != 0)
break;
i++;
}
return (n);
}



/**
 * itoa2 - Short description, single line
 * @n: Description of parameter xe
 * @e: string
* Return: Description of the returned value
*/
char *itoa2(int n, char *e)
{
int i = 0, l = 0, j, div = 1, x = n;
char tmp;


while (x /= 10)
{
i++;
}


for (j = 0 ; j < i ; j++)
div *= 10;

while (div)
{
	tmp = (n / div) +'0';
	e[l] = tmp;
	n = n % div;
	div /= 10;
l++;
}
e[l] = '\0';

return (e);
}
