/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asamuilk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 14:48:14 by asamuilk          #+#    #+#             */
/*   Updated: 2024/02/19 19:58:02 by asamuilk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/*
 * Function: ft_strlen
 * ----------------------------
 * Calculates the length of the string pointed to by
 * 's', excluding the terminating null byte ('\0').
 *
 * Returns:
 * The number of bytes in the string pointed
 * to by 's'.
 */
size_t	ft_strlen(const char *s)
{
	const char	*n;

	n = s;
	while (*s)
		s ++;
	return (s - n);
}
