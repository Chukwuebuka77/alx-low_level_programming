#include "main.h"
/**
* int _islower(int c) - entry point 
* Return: Always zero
*/
int _islower(int c)
{
	if (c >= 'a' &&  c <= 'z')
	{
		return (1);
	}
	return (0);
}
