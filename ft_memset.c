/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapichec <mapichec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 14:36:23 by mapichec          #+#    #+#             */
/*   Updated: 2023/12/23 16:43:12 by mapichec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*tmp;

	tmp = (char *)s;
	if (!tmp || !s)
		return (NULL);
	while (tmp && n > 0)
	{
		*tmp = c;
		tmp++;
		n--;
	}
	return (s);
}
