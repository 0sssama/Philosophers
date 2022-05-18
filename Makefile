CC = cc
CFLAGS = -Wall -Wextra -Werror
INCLUDE = includes
B_DIR = build
HEADER = philo.h
SRC = main
OBJ = $(addprefix $(B_DIR)/, $(SRC:=.o))
LIBFT_DIR=src/utils/libft
LIBFT=src/utils/libft/libft.a

NAME = philo

.PHONY: clean fclean re all bonus

all: $(NAME)
	
$(NAME): $(OBJ) $(INCLUDE)/$(HEADER) $(LIBFT)
	$(CC) $(OBJ) -I $(INCLUDE) $(LIBFT) -o $@

$(LIBFT):
	make -C $(LIBFT_DIR)

$(B_DIR)/%.o: src/%.c
	mkdir -p $(@D)
	$(CC) -I $(INCLUDE) -c $< -o $@

clean:
	make clean -C $(LIBFT_DIR)
	rm -rf $(B_DIR) 

fclean: clean
	make fclean -C $(LIBFT_DIR)
	rm -rf $(NAME)

re: fclean all
