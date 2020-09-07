/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahubert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 15:29:11 by ahubert           #+#    #+#             */
/*   Updated: 2019/10/16 15:34:51 by ahubert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *d, const char *s, size_t n)
{
	size_t l;

	l = ft_strnlen(d, n);
	if (l == n)
		return (l + ft_strlen(s));
	return (l + ft_strlcpy(d + l, s, n - l));
}
