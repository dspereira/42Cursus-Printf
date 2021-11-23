/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogo <diogo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 14:53:20 by diogo             #+#    #+#             */
/*   Updated: 2021/11/23 15:06:18 by diogo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void print_char(va_list args)
{
    int c;

    c = va_arg(args, int);
    write(1,&c,1);
}


void print_string(va_list args)
{
    char *s;

    s = va_arg(args, char*);
    while (*s != '\0')
	{
		write(0, &(*s), 1);
		s++;
	}
}



