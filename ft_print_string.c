#include "ft_printf.h"

int	ft_print_string(char *string)
{
	int	i;

	i = 0;
	if (string == NULL)
	{
		write (1, "(null)", 6);
		return (6);
	}
	while (string[i] != '\0')
		write (1, &string[i++], 1);
	return (i);
}