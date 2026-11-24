
#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int	main(void)
{
	int	len1;
	int	len2;

	printf("\n--- CHAR ---\n");
	len1 = printf("%c\n", 'A');
	len2 = ft_printf("%c\n", 'A');
	printf("Return: %d | %d\n", len1, len2);

	printf("\n--- STRING ---\n");
	len1 = printf("%s\n", NULL);
	len2 = ft_printf("%s\n", NULL);
	printf("Return: %d | %d\n", len1, len2);

	printf("\n--- INT ---\n");
	len1 = printf("%d %d %d %d\n", 0, -42, INT_MAX, INT_MIN);
	len2 = ft_printf("%d %d %d %d\n", 0, -42, INT_MAX, INT_MIN);
	printf("Return: %d | %d\n", len1, len2);

	printf("\n--- UNSIGNED ---\n");
	len1 = printf("%u %u\n", 0, UINT_MAX);
	len2 = ft_printf("%u %u\n", 0, UINT_MAX);
	printf("Return: %d | %d\n", len1, len2);

	printf("\n--- HEX ---\n");
	len1 = printf("%x %X\n", 255, UINT_MAX);
	len2 = ft_printf("%x %X\n", 255, UINT_MAX);
	printf("Return: %d | %d\n", len1, len2);

	printf("\n--- POINTER ---\n");
	len1 = printf("%p\n", NULL);
	len2 = ft_printf("%p\n", NULL);
	printf("Return: %d | %d\n", len1, len2);

	printf("\n--- PERCENT ---\n");
	len1 = printf("%% %%\n");
	len2 = ft_printf("%% %%\n");
	printf("Return: %d | %d\n", len1, len2);

	printf("\n--- MIXED ---\n");
	len1 = printf("%c %s %d %u %x %X %p %%\n",
			'A', "Hello", -42, UINT_MAX, 255, 255, NULL);
	len2 = ft_printf("%c %s %d %u %x %X %p %%\n",
			'A', "Hello", -42, UINT_MAX, 255, 255, NULL);
	printf("Return: %d | %d\n", len1, len2);

	return (0);
}

