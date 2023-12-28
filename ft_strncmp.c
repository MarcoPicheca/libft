/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapichec <mapichec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 15:14:30 by mapichec          #+#    #+#             */
/*   Updated: 2023/12/21 16:45:26 by mapichec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] != '\0' && s2[i] != '\0'
		&& i < (n - 1) && s1[i] == s2[i])
		i++;
	return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
}

/*
#include <unistd.h>
#include <stdio.h>
#include <string.h>

int main()
{
        char s1[] = "coleli";
        char s2[] = "coleli";
        printf("vero %d\n", strncmp(s1, s2, 5));
        printf("fake %d\n", ft_strncmp(s1, s2, 5));
}
*/
