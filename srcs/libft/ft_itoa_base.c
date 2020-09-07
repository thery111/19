/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahubert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 14:45:06 by ahubert           #+#    #+#             */
/*   Updated: 2020/02/14 14:45:07 by ahubert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

char	*ft_itoa_base(unsigned int n, unsigned int base)
{
	int		i;
	unsigned int		t;
	char	*str;

	i = 0;
	t = n;
	while (t >= base)
	{
		t /= base;
		i++;
	}
	if (!(str = malloc(sizeof(char) * (i + 1))))
		return (NULL);
	str[i + 1] = '\0';
	while (i >= 0)
	{
		t = n % base;
		if (t >= 10)
			str[i] = ((t - 10) + 'a');
		else
			str[i] = (t + '0');
		n /= base;
		i--;
	}
	return (str);
}
