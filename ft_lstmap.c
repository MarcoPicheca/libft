/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapichec <mapichec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 15:28:00 by mapichec          #+#    #+#             */
/*   Updated: 2023/12/27 13:05:50 by mapichec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*scorri;
	t_list	*testa;

	if (!lst || !f || !del)
		return (NULL);
	scorri = ft_lstnew(f(lst->content));
	if (!scorri)
		return (NULL);
	testa = scorri;
	scorri = scorri->next;
	lst = lst->next;
	while (lst)
	{
		scorri = ft_lstnew(f(lst->content));
		ft_lstadd_back(&testa, scorri);
		if (!scorri)
		{
			ft_lstclear(&testa, del);
			return (NULL);
		}
		lst = lst->next;
	}
	return (testa);
}
