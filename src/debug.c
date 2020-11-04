/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   debug.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/29 20:38:47 by aelphias          #+#    #+#             */
/*   Updated: 2020/11/03 13:55:17 by aelphias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	debug(t_push_swap *stack)
{
	ft_printf("min=%d\n", stack->min);
	ft_printf("index_min=%d\n", stack->index_min);
	ft_printf("max=%d\n", stack->max);
	ft_printf("index_max=%d\n", stack->index_max);
	ft_printf("-------\n");
	print_stack_a(stack);
	print_stack_b(stack);
	
}