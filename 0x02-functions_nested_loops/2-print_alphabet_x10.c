#include <main.h>
/**
* main - check the code
* Return: Always 0.
*/
void print_alphabet_x10(void);
{
	char c;
	
	char i;

	for (c = 0;  c <= 9; c++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
