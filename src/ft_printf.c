/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asamuilk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 21:22:55 by asamuilk          #+#    #+#             */
/*   Updated: 2024/03/13 13:19:06 by asamuilk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	print_pointer(unsigned long long n)
{
	char	res[MAX_POINTER_LEN];
	char	*charset;
	int		i;

	charset = "0123456789abcdef";
	if (n == 0)
		return (write(1, "0x0", 3));
	i = MAX_POINTER_LEN - 1;
	while (n != 0)
	{
		res[i] = charset[n % 16];
		n = n / 16;
		i --;
	}
	i ++;
	return (write(1, "0x", 2) + write(1, &res[i], MAX_POINTER_LEN - i));
}

static int	print_arg(va_list *args, char format)
{
	if (format == 's')
		return (print_str(va_arg(*args, char *)));
	else if (format == 'c')
		return (print_char(va_arg(*args, int)));
	else if (format == 'd' || format == 'i')
		return (print_number(va_arg(*args, int)));
	else if (format == 'u')
		return (print_unumber(va_arg(*args, unsigned int)));
	else if (format == 'x')
		return (print_hex(va_arg(*args, unsigned int), "0123456789abcdef"));
	else if (format == 'X')
		return (print_hex(va_arg(*args, unsigned int), "0123456789ABCDEF"));
	else if (format == 'p')
		return (print_pointer(va_arg(*args, unsigned long long)));
	else if (format == '%')
		return (write(1, "%", 1));
	return (0);
}

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
