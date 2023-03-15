#include <stdio.h>
#include <stdlib.h>

/**
 * main - To print name of a programe
 * @argc: numbers enter in the command prompt or terminal
 * @argv: It hold command enter in the terminal
 *
 * Return: Always (0)
 */

int main(int argc, char *argv[])
{
	int x = 0, y = 0;

	if (argc == 4)
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		printf("%d\n", x + y);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
