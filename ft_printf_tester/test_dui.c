/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_dui.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eramanit <eramanit@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 14:35:52 by eramanit          #+#    #+#             */
/*   Updated: 2025/04/15 00:02:05 by eramanit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tester.h"

void test_d(void)
{
	char	*fmt = "le decimal: \033[35m\"%d %d\"\033[00m\n";
	int		i = 0xff;
	long		i2 = __INT_MAX__;
	int		l1;
	int		l2;

	puts("the printf:");
	l1 = printf(fmt, i, i2);
	puts("the ft_printf:");
	l2 = ft_printf(fmt, i, i2);
	test_len(l1, l2);
}

void test_i(void)
{
	char	*fmt = "les entiers: \033[35m\"%i %i\"\033[00m\n";
	int		i = 0xff;
	int		i2 = -2147483648;
	int		l1;
	int		l2;

	puts("the printf:");
	l1 = printf(fmt, i, i2);
	puts("the ft_printf:");
	l2 = ft_printf(fmt, i, i2);
	test_len(l1, l2);
}

void test_u(void)
{
	char	*fmt = "les unsigneds: \033[35m\"%u %u\"\033[00m\n";
	int		i = 2345;
	int		i2 = -23456;
	int		l1;
	int		l2;

	puts("the printf:");
	l1 = printf(fmt, i, i2);
	puts("the ft_printf:");
	l2 = ft_printf(fmt, i, i2);
	test_len(l1, l2);
}


void test_percent(void)
{
	char	*fmt = "les unsigneds: \033[35m\"%%\"\033[00m\n";
	int		l1;
	int		l2;

	puts("the printf:");
	l1 = 2;
	l1 = printf(fmt, 1);
	puts("the ft_printf:");
	l2 = ft_printf(fmt, 1);
	test_len(l1, l2);
}