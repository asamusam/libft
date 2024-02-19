/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asamuilk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:28:27 by asamuilk          #+#    #+#             */
/*   Updated: 2024/02/19 19:57:40 by asamuilk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/*
 * Function: ft_memchr
 * ----------------------------
 * Scans  the  initial n bytes of the memory area
 * pointed to by s for the first instance of c.
 *
 * Returns:
 * A pointer to the matching byte or NULL if the 
 * character does not occur in the given memory area.
 */
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	ch;

	str = (unsigned char *)s;
	ch = c;
	while (n--)
	{
		if (*str == ch)
			return ((void *)str);
		str ++;
	}
	return (NULL);
}
