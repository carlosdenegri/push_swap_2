/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadenegr <neo_dgri@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 17:33:08 by cadenegr          #+#    #+#             */
/*   Updated: 2023/11/11 18:05:14 by cadenegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"
#include "../include/push_swap.h"

void	swap(t_stack *stack)
{
	int	temp;

	if (stack->top >= 1)
	{
		temp = stack->items[stack->top];
		stack->items[stack->top] = stack->items[stack->top - 1];
		stack->items[stack->top - 1] = temp;
	}
	else
		return ;
}

void	rotate_right(t_stack *stack)
{
	int	top_element;
	int	i;

	if (stack->top < 1)
		return ;
	i = stack->top;
	top_element = stack->items[stack->top];
	while (i > 0)
	{
		stack->items[i] = stack->items[i - 1];
		i--;
	}
	stack->items[0] = top_element;
}

void	reverse_rotate(t_stack *stack)
{
	int	bottom_element;
	int	i;

	if (stack->top < 1)
		return ;
	i = 0;
	bottom_element = stack->items[0];
	while (i < stack->top)
	{
		stack->items[i] = stack->items[i + 1];
		i++;
	}
	stack->items[stack->top] = bottom_element;
}
