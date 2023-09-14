#include "main.h"
/**
 * print_last_digit - prints last digit of given number
 * @n: the int to extract the last digut from
 * Return: vakue of the last digut
 */
int print_last_digit(int n)
{
	int a;

	if (n < 0)
		n = -n;

	a = n % 10;

	if (a < 0)
		a = -a;

	_putchar(a + '0');

	return (a);
}
