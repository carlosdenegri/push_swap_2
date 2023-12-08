/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions_1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadenegr <neo_dgri@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 16:34:29 by cadenegr          #+#    #+#             */
/*   Updated: 2023/12/06 16:17:10 by cadenegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"

void	sa(t_var *x)
{
	int	temp;

	if (x->a_top >= 1)
	{
		temp = x->a_stack[x->a_top];
		x->a_stack[x->a_top] = x->a_stack[x->a_top - 1];
		x->a_stack[x->a_top - 1] = temp;
		x->moves++;
	}
	else
		return ;
}

void	ra(t_var *x)
{
	int	a_top_element;
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
	x->moves++;
}

void	rra(t_var *x)
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
	x->moves++;
}

void	pb(t_var *x)
{
	push(x, x->a_stack[x->a_top], 2);
	pop(x, 1);
	x->moves++;
}
