/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asamuilk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 18:02:03 by asamuilk          #+#    #+#             */
/*   Updated: 2024/03/29 18:20:02 by asamuilk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Function: ft_strcmp
 * ----------------------------
 * Compares strings 's1' and 's2'.
 *
 * Returns:
 * An integer indicating the result of the comparison:
 * • 0, if the s1 and s2 are equal;
 * • a negative value if s1 is less than s2;
 * • a positive value if s1 is greater than s2.
 */
int	ft_strcmp(char *s1, char *s2)
{
	int	result;

	while (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
	{
		s1 ++;
		s2 ++;
	}
	result = *s1 - *s2;
	return (result);
}
