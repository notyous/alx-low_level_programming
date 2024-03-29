#include "main.h"
/**
* _memset - fills memory with a constant byte
*
* @s: starting adress memory to be filled
* @b: desired value
* @n: number of bytes to be changed
* Return: changed array with new value for n bytes
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
