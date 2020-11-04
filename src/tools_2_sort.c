/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools_2_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 22:50:22 by aelphias          #+#    #+#             */
/*   Updated: 2020/11/04 22:34:02 by aelphias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	find_min_max(t_push_swap *stack)
{
	int i;

	i = 0;
	stack->min = stack->a[0];
	stack->max = stack->a[0];

/* TODO	1. push 3rd element to stack B
        2. sort() all 3 element in a  */
	while (i < stack->size_a)
	{
		if (stack->a[i] < stack->min)
		{
			stack->min = stack->a[i];
			stack->index_min = i;
		}
		if (stack->a[i] > stack->max)
		{
			stack->max = stack->a[i];
			stack->index_max = i;
		}
		i++;
	}
}

void	send_all_else_to_b(t_push_swap *stack)
{
	while (stack->size_a != 2)
	{
		if (stack->a[0] != stack->min && stack->a[0] != stack->max)
			pb(stack);
		ra(stack);
	}
		
}

int	down_or_up(t_push_swap *stack, int i)
{
	/* if test in down part of stack returns 1 else 0 */
	if (i >= (stack->size_a / 2))
		return (1);
	return (0);
}

int	check_first(t_push_swap *stack, int test)
{
	int last;

	last = stack->size_a;
	if ( stack->a[0] < test < stack->a[last])
		stack->op_in_a = 0;
}

int	check_last(t_push_swap *stack, int test)
{
	int last;

	last = stack->size_a;
	if (stack->a[last] < test < stack->a[0])
		stack->op_in_a = 0;
}
void	prep_a(t_push_swap *stack)
{
	int i;
	int test;

	if (check_first(stack, stack->test))
		return;
	i = 1;
	test = stack->test;
	while (i < stack->size_a - 1)
	{
		if (stack->a[i - 1] < stack->test < stack->a[i + 1])
		{
			if (down_or_up(stack, i))
				stack->op_in_a = stack->size_a - i;
			else
				stack->op_in_a = i;
		}
	}
}
