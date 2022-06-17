#include "main.h"

/**
 * _strcpy - Short description, single line
 * @dest: Description of parameter xe
(* @src: Desription
* Return: Description of the returned value
*/
char *_strcpy(char *dest, char *src)
{
int i = 0, j;
while (src[i] != '\0')
i++;
for (j = 0 ; j <= i ; j++)
dest[j] = src[j];
return (dest);
}

/**
 * _strcat - Short description, single line
 * @dest: Description of parameter dest
(* @src: Description of parameter src
* Return: Description of the returned value
*/
char *_strcat(char *dest, char *src)
{
char *x = dest;
int i = 0, j = 0, a = 0;
while (dest[i] != '\0')
i++;
while (src[j] != '\0')
j++;
for (a = 0 ; a <= j ; a++)
dest[a + i] = src[a];
return (x);
}

/**
 * _strcmp - Short description, single line
 * @s1: Description of parameter s1
(* @s2: Description of parameter s2
* Return: Description of the returned value
*/
int _strcmp(char *s1, char *s2)
{
int i = 0, n = 0;
if (_strlen(s1) != _strlen(s2))
	return (1);
while (s1[i] != '\0' && s2[i] != '\0')
{
n = s1[i] - s2[i];
if (n != 0)
break;
i++;
}
return (n);
}


/**
 * _strlen - Short description, single line
 * @s: Description of parameter x
(*
* Description: Longer description of the function)?
(* section header: Section description)*
* Return: Description of the returned value
*/
int _strlen(char *s)
{
int i = 0;
while (s[i] != '\0')
i++;
return (i);
}

/**
 *_strdup - description
 *@str: description
 *Return: description
 */
char *_strdup(char *str)
{
int i = 0, j = 0;
char *s = NULL;
if (str == NULL)
return (NULL);
i = _strlen(str) + 1;
s = malloc(sizeof(char) * i);
if (s == NULL)
return (NULL);
while (j < i - 1)
{
s[j] = str[j];
j++;
}
s[j] = '\0';
return (s);
}


