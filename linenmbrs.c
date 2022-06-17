#include "main.h"


/**
 * berautix - Short description, single line
 * @void: empty
* Return: Description of the returned value
*/
int berautix(void)
{
int fd, r, nb = 0, i;
char s[1024];

fd = open(".simple_shell_history", O_RDWR);
if (fd == -1)
return (0);

do {
r = read(fd, s, 1024);
if (r == -1)
return (0);

for (i = 0; i < r; i++)
{
if (s[i] == '\n')
nb++;
}
} while (r == 1024);
r = close(fd);
if (r == -1)
return (-1);

return (nb);
}
