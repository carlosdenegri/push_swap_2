/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadenegr <neo_dgri@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 18:16:28 by cadenegr          #+#    #+#             */
/*   Updated: 2023/12/08 13:39:50 by cadenegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# define MAX_SIZE 500
# include <stdio.h>
# include <stdbool.h>
# include <stdlib.h>
# include <limits.h>

typedef struct s_variables
{
	int		i;
	int		j;
	int		k;
	int		low;
	int		high;
	int		left;
	int		right;
	int		temp;
	int		num;
	int		counter;
	int		count1;
	int		count2;
	int		size;
	int		value;
	int		subtractor;
	int		moves;
	bool	finisher;
	int		skeleton[MAX_SIZE];
	int		to_sort_array[MAX_SIZE];
	long	long_array[MAX_SIZE];
	int		array[MAX_SIZE];
	int		a_stack[MAX_SIZE];
	int		a_top;
	int		b_stack[MAX_SIZE];
	int		b_top;
	int		a_flag[MAX_SIZE];
	int		a_top_flag;
	int		b_flag[MAX_SIZE];
	int		b_top_flag;
	int		temp_stack[MAX_SIZE];
	int		top_temp;
}t_var;

void	print(t_var *x);
int		argument_processor(int argc, char **argv, t_var *x);
void	two_arguments(char *argv, t_var *x);
void	more_arguments(int argc, char **argv, t_var *x);
void	low_high_values(t_var *x);
bool	correct_arguments(char *argv);
bool	parameters(t_var *x);
bool	int_size(t_var *x);
bool	duplicate(t_var *x);
void	initialize_stack(t_var *x, int stack);
bool	is_full(t_var *x, int stack);
bool	is_empty(t_var *x, int stack);
void	push(t_var *x, int value, int stack);
int		pop(t_var *x, int stack);
void	init_argument(t_var *x);
void	build_a_stack(t_var *x);
void	mark_a_stack(t_var *x);
void	mark_b_stack(t_var *x);
void	flag_stack(t_var *x);
void	flag_b_stack(t_var *x);
void	limits(t_var *x);
void	sa(t_var *x);
void	ra(t_var *x);
void	rra(t_var *x);
void	pb(t_var *x);
void	sb(t_var *x);
void	rb(t_var *x);
void	rrb(t_var *x);
void	pa(t_var *x);
void	ss(t_var *x);
void	rr(t_var *x);
void	rrr(t_var *x);
bool	machine(t_var *x);
bool	ft0(t_var *x);
bool	ft1(t_var *x);
bool	ft2(t_var *x);
bool	ft3(t_var *x);
bool	ft6(t_var *x);
bool	ft9(t_var *x);
void	pr(t_var *x, int type);
void	begin_a_mark(t_var *x);
void	begin_b_mark(t_var *x);
bool	check_side(t_var *x, int type);
bool	ft0b(t_var *x);
bool	ft1b(t_var *x);
bool	ft2b(t_var *x);
bool	ft3b(t_var *x);
bool	finish(t_var *x);
bool	compute(t_var *x);
void	adjust(t_var *x);
void	limits_b(t_var *x);
bool	checker(t_var *x);
int		is_it_rotate(t_var *x);
int		is_it_reverse(t_var *x);
int		which_side(t_var *x);
void	push_to_b(t_var *x);
void	push_until(t_var *x);
void	last_part(t_var *x);
void	does_it_go_to_a(t_var *x);
void	start_point(t_var *x);
void	to_end(t_var *x, int start, int point);
void	circle(t_var *x, int start, int point);
void	from_start(t_var *x, int start, int point);
void	save_start_point(t_var *x);
void	save_to_end(t_var *x, int start, int point);
void	save_from_start(t_var *x, int start, int point);
void	save_circle(t_var *x, int start, int point);

#endif