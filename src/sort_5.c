/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/25 21:11:44 by aelphias          #+#    #+#             */
/*   Updated: 2020/10/13 22:07:40 by aelphias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* smallest() returns order number of smallest element
*/
int	smallest(t_push_swap *stack)
{
	int i;
	int sl;
	
	sl = 0;
	i = 0;
	while (i < stack->size_a)
	{
		if (stack->a[i] < stack->a[sl])
			sl = i;
		i++;
	}
	return (sl);
}

void	sort_5(t_push_swap *stack)
{
	/* pb(stack);
	pb(stack); */
	if (stack->size_a)
	{
		/* code */
	} 
	ft_printf("sl= %d\n", stack->a[smallest(stack)]);
	ft_printf("pos_sl= %d\n", smallest(stack));
	//sort_3(stack);
	
	
}