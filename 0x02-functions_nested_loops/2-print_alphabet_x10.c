#include "main.h"

/**
 * print_alphabet_x10 - prints out the alphabet
 * followed by a new line
 */
void print_alphabet_x10(void)
{
	char i;
	int x;
	x = 0;

	while (x < 10)
	{
	for (i = 'a'; i <= 'z'; i++)
	_putchar(i);
	_putchar('\n');
	x++;
	}
}
