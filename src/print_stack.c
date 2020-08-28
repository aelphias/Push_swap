/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/28 22:09:27 by aelphias          #+#    #+#             */
/*   Updated: 2020/08/28 22:19:08 by aelphias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stack_a(t_push_swap *data)
{
	int i;

	i = 0;
	ft_printf("stack a:  ");
	while (i < data->size_a)
	{
		ft_printf("%d ", data->a[i]);
		i++;
	}
}

void	print_stack_b(t_push_swap *data)
{
	int i;

	i = 0;
	ft_printf("stack b:  ");
	while (i < data->size_b)
	{
		ft_printf("%d ", data->b[i]);
		i++;
	}
}