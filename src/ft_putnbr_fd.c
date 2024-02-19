/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asamuilk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 21:20:22 by asamuilk          #+#    #+#             */
/*   Updated: 2024/02/19 19:57:52 by asamuilk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Function: ft_putnbr_fd
 * ----------------------------
 * Outputs the integer 'n' to the given file
 * descriptor.
 *
 * Returns:
 * Nothing.
 */
void	ft_putnbr_fd(int n, int fd)
{
	char	*s;

	if (fd != -1)
	{
		s = ft_itoa(n);
		ft_putstr_fd(s, fd);
		free(s);
	}
}
