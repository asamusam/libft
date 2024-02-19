/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asamuilk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:01:07 by asamuilk          #+#    #+#             */
/*   Updated: 2024/02/19 19:57:06 by asamuilk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/*
 * Function: ft_bzero
 * ----------------------------
 * Writes zeroes (bytes  containing '\0') 
 * in the n bytes of the memory starting at 
 * the location pointed to by s.
 *
 * Returns:
 * The converted value or 0 on error.
 */
void	ft_bzero(void *s, size_t n)
{
	while (n--)
		*(unsigned char *)s++ = 0;
}
