/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   choose_f.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/01 14:21:54 by aelphias          #+#    #+#             */
/*   Updated: 2020/09/02 11:01:22 by aelphias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	choose_f(t_push_swap *stack)
{
	if (ft_strequ(stack->line, "sa"))
		sa(stack);
	if (ft_strequ(stack->line, "sb"))
		sb(stack);
	if (ft_strequ(stack->line, "ss"))
		ss(stack);
	if (ft_strequ(stack->line, "pa"))
		pa(stack);
	if (ft_strequ(stack->line, "pb"))
		pb(stack);
	if (ft_strequ(stack->line, "ra"))
		ra(stack);
	if (ft_strequ(stack->line, "rb"))
		rb(stack);
	if (ft_strequ(stack->line, "rr"))
		rr(stack);
	if (ft_strequ(stack->line, "rra"))
		rra(stack);
	if (ft_strequ(stack->line, "rrb"))
		rrb(stack);
	if (ft_strequ(stack->line, "rrr"))
		rrr(stack);
}
