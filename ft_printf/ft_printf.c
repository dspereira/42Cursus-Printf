/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogo <diogo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 14:53:13 by diogo             #+#    #+#             */
/*   Updated: 2021/11/25 17:04:20 by diogo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "ft_printf_utils.h"

static int	run_specifer_func(va_list args, t_format_spec *data, char specifier)
{
	int	i;

	i = 0;
	while (i < SIZE)
	{
		if (data[i].specifier == specifier)
		{
			data[i].func(args);
			return (1);
		}
		i++;
	}
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list			args;
	t_format_spec	data[SIZE];
	int				i;

	va_start(args, format);
	fill_specifiers_arr(data);
	i = 0;
	while (format[i] != '\0')
	{
		if (format[i] != '%')
			write(0, &format[i], 1);
		else
		{
			if (run_specifer_func(args, data, format[i + 1]))
				i++;
		}
		i++;
	}
	va_end(args);
	return (0);
}
