/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asamuilk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 13:22:05 by asamuilk          #+#    #+#             */
/*   Updated: 2024/02/19 19:57:23 by asamuilk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Function: ft_lstclear
 * ----------------------------
 * Deletes and frees the given node and every 
 * successor of that node, using the function 'del'
 * and free(3). Finally, the pointer to the list 'lst'
 * is set to NULL.
 *
 * Returns:
 * Nothing.
 */
void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*node;
	t_list	*next_node;

	if (!*lst)
		return ;
	node = *lst;
	while (node)
	{
		del(node->content);
		next_node = node->next;
		free(node);
		node = next_node;
	}
	*lst = NULL;
}
