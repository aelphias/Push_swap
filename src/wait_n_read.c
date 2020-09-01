/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wait_n_read.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/27 18:43:42 by aelphias          #+#    #+#             */
/*   Updated: 2020/09/01 16:41:26 by aelphias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	read_commands(t_push_swap *stack)
{
	while (get_next_line(0, &stack->line))
	{
		if (ft_strequ(stack->line, "sa") ||
			ft_strequ(stack->line, "sb") ||
			ft_strequ(stack->line, "ss") ||
			ft_strequ(stack->line, "pa") ||
			ft_strequ(stack->line, "pb") ||
			ft_strequ(stack->line, "ra") ||
			ft_strequ(stack->line, "rb") ||
			ft_strequ(stack->line, "rr") ||
			ft_strequ(stack->line, "rra") ||
			ft_strequ(stack->line, "rrb") ||
			ft_strequ(stack->line, "rrr"))
		{
			choose_f(stack);
			free(stack->line);
		}
		else
		{
			free(stack->line);
			exit(write(2, "Error\n", 6));
		}
	}
}
