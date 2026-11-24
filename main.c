
#include "ft_printf.h"
#include <limits.h>

int	main(void)
{
	int	x;

	x = 42;
	ft_printf("===== CHAR =====\n");
	ft_printf("Character: %c\n", 'A');

	ft_printf("===== STRING =====\n");
	ft_printf("String: %s\n", "Hello 42");
	ft_printf("NULL string: %s\n", (char *)NULL);

	ft_printf("===== NUMBER =====\n");
	ft_printf("Positive: %d\n", 123);
	ft_printf("Negative: %d\n", -123);
	ft_printf("Zero: %d\n", 0);
	ft_printf("INT_MIN: %d\n", INT_MIN);
	ft_printf("INT_MAX: %d\n", INT_MAX);
	ft_printf("Integer: %i\n", 42);

	ft_printf("===== UNSIGNED =====\n");
	ft_printf("Unsigned: %u\n", UINT_MAX);
	ft_printf("Zero: %u\n", 0);

	ft_printf("===== HEX =====\n");
	ft_printf("Lowercase: %x\n", 255);
	ft_printf("Uppercase: %X\n", 255);

	ft_printf("===== POINTER =====\n");
	ft_printf("Address: %p\n", &x);
	ft_printf("NULL pointer: %p\n", (void *)0);

	ft_printf("===== PERCENT =====\n");
	ft_printf("100%%\n");

	ft_printf("===== MIXED =====\n");
	ft_printf("%s %d %x %c %%\n", "Hello", -42, 255, 'A');

	return (0);
}
