#include <stdio.h>
/*
* main - entry point
* Description: print the different chars of alphabet in diverese capitalization
* Return: 0
*/
int main(void)
{
char c = 'a';

while (c <= 'z')
{
putchar(c);
c++;
}
{
while (c <= 'Z')
putchar(c);
c++;
}
putchar('\n')
return (0)
}
