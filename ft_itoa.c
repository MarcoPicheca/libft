/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapichec <mapichec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 14:46:14 by mapichec          #+#    #+#             */
/*   Updated: 2023/12/22 15:21:40 by mapichec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	conta_cifre(int n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		count++;
		n *= -1;
	}
	while (n > 9)
	{
		count++;
		n = n / 10;
	}
	count++;
	return (count);
}

char	*ft_itoa(int n)
{
	char	*newstr;
	int		i;

	i = conta_cifre(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	newstr = (char *)malloc(sizeof(char) * (i + 1));
	if (!newstr)
		return (NULL);
	if (n < 0)
	{
		newstr[0] = '-';
		n *= -1;
	}
	newstr[i] = '\0';
	i--;
	while (n > 9)
	{
		newstr[i] = (n % 10) + 48;
		i--;
		n = n / 10;
	}
	newstr[i] = n + 48;
	return (newstr);
}
