/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/29 22:17:10 by aelphias          #+#    #+#             */
/*   Updated: 2020/09/01 19:29:50 by aelphias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_push_swap *stack)
{
	ft_printf("entered ra\n"); /*DEBUG*/
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
}

void	rb(t_push_swap *stack)
{
	ft_printf("entered rb\n"); /*DEBUG*/
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
}

void	rr(t_push_swap *stack)
{
	ra(stack);
	rb(stack);
}

void	rra(t_push_swap *stack)
{
	ft_printf("entered rra\n"); /*DEBUG*/

	int i;
	int tmp;
	
	i = stack->size_a;
	if (stack->size_a)
	{
		//stack->a[0] = stack->a[stack->size_a];
		tmp = stack->a[stack->size_a -1 ];
		ft_printf("tmp=%d\n", tmp);
		while (i > 0)
		{
			stack->a[i] = stack->a[i - 1];
			i--;
		}
		stack->a[0] = tmp;
		
	}
	
}
