#include <stdio.h>
#include "ft_printf.h"

//gcc ft_printf.c main.c specifiers_array.c ft_printf_utils.c

int	main(void)
{ 
	ft_printf("teste: %c%s%s%c%s", 'H', "ello", " World, ", 't', "his works");
	return (0);
}
