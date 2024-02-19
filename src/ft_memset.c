/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asamuilk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 15:58:46 by asamuilk          #+#    #+#             */
/*   Updated: 2024/02/19 19:57:49 by asamuilk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/*
 * Function: ft_memset
 * ----------------------------
 * Fills the first 'n' bytes of the memory area
 * pointed to by 's' with the constant byte 'c'.
 *
 * Returns:
 * A pointer to the memory area 's'.
 */
void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;

	p = s;
	while (n-- > 0)
		*p++ = c;
	return (s);
}
