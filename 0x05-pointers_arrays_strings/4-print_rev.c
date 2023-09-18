#include "main.h"
/**
 * print_rev - imprime en reversa
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int sl = 0;/*strimg length*/
	int sll;/*string reverse length*/

	while (*s != '\0')
	{
		sl++;
		s++;
	}
	s--;
	for (sll = sl; sll > 0; sll--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
