/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahubert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 11:18:01 by ahubert           #+#    #+#             */
/*   Updated: 2019/10/22 13:52:22 by ahubert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*str1;
	char		*str2;
	char		*tempstr1;
	char		*tempstr2;

	str1 = (char*)dst;
	str2 = (char*)src;
	if (str1 == 0 && str2 == 0)
		return (0);
	if (str1 < str2)
	{
		while (len--)
			*str1++ = *str2++;
	}
	else
	{
		tempstr1 = str1 + (len - 1);
		tempstr2 = str2 + (len - 1);
		while (len--)
			*tempstr1-- = *tempstr2--;
	}
	return (dst);
}
