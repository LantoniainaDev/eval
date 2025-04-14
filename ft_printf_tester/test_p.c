/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_p.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eramanit <eramanit@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 13:35:32 by eramanit          #+#    #+#             */
/*   Updated: 2025/04/14 03:35:55 by eramanit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tester.h"

void test_p(void)
{
	// char	*lu = "f";
	// size_t	lu = -1;
	// char	*fmt = "les pointers: \033[35m\" %p\"\033[00m\n";
	int		l1;
	int		l2;

	// puts("the printf:");
	// l1 = printf(fmt, lu);
	// puts("the ft_printf:");
	// l2 = ft_printf(fmt, lu);

	l1 = printf(" %p ", (void *)1);
	l2 = ft_printf(" %p ", (void *)1);
	test_len(l1, l2);
}
