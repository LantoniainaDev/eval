/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eramanit <eramanit@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 21:27:29 by eramanit          #+#    #+#             */
/*   Updated: 2025/03/29 04:53:38 by eramanit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "fcntl.h"
#include <stdio.h>

void ft_display(char *s)
{
	printf("->%s---- \n",s);
	free(s);
}

int test1(void)
{
	int		fd;
	char	*s;

	fd = open("test", O_RDONLY);
	if (!fd)
		return (1);
	s = get_next_line(fd);
	while (s)
	{
		ft_display(s);
		s = get_next_line(fd);
	}
	return (0);
}

int test2(void)
{
	int	fd;
	char	*s;

	fd = 1;
	s = get_next_line(fd);
	ft_display(s);
	s = get_next_line(fd);
	ft_display(s);
	return (0);
}

int	test3(void)
{
	char	*s;

	s = get_next_line(5);
	ft_display(s);
	free(s);
	return (0);
}

int main(void)
{
	test1();
	test2();
	test3();
	return (0);
}

