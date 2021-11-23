#include <stdio.h>
#include "ft_printf.h"

//gcc ft_printf.c main.c specifiers_array.c ft_printf_utils.c

int	main(void)
{ 
	ft_printf("\nteste: %c%s%s%c%s \nnumeros com letras: %d%i%i%d %s", 'H', "ello", " World, ", 't', "his works", 2,0,2,1, "ano");
	printf("\n\nteste: %c%s%s%c%s \nnumeros com letras: %d%i%i%d %s", 'H', "ello", " World, ", 't', "his works", 2,0,2,1, "ano");
	return (0);
}
