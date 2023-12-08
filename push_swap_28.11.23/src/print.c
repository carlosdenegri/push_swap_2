/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadenegr <neo_dgri@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 16:33:55 by cadenegr          #+#    #+#             */
/*   Updated: 2023/12/08 14:01:02 by cadenegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"
#include "../include/push_swap.h"

void	print(t_var *x)
{
	initialize_stack(x, 5);
	// ft_printf("high %d  low %d\n", x->high, x->low);
	ft_printf("Stack a: ");
	while (!is_empty(x, 1))
	{
		x->value = pop(x, 1);
		ft_printf("%d ", x->value);
		push(x, x->value, 5);
	}
	ft_printf ("\n");
	while (!is_empty(x, 5))
		push(x, pop(x, 5), 1);
	ft_printf("Stack b: ");
	while (!is_empty(x, 2))
	{
		x->value = pop(x, 2);
		ft_printf("%d ", x->value);
		push(x, x->value, 5);
	}
	ft_printf ("\n");
	while (!is_empty(x, 5))
		push(x, pop(x, 5), 2);
	ft_printf("Flag  a: ");
	while (!is_empty(x, 3))
	{
		x->value = pop(x, 3);
		ft_printf("%d ", x->value);
		push(x, x->value, 5);
	}
	ft_printf ("\n");
	while (!is_empty(x, 5))
		push(x, pop(x, 5), 3);
	ft_printf("Flag  b: ");
	while (!is_empty(x, 4))
	{
		x->value = pop(x, 4);
		ft_printf("%d ", x->value);
		push(x, x->value, 5);
	}
	ft_printf ("\n");
	while (!is_empty(x, 5))
		push(x, pop(x, 5), 4);
	ft_printf ("\n");
}

void	pr(t_var *x, int type)
{
	int			i;
	static int	stat = 0;
	static int	stat1 = 0;
	static int	stat2 = 0;

	if (type == 1)
		ft_printf("Check__:%d\n", ++stat);
	if (type == 2)
		ft_printf("Revisar__:%d\n", ++stat1);
	if (type == 3)
		ft_printf("Prufen__:%d\n", ++stat2);
	if (type == 7)
	{
		i = 0;
		ft_printf("Sorted array: \n");
		while (i < x->size)
		{
			ft_printf("%d ", x->to_sort_array[i]);
			i++;
		}
		ft_printf("\n Skeleton: \n");
		i = 0;
		while (i < x->num)
		{
			ft_printf("%d ", x->skeleton[i]);
			i++;
		}
	}
	if (type == 9)
	{
		stat = 0;
		stat1 = 0;
		stat2 = 0;
	}
}
