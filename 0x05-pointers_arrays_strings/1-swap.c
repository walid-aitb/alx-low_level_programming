#include "main.h"
/**
  * swap_int - Fucntion name
  * @a: function parameter
  * @b: function parameter
  * Return: (0)
  */

void swap_int(int *a, int *b)
{
	int n = *a;
	*a = *b;
	*b = n;
}
