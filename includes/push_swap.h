/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/16 15:21:19 by aelphias          #+#    #+#             */
/*   Updated: 2020/08/30 09:48:02 by aelphias         ###   ########.fr       */
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
	int size_a;
	int size_b;
	char *line;
	char saved_line[50000];
}	t_push_swap;

void	read_args(t_push_swap *stack, int ac, char **av);
void	check_duplicates(t_push_swap *stack);
void	check_int_overflow(char *str);
void	check_input(int ac, char **av);
void	read_commands(t_push_swap *stack);
void	execute0(t_push_swap *stack);
void	execute1(t_push_swap *stack, int i);
void	print_stack_a(t_push_swap *stack);
void	print_stack_b(t_push_swap *stack);

/*commands:*/
void	sa(t_push_swap *stack);
void	sb(t_push_swap *stack);
void	ss(t_push_swap *stack);
void	pa(t_push_swap *stack);
void	pb(t_push_swap *stack);
void	ra(t_push_swap *stack);


/*DEBUG*/
void	debug(t_push_swap *stack);


#endif
