/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogo <diogo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 14:53:20 by diogo             #+#    #+#             */
/*   Updated: 2021/11/23 17:07:51 by diogo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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

void put_nbr(int n)
{
	long int	nb;
	char		c;

	nb = (long int) n;
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