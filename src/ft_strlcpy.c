/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asamuilk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 12:30:47 by asamuilk          #+#    #+#             */
/*   Updated: 2024/02/19 19:58:01 by asamuilk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Function: ft_strlcpy
 * ----------------------------
 * Copies up to 'size' - 1 characters from 
 * the NULL-terminated string 'src' to 'dst', 
 * NULL-terminating the result. If size == 1, 
 * writes NULL to the 'dst'; if 'src' length + 1 
 * < dst size, writes a single NULL in the end,
 * but the rest of the 'dst' is left unchanged;
 * if src is NULL, copies it to 'dst'.
 *
 * Returns:
 * The length of src.
 */
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	src_len;

	src_len = ft_strlen(src);
	if (size > src_len)
		ft_memcpy(dst, src, src_len + 1);
	else if (size)
	{
		ft_memcpy(dst, src, size - 1);
		dst[size - 1] = 0;
	}
	return (src_len);
}
