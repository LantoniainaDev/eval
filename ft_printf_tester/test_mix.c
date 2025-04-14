/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_mix.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eramanit <eramanit@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 00:33:06 by eramanit          #+#    #+#             */
/*   Updated: 2025/04/14 00:44:13 by eramanit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tester.h"

void	test_mix(void)
{
	char	*fmt;
	char	*s = "Bienvenu";
	int		n = 42;

	fmt = "%s a %d en hexa: %x | %X,\ndont l'opose est : %i, en unsigned vaut : %u,\nle %c, de %s est situe a %p \n est-ce recu %%?";
	puts("\n\033[33mthe printf:\033[00m");
	int	l1 = printf(fmt, s, n, n, n, -n, -n, *s, s, s);
	puts("\n\033[33mthe ft_printf:\033[00m");
	int	l2 = ft_printf(fmt, s, n, n, n, -n, -n, *s, s, s);
	test_len(l1, l2);
}