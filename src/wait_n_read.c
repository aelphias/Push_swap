/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wait_n_read.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/27 18:43:42 by aelphias          #+#    #+#             */
/*   Updated: 2020/08/27 19:45:30 by aelphias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	read_commands(t_push_swap *data)
{
	while (get_next_line(0, &data->line))
		ft_strcat(data->saved_line, data->line);
	/* DEbug */
	
	
	
	//ft_printf("saved_line:%s\n", data->saved_line);
	free(data->line);
}