#include <stdio.h>

/**
 * main - prints lowercase alphabet in reverse
 *        using only putchar function
 *
 * Return: Always 0
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);
	putchar('\n');
	return (0);
}
