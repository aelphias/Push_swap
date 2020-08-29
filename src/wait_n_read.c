/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wait_n_read.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/27 18:43:42 by aelphias          #+#    #+#             */
/*   Updated: 2020/08/29 21:56:15 by aelphias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	read_commands(t_push_swap *stack)
{
	while (get_next_line(0, &stack->line))
		ft_strcat(stack->saved_line, stack->line);
	/* DEbug */
	//ft_printf("saved_line:%s\n", stack->saved_line);
	free(stack->line);
}