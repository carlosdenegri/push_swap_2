/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   skeleton_2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadenegr <neo_dgri@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 13:30:43 by cadenegr          #+#    #+#             */
/*   Updated: 2023/12/08 13:59:50 by cadenegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"

void	save_start_point(t_var *x)
{
	int	i;

	i = 0;
	x->i = 1;
	ft_printf("HOHOHOH %d\n", x->temp);
	while (i < x->size)
	{
		if (x->temp == x->array[i])
		{
			x->skeleton[x->i++] = x->array[i];
			i++;
			break ;
		}
		i++;
	}
	ft_printf("Hiiiiiiiiii %d\n", x->i);
	save_circle(x, i, i - 1);
}

void	save_to_end(t_var *x, int start, int point)
{
	int	temp;

	temp = x->temp;
	while (start++ < x->size)
	{
		if (temp < x->array[start])
		{
			temp = x->array[start];
			x->skeleton[x->i++] = x->array[start];
		}
	}
	start = 0;
	while (start++ < point)
	{
		if (temp < x->array[start])
		{
			temp = x->array[start];
			x->skeleton[x->i++] = x->array[start];
		}
	}
}

void	save_from_start(t_var *x, int start, int point)
{
	int	temp;

	temp = x->temp;
	while (start++ < point)
	{
		if (temp < x->array[start])
		{
			temp = x->array[start];
			x->skeleton[x->i++] = x->array[start];
		}
	}
}

void	save_circle(t_var *x, int start, int point)
{
	if (start != 0)
	{
		while (start < x->size)
		{
			save_to_end(x, start, point);
			start++;
		}
	}
	else
	{
		x->i = 0;
		while (x->i < point)
		{
			save_from_start(x, x->i, point);
			x->i++;
		}
	}
}

