/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapichec <mapichec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 14:17:03 by mapichec          #+#    #+#             */
/*   Updated: 2023/12/23 15:14:14 by mapichec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*c;

	if (!del || !(*lst))
		return ;
	while (*lst != NULL)
	{
		del((*lst)->content);
		c = *lst;
		*lst = c->next;
		free(c);
	}
	*lst = NULL;
}
