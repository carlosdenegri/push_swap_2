/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions_2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadenegr <neo_dgri@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 16:43:10 by cadenegr          #+#    #+#             */
/*   Updated: 2023/12/06 16:23:26 by cadenegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"

void	sb(t_var *x)
{
	int	temp;

	if (x->b_top >= 1)
	{
		temp = x->b_stack[x->b_top];
		x->b_stack[x->b_top] = x->b_stack[x->b_top - 1];
		x->b_stack[x->b_top - 1] = temp;
	}
	else
		return ;
}

void	rb(t_var *x)
{
	int	b_top_element;
	int	i;

	if (x->b_top < 1)
		return ;
	i = x->b_top;
	b_top_element = x->b_stack[x->b_top];
	while (i > 0)
	{
		x->b_stack[i] = x->b_stack[i - 1];
		i--;
	}
	x->b_stack[0] = b_top_element;
}

void	rrb(t_var *x)
{
	int	bottom_element;
	int	i;

	if (x->b_top < 1)
		return ;
	i = 0;
	bottom_element = x->b_stack[0];
	while (i < x->b_top)
	{
		x->b_stack[i] = x->b_stack[i + 1];
		i++;
	}
	x->b_stack[x->b_top] = bottom_element;
}

void	pa(t_var *x)
{
	push(x, x->b_stack[x->b_top], 1);
	pop(x, 2);
	x->moves++;
}