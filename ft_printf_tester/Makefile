# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eramanit <eramanit@student.42antananari    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/29 07:46:30 by eramanit          #+#    #+#              #
#    Updated: 2025/03/29 07:46:31 by eramanit         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	prog

CC		=	cc

CFLAG	=	-Wall -Wextra -Werror

SRC		=	main.c

all		:	$(NAME)

$(NAME)	:
	$(CC) $(CFLAG) $(SRC) -o $@

clean	:
	rm -rf $(NAME)

fclean	:	clean;

re		:	fclean all

run		:
	./$(NAME)
