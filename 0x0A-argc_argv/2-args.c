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
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
