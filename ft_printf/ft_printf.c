/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 14:53:13 by diogo             #+#    #+#             */
/*   Updated: 2021/11/26 17:31:13 by dsilveri         ###   ########.fr       */
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
	int				size;

	size = 0;
	va_start(args, format);
	fill_specifiers_arr(data);
	i = 0;
	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			write(0, &format[i], 1);
			size++;
		}
		else
		{
			if (run_specifer_func(args, data, format[i + 1]))
				i++;
		}
		i++;
	}
	va_end(args);
	return (size);
}
