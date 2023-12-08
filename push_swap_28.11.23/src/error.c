/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadenegr <neo_dgri@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 14:13:29 by cadenegr          #+#    #+#             */
/*   Updated: 2023/12/08 11:34:15 by cadenegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"

bool	correct_arguments(char *argv)
{
	t_var	x;

	x.i = 0;
	while (argv[x.i])
	{
		if (ft_isdigit(argv[x.i]) || argv[x.i] == ' '
			|| argv[x.i] == '-' || argv[x.i] == '+')
		{
			x.i++;
			if (argv[x.i] == '-' && argv[x.i - 1] == '-')
				return (0);
			if (argv[x.i] == '+' && argv[x.i - 1] == '+')
				return (0);
			if (argv[x.i] == ' ' && argv[x.i - 1] == ' ')
				return (0);
		}
		else
			return (0);
	}
	return (1);
}

bool	parameters(t_var *x)
{
	if (!int_size(x))
		return (0);
	if (!duplicate(x))
		return (0);
	return (1);
}

bool	int_size(t_var *x)
{
	x->i = 0;
	while (x->i < x->size)
	{
		if (x-> long_array[x->i] <= 2147483647
			&& x->long_array[x->i] >= -2147483648)
			x->i++;
		else
			return (0);
	}
	return (1);
}

bool	duplicate(t_var *x)
{
	int	array_size;

	x->i = 0;
	x->j = 0;
	array_size = x->size;
	while (x->i < array_size)
	{
		x->temp = x->long_array[x->i];
		if (x->temp == x->long_array[x->j]
			&& x->i != x->j)
			return (0);
		else if (x->j == array_size - 1)
		{
			x->i++;
			x->j = 0;
		}
		else
			x->j++;
	}
	x->temp = 0;
	return (1);
}