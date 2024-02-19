/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asamuilk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:28:42 by asamuilk          #+#    #+#             */
/*   Updated: 2024/02/19 19:58:06 by asamuilk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Function: ft_strnstr
 * ----------------------------
 * Locates the first occurrence of the null-terminated 
 * string 'to_find' in the null-terminated string 'str',
 * where not more than 'len' characters are searched.
 * 
 * Returns:
 * If 'to_find' is an empty string, 'str' is returned; 
 * if 'to_find' occurs nowhere in 'str', NULL is returned; 
 * otherwise a pointer to the first character of
 * the first occurrence of 'to_find' in 'str' is returned.
 */
char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	char	*curr_to_find;
	char	*curr_str;
	size_t	to_find_len;

	if (*to_find == 0)
		return ((char *)str);
	to_find_len = ft_strlen(to_find);
	while (*str && len)
	{
		if (*str == *to_find && len >= to_find_len)
		{
			curr_str = (char *)str;
			curr_to_find = (char *)to_find;
			while (1)
			{
				if (*curr_to_find == 0)
					return ((char *)str);
				if (*curr_str++ != *curr_to_find++)
					break ;
			}
		}
		str ++;
		len --;
	}
	return (NULL);
}
