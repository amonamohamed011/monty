#include "monty.h"
/**
* f_swap - adds the top two elements of the stack
* @head: stack head
* @counter: line_number
* Return: void
*/
void f_swap(stack_t **head, unsigned int counter)
{
stack_t *h;
int i  = 0, b;
h = *head;
while (h)
{
h = h->next;
i++;
}
if (i < 2)
{
fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
fclose(bus.file);
free(bus.content);
free_stack(*head);
eit(EXIT_FAILURE);
}
h = *head;
b = h->n;
h->n = h->next->n;
h->next->n = b;
}
