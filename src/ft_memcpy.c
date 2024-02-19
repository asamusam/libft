/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asamuilk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:23:45 by asamuilk          #+#    #+#             */
/*   Updated: 2024/02/19 19:57:46 by asamuilk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/*
 * Function: ft_memcpy
 * ----------------------------
 * Copies 'n' bytes from memory area 'src' to memory
 * area 'dest'. The memory areas must not overlap.
 *
 * Returns:
 * A pointer to 'dest'.
 */
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	const char		*s;

	d = dest;
	s = src;
	while (n--)
		*d++ = *s++;
	return (dest);
}
