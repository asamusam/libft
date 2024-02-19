/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asamuilk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 12:45:06 by asamuilk          #+#    #+#             */
/*   Updated: 2024/02/19 19:58:01 by asamuilk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Function: ft_strlcat
 * ----------------------------
 * Appends the NULL-terminated string 'src' 
 * to the end of 'dst'. It will append at most 
 * size - strlen(dst) - 1 bytes,
 * NULL-terminating the result. 
 *
 * Returns:
 * The initial length of 'dst' plus the length of 'src'.
 */
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	dst_len;
	size_t	i;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	if (size <= dst_len)
		return (src_len + size);
	i = 0;
	while (size > dst_len + 1 && src[i])
		dst[dst_len++] = src[i++];
	dst[dst_len] = 0;
	return (dst_len + ft_strlen(&src[i]));
}
