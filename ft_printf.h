/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratieh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/24 13:44:55 by ratieh            #+#    #+#             */
/*   Updated: 2026/11/24 13:44:58 by ratieh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	ft_handle_format(char c, va_list *args);
int	ft_print_char(char c);
int	ft_print_string(char *string);
int	ft_print_number(int c);
int	ft_print_unsigned(unsigned int c);
int	ft_print_hex(char format, unsigned int n);
int	ft_print_pointer(void *ptr);
#endif
