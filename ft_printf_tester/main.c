/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eramanit <eramanit@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 06:56:41 by eramanit          #+#    #+#             */
/*   Updated: 2025/04/14 03:54:27 by eramanit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tester.h"

void test_c(void);

void test(void)
{
	int c = 78;
	char	*s = "N";

	puts("the printf:");
	printf("l'entier: \033[35m\"%i\"\033[00m/", -1);
	puts("");

	puts("the printf:");
	printf("l'entier naturel: \033[35m\"%u\"\033[00m/", -1);
	puts("");

	puts("the printf:");
	printf("les entiers HEX: \033[35m\"%X %X\"\033[00m/", -15, 15);
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
	// test_c();
	// test_s();
	test_p();
	// test_d();
	// test_i();
	// test_u();
	// test_x();
	// test_X();
	// test_percent();
	// test_mix();
	return (0);
}
