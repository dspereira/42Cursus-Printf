/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogo <diogo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 14:53:20 by diogo             #+#    #+#             */
/*   Updated: 2021/11/24 17:46:06 by diogo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

void run_specifer_func(va_list args, t_format_spec *data, char specifier)
{
	int i;

	i = 0;
	while(i < SIZE)
	{
		if (data[i].specifier == specifier)
			data[i].func(args);
		i++;
	}
}

void print_char(va_list args)
{
	int c;

	c = va_arg(args, int);
	write(1,&c,1);
}

void print_string(va_list args)
{
	char *s;

	s = va_arg(args, char*);
	while (*s != '\0')
	{
		write(0, &(*s), 1);
		s++;
	}
}

// funçoes do %i e %u
void put_nbr(long int n)
{
	long int	nb;
	char		c;

	nb = n;
	if (n < 0)
	{
		write(0, "-", 1);
		nb *= -1;
	}
	if (nb >= 10)
		put_nbr((nb / 10));
	c = nb - ((nb / 10) * 10) + 48;
	write(0, &c, 1);
}

void print_number(va_list args)
{
	put_nbr(va_arg(args, int));
}

void print_percent(void)
{
	write(0, "%", 1);		
}

void print_unsigned_int(va_list args)
{
	put_nbr(va_arg(args, unsigned int));
}


// Print hexa
void print_hex(long int n, int c)
{
	char *conv_up = "0123456789ABCDEF";
	char *conv_low = "0123456789abcdef"; 
	char nb[15];
	int i;

	i = 0;
	if (n == 0)
	{
		write(0, "0", 1);
		return ;
	}
	while (n > 0)
	{
		if (c)
			nb[i] = conv_up[n % 16];
		else 
			nb[i] = conv_low[n % 16];
		n /= 16;
		i++;
	}
	nb[i] = '\0';
	i--;
	while (i >= 0)
	{
		write(0, &nb[i], 1);
		i--;
	} 
}


char *str_inverter(char *dst, char *src)
{
	int i;
	int j;

	i = 0;
	while (src[j] != '\0')
		j++;
	j--;
	while (src[i] != '\0')
	{
		dst[i] = src[j];
		j--;
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

/*
	return: size of number in hexadecimal
*/
int convert_hex(char *nb, char *conv_str, long int n)
{
	char inv_nb[15];
	int i;
	int j;

	i = 0;
	if (n == 0)
	{
		inv_nb[i] = '0';
		i++;
	}
	while (n > 0)
	{
		inv_nb[i] = conv_str[n % 16];
		n /= 16;
		i++;
	}
	inv_nb[i] = '\0';
	str_inverter(nb, inv_nb);
	return (i);
}

void print_hexa_low(va_list args)
{
	char nb[15];
	int size;

	size = convert_hex(nb, HEX_LOWER, (long int) va_arg(args, unsigned int));
	write(0, nb, size);
}

void print_hexa_upp(va_list args)
{
	char nb[15];
	int size;

	size = convert_hex(nb, HEX_UPPER, (long int) va_arg(args, unsigned int));
	write(0, nb, size);
}

void print_ptr(va_list args)
{
	char nb[15];
	int size;

	size = convert_hex(nb, HEX_LOWER, (long int) va_arg(args, long int));
	if (nb[0] != '0')
	{
		write(0, "0x", 2);
		write(0, nb, size);
	}
	else
		write(0, "(nil)", 5);
}