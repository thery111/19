/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_x_convert.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahubert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 15:36:48 by ahubert           #+#    #+#             */
/*   Updated: 2020/02/14 15:36:49 by ahubert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

void	ft_x_convert(const char *format, t_printf *tab, va_list list)
{
	char *str;

	str = ft_strdup(ft_itoa_base(va_arg(list, int), 16, tab));
	tab->czero = TRUE;
	if (tab->minus == FALSE)
		ft_insert_width(str, tab);
	tab->count += ft_putstr(str);
	if (tab->minus == TRUE)
		ft_insert_width(str, tab);
	if (format)
	{}
	if (tab)
	{}
}
