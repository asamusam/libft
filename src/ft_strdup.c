/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asamuilk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:31:55 by asamuilk          #+#    #+#             */
/*   Updated: 2024/02/19 19:57:58 by asamuilk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Function: ft_strdup
 * ----------------------------
 * Returns a pointer to a new string which is a duplicate of the string s.
 * Memory for the new string is obtained with malloc(), 
 * and can be freed with free().
 *
 * Returns:
 * A pointer to the duplicated string 
 * or NULL if the allocation fails.
 */
char	*ft_strdup(const char *src)
{
	char	*dest;
	size_t	src_len;

	src_len = ft_strlen(src);
	dest = malloc((src_len + 1) * sizeof(char));
	if (dest)
		return (ft_memcpy(dest, src, src_len + 1));
	else
		return (dest);
}
