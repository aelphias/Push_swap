/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/16 15:21:19 by aelphias          #+#    #+#             */
/*   Updated: 2020/10/29 23:06:36 by aelphias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/includes/libft.h"
# include "../ft_printf/includes/ft_printf.h"

typedef struct s_push_swap
{
	int a[400000];
	int b[400000];
	/* int q_op keeps quantity of operations needed to put element of stack B in proper place 
	in stack A index number of an element in this array corresponds to index number of element of stack B*/
	int q_op[400000];
	int size_a;
	int size_b;
	char *line;
	int min;
	int max;
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
void	s3rasa(t_push_swap *stack);
void	s3ra(t_push_swap *stack);
void	s3sa(t_push_swap *stack);
void	s3sara(t_push_swap *stack);

/* tools 4 sort */
void	find_min_max(t_push_swap *stack);


/*DEBUG*/
void	debug(t_push_swap *stack);

#endif
