/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/16 15:21:19 by aelphias          #+#    #+#             */
/*   Updated: 2020/11/04 20:45:35 by aelphias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/includes/libft.h"
# include "../ft_printf/includes/ft_printf.h"
# include <stdlib.h>

# define ARRAY_SIZE 501 

typedef struct s_push_swap
{
	int a[ARRAY_SIZE];
	int b[ARRAY_SIZE];
	/* int q_op keeps quantity of operations needed to put element of stack B in proper place 
	in stack A index number of an element in this array corresponds to index number of element of stack B*/
	int q_op[ARRAY_SIZE];
	int size_a;
	int size_b;
	char *line;
	int min;
	int max;
	int index_min;
	int index_max;
	int test;
	int	op_in_a;
	//int el_pos;
	/* max_seq contains quantity of el количество элеметнов которые возрастают
	для каждого элемента стека а */
	
	
}	t_push_swap;

void	read_args(t_push_swap *stack, int ac, char **av);
void	check_duplicates(t_push_swap *stack);
void	check_int_overflow(char *str);
void	check_input(int ac, char **av);
void	read_commands(t_push_swap *stack);
void	choose_f(t_push_swap *stack);
void	print_stack_a(t_push_swap *stack);
void	print_stack_b(t_push_swap *stack);
int		is_sorted(t_push_swap *stack);
void	read_commands(t_push_swap *stack);
void	read_args(t_push_swap *stack, int ac, char **av);

/*commands:*/

void	sa(t_push_swap *stack);
void	sb(t_push_swap *stack);
void	ss(t_push_swap *stack);
void	pa(t_push_swap *stack);
void	pb(t_push_swap *stack);
void	ra(t_push_swap *stack);
void	rb(t_push_swap *stack);
void	rr(t_push_swap *stack);
void	rra(t_push_swap *stack);
void	rrb(t_push_swap *stack);
void	rrr(t_push_swap *stack);

/*algos*/
void	sort_3(t_push_swap *stack);
void	sort(t_push_swap *stack);
void	s3rasa(t_push_swap *stack);
void	s3ra(t_push_swap *stack);
void	s3sa(t_push_swap *stack);
void	s3sara(t_push_swap *stack);

/* tools to sort */
void	find_min_max(t_push_swap *stack);
void	send_all_else_to_B(t_push_swap *stack);
void	find_lis(t_push_swap *stack);



/*DEBUG*/
void	debug(t_push_swap *stack);

#endif
