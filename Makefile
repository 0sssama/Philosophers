CC = cc
CFLAGS = -Wall -Wextra -Werror
PHILO_INCLUDE = includes
LIBFT_INCLUDE = src/utils/libft
INCLUDE = -I $(PHILO_INCLUDE) -I $(LIBFT_INCLUDE)
B_DIR = build
PHILO_HEADER = $(PHILO_INCLUDE)/philo.h
LIBFT_HEADER = $(LIBFT_INCLUDE)/libft.h
HEADERS = $(PHILO_HEADER) $(LIBFT_HEADER)
SRC = main parsing/ft_check_args parsing/ft_fill_state parsing/ft_allocate_philos \
		exits/ft_error parsing/ft_allocate_forks exits/ft_free_philos exits/ft_free_forks
OBJ = $(addprefix $(B_DIR)/, $(SRC:=.o))
LIBFT_DIR=src/utils/libft
LIBFT=src/utils/libft/libft.a

NAME = philo

.PHONY: clean fclean re all bonus

all: $(NAME)
	
$(NAME): $(OBJ) $(HEADERS) $(LIBFT)
	$(CC) $(CFLAGS) $(OBJ) $(INCLUDE) $(LIBFT) -o $@

$(LIBFT):
	make -C $(LIBFT_DIR)

$(B_DIR)/%.o: src/%.c $(HEADERS)
	mkdir -p $(@D)
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

clean:
	make clean -C $(LIBFT_DIR)
	rm -rf $(B_DIR) 

fclean: clean
	make fclean -C $(LIBFT_DIR)
	rm -rf $(NAME)

re: fclean all
