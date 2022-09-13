#include "main.h"
/**
* _isalpha - entry point
* @c: is an int
* Return: Always zero
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
