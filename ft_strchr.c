/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapichec <mapichec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 17:15:46 by mapichec          #+#    #+#             */
/*   Updated: 2023/12/23 16:37:22 by mapichec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*ptr;
	int		i;

	ptr = (char *)s;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char) c)
			return (ptr + i);
		i++;
	}
	if ((char) c == s[i])
		return (ptr + i);
	return (NULL);
}
/*
int	main()
{
	char s[] = "capo";
	int c = 129;
	
	printf("%p\n", strchr(s, c));
	printf("%p\n", ft_strchr(s, c));
}*/