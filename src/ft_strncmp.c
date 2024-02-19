/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asamuilk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:29:17 by asamuilk          #+#    #+#             */
/*   Updated: 2024/02/19 19:58:05 by asamuilk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/*
 * Function: ft_strncmp
 * ----------------------------
 * Compares  the  first (at most) 
 * 'n' bytes of strings 's1' and 's2'.
 *
 * Returns:
 * An integer indicating the result of the comparison:
 * • 0, if the s1 and s2 are equal;
 * • a negative value if s1 is less than s2;
 * • a positive value if s1 is greater than s2.
 */
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int				result;

	if (n > 0)
	{
		while (n > 1 && *s1 == *s2 && *s1 && *s2)
		{
			s1 ++;
			s2 ++;
			n --;
		}
		result = *s1 - *s2;
		return (result);
	}
	else
		return (0);
}
