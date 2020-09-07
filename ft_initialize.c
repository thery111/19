/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_initialize.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahubert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 10:49:56 by ahubert           #+#    #+#             */
/*   Updated: 2020/02/14 10:49:58 by ahubert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

void	ft_initialize(t_printf *tab)
{
	tab->count = 0;
	tab->nconv = 0;
	tab->pos = 0;
	tab->cpos = 0;
	tab->width = 0;
	tab->lwidth = 0;
	tab->prec = 0;
	tab->is_width = FALSE;
	tab->is_prec = FALSE;
	tab->zero = FALSE;
	tab->negative = FALSE;
}
