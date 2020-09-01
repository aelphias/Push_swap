.PHONY: all clean fclean re
NAME1 = checker
NAME2 = push_swap
SRC_DIR = ./src/
OBJ_DIR = ./obj/
SRC_INC_DIR = ./includes
INC_C = ./includes/push_swap.h
SRC_FILES = checker.c parse.c commands0.c wait_n_read.c execute.c print_stack.c\
			debug.c commands1.c
SRCS = $(addprefix $(SRC_DIR), $(SRC_FILES))
OBJS = $(addprefix $(OBJ_DIR), $(SRC_FILES:.c=.o))
INCL = -I$(SRC_INC_DIR)
FLAGS =  -Wextra -Wall -g $(INCL) # add -Werror
LIBFT = ./libft/
FT_PRINTF = ./ft_printf/
.PHONY: clean fclean all re
all: $(NAME1)
$(NAME1): $(OBJ_DIR) $(OBJS) $(LIBFT) $(FT_PRINTF)
	@gcc -o $(NAME1) $(FLAGS) $(INCL) -L$(FT_PRINTF) -lftprintf -I./libft/includes/ -L$(LIBFT) -lft $(OBJS)
$(OBJ_DIR):
	@mkdir $(OBJ_DIR)
$(OBJ_DIR)%.o: $(SRC_DIR)%.c $(INC_C)
	@gcc $(FLAGS) -c $< -o $@
FORCE:		;
$(LIBFT):		FORCE
				@make -C $(LIBFT)
$(FT_PRINTF):		FORCE
				@make -C $(FT_PRINTF)
norm:
	norminette includes/*.h src/*.c
clean:
	@rm -rf $(OBJ_DIR) ./libft/*.o ./ft_printf/*.o
fclean: clean
	@rm -rf $(NAME1) libft/libft.a ft_printf/libftprintf.a
re: fclean all
