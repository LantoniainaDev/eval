# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eramanit <eramanit@student.42antananari    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/29 07:46:30 by eramanit          #+#    #+#              #
#    Updated: 2025/05/10 10:21:56 by eramanit         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	prog

LIB		=	libftprintf.a

CC		=	cc

CFLAG	=	-Wall -Wextra -Werror

SRC		=	main.c test_*.c

FT_P	=	../../ft_printf/

all		:	$(NAME)

$(NAME)	:
	make -C $(FT_P)
	@$(CC) $(CFLAG) $(SRC) -o $@ -I $(FT_P) -l ftprintf -L $(FT_P)

clean	:
	make clean -C $(FT_P)
	rm -rf $(NAME)

fclean	:	clean;
	make fclean -C $(FT_P)

re		:	fclean all

run		: $(NAME)
	./$(NAME)
