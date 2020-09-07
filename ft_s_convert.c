/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_s_convert.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahubert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 12:56:09 by ahubert           #+#    #+#             */
/*   Updated: 2020/02/14 12:56:10 by ahubert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

void	ft_s_convert(const char *format, t_printf *tab, va_list list)
{
	char *str;

	str = ft_strdup(va_arg(list, char*));
	tab->czero = FALSE;
	if (tab->minus == FALSE)
		ft_insert_width(str, tab);
	tab->count += ft_putstr(str);
	if (tab->minus == TRUE)
		ft_insert_width(str, tab);
	free(str);
	if (format)
	{}
	if (tab)
	{}
}
