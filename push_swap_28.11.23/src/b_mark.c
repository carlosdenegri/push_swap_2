/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_mark.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadenegr <neo_dgri@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 15:33:06 by cadenegr          #+#    #+#             */
/*   Updated: 2023/12/06 17:38:25 by cadenegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"

// void	does_it_go_to_a(t_var *x)
// {
// 	x->left = false;
// 	x->right = false;
// 	if (x->i == x->b_top && (x->b_stack[x->i] > x->a_stack[x->a_top]))
// 		x->right = true;
// 	if (x->i == x->b_top && (x->b_stack[x->i] < x->a_stack[0]))
// 		x->left = true;
// 	if ((x->right && x->left) == true)
// 		pa(x);
// 	x->left = false;
// 	x->right = false;
// }

void	mark_b_stack(t_var *x)
{
	begin_b_mark(x);
	while (x->i <= x->b_top)
	{
		if (x->i == 0 && x->b_top != 0
			&& (x->b_stack[x->i] > x->b_stack[x->b_top]))
			x->left = true;
		if (x->i == 0 && x->b_top != 0
			&& (x->b_stack[x->i] > x->b_stack[x->i + 1]))
			x->right = true;
		if ((x->i != 0 && x->b_top != 1 && x->i != x->b_top)
			&& (x->b_stack[x->i] > x->b_stack[x->i - 1]))
			x->left = true;
		if ((x->i != 0 && x->b_top != 1 && x->i != x->b_top)
			&& (x->b_stack[x->i] < x->b_stack[x->i + 1]))
			x->right = true;
		if (x->i == x->b_top && (x->b_stack[x->i] < x->b_stack[x->i - 1]))
			x->right = true;
		if (x->i == x->b_top && (x->b_stack[x->i] < x->b_stack[0]))
			x->left = true;
		flag_b_stack(x);
		x->i++;
	}
}

void	flag_b_stack(t_var *x)
{
	if (x->left == true && x->right == true)
		push(x, 0, 4);
	if (x->left == true && x->right == false)
		push(x, 1, 4);
	if (x->left == false && x->right == true)
		push(x, 2, 4);
	if (x->left == false && x->right == false)
		push(x, 3, 4);
	x->left = false;
	x->right = false;
	limits_b(x);
}

void	begin_b_mark(t_var *x)
{
	x->i = 0;
	x->left = false;
	x->right = false;
	if (!is_empty(x, 4))
		while (!is_empty(x, 4))
			pop (x, 4);
}

void	limits_b(t_var *x)
{
	if (x->b_stack[x->i] == x->low)
		push(x, 6, 4);
}