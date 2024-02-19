/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asamuilk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 16:35:16 by asamuilk          #+#    #+#             */
/*   Updated: 2024/02/19 19:57:36 by asamuilk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Function: ft_lstnew
 * ----------------------------
 * Allocates malloc() and returns a new node.
 * The node's content is initialized with
 * the value of the parameter ’content’.
 * Next node is initialized to NULL.
 *
 * Returns:
 * The pointer to the new node.
 */
t_list	*ft_lstnew(void *content)
{
	t_list	*member;

	member = malloc(sizeof(t_list));
	if (!member)
		return (NULL);
	member->content = content;
	member->next = NULL;
	return (member);
}
