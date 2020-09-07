/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahubert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 13:10:08 by ahubert           #+#    #+#             */
/*   Updated: 2020/02/18 13:10:09 by ahubert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

void		ft_putnbr(int n, t_printf *tab)
{
	unsigned int	nbr;

	if (n < 0)
	{
		tab->count++;
		ft_putchar('-');
		nbr = (unsigned int)(n * -1);
	}
	else
		nbr = (unsigned int)n;
	if (nbr >= 10)
		ft_putnbr(nbr / 10, tab);
	tab->count++;
	ft_putchar(nbr % 10 + 48);
}
