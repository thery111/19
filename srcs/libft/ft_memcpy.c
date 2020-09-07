/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahubert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 09:40:08 by ahubert           #+#    #+#             */
/*   Updated: 2019/10/22 13:46:46 by ahubert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*str1;
	const char	*str2;
	size_t		i;

	str1 = dst;
	str2 = src;
	i = 0;
	if (str1 == '\0' && str2 == '\0')
		return ("");
	while (i < n)
	{
		str1[i] = str2[i];
		i++;
	}
	return (dst);
}
