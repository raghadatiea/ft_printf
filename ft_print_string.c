/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratieh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/24 14:35:13 by ratieh            #+#    #+#             */
/*   Updated: 2026/11/24 14:35:22 by ratieh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_string(char *string)
{
	int	i;

	i = 0;
	if (string == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (string[i] != '\0')
		write(1, &string[i++], 1);
	return (i);
}
