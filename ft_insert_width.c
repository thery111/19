/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_insert_width.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahubert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 13:21:38 by ahubert           #+#    #+#             */
/*   Updated: 2020/02/19 13:21:39 by ahubert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

void	ft_insert_width(const char *str, t_printf *tab)
{
	int n;
	n = ft_strlen(str);
	if (tab->conv == 'p')
		n += 2;
	if (tab->prec > tab->width)
		tab->width = tab->prec;
	if (tab->negative)
		ft_putchar('-');
	tab->count += tab->width - n;
	tab->width -= (tab->negative + n);
	//	if (tab->width > tab->prec)

		while (tab->width-- > 0)
			if (tab->czero == TRUE && tab->zero == TRUE)
				ft_putchar('0');
			else
			 	ft_putchar(32);
}
