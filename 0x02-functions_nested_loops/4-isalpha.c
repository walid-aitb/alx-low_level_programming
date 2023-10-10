#include "main.h"

/**
  * _isalpha - Shows 1 if the input is a
  * letter. Otherwise, shows 0
  *
  * @c: The character to be checker
  *
  * Return: 1 for letters. Returns 0 otherwise
  */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
