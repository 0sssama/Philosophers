CC=gcc
FLAGS=-Wall -Wextra -Werror
B_DIR = build
MANDATORY =	ft_strlen ft_strdup ft_putstr_fd ft_putendl_fd ft_atoi ft_isdigit ft_putnbr_fd \
			ft_putchar_fd ft_strcmp
OBJS= $(addprefix $(B_DIR)/, $(MANDATORY:=.o))
NAME=libft.a
AR= ar rc

.PHONY: all clean fclean re bonus

all: $(NAME)

$(NAME): $(OBJS) libft.h
	@$(AR) $(NAME) $(OBJS)

$(B_DIR)/%.o: %.c
	@mkdir -p $(@D)
	@$(CC) $(FLAGS) -c $< -o $@

clean:
	@rm -rf build

fclean: clean
	@rm -rf $(NAME)

re: fclean all
