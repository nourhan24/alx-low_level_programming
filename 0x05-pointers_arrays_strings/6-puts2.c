#include "main.h"
/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @str: input
 * Return: print
 */
void puts2(char *s)
{
	for (int i = 0; s[i] != '\0'; i += 2)
	{
	_putchar(s[i]);
	}
	_putchar('\n');
}
