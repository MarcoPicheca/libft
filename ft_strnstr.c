/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapichec <mapichec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 12:18:19 by mapichec          #+#    #+#             */
/*   Updated: 2023/12/21 16:30:20 by mapichec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	b;

	i = 0;
	b = 0;
	if (!big)
		return (NULL);
	if (little[b] == 0)
		return ((char *)big);
	while (big[i] && i < len)
	{
		b = 0;
		while (big[i + b] == little[b] && i + b < len)
		{
			b++;
			if (little[b] == '\0')
				return ((char *)big + i);
		}
		i++;
	}
	return (NULL);
}
