#include "main.h"
/**
* main - check the code for Holberton School students.
* Return: Always 0.
*/
void print_most_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		if (i != 2 && i != 4)
			_putchar(i + '0');
		++i;
	}
	_putchar('\n');
}
