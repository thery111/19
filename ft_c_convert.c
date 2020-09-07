/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_c_convert.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahubert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 12:26:25 by ahubert           #+#    #+#             */
/*   Updated: 2020/02/14 12:26:26 by ahubert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

void	ft_c_convert(const char *format, t_printf *tab, va_list list)
{
	char c;

	c = va_arg(list, int);
	if (tab->minus == FALSE)
		while (tab->width-- > 1)
		{
			tab->count++;
			ft_putchar(32);
		}
	ft_putchar(c);
	if (tab->minus == TRUE)
		while (tab->width-- > 1)
		{
			tab->count++;
			ft_putchar(32);
		}
	tab->count++;
	if (format)
	{}
	if (tab)
	{}
}
