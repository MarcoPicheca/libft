/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapichec <mapichec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 15:49:40 by mapichec          #+#    #+#             */
/*   Updated: 2023/12/23 16:09:58 by mapichec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	k;
	size_t	j;
	char	*newstr;

	if (!s1 && !s2)
		return (NULL);
	else
	{
		i = 0;
		k = 0;
		j = 0;
		newstr = (char *)malloc(sizeof(char)
				* (ft_strlen(s1) + ft_strlen(s2) + 1));
		if (!newstr)
			return (NULL);
		while (s1[i])
			newstr[j++] = s1[i++];
		while (s2[k])
			newstr[j++] = s2[k++];
		newstr[j] = '\0';
		return (newstr);
	}
	return (NULL);
}
