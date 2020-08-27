/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/25 08:16:18 by aelphias          #+#    #+#             */
/*   Updated: 2020/08/27 15:58:43 by aelphias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_duplicates(t_push_swap *data)
{
	int i;
	int k;

	i = 0;
	k = 0;
	while (i < data->size_a)
	{
		k = 0;
		while (k < data->size_a)
		{
			if (data->a[i] == data->a[k])
				exit(write(2, "Error\n", 6));
			k++;
		}
		i++;
	}
	
}

void	check_int_overflow(char *str)
{
	if (ft_strlen(str) > 10 && (!ft_strchr(str, '-')))
		exit(write(2, "Error\n", 6));
	if (ft_strlen(str) > 11 && (ft_strchr(str, '-')))
		exit(write(2, "Error\n", 6));
	if (ft_strlen(str) == 10)
	{
		if (ft_strcmp(str, "2147483647") > 0)
			exit(write(2, "Error\n", 6));
	}
	if (ft_strlen(str) == 11)
	{
		if (ft_strchr(str, '-'))
		{
			str++;
			if (ft_strcmp(str, "2147483648") > 0)
				exit(write(2, "Error\n", 6));
		}
	}
}

void	check_input(int ac, char **av)
{
	int i;
	int k;
	int flag;

	i = 1;
	while (i < ac)
	{	
		check_int_overflow(av[i]);
		if (!ft_atoi(av[i]))
			exit(write(2, "Error_max\n", 6));
		flag = 0;
		if ((ft_strlen(av[i])) == 1)
			flag = 1;
		k = 0;
		while (av[i][k] != '\0' )
		{
			if (av[i][k] == '-' && flag == 1)
				exit(write(2, "Error\n", 6));
			if (!ft_isdigit(av[i][k]) && av[i][k] != '-')
				exit(write(2, "Error\n", 6));
			k++;
		}
		i++;
	}
}

void	read_args(t_push_swap *data, int ac, char **av)
{
	int i;
	int size;
	
	i = 1;
	size = 0;
	check_input(ac, av);
	/*DELETE*/
	ft_printf("DEBUG - args:");
	while (i < ac)
	{	
		data->a[size] = ft_atoi(av[i]);
		ft_printf("%d ", data->a[size]);
		i++;
		size++;
	}
	data->size_a = size;
	check_duplicates(data);
	/*DELETE*/
	ft_printf("\n"); 
}
