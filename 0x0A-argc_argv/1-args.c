#include <stdio.h>
#include "main.h"

/**
 * main - To print name of a programe
 * @argc: numbers enter in the command prompt or terminal
 * @argv: It hold command enter in the terminal
 *
 * Return: Always (0)
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
