#include "main.h"
/**
  * _islower - Returns 1 if the input is a
  * lowercase character. Otherwise return 0
  * @c : the char to be checked
  * Return: 1 for lowercase. 0 for the rest.
  */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
{
	return (1);
}
	else
{
	return (0);
}
	_putchar('\n');
}
