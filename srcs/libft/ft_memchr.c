/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahubert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 11:54:41 by ahubert           #+#    #+#             */
/*   Updated: 2019/10/14 16:01:30 by ahubert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char		*str;
	char			b;
	size_t			i;

	str = s;
	i = 0;
	b = (char)c;
	while (i < n)
	{
		if (str[i] == b)
			return ((char*)str + i);
		i++;
	}
	return (0);
}
