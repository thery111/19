/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prec.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahubert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 17:27:21 by ahubert           #+#    #+#             */
/*   Updated: 2020/02/19 17:27:24 by ahubert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

int	ft_prec(const char *format, t_printf *tab)
{
	int n;

	n = 0;
	tab->is_prec = TRUE;
	tab->pos++;
	while (ft_isdigit(format[tab->pos]))
	{
		n += (format[tab->pos] - 48) * 10;
		tab->pos++;
	}
	printf("prec : %d\n", n);
	return (n);
}
