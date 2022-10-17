#include <stdio.h>

/**
 * main - print all single digit numbers in base 10 starting from 0
 *        without using the printf or char variable
 *
 * Return: Always 0
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');
	putchar('\n');
	return (0);
}
