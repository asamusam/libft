/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asamuilk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 12:08:58 by asamuilk          #+#    #+#             */
/*   Updated: 2024/02/19 19:57:14 by asamuilk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Function: ft_isalnum
 * ----------------------------
 * Checks whether c is an alphanumeric character.
 *
 * Returns:
 * Nonzero if the character c falls into this category, and zero if not.
 */
#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isdigit(c) || ft_isalpha(c));
}
