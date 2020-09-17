/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/12 21:22:41 by aelphias          #+#    #+#             */
/*   Updated: 2020/09/17 18:16:08 by aelphias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_3(t_push_swap *stack)
{
	int a;
	int	b;
	int	c;

	a = stack->a[0];
	b = stack->a[1];
	c = stack->a[2];
	if (a > b  &&  b > c && a > c) // 3 2 1
		ft_printf("ra\nsa\n");
	if (a > b  &&  b < c && a > c) // 3 1 2
		ft_printf("ra\n");
	if (a > b  &&  b < c && a < c) // 2 1 3
		ft_printf("sa\n");
	if (a < b  &&  b > c && a > c) // 2 3 1
		ft_printf("rra\n");
	if (a < b  &&  b > c && a < c) // 1 3 2
		ft_printf("sa\nra\n");
	stack->a[0] = a;
	stack->a[1] = b;
	stack->a[2] = c;
}
