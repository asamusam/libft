/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asamuilk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 21:19:34 by asamuilk          #+#    #+#             */
/*   Updated: 2024/02/19 19:57:59 by asamuilk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Function: ft_striteri
 * ----------------------------
 * Applies the function 'f' on each character of
 * the string 's' passed as argument, passing its index
 * as first argument. Each character is passed by
 * address to 'f' to be modified if necessary.
 *
 * Returns:
 * Nothing.
 */
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i ++;
	}
}
