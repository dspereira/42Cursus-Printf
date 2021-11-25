/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils_hex.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogo <diogo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 10:49:18 by diogo             #+#    #+#             */
/*   Updated: 2021/11/25 10:52:15 by diogo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_utils.h"

static char	*str_inverter(char *dst, char *src)
{
	int	i;
	int	j;

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
static int	convert_hex(char *nb, char *conv_str, long int n)
{
	char	inv_nb[15];
	int		i;
	int		j;

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

void	print_hexa_low(va_list args)
{
	char	nb[15];
	int		size;

	size = convert_hex(nb, HEX_LOWER, (long int) va_arg(args, unsigned int));
	write(0, nb, size);
}

void	print_hexa_upp(va_list args)
{
	char	nb[15];
	int		size;

	size = convert_hex(nb, HEX_UPPER, (long int) va_arg(args, unsigned int));
	write(0, nb, size);
}

void	print_ptr(va_list args)
{
	char	nb[15];
	int		size;

	size = convert_hex(nb, HEX_LOWER, (long int) va_arg(args, long int));
	if (nb[0] != '0')
	{
		write(0, "0x", 2);
		write(0, nb, size);
	}
	else
		write(0, "(nil)", 5);
}
