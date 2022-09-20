#include "lists.h"

/**
 * check_cycle - checks if a linked list is circular or not
 * @list: linked list to check
 * Return: 1 (linked list is circular) 0 (no loop detected)
 */
<<<<<<< HEAD

=======
>>>>>>> f1891a1fa7f03c694d3976c6e7f4992b4419360d
int check_cycle(listint_t *list)
{
	listint_t *z1 = NULL, *z2 = NULL;

	z1 = z2 = list;
	while (list && z1 && z2 && z1->next && z2->next)
	{
		z1 = z1->next;
		z2 = z2->next->next;
		if (!z2 || !z1)
			return (0);
		if (z2->next == z1)
<<<<<<< HEAD
			return (1);
=======
			return (1); 
>>>>>>> f1891a1fa7f03c694d3976c6e7f4992b4419360d
	}
	return (0);
}
