/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_identify.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahubert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 11:40:00 by ahubert           #+#    #+#             */
/*   Updated: 2020/02/14 11:40:01 by ahubert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

char ft_identify(const char *format, va_list list, t_printf *tab)
{
	unsigned int	i;
	int 			n;
	char			*converters;

	i = 0;
	tab->width = 0;
	tab->lwidth = 0;
	converters = "cspdiuxX";
	n = tab->pos;
	ft_flags(format, list, tab, n);
	//printf("\nwidth : %d\n", tab->width);
	while (converters[i] != format[tab->pos] && format[tab->pos] != '\0')
	{
		if (converters[++i] == '\0')
			{
				tab->pos++;
				i = 0;
			}
	}
	return(converters[i] == format[tab->pos++] ? converters[i] : 0);
}
