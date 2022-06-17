#include "main.h"




/**
 * writehistory - Short description, single line
 * @head: Description of parameter xe
* Return: Description of the returned value
*/
void writehistory(h_t *head)
{
int fd;
h_t *tmp = head;
char nb[5];

fd = open("/home/.simple_shell_history",
O_RDWR | O_APPEND | O_CREAT, 0600);

while (tmp)
{
itoa2(tmp->linenmbr, nb);

write(fd, nb, _strlen(nb));
write(fd, " ", 1);
write(fd, tmp->line, _strlen(tmp->line));

tmp = tmp->next;
}

close(fd);

}
