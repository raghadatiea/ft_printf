/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_format.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratieh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/24 13:41:09 by ratieh            #+#    #+#             */
/*   Updated: 2026/11/24 13:41:12 by ratieh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_handle_format(char alpha_con, va_list *args)
{
	int		count;
	char	c;

	count = 0;
	if (alpha_con == 'c')
		count = ft_print_char(va_arg(*args, int));
	else if (alpha_con == 's')
		count = ft_print_string(va_arg(*args, char *));
	else if (alpha_con == 'p')
		count = ft_print_pointer(va_arg(*args, void *));
	else if (alpha_con == 'd' || alpha_con == 'i')
		count = ft_print_number(va_arg(*args, int));
	else if (alpha_con == 'u')
		count = ft_print_unsigned(va_arg(*args, unsigned int));
	else if (alpha_con == 'x' || alpha_con == 'X')
		count = ft_print_hex(alpha_con, va_arg(*args, unsigned int));
	else if (alpha_con == '%')
	{
		c = alpha_con;
		write(1, &c, 1);
		count = 1;
	}
	return (count);
}
