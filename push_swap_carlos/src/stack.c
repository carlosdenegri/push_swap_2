/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadenegr <neo_dgri@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 16:06:13 by cadenegr          #+#    #+#             */
/*   Updated: 2023/11/11 17:14:48 by cadenegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"
#include "../include/push_swap.h"

void	initialize_stack(t_stack *stack, t_simple *simple)
{
	stack->top = -1;
	simple->i = 0;
	simple->j = simple->k - 1;
	while (simple->i < simple->k)
	{
		push(stack, simple->arr_int[simple->j]);
		simple->i++;
		simple->j--;
	}
}

bool	is_full(t_stack *stack)
{
	return (stack->top == MAX_SIZE - 1);
}

bool	is_empty(t_stack *stack)
{
	return (stack->top == -1);
}

void	push(t_stack *stack, int value)
{
	if (is_full(stack))
	{
		ft_printf ("Stack is full. Cannot push %d.\n", value);
		return ;
	}
	stack->items[++stack->top] = value;
}

int	pop(t_stack *stack)
{
	if (is_empty(stack))
	{
		ft_printf ("Stack is empty. Connot pop.\n");
		return (-1);
	}
	return (stack->items[stack->top--]);
}
