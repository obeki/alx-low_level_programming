#include <stdio.h>
#include <stdlib.h>

/**
 * main - print number of arguments passed into it
 * @argc: number of args passed
 * @argv: args passed
 * Return: Always(0) Success
 */

int main(int argc, __attribute__((unused))char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
