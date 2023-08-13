#include "main.h"
#include <stdio.h>
/**
 * main - program that print the number of arguments
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0(Success)
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
