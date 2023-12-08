/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadenegr <neo_dgri@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 13:24:37 by cadenegr          #+#    #+#             */
/*   Updated: 2023/12/06 16:26:35 by cadenegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"

int	is_it_rotate(t_var *x)
{
	int			size;
	int			i;

	i = x->a_top;
	x->count1 = 0;
	size = 0 + x->subtractor;
	if (x->a_stack[i] == x->to_sort_array[size])
		return (x->count1);
	while (i >= 0)
	{
		if (x->a_stack[i] == x->to_sort_array[size])
			return (x->count1);
		x->count1++;
		i--;
	}
	return (0);
}

int	is_it_reverse(t_var *x)
{
	int			size;
	int			i;
	int			j;

	i = x->a_top;
	x->count2 = 1;
	j = 0;
	size = 0 + x->subtractor;
	if (x->a_stack[j] == x->to_sort_array[size])
		return (x->count2);
	while (i >= 0)
	{
		if (x->a_stack[j] == x->to_sort_array[size])
			return (x->count2);
		x->count2++;
		j++;
		i--;
	}
	return (0);
}

int	which_side(t_var *x)
{
	static int	counter = 1;
	if (is_it_rotate(x) <= is_it_reverse(x))
	{
		x->subtractor = counter;
		counter++;
		return (1);
	}
	else
	{
		x->subtractor = counter;
		counter++;
		return (2);
	}
}

void	push_to_b(t_var *x)
{
	int	side;

	side = which_side(x);
	if (side == 1)
	{
		x->i = 0;
		// ft_printf("count1111====%d\n", x->count1);
		while (x->i < x->count1)
		{
			ra(x);
			x->i++;
			// ft_printf("hohohoh\n");
		}
		pb(x);
	}
	if (side == 2)
	{
		x->i = 0;
		// ft_printf("count2222====%d\n", x->count2);
		while (x->i < x->count2)
		{
			rra(x);
			x->i++;
			// ft_printf("lalala\n");
		}
		pb(x);
	}
	// print(x);
}

void	last_part(t_var *x)
{
	if (x->a_stack[x->a_top] > x->a_stack[x->a_top - 1])
		sa(x);
	if (x->a_stack[x->a_top] > x->a_stack[0])
		rra(x);
	while (!is_empty(x, 2))
		pa(x);
}
