/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/02 10:56:41 by aelphias          #+#    #+#             */
/*   Updated: 2020/09/02 11:09:09 by aelphias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrr(t_push_swap *stack)
{
	ft_printf("entered rrr\n"); /*DEBUG*/
	if (stack->size_b && stack->size_b)
	{
		rra(stack);
		rrb(stack);
	}
}
