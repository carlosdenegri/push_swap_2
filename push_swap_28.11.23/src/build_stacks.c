/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   build_stacks.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadenegr <neo_dgri@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 14:19:22 by cadenegr          #+#    #+#             */
/*   Updated: 2023/12/06 16:12:01 by cadenegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"

void	init_argument(t_var *x)
{
	initialize_stack (x, 1);
	initialize_stack (x, 2);
	initialize_stack (x, 3);
	initialize_stack (x, 4);
	build_a_stack (x);
	if (x->a_top == -1)
		return ;
	else
	mark_a_stack(x);
}

void	build_a_stack(t_var *x)
{
	x->i = 0;
	x->j = x->size - 1;
	x->moves = 0;
	while (x->i < x->size)
	{
		push(x, x->array[x->j], 1);
		x->i++;
		x->j--;
	}
}
