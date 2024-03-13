/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getline_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asamuilk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 21:50:48 by asamuilk          #+#    #+#             */
/*   Updated: 2024/03/13 13:17:35 by asamuilk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_getline.h"

// returns the index of a first newline in a string
int	has_newline(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == '\n')
			return (i);
		i ++;
	}
	return (-1);
}

// returns a new string of everything up to 
// and including the newline or EOF
char	*push_result(const char *s)
{
	char	*res;
	int		i;
	int		size;

	if (!s)
		return (NULL);
	size = 0;
	while (s[size] && s[size] != '\n')
		size ++;
	if (s[size] == '\n')
		size ++;
	res = malloc(size + 1);
	if (!res)
		return (NULL);
	i = 0;
	while (i < size)
	{
		res[i] = s[i];
		i ++;
	}
	res[i] = 0;
	return (res);
}

// joins n charactes from add to rem
// returns resulting string
// frees rem and add
char	*push_remainder(char *rem, char *add, int n)
{
	char	*res;
	int		rem_len;
	int		add_len;

	rem_len = 0;
	while (rem[rem_len])
		rem_len ++;
	add_len = n;
	res = malloc(rem_len + add_len + 1);
	if (!res || rem_len < 0 || add_len < 0)
		return (NULL);
	while (*rem)
		*res++ = *rem++;
	while (n--)
		*res++ = *add++;
	*res = 0;
	free(rem - rem_len);
	free(add - add_len);
	return (res - rem_len - add_len);
}

// frees allocated buffer and remainder
int	free_buf_rem(char **rem, char *buf)
{
	free(*rem);
	free(buf);
	return (-2);
}

// reads file until a newline or EOF
// returns index of the first newline,
// -1 if no newline, -2 on EOF and empty rem or on error
int	read_buffer(char **rem, int fd)
{
	int		r;
	int		nl;
	char	*buf;

	r = 1;
	if (!*rem)
	{
		*rem = malloc(1);
		if (!*rem)
			return (-2);
		*rem[0] = 0;
	}
	nl = has_newline(*rem);
	while (nl == -1 && r)
	{
		buf = malloc(BUFFER_SIZE);
		if (!buf)
			return (-2);
		r = read(fd, buf, BUFFER_SIZE);
		if (r < 0 || (r == 0 && **rem == 0))
			return (free_buf_rem(rem, buf));
		*rem = push_remainder(*rem, buf, r);
		nl = has_newline(*rem);
	}
	return (nl);
}
