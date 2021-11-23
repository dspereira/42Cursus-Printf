/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   specifiers_array.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogo <diogo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 12:25:58 by diogo             #+#    #+#             */
/*   Updated: 2021/11/23 12:26:01 by diogo            ###   ########.fr       */
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
	//add_element(data, 0, 'c', &teste1);
	//add_element(data, 1, 's', &teste2);
}
