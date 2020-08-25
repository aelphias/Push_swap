/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/16 15:43:06 by aelphias          #+#    #+#             */
/*   Updated: 2020/08/25 09:30:00 by aelphias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_push_swap data;
	
	if (ac < 2)
		return (1);
	ft_bzero(&data, sizeof(t_push_swap));
	read_args(&data, ac, av);
	return (0);
}
