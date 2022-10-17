#include <stdio.h>

/**
 * main - print all combinations of single digit numbers
 *        numbers must be separated ny , followed by space
 *        printed in ascending order
 *        can only use putchar
 *
 * Return: Always 0
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar((num % 10) + '0');
		if (num == 9)
			continue;
		putcher(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
