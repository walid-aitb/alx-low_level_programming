#include "lists.h"

/**
 * print_list - function that prints all the elements of a linked list
 * @h: pointer to the list_t to print
 * Return: number of elements in the linked list
 */

size_t print_list(const list_t *h)

{
	size_t num;

	num = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		num++;
	}

	return (num);
}
