CC		=	cc

CFLAG	=	-Wall -Wextra -Werror -I $(DIR) 

DIR		=	../../get_next_line/

FILES	=	get_next_line_utils.c get_next_line.c

SRC		=	$(addprefix $(DIR), $(FILES)) tester.c

NAME	=	out

BUFF	=	-D BUFFER_SIZE=0

all		: $(NAME)

$(NAME)	:
	$(CC) $(SRC) $(CFLAG) $(BUFF) -o $(NAME)

clean	: fclean

fclean	:
	rm -rf  $(NAME)

re		:	fclean all

run		:
	./$(NAME)

val		:
	valgrind ./$(NAME) -q --leak-check=full