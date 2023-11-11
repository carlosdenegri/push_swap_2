/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadenegr <neo_dgri@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 18:16:28 by cadenegr          #+#    #+#             */
/*   Updated: 2023/11/11 17:53:26 by cadenegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# define MAX_SIZE 500
# include <stdio.h>
# include <stdbool.h>
# include <stdlib.h>
# include <limits.h>

typedef struct s_simple_var
{
	int		i;
	int		j;
	int		k;
	int		counter;
	char	arr_str[500];
	long	arr_int[500];
	bool	check;
}t_simple;
typedef struct s_stack
{
	int	items[MAX_SIZE];
	int	top;
}t_stack;
int		process_argument(int argc, char **argv, t_simple *simple);
void	initialize_stack(t_stack *stack, t_simple *simple);
bool	is_full(t_stack *stack);
bool	is_empty(t_stack *stack);
void	push(t_stack *stack, int value);
int		pop(t_stack *stack);
void	swap(t_stack *stack);
void	rotate_right(t_stack *stack);
void	reverse_rotate(t_stack *stack);
void	two_arguments(char *arg, t_simple *simple);
void	more_arguments(char *arg, t_simple *simple);
bool	right_int_size(t_simple *simple);
bool	right_arg(char *arg, int count);
bool	is_two_arg(int count);
bool	is_more_than_two_arg(int count);
bool	duplicates(t_simple *simple);
// void	print(t_simple *simple);

#endif 
