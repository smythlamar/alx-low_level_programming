#include "main.h"
/**
 *print_line - func draws a straight line on the terminal
 *@n: is the number of times _ should be printed
 */
void print_line(int x)
{
	if (x <= 0)
	{
		_putchar('\n');
	} else
	{
		int l;

		for (l = 1; l <= x; l++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
