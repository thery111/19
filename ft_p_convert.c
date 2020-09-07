/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_p_convert.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahubert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 15:14:03 by ahubert           #+#    #+#             */
/*   Updated: 2020/02/14 15:14:04 by ahubert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

void	ft_p_convert(const char *format, t_printf *tab, va_list list)
{
	char *str;

	str = ft_strdup(ft_itoa_base(va_arg(list, unsigned long), 16, tab));
	tab->czero = FALSE;
	ft_insert_width(str, tab);
	ft_putchar('0');
	ft_putchar('x');
	tab->count += (ft_putstr(str) + 2);
	if (format)
	{}
	if (tab)
	{}
}
