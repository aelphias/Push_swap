/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/25 08:16:18 by aelphias          #+#    #+#             */
/*   Updated: 2020/08/25 11:03:37 by aelphias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_input(char **av)
{
	int i;

	i = 0;
	av++;
	while (av)
	{
		if (ft_strlen(*av) > 10)
		{
			write(2, "Error\n", 6);
			exit(1);
		}
		while (*av[i] != '\0')
		{
			if (!ft_isdigit(*av[i]) && *av[i] != '-' )
			{
				write(2, "Error\n", 6);
				exit(1);
			}
			i++;
		}
		i = 0;
		av++;
	}
}

void	read_args(t_push_swap *data, int ac, char **av)
{
	int i;
	int size;
	
	i = 1;
	size = 0;
	check_input(av);
	ft_printf("DEBUG - args:");
	while (i < ac)
	{	
		data->a[size] = ft_atoi(av[i]);
		ft_printf("%d ", data->a[size]);
		i++;
		size++;
	}
		ft_printf("\n");

}
