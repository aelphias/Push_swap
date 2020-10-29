/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools_2_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 22:50:22 by aelphias          #+#    #+#             */
/*   Updated: 2020/10/29 23:25:11 by aelphias         ###   ########.fr       */
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
		stack->min = stack->a[i];
		if (stack->a[i] > stack->max)
		stack->max = stack->a[i];
		i++;
	}
	ft_printf("min=%d\n", stack->min);
	ft_printf("max=%d\n", stack->max);
}
