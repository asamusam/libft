/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asamuilk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 21:20:38 by asamuilk          #+#    #+#             */
/*   Updated: 2024/02/19 19:57:18 by asamuilk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdbool.h>

/*
 * Function: ft_itoa
 * ----------------------------
 * Allocates with malloc() and returns a string
 * representing the integer received as an argument.
 *
 * Returns:
 * The string representing the integer.
 * NULL if the allocation fails.
 */
char	*ft_itoa(int n)
{
	char	res[12];
	int		i;
	bool	neg;

	if (n == 0)
		return (ft_substr("0", 0, 1));
	ft_memset(res, '=', 11);
	res[11] = 0;
	neg = n < 0;
	i = 10;
	while (n != 0)
	{
		if (neg)
			res[i] = -(n % 10) + 48;
		else
			res[i] = (n % 10) + 48;
		n = n / 10;
		i --;
	}
	if (neg)
		res[i] = '-';
	else
		i ++;
	return (ft_substr(res, i, 11 - i));
}
