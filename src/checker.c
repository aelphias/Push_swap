/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/16 15:43:06 by aelphias          #+#    #+#             */
/*   Updated: 2020/08/20 00:24:09 by aelphias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	char **str;
	int i;

	i = 0;
	if (argc < 2)
		exit(1);
		/* atoi
		isdigit
		gnl
		if! int  || > int  || duplicates || instruction doesnt exis twrite(2, "Error\n", 6)
		;*/
	while (argc > i)
	{
		str = ft_strsplit(argv[i], ' ');
		i++;
	}
	
	while (*str != '\0' )
	{
		ft_printf("%s\n", *str);
		str++;	
	}
	
	ft_printf("\n I'm working, sunny!\n");
	
/* 	count = ft_atoi()
 */

	
	return (0);
}
