/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/27 17:24:10 by aelphias          #+#    #+#             */
/*   Updated: 2020/08/27 20:01:38 by aelphias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_push_swap *data)
{
	/* sa	swap first two elements of stack A */
	int tmp;
	
	if (data->size_a > 1)
	{
		tmp = data->a[0];
		data->a[0] = data->a[1];
		data->a[1] = tmp;
	}
}

void	sb(t_push_swap *data)
{
	/* sb	swap first two elements of stack B */
	int tmp;
	
	if (data->size_b > 1)
	{
		tmp = data->b[0];
		data->b[0] = data->b[1];
		data->b[1] = tmp;
	}
}

void	ss(t_push_swap *data)
{
	sa(data);
	sb(data);
}