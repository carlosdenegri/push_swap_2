/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arguments.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadenegr <neo_dgri@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:35:14 by cadenegr          #+#    #+#             */
/*   Updated: 2023/11/11 17:07:39 by cadenegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"
#include "../include/push_swap.h"

int	process_argument(int argc, char **argv, t_simple *simple)
{
	simple->j = 1;
	if (is_two_arg(argc))
	{
		if (right_arg(argv[1], argc) == false)
			return (0);
		two_arguments(argv[1], simple);
		simple->counter = 2;
	}
	if (is_more_than_two_arg(argc))
	{
		while (argc > simple->j)
		{
			more_arguments(argv[simple->j], simple);
			if (right_arg(argv[simple->j], argc) == false)
				return (0);
			simple->j++;
		}
		simple->k = argc - 1;
		simple->counter = 3;
	}
	if (right_int_size(simple) == false)
		return (0);
	if (duplicates(simple) == false)
		return (0);
	return (simple->counter);
}

void	two_arguments(char *arg, t_simple *simple)
{
	simple->i = 0;
	simple->j = 0;
	simple->k = ft_strlen(arg);
	while (simple->i < simple->k)
	{
		simple->arr_int[simple->j] = ft_atoi_static(arg, &simple->i);
		simple->j++;
	}
	simple->k = simple->j;
}

void	more_arguments(char *arg, t_simple *simple)
{
	static int	i = 0;

	simple->arr_int[i++] = ft_atoi_simple(arg);
}

// void	print(t_simple *simple)
// {
// 	if (simple->counter == 3)
// 	{
// 		simple->i = 0;
// 		while (simple->i < simple->k)
// 		{
// 			printf("%ld\n", simple->arr_int[simple->i]);
// 			simple->i++;
// 		}
// 	}
// 	if (simple->counter == 2)
// 	{
// 		simple->i = 0;
// 		while (simple->i < simple->k)
// 		{
// 			printf("%ld\n", simple->arr_int[simple->i]);
// 			simple->i++;
// 		}
// 	}
// 	else
// 		return ;
// }
