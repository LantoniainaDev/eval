/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eramanit <eramanit@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 21:27:29 by eramanit          #+#    #+#             */
/*   Updated: 2025/04/13 21:32:19 by eramanit         ###   ########.fr       */
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

	puts("\033[32m TEST 1 \033[00m");
	fd = open("test", O_RDONLY);
	if (!fd)
		return (1);
	s = get_next_line(fd);
	while (s)
	{
		ft_display(s);
		s = get_next_line(fd);
	}
	close(fd);
	return (0);
}

int test2(void)
{
	int	fd;
	char	*s;

	puts("\033[32m TEST 1 \033[00m");
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

	puts("\033[32m TEST 1 \033[00m");
	s = get_next_line(5);
	ft_display(s);
	free(s);
	return (0);
}

int	bonus_test(void)
{
	char	*s;
	int		fd1;
	int		fd2;

	fd2 = open("file2", O_RDONLY);
	fd1 = open("test", O_RDONLY);
	s = get_next_line(fd1);
	ft_display(s);
	s = get_next_line(fd2);
	ft_display(s);
	while (s)
	{
		s = get_next_line(fd1);
		ft_display(s);
		s = get_next_line(fd2);
		ft_display(s);
	}
	close(fd1);
	close(fd2);
	return (0);
}

int main(int ac, char **av)
{
	(void ) av;
	if (ac < 2)
	{
		test1();
		test2();
		test3();
	}
	else
		bonus_test();
	return (0);
}

