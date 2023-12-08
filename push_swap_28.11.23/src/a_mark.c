/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a_mark.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadenegr <neo_dgri@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 16:25:20 by cadenegr          #+#    #+#             */
/*   Updated: 2023/11/29 13:02:24 by cadenegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"

void	mark_a_stack(t_var *x)
{
	begin_a_mark(x);
	while (x->i <= x->a_top)
	{
		if (x->i == 0 && (x->a_stack[x->i] < x->a_stack[x->a_top]))
			x->left = true;
		if (x->i == 0 && (x->a_stack[x->i] > x->a_stack[x->i + 1]))
			x->right = true;
		if ((x->i != 0 && x->i != x->a_top)
			&& (x->a_stack[x->i] < x->a_stack[x->i - 1]))
			x->left = true;
		if ((x->i != 0 && x->i != x->a_top)
			&& (x->a_stack[x->i] > x->a_stack[x->i + 1]))
			x->right = true;
		if (x->i == x->a_top && (x->a_stack[x->i] < x->a_stack[x->i - 1]))
			x->left = true;
		if (x->i == x->a_top && (x->a_stack[x->i] > x->a_stack[0]))
			x->right = true;
		flag_stack(x);
		x->i++;
	}
}

void	flag_stack(t_var *x)
{
	if (x->left == true && x->right == true
		&& x->a_stack[x->i] != x->low && x->a_stack[x->i] != x->high)
		push(x, 0, 3);
	if (x->left == true && x->right == false
		&& x->a_stack[x->i] != x->low && x->a_stack[x->i] != x->high)
		push(x, 1, 3);
	if (x->left == false && x->right == true
		&& x->a_stack[x->i] != x->low && x->a_stack[x->i] != x->high)
		push(x, 2, 3);
	if (x->left == false && x->right == false
		&& x->a_stack[x->i] != x->low && x->a_stack[x->i] != x->high)
		push(x, 3, 3);
	x->left = false;
	x->right = false;
	limits(x);
}

void	limits(t_var *x)
{
	if (x->a_stack[x->i] == x->low)
		push(x, 6, 3);
	if (x->a_stack[x->i] == x->high)
		push(x, 9, 3);
}

void	begin_a_mark(t_var *x)
{
	x->i = 0;
	x->left = false;
	x->right = false;
	if (!is_empty(x, 3))
		while (!is_empty(x, 3))
			pop (x, 3);
}