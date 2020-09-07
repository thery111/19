/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahubert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 12:32:43 by ahubert           #+#    #+#             */
/*   Updated: 2019/11/19 12:32:48 by ahubert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;

	if (lst && f && del)
	{
		while (lst)
		{
			if ((new = ft_lstnew(f(lst->content))))
				ft_lstadd_back(&new, new);
			else
			{
				ft_lstclear(&new, del);
				return (NULL);
			}
			lst = lst->next;
		}
		return (new);
	}
	return (NULL);
}
