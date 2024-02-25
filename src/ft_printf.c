/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asamuilk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 21:22:55 by asamuilk          #+#    #+#             */
/*   Updated: 2024/02/25 21:29:44 by asamuilk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
 * Function: ft_printf
 * ----------------------------
 * Prints output according to a format string.
 *
 * Available format specifiers:
 * %c - character;
 * %s - string;
 * %p - pointer (hexadecimal long long unsigned integer);
 * %d - decimal integer;
 * %i - decimal integer;
 * %u - unsigned decimal integer;
 * %x - hexadecimal integer;
 * %X - uppercase hexadecimal integer;
 * %% - percent sign.
 * 
 * Returns:
 * Number of bytes printed.
 */
int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		bytes;
	int		i;
	int		j;

	va_start(args, format);
	bytes = 0;
	i = 0;
	j = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			write(1, &format[j], i - j);
			bytes += i - j + print_arg(&args, format[i + 1]);
			j = i + 2;
			i ++;
		}
		i ++;
	}
	write(1, &format[j], i - j);
	bytes += i - j;
	va_end(args);
	return (bytes);
}
