#include "main.h"

/**
 * _power - cla base and power
 * @base: base of the exponet
 * @pow: power of the exponent
 * Return: value of base and power
 */
unsigned long int _power(unsigned int base, unsigned int pow)
{
	unsigned long int num;
	unsigned int i;

	num = 1;
	for (i = 1; i <= pow; i++)
		num *= base;
	return (num);
}
/**
 * print_binary - a function that prints the binary representation of a number.
 * @n: number of pretend
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int lan, results;
	char flag;

	flag = 0;
	lan = _power(2, sizeof(unsigned long int) * 8 - 1);

	while (lan != 0)
	{
		results = n & lan;
		if (results == lan)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag == 1 || lan == 1)
		{
			_putchar('0');
		}
		lan >>= 1;
	}
}
