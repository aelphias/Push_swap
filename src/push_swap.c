/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/04 13:21:40 by aelphias          #+#    #+#             */
/*   Updated: 2020/10/04 19:12:51 by aelphias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_push_swap stack;
	if (ac < 3 || ft_strlen(av[1]) == 0)
		exit(1);
	ft_bzero(&stack, sizeof(t_push_swap));
	read_args(&stack, ac, av);
	if (is_sorted(&stack))
	{
		ft_printf("sorted\n!");
		write(2, "\n", 1);
		return (0);
	}
	if (stack.size_a == 2)
		write(1, "sa\n", 3);
	if (stack.size_a == 3)
		sort_3(&stack);
	/* if (stack.size_a == 5)
		sort_5(&stack); */
	return (0);
}