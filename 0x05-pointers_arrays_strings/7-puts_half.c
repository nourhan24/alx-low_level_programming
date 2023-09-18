#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: input
 * Return: half of input
 */
void puts_half(char *str)
{
	int o, n, sl;

	sl = 0;

	for (o = 0; str[o] != '\0'; o++)
		sl++;

	n = (sl / 2);

	if ((sl % 2) == 1)
		n = ((sl + 1) / 2);

	for (o = n; str[o] != '\0'; o++)
		_putchar(str[o]);
	_putchar('\n');
}

