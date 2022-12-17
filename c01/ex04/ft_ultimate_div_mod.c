/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wexu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 15:57:48 by wexu              #+#    #+#             */
/*   Updated: 2022/11/30 12:08:11 by wexu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	x;
	int	y;

	if (*b != 0)
	{
		x = (*a) / (*b);
		y = (*a) % (*b);
		*a = x;
		*b = y;
	}
}
/*
#include<stdio.h>
int	main(void)
{
	int	a;
	a = 10;
	int	b;
	b = 3;
	printf("a : %d, b : %d\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("a : %d, b : %d\n", a, b);
	return (0);
}
*/
