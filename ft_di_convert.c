/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_di_convert.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahubert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 12:24:58 by ahubert           #+#    #+#             */
/*   Updated: 2020/02/17 12:24:59 by ahubert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

void	ft_di_convert(const char *format, t_printf *tab, va_list list)
{
	char *str;

	str = ft_itoa_base(va_arg(list, int), 10, tab);
	if (str[0] == '-')
		tab->negative = TRUE;
	tab->czero = TRUE;
	if (tab->minus == FALSE)
		ft_insert_width(str, tab);
	ft_putnbr(ft_atoi(str), tab);
	if (tab->minus == TRUE)
		ft_insert_width(str, tab);
	if (format)
	{}
	if (tab)
	{}
}
