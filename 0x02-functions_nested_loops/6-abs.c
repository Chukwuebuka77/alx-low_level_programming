#include "main.h"
#include <stdlib.h>
/**
* _abs - check the code
* Return: Always 0
*/
int _abs(int c)
{
	if (c > 0 || c == 0)
	{
		return (c);
	}
	else
		return (c * -1);
}
