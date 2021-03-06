/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/16 15:43:06 by aelphias          #+#    #+#             */
/*   Updated: 2020/09/12 18:14:19 by aelphias         ###   ########.fr       */
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
	read_commands(&stack);
	print_stack_a(&stack); /*DELETE*/
	print_stack_b(&stack); /*DELETE*/
	if (is_sorted(&stack))
		write(1,"OK\n", 3);
	else
		write(1,"KO\n", 3);	
	return (0);
}
	