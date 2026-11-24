/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratieh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/24 14:19:48 by ratieh            #+#    #+#             */
/*   Updated: 2026/11/24 14:19:50 by ratieh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_print_ptr_hex(unsigned long long n)
{
	int		i;
	int		len;
	char	digit[16];
	char	*base;

	i = 0;
	base = "0123456789abcdef";
	if (n == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	while (n > 0)
	{
		digit[i++] = base[n % 16];
		n /= 16;
	}
	len = i;
	while (i > 0)
		write(1, &digit[--i], 1);
	return (len);
}

int	ft_print_pointer(void *ptr)
{
	int	len;

	if (!ptr)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	write(1, "0x", 2);
	len = ft_print_ptr_hex((unsigned long long)ptr);
	return (len + 2);
}
