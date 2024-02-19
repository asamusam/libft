/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asamuilk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 14:26:14 by asamuilk          #+#    #+#             */
/*   Updated: 2024/02/19 19:58:08 by asamuilk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Function: ft_substr
 * ----------------------------
 * Allocates with malloc() and returns a substring
 * from the string 's'. The substring begins at index 
 * 'start' and is of maximum size 'len'.
 *
 * Returns:
 * The substring.
 * NULL if the allocation fails.
 */
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int				slen;
	char			*dest;
	size_t			malloc_size;

	slen = (unsigned int)ft_strlen(s);
	if (slen - (int)start < 0)
		malloc_size = 1;
	else if (slen - start < len)
		malloc_size = slen - start + 1;
	else
		malloc_size = len + 1;
	dest = malloc(malloc_size * sizeof(char));
	if (!dest)
		return (dest);
	else
	{
		ft_strlcpy(dest, &s[start], malloc_size);
		return (dest);
	}
}
