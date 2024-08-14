/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_putstr_fd.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peferrei <peferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 14:05:53 by peferrei          #+#    #+#             */
/*   Updated: 2024/05/06 16:48:24 by peferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "ft_printf.h"
#include <unistd.h>
/** @brief Writes a string on a specified file descriptor
 * 	@param str - string
 * 	@param fd - specified file descriptor
*/
int	ft_putstr_fd(char *str, int fd)
{
	int		i;

	if (str == NULL)
		return (write(fd, "(null)", 6));
	if (str)
	{
		i = 0;
		while (str[i] != '\0')
		{
			write(fd, &str[i], 1);
			i++;
		}
	}
	return (ft_strlen(str));
}

/*int	main(void)
{
	char	*string;

	string = "LMAO";
	ft_putstr_fd(string, 1);
	return (0);
}*/
