CC		=	gcc

CFLAG	=	-Wall -Wextra -Werror -I $(DIR) 

DIR		=	../../get_next_line/

FILES	=	get_next_line_utils.c get_next_line.c

SRC		=	$(addprefix $(DIR), $(FILES)) tester.c

SRC_B		=	$(addprefix $(DIR), $(FILES:.c=_bonus.c)) tester.c

NAME	=	out
B	=	bo

BUFF	=	-D BUFFER_SIZE=0

all		: $(NAME)

$(NAME)	:
	@$(CC) $(SRC) $(CFLAG) $(BUFF) -o $(NAME)

$(B)	:
	@$(CC) $(SRC_B) $(CFLAG) $(BUFF) -o $(B)

clean	: fclean

fclean	:
	@rm -rf  $(NAME)

re		:	fclean all

run		:
	./$(NAME)

bonus	: $(B)
	./$(B) bonus

val		:
	valgrind ./$(NAME) -q --leak-check=full
