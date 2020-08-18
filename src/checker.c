/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/16 15:43:06 by aelphias          #+#    #+#             */
/*   Updated: 2020/08/18 21:27:42 by aelphias         ###   ########.fr       */
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
	while (*argv[1])
	{
		ft_printf(" *argv[1]:%c", *argv[1]);
		argv[1]++;
	}
	ft_printf("\n");
	str = ft_strsplit(argv[1], ' ');
	ft_printf("%s\n", str[0]);
		
		
	ft_printf("hey\n");
/* 	count = ft_atoi()
 */

	
	return (0);
}
