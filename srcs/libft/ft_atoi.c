/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahubert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 14:28:41 by ahubert           #+#    #+#             */
/*   Updated: 2019/11/13 14:28:45 by ahubert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *s)
{
	int				state;
	unsigned int	n;

	state = 1;
	n = 0;
	while (ft_isspace(*s))
		s++;
	if (*s == '+')
		s++;
	else if (*s == '-' && (state = -1))
		s++;
	while (*s && ft_isdigit(*s))
	{
		if ((n > 214748364 && *s > 7) || n > 2147483647)
		{
			if (state == -1 && (*s != 8 && n != 214748364))
				return (0);
			else if (state == 1)
				return (-1);
		}
		n = n * 10 + (*s++ - 48);
	}
	return (n * state);
}
