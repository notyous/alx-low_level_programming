#include <stdio.h>
/**
 * main - entry point
 *
 * Description: print all digits of base 10 without char or printf
 * Return: always 0
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');
	return (0);
}
