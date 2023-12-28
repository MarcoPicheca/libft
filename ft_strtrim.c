/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapichec <mapichec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 19:25:21 by mapichec          #+#    #+#             */
/*   Updated: 2023/12/22 15:16:01 by mapichec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	find_char(const char *set, char c)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	i;
	size_t	fin;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	fin = ft_strlen(s1);
	start = 0;
	while (find_char(set, s1[start]) && s1[start] && start < fin)
		start++;
	while (find_char(set, s1[fin - 1]) && start < fin && s1[fin - 1])
		fin--;
	str = (char *)malloc(sizeof(char) * (fin - start) + 1);
	if (!str)
		return (NULL);
	while (start < fin)
		str[i++] = s1[start++];
	str[i] = '\0';
	return (str);
}
