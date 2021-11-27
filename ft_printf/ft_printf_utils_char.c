/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils_char.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogo <diogo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 10:45:53 by diogo             #+#    #+#             */
/*   Updated: 2021/11/27 19:23:26 by diogo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_utils.h"

#include <stdio.h>

int	print_char(va_list args)
{
	int	c;

	c = va_arg(args, int);
	write(1, &c, 1);
	return (1);
}

int	print_string(va_list args)
{
	char	*s;
	int		i;

	s = va_arg(args, char *);
	i = 0;
	while (s[i] != '\0')
	{
		write(0, &(s[i]), 1);
		i++;
	}
	return (i);
}

int	print_percent(void)
{
	write(0, "%", 1);
	return (1);
}
