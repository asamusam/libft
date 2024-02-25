/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getline.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asamuilk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 22:48:09 by asamuilk          #+#    #+#             */
/*   Updated: 2024/02/25 21:02:53 by asamuilk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_GETLINE_H
# define FT_GETLINE_H
# include <stdlib.h>
# include <unistd.h>
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1024
# endif

char	*ft_getline(int fd);
char	*ft_strdup(const char *src);
int		has_newline(char *s);
char	*push_result(const char *s);
char	*push_remainder(char *rem, char *add, int r);
int		read_buffer(char **rem, int fd);

#endif
