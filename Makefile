NAME= my_math.a

CFLAGS= -Werror -Wextra -Wall

SRC= whole_num_log.c pow.c

CHANGE = $(SRC=%.c=%.o)

math:
	gcc $(CFLAGS) $(SRC)
	@./a.out

all: (NAME)

$(NAME): $(CHANGE)
	ar rcs $(NAME) $(CHANGE)

clean:
	rm -rf $(CHANGE)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re