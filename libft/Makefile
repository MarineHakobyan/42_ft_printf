NAME = libft.a
CC = gcc
CFLAGS = -Werror -Wall -Wextra
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)
BONUS_SRC = $(wildcard ft_lst*.c)
BONUS_OBJ = $(BONUS_SRC:.c=.o)
RM = rm -f
%.o:%.c
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME) $(bonus)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ) 
	
clean: 
	$(RM) $(OBJ)
	$(RM) $(BONUS_OBJ)

fclean: clean
	$(RM) $(NAME)

bonus: $(BONUS_OBJ)
	ar rcs $(NAME) $(BONUS_OBJ)

re: fclean all


.PHONY: all clean fclean re bonus