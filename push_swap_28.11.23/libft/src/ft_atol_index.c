/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadenegr <cadenegr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 21:11:32 by cadenegr          #+#    #+#             */
/*   Updated: 2023/06/27 20:24:43 by cadenegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_atol_index(const char *s, int *counter)
{
	int		i;
	int		neg;
	long	num;

	i = *counter;
	neg = 0;
	num = 0;
	while ((s[i] >= 9 && s[i] <= 13) || s[i] == 32)
		i++;
	if (s[i] == '\0')
		num = 2147483648;
	if (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
			neg++;
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		num = num * 10 + (s[i] - '0');
		i++;
	}
	if (neg == 1)
		num *= -1;
	*counter = i;
	return (num);
}

/*
#include	<stdio.h>
int	main(void)
{
	printf("%d\n", ft_atoi("\n-5123456"));
	return(0);
}*/
