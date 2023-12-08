/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   direction.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadenegr <neo_dgri@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 13:05:13 by cadenegr          #+#    #+#             */
/*   Updated: 2023/12/06 14:03:17 by cadenegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"

bool	check_side(t_var *x, int type)
{
	if ((x->a_stack[x->a_top] < x->a_stack[1]) && type == 1)
	{
		ft3(x);
		return (1);
	}
	else
		return (1);

	if ((x->a_stack[x->a_top] > x->a_stack[x->a_top - 2]) && type == 2)
	{
		ft3(x);
		return (1);
	}
	else
		return (1);
}

bool	finish(t_var *x)
{
	int	i;

	i = 0;
	if (!is_empty(x, 2))
		return (false);
	while (i <= x->a_top)
	{
		if (x->a_flag[i] == 6 || x->a_flag[i] == 9
			|| x->a_flag[i] == 0)
			i++;
		else
			return (false);
	}

	return (true);
}

bool	compute(t_var *x)
{
	mark_a_stack(x);
	mark_b_stack(x);
	if (finish(x))
		return (true);
	else
		return (false);
}

void	adjust(t_var *x)
{
	int	i;

	i = x->a_top_flag;
	while (x->a_flag[i] >= 0)
	{
		if (x->a_flag[x->a_top_flag] == 6)
			break ;
		ft0(x);
		pr(x, 1);
		print(x);
		i--;
	}

	// while (i >= 1)
	// {
	// 	if (x->a_stack[i] == 0)
	// 		i--;
	// 	else
	// 		return ;
	// }
	// if (x->a_stack[x->a_top] == 9)
	// 	continue ;
}

bool	checker(t_var *x)
{
	if (x->b_stack[x->b_top] < x->a_stack[x->a_top]
		&& x->b_stack[x->b_top] > x->a_stack[0])
	{
		pa(x);
		if (compute(x) == true)
			return (true);
		return (true);
	}
	else
		return (false);
}