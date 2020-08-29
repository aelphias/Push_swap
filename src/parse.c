/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/25 08:16:18 by aelphias          #+#    #+#             */
/*   Updated: 2020/08/29 22:28:42 by aelphias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_duplicates(t_push_swap *stack)
{
	int i;
	int k;

	i = 0;
	k = 0;
	while (i < stack->size_a)
	{
		k = 0;
		while (i != k && k < stack->size_a)
		{
			if (stack->a[i] == stack->a[k])
				exit(write(2, "Error\n", 6));
			k++;
		}
		i++;
	}
	
}

void	fill_in_stack_a(t_push_swap *stack, int ac, char **av)
{
	int i;
	int size;
	
	i = 1;
	size = 0;
	while (i < ac)
	{	
		stack->a[size] = ft_atoi(av[i]);
		i++;
		size++;
	}
	/* if (size == 1)
		exit(0); */
	stack->size_a = size;
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

void	read_args(t_push_swap *stack, int ac, char **av)
{
	check_input(ac, av);
	fill_in_stack_a(stack, ac, av);
	check_duplicates(stack);
	read_commands(stack);
	debug(stack);		/*DELETE*/
	execute0(stack);
	print_stack_a(stack); /*DELETE*/
	print_stack_b(stack); /*DELETE*/
}