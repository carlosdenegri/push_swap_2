/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions_3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadenegr <neo_dgri@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 16:46:00 by cadenegr          #+#    #+#             */
/*   Updated: 2023/11/28 16:52:55 by cadenegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"

void	ss(t_var *x)
{
	int	temp;

	if (x->a_top >= 1)
	{
		temp = x->a_stack[x->a_top];
		x->a_stack[x->a_top] = x->a_stack[x->a_top - 1];
		x->a_stack[x->a_top - 1] = temp;
	}
	if (x->b_top >= 1)
	{
		temp = x->b_stack[x->b_top];
		x->b_stack[x->b_top] = x->b_stack[x->b_top - 1];
		x->b_stack[x->b_top - 1] = temp;
	}
	else
		return ;
}

void	rr(t_var *x)
{
	int	a_top_element;
	int	b_top_element;
	int	i;

	if (x->a_top < 1)
		return ;
	i = x->a_top;
	a_top_element = x->a_stack[x->a_top];
	while (i > 0)
	{
		x->a_stack[i] = x->a_stack[i - 1];
		i--;
	}
	x->a_stack[0] = a_top_element;
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

void	rrr(t_var *x)
{
	int	bottom_element;
	int	i;

	if (x->a_top < 1)
		return ;
	i = 0;
	bottom_element = x->a_stack[0];
	while (i < x->a_top)
	{
		x->a_stack[i] = x->a_stack[i + 1];
		i++;
	}
	x->a_stack[x->a_top] = bottom_element;
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
