#include  <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * add_them_all - returns the sum of all its parameters.
 * @num_args: shows number of arguments
 *
 * Return: total (success)
 **/
int add_them_all(int num_args, ...)
{
	int total = 0;
	int i;

	va_list args;

	va_start(args, num_args);

	for (i = 0; i < num_args; i++)
	{
		total += va_arg(args, int);
	}

	va_end(args);
	return (total);
}
/**
 * int_to_str - converts integer to string.
 * @buffer: contains strins that rep an int
 * @num: this is an int
 *
 **/
void int_to_str(int num, char *buffer)
{
	sprintf(buffer, "%d", num);
}
/**
 * print - prints output.
 * @str: represents a string
 **/
void print(const char *str)
{
	while (*str)
	{
		putchar(*str);
		str++;
	}
}
/**
 * main - calculate the sum of various numbers
 *
 *
 *Return: Always 0 (Success)
 **/
int main(void)
{
	int result1 = add_them_all(1, 1, 2, 3, 5, 8, 11);
	int result2 = add_them_all(3, 6, 9, 13, 15, 8, 11);
	char buffer[20];

	int_to_str(result1, buffer);

	print("Sum 1: ");
	print(buffer);
	print("\n");

	int_to_str(result2, buffer);
	print("Sum 2: ");
	print(buffer);
	print("\n");
	return (0);
}
