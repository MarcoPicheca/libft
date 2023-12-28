/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapichec <mapichec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 17:27:43 by mapichec          #+#    #+#             */
/*   Updated: 2023/12/22 12:38:27 by mapichec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = (char *)s;
	while (s[i] != '\0')
	{
		i++;
		ptr++;
	}
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return (ptr);
		ptr--;
		i--;
	}
	return (NULL);
}
