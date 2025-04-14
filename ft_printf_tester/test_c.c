/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_c.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eramanit <eramanit@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 10:36:20 by eramanit          #+#    #+#             */
/*   Updated: 2025/04/14 01:26:17 by eramanit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tester.h"

void test_c(void)
{
	char	*format;
	int		l1;
	int		l2;
	char	c;

	c = 0;
	format = "le caractere \033[35m\"%c %c \"\033[00m\n";
	// puts("the printf:");
	// l1 = printf(format, c, c + '0');
	// puts("the ft_printf:");
	// l2 = ft_printf(format, c, c + '0');
	// test_len(l1, l2);

	// l1 = printf(" %c |", '0');
	// l2 = ft_printf(" %c |", '0');
	// test_len(l1, l2);

	l1 = printf(" %c %c %c ", '0', 0, '1');
	l2 = ft_printf(" %c %c %c ", '0', 0, '1');
	test_len(l1, l2);
}
