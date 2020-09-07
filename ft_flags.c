/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahubert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 16:31:00 by ahubert           #+#    #+#             */
/*   Updated: 2020/02/19 16:31:01 by ahubert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

void	ft_flags(const char *format, va_list list, t_printf *tab, int n)
{
	tab->minus = FALSE;
	tab->wstar = FALSE;
	tab->is_prec = FALSE;
	tab->zero = FALSE;
	if (ft_isdigit(format[tab->pos]))
		tab->width = ft_widthlength(format, tab, n);
	if (format[tab->pos] == '-')
	{
		tab->minus = TRUE;
		tab->pos++;
	}
	if (format[tab->pos] == '*')
	{
		tab->vwstar = va_arg(list, int);
		tab->pos++;
	}
	if (format[tab->pos] == '.' && ft_isdigit(format[tab->pos + 1]))
		tab->prec = ft_prec(format, tab);
	if (format[tab->pos] == '*' && tab->is_prec == TRUE)
		tab->vpstar = va_arg(list, int);
	if (format[tab->pos] == '0' && tab->minus == FALSE)
	{
		tab->zero = TRUE;
		tab->pos++;
	}
}
