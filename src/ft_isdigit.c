/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asamuilk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 12:09:19 by asamuilk          #+#    #+#             */
/*   Updated: 2024/02/19 19:57:17 by asamuilk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Function: ft_isdigit
 * ----------------------------
 * Checks whether c is a digit (0 through 9).
 *
 * Returns:
 * Nonzero if the character c falls into this category, and zero if not.
 */
int	ft_isdigit(int c)
{
	return (48 <= c && c <= 57);
}
