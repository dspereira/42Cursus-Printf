#include <stdio.h>
#include "ft_printf.h"

//gcc ft_printf.c main.c specifiers_array.c ft_printf_utils_char.c ft_printf_utils_num.c ft_printf_utils_hex.c

int	main(void)
{
	char *p = "teste";
	ft_printf("\nte%%ste: %c%s%s%c%s \nnumeros com letras: %d%i%i%d %s", 'H', "ello", " World, ", 't', "his works", 2,0,2,1, "ano");
	printf("\n\nte%%ste: %c%s%s%c%s \nnumeros com letras: %d%i%i%d %s", 'H', "ello", " World, ", 't', "his works", 2,0,2,1, "ano");

	//ft_printf("\n\n numeros: %i %d %u %u %d %i", -1, -2, -3, 4, 5, 6);
	//printf("\nnumeros: %i %d %u %u %d %i", -1, -2, -3, 4, 5, 6);

	//printf("\nvalor: %x, %X, %u", -255, -255, -255);

	//ft_printf("\nvalor: %x  %X", 42949672957, -324526);
	//printf("\nvalor: %x  %X", 42949672957, -324526);

	//ft_printf("\nvalor: %x  %X", 2, 10);
	//printf("\nvalor: %x  %X", 2, 10);
	
	//p = 0;
	//ft_printf("\npointer: %p", p);
	//printf("\npointer: %p", p);

	return (0);
}