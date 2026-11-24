#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

int		ft_printf(const char *format, ...);
int		ft_handle_format(char c, va_list *args);
int		ft_print_char(char c);
int		ft_print_string(char *string);
int		ft_print_number(int c);
int		ft_print_unsigned(unsigned int c);
int		ft_print_hex(char format, unsigned int n);
int		ft_print_pointer(void *ptr);
#endif