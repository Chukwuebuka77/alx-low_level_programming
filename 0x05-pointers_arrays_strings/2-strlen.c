#include "main.h"
#include <stdio.h>
/**
* _strlen - returns the length of a string
* @s: is a char
* Return: Always 0
*/
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
