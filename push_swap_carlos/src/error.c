/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadenegr <neo_dgri@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 10:26:22 by cadenegr          #+#    #+#             */
/*   Updated: 2023/11/11 17:48:35 by cadenegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"
#include "../include/push_swap.h"

bool	right_arg(char *arg, int count)
{
	t_simple	simple;

	if (count < 2)
		return (false);
	simple.i = 0;
	while (arg[simple.i])
	{
		if (ft_isdigit(arg[simple.i]) || arg[simple.i] == ' '
			|| arg[simple.i] == '-')
			simple.i++;
		else
		{
			ft_printf("Error\n");
			return (false);
		}
	}
	return (true);
}

bool	is_two_arg(int count)
{
	if (count < 2)
		return (false);
	else if (count > 2)
		return (false);
	else
		return (true);
}

bool	is_more_than_two_arg(int count)
{
	if (count < 2)
		return (false);
	else if (count == 2)
		return (false);
	else
		return (true);
}

bool	right_int_size(t_simple *simple)
{
	simple->i = 0;
	while (simple->i < simple->k)
	{
		if (simple->arr_int[simple->i] <= INT_MAX
			&& simple->arr_int[simple->i] >= INT_MIN)
			simple->i++;
		else
		{
			ft_printf("Error\n");
			return (false);
		}
	}
	return (true);
}

bool	duplicates(t_simple *simple)
{
	int		temp;

	simple->i = 0;
	simple->j = 0;
	while (simple->i < simple->k)
	{
		temp = simple->arr_int[simple->i];
		if ((temp == simple->arr_int[simple->j]) 
			&& simple->i != simple->j)
		{
			ft_printf("Error\n");
			return (0);
		}
		else if (simple->j == simple->k - 1)
		{
			simple->i++;
			simple->j = 0;
		}
		else
			simple->j++;
	}
	return (true);
}
