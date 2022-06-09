#include "main.h"

/**
 * print_last_digit - print last digit of number
 *
 * @n: number
 *
 * Return: the last digit
 *
 */

int print_last_digit(int n)
{
	n =  n % 10;
	if (n < 0)
		n = n * -1;
	_putchar(n + 48);
	return (n);
}
