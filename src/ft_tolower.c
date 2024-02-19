/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asamuilk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 15:11:56 by asamuilk          #+#    #+#             */
/*   Updated: 2024/02/19 19:58:09 by asamuilk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Function: ft_tolower
 * ----------------------------
 * Converts an uppercase letter to lowercase.
 *
 * Returns:
 * If 'c' is an uppercase letter, returns its
 * lowercase equivalent. Otherwise, returns 'c'.
 */
int	ft_tolower(int c)
{
	if (65 <= c && c <= 90)
		return (c + 32);
	else
		return (c);
}
