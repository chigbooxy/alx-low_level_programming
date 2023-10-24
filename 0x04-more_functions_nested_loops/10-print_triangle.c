#include "main.h"
/**
 * print_triangle - prints triangle to stddout
 * @size: length of triangle
 * Return: alaways 0 (successful)
 */
void print_triangle(int size)
{
	{
		int i, j;

		if (size <= 0)
		{
			_putchar('\n');
			return;
		}

		for (i = 1; i <= size; i++)
		{
			for (j = 0; j < size - i; j++)
				_putchar(' ');
			for (j = 0; j < i; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
