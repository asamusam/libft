/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asamuilk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 13:17:56 by asamuilk          #+#    #+#             */
/*   Updated: 2024/02/19 19:57:26 by asamuilk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Function: ft_lstdelone
 * ----------------------------
 * Takes as a parameter a node 'lst' and frees the memory of
 * the node’s content using the function 'del' given
 * as a parameter, then frees the node.
 *
 * Returns:
 * Nothing.
 */
#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst)
		return ;
	del(lst->content);
	free(lst);
}
