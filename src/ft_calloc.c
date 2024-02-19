/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asamuilk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:29:42 by asamuilk          #+#    #+#             */
/*   Updated: 2024/02/19 19:57:10 by asamuilk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Function: ft_calloc
 * ----------------------------
 * Allocates memory for an array of num_elem elements
 * of elem_size bytes each. The memory is set to zero. 
 *
 * Returns:
 * A pointer to the allocated memory. If num_elem or elem_size is 0, 
 * returns a unique pointer value that can later be successfully freed.  
 * Returns NULL, if the multiplication of num_elem and elem_size would result 
 * in  integer  overflow or in case of an error.
 */
void	*ft_calloc(size_t num_elem, size_t elem_size)
{
	void	*res;

	if (num_elem && elem_size && num_elem > SIZE_MAX / elem_size)
		return (NULL);
	res = malloc(num_elem * elem_size);
	if (!res)
		return (NULL);
	if (num_elem && elem_size)
		ft_bzero(res, num_elem);
	return (res);
}
