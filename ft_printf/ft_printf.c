/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogo <diogo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 14:53:13 by diogo             #+#    #+#             */
/*   Updated: 2021/11/23 16:26:09 by diogo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0' && s[i] != (char)c)
		i++;
	if (s[i] == (char)c)
		return ((char *) &s[i]);
	return (0);
}

int ft_printf(const char *format, ...)
{
	va_list args;
	t_format_spec data[SIZE];
	int i;
	int j;
	
	va_start(args, format);
	fill_specifiers_arr(data);
	i = 0;
	while (format[i] != '\0')
	{
		if (format[i] != '%')
			write(0,&format[i],1);
		else
		{
			run_specifer_func(args, data, format[i + 1]);
			i++;
		}
		i++;
	}
	va_end(args);
	
	return (0);
}
