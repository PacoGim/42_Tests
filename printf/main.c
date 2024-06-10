/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgimeno <pgimeno@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 14:49:58 by pgimeno           #+#    #+#             */
/*   Updated: 2024/06/10 09:27:41 by pgimeno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	char	*str = "This is a string";
	char *null;

	printf("OG  %%%% \n");
	ft_printf("NW  %%%% \n\n");

	printf("OG 16 in Hexa: %x \n", -16);
	ft_printf("NW 16 in Hexa: %x \n\n", -16);

	printf("OG %c\n", 'a');
	ft_printf("NW %c\n\n", 'a');

	printf("OG %c\n", '0');
	ft_printf("NW %c\n\n", '0');

	printf("OG |%s|\n", "");
	ft_printf("NW |%s|\n\n", "");

	printf("OG Hello! It's a me %s%s!\n", "Mario", "Luigi");
	ft_printf("NW Hello! It's a me %s%s!\n\n", "Mario", "Luigi");

	printf("OG This is the number 0x42: %i\n", 0x42);
	ft_printf("NW This is the number 0x42: %i\n\n", 0x42);

	printf("OG Max Unsigned INT: %u\n", UINT_MAX);
	ft_printf("Max Unsigned INT: %u\n\n", UINT_MAX);

	printf("OG Negative Unsigned INT: %u\n", -42);
	ft_printf("NW Negative Unsigned INT: %u\n\n", -42);

	printf("OG Min Unsigned INT: %d\n", INT_MIN);
	ft_printf("NW Min Unsigned INT: %d\n\n", INT_MIN);

	printf("OG Hexadecimal 42 UPPERCASE: %X\n", 42);
	ft_printf("NW Hexadecimal 42 UPPERCASE: %X\n\n", 42);

	printf("OG Hexadecimal 42 lowercase: %x\n", 42);
	ft_printf("NW Hexadecimal 42 lowercase: %x\n\n", 42);

	printf("OG Hexadecimal -1 lowercase: %x\n", -1);
	ft_printf("NW Hexadecimal -1 lowercase: %x\n\n", -1);

	printf("OG Pointer MEMPOS: %p\n", str);
	ft_printf("NW Pointer MEMPOS: %p\n\n", str);

	printf("OG Pointer MEMPOS: %p\n", null);
	ft_printf("NW Pointer MEMPOS: %p\n\n", null);
	return (0);
}
