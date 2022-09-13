#include "main.h"
/**
* _islower - entry point
* @c: is an int
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
