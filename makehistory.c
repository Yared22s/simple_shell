#include "main.h"



/**
 * make_history - Short description, single line
 * @buffer: Description of parameter xe
 * @head: par
 * @x: nbr of lines in file
* Return: Description of the returned value
*/
void make_history(char *buffer, h_t **head, int x)
{
h_t *tmp = *head;
h_t *p;

p = malloc(sizeof(h_t));
if (p == NULL)
return;
p->line = _strdup(buffer);
p->next = NULL;

if (!*head)
{
p->linenmbr = x + 1;
*head = p;
}
else
{
while (tmp->next)
tmp = tmp->next;
p->linenmbr = tmp->linenmbr + 1;
tmp->next = p;
}
}
