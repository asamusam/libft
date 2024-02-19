/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asamuilk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:29:00 by asamuilk          #+#    #+#             */
/*   Updated: 2024/02/19 19:57:43 by asamuilk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/*
 * Function: ft_memcmp
 * ----------------------------
 * Compares the first n bytes (each interpreted as
 * unsigned char) of the memory areas s1 and s2.
 *
 * Returns:
 * An  integer less than, equal to, or greater 
 * than zero if the first n bytes of s1 is found, respectively, 
 * to be less than, to match, or be greater than the first n bytes of s2.
 * For a nonzero return value, the sign is determined by the sign of the
 * difference between the first pair of bytes that differ in s1 and s2.
 * If n is zero, the return value is zero.
 */
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int				result;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	if (n > 0)
	{
		while (n > 1 && *str1 == *str2)
		{
			str1 ++;
			str2 ++;
			n --;
		}
		result = *str1 - *str2;
		return (result);
	}
	else
		return (0);
}
