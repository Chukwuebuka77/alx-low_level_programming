#include "main.h"
#include <stdio.h>
/**
* _puts - prints a string followed by a new line
* @str: is a char
* Return: Always 0
*/
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
