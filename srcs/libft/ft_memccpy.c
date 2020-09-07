/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahubert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 09:54:48 by ahubert           #+#    #+#             */
/*   Updated: 2019/10/23 14:46:13 by ahubert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	char			*dest;
	unsigned char	*sourc;

	i = 0;
	dest = dst;
	sourc = (unsigned char*)src;
	if (ft_memchr(sourc, c, n))
	{
		while (sourc[i] != (unsigned char)c)
		{
			dest[i] = sourc[i];
			i++;
		}
		dest[i] = sourc[i];
		return (dst + i + 1);
	}
	else
		ft_memcpy(dest, sourc, n);
	return (NULL);
}
