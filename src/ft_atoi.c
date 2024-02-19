/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asamuilk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:28:12 by asamuilk          #+#    #+#             */
/*   Updated: 2024/02/19 19:57:04 by asamuilk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Function: ft_atoi
 * ----------------------------
 * Converts the initial portion of the string pointed to by nptr to int.
 * The string may begin with an arbitrary amount of white space followed 
 * by a single optional '+' or '-' sign.
 * 
 * Parameters:
 * nptr: The string to be converted.
 *
 * Returns:
 * The converted value or 0 on error.
 */
int	ft_atoi(const char *nptr)
{
	int		neg;
	int		result;
	char	*str;

	str = (char *)nptr;
	result = 0;
	neg = 1;
	while (*str <= ' ')
		str ++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			neg *= -1;
		str ++;
	}
	while (ft_isdigit(*str))
	{
		result = result * 10 + (*str - 48);
		str ++;
	}
	return (result * neg);
}
