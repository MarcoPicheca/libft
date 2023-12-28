/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapichec <mapichec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 17:46:34 by mapichec          #+#    #+#             */
/*   Updated: 2023/12/23 15:48:11 by mapichec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*scorri;
	int		i;

	scorri = lst;
	i = 0;
	while (scorri)
	{
		scorri = scorri->next;
		i++;
	}
	return (i);
}
