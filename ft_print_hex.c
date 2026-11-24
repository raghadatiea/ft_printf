/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratieh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/24 13:45:36 by ratieh            #+#    #+#             */
/*   Updated: 2026/11/24 13:45:38 by ratieh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex(char alpha_con, unsigned int c)
{
	int		i;
	int		len;
	char	digit[8];
	char	*base;

	i = 0;
	len = 0;
	base = "0123456789abcdef";
	if (alpha_con == 'X')
		base = "0123456789ABCDEF";
	if (c == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	while (c > 0)
	{
		digit[i++] = base[c % 16];
		c /= 16;
	}
	len = i;
	while (i > 0)
		write(1, &digit[--i], 1);
	return (len);
}
