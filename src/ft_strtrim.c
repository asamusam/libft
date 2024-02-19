/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asamuilk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 17:52:41 by asamuilk          #+#    #+#             */
/*   Updated: 2024/02/19 19:58:07 by asamuilk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_set(char c, char *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set ++;
	}
	return (0);
}

/*
 * Function: ft_strtrim
 * ----------------------------
 * Allocates with malloc() and returns a copy of
 * 's1' with the characters specified in 'set' removed
 * from the beginning and the end of the string.
 *
 * Returns:
 * The trimmed string.
 * NULL if the allocation fails.
 */
char	*ft_strtrim(char const *s1, char const *set)
{
	char			*str;
	unsigned int	start;
	int				len;
	char			*res;

	str = (char *)s1;
	start = 0;
	while (is_set(*str, (char *)set) && *str++)
		start++;
	len = ft_strlen(s1) - 1;
	while (is_set(s1[len], (char *)set) && len)
		len--;
	res = ft_substr(s1, start, len - start + 1);
	return (res);
}
