/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asamuilk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 12:30:41 by asamuilk          #+#    #+#             */
/*   Updated: 2024/02/19 19:57:16 by asamuilk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Function: ft_isascii
 * ----------------------------
 * Checks whether c fits into the ASCII character set.
 *
 * Returns:
 * Nonzero if the character c falls into this category, and zero if not.
 */
int	ft_isascii(int c)
{
	return (0 <= c && c <= 127);
}
