/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   logic_1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadenegr <neo_dgri@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 19:52:07 by cadenegr          #+#    #+#             */
/*   Updated: 2023/12/06 16:52:07 by cadenegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"

bool	ft0(t_var *x)
{
	ra(x);
	if (compute(x) == true)
		return (true);
	else
		return (false);
}

bool	ft1(t_var *x)
{
	// if (check_side(x, 1))
	// {
	pb(x);
	if (compute(x) == true)
		return (true);
		// sa(x);
		// if (compute(x) == true)
		// 	return (true);
	// }
	return (false);
}

bool	ft2(t_var *x)
{
	// if (check_side(x, 2))
	// {
	sa(x);
	if (compute(x) == true)
		return (true);
	// }
	return (false);
}

bool	ft3(t_var *x)
{
	sa(x);
	if (compute(x) == true)
		return (true);
	else
		return (false);
}
