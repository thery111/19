/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahubert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 10:32:53 by ahubert           #+#    #+#             */
/*   Updated: 2020/02/14 10:32:54 by ahubert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

int ft_print_string(const char *format, va_list list, t_printf *tab)
{
	while (format[tab->pos])
	{
		if (format[tab->pos] == '%')
		{
			tab->nconv++;
			tab->pos++;
			tab->conv = ft_identify(format, list, tab);
		//	printf("\nCONV :	%c\n", tab->conv);
			ft_intermediary(format, tab, list);
		}
		else
		{
			ft_putchar(format[tab->pos]);
			tab->pos++;
			tab->count++;
		}
	}
	return (tab->pos);
}
