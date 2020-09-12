/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/12 21:22:41 by aelphias          #+#    #+#             */
/*   Updated: 2020/09/12 22:10:30 by aelphias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_3(t_push_swap *stack)
{
	if (stack->a[0] > stack->a[1] && stack->a[0] < stack->a[2]
		&& stack->a[2] > stack->a[0] )
		write(1, "sa\n", 3);
	if (stack->a[0] > stack->a[1] && stack->a[0] < stack->a[2]
		&& stack->a[2] > stack->a[0] )
		ft_printf("sa\nrra\n");
	if (stack->a[0] > stack->a[1] && stack->a[0] < stack->a[2]
		&& stack->a[2] > stack->a[0] )
		ft_printf("sa\nrra\n");
}