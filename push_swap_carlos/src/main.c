/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadenegr <neo_dgri@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 12:38:50 by cadenegr          #+#    #+#             */
/*   Updated: 2023/11/11 18:08:28 by cadenegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"
#include "../include/push_swap.h"

int	main(int argc, char **argv)
{
	t_simple	simple;
	t_stack		stack_a;
	// t_stack		stack_b;
	if (argc < 2)
		return (0);
	if (process_argument(argc, argv, &simple) == 0)
		return (0);
	// print(&simple);
	initialize_stack(&stack_a, &simple);
	// swap(&stack_a);
	// rotate_right(&stack_a);
	ft_printf("\nStack a: ");
	while (!is_empty(&stack_a))
	{
		ft_printf("%d ", pop(&stack_a));
	}
	return (0);
}
