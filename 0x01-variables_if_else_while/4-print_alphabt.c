#include <stdio.h>
/**
 * main - Alphabet entry point
 * Return: (0)
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if ((c != 'q' && c != 'e') && c <= 'z')
			putchar (c);
		c++;
	}
	putchar ('\n');
	return (0);
}
