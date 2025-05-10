/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eramanit <eramanit@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 06:56:41 by eramanit          #+#    #+#             */
/*   Updated: 2025/05/10 10:22:41 by eramanit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tester.h"

int main(void)
{
	test_c();
	test_s();
	test_p();
	test_d();
	test_i();
	test_u();
	test_x();
	test_X();
	test_percent();
	test_mix();
	ft_putnbr_fd(ft_printf(NULL) == printf(NULL), 1);
	return (0);
}
