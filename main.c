/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peferrei <peferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 11:46:51 by peferrei          #+#    #+#             */
/*   Updated: 2024/05/03 17:44:16 by peferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	ft_printf("Mine: Get some %p so I could test it.", "234");
	printf("Original: Get some %p so I could test it.\n", "234");
	return (0);
}*/

#include <stdio.h>
#include "ft_printf.h"

int	main()
{
	char c = 'k'; // %c
	char *str = "String test"; // %s
	char *var; var = &c;// %p
	int	nbr = -5;// %d // %i
	unsigned int nbrr = 20;// %u
	int b= 0xffffffff;// %x // %X
	// %%

	int i;
	printf("hmmmm %d\n", b);
	printf("Printf replica:\n");
	i = ft_printf("| TEST TEXT |\n| Single Char: %c |\n| String: %s |\n| Pointer Adress: %p |\n| Decimal: %d |\n| Integer %i |\n| Unsign deci: %u |\n| HexLower: %x |\n| HexUpper: %X |\n| Percentage sign: %% |\n", c, str, var, nbr, nbr, nbrr, b, b);
	printf("\nReturn Value: %d", i);
	///////////////////////////////
	printf("\nPrintf original:\n");
	i = printf("| TEST TEXT |\n| Single Char: %c |\n| String: %s |\n| Pointer Adress: %p |\n| Decimal: %d |\n| Integer %i |\n| Unsign deci: %u |\n| HexLower: %x |\n| HexUpper: %X |\n| Percentage sign: %% |\n", c, str, var, nbr, nbr, nbrr, b, b);
	printf("\nReturn Value: %d", i);
	return (0);
}

/*int main()
{
	int i;

	i = ft_printf("1: %u, 2: %u, 3: %u", -1, 309, 4029);
	printf("\nReturn Value: %d", i);
	printf("\n/////////////////////////\n");
	i =  printf("1: %u, 2: %u, 3: %u", -1, 309, 4029);;
	printf("\nReturn Value: %d", i);
	return(0);
}*/
