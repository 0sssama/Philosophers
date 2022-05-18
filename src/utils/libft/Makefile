CC=gcc
FLAGS=-Wall -Wextra -Werror
B_DIR = build
MANDATORY =	ft_strlen ft_strdup
OBJS= $(addprefix $(B_DIR)/, $(MANDATORY:=.o))
NAME=libft.a
AR= ar rc

.PHONY: all clean fclean re bonus

all: $(NAME)

$(NAME): $(OBJS)
	@$(AR) $(NAME) $(OBJS)

$(B_DIR)/%.o: %.c
	@mkdir -p $(@D)
	@$(CC) $(FLAGS) -c $< -o $@

clean:
	@rm -rf build

fclean: clean
	@rm -rf $(NAME)

re: fclean all
