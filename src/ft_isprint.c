/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asamuilk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 12:56:40 by asamuilk          #+#    #+#             */
/*   Updated: 2024/02/19 19:59:44 by asamuilk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Function: ft_isprint
 * ----------------------------
 * Checks whether c is any printable character including space.
 *
 * Returns:
 * Nonzero if the character c falls into this category, and zero if not.
 */
int	ft_isprint(int c)
{
	return (32 <= c && c <= 126);
}
