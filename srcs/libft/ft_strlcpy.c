/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahubert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 17:08:55 by ahubert           #+#    #+#             */
/*   Updated: 2019/10/14 15:23:25 by ahubert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned int	n;
	int				a;

	n = 0;
	a = 0;
	if (!src)
		return (0);
	while (src[a] != '\0')
		a++;
	while (src[n] != '\0' && n < size - 1 && size > 0)
	{
		dst[n] = src[n];
		n++;
	}
	if (size != 0)
		dst[n] = '\0';
	return (a);
}
