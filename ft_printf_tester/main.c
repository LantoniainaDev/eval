/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eramanit <eramanit@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 06:56:41 by eramanit          #+#    #+#             */
/*   Updated: 2025/04/01 10:55:42 by eramanit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

void test(void)
{
	int c = 78;
	char	*s = "N";
	puts("the printf:");
	printf("le caractere \033[35m\"%c\"\033[00m/", 'c');
	puts("");

	puts("the printf:");
	printf("le char * \033[35m\"%s\"\033[00m/", "chaine");
	puts("");

	puts("the printf:");
	printf("le decimal \033[35m\"%d\"\033[00m/", 0xf);
	puts("");

	puts("the printf:");
	printf("l'entier: \033[35m\"%i\"\033[00m/", -1);
	puts("");

	puts("the printf:");
	printf("l'entier naturel: \033[35m\"%u\"\033[00m/", -1);
	puts("");

	puts("the printf:");
	printf("les entiers hex: \033[35m\"%x %x\"\033[00m/", -16, 15);
	puts("");


	puts("the printf:");
	printf("les entiers HEX: \033[35m\"%i = %X\"\033[00m/", 15, 15);
	puts("");

	puts("the printf:");
	printf("le mix de types: \033[35m%%%s = %dd = %ii = %xx = %cc = %XX stocked dans: %p%%\033[00m/",
			s, c, c, c,(char) c, c, &c);
	puts("");
}

// printf("\033[32mBonjour\033[00m\n");
// [ couleur m
int main(void)
{
	ft_printf("12345");
	return (0);
}
