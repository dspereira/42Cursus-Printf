/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   specifiers_array.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogo <diogo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 14:53:29 by diogo             #+#    #+#             */
/*   Updated: 2021/11/24 17:27:51 by diogo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void add_element(t_format_spec *data, int index, char specifier, void (*f)())
{
	data[index].specifier = specifier;
	data[index].func = f;
}

void fill_specifiers_arr(t_format_spec *data)
{
	add_element(data, 0, 'c', &print_char);
    add_element(data, 1, 's', &print_string);
	add_element(data, 2, 'd', &print_number);
	add_element(data, 3, 'i', &print_number);
	add_element(data, 4, '%', &print_percent);
	add_element(data, 5, 'u', &print_unsigned_int);
	add_element(data, 6, 'x', &print_hexa_low);
	add_element(data, 7, 'X', &print_hexa_upp);
	add_element(data, 8, 'p', &print_ptr);
}
