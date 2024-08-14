/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_puthex.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peferrei <peferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 14:41:48 by peferrei          #+#    #+#             */
/*   Updated: 2024/05/06 16:54:06 by peferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
/** @brief Writes a number into their hexadecimal form
 * 	@param n - number
 * 	@param c - the base in which it is to be formatted
 * 	@return Returns the size of it's final form
*/
int	ft_int_puthex(unsigned int n, char c)
{
	int		count;
	char	*hex;

	count = 0;
	if (c == 'x')
		hex = "0123456789abcdef";
	if (c == 'X')
		hex = "0123456789ABCDEF";
	if (n >= 16)
	{
		count += ft_int_puthex((n / 16), c);
		count += ft_int_puthex((n % 16), c);
	}
	else
		count += ft_putchar_fd(*(hex + n), 1);
	return (count);
}
