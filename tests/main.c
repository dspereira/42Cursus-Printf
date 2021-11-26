#include <stdio.h>
#include "../ft_printf/ft_printf.h"

//gcc main.c ../ft_printf/libftprintf.a

int	main(void)
{
	char *p = "test";
	
	//ft_printf("\nft_printf: %s%c%s%c\nDone in %u%i%d %s %i%%", "hello", ' ', "world", '!', 2,0,21, "with", 100);
	//printf("\n\nprintf: %s%c%s%c\nDone in %u%i%d %s %i%%", "hello", ' ', "world", '!', 2,0,21, "with", 100);

	//ft_printf("\nft_printf: %i %d %u %u %d %i", -1, -2, -3, 4, 5, 6);
	//printf("\n   printf: %i %d %u %u %d %i", -1, -2, -3, 4, 5, 6);

	//ft_printf("\nft_printf: %x  %X", 4294967295, -324526);
	//ft_printf("\nft_printf: %x  %X", 4294967295, -324526);
	//printf("\n   printf: %x  %X", 4294967295, -324526);

	//ft_printf("\nft_printf: %x  %X", -18446744073709551615, -9223372036854775807);
	//printf("\n   printf: %x  %X", -18446744073709551615, -9223372036854775807);

	//ft_printf("\nft_printf: %X",-324526);

	//ft_printf("\nft_printf: %p", p);
	//printf("\n   printf: %p", p);

	p = 0;
	ft_printf("\nft_printf: %p", p);
	printf("\n   printf: %p", p);

	//ft_printf("\nft_printf: %p", 18446744073709551615);
	//printf("\n   printf: %p", 18446744073709551615);


	//int teste = 9;
	//ft_printf("teste: %s,\n", teste);

	//long int a = 4294967295234;
	//ft_printf("\nft_printf: %i", a);


	//printf("valor: %lu", (unsigned long) 15/16);


	return (0);
}