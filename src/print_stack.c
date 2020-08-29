/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/28 22:09:27 by aelphias          #+#    #+#             */
/*   Updated: 2020/08/29 21:56:15 by aelphias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stack_a(t_push_swap *stack)
{
	int i;

	i = 0;
	ft_printf("stack a:  ");
	while (i < stack->size_a)
	{
		ft_printf("%d ", stack->a[i]);
		i++;
	}
}

void	print_stack_b(t_push_swap *stack)
{
	int i;

	i = 0;
	ft_printf("stack b:  ");
	while (i < stack->size_b)
	{
		ft_printf("%d ", stack->b[i]);
		i++;
	}
}	