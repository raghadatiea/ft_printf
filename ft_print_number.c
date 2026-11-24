/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratieh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/24 13:59:45 by ratieh            #+#    #+#             */
/*   Updated: 2026/11/24 13:59:49 by ratieh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_print_digits(int c)
{
	int		i;
	char	digit[10];

	i = 0;
	while (c > 0)
	{
		digit[i++] = c % 10 + '0';
		c /= 10;
	}
	if (i == 0)
		digit[i++] = '0';
	c = i;
	while (i > 0)
		write(1, &digit[--i], 1);
	return (c);
}

int	ft_print_number(int c)
{
	int	minus;

	minus = 0;
	if (c == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	if (c < 0)
	{
		write(1, "-", 1);
		minus = 1;
		c = -c;
	}
	return (minus + ft_print_digits(c));
}
