#include "ft_printf.h"

int	ft_print_number(int	c)
{
	int	i;
	int	j;
	char	digit[10];

	i = 0;
	j = 0;
	if (c == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	if (c == 0)
	{
		write (1, "0", 1);
		return (1);
	}
	if (c < 0)
	{
		write (1, "-", 1);
		c = -c;
		i++;
	}
	while (c > 0)
	{
		digit[j++] = c % 10 + '0';
		c = c / 10;
	}
	while (j > 0)
	{
		write (1, &digit[--j], 1);
		i++;
	}
	return (i);
}