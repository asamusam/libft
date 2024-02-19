/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asamuilk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 17:52:25 by asamuilk          #+#    #+#             */
/*   Updated: 2024/02/19 19:58:00 by asamuilk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Function: ft_strjoin
 * ----------------------------
 * Allocates with malloc() and returns a new
 * string, which is the result of the concatenation
 * of 's1' and 's2'.
 *
 * Returns:
 * The new string.
 * NULL if the allocation fails.
 */
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	char	*res;
	char	*str1;
	char	*str2;

	str1 = (char *)s1;
	str2 = (char *)s2;
	dest = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!dest)
		return (dest);
	res = dest;
	while (*str1)
		*dest++ = *str1++;
	while (*str2)
		*dest++ = *str2++;
	*dest = 0;
	return (res);
}
