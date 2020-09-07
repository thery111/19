/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahubert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 12:30:54 by ahubert           #+#    #+#             */
/*   Updated: 2019/11/19 12:30:55 by ahubert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;

	if (lst == 0 || del == 0)
		return ;
	while (*lst)
	{
		del((*lst)->content);
		tmp = *lst;
		(*lst) = (*lst)->next;
		free(tmp);
	}
	*lst = NULL;
}
