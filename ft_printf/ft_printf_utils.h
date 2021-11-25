/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogo <diogo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 10:33:51 by diogo             #+#    #+#             */
/*   Updated: 2021/11/25 10:33:55 by diogo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_UTILS_H
# define FT_PRINTF_UTILS_H

# include <stdarg.h>
# include <unistd.h>

# define HEX_UPPER "0123456789ABCDEF"
# define HEX_LOWER "0123456789abcdef" 
# define SIZE 9

typedef struct s_format_spec
{
	char	specifier;
	void	(*func)();
}	t_format_spec;

void	fill_specifiers_arr(t_format_spec *data);
void	run_specifer_func(va_list args, t_format_spec *data, char specifier);
void	print_char(va_list args);
void	print_string(va_list args);
void	print_number(va_list args);
void	print_percent(void);
void	print_unsigned_int(va_list args);
void	print_hexa_low(va_list args);
void	print_hexa_upp(va_list args);
void	print_ptr(va_list args);

#endif