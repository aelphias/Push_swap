/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execute.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/27 19:45:57 by aelphias          #+#    #+#             */
/*   Updated: 2020/08/27 19:50:00 by aelphias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	execute(t_push_swap *data)
{
	int i;

	i = 0;
	while (data->saved_line[i] != '\0')
	{
		if (!ft_strcmp(data->saved_line, "sa"))
		{
			sa(data);
			i = i + 2;
		}
		else
			i++;
	}
}