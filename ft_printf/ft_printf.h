/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogo <diogo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 12:25:51 by diogo             #+#    #+#             */
/*   Updated: 2021/11/23 12:26:04 by diogo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>

# define SPECIFIERS "cspdiuxX%"
# define SIZE 10

typedef struct s_format_spec 
{
	char	specifier;
	void	(*func)();
}	t_format_spec;

int ft_printf(const char *format, ...);
void fill_specifiers_arr(t_format_spec *data);

#endif