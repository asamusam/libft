/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asamuilk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 15:42:00 by asamuilk          #+#    #+#             */
/*   Updated: 2024/02/19 19:57:57 by asamuilk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Function: ft_strchr
 * ----------------------------
 * Returns a pointer to the first occurrence of the
 * character 'c' in the string 's'.
 *
 * Returns:
 * A pointer to the matched character 
 * or NULL if the character is not found.
 */
char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s ++;
	}
	if (c == 0)
		return ((char *)s);
	return (NULL);
}
