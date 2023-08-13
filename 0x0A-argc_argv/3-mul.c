#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - a program that multiplies two numbers
 * @argc: number of arguments
 * @argv: arrays of arguments
 *
 * Return: Always 0(Success)
 */
int main(int argc, char *argv[])
{
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int result = num1 * num2;

		printf("%d\n", result);
		return (0);
	}
}
