/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahubert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 11:26:37 by ahubert           #+#    #+#             */
/*   Updated: 2019/10/29 11:56:48 by ahubert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	int		i;

	i = 0;
	if (!s1 || !s2)
		return (0);
	if (!(new = malloc(ft_strlen(s1) + ft_strlen(s2) + 1)))
		return (0);
	while (s1 && *s1)
		new[i++] = *s1++;
	while (s2 && *s2)
		new[i++] = *s2++;
	new[i] = '\0';
	return (new);
}
