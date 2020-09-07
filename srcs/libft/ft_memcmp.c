/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahubert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 12:17:34 by ahubert           #+#    #+#             */
/*   Updated: 2019/10/14 16:14:04 by ahubert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char		*str1;
	const unsigned char		*str2;
	unsigned int			i;

	str1 = s1;
	str2 = s2;
	i = 0;
	while (n > 0)
	{
		if (str1[i] != str2[i])
		{
			i = str1[i] - str2[i];
			return (i);
		}
		i++;
		n--;
	}
	return (0);
}
