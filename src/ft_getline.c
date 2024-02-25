/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getline.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asamuilk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 22:47:51 by asamuilk          #+#    #+#             */
/*   Updated: 2024/02/25 21:03:43 by asamuilk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_getline.h"

/*
 * Function: ft_getline
 * ----------------------------
 * Reads a line from a file descriptor.
 *
 * Parameters:
 * • fd – the file descriptor to read from.
 * 
 * Returns:
 * A read line or NULL on the end of the file or error.
 */
char	*ft_getline(int fd)
{
	char		*res;
	static char	*rem[1024];
	int			nl;
	char		*temp;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	res = NULL;
	nl = read_buffer(&rem[fd], fd);
	if (nl == -2)
		rem[fd] = 0;
	else if (nl == -1)
	{
		res = push_result(rem[fd]);
		*rem[fd] = 0;
	}
	else
	{
		res = push_result(rem[fd]);
		temp = rem[fd];
		rem[fd] = ft_strdup(&rem[fd][nl + 1]);
		free(temp);
	}
	return (res);
}
