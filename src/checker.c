/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/16 15:43:06 by aelphias          #+#    #+#             */
/*   Updated: 2020/08/16 17:25:58 by aelphias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	if (argc < 2)
		exit(1);
		/* atoi
		isdigit
		gnl 
		if! int  || > int  || duplicates || instruction doesnt exis twrite(2, "Error\n", 6)
		;*/
	while (*argv[1])
	{
		printf(" *argv[1]:%c", *argv[1]);
		argv[1]++;
	}
	return (0);
}
