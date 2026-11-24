#include "ft_printf.h"

int	ft_print_pointer(void *ptr)
{
	int				i;
	int				j;
	unsigned long long	n;
	char			digit[16];
	char			*base;

	i = 0;
	j = 0;
	n = (unsigned long long)ptr;
	base = "0123456789abcdef";
	write(1, "0x", 2);
	i = 2;
	if (n == 0)
	{
		write(1, "0", 1);
		return (i + 1);
	}
	while (n > 0)
	{
		digit[j++] = base[n % 16];
		n = n / 16;
	}
	while (j > 0)
	{
		write(1, &digit[--j], 1);
		i++;
	}
	return (i);
}