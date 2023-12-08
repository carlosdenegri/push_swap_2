/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadenegr <neo_dgri@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 14:08:11 by cadenegr          #+#    #+#             */
/*   Updated: 2023/12/08 12:54:47 by cadenegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_var	x;

	if (!argument_processor(argc, argv, &x))
	{
		ft_printf("Error");
		return (0);
	}
	init_argument(&x);
	// if (machine(&x))
	// 	adjust(&x);
	// while (x.a_top >= 3)
	// 	push_to_b(&x);
	// print(&x);
	// last_part(&x);
	// ft_printf("\ntotal moves are: %d\n", x.moves);
	start_point(&x);
	ft_printf("next in skeleton: %d==== count: %d\n", x.temp, x.num);
	print(&x);
	pr(&x, 7);
	return (0);
}