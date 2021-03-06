/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/29 22:17:10 by aelphias          #+#    #+#             */
/*   Updated: 2020/11/03 14:09:21 by aelphias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_push_swap *stack)
{
	int tmp;
	int i;

	if (stack->size_a)
	{
		i = 0;
		tmp = stack->a[0];
		while (i < stack->size_a)
		{
			stack->a[i] = stack->a[i + 1];
			i++;
		}
		stack->a[i-1] = tmp;
	}
	ft_printf("ra\n");
}

void	rb(t_push_swap *stack)
{
	int tmp;
	int i;

	if (stack->size_b)
	{
		i = 0;
		tmp = stack->b[0];
		while (i < stack->size_a)
		{
			stack->b[i] = stack->b[i + 1];
			i++;
		}
		stack->b[i-1] = tmp;
	}
	ft_printf("rb\n");
}

void	rr(t_push_swap *stack)
{
	ra(stack);
	rb(stack);
	ft_printf("rr\n");
}

void	rra(t_push_swap *stack)
{
	int i;
	int tmp;
	
	i = stack->size_a;
	if (stack->size_a)
	{
		//stack->a[0] = stack->a[stack->size_a];
		tmp = stack->a[stack->size_a -1 ];
	//	ft_printf("tmp=%d\n", tmp);
		while (i > 0)
		{
			stack->a[i] = stack->a[i - 1];
			i--;
		}
		stack->a[0] = tmp;
	}
	ft_printf("rra\n");
}

void	rrb(t_push_swap *stack)
{
	int i;
	int tmp;
	
	i = stack->size_b;
	if (stack->size_b)
	{
		//stack->b[0] = stack->a[stack->size_b];
		tmp = stack->b[stack->size_b -1 ];
	//	ft_printf("tmp=%d\n", tmp);
		while (i > 0)
		{
			stack->b[i] = stack->b[i - 1];
			i--;
		}
		stack->b[0] = tmp;
		
	}
	ft_printf("rrb\n");
}
