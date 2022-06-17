#include "main.h"


/**
 * free_nodes - Short description, single line
 * @head: empty
* Return: Description of the returned value
*/
void free_nodes(h_t *head)
{
h_t *tmp;

	tmp = head;

	if (head)
	{
	while (head)
	{
		tmp = head->next;
		free(head->line);
		free(head);
		head = tmp;
	}
}
}
