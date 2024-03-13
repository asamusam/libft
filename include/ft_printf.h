/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asamuilk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 21:51:52 by asamuilk          #+#    #+#             */
/*   Updated: 2024/03/13 13:22:31 by asamuilk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# define MAX_INT_LEN 11
# define MAX_UNSIGNED_LEN 10
# define MAX_HEX_LEN 8
# define MAX_POINTER_LEN 16
# include <unistd.h>
# include <stdarg.h>
# include <stdbool.h>

int		ft_printf(const char *format, ...);
int		print_char(int c);
int		print_str(char *str);
int		print_number(int n);
int		print_unumber(unsigned int n);
int		print_hex(unsigned int n, char *charset);

#endif