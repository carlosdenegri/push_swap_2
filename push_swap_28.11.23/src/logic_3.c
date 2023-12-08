/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   logic_3.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadenegr <neo_dgri@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 17:04:12 by cadenegr          #+#    #+#             */
/*   Updated: 2023/12/06 17:36:20 by cadenegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"

bool	ft0b(t_var *x)
{
	// does_it_go_to_a(x);
	if (checker(x))
		return (false);
	rrb(x);
	if (compute(x) == true)
		return (true);
	else
		return (false);
}

bool	ft1b(t_var *x)
{
	// does_it_go_to_a(x);
	if (checker(x))
		return (false);
	sb(x);
	if (compute(x) == true)
		return (true);
	// sb(x);
	// if (compute(x) == true)
	// 	return (true);
	else
		return (false);
}

bool	ft2b(t_var *x)
{
	// does_it_go_to_a(x);
	if (checker(x))
		return (false);
	rrb(x);
	if (compute(x) == true)
		return (true);
	else
		return (false);
}

bool	ft3b(t_var *x)
{
	// does_it_go_to_a(x);
	if (checker(x))
		return (false);
	// rb(x);
	// if (compute(x) == true)
	// 	return (true);
	sb(x);
	if (compute(x) == true)
		return (true);
	else
		return (false);
}

// bool	ft6b(t_var *x)
// {
// 	// if (x->a_stack[0] == 9)
// 	// {
// 	rrb(x);
// 	if (compute(x) == true)
// 		return (true);
// 	// }
// 	// else
// 	// {
// 	// 	sa(x);
// 	// 	if (compute(x) == true)
// 	// 		return (true);
// 	// }
// 	return (false);
// }