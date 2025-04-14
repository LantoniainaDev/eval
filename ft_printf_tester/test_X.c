/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_X.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eramanit <eramanit@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 22:45:51 by eramanit          #+#    #+#             */
/*   Updated: 2025/04/13 22:46:15 by eramanit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tester.h"

void test_X(void)
{
	long	lu = 2024;
	long	lu2 = -2025;
	char	*fmt = "les hexadecimaux: \033[35m\" %X %X\"\033[00m\n";
	int		l1;
	int		l2;

	puts("the printf:");
	l1 = printf(fmt, lu, lu2);
	puts("the ft_printf:");
	l2 = ft_printf(fmt, lu, lu2);
	test_len(l1, l2);
}
