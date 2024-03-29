/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asamuilk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:35:26 by asamuilk          #+#    #+#             */
/*   Updated: 2024/03/29 18:03:36 by asamuilk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int		res;
	char	*str;

	res = 0;
	str = (char *)s;
	while (*str)
	{
		while (*str == c && *s)
			str ++;
		if (!*str)
			break ;
		res ++;
		while (*str != c && *str)
			str ++;
	}
	return (res);
}

static void	ft_split_fill(char const *s, char c, char **res)
{
	unsigned int	start;
	int				len;
	int				i;
	int				f;

	start = 0;
	i = 0;
	f = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			len = 0;
			while (s[i] != c && s[i])
			{
				len ++;
				i ++;
			}
			res[f++] = ft_substr(s, start, len);
		}
		while (s[i] == c && s[i])
			i ++ ;
		start = i;
	}
	res[f] = NULL;
}

/*
 * Function: ft_split
 * ----------------------------
 * Allocates with malloc() and returns an array
 * of strings obtained by splitting 's' using the
 * character 'c' as a delimiter. The array must end
 * with a NULL pointer.
 *
 * Returns:
 * The array of new strings resulting from the split.
 * NULL if the allocation fails.
 */
char	**ft_split(char const *s, char c)
{
	char			**res;

	res = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!res)
		return (res);
	ft_split_fill(s, c, res);
	return (res);
}
