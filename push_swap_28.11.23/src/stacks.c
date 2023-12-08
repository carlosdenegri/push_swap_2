/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stacks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadenegr <neo_dgri@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 16:16:09 by cadenegr          #+#    #+#             */
/*   Updated: 2023/11/28 19:51:27 by cadenegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"

void	initialize_stack(t_var *x, int stack)
{
	if (stack == 1)
		x->a_top = -1;
	if (stack == 2)
		x->b_top = -1;
	if (stack == 3)
		x->a_top_flag = -1;
	if (stack == 4)
		x->b_top_flag = -1;
	if (stack == 5)
		x->top_temp = -1;
}

bool	is_full(t_var *x, int stack)
{
	if (stack == 1)
		return (x->a_top == MAX_SIZE - 1);
	if (stack == 2)
		return (x->b_top == MAX_SIZE - 1);
	if (stack == 3)
		return (x->a_top_flag == MAX_SIZE - 1);
	if (stack == 4)
		return (x->b_top_flag == MAX_SIZE - 1);
	if (stack == 5)
		return (x->top_temp == MAX_SIZE - 1);
	else
		return (0);
}

bool	is_empty(t_var *x, int stack)
{
	if (stack == 1)
		return (x->a_top == -1);
	if (stack == 2)
		return (x->b_top == -1);
	if (stack == 3)
		return (x->a_top_flag == -1);
	if (stack == 4)
		return (x->b_top_flag == -1);
	if (stack == 5)
		return (x->top_temp == -1);
	else
		return (0);
}

void	push(t_var *x, int value, int stack)
{
	if (is_full(x, stack))
	{
		ft_printf ("Stack is full. Cannot push %d.\n", value);
		return ;
	}
	if (stack == 1)
		x->a_stack[++x->a_top] = value;
	if (stack == 2)
		x->b_stack[++x->b_top] = value;
	if (stack == 3)
		x->a_flag[++x->a_top_flag] = value;
	if (stack == 4)
		x->b_flag[++x->b_top_flag] = value;
	if (stack == 5)
		x->temp_stack[++x->top_temp] = value;
}

int	pop(t_var *x, int stack)
{
	if (is_empty(x, stack))
	{
		ft_printf ("Stack is empty. Connot pop.\n");
		return (-1);
	}
	if (stack == 1)
		return (x->a_stack[x->a_top--]);
	if (stack == 2)
		return (x->b_stack[x->b_top--]);
	if (stack == 3)
		return (x->a_flag[x->a_top_flag--]);
	if (stack == 4)
		return (x->b_flag[x->b_top_flag--]);
	if (stack == 5)
		return (x->temp_stack[x->top_temp--]);
	else
		return (0);
}
