/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_len.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eramanit <eramanit@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 13:20:13 by eramanit          #+#    #+#             */
/*   Updated: 2025/04/14 01:30:01 by eramanit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tester.h"

void test_len(int l1, int l2)
{
	puts("");
	if (l1 == l2)
		puts("\033[32mreturn test : [OK] \033[00m");
	else
	{
		puts("\033[31mreturn test : [KO] \033[00m");
		printf("original: %d \nyours: %d \n", l1, l2);
	}
}