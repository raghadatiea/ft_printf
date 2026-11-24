/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratieh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/24 14:35:54 by ratieh            #+#    #+#             */
/*   Updated: 2026/11/24 14:35:56 by ratieh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_unsigned(unsigned int c)
{
	int		i;
	int		j;
	char	digit[10];

	i = 0;
	j = 0;
	if (c == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	while (c > 0)
	{
		digit[j++] = c % 10 + '0';
		c = c / 10;
	}
	while (j > 0)
	{
		write(1, &digit[--j], 1);
		i++;
	}
	return (i);
}
