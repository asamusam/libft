/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asamuilk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 12:09:10 by asamuilk          #+#    #+#             */
/*   Updated: 2024/02/19 19:57:15 by asamuilk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Function: ft_isalpha
 * ----------------------------
 * Checks whether c is an alphabetic character.
 *
 * Returns:
 * Nonzero if the character c falls into this category, and zero if not.
 */
int	ft_isalpha(int c)
{
	return ((65 <= c && c <= 90) || (97 <= c && c <= 122));
}
