/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands0.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/27 17:24:10 by aelphias          #+#    #+#             */
/*   Updated: 2020/08/29 22:02:33 by aelphias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_push_swap *stack)
{
	/* sa	swap first two elements of stack A */
	int tmp;
	
	if (stack->size_a > 1)
	{
		tmp = stack->a[0];
		stack->a[0] = stack->a[1];
		stack->a[1] = tmp;
	}
}

void	sb(t_push_swap *stack)
{
	/* sb	swap first two elements of stack B */
	int tmp;
	
	if (stack->size_b > 1)
	{
		tmp = stack->b[0];
		stack->b[0] = stack->b[1];
		stack->b[1] = tmp;
	}
}

void	ss(t_push_swap *stack)
{
	sa(stack);
	sb(stack);
}

void	pa(t_push_swap *stack)
{
	if (stack->size_b)
	{
		int	i;
		ft_printf("entered pa\n");
	ft_printf("size_a = %d\n--------\n", stack->size_a);
		
		stack->size_a++;
		i =	stack->size_a;
		while (i > 0)
		{
			stack->a[i] = stack->a[i - 1];
			i--;
		}
		stack->a[0] = stack->b[0];
		i = 0;
		stack->size_b--;
		while (i < stack->size_b)
		{
			stack->b[i] = stack->b[i + 1];
			i++;
		}
		stack->b[stack->size_b + 1] = 0;
	}
}

void	pb(t_push_swap *stack)
{
	if (stack->size_a)
	{
		int	i;
		ft_printf("entered pb\n");
	ft_printf("size_b = %d\n--------\n", stack->size_b);
		
		stack->size_b++;
		i =	stack->size_b;
		while (i > 0)
		{
			stack->b[i] = stack->b[i - 1];
			i--;
		}
		stack->b[0] = stack->a[0];
		i = 0;
		stack->size_a--;
		while (i < stack->size_a)
		{
			stack->a[i] = stack->a[i + 1];
			i++;
		}
		stack->a[stack->size_a + 1] = 0;
	}
}