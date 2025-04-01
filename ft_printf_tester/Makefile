# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eramanit <eramanit@student.42antananari    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/29 07:46:30 by eramanit          #+#    #+#              #
#    Updated: 2025/04/01 12:09:36 by eramanit         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	prog

LIB		=	libftprintf.a

CC		=	cc

CFLAG	=	-Wall -Wextra -Werror

SRC		=	main.c

FT_P	=	../../ft_printf/

all		:	$(NAME)

$(NAME)	:	$(SRC)
	make -C $(FT_P)
	$(CC) $(CFLAG) $(SRC) -o $@ -I $(FT_P) -l ftprintf -L $(FT_P)

clean	:
	rm -rf $(NAME)

fclean	:	clean;

re		:	fclean all

run		: $(NAME)
	./$(NAME)
