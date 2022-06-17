#include "main.h"


/**
 * semicolonproblem - Short description, single line
 * @av: Description of parameter xe
* Return: Description of the returned value
*/
void semicolonproblem(char **av)
{

char *message = ": syntax error near unexpected token `;'\n";

write(STDERR_FILENO, av[0], _strlen(av[0]));
write(STDERR_FILENO, message, _strlen(message));

}
