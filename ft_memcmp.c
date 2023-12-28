/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapichec <mapichec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 13:56:30 by mapichec          #+#    #+#             */
/*   Updated: 2023/12/23 16:37:01 by mapichec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *) s1;
	str2 = (unsigned char *) s2;
	while (*str1 == *str2 && n > 0)
	{
		str1++;
		str2++;
		n--;
	}
	if (n)
		return (*str1 - *str2);
	else
		return (0);
}
// int main() {
//     char str1[] = "kjh";
//     char str2[] = "";
//     size_t n = 2;
// 	// 	while (--n != 0)
// 	// {
// 	// 	if (*s1_tmp++ != *s2_tmp++)
// 	// 		return (*--(s1_tmp) - *--(s2_tmp));
// 	// }
//     int result = ft_memcmp(str1, str2, n);
//     int result2 = memcmp(str1, str2, n);

// 	printf("fake %d\nvera %d\n", result, result2);
//     if (result == 0) {
//         printf("Le stringhe sono uguali.\n");
//     } else if (result < 0) {
//         printf("La stringa 1 è minore della stringa 2.\n");
//     } else {
//         printf("La stringa 1 è maggiore della stringa 2.\n");
//     }

//     return 0;
// }