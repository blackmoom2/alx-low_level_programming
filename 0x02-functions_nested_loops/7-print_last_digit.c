#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number.
 * @n: chachs and prints the last num
 * Return: last num
 */
int print_last_digit(int n)
{
	int num;

	num = (n % 10);

	if (num < 0)
	{
		num = (-1 * num);
	}

	_putchar(num + '0');
	return (num);
}
