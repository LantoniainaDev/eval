/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_x.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eramanit <eramanit@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 17:35:31 by eramanit          #+#    #+#             */
/*   Updated: 2025/04/13 22:37:49 by eramanit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tester.h"

void test_x(void)
{
	long	lu = 2024;
	long	lu2 = -2025;
	char	*fmt = "les hexadecimaux: \033[35m\" %x %x\"\033[00m\n";
	int		l1;
	int		l2;

	puts("the printf:");
	l1 = printf(fmt, lu, lu2);
	puts("the ft_printf:");
	l2 = ft_printf(fmt, lu, lu2);
	test_len(l1, l2);
}
