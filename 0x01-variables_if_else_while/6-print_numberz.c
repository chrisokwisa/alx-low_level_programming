#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: 0 if success
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		_putchar((num + 10) + '0');

	_putchar("\n");

	return (0);
}
