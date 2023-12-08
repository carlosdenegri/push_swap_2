/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arguments.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadenegr <neo_dgri@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 14:12:22 by cadenegr          #+#    #+#             */
/*   Updated: 2023/12/06 14:51:23 by cadenegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"

int	argument_processor(int argc, char **argv, t_var *x)
{
	if (argc < 2)
		return (0);
	if (!correct_arguments(argv[1]))
		return (0);
	if (argc == 2)
		two_arguments(argv[1], x);
	if (argc > 2)
		more_arguments(argc, argv, x);
	if (!x->array)
		return (0);
	if (!parameters(x))
		return (0);
	low_high_values(x);
	ft_qsort(x->to_sort_array, 0, x->size - 1);
	return (1);
}

void	two_arguments(char *argv, t_var *x)
{
	x->i = 0;
	x->j = 0;
	x->k = ft_strlen(argv);
	while (x->i < x->k)
	{
		x->long_array[x->j] = ft_atol_index(argv, &x->i);
		x->array[x->j] = x->long_array[x->j];
		x->to_sort_array[x->j] = x->long_array[x->j];
		x->j++;
	}
	x->size = x->j;
}

void	more_arguments(int argc, char **argv, t_var *x)
{
	int	i;

	i = 0;
	x->i = 1;
	while (argc > x->i)
	{
		if (!correct_arguments(argv[x->i]))
			return ;
		else
		{
			x->long_array[i] = ft_atol(argv[x->i]);
			x->array[i] = x->long_array[i];
			x->to_sort_array[i] = x->long_array[i];
			i++;
		}
		x->i++;
	}
	x->size = argc - 1;
}

void	low_high_values(t_var *x)
{
	int	i;
	int	array_size;

	i = 0;
	x->low = x->long_array[i];
	x->high = x->long_array[i];
	array_size = x->size;
	while (i < array_size)
	{
		if (x->low > x->long_array[i])
			x->low = x->long_array[i];
		if (x->high < x->long_array[i])
			x->high = x->long_array[i];
		i++;
	}
}