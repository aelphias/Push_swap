/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/02 11:15:59 by aelphias          #+#    #+#             */
/*   Updated: 2020/09/02 12:56:05 by aelphias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_push_swap *stack)
{
	int i;

	if (stack->size_b)
		return (0);
	i = 0;
	while (i + 1< stack->size_a)
	{ 
		if (stack->a[i] < stack->a[i + 1])
			i++;
		else
			return (0);
	}
	return (1);
}