/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asamuilk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 21:19:48 by asamuilk          #+#    #+#             */
/*   Updated: 2024/02/19 19:58:04 by asamuilk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Function: ft_strmapi
 * ----------------------------
 * Creates with malloc() a new string, resulting
 * from successive applications of 'f' to each 
 * character of the string 's'.
 *
 * Returns:
 * The string created from successive applications
 * of 'f'. NULL, if the allocation fails.
 */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	char			*res;
	unsigned int	i;

	str = (char *)s;
	res = malloc(ft_strlen(s) + 1);
	if (!res)
		return (res);
	i = 0;
	while (*str)
	{
		res[i] = f(i, *str);
		str ++;
		i ++;
	}
	res[i] = 0;
	return (res);
}
