/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/04 13:21:40 by aelphias          #+#    #+#             */
/*   Updated: 2020/09/04 13:34:40 by aelphias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_push_swap stack;
	
	if (ac < 3 || ft_strlen(av[1]) == 0)
		exit(1);
	ft_bzero(&stack, sizeof(t_push_swap));
	ft_printf("hello, I'm push_swap executable\n");
	return (0);
}