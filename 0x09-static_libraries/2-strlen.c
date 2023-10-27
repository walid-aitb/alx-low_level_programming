#include "main.h"
/**
  * _strlen - function name
  * @s: function parameter
  * Return: (0)
  */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		s++;
		length++;
	}
	return (length);
}
