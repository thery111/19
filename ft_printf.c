/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahubert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 10:15:04 by ahubert           #+#    #+#             */
/*   Updated: 2020/02/14 10:15:09 by ahubert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	list;
	t_printf tab;

	va_start(list, format);
	ft_initialize(&tab);
	ft_print_string(format, list, &tab);
	va_end(list);
//	printf("POS    :	%d\n", tab.pos);
//	printf("COUNT  :	%d\n", tab.count);
	return (tab.count);
}
