/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahubert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 11:24:34 by ahubert           #+#    #+#             */
/*   Updated: 2019/11/13 11:24:38 by ahubert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_charsize_int(int n)
{
	int		size;

	size = 0;
	if (n <= 0)
	{
		n *= -1;
		size++;
	}
	while (n > 0)
	{
		n /= 10;
		size++;
	}
	return (size);
}

char			*ft_itoa(int n)
{
	char		*s;
	int			i;
	int			t;

	if (n == -2147483648)
		return ((s = ft_strdup("-2147483648")));
	t = n;
	i = ft_charsize_int(n);
	if (!(s = malloc(sizeof(char) * (i + 1))))
		return (0);
	s[i] = '\0';
	if (n < 0)
		n *= -1;
	while (i-- > 0)
	{
		s[i] = n % 10 + '0';
		n /= 10;
	}
	if (t < 0)
		s[0] = '-';
	return (s);
}
