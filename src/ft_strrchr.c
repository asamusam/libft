/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asamuilk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:30:46 by asamuilk          #+#    #+#             */
/*   Updated: 2024/02/19 20:02:17 by asamuilk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Function: ft_strrchr
 * ----------------------------
 * Returns a pointer to the last occurrence of the
 * character 'c' in the string 's'.
 *
 * Returns:
 * A pointer to the matched character 
 * or NULL if the character is not found.
 */
char	*ft_strrchr(const char *s, int c)
{
	const char	*str;

	str = s;
	while (*str)
		str ++;
	while (str >= s)
	{
		if (*str == (char)c)
			return ((char *)str);
		str --;
	}
	return (NULL);
}
