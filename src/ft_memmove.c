/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asamuilk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 15:46:33 by asamuilk          #+#    #+#             */
/*   Updated: 2024/02/19 19:57:47 by asamuilk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/*
 * Function: ft_memmove
 * ----------------------------
 * Copies 'n' bytes from memory area 'src' to memory
 * area 'dest'. The memory areas may overlap: copying takes place as though
 * the bytes in 'src' are first copied into a temporary array that does not
 * overlap 'src' or 'dest', and the bytes are then copied from the temporary
 * array to 'dest'.
 *
 * Returns:
 * A pointer to 'dest'.
 */
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	const char		*s;

	d = dest;
	s = src;
	if (dest < src)
	{
		while (n--)
			*d++ = *s++;
	}
	else
	{
		while (n--)
			d[n] = s[n];
	}
	return (dest);
}
