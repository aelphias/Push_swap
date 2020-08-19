/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/16 15:43:06 by aelphias          #+#    #+#             */
/*   Updated: 2020/08/20 00:51:46 by aelphias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	char **str;
	int i;
	char		*stack_a;

	i = 0;
	if (argc < 2)
		exit(1);
		/* atoi
		isdigit
		gnl
		if! int  || > int  || duplicates || instruction doesnt exis twrite(2, "Error\n", 6)
		;*/
	ft_printf("argc:%d\n", argc);
	while (argc > i)
	{
		str = ft_strsplit(argv[i], ' ');
		while (*str)
		{
			ft_printf("{ 1 }\n");
			stack_a = ft_strcat(stack_a,*str);
			str++;
		}
		i++;
	}
/* 	while (*str != '\0' )
	{
		ft_printf("%s\n", *str);
		str++;	
	} */
	ft_printf("stack_a: %s\n", stack_a);
	
	
	ft_printf("\n I'm working, sunny!\n");
	
/* 	count = ft_atoi()
 */

	
	return (0);
}
