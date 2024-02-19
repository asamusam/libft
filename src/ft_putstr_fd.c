/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asamuilk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 21:19:11 by asamuilk          #+#    #+#             */
/*   Updated: 2024/02/19 21:30:33 by asamuilk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Function: ft_putstr_fd
 * ----------------------------
 * Outputs the string 's' to the given file
 * descriptor.
 *
 * Returns:
 * Nothing.
 */
void	ft_putstr_fd(char *s, int fd)
{
	if (fd != -1)
		write(fd, s, ft_strlen(s));
}
