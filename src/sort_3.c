/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/12 21:22:41 by aelphias          #+#    #+#             */
/*   Updated: 2020/10/04 19:30:39 by aelphias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	s3rasa(t_push_swap *stack)
{
	ra(stack);
	sa(stack);
	ft_printf("ra\nsa\n");
}

void	s3ra(t_push_swap *stack)
{
	ra(stack);
	ft_printf("ra\n");
}

void	s3sa(t_push_swap *stack)
{
	sa(stack);
	ft_printf("sa\n");
}

void	s3sara(t_push_swap *stack)
{
	sa(stack);
	ra(stack);	
	ft_printf("sa\nra\n");
}

void	sort_3(t_push_swap *stack)
{
	int a;
	int	b;
	int	c;

	a = stack->a[0];
	b = stack->a[1];
	c = stack->a[2];
	if (a > b  &&  b > c && a > c) // 3 2 1
		s3rasa(stack);
	if (a > b  &&  b < c && a > c) // 3 1 2
		s3ra(stack);
	if (a > b  &&  b < c && a < c) // 2 1 3
		s3sa(stack);
	if (a < b  &&  b > c && a < c) // 1 3 2
		s3sara(stack);
	if (a < b  &&  b > c && a > c) // 2 3 1
	{
		rra(stack);
		ft_printf("rra\n");
	}
}
