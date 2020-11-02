/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools_2_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 22:50:22 by aelphias          #+#    #+#             */
/*   Updated: 2020/11/02 20:58:05 by aelphias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	find_min_max(t_push_swap *stack)
{
	int i;

	i = 0;
	stack->min = stack->a[0];
	stack->max = stack->a[0];
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
	ft_printf("min=%d\n", stack->min);
	ft_printf("index_min=%d\n", stack->index_min);
	ft_printf("max=%d\n", stack->max);
	ft_printf("index_max=%d\n", stack->index_max);
}

/* void	find_lis(t_push_swap *stack)
{
} */