/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahubert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 11:29:28 by ahubert           #+#    #+#             */
/*   Updated: 2019/10/29 11:32:50 by ahubert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				dlenght;
	unsigned int	i;

	dlenght = 0;
	i = 0;
	while (dest[dlenght] != '\0')
		dlenght++;
	while (src[i] != '\0' && i < nb)
	{
		dest[dlenght + i] = src[i];
		i++;
	}
	dest[dlenght + i] = '\0';
	return (dest);
}
