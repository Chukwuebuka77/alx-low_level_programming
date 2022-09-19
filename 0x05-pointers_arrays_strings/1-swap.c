#include "main.h"
#include <stdio.h>
/**
* swap_int - to swap an int
* @a: an int pointer
* @b: an int pointer
* Return: Always 0
*/
void swap_int(int *a, int *b)
{
	int i = *a;
	int c = *b;
	*a = c;
	*b = i;
}
