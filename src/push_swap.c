/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/04 13:21:40 by aelphias          #+#    #+#             */
/*   Updated: 2020/11/02 20:47:06 by aelphias         ###   ########.fr       */
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
		ft_printf("sorted\n");
		return (0);
	}
	if (stack.size_a == 2)
		write(1, "sa\n", 3);
	if (stack.size_a == 3)
		sort_3(&stack);
	sort(&stack);
	//debug(&stack);
	//print_stack_a;
	//print_stack_b;
	return (0);
}