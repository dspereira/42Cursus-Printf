/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogo <diogo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 14:53:25 by diogo             #+#    #+#             */
/*   Updated: 2021/11/23 17:00:20 by diogo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

# define SPECIFIERS "cspdiuxX%"
# define SIZE 9

typedef struct s_format_spec 
{
	char	specifier;
	void	(*func)();
}	t_format_spec;

int ft_printf(const char *format, ...);
void fill_specifiers_arr(t_format_spec *data);


// functions receive params and work's with it.
// fuctions to add arr of structs.
void run_specifer_func(va_list args, t_format_spec *data, char specifier);
void print_char(va_list args);
void print_string(va_list args);
void print_number(va_list args);

#endif