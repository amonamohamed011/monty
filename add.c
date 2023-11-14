#include "monty.h"
/**
* f_add - adds the top two elements of the stack
* @head: stack head
* @counter: line_number
* Return: void
*/
void f_add(stack_t **head, unsigned int counter)
{
stack_t *h;
int i = 0, b;
h = *head;
while (h)
{
h = h->net;
i++;
}
if (i < 2)
{
fprintf(stderr, "L%d: can't add, stack too short\n", counter);
fclose(bus.file);
free(bus.content);
free_stack(*head);
exit(EXIT_FAILURE);
}
h = *head;
b = h->n + h->next->n;
h->next->n = b;
*head = h->next;
free(h);
}
