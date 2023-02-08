NAME = libftprintf.a
CC = gcc
CFLAGS = -Werror -Wall -Wextra
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)
RM = rm -f
LIBFT = libft/libft.a
%.o:%.c
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ) $(LIBFT)
	ar rcs $(NAME) $(OBJ) 
	
$(LIBFT):
	make -C libft
	cp $(LIBFT) $(NAME)
clean: 
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)
	$(RM) *.a
	make fclean -C libft/


re: fclean all


.PHONY: all clean fclean re bonus