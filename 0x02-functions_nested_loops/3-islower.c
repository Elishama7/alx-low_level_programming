#include "main.h"

/**
 * _islower - checks if input is lowercase
 * @c: variable to determine if input is lowercase
 * Return: 0 (success)
 */
int _islower(int c)
{
	int i;

	i = 0;
	if (c >= 'a' && c <= 'z')
	{
		i = 1;
	}
	return (i);
}
