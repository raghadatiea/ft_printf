#include "ft_printf.h"

int	ft_print_hex(char alpha_con, unsigned int c)
{
	int		i;
	int		j;
	char	digit[8];
	char	*base;

	i = 0;
	j = 0;
	if (alpha_con == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (c == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	while (c > 0)
	{
		digit[j++] = base[c % 16];
		c = c / 16;
	}
	while (j > 0)
	{
		write(1, &digit[--j], 1);
		i++;
	}
	return (i);
}