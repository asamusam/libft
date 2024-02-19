/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asamuilk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 21:18:51 by asamuilk          #+#    #+#             */
/*   Updated: 2024/02/19 21:30:10 by asamuilk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Function: ft_putendl_fd
 * ----------------------------
 * Outputs the string 's' to the given file descriptor
 * followed by a newline.
 *
 * Returns:
 * Nothing.
 */
void	ft_putendl_fd(char *s, int fd)
{
	if (fd != -1)
	{
		ft_putstr_fd(s, fd);
		ft_putchar_fd('\n', fd);
	}
}
