/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asamuilk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 12:58:37 by asamuilk          #+#    #+#             */
/*   Updated: 2024/02/19 19:57:38 by asamuilk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Function: ft_lstsize
 * ----------------------------
 * Counts the number of nodes in a list.
 *
 * Returns:
 * The length of the list.
 */
int	ft_lstsize(t_list *lst)
{
	int		res;
	t_list	*node;

	res = 0;
	node = lst;
	while (node)
	{
		res ++;
		node = node->next;
	}
	return (res);
}
