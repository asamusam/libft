/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asamuilk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 15:11:56 by asamuilk          #+#    #+#             */
/*   Updated: 2024/02/19 19:58:10 by asamuilk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Function: ft_toupper
 * ----------------------------
 * Converts a lowercase letter to uppercase.
 *
 * Returns:
 * If 'c' is an lowercase letter, returns its
 * uppercase equivalent. Otherwise, returns 'c'.
 */
int	ft_toupper(int c)
{
	if (97 <= c && c <= 122)
		return (c - 32);
	else
		return (c);
}
