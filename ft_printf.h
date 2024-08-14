/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peferrei <peferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 14:46:55 by peferrei          #+#    #+#             */
/*   Updated: 2024/05/03 17:30:28 by peferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <stdarg.h>

int		ft_printf(const char *format, ...);
int		ft_putstr_fd(char *str, int fd);
size_t	ft_strlen(const char *str);
int		ft_putchar_fd(char c, int fd);
int		ft_putnbr_fd(int nb, int fd);
int		ft_putnbr_base(unsigned int nbr, char *base);
int		ft_putptr(unsigned long ptr);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
int		ft_int_puthex(unsigned int n, char c);
int		ft_numlen(int n);

#endif
