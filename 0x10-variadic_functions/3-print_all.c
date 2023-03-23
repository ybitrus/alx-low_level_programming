#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - Prints any number of arguments based on a format string
 * @format: A string representing the format of the arguments
 *          to be printed. Can contain 'c', 'i', 'f', or 's'.
 *          Any other character is ignored.
 *          If format is NULL, the function prints only a newline.
 * @...: Any number of arguments to be printed, based on the format string.
 *        The types of these arguments depend on
 *         the characters in the format string.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *s_val;
	int i_val;
	char c_val;
	double f_val;
	int idx, flag;

	va_start(args, format);

	idx = 0;
	while (format != NULL && format[idx] != '\0')
	{
		flag = 1;
		switch (format[idx])
		{
			case 'c':
				c_val = va_arg(args, int);
				printf("%c", c_val);
				break;
			case 'i':
				i_val = va_arg(args, int);
				printf("%d", i_val);
				break;
			case 'f':
				f_val = va_arg(args, double);
				printf("%f", f_val);
				break;
			case 's':
				s_val = va_arg(args, char *);
				if (s_val == NULL)
					printf("(nil)");
				else
					printf("%s", s_val);
				break;
			default:
				flag = 0;
				break;
		}

if (format[idx + 1] != '\0' && flag == 1)
			printf(", ");

		idx++;
	}

	va_end(args);

	printf("\n");
}
