.PHONY: all clean fclean re
NAME1 = checker
NAME2 = push_swap
SRC_DIR = ./src/
OBJ_DIR = ./obj/
SRC_INC_DIR = ./includes
INC_C = ./includes/push_swap.h
SRC_FILES =  *.c
SRCS = $(addprefix $(SRC_DIR), $(SRC_FILES))
OBJS = $(addprefix $(OBJ_DIR), $(SRC_FILES:.c=.o))
INCL = -I$(SRC_INC_DIR)
FLAGS = -Werror -Wextra -Wall -g $(INCL)
.PHONY: clean fclean all re
all: $(NAME1)
$(NAME1): $(OBJ_DIR) $(OBJS)
	@gcc -o $(NAME1) $(FLAGS) $(OBJS)
$(OBJ_DIR):
	@mkdir $(OBJ_DIR)
$(OBJ_DIR)%.o: $(SRC_DIR)%.c $(INC_C)
	@gcc $(FLAGS) -c $< -o $@
norm:
	norminette includes/*.h src/*.c
clean:
	@rm -rf $(OBJ_DIR)
fclean: clean
	@rm -rf $(NAME1)
re: fclean all
