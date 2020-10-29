.PHONY: all clean fclean re
NAME1 = checker
NAME2 = push_swap
SRC_DIR = ./src/
OBJ_DIR = ./obj/
SRC_INC_DIR = ./includes
INC_C = ./includes/push_swap.h
SRC_FILES_CHECKER = checker.c parse.c wait_n_read.c print_stack.c\
			debug.c choose_f.c commands0.c commands1.c\
			commands2.c is_sorted.c 
SRC_FILES_PUSH_SWAP = push_swap.c is_sorted.c parse.c\
						commands0.c commands1.c commands2.c\
						debug.c sort_3.c sort_5.c
SRCS_CHECKER = $(addprefix $(SRC_DIR), $(SRC_FILES_CHECKER))
SRCS_PUSH_SWAP = $(addprefix $(SRC_DIR), $(SRC_FILES_PUSH_SWAP))
OBJS_CH = $(addprefix $(OBJ_DIR), $(SRC_FILES_CHECKER:.c=.o))
OBJS_PUSH_SWAP = $(addprefix $(OBJ_DIR), $(SRC_FILES_PUSH_SWAP:.c=.o))
INCL = -I$(SRC_INC_DIR)
FLAGS =  -Wextra -Wall -g $(INCL) # add -Werror
LIBFT = ./libft/
FT_PRINTF = ./ft_printf/
all: $(NAME1) $(NAME2)
$(NAME1): $(OBJ_DIR) $(OBJS_CH) $(LIBFT) $(FT_PRINTF)
	gcc -o $(NAME1) $(FLAGS) $(INCL) -L$(FT_PRINTF) -lftprintf -I./libft/includes/ -L$(LIBFT) -lft $(OBJS_CH)
$(NAME2): $(OBJ_DIR) $(OBJS_PUSH_SWAP) $(LIBFT) $(FT_PRINTF)
	gcc -o $(NAME2) $(FLAGS) $(INCL) -L$(FT_PRINTF) -lftprintf -I./libft/includes/ -L$(LIBFT) -lft $(OBJS_PUSH_SWAP)
$(OBJ_DIR):
	mkdir $(OBJ_DIR)
$(OBJ_DIR)%.o: $(SRC_DIR)%.c $(INC_C)
	gcc $(FLAGS) -c $< -o $@
FORCE:		;
$(LIBFT):		FORCE
				make -C $(LIBFT)
$(FT_PRINTF):		FORCE
				make -C $(FT_PRINTF)
norm:
	norminette includes/*.h src/*.c
clean:
	@rm -rf $(OBJ_DIR) ./libft/*.o ./ft_printf/*.o
fclean: clean
	@rm -rf $(NAME1) libft/libft.a ft_printf/libftprintf.a
re: fclean all
