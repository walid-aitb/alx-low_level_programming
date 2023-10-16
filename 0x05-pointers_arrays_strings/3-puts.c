#include "main.h"
/**
  * _puts - function name
  * @str: function parameter
  * Return: (0)
  */

void _puts(char *str)
{
	int l = 0;

	while (*(str + l) != '\0')
	{
		_putchar(str[l]);
		l++;
	}
	_putchar('\n');
}
