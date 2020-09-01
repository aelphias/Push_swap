/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execute.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/27 19:45:57 by aelphias          #+#    #+#             */
/*   Updated: 2020/09/01 13:39:14 by aelphias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	execute0(t_push_swap *stack)
{
	int i;

	ft_printf("entered execute0\n");
	i = 0;
	while (stack->saved_line[i] != '\0')
	{
		if (!ft_strcmp(stack->saved_line, "sa"))
		{
			sa(stack);
			i = i + 2;
		}
		if (!ft_strcmp(stack->saved_line, "sb"))
		{
			sb(stack);
			i = i + 2;
		}
		if (!ft_strcmp(stack->saved_line, "ss"))
		{
			ss(stack);
			i = i + 2;
		}
	
		execute1(stack, i);
		i++;
	}
}

void	execute1(t_push_swap *stack, int i)
{
	ft_printf("entered execute1\n");

	if (!ft_strcmp(stack->saved_line, "pa"))
		{
			pa(stack);
			i = i + 2;
		}
	if (!ft_strcmp(stack->saved_line, "pb"))
	{
		pb(stack);
		i = i + 2;
	}
	if (!ft_strcmp(stack->saved_line, "ra"))
	{
		ra(stack);
		i = i + 2;
	}
}