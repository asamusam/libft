/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asamuilk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 13:03:36 by asamuilk          #+#    #+#             */
/*   Updated: 2024/03/13 13:07:06 by asamuilk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Function: ft_isspace
 * ----------------------------
 * Checks whether the given character is one of the following: 
 * space, horizontal tab, new line, vertical tab, form feed, or carriage return.
 *
 * Returns:
 * Nonzero if the character c falls into this category, and zero if not.
 */
int	ft_isspace(int c)
{
	return (c == 32 || (9 <= c && c <= 13));
}
