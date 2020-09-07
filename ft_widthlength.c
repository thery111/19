/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_widthlength.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahubert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 11:26:17 by ahubert           #+#    #+#             */
/*   Updated: 2020/02/19 11:26:18 by ahubert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

size_t	ft_widthlength(const char *format, t_printf *tab, int n)
{
	int i;

	i = 0;
	while (ft_isdigit(format[tab->pos + tab->lwidth]))
		tab->lwidth++;
	if (!(tab->twidth = malloc(sizeof(char) * tab->lwidth + 1)))
		return (0);
	while (tab->pos < (n + tab->lwidth))
		tab->twidth[i++] = format[tab->pos++];
	tab->twidth[i] = '\0';
	 return (ft_atoi(tab->twidth));
}
