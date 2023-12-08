/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   skeleton.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadenegr <neo_dgri@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 14:21:36 by cadenegr          #+#    #+#             */
/*   Updated: 2023/12/08 13:56:56 by cadenegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"

void	start_point(t_var *x)
{
	int	i;

	i = 0;
	while (i < x->size)
	{
		if (x->to_sort_array[0] == x->array[i])
		{
			x->skeleton[0] = x->array[i];
			i++;
			break ;
		}
		i++;
	}
	x->num = 0;
	// ft_printf("index_of_min_val %d\n", i);
	circle(x, i, i - 1);
	save_start_point(x);
}

void	to_end(t_var *x, int start, int point)
{
	int	count;
	int	temp;
	int	start_temp;

	count = 1;
	start_temp = x->array[start];
	temp = start_temp;
	// ft_printf("====%d\n", temp);
	while (start++ < x->size)
	{
		if (temp < x->array[start])
		{
			temp = x->array[start];
			ft_printf("+++%d\n", temp);
			count++;
		}
	}
	start = 0;
	while (start++ < point)
	{
		if (temp < x->array[start])
		{
			temp = x->array[start];
			// ft_printf("+++%d\n", temp);
			count++;
		}
	}
	if (count > x->num)
	{
		x->temp = start_temp;
		x->num = count;
	}
}

void	from_start(t_var *x, int start, int point)
{
	int	count;
	int	temp;
	int	start_temp;

	count = 1;
	start_temp = x->array[start];
	temp = start_temp;
	// ft_printf("====%d\n", temp);
	while (start++ < point)
	{
		if (temp < x->array[start])
		{
			temp = x->array[start];
			// ft_printf("+++%d\n", temp);
			count++;
		}
	}
	if (count > x->num)
	{
		x->temp = start_temp;
		x->num = count;
	}
}

void	circle(t_var *x, int start, int point)
{
	// ft_printf("====%d\n", start);
	while (start < x->size)
	{
		to_end(x, start, point);
		start++;
	}
	x->i = 0;
	// ft_printf("POINT====%d\n", point);
	while (x->i < point)
	{
		from_start(x, x->i, point);
		x->i++;
	}
}

void	make_skeleton(t_var *x)
{
	x->i = 0;
	x->j = 1;
	while (x-> i++ < x->size)
		if (x->array[x->i] == x->temp)
			break ;
	x->skeleton[x->j] = x->array[x->i];
}
