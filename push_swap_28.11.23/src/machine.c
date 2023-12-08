/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   machine.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadenegr <neo_dgri@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 19:46:42 by cadenegr          #+#    #+#             */
/*   Updated: 2023/12/06 17:28:52 by cadenegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"

bool	machine(t_var *x)
{
	int	i;

	i = 0;
	print(x);
	while (i < 10)
	{
		if (x->a_flag[x->a_top] == 0)
			x->finisher = ft0(x);
		else if (x->a_flag[x->a_top] == 1)
			x->finisher = ft1(x);
		else if (x->a_flag[x->a_top] == 2)
			x->finisher = ft2(x);
		else if (x->a_flag[x->a_top] == 3)
			x->finisher = ft3(x);
		else if (x->a_flag[x->a_top] == 6)
			x->finisher = ft6(x);
		else if (x->a_flag[x->a_top] == 9)
			x->finisher = ft9(x);
		pr(x, 1);
		print(x);
		if (x->finisher == true)
			return (1);
		if (x->b_flag[x->b_top] == 0)
			x->finisher = ft0b(x);
		else if (x->b_flag[x->b_top] == 1)
			x->finisher = ft1b(x);
		else if (x->b_flag[x->b_top] == 2)
			x->finisher = ft2b(x);
		else if (x->b_flag[x->b_top] == 3)
			x->finisher = ft3b(x);
		pr(x, 2);
		print(x);
		if (x->finisher == true)
			return (1);
		i++;
	}
	return (0);
}
