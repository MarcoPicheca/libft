/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapichec <mapichec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 16:31:29 by mapichec          #+#    #+#             */
/*   Updated: 2023/12/18 18:38:46 by mapichec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;	
	size_t	j;
	size_t	d_len;
	size_t	s_len;

	i = ft_strlen(dst);
	j = 0;
	d_len = ft_strlen(dst);
	s_len = ft_strlen(src);
	if (size == 0)
		return (ft_strlen(src));
	if (size < ft_strlen(dst))
		return (ft_strlen(src) + size);
	else
	{
		while (src[j] != '\0' && d_len + j < size)
			dst[i++] = src[j++];
		if ((d_len + j) == size && d_len < size)
			dst[--i] = '\0';
		else
			dst[i] = '\0';
		return (s_len + d_len);
	}
}
/*
int main()
{
	char dst[] = "cioa";
	char src[] = "abla sudio";

	printf("%ld\n", ft_strlcat(dst, src, 6));
	printf("%s\n", dst);
	return 0;
}*/