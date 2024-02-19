/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asamuilk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 13:36:03 by asamuilk          #+#    #+#             */
/*   Updated: 2024/02/19 19:57:28 by asamuilk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Function: ft_lstiter
 * ----------------------------
 * Iterates the list ’lst’ and applies the function
 * ’f’ on the content of each node.
 *
 * Returns:
 * Nothing.
 */
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		if (lst->content)
			f(lst->content);
		lst = lst->next;
	}
}
