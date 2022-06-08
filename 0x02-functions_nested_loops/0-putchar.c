#include "main.h"
/**
 * main - Entry point
 *
 * Return: Alway 0 (Success)
 */
int main(void)
{
	char *danny = "_putchar";
	while (*danny)
	{
		_putchar(*danny);
		danny++;
	}
	_putchar('\n');
	return (0);
}
