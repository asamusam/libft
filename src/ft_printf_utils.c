/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asamuilk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 13:20:32 by asamuilk          #+#    #+#             */
/*   Updated: 2024/02/25 18:07:47 by asamuilk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_char(int c)
{
	return (write(1, &c, 1));
}

int	print_str(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (write(1, "(null)", 6));
	while (str[i])
		i ++;
	return (write(1, str, i));
}

int	print_number(int n)
{
	char	res[MAX_INT_LEN];
	int		i;
	bool	neg;

	if (n == 0)
		return (write(1, "0", 1));
	neg = n < 0;
	i = MAX_INT_LEN - 1;
	while (n != 0)
	{
		if (neg)
			res[i] = -(n % 10) + 48;
		else
			res[i] = (n % 10) + 48;
		n = n / 10;
		i --;
	}
	if (neg)
		res[i] = '-';
	else
		i ++;
	return (write(1, &res[i], MAX_INT_LEN - i));
}

int	print_unumber(unsigned int n)
{
	char			res[MAX_UNSIGNED_LEN];
	int				i;

	if (n == 0)
		return (write(1, "0", 1));
	i = MAX_UNSIGNED_LEN - 1;
	while (n != 0)
	{
		res[i] = (n % 10) + 48;
		n = n / 10;
		i --;
	}
	i ++;
	return (write(1, &res[i], MAX_UNSIGNED_LEN - i));
}

int	print_hex(unsigned int n, char *charset)
{
	char			res[MAX_HEX_LEN];
	int				i;

	if (n == 0)
		return (write(1, "0", 1));
	i = MAX_HEX_LEN - 1;
	while (n != 0)
	{
		res[i] = charset[n % 16];
		n = n / 16;
		i --;
	}
	i ++;
	return (write(1, &res[i], MAX_HEX_LEN - i));
}

int	print_pointer(unsigned long long n)
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

int	print_arg(va_list *args, char format)
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
