#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	int	i;
	int	count;
	va_list args;

	va_start(args, format);
	i = 0;
	count = 0;
	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			write(1, &format[i], 1);
			count++;
		}
		else
		{
			count += ft_handle_format(format[++i], &args); 
		}
		i++;
	}
	va_end(args);
	return (count);
}