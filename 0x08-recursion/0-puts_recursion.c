/*
 * file: 0-puts_recursion.c
 * Auth: sam
 */

#include "main.h"

/**
 * _puts_recursion -Prints astring, followed by a new line.
 * @s: The string to be printed.
 */
void _puts_recurision(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n')
}
