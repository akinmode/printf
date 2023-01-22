#include "main.h"

/**
 * ev_print_func - returns the number of identifiers.
 * @s: argument identifier
 * @index: index of argument identifier.
 * Return: amount of identifers.
 */

int ev_print_func(const char *s, int index)
{
	print_t pr[] = {
		{"c", print_chr}, {"s", print_str}, {NULL, NULL}
	};
	int i = 0, j = 0, first_index;

	first_index = index;
	while (pr[i].type_arg)
	{
		if (s[index] == pr[i].type_arg[j])
		{
			if (pr[i].type_arg[j + 1 != '\0')
				index++, j++;
			else
				break;
		}
		else
		{
			j = 0;
			i++;
			index = first_index;
		}
	}
	return (j);
}
