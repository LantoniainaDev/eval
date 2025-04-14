/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_s.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eramanit <eramanit@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 13:14:42 by eramanit          #+#    #+#             */
/*   Updated: 2025/04/14 01:35:32 by eramanit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tester.h"

void test_s(void)
{
	// char	*format;
	char	*s;
	int		l1;
	int		l2;

	// s = "chaine";
	// format = "le char * \033[35m\"%s\"\033[00m\n";
	// puts("the printf:");
	// l1 = printf(format, s);
	// puts("the ft_printf:");
	// l2 = ft_printf(format, s);
	// test_len(l1, l2);

	s = NULL;
	l1 = printf(" NULL %s NULL ", s);
	l2 = ft_printf(" NULL %s NULL ", s);
	test_len(l1, l2);
}