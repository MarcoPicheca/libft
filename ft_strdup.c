/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapichec <mapichec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 15:39:05 by mapichec          #+#    #+#             */
/*   Updated: 2023/12/23 16:44:51 by mapichec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char			*newstr;

	if (!s)
		return (NULL);
	if (s)
	{
		newstr = (char *)malloc(ft_strlen(s) + 1);
		if (!newstr)
			return (NULL);
		ft_strlcpy(newstr, s, ft_strlen(s) + 1);
	}
	else
		return (NULL);
	return (newstr);
}
