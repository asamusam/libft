/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asamuilk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 12:08:58 by asamuilk          #+#    #+#             */
/*   Updated: 2024/03/29 18:05:30 by asamuilk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Function: ft_isalnum
 * ----------------------------
 * Checks whether c is an alphanumeric character.
 *
 * Returns:
 * Nonzero if the character c falls into this category, and zero if not.
 */
int	ft_isalnum(int c)
{
	return (ft_isdigit(c) || ft_isalpha(c));
}
